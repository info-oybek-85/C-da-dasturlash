# include <iostream>
# include <math.h>
using namespace std;
typedef float mm[4];
void vec(mm a, mm b, float* s)
{*s=0; 
  for (int i=0; i<4; i++)
  *s=*s+a[i]*b[i];   }
int  main ( )
{float fi, f1, f2, f3; int i;
mm  x, y; // mm x={1,2,3,4}, y={5,6,7,8};
for (i=0; i<4; i++)
cin >>x[i] >> y[i];
vec (x, y, &f1); vec (x, x, &f2); vec (y,y,&f3);
fi = f1 / sqrt( f2*f3); fi = atan(sqrt (1-fi*fi) / fi);
cout << "fi= "<<fi*180/3.1415<<endl;  // natija gradusda chiqadi
}

