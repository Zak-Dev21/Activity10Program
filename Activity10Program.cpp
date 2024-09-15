#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int sales = 1'000;

    double commision = (sales > 15'000) ? .2 :
        (sales >= 10'000 && sales <= 15'000) ? .15 : .1;

    cout << "The commision is: " << commision << endl;
}