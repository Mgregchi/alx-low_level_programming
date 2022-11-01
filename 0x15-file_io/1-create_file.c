#include "main.h"
/**
* create_file - Entry Point
* @filename: file name
* @text_content: null terminated string to write
* Return: 1
*/
int create_file(const char *filename, char *text_content)
{
	int file, i = 0;
	struct stat fs;
        unsigned int perm;

	if (filename == NULL || !filename)
		return (-1);
	
	r = stat(filename,&fs);
	if( r == -1 )
        {
                perm = 0600;
        }
        else
        {
        perm = fs.st_mode;
        }
        printf("%d", perm);
	file = open(filename, O_CREAT | O_TRUNC | O_WRONLY, perm);
	if (file == -1)
		return (-1);

	if (text_content == NULL || !text_content)
	{
		close(file);
		return (-1);
	}
	else
	{
		while (text_content[i])
			i++;
		write(file, text_content, i);
	}

	close(file);
	return (1);
}
