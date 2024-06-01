#include <iostream>
#include <string>

struct accounts {
    int number;
    std::string name;
    double cash;
};

void changeMoney(accounts& x, double& z) {
    x.cash = z;
}




int main() {
    setlocale(LC_ALL, "Russian");

    accounts x;
    double z;

    std::cout << "Введите номер счёта: ";
    std::cin >> x.number;
    std::cout << "Введите имя владельца: ";
    std::cin >> x.name;
    std::cout << "Введите баланс: ";
    std::cin >> x.cash;
    std::cout << "Введите новый баланс: ";
    std::cin >> z;

    changeMoney(x, z);

    std::cout << "Ваш счёт: " << x.name << " " << x.number << " " << x.cash;
    
    return 0;
}

