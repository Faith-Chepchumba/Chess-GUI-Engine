# **Chess GUI Engine**

**Project Overview**

The **Chess GUI Engine** is a graphical chess game built using **C++**, **SDL (Simple DirectMedia Layer)**, and optionally **SFML (Simple and Fast Multimedia Library)**. It allows users to play chess by rendering a chessboard and pieces, handling user input, and enforcing chess rules like piece movement, check, checkmate, and castling.

**Features**

•	**Graphical User Interface**: Rendered 8x8 chessboard and pieces using SDL.

•	**Chess Rules Enforcement**: Implements valid piece movements, checks, and checkmate detection.

•	**Piece Selection and Movement**: Allows players to select pieces and move them on the board by clicking on squares.

•	**Real-Time Updates**: The game state updates in real-time with player actions.

•	**Special Moves**: Supports castling and pawn promotion.

•	**Turn-based Gameplay**: Enforces alternate turns between players.

**Dependencies**

This project requires the following dependencies:

•	**SDL2** (Simple DirectMedia Layer): For rendering the chessboard and handling user input.

•	**SDL2_image**: For loading images of chess pieces (PNG files).

•	**Optional**: **SFML** (if using SFML for sound effects or enhanced graphics).

**How to Run**

1.	**Install SDL2**: Make sure you have SDL2 installed on your system. You can download and install it from https://www.libsdl.org/download-2.0.php.

2.	**Compile the Project**:

Use the following command to compile the project (assuming SDL2 is installed):

g++ -o chess_game main.cpp board.cpp piece.cpp input_handler.cpp textures.cpp -lSDL2 -lSDL2_image

3.	**Run the Game**:

Once compiled, you can run the game using the command:

./chess_game

**Project Structure**

The project is organized into several files to separate concerns:

/chess_game

├── main.cpp            # Entry point for the program and game loop

├── board.cpp           # Logic for rendering and updating the chessboard

├── board.h             # Header file for the Board class

├── piece.cpp           # Logic for chess pieces and their movement rules

├── piece.h             # Header file for the Piece class

├── input_handler.cpp   # Handles user input for selecting and moving pieces

├── input_handler.h     # Header file for input handling

├── textures.cpp        # Handles loading and rendering of piece images

├── textures.h          # Header file for texture loading

└── assets              # Folder containing chess piece images (e.g., PNGs)

**Game Instructions**

•	**Select and Move Pieces**: Click on a piece to select it, and then click on a valid destination square to move it. Only legal moves are allowed.

•	**Check and Checkmate**: The game detects check and checkmate situations. If the king is in check, the player must make a move to resolve it.

•	**Special Moves**: Castling and pawn promotion are implemented.

**Chess Piece Assets**

The chess piece images (PNGs) should be stored in the assets directory. The program will load the images dynamically at runtime.

**Known Issues**

•	The game currently does not include AI for playing against the computer.

•	Castling might not work under certain edge cases (e.g., pieces in the way or if the king has moved).

•	No time control or multiplayer network support is included in this version.

**Future Improvements**

•	**AI Opponent**: Implement AI using Minimax with Alpha-Beta pruning.

•	**Sound Effects**: Add sounds for piece movements and captures using **SDL_mixer**.

•	**Multiplayer**: Add online multiplayer support using sockets.

•	**Enhanced Graphics**: Optionally, use **SFML** for smoother rendering and animations.

**Credits**

This project uses:

•	**SDL2** and SDL2_image for rendering and handling chess piece images.

•	Chess piece images are sourced from [OpenGameArt](https://opengameart.org/) 