#include <iostream>
using namespace std;

int main()
{
    int n, range;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Enter range: ";
    cin >> range;
    
    for (int i = 1; i <= range; ++i) {
            for (int line = 1; line <=40; line++)
            {
                cout << "-";
            }
                cout << "\n";

        cout << "|" << n << "\t" <<" X " << "\t" << i << "\t" << " = " <<"\t" << n * i << "\t" << "|" << endl;
    }
    
    return 0;
}  