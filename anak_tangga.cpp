#include <iostream>
#include <map>
#include <set>
#include <string>

using namespace std;
//---dilarang menambah kode di atas batas ini-----

void generate_cara(int n, int step, string current, set<string>& combinations) {
    if (n == 0) {
        combinations.insert(current.substr(0, current.length() - 3));
        return;
    }

    if (n >= 1) {
        generate_cara(n - 1, step, current + "1 + ", combinations);
    }

    if (n >= 3) {
        generate_cara(n - 3, step, current + "3 + ", combinations);
    }
}

void jml_cara(int n) {
    set<string> combinations;
    generate_cara(n, n, "", combinations);

    // Tampilkan setiap kombinasi langkah-langkah
    int count = 0;
    for (const string& combination : combinations) {
        cout << "   " << ++count << ". -> " << combination << endl;
    }

    // Tampilkan jumlah cara
    cout << "Jadi ada " << count << " buah cara. " << endl;
}


int main(){
map <int, int> steps;

return 0;
}
