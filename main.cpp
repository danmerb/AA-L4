/* C++ implementation of QuickSort */
#include <bits/stdc++.h>
using namespace std;
// Una función para cambiar dos elementos
void swap(int* a, int* b)
{
  int t = *a;
  *a = *b;
  *b = t;
}
/* Esta función toma el último elemento como pivote, lo coloca en su posición
correcta en el arreglo y posiciona todos los elementos menores a la izquierda y los
mayores a la derecha de el mismo*/
int partition (int arr[], int low, int high)
{
int pivot = arr[high]; // pivote
int i = (low - 1); // posición del primer elemento
for (int j = low; j <= high - 1; j++)
{
// Si el el elemento actual es menor que el pivote
if (arr[j] < pivot)
{
i++; // incrementar el index del menor elemento
swap(&arr[i], &arr[j]);
}
}
swap(&arr[i + 1], &arr[high]);
return (i + 1);
}
/* La función principal que corre QuickSort
arr[] --> arreglo a ordenar,
low --> límite inicial,
high --> límite final */
void quickSort(int arr[], int low, int high)
{
if (low < high)
{
/*pi es la partición del índice, arr[p] está en el lugar correcto */
int pi = partition(arr, low, high);
// Ordenando separadamente los elementos antes y después de la
// partición
quickSort(arr, low, pi - 1);
quickSort(arr, pi + 1, high);
}
}
/* Función para imprimir arreglo */
void printArray(int arr[], int size)
{
int i;
for (i = 0; i < size; i++)
cout << arr[i] << " ";
cout << endl;
}

///funcion de Missing Number

void missingNumber(){
int t,n,x;
cout<<"ingrese T"<<endl;
cin>>t;
while(t>0)
{

cout<<"ingrese n"<<endl;
cin>>n;
int arr[n];

vector < int> v1;
for( int i=0;i<n;i++)
{

cout<<"ingrese El numero x en la posicion " << i+1<<endl;
cin>>x;
arr[i]=x;
}
quickSort(arr, 0, n - 1);
int mNumber;
if (arr[n-1]%2==0){
  mNumber=(arr[n-1]+2);
}

else{
  mNumber=(arr[n-1]+1);
}

cout<<"Missing Number: "<< mNumber<<endl;
t--;
}

}




// Código principal para utilizarlo
int main()
{
//int arr[] = {1 ,3, 3, 3, 6, 7};

//int x=3;
//int n = sizeof(arr) / sizeof(arr[0]);
//quickSort(arr, 0, n - 1);
//cout << "Sorted array: \n";
//printArray(arr, n);


missingNumber();
return 0;
}