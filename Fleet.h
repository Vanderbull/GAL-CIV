#pragma once
#include <list>
#include <vector>
#include <stack>
#include <SDL.h>
#include "src\Objects.h"

class Fleet
{

public:
    Fleet();

    void Update();
    void Draw();
    void Spawn();
    int GetSize(){ return Size; };
    int GetActive(){ return Active; };
    int GetSurfaceID(){ return iSurfaceID; };
    int GetX(){ return X; };
    int GetY(){ return Y; };

private:
    SDL_Rect CollisionBox;
    int Size;
    int Active;
    int iSurfaceID;
    int X,Y;
};

class ControlFleet
{
public:
    ControlFleet();
    ~ControlFleet();
    void DrawFleet();
    void CreateFleet();

    void LoadFleet(int xPos, int yPos, int iSurfaceID);
    std::vector< Fleet > GetVFleetByReference();

    std::vector< Fleet > FleetArrayRef;
private:

};

extern ControlFleet FleetController;