
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
#include "qmi-enums-voice.h"
#include "qmi-message.h"
#include "qmi-client.h"

#ifndef __LIBQMI_GLIB_QMI_VOICE__
#define __LIBQMI_GLIB_QMI_VOICE__

G_BEGIN_DECLS


/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message VOICE Get Supported Messages */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageVoiceGetSupportedMessagesOutput:
 *
 * The #QmiMessageVoiceGetSupportedMessagesOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageVoiceGetSupportedMessagesOutput QmiMessageVoiceGetSupportedMessagesOutput;
GType qmi_message_voice_get_supported_messages_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_VOICE_GET_SUPPORTED_MESSAGES_OUTPUT (qmi_message_voice_get_supported_messages_output_get_type ())

/**
 * qmi_message_voice_get_supported_messages_output_get_result:
 * @self: a QmiMessageVoiceGetSupportedMessagesOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_supported_messages_output_get_result (
    QmiMessageVoiceGetSupportedMessagesOutput *self,
    GError **error);

/**
 * qmi_message_voice_get_supported_messages_output_get_list:
 * @self: a #QmiMessageVoiceGetSupportedMessagesOutput.
 * @value_list: a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'List' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_supported_messages_output_get_list (
    QmiMessageVoiceGetSupportedMessagesOutput *self,
    GArray **value_list,
    GError **error);

/**
 * qmi_message_voice_get_supported_messages_output_ref:
 * @self: a #QmiMessageVoiceGetSupportedMessagesOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageVoiceGetSupportedMessagesOutput *qmi_message_voice_get_supported_messages_output_ref (QmiMessageVoiceGetSupportedMessagesOutput *self);

/**
 * qmi_message_voice_get_supported_messages_output_unref:
 * @self: a #QmiMessageVoiceGetSupportedMessagesOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_voice_get_supported_messages_output_unref (QmiMessageVoiceGetSupportedMessagesOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message VOICE Dial Call */


/* --- Input -- */

/**
 * QmiMessageVoiceDialCallInput:
 *
 * The #QmiMessageVoiceDialCallInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageVoiceDialCallInput QmiMessageVoiceDialCallInput;
GType qmi_message_voice_dial_call_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_VOICE_DIAL_CALL_INPUT (qmi_message_voice_dial_call_input_get_type ())

/**
 * qmi_message_voice_dial_call_input_get_calling_number:
 * @self: a #QmiMessageVoiceDialCallInput.
 * @value_calling_number: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Calling Number' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_dial_call_input_get_calling_number (
    QmiMessageVoiceDialCallInput *self,
    const gchar **value_calling_number,
    GError **error);

/**
 * qmi_message_voice_dial_call_input_set_calling_number:
 * @self: a #QmiMessageVoiceDialCallInput.
 * @value_calling_number: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Calling Number' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_dial_call_input_set_calling_number (
    QmiMessageVoiceDialCallInput *self,
    const gchar *value_calling_number,
    GError **error);

/**
 * qmi_message_voice_dial_call_input_ref:
 * @self: a #QmiMessageVoiceDialCallInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageVoiceDialCallInput *qmi_message_voice_dial_call_input_ref (QmiMessageVoiceDialCallInput *self);

/**
 * qmi_message_voice_dial_call_input_unref:
 * @self: a #QmiMessageVoiceDialCallInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_voice_dial_call_input_unref (QmiMessageVoiceDialCallInput *self);

/**
 * qmi_message_voice_dial_call_input_new:
 *
 * Allocates a new #QmiMessageVoiceDialCallInput.
 *
 * Returns: the newly created #QmiMessageVoiceDialCallInput. The returned value should be freed with qmi_message_voice_dial_call_input_unref().
 *
 * Since: 1.14
 */
QmiMessageVoiceDialCallInput *qmi_message_voice_dial_call_input_new (void);

/* --- Output -- */

