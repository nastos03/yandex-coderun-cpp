/*
Дан список. Определите, является ли он монотонно возрастающим (то есть верно ли, что каждый элемент этого списка больше предыдущего).
Выведите YES, если массив монотонно возрастает и NO в противном случае. 
*/

#include <iostream>
using namespace std;

int main() {
    int current, previous;
    bool isIncreasing = true;

    // Читаем числа
    if (cin >> previous) {
        while (cin >> current) {
            if (current == 0) break; // Останавливаем ввод при 0

            if (current <= previous) {
                isIncreasing = false;
                break;
            }
            previous = current; // Обновляем предыдущее число
        }
    }

    // Выводим результат
    if (isIncreasing) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}