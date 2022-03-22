static int i = 20;
int x;

static int g(int p)
{
    return i + p;
}
void f(int v)
{
    x = g(v);
}
