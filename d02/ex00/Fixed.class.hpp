class Fixed {
private:
    int _fixed;
    static int const _fbits;
public:
        Fixed (); // Constructeur par défaut
        Fixed (const Fixed&); // Constructeur de recopie
        ~Fixed (); // Destructeur éventuellement virtuel
        Fixed &operator=(const Fixed&); // Operator d'affectation
    int getRawBits(void) const;
    void setRawBits(int const raw);
};