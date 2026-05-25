# Systems Engineering

A beginner-to-intermediate systems programming repository built using C++ and the Windows API.

This project explores low-level file system and operating system interactions through direct usage of WinAPI functions such as:

- `CreateDirectory`
- `RemoveDirectory`
- `CopyFile`
- `MoveFile`
- `CreateFile`
- `WriteFile`

The repository focuses on understanding how applications interact directly with the Windows operating system beyond standard C++ abstractions.

---

# Objective

The purpose of this repository is to strengthen:

- systems-level programming intuition
- file system interaction understanding
- WinAPI familiarity
- low-level resource handling
- operating-system interaction concepts

Instead of relying purely on STL abstractions, this project directly invokes Windows system calls to understand how the OS handles directories, files, permissions, handles, and I/O operations.

---

# Implemented Programs

## 01_CreateDirectory.cpp

Creates a directory using the Windows API:

```cpp
CreateDirectory()
```

### Concepts Covered

- directory creation
- WinAPI boolean return handling
- error handling using `GetLastError()`
- Unicode path usage (`L"..."`)

### Example

Creates:

```txt
D:\hello
```

---

## 02_RemoveDirectory.cpp

Removes an existing directory using:

```cpp
RemoveDirectory()
```

### Concepts Covered

- directory deletion
- filesystem cleanup
- WinAPI error diagnostics
- handling failed removal attempts

---

## 03_CopyFile.cpp

Copies a file from one location to another using:

```cpp
CopyFile()
```

### Concepts Covered

- file duplication
- path management
- overwrite protection
- filesystem operations

### Example

Copies:

```txt
D:\person3.csv
→
D:\hello\person3.csv
```

---

## 04_MoveFile.cpp

Moves a file between directories using:

```cpp
MoveFile()
```

### Concepts Covered

- file relocation
- filesystem manipulation
- path-based resource movement
- low-level OS file operations

---

## 05_CreateFile.cpp

Creates a new file using the Windows API:

```cpp
CreateFile()
```

### Concepts Covered

- file handle creation
- access permissions
- file creation modes
- Windows HANDLE management

### Important APIs

- `GENERIC_READ`
- `GENERIC_WRITE`
- `CREATE_NEW`

---

## 06_WriteFile.cpp

Writes raw character data into a file using:

```cpp
WriteFile()
```

### Concepts Covered

- low-level file I/O
- byte writing operations
- buffer handling
- DWORD usage
- tracking written bytes
- manual output stream management

### Example Content Written

```txt
this is a demo file
```

---

# Core Systems Concepts Practiced

| Concept | Covered |
|---|---|
| Windows API Programming | Yes |
| File System Operations | Yes |
| HANDLE Management | Yes |
| Error Handling | Yes |
| Raw File I/O | Yes |
| Unicode Path Handling | Yes |
| OS-Level Interaction | Yes |
| Resource Management | Yes |

---

# Technologies Used

- C++
- WinAPI
- Windows System Calls
- Console-based Applications

---

# Why This Repository Matters

This repository represents foundational systems engineering practice.

These programs help build intuition about:

- how operating systems expose services
- how applications communicate with the filesystem
- how resources are managed internally
- how low-level APIs differ from high-level abstractions

Understanding these fundamentals is critical for:

- systems engineering
- cybersecurity
- operating systems
- performance engineering
- backend infrastructure
- low-level tooling
- edge systems development

---

# Future Improvements

Potential future additions:

- ReadFile implementation
- asynchronous I/O
- file locking
- process creation
- registry access
- memory-mapped files
- multithreaded file operations
- socket programming
- custom shell utilities

---

# Author

Vaibhav Haldia

Interests:
- Systems Engineering
- AI Engineering
- Edge AI
- Performance-Oriented Software
- Intelligent Infrastructure Systems

---

# Philosophy

> “To understand intelligent systems deeply, first understand the machine they run on.”
