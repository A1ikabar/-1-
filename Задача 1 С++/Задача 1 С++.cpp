#include "func.h"

using namespace std;
int main() {
    while (breaker != 0) {
        int k;
        cout << "Enter num of steps: "; cin >> k;
        if (k == 0)
            break;
        func(k, mass1);
        mass1.clear();
        mass2.clear();
    }
    return 0;
}




/*Задача 1
Необходимо подняться по лестнице. Чтобы это выполнить требуется n шагов. 
На каждом шаге можно пройти либо 1 ступеньку, либо 2. Необходимо вывести 
кол-во всех возможных комбинаций шагов для лестницы с n ступеньками, 
а так же сами комбинации

На входе:
n  - кол-во ступенек
На выходе:
Массив с комбинацией целых чисел
Пример 1:
На входе: n = 2
На выходе: 2
Пояснение: 
1. 1 шаг + 1 шаг
2. 2 шага
Пример 2:
На входе: n = 3
На выходе: 3
Пояснение: 
1. 1 шаг + 1 шаг + 1 шаг
2. 1 шаг + 2 шага
3. 2 шага+ 1 шаг
Написать пример кода на языке C++, предоставить обоснование.

int М[N] - массив результатов
int i
M[1]=1;
M[2]=2;
For (i=3; i<=N; i++)
       M[i]= M[i-1]+M[i-2];

Вывести массив M[N]
*/



/*using namespace std;
int main()
{
    size_t size;
    setlocale(LC_ALL, "RUS");
    cout << "Ввести количество ступенек: ";
    cin >> size;
    int* array = new int[size];
    array[1] = 1;
    array[2] = 2;
        for (size_t i = 3; i <= size; i++) {
            array[i] = array[i - 1] + M[i - 2];
        }
    delete[] array;
    system("PAUSE");
    return EXIT_SUCCESS;

}*/



