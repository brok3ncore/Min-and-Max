#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(0));

    const int size = 20;
    int arr[size];

    for (int i = 0; i < size; i++) arr[i] = 10 + rand() % 91;

    int minVal = arr[0], maxVal = arr[0];
    int minIndex = 0, maxIndex = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
            minIndex = i;
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            maxIndex = i;
        }
    }

    int start = min(minIndex, maxIndex);
    int end = max(minIndex, maxIndex);
    int sum = 0;

    for (int i = start + 1; i < end; i++) {
        sum += arr[i];
    }

    cout << "Исходный массив: ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;

    cout << "Минимальный элемент: " << minVal << " (индекс " << minIndex << ")" << endl;
    cout << "Максимальный элемент: " << maxVal << " (индекс " << maxIndex << ")" << endl;
    cout << "Сумма элементов между ними: " << sum << endl;

    return 0;
}
