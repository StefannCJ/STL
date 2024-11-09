#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ifstream inFile("input3.txt");
    int no_problems, no_doctors;
    string name, speciality;

    
    inFile >> no_problems;
    vector<string> numeafectiune;
    vector<string> specialitate;

    for (int i = 0; i < no_problems; i++)
    {
        inFile >> name;
        numeafectiune.push_back(name);
        inFile >> speciality;
        specialitate.push_back(speciality);
       // cout << name << ' ' << speciality << '\n';
    }

    inFile >> no_doctors;
    vector<string> numespecialitatedoctor;

    for (int i = 0; i < no_doctors; i++)
    {
        inFile >> name;
        inFile >> speciality;
        numespecialitatedoctor.push_back(speciality);
       // cout << name << ' ' << speciality << '\n';
    }
    
   int i = 0;
    for (auto nume = numeafectiune.begin(); nume < numeafectiune.end(); nume++) {
        int ok = 0;
        for (auto specialitatedoc = numespecialitatedoctor.begin(); specialitatedoc < numespecialitatedoctor.end(); specialitatedoc++) {
            if (*specialitatedoc == specialitate[i]) {
                cout << numeafectiune[i] << " " << "ACCEPTAT" << endl;
                ok = 1;
                break;
            }
           
        }
        if (ok == 0) {
             cout << numeafectiune[i] << " " << "RESPINS" << endl;
            
            }
        i++;
    }

    return 0;
}