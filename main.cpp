#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

void func (int, int, int, int);
int v = 0;
int from = 1;
int to = 2;
int buf = 3;
int n = 4;
int main(int argc, char *argv[])

{


    do {
          func (from, to, buf, n);
          printf ("%d\n", n); 
          
        }    while (n != 0);
        
  
          
    system("PAUSE");
    return EXIT_SUCCESS;
}
void func (int, int, int, int)
{
    int a = from, s = to, d = buf, f = n;
    n-=1;
    from = a;
    to = buf;
    buf = to;
    printf("%d -> %d\n", from, buf);
    from = buf;
    to = s;
    buf = a;
    

    
   
}          
       
         
             
             
          
    

     


