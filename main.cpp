#include <iostream>
#include "Calendar.h"
using namespace std;
int main(int argc, char *argv[]) {
    Calendar c = Calendar(12,2020);
    std::cout << c << std::endl;
    string usage = "Usage: calendar <month> <year>";
    if (argc < 3){
        cerr << "Not enough arguments " << endl;
        cerr << usage << endl;
    }
    int year = atoi(argv[2]);
    int month = atoi(argv[1]);
    if ((year < 0) || (year > 3000)){
        cerr << "Invalid year, valid range 0~3000" << endl;
    }
    if ((month < 1 ) || (month > 12)){
        cerr << "Invalid month, range 1~12" << endl;
    }
}
