#include <iostream>
using namespace std;

int sales[7][5];
int revenue[5];

void inputSales() {
    int i, j;
    for (i = 0; i < 7; i++) {
        cout << "Day " << i + 1 << endl;
        for (j = 0; j < 5; j++) {
            cin >> sales[i][j];
        }
    }
}

void calculateRevenue() {
    int i, j;
    for (j = 0; j < 5; j++) {
        revenue[j] = 0;
        for (i = 0; i < 7; i++) {
            revenue[j] = revenue[j] + sales[i][j];
        }
    }
}

void findMaxProduct() {
    int i;
    int max = revenue[0];
    int p = 0;

    for (i = 1; i < 5; i++) {
        if (revenue[i] > max) {
            max = revenue[i];
            p = i;
        }
    }

    cout << "Max product is " << p + 1 << endl;
}

void findBestDay() {
    int i, j;
    int sum;
    int max = 0;
    int d = 0;

    for (i = 0; i < 7; i++) {
        sum = 0;
        for (j = 0; j < 5; j++) {
            sum = sum + sales[i][j];
        }
        if (sum > max) {
            max = sum;
            d = i;
        }
    }

    cout << "Best day is " << d + 1 << endl;
}

int main() {
    int i;

    inputSales();

    calculateRevenue();

    cout << "Weekly sales:\n";
    for (i = 0; i < 5; i++) {
        cout << revenue[i] << endl;
    }

    findMaxProduct();
    findBestDay();

    return 0;
}
