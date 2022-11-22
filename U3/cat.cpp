#include <iostream>

using namespace std;

char coordenadasMatriz[6][11];
void tableroJugador();
char areaDeJuego[3][3] = {{'1', '2', '3'}, {'4', '5', '6'},{'7', '8', '9'}};
char areaDeJuegoIA[3][3] = {{'1', '2', '3'}, {'4', '5', '6'},{'7', '8', '9'}};
int seleccionarJugada();
bool comprobarCasillaOcupada(int jugada);
void colocarJugada(int jugada);
void modoDeJuego(int);
int mejorJugada(char);
void colocarJugadaIAenX(int);
void colocarJugadaIAenO(int);
void areaIA();
int turnoIA();
bool comprobarCasillaOcupadaIA(int);
bool revisarGanadorJugador(int jugada);
bool revisarGanadorIA(int);

int turnoJugador = 0;

const char IA = 'O';
const char JUGADOR = 'X';


int main(){
    int jugada;
    int modoDeJuego;
    bool casillaOcupada = true;
    bool ganador = false;
    cout<<"*******************************************************\n";
    cout<<"*********************-TIC TAC TOE**********************-\n";
    cout<<"*******************************************************\n";
    tableroJugador();
    cout<< "\033[0;35m"<< "********************************\n|Option   |Game mode             |\n********************************\n|    1    | Player 1 vs Player 2 |\n|    2    | Player 1 vs Computer |\n********************************\nOption: "<< "\033[0m";
    cin>> modoDeJuego;

    if(modoDeJuego == 1){
        do
        {
            jugada = seleccionarJugada();
            casillaOcupada = comprobarCasillaOcupada(jugada);
            if(casillaOcupada == true){
                do
                {
                    cout<<"Box invailable, try again";
                    break;
                } while (casillaOcupada = true);
            }
            else
            {
                system("clear");
                colocarJugada(jugada);
                tableroJugador();
                turnoJugador++;
            }
        ganador=revisarGanadorJugador(ganador);
        } while (ganador == false && turnoJugador < 9);
    if (turnoJugador < 9)
        {
            if (turnoJugador % 2 == 0)
            {
                cout << "\033[0;31m"<< "Player 2 wins"<< "\033[0m" <<endl;
            }
            else
            {
                cout << "Player 1 wins" <<endl;
            }
        }
        else
        {
            cout << "---Tie---" <<endl;
        }
    }
    else if (modoDeJuego == 2)
    {
        do
        {
            if (turnoJugador% 2 == 0)
            {
                jugada = seleccionarJugada();
            }
            else
            {
                jugada = turnoIA();
            }

            casillaOcupada = comprobarCasillaOcupada(jugada);
            if (casillaOcupada == true)
            {
                do
                {
                    cout << "Box occupied, please try again" <<endl;
                    break;
                } while (casillaOcupada == true);
            }
            else if (casillaOcupada == false)
            {
                system("clear");
                colocarJugada(jugada);
                tableroJugador();
                turnoJugador++;
            }
            ganador = revisarGanadorJugador(ganador);
        } while (ganador == false && turnoJugador < 9);
        if (turnoJugador < 9)
        {
            if (turnoJugador % 2 == 0)
            {
                cout << "Game Over :,(" <<endl;
            }
            else
            {
                cout << "You Won" <<endl;
            }
        }
        else
        {
            cout << "Tie" <<endl;
        }
    }
    
    return 0;
}

int seleccionarJugada(){

    int jugada;
    do
    {
        cout << "Give me the number of your play: ";
        cin >> jugada;
    } while (jugada < 0 || jugada > 9);
    return jugada;

}

bool comprobarCasillaOcupada(int jugada)
{
    int row = jugada / 10; 
    int col = jugada - 1;
    if (areaDeJuego[row][col] == 'X' || areaDeJuego[row][col] == 'O')
    {
        return true;
    }
    else
    {
        return false;
    }
}

