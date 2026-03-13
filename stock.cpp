//Making a simple Stock Sell and buying model by simple Cpp code

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of stock items : ";
    cin >> n;

    string itemName[50];
    int quantity[50];
    float price[50];

    // input stock details
    for(int i = 0; i < n; i++) {
        cout << "\nEnter details for item " << i + 1 << endl;

        cout << "Item Name : ";
        cin >> itemName[i];

        cout << "Quantity: ";
        cin >> quantity[i];

        cout << "Price per item : ";
        cin >> price[i];
    }

    // Display of Stocks Details
    cout << "\n---Stock Details---\n";
    float totalValue = 0;

    for(int i = 0; i < n; i++) {
        float value = quantity[i] * price[i];
        totalValue += value;

        cout << "Item: " << itemName[i]
             << " | Quantity: " << quantity[i]
             << " | Price: " << price[i]
             << " | Value: " << value << endl;
    }

    cout << "\nTotal Stock Value = " << totalValue << endl;

    return 0;
}
