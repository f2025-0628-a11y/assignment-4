#include <iostream>
using namespace std;

void input(float a[7][4]) {
    int i, j;
    for (i = 0; i < 7; i++) {
        cout << "Day " << i + 1 << endl;
        for (j = 0; j < 4; j++) {
            cin >> a[i][j];
        }
    }
}

void show(float a[7][4]) {
    int i, j;
    cout << "Day  T1  T2  T3  T4\n";
    for (i = 0; i < 7; i++) {
        cout << i + 1 << "   ";
        for (j = 0; j < 4; j++) {
            cout << a[i][j] << "   ";
        }
        cout << endl;
    }
}

void avg(float a[7][4]) {
    int i, j;
    float s;
    for (i = 0; i < 7; i++) {
        s = 0;
        for (j = 0; j < 4; j++) {
            s = s + a[i][j];
        }
        cout << "Average of day " << i + 1 << " is " << s / 4 << endl;
    }
}

void highlow(float a[7][4]) {
    int i, j;
    float h, l;
    h = a[0][0];
    l = a[0][0];

    for (i = 0; i < 7; i++) {
        for (j = 0; j < 4; j++) {
            if (a[i][j] > h)
                h = a[i][j];
            if (a[i][j] < l)
                l = a[i][j];
        }
    }

    cout << "Highest temp = " << h << endl;
    cout << "Lowest temp = " << l << endl;
}

int main() {
    float t[7][4];

    input(t);
    show(t);
    avg(t);
    highlow(t);

    return 0;
}


