#include <cstdlib>
#include <iostream>
#include <stdio.h>
using namespace std;
int stepen(int, int);
int c = 2;
int d = 10;
int sum = c;
int main(int argc, char *argv[])
{
    printf("%d\n",stepen(c, d));
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
int stepen (int a, int b)
{
    int a1, a2, b1, b2;
    a1 = c;
    sum = sum * c;
    d -= 1;
    if (d > 1)
       printf("%d\n", sum),
       stepen(c, d);
    if (d == 1)
       return sum;   
       
     
    
}
