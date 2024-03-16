#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int writeFile(string& filename)
{
    ofstream ofs(filename);
    if (!ofs) {
        cerr << "Error " << erndl; 
        return 0;
    }

    int numEmpl;
    cout << "Enter number of employees: " 
    cin >> numEmpl;

    ofs << numEmpl << endl;

    for (int i = 0;i < numEmpl; ++i) {
        int id;
        strin
    }
}