//0dan 47gacha - 0chiqsin
// 48dan 57gacha - digit
//58dan 64gacha - 0chiqsin
// 65dan 90 gacha - harif chiqarsin lotin 
// 91dan 96 gacha - 0 chiqarsin 
// 97dan 122 gacha - harif chiqarsin lotin
// 122dan 255gacha - 0chiqarsin

#include <stdio.h>
int main()
{
    char c;
    printf("son kiriting:");
    scanf("%d", &c); 
    if(0<=c, c<=47 || 58<=c, c<=64 || 91<=c, c<=96){
        printf("%c=0", c);
    }
    else if(48<=c, c<=57){
        printf("%c=digit", c);
    }
    else if(65<=c && c<=90 || 97<=c && c<=122){
        printf("%c", c);
    }
    else if(123<=c, c<=255){
    printf("%c=0", c);
    }

        
    return 0;
}