
/* GENERATED CODE... DO NOT EDIT */

/*
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301 USA.
 *
 * Copyright (C) 2013 - 2014 Aleksander Morgado <aleksander@aleksander.es>
 */


#include <glib.h>
#include <glib-object.h>
#include <gio/gio.h>

#include "mbim-message.h"
#include "mbim-device.h"
#include "mbim-enums.h"

#ifndef __LIBMBIM_GLIB_MBIM_PHONEBOOK__
#define __LIBMBIM_GLIB_MBIM_PHONEBOOK__

G_BEGIN_DECLS

/*****************************************************************************/
/* Struct: MbimPhonebookEntry */

/**
 * MbimPhonebookEntry:
 * @entry_index: a #guint32.
 * @number: a string.
 * @name: a string.
 */
typedef struct {
    guint32 entry_index;
    gchar *number;
    gchar *name;
} MbimPhonebookEntry;

void mbim_phonebook_entry_array_free (MbimPhonebookEntry **array);

/*****************************************************************************/
/* Message (Query): MBIM Message Phonebook Configuration */

MbimMessage *mbim_message_phonebook_configuration_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Phonebook Configuration */

gboolean mbim_message_phonebook_configuration_response_parse (
    const MbimMessage *message,
    MbimPhonebookState *state,
    guint32 *number_of_entries,
    guint32 *used_entries,
    guint32 *max_number_length,
    guint32 *max_name,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message Phonebook Configuration */

gboolean mbim_message_phonebook_configuration_notification_parse (
    const MbimMessage *message,
    MbimPhonebookState *state,
    guint32 *number_of_entries,
    guint32 *used_entries,
    guint32 *max_number_length,
    guint32 *max_name,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Phonebook Read */

MbimMessage *mbim_message_phonebook_read_query_new (
    MbimPhonebookFlag filter_flag,
    guint32 filter_message_index,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Phonebook Read */

gboolean mbim_message_phonebook_read_response_parse (
    const MbimMessage *message,
    guint32 *entry_count,
    MbimPhonebookEntry ***entries,
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message Phonebook Delete */

MbimMessage *mbim_message_phonebook_delete_set_new (
    MbimPhonebookFlag filter_flag,
    guint32 filter_message_index,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Phonebook Delete */

gboolean mbim_message_phonebook_delete_response_parse (
    const MbimMessage *message,
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message Phonebook Write */

MbimMessage *mbim_message_phonebook_write_set_new (
    MbimPhonebookWriteFlag save_flag,
    guint32 save_index,
    const gchar *number,
    const gchar *name,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Phonebook Write */

gboolean mbim_message_phonebook_write_response_parse (
    const MbimMessage *message,
    GError **error);

G_END_DECLS

#endif /* __LIBMBIM_GLIB_MBIM_PHONEBOOK__ */
