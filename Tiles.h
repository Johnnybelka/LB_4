class Tiles
{
    char *brand;
    int size_h, size_w, price;
public:
    Tiles(char *b, int h, int w, int p):brand (b), size_h (h), size_w (w), price (p) {};
    void getData();
    ~Tiles();
};
