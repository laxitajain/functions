#include <iostream>
using namespace std;
void search1(int arr[],int n,int key)
{ int i,j=0;
  for(i=0;i<n;i++)
   {if (arr[i]==key)
    {j=1; break;}
   else continue;}
   if(j==1)
   cout<<"The element is present in the array!";
   else
   cout<<"The element is not present in the array.";
}
int main()
{ int lnj[20],x,k,t;
  cout<<"Enter the number of elements you wish to enter: ";
  cin>>x;
  cout<<"Enter the elements: ";
  for(t=0;t<x;t++)
    cin>>lnj[t];
  cout<<"Enter the element you wish to run the search for: ";
  cin>>k;
  search1(lnj,x,k);
  return 0;
}
