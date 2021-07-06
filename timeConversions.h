#include <stdio.h>

int timeCoversions()
{
    while(1)
    {
        printf("\nCONVERSIONS --> Time Conversions :\n\n");
        printf("1.sec To min     2.min To sec\n3.min To hr     4.hr To min\n  5.Back to main screen\n\n");
        
        int option;

        printf("Enter Your Option : ");
        scanf("%d",&option);

        float time,res;
        int rem;

        switch(option)
        {
            case 1 : printf("\nCONVERSIONS --> Time Conversions --> sec To min\nEnter Time in sec : ");
                     scanf("%f",&time);
                     rem = (int)(time)%10;
                     res = time/60;

                     if(rem != 0)
                        printf("\nTime in min : %d min %d sec\n\n",(int)(res),rem);
                     else
                        printf("\nTime in min : %d min\n\n",(int)(res));
                     break;
            case 2 : printf("\nCONVERSIONS --> Time Conversions --> min To sec\nEnter Time in min : ");
                     scanf("%f",&time);
                     res = time*60;
                     printf("\nTime in sec : %d sec\n\n",(int)(res));
                     break;
            case 3 : printf("\nCONVERSIONS --> Time Conversions --> min To hr\nEnter Time in min : ");
                     scanf("%f",&time);
                     rem = (int)(time)%10;
                     res = time/60;

                     if(rem != 0)
                        printf("\nTime in hr : %d hr %d min\n\n",(int)(res),rem);
                     else
                        printf("\nTime in hr : %d hr\n\n",(int)(res));
                     break;
            case 4 : printf("\nCONVERSIONS --> Time Conversions --> hr To min\nEnter Time in hr : ");
                     scanf("%f",&time);
                     res = time*60;
                     printf("\nTime in min : %d min\n\n",(int)(res));
                     break;                     
            case 5 : return 0;
            default : printf("\n\nEnter valid Input\n\n");
        }
    }
}