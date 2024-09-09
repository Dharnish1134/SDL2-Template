# SDL2 Project Setup Script

This repository contains a script and template for quickly setting up SDL2 projects. Follow the instructions below to clone the repository, set up your environment, and start creating SDL2 projects.

## Dependencies

### Debian-Based Systems

To install the necessary dependencies on Debian-based systems (e.g., Ubuntu), run:

```bash
sudo apt update
sudo apt install -y libsdl2-dev libsdl2-ttf-dev libsdl2-mixer-dev libsdl2-image-dev
```

### Arch Linux Systems

To install the necessary dependencies on Arch Linux systems, run:

```bash
sudo pacman -S sdl2 sdl2_ttf sdl2_mixer sdl2_image
```

## Cloning the Repository

1. Clone the repository to your local machine:

   ```bash
   git clone https://github.com/Dharnish1134/SDL2-Template.git
   ```

2. Navigate to the cloned repository:

   ```bash
   cd your-repository
   ```

## Setting Up the Environment

1. Ensure that `/usr/local/bin` is included in your `PATH`:

   ```bash
   echo $PATH
   ```

   If `/usr/local/bin` is not in your `PATH`, you can add it by modifying your `.bashrc` or `.zshrc` file:

   ```bash
   export PATH=$PATH:/usr/local/bin
   ```

2. Copy the `create_sdl2_project` script and the `SDL2_template` directory to `/usr/local/bin`:

   ```bash
   sudo cp create_sdl2_project /usr/local/bin/
   sudo cp -r SDL2_template /usr/local/bin/
   ```

   Ensure that you update the `TEMPLATE_DIR` variable in `create_sdl2_project` if you use a different path.

3. Change the owner of the script and template directory to avoid permission issues:

   ```bash
   sudo chown $(whoami):$(whoami) /usr/local/bin/create_sdl2_project
   sudo chown -R $(whoami):$(whoami) /usr/local/bin/SDL2_template
   ```
4. Change the owner of the individual files also and ensure the read-write access to avoid issues:

   ```bash
   sudo chown $(whoami):$(whoami) /usr/local/bin/SDL2_template/src/main.cpp
   sudo chown $(whoami):$(whoami) /usr/local/bin/SDL2_template/src/Makefile
   chmod 644 /usr/local/bin/SDL2_template/src/main.cpp
   chmod 644 /usr/local/bin/SDL2_template/src/Makefile
   ```

5. Set up an alias for the script by adding the following line to your `.bashrc` or `.zshrc` file:

   ```bash
   alias sdl2='create_sdl2_project'
   ```

   Alternatively, you can rename the script to simplify usage.

6. Reload your `.bashrc` or `.zshrc` file to apply the changes:

   ```bash
   source ~/.bashrc
   # or
   source ~/.zshrc
   ```

## Using the Script

1. To create a new SDL2 project, open a terminal and run:

   ```bash
   sdl2 <project-name>
   ```

   Replace `<project-name>` with the desired name for your project.

2. Navigate to the `src` directory of your newly created project:

   ```bash
   cd <project-name>/src
   ```

3. To compile the project, run:

   ```bash
   make
   ```

   If you encounter permission issues, use `sudo`:

   ```bash
   sudo make
   ```

4. To run the compiled project, use:

   ```bash
   make run
   ```

5. To clean up build files, run:

   ```bash
   make clean
   ```

6. If you want to compile and run a custom file (e.g., `new.cpp`), you can specify it in the `Makefile` and then run:

   ```bash
   make run new.cpp
   ```

## Contributing

Contributions are welcome! If you have suggestions, improvements, or bug fixes, please fork the repository and submit a pull request. For major changes, please open an issue to discuss what you would like to change.

1. Fork the repository on GitHub.
2. Create a new branch for your changes.
3. Commit your changes and push to your fork.
4. Open a pull request to the `main` branch of the original repository.

## Thank You

Thank you for using this setup script! I hope it helps you get started with SDL2 projects quickly and easily. If you find this tool useful or have any feedback, please let me know!