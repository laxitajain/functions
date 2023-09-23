#include <iostream>
using namespace std;
int exp(int x, int y)
{ int i,e=1;
  for(i=1;i<=y;i++)
  { e=e*x;
  }
  return e;

}
int main()
{ int a,b;
  cout<<"Enter the base(x) and the exponent(y): ";
  cin>>a>>b;
  cout<<exp(a,b);

  return 0;

}
