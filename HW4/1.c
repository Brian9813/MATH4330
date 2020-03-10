#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
    
    
    printf("INTS\n");
    //There are 6 int variants 
    int in = -5;
    short int si = 254;
    long int li = 99999;
    unsigned int ui = 255;
    signed int sgi = -999;
    short unsigned int sui = 3;
    printf("The Int %d is %d Bytes\n", in, sizeof(in));
    printf("The Short Int %d is %d Bytes\n", si, sizeof(si));
    printf("The long Int %d is %d Bytes\n", li, sizeof(li));
    printf("The Unsigned Int %d is %d Bytes\n", ui, sizeof(ui));
    printf("The Signed Int %d is %d Bytes\n", sgi, sizeof(sgi));
    printf("The Short Unsigned Int %d is %d Bytes\n\n", sui, sizeof(sui));
    
    
    
    printf("CHARS\n");
    //there are three char variants
    char c = 'A';
    signed char sc = 'B';
    unsigned char uc = 'C';
    printf("The char %c is %d Bytes\n", c, sizeof(c));
    printf("The signed char %c is %d Bytes\n", sc, sizeof(sc));
    printf("The unsigned char %c is %d Bytes\n\n", uc, sizeof(uc));
    
    
    printf("FLOATS\n");
    //there is 1 float variant
    float f = 8675.309;
    printf("The float %4.3f is %d Bytes\n\n", f, sizeof(f));
    
    
    
    printf("DOUBLES\n");
    //there are 2 double variants
    double d = 22.2222;
    long double ld = 44.44;
    printf("The double %2.4e is %d Bytes\n", d, sizeof(d));
    printf("The long double %2.2f is %d Bytes\n", ld, sizeof(ld));
    
    
    return 0;
}
