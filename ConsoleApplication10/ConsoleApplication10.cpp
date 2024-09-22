#include <iostream>
#include "P3D.h"

using namespace std;

int main()
{
    P3D p1(1, 2, 3);
    P3D::GetCount();

    P3D p2(4, 5, 6);
    P3D::GetCount();

    P3D p3 = p1.Sum(p2);
    p3.Show();
    P3D::GetCount();

    return 0;
}