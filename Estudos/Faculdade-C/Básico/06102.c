#include <stdio.h>

int main(){

    int a, b, c;
    int m1, m2, m3;

    scanf("%d %d %d", &a, &b, &c);

    if(a > b && a > c){m1 = a;}
    else if(b > a && b > c){m1 = a;}
    else if(c > b && c > a){m1 = a;}

    if(a < b && a < c){m3 = a;}
    else if(b < a && b < c){m3 = b;}
    else if(c < b && c < a){m3 = c;}

    if(a < m1 && a > m3){m2 = a;}
    else if(b < m1 && b > m3){m2 = b;}
    else if(c < m1 && b > m3){m2 = c;}

    printf("%d\n", m1);
    printf("%d\n", m2);
    printf("%d\n", m3);




}
