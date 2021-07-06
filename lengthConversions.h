#include <stdio.h>

int lengthConversions()
{
    while(1)
    {
        printf("\nCONVERSIONS --> Length Conversions :\n\n");
        printf("1.cm To m     2.m To cm\n3.m To km     4.km To m\n5.m To feet   6.feet To m\n  7.Back to main screen\n\n");
        
        int option;

        printf("Enter Your Option : ");
        scanf("%d",&option);

        float len,res;

        switch(option)
        {
            case 1 : printf("\nCONVERSIONS --> Length Conversions --> cm To m\nEnter Length in cm : ");
                     scanf("%f",&len);
                     res = len/100;
                     printf("\nLength in m : %.2f m\n\n",res);
                     break;
            case 2 : printf("\nCONVERSIONS --> Length Conversions --> m To cm\nEnter Length in m : ");
                     scanf("%f",&len);
                     res = len*100;
                     printf("\nLength in cm : %.2f cm\n\n",res);
                     break;
            case 3 : printf("\nCONVERSIONS --> Length Conversions --> m To km\nEnter Length in m : ");
                     scanf("%f",&len);
                     res = len/1000;
                     printf("\nLength in km : %.2f km\n\n",res);
                     break;
            case 4 : printf("\nCONVERSIONS --> Length Conversions --> km To m\nEnter Length in km : ");
                     scanf("%f",&len);
                     res = len*1000;
                     printf("\nLength in m : %.2f m\n\n",res);
                     break;
            case 5 : printf("\nCONVERSIONS --> Length Conversions --> m To feet\nEnter Length in m : ");
                     scanf("%f",&len);
                     res = len*3.28;
                     printf("\nLength in feet : %.2f feet\n\n",res);
                     break;
            case 6 : printf("\nCONVERSIONS --> Length Conversions --> feet To m\nEnter Length in feet : ");
                     scanf("%f",&len);
                     res = len/3.28;
                     printf("\nLength in m : %.2f m\n\n",res);
                     break;                     
            case 7 : return 0;
            default : printf("\n\nEnter valid Input\n\n");
        }
    }
}