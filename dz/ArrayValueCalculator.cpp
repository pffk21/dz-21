
#include <iostream>
#include "ArrayValueCalculator.h"
using namespace std;

ArrayDataException::ArrayDataException(int row, int col)
{
    message = "Неправильное значение [" + string(1, '0' + row) + "][" + string(1, '0' + col) + "]";
}
int ArrayPerevod::doCalc(string array[4][4])
{
    int sum = 0;
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            if (array[i][j] == "0") sum += 0;
            else if (array[i][j] == "1") sum += 1;
            else if (array[i][j] == "2") sum += 2;
            else if (array[i][j] == "3") sum += 3;
            else if (array[i][j] == "4") sum += 4;
            else if (array[i][j] == "5") sum += 5;
            else if (array[i][j] == "6") sum += 6;
            else throw ArrayDataException(i, j);
        }
    }

    return sum;
}
