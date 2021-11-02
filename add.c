#include "polygon.h"

// int getNumOfVertices(char * vertices)
// {
//     int amountOfCoordinates = strlen(vertices); //TODO: DELETE
//     printf("amountOfCoordinates = %d\n", amountOfCoordinates); //TODO: DELETE
//     printf("Actual amountOfCoordinates = %d\n", (amountOfCoordinates/2 )+ 1); //TODO: DELETE
//     return 1;
// }

Polygon * handleAdd(char * rest)
{
    //* rest is the coordinates.

    //? as long as i have vertices in my list, create a vertex and add it to the vertexList of that polygon. 
    //? Keep in mind that the argument that i get from the user will be in the format add x1 y1 x2 y2 ...  so i need to divide the length by 2 to get the amount of vertices
    
    int amountOfCoordinates = (strlen(rest) / 2) + 1 ; //? this counts every (x,y) vertex as 2 because +1 for x and +1 for y
    // printf("\namountOfVertices = %d\n\n", amountOfCoordinates) ; //TODO: DELETE
    Polygon* p = malloc(sizeof(Polygon));  //? allocaitng space for polygon
    p->shiftDirection = NONE; //? initiating shiftDirection of Polygon to NONE
    p->numberOfVertices = amountOfCoordinates / 2; //? initiating numberOfVertices to the number of vertices for this Polygon. I divede by 2 because I now want the vertices not the amount of numbers inputed by the user
    p->vertexList = (Vertex*)malloc( p->numberOfVertices * sizeof(Vertex)); //? allocaitng space for the amount of verices for this Polygon
    
    //? add the vertices to the Polygon who owns the vertexList
    int n = strlen(rest), x, y, i, j = 0;
    rest[n] = '\n';
    rest[n+1] = '\0'; //! lo cambie de '0' a '\0' TODO: OJOOOOO

    for(i = 0 ; i < strlen(rest) ; i = i + 2)
    {
        if(sscanf(rest, "%d %d %[^\n]\n", &x, &y, rest) != 3)
        {
            // printf("Error");
            sscanf(rest, "%d %d %[^\n]\n", &x, &y);
            printf("coordinate of the final point is (%d, %d)\n", x, y);
            p->vertexList[j].x = x;
            p->vertexList[j].y = y;
            j++;
        }
        else{
            printf("coordinate of the first point is (%d, %d), and the rest is %s\n", x, y, rest);

            p->vertexList[j].x = x;
            p->vertexList[j].y = y;
            j++;
        }

    }
    // printf("\nnumberOfVertices = %d\n\n", p->numberOfVertices) ; //TODO: DELETE
    // printf("p x = %d\n", p->vertexList[0].x); //TODO: DELETE
    // printf("p y = %d\n", p->vertexList[0].y); //TODO: DELETE
    // printf("p x = %d\n", p->vertexList[1].x); //TODO: DELETE
    // printf("p y = %d\n", p->vertexList[1].y); //TODO: DELETE

    return p;

}