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
#include <iomanip>
#include <cmath>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>
using namespace std;

// Global
string const file_name("input");

int main()
{
    int x_;

    ifstream inStream;
    ofstream outStream;

    inStream.open(file_name);
    if (!inStream.is_open())
    {
        string emsg("File open error: ");
        emsg += file_name;
        throw runtime_error(emsg);
    }

    vector<int> collect;
    while (!inStream.eof())
    {
        //  just read the file and save data into a vector
        //  allows analysis of the data independent of I/O
        inStream >> x_;
        collect.push_back(x_);
    }

    //  analysis
    cout << "=== === ============" << endl;
    cout << " x  x^2 Current Sum." << endl;
    cout << "=== === ============" << endl;

    int sum = 0;

    // The AUTO keyword declares a variable in the automatic storage class
    for (auto xx : collect)
    {
        sum += xx;

        // setw => "Sets the field" width to be used on output operations
        // and this manipulator is declared in header or library: <iomanip>.
        cout << setw(2)
             << xx
             << setw(5)
             << pow(xx, 2)
             << setw(8)
             << sum
             << endl; // isspace(int, pow)
    }
    cout << endl;

    //   average = sum of all values / number of values
    double avg = (static_cast<double>(sum) / collect.size());
    cout << "The average of these "
         << collect.size()
         << " numbers is: "
         << avg
         << endl;

    //  resource cleanup
    inStream.close();

    return 0;
}
// FZ