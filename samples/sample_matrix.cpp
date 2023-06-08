// ННГУ, ИИТММ, Курс "Алгоритмы и структуры данных"
//
// Copyright (c) Сысоев А.В.
//
// Тестирование матриц

#include <iostream>
#include <ctime>
#include "tmatrix.h"
//---------------------------------------------------------------------------


void RandomInput(TDynamicMatrix<int>& m)
{
    for (int i = 0; i < m.size(); i++)
    {
        for (int j = 0; j < m.size(); j++)
        {
            m[i][j] = rand() % 100;
        }
    }
}


void ManualInput(TDynamicMatrix<int>& m) {
    cout << "Введите матрицу";
    cin >> m;
}


void main()
{
    setlocale(LC_ALL, "Russian");
    int n, choice, inputMethod, i, j;
    cout << "Введите размерность матрицы:";
    cin >> n;
    TDynamicMatrix<int> a(n), b(n), c(n);
    cout << "Выберите операцию:\n 1 - Сложение матриц\n 2 - Вычитание матриц\n 3 - Умножение матриц\n 4 - Умножение матрицы на скаляр\n 5 - Умножение матрицы на вектор\n";
    cin >> choice;
    cout << "Выберите способ ввода матриц:\n 1 - Вручную \n 2 - Автоматически\n";
    cin >> inputMethod;

    switch (choice)
    {
    case 1:
    {
        if (inputMethod == 1)
        {
            ManualInput(a);
            ManualInput(b);
        }
        else
        {
            RandomInput(a);
            RandomInput(b);
        }
        cout << "Матрица А:\n" << a;
        cout << "Матрица В:\n " << b;
        c = a + b;
        cout << "Матрица C = A+B:\n " << c << endl;
        break;
    }
    case 2:
    {
        if (inputMethod == 1)
        {
            ManualInput(a);
            ManualInput(b);
        }
        else
        {
            RandomInput(a);
            RandomInput(b);
        }
        cout << "Матрица А:\n" << a;
        cout << "Матрица В:\n " << b;
        c = a - b;
        cout << "Матрица C = A-B:\n " << c << endl;
        break;
    }
    case 3:
    {
        if (inputMethod == 1)
        {
            ManualInput(a);
            ManualInput(b);
        }
        else
        {
            RandomInput(a);
            RandomInput(b);
        }
        cout << "Матрица А:\n" << a;
        cout << "Матрица В:\n " << b;
        c = a * b;
        cout << "Матрица C = A*B:\n " << c << endl;
        break;
    }
    case 4:
    {
        if (inputMethod == 1)
        {
            ManualInput(a);
        }
        else
        {
            RandomInput(a);
        }
        cout << "Матрица А:\n" << a;
        int k;
        cout << "Введите скаляр k:";
        cin >> k;
        c = a * k;
        cout << "Матрица C = A*k:\n " << c << endl;
        break;
    }
    case 5:
    {
        TDynamicVector<int> v(n);
        TDynamicVector<int> v1(n);
        if (inputMethod == 1)
        {
            ManualInput(a);
            cout << "Введите вектор v: \n";
            cin >> v;
        }
        else
        {
            RandomInput(a);
            for (int j = 0; j < n; j++)
            {
                v[j] = rand() % 100;
            }
        }
        cout << "Матрица А:\n" << a;
        cout << "Вектор v:\n" << v;
        v1 = a * v;
        cout << "вектор v1 = A*v:\n " << v1 << endl;
        break;
    }
    default:
        cout << "wrong input";
        break;
    }
}
//---------------------------------------------------------------------------
