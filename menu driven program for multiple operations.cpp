#include <iostream>
using namespace std;
int sum(int x)
{ int x1,s=0;
  while(x!=0)
  { x1=x%10;
    s=s+x1;
    x=x/10;
  }
  return s;
}
int rev(int y)
{ int y1,r=0;
  while(y!=0)
  { y1=y%10;
    r=(r*10)+y1;
    y=y/10;
  }
  return r;
}
int number(int z)
{ int no=0;
  while(z!=0)
  { z=z/10;
    no++;
  }
  return no;
}
int main()
{ int n,menu;
  cout<<"Enter the number: ";
  cin>>n;
  while(menu!=4)
  {cout<<"Enter 1 for the sum of the digits"<<endl;
  cout<<"Enter 2 for the reverse of the number"<<endl;
  cout<<"Enter 3 for the number of digits in the number"<<endl;
  cout<<"Enter 4 for exit"<<endl;
  cin>>menu;
  if(menu==1)
  cout<<"The sum of the digits of the number is "<<sum(n)<<endl;
  if(menu==2)
  cout<<"The reverse of the number is "<<rev(n)<<endl;
  if(menu==3)
  cout<<"The number of digits in the number is "<<number(n)<<endl;
  }

  return 0;
}

