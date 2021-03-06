/*
 * This software is licensed under the terms of the MIT License.
 * See COPYING for further information.
 * ---
 * Copyright (c) 2011-2019, Lukas Weber <laochailan@web.de>.
 * Copyright (c) 2012-2019, Andrei Alexeyev <akari@taisei-project.org>.
 */

#include "taisei.h"

#include "dialog_macros.h"

#define LEFT_BASE reimu

#define RIGHT_BASE cirno

DIALOG_SCRIPT(reimu_stage1_pre_boss) {
	LEFT("FIXME: Removed due to issue #179");
	RIGHT("FIXME: Removed due to issue #179");
	LEFT_FACE(unamused);
	LEFT("FIXME: Removed due to issue #179");
	RIGHT_FACE(angry);
	RIGHT("FIXME: Removed due to issue #179");
	RIGHT("FIXME: Removed due to issue #179");
}

DIALOG_SCRIPT(reimu_stage1_post_boss) {
	LEFT_FACE(happy);
	LEFT("FIXME: Removed due to issue #179");
	// RIGHT("FIXME: Removed due to issue #179");
	LEFT_FACE(normal);
	LEFT("FIXME: Removed due to issue #179");
}

#undef RIGHT_BASE
#define RIGHT_BASE hina

DIALOG_SCRIPT(reimu_stage2_pre_boss) {
	RIGHT("FIXME: Removed due to issue #179");
	LEFT_FACE(surprised);
	LEFT("FIXME: Removed due to issue #179");
	LEFT_FACE(puzzled);
	RIGHT_FACE(concerned);
	RIGHT("FIXME: Removed due to issue #179");
	LEFT_FACE(unamused);
	LEFT("FIXME: Removed due to issue #179");
	LEFT_FACE(surprised);
	RIGHT_FACE(serious);
	RIGHT("FIXME: Removed due to issue #179");
}

DIALOG_SCRIPT(reimu_stage2_post_boss) {
	LEFT_FACE(sigh);
	LEFT("FIXME: Removed due to issue #179");
	RIGHT("FIXME: Removed due to issue #179");
	LEFT_FACE(smug);
	LEFT("FIXME: Removed due to issue #179");
	LEFT_FACE(happy);
	LEFT("FIXME: Removed due to issue #179");
}

#undef RIGHT_BASE
#define RIGHT_BASE wriggle

DIALOG_SCRIPT(reimu_stage3_pre_boss) {
	LEFT("FIXME: Removed due to issue #179");
	RIGHT_FACE(calm);
	RIGHT("FIXME: Removed due to issue #179");
	RIGHT_FACE(outraged);
	RIGHT("FIXME: Removed due to issue #179");
	LEFT_FACE(smug);
	LEFT("FIXME: Removed due to issue #179");
	RIGHT_FACE(proud);
	RIGHT("FIXME: Removed due to issue #179");
	RIGHT_FACE(normal);
	LEFT_FACE(happy);
	LEFT("FIXME: Removed due to issue #179");
	RIGHT_FACE(proud);
	RIGHT("FIXME: Removed due to issue #179");
}

DIALOG_SCRIPT(reimu_stage3_post_boss) {
	LEFT("FIXME: Removed due to issue #179");
	RIGHT("FIXME: Removed due to issue #179");
	LEFT_FACE(smug);
	LEFT("FIXME: Removed due to issue #179");
	RIGHT_FACE(outraged_unlit);
	RIGHT("FIXME: Removed due to issue #179");
	LEFT_FACE(normal);
	RIGHT("FIXME: Removed due to issue #179");
	RIGHT_FACE(defeated);
	LEFT_FACE(sigh);
	LEFT("FIXME: Removed due to issue #179");
}

#undef RIGHT_BASE
#define RIGHT_BASE kurumi

