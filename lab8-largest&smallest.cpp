#include<iostream>
using namespace std;

//write function to find largest element
void largest(int arr[],int size){
	int i=size-1;
	cout<<"Largest element of the given array is "<<arr[i]<<endl;
}

//write function to find smallest element of the given array
void smallest(int arr[],int size){
	
	cout<<"Smallest element of the given array is "<<arr[0]<<endl;
}

//write main function
int main(){

	int size;
	int i;
	float z;

//size of the array
	cout<<"Enter the size of array"<<endl;
	cin>>size;

	int arr[size];
//ask for the values of array
	for(i=0;i<size;i++){
		cout<<"Enter the "<<i+1<<"th value"<<endl;
		cin>>arr[i];

	}
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
//call the function
	largest(arr,size);
	smallest(arr,size);
return 0;
}
