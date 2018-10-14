//1. Write a program to find sum of all elements of an array. (Use functions)

#include <iostream>
using namespace std;

//Write a function to calculate the sum of all numbers in the array
int add(int arr[]){
	int sum = 0;
	for(int i=0;i<5;i++){
		
		sum=sum+arr[i];
	}
//Return the sum
	return sum;
}
		
//Write the main function
int main(){
  int a,i;
//declare the array and assign values
	int arr[5]={56,2,3,4,5};
//Call the function
	add(arr);
//Print the sum of al elements of the array
	cout<<add(arr)<<endl;
//Return
return 0;
}
