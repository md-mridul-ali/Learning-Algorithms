#include<iostream>
using namespace std;
int partition(int array[],int lb,int ub)
{
int n;
int pivot=array[lb];
int start=lb;
int end=ub;
while(start<end)
{
    while(array[start]<=pivot)
    {
        start++;
    }
    while(array[end]>pivot)
    {
        end--;
    }
    if(start<end)
    {
        swap(array[start],array[end]);
    }
    swap(array[lb],array[end]);

}

return end;

}
void QuickSort(int array[],int lb, int ub)
{int n;
    if(lb<ub)
    {
        int loc=partition(array,lb,ub);
        QuickSort(array,lb,loc-1);
        QuickSort(array,loc+1,ub);
    }
}
int main()
{
int n,lb,ub;
cout<<"Enter the number of elements:";
cin>>n;

int array[n];
cout<<"Enter the elements of array:"<<"\n";
for(int i=0; i<n; i++)
{
    cout<<"array["<<i<<"]=";
    cin>>array[i];
}

QuickSort(array,0,n-1);
cout<<"Sorted array is: ";
for(int i=0; i<n; i++)
     {
        cout<<array[i]<<"   ";
     }



return 0;
}
