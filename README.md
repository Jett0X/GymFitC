# GymFitC - C-Based Gym Management System

## Overview
GymFitC is a lightweight, efficient, and open-source Gym Management System built using the C programming language. Tailored for small to medium-sized fitness centers, GymFitC leverages C's high performance to provide a robust command-line interface (CLI) for managing gym operations. It streamlines tasks such as member registration, workout tracking, class scheduling, attendance monitoring, and basic reporting, with data stored in text files for simplicity and portability.

This system is ideal for gym owners seeking to digitize operations or developers exploring a performant C-based application. The code examples below demonstrate key functionalities to help developers understand and extend the system.

## Features
- **Member Management**: Register, update, delete, and search member profiles (e.g., name, contact, membership status).
- **Workout Tracking**: Log and track members' workout plans, including exercises and progress.
- **Class Scheduling**: Manage gym class schedules and trainer assignments.
- **Attendance Monitoring**: Record member check-ins and check-outs with timestamped logs.
- **Basic Reporting**: Generate reports on membership, attendance, and active/inactive members.
- **Input Validation**: Ensure robust data integrity with validation checks.
- **File-Based Storage**: Use text files for lightweight, portable data management.
- **High Performance**: Optimized for speed and low resource usage using C.
- **Command-Line Interface**: Intuitive CLI for efficient navigation and operation.

## Installation
Follow these steps to set up GymFitC:

### Prerequisites
- C compiler (e.g., GCC, Clang, or MSVC)
- Text editor or IDE (e.g., VS Code, Code::Blocks)
- Basic command-line knowledge
- Operating System: Windows, Linux, or macOS

### Steps
1. **Clone the Repository**:
   ```bash
   git clone https://github.com/Jett0X/GymFitC
   cd GymFitC
   ```

2. **Compile the Code**:
   Use your C compiler, e.g., GCC:
   ```bash
   gcc -o GymFitC main.c members.c schedules.c attendance.c reports.c
   ```

3. **Run the Application**:
   Execute the binary:
   ```bash
   ./GymFitC
   ```

4. **Verify Setup**:
   The system creates data files (e.g., `members.txt`, `schedules.txt`) in the `data/` directory on first run.

## Usage
1. **Launch the Application**:
   Run the executable to access the main menu via the CLI.

2. **Navigate the Menu**:
   Select options to perform tasks:
   - **1. Add Member**: Enter member details (name, email, plan).
   - **2. View Members**: List all members, sorted by name or ID.
   - **3. Update Member**: Edit existing member details.
   - **4. Delete Member**: Remove a member.
   - **5. Manage Schedules**: Create or view class schedules.
   - **6. Log Attendance**: Record member check-ins/check-outs.
   - **7. Generate Reports**: View membership or attendance summaries.
   - **8. Exit**: Save data and exit.

3. **Data Management**:
   - Data is saved to text files after each operation.
   - Ensure write permissions in the project directory.

## Project Structure
- `main.c`: Main menu and program entry point.
- `members.c`: Member management functions.
- `schedules.c`: Class scheduling functions.
- `attendance.c`: Attendance tracking functions.
- `reports.c`: Report generation functions.
- `data/`: Stores text files (e.g., `members.txt`, `attendance.txt`).

## Contributing
We welcome contributions! To contribute:
1. Fork the repository.
2. Create a feature branch:
   ```bash
   git checkout -b feature/your-feature-name
   ```
3. Commit changes:
   ```bash
   git commit -m "Add feature: description"
   ```
4. Push and submit a pull request.

See [Contributing Guidelines](CONTRIBUTING.md) and [Code of Conduct](CODE_OF_CONDUCT.md).

## Future Enhancements
- Add SQLite support for robust data storage.
- Implement user authentication for admin/staff roles.
- Add payment tracking for membership fees.
- Develop a GUI using SDL or ncurses.

## Contact
- [@JettLouise](https://www.facebook.com/myprivacy19)
- [@rizzigale6@gmail.com](https://mail.google.com/mail/u/0/#inbox)

## Author
- [JETTX](https://github.com/Jett0X)

## Licence
- [MIT Licence](https://github.com/Jett0X/GymFitC/blob/main/LICENSE)

## Acknowledgments
- Inspired by real-world gym management needs.
- Thanks to the open-source community for feedback and resources.
---
Happy managing your gym with GymFitC! 💪