#include <iostream>
#include <string>
using namespace std;

double CalculateTotal(double orders, double fee, double service) {
    return orders + fee + service;
}

int main() {
    string lang;
    string names[100];
    double prices[100], orders = 0, fee, serviceCharge = 0, total;
    int count = 0, serviceType;

    cout << "Choose language / زبان را انتخاب کنید / Wählen Sie die Sprache:\n";
    cout << "1. English\n2. فارسی\n3. Deutsch\n";
    cout << "Choice: ";
    cin >> lang;

    if (lang == "1") {
        cout << "Welcome to the Price Calculator! It's made by: iLevika\n";
        cout << "Enter orders (enter a negative price to stop):\n";
        while (true) {
            cout << "Enter the name of the order: ";
            cin.ignore();
            getline(cin, names[count]);
            cout << "Enter the price: ";
            cin >> prices[count];

            if (prices[count] < 0) break;

            orders += prices[count];
            count++;
        }

        cout << "Enter the service fee percentage: ";
        cin >> fee;
        fee = (fee / 100) * orders;

        cout << "Select the service type:\n1. Normal\n2. VIP (+20% charge)\nChoice: ";
        cin >> serviceType;
        if (serviceType == 2) serviceCharge = 0.2 * orders;

        total = CalculateTotal(orders, fee, serviceCharge);
        cout << "\n--- Final Bill ---\n";
        for (int i = 0; i < count; i++) cout << "Order " << (i + 1) << " (" << names[i] << "): $" << prices[i] << endl;
        cout << "Orders Total: $" << orders << endl;
        cout << "Service Fee: $" << fee << endl;
        cout << (serviceType == 2 ? "VIP Service: $" : "Normal Service: $") << serviceCharge << endl;
        cout << "Total to Pay: $" << total << endl;

    } else if (lang == "2") {
        cout << "به محاسبه‌گر قیمت خوش آمدید! ساخته شده توسط: iLevika\n";
        cout << "سفارش‌ها را وارد کنید (برای توقف قیمت منفی وارد کنید):\n";
        while (true) {
            cout << "نام سفارش: ";
            cin.ignore();
            getline(cin, names[count]);
            cout << "قیمت: ";
            cin >> prices[count];

            if (prices[count] < 0) break;

            orders += prices[count];
            count++;
        }

        cout << "درصد کارمزد: ";
        cin >> fee;
        fee = (fee / 100) * orders;

        cout << "نوع سرویس:\n1. معمولی\n2. ویژه (+20% هزینه بیشتر)\nانتخاب: ";
        cin >> serviceType;
        if (serviceType == 2) serviceCharge = 0.2 * orders;

        total = CalculateTotal(orders, fee, serviceCharge);
        cout << "\n--- فاکتور نهایی ---\n";
        for (int i = 0; i < count; i++) cout << "سفارش " << (i + 1) << " (" << names[i] << "): " << prices[i] << " تومان\n";
        cout << "مجموع سفارش‌ها: " << orders << " تومان\n";
        cout << "کارمزد: " << fee << " تومان\n";
        cout << (serviceType == 2 ? "سرویس ویژه: " : "سرویس معمولی: ") << serviceCharge << " تومان\n";
        cout << "مبلغ کل پرداختی: " << total << " تومان\n";

    } else if (lang == "3") {
        cout << "Willkommen beim Preisrechner! Erstellt von: iLevika\n";
        cout << "Bestellungen eingeben (zum Stoppen negativen Preis eingeben):\n";
        while (true) {
            cout << "Name der Bestellung: ";
            cin.ignore();
            getline(cin, names[count]);
            cout << "Preis: ";
            cin >> prices[count];

            if (prices[count] < 0) break;

            orders += prices[count];
            count++;
        }

        cout << "Prozentsatz der Servicegebühr: ";
        cin >> fee;
        fee = (fee / 100) * orders;

        cout << "Service auswählen:\n1. Normal\n2. VIP (+20% Aufschlag)\nAuswahl: ";
        cin >> serviceType;
        if (serviceType == 2) serviceCharge = 0.2 * orders;

        total = CalculateTotal(orders, fee, serviceCharge);
        cout << "\n--- Endgültige Rechnung ---\n";
        for (int i = 0; i < count; i++) cout << "Bestellung " << (i + 1) << " (" << names[i] << "): " << prices[i] << " EUR\n";
        cout << "Gesamtbestellungen: " << orders << " EUR\n";
        cout << "Servicegebühr: " << fee << " EUR\n";
        cout << (serviceType == 2 ? "VIP-Service: " : "Normaler Service: ") << serviceCharge << " EUR\n";
        cout << "Gesamtbetrag: " << total << " EUR\n";

    } else {
        cout << "Invalid choice. Exiting...\n";
    }

    return 0;
}
