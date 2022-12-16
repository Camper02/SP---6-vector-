#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> numbers;
    vector <int>::iterator Iter;
    numbers.push_back(1);                                                      // push_back() добавляет значение в конец вектора
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.push_back(5);
    for (Iter = numbers.begin(); Iter != numbers.end(); Iter++) {
        cout << *Iter << " ";
    }
    cout << endl;
    numbers.erase(numbers.begin() + 1, numbers.end() - 2);                     // erase() удаляет значение в диапозоне ** +1 от начала и -2 от конца
    for (Iter = numbers.begin(); Iter != numbers.end(); Iter++) {
        cout << *Iter << " ";
    }
    cout << endl;
    numbers.insert(numbers.begin() + 1, 3, 6);                                 // insert() добавляет значение нужное количество раз (позиция, кол-во раз, значение)
    for (Iter = numbers.begin(); Iter != numbers.end(); Iter++) {
        cout << *Iter << " ";
    }
    cout << endl;
    numbers.emplace_back(7);                                                   // emplace_back(), в отличие от push_back(), может использовать любой конструктор (не только копирование/перемещение)
    for (Iter = numbers.begin(); Iter != numbers.end(); Iter++) {
        cout << *Iter << " ";
    }
    cout << endl;
    numbers.resize(8);                                                         // resize(), меняет размер вектора и заполняает его (нули в конце)
    for (Iter = numbers.begin(); Iter != numbers.end(); Iter++) {
        cout << *Iter << " ";
    }
    cout << endl;
    numbers.resize(5);                                                         // resize(), или удаляет, оставляя только первые N (в данном случае - 5) значений
    for (Iter = numbers.begin(); Iter != numbers.end(); Iter++) {
        cout << *Iter << " ";
    }
    cout << endl;
    cout << numbers.capacity() << endl;
    numbers.reserve(20);                                                       // reserve() резервирует минимальную длинну хранилища
    cout << numbers.capacity() << endl;
    numbers.shrink_to_fit();                                                   // shrink_to_fit() снижает минимальную длинну хранилища до минимально возможной
    cout << numbers.capacity() << endl;
    numbers.clear();                                                           // clear() очищает вектор
    numbers = { 16, 15, 14, 13, 12, 11 };                                      // с помощью {элемент [0], [1], [2], ...} можно присвоить значение вектору
    for (Iter = numbers.begin(); Iter != numbers.end(); Iter++) {
        cout << *Iter << " ";
    }
    cout << endl;
    numbers[4] = 1337;                                                        // с помоью vector[n] можно присвоить n-ому элменту значение
    for (Iter = numbers.begin(); Iter != numbers.end(); Iter++) {
        cout << *Iter << " ";
    }
    cout << endl;
}
