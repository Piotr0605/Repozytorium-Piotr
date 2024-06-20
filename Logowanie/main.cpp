#include <iostream>
#include <string>

// Funkcja do logowania użytkownika
bool logowanie(std::string &username, std::string &password) {
    std::string inputUsername, inputPassword;
    
    std::cout << "Logowanie\n";
    std::cout << "Podaj nazwę użytkownika: ";
    std::cin >> inputUsername;
    std::cout << "Podaj hasło: ";
    std::cin >> inputPassword;

    
    if (inputUsername == username && inputPassword == password) {
        std::cout << "Zalogowano pomyślnie!\n";
        return true;
    } else {
        std::cout << "Niepoprawne dane logowania.\n";
        return false;
    }
}

// Funkcja do podawania danych użytkownika
void podawanieDanych(std::string &username, std::string &password) {
    std::cout << "Rejestracja\n";
    std::cout << "Podaj nazwę użytkownika: ";
    std::cin >> username;
    std::cout << "Podaj hasło: ";
    std::cin >> password;

    
}

// Funkcja potwierdzająca pomyślną rejestrację
void potwierdzenieRejestracji(const std::string &username) {
    std::cout << "Rejestracja przebiegła pomyślnie!\n";
    std::cout << "Witaj, " << username << "!\n";
}

int main() {
    std::string username, password;

    // Podawanie danych użytkownika
    podawanieDanych(username, password);

    // Potwierdzenie pomyślnej rejestracji
    potwierdzenieRejestracji(username);

    // Logowanie użytkownika
    bool loggedIn = false;
    while (!loggedIn) {
        loggedIn = logowanie(username, password);
        if (!loggedIn) {
            std::cout << "Spróbuj ponownie.\n";
        }
    }

    std::cout << "Koniec programu.\n";
    return 0;
}

