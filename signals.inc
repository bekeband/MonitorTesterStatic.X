
.NOLIST

.equiv HSYNC_PORT, PORTB

.equiv HINWORD, 22
.equiv VLINE,   286

.macro VIDEO_OFF
  BCLR  PORTB, #3
.endm

.macro VIDEO_ON
  BSET  PORTB, #3
.endm

.macro  VIDEO_DISABLE
  BCLR  LATB, #3
  BSET  TRISB, #3
.endm

.macro  VIDEO_ENABLE
  BCLR  TRISB, #3
.endm

.macro HSYNC_ON
  BSET  PORTB, #1
.endm

.macro HSYNC_OFF
  BCLR  PORTB, #1
.endm

.macro VSYNC_ON
  BSET  PORTB, #2
.endm

.macro VSYNC_OFF
  BCLR  PORTB, #2
.endm

.macro  INSERT_NOP
  nop
  nop
.endm
