# Lab 2.1 – C Libraries, Linking, and ELF Executable Structure

♦ **Code Files**
- **procinfo.c** → Displays process information using C library functions (`getpid`, `getppid`, `time`, `localtime`, `printf`, `asctime`).
- **procinfo_static** → Statically linked executable (~850KB). Contains all library code inside itself, no external dependencies.
- **procinfo_dynamic** → Dynamically linked executable (~16KB). Loads shared libraries (`libc.so.6`) at runtime.

♦ **What They Do**
- **procinfo.c output** → Prints current process ID, parent process ID, current system time, and executable path (`/proc/self/exe`).
- **procinfo_static** → Runs without needing external `.so` files, but is large in size.
- **procinfo_dynamic** → Runs with shared libraries, smaller size, but requires `libc.so.6` at runtime.

♦ **Key Learning**
- Header files (.h) = declarations only (like manuals).
- Libraries (.a / .so) = actual machine code.
- Static linking = bigger, self‑contained binaries.
- Dynamic linking = smaller, shared libraries, runtime dependencies.
- Tools like `readelf` and `ldd` let us inspect ELF executables and their dependencies.
