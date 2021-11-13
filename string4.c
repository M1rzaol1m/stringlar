#include <stdio.h>
int main()
{
    int n;
    printf("son kiriting:");
    scanf("%d", &n);
    char c=64;

    for(int i=0; i<=n-1; i++){
        c++;
        printf("\n%c", c);
    }

        
    return 0;
}



