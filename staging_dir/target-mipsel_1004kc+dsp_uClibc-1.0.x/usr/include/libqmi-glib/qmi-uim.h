
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
 * Copyright (C) 2012 Lanedo GmbH
 * Copyright (C) 2012-2017 Aleksander Morgado <aleksander@aleksander.es>
 */


#include <glib.h>
#include <glib-object.h>
#include <gio/gio.h>

#include "qmi-enums.h"
#include "qmi-enums-uim.h"
#include "qmi-message.h"
#include "qmi-client.h"

#ifndef __LIBQMI_GLIB_QMI_UIM__
#define __LIBQMI_GLIB_QMI_UIM__

G_BEGIN_DECLS


/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Reset */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageUimResetOutput:
 *
 * The #QmiMessageUimResetOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiMessageUimResetOutput QmiMessageUimResetOutput;
GType qmi_message_uim_reset_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_RESET_OUTPUT (qmi_message_uim_reset_output_get_type ())

/**
 * qmi_message_uim_reset_output_get_result:
 * @self: a QmiMessageUimResetOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_reset_output_get_result (
    QmiMessageUimResetOutput *self,
    GError **error);

/**
 * qmi_message_uim_reset_output_ref:
 * @self: a #QmiMessageUimResetOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiMessageUimResetOutput *qmi_message_uim_reset_output_ref (QmiMessageUimResetOutput *self);

/**
 * qmi_message_uim_reset_output_unref:
 * @self: a #QmiMessageUimResetOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_message_uim_reset_output_unref (QmiMessageUimResetOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Get Supported Messages */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageUimGetSupportedMessagesOutput:
 *
 * The #QmiMessageUimGetSupportedMessagesOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageUimGetSupportedMessagesOutput QmiMessageUimGetSupportedMessagesOutput;
GType qmi_message_uim_get_supported_messages_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_GET_SUPPORTED_MESSAGES_OUTPUT (qmi_message_uim_get_supported_messages_output_get_type ())

/**
 * qmi_message_uim_get_supported_messages_output_get_result:
 * @self: a QmiMessageUimGetSupportedMessagesOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_get_supported_messages_output_get_result (
    QmiMessageUimGetSupportedMessagesOutput *self,
    GError **error);

/**
 * qmi_message_uim_get_supported_messages_output_get_list:
 * @self: a #QmiMessageUimGetSupportedMessagesOutput.
 * @value_list: a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'List' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_get_supported_messages_output_get_list (
    QmiMessageUimGetSupportedMessagesOutput *self,
    GArray **value_list,
    GError **error);

/**
 * qmi_message_uim_get_supported_messages_output_ref:
 * @self: a #QmiMessageUimGetSupportedMessagesOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageUimGetSupportedMessagesOutput *qmi_message_uim_get_supported_messages_output_ref (QmiMessageUimGetSupportedMessagesOutput *self);

/**
 * qmi_message_uim_get_supported_messages_output_unref:
 * @self: a #QmiMessageUimGetSupportedMessagesOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_uim_get_supported_messages_output_unref (QmiMessageUimGetSupportedMessagesOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Read Transparent */


/* --- Input -- */

/**
 * QmiMessageUimReadTransparentInput:
 *
 * The #QmiMessageUimReadTransparentInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiMessageUimReadTransparentInput QmiMessageUimReadTransparentInput;
GType qmi_message_uim_read_transparent_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_READ_TRANSPARENT_INPUT (qmi_message_uim_read_transparent_input_get_type ())

/**
 * qmi_message_uim_read_transparent_input_get_encrypt_data:
 * @self: a #QmiMessageUimReadTransparentInput.
 * @value_encrypt_data: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Encrypt Data' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_transparent_input_get_encrypt_data (
    QmiMessageUimReadTransparentInput *self,
    gboolean *value_encrypt_data,
    GError **error);

/**
 * qmi_message_uim_read_transparent_input_set_encrypt_data:
 * @self: a #QmiMessageUimReadTransparentInput.
 * @value_encrypt_data: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Encrypt Data' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_transparent_input_set_encrypt_data (
    QmiMessageUimReadTransparentInput *self,
    gboolean value_encrypt_data,
    GError **error);

/**
 * qmi_message_uim_read_transparent_input_get_response_in_indication_token:
 * @self: a #QmiMessageUimReadTransparentInput.
 * @value_response_in_indication_token: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Response In Indication Token' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_transparent_input_get_response_in_indication_token (
    QmiMessageUimReadTransparentInput *self,
    guint32 *value_response_in_indication_token,
    GError **error);

/**
 * qmi_message_uim_read_transparent_input_set_response_in_indication_token:
 * @self: a #QmiMessageUimReadTransparentInput.
 * @value_response_in_indication_token: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Response In Indication Token' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_transparent_input_set_response_in_indication_token (
    QmiMessageUimReadTransparentInput *self,
    guint32 value_response_in_indication_token,
    GError **error);

/**
 * qmi_message_uim_read_transparent_input_get_read_information:
 * @self: a #QmiMessageUimReadTransparentInput.
 * @value_read_information_offset: a placeholder for the output #guint16, or %NULL if not required.
 * @value_read_information_length: a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Read Information' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_transparent_input_get_read_information (
    QmiMessageUimReadTransparentInput *self,
    guint16 *value_read_information_offset,
    guint16 *value_read_information_length,
    GError **error);

/**
 * qmi_message_uim_read_transparent_input_set_read_information:
 * @self: a #QmiMessageUimReadTransparentInput.
 * @value_read_information_offset: a #guint16.
 * @value_read_information_length: a #guint16.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Read Information' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_transparent_input_set_read_information (
    QmiMessageUimReadTransparentInput *self,
    guint16 value_read_information_offset,
    guint16 value_read_information_length,
    GError **error);

/**
 * qmi_message_uim_read_transparent_input_get_file:
 * @self: a #QmiMessageUimReadTransparentInput.
 * @value_file_file_id: a placeholder for the output #guint16, or %NULL if not required.
 * @value_file_file_path: a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'File' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_transparent_input_get_file (
    QmiMessageUimReadTransparentInput *self,
    guint16 *value_file_file_id,
    GArray **value_file_file_path,
    GError **error);

/**
 * qmi_message_uim_read_transparent_input_set_file:
 * @self: a #QmiMessageUimReadTransparentInput.
 * @value_file_file_id: a #guint16.
 * @value_file_file_path: a #GArray of #guint8 elements. A new reference to @value_file_file_path will be taken.
 * @error: Return location for error or %NULL.
 *
 * Set the 'File' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_transparent_input_set_file (
    QmiMessageUimReadTransparentInput *self,
    guint16 value_file_file_id,
    GArray *value_file_file_path,
    GError **error);

/**
 * qmi_message_uim_read_transparent_input_get_session_information:
 * @self: a #QmiMessageUimReadTransparentInput.
 * @value_session_information_session_type: a placeholder for the output #QmiUimSessionType, or %NULL if not required.
 * @value_session_information_application_identifier: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Session Information' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_transparent_input_get_session_information (
    QmiMessageUimReadTransparentInput *self,
    QmiUimSessionType *value_session_information_session_type,
    const gchar **value_session_information_application_identifier,
    GError **error);

/**
 * qmi_message_uim_read_transparent_input_set_session_information:
 * @self: a #QmiMessageUimReadTransparentInput.
 * @value_session_information_session_type: a #QmiUimSessionType.
 * @value_session_information_application_identifier: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Session Information' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_transparent_input_set_session_information (
    QmiMessageUimReadTransparentInput *self,
    QmiUimSessionType value_session_information_session_type,
    const gchar *value_session_information_application_identifier,
    GError **error);

/**
 * qmi_message_uim_read_transparent_input_ref:
 * @self: a #QmiMessageUimReadTransparentInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiMessageUimReadTransparentInput *qmi_message_uim_read_transparent_input_ref (QmiMessageUimReadTransparentInput *self);

/**
 * qmi_message_uim_read_transparent_input_unref:
 * @self: a #QmiMessageUimReadTransparentInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_message_uim_read_transparent_input_unref (QmiMessageUimReadTransparentInput *self);

/**
 * qmi_message_uim_read_transparent_input_new:
 *
 * Allocates a new #QmiMessageUimReadTransparentInput.
 *
 * Returns: the newly created #QmiMessageUimReadTransparentInput. The returned value should be freed with qmi_message_uim_read_transparent_input_unref().
 *
 * Since: 1.6
 */
QmiMessageUimReadTransparentInput *qmi_message_uim_read_transparent_input_new (void);

/* --- Output -- */

