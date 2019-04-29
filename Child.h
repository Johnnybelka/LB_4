using namespace std;
class Child
{
    char *name;
    char *surname;
    int age;
public:
    Child(char *n, char *s, int a): name(n), surname(s), age(a){};
    Child(const Child &obj);
    ~Child();
    void output();
};