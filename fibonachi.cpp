#include <cstdlib>
#include <iostream>

using namespace std;
int a1 = 0;
int a2 = 1;

int z1 = 0;
int z2 = 0;

int fib(int);
int main(int argc, char *argv[])
{
    
    int n = 20;
    int i = 1;
    printf("%d\n", 0);
    for (i = 1; i <= n; i++)
    
    printf("%d\n", fib(a1));
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
int fib(int)
{  

    int a = a2 + a1;
    int sum, z1, z2;
    z1 = a1;
    z2 = a2;
    a1 = z2;
    a2 += z1;
    return a1;
    fib(a1);

                               
}
//changed
