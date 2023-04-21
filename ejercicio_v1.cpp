#include <iostream>

/*
Julius Caesar protected his confidential information by encrypting it using a cipher. 
Caesar's cipher shifts each letter by a number of letters. 
If the shift takes you past the end of the alphabet, just rotate back to the front of the alphabet. 
In the case of a rotation by 3, w, x, y and z would map to z, a, b and c.

Original alphabet:      abcdefghijklmnopqrstuvwxyz
Alphabet rotated +3:    defghijklmnopqrstuvwxyzabc

Example

The alphabet is rotated by , matching the mapping above. The encrypted string is .
s = There's-a-starman-waiting-in-the-sky
k = 3

The encrypted string is
Wkhuh'v-d-vwdupdq-zdlwlqj-lq-wkh-vnb
Note: The cipher only encrypts letters; symbols, such as -, remain unencrypted.

hint: For, ASCII, char, string
*/
std::string caesarCipher(std::string s, int k)
{
    std::string abecedariom("abcdefghijklmnopqrstuvwxyz");
    std::string abecedarioM("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    std::string cifrado("");
    for (int i = 0; i < s.length(); i++)
    {
        char letra = s[i];
        // letra = 'T'
        // Compararla con abecedario
        for (int i = 0; i < abecedariom.length(); i++)
        {
            if (letra == abecedariom[i]) // Es minuscula
            {
                letra = abecedariom[i+k];
            }
            else if (letra == abecedarioM[i]) // Es mayuscula
            {
                letra = abecedarioM[i+k];
            }
        }

        cifrado.push_back(letra);
    }
    
    return cifrado;
}

int main()
{
    std::string mensaje("Ther");
    int k = 3;

    std::string result = caesarCipher(mensaje, k);
    std::cout << result << std::endl;
}
