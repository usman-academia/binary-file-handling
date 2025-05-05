# Student Data Management (C++)

This project demonstrates basic file operations in C++ to manage student records. The program allows the insertion, retrieval, update, and deletion of student data stored in a binary file. Each student is represented by a `Student` class, and all operations are performed on a file called `data.bin`.

Watch [![YouTube](https://www.youtube.com/watch?v=nrTz-GPD1U4&list=PLQR3mV3wWgCobMm44v37pszW_BDf2yK_f)]


The project covers the following concepts:

- Serialization and deserialization of objects
- Reading and writing binary files
- Basic file manipulation using C++

---

## Project Files

- `student.h`: Contains the definition of the `Student` class, including member variables (roll number and name) and methods to display the student data and access its attributes.
- `binary.h`: Defines functions to insert, retrieve, update, and delete student records in the binary file (`data.bin`).
- `run.cpp`: Contains the `main()` function, which demonstrates inserting two student objects into the binary file, and retrieving one by roll number.
- `data.bin`: The binary file where student records are stored.

---

## Functions

### 1. `insertObject(string fileName, Student object)`
Inserts a student object into the binary file.

### 2. `retrieveObject(string fileName, int rollNumber)`
Retrieves and displays a student object by the given roll number.

### 3. `retrieveAllObjects(string fileName)`
Retrieves and displays all student objects stored in the binary file.

### 4. `updateObject(string fileName, int rollNumber, string studentName)`
Updates the name of a student with a specific roll number in the binary file.

### 5. `deleteObject(const char *fileName, int rollNumber)`
Deletes the student object with the specified roll number from the binary file.

## Compilation and Execution

To compile and run the project, follow these steps:

---

## How to Run

### 1. Clone the Repo
git clone https://github.com/usman-academia/binary-file-handling.git

### 2. Change Directory
cd binary-file-handling

### 3. Compile the File
g++ run.cpp -o run

### 4. Execute the File
./run
