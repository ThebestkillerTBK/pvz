/*
 * File    : inc/cheat.h
 * Project : PVZ
 * Author  : ze00
 * Email   : zerozakiGeek@gmail.com
 * Date    : 2018-04-12
 * Module  :
 * License : MIT
 */
#ifndef __CHEAT__H
#define __CHEAT__H
void forEachPlants(void (*)(void *));
void forEachZombies(void (*)(void *));
void *getSaves();
void *getField();
void *getStatus();

// for com.c
#define __pvz_unused __attribute__((unused))
#define __pvz_weak __attribute__((weak))
#define __pvz_cheat(name) void name(const char *arg, void *__pvz_unused remote)
#define pvz_cheat(name) __pvz_cheat(name) __pvz_weak
#define pvz_cheat_decl(name) __pvz_cheat(name)

typedef void (*cheat_function)(const char *, void *__pvz_unused);

pvz_cheat(coverZombies);
pvz_cheat(putLadder);
pvz_cheat(fuck_LilyPad_Pumpkin);
pvz_cheat(setSun);
pvz_cheat(pass);
pvz_cheat(setFlags);
pvz_cheat(doLimits);
pvz_cheat(callLadder);
pvz_cheat(callGargantuar);
pvz_cheat(freePlants);
pvz_cheat(switchMode);
pvz_cheat(switchFieldType);
pvz_cheat(moveSaves);
pvz_cheat(changeCoins);
pvz_cheat(jump);
pvz_cheat(changeCardCode);
pvz_cheat(pass2life);
#endif //__CHEAT__H
