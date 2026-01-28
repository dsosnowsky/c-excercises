#include <stdio.h>
#include <stdbool.h>

bool debug;

void checkFlag(bool debug) {
    if (debug == true) {
        printf("DEBUG MODE\n");
    }

    else {
        printf("NORMAL MODE\n");
    }
}

int main() {

    debug = true;

    checkFlag(debug);

    return 0;
}