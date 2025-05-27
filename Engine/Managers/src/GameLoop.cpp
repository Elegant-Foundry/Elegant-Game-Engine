#include "GameLoop.hpp"

namespace Engine::Managers {
    void GameLoop::Run() {
        _timer.Reset();
        while (_running) {
            float deltaTime = _timer.Tick();
            Update(deltaTime);
            Render();
        }
    }

    void GameLoop::Update(float deltaTime) {
        // e.g.:
        //   inputManager.Poll();
        //   physicsManager.Step(deltaTime);
        //   scriptManager.Tick(deltaTime);
        //   sceneManager.Update(deltaTime);
    }

    void GameLoop::Render() {
        // graphicsManager.RenderFrame();
    }
}
