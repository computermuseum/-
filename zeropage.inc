#importonce

.const cursor_x = $03
.const cursor_y = $04

.const rowptr = $05

/*** KEYBOARD DRIVER. DO NOT CHANGE ***/

.const ScanResult       = $50  // 8 bytes
.const BufferNew        = $58  // 3 bytes
.const KeyQuantity      = $5b  // 1 byte
.const NonAlphaFlagX    = $5c  // 1 byte
.const NonAlphaFlagY    = $5d  // 1 byte
.const TempZP           = $5e  // 1 byte
.const SimultaneousKeys = $5f  // 1 byte
