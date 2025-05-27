//
// Created by Admin on 27/05/2025.
//
#include "Base.hpp"
#include "BaseConfig.h"


namespace Engine::Base {
    void AssertFail(const char *conditionStr, const char *message, const char *file, int line) {
        std::cerr
        << "[EDGE ASSERTION FAILED]\n"
        << "   Condition : " << conditionStr << "\n"
        << "   Message   : " << message      << "\n"
        << "   Locations : " << file << ":" << line << "\n";

        std::abort();
    }



}
