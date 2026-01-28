#include <stdio.h>

void welcome(char name[20]) {
    printf("Hello, %s\n", name);
}

int main() {

    char name[20] = "Daniel";
    welcome(name);

    return 0;
}