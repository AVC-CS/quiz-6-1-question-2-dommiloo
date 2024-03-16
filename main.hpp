#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int writeFile(string& filename)
{
    ofstream ofs(filename);
    if (!ofs) {
        cerr << "Error " << endl; 
        return 0;
    }

    int numEmpl;
    cout << "Enter number of employees: "; 
    cin >> numEmpl;

    ofs << numEmpl << endl;

    for (int i = 0;i < numEmpl; ++i) {
        int id;
        string userName;
        string dpmt;

        double sal;

        cout << "Enter Employee ID, Name, Department, and Salary: ";
        cin >> id >> userName >> dpmt >> sal;

        ofs << id << " " << userName << " " << dpmt << " " << sal << endl;
    }

    ofs.close();
    return numEmpl;

    }
    int readFile(string& filename) {
        ifstream ifs(filename);
        if (!ifs){ 
            cerr << "Error" << endl;
            return 0;
        }

        int numEmpl; 
        ifs >> numEmpl; 

        cout << "Employee count: " << numEmpl << endl;

    

    for ( int i = 0; i < numEmpl; ++i){
        int id; 
        string userName;
        string dpmt;
        double sal;

        ifs >> id >> userName >> dpmt >> sal;

         cout << "ID: " << id << ", Name: " << userName << ", Department: " << dpmt << ", Salary: " << sal << endl;
    }

    ifs.close();

    return numEmpl;

    }