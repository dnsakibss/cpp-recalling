
#include <iostream>
using namespace std;

int main() {

    // 1. Basic nested loop
    cout << "\n1. Basic Nested Loop\n";
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << "(" << i << "," << j << ") ";
        }
        cout << endl;
    }

    // 2. Rectangle pattern
    cout << "\n2. Rectangle\n";
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 5; j++)
            cout << "* ";
        cout << endl;
    }

    // 3. Increasing triangle
    cout << "\n3. Increasing Triangle\n";
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
    }

    // 4. Inverted triangle
    cout << "\n4. Inverted Triangle\n";
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
    }

    // 5. Number triangle
    cout << "\n5. Number Triangle\n";
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++)
            cout << j << " ";
        cout << endl;
    }

    // 6. Repeated row number
    cout << "\n6. Repeated Row Number\n";
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++)
            cout << i << " ";
        cout << endl;
    }

    // 7. Inverted number triangle
    cout << "\n7. Inverted Number Triangle\n";
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++)
            cout << j << " ";
        cout << endl;
    }

    // 8. Pyramid
    cout << "\n8. Pyramid\n";
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        for (int k = 1; k <= 2 * i - 1; k++)
            cout << "*";
        cout << endl;
    }

    // 9. Floyd's triangle
    cout << "\n9. Floyd's Triangle\n";
    int num = 1;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++)
            cout << num++ << " ";
        cout << endl;
    }

    // 10. Multiplication table
    cout << "\n10. Multiplication Table\n";
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++)
            cout << i * j << "\t";
        cout << endl;
    }

    // 11. Nested while loop
    cout << "\n11. Nested While Loop\n";
    int i = 1;
    while (i <= 3) {
        int j = 1;
        while (j <= 3) {
            cout << i << "," << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    // 12. Nested do-while loop
    cout << "\n12. Nested Do-While Loop\n";
    i = 1;
    do {
        int j = 1;
        do {
            cout << "* ";
            j++;
        } while (j <= i);
        cout << endl;
        i++;
    } while (i <= 4);

    // 13. Mixed for and while loops
    cout << "\n13. Mixed Loops\n";
    for (int a = 1; a <= 3; a++) {
        int b = 1;
        while (b <= 2) {
            cout << a << "," << b << " ";
            b++;
        }
        cout << endl;
    }

    // 14. if-else checkerboard
    cout << "\n14. Checkerboard\n";
    for (int r = 1; r <= 5; r++) {
        for (int c = 1; c <= 5; c++) {
            if ((r + c) % 2 == 0)
                cout << "* ";
            else
                cout << "- ";
        }
        cout << endl;
    }

    // 15. Continue: skip 3
    cout << "\n15. Continue\n";
    for (int a = 1; a <= 3; a++) {
        for (int b = 1; b <= 5; b++) {
            if (b == 3)
                continue;
            cout << b << " ";
        }
        cout << endl;
    }

    // 16. Break: stop inner loop
    cout << "\n16. Break\n";
    for (int a = 1; a <= 3; a++) {
        for (int b = 1; b <= 5; b++) {
            if (b == 3)
                break;
            cout << b << " ";
        }
        cout << endl;
    }

    // 17. Main diagonal
    cout << "\n17. Main Diagonal\n";
    for (int r = 1; r <= 5; r++) {
        for (int c = 1; c <= 5; c++) {
            if (r == c)
                cout << "D ";
            else
                cout << "- ";
        }
        cout << endl;
    }

    // 18. Unique pairs
    cout << "\n18. Unique Pairs\n";
    for (int a = 1; a <= 4; a++) {
        for (int b = a + 1; b <= 4; b++)
            cout << "(" << a << "," << b << ") ";
        cout << endl;
    }

    // 19. Find pairs with a target sum
    cout << "\n19. Target Sum Pairs\n";
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5, target = 6;
    for (int a = 0; a < size; a++) {
        for (int b = a + 1; b < size; b++) {
            if (arr[a] + arr[b] == target)
                cout << arr[a] << " + " << arr[b] << endl;
        }
    }

    // 20. Traverse a 2D array
    cout << "\n20. 2D Array\n";
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for (int r = 0; r < 2; r++) {
        for (int c = 0; c < 3; c++)
            cout << matrix[r][c] << " ";
        cout << endl;
    }

    // 21. Three nested loops
    cout << "\n21. Three Nested Loops\n";
    for (int a = 1; a <= 2; a++) {
        for (int b = 1; b <= 2; b++) {
            for (int c = 1; c <= 2; c++)
                cout << a << b << c << endl;
        }
    }

    // 22. Changing inner-loop limit
    cout << "\n22. Changing Inner Limit\n";
    for (int a = 1; a <= 4; a++) {
        for (int b = 1; b <= 2 * a; b++)
            cout << b << " ";
        cout << endl;
    }

    // 23. Nested loops with a flag
    cout << "\n23. Stop Both Loops\n";
    bool stop = false;
    for (int a = 1; a <= 5 && !stop; a++) {
        for (int b = 1; b <= 5; b++) {
            if (a == 3 && b == 2) {
                stop = true;
                break;
            }
            cout << a << "," << b << " ";
        }
        cout << endl;
    }

    return 0;
}