/**
 * QmiMessageVoiceDialCallOutput:
 *
 * The #QmiMessageVoiceDialCallOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageVoiceDialCallOutput QmiMessageVoiceDialCallOutput;
GType qmi_message_voice_dial_call_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_VOICE_DIAL_CALL_OUTPUT (qmi_message_voice_dial_call_output_get_type ())

/**
 * qmi_message_voice_dial_call_output_get_call_id:
 * @self: a #QmiMessageVoiceDialCallOutput.
 * @value_call_id: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Call ID' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_dial_call_output_get_call_id (
    QmiMessageVoiceDialCallOutput *self,
    guint8 *value_call_id,
    GError **error);

/**
 * qmi_message_voice_dial_call_output_get_result:
 * @self: a QmiMessageVoiceDialCallOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_dial_call_output_get_result (
    QmiMessageVoiceDialCallOutput *self,
    GError **error);

/**
 * qmi_message_voice_dial_call_output_ref:
 * @self: a #QmiMessageVoiceDialCallOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageVoiceDialCallOutput *qmi_message_voice_dial_call_output_ref (QmiMessageVoiceDialCallOutput *self);

/**
 * qmi_message_voice_dial_call_output_unref:
 * @self: a #QmiMessageVoiceDialCallOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_voice_dial_call_output_unref (QmiMessageVoiceDialCallOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message VOICE End Call */


/* --- Input -- */

/**
 * QmiMessageVoiceEndCallInput:
 *
 * The #QmiMessageVoiceEndCallInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageVoiceEndCallInput QmiMessageVoiceEndCallInput;
GType qmi_message_voice_end_call_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_VOICE_END_CALL_INPUT (qmi_message_voice_end_call_input_get_type ())

/**
 * qmi_message_voice_end_call_input_get_call_id:
 * @self: a #QmiMessageVoiceEndCallInput.
 * @value_call_id: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Call ID' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_end_call_input_get_call_id (
    QmiMessageVoiceEndCallInput *self,
    guint8 *value_call_id,
    GError **error);

/**
 * qmi_message_voice_end_call_input_set_call_id:
 * @self: a #QmiMessageVoiceEndCallInput.
 * @value_call_id: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Call ID' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_end_call_input_set_call_id (
    QmiMessageVoiceEndCallInput *self,
    guint8 value_call_id,
    GError **error);

/**
 * qmi_message_voice_end_call_input_ref:
 * @self: a #QmiMessageVoiceEndCallInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageVoiceEndCallInput *qmi_message_voice_end_call_input_ref (QmiMessageVoiceEndCallInput *self);

/**
 * qmi_message_voice_end_call_input_unref:
 * @self: a #QmiMessageVoiceEndCallInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_voice_end_call_input_unref (QmiMessageVoiceEndCallInput *self);

/**
 * qmi_message_voice_end_call_input_new:
 *
 * Allocates a new #QmiMessageVoiceEndCallInput.
 *
 * Returns: the newly created #QmiMessageVoiceEndCallInput. The returned value should be freed with qmi_message_voice_end_call_input_unref().
 *
 * Since: 1.14
 */
QmiMessageVoiceEndCallInput *qmi_message_voice_end_call_input_new (void);

/* --- Output -- */

/**
 * QmiMessageVoiceEndCallOutput:
 *
 * The #QmiMessageVoiceEndCallOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageVoiceEndCallOutput QmiMessageVoiceEndCallOutput;
GType qmi_message_voice_end_call_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_VOICE_END_CALL_OUTPUT (qmi_message_voice_end_call_output_get_type ())

/**
 * qmi_message_voice_end_call_output_get_call_id:
 * @self: a #QmiMessageVoiceEndCallOutput.
 * @value_call_id: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Call ID' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_end_call_output_get_call_id (
    QmiMessageVoiceEndCallOutput *self,
    guint8 *value_call_id,
    GError **error);

/**
 * qmi_message_voice_end_call_output_get_result:
 * @self: a QmiMessageVoiceEndCallOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_end_call_output_get_result (
    QmiMessageVoiceEndCallOutput *self,
    GError **error);

/**
 * qmi_message_voice_end_call_output_ref:
 * @self: a #QmiMessageVoiceEndCallOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageVoiceEndCallOutput *qmi_message_voice_end_call_output_ref (QmiMessageVoiceEndCallOutput *self);

/**
 * qmi_message_voice_end_call_output_unref:
 * @self: a #QmiMessageVoiceEndCallOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_voice_end_call_output_unref (QmiMessageVoiceEndCallOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message VOICE Answer Call */


/* --- Input -- */

