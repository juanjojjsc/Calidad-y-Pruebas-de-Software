#include <iostream>
#include <ctime>
#include <algorithm>

using namespace std;




int* bubbleSort(int a[], int n)
{
    int i,j,temp;
    for(i=1;i<n;++i)
    {
        for(j=0;j<(n-i);++j)
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    }
    
    return a;
}

// Función para dividir el array y hacer los intercambios
int divide(int *array, int start, int end) {
    int left;
    int right;
    int pivot;
    int temp;
    
    pivot = array[start];
    left = start;
    right = end;
    
    // Mientras no se cruzen los índices
    while (left < right) {
        while (array[right] > pivot) {
            right--;
        }
        
        while ((left < right) && (array[left] <= pivot)) {
            left++;
        }
        
        // Si todavía no se cruzan los indices seguimos intercambiando
        if (left < right) {
            temp = array[left];
            array[left] = array[right];
            array[right] = temp;
        }
    }
    
    // Los índices ya se han cruzado, ponemos el pivot en el lugar que le corresponde
    temp = array[right];
    array[right] = array[start];
    array[start] = temp;
    
    // La nueva posición del pivot
    return right;
}

// Función recursiva para hacer el ordenamiento
void quicksort(int *array, int start, int end)
{
    int pivot;
    
    if (start < end) {
        pivot = divide(array, start, end);
        
        // Ordeno la lista de los menores
        quicksort(array, start, pivot - 1);
        
        // Ordeno la lista de los mayores
        quicksort(array, pivot + 1, end);
    }
}



int* mergeSort(int a[], int n)
{
    return a;
}




int main()
{
    
    int n,i;
    cout<<"Enter the size of array: ";
    cin>>n;
    
    int a[n];
    
    for(i=0;i<n;++i)
        a[i]=i;
    
    random_shuffle(&a[0],&a[n]);
    
    
    
    
//    cout<<"Array before bubble sort:";
//    for(i=0;i<n;++i)
//        cout<<" "<<a[i];
    
    clock_t startTime = clock();
    
    //bubbleSort(a, n);
    quicksort(a, a[0], a[n]);
    
    clock_t endTime = clock();
    
    cout<<"Elapsed time: "<<(endTime - startTime)/1000<<" ms"<<endl;
    
//    cout<<"Array after bubble sort:";
//    for(i=0;i<n;++i)
//        cout<<" "<<a[i];
    
    return 0;
}
