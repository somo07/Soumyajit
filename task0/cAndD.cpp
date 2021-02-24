class A
{
public:
    int Public;

protected:
    int Protected;

private:
    int Private;
};

class B : public A
{
};

int main(int argc, char **argv)
{
    A P;
    P.Public = 0;
    P.Protected = 0; // error: inaccessible
    P.Private = 0;   // error: inaccessible

    return 0;
}