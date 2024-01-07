#include <stdio.h>
    float cel_to_far(float celc)
        {
	          return (celc * (9/5) + 32);
        }
    float far_to_cel(float far)
        {
	          return ((far-32)*(5/9));
        }
    void main()
        {
	          float celc;
		  float far;
	          printf("Enter temperature in celcius: ");
	          scanf("%f",celc);
	          printf("entered temperaturein farenhiet: %f",cel_to_far(celc))
	          printf('Enter temperature in farenhiet: ');
	          scanf("%f",far);
	          printf("entered temperaturein farenhiet: %f",far_to_cel(far))
        }
