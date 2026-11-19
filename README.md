# 42 — C programming and system administration

An index of my 42 programming practice and Common Core projects. Each project is an independent Git repository referenced here as a Git submodule, preserving its history.

| Project | Focus |
| --- | --- |
| [C Piscine](piscine) | Introductory C exercises (work in progress) |
| [Libft](0.0__libft) | Static C utility library, memory, strings and linked lists |
| [ft_printf](1.0__ft-printf) | Variadic functions and formatted output |
| [Born2beroot](1.1__born2beroot) | Linux system administration and monitoring script |
| [Get Next Line](1.2__get-next-line) | Buffered file I/O and memory management |

## Checkout

```sh
git clone --recurse-submodules https://github.com/70H4NN2S/42.git
cd 42
```

For an existing checkout:

```sh
git submodule sync --recursive
git submodule update --init --recursive
```

The parent repository pins individual project commits. After independently reviewing and merging a change in a child project, update its pointer deliberately in a separate parent commit.

## Status and attribution

These projects are educational work, not production libraries. The index does not claim that the original projects passed an official evaluation. Exercise subject documents belong to their respective rights holders; confirm redistribution permission before sharing course materials or publishing new copies. Any new AI-assisted reference implementations should be identified as such, distinct from original student work.
