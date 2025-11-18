# Arduino Based Solar Tracker

## Course Snapshot

| Field | Details |
| --- | --- |
| Instructor | Ashraf S A AlMadhoun |
| Hardware Focus | Arduino |
| Course Link | https://www.udemy.com |
| Repository Updated | 2025-11-18 |

## Overview

Arduino Based Solar Tracker is a hands-on course focused on practical Arduino development.
This repository contains curated starter code, wiring notes, and a repeatable workflow
that mirrors the lessons from the video curriculum.

## Learning Objectives

- Understand the core goals of the **Arduino Based Solar Tracker** lessons.
- Map the theoretical material onto executable firmware samples.
- Practice reviewing telemetry / console logs with the provided samples.
- Customize the code to match your target hardware setup.

## Hardware & Components

Consult `CIRCUIT.md` for wiring notes. Typical builds require a development board,
sensors/actuators described in the Arduino Based Solar Tracker videos, jumper wires, and a
USB cable for programming plus logging.

## Setup Instructions

1. Install the latest Arduino IDE or your preferred toolchain.
2. Clone this repository or download it as a ZIP.
3. Review the `README.md`, `CIRCUIT.md`, and `data/` samples.
4. Upload the code to your dev board and monitor the serial console.

## Code Walkthrough

The `*.c` files are intentionally lightweight so you can focus on the core concept taught
in the course. Each file now includes metadata comments that summarize intent, I/O
expectations, and how telemetry maps to the lesson.

## Usage

```bash
# Build and inspect the sample on a desktop toolchain
gcc -Wall -Wextra -std=c11 *.c -o demo && ./demo

# Or upload via Arduino IDE to replicate the Arduino Based Solar Tracker lab
```

## Sample Data

Open `data/sample-telemetry.jsonl` to inspect representative console output. This is
useful when validating your hardware wiring or cloud logging pipeline.

## Additional Notes (Legacy Content)

# Arduino Based Solar Tracker

- Course: Arduino Based Solar Tracker
- Author: Ashraf S A AlMadhoun
- Link: https://www.udemy.com/course/arduino-based-solar-tracker/?couponCode=JULYMAXDICOUNT

## Overview

Use two LDR sensors to detect light imbalance and adjust a servo to keep a solar panel aligned with the strongest light source.

## Code Explained

- Reads left/right LDRs on `A0/A1` and computes their difference.
- Steps the servo left or right to reduce imbalance.
- Prints alignment status messages.

## How To Use

- Place LDRs on either side of the panel with shades to increase directionality.
- Connect the servo to `D9` and power it appropriately.
- Tune thresholds and step size for smooth tracking.

## Purchase With Discount

Enroll with the link above to get a discounted price and full project guidance.
