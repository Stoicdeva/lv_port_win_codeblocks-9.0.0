#include "my_gui.h"
#include "lvgl.h"

void my_gui(void){

    lv_obj_t* obj1 = lv_obj_create(lv_screen_active());
    lv_obj_set_size(obj1, 100, 200);
    lv_obj_set_align(obj1, LV_ALIGN_CENTER);

}
