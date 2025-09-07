#include <stdio.h>
#include <stdlib.h>

int main(){
    int choice,quantity,money,price,total;

    //Display menu
printf("******MENU******\n");
printf("1.Crest(shs.1500)\n");
printf("2.Mirinda(shs.1700)\n");
printf("3.Coca(shs.1800)\n");
printf("4.Fanta(shs.1900)\n");
printf("5.Pepsi(shs.1300)\n");
printf("***************\n");

//Ask the customer for choice
printf("ENTER THE PRODUCT NO(1-5):  ");
scanf("%d", &choice);

// Select the price from the customers choice
 if(choice == 1){
        price = 1500;
    printf("You have selected Crest.\n");
    }else if(choice == 2){
    price = 1700;
    printf("You have selected Mirinda.\n");
    }else if(choice == 3){
    price = 1800;
    printf("You have selected Coca.\n");
    }else if(choice == 4){
    price = 1900;
    printf("You have selected Fanta.\n");
    }else if(choice == 5){
    price = 1300;
    printf("You have selected Pepsi.\n");
    }else{
    printf("Invalid choice!!! Please try again.\n");

}

// Ask the customer for quantity
printf("ENTER THE QUANTITY OF THE PRODUCT: ");
scanf("%d",&quantity);

// Calculate the total
total = quantity * price;
printf("Totalcost = UGX %d\n",total);

//Ask the customer for the money
printf("Please insert money (UGX): ");
scanf("%d",&money);

// Check payment
if(money == total){
  printf("Payment accepted. Transaction processing.\n");
}else if(money >  total){
printf("Payment accepted. Transaction processing.\n");
printf("Your change is UGX %d.\n",money-total);
}else{
printf("Insufficient funds!! You need UGX %d more.\n",total-money);
printf("Transaction failed.\n");
}
return 0;
}