void colocarJugada(int jugada)
{
    char valorJugada;
    if (turnoJugador % 2 == 0)
    {
        valorJugada = 'X';
    }
    else
    {
        valorJugada = 'O';
    }

    if (jugada == 1)
    {
        areaDeJuego[0][0] = valorJugada;
    }
    else if (jugada == 2)
    {
        areaDeJuego[0][1] = valorJugada;
    }
    else if (jugada == 3)
    {
        areaDeJuego[0][2] = valorJugada;
    }
    else if (jugada == 4)
    {
        areaDeJuego[1][0] = valorJugada;
    }
    else if (jugada == 5)
    {
        areaDeJuego[1][1] = valorJugada;
    }
    else if (jugada == 6)
    {
        areaDeJuego[1][2] = valorJugada;
    }
    else if (jugada == 7)
    {
        areaDeJuego[2][0] = valorJugada;
    }
    else if (jugada == 8)
    {
        areaDeJuego[2][1] = valorJugada;
    }
    else if (jugada == 9)
    {
        areaDeJuego[2][2] = valorJugada;
    }
}

bool revisarGanadorJugador(int jugada){
    bool revisarGanador = false;
    for (int posicion = 0; posicion < 3; posicion++)
    {
        if ((areaDeJuego[0][posicion] == areaDeJuego[1][posicion]) && (areaDeJuego[0][posicion] == areaDeJuego[2][posicion]))
        {
            revisarGanador = true;
            break;
        }
        else if ((areaDeJuego[posicion][0] == areaDeJuego[posicion][1]) && (areaDeJuego[posicion][0] == areaDeJuego[posicion][2]))
        {
            revisarGanador = true;
            break;
        }
        else if ((areaDeJuego[posicion][posicion] == areaDeJuego[posicion+1][posicion+1]) && (areaDeJuego[posicion][posicion] == areaDeJuego[posicion+2][posicion+2]))
        {
            revisarGanador = true;
            break;
        }
        else if ((areaDeJuego[2][0] == areaDeJuego[1][1]) && (areaDeJuego[2][0] == areaDeJuego[0][2]))
        {
            revisarGanador = true;
            break;
        }
    }
    return revisarGanador;
}

void tableroJugador(){
    int c1=0, f1=0;
    for(int row=0; row<6 ; row++){
        for(int col=0; col<11; col++){

            if(col==3 || col==7){
                coordenadasMatriz[row][col]='|';
            }
            else if (row==1 || row==3){
                coordenadasMatriz[row][col]='_';
            }
            
            else if (row!=5 &&(col ==9 || col== 5 || col==1))
            {
                coordenadasMatriz[row][col]= areaDeJuego[f1][c1];  
                c1++;
                if (c1 == 3)
                {
                    c1 = 0;
                    f1++;
                } 
            }
            
            else{
                coordenadasMatriz[row][col]=' ';
            }
        }
    }

    for(int f1=0; f1<6 ; f1++){
        for(int c1=0; c1<11; c1++){
            if (coordenadasMatriz[f1][c1]=='X')
            {
                cout<< "\033[0;31m" << coordenadasMatriz[f1][c1] << "\033[0m";
            }
            else if (coordenadasMatriz[f1][c1]=='O')
            {
                cout<< "\033[0;34m" << coordenadasMatriz[f1][c1] << "\033[0m";
            }
            else
            {
                cout<<coordenadasMatriz[f1][c1];
            }
        }
        cout<<"\n";
    }   
}

int turnoIA()
{
    int jugada;
    bool jugadaUtilizada = false;
    jugada = mejorJugada(IA);
    if (jugada != -1)
    {
        return jugada;
    }

    jugada= mejorJugada(JUGADOR);
    if (jugada != -1)
    {
        return jugada;
    }
    while (jugadaUtilizada== false)
    {
        jugadaUtilizada = comprobarCasillaOcupada(jugada);
        jugada = 1 + rand() % 9; 
    }
    return jugada;
}

void areaIA()
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            areaDeJuegoIA[row][col] = areaDeJuego[row][col];
        }
    }
}

