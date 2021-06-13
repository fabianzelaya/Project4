/**
 * @file streamObjects.cpp
 * @author Fabian Zelaya (fabianzelayahn)
 * @brief 
 * @version 0.1
 * @date 2020-12-02
 * 
 * @copyright Copyright (c) 2020. Fabian Zelaya.
 * 
 */
#include <iostream>
#include <cmath>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
    int x = 4, sum = 0;
    double average;

    ofstream outStream;
    outStream.open("output");

    outStream << "=== === ============ \n"
              << " x  x^2 Current Sum. \n"
              << "=== === ============ \n"
              << " " << x << "  " << pow(x, 2) << "  " << x * 1 << "\n"
              << " " << x << "  " << pow(x, 2) << "  " << x * 2 << "\n"
              << " " << x << "  " << pow(x, 2) << "  " << x * 3 << "\n"
              << " " << x << "  " << pow(x, 2) << "  " << x * 4 << "\n"
              << " " << x << "  " << pow(x, 2) << "  " << x * 5 << "\n"
              << " " << x << "  " << pow(x, 2) << "  " << x * 6 << "\n"
              << " " << x << "  " << pow(x, 2) << "  " << x * 7 << "\n"
              << " " << x << "  " << pow(x, 2) << "  " << x * 8 << "\n"
              << "The average of these 8 numbers is: " << (x * 8 / 8) << endl;

    outStream.close();

    return 0;
}
// FZ`