/**
 * QmiMessageUimReadTransparentOutput:
 *
 * The #QmiMessageUimReadTransparentOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiMessageUimReadTransparentOutput QmiMessageUimReadTransparentOutput;
GType qmi_message_uim_read_transparent_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_READ_TRANSPARENT_OUTPUT (qmi_message_uim_read_transparent_output_get_type ())

/**
 * qmi_message_uim_read_transparent_output_get_card_result:
 * @self: a #QmiMessageUimReadTransparentOutput.
 * @value_card_result_sw1: a placeholder for the output #guint8, or %NULL if not required.
 * @value_card_result_sw2: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Card result' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_transparent_output_get_card_result (
    QmiMessageUimReadTransparentOutput *self,
    guint8 *value_card_result_sw1,
    guint8 *value_card_result_sw2,
    GError **error);

/**
 * qmi_message_uim_read_transparent_output_get_result:
 * @self: a QmiMessageUimReadTransparentOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_transparent_output_get_result (
    QmiMessageUimReadTransparentOutput *self,
    GError **error);

/**
 * qmi_message_uim_read_transparent_output_get_read_result:
 * @self: a #QmiMessageUimReadTransparentOutput.
 * @value_read_result: a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Read result' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_transparent_output_get_read_result (
    QmiMessageUimReadTransparentOutput *self,
    GArray **value_read_result,
    GError **error);

/**
 * qmi_message_uim_read_transparent_output_get_response_in_indication_token:
 * @self: a #QmiMessageUimReadTransparentOutput.
 * @value_response_in_indication_token: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Response In Indication Token' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_transparent_output_get_response_in_indication_token (
    QmiMessageUimReadTransparentOutput *self,
    guint32 *value_response_in_indication_token,
    GError **error);

/**
 * qmi_message_uim_read_transparent_output_get_encrypted_data:
 * @self: a #QmiMessageUimReadTransparentOutput.
 * @value_encrypted_data: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Encrypted Data' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_transparent_output_get_encrypted_data (
    QmiMessageUimReadTransparentOutput *self,
    gboolean *value_encrypted_data,
    GError **error);

/**
 * qmi_message_uim_read_transparent_output_ref:
 * @self: a #QmiMessageUimReadTransparentOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiMessageUimReadTransparentOutput *qmi_message_uim_read_transparent_output_ref (QmiMessageUimReadTransparentOutput *self);

/**
 * qmi_message_uim_read_transparent_output_unref:
 * @self: a #QmiMessageUimReadTransparentOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_message_uim_read_transparent_output_unref (QmiMessageUimReadTransparentOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Read Record */


/* --- Input -- */

/**
 * QmiMessageUimReadRecordInput:
 *
 * The #QmiMessageUimReadRecordInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiMessageUimReadRecordInput QmiMessageUimReadRecordInput;
GType qmi_message_uim_read_record_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_READ_RECORD_INPUT (qmi_message_uim_read_record_input_get_type ())

/**
 * qmi_message_uim_read_record_input_get_response_in_indication_token:
 * @self: a #QmiMessageUimReadRecordInput.
 * @value_response_in_indication_token: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Response In Indication Token' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_record_input_get_response_in_indication_token (
    QmiMessageUimReadRecordInput *self,
    guint32 *value_response_in_indication_token,
    GError **error);

/**
 * qmi_message_uim_read_record_input_set_response_in_indication_token:
 * @self: a #QmiMessageUimReadRecordInput.
 * @value_response_in_indication_token: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Response In Indication Token' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_record_input_set_response_in_indication_token (
    QmiMessageUimReadRecordInput *self,
    guint32 value_response_in_indication_token,
    GError **error);

/**
 * qmi_message_uim_read_record_input_get_last_record:
 * @self: a #QmiMessageUimReadRecordInput.
 * @value_last_record: a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Last Record' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_record_input_get_last_record (
    QmiMessageUimReadRecordInput *self,
    guint16 *value_last_record,
    GError **error);

/**
 * qmi_message_uim_read_record_input_set_last_record:
 * @self: a #QmiMessageUimReadRecordInput.
 * @value_last_record: a #guint16.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Last Record' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_record_input_set_last_record (
    QmiMessageUimReadRecordInput *self,
    guint16 value_last_record,
    GError **error);

/**
 * qmi_message_uim_read_record_input_get_record:
 * @self: a #QmiMessageUimReadRecordInput.
 * @value_record_record_number: a placeholder for the output #guint16, or %NULL if not required.
 * @value_record_record_length: a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Record' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_record_input_get_record (
    QmiMessageUimReadRecordInput *self,
    guint16 *value_record_record_number,
    guint16 *value_record_record_length,
    GError **error);

/**
 * qmi_message_uim_read_record_input_set_record:
 * @self: a #QmiMessageUimReadRecordInput.
 * @value_record_record_number: a #guint16.
 * @value_record_record_length: a #guint16.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Record' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_record_input_set_record (
    QmiMessageUimReadRecordInput *self,
    guint16 value_record_record_number,
    guint16 value_record_record_length,
    GError **error);

/**
 * qmi_message_uim_read_record_input_get_file:
 * @self: a #QmiMessageUimReadRecordInput.
 * @value_file_file_id: a placeholder for the output #guint16, or %NULL if not required.
 * @value_file_file_path: a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'File' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_record_input_get_file (
    QmiMessageUimReadRecordInput *self,
    guint16 *value_file_file_id,
    GArray **value_file_file_path,
    GError **error);

/**
 * qmi_message_uim_read_record_input_set_file:
 * @self: a #QmiMessageUimReadRecordInput.
 * @value_file_file_id: a #guint16.
 * @value_file_file_path: a #GArray of #guint8 elements. A new reference to @value_file_file_path will be taken.
 * @error: Return location for error or %NULL.
 *
 * Set the 'File' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_record_input_set_file (
    QmiMessageUimReadRecordInput *self,
    guint16 value_file_file_id,
    GArray *value_file_file_path,
    GError **error);

/**
 * qmi_message_uim_read_record_input_get_session_information:
 * @self: a #QmiMessageUimReadRecordInput.
 * @value_session_information_session_type: a placeholder for the output #QmiUimSessionType, or %NULL if not required.
 * @value_session_information_application_identifier: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Session Information' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_record_input_get_session_information (
    QmiMessageUimReadRecordInput *self,
    QmiUimSessionType *value_session_information_session_type,
    const gchar **value_session_information_application_identifier,
    GError **error);

/**
 * qmi_message_uim_read_record_input_set_session_information:
 * @self: a #QmiMessageUimReadRecordInput.
 * @value_session_information_session_type: a #QmiUimSessionType.
 * @value_session_information_application_identifier: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Session Information' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_record_input_set_session_information (
    QmiMessageUimReadRecordInput *self,
    QmiUimSessionType value_session_information_session_type,
    const gchar *value_session_information_application_identifier,
    GError **error);

/**
 * qmi_message_uim_read_record_input_ref:
 * @self: a #QmiMessageUimReadRecordInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiMessageUimReadRecordInput *qmi_message_uim_read_record_input_ref (QmiMessageUimReadRecordInput *self);

/**
 * qmi_message_uim_read_record_input_unref:
 * @self: a #QmiMessageUimReadRecordInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_message_uim_read_record_input_unref (QmiMessageUimReadRecordInput *self);

/**
 * qmi_message_uim_read_record_input_new:
 *
 * Allocates a new #QmiMessageUimReadRecordInput.
 *
 * Returns: the newly created #QmiMessageUimReadRecordInput. The returned value should be freed with qmi_message_uim_read_record_input_unref().
 *
 * Since: 1.6
 */
QmiMessageUimReadRecordInput *qmi_message_uim_read_record_input_new (void);

/* --- Output -- */

/**
 * QmiMessageUimReadRecordOutput:
 *
 * The #QmiMessageUimReadRecordOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiMessageUimReadRecordOutput QmiMessageUimReadRecordOutput;
GType qmi_message_uim_read_record_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_READ_RECORD_OUTPUT (qmi_message_uim_read_record_output_get_type ())

/**
 * qmi_message_uim_read_record_output_get_card_result:
 * @self: a #QmiMessageUimReadRecordOutput.
 * @value_card_result_sw1: a placeholder for the output #guint8, or %NULL if not required.
 * @value_card_result_sw2: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Card result' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_record_output_get_card_result (
    QmiMessageUimReadRecordOutput *self,
    guint8 *value_card_result_sw1,
    guint8 *value_card_result_sw2,
    GError **error);

/**
 * qmi_message_uim_read_record_output_get_result:
 * @self: a QmiMessageUimReadRecordOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_record_output_get_result (
    QmiMessageUimReadRecordOutput *self,
    GError **error);

/**
 * qmi_message_uim_read_record_output_get_read_result:
 * @self: a #QmiMessageUimReadRecordOutput.
 * @value_read_result: a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Read Result' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_record_output_get_read_result (
    QmiMessageUimReadRecordOutput *self,
    GArray **value_read_result,
    GError **error);

/**
 * qmi_message_uim_read_record_output_get_additional_read_result:
 * @self: a #QmiMessageUimReadRecordOutput.
 * @value_additional_read_result: a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Additional Read Result' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_record_output_get_additional_read_result (
    QmiMessageUimReadRecordOutput *self,
    GArray **value_additional_read_result,
    GError **error);

/**
 * qmi_message_uim_read_record_output_get_response_in_indication_token:
 * @self: a #QmiMessageUimReadRecordOutput.
 * @value_response_in_indication_token: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Response In Indication Token' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_record_output_get_response_in_indication_token (
    QmiMessageUimReadRecordOutput *self,
    guint32 *value_response_in_indication_token,
    GError **error);

/**
 * qmi_message_uim_read_record_output_ref:
 * @self: a #QmiMessageUimReadRecordOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiMessageUimReadRecordOutput *qmi_message_uim_read_record_output_ref (QmiMessageUimReadRecordOutput *self);

/**
 * qmi_message_uim_read_record_output_unref:
 * @self: a #QmiMessageUimReadRecordOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_message_uim_read_record_output_unref (QmiMessageUimReadRecordOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Get File Attributes */


/* --- Input -- */

