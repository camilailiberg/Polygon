#include "polygon.h"

void main(int argc, char** argv) {

    int numberOfPolygons = atoi(argv[1]) ; //? equals to the max number of poygons i can get

    printf("numberOfPolygons = %d\n", numberOfPolygons ); //TODO: DELETE

    //? allocating space
    //? polygonList is a list of Polygon pointer to list of pointers to Polygons
    Polygon** polygonList = (Polygon**)malloc((numberOfPolygons) * sizeof(Polygon));

    // Polygon listOfPlygons[ numberOfPolygons ] ; //? list of polygons

    // char command[MAX_COMMAND_TOKEN_LENGTH];
    char lastCharacter, *verticesLine;

    char command[100];
    char tokentemp[20];
    char firsttoken[20];
    char rest[100];
    char *token [3];
    int polygonindex;

    // strcpy(command, "add 3 4 1 2 3 4 5 6 7 8 9 1\n");
    while (1) {//infinite while loop...
        sscanf(command, "%s %[^\n]\n", firsttoken, rest);
        if(!strcmp(firsttoken, "quit")){
            printf("firsttoken is %s\n", firsttoken);
            printf("rest is %s\n", rest);
        }
        if(!strcmp(firsttoken, "summary")){
            printf("firsttoken is %s\n", firsttoken);
            printf("rest is %s\n", rest);
        }
        if(!strcmp(firsttoken, "shift")){
            printf("firsttoken is %s\n", firsttoken);
            printf("rest is %s\n", rest);
        }
        if(!strcmp(firsttoken, "turn")){
            printf("firsttoken is %s\n", firsttoken);
            printf("rest is %s\n", rest);
        }
        if(!strcmp(firsttoken, "add")){
            // printf("rest is %s\n", rest);
            // int n = strlen(rest), x, y;
            // rest[n] = '\n';
            // rest[n+1] = '0';
            // if(sscanf(rest, "%d %d %[^\n]\n", &x, &y, rest) != 3)
            //     printf("Error");
            // else
            //     printf("coordinate of the first point is (%d, %d), and the rest is %s", x, y, rest);
            printf("firsttoken is %s\n", firsttoken);
            printf("rest is %s\n", rest);
        }
    }

    /*
    while (1) {//infinite while loop...
		//? getting the first  word
        sscanf(command, "%s %[^\n]\n", firsttoken, rest);
        printf("command = %s\n", command);
        if (strcmp(command, "quit") == 0)//if command === "quit"
            break;
        else if (!strcmp(command, "add"))//if command == "add"
        {
            if (lastCharacter == '\n')//add\n
                printf("Too few arguments for add command! It must be in the form of TODO: ADD FORMAT.\n"); //TODO: TODO: ADD FORMAT
            else
            {
                printf("add\n");
                lastCharacter = getLine(verticesLine, MAX_COMMAND_TOKEN_LENGTH);
                printf("command inside add= %s\n", &verticesLine);
                // handleAdd();

            }
        }
        else if (!strcmp(command, "summary"))//if command == "summary"
        {
            // add code
        }
        else {
            printf("invalid command! Your command must start either with quit, add or summary.\n");
            while (lastCharacter != '\n')//skip the remainder of my invalid command...
                lastCharacter = getCommandWord(command, MAX_COMMAND_TOKEN_LENGTH, " ");
        }
    }
    */

}