#include<iostream>
using namespace std;


int add(int arr[],int size){
	int sum = 0;
	for(int i=0;i<5;i++){
		
		sum=sum+arr[i];
	}
//Return the sum
	return sum;
}
float mean(int arr[],int size){
	int x= add(arr,size);
	float z=x/2.0;
	return z;
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
	mean(arr,size);
	cout<<"The mean of the elements present in array is "<<mean(arr,size)<<endl;
return 0;
}

