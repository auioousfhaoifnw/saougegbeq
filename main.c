#include <stdio.h>
#include <string.h>

int main(void) {

    int height;
    int hashes;
    int whitespace;

    // prompt the user to enter height, and stores it
    printf("What's the height? ");
    scanf("%d", &height);

    // calc the pyramid
    pyramid(height, 1, height - 1);
    hashes = 1;
    whitespace = height - 1;

    return 0;
}


int pyramid(height, hashes, whitespace) {

    // height: num of lines, how tall the pyramid is, user input.
    // the bottom of the pyramid will have 'height' num of hashes.
    // hashes: num of '#'s per line, starts at 1 and increases by 1 each line.
    // starts at 1, adds 1 per \n, up until 'height'.
    // whitespace: number of ' 's before each hash.
    // starts at 'height'-1, then subtracts 1 per line.


    for (int i = 0; i < height; i++) {
        // print whitespaces
        for (int i = 0; i < whitespace; i++) {
            printf(" ");
        }
        // print hashes
        for (int i = 0; i < hashes; i++) {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
