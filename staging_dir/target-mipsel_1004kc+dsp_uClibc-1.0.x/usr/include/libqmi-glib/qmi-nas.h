
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
#include "qmi-enums-nas.h"
#include "qmi-flags64-nas.h"
#include "qmi-message.h"
#include "qmi-client.h"

#ifndef __LIBQMI_GLIB_QMI_NAS__
#define __LIBQMI_GLIB_QMI_NAS__

G_BEGIN_DECLS


/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Reset */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageNasResetOutput:
 *
 * The #QmiMessageNasResetOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasResetOutput QmiMessageNasResetOutput;
GType qmi_message_nas_reset_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_RESET_OUTPUT (qmi_message_nas_reset_output_get_type ())

/**
 * qmi_message_nas_reset_output_get_result:
 * @self: a QmiMessageNasResetOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_reset_output_get_result (
    QmiMessageNasResetOutput *self,
    GError **error);

/**
 * qmi_message_nas_reset_output_ref:
 * @self: a #QmiMessageNasResetOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasResetOutput *qmi_message_nas_reset_output_ref (QmiMessageNasResetOutput *self);

/**
 * qmi_message_nas_reset_output_unref:
 * @self: a #QmiMessageNasResetOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_reset_output_unref (QmiMessageNasResetOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Abort */


/* --- Input -- */

/* --- Output -- */

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Set Event Report */


/* --- Input -- */

/**
 * QmiMessageNasSetEventReportInput:
 *
 * The #QmiMessageNasSetEventReportInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasSetEventReportInput QmiMessageNasSetEventReportInput;
GType qmi_message_nas_set_event_report_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_SET_EVENT_REPORT_INPUT (qmi_message_nas_set_event_report_input_get_type ())

/**
 * qmi_message_nas_set_event_report_input_get_lte_rsrp_delta:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_lte_rsrp_delta_report: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_rsrp_delta_rsrp_delta: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE RSRP Delta' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_get_lte_rsrp_delta (
    QmiMessageNasSetEventReportInput *self,
    gboolean *value_lte_rsrp_delta_report,
    guint8 *value_lte_rsrp_delta_rsrp_delta,
    GError **error);

/**
 * qmi_message_nas_set_event_report_input_set_lte_rsrp_delta:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_lte_rsrp_delta_report: a #gboolean.
 * @value_lte_rsrp_delta_rsrp_delta: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'LTE RSRP Delta' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_set_lte_rsrp_delta (
    QmiMessageNasSetEventReportInput *self,
    gboolean value_lte_rsrp_delta_report,
    guint8 value_lte_rsrp_delta_rsrp_delta,
    GError **error);

/**
 * qmi_message_nas_set_event_report_input_get_lte_snr_delta:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_lte_snr_delta_report: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_snr_delta_snr_delta: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE SNR Delta' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_get_lte_snr_delta (
    QmiMessageNasSetEventReportInput *self,
    gboolean *value_lte_snr_delta_report,
    guint8 *value_lte_snr_delta_snr_delta,
    GError **error);

/**
 * qmi_message_nas_set_event_report_input_set_lte_snr_delta:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_lte_snr_delta_report: a #gboolean.
 * @value_lte_snr_delta_snr_delta: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'LTE SNR Delta' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_set_lte_snr_delta (
    QmiMessageNasSetEventReportInput *self,
    gboolean value_lte_snr_delta_report,
    guint8 value_lte_snr_delta_snr_delta,
    GError **error);

/**
 * qmi_message_nas_set_event_report_input_get_sinr_threshold:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_sinr_threshold_report: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_sinr_threshold_thresholds: a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'SINR Threshold' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_get_sinr_threshold (
    QmiMessageNasSetEventReportInput *self,
    gboolean *value_sinr_threshold_report,
    GArray **value_sinr_threshold_thresholds,
    GError **error);

/**
 * qmi_message_nas_set_event_report_input_set_sinr_threshold:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_sinr_threshold_report: a #gboolean.
 * @value_sinr_threshold_thresholds: a #GArray of #guint8 elements. A new reference to @value_sinr_threshold_thresholds will be taken.
 * @error: Return location for error or %NULL.
 *
 * Set the 'SINR Threshold' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_set_sinr_threshold (
    QmiMessageNasSetEventReportInput *self,
    gboolean value_sinr_threshold_report,
    GArray *value_sinr_threshold_thresholds,
    GError **error);

/**
 * qmi_message_nas_set_event_report_input_get_ecio_threshold:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_ecio_threshold_report: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_ecio_threshold_thresholds: a placeholder for the output #GArray of #gint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'ECIO Threshold' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_get_ecio_threshold (
    QmiMessageNasSetEventReportInput *self,
    gboolean *value_ecio_threshold_report,
    GArray **value_ecio_threshold_thresholds,
    GError **error);

/**
 * qmi_message_nas_set_event_report_input_set_ecio_threshold:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_ecio_threshold_report: a #gboolean.
 * @value_ecio_threshold_thresholds: a #GArray of #gint16 elements. A new reference to @value_ecio_threshold_thresholds will be taken.
 * @error: Return location for error or %NULL.
 *
 * Set the 'ECIO Threshold' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_set_ecio_threshold (
    QmiMessageNasSetEventReportInput *self,
    gboolean value_ecio_threshold_report,
    GArray *value_ecio_threshold_thresholds,
    GError **error);

/**
 * qmi_message_nas_set_event_report_input_get_error_rate_indicator:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_error_rate_indicator: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Error Rate Indicator' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_get_error_rate_indicator (
    QmiMessageNasSetEventReportInput *self,
    gboolean *value_error_rate_indicator,
    GError **error);

/**
 * qmi_message_nas_set_event_report_input_set_error_rate_indicator:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_error_rate_indicator: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Error Rate Indicator' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_set_error_rate_indicator (
    QmiMessageNasSetEventReportInput *self,
    gboolean value_error_rate_indicator,
    GError **error);

/**
 * qmi_message_nas_set_event_report_input_get_sinr_indicator:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_sinr_indicator_report: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_sinr_indicator_sinr_delta: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'SINR Indicator' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_get_sinr_indicator (
    QmiMessageNasSetEventReportInput *self,
    gboolean *value_sinr_indicator_report,
    guint8 *value_sinr_indicator_sinr_delta,
    GError **error);

/**
 * qmi_message_nas_set_event_report_input_set_sinr_indicator:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_sinr_indicator_report: a #gboolean.
 * @value_sinr_indicator_sinr_delta: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'SINR Indicator' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_set_sinr_indicator (
    QmiMessageNasSetEventReportInput *self,
    gboolean value_sinr_indicator_report,
    guint8 value_sinr_indicator_sinr_delta,
    GError **error);

/**
 * qmi_message_nas_set_event_report_input_get_io_indicator:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_io_indicator_report: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_io_indicator_io_delta: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IO Indicator' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_get_io_indicator (
    QmiMessageNasSetEventReportInput *self,
    gboolean *value_io_indicator_report,
    guint8 *value_io_indicator_io_delta,
    GError **error);

/**
 * qmi_message_nas_set_event_report_input_set_io_indicator:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_io_indicator_report: a #gboolean.
 * @value_io_indicator_io_delta: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IO Indicator' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_set_io_indicator (
    QmiMessageNasSetEventReportInput *self,
    gboolean value_io_indicator_report,
    guint8 value_io_indicator_io_delta,
    GError **error);

/**
 * qmi_message_nas_set_event_report_input_get_ecio_indicator:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_ecio_indicator_report: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_ecio_indicator_ecio_delta: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'ECIO Indicator' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_get_ecio_indicator (
    QmiMessageNasSetEventReportInput *self,
    gboolean *value_ecio_indicator_report,
    guint8 *value_ecio_indicator_ecio_delta,
    GError **error);

/**
 * qmi_message_nas_set_event_report_input_set_ecio_indicator:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_ecio_indicator_report: a #gboolean.
 * @value_ecio_indicator_ecio_delta: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'ECIO Indicator' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_set_ecio_indicator (
    QmiMessageNasSetEventReportInput *self,
    gboolean value_ecio_indicator_report,
    guint8 value_ecio_indicator_ecio_delta,
    GError **error);

/**
 * qmi_message_nas_set_event_report_input_get_rssi_indicator:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_rssi_indicator_report: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_rssi_indicator_rssi_delta: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'RSSI Indicator' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_get_rssi_indicator (
    QmiMessageNasSetEventReportInput *self,
    gboolean *value_rssi_indicator_report,
    guint8 *value_rssi_indicator_rssi_delta,
    GError **error);

/**
 * qmi_message_nas_set_event_report_input_set_rssi_indicator:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_rssi_indicator_report: a #gboolean.
 * @value_rssi_indicator_rssi_delta: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'RSSI Indicator' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_set_rssi_indicator (
    QmiMessageNasSetEventReportInput *self,
    gboolean value_rssi_indicator_report,
    guint8 value_rssi_indicator_rssi_delta,
    GError **error);

/**
 * qmi_message_nas_set_event_report_input_get_registration_reject_reason:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_registration_reject_reason: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Registration Reject Reason' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_get_registration_reject_reason (
    QmiMessageNasSetEventReportInput *self,
    gboolean *value_registration_reject_reason,
    GError **error);

/**
 * qmi_message_nas_set_event_report_input_set_registration_reject_reason:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_registration_reject_reason: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Registration Reject Reason' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_set_registration_reject_reason (
    QmiMessageNasSetEventReportInput *self,
    gboolean value_registration_reject_reason,
    GError **error);

/**
 * qmi_message_nas_set_event_report_input_get_rf_band_information:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_rf_band_information: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'RF Band Information' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_get_rf_band_information (
    QmiMessageNasSetEventReportInput *self,
    gboolean *value_rf_band_information,
    GError **error);

/**
 * qmi_message_nas_set_event_report_input_set_rf_band_information:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_rf_band_information: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'RF Band Information' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_set_rf_band_information (
    QmiMessageNasSetEventReportInput *self,
    gboolean value_rf_band_information,
    GError **error);

/**
 * qmi_message_nas_set_event_report_input_get_signal_strength_indicator:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_signal_strength_indicator_report: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_signal_strength_indicator_thresholds: a placeholder for the output #GArray of #gint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Signal Strength Indicator' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_get_signal_strength_indicator (
    QmiMessageNasSetEventReportInput *self,
    gboolean *value_signal_strength_indicator_report,
    GArray **value_signal_strength_indicator_thresholds,
    GError **error);

/**
 * qmi_message_nas_set_event_report_input_set_signal_strength_indicator:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_signal_strength_indicator_report: a #gboolean.
 * @value_signal_strength_indicator_thresholds: a #GArray of #gint8 elements. A new reference to @value_signal_strength_indicator_thresholds will be taken.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Signal Strength Indicator' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_set_signal_strength_indicator (
    QmiMessageNasSetEventReportInput *self,
    gboolean value_signal_strength_indicator_report,
    GArray *value_signal_strength_indicator_thresholds,
    GError **error);

/**
 * qmi_message_nas_set_event_report_input_ref:
 * @self: a #QmiMessageNasSetEventReportInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasSetEventReportInput *qmi_message_nas_set_event_report_input_ref (QmiMessageNasSetEventReportInput *self);

/**
 * qmi_message_nas_set_event_report_input_unref:
 * @self: a #QmiMessageNasSetEventReportInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_set_event_report_input_unref (QmiMessageNasSetEventReportInput *self);

/**
 * qmi_message_nas_set_event_report_input_new:
 *
 * Allocates a new #QmiMessageNasSetEventReportInput.
 *
 * Returns: the newly created #QmiMessageNasSetEventReportInput. The returned value should be freed with qmi_message_nas_set_event_report_input_unref().
 *
 * Since: 1.0
 */
QmiMessageNasSetEventReportInput *qmi_message_nas_set_event_report_input_new (void);

/* --- Output -- */

/**
 * QmiMessageNasSetEventReportOutput:
 *
 * The #QmiMessageNasSetEventReportOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasSetEventReportOutput QmiMessageNasSetEventReportOutput;
GType qmi_message_nas_set_event_report_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_SET_EVENT_REPORT_OUTPUT (qmi_message_nas_set_event_report_output_get_type ())

/**
 * qmi_message_nas_set_event_report_output_get_result:
 * @self: a QmiMessageNasSetEventReportOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_output_get_result (
    QmiMessageNasSetEventReportOutput *self,
    GError **error);

/**
 * qmi_message_nas_set_event_report_output_ref:
 * @self: a #QmiMessageNasSetEventReportOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasSetEventReportOutput *qmi_message_nas_set_event_report_output_ref (QmiMessageNasSetEventReportOutput *self);

/**
 * qmi_message_nas_set_event_report_output_unref:
 * @self: a #QmiMessageNasSetEventReportOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_set_event_report_output_unref (QmiMessageNasSetEventReportOutput *self);

/*****************************************************************************/
/* INDICATION: Qmi Indication NAS Event Report */


/* --- Output -- */

/**
 * QmiIndicationNasEventReportOutputRfBandInformationElement:
 * @radio_interface: a #QmiNasRadioInterface.
 * @active_band_class: a #QmiNasActiveBand.
 * @active_channel: a #guint16.
 *
 * A QmiIndicationNasEventReportOutputRfBandInformationElement struct.
 *
 * Since: 1.0
 */
typedef struct _QmiIndicationNasEventReportOutputRfBandInformationElement {
    QmiNasRadioInterface radio_interface;
    QmiNasActiveBand active_band_class;
    guint16 active_channel;
} QmiIndicationNasEventReportOutputRfBandInformationElement;

/**
 * QmiIndicationNasEventReportOutput:
 *
 * The #QmiIndicationNasEventReportOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiIndicationNasEventReportOutput QmiIndicationNasEventReportOutput;
GType qmi_indication_nas_event_report_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_NAS_EVENT_REPORT_OUTPUT (qmi_indication_nas_event_report_output_get_type ())

/**
 * qmi_indication_nas_event_report_output_get_lte_rsrp:
 * @self: a #QmiIndicationNasEventReportOutput.
 * @value_lte_rsrp: a placeholder for the output #gint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE RSRP' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_event_report_output_get_lte_rsrp (
    QmiIndicationNasEventReportOutput *self,
    gint16 *value_lte_rsrp,
    GError **error);

/**
 * qmi_indication_nas_event_report_output_get_lte_snr:
 * @self: a #QmiIndicationNasEventReportOutput.
 * @value_lte_snr: a placeholder for the output #gint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE SNR' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_event_report_output_get_lte_snr (
    QmiIndicationNasEventReportOutput *self,
    gint16 *value_lte_snr,
    GError **error);

/**
 * qmi_indication_nas_event_report_output_get_rsrq:
 * @self: a #QmiIndicationNasEventReportOutput.
 * @value_rsrq_rsrq: a placeholder for the output #gint8, or %NULL if not required.
 * @value_rsrq_radio_interface: a placeholder for the output #QmiNasRadioInterface, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'RSRQ' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_event_report_output_get_rsrq (
    QmiIndicationNasEventReportOutput *self,
    gint8 *value_rsrq_rsrq,
    QmiNasRadioInterface *value_rsrq_radio_interface,
    GError **error);

/**
 * qmi_indication_nas_event_report_output_get_error_rate:
 * @self: a #QmiIndicationNasEventReportOutput.
 * @value_error_rate_rate: a placeholder for the output #guint16, or %NULL if not required.
 * @value_error_rate_radio_interface: a placeholder for the output #QmiNasRadioInterface, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Error Rate' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_event_report_output_get_error_rate (
    QmiIndicationNasEventReportOutput *self,
    guint16 *value_error_rate_rate,
    QmiNasRadioInterface *value_error_rate_radio_interface,
    GError **error);

/**
 * qmi_indication_nas_event_report_output_get_sinr:
 * @self: a #QmiIndicationNasEventReportOutput.
 * @value_sinr: a placeholder for the output #QmiNasEvdoSinrLevel, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'SINR' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_event_report_output_get_sinr (
    QmiIndicationNasEventReportOutput *self,
    QmiNasEvdoSinrLevel *value_sinr,
    GError **error);

/**
 * qmi_indication_nas_event_report_output_get_io:
 * @self: a #QmiIndicationNasEventReportOutput.
 * @value_io: a placeholder for the output #gint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IO' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_event_report_output_get_io (
    QmiIndicationNasEventReportOutput *self,
    gint32 *value_io,
    GError **error);

/**
 * qmi_indication_nas_event_report_output_get_ecio:
 * @self: a #QmiIndicationNasEventReportOutput.
 * @value_ecio_ecio: a placeholder for the output #guint8, or %NULL if not required.
 * @value_ecio_radio_interface: a placeholder for the output #QmiNasRadioInterface, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'ECIO' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_indication_nas_event_report_output_get_ecio (
    QmiIndicationNasEventReportOutput *self,
    guint8 *value_ecio_ecio,
    QmiNasRadioInterface *value_ecio_radio_interface,
    GError **error);

/**
 * qmi_indication_nas_event_report_output_get_rssi:
 * @self: a #QmiIndicationNasEventReportOutput.
 * @value_rssi_rssi: a placeholder for the output #guint8, or %NULL if not required.
 * @value_rssi_radio_interface: a placeholder for the output #QmiNasRadioInterface, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'RSSI' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_event_report_output_get_rssi (
    QmiIndicationNasEventReportOutput *self,
    guint8 *value_rssi_rssi,
    QmiNasRadioInterface *value_rssi_radio_interface,
    GError **error);

/**
 * qmi_indication_nas_event_report_output_get_registration_reject_reason:
 * @self: a #QmiIndicationNasEventReportOutput.
 * @value_registration_reject_reason_service_domain: a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_registration_reject_reason_reject_cause: a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Registration Reject Reason' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_event_report_output_get_registration_reject_reason (
    QmiIndicationNasEventReportOutput *self,
    QmiNasNetworkServiceDomain *value_registration_reject_reason_service_domain,
    guint16 *value_registration_reject_reason_reject_cause,
    GError **error);

/**
 * qmi_indication_nas_event_report_output_get_rf_band_information:
 * @self: a #QmiIndicationNasEventReportOutput.
 * @value_rf_band_information: a placeholder for the output #GArray of #QmiIndicationNasEventReportOutputRfBandInformationElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'RF Band Information' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_event_report_output_get_rf_band_information (
    QmiIndicationNasEventReportOutput *self,
    GArray **value_rf_band_information,
    GError **error);

/**
 * qmi_indication_nas_event_report_output_get_signal_strength:
 * @self: a #QmiIndicationNasEventReportOutput.
 * @value_signal_strength_strength: a placeholder for the output #gint8, or %NULL if not required.
 * @value_signal_strength_radio_interface: a placeholder for the output #QmiNasRadioInterface, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Signal Strength' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_event_report_output_get_signal_strength (
    QmiIndicationNasEventReportOutput *self,
    gint8 *value_signal_strength_strength,
    QmiNasRadioInterface *value_signal_strength_radio_interface,
    GError **error);

/**
 * qmi_indication_nas_event_report_output_ref:
 * @self: a #QmiIndicationNasEventReportOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiIndicationNasEventReportOutput *qmi_indication_nas_event_report_output_ref (QmiIndicationNasEventReportOutput *self);

/**
 * qmi_indication_nas_event_report_output_unref:
 * @self: a #QmiIndicationNasEventReportOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_indication_nas_event_report_output_unref (QmiIndicationNasEventReportOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Register Indications */


/* --- Input -- */

/**
 * QmiMessageNasRegisterIndicationsInput:
 *
 * The #QmiMessageNasRegisterIndicationsInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasRegisterIndicationsInput QmiMessageNasRegisterIndicationsInput;
GType qmi_message_nas_register_indications_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_REGISTER_INDICATIONS_INPUT (qmi_message_nas_register_indications_input_get_type ())

/**
 * qmi_message_nas_register_indications_input_get_rf_band_information:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_rf_band_information: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'RF Band Information' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_get_rf_band_information (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean *value_rf_band_information,
    GError **error);

/**
 * qmi_message_nas_register_indications_input_set_rf_band_information:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_rf_band_information: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'RF Band Information' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_set_rf_band_information (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean value_rf_band_information,
    GError **error);

/**
 * qmi_message_nas_register_indications_input_get_embms_status:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_embms_status: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'eMBMS Status' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_get_embms_status (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean *value_embms_status,
    GError **error);

/**
 * qmi_message_nas_register_indications_input_set_embms_status:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_embms_status: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'eMBMS Status' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_set_embms_status (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean value_embms_status,
    GError **error);

/**
 * qmi_message_nas_register_indications_input_get_current_plmn_name:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_current_plmn_name: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Current PLMN Name' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_get_current_plmn_name (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean *value_current_plmn_name,
    GError **error);

/**
 * qmi_message_nas_register_indications_input_set_current_plmn_name:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_current_plmn_name: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Current PLMN Name' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_set_current_plmn_name (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean value_current_plmn_name,
    GError **error);

/**
 * qmi_message_nas_register_indications_input_get_managed_roaming:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_managed_roaming: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Managed Roaming' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_get_managed_roaming (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean *value_managed_roaming,
    GError **error);

/**
 * qmi_message_nas_register_indications_input_set_managed_roaming:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_managed_roaming: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Managed Roaming' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_set_managed_roaming (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean value_managed_roaming,
    GError **error);

/**
 * qmi_message_nas_register_indications_input_get_hdr_session_closed:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_hdr_session_closed: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'HDR Session Closed' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_get_hdr_session_closed (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean *value_hdr_session_closed,
    GError **error);

/**
 * qmi_message_nas_register_indications_input_set_hdr_session_closed:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_hdr_session_closed: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'HDR Session Closed' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_set_hdr_session_closed (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean value_hdr_session_closed,
    GError **error);

/**
 * qmi_message_nas_register_indications_input_get_hdr_new_uati_assigned:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_hdr_new_uati_assigned: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'HDR New UATI Assigned' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_get_hdr_new_uati_assigned (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean *value_hdr_new_uati_assigned,
    GError **error);

/**
 * qmi_message_nas_register_indications_input_set_hdr_new_uati_assigned:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_hdr_new_uati_assigned: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'HDR New UATI Assigned' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_set_hdr_new_uati_assigned (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean value_hdr_new_uati_assigned,
    GError **error);

/**
 * qmi_message_nas_register_indications_input_get_error_rate:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_error_rate: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Error Rate' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_get_error_rate (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean *value_error_rate,
    GError **error);

/**
 * qmi_message_nas_register_indications_input_set_error_rate:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_error_rate: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Error Rate' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_set_error_rate (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean value_error_rate,
    GError **error);

/**
 * qmi_message_nas_register_indications_input_get_signal_info:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_signal_info: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Signal Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_get_signal_info (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean *value_signal_info,
    GError **error);

/**
 * qmi_message_nas_register_indications_input_set_signal_info:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_signal_info: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Signal Info' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_set_signal_info (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean value_signal_info,
    GError **error);

/**
 * qmi_message_nas_register_indications_input_get_system_info:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_system_info: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'System Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_get_system_info (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean *value_system_info,
    GError **error);

/**
 * qmi_message_nas_register_indications_input_set_system_info:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_system_info: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'System Info' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_set_system_info (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean value_system_info,
    GError **error);

/**
 * qmi_message_nas_register_indications_input_get_network_time:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_network_time: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Network Time' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_get_network_time (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean *value_network_time,
    GError **error);

/**
 * qmi_message_nas_register_indications_input_set_network_time:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_network_time: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Network Time' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_set_network_time (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean value_network_time,
    GError **error);

/**
 * qmi_message_nas_register_indications_input_get_subscription_info:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_subscription_info: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Subscription Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_get_subscription_info (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean *value_subscription_info,
    GError **error);

/**
 * qmi_message_nas_register_indications_input_set_subscription_info:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_subscription_info: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Subscription Info' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_set_subscription_info (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean value_subscription_info,
    GError **error);

/**
 * qmi_message_nas_register_indications_input_get_dual_standby_preference:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_dual_standby_preference: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Dual Standby Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_get_dual_standby_preference (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean *value_dual_standby_preference,
    GError **error);

/**
 * qmi_message_nas_register_indications_input_set_dual_standby_preference:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_dual_standby_preference: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Dual Standby Preference' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_set_dual_standby_preference (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean value_dual_standby_preference,
    GError **error);

/**
 * qmi_message_nas_register_indications_input_get_serving_system_events:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_serving_system_events: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Serving System Events' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_get_serving_system_events (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean *value_serving_system_events,
    GError **error);

/**
 * qmi_message_nas_register_indications_input_set_serving_system_events:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_serving_system_events: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Serving System Events' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_set_serving_system_events (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean value_serving_system_events,
    GError **error);

/**
 * qmi_message_nas_register_indications_input_get_ddtm_events:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_ddtm_events: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'DDTM Events' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_get_ddtm_events (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean *value_ddtm_events,
    GError **error);

/**
 * qmi_message_nas_register_indications_input_set_ddtm_events:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_ddtm_events: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'DDTM Events' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_set_ddtm_events (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean value_ddtm_events,
    GError **error);

/**
 * qmi_message_nas_register_indications_input_get_system_selection_preference:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_system_selection_preference: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'System Selection Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_get_system_selection_preference (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean *value_system_selection_preference,
    GError **error);

/**
 * qmi_message_nas_register_indications_input_set_system_selection_preference:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_system_selection_preference: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'System Selection Preference' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_set_system_selection_preference (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean value_system_selection_preference,
    GError **error);

/**
 * qmi_message_nas_register_indications_input_ref:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasRegisterIndicationsInput *qmi_message_nas_register_indications_input_ref (QmiMessageNasRegisterIndicationsInput *self);

/**
 * qmi_message_nas_register_indications_input_unref:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_register_indications_input_unref (QmiMessageNasRegisterIndicationsInput *self);

/**
 * qmi_message_nas_register_indications_input_new:
 *
 * Allocates a new #QmiMessageNasRegisterIndicationsInput.
 *
 * Returns: the newly created #QmiMessageNasRegisterIndicationsInput. The returned value should be freed with qmi_message_nas_register_indications_input_unref().
 *
 * Since: 1.0
 */
QmiMessageNasRegisterIndicationsInput *qmi_message_nas_register_indications_input_new (void);

/* --- Output -- */

/**
 * QmiMessageNasRegisterIndicationsOutput:
 *
 * The #QmiMessageNasRegisterIndicationsOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasRegisterIndicationsOutput QmiMessageNasRegisterIndicationsOutput;
GType qmi_message_nas_register_indications_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_REGISTER_INDICATIONS_OUTPUT (qmi_message_nas_register_indications_output_get_type ())

/**
 * qmi_message_nas_register_indications_output_get_result:
 * @self: a QmiMessageNasRegisterIndicationsOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_output_get_result (
    QmiMessageNasRegisterIndicationsOutput *self,
    GError **error);

/**
 * qmi_message_nas_register_indications_output_ref:
 * @self: a #QmiMessageNasRegisterIndicationsOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasRegisterIndicationsOutput *qmi_message_nas_register_indications_output_ref (QmiMessageNasRegisterIndicationsOutput *self);

/**
 * qmi_message_nas_register_indications_output_unref:
 * @self: a #QmiMessageNasRegisterIndicationsOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_register_indications_output_unref (QmiMessageNasRegisterIndicationsOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Get Supported Messages */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageNasGetSupportedMessagesOutput:
 *
 * The #QmiMessageNasGetSupportedMessagesOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageNasGetSupportedMessagesOutput QmiMessageNasGetSupportedMessagesOutput;
GType qmi_message_nas_get_supported_messages_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_GET_SUPPORTED_MESSAGES_OUTPUT (qmi_message_nas_get_supported_messages_output_get_type ())

/**
 * qmi_message_nas_get_supported_messages_output_get_result:
 * @self: a QmiMessageNasGetSupportedMessagesOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.14
 */
gboolean qmi_message_nas_get_supported_messages_output_get_result (
    QmiMessageNasGetSupportedMessagesOutput *self,
    GError **error);

/**
 * qmi_message_nas_get_supported_messages_output_get_list:
 * @self: a #QmiMessageNasGetSupportedMessagesOutput.
 * @value_list: a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'List' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_supported_messages_output_get_list (
    QmiMessageNasGetSupportedMessagesOutput *self,
    GArray **value_list,
    GError **error);

/**
 * qmi_message_nas_get_supported_messages_output_ref:
 * @self: a #QmiMessageNasGetSupportedMessagesOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageNasGetSupportedMessagesOutput *qmi_message_nas_get_supported_messages_output_ref (QmiMessageNasGetSupportedMessagesOutput *self);

/**
 * qmi_message_nas_get_supported_messages_output_unref:
 * @self: a #QmiMessageNasGetSupportedMessagesOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_nas_get_supported_messages_output_unref (QmiMessageNasGetSupportedMessagesOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Get Signal Strength */


/* --- Input -- */

/**
 * QmiMessageNasGetSignalStrengthInput:
 *
 * The #QmiMessageNasGetSignalStrengthInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasGetSignalStrengthInput QmiMessageNasGetSignalStrengthInput;
GType qmi_message_nas_get_signal_strength_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_GET_SIGNAL_STRENGTH_INPUT (qmi_message_nas_get_signal_strength_input_get_type ())

/**
 * qmi_message_nas_get_signal_strength_input_get_request_mask:
 * @self: a #QmiMessageNasGetSignalStrengthInput.
 * @value_request_mask: a placeholder for the output #QmiNasSignalStrengthRequest, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Request Mask' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_signal_strength_input_get_request_mask (
    QmiMessageNasGetSignalStrengthInput *self,
    QmiNasSignalStrengthRequest *value_request_mask,
    GError **error);

/**
 * qmi_message_nas_get_signal_strength_input_set_request_mask:
 * @self: a #QmiMessageNasGetSignalStrengthInput.
 * @value_request_mask: a #QmiNasSignalStrengthRequest.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Request Mask' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_signal_strength_input_set_request_mask (
    QmiMessageNasGetSignalStrengthInput *self,
    QmiNasSignalStrengthRequest value_request_mask,
    GError **error);

/**
 * qmi_message_nas_get_signal_strength_input_ref:
 * @self: a #QmiMessageNasGetSignalStrengthInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasGetSignalStrengthInput *qmi_message_nas_get_signal_strength_input_ref (QmiMessageNasGetSignalStrengthInput *self);

/**
 * qmi_message_nas_get_signal_strength_input_unref:
 * @self: a #QmiMessageNasGetSignalStrengthInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_get_signal_strength_input_unref (QmiMessageNasGetSignalStrengthInput *self);

/**
 * qmi_message_nas_get_signal_strength_input_new:
 *
 * Allocates a new #QmiMessageNasGetSignalStrengthInput.
 *
 * Returns: the newly created #QmiMessageNasGetSignalStrengthInput. The returned value should be freed with qmi_message_nas_get_signal_strength_input_unref().
 *
 * Since: 1.0
 */
QmiMessageNasGetSignalStrengthInput *qmi_message_nas_get_signal_strength_input_new (void);

/* --- Output -- */

