# 🖥️ CPP-Learning

Welcome to **CPP-Learning** — a curated, hands‑on collection of C++ lessons and Cython examples. This master README is polished for clarity and visual appeal: it displays the four chart images, organizes files into clear topics, and provides quick navigation and practical setup steps so the repo feels complete and easy to use.

<p align="center">
  <table>
    <tr>
      <td align="center">
        <img src="Important Charts/C++.jpg" alt="C++" width="320"/><br/>
        <sub><strong>C++.jpg</strong></sub>
      </td>
      <td align="center">
        <img src="Important Charts/Cython.jpg" alt="Cython" width="320"/><br/>
        <sub><strong>Cython.jpg</strong></sub>
      </td>
    </tr>
  </table>
</p>

---

## 🔗 QuickLinks

- **[Data Types Info](#-data-types-info)**  
- **[Operator Precedence and Associativity](#-operator-precedence-and-associativity)**  
- **[Repository structure](#-repository-structure)**  
- **[Cython folder inventory](#-cython-folder-inventory)**  
- **[Lessons and examples L1 to L19](#-lessons-and-examples-l1-to-l19)**  
- **[Setup](#-setup)**  
- **[Conclusion](#-conclusion)**

---

## 📚 Data Types Info

<p align="center">
  <img src="Important Charts/DataTypesInfo.jpeg" alt="Data Types Info" width="720"/>
  <br/><sub><strong>DataTypesInfo.jpeg</strong></sub>
</p>

---

<a name="-operator-precedence-and-associativity"></a>
## ⚖️ Operator Precedence and Associativity

<p align="center">
  <img src="Important Charts/OperatorPrecedence&Associativity.jpg" alt="Operator Precedence and Associativity" width="720"/>
  <br/><sub><strong>OperatorPrecedence&Associativity.jpg</strong></sub>
</p>

---

<a name="-repository-structure"></a>
## 🗂️ Repository structure

This repository is organized to make learning progressive and practical. Use the structure below to quickly find lessons, reference charts, and Cython examples.

| **Folder or Topic** | **Purpose** |
|---------------------|-------------|
| **Cython/** | Cython examples, build scripts, notebooks, and native extensions |
| **Important Charts/** | Quick reference images for C++ concepts and logos |
| **Lessons/** | L1 to L19 lesson source files and compiled examples |
| **.vscode/** | Editor settings and workspace configuration |
| **README.md** | This master README |
| **tempCodeRunnerFile.exe** | Temporary runtime artifact (consider removing) |

---

## 🧪 Cython folder inventory

**Location** `Cython/` — **Total items: 21**

**Notebooks**  
- `CythonTutorials.ipynb`  
- `CythonUserGuide.ipynb`

**Binaries**  
- `HelloFunc.cp312-win_amd64.pyd`  
- `rect.cp313-win_amd64.pyd`  
- `queue.exe`

**Source and headers**  
- `Rectangle.c`  
- `Rectangle.cpp`  
- `Rectangle.h`  
- `rect.cpp`  
- `queue.c`  
- `queue.h`  
- `hellopython.c`  
- `hellopython.pyx`  
- `rect.pyx`  
- `Rectangle.py`

**Interface and build files**  
- `Rectangle.pxd`  
- `cqueue.pxd`  
- `setup.py`  
- `setuprect.py`

**Other**  
- `.ipynb_checkpoints/`  
- `Profile.prof`

**Count summary**  
- **Total items:** 21  
- **Jupyter notebooks:** 2  
- **Compiled binaries (.pyd, .exe):** 3  
- **Source files (.c, .cpp, .h, .pyx, .py):** 11  
- **Config and interface files:** 4  
- **Other:** 1

---

## 📘 Lessons and examples L1 to L19

| **Lesson** | **Source file** | **Executable** |
|------------|-----------------|----------------|
| L1 | L1BeginnersLuck.cpp | L1BeginnersLuck.exe |
| L2 | L2OperatorsC++.cpp | L2OperatorsC++.exe |
| L3 | L3VariousEntities.cpp | L3VariousEntities.exe |
| L4 | L4ControlStatements.cpp | L4ControlStatements.exe |
| L5 | L5ArraysandPointers.cpp | L5ArraysandPointers.exe |
| L6 | L6StructUnionandEnum.cpp | L6StructUnionandEnum.exe |
| L7 | L7CallbyRefandCallbyVal.cpp | L7CallbyRefandCallbyVal.exe |
| L8 | L8FunctionTypes.cpp | L8FunctionTypes.exe |
| L9 | L9OOPBasicsC++.cpp | L9OOPBasicsC++.exe |
| L10 | L10FriendKeyword.cpp | L10FriendKeyword.exe |
| L11 | L11ConstructorC++.cpp | L11ConstructorC++.exe |
| L12 | L12Inheritance.cpp | L12Inheritance.exe |
| L13 | L13Polymorphism.cpp | L13Polymorphism.exe |
| L14 | L14FileIO.cpp | L14FileIO.exe |
| L15 | L15TemplatesC++.cpp | L15TemplatesC++.exe |
| L16 | L16VectorSTL.cpp | L16VectorSTL.exe |
| L17 | L17ListSTL.cpp | L17ListSTL.exe |
| L18 | L18MapSTL.cpp | L18MapSTL.exe |
| L19 | L19FunctorSTL.cpp | L19FunctorSTL.exe |

---

<a name="-setup"></a>
## ⚙️ Setup

1. **Clone the repo**
   ```bash
   git clone https://github.com/Kratugautam99/CPP-Learning.git
   cd CPP-Learning
   ```

2. **View charts and images**  
   Open files under `Important Charts/` in the repo browser. If an image does not render in README, confirm the file is committed to the same branch and the filename matches exactly including case and special characters.

3. **Run lessons**  
   Compile `.cpp` files or run provided `.exe` files on Windows. Example:
   ```bash
   g++ L1BeginnersLuck.cpp -o L1BeginnersLuck
   ./L1BeginnersLuck
   ```

4. **Build Cython modules**  
   Open `Cython/` and follow `setup.py` or `setuprect.py` instructions. Use the notebooks for guided examples.

---

## ✅ Conclusion

This README now provides a clear, navigable, and visually appealing home for the repository:

- **Eye catching header** with C++ and Cython logos for immediate recognition  
- **QuickLinks** for fast navigation to key sections  
- **Dedicated visual sections** for charts and reference images  
- **Complete Cython inventory** and **lesson mapping** for easy exploration  
- **Practical setup steps** so newcomers can run examples quickly

**Suggested next improvements for contributors**  
- Add one-line learning objectives for each lesson to guide learners  
- Add `CONTRIBUTING.md` with contribution guidelines and coding style  
- Add a `Makefile` or `build.sh` to automate compiling lessons and building Cython extensions  
- Move large binaries to a `releases/` folder or remove them to keep the repo lightweight

---

## ✍️ Author

**Kratu Gautam** — Aspiring AIML engineer  
Connect via [GitHub](https://github.com/Kratugautam99)
