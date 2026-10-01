#include <stdio.h>

int main(void) {

    int height;
    int row;
    int hashes;
    int spaces;

    // prompt the user to enter height
    printf("What's the height? ");
    scanf("%d", &height);

    // determine which row of the pyramid to print on
    for (row = 0; row < height; row++) {
        // print spaces
        for (spaces = 0; spaces < height - row - 1; spaces++) {
            printf(" ");
        }
        // print hashes
        for (hashes = 0; hashes <= row; hashes++) {
            printf("#");
        }
        // print new line each loop
        printf("\n");
    }
    return 0;
}
