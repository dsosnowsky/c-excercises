#include <stdio.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

typedef struct {
    char username[32];
    int uid;
    Date date;
} Account;

typedef struct {
    char name[32];
    char surname[32];
    Account account;
} User;

void printUserdata(User user){
    printf(
        "User: %s %s\n"
        "Username: %s\n" 
        "UID: %d\n" 
        "Created: %d-%d-%d\n",
        user.name, user.surname,
        user.account.username,
        user.account.uid,
        user.account.date.day, user.account.date.month, user.account.date.year
    );
}

int main() {

    User jsilverhand = {
        .name = "Johnny",
        .surname = "Silverhand",
        .account = {
            .username = "jsilverhand",
            .uid = 1001,
            .date = {
                .day = 01,
                .month = 01,
                .year = 1991
            }
        }
    };

    printUserdata(jsilverhand);

    return 0;
}