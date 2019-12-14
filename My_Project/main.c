#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <conio.h>
#include <math.h>

#define ROW_BLOCK_SIZE 4
#define COL_BLOCK_SIZE 8

int dimension_x, dimension_y;
char visual_map[4*10+1][8*10+1];

int random_function(void);
int get_number_of_station();
void draw_table();
void print();

int main()
{
    printf("Lotfan Abaad Mored Nazar khod ra vared konid (x * y): ");             // Gereftan Abaad Bazi:
    scanf("%d * %d",&dimension_y,&dimension_x);

    draw_table();
    print();

    sleep(3);

    get_number_of_station(dimension_x,dimension_y);
    return 0;
}

int random_function(void)
{
    int random_number;
    time_t t = time(NULL);
    srand(t);
    random_number = rand();
    return random_number;
}

int get_number_of_station()
{
    int number_of_station;                                       //Gereftan Tedad Istgah:
    system("csl");

    printf("Lotfan Tedad Istgah Mored Nazar khod ra vared konid: \n");
    scanf("%d",&number_of_station);

    int number_of_police[number_of_station];
    int station_counter;
    int station_counter_Loop;

    for (station_counter_Loop = 0; station_counter_Loop < number_of_station; station_counter_Loop ++)
    {
        printf("\n Lotfan Tedad Police dar istgah %d ra vared konid: ",station_counter_Loop + 1);
        scanf("%d",&number_of_police[station_counter_Loop]);
    }
    station_counter = station_counter_Loop;

    int counter = 0;
    while (counter < station_counter)
    {
        for (int k = 0; k < &number_of_police[counter]; ++k)
        {
            int i = 8 * (random_function() % (dimension_x)) + 4;
            if (i > dimension_x)
                i = fabs(i - dimension_x);
            int j = 4 * (random_function() % (dimension_y)) + 2;
            if (j > dimension_y)
                j = fabs(j - dimension_x);

            if (i % 8 == 0)
                i += 4;

            if (j % 4 == 0)
                j += 2;

            visual_map[j][i] = 'P';
            print();

            sleep(1);
            system("csl");
            counter ++;
        }
    }
    return 0;
}


void print()
{
    int i,j;

    //system("clear");

    for (i = 0; i <= ROW_BLOCK_SIZE * dimension_x; i++)
    {
        for (j = 0;j <= COL_BLOCK_SIZE * dimension_y; j++)
        {
            printf("%c",visual_map[i][j]);
        }
        printf("\n");
    }
}

void draw_table() {
    int i;
    for(i = 0; i <= ROW_BLOCK_SIZE * dimension_x; i++)
    {
        int j;
        for(j = 0;j <= COL_BLOCK_SIZE * dimension_y; j++)
        {
            if(j % COL_BLOCK_SIZE == 0 && i % ROW_BLOCK_SIZE == 0)
                visual_map[i][j] = '+';

            else if(i % ROW_BLOCK_SIZE == 0)
            {
                if(j % 2 == 0)
                    visual_map[i][j] = '*';
                else
                    visual_map[i][j] = ' ';
            }
            else if(j%COL_BLOCK_SIZE == 0)
            {
                visual_map[i][j] = '*';
            }

            else
                visual_map[i][j] = ' ';
        }
    }
}
