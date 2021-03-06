#include<stdio.h>
#include <string.h>
#include<math.h>
#include <stdlib.h>

#define MAX_COMMAND_TOKEN_LENGTH 100

typedef enum {
    NONE = 0,
    UP = 1,
    DOWN = 2,
    LEFT = 4,
    RIGHT = 8
} Direction ;

typedef struct {
    int x, y;
} Vertex ;

typedef struct {
    int numberOfVertices;
    Direction shiftDirection;
    Vertex* vertexList
} Polygon;

Polygon *  handleAdd(char* rest) ;
void handleSummary(Polygon** polygonList , int currPolyCount);