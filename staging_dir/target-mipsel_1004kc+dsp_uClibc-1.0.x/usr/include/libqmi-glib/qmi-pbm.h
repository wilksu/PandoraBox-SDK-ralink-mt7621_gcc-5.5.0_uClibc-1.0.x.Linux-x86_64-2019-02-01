
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
#include "qmi-enums-pbm.h"
#include "qmi-message.h"
#include "qmi-client.h"

#ifndef __LIBQMI_GLIB_QMI_PBM__
#define __LIBQMI_GLIB_QMI_PBM__

G_BEGIN_DECLS


/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PBM Indication Register */


/* --- Input -- */

/**
 * QmiMessagePbmIndicationRegisterInput:
 *
 * The #QmiMessagePbmIndicationRegisterInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiMessagePbmIndicationRegisterInput QmiMessagePbmIndicationRegisterInput;
GType qmi_message_pbm_indication_register_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PBM_INDICATION_REGISTER_INPUT (qmi_message_pbm_indication_register_input_get_type ())

/**
 * qmi_message_pbm_indication_register_input_get_event_registration_mask:
 * @self: a #QmiMessagePbmIndicationRegisterInput.
 * @value_event_registration_mask: a placeholder for the output #QmiPbmEventRegistrationFlag, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Event Registration Mask' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_indication_register_input_get_event_registration_mask (
    QmiMessagePbmIndicationRegisterInput *self,
    QmiPbmEventRegistrationFlag *value_event_registration_mask,
    GError **error);

/**
 * qmi_message_pbm_indication_register_input_set_event_registration_mask:
 * @self: a #QmiMessagePbmIndicationRegisterInput.
 * @value_event_registration_mask: a #QmiPbmEventRegistrationFlag.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Event Registration Mask' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_indication_register_input_set_event_registration_mask (
    QmiMessagePbmIndicationRegisterInput *self,
    QmiPbmEventRegistrationFlag value_event_registration_mask,
    GError **error);

/**
 * qmi_message_pbm_indication_register_input_ref:
 * @self: a #QmiMessagePbmIndicationRegisterInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiMessagePbmIndicationRegisterInput *qmi_message_pbm_indication_register_input_ref (QmiMessagePbmIndicationRegisterInput *self);

/**
 * qmi_message_pbm_indication_register_input_unref:
 * @self: a #QmiMessagePbmIndicationRegisterInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_message_pbm_indication_register_input_unref (QmiMessagePbmIndicationRegisterInput *self);

/**
 * qmi_message_pbm_indication_register_input_new:
 *
 * Allocates a new #QmiMessagePbmIndicationRegisterInput.
 *
 * Returns: the newly created #QmiMessagePbmIndicationRegisterInput. The returned value should be freed with qmi_message_pbm_indication_register_input_unref().
 *
 * Since: 1.6
 */
QmiMessagePbmIndicationRegisterInput *qmi_message_pbm_indication_register_input_new (void);

/* --- Output -- */

/**
 * QmiMessagePbmIndicationRegisterOutput:
 *
 * The #QmiMessagePbmIndicationRegisterOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiMessagePbmIndicationRegisterOutput QmiMessagePbmIndicationRegisterOutput;
GType qmi_message_pbm_indication_register_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PBM_INDICATION_REGISTER_OUTPUT (qmi_message_pbm_indication_register_output_get_type ())

/**
 * qmi_message_pbm_indication_register_output_get_result:
 * @self: a QmiMessagePbmIndicationRegisterOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_indication_register_output_get_result (
    QmiMessagePbmIndicationRegisterOutput *self,
    GError **error);

/**
 * qmi_message_pbm_indication_register_output_get_event_registration_mask:
 * @self: a #QmiMessagePbmIndicationRegisterOutput.
 * @value_event_registration_mask: a placeholder for the output #QmiPbmEventRegistrationFlag, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Event Registration Mask' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_indication_register_output_get_event_registration_mask (
    QmiMessagePbmIndicationRegisterOutput *self,
    QmiPbmEventRegistrationFlag *value_event_registration_mask,
    GError **error);

/**
 * qmi_message_pbm_indication_register_output_ref:
 * @self: a #QmiMessagePbmIndicationRegisterOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiMessagePbmIndicationRegisterOutput *qmi_message_pbm_indication_register_output_ref (QmiMessagePbmIndicationRegisterOutput *self);

/**
 * qmi_message_pbm_indication_register_output_unref:
 * @self: a #QmiMessagePbmIndicationRegisterOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_message_pbm_indication_register_output_unref (QmiMessagePbmIndicationRegisterOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PBM Get Capabilities */


