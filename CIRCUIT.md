# Arduino Based Solar Tracker — Circuit Schematic

- Course: Arduino Based Solar Tracker
- Author: Ashraf S A AlMadhoun
- Link: https://www.udemy.com/course/arduino-based-solar-tracker/?couponCode=JULYMAXDICOUNT

## Connections

- LDR Left: voltage divider to `A0` (e.g., LDR + 10k resistor).
- LDR Right: voltage divider to `A1`.
- Servo signal → `D9`, power from external 5–6V, common ground.

## Diagram (ASCII)

```
 LDRL --/\/\--+---- A0       Arduino UNO        Servo
               |                     D9 ---- SIG
             [10k]                   5V ---- VCC
               |                     GND --- GND
              GND

 LDRR --/\/\--+---- A1
               |
             [10k]
               |
              GND
```

## Notes

- Use identical resistors in the voltage dividers for consistent readings.
- Calibrate the sensor shields and physical placement.

## Purchase With Discount

Start building with the discounted course — use the link above.

