#include <bits/stdc++.h>
using namespace std;

vector <int> values;

int N, middle, ub, d1, d2;

int main() {
    cin >> N;
    values.resize(N);

    for(size_t i=0; i<N; i++)
        cin >> values[i];

    sort(values.begin(), values.end());

    middle = (values[0] + values[values.size() - 1]) / 2;

    ub = upper_bound(values.begin(), values.end(), middle) - values.begin();

    d1 = max(values[ub]   - values[0], values[values.size() - 1] - values[ub]);
    d2 = max(values[ub-1] - values[0], values[values.size() - 1] - values[ub-1]);

    printf("%d\n", min(d1, d2)); // print the result
    return 0;
}
