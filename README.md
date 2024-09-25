
# Cub3D

## Description
**cub3D** is a project I worked on, inspired by *Wolfenstein 3D*, the first-ever FPS. I built this project to explore ray-casting, a technique used to create 3D perspectives inside a maze. The objective was to simulate a first-person view and navigate through a maze using simple but efficient algorithms.

In this project, I learned a lot about working with the miniLibX library, handling graphical windows, events, and manipulating colors and textures in C.

---

<img src="https://github.com/Rui-Pedro-Pires/Cub3D/blob/main/Screenshot%20from%202024-09-25%2013-19-20.png">

---
## Features
- First-person 3D perspective inside a maze.
- Wall textures that change based on direction (North, South, East, West).
- Customizable floor and ceiling colors.
- Player movement using `W`, `A`, `S`, and `D`.
- The ability to rotate the view with the arrow keys.
- Smooth window management, including minimizing and restoring without issues.
- The game takes a `.cub` file as input, which defines the maze and textures.

### Map Format
- The map file uses specific characters:
  - `0`: Empty space.
  - `1`: Wall.
  - `N`, `S`, `E`, `W`: Player starting position and orientation.
- Here’s an example of a simple map:
  ```
  111111
  100101
  101001
  1100N1
  111111
  ```
- The `.cub` file also includes textures for the walls and RGB colors for the floor and ceiling.

### Example `.cub` File:
```
NO ./path_to_the_north_texture
SO ./path_to_the_south_texture
WE ./path_to_the_west_texture
EA ./path_to_the_east_texture
F 220,100,0
C 225,30,0

1111111111111111111111111
1000000000110000000000001
1011000001110000000000001
100100000000000000N000001
1111111111111111111111111
```

## Bonus Features
I also added the following bonuses:
- Wall collision detection so the player can't walk through walls.
- A minimap to track the player's position.
- Doors that can open and close.
- Animated sprites.
- Ability to rotate the view using the mouse.

## Installation
To install and run the project, follow these steps:

1. Clone my repository:
   ```bash
   git clone --recurse-submodules git@github.com:Rui-Pedro-Pires/Cub3D.git
   ```
2. Move to the project directory:
   ```bash
   cd Cub3D
   ```
3. Compile the project with the provided `Makefile`:
   ```bash
   make
   ```

## Usage
To start the game, run the following command with the path to a `.cub` file:
```bash
./cub3D path/to/map.cub
```

### Controls:
- Use `W`, `A`, `S`, `D` to move around the maze.
- Rotate your view using the left and right arrow keys.
- Press `ESC` to exit the game.

## Requirements
- C programming language.
- MiniLibX library for graphics rendering.

## External Functions
The project uses the following external functions:
- System calls like `open`, `close`, `read`, `write`, `malloc`, `free`, `perror`, `strerror`, `exit`, `gettimeofday`.
- Functions from the math library (`-lm`).
- Functions from the MiniLibX library.

## Known Issues
The game will return an error if the map file is misconfigured or textures are missing.

## Future Plans
In future updates, I plan to:
- Add more advanced game mechanics like enemies and collectibles.
- Improve rendering performance, especially with larger maps.
