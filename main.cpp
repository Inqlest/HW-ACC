#include <iostream>

struct account
{
    int acc_num;
    std::string name;
    double bal;
};

void edit_balance(account* bal, double new_bl){
    bal -> bal = new_bl;
}

int main(){
    double new_bal;
    account acc;
    std::cout << "Введите номер счета: ";
    std::cin >> acc.acc_num;

    std::cout << "Введите имя владельца: ";
    std::cin >> acc.name;

    std::cout << "Введите баланс счета: ";
    std::cin >> acc.bal;

    std::cout << "Введите новый баланс счета: ";
    std::cin >>  new_bal;
    edit_balance(&acc, new_bal);
    std::cout << "Ваш счет: " << acc.name << ", " << acc.acc_num << ", " << acc.bal << std::endl;
}
