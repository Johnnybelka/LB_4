class Complex
{
    int re;
    int im;
public:
    Complex();
    Complex(int r, int i): re(r), im(i){};
    Complex(const Complex &obj);
    void abs();
    void output();
    ~Complex();
};