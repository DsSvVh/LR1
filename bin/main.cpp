#include <iostream>
#include <vector>

using namespace std;

#include <lib/lr1.h>

/*
int main() {
    std::vector<int> arr = {10, 14, 15, 20, 21, 25, 30};
    std::pair<int, int> result = countAndSum(arr);
    std::cout << "Number of elements that are divisible by 5 and not divisible by 7: " << result.first << std::endl;
    std::cout << "Sum: " << result.second << std::endl;
    return 0;*/


int main() {


        vector<double> arr = { 1.5, -2.0, 3.0, 4.5, -5.0, 6.0 }; // Пример входных данных
        int b = 1; // Начало отрезка
        int d = 4; // Конец отрезка

        pair<double, double> result = calculateSumAndProduct(arr, b, d);

        cout << "Sum of positive elements: " << result.first << endl;
        cout << "Product of elements  " << b << " - " << d << ": " << result.second << endl;

 return 0;


}