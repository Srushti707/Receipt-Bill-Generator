# Receipt/Bill Generator

A simple C program that generates a receipt or bill for a supermarket.  
The program takes customer details and item quantities as input, calculates totals, and displays a formatted receipt.

---

## Features
- Input customer details: name, phone number, customer ID.
- Enter item quantities for:
  - Cosmetics (Body Soap, Hair Shampoo)
  - Groceries (Tea, Rice, Wheat)
  - Beverages (Sprite, Coke, Mojitos)
- Automatic calculation of:
  - Item-wise price
  - Category totals
  - Final bill amount
- Prints a formatted receipt.

---

## Requirements
- GCC (MinGW for Windows or GCC for Linux/Mac)
- Basic terminal/command prompt usage

---

## Compilation and Execution

### Windows (MinGW)
gcc receipt_generator.c -o receipt_generator.exe
.\receipt_generator.exe

##Example

Input

Customer Name : Srushti
Customer Number : 9876543210
Customer Id : 101

COSMETICS
Body Soap (rs 10) : 2
Hair Shampoo (rs 25) : 1

GROCERIES
Tea (rs 15) : 3
Rice (rs 150) : 1
Wheat (rs 160) : 0

BEVERAGES
Sprite (rs 20) : 2
Coke (rs 40) : 1
Mojitos (rs 120) : 0


Output

==================================================
                GENERAL SUPERMART
==================================================
Customer Name         : Raj
Customer Phone Number : 9876543210
Customer Id           : 101
--------------------------------------------------
Product Name          Quantity    Price
--------------------------------------------------
Body Soap             2           20
Hair Shampoo          1           25
Tea                   3           45
Rice                  1           150
Wheat                 0           0
Sprite                2           40
Coke                  1           40
Mojitos               0           0
--------------------------------------------------
Cosmetics Total Price : 45
Grocery Total Price   : 195
Beverage Total Price  : 80
--------------------------------------------------
Total Price           : 320
==================================================
gcc receipt_generator.c -o receipt_generator.exe
.\receipt_generator.exe
