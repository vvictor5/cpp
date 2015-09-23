#include <cstdlib>
#include <iostream>
#define SIZE 10

using namespace std;
//void swap(int *, int *);
//int del(int, int);
int main(int argc, char *argv[])
{
    struct part {
           int *partNumber;
           char *partName;
    };
    typedef struct part Part;
    Part a;
    Part b[10];
    Part *ptr;
    ptr = b;
    printf("Number:\n");
    scanf("%d", &a.partNumber);
    printf("Name:\n");
    scanf("%s", &a.partName);
    printf("Number:\n%d\n", a.partNumber);
    printf("Name:\n%c\n\n", a.partName);
    b[2] = a;
    printf("%d%c\n\n", a);
    printf("%c%d\n", ptr -> partName, ptr -> partNumber);
    
    
    
    
    
    //6.8
    /*int t[9], a[3], b[6], i, k, c;
    for (i = 0; i <= 2; i++)
        a[i] = rand(),
        printf ("a  "),
        printf ("%d   %d\n", i, a[i]);
        printf ("\n\n");
    for (i = 0; i <= 5; i++)
        b[i] = rand(),
        printf ("b  "),
        printf ("%d   %d\n", i, b[i]);
        
    for (i = 0; i <= 2; i++)
        t[i] = a[i];
    for (i = 0; i <= 5; i++)
        t[i+3] = b[i];
        printf ("\n\n");
        
    for (i = 0; i <= 8; i++)
        printf ("t  "),
        printf ("%d   %d\n", i, t[i]);  */
        
        /*#######*/
        

    //6.11
    /*int aba[SIZE] = {4, 6, 2, 8, 10, 12, 14, 16, 18, 20};
    int i, pass, hold, d;
    int change = 0;
    int check = 1;
        
    for (pass = 1; pass <= SIZE - 1; pass++)  //PROHOD
    {
        change = 0;
        if (check == 1)   {
                  
           
           
        
           for (i = 0; i <= SIZE - pass; i++)   {
               if (aba[i] > aba[i + 1])   {
                  hold = aba[i];
                  aba[i] = aba[i + 1];
                  aba[i + 1] = hold;
                  change = 1;
               }
               if (change == 1)
                  check = 1;
               else  {
                   check = 0;
               } 
           }
           if (check == 1)
              printf("Prohod %d\n", pass);
        }
    }
               
    for (i = 0; i <= SIZE - 1; i++)
        printf("%4d\n", aba[i]);*/
/*    int i, a[] = {1, 2, 3, 4, 5};     
    int n = 22;
    int b = 13;
    printf("%d\n", del(n, b));*/
        
           
    system("PAUSE");
    return EXIT_SUCCESS;
}
/*void swap(int *da1, int *da2)
{
     int temp;
     temp = *da1;
     *da1 = *da2;
     *da2 = temp;
}
int del(int x, int y)
{
    return x/y;
}*/
 