/**
 * QmiMessageVoiceAnswerCallInput:
 *
 * The #QmiMessageVoiceAnswerCallInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageVoiceAnswerCallInput QmiMessageVoiceAnswerCallInput;
GType qmi_message_voice_answer_call_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_VOICE_ANSWER_CALL_INPUT (qmi_message_voice_answer_call_input_get_type ())

/**
 * qmi_message_voice_answer_call_input_get_call_id:
 * @self: a #QmiMessageVoiceAnswerCallInput.
 * @value_call_id: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Call ID' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_answer_call_input_get_call_id (
    QmiMessageVoiceAnswerCallInput *self,
    guint8 *value_call_id,
    GError **error);

/**
 * qmi_message_voice_answer_call_input_set_call_id:
 * @self: a #QmiMessageVoiceAnswerCallInput.
 * @value_call_id: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Call ID' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_answer_call_input_set_call_id (
    QmiMessageVoiceAnswerCallInput *self,
    guint8 value_call_id,
    GError **error);

/**
 * qmi_message_voice_answer_call_input_ref:
 * @self: a #QmiMessageVoiceAnswerCallInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageVoiceAnswerCallInput *qmi_message_voice_answer_call_input_ref (QmiMessageVoiceAnswerCallInput *self);

/**
 * qmi_message_voice_answer_call_input_unref:
 * @self: a #QmiMessageVoiceAnswerCallInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_voice_answer_call_input_unref (QmiMessageVoiceAnswerCallInput *self);

/**
 * qmi_message_voice_answer_call_input_new:
 *
 * Allocates a new #QmiMessageVoiceAnswerCallInput.
 *
 * Returns: the newly created #QmiMessageVoiceAnswerCallInput. The returned value should be freed with qmi_message_voice_answer_call_input_unref().
 *
 * Since: 1.14
 */
QmiMessageVoiceAnswerCallInput *qmi_message_voice_answer_call_input_new (void);

/* --- Output -- */

/**
 * QmiMessageVoiceAnswerCallOutput:
 *
 * The #QmiMessageVoiceAnswerCallOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageVoiceAnswerCallOutput QmiMessageVoiceAnswerCallOutput;
GType qmi_message_voice_answer_call_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_VOICE_ANSWER_CALL_OUTPUT (qmi_message_voice_answer_call_output_get_type ())

/**
 * qmi_message_voice_answer_call_output_get_call_id:
 * @self: a #QmiMessageVoiceAnswerCallOutput.
 * @value_call_id: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Call ID' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_answer_call_output_get_call_id (
    QmiMessageVoiceAnswerCallOutput *self,
    guint8 *value_call_id,
    GError **error);

/**
 * qmi_message_voice_answer_call_output_get_result:
 * @self: a QmiMessageVoiceAnswerCallOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_answer_call_output_get_result (
    QmiMessageVoiceAnswerCallOutput *self,
    GError **error);

/**
 * qmi_message_voice_answer_call_output_ref:
 * @self: a #QmiMessageVoiceAnswerCallOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageVoiceAnswerCallOutput *qmi_message_voice_answer_call_output_ref (QmiMessageVoiceAnswerCallOutput *self);

/**
 * qmi_message_voice_answer_call_output_unref:
 * @self: a #QmiMessageVoiceAnswerCallOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_voice_answer_call_output_unref (QmiMessageVoiceAnswerCallOutput *self);

/*****************************************************************************/
/* INDICATION: Qmi Indication VOICE All Call Status */


/* --- Output -- */

/**
 * QmiIndicationVoiceAllCallStatusOutputRemotePartyNumberCall:
 * @id: a #guint8.
 * @presentation_indicator: a #QmiVoicePresentation.
 * @type: a string.
 *
 * A QmiIndicationVoiceAllCallStatusOutputRemotePartyNumberCall struct.
 *
 * Since: 1.14
 */
typedef struct _QmiIndicationVoiceAllCallStatusOutputRemotePartyNumberCall {
    guint8 id;
    QmiVoicePresentation presentation_indicator;
    gchar *type;
} QmiIndicationVoiceAllCallStatusOutputRemotePartyNumberCall;

