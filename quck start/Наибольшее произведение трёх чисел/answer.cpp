#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

int main() {
    vector<int> arr;
    int num;

    // Считываем числа до конца ввода
    while (cin >> num) {
        arr.push_back(num);
    }

    // Проверяем, достаточно ли элементов для вычисления
    if (arr.size() < 3) {
        cout << "Недостаточно чисел для вычисления произведения." << endl;
        return 1;
    }

    // Инициализируем необходимые переменные
    int max1 = numeric_limits<int>::min(), max2 = numeric_limits<int>::min(), max3 = numeric_limits<int>::min();
    int min1 = numeric_limits<int>::max(), min2 = numeric_limits<int>::max();

    // Находим три наибольших и два наименьших числа
    for (int x : arr) {
        if (x > max1) {
            max3 = max2;
            max2 = max1;
            max1 = x;
        } else if (x > max2) {
            max3 = max2;
            max2 = x;
        } else if (x > max3) {
            max3 = x;
        }

        if (x < min1) {
            min2 = min1;
            min1 = x;
        } else if (x < min2) {
            min2 = x;
        }
    }

    // Вычисляем два возможных максимальных произведения
    long long max_product_1 = static_cast<long long>(max1) * max2 * max3;
    long long max_product_2 = static_cast<long long>(min1) * min2 * max1;

    // Определяем максимальное произведение
    long long max_product = max(max_product_1, max_product_2);

    // Выводим результат
    if (max_product == max_product_1) {
        cout << max1 << " " << max2 << " " << max3 << endl;
    } else {
        cout << min1 << " " << min2 << " " << max1 << endl;
    }

    return 0;
}
