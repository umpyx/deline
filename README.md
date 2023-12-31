# DELINE
Simple commandline tool to remove newlines from files

## Usage:
> `deline [FILE]`
>
> OR 
>
> `[COMMAND TO PARSE] | deline`

The output of deline can be piped into a file

## Installation

Currently only installs on linux

1. Clone the repository and navigate to the directory

    `git clone https://github.com/umpyx/deline && cd deline`

2. Verify that the install directory in the Makefile is ok

3. `sudo make install`

4. [Use deline](#usage)

## TODO

- Update from putchar() to printf() to allow for user-inputted strings from stdin to be formatted

- Port build system to cross-platform

- Add Windows and Mac compatibility
