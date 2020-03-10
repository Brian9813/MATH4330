#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
    //vars
    double length;
    double height;
    
    //prompt the user for the values 
    
    printf("Enter length :: ");
    scanf("%lf", &length);

    
    printf("Enter height :: ");
    scanf("%lf", &height);
    
    //print
    printf("%4.4e\n", length*height*0.5);
    return 0;
}