/**
 * QmiMessageUimGetFileAttributesInput:
 *
 * The #QmiMessageUimGetFileAttributesInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiMessageUimGetFileAttributesInput QmiMessageUimGetFileAttributesInput;
GType qmi_message_uim_get_file_attributes_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_GET_FILE_ATTRIBUTES_INPUT (qmi_message_uim_get_file_attributes_input_get_type ())

/**
 * qmi_message_uim_get_file_attributes_input_get_response_in_indication_token:
 * @self: a #QmiMessageUimGetFileAttributesInput.
 * @value_response_in_indication_token: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Response In Indication Token' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_get_file_attributes_input_get_response_in_indication_token (
    QmiMessageUimGetFileAttributesInput *self,
    guint32 *value_response_in_indication_token,
    GError **error);

/**
 * qmi_message_uim_get_file_attributes_input_set_response_in_indication_token:
 * @self: a #QmiMessageUimGetFileAttributesInput.
 * @value_response_in_indication_token: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Response In Indication Token' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_get_file_attributes_input_set_response_in_indication_token (
    QmiMessageUimGetFileAttributesInput *self,
    guint32 value_response_in_indication_token,
    GError **error);

/**
 * qmi_message_uim_get_file_attributes_input_get_file:
 * @self: a #QmiMessageUimGetFileAttributesInput.
 * @value_file_file_id: a placeholder for the output #guint16, or %NULL if not required.
 * @value_file_file_path: a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'File' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_get_file_attributes_input_get_file (
    QmiMessageUimGetFileAttributesInput *self,
    guint16 *value_file_file_id,
    GArray **value_file_file_path,
    GError **error);

/**
 * qmi_message_uim_get_file_attributes_input_set_file:
 * @self: a #QmiMessageUimGetFileAttributesInput.
 * @value_file_file_id: a #guint16.
 * @value_file_file_path: a #GArray of #guint8 elements. A new reference to @value_file_file_path will be taken.
 * @error: Return location for error or %NULL.
 *
 * Set the 'File' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_get_file_attributes_input_set_file (
    QmiMessageUimGetFileAttributesInput *self,
    guint16 value_file_file_id,
    GArray *value_file_file_path,
    GError **error);

/**
 * qmi_message_uim_get_file_attributes_input_get_session_information:
 * @self: a #QmiMessageUimGetFileAttributesInput.
 * @value_session_information_session_type: a placeholder for the output #QmiUimSessionType, or %NULL if not required.
 * @value_session_information_application_identifier: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Session Information' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_get_file_attributes_input_get_session_information (
    QmiMessageUimGetFileAttributesInput *self,
    QmiUimSessionType *value_session_information_session_type,
    const gchar **value_session_information_application_identifier,
    GError **error);

/**
 * qmi_message_uim_get_file_attributes_input_set_session_information:
 * @self: a #QmiMessageUimGetFileAttributesInput.
 * @value_session_information_session_type: a #QmiUimSessionType.
 * @value_session_information_application_identifier: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Session Information' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_get_file_attributes_input_set_session_information (
    QmiMessageUimGetFileAttributesInput *self,
    QmiUimSessionType value_session_information_session_type,
    const gchar *value_session_information_application_identifier,
    GError **error);

/**
 * qmi_message_uim_get_file_attributes_input_ref:
 * @self: a #QmiMessageUimGetFileAttributesInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiMessageUimGetFileAttributesInput *qmi_message_uim_get_file_attributes_input_ref (QmiMessageUimGetFileAttributesInput *self);

/**
 * qmi_message_uim_get_file_attributes_input_unref:
 * @self: a #QmiMessageUimGetFileAttributesInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_message_uim_get_file_attributes_input_unref (QmiMessageUimGetFileAttributesInput *self);

/**
 * qmi_message_uim_get_file_attributes_input_new:
 *
 * Allocates a new #QmiMessageUimGetFileAttributesInput.
 *
 * Returns: the newly created #QmiMessageUimGetFileAttributesInput. The returned value should be freed with qmi_message_uim_get_file_attributes_input_unref().
 *
 * Since: 1.6
 */
QmiMessageUimGetFileAttributesInput *qmi_message_uim_get_file_attributes_input_new (void);

/* --- Output -- */

/**
 * QmiMessageUimGetFileAttributesOutput:
 *
 * The #QmiMessageUimGetFileAttributesOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiMessageUimGetFileAttributesOutput QmiMessageUimGetFileAttributesOutput;
GType qmi_message_uim_get_file_attributes_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_GET_FILE_ATTRIBUTES_OUTPUT (qmi_message_uim_get_file_attributes_output_get_type ())

/**
 * qmi_message_uim_get_file_attributes_output_get_card_result:
 * @self: a #QmiMessageUimGetFileAttributesOutput.
 * @value_card_result_sw1: a placeholder for the output #guint8, or %NULL if not required.
 * @value_card_result_sw2: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Card result' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_get_file_attributes_output_get_card_result (
    QmiMessageUimGetFileAttributesOutput *self,
    guint8 *value_card_result_sw1,
    guint8 *value_card_result_sw2,
    GError **error);

/**
 * qmi_message_uim_get_file_attributes_output_get_result:
 * @self: a QmiMessageUimGetFileAttributesOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_get_file_attributes_output_get_result (
    QmiMessageUimGetFileAttributesOutput *self,
    GError **error);

/**
 * qmi_message_uim_get_file_attributes_output_get_file_attributes:
 * @self: a #QmiMessageUimGetFileAttributesOutput.
 * @value_file_attributes_file_size: a placeholder for the output #guint16, or %NULL if not required.
 * @value_file_attributes_file_id: a placeholder for the output #guint16, or %NULL if not required.
 * @value_file_attributes_file_type: a placeholder for the output #QmiUimFileType, or %NULL if not required.
 * @value_file_attributes_record_size: a placeholder for the output #guint16, or %NULL if not required.
 * @value_file_attributes_record_count: a placeholder for the output #guint16, or %NULL if not required.
 * @value_file_attributes_read_security_attributes_logic: a placeholder for the output #QmiUimSecurityAttributeLogic, or %NULL if not required.
 * @value_file_attributes_read_security_attributes: a placeholder for the output #QmiUimSecurityAttribute, or %NULL if not required.
 * @value_file_attributes_write_security_attributes_logic: a placeholder for the output #QmiUimSecurityAttributeLogic, or %NULL if not required.
 * @value_file_attributes_write_security_attributes: a placeholder for the output #QmiUimSecurityAttribute, or %NULL if not required.
 * @value_file_attributes_increase_security_attributes_logic: a placeholder for the output #QmiUimSecurityAttributeLogic, or %NULL if not required.
 * @value_file_attributes_increase_security_attributes: a placeholder for the output #QmiUimSecurityAttribute, or %NULL if not required.
 * @value_file_attributes_deactivate_security_attributes_logic: a placeholder for the output #QmiUimSecurityAttributeLogic, or %NULL if not required.
 * @value_file_attributes_deactivate_security_attributes: a placeholder for the output #QmiUimSecurityAttribute, or %NULL if not required.
 * @value_file_attributes_activate_security_attributes_logic: a placeholder for the output #QmiUimSecurityAttributeLogic, or %NULL if not required.
 * @value_file_attributes_activate_security_attributes: a placeholder for the output #QmiUimSecurityAttribute, or %NULL if not required.
 * @value_file_attributes_raw_data: a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'File Attributes' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_get_file_attributes_output_get_file_attributes (
    QmiMessageUimGetFileAttributesOutput *self,
    guint16 *value_file_attributes_file_size,
    guint16 *value_file_attributes_file_id,
    QmiUimFileType *value_file_attributes_file_type,
    guint16 *value_file_attributes_record_size,
    guint16 *value_file_attributes_record_count,
    QmiUimSecurityAttributeLogic *value_file_attributes_read_security_attributes_logic,
    QmiUimSecurityAttribute *value_file_attributes_read_security_attributes,
    QmiUimSecurityAttributeLogic *value_file_attributes_write_security_attributes_logic,
    QmiUimSecurityAttribute *value_file_attributes_write_security_attributes,
    QmiUimSecurityAttributeLogic *value_file_attributes_increase_security_attributes_logic,
    QmiUimSecurityAttribute *value_file_attributes_increase_security_attributes,
    QmiUimSecurityAttributeLogic *value_file_attributes_deactivate_security_attributes_logic,
    QmiUimSecurityAttribute *value_file_attributes_deactivate_security_attributes,
    QmiUimSecurityAttributeLogic *value_file_attributes_activate_security_attributes_logic,
    QmiUimSecurityAttribute *value_file_attributes_activate_security_attributes,
    GArray **value_file_attributes_raw_data,
    GError **error);

/**
 * qmi_message_uim_get_file_attributes_output_get_response_in_indication_token:
 * @self: a #QmiMessageUimGetFileAttributesOutput.
 * @value_response_in_indication_token: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Response In Indication Token' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_get_file_attributes_output_get_response_in_indication_token (
    QmiMessageUimGetFileAttributesOutput *self,
    guint32 *value_response_in_indication_token,
    GError **error);

/**
 * qmi_message_uim_get_file_attributes_output_ref:
 * @self: a #QmiMessageUimGetFileAttributesOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiMessageUimGetFileAttributesOutput *qmi_message_uim_get_file_attributes_output_ref (QmiMessageUimGetFileAttributesOutput *self);

/**
 * qmi_message_uim_get_file_attributes_output_unref:
 * @self: a #QmiMessageUimGetFileAttributesOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_message_uim_get_file_attributes_output_unref (QmiMessageUimGetFileAttributesOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Set PIN Protection */


