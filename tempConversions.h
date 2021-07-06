#include <stdio.h>

int tempConversions()
{
    while(1)
    {
        printf("\nCONVERSIONS --> Temperature Conversions :\n\n");
        printf("1.Celcius to Fahrenheit\n2.Fahrenheit to Celcius\n3.Back to main screen\n\n");
        
        int option;

        printf("Enter Your Option : ");
        scanf("%d",&option);

        float temp,res;

        switch(option)
        {
            case 1 : printf("\nCONVERSIONS --> Temperature Conversions --> Celcius to Fahrenheit\nEnter Temp in Celcius : ");
                     scanf("%f",&temp);
                     res = (temp * 9/5) + 32;
                     printf("\nTemperature in Fahrenheit : %.2f *F\n\n",res);
                     break;
            case 2 : printf("\nCONVERSIONS --> Temperature Conversions --> Fahrenheit to Celcius\nEnter Temp in Fahrenheit : ");
                     scanf("%f",&temp);
                     res = ((temp - 32)/9) * 5;
                     printf("\nTemperature in Celcius : %.2f *C\n\n",res);
                     break;                     
            case 3 : return 0;
            default : printf("\n\nEnter valid Input\n\n");
        }
    }
}