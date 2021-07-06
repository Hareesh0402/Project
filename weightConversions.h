#include <stdio.h>

int weightConversions()
{
    while(1)
    {
        printf("\nCONVERSIONS --> Weight Conversions :\n\n");
        printf("1.mg To gm     2.gm To mg\n3.gm To kg     4.kg To gm\n5.kg To pounds   6.pounds To kg\n  7.Back to main screen\n\n");
        
        int option;

        printf("Enter Your Option : ");
        scanf("%d",&option);

        float wt,res;

        switch(option)
        {
            case 1 : printf("\nCONVERSIONS --> Weight Conversions --> mg To gm\nEnter Weight in mg : ");
                     scanf("%f",&wt);
                     res = wt/1000;
                     printf("\nWeight in gm : %.2f gm\n\n",res);
                     break;
            case 2 : printf("\nCONVERSIONS --> Weight Conversions --> gm To mg\nEnter Weight in gm : ");
                     scanf("%f",&wt);
                     res = wt*1000;
                     printf("\nWeight in mg : %.2f mg\n\n",res);
                     break;
            case 3 : printf("\nCONVERSIONS --> Weight Conversions --> gm To kg\nEnter Weight in gm : ");
                     scanf("%f",&wt);
                     res = wt/1000;
                     printf("\nWeight in kg : %.2f kg\n\n",res);
                     break;
            case 4 : printf("\nCONVERSIONS --> Weight Conversions --> kg To gm\nEnter Weight in kg : ");
                     scanf("%f",&wt);
                     res = wt*1000;
                     printf("\nWeight in gm : %.2f gm\n\n",res);
                     break;
            case 5 : printf("\nCONVERSIONS --> Weight Conversions --> kg To pounds\nEnter Weight in kg : ");
                     scanf("%f",&wt);
                     res = wt*2.204;
                     printf("\nWeight in pounds : %.2f pounds\n\n",res);
                     break;
            case 6 : printf("\nCONVERSIONS --> Weight Conversions --> pounds To kg\nEnter Weight in pounds : ");
                     scanf("%f",&wt);
                     res = wt/2.204;
                     printf("\nWeight in kg : %.2f kg\n\n",res);
                     break;                     
            case 7 : return 0;
            default : printf("\n\nEnter valid Input\n\n");
        }
    }
}