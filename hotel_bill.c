#include <stdio.h>
int ORDER_NO;
int ORDER_ID;
int TABLE_NO;
int CASHIER_ID;
int GUEST;
char CASHIER_NAME[40];
char DATE[40];
char TIME[40];

int IDLY_COUNT;
int DOSA_COUNT;
int PONGAL_COUNT;
int POORI_COUNT;
int AAPAM_COUNT;

int Ex_IDLY_COUNT=0;
int Ex_DOSA_COUNT=0;
int Ex_PONGAL_COUNT=0;
int Ex_POORI_COUNT=0;
int Ex_AAPAM_COUNT=0;

int IDLY_PRICE=10;
int DOSA_PRICE=20;
int PONGAL_PRICE=30;
int POORI_PRICE=25;
int AAPAM_PRICE=15;

int EXTRA_ORDER;
int TOTAL_QUANTZ;
int TOTAL_AMT;


void billinput()
{
    // Getting Input for the order number
    printf("Enter your Order Number:    ");
    scanf("%d",&ORDER_NO);
    fgetc(stdin);
    //End

    // Getting Input for the order ID
    printf("\n");
    printf("Enter your Order ID:    ");
    scanf("%d",&ORDER_ID);
    fgetc(stdin);

    //End

    // Getting Input for the Table No
    printf("\n");
    printf("Enter your Table No:    ");
    scanf("%d",&TABLE_NO);
    fgetc(stdin);

    //End

    // Getting Input for the Cashier ID
    printf("\n");
    printf("Enter Cashier ID:    ");
    scanf("%d",&CASHIER_ID);
    fgetc(stdin);

    //End

    // Getting Input for the Number of Guests
     printf("\n");
    printf("Enter the Number of Guest Present:    ");
    scanf("%d",&GUEST);
    fgetc(stdin);

    //End

    // Getting Input for the Cashier Name
    printf("\n");
    printf("Enter Cashier Name:    ");
    scanf("%[^\n]s",CASHIER_NAME);
    fgetc(stdin);

    //End

    // Getting Input for the DATE
    printf("\n");
    printf("Enter the Date:    ");
    scanf("%[^\n]s",DATE);
    fgetc(stdin);

    //End

    // Getting Input for the TIME
    printf("\n");
    printf("Enter the Time:    ");
    scanf("%[^\n]s",TIME);
    fgetc(stdin);
    printf("\n");
    //End
}

void upperprint()
{
    printf("\n");
    printf("\n");

    printf("\t\t\t\t\t Tiffin Center \t\t\t\t\t");
    printf("\n");
    printf("\n");

    printf("\t  No 98, K.S.S Street, Kelambakkam, Chengalpet District, Pin: 603103, Contact : 8765489542 \t ");
    printf("\n");
    printf("\n");

    printf("\t\t\t\t      *** Bill No - %d ***        \t\t\t\t",ORDER_NO);
    printf("\n");
    printf("\n");
    printf("\n");

    printf("\t  Order ID: %d   \t",ORDER_ID);

    printf("\t\t\t    Table No: %d   \t",TABLE_NO);
    printf("\n");

    printf("\t  Cashier ID: %d   \t",CASHIER_ID);

    printf("\t\t\t    Guests: %d   \t",GUEST);
    printf("\n");

    printf("\t  Cashier Name: %s   \t",CASHIER_NAME);
    printf("\n");

    printf("\t  Date: %s  \t",DATE);

    printf("\t\t\t   Time: %s  \t",TIME);
    printf("\n");
}

void input()
{
    printf("Enter your breakfast Order");
    printf("\n");
    printf("Enter your idly count:  ");
    scanf("%d",&IDLY_COUNT);
    fgetc(stdin);

    printf("Enter your Dosa count:  ");
    scanf("%d",&DOSA_COUNT);
    fgetc(stdin);

    printf("Enter your Pongal count:  ");
    scanf("%d",&PONGAL_COUNT);
    fgetc(stdin);

    printf("Enter your Poori count:  ");
    scanf("%d",&POORI_COUNT);
    fgetc(stdin);

    printf("Enter your Aapam count:  ");
    scanf("%d",&AAPAM_COUNT);
    fgetc(stdin);
    printf("\n");

}


