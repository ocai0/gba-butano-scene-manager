#ifndef LEVEL_1_SCENE
    #define LEVEL_1_SCENE
    #include "Scene.hpp"
    #include "bn_core.h"
    #include "bn_log.h"
    #include "bn_optional.h"
    #include "bn_keypad.h"
    #include "bn_regular_bg_ptr.h"
    #include "bn_regular_bg_items_bg_night.h"
    #include "scene/level_2.scene.hpp"

    class Level1 : public Scene {
        bn::optional<bn::regular_bg_ptr> bg;
        public:
            void load();
            Scene* update();
            void leave();
    };
#endif
