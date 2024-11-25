//Autor: Santiago González
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {

        //Crear cola para representar la fila de estudiantes.
        queue<int> studentQueue;
        for(int student : students){
            studentQueue.push(student);
        }
        
        //Crear indice de sandwiches e inicializar rotaciones de estudiantes para tomar un sandwich
        int i = 0;
        int rotations = 0;

        //Bucle hasta que la cola no este vacia y las rotaciones no excedan el tamaño de la cola
        while(!studentQueue.empty() && rotations < studentQueue.size()){

            //Si el estudiante es igual al numero del vector de sandwiches, el estudiante se elmina de la cola, pasamos al siguiente sandwich incrementando el indice y se reinician las rotaciones a 0
            if(studentQueue.front() == sandwiches[i]){
                studentQueue.pop();
                i++;
                rotations = 0;
            //Si no cumple la condicion anterior, se manda el estudiante al final de la cola y se aumenta las rotaciones
            } else{
                int student = studentQueue.front();
                studentQueue.pop();
                studentQueue.push(student);
                rotations++;
            }
        }
            //Como resultado mandamos el tamaño de la cola con los estudiantes que no pudieron tener un sandwich
            return studentQueue.size();
    }
};