void print()
{
    IDLY_COUNT=IDLY_COUNT+Ex_IDLY_COUNT;
    DOSA_COUNT=DOSA_COUNT+Ex_DOSA_COUNT;
    PONGAL_COUNT=PONGAL_COUNT+Ex_PONGAL_COUNT;
    POORI_COUNT=POORI_COUNT+Ex_POORI_COUNT;
    AAPAM_COUNT=AAPAM_COUNT+Ex_AAPAM_COUNT;
    if(IDLY_COUNT>0)
    {
        printf("\t  Idly  \t");
        printf("\t\t %d \t\t",IDLY_PRICE);
        printf("\t %d    \t",IDLY_COUNT);
        printf("\t\t  %d  \t",IDLY_PRICE * IDLY_COUNT);
        printf("\n");
    }
    if(DOSA_COUNT>0)
    {
        printf("\t  Dosa  \t");
        printf("\t\t %d \t\t",DOSA_PRICE);
        printf("\t %d    \t",DOSA_COUNT);
        printf("\t\t  %d  \t",DOSA_PRICE * DOSA_COUNT);
        printf("\n");
    }
    if(PONGAL_COUNT>0)
    {
        printf("\t  Pongal  \t");
        printf("\t\t %d \t\t",PONGAL_PRICE);
        printf("\t %d    \t",PONGAL_COUNT);
        printf("\t\t  %d  \t",PONGAL_PRICE * PONGAL_COUNT);
        printf("\n");
    }
    if(POORI_COUNT>0)
    {
        printf("\t  Aapam  \t");
        printf("\t\t %d \t\t",POORI_PRICE);
        printf("\t %d    \t",POORI_COUNT);
        printf("\t\t  %d  \t",POORI_PRICE * POORI_COUNT);
        printf("\n");
    }
    if(AAPAM_COUNT>0)
    {
        printf("\t  Aapam  \t");
        printf("\t\t %d \t\t",AAPAM_PRICE);
        printf("\t %d    \t",AAPAM_COUNT);
        printf("\t\t  %d  \t",AAPAM_PRICE * AAPAM_COUNT);
        printf("\n");
    }
    TOTAL_QUANTZ=IDLY_COUNT+DOSA_COUNT+PONGAL_COUNT+POORI_COUNT+AAPAM_COUNT;
    TOTAL_AMT = IDLY_PRICE * IDLY_COUNT + DOSA_PRICE * DOSA_COUNT + PONGAL_PRICE * PONGAL_COUNT + POORI_PRICE * POORI_COUNT + AAPAM_PRICE * AAPAM_COUNT;
}

void printoverall()
{
    billinput();
    input();
    printf("\t  --------------------------------------------------------------------------------------- \t");
    printf("\n");
    printf("\t  Item Name   \t");
    printf("\t\t Price \t\t");
    printf("\t Quantity    \t");
    printf("\t  Amount  \t");
    printf("\n");
    printf("\t  --------------------------------------------------------------------------------------- \t");
    printf("\n");
    print();
    printf("\t  --------------------------------------------------------------------------------------- \t");
    printf("\n");
    printf("\t\t\t\t\t\t\t\t  Total Amount      = ");
    printf("\t  %d",TOTAL_AMT);
    printf("\n");
    printf("\t\t\t\t\t\t\t\t  Total Quantity    = ");
    printf("\t  %d",TOTAL_QUANTZ);
}

void printoverallwithoutextraorder()
{
    upperprint();
    printf("\t  --------------------------------------------------------------------------------------- \t");
    printf("\n");
    printf("\t  Item Name   \t");
    printf("\t\t Price \t\t");
    printf("\t Quantity    \t");
    printf("\t  Amount  \t");
    printf("\n");
    printf("\t  --------------------------------------------------------------------------------------- \t");
    printf("\n");
    print();
    printf("\t  --------------------------------------------------------------------------------------- \t");
    printf("\n");
    printf("\t\t\t\t\t\t\t\t  Total Amount      = ");
    printf("\t  %d",TOTAL_AMT);
    printf("\n");
    printf("\t\t\t\t\t\t\t\t  Total Quantity    = ");
    printf("\t  %d",TOTAL_QUANTZ);
    printf("\n");
    printf("\t\t\t\t Thank you for your patronage ! \t\t\t\t ");
    printf("\n");
    printf("\t\t\t\t We look forward to your next indulgence \t\t\t\t");
}
void extraorder()
{
    printf("\n");
    printf("Do you want to add some more order?");
    printf("\n");
    printf("1.Yes");
    printf("\n");
    printf("2.No");
    printf("\n");
    printf("Enter your Extra Order choice : ");
    scanf("%d",&EXTRA_ORDER);
    fgetc(stdin);
    printf("\n");
}
void inputextraorder()
{
    printf("Enter your breakfast Order");
    printf("\n");
    printf("Enter your idly count:  ");
    scanf("%d",&Ex_IDLY_COUNT);
    fgetc(stdin);

    printf("Enter your Dosa count:  ");
    scanf("%d",&Ex_DOSA_COUNT);
    fgetc(stdin);

    printf("Enter your Pongal count:  ");
    scanf("%d",&Ex_PONGAL_COUNT);
    fgetc(stdin);

    printf("Enter your Poori count:  ");
    scanf("%d",&Ex_POORI_COUNT);
    fgetc(stdin);

    printf("Enter your Aapam count:  ");
    scanf("%d",&Ex_AAPAM_COUNT);
    fgetc(stdin);
    printf("\n");

}
void printoverallwithextraorder()
{
    inputextraorder();
    upperprint();
    printf("\t  --------------------------------------------------------------------------------------- \t");
    printf("\n");
    printf("\t  Item Name   \t");
    printf("\t\t Price \t\t");
    printf("\t Quantity    \t");
    printf("\t  Amount  \t");
    printf("\n");
    printf("\t  --------------------------------------------------------------------------------------- \t");
    printf("\n");
    print();
    printf("\t  --------------------------------------------------------------------------------------- \t");
    printf("\n");
    printf("\t\t\t\t\t\t\t\t  Total Amount      = ");
    printf("\t  %d",TOTAL_AMT);
    printf("\n");
    printf("\t\t\t\t\t\t\t\t  Total Quantity    = ");
    printf("\t  %d",TOTAL_QUANTZ);
    printf("\n");
    printf("\t\t\t\t Thank you for your patronage ! \t\t\t\t ");
    printf("\n");
    printf("\t\t\t\t We look forward to your next indulgence \t\t\t\t");
}

