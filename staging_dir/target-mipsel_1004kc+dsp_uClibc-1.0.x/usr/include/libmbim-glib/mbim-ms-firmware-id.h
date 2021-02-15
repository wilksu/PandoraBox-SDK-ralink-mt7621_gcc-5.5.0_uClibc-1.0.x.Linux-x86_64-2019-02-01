
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

#ifndef __LIBMBIM_GLIB_MBIM_MS_FIRMWARE_ID__
#define __LIBMBIM_GLIB_MBIM_MS_FIRMWARE_ID__

G_BEGIN_DECLS

/*****************************************************************************/
/* Message (Query): MBIM Message MS Firmware ID Get */

MbimMessage *mbim_message_ms_firmware_id_get_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message MS Firmware ID Get */

gboolean mbim_message_ms_firmware_id_get_response_parse (
    const MbimMessage *message,
    const MbimUuid **firmware_id,
    GError **error);

G_END_DECLS

#endif /* __LIBMBIM_GLIB_MBIM_MS_FIRMWARE_ID__ */
