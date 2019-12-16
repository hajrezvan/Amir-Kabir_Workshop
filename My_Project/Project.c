#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <conio.h>
#include <math.h>

#define ROW_BLOCK_SIZE 4
#define COL_BLOCK_SIZE 8

int dimension_x, dimension_y;
char visual_map[4*50+1][8*50+1];

int random_function(void);
int get_number_of_station();
void draw_table_1();
void draw_table_2();
void print();
void robber_start();
void robber_Move();
void police_Move();
void start_game();

int main()
{
    printf("Lotfan Abaad Mored Nazar khod ra vared konid (x * y): ");
    scanf("%d * %d",&dimension_y,&dimension_x);

    start_game();

    return 0;
}

void start_game()
{
    //draw_table_1();
    draw_table_2();
    print();

    robber_start();

    get_number_of_station();
    robber_Move();
    police_Move();
}

void print()
{
    int i,j;

    //system("clear");

    for (i = 0; i <= 2 * dimension_x; i++)
    {
        for (j = 0;j <= 4 * dimension_y; j++)
        {
            printf("%c",visual_map[i][j]);
        }
        printf("\n");
    }
    sleep(0.5);
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
    int number_of_station;
    system("cls");

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

    for (counter = 0; counter <= station_counter; counter++)
    {
        int k = 0;
        int controler = number_of_police[counter];
        for (int k = 0; k < controler;)
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
            if (visual_map[j][i] == ' ')
            {
                visual_map[j][i] = 'P';
            }
            else
            {
                continue;
            }
            print();

            sleep(1);
            system("cls");
            k ++;
        }
    }
    return 0;
}

void robber_start()
{
    int x,y;

    x = 8 * (random_function() % (dimension_x)) + 4;
    if (x > dimension_x)
        x = fabs(x - dimension_x);

    y = random_function() % dimension_y;
    if (y > dimension_y)
        y = fabs(y - dimension_x);

    if (x % 8 == 0)
        x += 4;

    if (y % 4 == 0)
        y += 2;
    if (visual_map[y][x] == ' ')
    {
        visual_map[y][x] = 'T';
    }
    else
    {
        robber_start();
    }
    print();
}

void robber_Move() {
    int i_counter, j_counter;
    for (j_counter = 0; j_counter < dimension_y * 2; j_counter++) {
        for (i_counter = 0; i_counter < dimension_x * 4; i_counter++) {
            if (visual_map[i_counter][j_counter] == 'T') {
                visual_map[i_counter][j_counter] = ' ';

                int i = random_function();
                if (i < 0)
                    i = (i % 2) * (-1);
                i = i % 2;
                int j = random_function();
                if (j < 0)
                    j = (i % 2) * (-1);
                j = i % 2;
                visual_map[i_counter][j_counter];
                visual_map[i_counter + i][j_counter + j] = 'T';
            } else
            {
                continue;
            }
        }
    }
}
void police_Move()
{
    int i_counter, j_counter;
    for (j_counter = 0; j_counter < dimension_y * 2; j_counter++)
    {
        for (i_counter = 0; i_counter < dimension_x * 4;)
        {
            if (visual_map[i_counter][j_counter] != 'p')
            {
                visual_map[i_counter][j_counter] = ' ';

                int i = random_function();
                if (i < 0)
                    i = (i % 2) * (-1);
                i = i % 2;
                int j = random_function();
                if (j < 0)
                    j = (i % 2) * (-1);
                j = i % 2;
                visual_map[i_counter][j_counter];
                visual_map[i_counter + i][j_counter + j] = 'P';
                i_counter++;
            }
            else
            {
                continue;
            }
        }
    }
}

void draw_table_1() {
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

void draw_table_2()
{
    int i,j;
    for (i = 0; i <= (dimension_y * 2) ; i++)
    {
        for (j = 0; j <= (dimension_x * 4); j++)
        {
            if (i == 0 || i == (dimension_y * 2))
            {
                visual_map[i][j] = '-';
            } else if (j == 0 || j == (dimension_x * 4))
            {
                visual_map[i][j] = '|';
            } else
                {
                    visual_map[i][j] = ' ';
                }
        }
    }
}

