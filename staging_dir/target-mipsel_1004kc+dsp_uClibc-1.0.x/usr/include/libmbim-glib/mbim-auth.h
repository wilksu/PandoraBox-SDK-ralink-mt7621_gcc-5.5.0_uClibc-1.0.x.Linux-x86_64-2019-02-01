
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

#ifndef __LIBMBIM_GLIB_MBIM_AUTH__
#define __LIBMBIM_GLIB_MBIM_AUTH__

G_BEGIN_DECLS

/*****************************************************************************/
/* Message (Query): MBIM Message Auth Aka */

MbimMessage *mbim_message_auth_aka_query_new (
    const guint8 *rand,
    const guint8 *autn,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Auth Aka */

gboolean mbim_message_auth_aka_response_parse (
    const MbimMessage *message,
    const guint8 **res,
    guint32 *res_len,
    const guint8 **integrating_key,
    const guint8 **ciphering_key,
    const guint8 **auts,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Auth Akap */

MbimMessage *mbim_message_auth_akap_query_new (
    const guint8 *rand,
    const guint8 *autn,
    const gchar *network_name,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Auth Akap */

gboolean mbim_message_auth_akap_response_parse (
    const MbimMessage *message,
    const guint8 **res,
    guint32 *res_len,
    const guint8 **integrating_key,
    const guint8 **ciphering_key,
    const guint8 **auts,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Auth Sim */

MbimMessage *mbim_message_auth_sim_query_new (
    const guint8 *rand1,
    const guint8 *rand2,
    const guint8 *rand3,
    guint32 n,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Auth Sim */

gboolean mbim_message_auth_sim_response_parse (
    const MbimMessage *message,
    guint32 *sres1,
    guint64 *kc1,
    guint32 *sres2,
    guint64 *kc2,
    guint32 *sres3,
    guint64 *kc3,
    guint32 *n,
    GError **error);

G_END_DECLS

#endif /* __LIBMBIM_GLIB_MBIM_AUTH__ */