int main()
{
    printoverall();
    extraorder();
    if(EXTRA_ORDER==1)
    {
        printoverallwithextraorder();
    }
    else
    {
        printoverallwithoutextraorder();
    }



    return 0;
}

/*
Sample Output : 1

Enter your Order Number:    20

Enter your Order ID:    45

Enter your Table No:    06

Enter Cashier ID:    90

Enter the Number of Guest Present:    5

Enter Cashier Name:    John Cena

Enter the Date:    08-10-2022

Enter the Time:    07:45 AM

Enter your breakfast Order
Enter your idly count:  3
Enter your Dosa count:  2
Enter your Pongal count:  2
Enter your Poori count:  4
Enter your Aapam count:  8

          --------------------------------------------------------------------------------------- 
          Item Name                      Price                   Quantity                 Amount  
          --------------------------------------------------------------------------------------- 
          Idly                           10                      3                        30  
          Dosa                           20                      2                        40  
          Pongal                         30                      2                        60  
          Aapam                          25                      4                        100  
          Aapam                          15                      8                        120  
          --------------------------------------------------------------------------------------- 
                                                                  Total Amount      =     350
                                                                  Total Quantity    =     19
Do you want to add some more order?
1.Yes
2.No
Enter your Extra Order choice : 1

Enter your breakfast Order
Enter your idly count:  6
Enter your Dosa count:  1
Enter your Pongal count:  1
Enter your Poori count:  3
Enter your Aapam count:  3



                                         Tiffin Center 

          No 98, K.S.S Street, Kelambakkam, Chengalpet District, Pin: 603103, Contact : 8765489542       

                                      *** Bill No - 20 ***        


          Order ID: 45                                      Table No: 6   
          Cashier ID: 90                                    Guests: 5   
          Cashier Name: John Cena   
          Date: 08-10-2022                                 Time: 07:45 AM  
          --------------------------------------------------------------------------------------- 
          Item Name                      Price                   Quantity                 Amount  
          --------------------------------------------------------------------------------------- 
          Idly                           10                      9                        90  
          Dosa                           20                      3                        60  
          Pongal                         30                      3                        90  
          Aapam                          25                      7                        175  
          Aapam                          15                      11                       165  
          --------------------------------------------------------------------------------------- 
                                                                  Total Amount      =     580
                                                                  Total Quantity    =     33
                                 Thank you for your patronage !                                  
                                 We look forward to your next indulgence
                                 
                                 
Sample Output : 2

Enter your Order Number:    26

Enter your Order ID:    12

Enter your Table No:    02

Enter Cashier ID:    46

Enter the Number of Guest Present:    4

Enter Cashier Name:    David Warner

Enter the Date:    08-10-2022

Enter the Time:    07:20 AM

Enter your breakfast Order
Enter your idly count:  4
Enter your Dosa count:  2
Enter your Pongal count:  5
Enter your Poori count:  3
Enter your Aapam count:  7

          --------------------------------------------------------------------------------------- 
          Item Name                      Price                   Quantity                 Amount  
          --------------------------------------------------------------------------------------- 
          Idly                           10                      4                        40  
          Dosa                           20                      2                        40  
          Pongal                         30                      5                        150  
          Aapam                          25                      3                        75  
          Aapam                          15                      7                        105  
          --------------------------------------------------------------------------------------- 
                                                                  Total Amount      =     410
                                                                  Total Quantity    =     21
Do you want to add some more order?
1.Yes
2.No
Enter your Extra Order choice : 2



                                         Tiffin Center 

          No 98, K.S.S Street, Kelambakkam, Chengalpet District, Pin: 603103, Contact : 8765489542       

                                      *** Bill No - 26 ***        


          Order ID: 12                                      Table No: 2   
          Cashier ID: 46                                    Guests: 4   
          Cashier Name: David Warner   
          Date: 08-10-2022                                 Time: 07:20 AM  
          --------------------------------------------------------------------------------------- 
          Item Name                      Price                   Quantity                 Amount  
          --------------------------------------------------------------------------------------- 
          Idly                           10                      4                        40  
          Dosa                           20                      2                        40  
          Pongal                         30                      5                        150  
          Aapam                          25                      3                        75  
          Aapam                          15                      7                        105  
          --------------------------------------------------------------------------------------- 
                                                                  Total Amount      =     410
                                                                  Total Quantity    =     21
                                 Thank you for your patronage !                                  
                                 We look forward to your next indulgence 

*/
