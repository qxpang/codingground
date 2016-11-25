#include <iostream>

using namespace std;
int quick_pow(int a,int b)
{
      int ans=0;
      while(b)
     {
            if(b&1) ans+=a;
           b>>=1;
           a+=a;
     }
   return ans;
}

double quick_pow2(int a,int b)
{
       double ans=1;
       double aa = a;
      while(b)
     {
           if(b&1)  ans*=aa;
           b>>=1;
          aa*=aa;
     }
     return ans;
}
int main()
{
   cout << "Hello World" << endl; 
 int result = quick_pow(2,4) ;
 cout << result <<endl;
 double result2 = quick_pow2(2,100) ;
  cout << result2 <<endl;
   return 0;
}

