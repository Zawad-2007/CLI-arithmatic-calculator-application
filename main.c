#include<stdio.h>
#include<stdlib.h>
#include"arithmatics.h"

int main(int argc, char* argv[])
{
    if(argc!=4)
    {
        printf("Invalid command line arguments\nUsage : ./calculator [operand] [operator sign] [operand]\n");
        return 1;
    }
    else
    {
        float a = atof(argv[1]);
        float b = atof(argv[3]);

        if(argv[2][0] == '+')
            printf("%f + %f = %.4f\n", a, b, add(a, b));
        else if (argv[2][0] == '-')
            printf("%f - %f = %.4f\n", a, b , subtract(a, b));
        else if (argv[2][0] == '*')
            printf("%f * %f = %.4f\n", a, b, multiply(a, b));
        else if (argv[2][0] == '/')
            printf("%f / %f = %.4f\n", a, b,  divide(a, b));
    }
}