/**
 * QmiIndicationVoiceAllCallStatusOutputCallInformationCall:
 * @id: a #guint8.
 * @state: a #QmiVoiceCallState.
 * @type: a #QmiVoiceCallType.
 * @direction: a #QmiVoiceCallDirection.
 * @mode: a #QmiVoiceCallMode.
 * @multipart_indicator: a #gboolean.
 * @als: a #QmiVoiceAls.
 *
 * A QmiIndicationVoiceAllCallStatusOutputCallInformationCall struct.
 *
 * Since: 1.14
 */
typedef struct _QmiIndicationVoiceAllCallStatusOutputCallInformationCall {
    guint8 id;
    QmiVoiceCallState state;
    QmiVoiceCallType type;
    QmiVoiceCallDirection direction;
    QmiVoiceCallMode mode;
    gboolean multipart_indicator;
    QmiVoiceAls als;
} QmiIndicationVoiceAllCallStatusOutputCallInformationCall;

/**
 * QmiIndicationVoiceAllCallStatusOutput:
 *
 * The #QmiIndicationVoiceAllCallStatusOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiIndicationVoiceAllCallStatusOutput QmiIndicationVoiceAllCallStatusOutput;
GType qmi_indication_voice_all_call_status_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_VOICE_ALL_CALL_STATUS_OUTPUT (qmi_indication_voice_all_call_status_output_get_type ())

/**
 * qmi_indication_voice_all_call_status_output_get_remote_party_number:
 * @self: a #QmiIndicationVoiceAllCallStatusOutput.
 * @value_remote_party_number: a placeholder for the output #GArray of #QmiIndicationVoiceAllCallStatusOutputRemotePartyNumberCall elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Remote Party Number' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_indication_voice_all_call_status_output_get_remote_party_number (
    QmiIndicationVoiceAllCallStatusOutput *self,
    GArray **value_remote_party_number,
    GError **error);

/**
 * qmi_indication_voice_all_call_status_output_get_call_information:
 * @self: a #QmiIndicationVoiceAllCallStatusOutput.
 * @value_call_information: a placeholder for the output #GArray of #QmiIndicationVoiceAllCallStatusOutputCallInformationCall elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Call Information' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_indication_voice_all_call_status_output_get_call_information (
    QmiIndicationVoiceAllCallStatusOutput *self,
    GArray **value_call_information,
    GError **error);

/**
 * qmi_indication_voice_all_call_status_output_ref:
 * @self: a #QmiIndicationVoiceAllCallStatusOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiIndicationVoiceAllCallStatusOutput *qmi_indication_voice_all_call_status_output_ref (QmiIndicationVoiceAllCallStatusOutput *self);

/**
 * qmi_indication_voice_all_call_status_output_unref:
 * @self: a #QmiIndicationVoiceAllCallStatusOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_indication_voice_all_call_status_output_unref (QmiIndicationVoiceAllCallStatusOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message VOICE Get Config */


/* --- Input -- */

