#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter the numbers of element:";
cin>>n;

int array[n];
cout<<"Enter the array elements:"<<"\n";
for(int i=0; i<n; i++)
     {
        cout<<"array["<<i<<"]=";
        cin>>array[i];
     }

cout<<"\nArray elements are: ";
for(int i=0; i<n; i++)
     {
        cout<<array[i]<<"   ";
     }
int data;
cout<<"\n\nWhich element you want to search:";
cin>>data;
int found = 0;
 for(int i=0; i<n; i++)
         {
            if(array[i] == data)
                {
                   cout<<"Data found at index:"<<i<<"\n";
                   found = 1;
                   break;
                }

         }
         if(found == 0)
             {
                 cout<<"Data not found";
             }

return 0;
}
