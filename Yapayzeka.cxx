#include <iostream>
using namespace std;

string isim;
string komut;
int sifre_1 = 1;

int main() {
    cout << "ismin ne: " << endl;
    getline(cin, isim);
    cout << "merhaba " << isim << endl;

    cout << "lutfen komut girin: " << endl;
    getline(cin, komut);

    while (true) {
        if (komut == "merhaba") {
            cout << "sanada merhaba." << endl;
        }
        else if (komut == "türkiyenin başkenti neresi") {
            cout << "pekala, istanbul." << endl;  
        }
        else if (komut == "saat kaç") {
            cout << "saat kaçmaz." << endl;
        }
        else if (komut == "ismin ne" && sifre_1 <= 5) {
            cout << "çok önemli değil." << endl;
            sifre_1++;
        }
        else if (komut == "ismin ne" && sifre_1 > 5) {
            cout << "Talpayzeka." << endl;
        }
        else if (komut == "mal") {
            cout << "düzgün konuş!" << endl;
        }
        else if (komut == "ben kimim") {
            cout << "kimsin?" << endl;
        }
        else if (komut == "seni kim yaptı") {
            cout << "m. kemal atatürk." << endl;
        }
        else if (komut == "nasıl banka soyarım") {
            cout << "polis aranıyor..." << endl;
        }
          else if (komut == "aya nasıl giderim") {
            cout << "hesaplanıyor..." << endl;
            cout << "hesaplanıyor..." << endl;
            cout << "hesaplanıyor..." << endl;
            cout << "hesaplandı," << endl;
            cout << "Aya biraz zor gidersin!" << endl;           }
            else if (komut == "aya nasıl gidebirim") {
            cout << "hesaplanıyor..." << endl;
            cout << "hesaplanıyor..." << endl;
            cout << "hesaplanıyor..." << endl;
            cout << "hesaplandı," << endl;
            cout << "Aya biraz zor gidersin!" << endl;
        }
        
        else if(komut=="hi guys"){cout << "hello guys" << endl;}
        
        else if(komut=="hi"){cout <<"hello."<<endl;
        }
        
        
        
        
        
        
        
        
        
        else if (komut=="hello"){cout<<"hi"<<endl;}
        else {
            cout << "buna yanıt veremem." << endl;
        }

        cout << "komut: ";
        getline(cin, komut);
    }

    return 0;
}