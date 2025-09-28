#include <stdio.h>
#include <stdlib.h>  // for system()

// Structure to hold all customer and item details
struct details {
    //CUSTOMER DETAILS
    char name[50];
    char phone_number[20];
    int customer_id;

    //GENERAL COSMETICS ITEMS (Quantity)
    int body_soap;
    int hair_shampoo;

    //GENERAL GROCERY ITEMS (Quantity)
    int tea;
    int rice;
    int wheat;

    //GENERAL BEVERAGES (Quantity)
    int sprite;
    int coke;
    int mojitos;

    //TOTALS
    int total;
    int cosmetics_total;
    int grocery_total;
    int beverage_total;

    //FOR CALCULATIONS
    int boso, hc;     // cosmetics
    int t, r, w;      // grocery
    int spr, co, moj; // beverages
};

struct details d;

int main() {
    // Clear the screen (optional)
    system("cls"); // use "clear" if running on Linux/Mac

    //----------- INPUT SECTION -----------

    printf("Enter Customer Details\n");
    printf("--------------------------------------\n");
    printf("Customer Name : ");
    scanf("%s", d.name);
    printf("Customer Number : ");
    scanf("%s", d.phone_number);
    printf("Customer Id : ");
    scanf("%d", &d.customer_id);
    printf("--------------------------------------\n\n");

    //COSMETICS
    printf("COSMETICS\n");
    printf("Body Soap (rs 10) : ");
    scanf("%d", &d.body_soap);
    printf("Hair Shampoo (rs 25) : ");
    scanf("%d", &d.hair_shampoo);
    printf("--------------------------------------\n\n");

    //GROCERIES
    printf("GROCERIES\n");
    printf("Tea (rs 15) : ");
    scanf("%d", &d.tea);
    printf("Rice (rs 150) : ");
    scanf("%d", &d.rice);
    printf("Wheat (rs 160) : ");
    scanf("%d", &d.wheat);
    printf("--------------------------------------\n\n");

    //BEVERAGES
    printf("BEVERAGES\n");
    printf("Sprite (rs 20) : ");
    scanf("%d", &d.sprite);
    printf("Coke (rs 40) : ");
    scanf("%d", &d.coke);
    printf("Mojitos (rs 120) : ");
    scanf("%d", &d.mojitos);
    printf("--------------------------------------\n\n");

    //----------- CALCULATIONS -----------

    d.boso = 10 * d.body_soap;
    d.hc   = 25 * d.hair_shampoo;
    d.cosmetics_total = d.boso + d.hc;

    d.t = 15 * d.tea;
    d.r = 150 * d.rice;
    d.w = 160 * d.wheat;
    d.grocery_total = d.t + d.r + d.w;

    d.spr = 20 * d.sprite;
    d.co  = 40 * d.coke;
    d.moj = 120 * d.mojitos;
    d.beverage_total = d.spr + d.co + d.moj;

    d.total = d.cosmetics_total + d.grocery_total + d.beverage_total;

    //----------- RECEIPT OUTPUT -----------

    printf("\n\n==================================================\n");
    printf("\t\tGENERAL SUPERMART\n");
    printf("==================================================\n");

    printf("Customer Name       : %s\n", d.name);
    printf("Customer Phone Number : %s\n", d.phone_number);
    printf("Customer Id         : %d\n", d.customer_id);
    printf("--------------------------------------------------\n");

    printf("Product Name\t\tQuantity\tPrice\n");
    printf("--------------------------------------------------\n");
    printf("Body Soap\t\t%d\t\t%d\n", d.body_soap, d.boso);
    printf("Hair Shampoo\t\t%d\t\t%d\n", d.hair_shampoo, d.hc);
    printf("Tea\t\t\t%d\t\t%d\n", d.tea, d.t);
    printf("Rice\t\t\t%d\t\t%d\n", d.rice, d.r);
    printf("Wheat\t\t\t%d\t\t%d\n", d.wheat, d.w);
    printf("Sprite\t\t\t%d\t\t%d\n", d.sprite, d.spr);
    printf("Coke\t\t\t%d\t\t%d\n", d.coke, d.co);
    printf("Mojitos\t\t\t%d\t\t%d\n", d.mojitos, d.moj);
    printf("--------------------------------------------------\n");

    printf("Cosmetics Total Price : %d\n", d.cosmetics_total);
    printf("Grocery Total Price   : %d\n", d.grocery_total);
    printf("Beverage Total Price  : %d\n", d.beverage_total);
    printf("--------------------------------------------------\n");
    printf("Total Price           : %d\n", d.total);
    printf("==================================================\n");

    return 0;
}
