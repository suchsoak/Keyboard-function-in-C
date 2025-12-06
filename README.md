# ⌨️ Keyboard Function in C

**Remap keyboard keys to perform custom functions.**

>[!NOTE]
>You can also use the scripts separately.
>If you don't want to use the keyboard function, try `fn+f2` for example.

## 🚀 Quick Start

By default, the `F2` key launches Firefox. You can change this by editing the `system` command in the file to run whatever you want.

## 📥 Installation & Usage

Download the file and run it using the GCC compiler:

```sh
gcc key.c -o key.exe -lcurses
./key.exe
```

**Or using Makefile:**

```sh
make
```

## 📚 Libraries

| Library | Documentation |
|---------|---|
| 📦 ncurses | https://terminalroot.com.br/ncurses/ |
| 📦 stdio.h | https://petbcc.ufscar.br/stdio/ |
| 📦 stdlib.h | https://petbcc.ufscar.br/stdlib/ |

## ⌨️ Supported Keys

| Key | Function |
|-----|----------|
| `KEY_BACKSPACE` | Backspace key |
| `KEY_DC` | Delete key |
| `KEY_END` | End key |
| `KEY_IC` | Insert key |
| `KEY_LEFT` | Left arrow key |
| `KEY_RIGHT` | Right arrow key |
| `KEY_UP` | Up arrow key |
| `KEY_HOME` | Move cursor to beginning of line/document |
| `KEY_PPAGE` | Page up key |
| `KEY_NPAGE` | Page down key |
| `KEY_FIND` | Search/Find operation |
| `KEY_HELP` | Access help |
| `KEY_EXIT` | Exit program |
| `KEY_BREAK` | Send break signal |
| `KEY_F(n)` | Function keys (F0-F12+) |
| `KEY_RESIZE` | Terminal window resize event |

## License & Copyright 📜
`GNU GENERAL PUBLIC LICENSE`
