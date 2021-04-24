#ifndef BONES_COMMON_H
#define BONES_COMMON_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <stdint.h>
#include <time.h>

const char* help_string =
    "Bones is a dice rolling application."
    "Syntax:"
    ""
    "    bones [ndr [n2dr2 ...]]"
    ""
    "where n, n2,...,nk is a positve integer and d,d2,...,dk is the dice."
    "The dice value can only be 2, 4, 6,8, 10, 12, or 20.";


typedef unsigned die_t;



const die_t d2 = 2;
const die_t d4 = 4;
const die_t d6 = 6;
const die_t d8 = 8;
const die_t d10 = 10;
const die_t d12 = 12;
const die_t d20 = 20;



typedef struct dice_
{
    die_t;
    unsigned num_die;
} dice;

     


    
    



/*
 * Modified from https://stackoverflow.com/questions/822323/how-to-generate-a-random-int-in-c/39475626#39475626
 * Returns an integer in the range [0, n).
 *
 * Uses rand(), and so is affected-by/affects the same seed.
 */
unsigned rand_int(unsigned n);


unsigned roll_die(unsigned d);


void print_help();


#endif
