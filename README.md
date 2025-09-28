### **Overview**

The **Receipt/Bill Generator** is a simple **C program** that allows a store or shop to generate detailed bills for customers. It takes **customer information** and **item quantities** as input, calculates totals for each category, and prints a **well-formatted receipt** showing all details and the grand total.

### **Key Features**

1. **Customer Details**

   * Enter **name**, **phone number**, and **customer ID**.
   * These details are printed at the top of the receipt.

2. **Item Categories**

   * **Cosmetics**: Body Soap, Hair Shampoo
   * **Groceries**: Tea, Rice, Wheat
   * **Beverages**: Sprite, Coke, Mojitos

3. **Quantity Input**

   * User enters the quantity for each item.
   * The program calculates the **total price per item** based on fixed rates.

4. **Total Calculation**

   * Calculates **category totals** (cosmetics, groceries, beverages).
   * Calculates **grand total** for all items.

5. **Formatted Receipt**

   * Prints a clear, structured receipt.
   * Displays itemized prices, category totals, and the final total.
   * Makes it easier for shopkeepers and customers to review purchases.

### **How It Works**

1. The program prompts the user to enter **customer details**.
2. The user enters **quantities for items** in each category.
3. Prices are calculated using **fixed rates**:

   * Body Soap: ₹10, Hair Shampoo: ₹25
   * Tea: ₹15, Rice: ₹150, Wheat: ₹160
   * Sprite: ₹20, Coke: ₹40, Mojitos: ₹120
4. The program calculates **category totals** and **grand total**.
5. Prints a **formatted receipt** with all details.

### **Use Cases**

* Small retail shops generating bills manually.
* Training purpose for learning **C programming**, **structures**, and **console I/O**.
* Understanding basic **inventory and billing calculations**.

### **Possible Improvements**

* Add support for **dynamic pricing** (user enters price for items).
* Include **discounts, taxes, and offers** in the calculation.
* Save receipts to a **file** for future reference.
* Add support for **more items and categories** dynamically.
