# Earth Defender – Low-Level Game in C/Assembly

**Earth Defender** is a "shoot 'em up" game inspired by *Space Invaders*, developed as the final project for the **Computer Laboratory (LCOM)** course at FEUP.  
The game was implemented in **C and Assembly**, focusing on **low-level hardware programming** such as keyboard, mouse, graphics, and timer.

## 🚀 Features
- **Start Menu** with options: Play, Leaderboard (not fully implemented), Instructions, and Quit.
- **Player spaceship** movement controlled with keyboard:
  - `A` → Move left  
  - `D` → Move right  
  - `P` → Pause / Resume  
  - `Esc` → Exit  
- **Shooting mechanic** controlled with the mouse:
  - Left-click to fire bullets upwards.  
  - Holding click enables continuous shooting.  
- **Video graphics mode** rendering with sprites (XPMs).
- **Timer-based synchronization** to ensure consistent game updates.

## Tech Stack
- **Languages**: C, Assembly
- **Core Components**:
  - `keyboard.c` → Keyboard input handling and interrupts  
  - `mouse.c` → Mouse input handling and interrupts  
  - `timer.c` → Timer configuration and game loop updates  
  - `graphics.c` → Video mode, sprites, HUD, and rendering  

## Gameplay
- Player controls a green spaceship to destroy incoming enemies before they reach Earth.
- Visual style implemented using sprites with custom HUD and font generation.
- Idle mode (game overview screen) shows layout and UI before gameplay starts.

## User Interface
- Simple text-based menus with instructions and rules.
- Leaderboard button included but not functional in final delivery.

## Highlights
- Demonstrates **low-level programming** concepts: interrupts, device drivers, and hardware interaction.  
- Integration of **graphics, input devices, and timing mechanisms** into a complete game.  
- Collaborative project with well-distributed team tasks.

## Authors
- Francisco Rafael dos Santos Borralho  
- Jorge Restivo  
