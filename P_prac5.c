#include <stdio.h>
    int main()
        {
            int n;
            long result=1;
            printf("Enter a number to calculate its factorial: ");
            scanf("%d", &n);
            if (n < 0) 
                {
                    printf("Factorial is not defined for negative numbers.\n");
                } 
            else 
                {
                      
                      for (int i = 1; i <= n; i++) 
                      result = result *i;
                }
            printf("Factorial of %d is %ld\n", n, result);
        }
