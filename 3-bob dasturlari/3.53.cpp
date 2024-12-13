#include <iostream>
using namespace std;
int main()
{
int M, N, i,A;
int pInt[100];
A = new pInt[M];// Koʻrsatgichlar massivini ajratish
for ( i = 0; i < M; i ++ )
A[i] = new int[N];// Massivning har- bir satr uchun
for ( i = 0; i < M; i ++ )
delete A[i];// Har – bir satr oʻchiriladi
delete A; // Massiv oʻchiriladi
}

