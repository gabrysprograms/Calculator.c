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

## ⚠️ Known Limitations

- **Division by zero is not fully handled** – the program allows it and may return `inf` or cause undefined behavior depending on the compiler.
- **Input buffer issue on restart** – when the user exits the program by pressing a key (e.g., `k`) followed by `Enter`, and then runs the program again, the leftover newline (`\n`) is read immediately. As a result:
  - The program prints the interface once,
  - Immediately reads the `Enter` as input,
  - Prints the interface a second time before accepting a valid action.
- **No persistent memory** – the calculator only keeps the current result and does not support history or memory features.
