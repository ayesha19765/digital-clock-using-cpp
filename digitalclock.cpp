#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    while (1)
    {
        cout << "----------------------------\nAyesha's Digital Clock:\n"
             << endl;
        time_t result = time(nullptr);
        cout << ctime(&result);
        cout << "----------------------------\n";
        system("clear");
    }
}