/* --- Input -- */

/**
 * QmiMessageUimSetPinProtectionInput:
 *
 * The #QmiMessageUimSetPinProtectionInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageUimSetPinProtectionInput QmiMessageUimSetPinProtectionInput;
GType qmi_message_uim_set_pin_protection_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_SET_PIN_PROTECTION_INPUT (qmi_message_uim_set_pin_protection_input_get_type ())

/**
 * qmi_message_uim_set_pin_protection_input_get_response_in_indication_token:
 * @self: a #QmiMessageUimSetPinProtectionInput.
 * @value_response_in_indication_token: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Response In Indication Token' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_set_pin_protection_input_get_response_in_indication_token (
    QmiMessageUimSetPinProtectionInput *self,
    guint32 *value_response_in_indication_token,
    GError **error);

/**
 * qmi_message_uim_set_pin_protection_input_set_response_in_indication_token:
 * @self: a #QmiMessageUimSetPinProtectionInput.
 * @value_response_in_indication_token: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Response In Indication Token' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_set_pin_protection_input_set_response_in_indication_token (
    QmiMessageUimSetPinProtectionInput *self,
    guint32 value_response_in_indication_token,
    GError **error);

/**
 * qmi_message_uim_set_pin_protection_input_get_info:
 * @self: a #QmiMessageUimSetPinProtectionInput.
 * @value_info_pin_id: a placeholder for the output #QmiUimPinId, or %NULL if not required.
 * @value_info_pin_enabled: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_info_pin_value: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_set_pin_protection_input_get_info (
    QmiMessageUimSetPinProtectionInput *self,
    QmiUimPinId *value_info_pin_id,
    gboolean *value_info_pin_enabled,
    const gchar **value_info_pin_value,
    GError **error);

/**
 * qmi_message_uim_set_pin_protection_input_set_info:
 * @self: a #QmiMessageUimSetPinProtectionInput.
 * @value_info_pin_id: a #QmiUimPinId.
 * @value_info_pin_enabled: a #gboolean.
 * @value_info_pin_value: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Info' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_set_pin_protection_input_set_info (
    QmiMessageUimSetPinProtectionInput *self,
    QmiUimPinId value_info_pin_id,
    gboolean value_info_pin_enabled,
    const gchar *value_info_pin_value,
    GError **error);

/**
 * qmi_message_uim_set_pin_protection_input_get_session_information:
 * @self: a #QmiMessageUimSetPinProtectionInput.
 * @value_session_information_session_type: a placeholder for the output #QmiUimSessionType, or %NULL if not required.
 * @value_session_information_application_identifier: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Session Information' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_set_pin_protection_input_get_session_information (
    QmiMessageUimSetPinProtectionInput *self,
    QmiUimSessionType *value_session_information_session_type,
    const gchar **value_session_information_application_identifier,
    GError **error);

/**
 * qmi_message_uim_set_pin_protection_input_set_session_information:
 * @self: a #QmiMessageUimSetPinProtectionInput.
 * @value_session_information_session_type: a #QmiUimSessionType.
 * @value_session_information_application_identifier: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Session Information' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_set_pin_protection_input_set_session_information (
    QmiMessageUimSetPinProtectionInput *self,
    QmiUimSessionType value_session_information_session_type,
    const gchar *value_session_information_application_identifier,
    GError **error);

/**
 * qmi_message_uim_set_pin_protection_input_ref:
 * @self: a #QmiMessageUimSetPinProtectionInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageUimSetPinProtectionInput *qmi_message_uim_set_pin_protection_input_ref (QmiMessageUimSetPinProtectionInput *self);

/**
 * qmi_message_uim_set_pin_protection_input_unref:
 * @self: a #QmiMessageUimSetPinProtectionInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_uim_set_pin_protection_input_unref (QmiMessageUimSetPinProtectionInput *self);

/**
 * qmi_message_uim_set_pin_protection_input_new:
 *
 * Allocates a new #QmiMessageUimSetPinProtectionInput.
 *
 * Returns: the newly created #QmiMessageUimSetPinProtectionInput. The returned value should be freed with qmi_message_uim_set_pin_protection_input_unref().
 *
 * Since: 1.14
 */
QmiMessageUimSetPinProtectionInput *qmi_message_uim_set_pin_protection_input_new (void);

/* --- Output -- */

/**
 * QmiMessageUimSetPinProtectionOutput:
 *
 * The #QmiMessageUimSetPinProtectionOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageUimSetPinProtectionOutput QmiMessageUimSetPinProtectionOutput;
GType qmi_message_uim_set_pin_protection_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_SET_PIN_PROTECTION_OUTPUT (qmi_message_uim_set_pin_protection_output_get_type ())

/**
 * qmi_message_uim_set_pin_protection_output_get_result:
 * @self: a QmiMessageUimSetPinProtectionOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_set_pin_protection_output_get_result (
    QmiMessageUimSetPinProtectionOutput *self,
    GError **error);

/**
 * qmi_message_uim_set_pin_protection_output_get_retries_remaining:
 * @self: a #QmiMessageUimSetPinProtectionOutput.
 * @value_retries_remaining_verify_retries_left: a placeholder for the output #guint8, or %NULL if not required.
 * @value_retries_remaining_unblock_retries_left: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Retries Remaining' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_set_pin_protection_output_get_retries_remaining (
    QmiMessageUimSetPinProtectionOutput *self,
    guint8 *value_retries_remaining_verify_retries_left,
    guint8 *value_retries_remaining_unblock_retries_left,
    GError **error);

/**
 * qmi_message_uim_set_pin_protection_output_get_response_in_indication_token:
 * @self: a #QmiMessageUimSetPinProtectionOutput.
 * @value_response_in_indication_token: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Response In Indication Token' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_set_pin_protection_output_get_response_in_indication_token (
    QmiMessageUimSetPinProtectionOutput *self,
    guint32 *value_response_in_indication_token,
    GError **error);

/**
 * qmi_message_uim_set_pin_protection_output_ref:
 * @self: a #QmiMessageUimSetPinProtectionOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageUimSetPinProtectionOutput *qmi_message_uim_set_pin_protection_output_ref (QmiMessageUimSetPinProtectionOutput *self);

/**
 * qmi_message_uim_set_pin_protection_output_unref:
 * @self: a #QmiMessageUimSetPinProtectionOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_uim_set_pin_protection_output_unref (QmiMessageUimSetPinProtectionOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Verify PIN */


/* --- Input -- */

/**
 * QmiMessageUimVerifyPinInput:
 *
 * The #QmiMessageUimVerifyPinInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageUimVerifyPinInput QmiMessageUimVerifyPinInput;
GType qmi_message_uim_verify_pin_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_VERIFY_PIN_INPUT (qmi_message_uim_verify_pin_input_get_type ())

/**
 * qmi_message_uim_verify_pin_input_get_response_in_indication_token:
 * @self: a #QmiMessageUimVerifyPinInput.
 * @value_response_in_indication_token: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Response In Indication Token' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_verify_pin_input_get_response_in_indication_token (
    QmiMessageUimVerifyPinInput *self,
    guint32 *value_response_in_indication_token,
    GError **error);

/**
 * qmi_message_uim_verify_pin_input_set_response_in_indication_token:
 * @self: a #QmiMessageUimVerifyPinInput.
 * @value_response_in_indication_token: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Response In Indication Token' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_verify_pin_input_set_response_in_indication_token (
    QmiMessageUimVerifyPinInput *self,
    guint32 value_response_in_indication_token,
    GError **error);

/**
 * qmi_message_uim_verify_pin_input_get_info:
 * @self: a #QmiMessageUimVerifyPinInput.
 * @value_info_pin_id: a placeholder for the output #QmiUimPinId, or %NULL if not required.
 * @value_info_pin_value: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_verify_pin_input_get_info (
    QmiMessageUimVerifyPinInput *self,
    QmiUimPinId *value_info_pin_id,
    const gchar **value_info_pin_value,
    GError **error);

/**
 * qmi_message_uim_verify_pin_input_set_info:
 * @self: a #QmiMessageUimVerifyPinInput.
 * @value_info_pin_id: a #QmiUimPinId.
 * @value_info_pin_value: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Info' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_verify_pin_input_set_info (
    QmiMessageUimVerifyPinInput *self,
    QmiUimPinId value_info_pin_id,
    const gchar *value_info_pin_value,
    GError **error);

/**
 * qmi_message_uim_verify_pin_input_get_session_information:
 * @self: a #QmiMessageUimVerifyPinInput.
 * @value_session_information_session_type: a placeholder for the output #QmiUimSessionType, or %NULL if not required.
 * @value_session_information_application_identifier: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Session Information' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_verify_pin_input_get_session_information (
    QmiMessageUimVerifyPinInput *self,
    QmiUimSessionType *value_session_information_session_type,
    const gchar **value_session_information_application_identifier,
    GError **error);

/**
 * qmi_message_uim_verify_pin_input_set_session_information:
 * @self: a #QmiMessageUimVerifyPinInput.
 * @value_session_information_session_type: a #QmiUimSessionType.
 * @value_session_information_application_identifier: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Session Information' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_verify_pin_input_set_session_information (
    QmiMessageUimVerifyPinInput *self,
    QmiUimSessionType value_session_information_session_type,
    const gchar *value_session_information_application_identifier,
    GError **error);

/**
 * qmi_message_uim_verify_pin_input_ref:
 * @self: a #QmiMessageUimVerifyPinInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageUimVerifyPinInput *qmi_message_uim_verify_pin_input_ref (QmiMessageUimVerifyPinInput *self);

/**
 * qmi_message_uim_verify_pin_input_unref:
 * @self: a #QmiMessageUimVerifyPinInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_uim_verify_pin_input_unref (QmiMessageUimVerifyPinInput *self);

/**
 * qmi_message_uim_verify_pin_input_new:
 *
 * Allocates a new #QmiMessageUimVerifyPinInput.
 *
 * Returns: the newly created #QmiMessageUimVerifyPinInput. The returned value should be freed with qmi_message_uim_verify_pin_input_unref().
 *
 * Since: 1.14
 */
