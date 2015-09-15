#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a[10], i, k;
    for (i = 0; i <= 9; i++)
        a[i] = rand() % 33z;
    for (i = 0; i <= 9; i++)  {
        printf("%2d   %10d   ", i, a[i]);
        for (k = 0; k <= a[i] - 1; k++)
            printf("%c", '*');
            printf("\n");
        }
    system("PAUSE");
    return EXIT_SUCCESS;
}
