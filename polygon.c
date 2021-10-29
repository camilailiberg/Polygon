#include "polygon.h"

char getCommandWord(char command[], int maxLength) {
    char lastCharacter;//either space or new line
    int i;
    for (i = 0; (lastCharacter = getchar()) == ' '; i++);//skip leading white spaces
    if (lastCharacter == '\n') {
        command[0] = '\0';
        return lastCharacter;
    }
    command[0] = lastCharacter;
    for (i = 1; i < maxLength - 1 && (command[i] = getchar()) != ' ' && command[i] != '\n'; i++);
    lastCharacter = command[i];
    command[i] = '\0';
    return lastCharacter;
}

void main(int argc, char** argv) {

    int numberOfPolygons = atoi(argv[1]) ; // equals to the max number of poygons i can get

    printf("numberOfPolygons = %d\n", numberOfPolygons ); //TODO: DELETE

    Polygon listOfPlygons[ numberOfPolygons ] ; 

    char command[MAX_COMMAND_TOKEN_LENGTH];
    char lastCharacter;

    while (1) {//infinite while loop...
        lastCharacter = getCommandWord(command, MAX_COMMAND_TOKEN_LENGTH);
        if (strcmp(command, "quit") == 0)//if command === "quit"
            break;
        else if (!strcmp(command, "add"))//if command == "add"
        {
            if (lastCharacter == '\n')//add\n
                printf("Too few arguments for add command! It must be in the form of TODO: ADD FORMAT.\n"); //TODO: TODO: ADD FORMAT
            else
            {
                printf("add");
                handleAdd();

            }
        }
        else if (!strcmp(command, "summary"))//if command == "summary"
        {
            if (lastCharacter == '\n')//summary`\n
                printf("Too few arguments for summary command! It must be in the form of TODO: ADD FORMAT.\n"); // TODO: ADD FORMAT
            else
                printf("summary");
        }
        else {
            printf("invalid command! Your command must start either with quit, add or summary.\n");
            while (lastCharacter != '\n')//skip the remainder of my invalid command...
                lastCharacter = getCommandWord(command, MAX_COMMAND_TOKEN_LENGTH);
        }
    }

}