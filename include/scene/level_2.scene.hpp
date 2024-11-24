#ifndef LEVEL_2_SCENE
    #define LEVEL_2_SCENE
    #include "Scene.hpp"
    #include "bn_core.h"
    #include "bn_log.h"
    #include "bn_optional.h"
    #include "bn_keypad.h"
    #include "bn_regular_bg_ptr.h"
    #include "bn_regular_bg_items_bg_day.h"
    #include "scene/level_1.scene.hpp"

    class Level2 : public Scene {
        bn::optional<bn::regular_bg_ptr> bg;
        public:
            void load();
            Scene* update();
            void leave();
    };
#endif
