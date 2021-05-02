#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <stdint.h>
#include <time.h>

#include "../include/bones-common.h"
   


/*
 * Modified from https://stackoverflow.com/questions/822323/how-to-generate-a-random-int-in-c/39475626#39475626
 * Returns an integer in the range [0, n).
 *
 * Uses rand(), and so is affected-by/affects the same seed.
 */
unsigned rand_int(unsigned n)
{
        // init seed with current time
    srand(time(0));
    
    if ((n - 1) == RAND_MAX) 
        return rand();
    
    

        // Supporting larger values for n would requires an even more
        // elaborate implementation that combines multiple calls to rand()
    assert (n <= RAND_MAX);
    
        
            // Chop off all of the values that would cause skew...
    unsigned end = RAND_MAX / n; // truncate skew
    assert (end > 0);
    end *= n;
    
        // ... and ignore results from rand() that fall above that limit.
        // (Worst case the loop condition should succeed 50% of the time,
        // so we can expect to bail out of this loop pretty quickly.)
    unsigned r;
    while ((r = rand()) >= end);

    return r % n;
  }
}

unsigned roll_die(die_t d)
{
    unsigned roll;
    switch (d) {
        case 2:
        case 4:
        case 6:
        case 8:
        case 10:
        case 12:
        case 20:
            roll = rand_int(d) + 1;
            return roll;
        default:
            print_help();
            return -1;
    }
}



void print_help()
{
    printf("%s", help_strinng);
}

