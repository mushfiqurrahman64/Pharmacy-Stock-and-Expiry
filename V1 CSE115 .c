#include <stdio.h>

int calculate_days_until_expiry(void);

double stock_value(void);

void menu_bar(void);

int main (void)
{
    int batch_code,strip;
    calculate_days_until_expiry();

    stock_value();
    


    printf("+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+\n");
    printf("|                 02. Pharmacy Stock and Expiry                 |\n");
    printf("+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+\n");

    menu_bar();

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



  return 0;
}
int calculate_days_until_expiry(void) 
{
    int crt_year, crt_month, crt_day;
    int year, month, day;

    printf("Current date (YYYY / MM /DD): ");
    scanf("%d%d%d", &crt_year, &crt_month, &crt_day);

    printf("Expiry date (YYYY / MM /DD): ");
    scanf("%d%d%d", &   year, &month, &day);

    int days_until_expiry = (year - crt_year) * 365 + (month - crt_month) * 30 + (day - crt_day);
    printf("Days until expiry: %d\n", days_until_expiry);
    return days_until_expiry;
}
double stock_value(void)
{
    int batch_code,strip;
    double strip_price;
    printf("Enter the batch code: ");
    scanf("%d", &batch_code);
    printf("Enter the number of strips: ");
    scanf("%d", &strip);
    printf("Enter the price per strip: ");
    scanf("%lf", &strip_price);

    double stock_value = strip * strip_price;

    printf("Value of stock: %.4f\n", stock_value);

    return stock_value;
}
void menu_bar(void)
{
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
}


