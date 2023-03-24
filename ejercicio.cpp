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
    
}

int main()
{
    std::string s("There's-a-starman-waiting-in-the-sky");
    int k = 3;

    std::string result = caesarCipher(s, k);
    std::cout << result << std::endl;
}
