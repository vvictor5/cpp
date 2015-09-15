#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

int gcd (int, int);
int main(int argc, char *argv[])
{
    int x, y;
    printf("Vvedite 2 chisla\n");
    scanf("%d%d", &x, &y);
    printf("%d\n", gcd(x, y));
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
int gcd (int z, int c)
{
    int d = z;
    if (c % d == 0)
       return d;
    do {
        d--;
        }
    while (!(z % d == 0) || !(c % d == 0));   
        
    return d;
        
}