DIALOG_SCRIPT(reimu_stage4_pre_boss) {
	// TODO rewrite this

	LEFT_FACE(surprised);
	RIGHT_FACE(tsun);
	RIGHT("FIXME: Removed due to issue #179");
	RIGHT_FACE(normal);
	LEFT("FIXME: Removed due to issue #179");
	RIGHT_FACE(tsun_blush);
	RIGHT("FIXME: Removed due to issue #179");
	RIGHT_FACE(dissatisfied);
	LEFT_FACE(puzzled);
	LEFT("FIXME: Removed due to issue #179");
	RIGHT_FACE(tsun);
	RIGHT("FIXME: Removed due to issue #179");
	LEFT_FACE(unamused);
	LEFT("FIXME: Removed due to issue #179");
	RIGHT("FIXME: Removed due to issue #179");
}

DIALOG_SCRIPT(reimu_stage4_post_boss) {
	// TODO rewrite this

	LEFT("FIXME: Removed due to issue #179");
	RIGHT("FIXME: Removed due to issue #179");
	RIGHT_FACE(tsun_blush);
	RIGHT("FIXME: Removed due to issue #179");
	RIGHT_FACE(dissatisfied);
	LEFT_FACE(sigh);
	LEFT("FIXME: Removed due to issue #179");
	RIGHT_FACE(tsun_blush);
	RIGHT("FIXME: Removed due to issue #179");
}

#undef RIGHT_BASE
#define RIGHT_BASE iku

DIALOG_SCRIPT(reimu_stage5_pre_boss) {
	LEFT_FACE(puzzled);
	LEFT("FIXME: Removed due to issue #179");
	RIGHT_FACE(serious);
	RIGHT("FIXME: Removed due to issue #179");
	RIGHT_FACE(normal);
	LEFT_FACE(surprised);
	LEFT("FIXME: Removed due to issue #179");
	RIGHT_FACE(serious);
	RIGHT("FIXME: Removed due to issue #179");
	RIGHT_FACE(smile);
	RIGHT("FIXME: Removed due to issue #179");
	LEFT_FACE(unamused);
	LEFT("FIXME: Removed due to issue #179");
	RIGHT_FACE(eyes_closed);
	RIGHT("FIXME: Removed due to issue #179");
	RIGHT_FACE(serious);
	LEFT_FACE(sigh);
	RIGHT("FIXME: Removed due to issue #179");
}

DIALOG_SCRIPT(reimu_stage5_post_midboss) {
	LEFT_FACE(puzzled);
	LEFT("FIXME: Removed due to issue #179");
}

DIALOG_SCRIPT(reimu_stage5_post_boss) {
	LEFT_FACE(smug);
	LEFT("FIXME: Removed due to issue #179");
	RIGHT("FIXME: Removed due to issue #179");
	LEFT_FACE(normal);
	RIGHT("FIXME: Removed due to issue #179");
	LEFT_FACE(happy);
	LEFT("FIXME: Removed due to issue #179");
}

#undef RIGHT_BASE
#define RIGHT_BASE elly

DIALOG_SCRIPT(reimu_stage6_pre_boss) {
	LEFT_FACE(puzzled);
	LEFT("FIXME: Removed due to issue #179");
	RIGHT("FIXME: Removed due to issue #179");
	LEFT_FACE(normal);
	LEFT("FIXME: Removed due to issue #179");
	RIGHT("FIXME: Removed due to issue #179");
	RIGHT("FIXME: Removed due to issue #179");
	RIGHT("FIXME: Removed due to issue #179");
	LEFT_FACE(sigh);
	LEFT("FIXME: Removed due to issue #179");
	RIGHT_FACE(angry);
	RIGHT("FIXME: Removed due to issue #179");
	LEFT_FACE(unamused);
	LEFT("FIXME: Removed due to issue #179");
	LEFT_FACE(smug);
	LEFT("FIXME: Removed due to issue #179");
	RIGHT("FIXME: Removed due to issue #179");
}

DIALOG_SCRIPT(reimu_stage6_pre_final) {
	RIGHT_FACE(angry);
	RIGHT("FIXME: Removed due to issue #179");
	LEFT_FACE(puzzled);
	RIGHT("FIXME: Removed due to issue #179");
	LEFT_FACE(surprised);
	RIGHT_FACE(shouting);
	RIGHT("FIXME: Removed due to issue #179");
}

EXPORT_DIALOG_SCRIPT(reimu)
