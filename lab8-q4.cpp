//Write a program to merge 2 arrays (just one after another into another array), find maximum of 2 arrays [maximum element of all the elements in both the arrays], find minimum of 2 arrays [similar to maximum]. (Use functions for each)

#include<iostream>
using namespace std;

//write a function merge two arrays
int merge(int arr1[],int arr2[],int size1,int size2){
	int i,j,k;
	int size3=size1+size2;
	int arr3[size3];
	for( i=0;i<size1;i++){
		arr3[i]=arr1[i];
	}
	for(int j=size1;j<size3;j++){
		arr3[j]=arr2[j-size1];
	}
//print array3
	cout<<"The 3rd array produced by merging 1st and 2nd array is ";
	for(int k=0; k<size3; k++){
				cout<<arr3[k];
	}
}

//write a function to find maximum in the two arrays 
void maximum(int arr3[],int size3){
	int i=size3-1;
	cout<<"Maximum element of the given array is "<<arr3[i]<<endl;
}

//write function to find minimum element of the given array
void minimum(int arr3[],int size3){
	
	cout<<"Minimum element of the given array is "<<arr3[0]<<endl;
}

//write main function

int main(){

	int size1,size2,size3;
	int i;
	float z;

//size of the array
	cout<<"Enter the size of 1st array"<<endl;
	cin>>size1;

	int arr1[size1];
//ask for the values of array
	for(i=0;i<size1;i++){
		cout<<"Enter the "<<i+1<<"th value for 1st array."<<endl;
		cin>>arr1[i];

	}

	
//size of the array
	cout<<"Enter the size of 2nd array"<<endl;
	cin>>size2;

	int arr2[size2];
//ask for the values of array
	for(i=0;i<size2;i++){
		cout<<"Enter the "<<i+1<<"th value for 2nd array."<<endl;
		cin>>arr2[i];
	}
//call the merge function
    merge(arr1,arr2,size1,size2);

//sort the values in ascending order
	int arr3[size3];
	for(int j=0;j<size3-1; j++){
			for(i=0;i<size3-1;i++){
				if(arr3[i]>arr3[i+1]){
					int k=arr3[i];
					arr3[i]=arr3[i+1];
					arr3[i+1]=k;
				}	
			}
	}

//call the maximum and minimum functions
	maximum(arr3,size3);
	minimum(arr3,size3);
return 0;
}
