#include"Header.h"
void protectFromFool(int& n) {
    while (true) {
        cout << "Введите количество предметов (N): ";
        if (!(cin >> n) || n <= 0 || n > MAX_N) {
            cout << "Ошибка. Пожалуйста, введите положительное число до " << MAX_N << ".\n";
            cin.clear();
            cin.ignore((numeric_limits<streamsize>::max)(), '\n');
        }
        else {
            break;
        }
    }
}
void findMaxSeizedGroup(Item items[], int n) {
    int groupCount[MAX_N] = { 0 };

    for (int i = 0; i < n; ++i) {
        groupCount[i] = items[i].itemCount;
    }

    int maxSeizedGroupIndex = 0;
    for (int i = 1; i < n; ++i) {
        if (groupCount[i] > groupCount[maxSeizedGroupIndex]) {
            maxSeizedGroupIndex = i;
        }
    }

    cout << "Группа товаров с наибольшим количеством изъятого товара: " << items[maxSeizedGroupIndex].itemGroup << "\n";
}