// L0101_021.cpp : Этот файл содержит функцию "insertion_sort" с примером ее запуска.
// Листинг 1.1. Реализация алогритма сортировки Стивен Скиена, с 21
//

#include <iostream>
#include <utility>
#include <ctime>
using std::cin;
using std::cout;
using std::endl;

template <class item>
void insertion_sort(item s[], int n)
{
    int i, j; /* Счетчики */
    for (i = 1; i < n; i++) {
        j = i;
        while ((j > 0) && (s[j] < s[j - 1])) { // "продвигаем" элемент к началу массива, пока не встанет на свое место
            std::swap(s[j], s[j - 1]);
            j = j - 1;
        }
    }
}

int main()
{
    time_t t;
    srand((unsigned)time(&t));
    int k = rand()%82;
    int *arr = new int[k];

    cout << "Input array:" << endl;
    for (int i = 0; i < k; ++i)
    {
        arr[i] = rand()%82+1;
        cout << arr[i]<<" ";
    }
    cout << endl;

    insertion_sort(arr, k);

    cout << "Output array:" << endl;
    for (int i = 0; i < k; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    delete []arr;
}
