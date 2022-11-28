#include <stdio.h>

int main(void)
{
    double hours, parts, jobCharge;
    printf("Hours  worked ? ");
    scanf("%lf", &hours);
    printf("Cost of parts? ");
    scanf("%lf", &parts);
    jobCharge = hours * 100 + parts;
    if ( jobCharge < 150) 
    {
        jobCharge = 150;
    }
    printf("The Job Charge: % 3.2f \n", jobCharge);






}