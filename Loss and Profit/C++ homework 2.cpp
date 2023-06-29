#include <iostream>

using namespace std;

int main()
{
    float cost,reveneu,profit,loss;

    cout<<"Cost price\n";
    cin>>cost;
    cout<<"Revenue\n";
    cin>>reveneu;

    if (reveneu>cost)

    {
        profit=reveneu-cost;
        cout<<"Profit of"<<profit<<"$";
    }
    else
    {
        loss=cost-reveneu;
        cout<<"Loss of"<<loss<<"$";
    }
}

