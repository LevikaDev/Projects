#include <iostream>
#include <string>
using namespace std;

double Calculator(double Sefareshat, double Karmozd, double Kit) {
    double Total = Sefareshat + Karmozd + Kit;
    return Total;
}

int main() {
    string OrderNames[100];
    double OrderPrices[100], Sefareshat = 0, Karmozd, Kit, Total;
    int OrderCount = 0, ServiceType;

    cout << "Welcome to the Price Calculator! It's Made by: iLevika" << endl;
    cout << "Enter orders (enter a negative price to stop):" << endl;

    while (true) {
        cout << "Enter the name of the order: ";
        cin.ignore(); // پاک کردن بافر برای جلوگیری از مشکلات هنگام استفاده از getline
        getline(cin, OrderNames[OrderCount]);

        cout << "Enter the price of " << OrderNames[OrderCount] << ": ";
        cin >> OrderPrices[OrderCount];

        if (OrderPrices[OrderCount] < 0) {
            break;
        }

        Sefareshat += OrderPrices[OrderCount];
        OrderCount++;
    }

    cout << "Enter the service fee percentage (Karmozd in %): ";
    cin >> Karmozd;
    Karmozd = (Karmozd / 100) * Sefareshat;

    cout << "Select the type of service (kit):" << endl;
    cout << "1. Normal (No extra charge)" << endl;
    cout << "2. VIP (+20% extra charge)" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> ServiceType;

    if (ServiceType == 1) {
        Kit = 0;
    } else if (ServiceType == 2) {
        Kit = 0.2 * Sefareshat;
    } else {
        cout << "Invalid service type selected. Exiting..." << endl;
        return 1;
    }

    Total = Calculator(Sefareshat, Karmozd, Kit);

    cout << "\n--- Final Bill ---" << endl;
    for (int i = 0; i < OrderCount; i++) {
        cout << "Order " << (i + 1) << " (" << OrderNames[i] << "): $" << OrderPrices[i] << endl;
    }
    cout << "Orders (Sefareshat): $" << Sefareshat << endl;
    cout << "Service Fee (Karmozd): $" << Karmozd << endl;
    if (ServiceType == 2) {
        cout << "VIP Service (Kit): $" << Kit << endl;
    } else {
        cout << "Normal Service (Kit): $0" << endl;
    }
    cout << "Total Amount to Pay: $" << Total << endl;

    return 0;
}
