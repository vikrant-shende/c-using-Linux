#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand(time(0));  // Use current time as seed

    // Generate a random number
    int randomNumber = rand();

    printf("Random Number: %d\n", randomNumber);

    return 0;
}
