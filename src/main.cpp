
#include <iostream>
#include <vector>
#include <sstream>
#include <string>

int main(){
  std::cout << "Calculator" << std::endl;
  std::stringstream str;
  double num1, num2, res;
  std::string action;
  char symbol;
  int indexSymbol;


  std::cin >> action;

  for(int i = 0; i < action.length(); i++){
    if((action[i] == '*') || (action[i] == '/' )||
      (action[i] == '+') || (action[i] == '-')){
        symbol = action[i];
        indexSymbol = i;
        break;
    }
  }

  num1 = std::stod(action.substr(0,indexSymbol));
  num2 = std::stod(action.substr(indexSymbol + 1,action.length()));

  std::cout << "1 " << num1 << std::endl;
  std::cout << "2 " <<  symbol << std::endl;
  std::cout << "3 " << num2 << std::endl;
  std::cout << "4 " << res << std::endl;



  

  return 0;
}

// Калькулятор

// Что нужно сделать
// Требуется создать небольшую программу для 
// вычисления простых действий с числами. 
// При запуске программа ожидает пользовательского 
// ввода во временную переменную строку. 
// После ввода строки, она распарсивается на 
// отдельные члены. Строка записывается в форме 
// “<число-1><действие><число-2>” (без пробелов). 
// Оба числа - это значения с плавающей точкой, 
// повышенной точности (double). Действие может 
// быть одним из: +, -, /, *. Результат действия 
// выводится в стандартный вывод cout.