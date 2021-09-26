#include <stdio.h>
struct hotel
{
    char name[15];
    int price;
    int quantity;
};
void printBill(struct hotel *b, int n)
{
    int i;
    printf("\n\n***********************************************");
    printf("\nYOUR BILL IS BEING CALCULATED :");
    printf("\n***********************************************\n");
    for (i = 0; i < n; i++)
    {
        printf("%s-----------%d * %d = %d\n", (b + i)->name, (b + i)->price, (b + i)->quantity, ((b + i)->price) * ((b + i)->quantity));
    }
}
int main()
{
    int i, n = 2;
    printf("Enter the number of food items you ordered : ");
    scanf("%d", &n);
    struct hotel bill[n];
    printf("\nEnter the NAME and PRICE of the Food Items ");
    printf("\n***********************************************");

    //Storing data
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the NAME of the food item %d: ", i + 1);
        scanf("%s", &bill[i].name);
        printf("Enter the QUANTITY of the %s: ", bill[i].name);
        scanf("%d", &bill[i].quantity);
        printf("Enter the PRICE of the %s: ", bill[i].name);
        scanf("%d", &bill[i].price);
    }
    //callcalting total price
    int totprice = 0;
    for (i = 0; i < n; i++)
    {
        totprice += (bill[i].price * bill[i].quantity);
    }
    printBill(&bill[0], n); //printing the bill
    printf("\n***********************************************");
    printf("\nThe total PRICE of the food items entered by you is : %d", totprice);
}