bool comprobarCasillaOcupadaIA(int Jugada)
{
    int row = Jugada / 10;
    int col = Jugada - 1;
    if (areaDeJuegoIA[row][col] == 'X' || areaDeJuegoIA[row][col] == 'O')
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool revisarGanadorIA(int jugada){
    bool revisarGanador = false;
    for (int posicion = 0; posicion < 3; posicion++)
    {
        if ((areaDeJuegoIA[0][posicion] == areaDeJuegoIA[1][posicion]) && (areaDeJuegoIA[0][posicion] == areaDeJuegoIA[2][posicion]))
        {
            revisarGanador = true;
            break;
        }
        else if ((areaDeJuegoIA[posicion][0] == areaDeJuegoIA[posicion][1]) && (areaDeJuegoIA[posicion][0] == areaDeJuegoIA[posicion][2]))
        {
            revisarGanador = true;
            break;
        }
        else if ((areaDeJuegoIA[posicion][posicion] == areaDeJuegoIA[posicion+1][posicion+1]) && (areaDeJuegoIA[posicion][posicion] == areaDeJuegoIA[posicion+2][posicion+2]))
        {
            revisarGanador = true;
            break;
        }
        else if ((areaDeJuegoIA[2][0] == areaDeJuegoIA[1][1]) && (areaDeJuegoIA[2][0] == areaDeJuegoIA[0][2]))
        {
            revisarGanador = true;
            break;
        }
    }
    return revisarGanador;
}

void colocarJugadaIAenX(int jugada)
{

    int row;
    int col;
    if (jugada == 1)
    {
        row = 0;
        col = 0;
    }
    else if (jugada == 2)
    {
        row = 0;
        col = 1;
    }
    else if (jugada == 3)
    {
        row = 0;
        col = 2;
    }
    else if (jugada == 4)
    {
        row = 1;
        col = 0;
    }
    else if (jugada == 5)
    {
        row = 1;
        col = 1;
    }
    else if (jugada == 6)
    {
        row = 1;
        col = 2;
    }
    else if (jugada == 7)
    {
        row = 2;     
        col = 0;
    }
    else if (jugada == 8)
    {
        row = 2;
        col = 1;
    }
    else if (jugada == 9)
    {
        row = 2;
        col = 2;
    }
    areaDeJuegoIA[row][col] = 'X';
}

void colocarJugadaIAenO(int jugada)
{
    int row;
    int col;
    if (jugada == 1)
    {
        row = 0;
        col = 0;
    }
    else if (jugada == 2)
    {
        row = 0;
        col = 1;
    }
    else if (jugada == 3)
    {
        row = 0;
        col = 2;
    }
    else if (jugada == 4)
    {
        row = 1;
        col = 0;
    }
    else if (jugada == 5)
    {
        row = 1;
        col = 1;
    }
    else if (jugada == 6)
    {
        row = 1;
        col = 2;
    }
    else if (jugada == 7)
    {
        row = 2;     
        col = 0;
    }
    else if (jugada == 8)
    {
        row = 2;
        col = 1;
    }
    else if (jugada == 9)
    {
        row = 2;
        col = 2;
    }
    areaDeJuegoIA[row][col] = 'O';
}

int mejorJugada(char entradaJugador)
{
    bool jugadaUsada= false;
    bool ganador = false;
    int jugadaIA = 0;
    areaIA();
    if (entradaJugador == 'X')
    {
        do
        {
            jugadaIA++;
            jugadaUsada = comprobarCasillaOcupadaIA(jugadaIA);
            if (jugadaUsada == false)
            {
                colocarJugadaIAenX(jugadaIA);
                ganador = revisarGanadorIA(jugadaIA);
            }
            areaIA();
        } while (jugadaIA <= 9 && ganador == false);
    }
    else
    {
        do
        {
            jugadaIA++;
            jugadaUsada = comprobarCasillaOcupadaIA(jugadaIA);
            if (jugadaUsada == false)
            {
                colocarJugadaIAenO(jugadaIA);
                ganador = revisarGanadorIA(jugadaIA);
            }
            areaIA();
        } while (jugadaIA <= 9 && ganador == false);
    }
    if (jugadaIA >= 10)
    {
        jugadaIA = -1;
    }
    return jugadaIA;
}
