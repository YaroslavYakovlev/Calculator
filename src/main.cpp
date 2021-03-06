
#include <iostream>
#include <vector>
#include <sstream>
#include <string>

int main(){
  std::cout << "Calculator" << std::endl;
  std::stringstream text;
  double num1, num2, res;
  std::string action;
  char symbol;
  std::cin >> action;

  text << action;
  std::cout << "text = " << text.str() << std::endl;

  text >> num1 >> symbol >> num2;

  if(symbol == '+'){
    res = num1 + num2;
  }else if(symbol == '-'){
    res = num1 - num2;
  }else if(symbol == '*'){
    res = num1 * num2;
  }else if(symbol == '/'){
    res = num1 / num2;
  }

  std::cout << "res = " << res << std::endl;



  

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