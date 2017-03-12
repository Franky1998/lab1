#include <iostream>
using namespace std;
int main()
{
 int n;
 cin >> n;
 cout << n << " ";
 do
 {
  if(n%2==1)
   {cout << 3*n+1 ;
    n = 3*n+1;}
  else
   {cout << n/2 ;
    n = n/2;}
  cout << " ";
 }
 while(n!=1);
 cout << endl ;
 return 0;
}
