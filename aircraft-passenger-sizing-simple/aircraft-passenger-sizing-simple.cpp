/*
 * Simple system to determine the best allocation of passengers to aircraft
 * Deepak Shenoy
 * March 2024
 *
 */

#include <iostream>
#include "gurobi_c++.h"

using namespace std;

int main() {

    try {

    } catch (GRBException e) {
        std::cout << "Error code: " << e.getErrorCode() << " ";
        std::cout << "Error message: " << e.getMessage() << std::endl;
    }


    return 0;
}
