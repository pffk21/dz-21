#pragma once
#include <iostream>
#include <string>
using namespace std;

class ArraySizeException
{
public:
    string message="size not 4x4!!!";
    
};
class ArrayDataException
{
public:
    string message;
    ArrayDataException(int row,int col);
};

class ArrayPerevod
{
public:
    int doCalc(string array[4][4]);
};
