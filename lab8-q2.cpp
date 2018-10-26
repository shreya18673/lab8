#include<iostream>

using namespace std;

//Write a program to find the largest, smallest, mean, median, elements with highest frequency of the elements of all elements of an array. (Use functions for each of the task in the question)




//write function to find median
int median(int size,int arr[]){
	float x;
	int i;
	if(size%2==0){
		i=(size/2)-1;
		x=(arr[i]+arr[i+1])/2;
		
		return x;
	}
	else{
		i=(size/2)-1;
		x=arr[i+1];
		return x;
	}
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
	z=median(size,arr);
	cout<<" The median is "<<z<<endl;
//print the array
	for(i=0; i<size; i++){
				cout<<arr[i]<<endl;
	}
return 0;
}

