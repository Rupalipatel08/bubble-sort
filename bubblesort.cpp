#include <iostream>
using namespace std;

#include<iostream.h>
int main() 
{ 
int temp,i,j;
int a[5]={4,6,3,1,9};
for(i=0;i<5;i++)
{
 for(j=0;j<5;j++)
{
 if(a[j+1]<a[j])
 {temp=a[j];
 a[j]=a[j+1];
 a[j+1]=temp;}
 }
 }
  
 cout<<"sorted array is"<<"\n";
 for(i=0;i<5;i++)
 {
  cout<<a[i]<<"\n";
 }
  
    return 0;
}
