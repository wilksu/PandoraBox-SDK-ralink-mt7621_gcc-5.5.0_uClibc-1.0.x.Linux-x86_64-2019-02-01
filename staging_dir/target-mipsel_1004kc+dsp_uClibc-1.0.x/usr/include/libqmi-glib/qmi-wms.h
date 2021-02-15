
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
#include "qmi-enums-wms.h"
#include "qmi-message.h"
#include "qmi-client.h"

#ifndef __LIBQMI_GLIB_QMI_WMS__
#define __LIBQMI_GLIB_QMI_WMS__

G_BEGIN_DECLS


/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS Reset */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageWmsResetOutput:
 *
 * The #QmiMessageWmsResetOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsResetOutput QmiMessageWmsResetOutput;
GType qmi_message_wms_reset_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_RESET_OUTPUT (qmi_message_wms_reset_output_get_type ())

/**
 * qmi_message_wms_reset_output_get_result:
 * @self: a QmiMessageWmsResetOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_reset_output_get_result (
    QmiMessageWmsResetOutput *self,
    GError **error);

/**
 * qmi_message_wms_reset_output_ref:
 * @self: a #QmiMessageWmsResetOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWmsResetOutput *qmi_message_wms_reset_output_ref (QmiMessageWmsResetOutput *self);

/**
 * qmi_message_wms_reset_output_unref:
 * @self: a #QmiMessageWmsResetOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wms_reset_output_unref (QmiMessageWmsResetOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS Set Event Report */


/* --- Input -- */

/**
 * QmiMessageWmsSetEventReportInput:
 *
 * The #QmiMessageWmsSetEventReportInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsSetEventReportInput QmiMessageWmsSetEventReportInput;
GType qmi_message_wms_set_event_report_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_SET_EVENT_REPORT_INPUT (qmi_message_wms_set_event_report_input_get_type ())

/**
 * qmi_message_wms_set_event_report_input_get_new_mt_message_indicator:
 * @self: a #QmiMessageWmsSetEventReportInput.
 * @value_new_mt_message_indicator_report: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'New MT Message Indicator' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_set_event_report_input_get_new_mt_message_indicator (
    QmiMessageWmsSetEventReportInput *self,
    gboolean *value_new_mt_message_indicator_report,
    GError **error);

/**
 * qmi_message_wms_set_event_report_input_set_new_mt_message_indicator:
 * @self: a #QmiMessageWmsSetEventReportInput.
 * @value_new_mt_message_indicator_report: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'New MT Message Indicator' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_set_event_report_input_set_new_mt_message_indicator (
    QmiMessageWmsSetEventReportInput *self,
    gboolean value_new_mt_message_indicator_report,
    GError **error);

/**
 * qmi_message_wms_set_event_report_input_ref:
 * @self: a #QmiMessageWmsSetEventReportInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWmsSetEventReportInput *qmi_message_wms_set_event_report_input_ref (QmiMessageWmsSetEventReportInput *self);

/**
 * qmi_message_wms_set_event_report_input_unref:
 * @self: a #QmiMessageWmsSetEventReportInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wms_set_event_report_input_unref (QmiMessageWmsSetEventReportInput *self);

/**
 * qmi_message_wms_set_event_report_input_new:
 *
 * Allocates a new #QmiMessageWmsSetEventReportInput.
 *
 * Returns: the newly created #QmiMessageWmsSetEventReportInput. The returned value should be freed with qmi_message_wms_set_event_report_input_unref().
 *
 * Since: 1.0
 */
QmiMessageWmsSetEventReportInput *qmi_message_wms_set_event_report_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWmsSetEventReportOutput:
 *
 * The #QmiMessageWmsSetEventReportOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsSetEventReportOutput QmiMessageWmsSetEventReportOutput;
GType qmi_message_wms_set_event_report_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_SET_EVENT_REPORT_OUTPUT (qmi_message_wms_set_event_report_output_get_type ())

/**
 * qmi_message_wms_set_event_report_output_get_result:
 * @self: a QmiMessageWmsSetEventReportOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_set_event_report_output_get_result (
    QmiMessageWmsSetEventReportOutput *self,
    GError **error);

/**
 * qmi_message_wms_set_event_report_output_ref:
 * @self: a #QmiMessageWmsSetEventReportOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWmsSetEventReportOutput *qmi_message_wms_set_event_report_output_ref (QmiMessageWmsSetEventReportOutput *self);

/**
 * qmi_message_wms_set_event_report_output_unref:
 * @self: a #QmiMessageWmsSetEventReportOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wms_set_event_report_output_unref (QmiMessageWmsSetEventReportOutput *self);

/*****************************************************************************/
/* INDICATION: Qmi Indication WMS Event Report */


/* --- Output -- */

/**
 * QmiIndicationWmsEventReportOutput:
 *
 * The #QmiIndicationWmsEventReportOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiIndicationWmsEventReportOutput QmiIndicationWmsEventReportOutput;
GType qmi_indication_wms_event_report_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_WMS_EVENT_REPORT_OUTPUT (qmi_indication_wms_event_report_output_get_type ())

/**
 * qmi_indication_wms_event_report_output_get_sms_on_ims:
 * @self: a #QmiIndicationWmsEventReportOutput.
 * @value_sms_on_ims: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'SMS on IMS' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_wms_event_report_output_get_sms_on_ims (
    QmiIndicationWmsEventReportOutput *self,
    gboolean *value_sms_on_ims,
    GError **error);

/**
 * qmi_indication_wms_event_report_output_get_smsc_address:
 * @self: a #QmiIndicationWmsEventReportOutput.
 * @value_smsc_address: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'SMSC Address' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_wms_event_report_output_get_smsc_address (
    QmiIndicationWmsEventReportOutput *self,
    const gchar **value_smsc_address,
    GError **error);

/**
 * qmi_indication_wms_event_report_output_get_etws_plmn_information:
 * @self: a #QmiIndicationWmsEventReportOutput.
 * @value_etws_plmn_information_mcc: a placeholder for the output #guint16, or %NULL if not required.
 * @value_etws_plmn_information_mnc: a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'ETWS PLMN Information' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_wms_event_report_output_get_etws_plmn_information (
    QmiIndicationWmsEventReportOutput *self,
    guint16 *value_etws_plmn_information_mcc,
    guint16 *value_etws_plmn_information_mnc,
    GError **error);

/**
 * qmi_indication_wms_event_report_output_get_etws_message:
 * @self: a #QmiIndicationWmsEventReportOutput.
 * @value_etws_message_notification_type: a placeholder for the output #QmiWmsNotificationType, or %NULL if not required.
 * @value_etws_message_raw_data: a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'ETWS Message' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_wms_event_report_output_get_etws_message (
    QmiIndicationWmsEventReportOutput *self,
    QmiWmsNotificationType *value_etws_message_notification_type,
    GArray **value_etws_message_raw_data,
    GError **error);

/**
 * qmi_indication_wms_event_report_output_get_message_mode:
 * @self: a #QmiIndicationWmsEventReportOutput.
 * @value_message_mode: a placeholder for the output #QmiWmsMessageMode, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Message Mode' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_wms_event_report_output_get_message_mode (
    QmiIndicationWmsEventReportOutput *self,
    QmiWmsMessageMode *value_message_mode,
    GError **error);

/**
 * qmi_indication_wms_event_report_output_get_transfer_route_mt_message:
 * @self: a #QmiIndicationWmsEventReportOutput.
 * @value_transfer_route_mt_message_ack_indicator: a placeholder for the output #QmiWmsAckIndicator, or %NULL if not required.
 * @value_transfer_route_mt_message_transaction_id: a placeholder for the output #guint32, or %NULL if not required.
 * @value_transfer_route_mt_message_format: a placeholder for the output #QmiWmsMessageFormat, or %NULL if not required.
 * @value_transfer_route_mt_message_raw_data: a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Transfer Route MT Message' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_wms_event_report_output_get_transfer_route_mt_message (
    QmiIndicationWmsEventReportOutput *self,
    QmiWmsAckIndicator *value_transfer_route_mt_message_ack_indicator,
    guint32 *value_transfer_route_mt_message_transaction_id,
    QmiWmsMessageFormat *value_transfer_route_mt_message_format,
    GArray **value_transfer_route_mt_message_raw_data,
    GError **error);

/**
 * qmi_indication_wms_event_report_output_get_mt_message:
 * @self: a #QmiIndicationWmsEventReportOutput.
 * @value_mt_message_storage_type: a placeholder for the output #QmiWmsStorageType, or %NULL if not required.
 * @value_mt_message_memory_index: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'MT Message' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_wms_event_report_output_get_mt_message (
    QmiIndicationWmsEventReportOutput *self,
    QmiWmsStorageType *value_mt_message_storage_type,
    guint32 *value_mt_message_memory_index,
    GError **error);

/**
 * qmi_indication_wms_event_report_output_ref:
 * @self: a #QmiIndicationWmsEventReportOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiIndicationWmsEventReportOutput *qmi_indication_wms_event_report_output_ref (QmiIndicationWmsEventReportOutput *self);

/**
 * qmi_indication_wms_event_report_output_unref:
 * @self: a #QmiIndicationWmsEventReportOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_indication_wms_event_report_output_unref (QmiIndicationWmsEventReportOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS Get Supported Messages */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageWmsGetSupportedMessagesOutput:
 *
 * The #QmiMessageWmsGetSupportedMessagesOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageWmsGetSupportedMessagesOutput QmiMessageWmsGetSupportedMessagesOutput;
