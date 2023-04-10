#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file to write to.
 * @text_content: The text to append to the file.
 *
 * Return: On success, 1. On failure, -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
        int fd, len, err;

        fd = len = err = 0;
        if (!filename)
                return (-1);
        else if (!text_content || !text_content[0])
                return (1);
        fd = open(filename, O_WRONLY | O_APPEND);
        if (fd < 0)
                return (-1);
        while (text_content[len])
                len++;
        err = write(fd, text_content, len);
        if (err < 0)
                return (-1);
        close(fd);
        return (1);
}

