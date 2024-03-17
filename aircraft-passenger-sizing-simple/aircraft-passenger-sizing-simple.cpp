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

        // Create variables - aircraft
        // https://www.delta.com/us/en/aircraft/boeing/767-300er
        GRBVar b767_300er = model.addVar(0, 226, 0, GRB_INTEGER, "b767_300er");
        // https://www.delta.com/us/en/aircraft/airbus/a350
        GRBVar a350_900 = model.addVar(0, 360, 0, GRB_INTEGER, "a350_900");
        // https://www.delta.com/us/en/aircraft/boeing/757-300
        GRBVar b757_300 = model.addVar(0, 234, 0, GRB_INTEGER, "b757_300");
        // https://www.delta.com/us/en/aircraft/boeing/737-900er
        GRBVar b737_900er = model.addVar(0, 180, 0, GRB_INTEGER, "b737_900er");




    } catch (GRBException e) {
        std::cout << "Error code: " << e.getErrorCode() << " ";
        std::cout << "Error message: " << e.getMessage() << std::endl;
    }

    return 0;
}
