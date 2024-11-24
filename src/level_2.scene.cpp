#include "scene/level_2.scene.hpp"


void Level2::load() {
    bg = bn::regular_bg_items::bg_day.create_bg(0, 0);
}

Scene* Level2::update() {
    while(true) {
        bn::core::update();

        if(bn::keypad::a_pressed()) {
            BN_LOG("Exiting level2");
            return new Level1;
        }
        bg->set_x(bg->x() + 1);
    }
}
void  Level2::leave() {
    bg.~optional();
}