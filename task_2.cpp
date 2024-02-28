#include <iostream>
using namespace std;

// Написати функцію, що визначає середнє арифметичне елементів переданого їй масиву.

double getAverage(int arr[], int size)
{
    double sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum / size;
}


int main()
{
    const int SIZE = 5;
    int arr[SIZE] = {1,5,24,7,1};

    cout << getAverage(arr, SIZE);

    return 0;
}