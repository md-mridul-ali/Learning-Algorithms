#include<iostream>
using namespace std;
void countSort(int array[], int n, int k)
{

    int count[k+1];
    int b[n];
    for(int i=0;i<n; i++)
    {
        count[i]=0;
    }
    for(int i=0; i<n; i++)
    {
        ++count[array[i]];
    }
    for(int i=1; i<=k; i++)
    {
        count[i]=count[i]+count[i-1];
    }
    for(int i= n-1; i>=0; i--)
    {
        b[--count[array[i]]]=array[i];
    }
    for(int i=0; i<n; i++)
    {
        array[i]=b[i];
    }
}
void showdetails(int array[],int n)
{
    cout<<"sorted array is:";
    for(int i=0; i<n; i++)
{
  cout<<array[i]<<"  ";
}

}
int main(){
int n;
cout<<"Enter number of element : ";
cin>>n;

int array[n];

for(int i=0; i<n; i++)
{
   cout<<"array["<<i<<"]=";
   cin>>array[i];

}
int max=array[0];
for(int i=1;i<n; i++)
{
    if(array[i]>max)
    {
        max=array[i];
    }
}
int k=max;
countSort(array,n,k);
showdetails(array ,n);

return 0;
}
