#include "simplearray.h"
using namespace std;

void simpleArray()
{
    float monthsArray[12];

    float total = 0;
    for (int i = 0; i < 12; i++) {
        cout << "Enter amount for a month " << i + 1 << ": ";
        cin >> monthsArray[i];
        total += monthsArray[i];
    }

    float average = total / 12;
    float inTwoYears = average * 24;

    cout << "Total = " << total << endl;
    cout << "Average = " << average << endl;
    cout << "In two years = " << inTwoYears << endl;

    system("pause>0");
}
