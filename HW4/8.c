#include <stdio.h>
#include <math.h>

double f(double x)
{
    //The formula I used was cosx +2 /3 because when i looked up the formula thats what they used
    //you should be able to put whatever equation you want 
    return (cos(x) + 2) / 3;
}


int main(int argc, char **argv)
{
    //vars
    double allX[100];
    double x;
    
    int i = 0;
    int maxiterations = 50;
    
    
    printf("This will approximate the equation (cos(x) + 2) / 3, can change on line 8\n");
    printf("All of the others i tried lead to infinity\n");
    printf("\nEnter starting number :\n");
    scanf("%lf",&allX[i]);
    
    
    printf("\nAll estimatimations\n");
    
    do
    {
        
        allX[i + 1] = f(allX[i]);
        x = allX[i + 1] - allX[i];
        
        
        //get the abs value
        x = fabs(x);
        
        //print this guess 
        printf("%d: %4.6e\n", i+1, allX[i]);
        
        //increment i
        i++;

    } while(x > 0.00001 && i < maxiterations);
    
    //end result
    printf("\nFinal aproximation is  %4.6e\n", allX[i]);
    return 0;
}