QmiMessageUimVerifyPinInput *qmi_message_uim_verify_pin_input_new (void);

/* --- Output -- */

/**
 * QmiMessageUimVerifyPinOutput:
 *
 * The #QmiMessageUimVerifyPinOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageUimVerifyPinOutput QmiMessageUimVerifyPinOutput;
GType qmi_message_uim_verify_pin_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_VERIFY_PIN_OUTPUT (qmi_message_uim_verify_pin_output_get_type ())

/**
 * qmi_message_uim_verify_pin_output_get_card_result:
 * @self: a #QmiMessageUimVerifyPinOutput.
 * @value_card_result_sw1: a placeholder for the output #guint8, or %NULL if not required.
 * @value_card_result_sw2: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Card Result' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_verify_pin_output_get_card_result (
    QmiMessageUimVerifyPinOutput *self,
    guint8 *value_card_result_sw1,
    guint8 *value_card_result_sw2,
    GError **error);

/**
 * qmi_message_uim_verify_pin_output_get_result:
 * @self: a QmiMessageUimVerifyPinOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_verify_pin_output_get_result (
    QmiMessageUimVerifyPinOutput *self,
    GError **error);

/**
 * qmi_message_uim_verify_pin_output_get_retries_remaining:
 * @self: a #QmiMessageUimVerifyPinOutput.
 * @value_retries_remaining_verify_retries_left: a placeholder for the output #guint8, or %NULL if not required.
 * @value_retries_remaining_unblock_retries_left: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Retries Remaining' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_verify_pin_output_get_retries_remaining (
    QmiMessageUimVerifyPinOutput *self,
    guint8 *value_retries_remaining_verify_retries_left,
    guint8 *value_retries_remaining_unblock_retries_left,
    GError **error);

/**
 * qmi_message_uim_verify_pin_output_get_response_in_indication_token:
 * @self: a #QmiMessageUimVerifyPinOutput.
 * @value_response_in_indication_token: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Response In Indication Token' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_verify_pin_output_get_response_in_indication_token (
    QmiMessageUimVerifyPinOutput *self,
    guint32 *value_response_in_indication_token,
    GError **error);

/**
 * qmi_message_uim_verify_pin_output_ref:
 * @self: a #QmiMessageUimVerifyPinOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageUimVerifyPinOutput *qmi_message_uim_verify_pin_output_ref (QmiMessageUimVerifyPinOutput *self);

/**
 * qmi_message_uim_verify_pin_output_unref:
 * @self: a #QmiMessageUimVerifyPinOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_uim_verify_pin_output_unref (QmiMessageUimVerifyPinOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Unblock PIN */


/* --- Input -- */

/**
 * QmiMessageUimUnblockPinInput:
 *
 * The #QmiMessageUimUnblockPinInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageUimUnblockPinInput QmiMessageUimUnblockPinInput;
GType qmi_message_uim_unblock_pin_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_UNBLOCK_PIN_INPUT (qmi_message_uim_unblock_pin_input_get_type ())

/**
 * qmi_message_uim_unblock_pin_input_get_response_in_indication_token:
 * @self: a #QmiMessageUimUnblockPinInput.
 * @value_response_in_indication_token: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Response In Indication Token' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_unblock_pin_input_get_response_in_indication_token (
    QmiMessageUimUnblockPinInput *self,
    guint32 *value_response_in_indication_token,
    GError **error);

/**
 * qmi_message_uim_unblock_pin_input_set_response_in_indication_token:
 * @self: a #QmiMessageUimUnblockPinInput.
 * @value_response_in_indication_token: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Response In Indication Token' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_unblock_pin_input_set_response_in_indication_token (
    QmiMessageUimUnblockPinInput *self,
    guint32 value_response_in_indication_token,
    GError **error);

/**
 * qmi_message_uim_unblock_pin_input_get_info:
 * @self: a #QmiMessageUimUnblockPinInput.
 * @value_info_pin_id: a placeholder for the output #QmiUimPinId, or %NULL if not required.
 * @value_info_puk: a placeholder for the output constant string, or %NULL if not required.
 * @value_info_new_pin: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_unblock_pin_input_get_info (
    QmiMessageUimUnblockPinInput *self,
    QmiUimPinId *value_info_pin_id,
    const gchar **value_info_puk,
    const gchar **value_info_new_pin,
    GError **error);

/**
 * qmi_message_uim_unblock_pin_input_set_info:
 * @self: a #QmiMessageUimUnblockPinInput.
 * @value_info_pin_id: a #QmiUimPinId.
 * @value_info_puk: a constant string.
 * @value_info_new_pin: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Info' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_unblock_pin_input_set_info (
    QmiMessageUimUnblockPinInput *self,
    QmiUimPinId value_info_pin_id,
    const gchar *value_info_puk,
    const gchar *value_info_new_pin,
    GError **error);

/**
 * qmi_message_uim_unblock_pin_input_get_session_information:
 * @self: a #QmiMessageUimUnblockPinInput.
 * @value_session_information_session_type: a placeholder for the output #QmiUimSessionType, or %NULL if not required.
 * @value_session_information_application_identifier: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Session Information' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_unblock_pin_input_get_session_information (
    QmiMessageUimUnblockPinInput *self,
    QmiUimSessionType *value_session_information_session_type,
    const gchar **value_session_information_application_identifier,
    GError **error);

/**
 * qmi_message_uim_unblock_pin_input_set_session_information:
 * @self: a #QmiMessageUimUnblockPinInput.
 * @value_session_information_session_type: a #QmiUimSessionType.
 * @value_session_information_application_identifier: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Session Information' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_unblock_pin_input_set_session_information (
    QmiMessageUimUnblockPinInput *self,
    QmiUimSessionType value_session_information_session_type,
    const gchar *value_session_information_application_identifier,
    GError **error);

/**
 * qmi_message_uim_unblock_pin_input_ref:
 * @self: a #QmiMessageUimUnblockPinInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageUimUnblockPinInput *qmi_message_uim_unblock_pin_input_ref (QmiMessageUimUnblockPinInput *self);

/**
 * qmi_message_uim_unblock_pin_input_unref:
 * @self: a #QmiMessageUimUnblockPinInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_uim_unblock_pin_input_unref (QmiMessageUimUnblockPinInput *self);

/**
 * qmi_message_uim_unblock_pin_input_new:
 *
 * Allocates a new #QmiMessageUimUnblockPinInput.
 *
 * Returns: the newly created #QmiMessageUimUnblockPinInput. The returned value should be freed with qmi_message_uim_unblock_pin_input_unref().
 *
 * Since: 1.14
 */
QmiMessageUimUnblockPinInput *qmi_message_uim_unblock_pin_input_new (void);

/* --- Output -- */

/**
 * QmiMessageUimUnblockPinOutput:
 *
 * The #QmiMessageUimUnblockPinOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageUimUnblockPinOutput QmiMessageUimUnblockPinOutput;
GType qmi_message_uim_unblock_pin_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_UNBLOCK_PIN_OUTPUT (qmi_message_uim_unblock_pin_output_get_type ())

/**
 * qmi_message_uim_unblock_pin_output_get_card_result:
 * @self: a #QmiMessageUimUnblockPinOutput.
 * @value_card_result_sw1: a placeholder for the output #guint8, or %NULL if not required.
 * @value_card_result_sw2: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Card Result' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_unblock_pin_output_get_card_result (
    QmiMessageUimUnblockPinOutput *self,
    guint8 *value_card_result_sw1,
    guint8 *value_card_result_sw2,
    GError **error);

/**
 * qmi_message_uim_unblock_pin_output_get_result:
 * @self: a QmiMessageUimUnblockPinOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_unblock_pin_output_get_result (
    QmiMessageUimUnblockPinOutput *self,
    GError **error);

/**
 * qmi_message_uim_unblock_pin_output_get_retries_remaining:
 * @self: a #QmiMessageUimUnblockPinOutput.
 * @value_retries_remaining_verify_retries_left: a placeholder for the output #guint8, or %NULL if not required.
 * @value_retries_remaining_unblock_retries_left: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Retries Remaining' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_unblock_pin_output_get_retries_remaining (
    QmiMessageUimUnblockPinOutput *self,
    guint8 *value_retries_remaining_verify_retries_left,
    guint8 *value_retries_remaining_unblock_retries_left,
    GError **error);

/**
 * qmi_message_uim_unblock_pin_output_get_response_in_indication_token:
 * @self: a #QmiMessageUimUnblockPinOutput.
 * @value_response_in_indication_token: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Response In Indication Token' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_unblock_pin_output_get_response_in_indication_token (
    QmiMessageUimUnblockPinOutput *self,
    guint32 *value_response_in_indication_token,
    GError **error);

/**
 * qmi_message_uim_unblock_pin_output_ref:
 * @self: a #QmiMessageUimUnblockPinOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageUimUnblockPinOutput *qmi_message_uim_unblock_pin_output_ref (QmiMessageUimUnblockPinOutput *self);

/**
 * qmi_message_uim_unblock_pin_output_unref:
 * @self: a #QmiMessageUimUnblockPinOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_uim_unblock_pin_output_unref (QmiMessageUimUnblockPinOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Change PIN */