/* --- Input -- */

/**
 * QmiMessagePbmGetCapabilitiesInput:
 *
 * The #QmiMessagePbmGetCapabilitiesInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiMessagePbmGetCapabilitiesInput QmiMessagePbmGetCapabilitiesInput;
GType qmi_message_pbm_get_capabilities_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PBM_GET_CAPABILITIES_INPUT (qmi_message_pbm_get_capabilities_input_get_type ())

/**
 * qmi_message_pbm_get_capabilities_input_get_phonebook_information:
 * @self: a #QmiMessagePbmGetCapabilitiesInput.
 * @value_phonebook_information_session_type: a placeholder for the output #QmiPbmSessionType, or %NULL if not required.
 * @value_phonebook_information_phonebook_type: a placeholder for the output #QmiPbmPhonebookType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Phonebook Information' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_get_capabilities_input_get_phonebook_information (
    QmiMessagePbmGetCapabilitiesInput *self,
    QmiPbmSessionType *value_phonebook_information_session_type,
    QmiPbmPhonebookType *value_phonebook_information_phonebook_type,
    GError **error);

/**
 * qmi_message_pbm_get_capabilities_input_set_phonebook_information:
 * @self: a #QmiMessagePbmGetCapabilitiesInput.
 * @value_phonebook_information_session_type: a #QmiPbmSessionType.
 * @value_phonebook_information_phonebook_type: a #QmiPbmPhonebookType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Phonebook Information' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_get_capabilities_input_set_phonebook_information (
    QmiMessagePbmGetCapabilitiesInput *self,
    QmiPbmSessionType value_phonebook_information_session_type,
    QmiPbmPhonebookType value_phonebook_information_phonebook_type,
    GError **error);

/**
 * qmi_message_pbm_get_capabilities_input_ref:
 * @self: a #QmiMessagePbmGetCapabilitiesInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiMessagePbmGetCapabilitiesInput *qmi_message_pbm_get_capabilities_input_ref (QmiMessagePbmGetCapabilitiesInput *self);

/**
 * qmi_message_pbm_get_capabilities_input_unref:
 * @self: a #QmiMessagePbmGetCapabilitiesInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_message_pbm_get_capabilities_input_unref (QmiMessagePbmGetCapabilitiesInput *self);

/**
 * qmi_message_pbm_get_capabilities_input_new:
 *
 * Allocates a new #QmiMessagePbmGetCapabilitiesInput.
 *
 * Returns: the newly created #QmiMessagePbmGetCapabilitiesInput. The returned value should be freed with qmi_message_pbm_get_capabilities_input_unref().
 *
 * Since: 1.6
 */
QmiMessagePbmGetCapabilitiesInput *qmi_message_pbm_get_capabilities_input_new (void);

/* --- Output -- */

