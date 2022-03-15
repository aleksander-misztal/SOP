#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "functions.c"
#include "test.h"
int main() {
    srand(time(NULL));
    printMenu();
    int menuPick;
    scanf("%d",&menuPick);
    switch (menuPick) {
        case 1:
            userInputOption();
            break;
        case 2:
            randomOption();
            break;
        default:
            return 0;
    }

    return 0;
}