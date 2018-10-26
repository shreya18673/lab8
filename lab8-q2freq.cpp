//Write a program to find the largest, smallest, mean, median, elements with highest frequency of the elements of all elements of an array. (Use functions for each of the task in the question)

//library
#include<iostream>
using namespace std;

//write function to find out the element with highest frequency 
int freq(int size,int arr[]){

//initialisation of sum
	int sum=1;
	int i;
//write loop to add know the frequency of an element
		for( i=0;i<size;i++){
			if(arr[i]==arr[i+1]){
					 sum=sum+1;
					
			}
			else{
//print all the frequencies of all the elements
				cout<<"The frequency of "<<arr[i]<<" is "<<sum<<endl;
//initialise the value of sum before calculating the frequencies of other elements
				sum=1;
			}
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

//print array
cout<<"********"<<endl;
for(i=0; i<size; i++){
				cout<<arr[i]<<endl;
}
//call function
cout<<"********"<<endl;
freq(size,arr);

//return
return 0;
}
