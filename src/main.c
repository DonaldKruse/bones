#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "../include/bones-common.h"




int main(int argc, char** argv)
{
    if (argc < 2) {
        printf("bones requires at least 1 argument.\n");
        print_help();
        return -1;
    }

        // parse input and check if stuff is legal
    int i;
    int n;
    unsigned num;
    die_t die;
    unsigned sum = 0;
    unsigned roll;
    for (i = 1; i < argc; i++) {
        scanf("%ud%u", &num, &die);
        printf("rolling a d%u %u times...\n", die, num);
        for (n = 0; n < num; n++) {
            roll = roll_die(die);

                // we need a function like roll_die_check_error to avoid the ugly
            if (roll == -1) {
                exit(-1);
            }
            
            sum += roll;
            printf("%u ", roll);
        }
        printf("\n");
        printf("total: %u\n", sum);
    }

    return 0;

}

    
        

    
    