/**
 * QmiMessagePbmGetCapabilitiesOutput:
 *
 * The #QmiMessagePbmGetCapabilitiesOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiMessagePbmGetCapabilitiesOutput QmiMessagePbmGetCapabilitiesOutput;
GType qmi_message_pbm_get_capabilities_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PBM_GET_CAPABILITIES_OUTPUT (qmi_message_pbm_get_capabilities_output_get_type ())

/**
 * qmi_message_pbm_get_capabilities_output_get_result:
 * @self: a QmiMessagePbmGetCapabilitiesOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_get_capabilities_output_get_result (
    QmiMessagePbmGetCapabilitiesOutput *self,
    GError **error);

/**
 * qmi_message_pbm_get_capabilities_output_get_capability_basic_information:
 * @self: a #QmiMessagePbmGetCapabilitiesOutput.
 * @value_capability_basic_information_session_type: a placeholder for the output #QmiPbmSessionType, or %NULL if not required.
 * @value_capability_basic_information_phonebook_type: a placeholder for the output #QmiPbmPhonebookType, or %NULL if not required.
 * @value_capability_basic_information_used_records: a placeholder for the output #guint16, or %NULL if not required.
 * @value_capability_basic_information_maximum_records: a placeholder for the output #guint16, or %NULL if not required.
 * @value_capability_basic_information_maximum_number_length: a placeholder for the output #guint8, or %NULL if not required.
 * @value_capability_basic_information_maximum_name_length: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Capability Basic Information' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_get_capabilities_output_get_capability_basic_information (
    QmiMessagePbmGetCapabilitiesOutput *self,
    QmiPbmSessionType *value_capability_basic_information_session_type,
    QmiPbmPhonebookType *value_capability_basic_information_phonebook_type,
    guint16 *value_capability_basic_information_used_records,
    guint16 *value_capability_basic_information_maximum_records,
    guint8 *value_capability_basic_information_maximum_number_length,
    guint8 *value_capability_basic_information_maximum_name_length,
    GError **error);

/**
 * qmi_message_pbm_get_capabilities_output_get_group_capability:
 * @self: a #QmiMessagePbmGetCapabilitiesOutput.
 * @value_group_capability_maximum_groups: a placeholder for the output #guint8, or %NULL if not required.
 * @value_group_capability_maximum_group_tag_length: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Group Capability' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_get_capabilities_output_get_group_capability (
    QmiMessagePbmGetCapabilitiesOutput *self,
    guint8 *value_group_capability_maximum_groups,
    guint8 *value_group_capability_maximum_group_tag_length,
    GError **error);

/**
 * qmi_message_pbm_get_capabilities_output_get_additional_number_capability:
 * @self: a #QmiMessagePbmGetCapabilitiesOutput.
 * @value_additional_number_capability_maximum_additional_numbers: a placeholder for the output #guint8, or %NULL if not required.
 * @value_additional_number_capability_maximum_additional_number_length: a placeholder for the output #guint8, or %NULL if not required.
 * @value_additional_number_capability_maximum_additional_number_tag_length: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Additional Number Capability' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_get_capabilities_output_get_additional_number_capability (
    QmiMessagePbmGetCapabilitiesOutput *self,
    guint8 *value_additional_number_capability_maximum_additional_numbers,
    guint8 *value_additional_number_capability_maximum_additional_number_length,
    guint8 *value_additional_number_capability_maximum_additional_number_tag_length,
    GError **error);

/**
 * qmi_message_pbm_get_capabilities_output_get_email_capability:
 * @self: a #QmiMessagePbmGetCapabilitiesOutput.
 * @value_email_capability_maximum_emails: a placeholder for the output #guint8, or %NULL if not required.
 * @value_email_capability_maximum_email_address_length: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Email Capability' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_get_capabilities_output_get_email_capability (
    QmiMessagePbmGetCapabilitiesOutput *self,
    guint8 *value_email_capability_maximum_emails,
    guint8 *value_email_capability_maximum_email_address_length,
    GError **error);

/**
 * qmi_message_pbm_get_capabilities_output_get_second_name_capability:
 * @self: a #QmiMessagePbmGetCapabilitiesOutput.
 * @value_second_name_capability_maximum_second_name_length: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Second Name Capability' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_get_capabilities_output_get_second_name_capability (
    QmiMessagePbmGetCapabilitiesOutput *self,
    guint8 *value_second_name_capability_maximum_second_name_length,
    GError **error);

/**
 * qmi_message_pbm_get_capabilities_output_get_hidden_records_capability:
 * @self: a #QmiMessagePbmGetCapabilitiesOutput.
 * @value_hidden_records_capability_supported: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Hidden Records Capability' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_get_capabilities_output_get_hidden_records_capability (
    QmiMessagePbmGetCapabilitiesOutput *self,
    gboolean *value_hidden_records_capability_supported,
    GError **error);

/**
 * qmi_message_pbm_get_capabilities_output_get_grouping_information_alpha_string_capability:
 * @self: a #QmiMessagePbmGetCapabilitiesOutput.
 * @value_grouping_information_alpha_string_capability_maximum_records: a placeholder for the output #guint8, or %NULL if not required.
 * @value_grouping_information_alpha_string_capability_used_records: a placeholder for the output #guint8, or %NULL if not required.
 * @value_grouping_information_alpha_string_capability_maximum_string_length: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Grouping Information Alpha String Capability' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_get_capabilities_output_get_grouping_information_alpha_string_capability (
    QmiMessagePbmGetCapabilitiesOutput *self,
    guint8 *value_grouping_information_alpha_string_capability_maximum_records,
    guint8 *value_grouping_information_alpha_string_capability_used_records,
    guint8 *value_grouping_information_alpha_string_capability_maximum_string_length,
    GError **error);

/**
 * qmi_message_pbm_get_capabilities_output_get_additional_number_alpha_string_capability:
 * @self: a #QmiMessagePbmGetCapabilitiesOutput.
 * @value_additional_number_alpha_string_capability_maximum_records: a placeholder for the output #guint8, or %NULL if not required.
 * @value_additional_number_alpha_string_capability_used_records: a placeholder for the output #guint8, or %NULL if not required.
 * @value_additional_number_alpha_string_capability_maximum_string_length: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Additional Number Alpha String Capability' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_get_capabilities_output_get_additional_number_alpha_string_capability (
    QmiMessagePbmGetCapabilitiesOutput *self,
    guint8 *value_additional_number_alpha_string_capability_maximum_records,
    guint8 *value_additional_number_alpha_string_capability_used_records,
    guint8 *value_additional_number_alpha_string_capability_maximum_string_length,
    GError **error);

/**
 * qmi_message_pbm_get_capabilities_output_ref:
 * @self: a #QmiMessagePbmGetCapabilitiesOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiMessagePbmGetCapabilitiesOutput *qmi_message_pbm_get_capabilities_output_ref (QmiMessagePbmGetCapabilitiesOutput *self);

/**
 * qmi_message_pbm_get_capabilities_output_unref:
 * @self: a #QmiMessagePbmGetCapabilitiesOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_message_pbm_get_capabilities_output_unref (QmiMessagePbmGetCapabilitiesOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PBM Get All Capabilities */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElementPhonebooksElement:
 * @phonebook_type: a #QmiPbmPhonebookType.
 * @used_records: a #guint16.
 * @maximum_records: a #guint16.
 * @maximum_number_length: a #guint8.
 * @maximum_name_length: a #guint8.
 *
 * A QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElementPhonebooksElement struct.
 *
 * Since: 1.6
 */
