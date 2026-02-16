#include <iostream>
using namespace std;

class StationeryShop {
private:
    string items[100];
    double prices[100];
    int count = 0;

public:
    void addItem(string name, double price) {
        items[count] = name;
        prices[count] = price;
        count++;
    }

    void showItems() {
        for (int i = 0; i < count; i++)
            cout << items[i] << " - " << prices[i] << endl;
    }

    void editPrice(string name, double newPrice) {
        for (int i = 0; i < count; i++)
            if (items[i] == name)
                prices[i] = newPrice;
    }

    double getPrice(string name) {
        for (int i = 0; i < count; i++)
            if (items[i] == name)
                return prices[i];
        return 0;
    }
};

int main() {
    StationeryShop s;
    int choice;

    while (true) {
        cout << "1 Add\n2 Show\n3 Edit\n4 Receipt\n5 Exit\n";
        cin >> choice;

        if (choice == 1) {
            string n;
            double p;
            cout << "Item name: ";
            cin >> n;
            cout << "Price: ";
            cin >> p;
            s.addItem(n, p);
        }
        else if (choice == 2) {
            s.showItems();
        }
        else if (choice == 3) {
            string n;
            double p;
            cout << "Item name: ";
            cin >> n;
            cout << "New price: ";
            cin >> p;
            s.editPrice(n, p);
        }
        else if (choice == 4) {
            string n;
            int q;
            double total = 0;
            cout << "Enter item: ";
            cin >> n;
            cout << "Quantity: ";
            cin >> q;
            double price = s.getPrice(n);
            total = price * q;
            cout << "Total: " << total << endl;
        }
        else if (choice == 5) {
            break;
        }
    }

    return 0;
}