/* --- Input -- */

/**
 * QmiMessageUimChangePinInput:
 *
 * The #QmiMessageUimChangePinInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageUimChangePinInput QmiMessageUimChangePinInput;
GType qmi_message_uim_change_pin_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_CHANGE_PIN_INPUT (qmi_message_uim_change_pin_input_get_type ())

/**
 * qmi_message_uim_change_pin_input_get_response_in_indication_token:
 * @self: a #QmiMessageUimChangePinInput.
 * @value_response_in_indication_token: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Response In Indication Token' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_change_pin_input_get_response_in_indication_token (
    QmiMessageUimChangePinInput *self,
    guint32 *value_response_in_indication_token,
    GError **error);

/**
 * qmi_message_uim_change_pin_input_set_response_in_indication_token:
 * @self: a #QmiMessageUimChangePinInput.
 * @value_response_in_indication_token: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Response In Indication Token' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_change_pin_input_set_response_in_indication_token (
    QmiMessageUimChangePinInput *self,
    guint32 value_response_in_indication_token,
    GError **error);

/**
 * qmi_message_uim_change_pin_input_get_info:
 * @self: a #QmiMessageUimChangePinInput.
 * @value_info_pin_id: a placeholder for the output #QmiUimPinId, or %NULL if not required.
 * @value_info_old_pin: a placeholder for the output constant string, or %NULL if not required.
 * @value_info_new_pin: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_change_pin_input_get_info (
    QmiMessageUimChangePinInput *self,
    QmiUimPinId *value_info_pin_id,
    const gchar **value_info_old_pin,
    const gchar **value_info_new_pin,
    GError **error);

/**
 * qmi_message_uim_change_pin_input_set_info:
 * @self: a #QmiMessageUimChangePinInput.
 * @value_info_pin_id: a #QmiUimPinId.
 * @value_info_old_pin: a constant string.
 * @value_info_new_pin: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Info' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_change_pin_input_set_info (
    QmiMessageUimChangePinInput *self,
    QmiUimPinId value_info_pin_id,
    const gchar *value_info_old_pin,
    const gchar *value_info_new_pin,
    GError **error);

/**
 * qmi_message_uim_change_pin_input_get_session_information:
 * @self: a #QmiMessageUimChangePinInput.
 * @value_session_information_session_type: a placeholder for the output #QmiUimSessionType, or %NULL if not required.
 * @value_session_information_application_identifier: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Session Information' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_change_pin_input_get_session_information (
    QmiMessageUimChangePinInput *self,
    QmiUimSessionType *value_session_information_session_type,
    const gchar **value_session_information_application_identifier,
    GError **error);

/**
 * qmi_message_uim_change_pin_input_set_session_information:
 * @self: a #QmiMessageUimChangePinInput.
 * @value_session_information_session_type: a #QmiUimSessionType.
 * @value_session_information_application_identifier: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Session Information' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_change_pin_input_set_session_information (
    QmiMessageUimChangePinInput *self,
    QmiUimSessionType value_session_information_session_type,
    const gchar *value_session_information_application_identifier,
    GError **error);

/**
 * qmi_message_uim_change_pin_input_ref:
 * @self: a #QmiMessageUimChangePinInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageUimChangePinInput *qmi_message_uim_change_pin_input_ref (QmiMessageUimChangePinInput *self);

/**
 * qmi_message_uim_change_pin_input_unref:
 * @self: a #QmiMessageUimChangePinInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_uim_change_pin_input_unref (QmiMessageUimChangePinInput *self);

/**
 * qmi_message_uim_change_pin_input_new:
 *
 * Allocates a new #QmiMessageUimChangePinInput.
 *
 * Returns: the newly created #QmiMessageUimChangePinInput. The returned value should be freed with qmi_message_uim_change_pin_input_unref().
 *
 * Since: 1.14
 */
QmiMessageUimChangePinInput *qmi_message_uim_change_pin_input_new (void);

/* --- Output -- */

/**
 * QmiMessageUimChangePinOutput:
 *
 * The #QmiMessageUimChangePinOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageUimChangePinOutput QmiMessageUimChangePinOutput;
GType qmi_message_uim_change_pin_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_CHANGE_PIN_OUTPUT (qmi_message_uim_change_pin_output_get_type ())

/**
 * qmi_message_uim_change_pin_output_get_card_result:
 * @self: a #QmiMessageUimChangePinOutput.
 * @value_card_result_sw1: a placeholder for the output #guint8, or %NULL if not required.
 * @value_card_result_sw2: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Card Result' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_change_pin_output_get_card_result (
    QmiMessageUimChangePinOutput *self,
    guint8 *value_card_result_sw1,
    guint8 *value_card_result_sw2,
    GError **error);

/**
 * qmi_message_uim_change_pin_output_get_result:
 * @self: a QmiMessageUimChangePinOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_change_pin_output_get_result (
    QmiMessageUimChangePinOutput *self,
    GError **error);

/**
 * qmi_message_uim_change_pin_output_get_retries_remaining:
 * @self: a #QmiMessageUimChangePinOutput.
 * @value_retries_remaining_verify_retries_left: a placeholder for the output #guint8, or %NULL if not required.
 * @value_retries_remaining_unblock_retries_left: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Retries Remaining' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_change_pin_output_get_retries_remaining (
    QmiMessageUimChangePinOutput *self,
    guint8 *value_retries_remaining_verify_retries_left,
    guint8 *value_retries_remaining_unblock_retries_left,
    GError **error);

/**
 * qmi_message_uim_change_pin_output_get_response_in_indication_token:
 * @self: a #QmiMessageUimChangePinOutput.
 * @value_response_in_indication_token: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Response In Indication Token' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_change_pin_output_get_response_in_indication_token (
    QmiMessageUimChangePinOutput *self,
    guint32 *value_response_in_indication_token,
    GError **error);

/**
 * qmi_message_uim_change_pin_output_ref:
 * @self: a #QmiMessageUimChangePinOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageUimChangePinOutput *qmi_message_uim_change_pin_output_ref (QmiMessageUimChangePinOutput *self);

/**
 * qmi_message_uim_change_pin_output_unref:
 * @self: a #QmiMessageUimChangePinOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_uim_change_pin_output_unref (QmiMessageUimChangePinOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Get Card Status */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageUimGetCardStatusOutputCardStatusCardsElementApplicationsElement:
 * @type: a #QmiUimCardApplicationType.
 * @state: a #QmiUimCardApplicationState.
 * @personalization_state: a #QmiUimCardApplicationPersonalizationState.
 * @personalization_feature: a #QmiUimCardApplicationPersonalizationFeature.
 * @personalization_retries: a #guint8.
 * @personalization_unblock_retries: a #guint8.
 * @application_identifier_value: a #GArray of #guint8 elements.
 * @upin_replaces_pin1: a #gboolean.
 * @pin1_state: a #QmiUimPinState.
 * @pin1_retries: a #guint8.
 * @puk1_retries: a #guint8.
 * @pin2_state: a #QmiUimPinState.
 * @pin2_retries: a #guint8.
 * @puk2_retries: a #guint8.
 *
 * A QmiMessageUimGetCardStatusOutputCardStatusCardsElementApplicationsElement struct.
 *
 * Since: 1.10
 */
typedef struct _QmiMessageUimGetCardStatusOutputCardStatusCardsElementApplicationsElement {
    QmiUimCardApplicationType type;
    QmiUimCardApplicationState state;
    QmiUimCardApplicationPersonalizationState personalization_state;
    QmiUimCardApplicationPersonalizationFeature personalization_feature;
    guint8 personalization_retries;
    guint8 personalization_unblock_retries;
    GArray *application_identifier_value;
    gboolean upin_replaces_pin1;
    QmiUimPinState pin1_state;
    guint8 pin1_retries;
    guint8 puk1_retries;
    QmiUimPinState pin2_state;
    guint8 pin2_retries;
    guint8 puk2_retries;
} QmiMessageUimGetCardStatusOutputCardStatusCardsElementApplicationsElement;

/**
 * QmiMessageUimGetCardStatusOutputCardStatusCardsElement:
 * @card_state: a #QmiUimCardState.
 * @upin_state: a #QmiUimPinState.
 * @upin_retries: a #guint8.
 * @upuk_retries: a #guint8.
 * @error_code: a #QmiUimCardError.
 * @applications: a #GArray of #QmiMessageUimGetCardStatusOutputCardStatusCardsElementApplicationsElement elements.
 *
 * A QmiMessageUimGetCardStatusOutputCardStatusCardsElement struct.
 *
 * Since: 1.10
 */
