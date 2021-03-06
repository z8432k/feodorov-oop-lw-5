#include <iostream>
#include <string>
#include <cassert>
#include <Dim.h>

using namespace std;

int main(int argc, char** argv) {
    float init[] = {3, -3, 0.5, 8, 0.11, 1, -0.85};

    Dim dim (init, sizeof(init) / sizeof(float));

    assert(dim[0] == 3);
    assert(dim[1] == -3);
    assert(dim[7] == 0);

    Dim dim2;

    assert(dim2[0] == 0);
    assert(dim2[13] == 0);

    exit(EXIT_SUCCESS);
}


