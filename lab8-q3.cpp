//Write a program for kth largest, kth smallest element of an array. (Use functions : e.g. klarge (int array[], int size, int k), similarly for smallest)

#include<iostream>
using namespace std;

//write function to find kth smallest element of an array
void ksmall(int arr[], int size, int k){
	int i=k-1;
	cout<<"The "<<k<<"th smallest element is "<<arr[i]<<endl;
}

//write function to find kth largest element of an array
void klarge(int arr[], int size, int k){
	int i=size-k;
	cout<<"The "<<k<<"th largest element is "<<arr[i]<<endl;
}

//write main function
int main(){

	int size;
	int i,k;
	

//size of the array
	cout<<"Enter the size of array"<<endl;
	cin>>size;

	int arr[size];
//ask for the values of array
	cout<<"DISCAIMER:: Please do not repeat the numbers entered!"<<endl;
	for(i=0;i<size;i++){
		cout<<"Enter the "<<i+1<<"th value"<<endl;
		cin>>arr[i];

	}
//Ask for the value of k
	cout<<"Enter the value of k."<<endl;
	cin>>k;
//sort the elements in ascending order
	for(int j=0;j<size-1; j++){
		for(i=0;i<size-1;i++){
			if(arr[i]>arr[i+1]){
				int k=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=k;
			}	
		}
	}

//print array
	cout<<"********"<<endl;
	for(i=0; i<size; i++){
					cout<<arr[i]<<endl;
	}
//call the ksmall
	cout<<"********"<<endl;
	ksmall(arr,size,k);
//call the klarge
	cout<<"********"<<endl;
	klarge(arr,size,k);
return 0;
}