GType qmi_message_wms_get_supported_messages_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_GET_SUPPORTED_MESSAGES_OUTPUT (qmi_message_wms_get_supported_messages_output_get_type ())

/**
 * qmi_message_wms_get_supported_messages_output_get_result:
 * @self: a QmiMessageWmsGetSupportedMessagesOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.14
 */
gboolean qmi_message_wms_get_supported_messages_output_get_result (
    QmiMessageWmsGetSupportedMessagesOutput *self,
    GError **error);

/**
 * qmi_message_wms_get_supported_messages_output_get_list:
 * @self: a #QmiMessageWmsGetSupportedMessagesOutput.
 * @value_list: a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'List' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_wms_get_supported_messages_output_get_list (
    QmiMessageWmsGetSupportedMessagesOutput *self,
    GArray **value_list,
    GError **error);

/**
 * qmi_message_wms_get_supported_messages_output_ref:
 * @self: a #QmiMessageWmsGetSupportedMessagesOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageWmsGetSupportedMessagesOutput *qmi_message_wms_get_supported_messages_output_ref (QmiMessageWmsGetSupportedMessagesOutput *self);

/**
 * qmi_message_wms_get_supported_messages_output_unref:
 * @self: a #QmiMessageWmsGetSupportedMessagesOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_wms_get_supported_messages_output_unref (QmiMessageWmsGetSupportedMessagesOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS Raw Send */


/* --- Input -- */

/**
 * QmiMessageWmsRawSendInput:
 *
 * The #QmiMessageWmsRawSendInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsRawSendInput QmiMessageWmsRawSendInput;
GType qmi_message_wms_raw_send_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_RAW_SEND_INPUT (qmi_message_wms_raw_send_input_get_type ())

/**
 * qmi_message_wms_raw_send_input_get_sms_on_ims:
 * @self: a #QmiMessageWmsRawSendInput.
 * @value_sms_on_ims: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'SMS on IMS' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_send_input_get_sms_on_ims (
    QmiMessageWmsRawSendInput *self,
    gboolean *value_sms_on_ims,
    GError **error);

/**
 * qmi_message_wms_raw_send_input_set_sms_on_ims:
 * @self: a #QmiMessageWmsRawSendInput.
 * @value_sms_on_ims: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'SMS on IMS' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_send_input_set_sms_on_ims (
    QmiMessageWmsRawSendInput *self,
    gboolean value_sms_on_ims,
    GError **error);

/**
 * qmi_message_wms_raw_send_input_get_gsm_wcdma_link_timer:
 * @self: a #QmiMessageWmsRawSendInput.
 * @value_gsm_wcdma_link_timer: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GSM WCDMA Link Timer' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_send_input_get_gsm_wcdma_link_timer (
    QmiMessageWmsRawSendInput *self,
    guint8 *value_gsm_wcdma_link_timer,
    GError **error);

/**
 * qmi_message_wms_raw_send_input_set_gsm_wcdma_link_timer:
 * @self: a #QmiMessageWmsRawSendInput.
 * @value_gsm_wcdma_link_timer: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'GSM WCDMA Link Timer' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_send_input_set_gsm_wcdma_link_timer (
    QmiMessageWmsRawSendInput *self,
    guint8 value_gsm_wcdma_link_timer,
    GError **error);

/**
 * qmi_message_wms_raw_send_input_get_cdma_follow_on_dc:
 * @self: a #QmiMessageWmsRawSendInput.
 * @value_cdma_follow_on_dc_follow: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA Follow On DC' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_send_input_get_cdma_follow_on_dc (
    QmiMessageWmsRawSendInput *self,
    gboolean *value_cdma_follow_on_dc_follow,
    GError **error);

/**
 * qmi_message_wms_raw_send_input_set_cdma_follow_on_dc:
 * @self: a #QmiMessageWmsRawSendInput.
 * @value_cdma_follow_on_dc_follow: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'CDMA Follow On DC' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_send_input_set_cdma_follow_on_dc (
    QmiMessageWmsRawSendInput *self,
    gboolean value_cdma_follow_on_dc_follow,
    GError **error);

/**
 * qmi_message_wms_raw_send_input_get_cdma_force_on_dc:
 * @self: a #QmiMessageWmsRawSendInput.
 * @value_cdma_force_on_dc_force: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_force_on_dc_service_option: a placeholder for the output #QmiWmsCdmaServiceOption, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA Force On DC' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_send_input_get_cdma_force_on_dc (
    QmiMessageWmsRawSendInput *self,
    gboolean *value_cdma_force_on_dc_force,
    QmiWmsCdmaServiceOption *value_cdma_force_on_dc_service_option,
    GError **error);

/**
 * qmi_message_wms_raw_send_input_set_cdma_force_on_dc:
 * @self: a #QmiMessageWmsRawSendInput.
 * @value_cdma_force_on_dc_force: a #gboolean.
 * @value_cdma_force_on_dc_service_option: a #QmiWmsCdmaServiceOption.
 * @error: Return location for error or %NULL.
 *
 * Set the 'CDMA Force On DC' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_send_input_set_cdma_force_on_dc (
    QmiMessageWmsRawSendInput *self,
    gboolean value_cdma_force_on_dc_force,
    QmiWmsCdmaServiceOption value_cdma_force_on_dc_service_option,
    GError **error);

/**
 * qmi_message_wms_raw_send_input_get_raw_message_data:
 * @self: a #QmiMessageWmsRawSendInput.
 * @value_raw_message_data_format: a placeholder for the output #QmiWmsMessageFormat, or %NULL if not required.
 * @value_raw_message_data_raw_data: a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Raw Message Data' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_send_input_get_raw_message_data (
    QmiMessageWmsRawSendInput *self,
    QmiWmsMessageFormat *value_raw_message_data_format,
    GArray **value_raw_message_data_raw_data,
    GError **error);

/**
 * qmi_message_wms_raw_send_input_set_raw_message_data:
 * @self: a #QmiMessageWmsRawSendInput.
 * @value_raw_message_data_format: a #QmiWmsMessageFormat.
 * @value_raw_message_data_raw_data: a #GArray of #guint8 elements. A new reference to @value_raw_message_data_raw_data will be taken.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Raw Message Data' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_send_input_set_raw_message_data (
    QmiMessageWmsRawSendInput *self,
    QmiWmsMessageFormat value_raw_message_data_format,
    GArray *value_raw_message_data_raw_data,
    GError **error);

/**
 * qmi_message_wms_raw_send_input_ref:
 * @self: a #QmiMessageWmsRawSendInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWmsRawSendInput *qmi_message_wms_raw_send_input_ref (QmiMessageWmsRawSendInput *self);

/**
 * qmi_message_wms_raw_send_input_unref:
 * @self: a #QmiMessageWmsRawSendInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wms_raw_send_input_unref (QmiMessageWmsRawSendInput *self);

/**
 * qmi_message_wms_raw_send_input_new:
 *
 * Allocates a new #QmiMessageWmsRawSendInput.
 *
 * Returns: the newly created #QmiMessageWmsRawSendInput. The returned value should be freed with qmi_message_wms_raw_send_input_unref().
 *
 * Since: 1.0
 */
QmiMessageWmsRawSendInput *qmi_message_wms_raw_send_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWmsRawSendOutput:
 *
 * The #QmiMessageWmsRawSendOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsRawSendOutput QmiMessageWmsRawSendOutput;
GType qmi_message_wms_raw_send_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_RAW_SEND_OUTPUT (qmi_message_wms_raw_send_output_get_type ())

