#include <stdio.h>
#include <stdlib.h>

// login checker
void success_login() {
    system("clear");
    printf("Welcome to the program, boss!\n");
}

int failed_login() {
    int option;
    
    system("clear");
    printf("Want to retry?");
    printf("\nFor Yes type 1\nFor No type 0\n");
    if (scanf("%d", &option) == 0) {
        system("clear");
        printf("Not allowed\n");
        return 1; 
    }
    else{
    switch (option) {
    case 1:
       main();
    case 0:
        system("clear");
        printf("Sucessful Exit\n");
        exit(0);
    }
    }
}

void login_checker(int code) {
    if (code == 101) {
        success_login();
    } else {
        failed_login();
    }
}

int main() {
    int code;
    system("clear");
    printf("******BY SAMIP-101******\n");
    printf("Enter the code to access the program: ");
    if (scanf("%d", &code) == 0) {
        printf("Not allowed\n");
        return 1;  // indicate an error
    }
    login_checker(code);
    return 0;
}