/**
 * QmiMessageVoiceGetConfigInput:
 *
 * The #QmiMessageVoiceGetConfigInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageVoiceGetConfigInput QmiMessageVoiceGetConfigInput;
GType qmi_message_voice_get_config_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_VOICE_GET_CONFIG_INPUT (qmi_message_voice_get_config_input_get_type ())

/**
 * qmi_message_voice_get_config_input_get_voice_domain_preference:
 * @self: a #QmiMessageVoiceGetConfigInput.
 * @value_voice_domain_preference: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Voice Domain Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_input_get_voice_domain_preference (
    QmiMessageVoiceGetConfigInput *self,
    gboolean *value_voice_domain_preference,
    GError **error);

/**
 * qmi_message_voice_get_config_input_set_voice_domain_preference:
 * @self: a #QmiMessageVoiceGetConfigInput.
 * @value_voice_domain_preference: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Voice Domain Preference' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_input_set_voice_domain_preference (
    QmiMessageVoiceGetConfigInput *self,
    gboolean value_voice_domain_preference,
    GError **error);

/**
 * qmi_message_voice_get_config_input_get_nam_index:
 * @self: a #QmiMessageVoiceGetConfigInput.
 * @value_nam_index: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'NAM Index' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_input_get_nam_index (
    QmiMessageVoiceGetConfigInput *self,
    gboolean *value_nam_index,
    GError **error);

/**
 * qmi_message_voice_get_config_input_set_nam_index:
 * @self: a #QmiMessageVoiceGetConfigInput.
 * @value_nam_index: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'NAM Index' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_input_set_nam_index (
    QmiMessageVoiceGetConfigInput *self,
    gboolean value_nam_index,
    GError **error);

/**
 * qmi_message_voice_get_config_input_get_preferred_voice_privacy:
 * @self: a #QmiMessageVoiceGetConfigInput.
 * @value_preferred_voice_privacy: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Preferred Voice Privacy' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_input_get_preferred_voice_privacy (
    QmiMessageVoiceGetConfigInput *self,
    gboolean *value_preferred_voice_privacy,
    GError **error);

/**
 * qmi_message_voice_get_config_input_set_preferred_voice_privacy:
 * @self: a #QmiMessageVoiceGetConfigInput.
 * @value_preferred_voice_privacy: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Preferred Voice Privacy' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_input_set_preferred_voice_privacy (
    QmiMessageVoiceGetConfigInput *self,
    gboolean value_preferred_voice_privacy,
    GError **error);

/**
 * qmi_message_voice_get_config_input_get_amr_status:
 * @self: a #QmiMessageVoiceGetConfigInput.
 * @value_amr_status: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'AMR Status' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_input_get_amr_status (
    QmiMessageVoiceGetConfigInput *self,
    gboolean *value_amr_status,
    GError **error);

/**
 * qmi_message_voice_get_config_input_set_amr_status:
 * @self: a #QmiMessageVoiceGetConfigInput.
 * @value_amr_status: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'AMR Status' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_input_set_amr_status (
    QmiMessageVoiceGetConfigInput *self,
    gboolean value_amr_status,
    GError **error);

/**
 * qmi_message_voice_get_config_input_get_preferred_voice_service_option:
 * @self: a #QmiMessageVoiceGetConfigInput.
 * @value_preferred_voice_service_option: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Preferred Voice Service Option' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_input_get_preferred_voice_service_option (
    QmiMessageVoiceGetConfigInput *self,
    gboolean *value_preferred_voice_service_option,
    GError **error);

/**
 * qmi_message_voice_get_config_input_set_preferred_voice_service_option:
 * @self: a #QmiMessageVoiceGetConfigInput.
 * @value_preferred_voice_service_option: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Preferred Voice Service Option' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_input_set_preferred_voice_service_option (
    QmiMessageVoiceGetConfigInput *self,
    gboolean value_preferred_voice_service_option,
    GError **error);

/**
 * qmi_message_voice_get_config_input_get_tty_mode:
 * @self: a #QmiMessageVoiceGetConfigInput.
 * @value_tty_mode: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'TTY Mode' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_input_get_tty_mode (
    QmiMessageVoiceGetConfigInput *self,
    gboolean *value_tty_mode,
    GError **error);

/**
 * qmi_message_voice_get_config_input_set_tty_mode:
 * @self: a #QmiMessageVoiceGetConfigInput.
 * @value_tty_mode: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'TTY Mode' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_input_set_tty_mode (
    QmiMessageVoiceGetConfigInput *self,
    gboolean value_tty_mode,
    GError **error);

/**
 * qmi_message_voice_get_config_input_get_roam_timer:
 * @self: a #QmiMessageVoiceGetConfigInput.
 * @value_roam_timer: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Roam Timer' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_input_get_roam_timer (
    QmiMessageVoiceGetConfigInput *self,
    gboolean *value_roam_timer,
    GError **error);

/**
 * qmi_message_voice_get_config_input_set_roam_timer:
 * @self: a #QmiMessageVoiceGetConfigInput.
 * @value_roam_timer: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Roam Timer' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_input_set_roam_timer (
    QmiMessageVoiceGetConfigInput *self,
    gboolean value_roam_timer,
    GError **error);

/**
 * qmi_message_voice_get_config_input_get_air_timer:
 * @self: a #QmiMessageVoiceGetConfigInput.
 * @value_air_timer: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Air Timer' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_input_get_air_timer (
    QmiMessageVoiceGetConfigInput *self,
    gboolean *value_air_timer,
    GError **error);

/**
 * qmi_message_voice_get_config_input_set_air_timer:
 * @self: a #QmiMessageVoiceGetConfigInput.
 * @value_air_timer: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Air Timer' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_input_set_air_timer (
    QmiMessageVoiceGetConfigInput *self,
    gboolean value_air_timer,
    GError **error);

/**
 * qmi_message_voice_get_config_input_get_auto_answer:
 * @self: a #QmiMessageVoiceGetConfigInput.
 * @value_auto_answer: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Auto Answer' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_input_get_auto_answer (
    QmiMessageVoiceGetConfigInput *self,
    gboolean *value_auto_answer,
    GError **error);

/**
 * qmi_message_voice_get_config_input_set_auto_answer:
 * @self: a #QmiMessageVoiceGetConfigInput.
 * @value_auto_answer: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Auto Answer' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_input_set_auto_answer (
    QmiMessageVoiceGetConfigInput *self,
    gboolean value_auto_answer,
    GError **error);

/**
 * qmi_message_voice_get_config_input_ref:
 * @self: a #QmiMessageVoiceGetConfigInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageVoiceGetConfigInput *qmi_message_voice_get_config_input_ref (QmiMessageVoiceGetConfigInput *self);

/**
 * qmi_message_voice_get_config_input_unref:
 * @self: a #QmiMessageVoiceGetConfigInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_voice_get_config_input_unref (QmiMessageVoiceGetConfigInput *self);

/**
 * qmi_message_voice_get_config_input_new:
 *
 * Allocates a new #QmiMessageVoiceGetConfigInput.
 *
 * Returns: the newly created #QmiMessageVoiceGetConfigInput. The returned value should be freed with qmi_message_voice_get_config_input_unref().
 *
 * Since: 1.14
 */
