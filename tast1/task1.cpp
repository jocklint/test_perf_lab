#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char* argv[])
{
    int n, m, answer = 1;
    stringstream convert_n(argv[1]);
    stringstream convert_m(argv[2]);
    convert_n >> n;
    convert_m >> m;
    int *mass = new int[n]();
    int k = 1;

    for (int i = 0;i < n; i++) {
        mass[i] = i + 1;
    }

    cout << answer;
    answer = 0;
    while (answer != 1) {
            for (int i = m, j = k - 1; i > 0; i--) {                     
                k = mass[j];
                    j++;
                    if (j == n) 
                        j = 0;
            }
            answer = k;           
        if (answer != 1) {
           cout << answer;
        }
        
    } 

    delete[] mass;

    return 0;
}
