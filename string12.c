#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    printf("\n");
    char ism[100];

    printf("ismingizni kiriting : ");
    fgets(ism, 100, stdin);

    int ism_olchami = strlen(ism)-1;
    printf("ism o'lchami: %d", ism_olchami);

    int n;
    printf("\nn=");
    scanf("%d", &n);

    for (int i=0; i<ism_olchami; i++){
        printf("%c", ism[i]);
        for (int j=0; j<n; j++){
            printf("*");
        }
    }

    printf("\n");

    return 0;
}