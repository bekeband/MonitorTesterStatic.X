.title " Asm functions for produce the B/W small television probe. "
.include "p30f3011.inc"
.include "signals.inc"  ; for PORT definiations 

; dsPIC registers
;.equ CORCONL, CORCON
.global _outframe
.extern _SCREEN_POINTER

.text

; wait 32usec: scrabbled register: W1
; 32 usec = 640 cycles With call, and return 635 cycles
_wait32usec:
  mov   #28, W1   ; 1
wait_loop:
  call  _w1usec   ; 20 cycles
  dec   W1, W1    ; 1
  btss  SR, #Z    ; 1, or 2, if taken
  bra   wait_loop ; 2
  ; 624 + 1 + 2 = 627
  nop
  nop
  nop
  nop
  nop
  nop
  nop
  nop     ; 635
return    ; return 3 cycles

_w250nsec:
; 250 nsec = 1/4 usec waiting. These are 5 cycles of 50nsec times. Two cycles
; in call, and 3 cycles in return.
return

.equiv  HALF_FIELD_LINES,  276

_outframe:

;  mov   #_SCREEN_BUFFER, W1
;  mov   W1, _SCREEN_POINTER

  VIDEO_DISABLE     ; 
  call  _outline
  call  _outline
;  call  _wait32usec ; 2,5 lines front porch
  VSYNC_ON
  call  _outline    ; vertical synchron time
  call  _outline
  call  _outline
  VSYNC_OFF
  mov   #30, W5     ;
loop_003:
  call  _outline
  dec   W5, W5
  btss  SR, #Z
  bra   loop_003
  VIDEO_ENABLE
  ; -------------- here send the one half field to screen ------------------

  mov   #HALF_FIELD_LINES, W5
  mov   _SCREEN_POINTER, W4
loop_004:
  call  _outline
  dec   W5, W5
  btss  SR, #Z
  bra   loop_004


  VIDEO_DISABLE     ;
  call  _outline
  call  _outline
;  call  _wait32usec ; 2,5 lines front porch

  VSYNC_ON
  call  _outline    ; vertical synchron time
  call  _outline
  call  _outline
  VSYNC_OFF

  mov   #30, W5     ;
loop_005:
  call  _outline
  dec   W5, W5
  btss  SR, #Z
  bra   loop_005
  VIDEO_ENABLE

  mov   #HALF_FIELD_LINES, W5
  mov   _SCREEN_POINTER, W4
loop_008:
  call  _outline
  dec   W5, W5
  btss  SR, #Z
  bra   loop_008

  VIDEO_DISABLE

return

; _outline: out the 80 pixel to middle of the scan line.

_outline:
; call time is  0,1 usec
; outhsyncch put the hsync signal to HSYNC PORT
; To 1.6 usec front porch 1,5 usec timing, and 0,1 usec calling time, and 0,05
; usec video blinking command 1,65 usec.

  VIDEO_OFF         ; video blinking for synchron. 0,15 usec
  call  _w1usec     ; 1,15
  call  _w250nsec   ; 1,4
  call  _w250nsec   ; 1,65 usec

; end of front porch 

  HSYNC_ON          ; horizontal synchron on 1,7
  call  _w1usec
  call  _w1usec
  call  _w1usec
  call  _w1usec     ; 5,7
  call  _w250nsec   ; 5,95
  call  _w250nsec   ; 6,2
  call  _w250nsec   ; 6,45 usec hsync time = 4,75

; end of horozontal synchron next back porch

  HSYNC_OFF         ; 6,5

  call  _w1usec
  call  _w1usec
  call  _w1usec
  call  _w1usec
  call  _w1usec     ; 11,5

  call  _w250nsec   ; 11,75

  nop

  mov   #LATB, W3
  mov   #3, W2

