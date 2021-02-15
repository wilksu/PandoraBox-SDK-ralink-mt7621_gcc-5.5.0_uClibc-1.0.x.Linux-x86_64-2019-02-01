
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

#ifndef __LIBMBIM_GLIB_MBIM_STK__
#define __LIBMBIM_GLIB_MBIM_STK__

G_BEGIN_DECLS

/*****************************************************************************/
/* Message (Query): MBIM Message STK Pac */

MbimMessage *mbim_message_stk_pac_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message STK Pac */

MbimMessage *mbim_message_stk_pac_set_new (
    const guint8 *pac_host_control,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message STK Pac */

gboolean mbim_message_stk_pac_response_parse (
    const MbimMessage *message,
    const guint8 **pac_support,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message STK Pac */

gboolean mbim_message_stk_pac_notification_parse (
    const MbimMessage *message,
    MbimStkPacType *pac_type,
    guint32 *data_buffer_size,
    const guint8 **data_buffer,
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message STK Terminal Response */

MbimMessage *mbim_message_stk_terminal_response_set_new (
    const guint32 response_size,
    const guint8 *response,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message STK Terminal Response */

gboolean mbim_message_stk_terminal_response_response_parse (
    const MbimMessage *message,
    guint32 *result_data_size,
    const guint8 **result_data,
    guint32 *status_words,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message STK Envelope */

MbimMessage *mbim_message_stk_envelope_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message STK Envelope */

MbimMessage *mbim_message_stk_envelope_set_new (
    const guint32 data_size,
    const guint8 *data,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message STK Envelope */

gboolean mbim_message_stk_envelope_response_parse (
    const MbimMessage *message,
    const guint8 **envelope_support,
    GError **error);

G_END_DECLS

#endif /* __LIBMBIM_GLIB_MBIM_STK__ */
