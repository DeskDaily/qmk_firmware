# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = atmel-dfu

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes        # Virtual DIP switch configuration
MOUSEKEY_ENABLE = no          # Mouse keys
EXTRAKEY_ENABLE = yes         # Audio control and System control
CONSOLE_ENABLE = no           # Console for debug
COMMAND_ENABLE = no           # Commands for debug and configuration
NKRO_ENABLE = yes             # USB Nkey Rollover
BACKLIGHT_ENABLE = no         # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = yes         # Enable keyboard RGB underglow
ENCODER_ENABLE = yes
OLED_ENABLE = yes
LTO_ENABLE = yes

OLED_DRIVER = SSD1306
ENCODER_MAP_ENABLE = yes