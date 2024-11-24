#include "scene/level_1.scene.hpp"



void Level1::load() {
    bg = bn::regular_bg_items::bg_night.create_bg(0, 0);
}

Scene* Level1::update() {
    while(true) {
        bn::core::update();

        if(bn::keypad::a_pressed()) {
            BN_LOG("Exiting level1");
            return new Level2;
        }
        bg->set_x(bg->x() + 1);
    }
}
void  Level1::leave() {
    bg.~optional();
}