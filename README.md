CLI Calculator in C

A simple text-based calculator written in C, using the `switch` statement for core logic control.

 Features

- Addition, subtraction, multiplication, division
- Set result to a specific number
- Displays results with precision up to 6 decimal places
- Recognizes both lowercase and uppercase input (e.g., `P`, `p`, `+` for addition)
- Input validation and buffer cleanup
- Program runs in a loop until the user chooses to exit

Educational Purpose

This project was created to practice the use of the `switch` statement in C through an interactive console application.

Technologies

- Language: C (compiled with GCC)
- Standard libraries: `stdio.h`, `string.h`, `ctype.h`

Input Handling

- Accepts numeric input using `scanf`
- Cleans up leftover characters in input buffer
- Handles invalid characters and displays error messages
- Prevents division by zero (optional improvement included)

How It Works

- The program displays a menu with available operations
- The user selects an action by typing a character (e.g., `+`, `m`, `*`, `/`)
- The calculator performs the action on the current result
- The user can update, view or reset the result at any tim