;  clr     W1                  ; the video contents inhibited.
  tblrdl  [W4++], W1        ; 0. word

  btst.z  W1, #0;
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #1
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #2
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #3
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #4
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #5
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #6
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #7
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #8
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #9
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #10
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #11
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #12
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #13
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #14
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #15
  bsw.z [W3], W2

  tblrdl  [W4++], W1        ; 16    1. word

  btst.z  W1, #0
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #1
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #2
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #3
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #4
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #5
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #6
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #7
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #8
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #9
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #10
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #11
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #12
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #13
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #14
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #15
  bsw.z [W3], W2

  tblrdl  [W4++], W1      ; 32      2. word

  btst.z  W1, #0
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #1
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #2
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #3
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #4
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #5
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #6
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #7
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #8
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #9
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #10
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #11
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #12
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #13
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #14
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #15
  bsw.z [W3], W2

  tblrdl  [W4++], W1        ; 48        3. word

  btst.z  W1, #0
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #1
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #2
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #3
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #4
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #5
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #6
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #7
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #8
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #9
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #10
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #11
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #12
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #13
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #14
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #15
  bsw.z [W3], W2

  tblrdl  [W4++], W1        ; 64        4. word

  btst.z  W1, #0
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #1
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #2
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #3
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #4
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #5
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #6
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #7
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #8
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #9
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #10
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #11
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #12
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #13
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #14
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #15
  bsw.z [W3], W2

  tblrdl  [W4++], W1        ; 80        5. word

  btst.z  W1, #0
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #1
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #2
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #3
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #4
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #5
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #6
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #7
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #8
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #9
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #10
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #11
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #12
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #13
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #14
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #15
  bsw.z [W3], W2

  tblrdl  [W4++], W1          ; 96      6. word

  btst.z  W1, #0
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #1
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #2
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #3
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #4
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #5
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #6
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #7
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #8
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #9
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #10
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #11
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #12
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #13
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #14
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #15
  bsw.z [W3], W2

  tblrdl  [W4++], W1          ; 112       7. word

  btst.z  W1, #0
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #1
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #2
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #3
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #4
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #5
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #6
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #7
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #8
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #9
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #10
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #11
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #12
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #13
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #14
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #15
  bsw.z [W3], W2

  tblrdl  [W4++], W1          ; 128       8. word

  btst.z  W1, #0
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #1
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #2
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #3
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #4
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #5
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #6
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #7
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #8
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #9
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #10
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #11
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #12
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #13
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #14
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #15
  bsw.z [W3], W2

  tblrdl  [W4++], W1          ; 144       9. word

  btst.z  W1, #0
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #1
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #2
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #3
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #4
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #5
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #6
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #7
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #8
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #9
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #10
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #11
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #12
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #13
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #14
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #15
  bsw.z [W3], W2

  tblrdl  [W4++], W1          ; 160     10. word

  btst.z  W1, #0
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #1
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #2
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #3
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #4
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #5
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #6
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #7
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #8
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #9
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #10
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #11
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #12
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #13
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #14
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #15
  bsw.z [W3], W2

  tblrdl  [W4++], W1          ; 176       11. word

  btst.z  W1, #0
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #1
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #2
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #3
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #4
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #5
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #6
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #7
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #8
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #9
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #10
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #11
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #12
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #13
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #14
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #15
  bsw.z [W3], W2

  tblrdl  [W4++], W1          ; 192       12. word

  btst.z  W1, #0
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #1
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #2
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #3
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #4
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #5
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #6
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #7
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #8
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #9
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #10
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #11
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #12
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #13
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #14
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #15
  bsw.z [W3], W2

  tblrdl  [W4++], W1          ; 208     13. word

  btst.z  W1, #0
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #1
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #2
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #3
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #4
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #5
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #6
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #7
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #8
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #9
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #10
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #11
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #12
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #13
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #14
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #15
  bsw.z [W3], W2

  tblrdl  [W4++], W1          ; 224     14. word

  btst.z  W1, #0
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #1
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #2
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #3
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #4
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #5
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #6
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #7
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #8
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #9
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #10
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #11
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #12
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #13
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #14
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #15
  bsw.z [W3], W2

  tblrdl  [W4++], W1          ; 240     15. word

  btst.z  W1, #0
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #1
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #2
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #3
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #4
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #5
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #6
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #7
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #8
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #9
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #10
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #11
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #12
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #13
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #14
  bsw.z [W3], W2
  INSERT_NOP

  btst.z  W1, #15
  bsw.z [W3], W2
  INSERT_NOP
  mov   W4, W6        ; with W6 return the next word
return                ; 256-th line

_w1usec:
; The calling function are 2 cycles, the return are 3 cycles that summa 5 cycles
; the 1 usec delay must 20 - 5 = 15 nop cycles.
  nop
  nop
  nop
  nop
  nop
  nop
  nop
  nop
  nop
  nop
  nop
  nop
  nop      ;??
;  nop
;  nop
return      ; 3 cycles
.end



