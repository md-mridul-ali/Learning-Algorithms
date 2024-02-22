#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter number of array elements:";
cin>>n;

int array[n];
cout<<"Enter array elements : "<<"\n";
for(int i=0; i<n; i++)
{
   cout<<"array["<<i<<"]=";
   cin>>array[i];
}
cout<<"\nArray elements are : ";
for(int i=0; i<n; i++)
{
  cout<<array[i]<<"  ";
}
int first=0;
int last=n-1;
int mid=(first+last)/2;
int x;
cout<<"\nWhich element you want to insert:";
cin>>x;

n++;
for(int i=n-1; i>=mid; i--)
{
    array[i]=array[i-1];
}
array[mid-1]=x;
cout<<"\nNew array is:";
for(int i=0; i<n; i++)
{
   cout<<array[i]<<"  ";
}

return 0;
}
