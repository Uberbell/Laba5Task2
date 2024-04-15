#include <iostream>
#include <string>
#include<Windows.h>
using namespace std;
const int MAX_N = 100;
struct Item {
    string seizureDate;
    string itemName;
    string itemGroup;
    int itemCount;
    double itemPrice;

    void fillItemInfo() {
        cout << "Введите дату изъятия предмета (ДД.ММ.ГГГГ): ";
        cin >> seizureDate;
        cout << "Введите наименование предмета: ";
        cin.ignore();
        getline(cin, itemName);
        cout << "Введите группу товара: ";
        getline(cin, itemGroup);
        cout << "Введите количество единиц предмета: ";
        cin >> itemCount;
        cout << "Введите стоимость единицы предмета: ";
        cin >> itemPrice;
    }
};
void protectFromFool(int& n);
void findMaxSeizedGroup(Item items[], int n);

