/*
 * This software is licensed under the terms of the MIT-License
 * See COPYING for further information.
 * ---
 * Copyright (c) 2011-2019, Lukas Weber <laochailan@web.de>.
 * Copyright (c) 2012-2019, Andrei Alexeyev <akari@taisei-project.org>.
 */

#ifndef IGUARD_resource_sprite_h
#define IGUARD_resource_sprite_h

#include "taisei.h"

#include "resource.h"
#include "texture.h"

typedef struct Sprite {
	RESOURCE_ALIGN
	ResourceRef tex;
	FloatRect tex_area;
	union {
		FloatRect sprite_area;
		struct {
			union {
				FloatOffset offset;
				struct { float x, y; };
			};
			union {
				FloatExtent extent;
				struct { float w, h; };
			};
		};
	};
} Sprite;

static_assert(offsetof(Sprite, sprite_area.offset) == offsetof(Sprite, offset), "Sprite struct layout inconsistent with FloatRect");
static_assert(offsetof(Sprite, sprite_area.extent) == offsetof(Sprite, extent), "Sprite struct layout inconsistent with FloatRect");

void draw_sprite(float x, float y, const char *name);
void draw_sprite_p(float x, float y, Sprite *spr);
void draw_sprite_batched(float x, float y, const char *name);
void draw_sprite_batched_p(float x, float y, Sprite *spr);
void draw_sprite_ex(float x, float y, float scale_x, float scale_y, bool batched, Sprite *spr);

void begin_draw_sprite(float x, float y, float scale_x, float scale_y, Sprite *spr);
void end_draw_sprite(void);

Sprite *get_sprite(const char *name);
Sprite *prefix_get_sprite(const char *name, const char *prefix);

extern ResourceHandler sprite_res_handler;

#define SPRITE_EXTENSION ".spr"

#endif // IGUARD_resource_sprite_h
