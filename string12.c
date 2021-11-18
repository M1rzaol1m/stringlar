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

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main(){
//      printf("\n");
//     char satr[100];

//     printf("Satrni kiriting: ");
//     fgets(satr, 100, stdin);

//     int satr_olchami = strlen(satr), N;

//     printf("Satr o'lchami: %d\nN=", satr_olchami);
//     scanf("%d", &N);

//     for(int i=0; i<satr_olchami-1; i++){
//         printf("%c", satr[i]);
//         for(int j=0; j<N; j++){
//             printf(" ");
//         }
//     }

//     printf("\n");


//     return 0;
// }