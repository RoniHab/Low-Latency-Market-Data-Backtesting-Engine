# Low Latency Market Data Backtesting Engine

A C++ project demonstrating the use of Boost.ASIO for high-performance I/O operations.

## Prerequisites

- CMake (>= 3.14)
- C++ Compiler with C++17 support
- Boost Library (>= 1.88.0)

## Installation

### macOS
```bash
# Install dependencies using Homebrew
brew install cmake boost

# Clone the repository
git clone https://github.com/yourusername/Low-Latency-Market-Data-Backtesting-Engine.git
cd Low-Latency-Market-Data-Backtesting-Engine
```

## Building the Project

```bash
# Create build directory
mkdir build
cd build

# Generate build files
cmake ..

# Build the project
make
```

## Running the Application

After building, you can run the application from the build directory:
```bash
./my_app
```

## Project Structure

```
.
├── CMakeLists.txt    # CMake configuration file
├── README.md         # This file
└── src/
    └── main.cpp      # Main application source
```

## Dependencies

- **Boost**: A collection of high-quality, peer-reviewed C++ libraries
  - Currently using Boost.ASIO for asynchronous I/O operations
  - Installation managed through system package manager (Homebrew)

## Development

The project uses CMake as its build system. The main configuration is in `CMakeLists.txt`:
- Configures the project and its dependencies
- Sets up the build targets
- Manages library linking



