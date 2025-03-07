#include <iostream>
#include <iomanip>
using namespace std;

class Product {
public:
    string name;
    float price;
    int quantity;

    Product(string productName, float productPrice, int productQuantity) {
        name = productName;
        price = productPrice;
        quantity = productQuantity;
    }

    float totalPrice() {
        return price * quantity;
    }
};

class Bill {
public:
    void printBill(Product product1, Product product2, Product product3) {
        float totalAmount = 0;

        cout << "\n------------------------ BILL ------------------------\n";
        cout << left << setw(20) << "Product" << setw(10) << "Price" << setw(10) << "Qty" << setw(15) << "Total Price\n";
        cout << "--------------------------------------------------------\n";

        totalAmount += product1.totalPrice();
        cout << left << setw(20) << product1.name 
             << setw(10) << product1.price 
             << setw(10) << product1.quantity
             << setw(15) << product1.totalPrice() << endl;

        totalAmount += product2.totalPrice();
        cout << left << setw(20) << product2.name 
             << setw(10) << product2.price 
             << setw(10) << product2.quantity
             << setw(15) << product2.totalPrice() << endl;

        totalAmount += product3.totalPrice();
        cout << left << setw(20) << product3.name 
             << setw(10) << product3.price 
             << setw(10) << product3.quantity
             << setw(15) << product3.totalPrice() << endl;

        cout << "--------------------------------------------------------\n";
        cout << left << setw(20) << "Grand Total" << setw(10) << "" << setw(10) << "" << setw(15) << totalAmount << endl;
        cout << "--------------------------------------------------------\n";
    }
};

int main() {
    Product rice("Rice", 5.0, 2);  
    Product oil("Oil", 3.5, 1);       
    Product soap("Soap", 1.2, 3); 
    Bill bill;
    bill.printBill(rice, oil, soap);

    return 0;
}