QmiMessageVoiceGetConfigInput *qmi_message_voice_get_config_input_new (void);

/* --- Output -- */

/**
 * QmiMessageVoiceGetConfigOutput:
 *
 * The #QmiMessageVoiceGetConfigOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageVoiceGetConfigOutput QmiMessageVoiceGetConfigOutput;
GType qmi_message_voice_get_config_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_VOICE_GET_CONFIG_OUTPUT (qmi_message_voice_get_config_output_get_type ())

/**
 * qmi_message_voice_get_config_output_get_current_voice_domain_preference:
 * @self: a #QmiMessageVoiceGetConfigOutput.
 * @value_current_voice_domain_preference: a placeholder for the output #QmiVoiceDomain, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Current Voice Domain Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_output_get_current_voice_domain_preference (
    QmiMessageVoiceGetConfigOutput *self,
    QmiVoiceDomain *value_current_voice_domain_preference,
    GError **error);

/**
 * qmi_message_voice_get_config_output_get_current_voice_privacy_preference:
 * @self: a #QmiMessageVoiceGetConfigOutput.
 * @value_current_voice_privacy_preference: a placeholder for the output #QmiVoicePrivacy, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Current Voice Privacy Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_output_get_current_voice_privacy_preference (
    QmiMessageVoiceGetConfigOutput *self,
    QmiVoicePrivacy *value_current_voice_privacy_preference,
    GError **error);

/**
 * qmi_message_voice_get_config_output_get_current_amr_status:
 * @self: a #QmiMessageVoiceGetConfigOutput.
 * @value_current_amr_status_gsm: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_current_amr_status_wcdma: a placeholder for the output #QmiVoiceWcdmaAmrStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Current AMR Status' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_output_get_current_amr_status (
    QmiMessageVoiceGetConfigOutput *self,
    gboolean *value_current_amr_status_gsm,
    QmiVoiceWcdmaAmrStatus *value_current_amr_status_wcdma,
    GError **error);

/**
 * qmi_message_voice_get_config_output_get_current_preferred_voice_so:
 * @self: a #QmiMessageVoiceGetConfigOutput.
 * @value_current_preferred_voice_so_nam_id: a placeholder for the output #guint8, or %NULL if not required.
 * @value_current_preferred_voice_so_evrc_capability: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_current_preferred_voice_so_home_page_voice_service_option: a placeholder for the output #QmiVoiceServiceOption, or %NULL if not required.
 * @value_current_preferred_voice_so_home_origination_voice_service_option: a placeholder for the output #QmiVoiceServiceOption, or %NULL if not required.
 * @value_current_preferred_voice_so_roaming_origination_voice_service_option: a placeholder for the output #QmiVoiceServiceOption, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Current Preferred Voice SO' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_output_get_current_preferred_voice_so (
    QmiMessageVoiceGetConfigOutput *self,
    guint8 *value_current_preferred_voice_so_nam_id,
    gboolean *value_current_preferred_voice_so_evrc_capability,
    QmiVoiceServiceOption *value_current_preferred_voice_so_home_page_voice_service_option,
    QmiVoiceServiceOption *value_current_preferred_voice_so_home_origination_voice_service_option,
    QmiVoiceServiceOption *value_current_preferred_voice_so_roaming_origination_voice_service_option,
    GError **error);

/**
 * qmi_message_voice_get_config_output_get_current_tty_mode:
 * @self: a #QmiMessageVoiceGetConfigOutput.
 * @value_current_tty_mode: a placeholder for the output #QmiVoiceTtyMode, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Current TTY Mode' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_output_get_current_tty_mode (
    QmiMessageVoiceGetConfigOutput *self,
    QmiVoiceTtyMode *value_current_tty_mode,
    GError **error);

/**
 * qmi_message_voice_get_config_output_get_roam_timer_count:
 * @self: a #QmiMessageVoiceGetConfigOutput.
 * @value_roam_timer_count_nam_id: a placeholder for the output #guint8, or %NULL if not required.
 * @value_roam_timer_count_roam_timer: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Roam Timer Count' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_output_get_roam_timer_count (
    QmiMessageVoiceGetConfigOutput *self,
    guint8 *value_roam_timer_count_nam_id,
    guint32 *value_roam_timer_count_roam_timer,
    GError **error);

/**
 * qmi_message_voice_get_config_output_get_air_timer_count:
 * @self: a #QmiMessageVoiceGetConfigOutput.
 * @value_air_timer_count_nam_id: a placeholder for the output #guint8, or %NULL if not required.
 * @value_air_timer_count_air_timer: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Air Timer Count' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_output_get_air_timer_count (
    QmiMessageVoiceGetConfigOutput *self,
    guint8 *value_air_timer_count_nam_id,
    guint32 *value_air_timer_count_air_timer,
    GError **error);

/**
 * qmi_message_voice_get_config_output_get_auto_answer_status:
 * @self: a #QmiMessageVoiceGetConfigOutput.
 * @value_auto_answer_status: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Auto Answer Status' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_output_get_auto_answer_status (
    QmiMessageVoiceGetConfigOutput *self,
    gboolean *value_auto_answer_status,
    GError **error);

/**
 * qmi_message_voice_get_config_output_get_result:
 * @self: a QmiMessageVoiceGetConfigOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_output_get_result (
    QmiMessageVoiceGetConfigOutput *self,
    GError **error);

/**
 * qmi_message_voice_get_config_output_ref:
 * @self: a #QmiMessageVoiceGetConfigOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageVoiceGetConfigOutput *qmi_message_voice_get_config_output_ref (QmiMessageVoiceGetConfigOutput *self);

/**
 * qmi_message_voice_get_config_output_unref:
 * @self: a #QmiMessageVoiceGetConfigOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_voice_get_config_output_unref (QmiMessageVoiceGetConfigOutput *self);

/*****************************************************************************/
/* Service-specific printable: VOICE */


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *__qmi_message_voice_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix);

