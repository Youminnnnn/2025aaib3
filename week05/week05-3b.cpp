/// week05-3b.cpp �T�X�@ �� Part1/Part2 Input/Output
/// Part3: stringstream �_�r Part4: �ϹL�� alorithm
/// CPE �o������2�D UVA 483 Word Scramble ��r�ˤ�
#include <iostream>
#include <sstream> /// Part 3: ��r��Ψ��_�r
#include <string>
#include <algorithm> /// Part 4:�ϹL��, �n�Ψ� algorithm �t��k
using namespace std;
int main()
{
    string line; /// Part1: Input
    while(getline(cin, line)){
    /// Ū�J1��, �@��Ū, Ū��Ctrl-Z�~����
        stringstream ss(line); /// Part 3: ��r��Ψ��_�r
        string word; /// �Ψ��_�r�y
        while ( ss >> word ){
            reverse( word.begin(), word.end() ); /// Part 4:�ϹL��
            cout << " " << word;
        }
        cout << endl; /// ����
        /// Part 2: Output
        /// cout << line << endl; ///���H�K�L�X��
    }
}
