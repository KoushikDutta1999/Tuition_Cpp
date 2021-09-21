#include<iostream>
using namespace std;

int main(){
	int n,flag=0;
	cout<<"How many number in array : "<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the arrays : "<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++){
		if(a[i]>a[i+1]){
			flag=1;
			break;
		}
	}
	if(flag==1)
	cout<<"Array is not sorted";
	else
	cout<<"Array is sorted";
	return 0;
}