/**
 * qmi_message_wms_raw_send_output_get_result:
 * @self: a QmiMessageWmsRawSendOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_send_output_get_result (
    QmiMessageWmsRawSendOutput *self,
    GError **error);

/**
 * qmi_message_wms_raw_send_output_get_message_id:
 * @self: a #QmiMessageWmsRawSendOutput.
 * @value_message_id: a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Message ID' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_send_output_get_message_id (
    QmiMessageWmsRawSendOutput *self,
    guint16 *value_message_id,
    GError **error);

/**
 * qmi_message_wms_raw_send_output_get_cdma_cause_code:
 * @self: a #QmiMessageWmsRawSendOutput.
 * @value_cdma_cause_code: a placeholder for the output #QmiWmsCdmaCauseCode, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA Cause Code' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_send_output_get_cdma_cause_code (
    QmiMessageWmsRawSendOutput *self,
    QmiWmsCdmaCauseCode *value_cdma_cause_code,
    GError **error);

/**
 * qmi_message_wms_raw_send_output_get_cdma_error_class:
 * @self: a #QmiMessageWmsRawSendOutput.
 * @value_cdma_error_class: a placeholder for the output #QmiWmsCdmaErrorClass, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA Error Class' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_send_output_get_cdma_error_class (
    QmiMessageWmsRawSendOutput *self,
    QmiWmsCdmaErrorClass *value_cdma_error_class,
    GError **error);

/**
 * qmi_message_wms_raw_send_output_get_gsm_wcdma_cause_info:
 * @self: a #QmiMessageWmsRawSendOutput.
 * @value_gsm_wcdma_cause_info_rp_cause: a placeholder for the output #QmiWmsGsmUmtsRpCause, or %NULL if not required.
 * @value_gsm_wcdma_cause_info_tp_cause: a placeholder for the output #QmiWmsGsmUmtsTpCause, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GSM WCDMA Cause Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_send_output_get_gsm_wcdma_cause_info (
    QmiMessageWmsRawSendOutput *self,
    QmiWmsGsmUmtsRpCause *value_gsm_wcdma_cause_info_rp_cause,
    QmiWmsGsmUmtsTpCause *value_gsm_wcdma_cause_info_tp_cause,
    GError **error);

/**
 * qmi_message_wms_raw_send_output_get_message_delivery_failure_type:
 * @self: a #QmiMessageWmsRawSendOutput.
 * @value_message_delivery_failure_type: a placeholder for the output #QmiWmsMessageDeliveryFailureType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Message Delivery Failure Type' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_send_output_get_message_delivery_failure_type (
    QmiMessageWmsRawSendOutput *self,
    QmiWmsMessageDeliveryFailureType *value_message_delivery_failure_type,
    GError **error);

/**
 * qmi_message_wms_raw_send_output_ref:
 * @self: a #QmiMessageWmsRawSendOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWmsRawSendOutput *qmi_message_wms_raw_send_output_ref (QmiMessageWmsRawSendOutput *self);

/**
 * qmi_message_wms_raw_send_output_unref:
 * @self: a #QmiMessageWmsRawSendOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wms_raw_send_output_unref (QmiMessageWmsRawSendOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS Raw Write */


/* --- Input -- */

/**
 * QmiMessageWmsRawWriteInput:
 *
 * The #QmiMessageWmsRawWriteInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsRawWriteInput QmiMessageWmsRawWriteInput;
GType qmi_message_wms_raw_write_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_RAW_WRITE_INPUT (qmi_message_wms_raw_write_input_get_type ())

/**
 * qmi_message_wms_raw_write_input_get_raw_message_data:
 * @self: a #QmiMessageWmsRawWriteInput.
 * @value_raw_message_data_storage_type: a placeholder for the output #QmiWmsStorageType, or %NULL if not required.
 * @value_raw_message_data_format: a placeholder for the output #QmiWmsMessageFormat, or %NULL if not required.
 * @value_raw_message_data_raw_data: a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Raw Message Data' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_write_input_get_raw_message_data (
    QmiMessageWmsRawWriteInput *self,
    QmiWmsStorageType *value_raw_message_data_storage_type,
    QmiWmsMessageFormat *value_raw_message_data_format,
    GArray **value_raw_message_data_raw_data,
    GError **error);

/**
 * qmi_message_wms_raw_write_input_set_raw_message_data:
 * @self: a #QmiMessageWmsRawWriteInput.
 * @value_raw_message_data_storage_type: a #QmiWmsStorageType.
 * @value_raw_message_data_format: a #QmiWmsMessageFormat.
 * @value_raw_message_data_raw_data: a #GArray of #guint8 elements. A new reference to @value_raw_message_data_raw_data will be taken.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Raw Message Data' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_write_input_set_raw_message_data (
    QmiMessageWmsRawWriteInput *self,
    QmiWmsStorageType value_raw_message_data_storage_type,
    QmiWmsMessageFormat value_raw_message_data_format,
    GArray *value_raw_message_data_raw_data,
    GError **error);

/**
 * qmi_message_wms_raw_write_input_ref:
 * @self: a #QmiMessageWmsRawWriteInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWmsRawWriteInput *qmi_message_wms_raw_write_input_ref (QmiMessageWmsRawWriteInput *self);

/**
 * qmi_message_wms_raw_write_input_unref:
 * @self: a #QmiMessageWmsRawWriteInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wms_raw_write_input_unref (QmiMessageWmsRawWriteInput *self);

/**
 * qmi_message_wms_raw_write_input_new:
 *
 * Allocates a new #QmiMessageWmsRawWriteInput.
 *
 * Returns: the newly created #QmiMessageWmsRawWriteInput. The returned value should be freed with qmi_message_wms_raw_write_input_unref().
 *
 * Since: 1.0
 */
QmiMessageWmsRawWriteInput *qmi_message_wms_raw_write_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWmsRawWriteOutput:
 *
 * The #QmiMessageWmsRawWriteOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsRawWriteOutput QmiMessageWmsRawWriteOutput;
GType qmi_message_wms_raw_write_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_RAW_WRITE_OUTPUT (qmi_message_wms_raw_write_output_get_type ())

/**
 * qmi_message_wms_raw_write_output_get_result:
 * @self: a QmiMessageWmsRawWriteOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_write_output_get_result (
    QmiMessageWmsRawWriteOutput *self,
    GError **error);

/**
 * qmi_message_wms_raw_write_output_get_memory_index:
 * @self: a #QmiMessageWmsRawWriteOutput.
 * @value_memory_index: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Memory Index' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_write_output_get_memory_index (
    QmiMessageWmsRawWriteOutput *self,
    guint32 *value_memory_index,
    GError **error);

/**
 * qmi_message_wms_raw_write_output_ref:
 * @self: a #QmiMessageWmsRawWriteOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWmsRawWriteOutput *qmi_message_wms_raw_write_output_ref (QmiMessageWmsRawWriteOutput *self);

/**
 * qmi_message_wms_raw_write_output_unref:
 * @self: a #QmiMessageWmsRawWriteOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wms_raw_write_output_unref (QmiMessageWmsRawWriteOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS Raw Read */


/* --- Input -- */

/**
 * QmiMessageWmsRawReadInput:
 *
 * The #QmiMessageWmsRawReadInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsRawReadInput QmiMessageWmsRawReadInput;
GType qmi_message_wms_raw_read_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_RAW_READ_INPUT (qmi_message_wms_raw_read_input_get_type ())

/**
 * qmi_message_wms_raw_read_input_get_sms_on_ims:
 * @self: a #QmiMessageWmsRawReadInput.
 * @value_sms_on_ims: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'SMS on IMS' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_read_input_get_sms_on_ims (
    QmiMessageWmsRawReadInput *self,
    gboolean *value_sms_on_ims,
    GError **error);

/**
 * qmi_message_wms_raw_read_input_set_sms_on_ims:
 * @self: a #QmiMessageWmsRawReadInput.
 * @value_sms_on_ims: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'SMS on IMS' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_read_input_set_sms_on_ims (
    QmiMessageWmsRawReadInput *self,
    gboolean value_sms_on_ims,
    GError **error);

/**
 * qmi_message_wms_raw_read_input_get_message_mode:
 * @self: a #QmiMessageWmsRawReadInput.
 * @value_message_mode: a placeholder for the output #QmiWmsMessageMode, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Message Mode' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_read_input_get_message_mode (
    QmiMessageWmsRawReadInput *self,
    QmiWmsMessageMode *value_message_mode,
    GError **error);

/**
 * qmi_message_wms_raw_read_input_set_message_mode:
 * @self: a #QmiMessageWmsRawReadInput.
 * @value_message_mode: a #QmiWmsMessageMode.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Message Mode' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_read_input_set_message_mode (
    QmiMessageWmsRawReadInput *self,
    QmiWmsMessageMode value_message_mode,
    GError **error);

/**
 * qmi_message_wms_raw_read_input_get_message_memory_storage_id:
 * @self: a #QmiMessageWmsRawReadInput.
 * @value_message_memory_storage_id_storage_type: a placeholder for the output #QmiWmsStorageType, or %NULL if not required.
 * @value_message_memory_storage_id_memory_index: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Message Memory Storage ID' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_read_input_get_message_memory_storage_id (
    QmiMessageWmsRawReadInput *self,
    QmiWmsStorageType *value_message_memory_storage_id_storage_type,
    guint32 *value_message_memory_storage_id_memory_index,
    GError **error);

/**
 * qmi_message_wms_raw_read_input_set_message_memory_storage_id:
 * @self: a #QmiMessageWmsRawReadInput.
 * @value_message_memory_storage_id_storage_type: a #QmiWmsStorageType.
 * @value_message_memory_storage_id_memory_index: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Message Memory Storage ID' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_read_input_set_message_memory_storage_id (
    QmiMessageWmsRawReadInput *self,
    QmiWmsStorageType value_message_memory_storage_id_storage_type,
    guint32 value_message_memory_storage_id_memory_index,
    GError **error);

/**
 * qmi_message_wms_raw_read_input_ref:
 * @self: a #QmiMessageWmsRawReadInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWmsRawReadInput *qmi_message_wms_raw_read_input_ref (QmiMessageWmsRawReadInput *self);

/**
 * qmi_message_wms_raw_read_input_unref:
 * @self: a #QmiMessageWmsRawReadInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wms_raw_read_input_unref (QmiMessageWmsRawReadInput *self);

/**
 * qmi_message_wms_raw_read_input_new:
 *
 * Allocates a new #QmiMessageWmsRawReadInput.
 *
 * Returns: the newly created #QmiMessageWmsRawReadInput. The returned value should be freed with qmi_message_wms_raw_read_input_unref().
 *
 * Since: 1.0
 */
