#include <stdafx.hpp>

gentity_s* g_entities = reinterpret_cast<gentity_s*>(0x21EF7C0);

void* (__cdecl* Scr_GetCommonFunction)(const char**, int*, int*, int*) = (decltype(Scr_GetCommonFunction))0x004EB070; //found
void* (__cdecl* Player_GetMethod)(const char**, int*, int*) = (decltype(Player_GetMethod))0x006F2DB0; //found

void(__cdecl* Scr_AddEntity)(scriptInstance_t, gentity_s*) = (decltype(Scr_AddEntity))0x4C20F0; //still need to find
void(__cdecl* Scr_AddFloat)(scriptInstance_t, float) = (decltype(Scr_AddFloat))0x579130; //still need to find
void(__cdecl* Scr_AddInt)(scriptInstance_t, int) = (decltype(Scr_AddInt))0x57AFF0; //still need to find
void(__cdecl* Scr_AddString)(scriptInstance_t, const char*) = (decltype(Scr_AddString))0x006A7A70; //found
void(__cdecl* Scr_AddVector)(scriptInstance_t, float*) = (decltype(Scr_AddVector))0x004FAB00; //found

int(__cdecl* Scr_GetNumParam)(scriptInstance_t) = (decltype(Scr_GetNumParam))0x00680EA0; //found

gentity_s* (__cdecl* Scr_GetEntity)(scriptInstance_t, int) = (decltype(Scr_GetEntity))0x00489100; //found
float(__cdecl* Scr_GetFloat)(scriptInstance_t, int) = (decltype(Scr_GetFloat))0x00625EE0; //found
int(__cdecl* Scr_GetInt)(scriptInstance_t, int) = (decltype(Scr_GetInt))0x0049A060; //found
const char* (__cdecl* Scr_GetString)(scriptInstance_t, int) = (decltype(Scr_GetString))0x00488110; //found
void(__cdecl* Scr_GetVector)(scriptInstance_t, int, float*) = (decltype(Scr_GetVector))0x004BB100; //found