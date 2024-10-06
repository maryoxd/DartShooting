[SK]
Hra na strieľanie šípkami
Tento projekt je C++ simuláciou hry na strieľanie šípok. Hráči hádžu šípky a každej šípke je priradené náhodné skóre. Skóre hráčov sa vypočítava na základe šípok, ktoré hodia, a v každom kole je vyradený hráč s najnižším skóre. Hra pokračuje, kým nezostane jeden hráč, ktorý je vyhlásený za víťaza.

Štruktúra projektu
Hra pozostáva z troch hlavných tried:

Hrac: Predstavuje hráča, ukladá jeho meno, klasifikáciu a šípky, ktoré hodí.
Sipka: Predstavuje šípku a ukladá jej skóre.
Hra: Spravuje celkovú hru vrátane hráčov, šípok, kôl a vylúčení.

Popisy tried

Hrac
Vlastnosti:
Meno: Meno hráča.
Klasifikacia: Klasifikácia alebo hodnosť hráča.
sipky: Vektor ukladajúci šípky (predmety Sipka) hádzané hráčom.
Sucet: Celkové skóre nazbierané hráčom zo svojich šípok.
Metódy:
Hrac(string meno, int klasifikácia): Konštruktor, ktorý inicializuje prehrávač menom a klasifikáciou.
getMeno(): Vráti meno hráča.
getKlasifikacia(): Vráti klasifikáciu hráča.
pridajSipku(Sipka sipka): Pridá šípku do zbierky hráča.
dajSipku(int index): Vráti šípku na zadanom indexe.
scitajBody(): Zhŕňa skóre hráčových šípok a aktualizuje Sucet.
vypis(): Vytlačí meno hráča, klasifikáciu, skóre šípok a celkové skóre.
getSucet(): Vráti celkové skóre hráča.
vymazSipky(): Vymaže hráčove šípky do ďalšieho kola.

Sipka
Vlastnosti:
Hodnota: Skóre šípky.
Metódy:
Sipka(int hodnota): Konštruktor, ktorý inicializuje šípku so skóre.
getHodnota(): Vráti skóre šípky.

Hra
Vlastnosti:
hraci: Vektor hráčov (objektov Hrac), ktorí sa zúčastňujú hry.
Metódy:
Hra(): Konštruktor, ktorý inicializuje hru.
pridajHracov(): Pridá do hry piatich hráčov, z ktorých každý má jedinečnú klasifikáciu.
vypisHracov(): Vytlačí podrobnosti o všetkých hráčoch v hre.
rozdajSipky(): Každému hráčovi náhodne pridelí tri šípky so skóre od 0 do 20 a vypočíta ich celkové skóre.
porovnajHracov(Hrac hrac1, Hrac hrac2): Porovná dvoch hráčov. Ak sú ich celkové skóre rovnaké, vyhráva hráč s vyššou klasifikáciou. V opačnom prípade vyhráva hráč s nižším skóre.
Hraj(): Spustí hru, pričom v každom kole eliminuje jedného hráča na základe najnižšieho skóre, kým nezostane jeden hráč. Potom je vyhlásený víťaz.
Ako hra funguje
Vytvorí sa päť hráčov, ktorým sa pridelia náhodné skóre šípok.
Po každom kole sa porovnáva celkové skóre hráčov a hráč s najnižším skóre je vyradený.
Ak majú dvaja hráči rovnaké skóre, ich klasifikácia určí, kto zostane v hre.
Proces sa opakuje, kým nezostane jeden hráč, ktorý je vyhlásený za víťaza.
Šípky hráčov sa vymažú po každom kole a zvyšným hráčom sa pridelia nové skóre.

Budúce vylepšenia
Pridajte podporu pre vstup používateľa na definovanie mien hráčov.
Umožnite konfigurovateľný počet kôl alebo hráčov.
Implementujte rôzne systémy bodovania alebo multiplikátory, aby bola hra náročnejšia.

[EN]
Dart Shooting Game
This project is a C++ simulation of a dart shooting game. Players throw darts, and each dart is assigned a random score. Players' scores are calculated based on the darts they throw, and in each round, the player with the lowest score is eliminated. The game continues until one player remains, who is declared the winner.

Project Structure
The game consists of three main classes:

Hrac: Represents a player, storing their name, classification, and the darts they throw.
Sipka: Represents a dart, storing its score.
Hra: Manages the overall game, including players, darts, rounds, and eliminations.

Class Descriptions

Hrac
Attributes:
Meno: Player's name.
Klasifikacia: Player's classification or rank.
sipky: A vector storing the darts (Sipka objects) thrown by the player.
Sucet: The total score accumulated by the player from their darts.
Methods:
Hrac(string meno, int klasifikacia): Constructor that initializes a player with a name and classification.
getMeno(): Returns the player's name.
getKlasifikacia(): Returns the player's classification.
pridajSipku(Sipka sipka): Adds a dart to the player's collection.
dajSipku(int index): Returns the dart at the specified index.
scitajBody(): Sums up the scores of the player's darts and updates Sucet.
vypis(): Prints the player's name, classification, dart scores, and total score.
getSucet(): Returns the player's total score.
vymazSipky(): Clears the player's darts for the next round.

Sipka
Attributes:
Hodnota: The score of the dart.
Methods:
Sipka(int hodnota): Constructor that initializes a dart with a score.
getHodnota(): Returns the score of the dart.

Hra
Attributes:
hraci: A vector of players (Hrac objects) participating in the game.
Methods:
Hra(): Constructor that initializes the game.
pridajHracov(): Adds five players to the game, each with a unique classification.
vypisHracov(): Prints the details of all the players in the game.
rozdajSipky(): Randomly assigns three darts with scores between 0 and 20 to each player and calculates their total score.
porovnajHracov(Hrac hrac1, Hrac hrac2): Compares two players. If their total scores are equal, the player with the higher classification wins. Otherwise, the player with the lower score wins.
Hraj(): Runs the game, eliminating one player each round based on the lowest score until one player remains. The winner is then declared.
How the Game Works
Five players are created and assigned random dart scores.
After each round, players' total scores are compared, and the player with the lowest score is eliminated.
If two players have the same score, their classification determines who stays in the game.
The process repeats until one player remains, who is declared the winner.
Players' darts are cleared after each round, and new scores are assigned for the remaining players.

Future Improvements
Add support for user input to define player names.
Allow for a configurable number of rounds or players.
Implement different scoring systems or multipliers to make the game more challenging.