typedef struct _QmiMessageUimGetCardStatusOutputCardStatusCardsElement {
    QmiUimCardState card_state;
    QmiUimPinState upin_state;
    guint8 upin_retries;
    guint8 upuk_retries;
    QmiUimCardError error_code;
    GArray *applications;
} QmiMessageUimGetCardStatusOutputCardStatusCardsElement;

/**
 * QmiMessageUimGetCardStatusOutput:
 *
 * The #QmiMessageUimGetCardStatusOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.10
 */
typedef struct _QmiMessageUimGetCardStatusOutput QmiMessageUimGetCardStatusOutput;
GType qmi_message_uim_get_card_status_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_GET_CARD_STATUS_OUTPUT (qmi_message_uim_get_card_status_output_get_type ())

/**
 * qmi_message_uim_get_card_status_output_get_card_status:
 * @self: a #QmiMessageUimGetCardStatusOutput.
 * @value_card_status_index_gw_primary: a placeholder for the output #guint16, or %NULL if not required.
 * @value_card_status_index_1x_primary: a placeholder for the output #guint16, or %NULL if not required.
 * @value_card_status_index_gw_secondary_: a placeholder for the output #guint16, or %NULL if not required.
 * @value_card_status_index_1x_secondary: a placeholder for the output #guint16, or %NULL if not required.
 * @value_card_status_cards: a placeholder for the output #GArray of #QmiMessageUimGetCardStatusOutputCardStatusCardsElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Card Status' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_uim_get_card_status_output_get_card_status (
    QmiMessageUimGetCardStatusOutput *self,
    guint16 *value_card_status_index_gw_primary,
    guint16 *value_card_status_index_1x_primary,
    guint16 *value_card_status_index_gw_secondary_,
    guint16 *value_card_status_index_1x_secondary,
    GArray **value_card_status_cards,
    GError **error);

/**
 * qmi_message_uim_get_card_status_output_get_result:
 * @self: a QmiMessageUimGetCardStatusOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.10
 */
gboolean qmi_message_uim_get_card_status_output_get_result (
    QmiMessageUimGetCardStatusOutput *self,
    GError **error);

/**
 * qmi_message_uim_get_card_status_output_ref:
 * @self: a #QmiMessageUimGetCardStatusOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.10
 */
QmiMessageUimGetCardStatusOutput *qmi_message_uim_get_card_status_output_ref (QmiMessageUimGetCardStatusOutput *self);

/**
 * qmi_message_uim_get_card_status_output_unref:
 * @self: a #QmiMessageUimGetCardStatusOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.10
 */
void qmi_message_uim_get_card_status_output_unref (QmiMessageUimGetCardStatusOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Power Off SIM */


/* --- Input -- */

/**
 * QmiMessageUimPowerOffSimInput:
 *
 * The #QmiMessageUimPowerOffSimInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageUimPowerOffSimInput QmiMessageUimPowerOffSimInput;
GType qmi_message_uim_power_off_sim_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_POWER_OFF_SIM_INPUT (qmi_message_uim_power_off_sim_input_get_type ())

/**
 * qmi_message_uim_power_off_sim_input_get_slot:
 * @self: a #QmiMessageUimPowerOffSimInput.
 * @value_slot_slot: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Slot' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_uim_power_off_sim_input_get_slot (
    QmiMessageUimPowerOffSimInput *self,
    guint8 *value_slot_slot,
    GError **error);

/**
 * qmi_message_uim_power_off_sim_input_set_slot:
 * @self: a #QmiMessageUimPowerOffSimInput.
 * @value_slot_slot: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Slot' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_uim_power_off_sim_input_set_slot (
    QmiMessageUimPowerOffSimInput *self,
    guint8 value_slot_slot,
    GError **error);

/**
 * qmi_message_uim_power_off_sim_input_ref:
 * @self: a #QmiMessageUimPowerOffSimInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessageUimPowerOffSimInput *qmi_message_uim_power_off_sim_input_ref (QmiMessageUimPowerOffSimInput *self);

/**
 * qmi_message_uim_power_off_sim_input_unref:
 * @self: a #QmiMessageUimPowerOffSimInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_uim_power_off_sim_input_unref (QmiMessageUimPowerOffSimInput *self);

/**
 * qmi_message_uim_power_off_sim_input_new:
 *
 * Allocates a new #QmiMessageUimPowerOffSimInput.
 *
 * Returns: the newly created #QmiMessageUimPowerOffSimInput. The returned value should be freed with qmi_message_uim_power_off_sim_input_unref().
 *
 * Since: 1.18
 */
QmiMessageUimPowerOffSimInput *qmi_message_uim_power_off_sim_input_new (void);

/* --- Output -- */

/**
 * QmiMessageUimPowerOffSimOutput:
 *
 * The #QmiMessageUimPowerOffSimOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageUimPowerOffSimOutput QmiMessageUimPowerOffSimOutput;
GType qmi_message_uim_power_off_sim_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_POWER_OFF_SIM_OUTPUT (qmi_message_uim_power_off_sim_output_get_type ())

/**
 * qmi_message_uim_power_off_sim_output_get_result:
 * @self: a QmiMessageUimPowerOffSimOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean qmi_message_uim_power_off_sim_output_get_result (
    QmiMessageUimPowerOffSimOutput *self,
    GError **error);

/**
 * qmi_message_uim_power_off_sim_output_ref:
 * @self: a #QmiMessageUimPowerOffSimOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessageUimPowerOffSimOutput *qmi_message_uim_power_off_sim_output_ref (QmiMessageUimPowerOffSimOutput *self);

/**
 * qmi_message_uim_power_off_sim_output_unref:
 * @self: a #QmiMessageUimPowerOffSimOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_uim_power_off_sim_output_unref (QmiMessageUimPowerOffSimOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Power On SIM */


/* --- Input -- */

/**
 * QmiMessageUimPowerOnSimInput:
 *
 * The #QmiMessageUimPowerOnSimInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageUimPowerOnSimInput QmiMessageUimPowerOnSimInput;
GType qmi_message_uim_power_on_sim_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_POWER_ON_SIM_INPUT (qmi_message_uim_power_on_sim_input_get_type ())

/**
 * qmi_message_uim_power_on_sim_input_get_slot:
 * @self: a #QmiMessageUimPowerOnSimInput.
 * @value_slot_slot: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Slot' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_uim_power_on_sim_input_get_slot (
    QmiMessageUimPowerOnSimInput *self,
    guint8 *value_slot_slot,
    GError **error);

/**
 * qmi_message_uim_power_on_sim_input_set_slot:
 * @self: a #QmiMessageUimPowerOnSimInput.
 * @value_slot_slot: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Slot' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_uim_power_on_sim_input_set_slot (
    QmiMessageUimPowerOnSimInput *self,
    guint8 value_slot_slot,
    GError **error);

/**
 * qmi_message_uim_power_on_sim_input_ref:
 * @self: a #QmiMessageUimPowerOnSimInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessageUimPowerOnSimInput *qmi_message_uim_power_on_sim_input_ref (QmiMessageUimPowerOnSimInput *self);

/**
 * qmi_message_uim_power_on_sim_input_unref:
 * @self: a #QmiMessageUimPowerOnSimInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_uim_power_on_sim_input_unref (QmiMessageUimPowerOnSimInput *self);

/**
 * qmi_message_uim_power_on_sim_input_new:
 *
 * Allocates a new #QmiMessageUimPowerOnSimInput.
 *
 * Returns: the newly created #QmiMessageUimPowerOnSimInput. The returned value should be freed with qmi_message_uim_power_on_sim_input_unref().
 *
 * Since: 1.18
 */
QmiMessageUimPowerOnSimInput *qmi_message_uim_power_on_sim_input_new (void);

/* --- Output -- */

/**
 * QmiMessageUimPowerOnSimOutput:
 *
 * The #QmiMessageUimPowerOnSimOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageUimPowerOnSimOutput QmiMessageUimPowerOnSimOutput;
GType qmi_message_uim_power_on_sim_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_POWER_ON_SIM_OUTPUT (qmi_message_uim_power_on_sim_output_get_type ())

/**
 * qmi_message_uim_power_on_sim_output_get_result:
 * @self: a QmiMessageUimPowerOnSimOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean qmi_message_uim_power_on_sim_output_get_result (
    QmiMessageUimPowerOnSimOutput *self,
    GError **error);

/**
 * qmi_message_uim_power_on_sim_output_ref:
 * @self: a #QmiMessageUimPowerOnSimOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessageUimPowerOnSimOutput *qmi_message_uim_power_on_sim_output_ref (QmiMessageUimPowerOnSimOutput *self);

/**
 * qmi_message_uim_power_on_sim_output_unref:
 * @self: a #QmiMessageUimPowerOnSimOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_uim_power_on_sim_output_unref (QmiMessageUimPowerOnSimOutput *self);

/*****************************************************************************/
/* Service-specific printable: UIM */


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *__qmi_message_uim_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix);

#endif


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gboolean __qmi_message_uim_get_version_introduced (
    QmiMessage *self,
    QmiMessageContext *context,
    guint *major,
    guint *minor);

#endif


/*****************************************************************************/
/* CLIENT: QMI Client UIM */