/**
 * QmiMessageNasGetSignalStrengthOutputErrorRateListElement:
 * @rate: a #guint16.
 * @radio_interface: a #QmiNasRadioInterface.
 *
 * A QmiMessageNasGetSignalStrengthOutputErrorRateListElement struct.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasGetSignalStrengthOutputErrorRateListElement {
    guint16 rate;
    QmiNasRadioInterface radio_interface;
} QmiMessageNasGetSignalStrengthOutputErrorRateListElement;

/**
 * QmiMessageNasGetSignalStrengthOutputEcioListElement:
 * @ecio: a #guint8.
 * @radio_interface: a #QmiNasRadioInterface.
 *
 * A QmiMessageNasGetSignalStrengthOutputEcioListElement struct.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasGetSignalStrengthOutputEcioListElement {
    guint8 ecio;
    QmiNasRadioInterface radio_interface;
} QmiMessageNasGetSignalStrengthOutputEcioListElement;

/**
 * QmiMessageNasGetSignalStrengthOutputRssiListElement:
 * @rssi: a #guint8.
 * @radio_interface: a #QmiNasRadioInterface.
 *
 * A QmiMessageNasGetSignalStrengthOutputRssiListElement struct.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasGetSignalStrengthOutputRssiListElement {
    guint8 rssi;
    QmiNasRadioInterface radio_interface;
} QmiMessageNasGetSignalStrengthOutputRssiListElement;

/**
 * QmiMessageNasGetSignalStrengthOutputStrengthListElement:
 * @strength: a #gint8.
 * @radio_interface: a #QmiNasRadioInterface.
 *
 * A QmiMessageNasGetSignalStrengthOutputStrengthListElement struct.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasGetSignalStrengthOutputStrengthListElement {
    gint8 strength;
    QmiNasRadioInterface radio_interface;
} QmiMessageNasGetSignalStrengthOutputStrengthListElement;

/**
 * QmiMessageNasGetSignalStrengthOutput:
 *
 * The #QmiMessageNasGetSignalStrengthOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasGetSignalStrengthOutput QmiMessageNasGetSignalStrengthOutput;
GType qmi_message_nas_get_signal_strength_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_GET_SIGNAL_STRENGTH_OUTPUT (qmi_message_nas_get_signal_strength_output_get_type ())

/**
 * qmi_message_nas_get_signal_strength_output_get_lte_rsrp:
 * @self: a #QmiMessageNasGetSignalStrengthOutput.
 * @value_lte_rsrp: a placeholder for the output #gint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE RSRP' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_signal_strength_output_get_lte_rsrp (
    QmiMessageNasGetSignalStrengthOutput *self,
    gint16 *value_lte_rsrp,
    GError **error);

/**
 * qmi_message_nas_get_signal_strength_output_get_lte_snr:
 * @self: a #QmiMessageNasGetSignalStrengthOutput.
 * @value_lte_snr: a placeholder for the output #gint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE SNR' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_signal_strength_output_get_lte_snr (
    QmiMessageNasGetSignalStrengthOutput *self,
    gint16 *value_lte_snr,
    GError **error);

/**
 * qmi_message_nas_get_signal_strength_output_get_rsrq:
 * @self: a #QmiMessageNasGetSignalStrengthOutput.
 * @value_rsrq_rsrq: a placeholder for the output #gint8, or %NULL if not required.
 * @value_rsrq_radio_interface: a placeholder for the output #QmiNasRadioInterface, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'RSRQ' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_signal_strength_output_get_rsrq (
    QmiMessageNasGetSignalStrengthOutput *self,
    gint8 *value_rsrq_rsrq,
    QmiNasRadioInterface *value_rsrq_radio_interface,
    GError **error);

/**
 * qmi_message_nas_get_signal_strength_output_get_error_rate_list:
 * @self: a #QmiMessageNasGetSignalStrengthOutput.
 * @value_error_rate_list: a placeholder for the output #GArray of #QmiMessageNasGetSignalStrengthOutputErrorRateListElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Error Rate List' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_signal_strength_output_get_error_rate_list (
    QmiMessageNasGetSignalStrengthOutput *self,
    GArray **value_error_rate_list,
    GError **error);

/**
 * qmi_message_nas_get_signal_strength_output_get_sinr:
 * @self: a #QmiMessageNasGetSignalStrengthOutput.
 * @value_sinr: a placeholder for the output #QmiNasEvdoSinrLevel, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'SINR' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_signal_strength_output_get_sinr (
    QmiMessageNasGetSignalStrengthOutput *self,
    QmiNasEvdoSinrLevel *value_sinr,
    GError **error);

/**
 * qmi_message_nas_get_signal_strength_output_get_io:
 * @self: a #QmiMessageNasGetSignalStrengthOutput.
 * @value_io: a placeholder for the output #gint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IO' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_signal_strength_output_get_io (
    QmiMessageNasGetSignalStrengthOutput *self,
    gint32 *value_io,
    GError **error);

/**
 * qmi_message_nas_get_signal_strength_output_get_ecio_list:
 * @self: a #QmiMessageNasGetSignalStrengthOutput.
 * @value_ecio_list: a placeholder for the output #GArray of #QmiMessageNasGetSignalStrengthOutputEcioListElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'ECIO List' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_signal_strength_output_get_ecio_list (
    QmiMessageNasGetSignalStrengthOutput *self,
    GArray **value_ecio_list,
    GError **error);

/**
 * qmi_message_nas_get_signal_strength_output_get_rssi_list:
 * @self: a #QmiMessageNasGetSignalStrengthOutput.
 * @value_rssi_list: a placeholder for the output #GArray of #QmiMessageNasGetSignalStrengthOutputRssiListElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'RSSI List' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_signal_strength_output_get_rssi_list (
    QmiMessageNasGetSignalStrengthOutput *self,
    GArray **value_rssi_list,
    GError **error);

/**
 * qmi_message_nas_get_signal_strength_output_get_strength_list:
 * @self: a #QmiMessageNasGetSignalStrengthOutput.
 * @value_strength_list: a placeholder for the output #GArray of #QmiMessageNasGetSignalStrengthOutputStrengthListElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Strength List' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_signal_strength_output_get_strength_list (
    QmiMessageNasGetSignalStrengthOutput *self,
    GArray **value_strength_list,
    GError **error);

/**
 * qmi_message_nas_get_signal_strength_output_get_result:
 * @self: a QmiMessageNasGetSignalStrengthOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_signal_strength_output_get_result (
    QmiMessageNasGetSignalStrengthOutput *self,
    GError **error);

/**
 * qmi_message_nas_get_signal_strength_output_get_signal_strength:
 * @self: a #QmiMessageNasGetSignalStrengthOutput.
 * @value_signal_strength_strength: a placeholder for the output #gint8, or %NULL if not required.
 * @value_signal_strength_radio_interface: a placeholder for the output #QmiNasRadioInterface, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Signal Strength' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_signal_strength_output_get_signal_strength (
    QmiMessageNasGetSignalStrengthOutput *self,
    gint8 *value_signal_strength_strength,
    QmiNasRadioInterface *value_signal_strength_radio_interface,
    GError **error);

/**
 * qmi_message_nas_get_signal_strength_output_ref:
 * @self: a #QmiMessageNasGetSignalStrengthOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasGetSignalStrengthOutput *qmi_message_nas_get_signal_strength_output_ref (QmiMessageNasGetSignalStrengthOutput *self);

/**
 * qmi_message_nas_get_signal_strength_output_unref:
 * @self: a #QmiMessageNasGetSignalStrengthOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_get_signal_strength_output_unref (QmiMessageNasGetSignalStrengthOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Network Scan */


/* --- Input -- */

/**
 * QmiMessageNasNetworkScanInput:
 *
 * The #QmiMessageNasNetworkScanInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasNetworkScanInput QmiMessageNasNetworkScanInput;
GType qmi_message_nas_network_scan_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_NETWORK_SCAN_INPUT (qmi_message_nas_network_scan_input_get_type ())

/**
 * qmi_message_nas_network_scan_input_get_network_type:
 * @self: a #QmiMessageNasNetworkScanInput.
 * @value_network_type: a placeholder for the output #QmiNasNetworkScanType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Network Type' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_network_scan_input_get_network_type (
    QmiMessageNasNetworkScanInput *self,
    QmiNasNetworkScanType *value_network_type,
    GError **error);

/**
 * qmi_message_nas_network_scan_input_set_network_type:
 * @self: a #QmiMessageNasNetworkScanInput.
 * @value_network_type: a #QmiNasNetworkScanType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Network Type' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_network_scan_input_set_network_type (
    QmiMessageNasNetworkScanInput *self,
    QmiNasNetworkScanType value_network_type,
    GError **error);

/**
 * qmi_message_nas_network_scan_input_ref:
 * @self: a #QmiMessageNasNetworkScanInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasNetworkScanInput *qmi_message_nas_network_scan_input_ref (QmiMessageNasNetworkScanInput *self);

/**
 * qmi_message_nas_network_scan_input_unref:
 * @self: a #QmiMessageNasNetworkScanInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_network_scan_input_unref (QmiMessageNasNetworkScanInput *self);

/**
 * qmi_message_nas_network_scan_input_new:
 *
 * Allocates a new #QmiMessageNasNetworkScanInput.
 *
 * Returns: the newly created #QmiMessageNasNetworkScanInput. The returned value should be freed with qmi_message_nas_network_scan_input_unref().
 *
 * Since: 1.0
 */
QmiMessageNasNetworkScanInput *qmi_message_nas_network_scan_input_new (void);

/* --- Output -- */

/**
 * QmiMessageNasNetworkScanOutputMncPcsDigitIncludeStatusElement:
 * @mcc: a #guint16.
 * @mnc: a #guint16.
 * @includes_pcs_digit: a #gboolean.
 *
 * A QmiMessageNasNetworkScanOutputMncPcsDigitIncludeStatusElement struct.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasNetworkScanOutputMncPcsDigitIncludeStatusElement {
    guint16 mcc;
    guint16 mnc;
    gboolean includes_pcs_digit;
} QmiMessageNasNetworkScanOutputMncPcsDigitIncludeStatusElement;

/**
 * QmiMessageNasNetworkScanOutputRadioAccessTechnologyElement:
 * @mcc: a #guint16.
 * @mnc: a #guint16.
 * @radio_interface: a #QmiNasRadioInterface.
 *
 * A QmiMessageNasNetworkScanOutputRadioAccessTechnologyElement struct.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasNetworkScanOutputRadioAccessTechnologyElement {
    guint16 mcc;
    guint16 mnc;
    QmiNasRadioInterface radio_interface;
} QmiMessageNasNetworkScanOutputRadioAccessTechnologyElement;

/**
 * QmiMessageNasNetworkScanOutputNetworkInformationElement:
 * @mcc: a #guint16.
 * @mnc: a #guint16.
 * @network_status: a #QmiNasNetworkStatus.
 * @description: a string.
 *
 * A QmiMessageNasNetworkScanOutputNetworkInformationElement struct.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasNetworkScanOutputNetworkInformationElement {
    guint16 mcc;
    guint16 mnc;
    QmiNasNetworkStatus network_status;
    gchar *description;
} QmiMessageNasNetworkScanOutputNetworkInformationElement;

/**
 * QmiMessageNasNetworkScanOutput:
 *
 * The #QmiMessageNasNetworkScanOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasNetworkScanOutput QmiMessageNasNetworkScanOutput;
GType qmi_message_nas_network_scan_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_NETWORK_SCAN_OUTPUT (qmi_message_nas_network_scan_output_get_type ())

/**
 * qmi_message_nas_network_scan_output_get_mnc_pcs_digit_include_status:
 * @self: a #QmiMessageNasNetworkScanOutput.
 * @value_mnc_pcs_digit_include_status: a placeholder for the output #GArray of #QmiMessageNasNetworkScanOutputMncPcsDigitIncludeStatusElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'MNC PCS Digit Include Status' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_network_scan_output_get_mnc_pcs_digit_include_status (
    QmiMessageNasNetworkScanOutput *self,
    GArray **value_mnc_pcs_digit_include_status,
    GError **error);

/**
 * qmi_message_nas_network_scan_output_get_radio_access_technology:
 * @self: a #QmiMessageNasNetworkScanOutput.
 * @value_radio_access_technology: a placeholder for the output #GArray of #QmiMessageNasNetworkScanOutputRadioAccessTechnologyElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Radio Access Technology' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_network_scan_output_get_radio_access_technology (
    QmiMessageNasNetworkScanOutput *self,
    GArray **value_radio_access_technology,
    GError **error);

/**
 * qmi_message_nas_network_scan_output_get_network_information:
 * @self: a #QmiMessageNasNetworkScanOutput.
 * @value_network_information: a placeholder for the output #GArray of #QmiMessageNasNetworkScanOutputNetworkInformationElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Network Information' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_network_scan_output_get_network_information (
    QmiMessageNasNetworkScanOutput *self,
    GArray **value_network_information,
    GError **error);

/**
 * qmi_message_nas_network_scan_output_get_result:
 * @self: a QmiMessageNasNetworkScanOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_network_scan_output_get_result (
    QmiMessageNasNetworkScanOutput *self,
    GError **error);

/**
 * qmi_message_nas_network_scan_output_ref:
 * @self: a #QmiMessageNasNetworkScanOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasNetworkScanOutput *qmi_message_nas_network_scan_output_ref (QmiMessageNasNetworkScanOutput *self);

/**
 * qmi_message_nas_network_scan_output_unref:
 * @self: a #QmiMessageNasNetworkScanOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_network_scan_output_unref (QmiMessageNasNetworkScanOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Initiate Network Register */


/* --- Input -- */

/**
 * QmiMessageNasInitiateNetworkRegisterInput:
 *
 * The #QmiMessageNasInitiateNetworkRegisterInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasInitiateNetworkRegisterInput QmiMessageNasInitiateNetworkRegisterInput;
GType qmi_message_nas_initiate_network_register_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_INITIATE_NETWORK_REGISTER_INPUT (qmi_message_nas_initiate_network_register_input_get_type ())

/**
 * qmi_message_nas_initiate_network_register_input_get_mnc_pcs_digit_include_status:
 * @self: a #QmiMessageNasInitiateNetworkRegisterInput.
 * @value_mnc_pcs_digit_include_status: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'MNC PCS Digit Include Status' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_initiate_network_register_input_get_mnc_pcs_digit_include_status (
    QmiMessageNasInitiateNetworkRegisterInput *self,
    gboolean *value_mnc_pcs_digit_include_status,
    GError **error);

/**
 * qmi_message_nas_initiate_network_register_input_set_mnc_pcs_digit_include_status:
 * @self: a #QmiMessageNasInitiateNetworkRegisterInput.
 * @value_mnc_pcs_digit_include_status: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'MNC PCS Digit Include Status' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_initiate_network_register_input_set_mnc_pcs_digit_include_status (
    QmiMessageNasInitiateNetworkRegisterInput *self,
    gboolean value_mnc_pcs_digit_include_status,
    GError **error);

/**
 * qmi_message_nas_initiate_network_register_input_get_change_duration:
 * @self: a #QmiMessageNasInitiateNetworkRegisterInput.
 * @value_change_duration: a placeholder for the output #QmiNasChangeDuration, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Change Duration' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_initiate_network_register_input_get_change_duration (
    QmiMessageNasInitiateNetworkRegisterInput *self,
    QmiNasChangeDuration *value_change_duration,
    GError **error);

/**
 * qmi_message_nas_initiate_network_register_input_set_change_duration:
 * @self: a #QmiMessageNasInitiateNetworkRegisterInput.
 * @value_change_duration: a #QmiNasChangeDuration.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Change Duration' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_initiate_network_register_input_set_change_duration (
    QmiMessageNasInitiateNetworkRegisterInput *self,
    QmiNasChangeDuration value_change_duration,
    GError **error);

/**
 * qmi_message_nas_initiate_network_register_input_get_manual_registration_info_3gpp:
 * @self: a #QmiMessageNasInitiateNetworkRegisterInput.
 * @value_manual_registration_info_3gpp_mcc: a placeholder for the output #guint16, or %NULL if not required.
 * @value_manual_registration_info_3gpp_mnc: a placeholder for the output #guint16, or %NULL if not required.
 * @value_manual_registration_info_3gpp_radio_interface: a placeholder for the output #QmiNasRadioInterface, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Manual Registration Info 3GPP' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_initiate_network_register_input_get_manual_registration_info_3gpp (
    QmiMessageNasInitiateNetworkRegisterInput *self,
    guint16 *value_manual_registration_info_3gpp_mcc,
    guint16 *value_manual_registration_info_3gpp_mnc,
    QmiNasRadioInterface *value_manual_registration_info_3gpp_radio_interface,
    GError **error);

/**
 * qmi_message_nas_initiate_network_register_input_set_manual_registration_info_3gpp:
 * @self: a #QmiMessageNasInitiateNetworkRegisterInput.
 * @value_manual_registration_info_3gpp_mcc: a #guint16.
 * @value_manual_registration_info_3gpp_mnc: a #guint16.
 * @value_manual_registration_info_3gpp_radio_interface: a #QmiNasRadioInterface.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Manual Registration Info 3GPP' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_initiate_network_register_input_set_manual_registration_info_3gpp (
    QmiMessageNasInitiateNetworkRegisterInput *self,
    guint16 value_manual_registration_info_3gpp_mcc,
    guint16 value_manual_registration_info_3gpp_mnc,
    QmiNasRadioInterface value_manual_registration_info_3gpp_radio_interface,
    GError **error);

/**
 * qmi_message_nas_initiate_network_register_input_get_action:
 * @self: a #QmiMessageNasInitiateNetworkRegisterInput.
 * @value_action: a placeholder for the output #QmiNasNetworkRegisterType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Action' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_initiate_network_register_input_get_action (
    QmiMessageNasInitiateNetworkRegisterInput *self,
    QmiNasNetworkRegisterType *value_action,
    GError **error);

/**
 * qmi_message_nas_initiate_network_register_input_set_action:
 * @self: a #QmiMessageNasInitiateNetworkRegisterInput.
 * @value_action: a #QmiNasNetworkRegisterType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Action' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_initiate_network_register_input_set_action (
    QmiMessageNasInitiateNetworkRegisterInput *self,
    QmiNasNetworkRegisterType value_action,
    GError **error);

/**
 * qmi_message_nas_initiate_network_register_input_ref:
 * @self: a #QmiMessageNasInitiateNetworkRegisterInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasInitiateNetworkRegisterInput *qmi_message_nas_initiate_network_register_input_ref (QmiMessageNasInitiateNetworkRegisterInput *self);

/**
 * qmi_message_nas_initiate_network_register_input_unref:
 * @self: a #QmiMessageNasInitiateNetworkRegisterInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_initiate_network_register_input_unref (QmiMessageNasInitiateNetworkRegisterInput *self);

/**
 * qmi_message_nas_initiate_network_register_input_new:
 *
 * Allocates a new #QmiMessageNasInitiateNetworkRegisterInput.
 *
 * Returns: the newly created #QmiMessageNasInitiateNetworkRegisterInput. The returned value should be freed with qmi_message_nas_initiate_network_register_input_unref().
 *
 * Since: 1.0
 */
QmiMessageNasInitiateNetworkRegisterInput *qmi_message_nas_initiate_network_register_input_new (void);

/* --- Output -- */

/**
 * QmiMessageNasInitiateNetworkRegisterOutput:
 *
 * The #QmiMessageNasInitiateNetworkRegisterOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasInitiateNetworkRegisterOutput QmiMessageNasInitiateNetworkRegisterOutput;
GType qmi_message_nas_initiate_network_register_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_INITIATE_NETWORK_REGISTER_OUTPUT (qmi_message_nas_initiate_network_register_output_get_type ())

/**
 * qmi_message_nas_initiate_network_register_output_get_result:
 * @self: a QmiMessageNasInitiateNetworkRegisterOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_initiate_network_register_output_get_result (
    QmiMessageNasInitiateNetworkRegisterOutput *self,
    GError **error);

/**
 * qmi_message_nas_initiate_network_register_output_ref:
 * @self: a #QmiMessageNasInitiateNetworkRegisterOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasInitiateNetworkRegisterOutput *qmi_message_nas_initiate_network_register_output_ref (QmiMessageNasInitiateNetworkRegisterOutput *self);

/**
 * qmi_message_nas_initiate_network_register_output_unref:
 * @self: a #QmiMessageNasInitiateNetworkRegisterOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_initiate_network_register_output_unref (QmiMessageNasInitiateNetworkRegisterOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Attach Detach */


/* --- Input -- */

/**
 * QmiMessageNasAttachDetachInput:
 *
 * The #QmiMessageNasAttachDetachInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.20
 */
typedef struct _QmiMessageNasAttachDetachInput QmiMessageNasAttachDetachInput;
GType qmi_message_nas_attach_detach_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_ATTACH_DETACH_INPUT (qmi_message_nas_attach_detach_input_get_type ())

/**
 * qmi_message_nas_attach_detach_input_get_action:
 * @self: a #QmiMessageNasAttachDetachInput.
 * @value_action: a placeholder for the output #QmiNasPsAttachAction, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Action' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.20
 */
gboolean qmi_message_nas_attach_detach_input_get_action (
    QmiMessageNasAttachDetachInput *self,
    QmiNasPsAttachAction *value_action,
    GError **error);

/**
 * qmi_message_nas_attach_detach_input_set_action:
 * @self: a #QmiMessageNasAttachDetachInput.
 * @value_action: a #QmiNasPsAttachAction.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Action' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.20
 */
gboolean qmi_message_nas_attach_detach_input_set_action (
    QmiMessageNasAttachDetachInput *self,
    QmiNasPsAttachAction value_action,
    GError **error);

/**
 * qmi_message_nas_attach_detach_input_ref:
 * @self: a #QmiMessageNasAttachDetachInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.20
 */
QmiMessageNasAttachDetachInput *qmi_message_nas_attach_detach_input_ref (QmiMessageNasAttachDetachInput *self);

/**
 * qmi_message_nas_attach_detach_input_unref:
 * @self: a #QmiMessageNasAttachDetachInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.20
 */
void qmi_message_nas_attach_detach_input_unref (QmiMessageNasAttachDetachInput *self);

/**
 * qmi_message_nas_attach_detach_input_new:
 *
 * Allocates a new #QmiMessageNasAttachDetachInput.
 *
 * Returns: the newly created #QmiMessageNasAttachDetachInput. The returned value should be freed with qmi_message_nas_attach_detach_input_unref().
 *
 * Since: 1.20
 */
QmiMessageNasAttachDetachInput *qmi_message_nas_attach_detach_input_new (void);

/* --- Output -- */

/**
 * QmiMessageNasAttachDetachOutput:
 *
 * The #QmiMessageNasAttachDetachOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.20
 */
typedef struct _QmiMessageNasAttachDetachOutput QmiMessageNasAttachDetachOutput;
GType qmi_message_nas_attach_detach_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_ATTACH_DETACH_OUTPUT (qmi_message_nas_attach_detach_output_get_type ())

/**
 * qmi_message_nas_attach_detach_output_get_result:
 * @self: a QmiMessageNasAttachDetachOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.20
 */
gboolean qmi_message_nas_attach_detach_output_get_result (
    QmiMessageNasAttachDetachOutput *self,
    GError **error);

/**
 * qmi_message_nas_attach_detach_output_ref:
 * @self: a #QmiMessageNasAttachDetachOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.20
 */
QmiMessageNasAttachDetachOutput *qmi_message_nas_attach_detach_output_ref (QmiMessageNasAttachDetachOutput *self);

/**
 * qmi_message_nas_attach_detach_output_unref:
 * @self: a #QmiMessageNasAttachDetachOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.20
 */
