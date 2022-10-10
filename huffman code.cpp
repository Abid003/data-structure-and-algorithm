#include <bits/stdc++.h>
using namespace std;

map<char, string> table;

void generateHuffmanTree(map<char, int> freq);
string encoder(string str);
string decoder(string str);

int charCount, codeCount;

class HuffmanNode
{
public:
    char character;
    int frequency;

    HuffmanNode *left;
    HuffmanNode *right;

    HuffmanNode(char c, int f)
    {
        character = c;
        frequency = f;
        left = NULL;
        right = NULL;
    }
};

class Compare
{
public:
    bool operator()(HuffmanNode *left, HuffmanNode *right)
    {
        return left->frequency > right->frequency;
    }
};

void generateHuffmanCode(HuffmanNode *node, int code[], int top);

int main()
{
    string str;
    getline(cin, str);

    map<char, int> freq;
    map<char, string>::iterator it;

    /// counting frequency
    for (int i = 0; str[i]; i++)
    {
        freq[str[i]]++;
    }

    generateHuffmanTree(freq);

    for (it = table.begin(); it != table.end(); it++)
    {
        cout << "\" " << it->first << "\"\t" << it->second << endl;
    }

    string encoded = encoder(str);
    cout << "Encoded string:    " << encoded << endl;

    string decoded = decoder(encoded);
    cout << "Decoded string:    " << decoded << endl;

    int totalCost = charCount + codeCount;
    int originalCost = str.size() * 8;
    cout << "Total Cost:    " << totalCost << endl;
    cout << "Original Cost: " << originalCost << endl;

    if (totalCost < originalCost)
    {
        cout << "Optimized: " << 100 - (totalCost * 1.0 / originalCost) * 100 << endl;
    }
    else
        cout << "Not Optimized" << endl;

    return 0;
}

string decoder(string str)
{
    string decoded = "";

    map<string, char> decode;

    map<char, string>::iterator it;

    for (it = table.begin(); it != table.end(); it++)
    {
        decode[it->second] = it->first;
    }

    string temp = "";

    for (int i = 0; str[i]; i++)
    {
        temp += str[i];

        if (decode[temp] != 0)
        {
            decoded += decode[temp];
            temp = "";
        }
    }

    return decoded;
}

string encoder(string str)
{
    string encoded = "";
    for (int i = 0; str[i]; i++)
    {
        encoded += table[str[i]];
    }
    return encoded;
}

void generateHuffmanCode(HuffmanNode *node, int code[], int top)
{
    if (node->left)
    {
        code[top] = 0; // code[0] = 0;
        generateHuffmanCode(node->left, code, top + 1);
    }

    if (node->right)
    {
        code[top] = 1;
        generateHuffmanCode(node->right, code, top + 1);
    }

    if (!node->left && !node->right)
    {
        char ch = node->character;
        string str = "";

        codeCount += top;
        charCount += (top * node->frequency) + 8;

        for (int i = 0; i < top; i++)
        {
            str += (code[i] + 48);
        }

        table[ch] = str;
    }
}

void generateHuffmanTree(map<char, int> freq)
{
    map<char, int>::iterator it;
    priority_queue<HuffmanNode *, vector<HuffmanNode *>, Compare> PQ;

    for (it = freq.begin(); it != freq.end(); it++)
    {
        HuffmanNode *newNode = new HuffmanNode(it->first, it->second);
        PQ.push(newNode);
    }

    while (PQ.size() != 1)
    {
        HuffmanNode *left = PQ.top();
        PQ.pop();
        HuffmanNode *right = PQ.top();
        PQ.pop();

        HuffmanNode *node = new HuffmanNode('*', left->frequency + right->frequency);
        node->left = left;
        node->right = right;
        PQ.push(node);
    }

    HuffmanNode *root = PQ.top();

    int a[100];
    int top = 0;

    generateHuffmanCode(root, a, top);
}
