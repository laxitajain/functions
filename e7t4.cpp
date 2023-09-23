#include <iostream>
using namespace std;

int fact(int x)
{ int i,f=1;
  if(x!=1 && x!=0)
  {for(i=1;i<=x;i++)
    {f=f*i;}
   }
  return f;
}
int main()
{ int n;
  cout<<"Enter the number: ";
  cin>>n;
  if(n<0)
    cout<<"Factorial can't be calculated!";
  else
  cout<<"The factorial of the entered number is: "<<fact(n);
  return 0;
}
