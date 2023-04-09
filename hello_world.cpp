#include <iostream>
#include <string>


int main() {
    std::string name;  // объявляем переменную для имени пользователя!
    std::cout << "Enter your name: ";  
    std::cin >> name;  // считываем имя пользователя из стандартного ввода :)
    std::cout << "Hello world from @" << name << "\n";  // выводим сообщение с именем пользователя!!hooray
    return 0;

}
