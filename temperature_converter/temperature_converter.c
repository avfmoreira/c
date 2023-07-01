#include <stdio.h>

void main(){

    int type_conversion;
    float fahrenheit, celsius;
    
    //in C string are arrays, keep that in mind. 
    char option_one[]   = "1 - Fahrenheit to celsius";
    char option_two[]   = "2 - Celsius to Fahrenheit";
    char option_three[] = "3 - Exit"; 

    printf("\n");
    printf("This program convert temperature scales\n");
    
    int run = 1;
    while(run == 1){  
        printf("\n"); 
        printf("To continue type:\n");
        printf("%s\n", option_one);
        printf("%s\n", option_two);
        printf("%s\n", option_three);
        printf("\n");

        //The user choose F to C or C to F picking up a number
        //that will be storage in memory address indicated by the pointer 
        scanf("%d", &type_conversion);

        switch (type_conversion)
        {
        case 1:
            printf("You choose: %s\n", option_one);
            printf("Input the temperature in Fahrenheit scale:\n");

            //get the faharenheit value
            scanf("%f", &fahrenheit);
            
            //convert F to C
            celsius = (fahrenheit-32) * 5/9;

            printf("%.2fF is equal to %.2fC:\n", fahrenheit, celsius);
            break;
        
        case 2:
            printf("You choose: %s\n", option_two);
            printf("Input the temperature in Celsius scale:\n");
            
            //get the Celsius value
            scanf("%f", &celsius);

            //convert C to F
            fahrenheit = (celsius*2) + 30;

            printf("%.2fC is equal to %.2fF:\n", celsius, fahrenheit);
            break;
        case 3:
            printf("You choose: %s\n", option_three);
            run = 0;
            break;

        default:
            printf("Invalid option\n");
            break;

        }
    }
}