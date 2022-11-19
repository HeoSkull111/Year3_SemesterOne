#include <iostream>
#include <math.h>
#define max 100
using namespace std;
//Khai báo đồ thị
struct Graph {
    int n; //Số đỉnh
    int a[max][max]; //Ma trận kề
};

//Random dãy ma trận kề vô hướng
void randomGraph(Graph &G) {
    srand(time(NULL));
    G.n = 10;
    for (int i = 0; i < G.n; i++) {
        for (int j = 0; j < G.n; j++) {
            G.a[i][j] = 0;
        }
    }
    for (int i = 0; i < G.n; i++) {
        for (int j = i + 1; j < G.n; j++) {
            G.a[i][j] = rand() % 2;
            G.a[j][i] = G.a[i][j];
        }
    }
}
// void randomGraph(Graph &G) {
//     srand(time(NULL));
//     G.n = 5;
//     for (int i = 0; i < G.n; i++) {
//         for (int j = 0; j < G.n; j++) {
//             G.a[i][j] = rand() % 2;
//             if (i == j) {
//                 G.a[i][j] = 0;
//             }
//         }
//     }
// }

//Input đồ thị = tay
void inputGraph(Graph &G) {
    cout << "Nhap so dinh: ";
    cin >> G.n;
    cout << "Luu y: Khi nhap dinh neu muon co dinh o vi tri do thi nhap so 1, neu khong co thi nhap so 0" << endl;
    for (int i = 0; i < G.n; i++) {
        for (int j = 0; j < G.n; j++) {
            cout << "Nhap a[" << i << "][" << j << "]: ";
            cin >> G.a[i][j];
        }
    }
}
//Output
void outputGraph(Graph G) { // In ra ma trận
    for (int i = 0; i < G.n; i++) {
        for (int j = 0; j < G.n; j++) {
            cout << G.a[i][j] << " ";
        }
        cout << endl;
    }
}
//In ra danh sách kề
void outputAdjacent(Graph G) { //In ra theo kiểu từng đỉnh kề với nhau
    for (int i = 0; i < G.n; i++) {
        cout << "Dinh " << i << ": ";
        for (int j = 0; j < G.n; j++) {
            if (G.a[i][j] == 1) {
                cout << j << " ";
            }
        }
        cout << endl;
    }
}
//main
int main() {
    Graph G;
    randomGraph(G);
    // inputGraph(G);
    outputGraph(G);
    outputAdjacent(G);
    return 0;
}