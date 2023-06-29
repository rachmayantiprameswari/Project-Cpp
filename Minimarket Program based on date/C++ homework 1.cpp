#include <iostream>

using namespace std;

string itemName;
int itemPrice, numItems, Discount;

void InputModule()
{
        cout<<"Enter Item Name: ";
        cin>>itemName;

        cout<<"Enter Item Price: ";
        cin>>itemPrice;

        cout<<"Enter Num items: ";
        cin>>numItems;

        cout<<"Enter Discount: ";
        cin>>Discount;

        cout<<endl;
}
int process (string itemName, int itemPrice, int numItems, int Discount)
{
    int Price;
    Price = (numItems*itemPrice)*(100-Discount)/100;

    return Price;
}

int main()
{
    bool finish = false;
    string answer;
    while (!finish)
{
        cout<<"Enter Item Name: ";
        cin>>itemName;

        cout<<"Enter Item Price: ";
        cin>>itemPrice;

        cout<<"Enter Num items: ";
        cin>>numItems;


    int date;
    cout<<"Date: ";
    cin>>date;

    if (date >= 20)
    {
        cout<<"You get discount 10%\n\n";
    } else
    {
        cout<<"You don't get discount\n";
    }

    int Price;
    Price = (numItems*itemPrice) * (100-Discount)/100;

    cout <<"Result Price        : "<<Price;

    cout << "\nAre you finish?";
    cin >> answer;
    cout << endl;

    if (answer == "yes")
        {
        finish = true;
        }
    }
    return 0;
}

