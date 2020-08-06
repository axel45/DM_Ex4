#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define HEADS 0
#define TAILS 1

int main(void) {
    srand((unsigned int)time(NULL));
 
    int headsCount = 0;
    int tailsCount = 0;
    
    for(int i = 1; i <= 3; i++) {
        printf("Round %d: ", i);

        int num = rand() % 2;
        
        switch(num) {
            case HEADS:
                printf("Heads\n");
                headsCount++;
                break;
            case TAILS:
                printf("Tails\n");
                tailsCount++;
                break;
        }
    }

    printf("Heads: %d, Tails: %d\n", headsCount, tailsCount);
    
    return 0;
}
