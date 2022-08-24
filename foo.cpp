#include <iostream>
#include <stdlib.h>
using namespace std;


    void checkarr(const float * arr, size_t size)
{
    int n = 0;
    int p = 0;
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            n = n + 1;
        }
        else
            p = p + 1;
    }
    cout << "Positive elements: " << p << ".  Negative elements: " << n << endl;
}
    void initarr (float * arr, size_t size)
{
    float srand();
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = rand() % 100 - 50;
    }

}

    void printarr(const float * arr, size_t size)
{
  for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " " ;
    }
  cout << endl;
}

void printarr3(const int * arr, size_t size)
{
  for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " " ;
    }
  cout << endl;
}

