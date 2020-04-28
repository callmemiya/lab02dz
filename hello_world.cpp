#include <iostream>
int main() {
  std::cout << "username:";  //запрашиваем имя пользователя
  char name[15];             //создаем массив под имя
  std::cin.getline(name,
                   15)  //вводим имя пользователя, и записываем в массив name
      std::cout
      << "Hello world from ";
  for (int i = 0; i < strlen(name); i++) std::cout << name[i];  //выводим имя
  std::cout << "\n";
  return 0;
}
