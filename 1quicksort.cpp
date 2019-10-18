
#include <bits/stdc++.h> 
using namespace std; 

void swap(int* a, int* b) 
{ 
	int t = *a; 
	*a = *b; 
	*b = t; 
} 


int partition (int arr[], int low, int high) 
{ 
	int pivot = arr[high]; 
	int i = (low - 1); 

	for (int j = low; j <= high - 1; j++) 
	{ 
		
		if (arr[j] < pivot) 
		{ 
			i++; 
			swap(&arr[i], &arr[j]); 
		} 
	} 
	swap(&arr[i + 1], &arr[high]); 
	return (i + 1); 
} 


void quickSort(int arr[], int low, int high) 
{ 
	if (low < high) 
	{ 
		
		int pi = partition(arr, low, high); 

	 
		quickSort(arr, low, pi - 1); 
		quickSort(arr, pi + 1, high); 
	} 
} 


void printArray(int arr[], int size) 
{ 
	int i; 
	for (i = 0; i < size; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
} 

int KthSmallest(int arr[],int start,int end,int k){
	if( (start+k-1) <=end-1){
		return arr[start+k-2];
		}
	else
		return -1;

}
int main() 
{ 
	int n;
	cout<<"enter size:";
	cin>>n;
	int arr[n];
	cout<<"\nenter elements"; 
	for(int i=0;i<n;i++)
		cin>>arr[i];
	quickSort(arr, 0, n - 1); 
	cout << "Sorted array: \n"; 
	printArray(arr, n); 
	int start,end,k;
	cout<<"enter start,end and k values:";
	cin>>start>>end>>k;
	cout<<"Kth smallest element in given range :"<<KthSmallest(arr,start,end,k)<<endl;
	return 0; 
} 


