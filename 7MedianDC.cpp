#include <bits/stdc++.h> 
using namespace std; 
int getMedian(int ar1[], int ar2[], int n) 
{ 
	int i = 0; 
	int j = 0;
	int count; 
	int m1 = -1, m2 = -1; 
	for (count = 0; count <= n; count++) 
	{ 
		
		if (i == n) 
		{ 
			m1 = m2; 
			m2 = ar2[0]; 
			break; 
		} 

	
		else if (j == n) 
		{ 
			m1 = m2; 
			m2 = ar1[0]; 
			break; 
		} 

		if (ar1[i] < ar2[j]) 
		{ 
			
			m1 = m2; 
			m2 = ar1[i]; 
			i++; 
		} 
		else
		{ 
			
			m1 = m2; 
			m2 = ar2[j]; 
			j++; 
		} 
	} 

	return ((m1 + m2)/2); 
} 


int main() 
{ 
	int n,i,j;
	cout<<"Enter size of arrays:";
	cin>>n;
	int ar1[n],ar2[n];
	cout<<"Enter sorted 1st array:";
	for( i=0;i<n;i++){
		cin>>ar1[i];}
	cout<<"Enter sorted 2nd array:";
	for( j=0;j<n;j++){
		cin>>ar2[j];}
	cout << "Median is "<< getMedian(ar1, ar2, n) ; 

	getchar(); 
	return 0; 
} 


