# 🎯 Dart Shooting Game – C++ Simulation  

**Dart Shooting Game** is a **C++ console-based simulation** of a competitive dart-throwing tournament. Players receive random dart scores, and after each round, the lowest-scoring player is eliminated. The last remaining player is the winner.  

## 🏆 How the Game Works  
1. **Five players** start the game, each receiving **three random darts**.  
2. Each dart has a **random score (0-20)** assigned.  
3. **Players' scores are totaled**, and the lowest-scoring player is eliminated.  
4. If two players have the same score, their **classification rank** determines who stays.  
5. The process repeats until **only one player remains**, who is declared the winner.  

## 📌 Features  
- **Random dart scoring** – Each dart gets a score between 0 and 20.  
- **Turn-based eliminations** – Lowest-scoring player is removed each round.  
- **Tiebreaker logic** – If scores are tied, player classification determines survival.  
- **OOP-based design** – Uses structured classes for **Player, Dart, and Game**.  
- **Fully automated gameplay** – No user input required, runs through all rounds automatically.  

## 🛠️ Technologies Used  
- **C++ (Standard Library & Object-Oriented Programming)**  
- **Random Number Generation (srand, time-based seed)**  
- **Console-based Simulation with Structured Output**  

## 🚀 How to Install & Run  
1. **Clone the repository:**  
   ```bash
   git clone https://github.com/maryoxd/DartShootingGame.git  
   cd DartShootingGame  
2. **Compile and run the game:**
    ```bash
   g++ -o dart_game main.cpp Hrac.cpp Sipka.cpp Hra.cpp  
   ./dart_game  
