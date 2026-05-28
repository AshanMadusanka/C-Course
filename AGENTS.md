# AGENTS.md - AI Coding Agent Guide

## Project Overview
This is a **C++ Advance Course** learning project with a CMake-based build system targeting modern C++ (C++20 standard). The codebase currently consists of a simple executable project structure suitable for educational examples and advanced C++ concepts.

## Build & Run

### Build System
- **Tool**: Direct C++ compilation (no CMake/build system configuration)
- **Standard**: C++20
- **Output**: Individual `.exe` files in project root (one per `.cpp` file)

### Build & Run Commands (CLion)
```powershell
# CLion: Right-click any .cpp file → Run (auto-compiles and executes)
# Or use keyboard shortcut: Ctrl+Shift+F10

# Command-line compilation (Windows PowerShell):
g++ -std=c++20 -o FunctionTemplate.exe FunctionTemplate.cpp
./FunctionTemplate.exe
```

### Rebuild After Changes
- CLion auto-compiles on execution (Ctrl+Shift+F10)
- Each `.cpp` file is a standalone, self-contained example with its own `main()`
- No build configuration needed; just edit, save, and run

## Project Structure

```
C-Course/
├── AGENTS.md                         # This file - AI coding agent guide
├── main.cpp                          # Entry point (currently empty)
├── CMakeLists.txt                    # [REMOVED - no longer used]
│
├── Fundamental Concepts
│   ├── Referencing.cpp               # Reference variables and their behavior
│   ├── DynamicMemoryAlloction.cpp    # new/delete, pointer lifecycle
│   ├── pointerArithmatic.cpp         # Pointer arithmetic and operations
│   ├── PassByAddressandReference.cpp # Function parameter passing methods
│
├── Strings & Text Processing
│   ├── strings.cpp                   # C-style string manipulation
│   ├── ReadingWritingString.cpp      # Input/output for strings
│   ├── stringClass.cpp               # std::string class usage
│   ├── stringConCat.cpp              # String concatenation methods
│   ├── strcopy.cpp                   # Safe string copying
│
├── Language Features & Advanced Topics
│   ├── Enum&Typedef.cpp              # Enumerations and type definitions
│   ├── FunctionOverLoading.cpp       # Function overloading patterns
│   ├── FunctionTemplate.cpp          # Template functions (generic programming)
│   ├── ForEachLoop.cpp               # Range-based for loops
│   ├── MultipicationMatrix.cpp       # Multi-dimensional arrays
│
├── .git/                             # Version control
└── .idea/                            # CLion IDE configuration
```

**Note**: Each `.cpp` file is a standalone, compiled example. All outputs are `.exe` files in the project root.

## Code Patterns & Conventions

### Main Entry Point
- Single file project: `main.cpp` contains `int main()`
- Uses `#include <iostream>` for I/O operations
- Outputs via `std::cout` and `std::endl`

### Project Expansion Pattern
To add new features or source files:
1. Create new `.cpp` and `.hpp` files in project root
2. Update `CMakeLists.txt` to include them in `add_executable()` or create separate targets
3. Example: `add_executable(C___Advance_Course main.cpp mycode.cpp)`

## Key Development Notes

- **IDE**: CLion (with integrated CMake support and C++20 syntax highlighting)
- **Version Control**: Git tracking enabled (`.git/` present)
- **No External Dependencies**: Project currently uses only standard C++ library (no conan/vcpkg)
- **Educational Focus**: Code demonstrates C++ concepts like bitwise operators and type conversions

## Common Workflows

### Adding C++ Standard Library Features
- C++20 features available by default
- Ensure new includes are in `<iostream>` or other standard headers
- Test compilation with `cmake --build cmake-build-debug`

### Debugging
- CLion provides integrated debugger
- Build in Debug mode (default) for breakpoint support
- Check `cmake-build-debug/CMakeCache.txt` if build configuration issues arise

