
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

#ifndef __LIBMBIM_GLIB_MBIM_ATDS__
#define __LIBMBIM_GLIB_MBIM_ATDS__

G_BEGIN_DECLS

/*****************************************************************************/
/* Struct: MbimAtdsProvider */

/**
 * MbimAtdsProvider:
 * @provider_id: a string.
 * @provider_state: a #guint32.
 * @provider_name: a string.
 * @plmn_mode: a #guint32.
 * @rssi: a #guint32.
 * @error_rate: a #guint32.
 */
typedef struct {
    gchar *provider_id;
    guint32 provider_state;
    gchar *provider_name;
    guint32 plmn_mode;
    guint32 rssi;
    guint32 error_rate;
} MbimAtdsProvider;

void mbim_atds_provider_array_free (MbimAtdsProvider **array);

/*****************************************************************************/
/* Message (Query): MBIM Message ATDS Signal */

MbimMessage *mbim_message_atds_signal_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message ATDS Signal */

gboolean mbim_message_atds_signal_response_parse (
    const MbimMessage *message,
    guint32 *rssi,
    guint32 *error_rate,
    guint32 *rscp,
    guint32 *ecno,
    guint32 *rsrq,
    guint32 *rsrp,
    guint32 *rssnr,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message ATDS Location */

MbimMessage *mbim_message_atds_location_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message ATDS Location */

gboolean mbim_message_atds_location_response_parse (
    const MbimMessage *message,
    guint32 *lac,
    guint32 *tac,
    guint32 *cell_id,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message ATDS Operators */

MbimMessage *mbim_message_atds_operators_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message ATDS Operators */

gboolean mbim_message_atds_operators_response_parse (
    const MbimMessage *message,
    guint32 *providers_count,
    MbimAtdsProvider ***providers,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message ATDS RAT */

MbimMessage *mbim_message_atds_rat_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message ATDS RAT */

MbimMessage *mbim_message_atds_rat_set_new (
    MbimAtdsRatMode mode,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message ATDS RAT */

gboolean mbim_message_atds_rat_response_parse (
    const MbimMessage *message,
    MbimAtdsRatMode *mode,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message ATDS Register State */

MbimMessage *mbim_message_atds_register_state_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message ATDS Register State */

gboolean mbim_message_atds_register_state_response_parse (
    const MbimMessage *message,
    MbimNwError *nw_error,
    MbimRegisterState *register_state,
    MbimRegisterMode *register_mode,
    MbimDataClass *available_data_classes,
    MbimCellularClass *current_cellular_class,
    gchar **provider_id,
    gchar **provider_name,
    gchar **roaming_text,
    MbimRegistrationFlag *registration_flag,
    GError **error);

G_END_DECLS

#endif /* __LIBMBIM_GLIB_MBIM_ATDS__ */
