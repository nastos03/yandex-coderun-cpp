#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    char x, y, z;
    string number;
    
    // Считываем доступные кнопки
    cin >> x >> y >> z;
    
    // Считываем число, которое нужно ввести
    cin >> number;

    // Множество для хранения необходимых кнопок
    set<char> required_buttons;

    // Добавляем имеющиеся кнопки в множество
    required_buttons.insert(x);
    required_buttons.insert(y);
    required_buttons.insert(z);

    // Проверяем каждую цифру в числе N
    for (char digit : number) {
        if (required_buttons.find(digit) == required_buttons.end()) {
            // Если цифра не найдена в имеющихся кнопках, добавляем её в множество
            required_buttons.insert(digit);
        }
    }

    // Количество необходимых кнопок - это размер множества минус 3 (изначально доступные кнопки)
    cout << required_buttons.size() - 3 << endl;

    return 0;
}
