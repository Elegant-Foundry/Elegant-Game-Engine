#pragma once
#include <chrono>

namespace Engine::Utility {
    class Timer {
        public:
            using Clock = std::chrono::high_resolution_clock;
            using TimePoint = Clock::time_point;

            void Reset();
            float Tick();
            float Elapsed() const;

        private:
            TimePoint _startTime;
            TimePoint _lastTime;
    };
}