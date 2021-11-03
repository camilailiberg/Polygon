#include "polygon.h"

Polygon * handleAdd(char * rest)
{
    //* rest is the coordinates.
    
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

    for(i = 0 ; i < p->numberOfVertices ; i++)
    {
        if(sscanf(rest, "%d %d %[^\n]\n", &x, &y, rest) != 3)
        {
            sscanf(rest, "%d %d %[^\n]\n", &x, &y);
            // printf("coordinate of the final point is (%d, %d)\n", x, y); //TODO: DELETE
            p->vertexList[j].x = x;
            p->vertexList[j].y = y;
            j++;
        }
        else{
            // printf("coordinate of the first point is (%d, %d), and the rest is %s\n", x, y, rest);//TODO:DELETE

            p->vertexList[j].x = x;
            p->vertexList[j].y = y;
            j++;
        }

    }
    // printf("\n\nnumberOfVertices = %d\n\n", p->numberOfVertices) ; //TODO: DELETE
    // printf("p x = %d\n", p->vertexList[0].x); //TODO: DELETE
    // printf("p y = %d\n", p->vertexList[0].y); //TODO: DELETE
    // printf("p x = %d\n", p->vertexList[1].x); //TODO: DELETE
    // printf("p y = %d\n", p->vertexList[1].y); //TODO: DELETE
    // printf("p x = %d\n", p->vertexList[2].x); //TODO: DELETE
    // printf("p y = %d\n\n", p->vertexList[2].y); //TODO: DELETE

    return p;

}