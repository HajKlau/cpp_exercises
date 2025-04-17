# Cpp exercises various

A collection of programming tasks in C++, done according to good design practices and sorted by topics. The code is modular, organised and is being tested to resemble real production projects.

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
Each task is divided into:
- `include/` - headers (`.h`)
- `src/` - implementations (`.cpp`)
- `tests/` - unit tests in Google Test (`.cpp`)

The structure will change as the repository will grow.

## Project building and launching tests

### 1. Create a build directory in the project root directory and navigate to it:
```bash
mkdir -p build
cd build
```
### 2. Generate build files via CMake
```bash
cmake ..
```
### 3. Build the project
```bash
cmake --build .
```
### 4. Run tests
```bash
ctest
```

## Technologies and tools
  - C++ Standard 17+
  - CMake 3.10+
  - GoogleTest (GTest)
  - ctest
  