#endif


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gboolean __qmi_message_voice_get_version_introduced (
    QmiMessage *self,
    QmiMessageContext *context,
    guint *major,
    guint *minor);

#endif


/*****************************************************************************/
/* CLIENT: QMI Client Voice */

#define QMI_TYPE_CLIENT_VOICE            (qmi_client_voice_get_type ())
#define QMI_CLIENT_VOICE(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), QMI_TYPE_CLIENT_VOICE, QmiClientVoice))
#define QMI_CLIENT_VOICE_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  QMI_TYPE_CLIENT_VOICE, QmiClientVoiceClass))
#define QMI_IS_CLIENT_VOICE(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), QMI_TYPE_CLIENT_VOICE))
#define QMI_IS_CLIENT_VOICE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  QMI_TYPE_CLIENT_VOICE))
#define QMI_CLIENT_VOICE_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  QMI_TYPE_CLIENT_VOICE, QmiClientVoiceClass))

typedef struct _QmiClientVoice QmiClientVoice;
typedef struct _QmiClientVoiceClass QmiClientVoiceClass;

/**
 * QmiClientVoice:
 *
 * The #QmiClientVoice structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
struct _QmiClientVoice {
    /*< private >*/
    QmiClient parent;
    gpointer priv_unused;
};

struct _QmiClientVoiceClass {
    /*< private >*/
    QmiClientClass parent;
};

