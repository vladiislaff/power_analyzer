#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "esp_log.h"
#include "mongoose.h"

static const char* tag = "main";

extern "C" void app_main(void)
{
    ESP_LOGW(tag, "Power quality analyzer started!");

    for(;;) {
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}
