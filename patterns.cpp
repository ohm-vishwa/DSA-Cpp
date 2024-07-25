#include <iostream>
using namespace std;

// patterns
void pattern1(int n){
    cout << "\npattern 1" << endl;
    for (int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern2(int n){
    cout << "\npattern 2" << endl;
    for (int i = n ; i >= 1 ; i--){
        for(int j = n ; j >= 1 ; j--){
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern3(int n){
    cout << "\npattern 3 " << endl;
    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= i ; j++){
            cout << "*" ;
        }
        cout << endl;
    }
}

void pattern4(int n){
    cout << "\npattern 4 " << endl;
    int x = 1;
    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= i ; j++){
            cout << x++ << " " ;
        }
        cout << endl;
    }
}

void pattern5(int n){
    cout << "\npattern 5 " << endl;
    int x = 1;
    for (int i = 1 ; i <= n+1 ; i++){
        for (int j = 1 ; j < i ; j++){
            cout << x++ << " " ;
        }
        cout << endl;
        x = i;
    }
}

void pattern6(int n){
    cout << "\npattern 6 " << endl;
    int x = 1;
    for (int i = 1 ; i <= n+1 ; i++){
        for (int j = 1 ; j < i ; j++){
            cout << x-- << " " ;
        }
        cout << endl;
        x = i;
    }
}

void pattern7(int n){
    cout << "\npattern 7" << endl;
    char ch = 'A';
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            cout << ch << " " ;
        }
        ch++;
        cout << endl;
    }

}

void pattern8(int n){
    cout << "\npattern 8" << endl;
    char ch = 'A';
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            cout << ch << " " ;
        ch++;
        }
        cout << endl;
    }

}

void pattern9(int n){
    cout << "\npattern 9" << endl;
    char ch = 'A';
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= i ; j++){
            cout << ch << " " ;
        }
        ch++;
        cout << endl;
    }

}

void pattern10(int n){
    cout << "\npattern 10" << endl;
    char ch = 'A';
    ch = ch + n-1;
    char temp = ch;
    for(int i = 1 ; i <= n; i++){
        for(int j = 1 ; j <= i ; j++){
            cout << ch++ << " " ;
        }
        ch = --temp;
        cout << endl;
    }

}

void pattern11(int n){
    cout << "\npattern 11" << endl;
    for(int i = 1 ; i <= n ; i++){
        for(int j = n-1 ; j >= i ; j--){
            cout << "  " ;
        }
        for(int k = 1 ; k <= i ; k++){
            cout << "*" << " ";
        }
        cout << endl;
    }
}

void pattern12(int n){
    cout << "\npattern 12" << endl;
    n++;
    for(int i = 1 ; i < n ; i++){
        for(int j = 1 ; j <= i ; j++){
            cout << " " << " " ;
        }
        for(int k = n-1 ; k >= i ; k--){
            cout << "*" << " ";
        }
        cout << endl;
    }
}

void pattern13(int n){
    cout << "\npattern 13" << endl;
    n++;
    for(int i = 1 ; i < n ; i++){
        for(int j = 1 ; j <= i ; j++){
            cout << " " << " " ;
        }
        for(int k = n-1 ; k >= i ; k--){
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern14(int n){
    cout << "\npattern 14" << endl;
    int num = 1;
    for(int i = 1 ; i <= n ; i++){
        for(int j = n-1 ; j >= i ; j--){
            cout << "  " ;
        }
        for(int k = 1 ; k <= i ; k++){
            cout << num++ << " ";
        }
        cout << endl;
    }
}

void pattern15(int n){
    cout << "\npattern 15" << endl;
    for(int i = 1 ; i <= n ; i++){
        for(int j = n-1 ; j >= i ; j--){
            cout << "  " ;
        }
        for (int k = 1 ; k <= i ; k++){
            cout << k << " ";
        }
        for (int l = i-1 ; l >= 1 ; l--){
            cout << l << " ";
        }
        cout << endl;
    }
}

// Dabang pattern :)
void patter16(int n) {
    cout << "\npattern 16" << endl;
    int temp = n;
    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= temp ; j++){
            cout << j << " ";
        }
        for (int k = 1 ; k < i ; k++){
            if(i == 1){
                continue;
            }
            cout << "* " ;
        }
        for (int k = 1 ; k < i ; k++){
            if(i == 1){
                continue;
            }
            cout << "* " ;
        }
        for (int j = temp ; j >= 1 ; j--){
            cout << j << " ";
        }
        temp--;
        cout << endl;
    }
}

int main(){
    int n;

    cout << "Enter the value of n : ";
    cin >> n;
    pattern1(n);
    pattern2(n);
    pattern3(n);
    pattern4(n);
    pattern5(n);
    pattern6(n);
    pattern7(n);
    pattern8(n);
    pattern9(n);
    pattern10(n);
    pattern11(n);
    pattern12(n);
    pattern13(n);
    pattern14(n);
    pattern15(n);
    patter16(n);
    return 0;
}
