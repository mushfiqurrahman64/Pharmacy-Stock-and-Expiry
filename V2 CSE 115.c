#include <stdio.h>
int main(void)
{

    int strip,exp_year,exp_month,exp_day;

    int crnt_year, crnt_month, crnt_day;
    char med_name[20] , batch_code[20];
    double strip_price;

    printf("Enter the batch code: ");
    scanf("%19s", batch_code);

    printf("Enter the Medicine name : ");
    scanf("%19s" , med_name);

    printf("Enter the number of strips: ");
    scanf("%d", &strip);

    printf("Enter the price per strip: ");
    scanf("%lf", &strip_price);

    printf("Enter Current year: ");
    scanf("%d",&crnt_year);
    printf("Enter Current month((in numeric form)): ");
    scanf("%d" , &crnt_month);
    printf("Enter Current Date: ");
    scanf("%d" , &crnt_day);


    printf("Enter Expiring year: ");
    scanf("%d",&exp_year);
    printf("Enter Expiring month((in numeric form)): ");
    scanf("%d" , &exp_month);
    printf("Enter Expiring Date: ");
    scanf("%d" , &exp_day);


    double total_stock_value = strip * strip_price;

    int days_until_expiry_leap_year = (exp_year - crnt_year) * 365 + (exp_month - crnt_month) * 30 + (exp_day - crnt_day)+1;

    int days_until_expiry_regular = (exp_year - crnt_year) * 365 + (exp_month - crnt_month) * 30 + (exp_day - crnt_day);
    int years_left , months_left , days_left ;


    printf("+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+\n");
    printf("|                 02. Pharmacy Stock and Expiry                 |\n");
    printf("+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+\n");

    printf("+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+\n");
    printf("|                            MENU                               |\n");
    printf("+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+\n");
    printf("|   1.Receive a batch                                           |\n");
    printf("|   2.Sell strips                                               |\n");
    printf("|   3.Batches that are Expiring                                 |\n");
    printf("|   4.Strips that are below reorder level                       |\n");
    printf("|   5.Value of the total stock                                  |\n");
    printf("|   6.Save & load                                               |\n");
    printf("+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+\n");

    printf("+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+\n");
    printf("|                            RECORDS                            |\n");
    printf("+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+\n");
    printf("   1.Batch code           : %s                                   \n",batch_code);
    printf("   2.Medicine name        : %s                          \n" , med_name);
    printf("   3.Strips in stock      : %d                                   \n",strip);
    printf("   4.Price per strip      : %.2lf                                \n",strip_price);
    printf("   5.Total value of stock : %.2lf                                \n",total_stock_value);
    printf("   6.Current date         : %d/%d/%d                             \n",crnt_year,crnt_month,crnt_day);
    printf("   7.Expiry date          : %d/%d/%d                             \n",exp_year,exp_month,exp_day);

    //Leap Year

if ((exp_year % 4 == 0 && exp_year % 100 != 0) || (exp_year % 400 == 0)) {
    printf("   8.Days until expiry    : %d                                   \n",days_until_expiry_leap_year);
    years_left = days_until_expiry_leap_year/366;
    months_left = (days_until_expiry_leap_year%366)/30;
    days_left = ((days_until_expiry_leap_year%366)%30);
    printf("   9.Expiring in \t  : %d years %d months %d days \n" , years_left , months_left , days_left);
    }

    //Regular
    else
    {
    printf("   8.Days until expiry    : %d                                   \n",days_until_expiry_regular);
    years_left = days_until_expiry_regular/365;
    months_left = (days_until_expiry_regular%365)/30;
    days_left = ((days_until_expiry_regular%365)%30);
    printf("   9.Expiring in \t  : %d years %d months %d days \n" , years_left , months_left , days_left);
    }
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");




    return 0;
}

