#pragma once
#include <Utility/Timer.hpp>

#include "../../Utility/include/Timer.hpp"

namespace Engine::Managers {
    class GameLoop {
        public:
            void Run();
        private:
            Utility::Timer _timer;
            bool _running = true;

            void Update(float deltaTime);
            void Render();
    };
}
