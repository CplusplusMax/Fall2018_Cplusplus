#include <stdio.h>
#include <stdlib.h>
#include <string.h>

	int main(int argc, char** argv)
	{
		FILE* fp = fopen("books.txt", "w");
		
		int bookCount;
		printf("How many books do you have?\n");
		scanf("%i", &bookCount);
		fprintf(fp, "%i\n", bookCount);
		
		for(int i = 0; i < bookCount; i++)
		{
			char bookTitle[30] = {0};
			float rating;
			
			printf("What is the book's title?\n");
			scanf("%s", bookTitle);
			
			printf("What is the book's 1.00 to 5.00 rating (with 5.00 being the best rating)?\n");
			scanf("%f", &rating);
			
			fprintf(fp, "%i %s %.2f", strlen(bookTitle), bookTitle, rating);
		}
		
		printf("File generated successfully.\n");
		
		
		fclose(fp);
		return 0;
	}