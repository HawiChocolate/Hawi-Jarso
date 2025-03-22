#include <iostream>

using namespace std;
#define tax_rate 1.3

int main() {
    cout << "An analysis program of product sales and inventory" << endl;
    cout << "Reminder: C++ is a compiled language" << endl;

    //Declaring variables for product:
    string Productname;
    int Product_category;
    int Initial_inventory;
    double Product_price;
    int Items_sold = 59;

 //Declaring vairables for computed values
    int New_inventory;
    double Total_sales_amount;
    char inventory_status;

    Product_category = 3;
    Initial_inventory = {4};

    auto Salescopy = Total_sales_amount;
    decltype(Initial_inventory) adjusted_inventory = 4;
    const double Tax_rate_const = 1.2;

    cout << "Enter product name: ";
    cin>> Productname;
    cout << "Enter product category (1-5): ";
    cin>> Product_category;
    cout << "Enter initial inventory quantity: ";
    cin>> Initial_inventory;
    cout << "Enter product price per unit: ";
    cin>> Product_price;
    cout << "Enter unmber of items sold: ";
    cin>> Items_sold;

    New_inventory = Initial_inventory;
    New_inventory -= Items_sold;
    Total_sales_amount = Items_sold * Product_price;

    if (Product_category >= 1 && Product_category <= 5); {
         cout<< "Category: ";
        switch (Product_category) {
            case 1:
                cout<< "Category 1: Electronics\n";
            break;
            
            case 2:
                cout<< "Category 2: Groceries\n";
            break;

            case 3:
                cout<< "Category 3: Clothing\n";
            break;

            case 4:
                cout<< "Category 4: Stationery\n";
            break;

            case 5:
                cout<< "Category 5: Miscellaneous\n";
            break;

            default:
            break;
        }
    }
    cout << "\nReceipt:\n";
    for (int i = 1; i <= Items_sold; ++i) {
        cout<< "Item" << i << ":$" << Product_price << "\n";
    }

    cout << "\nTax Rates:";
    cout <<"Preprocessor tax rate:" << tax_rate<<"\n";
    cout << "Constant tax rate:" << Tax_rate_const<< "\n\n";
    cout << "Product summary:\n";
    cout << "Product Name: " << Productname << "\n";
    cout << "Product Category: " << Product_category << "\n";
    cout << "Initial Inventory: " << Initial_inventory << "\n";
    cout << "Product Price: $" << Product_price << "\n";
    cout << "Items Sold: " << Items_sold << "\n";
    cout << "New Inventory: " << New_inventory << "\n";
    cout << "Total Sales Amount: $" << Total_sales_amount << "\n";
    cout << "Inventory Status: " << inventory_status << "\n";
    return 0;

}