QmiMessageWmsRawReadInput *qmi_message_wms_raw_read_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWmsRawReadOutput:
 *
 * The #QmiMessageWmsRawReadOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsRawReadOutput QmiMessageWmsRawReadOutput;
GType qmi_message_wms_raw_read_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_RAW_READ_OUTPUT (qmi_message_wms_raw_read_output_get_type ())

/**
 * qmi_message_wms_raw_read_output_get_result:
 * @self: a QmiMessageWmsRawReadOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_read_output_get_result (
    QmiMessageWmsRawReadOutput *self,
    GError **error);

/**
 * qmi_message_wms_raw_read_output_get_raw_message_data:
 * @self: a #QmiMessageWmsRawReadOutput.
 * @value_raw_message_data_message_tag: a placeholder for the output #QmiWmsMessageTagType, or %NULL if not required.
 * @value_raw_message_data_format: a placeholder for the output #QmiWmsMessageFormat, or %NULL if not required.
 * @value_raw_message_data_raw_data: a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Raw Message Data' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_read_output_get_raw_message_data (
    QmiMessageWmsRawReadOutput *self,
    QmiWmsMessageTagType *value_raw_message_data_message_tag,
    QmiWmsMessageFormat *value_raw_message_data_format,
    GArray **value_raw_message_data_raw_data,
    GError **error);

/**
 * qmi_message_wms_raw_read_output_ref:
 * @self: a #QmiMessageWmsRawReadOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWmsRawReadOutput *qmi_message_wms_raw_read_output_ref (QmiMessageWmsRawReadOutput *self);

/**
 * qmi_message_wms_raw_read_output_unref:
 * @self: a #QmiMessageWmsRawReadOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wms_raw_read_output_unref (QmiMessageWmsRawReadOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS Modify Tag */


/* --- Input -- */

/**
 * QmiMessageWmsModifyTagInput:
 *
 * The #QmiMessageWmsModifyTagInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsModifyTagInput QmiMessageWmsModifyTagInput;
GType qmi_message_wms_modify_tag_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_MODIFY_TAG_INPUT (qmi_message_wms_modify_tag_input_get_type ())

/**
 * qmi_message_wms_modify_tag_input_get_message_mode:
 * @self: a #QmiMessageWmsModifyTagInput.
 * @value_message_mode: a placeholder for the output #QmiWmsMessageMode, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Message Mode' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_modify_tag_input_get_message_mode (
    QmiMessageWmsModifyTagInput *self,
    QmiWmsMessageMode *value_message_mode,
    GError **error);

/**
 * qmi_message_wms_modify_tag_input_set_message_mode:
 * @self: a #QmiMessageWmsModifyTagInput.
 * @value_message_mode: a #QmiWmsMessageMode.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Message Mode' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_modify_tag_input_set_message_mode (
    QmiMessageWmsModifyTagInput *self,
    QmiWmsMessageMode value_message_mode,
    GError **error);

/**
 * qmi_message_wms_modify_tag_input_get_message_tag:
 * @self: a #QmiMessageWmsModifyTagInput.
 * @value_message_tag_storage_type: a placeholder for the output #QmiWmsStorageType, or %NULL if not required.
 * @value_message_tag_memory_index: a placeholder for the output #guint32, or %NULL if not required.
 * @value_message_tag_message_tag: a placeholder for the output #QmiWmsMessageTagType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Message Tag' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_modify_tag_input_get_message_tag (
    QmiMessageWmsModifyTagInput *self,
    QmiWmsStorageType *value_message_tag_storage_type,
    guint32 *value_message_tag_memory_index,
    QmiWmsMessageTagType *value_message_tag_message_tag,
    GError **error);

/**
 * qmi_message_wms_modify_tag_input_set_message_tag:
 * @self: a #QmiMessageWmsModifyTagInput.
 * @value_message_tag_storage_type: a #QmiWmsStorageType.
 * @value_message_tag_memory_index: a #guint32.
 * @value_message_tag_message_tag: a #QmiWmsMessageTagType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Message Tag' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_modify_tag_input_set_message_tag (
    QmiMessageWmsModifyTagInput *self,
    QmiWmsStorageType value_message_tag_storage_type,
    guint32 value_message_tag_memory_index,
    QmiWmsMessageTagType value_message_tag_message_tag,
    GError **error);

/**
 * qmi_message_wms_modify_tag_input_ref:
 * @self: a #QmiMessageWmsModifyTagInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWmsModifyTagInput *qmi_message_wms_modify_tag_input_ref (QmiMessageWmsModifyTagInput *self);

/**
 * qmi_message_wms_modify_tag_input_unref:
 * @self: a #QmiMessageWmsModifyTagInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wms_modify_tag_input_unref (QmiMessageWmsModifyTagInput *self);

/**
 * qmi_message_wms_modify_tag_input_new:
 *
 * Allocates a new #QmiMessageWmsModifyTagInput.
 *
 * Returns: the newly created #QmiMessageWmsModifyTagInput. The returned value should be freed with qmi_message_wms_modify_tag_input_unref().
 *
 * Since: 1.0
 */
QmiMessageWmsModifyTagInput *qmi_message_wms_modify_tag_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWmsModifyTagOutput:
 *
 * The #QmiMessageWmsModifyTagOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsModifyTagOutput QmiMessageWmsModifyTagOutput;
GType qmi_message_wms_modify_tag_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_MODIFY_TAG_OUTPUT (qmi_message_wms_modify_tag_output_get_type ())

/**
 * qmi_message_wms_modify_tag_output_get_result:
 * @self: a QmiMessageWmsModifyTagOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_modify_tag_output_get_result (
    QmiMessageWmsModifyTagOutput *self,
    GError **error);

/**
 * qmi_message_wms_modify_tag_output_ref:
 * @self: a #QmiMessageWmsModifyTagOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWmsModifyTagOutput *qmi_message_wms_modify_tag_output_ref (QmiMessageWmsModifyTagOutput *self);

/**
 * qmi_message_wms_modify_tag_output_unref:
 * @self: a #QmiMessageWmsModifyTagOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wms_modify_tag_output_unref (QmiMessageWmsModifyTagOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS Delete */


/* --- Input -- */

