#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar() {

    // Generate a number between 0 and 26 by using the remainder
    int randomNum = rand() % 26; 
    // Convert to the random letter by adding "A" to our randomNum
    char randomLetter = randomNum + 'A';

    return randomLetter;
}   