void qmi_message_nas_attach_detach_output_unref (QmiMessageNasAttachDetachOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Get Serving System */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageNasGetServingSystemOutputRoamingIndicatorListElement:
 * @radio_interface: a #QmiNasRadioInterface.
 * @roaming_indicator: a #QmiNasRoamingIndicatorStatus.
 *
 * A QmiMessageNasGetServingSystemOutputRoamingIndicatorListElement struct.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasGetServingSystemOutputRoamingIndicatorListElement {
    QmiNasRadioInterface radio_interface;
    QmiNasRoamingIndicatorStatus roaming_indicator;
} QmiMessageNasGetServingSystemOutputRoamingIndicatorListElement;

/**
 * QmiMessageNasGetServingSystemOutput:
 *
 * The #QmiMessageNasGetServingSystemOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasGetServingSystemOutput QmiMessageNasGetServingSystemOutput;
GType qmi_message_nas_get_serving_system_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_GET_SERVING_SYSTEM_OUTPUT (qmi_message_nas_get_serving_system_output_get_type ())

/**
 * qmi_message_nas_get_serving_system_output_get_mnc_pcs_digit_include_status:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_mnc_pcs_digit_include_status_mcc: a placeholder for the output #guint16, or %NULL if not required.
 * @value_mnc_pcs_digit_include_status_mnc: a placeholder for the output #guint16, or %NULL if not required.
 * @value_mnc_pcs_digit_include_status_includes_pcs_digit: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'MNC PCS Digit Include Status' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_mnc_pcs_digit_include_status (
    QmiMessageNasGetServingSystemOutput *self,
    guint16 *value_mnc_pcs_digit_include_status_mcc,
    guint16 *value_mnc_pcs_digit_include_status_mnc,
    gboolean *value_mnc_pcs_digit_include_status_includes_pcs_digit,
    GError **error);

/**
 * qmi_message_nas_get_serving_system_output_get_umts_primary_scrambling_code:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_umts_primary_scrambling_code: a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Primary Scrambling Code' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_umts_primary_scrambling_code (
    QmiMessageNasGetServingSystemOutput *self,
    guint16 *value_umts_primary_scrambling_code,
    GError **error);

/**
 * qmi_message_nas_get_serving_system_output_get_call_barring_status:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_call_barring_status_cs_status: a placeholder for the output #QmiNasCallBarringStatus, or %NULL if not required.
 * @value_call_barring_status_ps_status: a placeholder for the output #QmiNasCallBarringStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Call Barring Status' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_call_barring_status (
    QmiMessageNasGetServingSystemOutput *self,
    QmiNasCallBarringStatus *value_call_barring_status_cs_status,
    QmiNasCallBarringStatus *value_call_barring_status_ps_status,
    GError **error);

/**
 * qmi_message_nas_get_serving_system_output_get_lte_tac:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_lte_tac: a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE TAC' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_lte_tac (
    QmiMessageNasGetServingSystemOutput *self,
    guint16 *value_lte_tac,
    GError **error);

/**
 * qmi_message_nas_get_serving_system_output_get_hdr_personality:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_hdr_personality: a placeholder for the output #QmiNasHdrPersonality, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'HDR Personality' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_hdr_personality (
    QmiMessageNasGetServingSystemOutput *self,
    QmiNasHdrPersonality *value_hdr_personality,
    GError **error);

/**
 * qmi_message_nas_get_serving_system_output_get_cdma_system_info:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_cdma_system_info_mcc: a placeholder for the output #guint16, or %NULL if not required.
 * @value_cdma_system_info_imsi_11_12: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA System Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_cdma_system_info (
    QmiMessageNasGetServingSystemOutput *self,
    guint16 *value_cdma_system_info_mcc,
    guint8 *value_cdma_system_info_imsi_11_12,
    GError **error);

/**
 * qmi_message_nas_get_serving_system_output_get_detailed_service_status:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_detailed_service_status_status: a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_detailed_service_status_capability: a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_detailed_service_status_hdr_status: a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_detailed_service_status_hdr_hybrid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_detailed_service_status_forbidden: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Detailed Service Status' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_detailed_service_status (
    QmiMessageNasGetServingSystemOutput *self,
    QmiNasServiceStatus *value_detailed_service_status_status,
    QmiNasNetworkServiceDomain *value_detailed_service_status_capability,
    QmiNasServiceStatus *value_detailed_service_status_hdr_status,
    gboolean *value_detailed_service_status_hdr_hybrid,
    gboolean *value_detailed_service_status_forbidden,
    GError **error);

/**
 * qmi_message_nas_get_serving_system_output_get_dtm_support:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_dtm_support: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'DTM Support' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_dtm_support (
    QmiMessageNasGetServingSystemOutput *self,
    gboolean *value_dtm_support,
    GError **error);

/**
 * qmi_message_nas_get_serving_system_output_get_prl_indicator_3gpp2:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_prl_indicator_3gpp2: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PRL Indicator 3GPP2' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_prl_indicator_3gpp2 (
    QmiMessageNasGetServingSystemOutput *self,
    gboolean *value_prl_indicator_3gpp2,
    GError **error);

/**
 * qmi_message_nas_get_serving_system_output_get_concurrent_service_info_3gpp2:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_concurrent_service_info_3gpp2: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Concurrent Service Info 3GPP2' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_concurrent_service_info_3gpp2 (
    QmiMessageNasGetServingSystemOutput *self,
    gboolean *value_concurrent_service_info_3gpp2,
    GError **error);

/**
 * qmi_message_nas_get_serving_system_output_get_cid_3gpp:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_cid_3gpp: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CID 3GPP' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_cid_3gpp (
    QmiMessageNasGetServingSystemOutput *self,
    guint32 *value_cid_3gpp,
    GError **error);

/**
 * qmi_message_nas_get_serving_system_output_get_lac_3gpp:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_lac_3gpp: a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LAC 3GPP' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_lac_3gpp (
    QmiMessageNasGetServingSystemOutput *self,
    guint16 *value_lac_3gpp,
    GError **error);

/**
 * qmi_message_nas_get_serving_system_output_get_daylight_saving_time_adjustment_3gpp:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_daylight_saving_time_adjustment_3gpp: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Daylight Saving Time Adjustment 3GPP' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_daylight_saving_time_adjustment_3gpp (
    QmiMessageNasGetServingSystemOutput *self,
    guint8 *value_daylight_saving_time_adjustment_3gpp,
    GError **error);

/**
 * qmi_message_nas_get_serving_system_output_get_time_zone_3gpp:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_time_zone_3gpp: a placeholder for the output #gint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Time Zone 3GPP' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_time_zone_3gpp (
    QmiMessageNasGetServingSystemOutput *self,
    gint8 *value_time_zone_3gpp,
    GError **error);

/**
 * qmi_message_nas_get_serving_system_output_get_cdma_p_rev:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_cdma_p_rev: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA P Rev' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_cdma_p_rev (
    QmiMessageNasGetServingSystemOutput *self,
    guint8 *value_cdma_p_rev,
    GError **error);

/**
 * qmi_message_nas_get_serving_system_output_get_time_zone_3gpp2:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_time_zone_3gpp2_leap_seconds: a placeholder for the output #guint8, or %NULL if not required.
 * @value_time_zone_3gpp2_local_time_offset: a placeholder for the output #gint8, or %NULL if not required.
 * @value_time_zone_3gpp2_daylight_saving_time: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Time Zone 3GPP2' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_time_zone_3gpp2 (
    QmiMessageNasGetServingSystemOutput *self,
    guint8 *value_time_zone_3gpp2_leap_seconds,
    gint8 *value_time_zone_3gpp2_local_time_offset,
    gboolean *value_time_zone_3gpp2_daylight_saving_time,
    GError **error);

/**
 * qmi_message_nas_get_serving_system_output_get_default_roaming_indicator:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_default_roaming_indicator: a placeholder for the output #QmiNasRoamingIndicatorStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Default Roaming Indicator' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_default_roaming_indicator (
    QmiMessageNasGetServingSystemOutput *self,
    QmiNasRoamingIndicatorStatus *value_default_roaming_indicator,
    GError **error);

/**
 * qmi_message_nas_get_serving_system_output_get_roaming_indicator_list:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_roaming_indicator_list: a placeholder for the output #GArray of #QmiMessageNasGetServingSystemOutputRoamingIndicatorListElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Roaming Indicator List' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_roaming_indicator_list (
    QmiMessageNasGetServingSystemOutput *self,
    GArray **value_roaming_indicator_list,
    GError **error);

/**
 * qmi_message_nas_get_serving_system_output_get_cdma_base_station_info:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_cdma_base_station_info_base_station_id: a placeholder for the output #guint16, or %NULL if not required.
 * @value_cdma_base_station_info_base_station_latitude: a placeholder for the output #gint32, or %NULL if not required.
 * @value_cdma_base_station_info_base_station_longitude: a placeholder for the output #gint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA Base Station Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_cdma_base_station_info (
    QmiMessageNasGetServingSystemOutput *self,
    guint16 *value_cdma_base_station_info_base_station_id,
    gint32 *value_cdma_base_station_info_base_station_latitude,
    gint32 *value_cdma_base_station_info_base_station_longitude,
    GError **error);

/**
 * qmi_message_nas_get_serving_system_output_get_cdma_system_id:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_cdma_system_id_sid: a placeholder for the output #guint16, or %NULL if not required.
 * @value_cdma_system_id_nid: a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA System ID' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_cdma_system_id (
    QmiMessageNasGetServingSystemOutput *self,
    guint16 *value_cdma_system_id_sid,
    guint16 *value_cdma_system_id_nid,
    GError **error);

/**
 * qmi_message_nas_get_serving_system_output_get_current_plmn:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_current_plmn_mcc: a placeholder for the output #guint16, or %NULL if not required.
 * @value_current_plmn_mnc: a placeholder for the output #guint16, or %NULL if not required.
 * @value_current_plmn_description: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Current PLMN' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_current_plmn (
    QmiMessageNasGetServingSystemOutput *self,
    guint16 *value_current_plmn_mcc,
    guint16 *value_current_plmn_mnc,
    const gchar **value_current_plmn_description,
    GError **error);

/**
 * qmi_message_nas_get_serving_system_output_get_data_service_capability:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_data_service_capability: a placeholder for the output #GArray of #QmiNasDataCapability elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Data Service Capability' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_data_service_capability (
    QmiMessageNasGetServingSystemOutput *self,
    GArray **value_data_service_capability,
    GError **error);

/**
 * qmi_message_nas_get_serving_system_output_get_roaming_indicator:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_roaming_indicator: a placeholder for the output #QmiNasRoamingIndicatorStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Roaming Indicator' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_roaming_indicator (
    QmiMessageNasGetServingSystemOutput *self,
    QmiNasRoamingIndicatorStatus *value_roaming_indicator,
    GError **error);

/**
 * qmi_message_nas_get_serving_system_output_get_result:
 * @self: a QmiMessageNasGetServingSystemOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_result (
    QmiMessageNasGetServingSystemOutput *self,
    GError **error);

/**
 * qmi_message_nas_get_serving_system_output_get_serving_system:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_serving_system_registration_state: a placeholder for the output #QmiNasRegistrationState, or %NULL if not required.
 * @value_serving_system_cs_attach_state: a placeholder for the output #QmiNasAttachState, or %NULL if not required.
 * @value_serving_system_ps_attach_state: a placeholder for the output #QmiNasAttachState, or %NULL if not required.
 * @value_serving_system_selected_network: a placeholder for the output #QmiNasNetworkType, or %NULL if not required.
 * @value_serving_system_radio_interfaces: a placeholder for the output #GArray of #QmiNasRadioInterface elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Serving System' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_serving_system (
    QmiMessageNasGetServingSystemOutput *self,
    QmiNasRegistrationState *value_serving_system_registration_state,
    QmiNasAttachState *value_serving_system_cs_attach_state,
    QmiNasAttachState *value_serving_system_ps_attach_state,
    QmiNasNetworkType *value_serving_system_selected_network,
    GArray **value_serving_system_radio_interfaces,
    GError **error);

/**
 * qmi_message_nas_get_serving_system_output_ref:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasGetServingSystemOutput *qmi_message_nas_get_serving_system_output_ref (QmiMessageNasGetServingSystemOutput *self);

/**
 * qmi_message_nas_get_serving_system_output_unref:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_get_serving_system_output_unref (QmiMessageNasGetServingSystemOutput *self);

/*****************************************************************************/
/* INDICATION: Qmi Indication NAS Serving System */


/* --- Output -- */

/**
 * QmiIndicationNasServingSystemOutputRoamingIndicatorListElement:
 * @radio_interface: a #QmiNasRadioInterface.
 * @roaming_indicator: a #QmiNasRoamingIndicatorStatus.
 *
 * A QmiIndicationNasServingSystemOutputRoamingIndicatorListElement struct.
 *
 * Since: 1.0
 */
typedef struct _QmiIndicationNasServingSystemOutputRoamingIndicatorListElement {
    QmiNasRadioInterface radio_interface;
    QmiNasRoamingIndicatorStatus roaming_indicator;
} QmiIndicationNasServingSystemOutputRoamingIndicatorListElement;

/**
 * QmiIndicationNasServingSystemOutput:
 *
 * The #QmiIndicationNasServingSystemOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiIndicationNasServingSystemOutput QmiIndicationNasServingSystemOutput;
GType qmi_indication_nas_serving_system_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_NAS_SERVING_SYSTEM_OUTPUT (qmi_indication_nas_serving_system_output_get_type ())

/**
 * qmi_indication_nas_serving_system_output_get_mnc_pcs_digit_include_status:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_mnc_pcs_digit_include_status_mcc: a placeholder for the output #guint16, or %NULL if not required.
 * @value_mnc_pcs_digit_include_status_mnc: a placeholder for the output #guint16, or %NULL if not required.
 * @value_mnc_pcs_digit_include_status_includes_pcs_digit: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'MNC PCS Digit Include Status' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_mnc_pcs_digit_include_status (
    QmiIndicationNasServingSystemOutput *self,
    guint16 *value_mnc_pcs_digit_include_status_mcc,
    guint16 *value_mnc_pcs_digit_include_status_mnc,
    gboolean *value_mnc_pcs_digit_include_status_includes_pcs_digit,
    GError **error);

/**
 * qmi_indication_nas_serving_system_output_get_umts_primary_scrambling_code:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_umts_primary_scrambling_code: a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Primary Scrambling Code' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_umts_primary_scrambling_code (
    QmiIndicationNasServingSystemOutput *self,
    guint16 *value_umts_primary_scrambling_code,
    GError **error);

/**
 * qmi_indication_nas_serving_system_output_get_plmn_not_changed_indication:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_plmn_not_changed_indication: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PLMN Not Changed Indication' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_plmn_not_changed_indication (
    QmiIndicationNasServingSystemOutput *self,
    gboolean *value_plmn_not_changed_indication,
    GError **error);

/**
 * qmi_indication_nas_serving_system_output_get_call_barring_status:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_call_barring_status_cs_status: a placeholder for the output #QmiNasCallBarringStatus, or %NULL if not required.
 * @value_call_barring_status_ps_status: a placeholder for the output #QmiNasCallBarringStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Call Barring Status' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_call_barring_status (
    QmiIndicationNasServingSystemOutput *self,
    QmiNasCallBarringStatus *value_call_barring_status_cs_status,
    QmiNasCallBarringStatus *value_call_barring_status_ps_status,
    GError **error);

/**
 * qmi_indication_nas_serving_system_output_get_lte_tac:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_lte_tac: a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE TAC' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_lte_tac (
    QmiIndicationNasServingSystemOutput *self,
    guint16 *value_lte_tac,
    GError **error);

/**
 * qmi_indication_nas_serving_system_output_get_hdr_personality:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_hdr_personality: a placeholder for the output #QmiNasHdrPersonality, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'HDR Personality' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_hdr_personality (
    QmiIndicationNasServingSystemOutput *self,
    QmiNasHdrPersonality *value_hdr_personality,
    GError **error);

/**
 * qmi_indication_nas_serving_system_output_get_cdma_system_info:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_cdma_system_info_mcc: a placeholder for the output #guint16, or %NULL if not required.
 * @value_cdma_system_info_imsi_11_12: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA System Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_cdma_system_info (
    QmiIndicationNasServingSystemOutput *self,
    guint16 *value_cdma_system_info_mcc,
    guint8 *value_cdma_system_info_imsi_11_12,
    GError **error);

/**
 * qmi_indication_nas_serving_system_output_get_detailed_service_status:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_detailed_service_status_status: a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_detailed_service_status_capability: a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_detailed_service_status_hdr_status: a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_detailed_service_status_hdr_hybrid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_detailed_service_status_forbidden: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Detailed Service Status' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_detailed_service_status (
    QmiIndicationNasServingSystemOutput *self,
    QmiNasServiceStatus *value_detailed_service_status_status,
    QmiNasNetworkServiceDomain *value_detailed_service_status_capability,
    QmiNasServiceStatus *value_detailed_service_status_hdr_status,
    gboolean *value_detailed_service_status_hdr_hybrid,
    gboolean *value_detailed_service_status_forbidden,
    GError **error);

/**
 * qmi_indication_nas_serving_system_output_get_dtm_support:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_dtm_support: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'DTM Support' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_dtm_support (
    QmiIndicationNasServingSystemOutput *self,
    gboolean *value_dtm_support,
    GError **error);

/**
 * qmi_indication_nas_serving_system_output_get_prl_indicator_3gpp2:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_prl_indicator_3gpp2: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PRL Indicator 3GPP2' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_prl_indicator_3gpp2 (
    QmiIndicationNasServingSystemOutput *self,
    gboolean *value_prl_indicator_3gpp2,
    GError **error);

/**
 * qmi_indication_nas_serving_system_output_get_concurrent_service_info_3gpp2:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_concurrent_service_info_3gpp2: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Concurrent Service Info 3GPP2' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_concurrent_service_info_3gpp2 (
    QmiIndicationNasServingSystemOutput *self,
    gboolean *value_concurrent_service_info_3gpp2,
    GError **error);

/**
 * qmi_indication_nas_serving_system_output_get_cid_3gpp:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_cid_3gpp: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CID 3GPP' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_cid_3gpp (
    QmiIndicationNasServingSystemOutput *self,
    guint32 *value_cid_3gpp,
    GError **error);

/**
 * qmi_indication_nas_serving_system_output_get_lac_3gpp:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_lac_3gpp: a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LAC 3GPP' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_lac_3gpp (
    QmiIndicationNasServingSystemOutput *self,
    guint16 *value_lac_3gpp,
    GError **error);

/**
 * qmi_indication_nas_serving_system_output_get_universal_time_and_local_time_zone_3gpp:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_universal_time_and_local_time_zone_3gpp_year: a placeholder for the output #guint16, or %NULL if not required.
 * @value_universal_time_and_local_time_zone_3gpp_month: a placeholder for the output #guint8, or %NULL if not required.
 * @value_universal_time_and_local_time_zone_3gpp_day: a placeholder for the output #guint8, or %NULL if not required.
 * @value_universal_time_and_local_time_zone_3gpp_hour: a placeholder for the output #guint8, or %NULL if not required.
 * @value_universal_time_and_local_time_zone_3gpp_minute: a placeholder for the output #guint8, or %NULL if not required.
 * @value_universal_time_and_local_time_zone_3gpp_second: a placeholder for the output #guint8, or %NULL if not required.
 * @value_universal_time_and_local_time_zone_3gpp_time_zone: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Universal Time and Local Time Zone 3GPP' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_universal_time_and_local_time_zone_3gpp (
    QmiIndicationNasServingSystemOutput *self,
    guint16 *value_universal_time_and_local_time_zone_3gpp_year,
    guint8 *value_universal_time_and_local_time_zone_3gpp_month,
    guint8 *value_universal_time_and_local_time_zone_3gpp_day,
    guint8 *value_universal_time_and_local_time_zone_3gpp_hour,
    guint8 *value_universal_time_and_local_time_zone_3gpp_minute,
    guint8 *value_universal_time_and_local_time_zone_3gpp_second,
    guint8 *value_universal_time_and_local_time_zone_3gpp_time_zone,
    GError **error);

/**
 * qmi_indication_nas_serving_system_output_get_daylight_saving_time_adjustment_3gpp:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_daylight_saving_time_adjustment_3gpp: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Daylight Saving Time Adjustment 3GPP' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_daylight_saving_time_adjustment_3gpp (
    QmiIndicationNasServingSystemOutput *self,
    guint8 *value_daylight_saving_time_adjustment_3gpp,
    GError **error);

/**
 * qmi_indication_nas_serving_system_output_get_time_zone_3gpp:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_time_zone_3gpp: a placeholder for the output #gint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Time Zone 3GPP' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_time_zone_3gpp (
    QmiIndicationNasServingSystemOutput *self,
    gint8 *value_time_zone_3gpp,
    GError **error);

/**
 * qmi_indication_nas_serving_system_output_get_plmn_name_flag_3gpp:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_plmn_name_flag_3gpp: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PLMN Name Flag 3GPP' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_plmn_name_flag_3gpp (
    QmiIndicationNasServingSystemOutput *self,
    gboolean *value_plmn_name_flag_3gpp,
    GError **error);

/**
 * qmi_indication_nas_serving_system_output_get_cdma_p_rev:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_cdma_p_rev: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA P Rev' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_cdma_p_rev (
    QmiIndicationNasServingSystemOutput *self,
    guint8 *value_cdma_p_rev,
    GError **error);

/**
 * qmi_indication_nas_serving_system_output_get_time_zone_3gpp2:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_time_zone_3gpp2_leap_seconds: a placeholder for the output #guint8, or %NULL if not required.
 * @value_time_zone_3gpp2_local_time_offset: a placeholder for the output #gint8, or %NULL if not required.
 * @value_time_zone_3gpp2_daylight_saving_time: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Time Zone 3GPP2' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_time_zone_3gpp2 (
    QmiIndicationNasServingSystemOutput *self,
    guint8 *value_time_zone_3gpp2_leap_seconds,
    gint8 *value_time_zone_3gpp2_local_time_offset,
    gboolean *value_time_zone_3gpp2_daylight_saving_time,
    GError **error);

/**
 * qmi_indication_nas_serving_system_output_get_default_roaming_indicator:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_default_roaming_indicator: a placeholder for the output #QmiNasRoamingIndicatorStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Default Roaming Indicator' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_default_roaming_indicator (
    QmiIndicationNasServingSystemOutput *self,
    QmiNasRoamingIndicatorStatus *value_default_roaming_indicator,
    GError **error);

/**
 * qmi_indication_nas_serving_system_output_get_roaming_indicator_list:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_roaming_indicator_list: a placeholder for the output #GArray of #QmiIndicationNasServingSystemOutputRoamingIndicatorListElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Roaming Indicator List' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_roaming_indicator_list (
    QmiIndicationNasServingSystemOutput *self,
    GArray **value_roaming_indicator_list,
    GError **error);

/**
 * qmi_indication_nas_serving_system_output_get_cdma_base_station_info:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_cdma_base_station_info_base_station_id: a placeholder for the output #guint16, or %NULL if not required.
 * @value_cdma_base_station_info_base_station_latitude: a placeholder for the output #gint32, or %NULL if not required.
 * @value_cdma_base_station_info_base_station_longitude: a placeholder for the output #gint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA Base Station Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_cdma_base_station_info (
    QmiIndicationNasServingSystemOutput *self,
    guint16 *value_cdma_base_station_info_base_station_id,
    gint32 *value_cdma_base_station_info_base_station_latitude,
    gint32 *value_cdma_base_station_info_base_station_longitude,
    GError **error);

/**
 * qmi_indication_nas_serving_system_output_get_cdma_system_id:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_cdma_system_id_sid: a placeholder for the output #guint16, or %NULL if not required.
 * @value_cdma_system_id_nid: a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA System ID' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_cdma_system_id (
    QmiIndicationNasServingSystemOutput *self,
    guint16 *value_cdma_system_id_sid,
    guint16 *value_cdma_system_id_nid,
    GError **error);

/**
 * qmi_indication_nas_serving_system_output_get_current_plmn:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_current_plmn_mcc: a placeholder for the output #guint16, or %NULL if not required.
 * @value_current_plmn_mnc: a placeholder for the output #guint16, or %NULL if not required.
 * @value_current_plmn_description: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Current PLMN' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_current_plmn (
    QmiIndicationNasServingSystemOutput *self,
    guint16 *value_current_plmn_mcc,
    guint16 *value_current_plmn_mnc,
    const gchar **value_current_plmn_description,
    GError **error);

/**
 * qmi_indication_nas_serving_system_output_get_data_service_capability:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_data_service_capability: a placeholder for the output #GArray of #QmiNasDataCapability elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Data Service Capability' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_data_service_capability (
    QmiIndicationNasServingSystemOutput *self,
    GArray **value_data_service_capability,
    GError **error);

/**
 * qmi_indication_nas_serving_system_output_get_roaming_indicator:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_roaming_indicator: a placeholder for the output #QmiNasRoamingIndicatorStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Roaming Indicator' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_roaming_indicator (
    QmiIndicationNasServingSystemOutput *self,
    QmiNasRoamingIndicatorStatus *value_roaming_indicator,
    GError **error);

/**
 * qmi_indication_nas_serving_system_output_get_serving_system:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_serving_system_registration_state: a placeholder for the output #QmiNasRegistrationState, or %NULL if not required.
 * @value_serving_system_cs_attach_state: a placeholder for the output #QmiNasAttachState, or %NULL if not required.
 * @value_serving_system_ps_attach_state: a placeholder for the output #QmiNasAttachState, or %NULL if not required.
 * @value_serving_system_selected_network: a placeholder for the output #QmiNasNetworkType, or %NULL if not required.
 * @value_serving_system_radio_interfaces: a placeholder for the output #GArray of #QmiNasRadioInterface elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Serving System' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_serving_system (
    QmiIndicationNasServingSystemOutput *self,
    QmiNasRegistrationState *value_serving_system_registration_state,
    QmiNasAttachState *value_serving_system_cs_attach_state,
    QmiNasAttachState *value_serving_system_ps_attach_state,
    QmiNasNetworkType *value_serving_system_selected_network,
    GArray **value_serving_system_radio_interfaces,
    GError **error);

/**
 * qmi_indication_nas_serving_system_output_ref:
 * @self: a #QmiIndicationNasServingSystemOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiIndicationNasServingSystemOutput *qmi_indication_nas_serving_system_output_ref (QmiIndicationNasServingSystemOutput *self);

/**
 * qmi_indication_nas_serving_system_output_unref:
 * @self: a #QmiIndicationNasServingSystemOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_indication_nas_serving_system_output_unref (QmiIndicationNasServingSystemOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Get Home Network */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageNasGetHomeNetworkOutput:
 *
 * The #QmiMessageNasGetHomeNetworkOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasGetHomeNetworkOutput QmiMessageNasGetHomeNetworkOutput;
GType qmi_message_nas_get_home_network_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_GET_HOME_NETWORK_OUTPUT (qmi_message_nas_get_home_network_output_get_type ())

/**
 * qmi_message_nas_get_home_network_output_get_home_network_3gpp_mnc:
 * @self: a #QmiMessageNasGetHomeNetworkOutput.
 * @value_home_network_3gpp_mnc_is_3gpp: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_home_network_3gpp_mnc_includes_pcs_digit: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Home Network 3GPP MNC' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_home_network_output_get_home_network_3gpp_mnc (
    QmiMessageNasGetHomeNetworkOutput *self,
    gboolean *value_home_network_3gpp_mnc_is_3gpp,
    gboolean *value_home_network_3gpp_mnc_includes_pcs_digit,
    GError **error);

/**
 * qmi_message_nas_get_home_network_output_get_home_network_3gpp2:
 * @self: a #QmiMessageNasGetHomeNetworkOutput.
 * @value_home_network_3gpp2_mcc: a placeholder for the output #guint16, or %NULL if not required.
 * @value_home_network_3gpp2_mnc: a placeholder for the output #guint16, or %NULL if not required.
 * @value_home_network_3gpp2_display_description: a placeholder for the output #QmiNasNetworkDescriptionDisplay, or %NULL if not required.
 * @value_home_network_3gpp2_description_encoding: a placeholder for the output #QmiNasNetworkDescriptionEncoding, or %NULL if not required.
 * @value_home_network_3gpp2_description: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Home Network 3GPP2' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_home_network_output_get_home_network_3gpp2 (
    QmiMessageNasGetHomeNetworkOutput *self,
    guint16 *value_home_network_3gpp2_mcc,
    guint16 *value_home_network_3gpp2_mnc,
    QmiNasNetworkDescriptionDisplay *value_home_network_3gpp2_display_description,
    QmiNasNetworkDescriptionEncoding *value_home_network_3gpp2_description_encoding,
    const gchar **value_home_network_3gpp2_description,
    GError **error);

/**
 * qmi_message_nas_get_home_network_output_get_home_system_id:
 * @self: a #QmiMessageNasGetHomeNetworkOutput.
 * @value_home_system_id_sid: a placeholder for the output #guint16, or %NULL if not required.
 * @value_home_system_id_nid: a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Home System ID' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_home_network_output_get_home_system_id (
    QmiMessageNasGetHomeNetworkOutput *self,
    guint16 *value_home_system_id_sid,
    guint16 *value_home_system_id_nid,
    GError **error);

/**
 * qmi_message_nas_get_home_network_output_get_result:
 * @self: a QmiMessageNasGetHomeNetworkOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_home_network_output_get_result (
    QmiMessageNasGetHomeNetworkOutput *self,
    GError **error);

/**
 * qmi_message_nas_get_home_network_output_get_home_network:
 * @self: a #QmiMessageNasGetHomeNetworkOutput.
 * @value_home_network_mcc: a placeholder for the output #guint16, or %NULL if not required.
 * @value_home_network_mnc: a placeholder for the output #guint16, or %NULL if not required.
 * @value_home_network_description: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Home Network' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_home_network_output_get_home_network (
    QmiMessageNasGetHomeNetworkOutput *self,
    guint16 *value_home_network_mcc,
    guint16 *value_home_network_mnc,
    const gchar **value_home_network_description,
    GError **error);

/**
 * qmi_message_nas_get_home_network_output_ref:
 * @self: a #QmiMessageNasGetHomeNetworkOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasGetHomeNetworkOutput *qmi_message_nas_get_home_network_output_ref (QmiMessageNasGetHomeNetworkOutput *self);

/**
 * qmi_message_nas_get_home_network_output_unref:
 * @self: a #QmiMessageNasGetHomeNetworkOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_get_home_network_output_unref (QmiMessageNasGetHomeNetworkOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Set Technology Preference */


/* --- Input -- */

/**
 * QmiMessageNasSetTechnologyPreferenceInput:
 *
 * The #QmiMessageNasSetTechnologyPreferenceInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasSetTechnologyPreferenceInput QmiMessageNasSetTechnologyPreferenceInput;
GType qmi_message_nas_set_technology_preference_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_SET_TECHNOLOGY_PREFERENCE_INPUT (qmi_message_nas_set_technology_preference_input_get_type ())

/**
 * qmi_message_nas_set_technology_preference_input_get_current:
 * @self: a #QmiMessageNasSetTechnologyPreferenceInput.
 * @value_current_technology_preference: a placeholder for the output #QmiNasRadioTechnologyPreference, or %NULL if not required.
 * @value_current_technology_preference_duration: a placeholder for the output #QmiNasPreferenceDuration, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Current' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_technology_preference_input_get_current (
    QmiMessageNasSetTechnologyPreferenceInput *self,
    QmiNasRadioTechnologyPreference *value_current_technology_preference,
    QmiNasPreferenceDuration *value_current_technology_preference_duration,
    GError **error);

/**
 * qmi_message_nas_set_technology_preference_input_set_current:
 * @self: a #QmiMessageNasSetTechnologyPreferenceInput.
 * @value_current_technology_preference: a #QmiNasRadioTechnologyPreference.
 * @value_current_technology_preference_duration: a #QmiNasPreferenceDuration.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Current' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_technology_preference_input_set_current (
    QmiMessageNasSetTechnologyPreferenceInput *self,
    QmiNasRadioTechnologyPreference value_current_technology_preference,
    QmiNasPreferenceDuration value_current_technology_preference_duration,
    GError **error);

/**
 * qmi_message_nas_set_technology_preference_input_ref:
 * @self: a #QmiMessageNasSetTechnologyPreferenceInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasSetTechnologyPreferenceInput *qmi_message_nas_set_technology_preference_input_ref (QmiMessageNasSetTechnologyPreferenceInput *self);

/**
 * qmi_message_nas_set_technology_preference_input_unref:
 * @self: a #QmiMessageNasSetTechnologyPreferenceInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_set_technology_preference_input_unref (QmiMessageNasSetTechnologyPreferenceInput *self);

/**
 * qmi_message_nas_set_technology_preference_input_new:
 *
 * Allocates a new #QmiMessageNasSetTechnologyPreferenceInput.
 *
 * Returns: the newly created #QmiMessageNasSetTechnologyPreferenceInput. The returned value should be freed with qmi_message_nas_set_technology_preference_input_unref().
 *
 * Since: 1.0
 */
QmiMessageNasSetTechnologyPreferenceInput *qmi_message_nas_set_technology_preference_input_new (void);

/* --- Output -- */

/**
 * QmiMessageNasSetTechnologyPreferenceOutput:
 *
 * The #QmiMessageNasSetTechnologyPreferenceOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasSetTechnologyPreferenceOutput QmiMessageNasSetTechnologyPreferenceOutput;
GType qmi_message_nas_set_technology_preference_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_SET_TECHNOLOGY_PREFERENCE_OUTPUT (qmi_message_nas_set_technology_preference_output_get_type ())

/**
 * qmi_message_nas_set_technology_preference_output_get_result:
 * @self: a QmiMessageNasSetTechnologyPreferenceOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_technology_preference_output_get_result (
    QmiMessageNasSetTechnologyPreferenceOutput *self,
    GError **error);

/**
 * qmi_message_nas_set_technology_preference_output_ref:
 * @self: a #QmiMessageNasSetTechnologyPreferenceOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasSetTechnologyPreferenceOutput *qmi_message_nas_set_technology_preference_output_ref (QmiMessageNasSetTechnologyPreferenceOutput *self);

/**
 * qmi_message_nas_set_technology_preference_output_unref:
 * @self: a #QmiMessageNasSetTechnologyPreferenceOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_set_technology_preference_output_unref (QmiMessageNasSetTechnologyPreferenceOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Get Technology Preference */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageNasGetTechnologyPreferenceOutput:
 *
 * The #QmiMessageNasGetTechnologyPreferenceOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasGetTechnologyPreferenceOutput QmiMessageNasGetTechnologyPreferenceOutput;
GType qmi_message_nas_get_technology_preference_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_GET_TECHNOLOGY_PREFERENCE_OUTPUT (qmi_message_nas_get_technology_preference_output_get_type ())

/**
 * qmi_message_nas_get_technology_preference_output_get_persistent:
 * @self: a #QmiMessageNasGetTechnologyPreferenceOutput.
 * @value_persistent: a placeholder for the output #QmiNasRadioTechnologyPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Persistent' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_technology_preference_output_get_persistent (
    QmiMessageNasGetTechnologyPreferenceOutput *self,
    QmiNasRadioTechnologyPreference *value_persistent,
    GError **error);

/**
 * qmi_message_nas_get_technology_preference_output_get_result:
 * @self: a QmiMessageNasGetTechnologyPreferenceOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_technology_preference_output_get_result (
    QmiMessageNasGetTechnologyPreferenceOutput *self,
    GError **error);

/**
 * qmi_message_nas_get_technology_preference_output_get_active:
 * @self: a #QmiMessageNasGetTechnologyPreferenceOutput.
 * @value_active_technology_preference: a placeholder for the output #QmiNasRadioTechnologyPreference, or %NULL if not required.
 * @value_active_technology_preference_duration: a placeholder for the output #QmiNasPreferenceDuration, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Active' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_technology_preference_output_get_active (
    QmiMessageNasGetTechnologyPreferenceOutput *self,
    QmiNasRadioTechnologyPreference *value_active_technology_preference,
    QmiNasPreferenceDuration *value_active_technology_preference_duration,
    GError **error);

/**
 * qmi_message_nas_get_technology_preference_output_ref:
 * @self: a #QmiMessageNasGetTechnologyPreferenceOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasGetTechnologyPreferenceOutput *qmi_message_nas_get_technology_preference_output_ref (QmiMessageNasGetTechnologyPreferenceOutput *self);

/**
 * qmi_message_nas_get_technology_preference_output_unref:
 * @self: a #QmiMessageNasGetTechnologyPreferenceOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_get_technology_preference_output_unref (QmiMessageNasGetTechnologyPreferenceOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Get RF Band Information */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageNasGetRfBandInformationOutputListElement:
 * @radio_interface: a #QmiNasRadioInterface.
 * @active_band_class: a #QmiNasActiveBand.
 * @active_channel: a #guint16.
 *
 * A QmiMessageNasGetRfBandInformationOutputListElement struct.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasGetRfBandInformationOutputListElement {
    QmiNasRadioInterface radio_interface;
    QmiNasActiveBand active_band_class;
    guint16 active_channel;
} QmiMessageNasGetRfBandInformationOutputListElement;

/**
 * QmiMessageNasGetRfBandInformationOutput:
 *
 * The #QmiMessageNasGetRfBandInformationOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasGetRfBandInformationOutput QmiMessageNasGetRfBandInformationOutput;
GType qmi_message_nas_get_rf_band_information_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_GET_RF_BAND_INFORMATION_OUTPUT (qmi_message_nas_get_rf_band_information_output_get_type ())

/**
 * qmi_message_nas_get_rf_band_information_output_get_list:
 * @self: a #QmiMessageNasGetRfBandInformationOutput.
 * @value_list: a placeholder for the output #GArray of #QmiMessageNasGetRfBandInformationOutputListElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'List' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_rf_band_information_output_get_list (
    QmiMessageNasGetRfBandInformationOutput *self,
    GArray **value_list,
    GError **error);

/**
 * qmi_message_nas_get_rf_band_information_output_get_result:
 * @self: a QmiMessageNasGetRfBandInformationOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_rf_band_information_output_get_result (
    QmiMessageNasGetRfBandInformationOutput *self,
    GError **error);

/**
 * qmi_message_nas_get_rf_band_information_output_ref:
 * @self: a #QmiMessageNasGetRfBandInformationOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasGetRfBandInformationOutput *qmi_message_nas_get_rf_band_information_output_ref (QmiMessageNasGetRfBandInformationOutput *self);

/**
 * qmi_message_nas_get_rf_band_information_output_unref:
 * @self: a #QmiMessageNasGetRfBandInformationOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_get_rf_band_information_output_unref (QmiMessageNasGetRfBandInformationOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Set System Selection Preference */


/* --- Input -- */

/**
 * QmiMessageNasSetSystemSelectionPreferenceInput:
 *
 * The #QmiMessageNasSetSystemSelectionPreferenceInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasSetSystemSelectionPreferenceInput QmiMessageNasSetSystemSelectionPreferenceInput;
GType qmi_message_nas_set_system_selection_preference_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_SET_SYSTEM_SELECTION_PREFERENCE_INPUT (qmi_message_nas_set_system_selection_preference_input_get_type ())

/**
 * qmi_message_nas_set_system_selection_preference_input_get_extended_lte_band_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_extended_lte_band_preference_mask_low: a placeholder for the output #guint64, or %NULL if not required.
 * @value_extended_lte_band_preference_mask_mid_low: a placeholder for the output #guint64, or %NULL if not required.
 * @value_extended_lte_band_preference_mask_mid_high: a placeholder for the output #guint64, or %NULL if not required.
 * @value_extended_lte_band_preference_mask_high: a placeholder for the output #guint64, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Extended LTE Band Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.20
 */
gboolean qmi_message_nas_set_system_selection_preference_input_get_extended_lte_band_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    guint64 *value_extended_lte_band_preference_mask_low,
    guint64 *value_extended_lte_band_preference_mask_mid_low,
    guint64 *value_extended_lte_band_preference_mask_mid_high,
    guint64 *value_extended_lte_band_preference_mask_high,
    GError **error);

/**
 * qmi_message_nas_set_system_selection_preference_input_set_extended_lte_band_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_extended_lte_band_preference_mask_low: a #guint64.
 * @value_extended_lte_band_preference_mask_mid_low: a #guint64.
 * @value_extended_lte_band_preference_mask_mid_high: a #guint64.
 * @value_extended_lte_band_preference_mask_high: a #guint64.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Extended LTE Band Preference' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.20
 */
gboolean qmi_message_nas_set_system_selection_preference_input_set_extended_lte_band_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    guint64 value_extended_lte_band_preference_mask_low,
    guint64 value_extended_lte_band_preference_mask_mid_low,
    guint64 value_extended_lte_band_preference_mask_mid_high,
    guint64 value_extended_lte_band_preference_mask_high,
    GError **error);

