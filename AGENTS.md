# AGENTS.md - AI Coding Agent Guide

## Project Overview
This is a **C++ Advance Course** learning project with a CMake-based build system targeting modern C++ (C++20 standard). The codebase currently consists of a simple executable project structure suitable for educational examples and advanced C++ concepts.

## Build & Run

### Build System
- **Tool**: CMake 3.31+
- **Standard**: C++20
- **Output**: Single executable `C___Advance_Course.exe` in `cmake-build-debug/`

### Build Commands (CLion)
```
# Using CMake directly (Windows PowerShell)
cmake -B cmake-build-debug -DCMAKE_BUILD_TYPE=Debug
cmake --build cmake-build-debug
./cmake-build-debug/C___Advance_Course.exe
```

### Rebuild After Changes
- CLion auto-detects CMakeLists.txt changes
- Modify `CMakeLists.txt` if adding/removing `.cpp` files
- Update `CMAKE_CXX_STANDARD` if using features requiring newer C++ version

## Project Structure

```
C++ Advance Course/
├── CMakeLists.txt          # Build configuration (edit to add files)
├── main.cpp                # Entry point (currently demonstrates bit shift operator)
├── cmake-build-debug/      # Build artifacts (auto-generated)
└── .git/                   # Version control
```

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

