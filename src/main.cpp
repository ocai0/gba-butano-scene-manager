#include "bn_core.h"
#include "SceneManager.hpp"
#include "scene/level_1.scene.hpp"


int main() {
    bn::core::init();
    // volatile Level1* level1 = new Level1();
    SceneManager sceneManager;
    sceneManager.next(new Level1);

    while(true) {
        bn::core::update();
        sceneManager.update();
    }
}
