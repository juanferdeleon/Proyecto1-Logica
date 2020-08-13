//Diego Estrada
//Andree Toledo
//Juan Fernando De Leon

//Proyecto No. 1 Logica matematica.


#include<stdio.h> 

//La V define la cantidad de vertices 
#define V 4 
  

void printSolution(int extent[][V]); 
  

void transitiveClosure(int graph[][V]) 
{ 
    
    
    int extent[V][V], i, j, n; 
  
    for (i = 0; i < V; i++) 
        for (j = 0; j < V; j++) 
            extent[i][j] = graph[i][j]; 
  
    for (n = 0; n < V; n++) { 
        for (i = 0; i < V; i++) { 

            for (j = 0; j < V; j++) { 

                extent[i][j] = extent[i][j] || (extent[i][n] && extent[n][j]); 
            } 
        } 
    } 
  
  
    printSolution(extent); 
    
} 
  

void printSolution(int extent[][V]) { 
    
    printf ("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n"); 
    printf ("|||La siguiente matriz es el cierre transitivo del gráfico dado|||\n"); 
    printf ("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n"); 
    
    for (int i = 0; i < V; i++) { 
        
        for (int j = 0; j < V; j++) 
            printf ("%d ", extent[i][j]); 
        printf("\n"); 
    } 
} 
  

int main() {   
    
    //Vertices indicados en la matriz ingresada.
    
    int graph[V][V] = { {0, 0, 1, 1}, 
                        {1, 0, 0, 0}, 
                        {0, 1, 0, 0}, 
                        {0, 0, 0, 0} 
                      }; 
  
  
    transitiveClosure(graph); 
    return 0; 
} 
