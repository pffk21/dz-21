//
//  main.cpp
//  dz
//
//  Created by paul blazhko on 20.09.2024.
//

#include <iostream>
#include "ArrayValueCalculator.h"
using namespace std;
int main()
{
    string array[4][4] = {
        {"1", "2", "3", "4"},
        {"5", "6", "0", "1"},
        {"2", "3", "4", "5"},
        {"6", "0", "1", "2"}
    };
    ArrayPerevod perevod;
    try
    {
        int res=perevod.doCalc(array);
        cout<<"Sum: "<<res<<endl;
    }
    catch(ArraySizeException& a)
    {
        cout<<a.message<<endl;
    }
    catch(ArrayDataException& a)
    {
        cout<<a.message<<endl;
    }
}