/**
 * qmi_message_nas_set_system_selection_preference_input_get_td_scdma_band_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_td_scdma_band_preference: a placeholder for the output #QmiNasTdScdmaBandPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'TD SCDMA Band Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_get_td_scdma_band_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasTdScdmaBandPreference *value_td_scdma_band_preference,
    GError **error);

/**
 * qmi_message_nas_set_system_selection_preference_input_set_td_scdma_band_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_td_scdma_band_preference: a #QmiNasTdScdmaBandPreference.
 * @error: Return location for error or %NULL.
 *
 * Set the 'TD SCDMA Band Preference' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_set_td_scdma_band_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasTdScdmaBandPreference value_td_scdma_band_preference,
    GError **error);

/**
 * qmi_message_nas_set_system_selection_preference_input_get_mnc_pds_digit_include_status:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_mnc_pds_digit_include_status: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'MNC PDS Digit Include Status' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_get_mnc_pds_digit_include_status (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    gboolean *value_mnc_pds_digit_include_status,
    GError **error);

/**
 * qmi_message_nas_set_system_selection_preference_input_set_mnc_pds_digit_include_status:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_mnc_pds_digit_include_status: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'MNC PDS Digit Include Status' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_set_mnc_pds_digit_include_status (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    gboolean value_mnc_pds_digit_include_status,
    GError **error);

/**
 * qmi_message_nas_set_system_selection_preference_input_get_gsm_wcdma_acquisition_order_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_gsm_wcdma_acquisition_order_preference: a placeholder for the output #QmiNasGsmWcdmaAcquisitionOrderPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GSM WCDMA Acquisition Order Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_get_gsm_wcdma_acquisition_order_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasGsmWcdmaAcquisitionOrderPreference *value_gsm_wcdma_acquisition_order_preference,
    GError **error);

/**
 * qmi_message_nas_set_system_selection_preference_input_set_gsm_wcdma_acquisition_order_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_gsm_wcdma_acquisition_order_preference: a #QmiNasGsmWcdmaAcquisitionOrderPreference.
 * @error: Return location for error or %NULL.
 *
 * Set the 'GSM WCDMA Acquisition Order Preference' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_set_gsm_wcdma_acquisition_order_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasGsmWcdmaAcquisitionOrderPreference value_gsm_wcdma_acquisition_order_preference,
    GError **error);

/**
 * qmi_message_nas_set_system_selection_preference_input_get_service_domain_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_service_domain_preference: a placeholder for the output #QmiNasServiceDomainPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Service Domain Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_get_service_domain_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasServiceDomainPreference *value_service_domain_preference,
    GError **error);

/**
 * qmi_message_nas_set_system_selection_preference_input_set_service_domain_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_service_domain_preference: a #QmiNasServiceDomainPreference.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Service Domain Preference' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_set_service_domain_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasServiceDomainPreference value_service_domain_preference,
    GError **error);

/**
 * qmi_message_nas_set_system_selection_preference_input_get_change_duration:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_change_duration: a placeholder for the output #QmiNasChangeDuration, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Change Duration' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_get_change_duration (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasChangeDuration *value_change_duration,
    GError **error);

/**
 * qmi_message_nas_set_system_selection_preference_input_set_change_duration:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_change_duration: a #QmiNasChangeDuration.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Change Duration' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_set_change_duration (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasChangeDuration value_change_duration,
    GError **error);

/**
 * qmi_message_nas_set_system_selection_preference_input_get_network_selection_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_network_selection_preference_mode: a placeholder for the output #QmiNasNetworkSelectionPreference, or %NULL if not required.
 * @value_network_selection_preference_mcc: a placeholder for the output #guint16, or %NULL if not required.
 * @value_network_selection_preference_mnc: a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Network Selection Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_get_network_selection_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasNetworkSelectionPreference *value_network_selection_preference_mode,
    guint16 *value_network_selection_preference_mcc,
    guint16 *value_network_selection_preference_mnc,
    GError **error);

/**
 * qmi_message_nas_set_system_selection_preference_input_set_network_selection_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_network_selection_preference_mode: a #QmiNasNetworkSelectionPreference.
 * @value_network_selection_preference_mcc: a #guint16.
 * @value_network_selection_preference_mnc: a #guint16.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Network Selection Preference' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_set_network_selection_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasNetworkSelectionPreference value_network_selection_preference_mode,
    guint16 value_network_selection_preference_mcc,
    guint16 value_network_selection_preference_mnc,
    GError **error);

/**
 * qmi_message_nas_set_system_selection_preference_input_get_lte_band_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_lte_band_preference: a placeholder for the output #QmiNasLteBandPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE Band Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_get_lte_band_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasLteBandPreference *value_lte_band_preference,
    GError **error);

/**
 * qmi_message_nas_set_system_selection_preference_input_set_lte_band_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_lte_band_preference: a #QmiNasLteBandPreference.
 * @error: Return location for error or %NULL.
 *
 * Set the 'LTE Band Preference' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_set_lte_band_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasLteBandPreference value_lte_band_preference,
    GError **error);

/**
 * qmi_message_nas_set_system_selection_preference_input_get_roaming_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_roaming_preference: a placeholder for the output #QmiNasRoamingPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Roaming Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_get_roaming_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasRoamingPreference *value_roaming_preference,
    GError **error);

/**
 * qmi_message_nas_set_system_selection_preference_input_set_roaming_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_roaming_preference: a #QmiNasRoamingPreference.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Roaming Preference' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_set_roaming_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasRoamingPreference value_roaming_preference,
    GError **error);

/**
 * qmi_message_nas_set_system_selection_preference_input_get_cdma_prl_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_cdma_prl_preference: a placeholder for the output #QmiNasCdmaPrlPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA PRL Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_get_cdma_prl_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasCdmaPrlPreference *value_cdma_prl_preference,
    GError **error);

/**
 * qmi_message_nas_set_system_selection_preference_input_set_cdma_prl_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_cdma_prl_preference: a #QmiNasCdmaPrlPreference.
 * @error: Return location for error or %NULL.
 *
 * Set the 'CDMA PRL Preference' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_set_cdma_prl_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasCdmaPrlPreference value_cdma_prl_preference,
    GError **error);

/**
 * qmi_message_nas_set_system_selection_preference_input_get_band_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_band_preference: a placeholder for the output #QmiNasBandPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Band Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_get_band_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasBandPreference *value_band_preference,
    GError **error);

/**
 * qmi_message_nas_set_system_selection_preference_input_set_band_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_band_preference: a #QmiNasBandPreference.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Band Preference' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_set_band_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasBandPreference value_band_preference,
    GError **error);

/**
 * qmi_message_nas_set_system_selection_preference_input_get_mode_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_mode_preference: a placeholder for the output #QmiNasRatModePreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Mode Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_get_mode_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasRatModePreference *value_mode_preference,
    GError **error);

/**
 * qmi_message_nas_set_system_selection_preference_input_set_mode_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_mode_preference: a #QmiNasRatModePreference.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Mode Preference' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_set_mode_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasRatModePreference value_mode_preference,
    GError **error);

/**
 * qmi_message_nas_set_system_selection_preference_input_get_emergency_mode:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_emergency_mode: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Emergency mode' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_get_emergency_mode (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    gboolean *value_emergency_mode,
    GError **error);

/**
 * qmi_message_nas_set_system_selection_preference_input_set_emergency_mode:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_emergency_mode: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Emergency mode' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_set_emergency_mode (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    gboolean value_emergency_mode,
    GError **error);

/**
 * qmi_message_nas_set_system_selection_preference_input_ref:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasSetSystemSelectionPreferenceInput *qmi_message_nas_set_system_selection_preference_input_ref (QmiMessageNasSetSystemSelectionPreferenceInput *self);

/**
 * qmi_message_nas_set_system_selection_preference_input_unref:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_set_system_selection_preference_input_unref (QmiMessageNasSetSystemSelectionPreferenceInput *self);

/**
 * qmi_message_nas_set_system_selection_preference_input_new:
 *
 * Allocates a new #QmiMessageNasSetSystemSelectionPreferenceInput.
 *
 * Returns: the newly created #QmiMessageNasSetSystemSelectionPreferenceInput. The returned value should be freed with qmi_message_nas_set_system_selection_preference_input_unref().
 *
 * Since: 1.0
 */
QmiMessageNasSetSystemSelectionPreferenceInput *qmi_message_nas_set_system_selection_preference_input_new (void);

/* --- Output -- */

/**
 * QmiMessageNasSetSystemSelectionPreferenceOutput:
 *
 * The #QmiMessageNasSetSystemSelectionPreferenceOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasSetSystemSelectionPreferenceOutput QmiMessageNasSetSystemSelectionPreferenceOutput;
GType qmi_message_nas_set_system_selection_preference_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_SET_SYSTEM_SELECTION_PREFERENCE_OUTPUT (qmi_message_nas_set_system_selection_preference_output_get_type ())

/**
 * qmi_message_nas_set_system_selection_preference_output_get_result:
 * @self: a QmiMessageNasSetSystemSelectionPreferenceOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_output_get_result (
    QmiMessageNasSetSystemSelectionPreferenceOutput *self,
    GError **error);

/**
 * qmi_message_nas_set_system_selection_preference_output_ref:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasSetSystemSelectionPreferenceOutput *qmi_message_nas_set_system_selection_preference_output_ref (QmiMessageNasSetSystemSelectionPreferenceOutput *self);

/**
 * qmi_message_nas_set_system_selection_preference_output_unref:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_set_system_selection_preference_output_unref (QmiMessageNasSetSystemSelectionPreferenceOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Get System Selection Preference */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageNasGetSystemSelectionPreferenceOutput:
 *
 * The #QmiMessageNasGetSystemSelectionPreferenceOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasGetSystemSelectionPreferenceOutput QmiMessageNasGetSystemSelectionPreferenceOutput;
GType qmi_message_nas_get_system_selection_preference_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_GET_SYSTEM_SELECTION_PREFERENCE_OUTPUT (qmi_message_nas_get_system_selection_preference_output_get_type ())

/**
 * qmi_message_nas_get_system_selection_preference_output_get_extended_lte_band_preference:
 * @self: a #QmiMessageNasGetSystemSelectionPreferenceOutput.
 * @value_extended_lte_band_preference_mask_low: a placeholder for the output #guint64, or %NULL if not required.
 * @value_extended_lte_band_preference_mask_mid_low: a placeholder for the output #guint64, or %NULL if not required.
 * @value_extended_lte_band_preference_mask_mid_high: a placeholder for the output #guint64, or %NULL if not required.
 * @value_extended_lte_band_preference_mask_high: a placeholder for the output #guint64, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Extended LTE Band Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.20
 */
gboolean qmi_message_nas_get_system_selection_preference_output_get_extended_lte_band_preference (
    QmiMessageNasGetSystemSelectionPreferenceOutput *self,
    guint64 *value_extended_lte_band_preference_mask_low,
    guint64 *value_extended_lte_band_preference_mask_mid_low,
    guint64 *value_extended_lte_band_preference_mask_mid_high,
    guint64 *value_extended_lte_band_preference_mask_high,
    GError **error);

/**
 * qmi_message_nas_get_system_selection_preference_output_get_manual_network_selection:
 * @self: a #QmiMessageNasGetSystemSelectionPreferenceOutput.
 * @value_manual_network_selection_mcc: a placeholder for the output #guint16, or %NULL if not required.
 * @value_manual_network_selection_mnc: a placeholder for the output #guint16, or %NULL if not required.
 * @value_manual_network_selection_includes_pcs_digit: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Manual Network Selection' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_selection_preference_output_get_manual_network_selection (
    QmiMessageNasGetSystemSelectionPreferenceOutput *self,
    guint16 *value_manual_network_selection_mcc,
    guint16 *value_manual_network_selection_mnc,
    gboolean *value_manual_network_selection_includes_pcs_digit,
    GError **error);

/**
 * qmi_message_nas_get_system_selection_preference_output_get_td_scdma_band_preference:
 * @self: a #QmiMessageNasGetSystemSelectionPreferenceOutput.
 * @value_td_scdma_band_preference: a placeholder for the output #QmiNasTdScdmaBandPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'TD SCDMA Band Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_selection_preference_output_get_td_scdma_band_preference (
    QmiMessageNasGetSystemSelectionPreferenceOutput *self,
    QmiNasTdScdmaBandPreference *value_td_scdma_band_preference,
    GError **error);

/**
 * qmi_message_nas_get_system_selection_preference_output_get_gsm_wcdma_acquisition_order_preference:
 * @self: a #QmiMessageNasGetSystemSelectionPreferenceOutput.
 * @value_gsm_wcdma_acquisition_order_preference: a placeholder for the output #QmiNasGsmWcdmaAcquisitionOrderPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GSM WCDMA Acquisition Order Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_selection_preference_output_get_gsm_wcdma_acquisition_order_preference (
    QmiMessageNasGetSystemSelectionPreferenceOutput *self,
    QmiNasGsmWcdmaAcquisitionOrderPreference *value_gsm_wcdma_acquisition_order_preference,
    GError **error);

/**
 * qmi_message_nas_get_system_selection_preference_output_get_service_domain_preference:
 * @self: a #QmiMessageNasGetSystemSelectionPreferenceOutput.
 * @value_service_domain_preference: a placeholder for the output #QmiNasServiceDomainPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Service Domain Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_selection_preference_output_get_service_domain_preference (
    QmiMessageNasGetSystemSelectionPreferenceOutput *self,
    QmiNasServiceDomainPreference *value_service_domain_preference,
    GError **error);

/**
 * qmi_message_nas_get_system_selection_preference_output_get_network_selection_preference:
 * @self: a #QmiMessageNasGetSystemSelectionPreferenceOutput.
 * @value_network_selection_preference: a placeholder for the output #QmiNasNetworkSelectionPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Network Selection Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_selection_preference_output_get_network_selection_preference (
    QmiMessageNasGetSystemSelectionPreferenceOutput *self,
    QmiNasNetworkSelectionPreference *value_network_selection_preference,
    GError **error);

/**
 * qmi_message_nas_get_system_selection_preference_output_get_lte_band_preference:
 * @self: a #QmiMessageNasGetSystemSelectionPreferenceOutput.
 * @value_lte_band_preference: a placeholder for the output #QmiNasLteBandPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE Band Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_selection_preference_output_get_lte_band_preference (
    QmiMessageNasGetSystemSelectionPreferenceOutput *self,
    QmiNasLteBandPreference *value_lte_band_preference,
    GError **error);

/**
 * qmi_message_nas_get_system_selection_preference_output_get_roaming_preference:
 * @self: a #QmiMessageNasGetSystemSelectionPreferenceOutput.
 * @value_roaming_preference: a placeholder for the output #QmiNasRoamingPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Roaming Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_selection_preference_output_get_roaming_preference (
    QmiMessageNasGetSystemSelectionPreferenceOutput *self,
    QmiNasRoamingPreference *value_roaming_preference,
    GError **error);

/**
 * qmi_message_nas_get_system_selection_preference_output_get_cdma_prl_preference:
 * @self: a #QmiMessageNasGetSystemSelectionPreferenceOutput.
 * @value_cdma_prl_preference: a placeholder for the output #QmiNasCdmaPrlPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA PRL Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_selection_preference_output_get_cdma_prl_preference (
    QmiMessageNasGetSystemSelectionPreferenceOutput *self,
    QmiNasCdmaPrlPreference *value_cdma_prl_preference,
    GError **error);

/**
 * qmi_message_nas_get_system_selection_preference_output_get_band_preference:
 * @self: a #QmiMessageNasGetSystemSelectionPreferenceOutput.
 * @value_band_preference: a placeholder for the output #QmiNasBandPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Band Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_selection_preference_output_get_band_preference (
    QmiMessageNasGetSystemSelectionPreferenceOutput *self,
    QmiNasBandPreference *value_band_preference,
    GError **error);

/**
 * qmi_message_nas_get_system_selection_preference_output_get_mode_preference:
 * @self: a #QmiMessageNasGetSystemSelectionPreferenceOutput.
 * @value_mode_preference: a placeholder for the output #QmiNasRatModePreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Mode Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_selection_preference_output_get_mode_preference (
    QmiMessageNasGetSystemSelectionPreferenceOutput *self,
    QmiNasRatModePreference *value_mode_preference,
    GError **error);

/**
 * qmi_message_nas_get_system_selection_preference_output_get_emergency_mode:
 * @self: a #QmiMessageNasGetSystemSelectionPreferenceOutput.
 * @value_emergency_mode: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Emergency mode' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_selection_preference_output_get_emergency_mode (
    QmiMessageNasGetSystemSelectionPreferenceOutput *self,
    gboolean *value_emergency_mode,
    GError **error);

/**
 * qmi_message_nas_get_system_selection_preference_output_get_result:
 * @self: a QmiMessageNasGetSystemSelectionPreferenceOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_selection_preference_output_get_result (
    QmiMessageNasGetSystemSelectionPreferenceOutput *self,
    GError **error);

/**
 * qmi_message_nas_get_system_selection_preference_output_ref:
 * @self: a #QmiMessageNasGetSystemSelectionPreferenceOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasGetSystemSelectionPreferenceOutput *qmi_message_nas_get_system_selection_preference_output_ref (QmiMessageNasGetSystemSelectionPreferenceOutput *self);

/**
 * qmi_message_nas_get_system_selection_preference_output_unref:
 * @self: a #QmiMessageNasGetSystemSelectionPreferenceOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_get_system_selection_preference_output_unref (QmiMessageNasGetSystemSelectionPreferenceOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Get Operator Name */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageNasGetOperatorNameOutputOperatorPlmnListElement:
 * @mcc: a string of exactly 3 characters.
 * @mnc: a string of exactly 3 characters.
 * @lac1: a #guint16.
 * @lac2: a #guint16.
 * @plmn_name_record_identifier: a #guint8.
 *
 * A QmiMessageNasGetOperatorNameOutputOperatorPlmnListElement struct.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageNasGetOperatorNameOutputOperatorPlmnListElement {
    gchar *mcc;
    gchar *mnc;
    guint16 lac1;
    guint16 lac2;
    guint8 plmn_name_record_identifier;
} QmiMessageNasGetOperatorNameOutputOperatorPlmnListElement;

/**
 * QmiMessageNasGetOperatorNameOutputOperatorPlmnNameElement:
 * @name_encoding: a #QmiNasPlmnEncodingScheme.
 * @short_country_initials: a #QmiNasPlmnNameCountryInitials.
 * @long_name_spare_bits: a #QmiNasPlmnNameSpareBits.
 * @short_name_spare_bits: a #QmiNasPlmnNameSpareBits.
 * @long_name: a #GArray of #guint8 elements.
 * @short_name: a #GArray of #guint8 elements.
 *
 * A QmiMessageNasGetOperatorNameOutputOperatorPlmnNameElement struct.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageNasGetOperatorNameOutputOperatorPlmnNameElement {
    QmiNasPlmnEncodingScheme name_encoding;
    QmiNasPlmnNameCountryInitials short_country_initials;
    QmiNasPlmnNameSpareBits long_name_spare_bits;
    QmiNasPlmnNameSpareBits short_name_spare_bits;
    GArray *long_name;
    GArray *short_name;
} QmiMessageNasGetOperatorNameOutputOperatorPlmnNameElement;

/**
 * QmiMessageNasGetOperatorNameOutput:
 *
 * The #QmiMessageNasGetOperatorNameOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageNasGetOperatorNameOutput QmiMessageNasGetOperatorNameOutput;
GType qmi_message_nas_get_operator_name_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_GET_OPERATOR_NAME_OUTPUT (qmi_message_nas_get_operator_name_output_get_type ())

/**
 * qmi_message_nas_get_operator_name_output_get_result:
 * @self: a QmiMessageNasGetOperatorNameOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean qmi_message_nas_get_operator_name_output_get_result (
    QmiMessageNasGetOperatorNameOutput *self,
    GError **error);

/**
 * qmi_message_nas_get_operator_name_output_get_service_provider_name:
 * @self: a #QmiMessageNasGetOperatorNameOutput.
 * @value_service_provider_name_name_display_condition: a placeholder for the output #QmiNasNetworkNameDisplayCondition, or %NULL if not required.
 * @value_service_provider_name_name: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Service Provider Name' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_nas_get_operator_name_output_get_service_provider_name (
    QmiMessageNasGetOperatorNameOutput *self,
    QmiNasNetworkNameDisplayCondition *value_service_provider_name_name_display_condition,
    const gchar **value_service_provider_name_name,
    GError **error);

/**
 * qmi_message_nas_get_operator_name_output_get_operator_plmn_list:
 * @self: a #QmiMessageNasGetOperatorNameOutput.
 * @value_operator_plmn_list: a placeholder for the output #GArray of #QmiMessageNasGetOperatorNameOutputOperatorPlmnListElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Operator PLMN List' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_nas_get_operator_name_output_get_operator_plmn_list (
    QmiMessageNasGetOperatorNameOutput *self,
    GArray **value_operator_plmn_list,
    GError **error);

/**
 * qmi_message_nas_get_operator_name_output_get_operator_plmn_name:
 * @self: a #QmiMessageNasGetOperatorNameOutput.
 * @value_operator_plmn_name: a placeholder for the output #GArray of #QmiMessageNasGetOperatorNameOutputOperatorPlmnNameElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Operator PLMN Name' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_nas_get_operator_name_output_get_operator_plmn_name (
    QmiMessageNasGetOperatorNameOutput *self,
    GArray **value_operator_plmn_name,
    GError **error);

/**
 * qmi_message_nas_get_operator_name_output_get_operator_string_name:
 * @self: a #QmiMessageNasGetOperatorNameOutput.
 * @value_operator_string_name: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Operator String Name' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_nas_get_operator_name_output_get_operator_string_name (
    QmiMessageNasGetOperatorNameOutput *self,
    const gchar **value_operator_string_name,
    GError **error);

/**
 * qmi_message_nas_get_operator_name_output_get_operator_nitz_information:
 * @self: a #QmiMessageNasGetOperatorNameOutput.
 * @value_operator_nitz_information_name_encoding: a placeholder for the output #QmiNasPlmnEncodingScheme, or %NULL if not required.
 * @value_operator_nitz_information_short_country_initials: a placeholder for the output #QmiNasPlmnNameCountryInitials, or %NULL if not required.
 * @value_operator_nitz_information_long_name_spare_bits: a placeholder for the output #QmiNasPlmnNameSpareBits, or %NULL if not required.
 * @value_operator_nitz_information_short_name_spare_bits: a placeholder for the output #QmiNasPlmnNameSpareBits, or %NULL if not required.
 * @value_operator_nitz_information_long_name: a placeholder for the output constant string, or %NULL if not required.
 * @value_operator_nitz_information_short_name: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Operator NITZ Information' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_nas_get_operator_name_output_get_operator_nitz_information (
    QmiMessageNasGetOperatorNameOutput *self,
    QmiNasPlmnEncodingScheme *value_operator_nitz_information_name_encoding,
    QmiNasPlmnNameCountryInitials *value_operator_nitz_information_short_country_initials,
    QmiNasPlmnNameSpareBits *value_operator_nitz_information_long_name_spare_bits,
    QmiNasPlmnNameSpareBits *value_operator_nitz_information_short_name_spare_bits,
    const gchar **value_operator_nitz_information_long_name,
    const gchar **value_operator_nitz_information_short_name,
    GError **error);

/**
 * qmi_message_nas_get_operator_name_output_ref:
 * @self: a #QmiMessageNasGetOperatorNameOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessageNasGetOperatorNameOutput *qmi_message_nas_get_operator_name_output_ref (QmiMessageNasGetOperatorNameOutput *self);

/**
 * qmi_message_nas_get_operator_name_output_unref:
 * @self: a #QmiMessageNasGetOperatorNameOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_nas_get_operator_name_output_unref (QmiMessageNasGetOperatorNameOutput *self);

/*****************************************************************************/
/* INDICATION: Qmi Indication NAS Operator Name */


/* --- Output -- */

/**
 * QmiIndicationNasOperatorNameOutputOperatorPlmnNameElement:
 * @name_encoding: a #QmiNasPlmnEncodingScheme.
 * @short_country_initials: a #QmiNasPlmnNameCountryInitials.
 * @long_name_spare_bits: a #QmiNasPlmnNameSpareBits.
 * @short_name_spare_bits: a #QmiNasPlmnNameSpareBits.
 * @long_name: a #GArray of #guint8 elements.
 * @short_name: a #GArray of #guint8 elements.
 *
 * A QmiIndicationNasOperatorNameOutputOperatorPlmnNameElement struct.
 *
 * Since: 1.18
 */
typedef struct _QmiIndicationNasOperatorNameOutputOperatorPlmnNameElement {
    QmiNasPlmnEncodingScheme name_encoding;
    QmiNasPlmnNameCountryInitials short_country_initials;
    QmiNasPlmnNameSpareBits long_name_spare_bits;
    QmiNasPlmnNameSpareBits short_name_spare_bits;
    GArray *long_name;
    GArray *short_name;
} QmiIndicationNasOperatorNameOutputOperatorPlmnNameElement;

/**
 * QmiIndicationNasOperatorNameOutputOperatorPlmnListElement:
 * @mcc: a string of exactly 3 characters.
 * @mnc: a string of exactly 3 characters.
 * @lac1: a #guint16.
 * @lac2: a #guint16.
 * @plmn_name_record_identifier: a #guint8.
 *
 * A QmiIndicationNasOperatorNameOutputOperatorPlmnListElement struct.
 *
 * Since: 1.18
 */
typedef struct _QmiIndicationNasOperatorNameOutputOperatorPlmnListElement {
    gchar *mcc;
    gchar *mnc;
    guint16 lac1;
    guint16 lac2;
    guint8 plmn_name_record_identifier;
} QmiIndicationNasOperatorNameOutputOperatorPlmnListElement;

/**
 * QmiIndicationNasOperatorNameOutput:
 *
 * The #QmiIndicationNasOperatorNameOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiIndicationNasOperatorNameOutput QmiIndicationNasOperatorNameOutput;
GType qmi_indication_nas_operator_name_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_NAS_OPERATOR_NAME_OUTPUT (qmi_indication_nas_operator_name_output_get_type ())

/**
 * qmi_indication_nas_operator_name_output_get_operator_nitz_information:
 * @self: a #QmiIndicationNasOperatorNameOutput.
 * @value_operator_nitz_information_name_encoding: a placeholder for the output #QmiNasPlmnEncodingScheme, or %NULL if not required.
 * @value_operator_nitz_information_short_country_initials: a placeholder for the output #QmiNasPlmnNameCountryInitials, or %NULL if not required.
 * @value_operator_nitz_information_long_name_spare_bits: a placeholder for the output #QmiNasPlmnNameSpareBits, or %NULL if not required.
 * @value_operator_nitz_information_short_name_spare_bits: a placeholder for the output #QmiNasPlmnNameSpareBits, or %NULL if not required.
 * @value_operator_nitz_information_long_name: a placeholder for the output constant string, or %NULL if not required.
 * @value_operator_nitz_information_short_name: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Operator NITZ Information' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_nas_operator_name_output_get_operator_nitz_information (
    QmiIndicationNasOperatorNameOutput *self,
    QmiNasPlmnEncodingScheme *value_operator_nitz_information_name_encoding,
    QmiNasPlmnNameCountryInitials *value_operator_nitz_information_short_country_initials,
    QmiNasPlmnNameSpareBits *value_operator_nitz_information_long_name_spare_bits,
    QmiNasPlmnNameSpareBits *value_operator_nitz_information_short_name_spare_bits,
    const gchar **value_operator_nitz_information_long_name,
    const gchar **value_operator_nitz_information_short_name,
    GError **error);

/**
 * qmi_indication_nas_operator_name_output_get_operator_string_name:
 * @self: a #QmiIndicationNasOperatorNameOutput.
 * @value_operator_string_name: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Operator String Name' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_nas_operator_name_output_get_operator_string_name (
    QmiIndicationNasOperatorNameOutput *self,
    const gchar **value_operator_string_name,
    GError **error);

/**
 * qmi_indication_nas_operator_name_output_get_operator_plmn_name:
 * @self: a #QmiIndicationNasOperatorNameOutput.
 * @value_operator_plmn_name: a placeholder for the output #GArray of #QmiIndicationNasOperatorNameOutputOperatorPlmnNameElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Operator PLMN Name' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_nas_operator_name_output_get_operator_plmn_name (
    QmiIndicationNasOperatorNameOutput *self,
    GArray **value_operator_plmn_name,
    GError **error);

/**
 * qmi_indication_nas_operator_name_output_get_operator_plmn_list:
 * @self: a #QmiIndicationNasOperatorNameOutput.
 * @value_operator_plmn_list: a placeholder for the output #GArray of #QmiIndicationNasOperatorNameOutputOperatorPlmnListElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Operator PLMN List' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_nas_operator_name_output_get_operator_plmn_list (
    QmiIndicationNasOperatorNameOutput *self,
    GArray **value_operator_plmn_list,
    GError **error);

/**
 * qmi_indication_nas_operator_name_output_get_service_provider_name:
 * @self: a #QmiIndicationNasOperatorNameOutput.
 * @value_service_provider_name_name_display_condition: a placeholder for the output #QmiNasNetworkNameDisplayCondition, or %NULL if not required.
 * @value_service_provider_name_name: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Service Provider Name' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_nas_operator_name_output_get_service_provider_name (
    QmiIndicationNasOperatorNameOutput *self,
    QmiNasNetworkNameDisplayCondition *value_service_provider_name_name_display_condition,
    const gchar **value_service_provider_name_name,
    GError **error);

/**
 * qmi_indication_nas_operator_name_output_ref:
 * @self: a #QmiIndicationNasOperatorNameOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiIndicationNasOperatorNameOutput *qmi_indication_nas_operator_name_output_ref (QmiIndicationNasOperatorNameOutput *self);

/**
 * qmi_indication_nas_operator_name_output_unref:
 * @self: a #QmiIndicationNasOperatorNameOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_indication_nas_operator_name_output_unref (QmiIndicationNasOperatorNameOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Get Cell Location Info */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageNasGetCellLocationInfoOutputUmtsInfoNeighboringLteFrequencyElement:
 * @eutra_absolute_rf_channel_number: a #guint16.
 * @physical_cell_id: a #guint16.
 * @rsrp: a #gfloat.
 * @rsrq: a #gfloat.
 * @cell_selection_rx_level: a #gint16.
 * @is_tdd: a #gboolean.
 *
 * A QmiMessageNasGetCellLocationInfoOutputUmtsInfoNeighboringLteFrequencyElement struct.
 *
 * Since: 1.10
 */
typedef struct _QmiMessageNasGetCellLocationInfoOutputUmtsInfoNeighboringLteFrequencyElement {
    guint16 eutra_absolute_rf_channel_number;
    guint16 physical_cell_id;
    gfloat rsrp;
    gfloat rsrq;
    gint16 cell_selection_rx_level;
    gboolean is_tdd;
} QmiMessageNasGetCellLocationInfoOutputUmtsInfoNeighboringLteFrequencyElement;

/**
 * QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringWcdmaFrequencyElementCellElement:
 * @primary_scrambling_code: a #guint16.
 * @cpich_rscp: a #gint16.
 * @cpich_ecno: a #gint16.
 * @cell_selection_rx_level: a #gint16.
 *
 * A QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringWcdmaFrequencyElementCellElement struct.
 *
 * Since: 1.10
 */
typedef struct _QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringWcdmaFrequencyElementCellElement {
    guint16 primary_scrambling_code;
    gint16 cpich_rscp;
    gint16 cpich_ecno;
    gint16 cell_selection_rx_level;
} QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringWcdmaFrequencyElementCellElement;

/**
 * QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringWcdmaFrequencyElement:
 * @utra_absolute_rf_channel_number: a #guint16.
 * @cell_reselection_priority: a #guint8.
 * @cell_reselection_high_threshold: a #guint16.
 * @cell_reselection_low_threshold: a #guint16.
 * @cell: a #GArray of #QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringWcdmaFrequencyElementCellElement elements.
 *
 * A QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringWcdmaFrequencyElement struct.
 *
 * Since: 1.10
 */
