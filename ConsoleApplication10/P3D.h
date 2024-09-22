#pragma once
class P3D
{
    int x, y, z;
    static int count;
public:


    P3D();
    P3D(int x, int y, int z);
    ~P3D();

    void Init(int x, int y, int z);
    void Show();

    P3D Sum(P3D& b);
    P3D Mult(P3D& b);

    P3D& Sum(int x, int y, int z);
    P3D& Min(int x, int y, int z);
    P3D& Mult(int x, int y, int z);
    P3D& Div(int x, int y, int z);

    static void GetCount();
};