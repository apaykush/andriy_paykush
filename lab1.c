 #include <stdio.h>
 #include <math.h>
 
    int main()

    {
    float a,b,result; 
    
    printf ("enter a\n");
    scanf ("%f", &a);
    
    printf ("enter b\n");
    scanf ("%f", &b);
    
    result=(pow(a-b,4)-(pow(a,4)-4*pow(a,3)*b+6*a*a*b*b))/(pow(a,4)-4*a*pow(b,3));
   
    printf("%f\n",result);
    
    return 0;
    
    
    }