/**
 * QmiMessageWmsDeleteInput:
 *
 * The #QmiMessageWmsDeleteInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsDeleteInput QmiMessageWmsDeleteInput;
GType qmi_message_wms_delete_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_DELETE_INPUT (qmi_message_wms_delete_input_get_type ())

/**
 * qmi_message_wms_delete_input_get_message_mode:
 * @self: a #QmiMessageWmsDeleteInput.
 * @value_message_mode: a placeholder for the output #QmiWmsMessageMode, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Message Mode' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_delete_input_get_message_mode (
    QmiMessageWmsDeleteInput *self,
    QmiWmsMessageMode *value_message_mode,
    GError **error);

/**
 * qmi_message_wms_delete_input_set_message_mode:
 * @self: a #QmiMessageWmsDeleteInput.
 * @value_message_mode: a #QmiWmsMessageMode.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Message Mode' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_delete_input_set_message_mode (
    QmiMessageWmsDeleteInput *self,
    QmiWmsMessageMode value_message_mode,
    GError **error);

/**
 * qmi_message_wms_delete_input_get_message_tag:
 * @self: a #QmiMessageWmsDeleteInput.
 * @value_message_tag: a placeholder for the output #QmiWmsMessageTagType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Message Tag' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_delete_input_get_message_tag (
    QmiMessageWmsDeleteInput *self,
    QmiWmsMessageTagType *value_message_tag,
    GError **error);

/**
 * qmi_message_wms_delete_input_set_message_tag:
 * @self: a #QmiMessageWmsDeleteInput.
 * @value_message_tag: a #QmiWmsMessageTagType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Message Tag' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_delete_input_set_message_tag (
    QmiMessageWmsDeleteInput *self,
    QmiWmsMessageTagType value_message_tag,
    GError **error);

/**
 * qmi_message_wms_delete_input_get_memory_index:
 * @self: a #QmiMessageWmsDeleteInput.
 * @value_memory_index: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Memory Index' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_delete_input_get_memory_index (
    QmiMessageWmsDeleteInput *self,
    guint32 *value_memory_index,
    GError **error);

/**
 * qmi_message_wms_delete_input_set_memory_index:
 * @self: a #QmiMessageWmsDeleteInput.
 * @value_memory_index: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Memory Index' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_delete_input_set_memory_index (
    QmiMessageWmsDeleteInput *self,
    guint32 value_memory_index,
    GError **error);

/**
 * qmi_message_wms_delete_input_get_memory_storage:
 * @self: a #QmiMessageWmsDeleteInput.
 * @value_memory_storage: a placeholder for the output #QmiWmsStorageType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Memory Storage' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_delete_input_get_memory_storage (
    QmiMessageWmsDeleteInput *self,
    QmiWmsStorageType *value_memory_storage,
    GError **error);

/**
 * qmi_message_wms_delete_input_set_memory_storage:
 * @self: a #QmiMessageWmsDeleteInput.
 * @value_memory_storage: a #QmiWmsStorageType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Memory Storage' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_delete_input_set_memory_storage (
    QmiMessageWmsDeleteInput *self,
    QmiWmsStorageType value_memory_storage,
    GError **error);

/**
 * qmi_message_wms_delete_input_ref:
 * @self: a #QmiMessageWmsDeleteInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWmsDeleteInput *qmi_message_wms_delete_input_ref (QmiMessageWmsDeleteInput *self);

/**
 * qmi_message_wms_delete_input_unref:
 * @self: a #QmiMessageWmsDeleteInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wms_delete_input_unref (QmiMessageWmsDeleteInput *self);

/**
 * qmi_message_wms_delete_input_new:
 *
 * Allocates a new #QmiMessageWmsDeleteInput.
 *
 * Returns: the newly created #QmiMessageWmsDeleteInput. The returned value should be freed with qmi_message_wms_delete_input_unref().
 *
 * Since: 1.0
 */
QmiMessageWmsDeleteInput *qmi_message_wms_delete_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWmsDeleteOutput:
 *
 * The #QmiMessageWmsDeleteOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsDeleteOutput QmiMessageWmsDeleteOutput;
GType qmi_message_wms_delete_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_DELETE_OUTPUT (qmi_message_wms_delete_output_get_type ())

/**
 * qmi_message_wms_delete_output_get_result:
 * @self: a QmiMessageWmsDeleteOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_delete_output_get_result (
    QmiMessageWmsDeleteOutput *self,
    GError **error);

/**
 * qmi_message_wms_delete_output_ref:
 * @self: a #QmiMessageWmsDeleteOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWmsDeleteOutput *qmi_message_wms_delete_output_ref (QmiMessageWmsDeleteOutput *self);

/**
 * qmi_message_wms_delete_output_unref:
 * @self: a #QmiMessageWmsDeleteOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wms_delete_output_unref (QmiMessageWmsDeleteOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS Get Message Protocol */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageWmsGetMessageProtocolOutput:
 *
 * The #QmiMessageWmsGetMessageProtocolOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsGetMessageProtocolOutput QmiMessageWmsGetMessageProtocolOutput;
GType qmi_message_wms_get_message_protocol_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_GET_MESSAGE_PROTOCOL_OUTPUT (qmi_message_wms_get_message_protocol_output_get_type ())

/**
 * qmi_message_wms_get_message_protocol_output_get_result:
 * @self: a QmiMessageWmsGetMessageProtocolOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_get_message_protocol_output_get_result (
    QmiMessageWmsGetMessageProtocolOutput *self,
    GError **error);

/**
 * qmi_message_wms_get_message_protocol_output_get_message_protocol:
 * @self: a #QmiMessageWmsGetMessageProtocolOutput.
 * @value_message_protocol: a placeholder for the output #QmiWmsMessageProtocol, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Message Protocol' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_get_message_protocol_output_get_message_protocol (
    QmiMessageWmsGetMessageProtocolOutput *self,
    QmiWmsMessageProtocol *value_message_protocol,
    GError **error);

/**
 * qmi_message_wms_get_message_protocol_output_ref:
 * @self: a #QmiMessageWmsGetMessageProtocolOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWmsGetMessageProtocolOutput *qmi_message_wms_get_message_protocol_output_ref (QmiMessageWmsGetMessageProtocolOutput *self);

/**
 * qmi_message_wms_get_message_protocol_output_unref:
 * @self: a #QmiMessageWmsGetMessageProtocolOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wms_get_message_protocol_output_unref (QmiMessageWmsGetMessageProtocolOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS List Messages */


/* --- Input -- */

/**
 * QmiMessageWmsListMessagesInput:
 *
 * The #QmiMessageWmsListMessagesInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsListMessagesInput QmiMessageWmsListMessagesInput;
GType qmi_message_wms_list_messages_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_LIST_MESSAGES_INPUT (qmi_message_wms_list_messages_input_get_type ())

/**
 * qmi_message_wms_list_messages_input_get_message_mode:
 * @self: a #QmiMessageWmsListMessagesInput.
 * @value_message_mode: a placeholder for the output #QmiWmsMessageMode, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Message Mode' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_list_messages_input_get_message_mode (
    QmiMessageWmsListMessagesInput *self,
    QmiWmsMessageMode *value_message_mode,
    GError **error);

/**
 * qmi_message_wms_list_messages_input_set_message_mode:
 * @self: a #QmiMessageWmsListMessagesInput.
 * @value_message_mode: a #QmiWmsMessageMode.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Message Mode' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_list_messages_input_set_message_mode (
    QmiMessageWmsListMessagesInput *self,
    QmiWmsMessageMode value_message_mode,
    GError **error);

/**
 * qmi_message_wms_list_messages_input_get_message_tag:
 * @self: a #QmiMessageWmsListMessagesInput.
 * @value_message_tag: a placeholder for the output #QmiWmsMessageTagType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Message Tag' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_list_messages_input_get_message_tag (
    QmiMessageWmsListMessagesInput *self,
    QmiWmsMessageTagType *value_message_tag,
    GError **error);

/**
 * qmi_message_wms_list_messages_input_set_message_tag:
 * @self: a #QmiMessageWmsListMessagesInput.
 * @value_message_tag: a #QmiWmsMessageTagType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Message Tag' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_list_messages_input_set_message_tag (
    QmiMessageWmsListMessagesInput *self,
    QmiWmsMessageTagType value_message_tag,
    GError **error);

/**
 * qmi_message_wms_list_messages_input_get_storage_type:
 * @self: a #QmiMessageWmsListMessagesInput.
 * @value_storage_type: a placeholder for the output #QmiWmsStorageType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Storage Type' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_list_messages_input_get_storage_type (
    QmiMessageWmsListMessagesInput *self,
    QmiWmsStorageType *value_storage_type,
    GError **error);

/**
 * qmi_message_wms_list_messages_input_set_storage_type:
 * @self: a #QmiMessageWmsListMessagesInput.
 * @value_storage_type: a #QmiWmsStorageType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Storage Type' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_list_messages_input_set_storage_type (
    QmiMessageWmsListMessagesInput *self,
    QmiWmsStorageType value_storage_type,
    GError **error);

/**
 * qmi_message_wms_list_messages_input_ref:
 * @self: a #QmiMessageWmsListMessagesInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWmsListMessagesInput *qmi_message_wms_list_messages_input_ref (QmiMessageWmsListMessagesInput *self);

/**
 * qmi_message_wms_list_messages_input_unref:
 * @self: a #QmiMessageWmsListMessagesInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wms_list_messages_input_unref (QmiMessageWmsListMessagesInput *self);

/**
 * qmi_message_wms_list_messages_input_new:
 *
 * Allocates a new #QmiMessageWmsListMessagesInput.
 *
 * Returns: the newly created #QmiMessageWmsListMessagesInput. The returned value should be freed with qmi_message_wms_list_messages_input_unref().
 *
 * Since: 1.0
 */
QmiMessageWmsListMessagesInput *qmi_message_wms_list_messages_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWmsListMessagesOutputMessageListElement:
 * @memory_index: a #guint32.
 * @message_tag: a #QmiWmsMessageTagType.
 *
 * A QmiMessageWmsListMessagesOutputMessageListElement struct.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsListMessagesOutputMessageListElement {
    guint32 memory_index;
    QmiWmsMessageTagType message_tag;
} QmiMessageWmsListMessagesOutputMessageListElement;

