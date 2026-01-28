#include <stdio.h>

void printMenu();
int menuChoice(int choice);

int main() {

    enum Options {
        START = 1,
        STOP,
        STATUS,
        EXIT
    };

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

int menuChoice(enum Options option) {
    switch(option) {
        case START:
            printf("Starting the program...\n");
            return START;
            break;

        case STOP:
            printf("Stopping the program...\n");
            return STOP;
            break;

        case STATUS:
            printf("Getting the status...\n");
            return STATUS;
            break;

        case EXIT:
            printf("Exitting the program...\n");
            return EXIT;
            break;

        default:
            printf("Unknown operation. Exiting the program...\n");
            return 1;
            break;
    }
}