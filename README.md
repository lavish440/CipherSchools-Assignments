# CipherSchools Assignments

This repository contains my solutions to the daily C++ and Data Structures & Algorithms (DSA) assignments provided by CipherSchools. The assignments are organized by day, and each directory contains one or more C++ source files related to that day's tasks, along with the corresponding assignment questions in Markdown format.

## Repository Structure

```
.
├── Day_01/
│ ├── ques01.cpp
│ └── ques01.md
├── Day_02/
│ ├── ques01.cpp
│ └── ques01.md
├── Day_03/
│ ├── ques01.cpp
│ ├── ques01.md
│ ├── ques02.cpp
│ └── ques02.md
├── ...
├── Day_10/
│   ├── ques01.cpp
│   ├── ques01.md
│   ├── ques02.cpp
│   └── ques02.md
├── Makefile
└── README.md
```

## File Descriptions

- **Makefile:** A Makefile to compile and run the all the C++ programs in both release and debug modes.
- **Day_XX:** Each day's folder contains the following:
  - **quesXX.cpp:** The C++ source file for the corresponding assignment solution.
  - **quesXX․md:** The Markdown file containing the assignment question or prompt with example input and output.

Multiple Questions per Day:

- If a day has multiple assignments, they will be numbered sequentially (e.g., `ques01.cpp`, `ques02.cpp`, etc.).

## Compilation and Execution

### Prerequisites

- **g++**: Ensure that the GNU Compiler Collection (g++) is installed on your system.

### Build Instructions

The provided Makefile supports both release and debug builds.

1.  **Build in Release Mode:**

    To compile all the assignments in release mode:

    ```bash
    make
    ```

    This will create executables without any extension corresponding to each .cpp file.

2.  **Build in Debug Mode:**

    To compile all the assignments in debug mode:

    ```bash
    make debug
    ```

    This will create executables with a .debug extension.

3.  **Cleaning Up:**

    To remove all compiled executables:

    ```bash
    make clean
    ```

## Contribution

Feel free to explore, suggest improvements, or report issues. Contributions to enhance the solutions or extend the repository are welcome!

## License

This repository is licensed under the **GNU General Public License v3.0**

See the [LICENSE](LICENSE) file for more details.
