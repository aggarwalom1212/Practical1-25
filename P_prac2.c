#include <stdio.h>
    float cel_to_far(float celc)
        {
	     return (celc * (9.0/5) + 32);
        }
    float far_to_cel(float far)
        {
	     return ((far-32)*(5.0/9));
        }
    int main()
        {
	     float c;
             float f;
	     printf("Enter temperature in celcius: ");
             scanf("%f", &c);
             printf("in farenhiet = %f",cel_to_far(c));
             printf("\nEnter temperature in farenhiet: ");
             scanf("%f", &f);
             printf("in celcius = %f",far_to_cel(f));
	     return 0;
        }
