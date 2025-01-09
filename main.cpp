#include <iostream>

int cmmdc(int a, int b)
{
return b== 0 ? a : cmmdc(b, a % b);
}

int cmmmc(int a, int b)
{
return (a * b) / cmmdc(a, b);
}

int main()
{
int num1, num2;

std::cout << "Introdu primul numar: ";
std::cin >> num1;

std::cout << "Intordu al doilea numar: ";
std::cin >> num2;

std::cout << "CMMDC: " << cmmdc(num1, num2) << std::endl;
std::cout << "CMMMC: " << cmmmc(num1, num2) << std::endl;

return 0;
}
/*in acest tutorial v-am aratat cum sa faceti un program in C++ 
care face cmmdc si cmmmc a doua nr */