typedef struct _QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringWcdmaFrequencyElement {
    guint16 utra_absolute_rf_channel_number;
    guint8 cell_reselection_priority;
    guint16 cell_reselection_high_threshold;
    guint16 cell_reselection_low_threshold;
    GArray *cell;
} QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringWcdmaFrequencyElement;

/**
 * QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringGsmFrequencyElementCellElement:
 * @geran_absolute_rf_channel_number: a #guint16.
 * @band_is_1900: a #gboolean.
 * @cell_id_valid: a #gboolean.
 * @base_station_identity_code: a #guint8.
 * @rssi: a #gint16.
 * @cell_selection_rx_level: a #gint16.
 *
 * A QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringGsmFrequencyElementCellElement struct.
 *
 * Since: 1.10
 */
typedef struct _QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringGsmFrequencyElementCellElement {
    guint16 geran_absolute_rf_channel_number;
    gboolean band_is_1900;
    gboolean cell_id_valid;
    guint8 base_station_identity_code;
    gint16 rssi;
    gint16 cell_selection_rx_level;
} QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringGsmFrequencyElementCellElement;

/**
 * QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringGsmFrequencyElement:
 * @cell_reselection_priority: a #guint8.
 * @cell_reselection_high_threshold: a #guint8.
 * @cell_reselection_low_threshold: a #guint8.
 * @ncc_permitted: a #guint8.
 * @cell: a #GArray of #QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringGsmFrequencyElementCellElement elements.
 *
 * A QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringGsmFrequencyElement struct.
 *
 * Since: 1.10
 */
typedef struct _QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringGsmFrequencyElement {
    guint8 cell_reselection_priority;
    guint8 cell_reselection_high_threshold;
    guint8 cell_reselection_low_threshold;
    guint8 ncc_permitted;
    GArray *cell;
} QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringGsmFrequencyElement;

/**
 * QmiMessageNasGetCellLocationInfoOutputInterfrequencyLteInfoFrequencyElementCellElement:
 * @physical_cell_id: a #guint16.
 * @rsrq: a #gint16.
 * @rsrp: a #gint16.
 * @rssi: a #gint16.
 * @cell_selection_rx_level: a #gint16.
 *
 * A QmiMessageNasGetCellLocationInfoOutputInterfrequencyLteInfoFrequencyElementCellElement struct.
 *
 * Since: 1.10
 */
typedef struct _QmiMessageNasGetCellLocationInfoOutputInterfrequencyLteInfoFrequencyElementCellElement {
    guint16 physical_cell_id;
    gint16 rsrq;
    gint16 rsrp;
    gint16 rssi;
    gint16 cell_selection_rx_level;
} QmiMessageNasGetCellLocationInfoOutputInterfrequencyLteInfoFrequencyElementCellElement;

/**
 * QmiMessageNasGetCellLocationInfoOutputInterfrequencyLteInfoFrequencyElement:
 * @eutra_absolute_rf_channel_number: a #guint16.
 * @cell_selection_rx_level_low_threshold: a #guint8.
 * @cell_selection_rx_level_high_threshold: a #guint8.
 * @cell_reselection_priority: a #guint8.
 * @cell: a #GArray of #QmiMessageNasGetCellLocationInfoOutputInterfrequencyLteInfoFrequencyElementCellElement elements.
 *
 * A QmiMessageNasGetCellLocationInfoOutputInterfrequencyLteInfoFrequencyElement struct.
 *
 * Since: 1.10
 */
typedef struct _QmiMessageNasGetCellLocationInfoOutputInterfrequencyLteInfoFrequencyElement {
    guint16 eutra_absolute_rf_channel_number;
    guint8 cell_selection_rx_level_low_threshold;
    guint8 cell_selection_rx_level_high_threshold;
    guint8 cell_reselection_priority;
    GArray *cell;
} QmiMessageNasGetCellLocationInfoOutputInterfrequencyLteInfoFrequencyElement;

/**
 * QmiMessageNasGetCellLocationInfoOutputIntrafrequencyLteInfoCellElement:
 * @physical_cell_id: a #guint16.
 * @rsrq: a #gint16.
 * @rsrp: a #gint16.
 * @rssi: a #gint16.
 * @cell_selection_rx_level: a #gint16.
 *
 * A QmiMessageNasGetCellLocationInfoOutputIntrafrequencyLteInfoCellElement struct.
 *
 * Since: 1.10
 */
typedef struct _QmiMessageNasGetCellLocationInfoOutputIntrafrequencyLteInfoCellElement {
    guint16 physical_cell_id;
    gint16 rsrq;
    gint16 rsrp;
    gint16 rssi;
    gint16 cell_selection_rx_level;
} QmiMessageNasGetCellLocationInfoOutputIntrafrequencyLteInfoCellElement;

/**
 * QmiMessageNasGetCellLocationInfoOutputUmtsInfoCellElement:
 * @utra_absolute_rf_channel_number: a #guint16.
 * @primary_scrambling_code: a #guint16.
 * @rscp: a #gint16.
 * @ecio: a #gint16.
 *
 * A QmiMessageNasGetCellLocationInfoOutputUmtsInfoCellElement struct.
 *
 * Since: 1.10
 */
typedef struct _QmiMessageNasGetCellLocationInfoOutputUmtsInfoCellElement {
    guint16 utra_absolute_rf_channel_number;
    guint16 primary_scrambling_code;
    gint16 rscp;
    gint16 ecio;
} QmiMessageNasGetCellLocationInfoOutputUmtsInfoCellElement;

/**
 * QmiMessageNasGetCellLocationInfoOutputUmtsInfoNeighboringGeranElement:
 * @geran_absolute_rf_channel_number: a #guint16.
 * @network_color_code: a #guint8.
 * @base_station_color_code: a #guint8.
 * @rssi: a #gint16.
 *
 * A QmiMessageNasGetCellLocationInfoOutputUmtsInfoNeighboringGeranElement struct.
 *
 * Since: 1.10
 */
typedef struct _QmiMessageNasGetCellLocationInfoOutputUmtsInfoNeighboringGeranElement {
    guint16 geran_absolute_rf_channel_number;
    guint8 network_color_code;
    guint8 base_station_color_code;
    gint16 rssi;
} QmiMessageNasGetCellLocationInfoOutputUmtsInfoNeighboringGeranElement;

/**
 * QmiMessageNasGetCellLocationInfoOutputGeranInfoCellElement:
 * @cell_id: a #guint32.
 * @plmn: a string of exactly 3 characters.
 * @lac: a #guint16.
 * @geran_absolute_rf_channel_number: a #guint16.
 * @base_station_identity_code: a #guint8.
 * @rx_level: a #guint16.
 *
 * A QmiMessageNasGetCellLocationInfoOutputGeranInfoCellElement struct.
 *
 * Since: 1.10
 */
typedef struct _QmiMessageNasGetCellLocationInfoOutputGeranInfoCellElement {
    guint32 cell_id;
    gchar *plmn;
    guint16 lac;
    guint16 geran_absolute_rf_channel_number;
    guint8 base_station_identity_code;
    guint16 rx_level;
} QmiMessageNasGetCellLocationInfoOutputGeranInfoCellElement;

/**
 * QmiMessageNasGetCellLocationInfoOutput:
 *
 * The #QmiMessageNasGetCellLocationInfoOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.10
 */
typedef struct _QmiMessageNasGetCellLocationInfoOutput QmiMessageNasGetCellLocationInfoOutput;
GType qmi_message_nas_get_cell_location_info_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_GET_CELL_LOCATION_INFO_OUTPUT (qmi_message_nas_get_cell_location_info_output_get_type ())

/**
 * qmi_message_nas_get_cell_location_info_output_get_umts_info_neighboring_lte:
 * @self: a #QmiMessageNasGetCellLocationInfoOutput.
 * @value_umts_info_neighboring_lte_rrc_state: a placeholder for the output #QmiNasWcdmaRrcState, or %NULL if not required.
 * @value_umts_info_neighboring_lte_frequency: a placeholder for the output #GArray of #QmiMessageNasGetCellLocationInfoOutputUmtsInfoNeighboringLteFrequencyElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Info Neighboring LTE' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_nas_get_cell_location_info_output_get_umts_info_neighboring_lte (
    QmiMessageNasGetCellLocationInfoOutput *self,
    QmiNasWcdmaRrcState *value_umts_info_neighboring_lte_rrc_state,
    GArray **value_umts_info_neighboring_lte_frequency,
    GError **error);

/**
 * qmi_message_nas_get_cell_location_info_output_get_umts_cell_id:
 * @self: a #QmiMessageNasGetCellLocationInfoOutput.
 * @value_umts_cell_id: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Cell ID' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_nas_get_cell_location_info_output_get_umts_cell_id (
    QmiMessageNasGetCellLocationInfoOutput *self,
    guint32 *value_umts_cell_id,
    GError **error);

/**
 * qmi_message_nas_get_cell_location_info_output_get_lte_info_neighboring_wcdma:
 * @self: a #QmiMessageNasGetCellLocationInfoOutput.
 * @value_lte_info_neighboring_wcdma_ue_in_idle: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_info_neighboring_wcdma_frequency: a placeholder for the output #GArray of #QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringWcdmaFrequencyElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE Info Neighboring WCDMA' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_nas_get_cell_location_info_output_get_lte_info_neighboring_wcdma (
    QmiMessageNasGetCellLocationInfoOutput *self,
    gboolean *value_lte_info_neighboring_wcdma_ue_in_idle,
    GArray **value_lte_info_neighboring_wcdma_frequency,
    GError **error);

/**
 * qmi_message_nas_get_cell_location_info_output_get_lte_info_neighboring_gsm:
 * @self: a #QmiMessageNasGetCellLocationInfoOutput.
 * @value_lte_info_neighboring_gsm_ue_in_idle: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_info_neighboring_gsm_frequency: a placeholder for the output #GArray of #QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringGsmFrequencyElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE Info Neighboring GSM' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_nas_get_cell_location_info_output_get_lte_info_neighboring_gsm (
    QmiMessageNasGetCellLocationInfoOutput *self,
    gboolean *value_lte_info_neighboring_gsm_ue_in_idle,
    GArray **value_lte_info_neighboring_gsm_frequency,
    GError **error);

/**
 * qmi_message_nas_get_cell_location_info_output_get_interfrequency_lte_info:
 * @self: a #QmiMessageNasGetCellLocationInfoOutput.
 * @value_interfrequency_lte_info_ue_in_idle: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_interfrequency_lte_info_frequency: a placeholder for the output #GArray of #QmiMessageNasGetCellLocationInfoOutputInterfrequencyLteInfoFrequencyElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Interfrequency LTE Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_nas_get_cell_location_info_output_get_interfrequency_lte_info (
    QmiMessageNasGetCellLocationInfoOutput *self,
    gboolean *value_interfrequency_lte_info_ue_in_idle,
    GArray **value_interfrequency_lte_info_frequency,
    GError **error);

/**
 * qmi_message_nas_get_cell_location_info_output_get_intrafrequency_lte_info:
 * @self: a #QmiMessageNasGetCellLocationInfoOutput.
 * @value_intrafrequency_lte_info_ue_in_idle: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_intrafrequency_lte_info_plmn: a placeholder for the output constant string, or %NULL if not required.
 * @value_intrafrequency_lte_info_tracking_area_code: a placeholder for the output #guint16, or %NULL if not required.
 * @value_intrafrequency_lte_info_global_cell_id: a placeholder for the output #guint32, or %NULL if not required.
 * @value_intrafrequency_lte_info_eutra_absolute_rf_channel_number: a placeholder for the output #guint16, or %NULL if not required.
 * @value_intrafrequency_lte_info_serving_cell_id: a placeholder for the output #guint16, or %NULL if not required.
 * @value_intrafrequency_lte_info_cell_reselection_priority: a placeholder for the output #guint8, or %NULL if not required.
 * @value_intrafrequency_lte_info_s_non_intra_search_threshold: a placeholder for the output #guint8, or %NULL if not required.
 * @value_intrafrequency_lte_info_serving_cell_low_threshold: a placeholder for the output #guint8, or %NULL if not required.
 * @value_intrafrequency_lte_info_s_intra_search_threshold: a placeholder for the output #guint8, or %NULL if not required.
 * @value_intrafrequency_lte_info_cell: a placeholder for the output #GArray of #QmiMessageNasGetCellLocationInfoOutputIntrafrequencyLteInfoCellElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Intrafrequency LTE Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_nas_get_cell_location_info_output_get_intrafrequency_lte_info (
    QmiMessageNasGetCellLocationInfoOutput *self,
    gboolean *value_intrafrequency_lte_info_ue_in_idle,
    const gchar **value_intrafrequency_lte_info_plmn,
    guint16 *value_intrafrequency_lte_info_tracking_area_code,
    guint32 *value_intrafrequency_lte_info_global_cell_id,
    guint16 *value_intrafrequency_lte_info_eutra_absolute_rf_channel_number,
    guint16 *value_intrafrequency_lte_info_serving_cell_id,
    guint8 *value_intrafrequency_lte_info_cell_reselection_priority,
    guint8 *value_intrafrequency_lte_info_s_non_intra_search_threshold,
    guint8 *value_intrafrequency_lte_info_serving_cell_low_threshold,
    guint8 *value_intrafrequency_lte_info_s_intra_search_threshold,
    GArray **value_intrafrequency_lte_info_cell,
    GError **error);

/**
 * qmi_message_nas_get_cell_location_info_output_get_cdma_info:
 * @self: a #QmiMessageNasGetCellLocationInfoOutput.
 * @value_cdma_info_system_id: a placeholder for the output #guint16, or %NULL if not required.
 * @value_cdma_info_network_id: a placeholder for the output #guint16, or %NULL if not required.
 * @value_cdma_info_base_station_id: a placeholder for the output #guint16, or %NULL if not required.
 * @value_cdma_info_reference_pn: a placeholder for the output #guint16, or %NULL if not required.
 * @value_cdma_info_latitude: a placeholder for the output #guint32, or %NULL if not required.
 * @value_cdma_info_longitude: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_nas_get_cell_location_info_output_get_cdma_info (
    QmiMessageNasGetCellLocationInfoOutput *self,
    guint16 *value_cdma_info_system_id,
    guint16 *value_cdma_info_network_id,
    guint16 *value_cdma_info_base_station_id,
    guint16 *value_cdma_info_reference_pn,
    guint32 *value_cdma_info_latitude,
    guint32 *value_cdma_info_longitude,
    GError **error);

/**
 * qmi_message_nas_get_cell_location_info_output_get_umts_info:
 * @self: a #QmiMessageNasGetCellLocationInfoOutput.
 * @value_umts_info_cell_id: a placeholder for the output #guint16, or %NULL if not required.
 * @value_umts_info_plmn: a placeholder for the output constant string, or %NULL if not required.
 * @value_umts_info_lac: a placeholder for the output #guint16, or %NULL if not required.
 * @value_umts_info_utra_absolute_rf_channel_number: a placeholder for the output #guint16, or %NULL if not required.
 * @value_umts_info_primary_scrambling_code: a placeholder for the output #guint16, or %NULL if not required.
 * @value_umts_info_rscp: a placeholder for the output #gint16, or %NULL if not required.
 * @value_umts_info_ecio: a placeholder for the output #gint16, or %NULL if not required.
 * @value_umts_info_cell: a placeholder for the output #GArray of #QmiMessageNasGetCellLocationInfoOutputUmtsInfoCellElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @value_umts_info_neighboring_geran: a placeholder for the output #GArray of #QmiMessageNasGetCellLocationInfoOutputUmtsInfoNeighboringGeranElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_nas_get_cell_location_info_output_get_umts_info (
    QmiMessageNasGetCellLocationInfoOutput *self,
    guint16 *value_umts_info_cell_id,
    const gchar **value_umts_info_plmn,
    guint16 *value_umts_info_lac,
    guint16 *value_umts_info_utra_absolute_rf_channel_number,
    guint16 *value_umts_info_primary_scrambling_code,
    gint16 *value_umts_info_rscp,
    gint16 *value_umts_info_ecio,
    GArray **value_umts_info_cell,
    GArray **value_umts_info_neighboring_geran,
    GError **error);

/**
 * qmi_message_nas_get_cell_location_info_output_get_geran_info:
 * @self: a #QmiMessageNasGetCellLocationInfoOutput.
 * @value_geran_info_cell_id: a placeholder for the output #guint32, or %NULL if not required.
 * @value_geran_info_plmn: a placeholder for the output constant string, or %NULL if not required.
 * @value_geran_info_lac: a placeholder for the output #guint16, or %NULL if not required.
 * @value_geran_info_geran_absolute_rf_channel_number: a placeholder for the output #guint16, or %NULL if not required.
 * @value_geran_info_base_station_identity_code: a placeholder for the output #guint8, or %NULL if not required.
 * @value_geran_info_timing_advance: a placeholder for the output #guint32, or %NULL if not required.
 * @value_geran_info_rx_level: a placeholder for the output #guint16, or %NULL if not required.
 * @value_geran_info_cell: a placeholder for the output #GArray of #QmiMessageNasGetCellLocationInfoOutputGeranInfoCellElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GERAN Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_nas_get_cell_location_info_output_get_geran_info (
    QmiMessageNasGetCellLocationInfoOutput *self,
    guint32 *value_geran_info_cell_id,
    const gchar **value_geran_info_plmn,
    guint16 *value_geran_info_lac,
    guint16 *value_geran_info_geran_absolute_rf_channel_number,
    guint8 *value_geran_info_base_station_identity_code,
    guint32 *value_geran_info_timing_advance,
    guint16 *value_geran_info_rx_level,
    GArray **value_geran_info_cell,
    GError **error);

/**
 * qmi_message_nas_get_cell_location_info_output_get_result:
 * @self: a QmiMessageNasGetCellLocationInfoOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.10
 */
gboolean qmi_message_nas_get_cell_location_info_output_get_result (
    QmiMessageNasGetCellLocationInfoOutput *self,
    GError **error);

/**
 * qmi_message_nas_get_cell_location_info_output_ref:
 * @self: a #QmiMessageNasGetCellLocationInfoOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.10
 */
QmiMessageNasGetCellLocationInfoOutput *qmi_message_nas_get_cell_location_info_output_ref (QmiMessageNasGetCellLocationInfoOutput *self);

/**
 * qmi_message_nas_get_cell_location_info_output_unref:
 * @self: a #QmiMessageNasGetCellLocationInfoOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.10
 */
void qmi_message_nas_get_cell_location_info_output_unref (QmiMessageNasGetCellLocationInfoOutput *self);

/*****************************************************************************/
/* INDICATION: Qmi Indication NAS Network Time */


/* --- Output -- */

/**
 * QmiIndicationNasNetworkTimeOutput:
 *
 * The #QmiIndicationNasNetworkTimeOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiIndicationNasNetworkTimeOutput QmiIndicationNasNetworkTimeOutput;
GType qmi_indication_nas_network_time_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_NAS_NETWORK_TIME_OUTPUT (qmi_indication_nas_network_time_output_get_type ())

/**
 * qmi_indication_nas_network_time_output_get_radio_interface:
 * @self: a #QmiIndicationNasNetworkTimeOutput.
 * @value_radio_interface: a placeholder for the output #QmiNasRadioInterface, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Radio Interface' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.4
 */
gboolean qmi_indication_nas_network_time_output_get_radio_interface (
    QmiIndicationNasNetworkTimeOutput *self,
    QmiNasRadioInterface *value_radio_interface,
    GError **error);

/**
 * qmi_indication_nas_network_time_output_get_daylight_savings_adjustment:
 * @self: a #QmiIndicationNasNetworkTimeOutput.
 * @value_daylight_savings_adjustment: a placeholder for the output #QmiNasDaylightSavingsAdjustment, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Daylight Savings Adjustment' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.4
 */
gboolean qmi_indication_nas_network_time_output_get_daylight_savings_adjustment (
    QmiIndicationNasNetworkTimeOutput *self,
    QmiNasDaylightSavingsAdjustment *value_daylight_savings_adjustment,
    GError **error);

/**
 * qmi_indication_nas_network_time_output_get_timezone_offset:
 * @self: a #QmiIndicationNasNetworkTimeOutput.
 * @value_timezone_offset: a placeholder for the output #gint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Timezone Offset' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.4
 */
gboolean qmi_indication_nas_network_time_output_get_timezone_offset (
    QmiIndicationNasNetworkTimeOutput *self,
    gint8 *value_timezone_offset,
    GError **error);

/**
 * qmi_indication_nas_network_time_output_get_universal_time:
 * @self: a #QmiIndicationNasNetworkTimeOutput.
 * @value_universal_time_year: a placeholder for the output #guint16, or %NULL if not required.
 * @value_universal_time_month: a placeholder for the output #guint8, or %NULL if not required.
 * @value_universal_time_day: a placeholder for the output #guint8, or %NULL if not required.
 * @value_universal_time_hour: a placeholder for the output #guint8, or %NULL if not required.
 * @value_universal_time_minute: a placeholder for the output #guint8, or %NULL if not required.
 * @value_universal_time_second: a placeholder for the output #guint8, or %NULL if not required.
 * @value_universal_time_day_of_week: a placeholder for the output #QmiNasDayOfWeek, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Universal Time' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.4
 */
gboolean qmi_indication_nas_network_time_output_get_universal_time (
    QmiIndicationNasNetworkTimeOutput *self,
    guint16 *value_universal_time_year,
    guint8 *value_universal_time_month,
    guint8 *value_universal_time_day,
    guint8 *value_universal_time_hour,
    guint8 *value_universal_time_minute,
    guint8 *value_universal_time_second,
    QmiNasDayOfWeek *value_universal_time_day_of_week,
    GError **error);

/**
 * qmi_indication_nas_network_time_output_ref:
 * @self: a #QmiIndicationNasNetworkTimeOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiIndicationNasNetworkTimeOutput *qmi_indication_nas_network_time_output_ref (QmiIndicationNasNetworkTimeOutput *self);

/**
 * qmi_indication_nas_network_time_output_unref:
 * @self: a #QmiIndicationNasNetworkTimeOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_indication_nas_network_time_output_unref (QmiIndicationNasNetworkTimeOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Get System Info */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageNasGetSystemInfoOutput:
 *
 * The #QmiMessageNasGetSystemInfoOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasGetSystemInfoOutput QmiMessageNasGetSystemInfoOutput;
GType qmi_message_nas_get_system_info_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_GET_SYSTEM_INFO_OUTPUT (qmi_message_nas_get_system_info_output_get_type ())

