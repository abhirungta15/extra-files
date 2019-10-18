  
#include<iostream>
#include<iomanip>
using namespace std;
int bs(int a[],int n,int key,bool index){
	int mid,low=0,high=n-1,result=-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(a[mid]==key){
			result=mid;
			if(index)
				high=mid-1;
			else
				low=mid+1;
		}
		else if(key<a[mid])
			high=mid-1;
		else
			low=mid+1;
	}
	return result;
}
int main(){
	int n,i,key;
	cout<<"enter array size :";
	cin>>n;
	int a[n];
	cout<<"\nenter array elements :";
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"\nenter key element :";
	cin>>key;
	int findex=bs(a,n,key,true);
	if(findex==-1)
		cout<<"-1"<<endl;
	else{
		int lindex=bs(a,n,key,false);
		cout<<findex<<" "<<lindex<<" "<<lindex-findex+1<<endl;
	}
return 0;
}
