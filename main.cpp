#include <iostream>
#include <math.h>

using namespace std;

void triangle_solver(float,float,float,float,float,float);//Prototype function for solving triangles, 6 floats for 3 sides and 3 angles

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}

void triangle_solver(float *a1,float *a2,float *a3,float *s1,float *s2, float *s3)
{
    //try other cases
    //(a2, a3, a1, s2, s3, s1) = triangle_solver(a2, a3, a1, s2, s3, s1)
    int method = 0;
    /*Method stores what method will be used to solve the triangle
    1 - SSS
    2 - SAS
    3 - sSA/ASs
    4 - SsA/AsS
    5 - AAS/SAA
    6 - ASA
    7 - Impossible*/

}