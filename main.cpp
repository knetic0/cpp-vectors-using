#include <iostream>
#include <vector>

using namespace std;

int P(vector<vector<int>> S, int R, int C);
int GI(vector<vector<int>> S, int R, int C);

int main () {

    int R, C;

    cin >> R >> C;

    vector<vector<int>> array;
    array.resize(R * C);

    for (size_t K =0; K < R; K++)
        for(size_t L =0; L < C; L++) {
            array[K].push_back(L);
        }

    P(array, R, C);
    GI(array, R, C);

    return 0;
}

int P(vector<vector<int>> S, int R, int C) {
    cout << "Elements are: " << endl;
    for (int K = 0; K < R; K++) {
        for(int L = 0; L < C; L++){
            cout << S[K][L] << "\t";
        }
        cout << endl;
    }
    return 0;
}

int GI(vector<vector<int>> S, int R, int C) {
    cout << "Information System" << endl;

    cout << "Size: " <<S.size() << endl;
    cout << "Capacity: " << S.capacity() << endl;
    cout << "Max Capacity: " << S.max_size() << endl;

    if (S.empty() == false)
        cout << "Vector is not empty" << endl;
    else
        cout << "Vector is empty" << endl;

    S.erase(S.begin());

    cout << "Size (after erase first element): " << S.size() << endl;

    S.pop_back();

    cout << "Size (after pop last element): " << S.size() << endl;

    int N;
    cin >> N;

    S.emplace_back(N);
    S.emplace(S.begin(), 4);

    cout << "Size (after emplace): " << S.size() << endl;

    // emplace_back -> add value to last index

    return 0;
}