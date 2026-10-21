#include <stdio.h>


void menu (void);
void decide (void);



int batch_code,strip,crnt_year, crnt_month, crnt_day;

int expiry_year, expiry_month, expiry_day , days_until_expiry;

double strip_price , total_stock_value;


int main(void)
{



    printf("Enter the batch code: ");
    scanf("%d", &batch_code);

    printf("Enter the number of strips: ");
    scanf("%d", &strip);

    printf("Enter the price per strip: ");
    scanf("%lf", &strip_price);

    printf("Current date (YYYY / MM /DD): ");
    scanf("%d%d%d", &crnt_year, &crnt_month, &crnt_day);

    printf("Expiry date (YYYY / MM /DD): ");
    scanf("%d%d%d", &expiry_year, &expiry_month, &expiry_day);

    total_stock_value = strip * strip_price;

    days_until_expiry = (expiry_year - crnt_year) * 365 + (expiry_month - crnt_month) * 30 + (expiry_day - crnt_day);


    menu();
    decide();







  return 0;
}


void menu(void)
{
    printf("+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+\n");
    printf("|                 02. Pharmacy Stock and Expiry                 |\n");
    printf("+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+\n");

    printf("+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+\n");
    printf("|                            MENU                               |\n");
    printf("+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+\n");
    printf("   1.Receive a batch                                            \n");
    printf("   2.Sell strips                                                \n");
    printf("   3.Batches that are Expiring                                  \n");
    printf("   4.Strips that are below reorder level                        \n");
    printf("   5.Value of the total stock                                   \n");
    printf("   6.Save & load                                                \n");
    printf("+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+\n");

    printf("+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+\n");
    printf("|                            RECORDS                            |\n");
    printf("+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+\n");
    printf("   1.Batch code           : %d                                   \n",batch_code);
    printf("   2.Medicine name        : Paracetamol                          \n");
    printf("   3.Strips in stock      : %d                                   \n",strip);
    printf("   4.Price per strip      : %.2lf                                \n",strip_price);
    printf("   5.Total value of stock : %.2lf                                \n",total_stock_value);
    printf("   6.Current date         : %d/%d/%d                             \n",crnt_year,crnt_month,crnt_day);
    printf("   7.Expiry date          : %d/%d/%d                             \n",expiry_year,expiry_month,expiry_day);
    printf("   8.Days until expiry    : %d                                   \n",days_until_expiry);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}
void decide(void)
{
    if (days_until_expiry <= 0 )
    {
        printf("Condition: \t EXPIRED");
    }
    else if (days_until_expiry <= 30)
    {
        printf("Condition: \t EXPIRING IN 30 DAYS. \n ");
    }
    else
    {
        printf("Condition: \t Good");
    }



}
