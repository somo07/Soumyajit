class A
{
public:
    int xPublic;

protected:
    int xProtected;

private:
    int xPrivate;
};
//Derived class
class B : public A
{
public:
    int pa = 5;

private:
    int pb = 10;

protected:
    int pc = 15;
};

int main(int argc, char **argv)
{
    A a;
    a.xPublic = 0;
    a.xProtected = 0; // error: inaccessible
    a.xPrivate = 0;   // error: inaccessible

    B b;
    b.xPublic = 0;
    b.xProtected = 0; // error: inaccessible
    b.xPrivate = 0;   // error: inaccessible

    return 0;
}
