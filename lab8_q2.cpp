#include<iostream>
using namespace std;
 int large(int *a,int size)
{int k=a[0];
for(int i=0;i<size;i++)
{if(a[i]>k)
{k=a[i];}} 
return k;
}

 int small(int *a,int size)
{int k=a[0];
for(int i=0;i<size;i++)
{if(a[i]<k)
{k=a[i];}} 
return k;
}
float mean(int *a,int size)
{int sum=0;
for(int i=0;i<size;i++)
{sum=sum+a[i];}
return sum/size;}


 float median(int *a,int size)
{for(int i=0;i<size;i++){
for(int j=i+1;j<size;j++){
int temp;
if(a[i]>a[j]){
temp=a[i];
a[i]=a[j];
a[j]=temp;
}}}
if(size%2==0)
{return (a[size/2]+a[size/2+1])*.5;}
else 
return a[size/2];
}

int highest(int *a,int size)
{
    int i,j;
    int popular = a[0];
    int temp=0, tempCount, count=1;
    for (i=0;i<5;i++)
    {
        tempCount = 0;
        temp=a[i];
        tempCount++;
        for(j=i+1;j<5;j++)
        {
            if(a[j] == temp)
            {
                tempCount++;
                if(tempCount > count)
                {
                    popular = temp;
                    count = tempCount;
                }}}}
    return popular;
}

int main(){
int a[20];
int size;
cout<<"enter the size"<<endl;
cin>>size;
cout<<"enter the elements"<<endl;
for(int i=0;i<size;i++)
{cin>>a[i];}
cout<<"largest element of array="<<large(a,size)<<endl;
cout<<"smallest element of array="<<small(a,size)<<endl;
cout<<"mean="<<mean(a,size)<<endl;
cout<<"median="<<median(a,size)<<endl;
cout<<"element with highest frequency="<<highest(a,size)<<endl;
return 2342;
}


