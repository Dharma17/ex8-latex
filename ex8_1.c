/* *********************************************************************** *
 *    Quick Sort, VERSION 1.0                                               *
 *    BRIEF_DESCRIPTION                                                     *
 *                                                                          *
 *  Copyright (C) 2021 by Dharma Sumaya Costa Cabral De Moura               *
 *                                                                          *
 *    This program is free software; you can redistribute it and/or modify  *
 *    it under the terms of the GNU General Public License as published by  *
 *    the Free Software Foundation; either version 2 of the License, or     *
 *    (at your option) any later version.                                   *
 *                                                                          *
 *    This program is distributed in the hope that it will be useful,       *
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *    GNU General Public License for more details.                          *
 *                                                                          *
 *    You should have received a copy of the GNU General Public License     *
 *    along with this program; if not, write to the                         *
 *    Free Software Foundation, Inc.,                                       *
 *    59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 *                                                                          *
 *  To contact the author, please write to:                                 *
 *  Name: Dharma Sumaya Costa Cabral De Moura <dharmaeng17@gmail.com>       *
 *  Webpage: http://beco.poli.br/~username                                  *
 *  Phone: (81) 98234-6656                                                  *
 * ************************************************************************ *
 * 
 */

//includes
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

void quick_sort(int *a, int left, int right)

int main(int argc, char** argv)
{
    int i, vet[MAX];

    for(i=0; i<MAX; i++)
    {
        printf("Escreva um valor: ");
        scanf("%d", &vet[i]);
    }

    quick_sort(vet, 0, MAX -1);
    printf("Valores");
    for(i=0; i<MAX; i++)
    {
        printf("%dn", vet[i]);
    }
    system("pause");
    return 0;
}

//funcao de ordenacao 

void quick_sort(int *a, int left, int right)
    int i, j, x, y;

    i= left;
    j=right;
    x= a[(left + right)/2];

    while(i<=j)
    {
        while(a[i]<x && i <right)
        {
            i++;
        }
        while(a[j]>x && j>left)
        {
            j--;
        }
        if(i<=j)
        {
            y=a[i];
            a[i]=a[j];
            a[j]=y;
            i++;
            j--;
        }
    }
    if(j>left)
    {
        quick_sort(a,left,j);
    }
    if(i<right)
    {
        quick_sort(a,i,right);
    }
}

//
        
