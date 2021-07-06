#include <stdio.h>
#include "lengthConversions.h"
#include "weightConversions.h"
#include "timeConversions.h"
#include "tempConversions.h"

int main()
{
    while(1)
    {
        printf("\n******CONVERSIONS*****\n");
        printf("\n1.Length Conversions");
        printf("\n2.Weight Conversions");
        printf("\n3.Time Conversions");
        printf("\n4.Temperature Conversions");
        printf("\n5.Exit\n");

        int option1;

        printf("\nEnter an Option : ");
        scanf("%d",&option1);

        int out;

        switch(option1)
        {
            case 1: out = lengthConversions();
                    break;
            case 2: out = weightConversions();
                    break;
            case 3: out = timeCoversions();
                    break;
            case 4: out = tempConversions();
                    break;
            case 5: return 0;

            default : printf("Enter a valid Input");
        }
    }
}