# include <iostream>
using namespace std;
int main()
{ 
 float x, y;
 void aa( float *, float *);
 cout <<"x="<< x <<endl; cin >> x;
 cout <<"y=" << y << endl;  cin >> y;
  aa ( &x, &y);
  cout << "\nNatija: \n";
 cout <<"x="<<x<<"y="<<y;
 }
void aa (float *b, float *c)
 { float e;
  e = *b; 
 *b = *c; 
 *c = e; }

