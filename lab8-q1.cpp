//Write a program to find sum of all elements of an array. (Use functions)

#include<iostream>
using namespace std;

//write function to find the sum of all elements of an array
int add(int arr[],int size){
	int sum = 0;
	for(int i=0;i<5;i++){
		
		sum=sum+arr[i];
	}
//Return the sum
	return sum;
}
//write main function
int main(){
  
int size;
	int i;
	
//size of the array
	cout<<"Enter the size of array"<<endl;
	cin>>size;

	int arr[size];
//ask for the values of array
	for(i=0;i<size;i++){
		cout<<"Enter the "<<i+1<<"th value"<<endl;
		cin>>arr[i];

	}
//call the function
	add(arr,size);
	cout<<add(arr,size)<<endl;
return 0;
}

