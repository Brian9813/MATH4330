#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
    int US = 1;
    int EU = 2;
    int UK = 3;
    
    int area = 3;
    
    if (area == US)
    {
        printf("The Currency is the dollar\n");
    }
    else
    {
        if(area == EU)
        {
            printf("The Currency is the euro\n");
        }
        else
        {
            printf("The Currency is the pound\n");
        }
    }
    
    printf("If you put something that isn't c code, or a comment, you get an error.\n");
    
    
    return 0;
}
