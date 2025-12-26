#include <iostream>
#include <windows.h>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char name[32], surname[32], batko[32], sex[10], phone_number[32], adress[64], learning[64], group[16], hobby[32], birthday[32];

    cout << "Прізвище? = "; cin.getline(surname, 32);
    cout << "Ім'я? = "; cin.getline(name,32);
    cout << "По батькові? = "; cin.getline(batko,32);
    cout << "Стать? = "; cin.getline(sex,10);   
    cout << "Дата народження? = "; cin.getline(birthday,32);
    cout << "Адреса? = "; cin.getline(adress,64);
    cout << "Номер телефону? = "; cin.getline(phone_number,32);
    cout << "Місце навчання? = "; cin.getline(learning,64);
    cout << "Група? = "; cin.getline(group,16); 
    cout << "Хоббі? = "; cin.getline(hobby,32);
    cout << "\n\n";
    cout << setw(38) << "А Н К Е Т А\n\n";
    cout << left << "Прізвище : " << setw(18) << surname << "Ім'я : " << setw(11) << name << "По батькові : " << batko << "\n";
    cout << left << "Номер телефону : " << setw(30) << phone_number << "Хоббі : " << hobby << "\n";
    cout << left << "Місце навчання : " << setw(30) << learning << "Група : " << group << "\n";
    cout << left << "Дата народження : " << setw(29) << birthday << "Стать : " << sex << "\n";
    cout << left << "Адреса : " << adress << "\n";
    return 0;
}
