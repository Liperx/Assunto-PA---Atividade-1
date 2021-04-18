
#include <bits/stdc++.h>
#include <cstring>
using namespace std;

//Função string 
string printSequence(string arr[],
					string input)
{
	string output = "";

	// tamanho da string
	int n = input.length();
	for (int i=0; i<n; i++)
	{
		// checando se tem espaços
		if (input[i] == ' ')
			output = output + "0";

		else
		{
			// calculando o indice para cada
			// caracterer
			int position = input[i]-'A';
			output = output + arr[position];
		}
	}

	// sequencia de saida
	return output;
}

int main(){
char palavra[50];
cout<<"Digite uma palavra: "<<palavra<<endl;
cin>>palavra;

	// armazenar a sequencia da matriz
	string str[] = {"2","22","222",
					"3","33","333",
					"4","44","444",
					"5","55","555",
					"6","66","666",
					"7","77","777","7777",
					"8","88","888",
					"9","99","999","9999"
				};

  string input = "texte";
	cout << printSequence(str, input);
	return 0;
}
