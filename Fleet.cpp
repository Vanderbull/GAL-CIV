#include "Fleet.h"
#include <SDL.h>
#include "src\game.h"
#include "src\ControlGfx.h"

// 1. this should go into every .cpp , after all header inclusions
#ifdef _WIN32
#ifdef _DEBUG
#include <crtdbg.h>
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#define new       new( _NORMAL_BLOCK, __FILE__, __LINE__)
#define malloc(s) _malloc_dbg(s, _NORMAL_BLOCK, __FILE__, __LINE__)
#endif
#endif

ControlFleet FleetController;


Fleet::Fleet(){};
void Fleet::Update(){};
void Fleet::Draw(){};
void Fleet::Spawn(){};



ControlFleet::ControlFleet(){};
ControlFleet::~ControlFleet(){};
void ControlFleet::DrawFleet(){};
void ControlFleet::CreateFleet(){};

void ControlFleet::LoadFleet(int xPos, int yPos, int iSurfaceID){};
std::vector< Fleet > ControlFleet::GetVFleetByReference(){ return FleetArrayRef; };

