#include <string>
#include <cassert>
#include <Dim.h>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float init[] {3, -3, 0.5, 8, -0.85};
    Dim dim (init, sizeof(init) / sizeof(float));
    string test = "0.5 -0.85 0 0 0 0 0 0 0 0 0 3 8 -3";

    cout << static_cast<string>(dim) << endl;
    cout << static_cast<string>(*dim.reorder()) << endl;

    // assert(static_cast<string>(*dim.reorder()) == test);

    float init2[] {2, -3, 1.5, 8, -0.85, 0.5};
    Dim dim2 (init2, sizeof(init2) / sizeof(float));
    string test2 = "-0.85 0.5 0 0 0 0 0 0 0 0 1.5 8 2 -3";
    assert(static_cast<string>(*dim2.reorder()) == test2);


    exit(EXIT_SUCCESS);
}


