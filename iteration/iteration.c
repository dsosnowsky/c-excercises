#include <stdio.h>

int tries = 0;

int main(){

    do
    {
        printf("Próba nr. %d\n", tries);
        tries++;
    } while (tries < 3);
    

    return 0;
}