typedef struct _QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElementPhonebooksElement {
    QmiPbmPhonebookType phonebook_type;
    guint16 used_records;
    guint16 maximum_records;
    guint8 maximum_number_length;
    guint8 maximum_name_length;
} QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElementPhonebooksElement;

/**
 * QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElement:
 * @session_type: a #QmiPbmSessionType.
 * @phonebooks: a #GArray of #QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElementPhonebooksElement elements.
 *
 * A QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElement struct.
 *
 * Since: 1.6
 */
typedef struct _QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElement {
    QmiPbmSessionType session_type;
    GArray *phonebooks;
} QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElement;

/**
 * QmiMessagePbmGetAllCapabilitiesOutputGroupCapabilityElement:
 * @session_type: a #QmiPbmSessionType.
 * @maximum_groups: a #guint8.
 * @maximum_group_tag_length: a #guint8.
 *
 * A QmiMessagePbmGetAllCapabilitiesOutputGroupCapabilityElement struct.
 *
 * Since: 1.6
 */
typedef struct _QmiMessagePbmGetAllCapabilitiesOutputGroupCapabilityElement {
    QmiPbmSessionType session_type;
    guint8 maximum_groups;
    guint8 maximum_group_tag_length;
} QmiMessagePbmGetAllCapabilitiesOutputGroupCapabilityElement;

/**
 * QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberCapabilityElement:
 * @session_type: a #QmiPbmSessionType.
 * @maximum_additional_numbers: a #guint8.
 * @maximum_additional_number_length: a #guint8.
 * @maximum_additional_number_tag_length: a #guint8.
 *
 * A QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberCapabilityElement struct.
 *
 * Since: 1.6
 */
typedef struct _QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberCapabilityElement {
    QmiPbmSessionType session_type;
    guint8 maximum_additional_numbers;
    guint8 maximum_additional_number_length;
    guint8 maximum_additional_number_tag_length;
} QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberCapabilityElement;

/**
 * QmiMessagePbmGetAllCapabilitiesOutputEmailCapabilityElement:
 * @session_type: a #QmiPbmSessionType.
 * @maximum_emails: a #guint8.
 * @maximum_email_address_length: a #guint8.
 *
 * A QmiMessagePbmGetAllCapabilitiesOutputEmailCapabilityElement struct.
 *
 * Since: 1.6
 */
