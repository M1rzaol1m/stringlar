#include <stdio.h>
#include <stdio.h>
int main()
{
    int n;
    printf("belgi kiriting:");
    scanf("%d", &n);
    char c;
    if(n>32 && n<126){

        printf ("%c", n);
    }
    return 0;
}