/**
 * qmi_message_nas_get_system_info_output_get_sim_reject_info:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_sim_reject_info: a placeholder for the output #QmiNasSimRejectState, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'SIM Reject Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_sim_reject_info (
    QmiMessageNasGetSystemInfoOutput *self,
    QmiNasSimRejectState *value_sim_reject_info,
    GError **error);

/**
 * qmi_message_nas_get_system_info_output_get_lte_embms_coverage_info_support:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_lte_embms_coverage_info_support: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE eMBMS Coverage Info Support' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_lte_embms_coverage_info_support (
    QmiMessageNasGetSystemInfoOutput *self,
    gboolean *value_lte_embms_coverage_info_support,
    GError **error);

/**
 * qmi_message_nas_get_system_info_output_get_td_scdma_system_info:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_td_scdma_system_info_domain_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scdma_system_info_domain: a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_td_scdma_system_info_service_capability_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scdma_system_info_service_capability: a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_td_scdma_system_info_roaming_status_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scdma_system_info_roaming_status: a placeholder for the output #QmiNasRoamingStatus, or %NULL if not required.
 * @value_td_scdma_system_info_forbidden_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scdma_system_info_forbidden: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scdma_system_info_lac_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scdma_system_info_lac: a placeholder for the output #guint16, or %NULL if not required.
 * @value_td_scdma_system_info_cid_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scdma_system_info_cid: a placeholder for the output #guint32, or %NULL if not required.
 * @value_td_scdma_system_info_registration_reject_info_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scdma_system_info_registration_reject_domain: a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_td_scdma_system_info_registration_reject_cause: a placeholder for the output #guint8, or %NULL if not required.
 * @value_td_scdma_system_info_network_id_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scdma_system_info_mcc: a placeholder for the output constant string, or %NULL if not required.
 * @value_td_scdma_system_info_mnc: a placeholder for the output constant string, or %NULL if not required.
 * @value_td_scdma_system_info_hs_call_status_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scdma_system_info_hs_call_status: a placeholder for the output #QmiNasWcdmaHsService, or %NULL if not required.
 * @value_td_scdma_system_info_hs_service_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scdma_system_info_hs_service: a placeholder for the output #QmiNasWcdmaHsService, or %NULL if not required.
 * @value_td_scdma_system_info_cell_parameter_id_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scdma_system_info_cell_parameter_id: a placeholder for the output #guint16, or %NULL if not required.
 * @value_td_scdma_system_info_cell_broadcast_support_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scdma_system_info_cell_broadcast_support: a placeholder for the output #QmiNasCellBroadcastCapability, or %NULL if not required.
 * @value_td_scdma_system_info_cs_call_barring_status_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scdma_system_info_cs_call_barring_status: a placeholder for the output #QmiNasCallBarringStatus, or %NULL if not required.
 * @value_td_scdma_system_info_ps_call_barring_status_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scdma_system_info_ps_call_barring_status: a placeholder for the output #QmiNasCallBarringStatus, or %NULL if not required.
 * @value_td_scdma_system_info_cipher_domain_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scdma_system_info_cipher_domain: a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'TD SCDMA System Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_td_scdma_system_info (
    QmiMessageNasGetSystemInfoOutput *self,
    gboolean *value_td_scdma_system_info_domain_valid,
    QmiNasNetworkServiceDomain *value_td_scdma_system_info_domain,
    gboolean *value_td_scdma_system_info_service_capability_valid,
    QmiNasNetworkServiceDomain *value_td_scdma_system_info_service_capability,
    gboolean *value_td_scdma_system_info_roaming_status_valid,
    QmiNasRoamingStatus *value_td_scdma_system_info_roaming_status,
    gboolean *value_td_scdma_system_info_forbidden_valid,
    gboolean *value_td_scdma_system_info_forbidden,
    gboolean *value_td_scdma_system_info_lac_valid,
    guint16 *value_td_scdma_system_info_lac,
    gboolean *value_td_scdma_system_info_cid_valid,
    guint32 *value_td_scdma_system_info_cid,
    gboolean *value_td_scdma_system_info_registration_reject_info_valid,
    QmiNasNetworkServiceDomain *value_td_scdma_system_info_registration_reject_domain,
    guint8 *value_td_scdma_system_info_registration_reject_cause,
    gboolean *value_td_scdma_system_info_network_id_valid,
    const gchar **value_td_scdma_system_info_mcc,
    const gchar **value_td_scdma_system_info_mnc,
    gboolean *value_td_scdma_system_info_hs_call_status_valid,
    QmiNasWcdmaHsService *value_td_scdma_system_info_hs_call_status,
    gboolean *value_td_scdma_system_info_hs_service_valid,
    QmiNasWcdmaHsService *value_td_scdma_system_info_hs_service,
    gboolean *value_td_scdma_system_info_cell_parameter_id_valid,
    guint16 *value_td_scdma_system_info_cell_parameter_id,
    gboolean *value_td_scdma_system_info_cell_broadcast_support_valid,
    QmiNasCellBroadcastCapability *value_td_scdma_system_info_cell_broadcast_support,
    gboolean *value_td_scdma_system_info_cs_call_barring_status_valid,
    QmiNasCallBarringStatus *value_td_scdma_system_info_cs_call_barring_status,
    gboolean *value_td_scdma_system_info_ps_call_barring_status_valid,
    QmiNasCallBarringStatus *value_td_scdma_system_info_ps_call_barring_status,
    gboolean *value_td_scdma_system_info_cipher_domain_valid,
    QmiNasNetworkServiceDomain *value_td_scdma_system_info_cipher_domain,
    GError **error);

/**
 * qmi_message_nas_get_system_info_output_get_td_scdma_service_status:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_td_scdma_service_status_service_status: a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_td_scdma_service_status_true_service_status: a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_td_scdma_service_status_preferred_data_path: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'TD SCDMA Service Status' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_td_scdma_service_status (
    QmiMessageNasGetSystemInfoOutput *self,
    QmiNasServiceStatus *value_td_scdma_service_status_service_status,
    QmiNasServiceStatus *value_td_scdma_service_status_true_service_status,
    gboolean *value_td_scdma_service_status_preferred_data_path,
    GError **error);

/**
 * qmi_message_nas_get_system_info_output_get_wcdma_cipher_domain:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_wcdma_cipher_domain: a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'WCDMA Cipher Domain' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_wcdma_cipher_domain (
    QmiMessageNasGetSystemInfoOutput *self,
    QmiNasNetworkServiceDomain *value_wcdma_cipher_domain,
    GError **error);

/**
 * qmi_message_nas_get_system_info_output_get_gsm_cipher_domain:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_gsm_cipher_domain: a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GSM Cipher Domain' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_gsm_cipher_domain (
    QmiMessageNasGetSystemInfoOutput *self,
    QmiNasNetworkServiceDomain *value_gsm_cipher_domain,
    GError **error);

/**
 * qmi_message_nas_get_system_info_output_get_lte_voice_support:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_lte_voice_support: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE Voice Support' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_lte_voice_support (
    QmiMessageNasGetSystemInfoOutput *self,
    gboolean *value_lte_voice_support,
    GError **error);

/**
 * qmi_message_nas_get_system_info_output_get_wcdma_call_barring_status:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_wcdma_call_barring_status_cs_status: a placeholder for the output #QmiNasCallBarringStatus, or %NULL if not required.
 * @value_wcdma_call_barring_status_ps_status: a placeholder for the output #QmiNasCallBarringStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'WCDMA Call Barring Status' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_wcdma_call_barring_status (
    QmiMessageNasGetSystemInfoOutput *self,
    QmiNasCallBarringStatus *value_wcdma_call_barring_status_cs_status,
    QmiNasCallBarringStatus *value_wcdma_call_barring_status_ps_status,
    GError **error);

/**
 * qmi_message_nas_get_system_info_output_get_gsm_call_barring_status:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_gsm_call_barring_status_cs_status: a placeholder for the output #QmiNasCallBarringStatus, or %NULL if not required.
 * @value_gsm_call_barring_status_ps_status: a placeholder for the output #QmiNasCallBarringStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GSM Call Barring Status' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_gsm_call_barring_status (
    QmiMessageNasGetSystemInfoOutput *self,
    QmiNasCallBarringStatus *value_gsm_call_barring_status_cs_status,
    QmiNasCallBarringStatus *value_gsm_call_barring_status_ps_status,
    GError **error);

/**
 * qmi_message_nas_get_system_info_output_get_additional_lte_system_info:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_additional_lte_system_info_geo_system_index: a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Additional LTE System Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_additional_lte_system_info (
    QmiMessageNasGetSystemInfoOutput *self,
    guint16 *value_additional_lte_system_info_geo_system_index,
    GError **error);

/**
 * qmi_message_nas_get_system_info_output_get_additional_wcdma_system_info:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_additional_wcdma_system_info_geo_system_index: a placeholder for the output #guint16, or %NULL if not required.
 * @value_additional_wcdma_system_info_cell_broadcast_support: a placeholder for the output #QmiNasCellBroadcastCapability, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Additional WCDMA System Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_additional_wcdma_system_info (
    QmiMessageNasGetSystemInfoOutput *self,
    guint16 *value_additional_wcdma_system_info_geo_system_index,
    QmiNasCellBroadcastCapability *value_additional_wcdma_system_info_cell_broadcast_support,
    GError **error);

/**
 * qmi_message_nas_get_system_info_output_get_additional_gsm_system_info:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_additional_gsm_system_info_geo_system_index: a placeholder for the output #guint16, or %NULL if not required.
 * @value_additional_gsm_system_info_cell_broadcast_support: a placeholder for the output #QmiNasCellBroadcastCapability, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Additional GSM System Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_additional_gsm_system_info (
    QmiMessageNasGetSystemInfoOutput *self,
    guint16 *value_additional_gsm_system_info_geo_system_index,
    QmiNasCellBroadcastCapability *value_additional_gsm_system_info_cell_broadcast_support,
    GError **error);

/**
 * qmi_message_nas_get_system_info_output_get_additional_hdr_system_info:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_additional_hdr_system_info_geo_system_index: a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Additional HDR System Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_additional_hdr_system_info (
    QmiMessageNasGetSystemInfoOutput *self,
    guint16 *value_additional_hdr_system_info_geo_system_index,
    GError **error);

/**
 * qmi_message_nas_get_system_info_output_get_additional_cdma_system_info:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_additional_cdma_system_info_geo_system_index: a placeholder for the output #guint16, or %NULL if not required.
 * @value_additional_cdma_system_info_registration_period: a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Additional CDMA System Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_additional_cdma_system_info (
    QmiMessageNasGetSystemInfoOutput *self,
    guint16 *value_additional_cdma_system_info_geo_system_index,
    guint16 *value_additional_cdma_system_info_registration_period,
    GError **error);

/**
 * qmi_message_nas_get_system_info_output_get_lte_system_info:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_lte_system_info_domain_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_system_info_domain: a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_lte_system_info_service_capability_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_system_info_service_capability: a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_lte_system_info_roaming_status_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_system_info_roaming_status: a placeholder for the output #QmiNasRoamingStatus, or %NULL if not required.
 * @value_lte_system_info_forbidden_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_system_info_forbidden: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_system_info_lac_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_system_info_lac: a placeholder for the output #guint16, or %NULL if not required.
 * @value_lte_system_info_cid_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_system_info_cid: a placeholder for the output #guint32, or %NULL if not required.
 * @value_lte_system_info_registration_reject_info_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_system_info_registration_reject_domain: a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_lte_system_info_registration_reject_cause: a placeholder for the output #guint8, or %NULL if not required.
 * @value_lte_system_info_network_id_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_system_info_mcc: a placeholder for the output constant string, or %NULL if not required.
 * @value_lte_system_info_mnc: a placeholder for the output constant string, or %NULL if not required.
 * @value_lte_system_info_tac_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_system_info_tac: a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE System Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_lte_system_info (
    QmiMessageNasGetSystemInfoOutput *self,
    gboolean *value_lte_system_info_domain_valid,
    QmiNasNetworkServiceDomain *value_lte_system_info_domain,
    gboolean *value_lte_system_info_service_capability_valid,
    QmiNasNetworkServiceDomain *value_lte_system_info_service_capability,
    gboolean *value_lte_system_info_roaming_status_valid,
    QmiNasRoamingStatus *value_lte_system_info_roaming_status,
    gboolean *value_lte_system_info_forbidden_valid,
    gboolean *value_lte_system_info_forbidden,
    gboolean *value_lte_system_info_lac_valid,
    guint16 *value_lte_system_info_lac,
    gboolean *value_lte_system_info_cid_valid,
    guint32 *value_lte_system_info_cid,
    gboolean *value_lte_system_info_registration_reject_info_valid,
    QmiNasNetworkServiceDomain *value_lte_system_info_registration_reject_domain,
    guint8 *value_lte_system_info_registration_reject_cause,
    gboolean *value_lte_system_info_network_id_valid,
    const gchar **value_lte_system_info_mcc,
    const gchar **value_lte_system_info_mnc,
    gboolean *value_lte_system_info_tac_valid,
    guint16 *value_lte_system_info_tac,
    GError **error);

/**
 * qmi_message_nas_get_system_info_output_get_wcdma_system_info:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_wcdma_system_info_domain_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_domain: a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_wcdma_system_info_service_capability_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_service_capability: a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_wcdma_system_info_roaming_status_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_roaming_status: a placeholder for the output #QmiNasRoamingStatus, or %NULL if not required.
 * @value_wcdma_system_info_forbidden_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_forbidden: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_lac_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_lac: a placeholder for the output #guint16, or %NULL if not required.
 * @value_wcdma_system_info_cid_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_cid: a placeholder for the output #guint32, or %NULL if not required.
 * @value_wcdma_system_info_registration_reject_info_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_registration_reject_domain: a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_wcdma_system_info_registration_reject_cause: a placeholder for the output #guint8, or %NULL if not required.
 * @value_wcdma_system_info_network_id_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_mcc: a placeholder for the output constant string, or %NULL if not required.
 * @value_wcdma_system_info_mnc: a placeholder for the output constant string, or %NULL if not required.
 * @value_wcdma_system_info_hs_call_status_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_hs_call_status: a placeholder for the output #QmiNasWcdmaHsService, or %NULL if not required.
 * @value_wcdma_system_info_hs_service_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_hs_service: a placeholder for the output #QmiNasWcdmaHsService, or %NULL if not required.
 * @value_wcdma_system_info_primary_scrambling_code_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_primary_scrambling_code: a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'WCDMA System Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_wcdma_system_info (
    QmiMessageNasGetSystemInfoOutput *self,
    gboolean *value_wcdma_system_info_domain_valid,
    QmiNasNetworkServiceDomain *value_wcdma_system_info_domain,
    gboolean *value_wcdma_system_info_service_capability_valid,
    QmiNasNetworkServiceDomain *value_wcdma_system_info_service_capability,
    gboolean *value_wcdma_system_info_roaming_status_valid,
    QmiNasRoamingStatus *value_wcdma_system_info_roaming_status,
    gboolean *value_wcdma_system_info_forbidden_valid,
    gboolean *value_wcdma_system_info_forbidden,
    gboolean *value_wcdma_system_info_lac_valid,
    guint16 *value_wcdma_system_info_lac,
    gboolean *value_wcdma_system_info_cid_valid,
    guint32 *value_wcdma_system_info_cid,
    gboolean *value_wcdma_system_info_registration_reject_info_valid,
    QmiNasNetworkServiceDomain *value_wcdma_system_info_registration_reject_domain,
    guint8 *value_wcdma_system_info_registration_reject_cause,
    gboolean *value_wcdma_system_info_network_id_valid,
    const gchar **value_wcdma_system_info_mcc,
    const gchar **value_wcdma_system_info_mnc,
    gboolean *value_wcdma_system_info_hs_call_status_valid,
    QmiNasWcdmaHsService *value_wcdma_system_info_hs_call_status,
    gboolean *value_wcdma_system_info_hs_service_valid,
    QmiNasWcdmaHsService *value_wcdma_system_info_hs_service,
    gboolean *value_wcdma_system_info_primary_scrambling_code_valid,
    guint16 *value_wcdma_system_info_primary_scrambling_code,
    GError **error);

/**
 * qmi_message_nas_get_system_info_output_get_gsm_system_info:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_gsm_system_info_domain_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_domain: a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_gsm_system_info_service_capability_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_service_capability: a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_gsm_system_info_roaming_status_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_roaming_status: a placeholder for the output #QmiNasRoamingStatus, or %NULL if not required.
 * @value_gsm_system_info_forbidden_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_forbidden: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_lac_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_lac: a placeholder for the output #guint16, or %NULL if not required.
 * @value_gsm_system_info_cid_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_cid: a placeholder for the output #guint32, or %NULL if not required.
 * @value_gsm_system_info_registration_reject_info_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_registration_reject_domain: a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_gsm_system_info_registration_reject_cause: a placeholder for the output #guint8, or %NULL if not required.
 * @value_gsm_system_info_network_id_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_mcc: a placeholder for the output constant string, or %NULL if not required.
 * @value_gsm_system_info_mnc: a placeholder for the output constant string, or %NULL if not required.
 * @value_gsm_system_info_egprs_support_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_egprs_support: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_dtm_support_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_dtm_support: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GSM System Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_gsm_system_info (
    QmiMessageNasGetSystemInfoOutput *self,
    gboolean *value_gsm_system_info_domain_valid,
    QmiNasNetworkServiceDomain *value_gsm_system_info_domain,
    gboolean *value_gsm_system_info_service_capability_valid,
    QmiNasNetworkServiceDomain *value_gsm_system_info_service_capability,
    gboolean *value_gsm_system_info_roaming_status_valid,
    QmiNasRoamingStatus *value_gsm_system_info_roaming_status,
    gboolean *value_gsm_system_info_forbidden_valid,
    gboolean *value_gsm_system_info_forbidden,
    gboolean *value_gsm_system_info_lac_valid,
    guint16 *value_gsm_system_info_lac,
    gboolean *value_gsm_system_info_cid_valid,
    guint32 *value_gsm_system_info_cid,
    gboolean *value_gsm_system_info_registration_reject_info_valid,
    QmiNasNetworkServiceDomain *value_gsm_system_info_registration_reject_domain,
    guint8 *value_gsm_system_info_registration_reject_cause,
    gboolean *value_gsm_system_info_network_id_valid,
    const gchar **value_gsm_system_info_mcc,
    const gchar **value_gsm_system_info_mnc,
    gboolean *value_gsm_system_info_egprs_support_valid,
    gboolean *value_gsm_system_info_egprs_support,
    gboolean *value_gsm_system_info_dtm_support_valid,
    gboolean *value_gsm_system_info_dtm_support,
    GError **error);

/**
 * qmi_message_nas_get_system_info_output_get_hdr_system_info:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_hdr_system_info_domain_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_hdr_system_info_domain: a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_hdr_system_info_service_capability_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_hdr_system_info_service_capability: a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_hdr_system_info_roaming_status_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_hdr_system_info_roaming_status: a placeholder for the output #QmiNasRoamingStatus, or %NULL if not required.
 * @value_hdr_system_info_forbidden_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_hdr_system_info_forbidden: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_hdr_system_info_prl_match_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_hdr_system_info_prl_match: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_hdr_system_info_personality_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_hdr_system_info_personality: a placeholder for the output #QmiNasHdrPersonality, or %NULL if not required.
 * @value_hdr_system_info_protocol_revision_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_hdr_system_info_protocol_revision: a placeholder for the output #QmiNasHdrProtocolRevision, or %NULL if not required.
 * @value_hdr_system_info_is_856_system_id_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_hdr_system_info_is_856_system_id: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'HDR System Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_hdr_system_info (
    QmiMessageNasGetSystemInfoOutput *self,
    gboolean *value_hdr_system_info_domain_valid,
    QmiNasNetworkServiceDomain *value_hdr_system_info_domain,
    gboolean *value_hdr_system_info_service_capability_valid,
    QmiNasNetworkServiceDomain *value_hdr_system_info_service_capability,
    gboolean *value_hdr_system_info_roaming_status_valid,
    QmiNasRoamingStatus *value_hdr_system_info_roaming_status,
    gboolean *value_hdr_system_info_forbidden_valid,
    gboolean *value_hdr_system_info_forbidden,
    gboolean *value_hdr_system_info_prl_match_valid,
    gboolean *value_hdr_system_info_prl_match,
    gboolean *value_hdr_system_info_personality_valid,
    QmiNasHdrPersonality *value_hdr_system_info_personality,
    gboolean *value_hdr_system_info_protocol_revision_valid,
    QmiNasHdrProtocolRevision *value_hdr_system_info_protocol_revision,
    gboolean *value_hdr_system_info_is_856_system_id_valid,
    const gchar **value_hdr_system_info_is_856_system_id,
    GError **error);

/**
 * qmi_message_nas_get_system_info_output_get_cdma_system_info:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_cdma_system_info_domain_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_domain: a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_cdma_system_info_service_capability_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_service_capability: a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_cdma_system_info_roaming_status_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_roaming_status: a placeholder for the output #QmiNasRoamingStatus, or %NULL if not required.
 * @value_cdma_system_info_forbidden_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_forbidden: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_prl_match_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_prl_match: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_p_rev_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_p_rev: a placeholder for the output #guint8, or %NULL if not required.
 * @value_cdma_system_info_base_station_p_rev_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_base_station_p_rev: a placeholder for the output #guint8, or %NULL if not required.
 * @value_cdma_system_info_concurrent_service_support_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_concurrent_service_support: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_cdma_system_id_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_sid: a placeholder for the output #guint16, or %NULL if not required.
 * @value_cdma_system_info_nid: a placeholder for the output #guint16, or %NULL if not required.
 * @value_cdma_system_info_base_station_info_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_base_station_id: a placeholder for the output #guint16, or %NULL if not required.
 * @value_cdma_system_info_base_station_latitude: a placeholder for the output #gint32, or %NULL if not required.
 * @value_cdma_system_info_base_station_longitude: a placeholder for the output #gint32, or %NULL if not required.
 * @value_cdma_system_info_packet_zone_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_packet_zone: a placeholder for the output #guint16, or %NULL if not required.
 * @value_cdma_system_info_network_id_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_mcc: a placeholder for the output constant string, or %NULL if not required.
 * @value_cdma_system_info_mnc: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA System Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_cdma_system_info (
    QmiMessageNasGetSystemInfoOutput *self,
    gboolean *value_cdma_system_info_domain_valid,
    QmiNasNetworkServiceDomain *value_cdma_system_info_domain,
    gboolean *value_cdma_system_info_service_capability_valid,
    QmiNasNetworkServiceDomain *value_cdma_system_info_service_capability,
    gboolean *value_cdma_system_info_roaming_status_valid,
    QmiNasRoamingStatus *value_cdma_system_info_roaming_status,
    gboolean *value_cdma_system_info_forbidden_valid,
    gboolean *value_cdma_system_info_forbidden,
    gboolean *value_cdma_system_info_prl_match_valid,
    gboolean *value_cdma_system_info_prl_match,
    gboolean *value_cdma_system_info_p_rev_valid,
    guint8 *value_cdma_system_info_p_rev,
    gboolean *value_cdma_system_info_base_station_p_rev_valid,
    guint8 *value_cdma_system_info_base_station_p_rev,
    gboolean *value_cdma_system_info_concurrent_service_support_valid,
    gboolean *value_cdma_system_info_concurrent_service_support,
    gboolean *value_cdma_system_info_cdma_system_id_valid,
    guint16 *value_cdma_system_info_sid,
    guint16 *value_cdma_system_info_nid,
    gboolean *value_cdma_system_info_base_station_info_valid,
    guint16 *value_cdma_system_info_base_station_id,
    gint32 *value_cdma_system_info_base_station_latitude,
    gint32 *value_cdma_system_info_base_station_longitude,
    gboolean *value_cdma_system_info_packet_zone_valid,
    guint16 *value_cdma_system_info_packet_zone,
    gboolean *value_cdma_system_info_network_id_valid,
    const gchar **value_cdma_system_info_mcc,
    const gchar **value_cdma_system_info_mnc,
    GError **error);

/**
 * qmi_message_nas_get_system_info_output_get_lte_service_status:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_lte_service_status_service_status: a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_lte_service_status_true_service_status: a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_lte_service_status_preferred_data_path: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE Service Status' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_lte_service_status (
    QmiMessageNasGetSystemInfoOutput *self,
    QmiNasServiceStatus *value_lte_service_status_service_status,
    QmiNasServiceStatus *value_lte_service_status_true_service_status,
    gboolean *value_lte_service_status_preferred_data_path,
    GError **error);

/**
 * qmi_message_nas_get_system_info_output_get_wcdma_service_status:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_wcdma_service_status_service_status: a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_wcdma_service_status_true_service_status: a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_wcdma_service_status_preferred_data_path: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'WCDMA Service Status' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_wcdma_service_status (
    QmiMessageNasGetSystemInfoOutput *self,
    QmiNasServiceStatus *value_wcdma_service_status_service_status,
    QmiNasServiceStatus *value_wcdma_service_status_true_service_status,
    gboolean *value_wcdma_service_status_preferred_data_path,
    GError **error);

/**
 * qmi_message_nas_get_system_info_output_get_gsm_service_status:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_gsm_service_status_service_status: a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_gsm_service_status_true_service_status: a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_gsm_service_status_preferred_data_path: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GSM Service Status' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_gsm_service_status (
    QmiMessageNasGetSystemInfoOutput *self,
    QmiNasServiceStatus *value_gsm_service_status_service_status,
    QmiNasServiceStatus *value_gsm_service_status_true_service_status,
    gboolean *value_gsm_service_status_preferred_data_path,
    GError **error);

/**
 * qmi_message_nas_get_system_info_output_get_hdr_service_status:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_hdr_service_status_service_status: a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_hdr_service_status_preferred_data_path: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'HDR Service Status' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_hdr_service_status (
    QmiMessageNasGetSystemInfoOutput *self,
    QmiNasServiceStatus *value_hdr_service_status_service_status,
    gboolean *value_hdr_service_status_preferred_data_path,
    GError **error);

/**
 * qmi_message_nas_get_system_info_output_get_cdma_service_status:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_cdma_service_status_service_status: a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_cdma_service_status_preferred_data_path: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA Service Status' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_cdma_service_status (
    QmiMessageNasGetSystemInfoOutput *self,
    QmiNasServiceStatus *value_cdma_service_status_service_status,
    gboolean *value_cdma_service_status_preferred_data_path,
    GError **error);

/**
 * qmi_message_nas_get_system_info_output_get_result:
 * @self: a QmiMessageNasGetSystemInfoOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_result (
    QmiMessageNasGetSystemInfoOutput *self,
    GError **error);

/**
 * qmi_message_nas_get_system_info_output_ref:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasGetSystemInfoOutput *qmi_message_nas_get_system_info_output_ref (QmiMessageNasGetSystemInfoOutput *self);

/**
 * qmi_message_nas_get_system_info_output_unref:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_get_system_info_output_unref (QmiMessageNasGetSystemInfoOutput *self);

/*****************************************************************************/
/* INDICATION: Qmi Indication NAS System Info */


/* --- Output -- */

/**
 * QmiIndicationNasSystemInfoOutput:
 *
 * The #QmiIndicationNasSystemInfoOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiIndicationNasSystemInfoOutput QmiIndicationNasSystemInfoOutput;
GType qmi_indication_nas_system_info_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_NAS_SYSTEM_INFO_OUTPUT (qmi_indication_nas_system_info_output_get_type ())

/**
 * qmi_indication_nas_system_info_output_get_sim_reject_info:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_sim_reject_info: a placeholder for the output #QmiNasSimRejectState, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'SIM Reject Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_sim_reject_info (
    QmiIndicationNasSystemInfoOutput *self,
    QmiNasSimRejectState *value_sim_reject_info,
    GError **error);

/**
 * qmi_indication_nas_system_info_output_get_lte_embms_coverage_info_support:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_lte_embms_coverage_info_support: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE eMBMS Coverage Info Support' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_lte_embms_coverage_info_support (
    QmiIndicationNasSystemInfoOutput *self,
    gboolean *value_lte_embms_coverage_info_support,
    GError **error);

/**
 * qmi_indication_nas_system_info_output_get_td_scma_system_info:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_td_scma_system_info_domain_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scma_system_info_domain: a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_td_scma_system_info_service_capability_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scma_system_info_service_capability: a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_td_scma_system_info_roaming_status_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scma_system_info_roaming_status: a placeholder for the output #QmiNasRoamingStatus, or %NULL if not required.
 * @value_td_scma_system_info_forbidden_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scma_system_info_forbidden: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scma_system_info_lac_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scma_system_info_lac: a placeholder for the output #guint16, or %NULL if not required.
 * @value_td_scma_system_info_cid_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scma_system_info_cid: a placeholder for the output #guint32, or %NULL if not required.
 * @value_td_scma_system_info_registration_reject_info_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scma_system_info_registration_reject_domain: a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_td_scma_system_info_registration_reject_cause: a placeholder for the output #guint8, or %NULL if not required.
 * @value_td_scma_system_info_network_id_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scma_system_info_mcc: a placeholder for the output constant string, or %NULL if not required.
 * @value_td_scma_system_info_mnc: a placeholder for the output constant string, or %NULL if not required.
 * @value_td_scma_system_info_hs_call_status_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scma_system_info_hs_call_status: a placeholder for the output #QmiNasWcdmaHsService, or %NULL if not required.
 * @value_td_scma_system_info_hs_service_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scma_system_info_hs_service: a placeholder for the output #QmiNasWcdmaHsService, or %NULL if not required.
 * @value_td_scma_system_info_cell_parameter_id_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scma_system_info_cell_parameter_id: a placeholder for the output #guint16, or %NULL if not required.
 * @value_td_scma_system_info_cell_broadcast_support_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scma_system_info_cell_broadcast_support: a placeholder for the output #QmiNasCellBroadcastCapability, or %NULL if not required.
 * @value_td_scma_system_info_cs_call_barring_status_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scma_system_info_cs_call_barring_status: a placeholder for the output #QmiNasCallBarringStatus, or %NULL if not required.
 * @value_td_scma_system_info_ps_call_barring_status_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scma_system_info_ps_call_barring_status: a placeholder for the output #QmiNasCallBarringStatus, or %NULL if not required.
 * @value_td_scma_system_info_cipher_domain_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scma_system_info_cipher_domain: a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'TD SCMA System Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_td_scma_system_info (
    QmiIndicationNasSystemInfoOutput *self,
    gboolean *value_td_scma_system_info_domain_valid,
    QmiNasNetworkServiceDomain *value_td_scma_system_info_domain,
    gboolean *value_td_scma_system_info_service_capability_valid,
    QmiNasNetworkServiceDomain *value_td_scma_system_info_service_capability,
    gboolean *value_td_scma_system_info_roaming_status_valid,
    QmiNasRoamingStatus *value_td_scma_system_info_roaming_status,
    gboolean *value_td_scma_system_info_forbidden_valid,
    gboolean *value_td_scma_system_info_forbidden,
    gboolean *value_td_scma_system_info_lac_valid,
    guint16 *value_td_scma_system_info_lac,
    gboolean *value_td_scma_system_info_cid_valid,
    guint32 *value_td_scma_system_info_cid,
    gboolean *value_td_scma_system_info_registration_reject_info_valid,
    QmiNasNetworkServiceDomain *value_td_scma_system_info_registration_reject_domain,
    guint8 *value_td_scma_system_info_registration_reject_cause,
    gboolean *value_td_scma_system_info_network_id_valid,
    const gchar **value_td_scma_system_info_mcc,
    const gchar **value_td_scma_system_info_mnc,
    gboolean *value_td_scma_system_info_hs_call_status_valid,
    QmiNasWcdmaHsService *value_td_scma_system_info_hs_call_status,
    gboolean *value_td_scma_system_info_hs_service_valid,
    QmiNasWcdmaHsService *value_td_scma_system_info_hs_service,
    gboolean *value_td_scma_system_info_cell_parameter_id_valid,
    guint16 *value_td_scma_system_info_cell_parameter_id,
    gboolean *value_td_scma_system_info_cell_broadcast_support_valid,
    QmiNasCellBroadcastCapability *value_td_scma_system_info_cell_broadcast_support,
    gboolean *value_td_scma_system_info_cs_call_barring_status_valid,
    QmiNasCallBarringStatus *value_td_scma_system_info_cs_call_barring_status,
    gboolean *value_td_scma_system_info_ps_call_barring_status_valid,
    QmiNasCallBarringStatus *value_td_scma_system_info_ps_call_barring_status,
    gboolean *value_td_scma_system_info_cipher_domain_valid,
    QmiNasNetworkServiceDomain *value_td_scma_system_info_cipher_domain,
    GError **error);

/**
 * qmi_indication_nas_system_info_output_get_td_scdma_service_status:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_td_scdma_service_status_service_status: a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_td_scdma_service_status_true_service_status: a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_td_scdma_service_status_preferred_data_path: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'TD SCDMA Service Status' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_td_scdma_service_status (
    QmiIndicationNasSystemInfoOutput *self,
    QmiNasServiceStatus *value_td_scdma_service_status_service_status,
    QmiNasServiceStatus *value_td_scdma_service_status_true_service_status,
    gboolean *value_td_scdma_service_status_preferred_data_path,
    GError **error);

/**
 * qmi_indication_nas_system_info_output_get_plmn_not_changed_indication:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_plmn_not_changed_indication: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PLMN Not Changed Indication' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_plmn_not_changed_indication (
    QmiIndicationNasSystemInfoOutput *self,
    gboolean *value_plmn_not_changed_indication,
    GError **error);

/**
 * qmi_indication_nas_system_info_output_get_wcdma_cipher_domain:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_wcdma_cipher_domain: a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'WCDMA Cipher Domain' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_wcdma_cipher_domain (
    QmiIndicationNasSystemInfoOutput *self,
    QmiNasNetworkServiceDomain *value_wcdma_cipher_domain,
    GError **error);

/**
 * qmi_indication_nas_system_info_output_get_gsm_cipher_domain:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_gsm_cipher_domain: a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GSM Cipher Domain' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_gsm_cipher_domain (
    QmiIndicationNasSystemInfoOutput *self,
    QmiNasNetworkServiceDomain *value_gsm_cipher_domain,
    GError **error);

/**
 * qmi_indication_nas_system_info_output_get_lte_voice_support:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_lte_voice_support: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE Voice Support' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_lte_voice_support (
    QmiIndicationNasSystemInfoOutput *self,
    gboolean *value_lte_voice_support,
    GError **error);

/**
 * qmi_indication_nas_system_info_output_get_wcdma_call_barring_status:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_wcdma_call_barring_status_cs_status: a placeholder for the output #QmiNasCallBarringStatus, or %NULL if not required.
 * @value_wcdma_call_barring_status_ps_status: a placeholder for the output #QmiNasCallBarringStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'WCDMA Call Barring Status' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_wcdma_call_barring_status (
    QmiIndicationNasSystemInfoOutput *self,
    QmiNasCallBarringStatus *value_wcdma_call_barring_status_cs_status,
    QmiNasCallBarringStatus *value_wcdma_call_barring_status_ps_status,
    GError **error);

/**
 * qmi_indication_nas_system_info_output_get_gsm_call_barring_status:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_gsm_call_barring_status_cs_status: a placeholder for the output #QmiNasCallBarringStatus, or %NULL if not required.
 * @value_gsm_call_barring_status_ps_status: a placeholder for the output #QmiNasCallBarringStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GSM Call Barring Status' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_gsm_call_barring_status (
    QmiIndicationNasSystemInfoOutput *self,
    QmiNasCallBarringStatus *value_gsm_call_barring_status_cs_status,
    QmiNasCallBarringStatus *value_gsm_call_barring_status_ps_status,
    GError **error);

/**
 * qmi_indication_nas_system_info_output_get_additional_lte_system_info:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_additional_lte_system_info_geo_system_index: a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Additional LTE System Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_additional_lte_system_info (
    QmiIndicationNasSystemInfoOutput *self,
    guint16 *value_additional_lte_system_info_geo_system_index,
    GError **error);

/**
 * qmi_indication_nas_system_info_output_get_additional_wcdma_system_info:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_additional_wcdma_system_info_geo_system_index: a placeholder for the output #guint16, or %NULL if not required.
 * @value_additional_wcdma_system_info_cell_broadcast_support: a placeholder for the output #QmiNasCellBroadcastCapability, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Additional WCDMA System Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_additional_wcdma_system_info (
    QmiIndicationNasSystemInfoOutput *self,
    guint16 *value_additional_wcdma_system_info_geo_system_index,
    QmiNasCellBroadcastCapability *value_additional_wcdma_system_info_cell_broadcast_support,
    GError **error);

/**
 * qmi_indication_nas_system_info_output_get_additional_gsm_system_info:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_additional_gsm_system_info_geo_system_index: a placeholder for the output #guint16, or %NULL if not required.
 * @value_additional_gsm_system_info_cell_broadcast_support: a placeholder for the output #QmiNasCellBroadcastCapability, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Additional GSM System Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_additional_gsm_system_info (
    QmiIndicationNasSystemInfoOutput *self,
    guint16 *value_additional_gsm_system_info_geo_system_index,
    QmiNasCellBroadcastCapability *value_additional_gsm_system_info_cell_broadcast_support,
    GError **error);

/**
 * qmi_indication_nas_system_info_output_get_additional_hdr_system_info:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_additional_hdr_system_info_geo_system_index: a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Additional HDR System Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_additional_hdr_system_info (
    QmiIndicationNasSystemInfoOutput *self,
    guint16 *value_additional_hdr_system_info_geo_system_index,
    GError **error);

/**
 * qmi_indication_nas_system_info_output_get_additional_cdma_system_info:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_additional_cdma_system_info_geo_system_index: a placeholder for the output #guint16, or %NULL if not required.
 * @value_additional_cdma_system_info_registration_period: a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Additional CDMA System Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_additional_cdma_system_info (
    QmiIndicationNasSystemInfoOutput *self,
    guint16 *value_additional_cdma_system_info_geo_system_index,
    guint16 *value_additional_cdma_system_info_registration_period,
    GError **error);

/**
 * qmi_indication_nas_system_info_output_get_lte_system_info:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_lte_system_info_domain_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_system_info_domain: a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_lte_system_info_service_capability_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_system_info_service_capability: a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_lte_system_info_roaming_status_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_system_info_roaming_status: a placeholder for the output #QmiNasRoamingStatus, or %NULL if not required.
 * @value_lte_system_info_forbidden_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_system_info_forbidden: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_system_info_lac_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_system_info_lac: a placeholder for the output #guint16, or %NULL if not required.
 * @value_lte_system_info_cid_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_system_info_cid: a placeholder for the output #guint32, or %NULL if not required.
 * @value_lte_system_info_registration_reject_info_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_system_info_registration_reject_domain: a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_lte_system_info_registration_reject_cause: a placeholder for the output #guint8, or %NULL if not required.
 * @value_lte_system_info_network_id_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_system_info_mcc: a placeholder for the output constant string, or %NULL if not required.
 * @value_lte_system_info_mnc: a placeholder for the output constant string, or %NULL if not required.
 * @value_lte_system_info_tac_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_system_info_tac: a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE System Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_lte_system_info (
    QmiIndicationNasSystemInfoOutput *self,
    gboolean *value_lte_system_info_domain_valid,
    QmiNasNetworkServiceDomain *value_lte_system_info_domain,
    gboolean *value_lte_system_info_service_capability_valid,
    QmiNasNetworkServiceDomain *value_lte_system_info_service_capability,
    gboolean *value_lte_system_info_roaming_status_valid,
    QmiNasRoamingStatus *value_lte_system_info_roaming_status,
    gboolean *value_lte_system_info_forbidden_valid,
    gboolean *value_lte_system_info_forbidden,
    gboolean *value_lte_system_info_lac_valid,
    guint16 *value_lte_system_info_lac,
    gboolean *value_lte_system_info_cid_valid,
    guint32 *value_lte_system_info_cid,
    gboolean *value_lte_system_info_registration_reject_info_valid,
    QmiNasNetworkServiceDomain *value_lte_system_info_registration_reject_domain,
    guint8 *value_lte_system_info_registration_reject_cause,
    gboolean *value_lte_system_info_network_id_valid,
    const gchar **value_lte_system_info_mcc,
    const gchar **value_lte_system_info_mnc,
    gboolean *value_lte_system_info_tac_valid,
    guint16 *value_lte_system_info_tac,
    GError **error);

/**
 * qmi_indication_nas_system_info_output_get_wcdma_system_info:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_wcdma_system_info_domain_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_domain: a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_wcdma_system_info_service_capability_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_service_capability: a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_wcdma_system_info_roaming_status_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_roaming_status: a placeholder for the output #QmiNasRoamingStatus, or %NULL if not required.
 * @value_wcdma_system_info_forbidden_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_forbidden: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_lac_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_lac: a placeholder for the output #guint16, or %NULL if not required.
 * @value_wcdma_system_info_cid_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_cid: a placeholder for the output #guint32, or %NULL if not required.
 * @value_wcdma_system_info_registration_reject_info_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_registration_reject_domain: a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_wcdma_system_info_registration_reject_cause: a placeholder for the output #guint8, or %NULL if not required.
 * @value_wcdma_system_info_network_id_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_mcc: a placeholder for the output constant string, or %NULL if not required.
 * @value_wcdma_system_info_mnc: a placeholder for the output constant string, or %NULL if not required.
 * @value_wcdma_system_info_hs_call_status_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_hs_call_status: a placeholder for the output #QmiNasWcdmaHsService, or %NULL if not required.
 * @value_wcdma_system_info_hs_service_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_hs_service: a placeholder for the output #QmiNasWcdmaHsService, or %NULL if not required.
 * @value_wcdma_system_info_primary_scrambling_code_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_primary_scrambling_code: a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'WCDMA System Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_wcdma_system_info (
    QmiIndicationNasSystemInfoOutput *self,
    gboolean *value_wcdma_system_info_domain_valid,
    QmiNasNetworkServiceDomain *value_wcdma_system_info_domain,
    gboolean *value_wcdma_system_info_service_capability_valid,
    QmiNasNetworkServiceDomain *value_wcdma_system_info_service_capability,
    gboolean *value_wcdma_system_info_roaming_status_valid,
    QmiNasRoamingStatus *value_wcdma_system_info_roaming_status,
    gboolean *value_wcdma_system_info_forbidden_valid,
    gboolean *value_wcdma_system_info_forbidden,
    gboolean *value_wcdma_system_info_lac_valid,
    guint16 *value_wcdma_system_info_lac,
    gboolean *value_wcdma_system_info_cid_valid,
    guint32 *value_wcdma_system_info_cid,
    gboolean *value_wcdma_system_info_registration_reject_info_valid,
    QmiNasNetworkServiceDomain *value_wcdma_system_info_registration_reject_domain,
    guint8 *value_wcdma_system_info_registration_reject_cause,
    gboolean *value_wcdma_system_info_network_id_valid,
    const gchar **value_wcdma_system_info_mcc,
    const gchar **value_wcdma_system_info_mnc,
    gboolean *value_wcdma_system_info_hs_call_status_valid,
    QmiNasWcdmaHsService *value_wcdma_system_info_hs_call_status,
    gboolean *value_wcdma_system_info_hs_service_valid,
    QmiNasWcdmaHsService *value_wcdma_system_info_hs_service,
    gboolean *value_wcdma_system_info_primary_scrambling_code_valid,
    guint16 *value_wcdma_system_info_primary_scrambling_code,
    GError **error);

/**
 * qmi_indication_nas_system_info_output_get_gsm_system_info:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_gsm_system_info_domain_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_domain: a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_gsm_system_info_service_capability_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_service_capability: a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_gsm_system_info_roaming_status_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_roaming_status: a placeholder for the output #QmiNasRoamingStatus, or %NULL if not required.
 * @value_gsm_system_info_forbidden_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_forbidden: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_lac_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_lac: a placeholder for the output #guint16, or %NULL if not required.
 * @value_gsm_system_info_cid_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_cid: a placeholder for the output #guint32, or %NULL if not required.
 * @value_gsm_system_info_registration_reject_info_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_registration_reject_domain: a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_gsm_system_info_registration_reject_cause: a placeholder for the output #guint8, or %NULL if not required.
 * @value_gsm_system_info_network_id_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_mcc: a placeholder for the output constant string, or %NULL if not required.
 * @value_gsm_system_info_mnc: a placeholder for the output constant string, or %NULL if not required.
 * @value_gsm_system_info_egprs_support_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_egprs_support: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_dtm_support_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_dtm_support: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GSM System Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_gsm_system_info (
    QmiIndicationNasSystemInfoOutput *self,
    gboolean *value_gsm_system_info_domain_valid,
    QmiNasNetworkServiceDomain *value_gsm_system_info_domain,
    gboolean *value_gsm_system_info_service_capability_valid,
    QmiNasNetworkServiceDomain *value_gsm_system_info_service_capability,
    gboolean *value_gsm_system_info_roaming_status_valid,
    QmiNasRoamingStatus *value_gsm_system_info_roaming_status,
    gboolean *value_gsm_system_info_forbidden_valid,
    gboolean *value_gsm_system_info_forbidden,
    gboolean *value_gsm_system_info_lac_valid,
    guint16 *value_gsm_system_info_lac,
    gboolean *value_gsm_system_info_cid_valid,
    guint32 *value_gsm_system_info_cid,
    gboolean *value_gsm_system_info_registration_reject_info_valid,
    QmiNasNetworkServiceDomain *value_gsm_system_info_registration_reject_domain,
    guint8 *value_gsm_system_info_registration_reject_cause,
    gboolean *value_gsm_system_info_network_id_valid,
    const gchar **value_gsm_system_info_mcc,
    const gchar **value_gsm_system_info_mnc,
    gboolean *value_gsm_system_info_egprs_support_valid,
    gboolean *value_gsm_system_info_egprs_support,
    gboolean *value_gsm_system_info_dtm_support_valid,
    gboolean *value_gsm_system_info_dtm_support,
    GError **error);

/**
 * qmi_indication_nas_system_info_output_get_hdr_system_info:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_hdr_system_info_domain_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_hdr_system_info_domain: a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_hdr_system_info_service_capability_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_hdr_system_info_service_capability: a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_hdr_system_info_roaming_status_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_hdr_system_info_roaming_status: a placeholder for the output #QmiNasRoamingStatus, or %NULL if not required.
 * @value_hdr_system_info_forbidden_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_hdr_system_info_forbidden: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_hdr_system_info_prl_match_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_hdr_system_info_prl_match: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_hdr_system_info_personality_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_hdr_system_info_personality: a placeholder for the output #QmiNasHdrPersonality, or %NULL if not required.
 * @value_hdr_system_info_protocol_revision_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_hdr_system_info_protocol_revision: a placeholder for the output #QmiNasHdrProtocolRevision, or %NULL if not required.
 * @value_hdr_system_info_is_856_system_id_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_hdr_system_info_is_856_system_id: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'HDR System Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_hdr_system_info (
    QmiIndicationNasSystemInfoOutput *self,
    gboolean *value_hdr_system_info_domain_valid,
    QmiNasNetworkServiceDomain *value_hdr_system_info_domain,
    gboolean *value_hdr_system_info_service_capability_valid,
    QmiNasNetworkServiceDomain *value_hdr_system_info_service_capability,
    gboolean *value_hdr_system_info_roaming_status_valid,
    QmiNasRoamingStatus *value_hdr_system_info_roaming_status,
    gboolean *value_hdr_system_info_forbidden_valid,
    gboolean *value_hdr_system_info_forbidden,
    gboolean *value_hdr_system_info_prl_match_valid,
    gboolean *value_hdr_system_info_prl_match,
    gboolean *value_hdr_system_info_personality_valid,
    QmiNasHdrPersonality *value_hdr_system_info_personality,
    gboolean *value_hdr_system_info_protocol_revision_valid,
    QmiNasHdrProtocolRevision *value_hdr_system_info_protocol_revision,
    gboolean *value_hdr_system_info_is_856_system_id_valid,
    const gchar **value_hdr_system_info_is_856_system_id,
    GError **error);

/**
 * qmi_indication_nas_system_info_output_get_cdma_system_info:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_cdma_system_info_domain_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_domain: a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_cdma_system_info_service_capability_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_service_capability: a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_cdma_system_info_roaming_status_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_roaming_status: a placeholder for the output #QmiNasRoamingStatus, or %NULL if not required.
 * @value_cdma_system_info_forbidden_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_forbidden: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_prl_match_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_prl_match: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_p_rev_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_p_rev: a placeholder for the output #guint8, or %NULL if not required.
 * @value_cdma_system_info_base_station_p_rev_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_base_station_p_rev: a placeholder for the output #guint8, or %NULL if not required.
 * @value_cdma_system_info_concurrent_service_support_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_concurrent_service_support: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_cdma_system_id_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_sid: a placeholder for the output #guint16, or %NULL if not required.
 * @value_cdma_system_info_nid: a placeholder for the output #guint16, or %NULL if not required.
 * @value_cdma_system_info_base_station_info_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_base_station_id: a placeholder for the output #guint16, or %NULL if not required.
 * @value_cdma_system_info_base_station_latitude: a placeholder for the output #gint32, or %NULL if not required.
 * @value_cdma_system_info_base_station_longitude: a placeholder for the output #gint32, or %NULL if not required.
 * @value_cdma_system_info_packet_zone_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_packet_zone: a placeholder for the output #guint16, or %NULL if not required.
 * @value_cdma_system_info_network_id_valid: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_mcc: a placeholder for the output constant string, or %NULL if not required.
 * @value_cdma_system_info_mnc: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA System Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_cdma_system_info (
    QmiIndicationNasSystemInfoOutput *self,
    gboolean *value_cdma_system_info_domain_valid,
    QmiNasNetworkServiceDomain *value_cdma_system_info_domain,
    gboolean *value_cdma_system_info_service_capability_valid,
    QmiNasNetworkServiceDomain *value_cdma_system_info_service_capability,
    gboolean *value_cdma_system_info_roaming_status_valid,
    QmiNasRoamingStatus *value_cdma_system_info_roaming_status,
    gboolean *value_cdma_system_info_forbidden_valid,
    gboolean *value_cdma_system_info_forbidden,
    gboolean *value_cdma_system_info_prl_match_valid,
    gboolean *value_cdma_system_info_prl_match,
    gboolean *value_cdma_system_info_p_rev_valid,
    guint8 *value_cdma_system_info_p_rev,
    gboolean *value_cdma_system_info_base_station_p_rev_valid,
    guint8 *value_cdma_system_info_base_station_p_rev,
    gboolean *value_cdma_system_info_concurrent_service_support_valid,
    gboolean *value_cdma_system_info_concurrent_service_support,
    gboolean *value_cdma_system_info_cdma_system_id_valid,
    guint16 *value_cdma_system_info_sid,
    guint16 *value_cdma_system_info_nid,
    gboolean *value_cdma_system_info_base_station_info_valid,
    guint16 *value_cdma_system_info_base_station_id,
    gint32 *value_cdma_system_info_base_station_latitude,
    gint32 *value_cdma_system_info_base_station_longitude,
    gboolean *value_cdma_system_info_packet_zone_valid,
    guint16 *value_cdma_system_info_packet_zone,
    gboolean *value_cdma_system_info_network_id_valid,
    const gchar **value_cdma_system_info_mcc,
    const gchar **value_cdma_system_info_mnc,
    GError **error);

/**
 * qmi_indication_nas_system_info_output_get_lte_service_status:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_lte_service_status_service_status: a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_lte_service_status_true_service_status: a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_lte_service_status_preferred_data_path: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE Service Status' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_lte_service_status (
    QmiIndicationNasSystemInfoOutput *self,
    QmiNasServiceStatus *value_lte_service_status_service_status,
    QmiNasServiceStatus *value_lte_service_status_true_service_status,
    gboolean *value_lte_service_status_preferred_data_path,
    GError **error);

/**
 * qmi_indication_nas_system_info_output_get_wcdma_service_status:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_wcdma_service_status_service_status: a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_wcdma_service_status_true_service_status: a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_wcdma_service_status_preferred_data_path: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'WCDMA Service Status' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_wcdma_service_status (
    QmiIndicationNasSystemInfoOutput *self,
    QmiNasServiceStatus *value_wcdma_service_status_service_status,
    QmiNasServiceStatus *value_wcdma_service_status_true_service_status,
    gboolean *value_wcdma_service_status_preferred_data_path,
    GError **error);

/**
 * qmi_indication_nas_system_info_output_get_gsm_service_status:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_gsm_service_status_service_status: a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_gsm_service_status_true_service_status: a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_gsm_service_status_preferred_data_path: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GSM Service Status' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_gsm_service_status (
    QmiIndicationNasSystemInfoOutput *self,
    QmiNasServiceStatus *value_gsm_service_status_service_status,
    QmiNasServiceStatus *value_gsm_service_status_true_service_status,
    gboolean *value_gsm_service_status_preferred_data_path,
    GError **error);

/**
 * qmi_indication_nas_system_info_output_get_hdr_service_status:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_hdr_service_status_service_status: a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_hdr_service_status_preferred_data_path: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'HDR Service Status' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_hdr_service_status (
    QmiIndicationNasSystemInfoOutput *self,
    QmiNasServiceStatus *value_hdr_service_status_service_status,
    gboolean *value_hdr_service_status_preferred_data_path,
    GError **error);

/**
 * qmi_indication_nas_system_info_output_get_cdma_service_status:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_cdma_service_status_service_status: a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_cdma_service_status_preferred_data_path: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA Service Status' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_cdma_service_status (
    QmiIndicationNasSystemInfoOutput *self,
    QmiNasServiceStatus *value_cdma_service_status_service_status,
    gboolean *value_cdma_service_status_preferred_data_path,
    GError **error);

/**
 * qmi_indication_nas_system_info_output_ref:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiIndicationNasSystemInfoOutput *qmi_indication_nas_system_info_output_ref (QmiIndicationNasSystemInfoOutput *self);

/**
 * qmi_indication_nas_system_info_output_unref:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_indication_nas_system_info_output_unref (QmiIndicationNasSystemInfoOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Get Signal Info */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageNasGetSignalInfoOutput:
 *
 * The #QmiMessageNasGetSignalInfoOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasGetSignalInfoOutput QmiMessageNasGetSignalInfoOutput;