/**
 * QmiMessageWmsListMessagesOutput:
 *
 * The #QmiMessageWmsListMessagesOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsListMessagesOutput QmiMessageWmsListMessagesOutput;
GType qmi_message_wms_list_messages_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_LIST_MESSAGES_OUTPUT (qmi_message_wms_list_messages_output_get_type ())

/**
 * qmi_message_wms_list_messages_output_get_result:
 * @self: a QmiMessageWmsListMessagesOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_list_messages_output_get_result (
    QmiMessageWmsListMessagesOutput *self,
    GError **error);

/**
 * qmi_message_wms_list_messages_output_get_message_list:
 * @self: a #QmiMessageWmsListMessagesOutput.
 * @value_message_list: a placeholder for the output #GArray of #QmiMessageWmsListMessagesOutputMessageListElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Message List' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_list_messages_output_get_message_list (
    QmiMessageWmsListMessagesOutput *self,
    GArray **value_message_list,
    GError **error);

/**
 * qmi_message_wms_list_messages_output_ref:
 * @self: a #QmiMessageWmsListMessagesOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWmsListMessagesOutput *qmi_message_wms_list_messages_output_ref (QmiMessageWmsListMessagesOutput *self);

/**
 * qmi_message_wms_list_messages_output_unref:
 * @self: a #QmiMessageWmsListMessagesOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wms_list_messages_output_unref (QmiMessageWmsListMessagesOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS Set Routes */


/* --- Input -- */

/**
 * QmiMessageWmsSetRoutesInputRouteListElement:
 * @message_type: a #QmiWmsMessageType.
 * @message_class: a #QmiWmsMessageClass.
 * @storage: a #QmiWmsStorageType.
 * @receipt_action: a #QmiWmsReceiptAction.
 *
 * A QmiMessageWmsSetRoutesInputRouteListElement struct.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsSetRoutesInputRouteListElement {
    QmiWmsMessageType message_type;
    QmiWmsMessageClass message_class;
    QmiWmsStorageType storage;
    QmiWmsReceiptAction receipt_action;
} QmiMessageWmsSetRoutesInputRouteListElement;

/**
 * QmiMessageWmsSetRoutesInput:
 *
 * The #QmiMessageWmsSetRoutesInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsSetRoutesInput QmiMessageWmsSetRoutesInput;
GType qmi_message_wms_set_routes_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_SET_ROUTES_INPUT (qmi_message_wms_set_routes_input_get_type ())

/**
 * qmi_message_wms_set_routes_input_get_transfer_status_report:
 * @self: a #QmiMessageWmsSetRoutesInput.
 * @value_transfer_status_report: a placeholder for the output #QmiWmsTransferIndication, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Transfer Status Report' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_set_routes_input_get_transfer_status_report (
    QmiMessageWmsSetRoutesInput *self,
    QmiWmsTransferIndication *value_transfer_status_report,
    GError **error);

/**
 * qmi_message_wms_set_routes_input_set_transfer_status_report:
 * @self: a #QmiMessageWmsSetRoutesInput.
 * @value_transfer_status_report: a #QmiWmsTransferIndication.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Transfer Status Report' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_set_routes_input_set_transfer_status_report (
    QmiMessageWmsSetRoutesInput *self,
    QmiWmsTransferIndication value_transfer_status_report,
    GError **error);

/**
 * qmi_message_wms_set_routes_input_get_route_list:
 * @self: a #QmiMessageWmsSetRoutesInput.
 * @value_route_list: a placeholder for the output #GArray of #QmiMessageWmsSetRoutesInputRouteListElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Route List' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_set_routes_input_get_route_list (
    QmiMessageWmsSetRoutesInput *self,
    GArray **value_route_list,
    GError **error);

/**
 * qmi_message_wms_set_routes_input_set_route_list:
 * @self: a #QmiMessageWmsSetRoutesInput.
 * @value_route_list: a #GArray of #QmiMessageWmsSetRoutesInputRouteListElement elements. A new reference to @value_route_list will be taken.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Route List' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_set_routes_input_set_route_list (
    QmiMessageWmsSetRoutesInput *self,
    GArray *value_route_list,
    GError **error);

/**
 * qmi_message_wms_set_routes_input_ref:
 * @self: a #QmiMessageWmsSetRoutesInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWmsSetRoutesInput *qmi_message_wms_set_routes_input_ref (QmiMessageWmsSetRoutesInput *self);

/**
 * qmi_message_wms_set_routes_input_unref:
 * @self: a #QmiMessageWmsSetRoutesInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wms_set_routes_input_unref (QmiMessageWmsSetRoutesInput *self);

/**
 * qmi_message_wms_set_routes_input_new:
 *
 * Allocates a new #QmiMessageWmsSetRoutesInput.
 *
 * Returns: the newly created #QmiMessageWmsSetRoutesInput. The returned value should be freed with qmi_message_wms_set_routes_input_unref().
 *
 * Since: 1.0
 */
QmiMessageWmsSetRoutesInput *qmi_message_wms_set_routes_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWmsSetRoutesOutput:
 *
 * The #QmiMessageWmsSetRoutesOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsSetRoutesOutput QmiMessageWmsSetRoutesOutput;
GType qmi_message_wms_set_routes_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_SET_ROUTES_OUTPUT (qmi_message_wms_set_routes_output_get_type ())

/**
 * qmi_message_wms_set_routes_output_get_result:
 * @self: a QmiMessageWmsSetRoutesOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_set_routes_output_get_result (
    QmiMessageWmsSetRoutesOutput *self,
    GError **error);

/**
 * qmi_message_wms_set_routes_output_ref:
 * @self: a #QmiMessageWmsSetRoutesOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWmsSetRoutesOutput *qmi_message_wms_set_routes_output_ref (QmiMessageWmsSetRoutesOutput *self);

/**
 * qmi_message_wms_set_routes_output_unref:
 * @self: a #QmiMessageWmsSetRoutesOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wms_set_routes_output_unref (QmiMessageWmsSetRoutesOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS Get Routes */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageWmsGetRoutesOutputRouteListElement:
 * @message_type: a #QmiWmsMessageType.
 * @message_class: a #QmiWmsMessageClass.
 * @storage: a #QmiWmsStorageType.
 * @receipt_action: a #QmiWmsReceiptAction.
 *
 * A QmiMessageWmsGetRoutesOutputRouteListElement struct.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsGetRoutesOutputRouteListElement {
    QmiWmsMessageType message_type;
    QmiWmsMessageClass message_class;
    QmiWmsStorageType storage;
    QmiWmsReceiptAction receipt_action;
} QmiMessageWmsGetRoutesOutputRouteListElement;

/**
 * QmiMessageWmsGetRoutesOutput:
 *
 * The #QmiMessageWmsGetRoutesOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsGetRoutesOutput QmiMessageWmsGetRoutesOutput;
GType qmi_message_wms_get_routes_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_GET_ROUTES_OUTPUT (qmi_message_wms_get_routes_output_get_type ())

/**
 * qmi_message_wms_get_routes_output_get_result:
 * @self: a QmiMessageWmsGetRoutesOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_get_routes_output_get_result (
    QmiMessageWmsGetRoutesOutput *self,
    GError **error);

/**
 * qmi_message_wms_get_routes_output_get_route_list:
 * @self: a #QmiMessageWmsGetRoutesOutput.
 * @value_route_list: a placeholder for the output #GArray of #QmiMessageWmsGetRoutesOutputRouteListElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Route List' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_get_routes_output_get_route_list (
    QmiMessageWmsGetRoutesOutput *self,
    GArray **value_route_list,
    GError **error);

/**
 * qmi_message_wms_get_routes_output_get_transfer_status_report:
 * @self: a #QmiMessageWmsGetRoutesOutput.
 * @value_transfer_status_report: a placeholder for the output #QmiWmsTransferIndication, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Transfer Status Report' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_get_routes_output_get_transfer_status_report (
    QmiMessageWmsGetRoutesOutput *self,
    QmiWmsTransferIndication *value_transfer_status_report,
    GError **error);

/**
 * qmi_message_wms_get_routes_output_ref:
 * @self: a #QmiMessageWmsGetRoutesOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWmsGetRoutesOutput *qmi_message_wms_get_routes_output_ref (QmiMessageWmsGetRoutesOutput *self);

/**
 * qmi_message_wms_get_routes_output_unref:
 * @self: a #QmiMessageWmsGetRoutesOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wms_get_routes_output_unref (QmiMessageWmsGetRoutesOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS Send From Memory Storage */


/* --- Input -- */

