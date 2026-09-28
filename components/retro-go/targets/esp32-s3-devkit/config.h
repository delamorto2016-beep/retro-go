#pragma once

// Название прошивки под твое железо
#define RG_TARGET_NAME "SUPERMINI-ST7789V"

// Аппаратная конфигурация чипа SuperMini с 2MB PSRAM
#define CONFIG_ESP_CONSOLE_USB_SERIAL_JTAG 1 // Включаем USB для логов, чтобы чип не вис
#define CONFIG_SPIRAM                       1
#define CONFIG_SPIRAM_BOOT_INIT            1

// Настройки накопителя (Виртуальный диск во внутренней Flash-памяти)
#define RG_STORAGE_DRIVER           4  // 4 = Внутренний Flash (FFAT)
#define RG_STORAGE_ROOT             "/flash"

// Конфигурация дисплея ST7789V (240x320)
#define RG_SCREEN_DRIVER            1  // 1 = ST7789
#define RG_SCREEN_WIDTH             320
#define RG_SCREEN_HEIGHT            240
#define RG_SCREEN_ROTATION          RG_SCREEN_ROTATE_90 // Горизонтальный режим
#define RG_SCREEN_TYPE              0
#define RG_SCREEN_SPI_CLOCK         20000000 // Безопасные 20 МГц для стабильного сигнала

// Твоя новая чистая схема подключения экрана SPI без помех
#define RG_GPIO_LCD_MISO            GPIO_NUM_NC // Не используется
#define RG_GPIO_LCD_MOSI            GPIO_NUM_1  // SDA дисплея переподключи на GPIO 1
#define RG_GPIO_LCD_CLK             GPIO_NUM_2  // SCL дисплея переподключи на GPIO 2
#define RG_GPIO_LCD_CS              GPIO_NUM_12 // CS дисплея переподключи на GPIO 12
#define RG_GPIO_LCD_DC              GPIO_NUM_11 // DC дисплея переподключи на GPIO 11
#define RG_GPIO_LCD_RST             GPIO_NUM_10 // RES дисплея переподключи на GPIO 10
#define RG_GPIO_LCD_BCKL            GPIO_NUM_NC // Подсветка напрямую от 3.3В

// Твоя схема подключения 4 кнопок (замыкание контактов на GND)
#define RG_GPIO_GAMEPAD_LEFT        GPIO_NUM_6
#define RG_GPIO_GAMEPAD_RIGHT       GPIO_NUM_7
#define RG_GPIO_GAMEPAD_A           GPIO_NUM_8
#define RG_GPIO_GAMEPAD_START       GPIO_NUM_9

// Заглушки для неиспользуемых системных кнопок
#define RG_GPIO_GAMEPAD_UP          GPIO_NUM_NC
#define RG_GPIO_GAMEPAD_DOWN        GPIO_NUM_NC
#define RG_GPIO_GAMEPAD_B           GPIO_NUM_NC
#define RG_GPIO_GAMEPAD_SELECT      GPIO_NUM_NC
#define RG_GPIO_GAMEPAD_MENU        GPIO_NUM_NC

// Отключаем звук для стабильности первого запуска
#define RG_AUDIO_DRIVER             0  

// Отключаем все лишние тяжелые эмуляторы
#define RG_APP_NES                  0
#define RG_APP_GB                   0
#define RG_APP_GBC                  0
#define RG_APP_SMS                  0
#define RG_APP_GG                   0
#define RG_APP_GEN                  0
#define RG_APP_DOOM                 0
#define RG_APP_COLECO               0
#define RG_APP_GBA                  0

// Оставляем ТОЛЬКО ядро Game & Watch
#define RG_APP_GW                   1
