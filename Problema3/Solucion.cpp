//Autor: Santiago González
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val){
        //Si el arbol esta vacio, solo se inserta un nuevo nodo con el valor que se quiere poner.
        if(!root){
            return new TreeNode(val);
        }
        //Si el valor que se quiere poner es menor al valor del nodo actual.
        if(val < root -> val){
            //Lo que hara será movernos hacia el subarbol izquierdo llamando recursivamente la funcion pero ahora del lado izquierdo hasta que se encuentre su posición correcta.
            root -> left = insertIntoBST(root -> left, val);
        //Si sucede lo contrario, que en este caso es que el valor es mayor al valor del nodo actual.
        } else{
            //Nos moveremos hacia el subarbol derecho y de igual manera llamaremos la función recursivamente pero del lado derecho hasta que se encuentre su posición correcta.
            root -> right = insertIntoBST(root -> right, val);
        }

        //Al final cuando el valor se haya insertado de manera correcta regresamos la raiz original del arbol, ahora actualizada con el nuevo nodo.
        return root;
    }
};
