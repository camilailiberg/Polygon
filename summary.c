#include "polygon.h"

Vertex * calcCentroid(Polygon* poly)
{

    int xSum = 0, ySum = 0;

    for(int g = 0 ; g < poly->numberOfVertices ; g++)
    {
        xSum = xSum + poly->vertexList[g].x;
        ySum = ySum + poly->vertexList[g].y;
    }

    printf("Centroid = (%d , %d)\n", xSum/poly->numberOfVertices , ySum/poly->numberOfVertices);

}

void handleSummary(Polygon** polygonList, int currPolyCount)
{

    for(int h = 0 ; h < currPolyCount ; h++)
    {
        printf("number of vertices for Polygon %d = %d\n", h, polygonList[h]->numberOfVertices);

        calcCentroid(polygonList[h]);
    }

}