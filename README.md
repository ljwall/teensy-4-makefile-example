# Teensy 4.x Makefile project example

This is a sample project, demonstrating building and flashing a Teensy 4.x C++
project from the command line, using a Makefile, without the Arduino IDE, but
still the Teensy Arduino libraries.

The `Makefile` itself is derived from the example in the [Teensy core libraries for Arduino](https://github.com/PaulStoffregen/cores).

# Requirements

- A Linux PC. (May work on mac too, I don't know.)
- The GNU GCC cross compiler for ARM EABI (bare-metal) target, a.k.a.
`arm-none-eabi-gcc`. This is probably in your package repo. Also (though this
is not required) if you install the Arduino IDE and Teensy Loader GUI then
you'll get a copy of the `arm-none-eabi-gcc` tool-chain.
- The [command line Teensy loader application](https://github.com/PaulStoffregen/teensy_loader_cli).
For reference, I've installed it from commit hash `0a9ad5f70ab096d1fef004ced5da7dceea39927a`.

# How-to

1. Clone this repository, including sub-modules. The folder `./cores` is the
Teensy core libraries for Arduino.

```shell
git clone --recurse-submodules  git@github.com:ljwall/teensy-4-makefile-example.git
```

2. Edit the `Makefile`
  - There are two blocks at the top to choose between Teensy 4.0 and 4.1.
  - You may need to update `COMPILERPATH`.
  - You may need to update `TEENSY_LOADER_CLI_PATH`.
3. These steps:

```shell
make
```

will make `main.hex` but not attempt to flash anything.

```shell
make flash
```

will flash `main.hex` to your Teensy 4.x.

# Limitations

- It doesn't do anything clever to work out which parts of the Arduino library
you are using. The whole library is built and linked.
- I've only tested with a Teensy 4.1, but it should work with 4.0 too.
