# Windows Forms Calculator

A simple calculator application built using C++/CLI and Windows Forms, providing a graphical user interface (GUI) for performing basic arithmetic operations.

## Dependencies

- Microsoft Visual C++ Redistributable Package

Ensure that the appropriate Microsoft Visual C++ Redistributable Package is installed on your system to run the application.

## Usage

1. Compile the code using Microsoft Visual Studio or a compatible C++/CLI compiler.
2. Run the compiled executable.
3. Enter the first number in the left text box and the second number in the right text box.
4. Click the corresponding operation button (+, -, \*, /) to perform the calculation.
5. The result will be displayed in the "Result" label.

## Code Structure

### `MyForm` Class

The `MyForm` class is the main form of the application, containing the user interface elements and handling user interactions.

#### User Interface Elements

- `textBox1`: Text box for entering the first number.
- `textBox2`: Text box for entering the second number.
- `label1`: Label displaying the operation symbol.
- `button1`: Addition button (+).
- `button2`: Subtraction button (-).
- `button3`: Multiplication button (\*).
- `button4`: Division button (/).
- `label2`: Label displaying the result.

#### Event Handlers

- `textBox1_TextChanged`: Handles text changes in the first text box.
- `textBox2_TextChanged`: Handles text changes in the second text box.
- `label1_Click`: Handles clicks on the operation label.
- `button1_Click`: Handles clicks on the addition button (+).
- `button2_Click`: Handles clicks on the subtraction button (-).
- `button3_Click`: Handles clicks on the multiplication button (\*).
- `button4_Click`: Handles clicks on the division button (/).
- `label2_Click`: Handles clicks on the result label.

### `main` Function

The `main` function is the entry point of the application. It sets up the necessary configurations for the Windows Forms application, creates an instance of the `MyForm` class, and starts the application by running the message loop for the form instance.

## Notes

- The application performs integer arithmetic operations. Ensure that the input values are valid integers.
- Error handling and input validation are not implemented in this basic version.
- Feel free to enhance the application by adding additional features, such as support for floating-point operations, error handling, and input validation.
