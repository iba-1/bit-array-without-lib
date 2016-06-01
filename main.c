//
// Created by Dario on 14/03/16.
//
//FIND A WAY TO IMPLEMENT EXERCISE NO.1

#include <stdio.h>
#define SIZE 6

int visit_bit(int*, int);
void print_array(int*);

int main()
{
    int X1[SIZE] = {234823, 2342, 29291, 57343, 34873, 128111};
    int X2[SIZE] = {3483, 2384723, 344322, 49343, 348733, 1231153};

    printf("\nFirst array X1:\n");
    print_array(X1);

    printf("\nSecond array X2:\n");
    print_array(X2);

    int differen[SIZE] = {0};

    for(int i = 0; i < SIZE; i++)
    {
        differen[i] = X1[i] & ~X2[i];
    }

    printf("\nDifference group is:\n");
    print_array(differen);

    int interse[SIZE] = {0};

    for(int i = 0; i < SIZE; i++)
    {
        interse[i] = X1[i] & X2[i];
    }

    printf("\nIntersection group is:\n");
    print_array(interse);

    int uni[SIZE] = {0};

    for(int i = 0; i < SIZE; i++)
    {
        uni[i] = X1[i] | X2[i];
    }

    printf("\nUnion group is:\n");
    print_array(uni);
}

int visit_bit(int bitArray[SIZE], int k)
{
    return 1 & (bitArray[k/32] >> (k%32));
}

void print_array(int *bitArray)
{
    for(int i = 0; i < SIZE * 32; i++)
    {
        printf("%d ", visit_bit(bitArray, i));
    }
    printf("\n\n");
}




