#include <iostream>
#include <fstream>
#include <stdio.h>
#include <conio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[])
{
    vector <int> numbers;

    int lenght = 0, answer = 0, k = 0;
    ifstream fin(argv[1]);

    if (!fin.is_open())
        cout << "File not open!\n";
    else {
        while (fin >> k) {
            numbers.push_back(k);
            lenght++;
        }fin.close();

        sort(numbers.begin(), numbers.end());

        if ((numbers.size() % 2) == 0) {
            int cen = 0;
            cen = (numbers[numbers.size() / 2] + numbers[(numbers.size() / 2) - 1]) / 2;
            for (int i = numbers.size() / 2 - 1; i >= 0; i--) {
                answer += cen - numbers[i];
            }
            for (int i = numbers.size() - 1; i > (int(numbers.size() / 2 - 1)); i--) {
                answer += numbers[i] - cen;
            }
        }
        else {
            for (int i = numbers.size() - 1; i > (int(numbers.size() / 2)); i--) {
                answer += numbers[i] - numbers[numbers.size() / 2];
            }
            for (int i = (lenght / 2) - 1; i >= 0; i--) {
                answer += numbers[numbers.size() / 2] - numbers[i];
            }

        }

        cout << answer << endl;
    }

    return 0;
}