GType qmi_message_nas_get_signal_info_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_GET_SIGNAL_INFO_OUTPUT (qmi_message_nas_get_signal_info_output_get_type ())

/**
 * qmi_message_nas_get_signal_info_output_get_tdma_signal_strength:
 * @self: a #QmiMessageNasGetSignalInfoOutput.
 * @value_tdma_signal_strength: a placeholder for the output #gint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'TDMA Signal Strength' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_signal_info_output_get_tdma_signal_strength (
    QmiMessageNasGetSignalInfoOutput *self,
    gint8 *value_tdma_signal_strength,
    GError **error);

/**
 * qmi_message_nas_get_signal_info_output_get_lte_signal_strength:
 * @self: a #QmiMessageNasGetSignalInfoOutput.
 * @value_lte_signal_strength_rssi: a placeholder for the output #gint8, or %NULL if not required.
 * @value_lte_signal_strength_rsrq: a placeholder for the output #gint8, or %NULL if not required.
 * @value_lte_signal_strength_rsrp: a placeholder for the output #gint16, or %NULL if not required.
 * @value_lte_signal_strength_snr: a placeholder for the output #gint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE Signal Strength' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_signal_info_output_get_lte_signal_strength (
    QmiMessageNasGetSignalInfoOutput *self,
    gint8 *value_lte_signal_strength_rssi,
    gint8 *value_lte_signal_strength_rsrq,
    gint16 *value_lte_signal_strength_rsrp,
    gint16 *value_lte_signal_strength_snr,
    GError **error);

/**
 * qmi_message_nas_get_signal_info_output_get_wcdma_signal_strength:
 * @self: a #QmiMessageNasGetSignalInfoOutput.
 * @value_wcdma_signal_strength_rssi: a placeholder for the output #gint8, or %NULL if not required.
 * @value_wcdma_signal_strength_ecio: a placeholder for the output #gint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'WCDMA Signal Strength' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_signal_info_output_get_wcdma_signal_strength (
    QmiMessageNasGetSignalInfoOutput *self,
    gint8 *value_wcdma_signal_strength_rssi,
    gint16 *value_wcdma_signal_strength_ecio,
    GError **error);

/**
 * qmi_message_nas_get_signal_info_output_get_gsm_signal_strength:
 * @self: a #QmiMessageNasGetSignalInfoOutput.
 * @value_gsm_signal_strength: a placeholder for the output #gint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GSM Signal Strength' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_signal_info_output_get_gsm_signal_strength (
    QmiMessageNasGetSignalInfoOutput *self,
    gint8 *value_gsm_signal_strength,
    GError **error);

/**
 * qmi_message_nas_get_signal_info_output_get_hdr_signal_strength:
 * @self: a #QmiMessageNasGetSignalInfoOutput.
 * @value_hdr_signal_strength_rssi: a placeholder for the output #gint8, or %NULL if not required.
 * @value_hdr_signal_strength_ecio: a placeholder for the output #gint16, or %NULL if not required.
 * @value_hdr_signal_strength_sinr: a placeholder for the output #QmiNasEvdoSinrLevel, or %NULL if not required.
 * @value_hdr_signal_strength_io: a placeholder for the output #gint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'HDR Signal Strength' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_signal_info_output_get_hdr_signal_strength (
    QmiMessageNasGetSignalInfoOutput *self,
    gint8 *value_hdr_signal_strength_rssi,
    gint16 *value_hdr_signal_strength_ecio,
    QmiNasEvdoSinrLevel *value_hdr_signal_strength_sinr,
    gint32 *value_hdr_signal_strength_io,
    GError **error);

/**
 * qmi_message_nas_get_signal_info_output_get_cdma_signal_strength:
 * @self: a #QmiMessageNasGetSignalInfoOutput.
 * @value_cdma_signal_strength_rssi: a placeholder for the output #gint8, or %NULL if not required.
 * @value_cdma_signal_strength_ecio: a placeholder for the output #gint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA Signal Strength' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_signal_info_output_get_cdma_signal_strength (
    QmiMessageNasGetSignalInfoOutput *self,
    gint8 *value_cdma_signal_strength_rssi,
    gint16 *value_cdma_signal_strength_ecio,
    GError **error);

/**
 * qmi_message_nas_get_signal_info_output_get_result:
 * @self: a QmiMessageNasGetSignalInfoOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_signal_info_output_get_result (
    QmiMessageNasGetSignalInfoOutput *self,
    GError **error);

/**
 * qmi_message_nas_get_signal_info_output_ref:
 * @self: a #QmiMessageNasGetSignalInfoOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasGetSignalInfoOutput *qmi_message_nas_get_signal_info_output_ref (QmiMessageNasGetSignalInfoOutput *self);

/**
 * qmi_message_nas_get_signal_info_output_unref:
 * @self: a #QmiMessageNasGetSignalInfoOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_get_signal_info_output_unref (QmiMessageNasGetSignalInfoOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Config Signal Info */


/* --- Input -- */

/**
 * QmiMessageNasConfigSignalInfoInput:
 *
 * The #QmiMessageNasConfigSignalInfoInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasConfigSignalInfoInput QmiMessageNasConfigSignalInfoInput;
GType qmi_message_nas_config_signal_info_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_CONFIG_SIGNAL_INFO_INPUT (qmi_message_nas_config_signal_info_input_get_type ())

/**
 * qmi_message_nas_config_signal_info_input_get_rscp_threshold:
 * @self: a #QmiMessageNasConfigSignalInfoInput.
 * @value_rscp_threshold: a placeholder for the output #GArray of #gint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'RSCP Threshold' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_config_signal_info_input_get_rscp_threshold (
    QmiMessageNasConfigSignalInfoInput *self,
    GArray **value_rscp_threshold,
    GError **error);

/**
 * qmi_message_nas_config_signal_info_input_set_rscp_threshold:
 * @self: a #QmiMessageNasConfigSignalInfoInput.
 * @value_rscp_threshold: a #GArray of #gint8 elements. A new reference to @value_rscp_threshold will be taken.
 * @error: Return location for error or %NULL.
 *
 * Set the 'RSCP Threshold' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_config_signal_info_input_set_rscp_threshold (
    QmiMessageNasConfigSignalInfoInput *self,
    GArray *value_rscp_threshold,
    GError **error);

/**
 * qmi_message_nas_config_signal_info_input_get_lte_report:
 * @self: a #QmiMessageNasConfigSignalInfoInput.
 * @value_lte_report_rate: a placeholder for the output #guint8, or %NULL if not required.
 * @value_lte_report_average_period: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE Report' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_config_signal_info_input_get_lte_report (
    QmiMessageNasConfigSignalInfoInput *self,
    guint8 *value_lte_report_rate,
    guint8 *value_lte_report_average_period,
    GError **error);

/**
 * qmi_message_nas_config_signal_info_input_set_lte_report:
 * @self: a #QmiMessageNasConfigSignalInfoInput.
 * @value_lte_report_rate: a #guint8.
 * @value_lte_report_average_period: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'LTE Report' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_config_signal_info_input_set_lte_report (
    QmiMessageNasConfigSignalInfoInput *self,
    guint8 value_lte_report_rate,
    guint8 value_lte_report_average_period,
    GError **error);

/**
 * qmi_message_nas_config_signal_info_input_get_rsrp_threshold:
 * @self: a #QmiMessageNasConfigSignalInfoInput.
 * @value_rsrp_threshold: a placeholder for the output #GArray of #gint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'RSRP Threshold' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_config_signal_info_input_get_rsrp_threshold (
    QmiMessageNasConfigSignalInfoInput *self,
    GArray **value_rsrp_threshold,
    GError **error);

/**
 * qmi_message_nas_config_signal_info_input_set_rsrp_threshold:
 * @self: a #QmiMessageNasConfigSignalInfoInput.
 * @value_rsrp_threshold: a #GArray of #gint16 elements. A new reference to @value_rsrp_threshold will be taken.
 * @error: Return location for error or %NULL.
 *
 * Set the 'RSRP Threshold' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_config_signal_info_input_set_rsrp_threshold (
    QmiMessageNasConfigSignalInfoInput *self,
    GArray *value_rsrp_threshold,
    GError **error);

/**
 * qmi_message_nas_config_signal_info_input_get_rsrq_threshold:
 * @self: a #QmiMessageNasConfigSignalInfoInput.
 * @value_rsrq_threshold: a placeholder for the output #GArray of #gint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'RSRQ Threshold' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_config_signal_info_input_get_rsrq_threshold (
    QmiMessageNasConfigSignalInfoInput *self,
    GArray **value_rsrq_threshold,
    GError **error);

/**
 * qmi_message_nas_config_signal_info_input_set_rsrq_threshold:
 * @self: a #QmiMessageNasConfigSignalInfoInput.
 * @value_rsrq_threshold: a #GArray of #gint8 elements. A new reference to @value_rsrq_threshold will be taken.
 * @error: Return location for error or %NULL.
 *
 * Set the 'RSRQ Threshold' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_config_signal_info_input_set_rsrq_threshold (
    QmiMessageNasConfigSignalInfoInput *self,
    GArray *value_rsrq_threshold,
    GError **error);

/**
 * qmi_message_nas_config_signal_info_input_get_io_threshold:
 * @self: a #QmiMessageNasConfigSignalInfoInput.
 * @value_io_threshold: a placeholder for the output #GArray of #gint32 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IO Threshold' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_config_signal_info_input_get_io_threshold (
    QmiMessageNasConfigSignalInfoInput *self,
    GArray **value_io_threshold,
    GError **error);

/**
 * qmi_message_nas_config_signal_info_input_set_io_threshold:
 * @self: a #QmiMessageNasConfigSignalInfoInput.
 * @value_io_threshold: a #GArray of #gint32 elements. A new reference to @value_io_threshold will be taken.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IO Threshold' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_config_signal_info_input_set_io_threshold (
    QmiMessageNasConfigSignalInfoInput *self,
    GArray *value_io_threshold,
    GError **error);

/**
 * qmi_message_nas_config_signal_info_input_get_lte_snr_threshold:
 * @self: a #QmiMessageNasConfigSignalInfoInput.
 * @value_lte_snr_threshold: a placeholder for the output #GArray of #gint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE SNR Threshold' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_config_signal_info_input_get_lte_snr_threshold (
    QmiMessageNasConfigSignalInfoInput *self,
    GArray **value_lte_snr_threshold,
    GError **error);

/**
 * qmi_message_nas_config_signal_info_input_set_lte_snr_threshold:
 * @self: a #QmiMessageNasConfigSignalInfoInput.
 * @value_lte_snr_threshold: a #GArray of #gint16 elements. A new reference to @value_lte_snr_threshold will be taken.
 * @error: Return location for error or %NULL.
 *
 * Set the 'LTE SNR Threshold' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_config_signal_info_input_set_lte_snr_threshold (
    QmiMessageNasConfigSignalInfoInput *self,
    GArray *value_lte_snr_threshold,
    GError **error);

/**
 * qmi_message_nas_config_signal_info_input_get_sinr_threshold:
 * @self: a #QmiMessageNasConfigSignalInfoInput.
 * @value_sinr_threshold: a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'SINR Threshold' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_config_signal_info_input_get_sinr_threshold (
    QmiMessageNasConfigSignalInfoInput *self,
    GArray **value_sinr_threshold,
    GError **error);

/**
 * qmi_message_nas_config_signal_info_input_set_sinr_threshold:
 * @self: a #QmiMessageNasConfigSignalInfoInput.
 * @value_sinr_threshold: a #GArray of #guint8 elements. A new reference to @value_sinr_threshold will be taken.
 * @error: Return location for error or %NULL.
 *
 * Set the 'SINR Threshold' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_config_signal_info_input_set_sinr_threshold (
    QmiMessageNasConfigSignalInfoInput *self,
    GArray *value_sinr_threshold,
    GError **error);

/**
 * qmi_message_nas_config_signal_info_input_get_ecio_threshold:
 * @self: a #QmiMessageNasConfigSignalInfoInput.
 * @value_ecio_threshold: a placeholder for the output #GArray of #gint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'ECIO Threshold' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_config_signal_info_input_get_ecio_threshold (
    QmiMessageNasConfigSignalInfoInput *self,
    GArray **value_ecio_threshold,
    GError **error);

/**
 * qmi_message_nas_config_signal_info_input_set_ecio_threshold:
 * @self: a #QmiMessageNasConfigSignalInfoInput.
 * @value_ecio_threshold: a #GArray of #gint16 elements. A new reference to @value_ecio_threshold will be taken.
 * @error: Return location for error or %NULL.
 *
 * Set the 'ECIO Threshold' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_config_signal_info_input_set_ecio_threshold (
    QmiMessageNasConfigSignalInfoInput *self,
    GArray *value_ecio_threshold,
    GError **error);

/**
 * qmi_message_nas_config_signal_info_input_get_rssi_threshold:
 * @self: a #QmiMessageNasConfigSignalInfoInput.
 * @value_rssi_threshold: a placeholder for the output #GArray of #gint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'RSSI Threshold' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_config_signal_info_input_get_rssi_threshold (
    QmiMessageNasConfigSignalInfoInput *self,
    GArray **value_rssi_threshold,
    GError **error);

/**
 * qmi_message_nas_config_signal_info_input_set_rssi_threshold:
 * @self: a #QmiMessageNasConfigSignalInfoInput.
 * @value_rssi_threshold: a #GArray of #gint8 elements. A new reference to @value_rssi_threshold will be taken.
 * @error: Return location for error or %NULL.
 *
 * Set the 'RSSI Threshold' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_config_signal_info_input_set_rssi_threshold (
    QmiMessageNasConfigSignalInfoInput *self,
    GArray *value_rssi_threshold,
    GError **error);

/**
 * qmi_message_nas_config_signal_info_input_ref:
 * @self: a #QmiMessageNasConfigSignalInfoInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasConfigSignalInfoInput *qmi_message_nas_config_signal_info_input_ref (QmiMessageNasConfigSignalInfoInput *self);

/**
 * qmi_message_nas_config_signal_info_input_unref:
 * @self: a #QmiMessageNasConfigSignalInfoInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_config_signal_info_input_unref (QmiMessageNasConfigSignalInfoInput *self);

/**
 * qmi_message_nas_config_signal_info_input_new:
 *
 * Allocates a new #QmiMessageNasConfigSignalInfoInput.
 *
 * Returns: the newly created #QmiMessageNasConfigSignalInfoInput. The returned value should be freed with qmi_message_nas_config_signal_info_input_unref().
 *
 * Since: 1.0
 */
QmiMessageNasConfigSignalInfoInput *qmi_message_nas_config_signal_info_input_new (void);

/* --- Output -- */

/**
 * QmiMessageNasConfigSignalInfoOutput:
 *
 * The #QmiMessageNasConfigSignalInfoOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasConfigSignalInfoOutput QmiMessageNasConfigSignalInfoOutput;
GType qmi_message_nas_config_signal_info_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_CONFIG_SIGNAL_INFO_OUTPUT (qmi_message_nas_config_signal_info_output_get_type ())

/**
 * qmi_message_nas_config_signal_info_output_get_result:
 * @self: a QmiMessageNasConfigSignalInfoOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_config_signal_info_output_get_result (
    QmiMessageNasConfigSignalInfoOutput *self,
    GError **error);

/**
 * qmi_message_nas_config_signal_info_output_ref:
 * @self: a #QmiMessageNasConfigSignalInfoOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasConfigSignalInfoOutput *qmi_message_nas_config_signal_info_output_ref (QmiMessageNasConfigSignalInfoOutput *self);

/**
 * qmi_message_nas_config_signal_info_output_unref:
 * @self: a #QmiMessageNasConfigSignalInfoOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_config_signal_info_output_unref (QmiMessageNasConfigSignalInfoOutput *self);

/*****************************************************************************/
/* INDICATION: Qmi Indication NAS Signal Info */


/* --- Output -- */

/**
 * QmiIndicationNasSignalInfoOutput:
 *
 * The #QmiIndicationNasSignalInfoOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiIndicationNasSignalInfoOutput QmiIndicationNasSignalInfoOutput;
GType qmi_indication_nas_signal_info_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_NAS_SIGNAL_INFO_OUTPUT (qmi_indication_nas_signal_info_output_get_type ())

/**
 * qmi_indication_nas_signal_info_output_get_tdma_signal_strength:
 * @self: a #QmiIndicationNasSignalInfoOutput.
 * @value_tdma_signal_strength: a placeholder for the output #gint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'TDMA Signal Strength' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_signal_info_output_get_tdma_signal_strength (
    QmiIndicationNasSignalInfoOutput *self,
    gint8 *value_tdma_signal_strength,
    GError **error);

/**
 * qmi_indication_nas_signal_info_output_get_lte_signal_strength:
 * @self: a #QmiIndicationNasSignalInfoOutput.
 * @value_lte_signal_strength_rssi: a placeholder for the output #gint8, or %NULL if not required.
 * @value_lte_signal_strength_rsrq: a placeholder for the output #gint8, or %NULL if not required.
 * @value_lte_signal_strength_rsrp: a placeholder for the output #gint16, or %NULL if not required.
 * @value_lte_signal_strength_snr: a placeholder for the output #gint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE Signal Strength' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_signal_info_output_get_lte_signal_strength (
    QmiIndicationNasSignalInfoOutput *self,
    gint8 *value_lte_signal_strength_rssi,
    gint8 *value_lte_signal_strength_rsrq,
    gint16 *value_lte_signal_strength_rsrp,
    gint16 *value_lte_signal_strength_snr,
    GError **error);

/**
 * qmi_indication_nas_signal_info_output_get_wcdma_signal_strength:
 * @self: a #QmiIndicationNasSignalInfoOutput.
 * @value_wcdma_signal_strength_rssi: a placeholder for the output #gint8, or %NULL if not required.
 * @value_wcdma_signal_strength_ecio: a placeholder for the output #gint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'WCDMA Signal Strength' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_signal_info_output_get_wcdma_signal_strength (
    QmiIndicationNasSignalInfoOutput *self,
    gint8 *value_wcdma_signal_strength_rssi,
    gint16 *value_wcdma_signal_strength_ecio,
    GError **error);

/**
 * qmi_indication_nas_signal_info_output_get_gsm_signal_strength:
 * @self: a #QmiIndicationNasSignalInfoOutput.
 * @value_gsm_signal_strength: a placeholder for the output #gint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GSM Signal Strength' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_signal_info_output_get_gsm_signal_strength (
    QmiIndicationNasSignalInfoOutput *self,
    gint8 *value_gsm_signal_strength,
    GError **error);

/**
 * qmi_indication_nas_signal_info_output_get_hdr_signal_strength:
 * @self: a #QmiIndicationNasSignalInfoOutput.
 * @value_hdr_signal_strength_rssi: a placeholder for the output #gint8, or %NULL if not required.
 * @value_hdr_signal_strength_ecio: a placeholder for the output #gint16, or %NULL if not required.
 * @value_hdr_signal_strength_sinr: a placeholder for the output #QmiNasEvdoSinrLevel, or %NULL if not required.
 * @value_hdr_signal_strength_io: a placeholder for the output #gint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'HDR Signal Strength' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_signal_info_output_get_hdr_signal_strength (
    QmiIndicationNasSignalInfoOutput *self,
    gint8 *value_hdr_signal_strength_rssi,
    gint16 *value_hdr_signal_strength_ecio,
    QmiNasEvdoSinrLevel *value_hdr_signal_strength_sinr,
    gint32 *value_hdr_signal_strength_io,
    GError **error);

/**
 * qmi_indication_nas_signal_info_output_get_cdma_signal_strength:
 * @self: a #QmiIndicationNasSignalInfoOutput.
 * @value_cdma_signal_strength_rssi: a placeholder for the output #gint8, or %NULL if not required.
 * @value_cdma_signal_strength_ecio: a placeholder for the output #gint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA Signal Strength' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_signal_info_output_get_cdma_signal_strength (
    QmiIndicationNasSignalInfoOutput *self,
    gint8 *value_cdma_signal_strength_rssi,
    gint16 *value_cdma_signal_strength_ecio,
    GError **error);

/**
 * qmi_indication_nas_signal_info_output_ref:
 * @self: a #QmiIndicationNasSignalInfoOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiIndicationNasSignalInfoOutput *qmi_indication_nas_signal_info_output_ref (QmiIndicationNasSignalInfoOutput *self);

/**
 * qmi_indication_nas_signal_info_output_unref:
 * @self: a #QmiIndicationNasSignalInfoOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_indication_nas_signal_info_output_unref (QmiIndicationNasSignalInfoOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Get Tx Rx Info */


