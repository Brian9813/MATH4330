#include <stdio.h>
#include <math.h>

#define US 1
#define EU 2
#define UK 3
#define AREA 2

#if AREA == US //if area is 1

#define OUT "dollar"

#elif AREA == EU //if area is 2

#define OUT "euro"

#else //if area is 3

#define OUT "pound"

#endif



int main(int argc, char **argv)
{
    char* ot = OUT;
    printf("The currency is the %s\n", ot);
    printf("When i tred putting anything that wasnt a define statement or a comment it would give an error\n");
    return 0;
}
