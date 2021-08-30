#include<iostream>
using namespace std;

int main(){
	int n,i;
	int a[n];
	cout<<"How many array elements: ";
	cin>>n;
	cout<<"Enter array: ";
	for(i=0;i<n;i++){
	cin>>a[i];	
	}
	for(i=0;i<n-1;i++){
		if(a[i]>=a[i+1]){
			cout<<"Array is not strictly increasing.";
			return 0;
		}
	}
	cout<<"Array is increasing.";
			return 0;
}
