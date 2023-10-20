#include <stdio.h>
#include <string.h>
#include <ctype.h>  

void toLowerCase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower((unsigned char)str[i]);
    }
}

int main() {

    char register_username[100], register_password[100];
    char login_username[100], login_password[100];

    printf("Register\n");
    printf("Enter a username: ");
    scanf("%s", register_username);
    printf("Enter a password: ");
    scanf("%s", register_password);

    toLowerCase(register_username);
    toLowerCase(login_username);    

    printf("Login\n");
    printf("Enter your username: ");
    scanf("%s", login_username);
    printf("Enter your password: ");
    scanf("%s", login_password);

    toLowerCase(login_username);
    toLowerCase(login_password);


    if (strcmp(register_username, login_username) == 0 && strcmp(register_password, login_password) == 0) {
        printf("Login successful\n");
    } else {
        printf("Something went wrong\n");
    }

    return 0;
}

