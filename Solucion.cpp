class Solution {
public:
    string sortSentence(string s) {
        vector<string> words;
        stringstream ss(s);
        string word;

        //Extrae las palabras separa por espacio y almacena en word
        while(ss >> word){
            //se van agregando las palabras al vector de palabras
            words.push_back(word);
        }

        for(int i = 1; i < words.size(); i++){
            string key = words[i];
            int keyPosition = key.back() - '0'; //Extraer el digito del final en forma de número.
            int j = i - 1;

            //Comparar posición de key para saber si es menor e ir moviendo los mayores hacia adelante.
            while(j >= 0 && (words[j].back() - '0') > keyPosition){
                words[j + 1] = words[j];
                j--;
            }

            //Insertar la palabra en su posición.
            words[j + 1] = key;
        }

        //Eliminar digito final y poner espacios entre palabras.
        string result;
        for(int i = 0; i < words.size(); i++){
            words[i].pop_back();
            result += words[i];
            if(i != words.size() - 1){
                result += " ";
            }
        }

        return result;
    }
};
