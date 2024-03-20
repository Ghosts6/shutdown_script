#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void shutdown();
void restart();

int main() {
    char choice[20]; 
    label:
    printf("Select operation type (restart/shutdown) \n"); 
    scanf("%s", choice); 
    if (strcmp(choice, "restart") == 0 || strcmp(choice, "Restart") == 0) {
        restart();
    }
    else if (strcmp(choice, "shutdown") == 0 || strcmp(choice, "Shutdown") == 0) { 
        shutdown();
    }
    else {
        printf("wrong choice please try again \n");
        goto label;
    }
    printf("End of program\n");
    return 0;
}

void shutdown(){
    #ifdef _WIN32
        system("shutdown /s");
    #elif __unix__
        system("sudo poweroff");
    #elif __linux__
        system("sudo poweroff");
    #endif
}

void restart(){
    #ifdef _WIN32
        system("shutdown /r");
    #elif __unix__
        system("sudo reboot");
    #elif __linux__
        system("sudo reboot");
    #endif
}
