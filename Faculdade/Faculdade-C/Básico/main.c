#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int i=0;
    int a = 0;

    while(a<101){
    printf("o valor de A eh: %d\n",a);
    a = a + 1;
    usleep(15000);
    }

    return 0;
}
