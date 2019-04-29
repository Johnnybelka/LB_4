class Vector
{
    int x;
    int y;
public:
    Vector();
    Vector(int i, int j): x(i), y(j){};
    Vector(const Vector &obj);
    void output();
    void abs();
    void sum(Vector v1, Vector v2);
    void dif(Vector v1, Vector v2);
    ~Vector();
};