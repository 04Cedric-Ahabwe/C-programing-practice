#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice,quantity,price,total,money;
    // Display the menu
    printf("******MENU*******\n");
    printf("1.Soda(UGX 1000)\n");
    printf("2.Water(UGX 1000)\n");
    printf("3.Juice(UGX 2500)\n");
    printf("4.Yoghurt(UGX 3500)\n");
    printf("5.Icecream(UGX 3000)\n");
    printf("********************\n");

    // Ask the customer to make a choice
    printf("Please select an item(1-5):");
    scanf("%d",&choice);

    // Set price based on the selection
    switch(choice){
case 1 :price = 1000;printf("You selected Soda.\n");break;
case 2 :price = 1000;printf("You selected Water.\n");break;
case 3 :price = 2500;printf("You selected Juice.\n");break;
case 4 :price = 3500;printf("You selected Yoghurt.\n");break;
case 5 :price = 3000;printf("You selected Icecream .\n");break;
default:printf("Invalid choice! Please try again.\n");
    }
    // Ask for quantity
    printf("Enter quantity: ");
    scanf("%d",&quantity);

    // Calculate the total price
    total = price * quantity;
    printf("Totalcost = UGX %d\n",total);

    // Accept customer money
    printf("Please insert money(UGX): ");
    scanf("%d",& money);

    //Check payment
     if(money == total){
        printf("Payment accepted.Processing transaction_ _\n");
        } else if(money > total){
        printf("Payment accepted.Processing transaction_ _\n");
        printf("Your change is UGX %d.\n",money-total);
        }else{
        printf("Insufficient funds!!! You need UGX %d more.\n",total-money);
        printf("Transaction failed.\n");
        }
         return 0;
}
