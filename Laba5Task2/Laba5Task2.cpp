#include"Header.h"
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "ru");
    Item items[MAX_N];
    int n;

    protectFromFool(n);

    for (int i = 0; i < n; ++i) {
        cout << "\nИнформация о товаре " << i + 1 << ":\n";
        items[i].fillItemInfo();
    }

    findMaxSeizedGroup(items, n);

    return 0;
}
