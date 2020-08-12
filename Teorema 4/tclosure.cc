//Diego Estrada
//Andree Toledo
//Juan Fernando De Leon

//Proyecto No. 1 Logica matematica.


#include<stdio.h> 

//La V define la cantidad de vertices 
#define V 4 
  

void printSolution(int reach[][V]); 
  

void transitiveClosure(int graph[][V]) 
{ 
    
    
    int reach[V][V], i, j, k; 
  
    for (i = 0; i < V; i++) 
        for (j = 0; j < V; j++) 
            reach[i][j] = graph[i][j]; 
  
    for (k = 0; k < V; k++) { 
        for (i = 0; i < V; i++) { 

            for (j = 0; j < V; j++) { 

                reach[i][j] = reach[i][j] || (reach[i][k] && reach[k][j]); 
            } 
        } 
    } 
  
  
    printSolution(reach); 
    
} 
  

void printSolution(int reach[][V]) { 
    
    printf ("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"); 
    printf ("|||La siguiente matriz es el cierre transitivo del gráfico dado|||"); 
    printf ("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"); 
    
    for (int i = 0; i < V; i++) { 
        
        for (int j = 0; j < V; j++) 
            printf ("%d ", reach[i][j]); 
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
