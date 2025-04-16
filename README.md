# Cpp exercises various

A collection of programming tasks in C++, sorted by topic and according to good design practices. The code is modular, tested and organised in a way that resembles real production projects.

## Directory structure

```
cpp_exercises_various/
├── CMakeLists.txt
├── leetcode
│   ├── count_chars
│   │   ├── CMakeLists.txt
│   │   ├── include
│   │   ├── src
│   │   └── tests
│   ├── group_anagram
│   │   ├── CMakeLists.txt
│   │   ├── include
│   │   ├── src
│   │   └── tests
│   ├── minimum_number_of_operations
│   │   ├── CMakeLists.txt
│   │   ├── include
│   │   ├── src
│   │   └── tests
│   └── palindrome_number
│       ├── CMakeLists.txt
│       ├── include
│       ├── src
│       └── tests
└── README.md
```
Each tasks is divided into:
- `include/` - headers (`.h`)
- `src/` - implementations (`.cpp`)
- `tests/` - unit tests in Google Test (`.cpp`)

The structure will change as the repository grows.

## Project building and test launch

### 1. Create a build directory in the project root directory and navigate to it:
```
mkdir -p build
cd build
```
### 2. Generate build files via CMake
```
cmake ..
```
### 3. Build the project
```
cmake --build .
```
### 4. Run tests
```
ctest
```

## Technologies and tools
  - C++ Standard 17+
  - CMake 3.10+
  - GoogleTest (GTest)
  - ctest
  
