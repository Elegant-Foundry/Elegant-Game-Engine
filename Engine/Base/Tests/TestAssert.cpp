//
// Created by Admin on 27/05/2025.
//
#include "Base.hpp"

int main() {
    EGE_ASSERT(2 + 2 == 4, "MATH IS BROKEN!!!!!");
    EGE_ASSERT(2 + 2 == 5, "Intentional Failure");

    return 0;
}