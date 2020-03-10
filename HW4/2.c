#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
    // vars
    int b = 2;
    int c = 2;
    int a = b + c;   
    
    
    
    printf("No parantheses\n");
   
    //1 np
    printf("a = b + c == %d\n", a);
    
    //2 np
    printf("a + b - c == %d\n", a + b - c);
    
    //3 np
    printf("a + b * c == %d\n", a + b * c);
    
    //4 np
    printf("a + b * a < b == %d\n", a + b * a < b);
    
    //5 np
    printf("a + b && a < b == %d\n", a + b && a < b);
    
    //6 np
    printf("a + c != b || a > b == %d\n", a + c != b || a > b);
    
    
    
    
    
    printf("\nparantheses\n");
    
    //1 p
    printf("a = (b + c) == %d\n", a);
    //2 p
    printf("(a + b) - c == %d\n", (a + b) - c);
    //3 p
    printf("a + (b * c) == %d\n", a + (b * c));
    
    //adding outer layer of parantheses for the expression
    
    //4 p
    printf("((a + (b * a)) < b) == %d\n", ((a + (b * a)) < b));
    //5 p
    printf("((a + b) && (a < b)) == %d\n", ((a + b) && (a < b)));
    //6 p
    printf("(((a + c) != b) || (a > b)) == %d\n", (((a + c) != b) || (a > b)));
    

    return 0;
}
