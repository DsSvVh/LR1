#include "lr1.h"

std::pair<double, double> calculateSumAndProduct(const vector<double>& arr, int b, int d) {
    double sumPositive = 0.0;
    double productSegment = 1.0;

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] > 0) {
            sumPositive += arr[i];
        }
        if (i >= b && i <= d) {
            productSegment *= arr[i];
        }
    }

    return std::make_pair(sumPositive, productSegment);
}