#include <fstream>
#include <cstdlib>
#include <iostream>
#include <list>

using namespace std;

/* Expected input */
/*
D(0)={ 2 1 6 0 }
D(1)={ 2 1 4 0 3 }
D(2)={ 2 0 5 4 3 1 }
D(3)={ 0 5 3 6 4 }
D(4)={ 1 0 4 2 3 }
*/

int main() {
    ifstream myReadFile;
    string line;
    list< list<int> > mylist;
    list<int> innerlist;
    myReadFile.open("input.txt");
    if (myReadFile.is_open()) {
        while (!myReadFile.eof()) {
            myReadFile >> line;
            if (line.find('{') == -1) {
                if (line.find('}') == -1) {
                    innerlist.push_back( atoi(line.c_str()) );
                } else {
                    mylist.push_back(innerlist);
                }
            } else {
                innerlist.clear();
            }
        }
    }
    for (list< list<int> >::iterator myit = mylist.begin(); myit != mylist.end(); ++myit) {
        for (list<int>::iterator innerit = (*myit).begin(); innerit != (*myit).end(); ++innerit) {
            cout << " " << *innerit;
        }
        cout << endl;
    }
    myReadFile.close();    
    return 0;
}