#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main() {
    int stage = 0;  

    while (1) {
        system("cls");  

  
        printf("\033[33m\033[40m               0       0\033[0m\n");
        printf("\033[40m\033[34m               |\033[0m");
        printf("\033[40m\033[32m                      |\033[0m\n");

        
        if (stage == 0) {
            printf("\033[47m     |          Happy           |\033[0m\n");  
        }
        else if (stage == 1) {
            printf("\033[47m     |        Birthday         |\033[0m\n");  
        }

      
        printf("\033[47m     -------------------------------\033[0m\n");
        printf("\033[47m  ----------------------------------------\033[0m\n");

        
        if (stage == 1) {
            printf("\033[47m  |        Birthday        |\033[0m\n");
        }

        printf("\n\nPress 'H' to show message!\n");

        if (_kbhit()) { 
            char ch = _getch();  
            if (ch == 'H' || ch == 'h') {
                stage++;  
                if (stage > 1) {
                    stage = 0; 
                }
            }
        }  
    }

    return 0;
}