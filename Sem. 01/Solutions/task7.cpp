int main(){
    
    int x; cin >> x;
    int left;
    if (x >= 100) {
        cout <<"100-"<< x / 100<<endl;
        left = x % 100;
    }
    else {
        left = x;
    }
    if (left >= 50) {
        cout <<"50-"<< left / 50<<endl;
        left = left % 50;
    }
    if (left >= 20) {
        cout << "20-" << left / 20 << endl;
        left = left % 20;
    }
    if (left >= 10) {
        cout << "10-" << left/10;
        left %= 10;
    }
    if (left >= 5) {
        cout << "5-" << left / 5 << endl;
        left % 5;
    }
    if (left >= 2) {
        cout << "2-" << left / 2 << endl;
        left % 2;
    }
    if (left == 1) {
        cout << "1-1" << endl;
    }
    return 0;
}
