#include <iostream>

void helpMenu();

int main() {
    std::cout << "Welcome to Wumpus Hunt" << std::endl;
    std::cout << "Choose an action: "
                 "m (move), "
                 "s (shoot), "
                 "h (help), "
                 "q (quit)" << std::endl;
    char choice;
    std::cin >> choice;
    while (std::cin) {
        switch (choice) {
            case 'm':
                //TODO -- Move
                //Game Loop
                std::cout << "Move" << std::endl;
                break;
            case 's':
                //TODO -- Shoot
                //Game Loop
                std::cout << "Shoot" << std::endl;
                break;
            case'h':
                // NO GAME LOOP
                helpMenu();
                break;
            case 'q':
                // Probably not allowed...
                exit(0);
            default:
                std::cout << "Invalid Action Choice" << std::endl;
        }
        std::cout << "Choose an action: "
                     "m (move), "
                     "s (shoot), "
                     "h (help), "
                     "q (quit)" << std::endl;
        std::cin >> choice;
    }
}

void helpMenu() {
    std::cout << "Game Goal -> Locate and Kill the Wumpus without falling victim to any of the hazards" << std::endl;
    std::cout << std::endl;
    std::cout << "When transversing the map you will be prompted with bits of information about the adjacent tiles" << std::endl << "Each hazard has an associated prompt." << std::endl;
    std::cout << std::endl;
    std::cout << "Hazards ->" << std::endl <<
                 "Pit - \"You feel a breeze\"" << std::endl <<
                 "Bat - \"You hear Flapping\"" << std::endl <<
                 "Rival Hunter - \"You hear footsteps\"" << std::endl <<
                 "Wumpus - \"You smell something bad\"" << std::endl;
    std::cout << std::endl;
    std::cout << "You are equipped with a Bow & 5 Arrows" << std::endl <<
                 "Each turn you have the option to shoot your weapon into an adjacent tile or move into an adjacent tile" << std::endl <<
                 "Running out of arrows removes you ability to fire you weapon, you can find extra arrows in random tiles across the map." << std::endl;
    std::cout << std::endl;
    std::cout << "Rival Hunter - The Rival Hunter is a moving hazard on the map, he moves once per turn and can end the game by either:" << std::endl;
    std::cout << "a) Killing you when you enter his tile" << std::endl;
    std::cout << "b) Killing the Wumpus before you can" << std::endl;
    std::cout << "The rival hunter can be killed, in the same way the Wumpus is, and if killed drops an upgraded weapon, the Crossbow." << std::endl;
    std::cout << std::endl;
    std::cout << "Bats are a special Hazard which randomly places you somewhere on the map" << std::endl;
    std::cout << std::endl;
    std::cout << "Weapons:" << std::endl;
    std::cout << "Bow - fires into an adjacent tile to the player" << std::endl;
    std::cout << "Crossbow - fires through two tiles, if it hits something in the first it will not continue to the second." << std::endl;
    std::cout << std::endl;
    std::cout << "Loss Conditions -> You can lose the game by entering any tile with a \"lethal\" hazard. These hazards include:" << std::endl;
    std::cout << "Pits" << std::endl;
    std::cout << "Wumpus" << std::endl;
    std::cout << "Rival Hunter" << std::endl;
    std::cout << "The game is also lost if the Rival Hunter succeeds it killing the Wumpus before you can." << std::endl;
    std::cout << std::endl;
    std::cout << "Win Conditions -> The game is won by killing the Wumpus, this is done by firing an arrow into the tile the Wumpus is in" << std::endl;
}
