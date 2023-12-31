# EPITECH Pool challenge - speedrun

So you're up for a challenge, huh?

Tools like [LiveSplit](https://github.com/LiveSplit) can help you monitor your progress.  
Find in this folder a [splits file](./challenge.lss) for LiveSplit, as well as a [suggested layout](./challenge.lsl) for the timer.  
You may note that my personal favourite type of run is the **111% nWAVICO full coverage**.

---

## Run types

- **Any%**: Complete all the exercises as fast as possible, using any means necessary (no peer programming allowed).
- **101%**: ^, but also while getting a perfect Valgrind score (no memory leaks, no errors).
- **111%**: ^, but also while respecting the [EPITECH coding style]. Use `make norm` to check your code using my Ruby script.

---

## Difficulty modifiers

- Difficulty amplifiers:
  - **nW**: No Warning. Complete the exercises without leaving any compilation warnings behind (while using `-Wall -Wextra`; `-Werror` is therefore recommended).
  - **nC**: No Copilot. Complete the exercises without any help from a friend.
  - **nI**: No Internet. Complete the exercises without any help from the Internet.
  - **nA**: No Autocomplete. Complete the exercises without any help from your IDE (no IntelliSense, etc.).
  - **nO**: No Optimization. Complete the exercises without any optimization flags (no `-O2`, etc.).
    - **nS**: No Stack. Complete the exercises without using the stack (no local variables, no recursion, etc.).
    - **nL**: No Loop. Complete the exercises without using any loop (no `for`, `while`, `do`). Full recursion mode.
  - **nV**: No Valgrind. Complete the exercises without any help from Valgrind.
  - **full coverage**: Complete the exercises while getting a perfect coverage score (100%). Run `make runc` to run with checking your coverage using `gcovr`.

- Difficulty reducers:
  - **nO**: No Order. Complete the exercises in any order you want.
  - **nM**: No Music. Complete the exercises without any music. Full ASMR mode.
  - **nT**: No Timer. Complete the exercises without any timer. Full Zen mode. But if you're not using a timer, you're not speedrunning, are you?

---

You may **open an issue** if my norm script is not working properly.  
You may **open an issue** if you want to suggest a new type of run.  
You may **open an issue** if you want to suggest a new difficulty modifier.