#define QMI_TYPE_CLIENT_UIM            (qmi_client_uim_get_type ())
#define QMI_CLIENT_UIM(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), QMI_TYPE_CLIENT_UIM, QmiClientUim))
#define QMI_CLIENT_UIM_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  QMI_TYPE_CLIENT_UIM, QmiClientUimClass))
#define QMI_IS_CLIENT_UIM(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), QMI_TYPE_CLIENT_UIM))
#define QMI_IS_CLIENT_UIM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  QMI_TYPE_CLIENT_UIM))
#define QMI_CLIENT_UIM_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  QMI_TYPE_CLIENT_UIM, QmiClientUimClass))

typedef struct _QmiClientUim QmiClientUim;
typedef struct _QmiClientUimClass QmiClientUimClass;

/**
 * QmiClientUim:
 *
 * The #QmiClientUim structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
struct _QmiClientUim {
    /*< private >*/
    QmiClient parent;
    gpointer priv_unused;
};

struct _QmiClientUimClass {
    /*< private >*/
    QmiClientClass parent;
};

GType qmi_client_uim_get_type (void);


/**
 * qmi_client_uim_reset:
 * @self: a #QmiClientUim.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Reset request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_uim_reset_finish() to get the result of the operation.
 *
 * Since: 1.6
 */
void qmi_client_uim_reset (
    QmiClientUim *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_uim_reset_finish:
 * @self: a #QmiClientUim.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_uim_reset().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_uim_reset().
 *
 * Returns: a #QmiMessageUimResetOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_uim_reset_output_unref().
 *
 * Since: 1.6
 */
QmiMessageUimResetOutput *qmi_client_uim_reset_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_uim_get_supported_messages:
 * @self: a #QmiClientUim.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Supported Messages request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_uim_get_supported_messages_finish() to get the result of the operation.
 *
 * Since: 1.14
 */
void qmi_client_uim_get_supported_messages (
    QmiClientUim *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_uim_get_supported_messages_finish:
 * @self: a #QmiClientUim.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_uim_get_supported_messages().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_uim_get_supported_messages().
 *
 * Returns: a #QmiMessageUimGetSupportedMessagesOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_uim_get_supported_messages_output_unref().
 *
 * Since: 1.14
 */
QmiMessageUimGetSupportedMessagesOutput *qmi_client_uim_get_supported_messages_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_uim_read_transparent:
 * @self: a #QmiClientUim.
 * @input: a #QmiMessageUimReadTransparentInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Read Transparent request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_uim_read_transparent_finish() to get the result of the operation.
 *
 * Since: 1.6
 */
void qmi_client_uim_read_transparent (
    QmiClientUim *self,
    QmiMessageUimReadTransparentInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_uim_read_transparent_finish:
 * @self: a #QmiClientUim.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_uim_read_transparent().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_uim_read_transparent().
 *
 * Returns: a #QmiMessageUimReadTransparentOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_uim_read_transparent_output_unref().
 *
 * Since: 1.6
 */
QmiMessageUimReadTransparentOutput *qmi_client_uim_read_transparent_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_uim_read_record:
 * @self: a #QmiClientUim.
 * @input: a #QmiMessageUimReadRecordInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Read Record request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_uim_read_record_finish() to get the result of the operation.
 *
 * Since: 1.6
 */
void qmi_client_uim_read_record (
    QmiClientUim *self,
    QmiMessageUimReadRecordInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_uim_read_record_finish:
 * @self: a #QmiClientUim.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_uim_read_record().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_uim_read_record().
 *
 * Returns: a #QmiMessageUimReadRecordOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_uim_read_record_output_unref().
 *
 * Since: 1.6
 */
QmiMessageUimReadRecordOutput *qmi_client_uim_read_record_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_uim_get_file_attributes:
 * @self: a #QmiClientUim.
 * @input: a #QmiMessageUimGetFileAttributesInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get File Attributes request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_uim_get_file_attributes_finish() to get the result of the operation.
 *
 * Since: 1.6
 */
void qmi_client_uim_get_file_attributes (
    QmiClientUim *self,
    QmiMessageUimGetFileAttributesInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_uim_get_file_attributes_finish:
 * @self: a #QmiClientUim.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_uim_get_file_attributes().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_uim_get_file_attributes().
 *
 * Returns: a #QmiMessageUimGetFileAttributesOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_uim_get_file_attributes_output_unref().
 *
 * Since: 1.6
 */
QmiMessageUimGetFileAttributesOutput *qmi_client_uim_get_file_attributes_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_uim_set_pin_protection:
 * @self: a #QmiClientUim.
 * @input: a #QmiMessageUimSetPinProtectionInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set PIN Protection request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_uim_set_pin_protection_finish() to get the result of the operation.
 *
 * Since: 1.14
 */
void qmi_client_uim_set_pin_protection (
    QmiClientUim *self,
    QmiMessageUimSetPinProtectionInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_uim_set_pin_protection_finish:
 * @self: a #QmiClientUim.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_uim_set_pin_protection().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_uim_set_pin_protection().
 *
 * Returns: a #QmiMessageUimSetPinProtectionOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_uim_set_pin_protection_output_unref().
 *
 * Since: 1.14
 */
QmiMessageUimSetPinProtectionOutput *qmi_client_uim_set_pin_protection_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_uim_verify_pin:
 * @self: a #QmiClientUim.
 * @input: a #QmiMessageUimVerifyPinInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Verify PIN request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_uim_verify_pin_finish() to get the result of the operation.
 *
 * Since: 1.14
 */
void qmi_client_uim_verify_pin (
    QmiClientUim *self,
    QmiMessageUimVerifyPinInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_uim_verify_pin_finish:
 * @self: a #QmiClientUim.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_uim_verify_pin().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_uim_verify_pin().
 *
 * Returns: a #QmiMessageUimVerifyPinOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_uim_verify_pin_output_unref().
 *
 * Since: 1.14
 */
QmiMessageUimVerifyPinOutput *qmi_client_uim_verify_pin_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_uim_unblock_pin:
 * @self: a #QmiClientUim.
 * @input: a #QmiMessageUimUnblockPinInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Unblock PIN request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_uim_unblock_pin_finish() to get the result of the operation.
 *
 * Since: 1.14
 */
void qmi_client_uim_unblock_pin (
    QmiClientUim *self,
    QmiMessageUimUnblockPinInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_uim_unblock_pin_finish:
 * @self: a #QmiClientUim.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_uim_unblock_pin().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_uim_unblock_pin().
 *
 * Returns: a #QmiMessageUimUnblockPinOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_uim_unblock_pin_output_unref().
 *
 * Since: 1.14
 */
QmiMessageUimUnblockPinOutput *qmi_client_uim_unblock_pin_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_uim_change_pin:
 * @self: a #QmiClientUim.
 * @input: a #QmiMessageUimChangePinInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Change PIN request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_uim_change_pin_finish() to get the result of the operation.
 *
 * Since: 1.14
 */
void qmi_client_uim_change_pin (
    QmiClientUim *self,
    QmiMessageUimChangePinInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_uim_change_pin_finish:
 * @self: a #QmiClientUim.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_uim_change_pin().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_uim_change_pin().
 *
 * Returns: a #QmiMessageUimChangePinOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_uim_change_pin_output_unref().
 *
 * Since: 1.14
 */
QmiMessageUimChangePinOutput *qmi_client_uim_change_pin_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_uim_get_card_status:
 * @self: a #QmiClientUim.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Card Status request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_uim_get_card_status_finish() to get the result of the operation.
 *
 * Since: 1.10
 */
void qmi_client_uim_get_card_status (
    QmiClientUim *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_uim_get_card_status_finish:
 * @self: a #QmiClientUim.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_uim_get_card_status().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_uim_get_card_status().
 *
 * Returns: a #QmiMessageUimGetCardStatusOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_uim_get_card_status_output_unref().
 *
 * Since: 1.10
 */
QmiMessageUimGetCardStatusOutput *qmi_client_uim_get_card_status_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_uim_power_off_sim:
 * @self: a #QmiClientUim.
 * @input: a #QmiMessageUimPowerOffSimInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Power Off SIM request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_uim_power_off_sim_finish() to get the result of the operation.
 *
 * Since: 1.18
 */
void qmi_client_uim_power_off_sim (
    QmiClientUim *self,
    QmiMessageUimPowerOffSimInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_uim_power_off_sim_finish:
 * @self: a #QmiClientUim.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_uim_power_off_sim().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_uim_power_off_sim().
 *
 * Returns: a #QmiMessageUimPowerOffSimOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_uim_power_off_sim_output_unref().
 *
 * Since: 1.18
 */
QmiMessageUimPowerOffSimOutput *qmi_client_uim_power_off_sim_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_uim_power_on_sim:
 * @self: a #QmiClientUim.
 * @input: a #QmiMessageUimPowerOnSimInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Power On SIM request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_uim_power_on_sim_finish() to get the result of the operation.
 *
 * Since: 1.18
 */
void qmi_client_uim_power_on_sim (
    QmiClientUim *self,
    QmiMessageUimPowerOnSimInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_uim_power_on_sim_finish:
 * @self: a #QmiClientUim.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_uim_power_on_sim().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_uim_power_on_sim().
 *
 * Returns: a #QmiMessageUimPowerOnSimOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_uim_power_on_sim_output_unref().
 *
 * Since: 1.18
 */
QmiMessageUimPowerOnSimOutput *qmi_client_uim_power_on_sim_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error);

G_END_DECLS

#endif /* __LIBQMI_GLIB_QMI_UIM__ */
