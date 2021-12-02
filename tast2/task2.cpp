#include <iostream>
#include <fstream>
#include <stdio.h>
#include <conio.h>


using namespace std;

int main(int argc, char* argv[])
{

    float point[100][2];
    float circle[2];
    float r;
    int amt = 0, i = 0;
    float answer;
    float buff1, buff2;
    ifstream fin1(argv[1]);
    ifstream fin2(argv[2]);

     fin1 >> circle[0] >> circle[1] >> r;
     fin1.close();
    
     if (!fin2.is_open())
         cout << "File not open!\n";
     else {
         while (fin2 >> buff1 >> buff2) {
             point[i][0] = buff1;
             point[i][1] = buff2;
             amt++;
             i++;
         }
         fin2.close();



         for (int i = 0; i < amt; i++) {
             answer = ((point[i][0] - (circle[0])) * (point[i][0] - (circle[0]))) + ((point[i][1] - (circle[1])) * (point[i][1] - (circle[1])));
             if (answer < (r * r))
                 cout << 1 << "\n";
             else if (answer == (r * r))
                 cout << 0 << "\n";
             else
                 cout << 2 << "\n";
         }
     }

    return 0;
}

