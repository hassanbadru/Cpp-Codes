# include <stdio.h>
# include <math.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>
# define FILE_NAME "titan.txt"

int NumberOfWords(char *p);
int NumberOfChar(char *p);

char GetPhrase(char *phrase, int maxLength);
int ExtractNumber(char p);
char CapitalizeLetter(char c);
void HighlightMatchingPhase(char *text, char *phrase);
void FindAllNumbers(char *text, int textLength);

char phraseStr[100] = {'\0'};

int main()
{
    //Declare variables
	int select;
	char myarr[2000] = {'\0'};
	FILE *in = fopen("titan.txt", "rt");
    fgets(myarr, 2000, in);

   	printf(myarr);
	 
	 printf("\n\nOption 2: Search for phrase\n\n");
	 HighlightMatchingPhase(myarr, phraseStr);
	 
    int cont = 1;
	while (cont == 1)
	{
		//Dispaly Menu 
		printf("\nMENU\n");
		printf("-----\n\n");
		printf("1. Display statistics\n");
		printf("2. Search for a phase\n");
		printf("3. Extract all numbers\n");
		printf("4. Exit\n");
        	
		printf("\n\nEnter a menu choice (1-4): ");
		scanf("%i", &select);
			
			
            
            switch(select)
        {   
            case 1:
        	printf("Option 1: Statistics");
        	int nWords, nChar;
            nWords = NumberOfWords(myarr);
            nChar = NumberOfChar(myarr);
            
        	printf("\n\nNumber of Words = %i\n\n",nWords);	
        	printf("Number of Characters = %i\n\n\n",nChar);
        	break;
	
            //OPTION 2
            case 2:
        	printf("Option 2: Search for phrase\n\n");
	        HighlightMatchingPhase(myarr, phraseStr);
	        break;
            
            //OPTION 3
            case 3:
        	printf("\n\nOption 3: Find Numbers\n\n");
        	int myarrlen = strlen(myarr);
        	FindAllNumbers(myarr, myarrlen);
        	printf("\n");
        	break;
        	
        	case 4: cont = 0;
        	break;
        	
        	default: printf("\nInvalid Selection!\n\n");
            break;
        }
	}
	printf("\nThank you for stopping by....\n\nClick Enter to EXIT\n\n");
    
    system("pause");
    return 0;
}

//count words
int NumberOfWords(char *p)
{
		int count = 1;
		int i;
		
    for (i=0; i<2000; i++)
	{ 
		if(p[i] == ' ')

		count++;
	}
	    	
	return count;
}

//count char
int NumberOfChar(char *p)
{
		int count;
		int i;
		
    for (i=0; i<2000; i++)
	{ 
	
		if(isalnum(p[i]) || ispunct(p[i]))
		count++;
	}
	    	
	return count;
}

//get phrase
char GetPhrase(char *phrase, int maxLength)
{
    printf("Enter a phrase: ");
	fgets(phrase, maxLength, stdin);
    
	return *phrase;
}

//highlight
void HighlightMatchingPhase(char *text, char *phrase)
{
    *phrase = GetPhrase(phrase, 100); //Enter and store phrase in array
    
	printf("\n\n");
	int j, a, i = 0, count = 0;
	int l = 0;
	int len = strlen(phrase) - 1;
	
	int finlen = strlen(text);

	while (text[i] != EOF && i < finlen)	
	{
		if (text[i] == phrase[0])
		{
			for (j = 0; j < len; j++)
			{
				if (phrase[j] == text[i+j] && phrase[j] != EOF)
				l++;
					if (l == len)
					{
						printf("[");	
						for (a = i; a < i + len; a++)
						{
							
							if(text[a] >= 'a' && text[a] <= 'z')
							  printf("%c", CapitalizeLetter(text[a]));	
							else
							  printf("%c", text[a]);
					
						}
						i = i + len;
						printf("]");
						count++;
					}
			}
		}
		printf("%c", text[i]);	
		i++;
		l=0;
	}
	
	printf("\n\nNumber of times phrase appears: %i", count);
	printf("\n\n");
}

char CapitalizeLetter(char c)
{
	return c - 32;
}

void FindAllNumbers(char *text, int textLength)
{
	int i;
	printf("All the Numbers are: ");
	for (i = 0; i < textLength; i++)
	{
		ExtractNumber(text[i]);
	}
}

int ExtractNumber(char p)
{
	if (isdigit(p))
	printf("%c",p);
	
	else
	return 0;
}
