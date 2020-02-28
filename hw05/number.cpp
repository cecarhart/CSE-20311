//Izzy Carhart
//ccarhart
//HW05, part 2
//CSE 20311

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char ** argv) {
    if (argc != 3) {
        cerr << "Invalid arguments." << endl;
        return 0;
    }

    int quantity, max;
    double num;
    quantity = atoi(argv[1]);
    max = atoi(argv[2]);

    srand(time(NULL));

    for (int i = 0; i < quantity; i += 1) {
        num = (rand() / (double)RAND_MAX * max);
        cout << num << endl;
    }
    return 0;
}
