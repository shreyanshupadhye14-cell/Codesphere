#include<iostream>
using namespace std;
class product
{
  string product_name;
  cin >> Id;
  cin >> quntity;
  cin >> price;
public:
 void getData()
{
        cout << "Enter Product Name: ";
        cin >> product_name;

        cout << "Enter Product ID: ";
        cin >> id;

        cout << "Enter Quntity: ";
        cin >> quntity;

        cout << "Enter Price: ";
        cin >> price;
    }

    void putData()
    {
        cout << "\nProduct Name: " << product_name << endl;
        cout << "Product ID: " << id << endl;
        cout << "Quntity: " << quantity << endl;
        cout << "Price: " << price << endl;
    }

    void calculateBill()
    {
        float bill;
        bill = quantity * price;
        cout << "Total Bill: " << bill << endl;
    }
};

int main()
{
    product p;

    p.getData();
    p.putData();
    p.calculateBill();

    return 0;
}