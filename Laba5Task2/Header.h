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
        cout << "������� ���� ������� �������� (��.��.����): ";
        cin >> seizureDate;
        cout << "������� ������������ ��������: ";
        cin.ignore();
        getline(cin, itemName);
        cout << "������� ������ ������: ";
        getline(cin, itemGroup);
        cout << "������� ���������� ������ ��������: ";
        cin >> itemCount;
        cout << "������� ��������� ������� ��������: ";
        cin >> itemPrice;
    }
};
void protectFromFool(int& n);
void findMaxSeizedGroup(Item items[], int n);

