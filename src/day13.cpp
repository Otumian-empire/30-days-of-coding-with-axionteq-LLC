/* 
problem definition:
    find the inverse of a 2 by 2 matrix
analysis:
    input: a 4-size 1D-array
    output: a 4-sized 1D-array (the inverse)
process:
     if M is a 2x2 matrix, of the form
            [a b]
            [c d]
      and N is the inverse of M, and if its determinant, q,
      is not 0.
      N = (1/q)*A, where A is the M-adj of the form
            [d -b]
            [-c a]
      and q = (ad - bc)
design:
    let M be the 2by2 matric with a, b, c and d as elements
    check if M's determinant, q, is not zero
        find the M-adj, A
	calculat N as, N = (1/q)*A
        display N
    else display that M has no inverse
*/


#include <iostream>

using namespace std;

int main()
{
    int M[4], A[4], q;
    float N[4];

    for (int i = 0; i < 4; i++)
    {
        cout << "enter the elements for " << i << "th indexed element: ";
        cin >> M[i];
    }

    system("clear");

    cout << "Given the Matrix, M = ";
    cout << "[" << M[0] << "  " << M[1]
         << "  " << M[2] << "  " << M[3]
         << "]" << endl;

    q = (M[0]*M[3]) - (M[1]*M[2]);

    cout << "M has a determinant of, d = " << q << endl;
    if (q != 0)
    {
    	// the adjoint of M
        A[0] = M[3];
        A[1] = -1 * M[1];
        A[2] = -1 * M[2];
        A[3] = M[0];

        // the inverse
        N[0] = (1.0/q) * A[0];
        N[1] = (1.0/q) * A[1];
        N[2] = (1.0/q) * A[2];
        N[3] = (1.0/q) * A[3];

        cout << "Thus, M has an inverse, N = ";
        cout << "[" << N[0] << "  " << N[1]
             << "  " << N[2] << "  " << N[3]
             << "]" << endl;
    }
    else
    {
        cout << "Thus, the matrix has no inverse, since the determinant is " << q << endl;
    }

    return 0;
}