typedef struct _QmiMessagePbmGetAllCapabilitiesOutputEmailCapabilityElement {
    QmiPbmSessionType session_type;
    guint8 maximum_emails;
    guint8 maximum_email_address_length;
} QmiMessagePbmGetAllCapabilitiesOutputEmailCapabilityElement;

/**
 * QmiMessagePbmGetAllCapabilitiesOutputSecondNameCapabilityElement:
 * @session_type: a #QmiPbmSessionType.
 * @maximum_second_name_length: a #guint8.
 *
 * A QmiMessagePbmGetAllCapabilitiesOutputSecondNameCapabilityElement struct.
 *
 * Since: 1.6
 */
typedef struct _QmiMessagePbmGetAllCapabilitiesOutputSecondNameCapabilityElement {
    QmiPbmSessionType session_type;
    guint8 maximum_second_name_length;
} QmiMessagePbmGetAllCapabilitiesOutputSecondNameCapabilityElement;

/**
 * QmiMessagePbmGetAllCapabilitiesOutputHiddenRecordsCapabilityElement:
 * @session_type: a #QmiPbmSessionType.
 * @supported: a #gboolean.
 *
 * A QmiMessagePbmGetAllCapabilitiesOutputHiddenRecordsCapabilityElement struct.
 *
 * Since: 1.6
 */
typedef struct _QmiMessagePbmGetAllCapabilitiesOutputHiddenRecordsCapabilityElement {
    QmiPbmSessionType session_type;
    gboolean supported;
} QmiMessagePbmGetAllCapabilitiesOutputHiddenRecordsCapabilityElement;

/**
 * QmiMessagePbmGetAllCapabilitiesOutputGroupingInformationAlphaStringCapabilityElement:
 * @session_type: a #QmiPbmSessionType.
 * @maximum_records: a #guint8.
 * @used_records: a #guint8.
 * @maximum_string_length: a #guint8.
 *
 * A QmiMessagePbmGetAllCapabilitiesOutputGroupingInformationAlphaStringCapabilityElement struct.
 *
 * Since: 1.6
 */
typedef struct _QmiMessagePbmGetAllCapabilitiesOutputGroupingInformationAlphaStringCapabilityElement {
    QmiPbmSessionType session_type;
    guint8 maximum_records;
    guint8 used_records;
    guint8 maximum_string_length;
} QmiMessagePbmGetAllCapabilitiesOutputGroupingInformationAlphaStringCapabilityElement;

/**
 * QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberAlphaStringCapabilityElement:
 * @session_type: a #QmiPbmSessionType.
 * @maximum_records: a #guint8.
 * @used_records: a #guint8.
 * @maximum_string_length: a #guint8.
 *
 * A QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberAlphaStringCapabilityElement struct.
 *
 * Since: 1.6
 */
typedef struct _QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberAlphaStringCapabilityElement {
    QmiPbmSessionType session_type;
    guint8 maximum_records;
    guint8 used_records;
    guint8 maximum_string_length;
} QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberAlphaStringCapabilityElement;

