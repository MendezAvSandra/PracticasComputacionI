/*
 * Author: Sandra Mendez Aviles
 * mendezavilessandra@gmail.com
 * Oct 15, 2021
 */

#ifndef DDD_PUNTO_H
#define DDD_PUNTO_H
class Punto2D{
public:
    float x, y;
    void SetPosicion(double a, double b);
    float Escalar(float temp1, float temp2);
    float GetX(), GetY();
    double RotarRespectoAlOrigen(float temp1);
    float Trasladar (float temp1, float temp2);
};
#endif //DDD_PUNTO_H
