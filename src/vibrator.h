/*
 * ngfd - Non-graphical feedback daemon
 *
 * Copyright (C) 2010 Nokia Corporation. All rights reserved.
 *
 * Contact: Xun Chen <xun.chen@nokia.com>
 *
 * This software, including documentation, is protected by copyright
 * controlled by Nokia Corporation. All rights are reserved.
 * Copying, including reproducing, storing, adapting or translating,
 * any or all of this material requires the prior written consent of
 * Nokia Corporation. This material also contains confidential
 * information which may not be disclosed to others without the prior
 * written consent of Nokia.
 */

#ifndef VIBRATOR_H
#define VIBRATOR_H

#include <glib.h>

typedef struct _Vibrator Vibrator;
typedef void (*VibratorCompletedCallback) (Vibrator *vibrator, gpointer userdata);

Vibrator* vibrator_create       ();
void      vibrator_destroy      (Vibrator *self);
gpointer  vibrator_load         (const char *filename);
guint     vibrator_start        (Vibrator *self, gpointer data, gint pattern_id, VibratorCompletedCallback callback, gpointer userdata);
void      vibrator_stop         (Vibrator *self, guint id);

#endif /* VIBRATOR_H */
