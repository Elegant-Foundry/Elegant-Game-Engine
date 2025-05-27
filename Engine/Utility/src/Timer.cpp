#include "Timer.hpp"

#include <chrono>

namespace Engine::Utility {
    void Timer::Reset() {
        _startTime = Clock::now();
        _lastTime = _startTime;
    }

    float Timer::Tick() {
        auto now = Clock::now();
        std::chrono::duration<float> elapsed = now - _lastTime;
        return elapsed.count();
    }

    float Timer::Elapsed() const {
        std::chrono::duration<float> total = Clock::now() - _startTime;
        return total.count();
    }
}
