#include <iostream>
#include <cmath> // Pour sqrt et pow
using namespace std;

namespace Math {
    namespace Complexe {
        class Complexe {
        private:
            double re, im; // Partie réelle et imaginaire

        public:
            // Constructeur
            Complexe(double r = 0, double i = 0) : re(r), im(i) {}

            // Affichage
            void afficher() const {
                cout << re << " + " << im << "i" << endl;
            }

            // Addition
            Complexe operator+(const Complexe& autre) const {
                return Complexe(re + autre.re, im + autre.im);
            }

            // Multiplication
            Complexe operator*(const Complexe& autre) const {
                double r = re * autre.re - im * autre.im;
                double i = re * autre.im + im * autre.re;
                return Complexe(r, i);
            }

            // Module d'un nombre complexe (|z|)
            double module() const {
                return sqrt(re * re + im * im);
            }
        };
    }
}

int main() {
    using namespace Math::Complexe;

    Complexe c1(3, 4); // 3 + 4i
    Complexe c2(1, 2); // 1 + 2i
    
    Complexe somme = c1 + c2; // Addition
    Complexe produit = c1 * c2; // Multiplication

    cout << "Complexe 1 : ";
    c1.afficher();
    cout << "Complexe 2 : ";
    c2.afficher();
    cout << "Somme : ";
    somme.afficher();
    cout << "Produit : ";
    produit.afficher();
    cout << "Module de c1 : " << c1.module() << endl;

    return 0;
}
