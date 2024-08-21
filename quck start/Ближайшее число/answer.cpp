#include <iostream>
#include <vector>
#include <cmath> // Для функции abs

using namespace std; 

int main() {
    int N;
    cin >> N; // Читаем размер массива

    vector<int> arr(N);
    for (int i = 0; i < N; ++i) {
        cin >> arr[i]; // Читаем элементы массива
    }

    int x;
    cin >> x; // Читаем число x

    int closest = arr[0]; // Предполагаем, что первый элемент - ближайший
    for (int i = 1; i < N; ++i) {
        // Если текущий элемент ближе к x, обновляем closest
        if (abs(arr[i] - x) < abs(closest - x)) {
            closest = arr[i];
        }
    }

    cout << closest << endl; // Выводим ближайший элемент
    return 0;
}
