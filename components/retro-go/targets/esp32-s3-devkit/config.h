#ifndef RG_CONFIG_H
#define RG_CONFIG_H

// Сбрасываем любые кривые макросы из командной строки, которые роняли Ninja
#undef TARGET
#undef TARGET_NAME
#undef RG_TARGET_NAME

// Жестко заставляем ядро эмулятора понять, что мы собираем под ESP32-S3
#define CONFIG_SPIRAM                       1
#define CONFIG_SPIRAM_BOOT_INIT            1
#define CONFIG_ESP_CONSOLE_USB_SERIAL_JTAG 1
#define RG_SCREEN_SPI_MODE 3

// Настройки накопителя (Используем внутреннюю Flash-память)
#define RG_STORAGE_DRIVER           4  
#define RG_STORAGE_ROOT             "/flash"

// Настройки дисплея ST7789V 240x320
#define RG_SCREEN_DRIVER            1  // ST7789
#define RG_SCREEN_WIDTH             320
#define RG_SCREEN_HEIGHT            240
#define RG_SCREEN_ROTATION          RG_SCREEN_ROTATE_90 
#define RG_SCREEN_TYPE              0
#define RG_SCREEN_SPI_CLOCK         20000000 // Безопасные 20 МГц

// Твоя новая чистая схема подключения экрана SPI
#define RG_GPIO_LCD_MISO            -1
#define RG_GPIO_LCD_MOSI            1  // Твой новый пин MOSI
#define RG_GPIO_LCD_CLK             2  // Твой новый пин CLK
#define RG_GPIO_LCD_CS              12 // Твой новый пин CS
#define RG_GPIO_LCD_DC              11 // Твой новый пин DC
#define RG_GPIO_LCD_RST             10 // Твой новый пин RST
#define RG_GPIO_LCD_BCKL            -1 // Подсветка напрямую от 3.3В

// Твоя схема подключения 4 кнопок (замыкание на GND)
#define RG_GPIO_GAMEPAD_LEFT        6
#define RG_GPIO_GAMEPAD_RIGHT       7
#define RG_GPIO_GAMEPAD_A           8
#define RG_GPIO_GAMEPAD_START       9

// Заглушки для остальных кнопок
#define RG_GPIO_GAMEPAD_UP          -1
#define RG_GPIO_GAMEPAD_DOWN        -1
#define RG_GPIO_GAMEPAD_B           -1
#define RG_GPIO_GAMEPAD_SELECT      -1
#define RG_GPIO_GAMEPAD_MENU        -1

// Звук выключен
#define RG_AUDIO_DRIVER             0  

// Отключаем все лишние эмуляторы
#define RG_APP_NES                  0
#define RG_APP_GB                   0
#define RG_APP_GBC                  0
#define RG_APP_SMS                  0
#define RG_APP_GG                   0
#define RG_APP_GEN                  0
#define RG_APP_DOOM                 0
#define RG_APP_COLECO               0
#define RG_APP_GBA                  0
#define RG_APP_GW                   1

#endif // RG_CONFIG_H
