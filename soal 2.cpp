#include <iostream>

using namespace std;
int main()
{int N,X,T,Batas;
N = 43;
Batas = 43 + 100;
X = 20;
T = 43;
while( T <= Batas)
     { T = T + X;
       X = X + 10;
     }
 cout << T;

}
