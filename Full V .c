#include <stdio.h>


//function's prototype
void menu (void);
void receive_batch(void);
void record(void);
void decide_menu(void);
void decide_expiry(void);




//global variables

int strip,crnt_year, crnt_month, crnt_day;
int expiry_year, expiry_month, expiry_day , days_until_expiry;
int exp_year , exp_month , exp_day;
int user_input;

double strip_price , total_stock_value;

char medicine_name[50] , batch_code[50];



//main function
int main(void)
{
    printf("+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+\n");
    printf("|                     Pharmacy Stock and Expiry                 |\n");
    printf("+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+\n");

   for (; ; )
    {
         if (user_input == 7)
         {
             printf("Thank Your for using it.  \n");
             break;
         }
         else
         {
             menu();
             decide_menu();
         }
    }









  return 0;
}


//function definition

void menu (void)
{
    printf("+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+\n");
    printf("|                            MENU                               |\n");
    printf("+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+\n");
    printf("   1.Receive a batch                                            \n");
    printf("   2.Sell strips                                                \n");
    printf("   3.Batches that are Expiring                                  \n");
    printf("   4.Show Record                                                \n");
    printf("   5.Value of the total stock                                   \n");
    printf("   6.Save & load                                                \n");
    printf("   7. Exit                                                       \n");
    printf("+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+\n");

    printf("Enter your choice (1-6):  ");
    scanf("%d" , &user_input);



}

void receive_batch(void)
{
     printf("Enter the batch code: ");
    scanf("%49s",batch_code);

    printf("Enter the medicine name: ");
    scanf("%49s" , medicine_name);

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
    scanf("%d",&expiry_year);
    printf("Enter Expiring month((in numeric form)): ");
    scanf("%d" , &expiry_month);
    printf("Enter Expiring Date: ");
    scanf("%d" , &expiry_day);



    total_stock_value = strip * strip_price;

    days_until_expiry = (expiry_year - crnt_year) * 365 + (expiry_month - crnt_month) * 30 + (expiry_day - crnt_day);

    exp_year = days_until_expiry/365;
    exp_month = (days_until_expiry%365)/12;
    exp_day = ((days_until_expiry%365)%12);



}

void record(void)
{
     printf("+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+\n");
    printf("|                            RECORDS                            |\n");
    printf("+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+\n");
    printf("   1.Batch code           : %s                                   \n",batch_code);
    printf("   2.Medicine name        : %s                          \n" , medicine_name);
    printf("   3.Strips in stock      : %d                                   \n",strip);
    printf("   4.Price per strip      : %.2lf                                \n",strip_price);
    printf("   5.Total value of stock : %.2lf                                \n",total_stock_value);
    printf("   6.Current date         : %d/%d/%d                             \n",crnt_year,crnt_month,crnt_day);
    printf("   7.Expiry date          : %d/%d/%d                             \n",expiry_year,expiry_month,expiry_day);
    printf("   8.Days until expiry    : %d                                   \n",days_until_expiry);
    printf("   9.Expiring in          : %d year(s) %d month(s) %d day(s)     \n", exp_year , exp_month , exp_day);
    decide_expiry();
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}

void decide_menu(void)
{
    if (user_input == 1)
    {
        receive_batch();
        record();
    }
    else if (user_input == 3)
    {
        if (days_until_expiry <= 0)
        {
            printf("The Medicine is expired. \n");
            printf("please change the stocks. \n");
        }
        else if (days_until_expiry <=30)
        {
            printf("The medicine is expiring in %d \n" , days_until_expiry);
            printf("Please clear your stock. \n");
        }
        else
        {
            printf("The medicine is in good conditions.  \n");
        }

    }
    else if (user_input == 4)
    {
        record();
    }
    else if (user_input == 5)
    {
        printf("   1. Strips in stock      : %d                                   \n",strip);
        printf("   2. Price per strip      : %.2lf                                \n",strip_price);
        printf("   3. Total value of stock : %.2lf                                \n",total_stock_value);
    }

}
void decide_expiry(void)
{
    if (days_until_expiry <= 0 )
    {
        printf("Condition: \t EXPIRED \n");
    }
    else if (days_until_expiry <= 30)
    {
        printf("Condition: \t EXPIRING IN 30 DAYS. \n ");
    }
    else
    {
        printf("Condition: \t Good  \n");
    }



}


