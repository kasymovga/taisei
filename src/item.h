/*
 * This software is licensed under the terms of the MIT License.
 * See COPYING for further information.
 * ---
 * Copyright (c) 2011-2019, Lukas Weber <laochailan@web.de>.
 * Copyright (c) 2012-2019, Andrei Alexeyev <akari@taisei-project.org>.
 */

#ifndef IGUARD_item_h
#define IGUARD_item_h

#include "taisei.h"

#include "util.h"
#include "resource/texture.h"
#include "objectpool.h"
#include "entity.h"

typedef struct Item Item;
typedef LIST_ANCHOR(Item) ItemList;

typedef enum {
	// from least important to most important
	// this affects the draw order
	ITEM_PIV = 1,
	ITEM_POINTS,
	ITEM_POWER_MINI,
	ITEM_POWER,
	ITEM_SURGE,
	ITEM_VOLTAGE,
	ITEM_BOMB_FRAGMENT,
	ITEM_LIFE_FRAGMENT,
	ITEM_BOMB,
	ITEM_LIFE,

	ITEM_FIRST = ITEM_PIV,
	ITEM_LAST = ITEM_LIFE,
} ItemType;

struct Item {
	ENTITY_INTERFACE_NAMED(Item, ent);

	int birthtime;
	int collecttime;
	cmplx pos;
	cmplx pos0;

	int auto_collect;
	ItemType type;
	float pickup_value;

	cmplx v;
};

Item *create_item(cmplx pos, cmplx v, ItemType type);
void delete_item(Item *item);
void delete_items(void);

Item* create_clear_item(cmplx pos, uint clear_flags);

int collision_item(Item *p);
void process_items(void);

void spawn_item(cmplx pos, ItemType type);
void spawn_and_collect_item(cmplx pos, ItemType type, float collect_value);

typedef struct SpawnItemsArgs {
	ItemType type;
	int count;
} SpawnItemsArgs;

void spawn_items(cmplx pos, SpawnItemsArgs groups[]);
void spawn_and_collect_items(cmplx pos, float collect_value, SpawnItemsArgs groups[]);

#define spawn_items(pos, ...) \
	spawn_items(pos, ((SpawnItemsArgs[]) { __VA_ARGS__, { 0 } }))

#define spawn_and_collect_items(pos, collect_value, ...) \
	spawn_and_collect_items(pos, collect_value, ((SpawnItemsArgs[]) { __VA_ARGS__, 0 }))

bool collect_item(Item *item, float value);
void collect_all_items(float value);

void items_preload(void);

#define POWER_VALUE 3
#define POWER_VALUE_MINI 1

#define ITEM_MAX_VALUE 1.0
#define ITEM_MIN_VALUE 0.1

#endif // IGUARD_item_h
