
#include <stdio.h>

void printMenu();
enum Options menuChoice(enum Options option);

enum Options {
    START = 1,
    STOP,
    STATUS,
    EXIT
};

int main() {

    printMenu();

    enum Options option = STOP;

    menuChoice(option);

    return 0;
}

void printMenu() {
    printf(
        "MENU\n"
        "====\n"
        "1. START\n"
        "2. STOP\n"
        "3. STATUS\n"
        "4. EXIT\n"
    );
}

enum Options menuChoice(enum Options option) {
    switch(option) {
        case START:
            printf("Starting the program...\n");
            return START;

        case STOP:
            printf("Stopping the program...\n");
            return STOP;

        case STATUS:
            printf("Getting the status...\n");
            return STATUS;

        case EXIT:
            printf("Exitting the program...\n");
            return EXIT;

        default:
            printf("Unknown operation. Exiting the program...\n");
            break;
    }
}