#include <iostream>
using namespace std;

// Написати функцію, що визначає кількість додатних, від'ємних і нульових елементів переданого їй масиву.

void getAverage(int arr[], int size, int& evenC, int& oddC, int& zeroC)
{
    for (int i = 0; i < size; i++) {
        if(arr[i] > 0)
        {
            evenC++;
        }
        else if (arr[i] < 0)
        {
            oddC++;
        }
        else
        {
            zeroC++;
        }
    }
}


int main()
{
    int evenNumCount = 0, oddNumCount = 0, zeroNumCount = 0;

    const int SIZE = 10;
    int arr[SIZE] = {0,5,24,7,1,-4,12,0,-1,0};

    getAverage(arr, SIZE, evenNumCount, oddNumCount, zeroNumCount);

    cout << "Even numbers: " << evenNumCount << endl;
    cout << "Odd numbers: " << oddNumCount << endl;
    cout << "Zero: " << zeroNumCount << endl;

    return 0;
}