/**
 * QmiMessagePbmGetAllCapabilitiesOutput:
 *
 * The #QmiMessagePbmGetAllCapabilitiesOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiMessagePbmGetAllCapabilitiesOutput QmiMessagePbmGetAllCapabilitiesOutput;
GType qmi_message_pbm_get_all_capabilities_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PBM_GET_ALL_CAPABILITIES_OUTPUT (qmi_message_pbm_get_all_capabilities_output_get_type ())

/**
 * qmi_message_pbm_get_all_capabilities_output_get_result:
 * @self: a QmiMessagePbmGetAllCapabilitiesOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_get_all_capabilities_output_get_result (
    QmiMessagePbmGetAllCapabilitiesOutput *self,
    GError **error);

/**
 * qmi_message_pbm_get_all_capabilities_output_get_capability_basic_information:
 * @self: a #QmiMessagePbmGetAllCapabilitiesOutput.
 * @value_capability_basic_information: a placeholder for the output #GArray of #QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Capability Basic Information' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_get_all_capabilities_output_get_capability_basic_information (
    QmiMessagePbmGetAllCapabilitiesOutput *self,
    GArray **value_capability_basic_information,
    GError **error);

/**
 * qmi_message_pbm_get_all_capabilities_output_get_group_capability:
 * @self: a #QmiMessagePbmGetAllCapabilitiesOutput.
 * @value_group_capability: a placeholder for the output #GArray of #QmiMessagePbmGetAllCapabilitiesOutputGroupCapabilityElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Group Capability' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_get_all_capabilities_output_get_group_capability (
    QmiMessagePbmGetAllCapabilitiesOutput *self,
    GArray **value_group_capability,
    GError **error);

/**
 * qmi_message_pbm_get_all_capabilities_output_get_additional_number_capability:
 * @self: a #QmiMessagePbmGetAllCapabilitiesOutput.
 * @value_additional_number_capability: a placeholder for the output #GArray of #QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberCapabilityElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Additional Number Capability' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_get_all_capabilities_output_get_additional_number_capability (
    QmiMessagePbmGetAllCapabilitiesOutput *self,
    GArray **value_additional_number_capability,
    GError **error);

/**
 * qmi_message_pbm_get_all_capabilities_output_get_email_capability:
 * @self: a #QmiMessagePbmGetAllCapabilitiesOutput.
 * @value_email_capability: a placeholder for the output #GArray of #QmiMessagePbmGetAllCapabilitiesOutputEmailCapabilityElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Email Capability' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_get_all_capabilities_output_get_email_capability (
    QmiMessagePbmGetAllCapabilitiesOutput *self,
    GArray **value_email_capability,
    GError **error);

/**
 * qmi_message_pbm_get_all_capabilities_output_get_second_name_capability:
 * @self: a #QmiMessagePbmGetAllCapabilitiesOutput.
 * @value_second_name_capability: a placeholder for the output #GArray of #QmiMessagePbmGetAllCapabilitiesOutputSecondNameCapabilityElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Second Name Capability' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_get_all_capabilities_output_get_second_name_capability (
    QmiMessagePbmGetAllCapabilitiesOutput *self,
    GArray **value_second_name_capability,
    GError **error);

/**
 * qmi_message_pbm_get_all_capabilities_output_get_hidden_records_capability:
 * @self: a #QmiMessagePbmGetAllCapabilitiesOutput.
 * @value_hidden_records_capability: a placeholder for the output #GArray of #QmiMessagePbmGetAllCapabilitiesOutputHiddenRecordsCapabilityElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Hidden Records Capability' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_get_all_capabilities_output_get_hidden_records_capability (
    QmiMessagePbmGetAllCapabilitiesOutput *self,
    GArray **value_hidden_records_capability,
    GError **error);

/**
 * qmi_message_pbm_get_all_capabilities_output_get_grouping_information_alpha_string_capability:
 * @self: a #QmiMessagePbmGetAllCapabilitiesOutput.
 * @value_grouping_information_alpha_string_capability: a placeholder for the output #GArray of #QmiMessagePbmGetAllCapabilitiesOutputGroupingInformationAlphaStringCapabilityElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Grouping Information Alpha String Capability' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_get_all_capabilities_output_get_grouping_information_alpha_string_capability (
    QmiMessagePbmGetAllCapabilitiesOutput *self,
    GArray **value_grouping_information_alpha_string_capability,
    GError **error);

/**
 * qmi_message_pbm_get_all_capabilities_output_get_additional_number_alpha_string_capability:
 * @self: a #QmiMessagePbmGetAllCapabilitiesOutput.
 * @value_additional_number_alpha_string_capability: a placeholder for the output #GArray of #QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberAlphaStringCapabilityElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Additional Number Alpha String Capability' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_get_all_capabilities_output_get_additional_number_alpha_string_capability (
    QmiMessagePbmGetAllCapabilitiesOutput *self,
    GArray **value_additional_number_alpha_string_capability,
    GError **error);

/**
 * qmi_message_pbm_get_all_capabilities_output_ref:
 * @self: a #QmiMessagePbmGetAllCapabilitiesOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiMessagePbmGetAllCapabilitiesOutput *qmi_message_pbm_get_all_capabilities_output_ref (QmiMessagePbmGetAllCapabilitiesOutput *self);

/**
 * qmi_message_pbm_get_all_capabilities_output_unref:
 * @self: a #QmiMessagePbmGetAllCapabilitiesOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_message_pbm_get_all_capabilities_output_unref (QmiMessagePbmGetAllCapabilitiesOutput *self);

/*****************************************************************************/
/* Service-specific printable: PBM */


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *__qmi_message_pbm_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix);

