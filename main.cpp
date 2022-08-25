#include <iostream>
#include <stdlib.h>
#include "foo.h"
#include <fstream>
#include <string>
/*��.7 �� �++
�������� ������������
�� CodeBlocks 17.12
*/
//===========================================================================================================
#define check_lim( a ,b, c) (((a >= 0)&& (a < b)) ? (c="True") : (c="Fals"))
#define size3 10
//===========================================================================================================
#define SwapINT(a, b)                           \
  for (size_t i = 0; i < size; i++)                \
    {                                           \
        bool flag = true;                       \
        for (size_t j = 0; j < 10 - (i + 1); j++)  \
            {                                   \
                if (arr3[j] > arr3[j + 1])      \
                {                               \
                    flag = false;               \
                    swap (arr3[j], arr3[j + 1]);\
                }                               \
            }                                   \
        if (flag)                               \
        {break;                                 \
        }                                       \
    }

//===========================================================================================================

#pragma pack(push, 1)
struct Employee
    {
        long id;
        unsigned short age;
        double salary;
    };
#pragma pack (pop)
//===========================================================================================================
using namespace std;
int main()
{
/*================================================================================================================
������� 1 - 1. �������� ������ �� 2� cpp ������ � ������������� (main.cpp,
mylib.cpp, mylib.h) �� ������ ������ mylib �������� 3 �������:
��� ������������� ������� (���� float), ������ ��� �� ����� �
�������� ���������� ������������� � �������������
���������. ��������� ��� 3-� ������� �� main ��� ������ �
��������.
================================================================================================================*/
  cout << "Task 1: The random array: " << endl;
  cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
  cout << endl;

 const size_t size = 10;
 float arr[size];
 FOO::initarr (arr, size);
 FOO::printarr (arr, size);
 FOO:: checkarr(arr, size);
 cout  << endl;

/*================================================================================================================
������� 2 - ������� ������������ (����� ��������� define),
�����������, ������ �� ���������� �� ����� (��������� �
����������) � �������� �� ���� (������������) �� �����������
�� ������� ��������� (�������������) � ���������� true ���
false, ������� �� ����� �true� ��� �false�..
================================================================================================================*/
  cout << "Task 2: Define check_lim " << endl;
  cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
  cout << "Enter the numer & limit: " << endl;

  string flag;
  int num, lim;
  cin >> num >> lim;

  cout << check_lim (num, lim, flag) << endl;
  cout  << endl;

/*================================================================================================================
������� 3 - ������� ������ ���� int. ����� ��� ������ �������� �����
��������� ������������� #define. ��������������� ��� �����
���� � ����������. �������� ��� ���� ���� �������
���������� (�������� ���������). ���������� ������������
��������� ��� ������������ SwapINT(a, b). ��������� �� ��
����� ����������.
================================================================================================================*/
    cout << "Task 3: The text files: " << endl;
    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
    cout << endl;
    cout << "Enter elelments of array: (10 times) " << endl;
    unsigned int i;
    int arr3[size3];
    for (i=0; i<size; i++)
    {
        cin >> arr3[i];
    }

    cout << "It's your array:" << endl;
    FOO::printarr3 ( arr3, size3);
    cout << endl;
    cout << "It's Swapped array:" << endl;

    SwapINT( arr3, size3);

    FOO::printarr3 ( arr3, size3);
    cout << endl;
/*================================================================================================================
������� 4 - * �������� ��������� ��������� � ���������� ������.
�������� ��� ��� ���������� ������������ � �������
��������� pragma pack. �������� ����������� ����������
����� ����. ��������������� ��. �������� �� �� ����� � ��
������ � ������� sizeof. ��������� ��� ��������� � ���������
����.
================================================================================================================*/
    cout << "Task 4: The strukt: " << endl;
    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
    cout << endl;

    Employee * pStr = new Employee{};
    Employee Dir, Buh, Rab;
    Dir = { 1001, 37, 3500 };
    Buh = { 1002, 42, 2500 };
    Rab = { 1003, 22, 1500 };

    cout <<" Dir age " << Dir.age << " Id " << Dir.id << " salary " << Dir.salary <<endl;
    cout <<" Buh age " << Buh.age << " Id " << Buh.id << " salary " << Buh.salary <<endl;
    cout <<" Rab age " << Rab.age << " Id " << Rab.id << " salary " << Rab.salary <<endl;

    ofstream fout;
    fout.open ( "Employee.txt" );
    if (fout.is_open())
    {
        fout <<" Dir age " << Dir.age << " Id " << Dir.id << " salary " << Dir.salary <<endl;
        fout <<" Buh age " << Buh.age << " Id " << Buh.id << " salary " << Buh.salary <<endl;
        fout <<" Rab age " << Rab.age << " Id " << Rab.id << " salary " << Rab.salary <<endl;
        fout << endl;
        fout << " Size of Dir.age  "<< sizeof(Dir.age) << " Dir.id " << sizeof(Dir.id) << " Dir.salary " << sizeof(Dir.salary) <<endl;
        fout << endl;
        fout << "size of Strukt Employee  " << sizeof(Employee) << endl;
        fout << endl;
        fout . close();
    }
    delete pStr;
    cout << endl;
    cout << " Size of Dir.age  "<< sizeof(Dir.age) << " Dir.id " << sizeof(Dir.id) << " Dir.salary " << sizeof(Dir.salary) <<endl;
    cout << endl;

    cout << " Size of Strukt Employee  " << sizeof(Employee) << endl;
    cout << endl;

/*================================================================================================================
������� 5 - * �������� ������� 1 ������� ���� ��������� �� ������
������ (������ ������� ����� ����� �� ������).
================================================================================================================*/
    cout << "Task 5: Namespace: " << endl;
    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
    cout << endl;
    cout << " Created namespace FOO  "<< endl;
    cout << endl;


 return 0;
}