/**
 * QmiMessageWmsSendFromMemoryStorageInput:
 *
 * The #QmiMessageWmsSendFromMemoryStorageInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsSendFromMemoryStorageInput QmiMessageWmsSendFromMemoryStorageInput;
GType qmi_message_wms_send_from_memory_storage_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_SEND_FROM_MEMORY_STORAGE_INPUT (qmi_message_wms_send_from_memory_storage_input_get_type ())

/**
 * qmi_message_wms_send_from_memory_storage_input_get_sms_on_ims:
 * @self: a #QmiMessageWmsSendFromMemoryStorageInput.
 * @value_sms_on_ims: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'SMS on IMS' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_send_from_memory_storage_input_get_sms_on_ims (
    QmiMessageWmsSendFromMemoryStorageInput *self,
    gboolean *value_sms_on_ims,
    GError **error);

/**
 * qmi_message_wms_send_from_memory_storage_input_set_sms_on_ims:
 * @self: a #QmiMessageWmsSendFromMemoryStorageInput.
 * @value_sms_on_ims: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'SMS on IMS' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_send_from_memory_storage_input_set_sms_on_ims (
    QmiMessageWmsSendFromMemoryStorageInput *self,
    gboolean value_sms_on_ims,
    GError **error);

/**
 * qmi_message_wms_send_from_memory_storage_input_get_information:
 * @self: a #QmiMessageWmsSendFromMemoryStorageInput.
 * @value_information_storage_type: a placeholder for the output #QmiWmsStorageType, or %NULL if not required.
 * @value_information_memory_index: a placeholder for the output #guint32, or %NULL if not required.
 * @value_information_message_mode: a placeholder for the output #QmiWmsMessageMode, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Information' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_send_from_memory_storage_input_get_information (
    QmiMessageWmsSendFromMemoryStorageInput *self,
    QmiWmsStorageType *value_information_storage_type,
    guint32 *value_information_memory_index,
    QmiWmsMessageMode *value_information_message_mode,
    GError **error);

/**
 * qmi_message_wms_send_from_memory_storage_input_set_information:
 * @self: a #QmiMessageWmsSendFromMemoryStorageInput.
 * @value_information_storage_type: a #QmiWmsStorageType.
 * @value_information_memory_index: a #guint32.
 * @value_information_message_mode: a #QmiWmsMessageMode.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Information' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_send_from_memory_storage_input_set_information (
    QmiMessageWmsSendFromMemoryStorageInput *self,
    QmiWmsStorageType value_information_storage_type,
    guint32 value_information_memory_index,
    QmiWmsMessageMode value_information_message_mode,
    GError **error);

/**
 * qmi_message_wms_send_from_memory_storage_input_ref:
 * @self: a #QmiMessageWmsSendFromMemoryStorageInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWmsSendFromMemoryStorageInput *qmi_message_wms_send_from_memory_storage_input_ref (QmiMessageWmsSendFromMemoryStorageInput *self);

/**
 * qmi_message_wms_send_from_memory_storage_input_unref:
 * @self: a #QmiMessageWmsSendFromMemoryStorageInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wms_send_from_memory_storage_input_unref (QmiMessageWmsSendFromMemoryStorageInput *self);

/**
 * qmi_message_wms_send_from_memory_storage_input_new:
 *
 * Allocates a new #QmiMessageWmsSendFromMemoryStorageInput.
 *
 * Returns: the newly created #QmiMessageWmsSendFromMemoryStorageInput. The returned value should be freed with qmi_message_wms_send_from_memory_storage_input_unref().
 *
 * Since: 1.0
 */
QmiMessageWmsSendFromMemoryStorageInput *qmi_message_wms_send_from_memory_storage_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWmsSendFromMemoryStorageOutput:
 *
 * The #QmiMessageWmsSendFromMemoryStorageOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsSendFromMemoryStorageOutput QmiMessageWmsSendFromMemoryStorageOutput;
GType qmi_message_wms_send_from_memory_storage_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_SEND_FROM_MEMORY_STORAGE_OUTPUT (qmi_message_wms_send_from_memory_storage_output_get_type ())

/**
 * qmi_message_wms_send_from_memory_storage_output_get_result:
 * @self: a QmiMessageWmsSendFromMemoryStorageOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_send_from_memory_storage_output_get_result (
    QmiMessageWmsSendFromMemoryStorageOutput *self,
    GError **error);

/**
 * qmi_message_wms_send_from_memory_storage_output_get_message_id:
 * @self: a #QmiMessageWmsSendFromMemoryStorageOutput.
 * @value_message_id: a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Message ID' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_send_from_memory_storage_output_get_message_id (
    QmiMessageWmsSendFromMemoryStorageOutput *self,
    guint16 *value_message_id,
    GError **error);

/**
 * qmi_message_wms_send_from_memory_storage_output_get_cdma_cause_code:
 * @self: a #QmiMessageWmsSendFromMemoryStorageOutput.
 * @value_cdma_cause_code: a placeholder for the output #QmiWmsCdmaCauseCode, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA Cause Code' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_send_from_memory_storage_output_get_cdma_cause_code (
    QmiMessageWmsSendFromMemoryStorageOutput *self,
    QmiWmsCdmaCauseCode *value_cdma_cause_code,
    GError **error);

/**
 * qmi_message_wms_send_from_memory_storage_output_get_cdma_error_class:
 * @self: a #QmiMessageWmsSendFromMemoryStorageOutput.
 * @value_cdma_error_class: a placeholder for the output #QmiWmsCdmaErrorClass, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA Error Class' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_send_from_memory_storage_output_get_cdma_error_class (
    QmiMessageWmsSendFromMemoryStorageOutput *self,
    QmiWmsCdmaErrorClass *value_cdma_error_class,
    GError **error);

/**
 * qmi_message_wms_send_from_memory_storage_output_get_gsm_wcdma_cause_info:
 * @self: a #QmiMessageWmsSendFromMemoryStorageOutput.
 * @value_gsm_wcdma_cause_info_rp_cause: a placeholder for the output #QmiWmsGsmUmtsRpCause, or %NULL if not required.
 * @value_gsm_wcdma_cause_info_tp_cause: a placeholder for the output #QmiWmsGsmUmtsTpCause, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GSM WCDMA Cause Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_send_from_memory_storage_output_get_gsm_wcdma_cause_info (
    QmiMessageWmsSendFromMemoryStorageOutput *self,
    QmiWmsGsmUmtsRpCause *value_gsm_wcdma_cause_info_rp_cause,
    QmiWmsGsmUmtsTpCause *value_gsm_wcdma_cause_info_tp_cause,
    GError **error);

/**
 * qmi_message_wms_send_from_memory_storage_output_get_message_delivery_failure_type:
 * @self: a #QmiMessageWmsSendFromMemoryStorageOutput.
 * @value_message_delivery_failure_type: a placeholder for the output #QmiWmsMessageDeliveryFailureType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Message Delivery Failure Type' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_send_from_memory_storage_output_get_message_delivery_failure_type (
    QmiMessageWmsSendFromMemoryStorageOutput *self,
    QmiWmsMessageDeliveryFailureType *value_message_delivery_failure_type,
    GError **error);

/**
 * qmi_message_wms_send_from_memory_storage_output_ref:
 * @self: a #QmiMessageWmsSendFromMemoryStorageOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWmsSendFromMemoryStorageOutput *qmi_message_wms_send_from_memory_storage_output_ref (QmiMessageWmsSendFromMemoryStorageOutput *self);

/**
 * qmi_message_wms_send_from_memory_storage_output_unref:
 * @self: a #QmiMessageWmsSendFromMemoryStorageOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wms_send_from_memory_storage_output_unref (QmiMessageWmsSendFromMemoryStorageOutput *self);

/*****************************************************************************/
/* INDICATION: Qmi Indication WMS SMSC Address */


/* --- Output -- */

/**
 * QmiIndicationWmsSmscAddressOutput:
 *
 * The #QmiIndicationWmsSmscAddressOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiIndicationWmsSmscAddressOutput QmiIndicationWmsSmscAddressOutput;
GType qmi_indication_wms_smsc_address_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_WMS_SMSC_ADDRESS_OUTPUT (qmi_indication_wms_smsc_address_output_get_type ())

/**
 * qmi_indication_wms_smsc_address_output_get_address:
 * @self: a #QmiIndicationWmsSmscAddressOutput.
 * @value_address_type: a placeholder for the output constant string, or %NULL if not required.
 * @value_address_digits: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Address' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_indication_wms_smsc_address_output_get_address (
    QmiIndicationWmsSmscAddressOutput *self,
    const gchar **value_address_type,
    const gchar **value_address_digits,
    GError **error);

/**
 * qmi_indication_wms_smsc_address_output_ref:
 * @self: a #QmiIndicationWmsSmscAddressOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiIndicationWmsSmscAddressOutput *qmi_indication_wms_smsc_address_output_ref (QmiIndicationWmsSmscAddressOutput *self);

/**
 * qmi_indication_wms_smsc_address_output_unref:
 * @self: a #QmiIndicationWmsSmscAddressOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_indication_wms_smsc_address_output_unref (QmiIndicationWmsSmscAddressOutput *self);

/*****************************************************************************/
/* Service-specific printable: WMS */


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *__qmi_message_wms_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix);

#endif


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gboolean __qmi_message_wms_get_version_introduced (
    QmiMessage *self,
    QmiMessageContext *context,
    guint *major,
    guint *minor);

#endif


/*****************************************************************************/
/* CLIENT: QMI Client WMS */

