// Izzy Carhart
// CSE 20311
// HW05, part 3

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int inputNumbers(double[], int);
double getMin(const double[], int);
double getMax(const double[], int);
double getSum(const double[], int);
double getStdDev(const double[], int);


int main() {
    double nums[500];
    int size = 500;
    int count = inputNumbers(nums, size);
    double min = getMin(nums, count);
    double max = getMax(nums, count);
    double sum = getSum(nums, count);
    double mean = (sum / count);
    double stdDev = getStdDev(nums, count);

    cout << "min\tmax\tsum\tcount\tmean\tstddev" << endl;
    cout << setprecision(5) << min << setw(2) << "\t";
    cout << setprecision(5) << max << setw(2) << "\t";
    cout << setprecision(5) << sum << setw(2) << "\t";
    cout << setprecision(5) << count << setw(4) << "\t";
    cout << setprecision(5) << mean << setw(3) << "\t";
    cout << setprecision(5) << stdDev << endl;
    return 0;
}

int inputNumbers(double nums[], int size){
    double x;
    int place = 0;
    while (cin >> x) {
        if (place >= 100) {
            cerr << "Too many numbers." << endl;
        }
        else {
            nums[place] = x;
            place += 1;
        }
    }
    return place;
}

double getMin(const double nums[], int size) {
    int min = *(nums);
    for (int i = 0; i < size; i += 1) {
        if (*(nums + i) < min) {
            min = *(nums + i);
        }
    }
    return min;
}

double getMax(const double nums[], int size) {
    int max = *(nums);
    for (int i = 0; i < size; i += 1) {
        if (*(nums + i) > max) {
            max = *(nums + i);
        }
    }
    return max;
}

double getSum(const double nums[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i += 1) {
        sum += *(nums + i);
    }
    return sum;
}

double getStdDev(const double nums[], int size) {
    double sum = getSum(nums, size);
    double avg = (sum / size);
    double difference, total, stdDev;
    total = 0;
    for (int i = 0; i < size; i += 1) {
        difference = (*(nums + i) - avg);
        difference = pow(difference, 2);
        total += difference;
    }
    stdDev = sqrt(total / size);
    return stdDev;
}
