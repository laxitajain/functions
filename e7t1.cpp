#include <iostream>
using namespace std;
void leap(int x)
{ int i,j=0;
  if(x%100==0)
    {if(x%400==0)
     j=1;}
  else if(x%4==0)
    j=1;
  if(j==1)
    cout<<"It's a leap year!";
  else
    cout<<"It's not a leap year.";

}

int main()
{ int y;
  cout<<"Enter the year: ";
  cin>>y;
  leap(y);

  return 0;
}
