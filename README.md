# Smart Event Ticket Booking System (DS-SLA1)

Data Structures (`CMCOR1PC203`) — Semester III  
**Class:** SYCM2 | **Group:** Group 4 (Roll No. 64–66)  
**Faculty Guide:** Mr. Atul Haribhau Kachare  
**Institution:** Shah & Anchor Kutchhi Engineering College (SAKEC)

---

### Team Members
| Roll No. | Name | Module Responsibility |
| :---: | :--- | :--- |
| **64** | Viraj Ravani | Linear Queue Module (`linear-queue.h`, `linear-queue.c`) |
| **65** | Disha Mahabdi | Circular Queue Module (`circular-queue.h`, `circular-queue.c`) |
| **66** | Mayuri Pawar | Main Menu Driver (`main.c`) & Documentation |

---

### Project Structure
```
DS-SLA1/
├── README.md
├── program/
│   ├── circular-queue.c
│   ├── circular-queue.h
│   ├── linear-queue.c
│   ├── linear-queue.h
│   └── main.c
└── report/
    └── Group4-Review1.pdf
```

---

### Review 1 (CO1) Overview
- **Linear Queue (`linear-queue.c`):** Handles advance event bookings in First-Come, First-Served (FIFO) order (`MAX = 10`).
- **Circular Queue (`circular-queue.c`):** Handles rush bookings, reusing vacated slots through modulo wrap-around `(rear + 1) % CMAX` (`CMAX = 10`).
- **Implementation:** Pointer-free, modular C code using fixed 1D arrays with defensive bounds checking.

---

### Compilation & Execution
```bash
gcc -Wall -Wextra -std=c99 program/main.c program/linear-queue.c program/circular-queue.c -o booking.exe
./booking.exe
```