#define QMI_TYPE_CLIENT_WMS            (qmi_client_wms_get_type ())
#define QMI_CLIENT_WMS(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), QMI_TYPE_CLIENT_WMS, QmiClientWms))
#define QMI_CLIENT_WMS_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  QMI_TYPE_CLIENT_WMS, QmiClientWmsClass))
#define QMI_IS_CLIENT_WMS(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), QMI_TYPE_CLIENT_WMS))
#define QMI_IS_CLIENT_WMS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  QMI_TYPE_CLIENT_WMS))
#define QMI_CLIENT_WMS_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  QMI_TYPE_CLIENT_WMS, QmiClientWmsClass))

typedef struct _QmiClientWms QmiClientWms;
typedef struct _QmiClientWmsClass QmiClientWmsClass;

/**
 * QmiClientWms:
 *
 * The #QmiClientWms structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
struct _QmiClientWms {
    /*< private >*/
    QmiClient parent;
    gpointer priv_unused;
};

struct _QmiClientWmsClass {
    /*< private >*/
    QmiClientClass parent;
};

GType qmi_client_wms_get_type (void);


/**
 * qmi_client_wms_reset:
 * @self: a #QmiClientWms.
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
 * You can then call qmi_client_wms_reset_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_wms_reset (
    QmiClientWms *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wms_reset_finish:
 * @self: a #QmiClientWms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wms_reset().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wms_reset().
 *
 * Returns: a #QmiMessageWmsResetOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wms_reset_output_unref().
 *
 * Since: 1.0
 */
QmiMessageWmsResetOutput *qmi_client_wms_reset_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wms_set_event_report:
 * @self: a #QmiClientWms.
 * @input: a #QmiMessageWmsSetEventReportInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set Event Report request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wms_set_event_report_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_wms_set_event_report (
    QmiClientWms *self,
    QmiMessageWmsSetEventReportInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wms_set_event_report_finish:
 * @self: a #QmiClientWms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wms_set_event_report().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wms_set_event_report().
 *
 * Returns: a #QmiMessageWmsSetEventReportOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wms_set_event_report_output_unref().
 *
 * Since: 1.0
 */
QmiMessageWmsSetEventReportOutput *qmi_client_wms_set_event_report_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wms_get_supported_messages:
 * @self: a #QmiClientWms.
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
 * You can then call qmi_client_wms_get_supported_messages_finish() to get the result of the operation.
 *
 * Since: 1.14
 */
void qmi_client_wms_get_supported_messages (
    QmiClientWms *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wms_get_supported_messages_finish:
 * @self: a #QmiClientWms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wms_get_supported_messages().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wms_get_supported_messages().
 *
 * Returns: a #QmiMessageWmsGetSupportedMessagesOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wms_get_supported_messages_output_unref().
 *
 * Since: 1.14
 */
QmiMessageWmsGetSupportedMessagesOutput *qmi_client_wms_get_supported_messages_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wms_raw_send:
 * @self: a #QmiClientWms.
 * @input: a #QmiMessageWmsRawSendInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Raw Send request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wms_raw_send_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_wms_raw_send (
    QmiClientWms *self,
    QmiMessageWmsRawSendInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wms_raw_send_finish:
 * @self: a #QmiClientWms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wms_raw_send().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wms_raw_send().
 *
 * Returns: a #QmiMessageWmsRawSendOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wms_raw_send_output_unref().
 *
 * Since: 1.0
 */
QmiMessageWmsRawSendOutput *qmi_client_wms_raw_send_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wms_raw_write:
 * @self: a #QmiClientWms.
 * @input: a #QmiMessageWmsRawWriteInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Raw Write request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wms_raw_write_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_wms_raw_write (
    QmiClientWms *self,
    QmiMessageWmsRawWriteInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wms_raw_write_finish:
 * @self: a #QmiClientWms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wms_raw_write().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wms_raw_write().
 *
 * Returns: a #QmiMessageWmsRawWriteOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wms_raw_write_output_unref().
 *
 * Since: 1.0
 */
QmiMessageWmsRawWriteOutput *qmi_client_wms_raw_write_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wms_raw_read:
 * @self: a #QmiClientWms.
 * @input: a #QmiMessageWmsRawReadInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Raw Read request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wms_raw_read_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_wms_raw_read (
    QmiClientWms *self,
    QmiMessageWmsRawReadInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wms_raw_read_finish:
 * @self: a #QmiClientWms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wms_raw_read().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wms_raw_read().
 *
 * Returns: a #QmiMessageWmsRawReadOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wms_raw_read_output_unref().
 *
 * Since: 1.0
 */
QmiMessageWmsRawReadOutput *qmi_client_wms_raw_read_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wms_modify_tag:
 * @self: a #QmiClientWms.
 * @input: a #QmiMessageWmsModifyTagInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Modify Tag request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wms_modify_tag_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_wms_modify_tag (
    QmiClientWms *self,
    QmiMessageWmsModifyTagInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wms_modify_tag_finish:
 * @self: a #QmiClientWms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wms_modify_tag().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wms_modify_tag().
 *
 * Returns: a #QmiMessageWmsModifyTagOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wms_modify_tag_output_unref().
 *
 * Since: 1.0
 */
QmiMessageWmsModifyTagOutput *qmi_client_wms_modify_tag_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wms_delete:
 * @self: a #QmiClientWms.
 * @input: a #QmiMessageWmsDeleteInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Delete request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wms_delete_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_wms_delete (
    QmiClientWms *self,
    QmiMessageWmsDeleteInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wms_delete_finish:
 * @self: a #QmiClientWms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wms_delete().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wms_delete().
 *
 * Returns: a #QmiMessageWmsDeleteOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wms_delete_output_unref().
 *
 * Since: 1.0
 */
QmiMessageWmsDeleteOutput *qmi_client_wms_delete_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wms_get_message_protocol:
 * @self: a #QmiClientWms.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Message Protocol request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wms_get_message_protocol_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_wms_get_message_protocol (
    QmiClientWms *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wms_get_message_protocol_finish:
 * @self: a #QmiClientWms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wms_get_message_protocol().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wms_get_message_protocol().
 *
 * Returns: a #QmiMessageWmsGetMessageProtocolOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wms_get_message_protocol_output_unref().
 *
 * Since: 1.0
 */
QmiMessageWmsGetMessageProtocolOutput *qmi_client_wms_get_message_protocol_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wms_list_messages:
 * @self: a #QmiClientWms.
 * @input: a #QmiMessageWmsListMessagesInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a List Messages request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wms_list_messages_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_wms_list_messages (
    QmiClientWms *self,
    QmiMessageWmsListMessagesInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wms_list_messages_finish:
 * @self: a #QmiClientWms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wms_list_messages().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wms_list_messages().
 *
 * Returns: a #QmiMessageWmsListMessagesOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wms_list_messages_output_unref().
 *
 * Since: 1.0
 */
QmiMessageWmsListMessagesOutput *qmi_client_wms_list_messages_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wms_set_routes:
 * @self: a #QmiClientWms.
 * @input: a #QmiMessageWmsSetRoutesInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set Routes request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wms_set_routes_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_wms_set_routes (
    QmiClientWms *self,
    QmiMessageWmsSetRoutesInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wms_set_routes_finish:
 * @self: a #QmiClientWms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wms_set_routes().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wms_set_routes().
 *
 * Returns: a #QmiMessageWmsSetRoutesOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wms_set_routes_output_unref().
 *
 * Since: 1.0
 */
QmiMessageWmsSetRoutesOutput *qmi_client_wms_set_routes_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wms_get_routes:
 * @self: a #QmiClientWms.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Routes request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wms_get_routes_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_wms_get_routes (
    QmiClientWms *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wms_get_routes_finish:
 * @self: a #QmiClientWms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wms_get_routes().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wms_get_routes().
 *
 * Returns: a #QmiMessageWmsGetRoutesOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wms_get_routes_output_unref().
 *
 * Since: 1.0
 */
QmiMessageWmsGetRoutesOutput *qmi_client_wms_get_routes_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wms_send_from_memory_storage:
 * @self: a #QmiClientWms.
 * @input: a #QmiMessageWmsSendFromMemoryStorageInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Send From Memory Storage request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wms_send_from_memory_storage_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_wms_send_from_memory_storage (
    QmiClientWms *self,
    QmiMessageWmsSendFromMemoryStorageInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wms_send_from_memory_storage_finish:
 * @self: a #QmiClientWms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wms_send_from_memory_storage().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wms_send_from_memory_storage().
 *
 * Returns: a #QmiMessageWmsSendFromMemoryStorageOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wms_send_from_memory_storage_output_unref().
 *
 * Since: 1.0
 */
QmiMessageWmsSendFromMemoryStorageOutput *qmi_client_wms_send_from_memory_storage_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error);

G_END_DECLS

#endif /* __LIBQMI_GLIB_QMI_WMS__ */
