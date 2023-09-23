#include <iostream>
using namespace std;

float comp(float a,float b,float c)
{ float r;
  if(a>b)
   {if(a>c)
     r=a;
    else
     r=c;}
  else
   {if(b>c)
     r=b;
    else
     r=c;}
 return r;
}

int main()
{ float x,y,z;
  cout<<"Enter the three numbers: ";
  cin>>x>>y>>z;
  cout<<comp(x,y,z);

  return 0;


}


