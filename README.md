# PRNG-A-8: A Fast and Simple Pseudo-Random Number Generator 🎲

![GitHub release](https://img.shields.io/github/release/DoomKing21/prng-a-8.svg)
![License](https://img.shields.io/badge/license-MIT-blue.svg)

Welcome to **PRNG-A-8**, an extremely fast, statistically weak pseudo-random number generator (PRNG) designed specifically for 8-bit integers. With a period of \(2^9\), this generator offers a simple yet effective way to produce random numbers for various applications. 

## Table of Contents

1. [Introduction](#introduction)
2. [Features](#features)
3. [Installation](#installation)
4. [Usage](#usage)
5. [Examples](#examples)
6. [Contributing](#contributing)
7. [License](#license)
8. [Release Information](#release-information)
9. [Contact](#contact)

## Introduction

In many applications, especially in gaming and simulations, the need for random numbers is crucial. While there are many sophisticated algorithms available, sometimes a simple and fast solution is all you need. PRNG-A-8 is designed to fill that niche. It is perfect for developers who require quick random number generation without the overhead of complex algorithms.

## Features

- **Speed**: Optimized for fast execution, making it suitable for real-time applications.
- **Simplicity**: Easy to implement and understand, ideal for beginners.
- **8-bit Output**: Generates random numbers in the range of 0 to 255.
- **Statistical Weakness**: Not suitable for cryptographic purposes, but great for simulations and games.
- **Compact Code**: Minimalistic design allows for easy integration into existing projects.

## Installation

To get started with PRNG-A-8, you can download the latest release from our [Releases page](https://github.com/DoomKing21/prng-a-8/releases). After downloading, follow these steps to install:

1. Extract the contents of the downloaded file.
2. Place the PRNG-A-8 files in your project directory.
3. Include the necessary files in your project.

## Usage

Using PRNG-A-8 is straightforward. Here’s a basic example of how to use the generator in your code:

```c
#include "prng_a_8.h"

int main() {
    // Initialize the PRNG
    prng_a_8_init();

    // Generate a random number
    uint8_t random_number = prng_a_8_generate();
    
    // Print the random number
    printf("Random Number: %d\n", random_number);
    
    return 0;
}
```

### Function Overview

- `prng_a_8_init()`: Initializes the PRNG.
- `prng_a_8_generate()`: Generates and returns an 8-bit random number.

## Examples

Here are a few examples to illustrate how you can use PRNG-A-8 in different scenarios:

### Example 1: Generating Random Numbers for a Game

If you're developing a simple game, you might want to generate random positions for enemies or items. Here's how you can do that:

```c
#include "prng_a_8.h"

void spawn_enemy() {
    prng_a_8_init();
    uint8_t x = prng_a_8_generate();
    uint8_t y = prng_a_8_generate();
    
    printf("Enemy spawned at (%d, %d)\n", x, y);
}
```

### Example 2: Randomized Testing

In testing scenarios, you may want to generate random inputs. Here’s how you can use PRNG-A-8 for that:

```c
#include "prng_a_8.h"

void test_random_numbers() {
    prng_a_8_init();
    
    for (int i = 0; i < 10; i++) {
        uint8_t random_number = prng_a_8_generate();
        printf("Test Random Number %d: %d\n", i + 1, random_number);
    }
}
```

## Contributing

We welcome contributions to PRNG-A-8! If you would like to help improve the project, please follow these steps:

1. Fork the repository.
2. Create a new branch for your feature or bug fix.
3. Make your changes and commit them.
4. Push your changes to your forked repository.
5. Submit a pull request to the main repository.

Please ensure that your code follows the existing style and includes relevant tests where applicable.

## License

PRNG-A-8 is licensed under the MIT License. You can freely use, modify, and distribute this software as long as you include the original license in your distribution.

## Release Information

For the latest updates and releases, please visit our [Releases page](https://github.com/DoomKing21/prng-a-8/releases). You can download the latest version, which includes all the features and improvements. 

Make sure to check the release notes for any breaking changes or new features added in each version.

## Contact

If you have any questions, suggestions, or feedback, feel free to reach out. You can open an issue on GitHub or contact me directly through my GitHub profile.

Thank you for using PRNG-A-8! We hope it serves your needs well.