GType qmi_client_voice_get_type (void);


/**
 * qmi_client_voice_get_supported_messages:
 * @self: a #QmiClientVoice.
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
 * You can then call qmi_client_voice_get_supported_messages_finish() to get the result of the operation.
 *
 * Since: 1.14
 */
void qmi_client_voice_get_supported_messages (
    QmiClientVoice *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_voice_get_supported_messages_finish:
 * @self: a #QmiClientVoice.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_voice_get_supported_messages().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_voice_get_supported_messages().
 *
 * Returns: a #QmiMessageVoiceGetSupportedMessagesOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_voice_get_supported_messages_output_unref().
 *
 * Since: 1.14
 */
QmiMessageVoiceGetSupportedMessagesOutput *qmi_client_voice_get_supported_messages_finish (
    QmiClientVoice *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_voice_dial_call:
 * @self: a #QmiClientVoice.
 * @input: a #QmiMessageVoiceDialCallInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Dial Call request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_voice_dial_call_finish() to get the result of the operation.
 *
 * Since: 1.14
 */
void qmi_client_voice_dial_call (
    QmiClientVoice *self,
    QmiMessageVoiceDialCallInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_voice_dial_call_finish:
 * @self: a #QmiClientVoice.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_voice_dial_call().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_voice_dial_call().
 *
 * Returns: a #QmiMessageVoiceDialCallOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_voice_dial_call_output_unref().
 *
 * Since: 1.14
 */
QmiMessageVoiceDialCallOutput *qmi_client_voice_dial_call_finish (
    QmiClientVoice *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_voice_end_call:
 * @self: a #QmiClientVoice.
 * @input: a #QmiMessageVoiceEndCallInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a End Call request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_voice_end_call_finish() to get the result of the operation.
 *
 * Since: 1.14
 */
void qmi_client_voice_end_call (
    QmiClientVoice *self,
    QmiMessageVoiceEndCallInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_voice_end_call_finish:
 * @self: a #QmiClientVoice.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_voice_end_call().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_voice_end_call().
 *
 * Returns: a #QmiMessageVoiceEndCallOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_voice_end_call_output_unref().
 *
 * Since: 1.14
 */
QmiMessageVoiceEndCallOutput *qmi_client_voice_end_call_finish (
    QmiClientVoice *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_voice_answer_call:
 * @self: a #QmiClientVoice.
 * @input: a #QmiMessageVoiceAnswerCallInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Answer Call request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_voice_answer_call_finish() to get the result of the operation.
 *
 * Since: 1.14
 */
void qmi_client_voice_answer_call (
    QmiClientVoice *self,
    QmiMessageVoiceAnswerCallInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_voice_answer_call_finish:
 * @self: a #QmiClientVoice.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_voice_answer_call().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_voice_answer_call().
 *
 * Returns: a #QmiMessageVoiceAnswerCallOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_voice_answer_call_output_unref().
 *
 * Since: 1.14
 */
QmiMessageVoiceAnswerCallOutput *qmi_client_voice_answer_call_finish (
    QmiClientVoice *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_voice_get_config:
 * @self: a #QmiClientVoice.
 * @input: a #QmiMessageVoiceGetConfigInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Config request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_voice_get_config_finish() to get the result of the operation.
 *
 * Since: 1.14
 */
void qmi_client_voice_get_config (
    QmiClientVoice *self,
    QmiMessageVoiceGetConfigInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_voice_get_config_finish:
 * @self: a #QmiClientVoice.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_voice_get_config().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_voice_get_config().
 *
 * Returns: a #QmiMessageVoiceGetConfigOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_voice_get_config_output_unref().
 *
 * Since: 1.14
 */
QmiMessageVoiceGetConfigOutput *qmi_client_voice_get_config_finish (
    QmiClientVoice *self,
    GAsyncResult *res,
    GError **error);

G_END_DECLS

#endif /* __LIBQMI_GLIB_QMI_VOICE__ */
