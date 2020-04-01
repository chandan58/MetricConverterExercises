#include "converter.h"

double centimetres_to_millimetres(double centimetres)
{
    double millimetres;
    millimetres = centimetres * MILLIMETRES_IN_CENTIMETRE;
    return millimetres;
}

double metres_to_centimetres(double metres)
{
    double centimetres;
    centimetres = metres * CENTIMETRES_IN_METRE;
    return centimetres;
}

double kilometres_to_metres(double kilometres)
{
    double metres;
    metres = kilometres * METRES_IN_KILOMETRE;
    return metres;
}

//TASK 3

double millimetres_to_centimetres(double millimetres);
{
    double centimetres;
    centimetres = millimetres/MILLIMETRES_IN_CENTIMETRE;
    return centimetres;
}

double centimetres_to_metres(double centimetres);
{
    double metres;
    metres = centimetres/CENTIMETRES_IN_METRE;
    return metres;
}

double metres_to_kilometres(double metres);
{
    double kilometres;
    kilometres = metres/METRES_IN_KILOMETRE;
    return kilometres;
}

//TASK 4

double metres_to_millimetres(double metres);
{
    double millimetres,centimetres;
    centimetres = metres_to_centimetres(metres);
    millimetres = centimetres_to_millimetres(centimetres);
    return millimetres;
}
