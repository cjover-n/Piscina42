/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipastor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 18:50:40 by mipastor          #+#    #+#             */
/*   Updated: 2019/09/24 17:52:39 by cjover-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

void    ft_putstr(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}

int      main(int argc, char **argv)
{
    (void)argc;

    int rows = 10;
    int cols = 10;
    int file;
    ssize_t nr_bytes_col = 0;

    //TODO: Detectar el tamanyo 
    //  automaticamente de "rows" y "cols"
    //  sin usar (Hasta entonces, array cambiado por puntero, 
    //  que es lo mismo pero sin tamanyo especifico)

    //Leer mapa y devolver filas
    //Leer mapa y devolver columna

    file = open(argv[1], O_RDONLY);
    
    if (file == -1)
    {
        ft_putstr("map error (1)\n");
    }
    else
    {
        //char buf_r[rows];
        char buf_c[cols];

        nr_bytes_col = read(file, buf_c, cols);
        rows = 0;

        while (read(file, buf_c, cols) == '\n')
        {
            //Las filas se añaden cada vez que detecta salto de linea
            rows++;
        }
        
    }

    close(file);

    
    //char *charrow = malloc(rows * sizeof(char));
    //char *charcol = malloc(cols * sizeof(char));
	char *arr = (char *)malloc(rows * cols * sizeof(char));

    if (nr_bytes_col <= 0)
    {
        ft_putstr("map error (2)\n");
    }
    else
    {
        //Detecta tamanyo de columnas

        cols = (int)nr_bytes_col;

        //TODO: Separar "string" de buf_r y buf_f en un array de chars
        printf("%d rows, %d cols", rows, cols);

        //Recorremos columnas

        while (rows > 0)
        {
            while (cols > 0)
            {
                //TODO: Guardar en array
                cols--;
            }
            rows--;
        }
    }

    free(arr);

    return (0);
}
