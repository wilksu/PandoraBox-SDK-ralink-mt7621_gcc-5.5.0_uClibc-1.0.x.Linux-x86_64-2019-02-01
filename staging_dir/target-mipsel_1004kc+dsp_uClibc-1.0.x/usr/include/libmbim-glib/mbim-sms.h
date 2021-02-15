
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

#ifndef __LIBMBIM_GLIB_MBIM_SMS__
#define __LIBMBIM_GLIB_MBIM_SMS__

G_BEGIN_DECLS

/*****************************************************************************/
/* Struct: MbimSmsPduReadRecord */

/**
 * MbimSmsPduReadRecord:
 * @message_index: a #guint32.
 * @message_status: a #guint32.
 * @pdu_data_size: size of the pdu_data array.
 * @pdu_data: an array of #guint8 values.
 */
typedef struct {
    guint32 message_index;
    guint32 message_status;
    guint32 pdu_data_size;
    guint8 *pdu_data;
} MbimSmsPduReadRecord;

void mbim_sms_pdu_read_record_array_free (MbimSmsPduReadRecord **array);

/*****************************************************************************/
/* Struct: MbimSmsCdmaReadRecord */

/**
 * MbimSmsCdmaReadRecord:
 * @message_index: a #guint32.
 * @message_status: a #guint32.
 * @address: a string.
 * @timestamp: a string.
 * @encoding: a #guint32.
 * @language: a #guint32.
 * @encoded_message_size: size of the encoded_message array.
 * @encoded_message: an array of #guint8 values.
 * @encoded_message_size_in_characters: a #guint32.
 */
typedef struct {
    guint32 message_index;
    guint32 message_status;
    gchar *address;
    gchar *timestamp;
    guint32 encoding;
    guint32 language;
    guint32 encoded_message_size;
    guint8 *encoded_message;
    guint32 encoded_message_size_in_characters;
} MbimSmsCdmaReadRecord;

void mbim_sms_cdma_read_record_array_free (MbimSmsCdmaReadRecord **array);

/*****************************************************************************/
/* Struct: MbimSmsPduSendRecord */

/**
 * MbimSmsPduSendRecord:
 * @pdu_data_size: size of the pdu_data array.
 * @pdu_data: an array of #guint8 values.
 */
typedef struct {
    guint32 pdu_data_size;
    guint8 *pdu_data;
} MbimSmsPduSendRecord;

void mbim_sms_pdu_send_record_free (MbimSmsPduSendRecord *var);

/*****************************************************************************/
/* Struct: MbimSmsCdmaSendRecord */

/**
 * MbimSmsCdmaSendRecord:
 * @encoding: a #guint32.
 * @language: a #guint32.
 * @address: a string.
 * @encoded_message_size: size of the encoded_message array.
 * @encoded_message: an array of #guint8 values.
 * @encoded_message_size_in_characters: a #guint32.
 */
typedef struct {
    guint32 encoding;
    guint32 language;
    gchar *address;
    guint32 encoded_message_size;
    guint8 *encoded_message;
    guint32 encoded_message_size_in_characters;
} MbimSmsCdmaSendRecord;

void mbim_sms_cdma_send_record_free (MbimSmsCdmaSendRecord *var);

/*****************************************************************************/
/* Message (Query): MBIM Message SMS Configuration */

MbimMessage *mbim_message_sms_configuration_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message SMS Configuration */

MbimMessage *mbim_message_sms_configuration_set_new (
    MbimSmsFormat format,
    const gchar *sc_address,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message SMS Configuration */

gboolean mbim_message_sms_configuration_response_parse (
    const MbimMessage *message,
    MbimSmsStorageState *sms_storage_state,
    MbimSmsFormat *format,
    guint32 *max_messages,
    guint32 *cdma_short_message_size,
    gchar **sc_address,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message SMS Read */

MbimMessage *mbim_message_sms_read_query_new (
    MbimSmsFormat format,
    MbimSmsFlag flag,
    guint32 message_index,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message SMS Read */

gboolean mbim_message_sms_read_response_parse (
    const MbimMessage *message,
    MbimSmsFormat *format,
    guint32 *messages_count,
    MbimSmsPduReadRecord ***pdu_messages,
    MbimSmsCdmaReadRecord ***cdma_messages,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message SMS Read */

gboolean mbim_message_sms_read_notification_parse (
    const MbimMessage *message,
    MbimSmsFormat *format,
    guint32 *messages_count,
    MbimSmsPduReadRecord ***pdu_messages,
    MbimSmsCdmaReadRecord ***cdma_messages,
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message SMS Send */

MbimMessage *mbim_message_sms_send_set_new (
    MbimSmsFormat format,
    const MbimSmsPduSendRecord *pdu_message,
    const MbimSmsCdmaSendRecord *cdma_message,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message SMS Send */

gboolean mbim_message_sms_send_response_parse (
    const MbimMessage *message,
    guint32 *message_reference,
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message SMS Delete */

MbimMessage *mbim_message_sms_delete_set_new (
    MbimSmsFlag flag,
    guint32 message_index,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message SMS Delete */

gboolean mbim_message_sms_delete_response_parse (
    const MbimMessage *message,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message SMS Message Store Status */

MbimMessage *mbim_message_sms_message_store_status_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message SMS Message Store Status */

gboolean mbim_message_sms_message_store_status_response_parse (
    const MbimMessage *message,
    MbimSmsStatusFlag *flag,
    guint32 *message_index,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message SMS Message Store Status */

gboolean mbim_message_sms_message_store_status_notification_parse (
    const MbimMessage *message,
    MbimSmsStatusFlag *flag,
    guint32 *message_index,
    GError **error);

G_END_DECLS

#endif /* __LIBMBIM_GLIB_MBIM_SMS__ */
