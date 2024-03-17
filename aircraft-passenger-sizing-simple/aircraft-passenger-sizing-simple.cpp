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

        // Create and environment - local and empty environment
        GRBEnv env = GRBEnv(true);

        // Create the model context
        GRBModel model = GRBModel(env);

        https://www.delta.com/us/en/aircraft/boeing/767-300er
        GRBVar b767_300 = model.addVar(0, 226, );




    } catch (GRBException e) {
        std::cout << "Error code: " << e.getErrorCode() << " ";
        std::cout << "Error message: " << e.getMessage() << std::endl;
    }

    return 0;
}
