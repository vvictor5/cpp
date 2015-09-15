#include <cstdlib>
#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[])
{
    int a, b;
    a = rand();
    printf("U menya est chislo 1-1000\n");
    printf("Ugadaew?\n");
    printf("Pechatau\n");   
    while (b != a)       
       {
             scanf("%d", &b); 
             if (b > a)
                printf("Mnogo\n");
             else if ( a > b)
                printf("Malo\n");
             else
                 printf("da\n");
             
       }  
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
