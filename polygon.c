#include "polygon.h"

char getCommandWord(char command[], int maxLength, char* delimiter) {
	char c;
	int i = 0, j, n = strlen(delimiter);
	while (isspace(c = getchar()));//skip leading white spaces
	while (i < maxLength - 1 && c != EOF) {
		j = -1;
		while (delimiter[++j] && delimiter[j] != c);
		if (j != n)
			break;
		if (isspace(c))
			break;
		else {
			command[i++] = c;
			c = getchar();
		}
	}
	command[i] = '\0';//end of string sign
	if (!isspace(c))
		return c;
	while(*delimiter)
		if(isspace(*(delimiter++)))
			return c;
	while (isspace(c))// skip trailing white spaces
		c = getchar();
	return c;
}

char getLine(char* line, int maxLength) {
	char lastCharacter;
	int i;
	for (i = 0; i < maxLength - 1 && (line[i] = getchar()) != '\n' && line[i] != EOF; i++);
	lastCharacter = line[i++];
	line[i] = '\0';//end of string sign
	return lastCharacter;
}

int getKeys(int* keys) {
	int i = 0;
	char temp[MAX_COMMAND_TOKEN_LENGTH];
	while (getCommandWord(temp, MAX_COMMAND_TOKEN_LENGTH, " ") != '\n')
		if (i == 300)
			return  0;
		else
			keys[i++] = atoi(temp);
	keys[i++] = atoi(temp);
	return i;
}

void main(int argc, char** argv) {

    int numberOfPolygons = atoi(argv[1]) ; //? equals to the max number of poygons i can get

    printf("numberOfPolygons = %d\n", numberOfPolygons ); //TODO: DELETE

    Polygon listOfPlygons[ numberOfPolygons ] ; //? list of polygons

    char command[MAX_COMMAND_TOKEN_LENGTH];
    char lastCharacter, *verticesLine;

    while (1) {//infinite while loop...
        lastCharacter = getCommandWord(command, MAX_COMMAND_TOKEN_LENGTH, " ");
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

}