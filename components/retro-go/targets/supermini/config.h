#ifndef RG_CONFIG_H
#define RG_CONFIG_H

#define RG_TARGET_NAME "SUPERMINI-ST7789V"

// Активируем встроенную память 2MB PSRAM платы SuperMini
#define CONFIG_SPIRAM                       1
#define CONFIG_SPIRAM_BOOT_INIT            1
#define CONFIG_SPIRAM_MODE_QUAD            1
#define CONFIG_ESP_CONSOLE_USB_SERIAL_JTAG 1

// Настройки диска (Внутренняя Flash)
#define RG_STORAGE_DRIVER           4  
#define RG_STORAGE_ROOT             "/flash"

// Настройки дисплея ST7789V
#define RG_SCREEN_DRIVER            1  // ST7789
#define RG_SCREEN_WIDTH             320
#define RG_SCREEN_HEIGHT            240
#define RG_SCREEN_ROTATION          RG_SCREEN_ROTATE_90 
#define RG_SCREEN_TYPE              0
#define RG_SCREEN_SPI_CLOCK         20000000 
#define RG_SCREEN_SPI_MODE          3  // Активируем SPI Mode 3 из шпаргалки!

// Твоя проверенная схема подключения экрана SPI
#define RG_GPIO_LCD_MISO            -1
#define RG_GPIO_LCD_MOSI            1  
#define RG_GPIO_LCD_CLK             2  
#define RG_GPIO_LCD_CS              12 
#define RG_GPIO_LCD_DC              11 
#define RG_GPIO_LCD_RST             10 
#define RG_GPIO_LCD_BCKL            -1 

// Подключение 4 кнопок (на GND)
#define RG_GPIO_GAMEPAD_LEFT        6  
#define RG_GPIO_GAMEPAD_RIGHT       7  
#define RG_GPIO_GAMEPAD_A           8  
#define RG_GPIO_GAMEPAD_START       9  

// Заглушки
#define RG_GPIO_GAMEPAD_UP          -1
#define RG_GPIO_GAMEPAD_DOWN        -1
#define RG_GPIO_GAMEPAD_B           -1
#define RG_GPIO_GAMEPAD_SELECT      -1
#define RG_GPIO_GAMEPAD_MENU        -1

#define RG_AUDIO_DRIVER             0  

// Вырезаем мусор, оставляем ТОЛЬКО Game & Watch
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

#endif