/* --- Input -- */

/**
 * QmiMessageNasGetTxRxInfoInput:
 *
 * The #QmiMessageNasGetTxRxInfoInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiMessageNasGetTxRxInfoInput QmiMessageNasGetTxRxInfoInput;
GType qmi_message_nas_get_tx_rx_info_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_GET_TX_RX_INFO_INPUT (qmi_message_nas_get_tx_rx_info_input_get_type ())

/**
 * qmi_message_nas_get_tx_rx_info_input_get_radio_interface:
 * @self: a #QmiMessageNasGetTxRxInfoInput.
 * @value_radio_interface: a placeholder for the output #QmiNasRadioInterface, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Radio Interface' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_nas_get_tx_rx_info_input_get_radio_interface (
    QmiMessageNasGetTxRxInfoInput *self,
    QmiNasRadioInterface *value_radio_interface,
    GError **error);

/**
 * qmi_message_nas_get_tx_rx_info_input_set_radio_interface:
 * @self: a #QmiMessageNasGetTxRxInfoInput.
 * @value_radio_interface: a #QmiNasRadioInterface.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Radio Interface' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_nas_get_tx_rx_info_input_set_radio_interface (
    QmiMessageNasGetTxRxInfoInput *self,
    QmiNasRadioInterface value_radio_interface,
    GError **error);

/**
 * qmi_message_nas_get_tx_rx_info_input_ref:
 * @self: a #QmiMessageNasGetTxRxInfoInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiMessageNasGetTxRxInfoInput *qmi_message_nas_get_tx_rx_info_input_ref (QmiMessageNasGetTxRxInfoInput *self);

/**
 * qmi_message_nas_get_tx_rx_info_input_unref:
 * @self: a #QmiMessageNasGetTxRxInfoInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_message_nas_get_tx_rx_info_input_unref (QmiMessageNasGetTxRxInfoInput *self);

/**
 * qmi_message_nas_get_tx_rx_info_input_new:
 *
 * Allocates a new #QmiMessageNasGetTxRxInfoInput.
 *
 * Returns: the newly created #QmiMessageNasGetTxRxInfoInput. The returned value should be freed with qmi_message_nas_get_tx_rx_info_input_unref().
 *
 * Since: 1.6
 */
QmiMessageNasGetTxRxInfoInput *qmi_message_nas_get_tx_rx_info_input_new (void);

/* --- Output -- */

/**
 * QmiMessageNasGetTxRxInfoOutput:
 *
 * The #QmiMessageNasGetTxRxInfoOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiMessageNasGetTxRxInfoOutput QmiMessageNasGetTxRxInfoOutput;
GType qmi_message_nas_get_tx_rx_info_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_GET_TX_RX_INFO_OUTPUT (qmi_message_nas_get_tx_rx_info_output_get_type ())

/**
 * qmi_message_nas_get_tx_rx_info_output_get_result:
 * @self: a QmiMessageNasGetTxRxInfoOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.6
 */
gboolean qmi_message_nas_get_tx_rx_info_output_get_result (
    QmiMessageNasGetTxRxInfoOutput *self,
    GError **error);

/**
 * qmi_message_nas_get_tx_rx_info_output_get_rx_chain_0_info:
 * @self: a #QmiMessageNasGetTxRxInfoOutput.
 * @value_rx_chain_0_info_is_radio_tuned: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_rx_chain_0_info_rx_power: a placeholder for the output #gint32, or %NULL if not required.
 * @value_rx_chain_0_info_ecio: a placeholder for the output #gint32, or %NULL if not required.
 * @value_rx_chain_0_info_rscp: a placeholder for the output #gint32, or %NULL if not required.
 * @value_rx_chain_0_info_rsrp: a placeholder for the output #gint32, or %NULL if not required.
 * @value_rx_chain_0_info_phase: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Rx Chain 0 Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_nas_get_tx_rx_info_output_get_rx_chain_0_info (
    QmiMessageNasGetTxRxInfoOutput *self,
    gboolean *value_rx_chain_0_info_is_radio_tuned,
    gint32 *value_rx_chain_0_info_rx_power,
    gint32 *value_rx_chain_0_info_ecio,
    gint32 *value_rx_chain_0_info_rscp,
    gint32 *value_rx_chain_0_info_rsrp,
    guint32 *value_rx_chain_0_info_phase,
    GError **error);

/**
 * qmi_message_nas_get_tx_rx_info_output_get_rx_chain_1_info:
 * @self: a #QmiMessageNasGetTxRxInfoOutput.
 * @value_rx_chain_1_info_is_radio_tuned: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_rx_chain_1_info_rx_power: a placeholder for the output #gint32, or %NULL if not required.
 * @value_rx_chain_1_info_ecio: a placeholder for the output #gint32, or %NULL if not required.
 * @value_rx_chain_1_info_rscp: a placeholder for the output #gint32, or %NULL if not required.
 * @value_rx_chain_1_info_rsrp: a placeholder for the output #gint32, or %NULL if not required.
 * @value_rx_chain_1_info_phase: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Rx Chain 1 Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_nas_get_tx_rx_info_output_get_rx_chain_1_info (
    QmiMessageNasGetTxRxInfoOutput *self,
    gboolean *value_rx_chain_1_info_is_radio_tuned,
    gint32 *value_rx_chain_1_info_rx_power,
    gint32 *value_rx_chain_1_info_ecio,
    gint32 *value_rx_chain_1_info_rscp,
    gint32 *value_rx_chain_1_info_rsrp,
    guint32 *value_rx_chain_1_info_phase,
    GError **error);

/**
 * qmi_message_nas_get_tx_rx_info_output_get_tx_info:
 * @self: a #QmiMessageNasGetTxRxInfoOutput.
 * @value_tx_info_is_in_traffic: a placeholder for the output #gboolean, or %NULL if not required.
 * @value_tx_info_tx_power: a placeholder for the output #gint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Tx Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_nas_get_tx_rx_info_output_get_tx_info (
    QmiMessageNasGetTxRxInfoOutput *self,
    gboolean *value_tx_info_is_in_traffic,
    gint32 *value_tx_info_tx_power,
    GError **error);

/**
 * qmi_message_nas_get_tx_rx_info_output_ref:
 * @self: a #QmiMessageNasGetTxRxInfoOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiMessageNasGetTxRxInfoOutput *qmi_message_nas_get_tx_rx_info_output_ref (QmiMessageNasGetTxRxInfoOutput *self);

/**
 * qmi_message_nas_get_tx_rx_info_output_unref:
 * @self: a #QmiMessageNasGetTxRxInfoOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_message_nas_get_tx_rx_info_output_unref (QmiMessageNasGetTxRxInfoOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Force Network Search */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageNasForceNetworkSearchOutput:
 *
 * The #QmiMessageNasForceNetworkSearchOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.16
 */
typedef struct _QmiMessageNasForceNetworkSearchOutput QmiMessageNasForceNetworkSearchOutput;
GType qmi_message_nas_force_network_search_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_FORCE_NETWORK_SEARCH_OUTPUT (qmi_message_nas_force_network_search_output_get_type ())

/**
 * qmi_message_nas_force_network_search_output_get_result:
 * @self: a QmiMessageNasForceNetworkSearchOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.16
 */
gboolean qmi_message_nas_force_network_search_output_get_result (
    QmiMessageNasForceNetworkSearchOutput *self,
    GError **error);

/**
 * qmi_message_nas_force_network_search_output_ref:
 * @self: a #QmiMessageNasForceNetworkSearchOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.16
 */
QmiMessageNasForceNetworkSearchOutput *qmi_message_nas_force_network_search_output_ref (QmiMessageNasForceNetworkSearchOutput *self);

/**
 * qmi_message_nas_force_network_search_output_unref:
 * @self: a #QmiMessageNasForceNetworkSearchOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.16
 */
void qmi_message_nas_force_network_search_output_unref (QmiMessageNasForceNetworkSearchOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Get CDMA Position Info */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageNasGetCdmaPositionInfoOutputCdmaPositionInfoBasestationsBasestation:
 * @pilot_type: a #QmiNasCdmaPilotType.
 * @system_id: a #guint16.
 * @network_id: a #guint16.
 * @base_station_id: a #guint16.
 * @pilot_pn: a #guint16.
 * @pilot_strength: a #guint16.
 * @latitude: a #gint32.
 * @longitude: a #gint32.
 * @gps_time_in_milliseconds: a #guint64.
 *
 * A QmiMessageNasGetCdmaPositionInfoOutputCdmaPositionInfoBasestationsBasestation struct.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasGetCdmaPositionInfoOutputCdmaPositionInfoBasestationsBasestation {
    QmiNasCdmaPilotType pilot_type;
    guint16 system_id;
    guint16 network_id;
    guint16 base_station_id;
    guint16 pilot_pn;
    guint16 pilot_strength;
    gint32 latitude;
    gint32 longitude;
    guint64 gps_time_in_milliseconds;
} QmiMessageNasGetCdmaPositionInfoOutputCdmaPositionInfoBasestationsBasestation;

/**
 * QmiMessageNasGetCdmaPositionInfoOutput:
 *
 * The #QmiMessageNasGetCdmaPositionInfoOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasGetCdmaPositionInfoOutput QmiMessageNasGetCdmaPositionInfoOutput;
GType qmi_message_nas_get_cdma_position_info_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_GET_CDMA_POSITION_INFO_OUTPUT (qmi_message_nas_get_cdma_position_info_output_get_type ())

/**
 * qmi_message_nas_get_cdma_position_info_output_get_result:
 * @self: a QmiMessageNasGetCdmaPositionInfoOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_cdma_position_info_output_get_result (
    QmiMessageNasGetCdmaPositionInfoOutput *self,
    GError **error);

/**
 * qmi_message_nas_get_cdma_position_info_output_get_cdma_position_info:
 * @self: a #QmiMessageNasGetCdmaPositionInfoOutput.
 * @value_cdma_position_info_ui_in_idle_mode: a placeholder for the output #gint8, or %NULL if not required.
 * @value_cdma_position_info_basestations: a placeholder for the output #GArray of #QmiMessageNasGetCdmaPositionInfoOutputCdmaPositionInfoBasestationsBasestation elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA Position Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_cdma_position_info_output_get_cdma_position_info (
    QmiMessageNasGetCdmaPositionInfoOutput *self,
    gint8 *value_cdma_position_info_ui_in_idle_mode,
    GArray **value_cdma_position_info_basestations,
    GError **error);

/**
 * qmi_message_nas_get_cdma_position_info_output_ref:
 * @self: a #QmiMessageNasGetCdmaPositionInfoOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasGetCdmaPositionInfoOutput *qmi_message_nas_get_cdma_position_info_output_ref (QmiMessageNasGetCdmaPositionInfoOutput *self);

/**
 * qmi_message_nas_get_cdma_position_info_output_unref:
 * @self: a #QmiMessageNasGetCdmaPositionInfoOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_get_cdma_position_info_output_unref (QmiMessageNasGetCdmaPositionInfoOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Get LTE Cphy CA Info */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageNasGetLteCphyCaInfoOutput:
 *
 * The #QmiMessageNasGetLteCphyCaInfoOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.16
 */
typedef struct _QmiMessageNasGetLteCphyCaInfoOutput QmiMessageNasGetLteCphyCaInfoOutput;
GType qmi_message_nas_get_lte_cphy_ca_info_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_GET_LTE_CPHY_CA_INFO_OUTPUT (qmi_message_nas_get_lte_cphy_ca_info_output_get_type ())

/**
 * qmi_message_nas_get_lte_cphy_ca_info_output_get_result:
 * @self: a QmiMessageNasGetLteCphyCaInfoOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.16
 */
gboolean qmi_message_nas_get_lte_cphy_ca_info_output_get_result (
    QmiMessageNasGetLteCphyCaInfoOutput *self,
    GError **error);

/**
 * qmi_message_nas_get_lte_cphy_ca_info_output_get_dl_bandwidth:
 * @self: a #QmiMessageNasGetLteCphyCaInfoOutput.
 * @value_dl_bandwidth: a placeholder for the output #QmiNasDLBandwidth, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'DL Bandwidth' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.16
 */
gboolean qmi_message_nas_get_lte_cphy_ca_info_output_get_dl_bandwidth (
    QmiMessageNasGetLteCphyCaInfoOutput *self,
    QmiNasDLBandwidth *value_dl_bandwidth,
    GError **error);

/**
 * qmi_message_nas_get_lte_cphy_ca_info_output_get_phy_ca_agg_scell_info:
 * @self: a #QmiMessageNasGetLteCphyCaInfoOutput.
 * @value_phy_ca_agg_scell_info_physical_cell_id: a placeholder for the output #guint16, or %NULL if not required.
 * @value_phy_ca_agg_scell_info_rx_channel: a placeholder for the output #guint16, or %NULL if not required.
 * @value_phy_ca_agg_scell_info_dl_bandwidth: a placeholder for the output #QmiNasDLBandwidth, or %NULL if not required.
 * @value_phy_ca_agg_scell_info_lte_band: a placeholder for the output #QmiNasActiveBand, or %NULL if not required.
 * @value_phy_ca_agg_scell_info_state: a placeholder for the output #QmiNasScellState, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Phy CA Agg SCell Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.16
 */
gboolean qmi_message_nas_get_lte_cphy_ca_info_output_get_phy_ca_agg_scell_info (
    QmiMessageNasGetLteCphyCaInfoOutput *self,
    guint16 *value_phy_ca_agg_scell_info_physical_cell_id,
    guint16 *value_phy_ca_agg_scell_info_rx_channel,
    QmiNasDLBandwidth *value_phy_ca_agg_scell_info_dl_bandwidth,
    QmiNasActiveBand *value_phy_ca_agg_scell_info_lte_band,
    QmiNasScellState *value_phy_ca_agg_scell_info_state,
    GError **error);

/**
 * qmi_message_nas_get_lte_cphy_ca_info_output_get_phy_ca_agg_pcell_info:
 * @self: a #QmiMessageNasGetLteCphyCaInfoOutput.
 * @value_phy_ca_agg_pcell_info_physical_cell_id: a placeholder for the output #guint16, or %NULL if not required.
 * @value_phy_ca_agg_pcell_info_rx_channel: a placeholder for the output #guint16, or %NULL if not required.
 * @value_phy_ca_agg_pcell_info_dl_bandwidth: a placeholder for the output #QmiNasDLBandwidth, or %NULL if not required.
 * @value_phy_ca_agg_pcell_info_lte_band: a placeholder for the output #QmiNasActiveBand, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Phy CA Agg PCell Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.16
 */
gboolean qmi_message_nas_get_lte_cphy_ca_info_output_get_phy_ca_agg_pcell_info (
    QmiMessageNasGetLteCphyCaInfoOutput *self,
    guint16 *value_phy_ca_agg_pcell_info_physical_cell_id,
    guint16 *value_phy_ca_agg_pcell_info_rx_channel,
    QmiNasDLBandwidth *value_phy_ca_agg_pcell_info_dl_bandwidth,
    QmiNasActiveBand *value_phy_ca_agg_pcell_info_lte_band,
    GError **error);

/**
 * qmi_message_nas_get_lte_cphy_ca_info_output_get_scell_index:
 * @self: a #QmiMessageNasGetLteCphyCaInfoOutput.
 * @value_scell_index: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'SCell index' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.16
 */
gboolean qmi_message_nas_get_lte_cphy_ca_info_output_get_scell_index (
    QmiMessageNasGetLteCphyCaInfoOutput *self,
    guint8 *value_scell_index,
    GError **error);

/**
 * qmi_message_nas_get_lte_cphy_ca_info_output_ref:
 * @self: a #QmiMessageNasGetLteCphyCaInfoOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.16
 */
QmiMessageNasGetLteCphyCaInfoOutput *qmi_message_nas_get_lte_cphy_ca_info_output_ref (QmiMessageNasGetLteCphyCaInfoOutput *self);

/**
 * qmi_message_nas_get_lte_cphy_ca_info_output_unref:
 * @self: a #QmiMessageNasGetLteCphyCaInfoOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.16
 */
void qmi_message_nas_get_lte_cphy_ca_info_output_unref (QmiMessageNasGetLteCphyCaInfoOutput *self);

/*****************************************************************************/
/* Service-specific printable: NAS */


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *__qmi_message_nas_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix);

#endif


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gboolean __qmi_message_nas_get_version_introduced (
    QmiMessage *self,
    QmiMessageContext *context,
    guint *major,
    guint *minor);

#endif


/*****************************************************************************/
/* CLIENT: QMI Client NAS */

#define QMI_TYPE_CLIENT_NAS            (qmi_client_nas_get_type ())
#define QMI_CLIENT_NAS(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), QMI_TYPE_CLIENT_NAS, QmiClientNas))
#define QMI_CLIENT_NAS_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  QMI_TYPE_CLIENT_NAS, QmiClientNasClass))
#define QMI_IS_CLIENT_NAS(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), QMI_TYPE_CLIENT_NAS))
#define QMI_IS_CLIENT_NAS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  QMI_TYPE_CLIENT_NAS))
#define QMI_CLIENT_NAS_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  QMI_TYPE_CLIENT_NAS, QmiClientNasClass))

typedef struct _QmiClientNas QmiClientNas;
typedef struct _QmiClientNasClass QmiClientNasClass;

/**
 * QmiClientNas:
 *
 * The #QmiClientNas structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
struct _QmiClientNas {
    /*< private >*/
    QmiClient parent;
    gpointer priv_unused;
};

struct _QmiClientNasClass {
    /*< private >*/
    QmiClientClass parent;
};

GType qmi_client_nas_get_type (void);


/**
 * qmi_client_nas_reset:
 * @self: a #QmiClientNas.
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
 * You can then call qmi_client_nas_reset_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_nas_reset (
    QmiClientNas *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_reset_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_reset().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_reset().
 *
 * Returns: a #QmiMessageNasResetOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_reset_output_unref().
 *
 * Since: 1.0
 */
QmiMessageNasResetOutput *qmi_client_nas_reset_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_set_event_report:
 * @self: a #QmiClientNas.
 * @input: a #QmiMessageNasSetEventReportInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set Event Report request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_set_event_report_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_nas_set_event_report (
    QmiClientNas *self,
    QmiMessageNasSetEventReportInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_set_event_report_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_set_event_report().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_set_event_report().
 *
 * Returns: a #QmiMessageNasSetEventReportOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_set_event_report_output_unref().
 *
 * Since: 1.0
 */
QmiMessageNasSetEventReportOutput *qmi_client_nas_set_event_report_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_register_indications:
 * @self: a #QmiClientNas.
 * @input: a #QmiMessageNasRegisterIndicationsInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Register Indications request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_register_indications_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_nas_register_indications (
    QmiClientNas *self,
    QmiMessageNasRegisterIndicationsInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_register_indications_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_register_indications().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_register_indications().
 *
 * Returns: a #QmiMessageNasRegisterIndicationsOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_register_indications_output_unref().
 *
 * Since: 1.0
 */
QmiMessageNasRegisterIndicationsOutput *qmi_client_nas_register_indications_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_get_supported_messages:
 * @self: a #QmiClientNas.
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
 * You can then call qmi_client_nas_get_supported_messages_finish() to get the result of the operation.
 *
 * Since: 1.14
 */
void qmi_client_nas_get_supported_messages (
    QmiClientNas *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_get_supported_messages_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_get_supported_messages().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_get_supported_messages().
 *
 * Returns: a #QmiMessageNasGetSupportedMessagesOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_supported_messages_output_unref().
 *
 * Since: 1.14
 */
QmiMessageNasGetSupportedMessagesOutput *qmi_client_nas_get_supported_messages_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_get_signal_strength:
 * @self: a #QmiClientNas.
 * @input: a #QmiMessageNasGetSignalStrengthInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Signal Strength request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_get_signal_strength_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_nas_get_signal_strength (
    QmiClientNas *self,
    QmiMessageNasGetSignalStrengthInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_get_signal_strength_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_get_signal_strength().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_get_signal_strength().
 *
 * Returns: a #QmiMessageNasGetSignalStrengthOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_signal_strength_output_unref().
 *
 * Since: 1.0
 */
QmiMessageNasGetSignalStrengthOutput *qmi_client_nas_get_signal_strength_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_network_scan:
 * @self: a #QmiClientNas.
 * @input: a #QmiMessageNasNetworkScanInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Network Scan request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_network_scan_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_nas_network_scan (
    QmiClientNas *self,
    QmiMessageNasNetworkScanInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_network_scan_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_network_scan().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_network_scan().
 *
 * Returns: a #QmiMessageNasNetworkScanOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_network_scan_output_unref().
 *
 * Since: 1.0
 */
QmiMessageNasNetworkScanOutput *qmi_client_nas_network_scan_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_initiate_network_register:
 * @self: a #QmiClientNas.
 * @input: a #QmiMessageNasInitiateNetworkRegisterInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Initiate Network Register request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_initiate_network_register_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_nas_initiate_network_register (
    QmiClientNas *self,
    QmiMessageNasInitiateNetworkRegisterInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_initiate_network_register_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_initiate_network_register().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_initiate_network_register().
 *
 * Returns: a #QmiMessageNasInitiateNetworkRegisterOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_initiate_network_register_output_unref().
 *
 * Since: 1.0
 */
QmiMessageNasInitiateNetworkRegisterOutput *qmi_client_nas_initiate_network_register_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_attach_detach:
 * @self: a #QmiClientNas.
 * @input: a #QmiMessageNasAttachDetachInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Attach Detach request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_attach_detach_finish() to get the result of the operation.
 *
 * Since: 1.20
 */
void qmi_client_nas_attach_detach (
    QmiClientNas *self,
    QmiMessageNasAttachDetachInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_attach_detach_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_attach_detach().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_attach_detach().
 *
 * Returns: a #QmiMessageNasAttachDetachOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_attach_detach_output_unref().
 *
 * Since: 1.20
 */
QmiMessageNasAttachDetachOutput *qmi_client_nas_attach_detach_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_get_serving_system:
 * @self: a #QmiClientNas.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Serving System request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_get_serving_system_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_nas_get_serving_system (
    QmiClientNas *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_get_serving_system_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_get_serving_system().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_get_serving_system().
 *
 * Returns: a #QmiMessageNasGetServingSystemOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_serving_system_output_unref().
 *
 * Since: 1.0
 */
QmiMessageNasGetServingSystemOutput *qmi_client_nas_get_serving_system_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_get_home_network:
 * @self: a #QmiClientNas.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Home Network request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_get_home_network_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_nas_get_home_network (
    QmiClientNas *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_get_home_network_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_get_home_network().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_get_home_network().
 *
 * Returns: a #QmiMessageNasGetHomeNetworkOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_home_network_output_unref().
 *
 * Since: 1.0
 */
QmiMessageNasGetHomeNetworkOutput *qmi_client_nas_get_home_network_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_set_technology_preference:
 * @self: a #QmiClientNas.
 * @input: a #QmiMessageNasSetTechnologyPreferenceInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set Technology Preference request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_set_technology_preference_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_nas_set_technology_preference (
    QmiClientNas *self,
    QmiMessageNasSetTechnologyPreferenceInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_set_technology_preference_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_set_technology_preference().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_set_technology_preference().
 *
 * Returns: a #QmiMessageNasSetTechnologyPreferenceOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_set_technology_preference_output_unref().
 *
 * Since: 1.0
 */
QmiMessageNasSetTechnologyPreferenceOutput *qmi_client_nas_set_technology_preference_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_get_technology_preference:
 * @self: a #QmiClientNas.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Technology Preference request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_get_technology_preference_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_nas_get_technology_preference (
    QmiClientNas *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_get_technology_preference_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_get_technology_preference().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_get_technology_preference().
 *
 * Returns: a #QmiMessageNasGetTechnologyPreferenceOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_technology_preference_output_unref().
 *
 * Since: 1.0
 */
QmiMessageNasGetTechnologyPreferenceOutput *qmi_client_nas_get_technology_preference_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_get_rf_band_information:
 * @self: a #QmiClientNas.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get RF Band Information request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_get_rf_band_information_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_nas_get_rf_band_information (
    QmiClientNas *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_get_rf_band_information_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_get_rf_band_information().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_get_rf_band_information().
 *
 * Returns: a #QmiMessageNasGetRfBandInformationOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_rf_band_information_output_unref().
 *
 * Since: 1.0
 */
QmiMessageNasGetRfBandInformationOutput *qmi_client_nas_get_rf_band_information_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_set_system_selection_preference:
 * @self: a #QmiClientNas.
 * @input: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set System Selection Preference request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_set_system_selection_preference_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_nas_set_system_selection_preference (
    QmiClientNas *self,
    QmiMessageNasSetSystemSelectionPreferenceInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_set_system_selection_preference_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_set_system_selection_preference().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_set_system_selection_preference().
 *
 * Returns: a #QmiMessageNasSetSystemSelectionPreferenceOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_set_system_selection_preference_output_unref().
 *
 * Since: 1.0
 */
QmiMessageNasSetSystemSelectionPreferenceOutput *qmi_client_nas_set_system_selection_preference_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_get_system_selection_preference:
 * @self: a #QmiClientNas.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get System Selection Preference request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_get_system_selection_preference_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_nas_get_system_selection_preference (
    QmiClientNas *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_get_system_selection_preference_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_get_system_selection_preference().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_get_system_selection_preference().
 *
 * Returns: a #QmiMessageNasGetSystemSelectionPreferenceOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_system_selection_preference_output_unref().
 *
 * Since: 1.0
 */
QmiMessageNasGetSystemSelectionPreferenceOutput *qmi_client_nas_get_system_selection_preference_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_get_operator_name:
 * @self: a #QmiClientNas.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Operator Name request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_get_operator_name_finish() to get the result of the operation.
 *
 * Since: 1.18
 */
void qmi_client_nas_get_operator_name (
    QmiClientNas *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_get_operator_name_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_get_operator_name().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_get_operator_name().
 *
 * Returns: a #QmiMessageNasGetOperatorNameOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_operator_name_output_unref().
 *
 * Since: 1.18
 */
QmiMessageNasGetOperatorNameOutput *qmi_client_nas_get_operator_name_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_get_cell_location_info:
 * @self: a #QmiClientNas.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Cell Location Info request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_get_cell_location_info_finish() to get the result of the operation.
 *
 * Since: 1.10
 */
void qmi_client_nas_get_cell_location_info (
    QmiClientNas *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_get_cell_location_info_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_get_cell_location_info().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_get_cell_location_info().
 *
 * Returns: a #QmiMessageNasGetCellLocationInfoOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_cell_location_info_output_unref().
 *
 * Since: 1.10
 */
QmiMessageNasGetCellLocationInfoOutput *qmi_client_nas_get_cell_location_info_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_get_system_info:
 * @self: a #QmiClientNas.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get System Info request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_get_system_info_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_nas_get_system_info (
    QmiClientNas *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_get_system_info_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_get_system_info().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_get_system_info().
 *
 * Returns: a #QmiMessageNasGetSystemInfoOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_system_info_output_unref().
 *
 * Since: 1.0
 */
QmiMessageNasGetSystemInfoOutput *qmi_client_nas_get_system_info_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_get_signal_info:
 * @self: a #QmiClientNas.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Signal Info request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_get_signal_info_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_nas_get_signal_info (
    QmiClientNas *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_get_signal_info_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_get_signal_info().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_get_signal_info().
 *
 * Returns: a #QmiMessageNasGetSignalInfoOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_signal_info_output_unref().
 *
 * Since: 1.0
 */
QmiMessageNasGetSignalInfoOutput *qmi_client_nas_get_signal_info_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_config_signal_info:
 * @self: a #QmiClientNas.
 * @input: a #QmiMessageNasConfigSignalInfoInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Config Signal Info request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_config_signal_info_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_nas_config_signal_info (
    QmiClientNas *self,
    QmiMessageNasConfigSignalInfoInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_config_signal_info_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_config_signal_info().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_config_signal_info().
 *
 * Returns: a #QmiMessageNasConfigSignalInfoOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_config_signal_info_output_unref().
 *
 * Since: 1.0
 */
QmiMessageNasConfigSignalInfoOutput *qmi_client_nas_config_signal_info_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_get_tx_rx_info:
 * @self: a #QmiClientNas.
 * @input: a #QmiMessageNasGetTxRxInfoInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Tx Rx Info request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_get_tx_rx_info_finish() to get the result of the operation.
 *
 * Since: 1.6
 */
void qmi_client_nas_get_tx_rx_info (
    QmiClientNas *self,
    QmiMessageNasGetTxRxInfoInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_get_tx_rx_info_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_get_tx_rx_info().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_get_tx_rx_info().
 *
 * Returns: a #QmiMessageNasGetTxRxInfoOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_tx_rx_info_output_unref().
 *
 * Since: 1.6
 */
QmiMessageNasGetTxRxInfoOutput *qmi_client_nas_get_tx_rx_info_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_force_network_search:
 * @self: a #QmiClientNas.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Force Network Search request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_force_network_search_finish() to get the result of the operation.
 *
 * Since: 1.16
 */
void qmi_client_nas_force_network_search (
    QmiClientNas *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_force_network_search_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_force_network_search().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_force_network_search().
 *
 * Returns: a #QmiMessageNasForceNetworkSearchOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_force_network_search_output_unref().
 *
 * Since: 1.16
 */
QmiMessageNasForceNetworkSearchOutput *qmi_client_nas_force_network_search_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_get_cdma_position_info:
 * @self: a #QmiClientNas.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get CDMA Position Info request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_get_cdma_position_info_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_nas_get_cdma_position_info (
    QmiClientNas *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_get_cdma_position_info_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_get_cdma_position_info().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_get_cdma_position_info().
 *
 * Returns: a #QmiMessageNasGetCdmaPositionInfoOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_cdma_position_info_output_unref().
 *
 * Since: 1.0
 */
QmiMessageNasGetCdmaPositionInfoOutput *qmi_client_nas_get_cdma_position_info_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_get_lte_cphy_ca_info:
 * @self: a #QmiClientNas.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get LTE Cphy CA Info request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_get_lte_cphy_ca_info_finish() to get the result of the operation.
 *
 * Since: 1.16
 */
void qmi_client_nas_get_lte_cphy_ca_info (
    QmiClientNas *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_get_lte_cphy_ca_info_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_get_lte_cphy_ca_info().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_get_lte_cphy_ca_info().
 *
 * Returns: a #QmiMessageNasGetLteCphyCaInfoOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_lte_cphy_ca_info_output_unref().
 *
 * Since: 1.16
 */
QmiMessageNasGetLteCphyCaInfoOutput *qmi_client_nas_get_lte_cphy_ca_info_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

G_END_DECLS

#endif /* __LIBQMI_GLIB_QMI_NAS__ */