#endif


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gboolean __qmi_message_pbm_get_version_introduced (
    QmiMessage *self,
    QmiMessageContext *context,
    guint *major,
    guint *minor);

#endif


/*****************************************************************************/
/* CLIENT: QMI Client PBM */

#define QMI_TYPE_CLIENT_PBM            (qmi_client_pbm_get_type ())
#define QMI_CLIENT_PBM(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), QMI_TYPE_CLIENT_PBM, QmiClientPbm))
#define QMI_CLIENT_PBM_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  QMI_TYPE_CLIENT_PBM, QmiClientPbmClass))
#define QMI_IS_CLIENT_PBM(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), QMI_TYPE_CLIENT_PBM))
#define QMI_IS_CLIENT_PBM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  QMI_TYPE_CLIENT_PBM))
#define QMI_CLIENT_PBM_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  QMI_TYPE_CLIENT_PBM, QmiClientPbmClass))

typedef struct _QmiClientPbm QmiClientPbm;
typedef struct _QmiClientPbmClass QmiClientPbmClass;

/**
 * QmiClientPbm:
 *
 * The #QmiClientPbm structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
struct _QmiClientPbm {
    /*< private >*/
    QmiClient parent;
    gpointer priv_unused;
};

struct _QmiClientPbmClass {
    /*< private >*/
    QmiClientClass parent;
};

GType qmi_client_pbm_get_type (void);


/**
 * qmi_client_pbm_indication_register:
 * @self: a #QmiClientPbm.
 * @input: a #QmiMessagePbmIndicationRegisterInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Indication Register request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_pbm_indication_register_finish() to get the result of the operation.
 *
 * Since: 1.6
 */
void qmi_client_pbm_indication_register (
    QmiClientPbm *self,
    QmiMessagePbmIndicationRegisterInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_pbm_indication_register_finish:
 * @self: a #QmiClientPbm.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_pbm_indication_register().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_pbm_indication_register().
 *
 * Returns: a #QmiMessagePbmIndicationRegisterOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pbm_indication_register_output_unref().
 *
 * Since: 1.6
 */
QmiMessagePbmIndicationRegisterOutput *qmi_client_pbm_indication_register_finish (
    QmiClientPbm *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_pbm_get_capabilities:
 * @self: a #QmiClientPbm.
 * @input: a #QmiMessagePbmGetCapabilitiesInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Capabilities request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_pbm_get_capabilities_finish() to get the result of the operation.
 *
 * Since: 1.6
 */
void qmi_client_pbm_get_capabilities (
    QmiClientPbm *self,
    QmiMessagePbmGetCapabilitiesInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_pbm_get_capabilities_finish:
 * @self: a #QmiClientPbm.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_pbm_get_capabilities().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_pbm_get_capabilities().
 *
 * Returns: a #QmiMessagePbmGetCapabilitiesOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pbm_get_capabilities_output_unref().
 *
 * Since: 1.6
 */
QmiMessagePbmGetCapabilitiesOutput *qmi_client_pbm_get_capabilities_finish (
    QmiClientPbm *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_pbm_get_all_capabilities:
 * @self: a #QmiClientPbm.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get All Capabilities request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_pbm_get_all_capabilities_finish() to get the result of the operation.
 *
 * Since: 1.6
 */
void qmi_client_pbm_get_all_capabilities (
    QmiClientPbm *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_pbm_get_all_capabilities_finish:
 * @self: a #QmiClientPbm.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_pbm_get_all_capabilities().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_pbm_get_all_capabilities().
 *
 * Returns: a #QmiMessagePbmGetAllCapabilitiesOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pbm_get_all_capabilities_output_unref().
 *
 * Since: 1.6
 */
QmiMessagePbmGetAllCapabilitiesOutput *qmi_client_pbm_get_all_capabilities_finish (
    QmiClientPbm *self,
    GAsyncResult *res,
    GError **error);

G_END_DECLS

#endif /* __LIBQMI_GLIB_QMI_PBM__ */
