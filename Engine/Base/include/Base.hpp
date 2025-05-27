#pragma once

namespace Engine::Base {
    void AssertFail(const char* conditionStr,
                    const char* message,
                    const char* file,
                    int line);
}

#define EGE_ASSERT(cond, msg)                                           \
    do {                                                                \
        if (!(cond)) {                                                  \
            Engine::Base::AssertFail(#cond, msg, __FILE__, __LINE__);   \
        }                                                               \
    } while (0)