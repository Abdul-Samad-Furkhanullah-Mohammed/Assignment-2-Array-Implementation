#include <iostream>
using namespace std;

int main() {
    int nm_ro, nm_cel;

    // Request matrix dimension
    cout << "Total number of rows: ";
    cin >> nm_ro;
    cout << "Total number of columns: ";
    cin >> nm_cel;

    // A 2D matrix, to store matrix items
    int mtx_dta[nm_ro][nm_cel];
    cout << "Matrix elements (row-wise, 0 for empty field):" << endl;

    // the matrix with user inputs
    for (int ro_idx = 0; ro_idx < nm_ro; ro_idx++) {
        for (int co_idx = 0; co_idx < nm_cel; co_idx++) {
            cin >> mtx_dta[ro_idx][co_idx];
        }
    }

    // output, non zero items in sparse matrix manner
    cout << "Sparse Matrix Format:" << endl;
    for (int ro_idx = 0; ro_idx < nm_ro; ro_idx++) {
        for (int co_idx = 0; co_idx < nm_cel; co_idx++) {
            if (mtx_dta[ro_idx][co_idx] != 0) { 			// Check for non-zero entries
                cout << "Row: " << ro_idx << ", Column: " << co_idx
                     << ", Value: " << mtx_dta[ro_idx][co_idx] << endl;
            }
        }
    }

    return 0;
}
