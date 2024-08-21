#include <iostream>
#include <vector>

using namespace std;

bool is_palindrome(const vector<int> &arr, int start, int end) {
    while (start < end) {
        if (arr[start] != arr[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    int N;
    cin >> N; // Читаем размер массива

    if (N < 1 || N > 100) return 0;

    vector<int> arr(N);
    for (int i = 0; i < N; ++i) {
        cin >> arr[i]; // Читаем элементы массива
    }

    // Переменная для хранения количества добавляемых элементов
    int add_count = 0;

    // Проверяем, сколько элементов совпадают с началом
    for (int i = 0; i < N; ++i) {
        if (is_palindrome(arr, i, N - 1)) {
            add_count = i; // Сохраняем количество элементов, которые нужно добавить
            break;
        }
    }

    cout << add_count << endl; // Выводим количество добавляемых элементов

    // Выводим недостающие элементы
    for (int i = add_count - 1; i >= 0; --i) {
        cout << arr[i] << " "; // Добавляем элементы в обратном порядке
    }
    
    cout << endl; // Для удобства вывода

    return 0;
}
