#include <iostream>
#include <string>

using namespace std;

int main()
{

    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key{"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    string user_input_message{""};
    string secret_message_encrypted{""};
    string secret_message_decrypted{""};

    cout << "Enter message to drecrypt: ";
    getline(cin, user_input_message);
    cout << endl;

    cout << "Your message: " << user_input_message << endl;
    cout << "now encrypting your message" << endl;

    for (char c : user_input_message)
    {
        size_t position = alphabet.find(c);

        if (position != string::npos)
        {
            secret_message_encrypted += key.at(position);
        }
        else
        {
            secret_message_encrypted += c;
        }
    }

    cout << "Encrypted message: " << secret_message_encrypted << endl;
    cout << endl;

    cout << "Decrypting message..." << endl;

    for (char c : secret_message_encrypted)
    {
        size_t position = key.find(c);

        if (position != string::npos)
        {
            secret_message_decrypted += alphabet.at(position);
        }
        else
        {
            secret_message_decrypted += c;
        }
    }

    cout << "Decrypted message: " << secret_message_decrypted << endl;

    return 0;
}
