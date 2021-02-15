
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
#include "qmi-enums-wds.h"
#include "qmi-message.h"
#include "qmi-client.h"

#ifndef __LIBQMI_GLIB_QMI_WDS__
#define __LIBQMI_GLIB_QMI_WDS__

G_BEGIN_DECLS


/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Reset */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageWdsResetOutput:
 *
 * The #QmiMessageWdsResetOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWdsResetOutput QmiMessageWdsResetOutput;
GType qmi_message_wds_reset_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_RESET_OUTPUT (qmi_message_wds_reset_output_get_type ())

/**
 * qmi_message_wds_reset_output_get_result:
 * @self: a QmiMessageWdsResetOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_reset_output_get_result (
    QmiMessageWdsResetOutput *self,
    GError **error);

/**
 * qmi_message_wds_reset_output_ref:
 * @self: a #QmiMessageWdsResetOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWdsResetOutput *qmi_message_wds_reset_output_ref (QmiMessageWdsResetOutput *self);

/**
 * qmi_message_wds_reset_output_unref:
 * @self: a #QmiMessageWdsResetOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wds_reset_output_unref (QmiMessageWdsResetOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Set Event Report */


/* --- Input -- */

/**
 * QmiMessageWdsSetEventReportInput:
 *
 * The #QmiMessageWdsSetEventReportInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageWdsSetEventReportInput QmiMessageWdsSetEventReportInput;
GType qmi_message_wds_set_event_report_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_SET_EVENT_REPORT_INPUT (qmi_message_wds_set_event_report_input_get_type ())

/**
 * qmi_message_wds_set_event_report_input_get_extended_data_bearer_technology:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_extended_data_bearer_technology: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Extended Data Bearer Technology' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_get_extended_data_bearer_technology (
    QmiMessageWdsSetEventReportInput *self,
    gboolean *value_extended_data_bearer_technology,
    GError **error);

/**
 * qmi_message_wds_set_event_report_input_set_extended_data_bearer_technology:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_extended_data_bearer_technology: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Extended Data Bearer Technology' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_set_extended_data_bearer_technology (
    QmiMessageWdsSetEventReportInput *self,
    gboolean value_extended_data_bearer_technology,
    GError **error);

/**
 * qmi_message_wds_set_event_report_input_get_pdn_filter_removals:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_pdn_filter_removals: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDN Filter Removals' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_get_pdn_filter_removals (
    QmiMessageWdsSetEventReportInput *self,
    gboolean *value_pdn_filter_removals,
    GError **error);

/**
 * qmi_message_wds_set_event_report_input_set_pdn_filter_removals:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_pdn_filter_removals: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PDN Filter Removals' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_set_pdn_filter_removals (
    QmiMessageWdsSetEventReportInput *self,
    gboolean value_pdn_filter_removals,
    GError **error);

/**
 * qmi_message_wds_set_event_report_input_get_limited_data_system_status:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_limited_data_system_status: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Limited Data System Status' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_get_limited_data_system_status (
    QmiMessageWdsSetEventReportInput *self,
    gboolean *value_limited_data_system_status,
    GError **error);

/**
 * qmi_message_wds_set_event_report_input_set_limited_data_system_status:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_limited_data_system_status: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Limited Data System Status' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_set_limited_data_system_status (
    QmiMessageWdsSetEventReportInput *self,
    gboolean value_limited_data_system_status,
    GError **error);

/**
 * qmi_message_wds_set_event_report_input_get_uplink_flow_control:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_uplink_flow_control: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Uplink Flow Control' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_get_uplink_flow_control (
    QmiMessageWdsSetEventReportInput *self,
    gboolean *value_uplink_flow_control,
    GError **error);

/**
 * qmi_message_wds_set_event_report_input_set_uplink_flow_control:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_uplink_flow_control: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Uplink Flow Control' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_set_uplink_flow_control (
    QmiMessageWdsSetEventReportInput *self,
    gboolean value_uplink_flow_control,
    GError **error);

/**
 * qmi_message_wds_set_event_report_input_get_data_systems:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_data_systems: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Data Systems' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_get_data_systems (
    QmiMessageWdsSetEventReportInput *self,
    gboolean *value_data_systems,
    GError **error);

/**
 * qmi_message_wds_set_event_report_input_set_data_systems:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_data_systems: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Data Systems' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_set_data_systems (
    QmiMessageWdsSetEventReportInput *self,
    gboolean value_data_systems,
    GError **error);

/**
 * qmi_message_wds_set_event_report_input_get_evdo_pm_change:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_evdo_pm_change: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'EVDO PM Change' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_get_evdo_pm_change (
    QmiMessageWdsSetEventReportInput *self,
    gboolean *value_evdo_pm_change,
    GError **error);

/**
 * qmi_message_wds_set_event_report_input_set_evdo_pm_change:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_evdo_pm_change: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'EVDO PM Change' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_set_evdo_pm_change (
    QmiMessageWdsSetEventReportInput *self,
    gboolean value_evdo_pm_change,
    GError **error);

/**
 * qmi_message_wds_set_event_report_input_get_preferred_data_system:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_preferred_data_system: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Preferred Data System' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_get_preferred_data_system (
    QmiMessageWdsSetEventReportInput *self,
    gboolean *value_preferred_data_system,
    GError **error);

/**
 * qmi_message_wds_set_event_report_input_set_preferred_data_system:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_preferred_data_system: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Preferred Data System' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_set_preferred_data_system (
    QmiMessageWdsSetEventReportInput *self,
    gboolean value_preferred_data_system,
    GError **error);

/**
 * qmi_message_wds_set_event_report_input_get_data_call_status:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_data_call_status: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Data Call Status' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_get_data_call_status (
    QmiMessageWdsSetEventReportInput *self,
    gboolean *value_data_call_status,
    GError **error);

/**
 * qmi_message_wds_set_event_report_input_set_data_call_status:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_data_call_status: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Data Call Status' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_set_data_call_status (
    QmiMessageWdsSetEventReportInput *self,
    gboolean value_data_call_status,
    GError **error);

/**
 * qmi_message_wds_set_event_report_input_get_current_data_bearer_technology:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_current_data_bearer_technology: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Current Data Bearer Technology' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_get_current_data_bearer_technology (
    QmiMessageWdsSetEventReportInput *self,
    gboolean *value_current_data_bearer_technology,
    GError **error);

/**
 * qmi_message_wds_set_event_report_input_set_current_data_bearer_technology:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_current_data_bearer_technology: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Current Data Bearer Technology' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_set_current_data_bearer_technology (
    QmiMessageWdsSetEventReportInput *self,
    gboolean value_current_data_bearer_technology,
    GError **error);

/**
 * qmi_message_wds_set_event_report_input_get_mip_status:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_mip_status: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'MIP Status' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_get_mip_status (
    QmiMessageWdsSetEventReportInput *self,
    guint8 *value_mip_status,
    GError **error);

/**
 * qmi_message_wds_set_event_report_input_set_mip_status:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_mip_status: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'MIP Status' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_set_mip_status (
    QmiMessageWdsSetEventReportInput *self,
    guint8 value_mip_status,
    GError **error);

/**
 * qmi_message_wds_set_event_report_input_get_dormancy_status:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_dormancy_status: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Dormancy Status' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_get_dormancy_status (
    QmiMessageWdsSetEventReportInput *self,
    gboolean *value_dormancy_status,
    GError **error);

/**
 * qmi_message_wds_set_event_report_input_set_dormancy_status:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_dormancy_status: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Dormancy Status' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_set_dormancy_status (
    QmiMessageWdsSetEventReportInput *self,
    gboolean value_dormancy_status,
    GError **error);

/**
 * qmi_message_wds_set_event_report_input_get_data_bearer_technology:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_data_bearer_technology: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Data Bearer Technology' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_get_data_bearer_technology (
    QmiMessageWdsSetEventReportInput *self,
    gboolean *value_data_bearer_technology,
    GError **error);

/**
 * qmi_message_wds_set_event_report_input_set_data_bearer_technology:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_data_bearer_technology: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Data Bearer Technology' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_set_data_bearer_technology (
    QmiMessageWdsSetEventReportInput *self,
    gboolean value_data_bearer_technology,
    GError **error);

/**
 * qmi_message_wds_set_event_report_input_get_transfer_statistics:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_transfer_statistics_interval_seconds: a placeholder for the output #guint8, or %NULL if not required.
 * @value_transfer_statistics_indicators: a placeholder for the output #QmiWdsSetEventReportTransferStatistics, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Transfer Statistics' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_get_transfer_statistics (
    QmiMessageWdsSetEventReportInput *self,
    guint8 *value_transfer_statistics_interval_seconds,
    QmiWdsSetEventReportTransferStatistics *value_transfer_statistics_indicators,
    GError **error);

/**
 * qmi_message_wds_set_event_report_input_set_transfer_statistics:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_transfer_statistics_interval_seconds: a #guint8.
 * @value_transfer_statistics_indicators: a #QmiWdsSetEventReportTransferStatistics.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Transfer Statistics' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_set_transfer_statistics (
    QmiMessageWdsSetEventReportInput *self,
    guint8 value_transfer_statistics_interval_seconds,
    QmiWdsSetEventReportTransferStatistics value_transfer_statistics_indicators,
    GError **error);

/**
 * qmi_message_wds_set_event_report_input_get_channel_rate:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_channel_rate: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Channel Rate' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_get_channel_rate (
    QmiMessageWdsSetEventReportInput *self,
    gboolean *value_channel_rate,
    GError **error);

/**
 * qmi_message_wds_set_event_report_input_set_channel_rate:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_channel_rate: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Channel Rate' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_set_channel_rate (
    QmiMessageWdsSetEventReportInput *self,
    gboolean value_channel_rate,
    GError **error);

/**
 * qmi_message_wds_set_event_report_input_ref:
 * @self: a #QmiMessageWdsSetEventReportInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessageWdsSetEventReportInput *qmi_message_wds_set_event_report_input_ref (QmiMessageWdsSetEventReportInput *self);

/**
 * qmi_message_wds_set_event_report_input_unref:
 * @self: a #QmiMessageWdsSetEventReportInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_wds_set_event_report_input_unref (QmiMessageWdsSetEventReportInput *self);

/**
 * qmi_message_wds_set_event_report_input_new:
 *
 * Allocates a new #QmiMessageWdsSetEventReportInput.
 *
 * Returns: the newly created #QmiMessageWdsSetEventReportInput. The returned value should be freed with qmi_message_wds_set_event_report_input_unref().
 *
 * Since: 1.18
 */
QmiMessageWdsSetEventReportInput *qmi_message_wds_set_event_report_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWdsSetEventReportOutput:
 *
 * The #QmiMessageWdsSetEventReportOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageWdsSetEventReportOutput QmiMessageWdsSetEventReportOutput;
GType qmi_message_wds_set_event_report_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_SET_EVENT_REPORT_OUTPUT (qmi_message_wds_set_event_report_output_get_type ())

/**
 * qmi_message_wds_set_event_report_output_get_result:
 * @self: a QmiMessageWdsSetEventReportOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_output_get_result (
    QmiMessageWdsSetEventReportOutput *self,
    GError **error);

/**
 * qmi_message_wds_set_event_report_output_ref:
 * @self: a #QmiMessageWdsSetEventReportOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessageWdsSetEventReportOutput *qmi_message_wds_set_event_report_output_ref (QmiMessageWdsSetEventReportOutput *self);

/**
 * qmi_message_wds_set_event_report_output_unref:
 * @self: a #QmiMessageWdsSetEventReportOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_wds_set_event_report_output_unref (QmiMessageWdsSetEventReportOutput *self);

/*****************************************************************************/
/* INDICATION: Qmi Indication WDS Event Report */


/* --- Output -- */

/**
 * QmiIndicationWdsEventReportOutputDataSystemsNetworksNetwork:
 * @network_type: a #QmiWdsDataSystemNetworkType.
 * @rat_mask: a #guint32.
 * @so_mask: a #guint32.
 *
 * A QmiIndicationWdsEventReportOutputDataSystemsNetworksNetwork struct.
 *
 * Since: 1.18
 */
typedef struct _QmiIndicationWdsEventReportOutputDataSystemsNetworksNetwork {
    QmiWdsDataSystemNetworkType network_type;
    guint32 rat_mask;
    guint32 so_mask;
} QmiIndicationWdsEventReportOutputDataSystemsNetworksNetwork;

/**
 * QmiIndicationWdsEventReportOutput:
 *
 * The #QmiIndicationWdsEventReportOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiIndicationWdsEventReportOutput QmiIndicationWdsEventReportOutput;
GType qmi_indication_wds_event_report_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_WDS_EVENT_REPORT_OUTPUT (qmi_indication_wds_event_report_output_get_type ())

/**
 * qmi_indication_wds_event_report_output_get_extended_data_bearer_technology:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_extended_data_bearer_technology_data_bearer_technology: a placeholder for the output #QmiWdsDataSystemNetworkType, or %NULL if not required.
 * @value_extended_data_bearer_technology_radio_access_technology: a placeholder for the output #QmiWdsRadioAccessTechnology, or %NULL if not required.
 * @value_extended_data_bearer_technology_extended_data_bearer_technology_3gpp: a placeholder for the output #QmiWdsExtendedDataBearerTechnology3gpp, or %NULL if not required.
 * @value_extended_data_bearer_technology_extended_data_bearer_technology_3gpp2: a placeholder for the output #QmiWdsExtendedDataBearerTechnology3gpp2, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Extended Data Bearer Technology' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_extended_data_bearer_technology (
    QmiIndicationWdsEventReportOutput *self,
    QmiWdsDataSystemNetworkType *value_extended_data_bearer_technology_data_bearer_technology,
    QmiWdsRadioAccessTechnology *value_extended_data_bearer_technology_radio_access_technology,
    QmiWdsExtendedDataBearerTechnology3gpp *value_extended_data_bearer_technology_extended_data_bearer_technology_3gpp,
    QmiWdsExtendedDataBearerTechnology3gpp2 *value_extended_data_bearer_technology_extended_data_bearer_technology_3gpp2,
    GError **error);

/**
 * qmi_indication_wds_event_report_output_get_pdn_filters_removed:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_pdn_filters_removed_pdn_filter_handler: a placeholder for the output #GArray of #guint32 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDN Filters Removed' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_pdn_filters_removed (
    QmiIndicationWdsEventReportOutput *self,
    GArray **value_pdn_filters_removed_pdn_filter_handler,
    GError **error);

/**
 * qmi_indication_wds_event_report_output_get_data_call_address_family:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_data_call_address_family: a placeholder for the output #QmiWdsIpFamily, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Data Call Address Family' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_data_call_address_family (
    QmiIndicationWdsEventReportOutput *self,
    QmiWdsIpFamily *value_data_call_address_family,
    GError **error);

/**
 * qmi_indication_wds_event_report_output_get_uplink_flow_control_enabled:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_uplink_flow_control_enabled: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Uplink Flow Control Enabled' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_uplink_flow_control_enabled (
    QmiIndicationWdsEventReportOutput *self,
    gboolean *value_uplink_flow_control_enabled,
    GError **error);

/**
 * qmi_indication_wds_event_report_output_get_rx_packets_dropped:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_rx_packets_dropped: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Rx Packets Dropped' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_rx_packets_dropped (
    QmiIndicationWdsEventReportOutput *self,
    guint32 *value_rx_packets_dropped,
    GError **error);

/**
 * qmi_indication_wds_event_report_output_get_tx_packets_dropped:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_tx_packets_dropped: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Tx Packets Dropped' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_tx_packets_dropped (
    QmiIndicationWdsEventReportOutput *self,
    guint32 *value_tx_packets_dropped,
    GError **error);

/**
 * qmi_indication_wds_event_report_output_get_data_systems:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_data_systems_preferred_network_type: a placeholder for the output #QmiWdsDataSystemNetworkType, or %NULL if not required.
 * @value_data_systems_networks: a placeholder for the output #GArray of #QmiIndicationWdsEventReportOutputDataSystemsNetworksNetwork elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Data Systems' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_data_systems (
    QmiIndicationWdsEventReportOutput *self,
    QmiWdsDataSystemNetworkType *value_data_systems_preferred_network_type,
    GArray **value_data_systems_networks,
    GError **error);

/**
 * qmi_indication_wds_event_report_output_get_evdo_page_monitor_period_change:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_evdo_page_monitor_period_change_period_change: a placeholder for the output #guint8, or %NULL if not required.
 * @value_evdo_page_monitor_period_change_force_long_sleep: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'EVDO Page Monitor Period Change' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_evdo_page_monitor_period_change (
    QmiIndicationWdsEventReportOutput *self,
    guint8 *value_evdo_page_monitor_period_change_period_change,
    gboolean *value_evdo_page_monitor_period_change_force_long_sleep,
    GError **error);

/**
 * qmi_indication_wds_event_report_output_get_data_call_type:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_data_call_type_data_call_type: a placeholder for the output #QmiWdsDataCallType, or %NULL if not required.
 * @value_data_call_type_tethered_call_type: a placeholder for the output #QmiWdsTetheredCallType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Data Call Type' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_data_call_type (
    QmiIndicationWdsEventReportOutput *self,
    QmiWdsDataCallType *value_data_call_type_data_call_type,
    QmiWdsTetheredCallType *value_data_call_type_tethered_call_type,
    GError **error);

/**
 * qmi_indication_wds_event_report_output_get_preferred_data_system:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_preferred_data_system: a placeholder for the output #QmiWdsDataSystem, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Preferred Data System' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_preferred_data_system (
    QmiIndicationWdsEventReportOutput *self,
    QmiWdsDataSystem *value_preferred_data_system,
    GError **error);

/**
 * qmi_indication_wds_event_report_output_get_data_call_status:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_data_call_status: a placeholder for the output #QmiWdsDataCallStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Data Call Status' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_data_call_status (
    QmiIndicationWdsEventReportOutput *self,
    QmiWdsDataCallStatus *value_data_call_status,
    GError **error);

/**
 * qmi_indication_wds_event_report_output_get_current_data_bearer_technology:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_current_data_bearer_technology_network_type: a placeholder for the output #QmiWdsNetworkType, or %NULL if not required.
 * @value_current_data_bearer_technology_rat_mask: a placeholder for the output #guint32, or %NULL if not required.
 * @value_current_data_bearer_technology_so_mask: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Current Data Bearer Technology' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_current_data_bearer_technology (
    QmiIndicationWdsEventReportOutput *self,
    QmiWdsNetworkType *value_current_data_bearer_technology_network_type,
    guint32 *value_current_data_bearer_technology_rat_mask,
    guint32 *value_current_data_bearer_technology_so_mask,
    GError **error);

/**
 * qmi_indication_wds_event_report_output_get_mip_status:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_mip_status: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'MIP Status' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_mip_status (
    QmiIndicationWdsEventReportOutput *self,
    gboolean *value_mip_status,
    GError **error);

/**
 * qmi_indication_wds_event_report_output_get_rx_bytes_ok:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_rx_bytes_ok: a placeholder for the output #guint64, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Rx Bytes Ok' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_rx_bytes_ok (
    QmiIndicationWdsEventReportOutput *self,
    guint64 *value_rx_bytes_ok,
    GError **error);

/**
 * qmi_indication_wds_event_report_output_get_tx_bytes_ok:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_tx_bytes_ok: a placeholder for the output #guint64, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Tx Bytes Ok' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_tx_bytes_ok (
    QmiIndicationWdsEventReportOutput *self,
    guint64 *value_tx_bytes_ok,
    GError **error);

/**
 * qmi_indication_wds_event_report_output_get_dormancy_status:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_dormancy_status: a placeholder for the output #QmiWdsDormancyStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Dormancy Status' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_dormancy_status (
    QmiIndicationWdsEventReportOutput *self,
    QmiWdsDormancyStatus *value_dormancy_status,
    GError **error);

/**
 * qmi_indication_wds_event_report_output_get_data_bearer_technology:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_data_bearer_technology: a placeholder for the output #QmiWdsDataBearerTechnology, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Data Bearer Technology' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_data_bearer_technology (
    QmiIndicationWdsEventReportOutput *self,
    QmiWdsDataBearerTechnology *value_data_bearer_technology,
    GError **error);

/**
 * qmi_indication_wds_event_report_output_get_channel_rates:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_channel_rates_tx_rate_bps: a placeholder for the output #gint32, or %NULL if not required.
 * @value_channel_rates_rx_rate_bps: a placeholder for the output #gint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Channel Rates' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_channel_rates (
    QmiIndicationWdsEventReportOutput *self,
    gint32 *value_channel_rates_tx_rate_bps,
    gint32 *value_channel_rates_rx_rate_bps,
    GError **error);

/**
 * qmi_indication_wds_event_report_output_get_rx_overflows:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_rx_overflows: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Rx Overflows' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_rx_overflows (
    QmiIndicationWdsEventReportOutput *self,
    guint32 *value_rx_overflows,
    GError **error);

/**
 * qmi_indication_wds_event_report_output_get_tx_overflows:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_tx_overflows: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Tx Overflows' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_tx_overflows (
    QmiIndicationWdsEventReportOutput *self,
    guint32 *value_tx_overflows,
    GError **error);

/**
 * qmi_indication_wds_event_report_output_get_rx_packets_error:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_rx_packets_error: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Rx Packets Error' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_rx_packets_error (
    QmiIndicationWdsEventReportOutput *self,
    guint32 *value_rx_packets_error,
    GError **error);

/**
 * qmi_indication_wds_event_report_output_get_tx_packets_error:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_tx_packets_error: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Tx Packets Error' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_tx_packets_error (
    QmiIndicationWdsEventReportOutput *self,
    guint32 *value_tx_packets_error,
    GError **error);

/**
 * qmi_indication_wds_event_report_output_get_rx_packets_ok:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_rx_packets_ok: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Rx Packets Ok' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_rx_packets_ok (
    QmiIndicationWdsEventReportOutput *self,
    guint32 *value_rx_packets_ok,
    GError **error);

/**
 * qmi_indication_wds_event_report_output_get_tx_packets_ok:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_tx_packets_ok: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Tx Packets Ok' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_tx_packets_ok (
    QmiIndicationWdsEventReportOutput *self,
    guint32 *value_tx_packets_ok,
    GError **error);

/**
 * qmi_indication_wds_event_report_output_ref:
 * @self: a #QmiIndicationWdsEventReportOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiIndicationWdsEventReportOutput *qmi_indication_wds_event_report_output_ref (QmiIndicationWdsEventReportOutput *self);

/**
 * qmi_indication_wds_event_report_output_unref:
 * @self: a #QmiIndicationWdsEventReportOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_indication_wds_event_report_output_unref (QmiIndicationWdsEventReportOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Abort */


/* --- Input -- */

/* --- Output -- */

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Get Supported Messages */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageWdsGetSupportedMessagesOutput:
 *
 * The #QmiMessageWdsGetSupportedMessagesOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageWdsGetSupportedMessagesOutput QmiMessageWdsGetSupportedMessagesOutput;
GType qmi_message_wds_get_supported_messages_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GET_SUPPORTED_MESSAGES_OUTPUT (qmi_message_wds_get_supported_messages_output_get_type ())

/**
 * qmi_message_wds_get_supported_messages_output_get_result:
 * @self: a QmiMessageWdsGetSupportedMessagesOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.14
 */
gboolean qmi_message_wds_get_supported_messages_output_get_result (
    QmiMessageWdsGetSupportedMessagesOutput *self,
    GError **error);

/**
 * qmi_message_wds_get_supported_messages_output_get_list:
 * @self: a #QmiMessageWdsGetSupportedMessagesOutput.
 * @value_list: a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'List' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_wds_get_supported_messages_output_get_list (
    QmiMessageWdsGetSupportedMessagesOutput *self,
    GArray **value_list,
    GError **error);

/**
 * qmi_message_wds_get_supported_messages_output_ref:
 * @self: a #QmiMessageWdsGetSupportedMessagesOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageWdsGetSupportedMessagesOutput *qmi_message_wds_get_supported_messages_output_ref (QmiMessageWdsGetSupportedMessagesOutput *self);

/**
 * qmi_message_wds_get_supported_messages_output_unref:
 * @self: a #QmiMessageWdsGetSupportedMessagesOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_wds_get_supported_messages_output_unref (QmiMessageWdsGetSupportedMessagesOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Start Network */


/* --- Input -- */

/**
 * QmiMessageWdsStartNetworkInput:
 *
 * The #QmiMessageWdsStartNetworkInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWdsStartNetworkInput QmiMessageWdsStartNetworkInput;
GType qmi_message_wds_start_network_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_START_NETWORK_INPUT (qmi_message_wds_start_network_input_get_type ())

/**
 * qmi_message_wds_start_network_input_get_call_type:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_call_type: a placeholder for the output #QmiWdsCallType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Call Type' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_get_call_type (
    QmiMessageWdsStartNetworkInput *self,
    QmiWdsCallType *value_call_type,
    GError **error);

/**
 * qmi_message_wds_start_network_input_set_call_type:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_call_type: a #QmiWdsCallType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Call Type' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_set_call_type (
    QmiMessageWdsStartNetworkInput *self,
    QmiWdsCallType value_call_type,
    GError **error);

/**
 * qmi_message_wds_start_network_input_get_extended_technology_preference:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_extended_technology_preference: a placeholder for the output #QmiWdsExtendedTechnologyPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Extended Technology Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_get_extended_technology_preference (
    QmiMessageWdsStartNetworkInput *self,
    QmiWdsExtendedTechnologyPreference *value_extended_technology_preference,
    GError **error);

/**
 * qmi_message_wds_start_network_input_set_extended_technology_preference:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_extended_technology_preference: a #QmiWdsExtendedTechnologyPreference.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Extended Technology Preference' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_set_extended_technology_preference (
    QmiMessageWdsStartNetworkInput *self,
    QmiWdsExtendedTechnologyPreference value_extended_technology_preference,
    GError **error);

/**
 * qmi_message_wds_start_network_input_get_enable_autoconnect:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_enable_autoconnect: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Enable Autoconnect' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_get_enable_autoconnect (
    QmiMessageWdsStartNetworkInput *self,
    gboolean *value_enable_autoconnect,
    GError **error);

/**
 * qmi_message_wds_start_network_input_set_enable_autoconnect:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_enable_autoconnect: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Enable Autoconnect' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_set_enable_autoconnect (
    QmiMessageWdsStartNetworkInput *self,
    gboolean value_enable_autoconnect,
    GError **error);

/**
 * qmi_message_wds_start_network_input_get_profile_index_3gpp2:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_profile_index_3gpp2: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Profile Index 3GPP2' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_get_profile_index_3gpp2 (
    QmiMessageWdsStartNetworkInput *self,
    guint8 *value_profile_index_3gpp2,
    GError **error);

/**
 * qmi_message_wds_start_network_input_set_profile_index_3gpp2:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_profile_index_3gpp2: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Profile Index 3GPP2' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_set_profile_index_3gpp2 (
    QmiMessageWdsStartNetworkInput *self,
    guint8 value_profile_index_3gpp2,
    GError **error);

/**
 * qmi_message_wds_start_network_input_get_profile_index_3gpp:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_profile_index_3gpp: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Profile Index 3GPP' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_get_profile_index_3gpp (
    QmiMessageWdsStartNetworkInput *self,
    guint8 *value_profile_index_3gpp,
    GError **error);

/**
 * qmi_message_wds_start_network_input_set_profile_index_3gpp:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_profile_index_3gpp: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Profile Index 3GPP' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_set_profile_index_3gpp (
    QmiMessageWdsStartNetworkInput *self,
    guint8 value_profile_index_3gpp,
    GError **error);

/**
 * qmi_message_wds_start_network_input_get_technology_preference:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_technology_preference: a placeholder for the output #QmiWdsTechnologyPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Technology Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_get_technology_preference (
    QmiMessageWdsStartNetworkInput *self,
    QmiWdsTechnologyPreference *value_technology_preference,
    GError **error);

/**
 * qmi_message_wds_start_network_input_set_technology_preference:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_technology_preference: a #QmiWdsTechnologyPreference.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Technology Preference' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_set_technology_preference (
    QmiMessageWdsStartNetworkInput *self,
    QmiWdsTechnologyPreference value_technology_preference,
    GError **error);

/**
 * qmi_message_wds_start_network_input_get_ip_family_preference:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_ip_family_preference: a placeholder for the output #QmiWdsIpFamily, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IP Family Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_get_ip_family_preference (
    QmiMessageWdsStartNetworkInput *self,
    QmiWdsIpFamily *value_ip_family_preference,
    GError **error);

/**
 * qmi_message_wds_start_network_input_set_ip_family_preference:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_ip_family_preference: a #QmiWdsIpFamily.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IP Family Preference' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_set_ip_family_preference (
    QmiMessageWdsStartNetworkInput *self,
    QmiWdsIpFamily value_ip_family_preference,
    GError **error);

/**
 * qmi_message_wds_start_network_input_get_password:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_password: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Password' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_get_password (
    QmiMessageWdsStartNetworkInput *self,
    const gchar **value_password,
    GError **error);

/**
 * qmi_message_wds_start_network_input_set_password:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_password: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Password' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_set_password (
    QmiMessageWdsStartNetworkInput *self,
    const gchar *value_password,
    GError **error);

/**
 * qmi_message_wds_start_network_input_get_username:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_username: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Username' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_get_username (
    QmiMessageWdsStartNetworkInput *self,
    const gchar **value_username,
    GError **error);

/**
 * qmi_message_wds_start_network_input_set_username:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_username: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Username' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_set_username (
    QmiMessageWdsStartNetworkInput *self,
    const gchar *value_username,
    GError **error);

/**
 * qmi_message_wds_start_network_input_get_authentication_preference:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_authentication_preference: a placeholder for the output #QmiWdsAuthentication, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Authentication Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_get_authentication_preference (
    QmiMessageWdsStartNetworkInput *self,
    QmiWdsAuthentication *value_authentication_preference,
    GError **error);

/**
 * qmi_message_wds_start_network_input_set_authentication_preference:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_authentication_preference: a #QmiWdsAuthentication.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Authentication Preference' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_set_authentication_preference (
    QmiMessageWdsStartNetworkInput *self,
    QmiWdsAuthentication value_authentication_preference,
    GError **error);

/**
 * qmi_message_wds_start_network_input_get_ipv4_address_preference:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_ipv4_address_preference: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv4 Address Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_get_ipv4_address_preference (
    QmiMessageWdsStartNetworkInput *self,
    guint32 *value_ipv4_address_preference,
    GError **error);

/**
 * qmi_message_wds_start_network_input_set_ipv4_address_preference:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_ipv4_address_preference: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IPv4 Address Preference' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_set_ipv4_address_preference (
    QmiMessageWdsStartNetworkInput *self,
    guint32 value_ipv4_address_preference,
    GError **error);

/**
 * qmi_message_wds_start_network_input_get_apn:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_apn: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'APN' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_get_apn (
    QmiMessageWdsStartNetworkInput *self,
    const gchar **value_apn,
    GError **error);

/**
 * qmi_message_wds_start_network_input_set_apn:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_apn: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'APN' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_set_apn (
    QmiMessageWdsStartNetworkInput *self,
    const gchar *value_apn,
    GError **error);

/**
 * qmi_message_wds_start_network_input_get_secondary_nbns_address_preference:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_secondary_nbns_address_preference: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Secondary NBNS Address Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_get_secondary_nbns_address_preference (
    QmiMessageWdsStartNetworkInput *self,
    guint32 *value_secondary_nbns_address_preference,
    GError **error);

/**
 * qmi_message_wds_start_network_input_set_secondary_nbns_address_preference:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_secondary_nbns_address_preference: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Secondary NBNS Address Preference' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_set_secondary_nbns_address_preference (
    QmiMessageWdsStartNetworkInput *self,
    guint32 value_secondary_nbns_address_preference,
    GError **error);

/**
 * qmi_message_wds_start_network_input_get_primary_nbns_address_preference:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_primary_nbns_address_preference: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Primary NBNS Address Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_get_primary_nbns_address_preference (
    QmiMessageWdsStartNetworkInput *self,
    guint32 *value_primary_nbns_address_preference,
    GError **error);

/**
 * qmi_message_wds_start_network_input_set_primary_nbns_address_preference:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_primary_nbns_address_preference: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Primary NBNS Address Preference' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_set_primary_nbns_address_preference (
    QmiMessageWdsStartNetworkInput *self,
    guint32 value_primary_nbns_address_preference,
    GError **error);

/**
 * qmi_message_wds_start_network_input_get_secondary_dns_address_preference:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_secondary_dns_address_preference: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Secondary DNS Address Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_get_secondary_dns_address_preference (
    QmiMessageWdsStartNetworkInput *self,
    guint32 *value_secondary_dns_address_preference,
    GError **error);

/**
 * qmi_message_wds_start_network_input_set_secondary_dns_address_preference:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_secondary_dns_address_preference: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Secondary DNS Address Preference' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_set_secondary_dns_address_preference (
    QmiMessageWdsStartNetworkInput *self,
    guint32 value_secondary_dns_address_preference,
    GError **error);

/**
 * qmi_message_wds_start_network_input_get_primary_dns_address_preference:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_primary_dns_address_preference: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Primary DNS Address Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_get_primary_dns_address_preference (
    QmiMessageWdsStartNetworkInput *self,
    guint32 *value_primary_dns_address_preference,
    GError **error);

/**
 * qmi_message_wds_start_network_input_set_primary_dns_address_preference:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_primary_dns_address_preference: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Primary DNS Address Preference' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_set_primary_dns_address_preference (
    QmiMessageWdsStartNetworkInput *self,
    guint32 value_primary_dns_address_preference,
    GError **error);

/**
 * qmi_message_wds_start_network_input_ref:
 * @self: a #QmiMessageWdsStartNetworkInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWdsStartNetworkInput *qmi_message_wds_start_network_input_ref (QmiMessageWdsStartNetworkInput *self);

/**
 * qmi_message_wds_start_network_input_unref:
 * @self: a #QmiMessageWdsStartNetworkInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wds_start_network_input_unref (QmiMessageWdsStartNetworkInput *self);

/**
 * qmi_message_wds_start_network_input_new:
 *
 * Allocates a new #QmiMessageWdsStartNetworkInput.
 *
 * Returns: the newly created #QmiMessageWdsStartNetworkInput. The returned value should be freed with qmi_message_wds_start_network_input_unref().
 *
 * Since: 1.0
 */
QmiMessageWdsStartNetworkInput *qmi_message_wds_start_network_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWdsStartNetworkOutput:
 *
 * The #QmiMessageWdsStartNetworkOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWdsStartNetworkOutput QmiMessageWdsStartNetworkOutput;
GType qmi_message_wds_start_network_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_START_NETWORK_OUTPUT (qmi_message_wds_start_network_output_get_type ())

/**
 * qmi_message_wds_start_network_output_get_result:
 * @self: a QmiMessageWdsStartNetworkOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_output_get_result (
    QmiMessageWdsStartNetworkOutput *self,
    GError **error);

/**
 * qmi_message_wds_start_network_output_get_packet_data_handle:
 * @self: a #QmiMessageWdsStartNetworkOutput.
 * @value_packet_data_handle: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Packet Data Handle' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_output_get_packet_data_handle (
    QmiMessageWdsStartNetworkOutput *self,
    guint32 *value_packet_data_handle,
    GError **error);

/**
 * qmi_message_wds_start_network_output_get_call_end_reason:
 * @self: a #QmiMessageWdsStartNetworkOutput.
 * @value_call_end_reason: a placeholder for the output #QmiWdsCallEndReason, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Call End Reason' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_output_get_call_end_reason (
    QmiMessageWdsStartNetworkOutput *self,
    QmiWdsCallEndReason *value_call_end_reason,
    GError **error);

/**
 * qmi_message_wds_start_network_output_get_verbose_call_end_reason:
 * @self: a #QmiMessageWdsStartNetworkOutput.
 * @value_verbose_call_end_reason_type: a placeholder for the output #QmiWdsVerboseCallEndReasonType, or %NULL if not required.
 * @value_verbose_call_end_reason_reason: a placeholder for the output #gint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Verbose Call End Reason' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_output_get_verbose_call_end_reason (
    QmiMessageWdsStartNetworkOutput *self,
    QmiWdsVerboseCallEndReasonType *value_verbose_call_end_reason_type,
    gint16 *value_verbose_call_end_reason_reason,
    GError **error);

/**
 * qmi_message_wds_start_network_output_ref:
 * @self: a #QmiMessageWdsStartNetworkOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWdsStartNetworkOutput *qmi_message_wds_start_network_output_ref (QmiMessageWdsStartNetworkOutput *self);

/**
 * qmi_message_wds_start_network_output_unref:
 * @self: a #QmiMessageWdsStartNetworkOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wds_start_network_output_unref (QmiMessageWdsStartNetworkOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Stop Network */


/* --- Input -- */

/**
 * QmiMessageWdsStopNetworkInput:
 *
 * The #QmiMessageWdsStopNetworkInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWdsStopNetworkInput QmiMessageWdsStopNetworkInput;
GType qmi_message_wds_stop_network_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_STOP_NETWORK_INPUT (qmi_message_wds_stop_network_input_get_type ())

/**
 * qmi_message_wds_stop_network_input_get_disable_autoconnect:
 * @self: a #QmiMessageWdsStopNetworkInput.
 * @value_disable_autoconnect: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Disable Autoconnect' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_stop_network_input_get_disable_autoconnect (
    QmiMessageWdsStopNetworkInput *self,
    gboolean *value_disable_autoconnect,
    GError **error);

/**
 * qmi_message_wds_stop_network_input_set_disable_autoconnect:
 * @self: a #QmiMessageWdsStopNetworkInput.
 * @value_disable_autoconnect: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Disable Autoconnect' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_stop_network_input_set_disable_autoconnect (
    QmiMessageWdsStopNetworkInput *self,
    gboolean value_disable_autoconnect,
    GError **error);

/**
 * qmi_message_wds_stop_network_input_get_packet_data_handle:
 * @self: a #QmiMessageWdsStopNetworkInput.
 * @value_packet_data_handle: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Packet Data Handle' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_stop_network_input_get_packet_data_handle (
    QmiMessageWdsStopNetworkInput *self,
    guint32 *value_packet_data_handle,
    GError **error);

/**
 * qmi_message_wds_stop_network_input_set_packet_data_handle:
 * @self: a #QmiMessageWdsStopNetworkInput.
 * @value_packet_data_handle: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Packet Data Handle' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_stop_network_input_set_packet_data_handle (
    QmiMessageWdsStopNetworkInput *self,
    guint32 value_packet_data_handle,
    GError **error);

/**
 * qmi_message_wds_stop_network_input_ref:
 * @self: a #QmiMessageWdsStopNetworkInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWdsStopNetworkInput *qmi_message_wds_stop_network_input_ref (QmiMessageWdsStopNetworkInput *self);

/**
 * qmi_message_wds_stop_network_input_unref:
 * @self: a #QmiMessageWdsStopNetworkInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wds_stop_network_input_unref (QmiMessageWdsStopNetworkInput *self);

/**
 * qmi_message_wds_stop_network_input_new:
 *
 * Allocates a new #QmiMessageWdsStopNetworkInput.
 *
 * Returns: the newly created #QmiMessageWdsStopNetworkInput. The returned value should be freed with qmi_message_wds_stop_network_input_unref().
 *
 * Since: 1.0
 */
QmiMessageWdsStopNetworkInput *qmi_message_wds_stop_network_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWdsStopNetworkOutput:
 *
 * The #QmiMessageWdsStopNetworkOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWdsStopNetworkOutput QmiMessageWdsStopNetworkOutput;
GType qmi_message_wds_stop_network_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_STOP_NETWORK_OUTPUT (qmi_message_wds_stop_network_output_get_type ())

/**
 * qmi_message_wds_stop_network_output_get_result:
 * @self: a QmiMessageWdsStopNetworkOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_stop_network_output_get_result (
    QmiMessageWdsStopNetworkOutput *self,
    GError **error);

/**
 * qmi_message_wds_stop_network_output_ref:
 * @self: a #QmiMessageWdsStopNetworkOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWdsStopNetworkOutput *qmi_message_wds_stop_network_output_ref (QmiMessageWdsStopNetworkOutput *self);

/**
 * qmi_message_wds_stop_network_output_unref:
 * @self: a #QmiMessageWdsStopNetworkOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wds_stop_network_output_unref (QmiMessageWdsStopNetworkOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Get Packet Service Status */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageWdsGetPacketServiceStatusOutput:
 *
 * The #QmiMessageWdsGetPacketServiceStatusOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWdsGetPacketServiceStatusOutput QmiMessageWdsGetPacketServiceStatusOutput;
GType qmi_message_wds_get_packet_service_status_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GET_PACKET_SERVICE_STATUS_OUTPUT (qmi_message_wds_get_packet_service_status_output_get_type ())

/**
 * qmi_message_wds_get_packet_service_status_output_get_result:
 * @self: a QmiMessageWdsGetPacketServiceStatusOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_packet_service_status_output_get_result (
    QmiMessageWdsGetPacketServiceStatusOutput *self,
    GError **error);

/**
 * qmi_message_wds_get_packet_service_status_output_get_connection_status:
 * @self: a #QmiMessageWdsGetPacketServiceStatusOutput.
 * @value_connection_status: a placeholder for the output #QmiWdsConnectionStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Connection Status' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_packet_service_status_output_get_connection_status (
    QmiMessageWdsGetPacketServiceStatusOutput *self,
    QmiWdsConnectionStatus *value_connection_status,
    GError **error);

/**
 * qmi_message_wds_get_packet_service_status_output_ref:
 * @self: a #QmiMessageWdsGetPacketServiceStatusOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWdsGetPacketServiceStatusOutput *qmi_message_wds_get_packet_service_status_output_ref (QmiMessageWdsGetPacketServiceStatusOutput *self);

/**
 * qmi_message_wds_get_packet_service_status_output_unref:
 * @self: a #QmiMessageWdsGetPacketServiceStatusOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wds_get_packet_service_status_output_unref (QmiMessageWdsGetPacketServiceStatusOutput *self);

/*****************************************************************************/
/* INDICATION: Qmi Indication WDS Packet Service Status */


/* --- Output -- */

/**
 * QmiIndicationWdsPacketServiceStatusOutput:
 *
 * The #QmiIndicationWdsPacketServiceStatusOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiIndicationWdsPacketServiceStatusOutput QmiIndicationWdsPacketServiceStatusOutput;
GType qmi_indication_wds_packet_service_status_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_WDS_PACKET_SERVICE_STATUS_OUTPUT (qmi_indication_wds_packet_service_status_output_get_type ())

/**
 * qmi_indication_wds_packet_service_status_output_get_extended_technology_preference:
 * @self: a #QmiIndicationWdsPacketServiceStatusOutput.
 * @value_extended_technology_preference: a placeholder for the output #QmiWdsExtendedTechnologyPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Extended Technology Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_indication_wds_packet_service_status_output_get_extended_technology_preference (
    QmiIndicationWdsPacketServiceStatusOutput *self,
    QmiWdsExtendedTechnologyPreference *value_extended_technology_preference,
    GError **error);

/**
 * qmi_indication_wds_packet_service_status_output_get_ip_family:
 * @self: a #QmiIndicationWdsPacketServiceStatusOutput.
 * @value_ip_family: a placeholder for the output #QmiWdsIpFamily, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IP Family' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_indication_wds_packet_service_status_output_get_ip_family (
    QmiIndicationWdsPacketServiceStatusOutput *self,
    QmiWdsIpFamily *value_ip_family,
    GError **error);

/**
 * qmi_indication_wds_packet_service_status_output_get_verbose_call_end_reason:
 * @self: a #QmiIndicationWdsPacketServiceStatusOutput.
 * @value_verbose_call_end_reason_type: a placeholder for the output #QmiWdsVerboseCallEndReasonType, or %NULL if not required.
 * @value_verbose_call_end_reason_reason: a placeholder for the output #gint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Verbose Call End Reason' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_indication_wds_packet_service_status_output_get_verbose_call_end_reason (
    QmiIndicationWdsPacketServiceStatusOutput *self,
    QmiWdsVerboseCallEndReasonType *value_verbose_call_end_reason_type,
    gint16 *value_verbose_call_end_reason_reason,
    GError **error);

/**
 * qmi_indication_wds_packet_service_status_output_get_call_end_reason:
 * @self: a #QmiIndicationWdsPacketServiceStatusOutput.
 * @value_call_end_reason: a placeholder for the output #QmiWdsCallEndReason, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Call End Reason' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_indication_wds_packet_service_status_output_get_call_end_reason (
    QmiIndicationWdsPacketServiceStatusOutput *self,
    QmiWdsCallEndReason *value_call_end_reason,
    GError **error);

/**
 * qmi_indication_wds_packet_service_status_output_get_connection_status:
 * @self: a #QmiIndicationWdsPacketServiceStatusOutput.
 * @value_connection_status_status: a placeholder for the output #QmiWdsConnectionStatus, or %NULL if not required.
 * @value_connection_status_reconfiguration_required: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Connection Status' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_indication_wds_packet_service_status_output_get_connection_status (
    QmiIndicationWdsPacketServiceStatusOutput *self,
    QmiWdsConnectionStatus *value_connection_status_status,
    gboolean *value_connection_status_reconfiguration_required,
    GError **error);

/**
 * qmi_indication_wds_packet_service_status_output_ref:
 * @self: a #QmiIndicationWdsPacketServiceStatusOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiIndicationWdsPacketServiceStatusOutput *qmi_indication_wds_packet_service_status_output_ref (QmiIndicationWdsPacketServiceStatusOutput *self);

/**
 * qmi_indication_wds_packet_service_status_output_unref:
 * @self: a #QmiIndicationWdsPacketServiceStatusOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_indication_wds_packet_service_status_output_unref (QmiIndicationWdsPacketServiceStatusOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Get Channel Rates */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageWdsGetChannelRatesOutput:
 *
 * The #QmiMessageWdsGetChannelRatesOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.20
 */
typedef struct _QmiMessageWdsGetChannelRatesOutput QmiMessageWdsGetChannelRatesOutput;
GType qmi_message_wds_get_channel_rates_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GET_CHANNEL_RATES_OUTPUT (qmi_message_wds_get_channel_rates_output_get_type ())

/**
 * qmi_message_wds_get_channel_rates_output_get_channel_rates:
 * @self: a #QmiMessageWdsGetChannelRatesOutput.
 * @value_channel_rates_channel_tx_rate_bps: a placeholder for the output #guint32, or %NULL if not required.
 * @value_channel_rates_channel_rx_rate_bps: a placeholder for the output #guint32, or %NULL if not required.
 * @value_channel_rates_max_channel_tx_rate_bps: a placeholder for the output #guint32, or %NULL if not required.
 * @value_channel_rates_max_channel_rx_rate_bps: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Channel Rates' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_channel_rates_output_get_channel_rates (
    QmiMessageWdsGetChannelRatesOutput *self,
    guint32 *value_channel_rates_channel_tx_rate_bps,
    guint32 *value_channel_rates_channel_rx_rate_bps,
    guint32 *value_channel_rates_max_channel_tx_rate_bps,
    guint32 *value_channel_rates_max_channel_rx_rate_bps,
    GError **error);

/**
 * qmi_message_wds_get_channel_rates_output_get_result:
 * @self: a QmiMessageWdsGetChannelRatesOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.20
 */
gboolean qmi_message_wds_get_channel_rates_output_get_result (
    QmiMessageWdsGetChannelRatesOutput *self,
    GError **error);

/**
 * qmi_message_wds_get_channel_rates_output_ref:
 * @self: a #QmiMessageWdsGetChannelRatesOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.20
 */
QmiMessageWdsGetChannelRatesOutput *qmi_message_wds_get_channel_rates_output_ref (QmiMessageWdsGetChannelRatesOutput *self);

/**
 * qmi_message_wds_get_channel_rates_output_unref:
 * @self: a #QmiMessageWdsGetChannelRatesOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.20
 */
void qmi_message_wds_get_channel_rates_output_unref (QmiMessageWdsGetChannelRatesOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Get Packet Statistics */


/* --- Input -- */

/**
 * QmiMessageWdsGetPacketStatisticsInput:
 *
 * The #QmiMessageWdsGetPacketStatisticsInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiMessageWdsGetPacketStatisticsInput QmiMessageWdsGetPacketStatisticsInput;
GType qmi_message_wds_get_packet_statistics_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GET_PACKET_STATISTICS_INPUT (qmi_message_wds_get_packet_statistics_input_get_type ())

/**
 * qmi_message_wds_get_packet_statistics_input_get_mask:
 * @self: a #QmiMessageWdsGetPacketStatisticsInput.
 * @value_mask: a placeholder for the output #QmiWdsPacketStatisticsMaskFlag, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Mask' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_wds_get_packet_statistics_input_get_mask (
    QmiMessageWdsGetPacketStatisticsInput *self,
    QmiWdsPacketStatisticsMaskFlag *value_mask,
    GError **error);

/**
 * qmi_message_wds_get_packet_statistics_input_set_mask:
 * @self: a #QmiMessageWdsGetPacketStatisticsInput.
 * @value_mask: a #QmiWdsPacketStatisticsMaskFlag.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Mask' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_wds_get_packet_statistics_input_set_mask (
    QmiMessageWdsGetPacketStatisticsInput *self,
    QmiWdsPacketStatisticsMaskFlag value_mask,
    GError **error);

/**
 * qmi_message_wds_get_packet_statistics_input_ref:
 * @self: a #QmiMessageWdsGetPacketStatisticsInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiMessageWdsGetPacketStatisticsInput *qmi_message_wds_get_packet_statistics_input_ref (QmiMessageWdsGetPacketStatisticsInput *self);

/**
 * qmi_message_wds_get_packet_statistics_input_unref:
 * @self: a #QmiMessageWdsGetPacketStatisticsInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_message_wds_get_packet_statistics_input_unref (QmiMessageWdsGetPacketStatisticsInput *self);

/**
 * qmi_message_wds_get_packet_statistics_input_new:
 *
 * Allocates a new #QmiMessageWdsGetPacketStatisticsInput.
 *
 * Returns: the newly created #QmiMessageWdsGetPacketStatisticsInput. The returned value should be freed with qmi_message_wds_get_packet_statistics_input_unref().
 *
 * Since: 1.6
 */
QmiMessageWdsGetPacketStatisticsInput *qmi_message_wds_get_packet_statistics_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWdsGetPacketStatisticsOutput:
 *
 * The #QmiMessageWdsGetPacketStatisticsOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiMessageWdsGetPacketStatisticsOutput QmiMessageWdsGetPacketStatisticsOutput;
GType qmi_message_wds_get_packet_statistics_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GET_PACKET_STATISTICS_OUTPUT (qmi_message_wds_get_packet_statistics_output_get_type ())

/**
 * qmi_message_wds_get_packet_statistics_output_get_last_call_rx_bytes_ok:
 * @self: a #QmiMessageWdsGetPacketStatisticsOutput.
 * @value_last_call_rx_bytes_ok: a placeholder for the output #guint64, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Last Call Rx Bytes Ok' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_wds_get_packet_statistics_output_get_last_call_rx_bytes_ok (
    QmiMessageWdsGetPacketStatisticsOutput *self,
    guint64 *value_last_call_rx_bytes_ok,
    GError **error);

/**
 * qmi_message_wds_get_packet_statistics_output_get_last_call_tx_bytes_ok:
 * @self: a #QmiMessageWdsGetPacketStatisticsOutput.
 * @value_last_call_tx_bytes_ok: a placeholder for the output #guint64, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Last Call Tx Bytes Ok' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_wds_get_packet_statistics_output_get_last_call_tx_bytes_ok (
    QmiMessageWdsGetPacketStatisticsOutput *self,
    guint64 *value_last_call_tx_bytes_ok,
    GError **error);

/**
 * qmi_message_wds_get_packet_statistics_output_get_result:
 * @self: a QmiMessageWdsGetPacketStatisticsOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.6
 */
gboolean qmi_message_wds_get_packet_statistics_output_get_result (
    QmiMessageWdsGetPacketStatisticsOutput *self,
    GError **error);

/**
 * qmi_message_wds_get_packet_statistics_output_get_tx_packets_ok:
 * @self: a #QmiMessageWdsGetPacketStatisticsOutput.
 * @value_tx_packets_ok: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Tx Packets Ok' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_wds_get_packet_statistics_output_get_tx_packets_ok (
    QmiMessageWdsGetPacketStatisticsOutput *self,
    guint32 *value_tx_packets_ok,
    GError **error);

/**
 * qmi_message_wds_get_packet_statistics_output_get_rx_packets_ok:
 * @self: a #QmiMessageWdsGetPacketStatisticsOutput.
 * @value_rx_packets_ok: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Rx Packets Ok' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_wds_get_packet_statistics_output_get_rx_packets_ok (
    QmiMessageWdsGetPacketStatisticsOutput *self,
    guint32 *value_rx_packets_ok,
    GError **error);

/**
 * qmi_message_wds_get_packet_statistics_output_get_tx_packets_error:
 * @self: a #QmiMessageWdsGetPacketStatisticsOutput.
 * @value_tx_packets_error: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Tx Packets Error' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_wds_get_packet_statistics_output_get_tx_packets_error (
    QmiMessageWdsGetPacketStatisticsOutput *self,
    guint32 *value_tx_packets_error,
    GError **error);

/**
 * qmi_message_wds_get_packet_statistics_output_get_rx_packets_error:
 * @self: a #QmiMessageWdsGetPacketStatisticsOutput.
 * @value_rx_packets_error: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Rx Packets Error' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_wds_get_packet_statistics_output_get_rx_packets_error (
    QmiMessageWdsGetPacketStatisticsOutput *self,
    guint32 *value_rx_packets_error,
    GError **error);

/**
 * qmi_message_wds_get_packet_statistics_output_get_tx_overflows:
 * @self: a #QmiMessageWdsGetPacketStatisticsOutput.
 * @value_tx_overflows: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Tx Overflows' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_wds_get_packet_statistics_output_get_tx_overflows (
    QmiMessageWdsGetPacketStatisticsOutput *self,
    guint32 *value_tx_overflows,
    GError **error);

/**
 * qmi_message_wds_get_packet_statistics_output_get_rx_overflows:
 * @self: a #QmiMessageWdsGetPacketStatisticsOutput.
 * @value_rx_overflows: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Rx Overflows' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_wds_get_packet_statistics_output_get_rx_overflows (
    QmiMessageWdsGetPacketStatisticsOutput *self,
    guint32 *value_rx_overflows,
    GError **error);

/**
 * qmi_message_wds_get_packet_statistics_output_get_tx_bytes_ok:
 * @self: a #QmiMessageWdsGetPacketStatisticsOutput.
 * @value_tx_bytes_ok: a placeholder for the output #guint64, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Tx Bytes Ok' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_wds_get_packet_statistics_output_get_tx_bytes_ok (
    QmiMessageWdsGetPacketStatisticsOutput *self,
    guint64 *value_tx_bytes_ok,
    GError **error);

/**
 * qmi_message_wds_get_packet_statistics_output_get_rx_bytes_ok:
 * @self: a #QmiMessageWdsGetPacketStatisticsOutput.
 * @value_rx_bytes_ok: a placeholder for the output #guint64, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Rx Bytes Ok' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_wds_get_packet_statistics_output_get_rx_bytes_ok (
    QmiMessageWdsGetPacketStatisticsOutput *self,
    guint64 *value_rx_bytes_ok,
    GError **error);

/**
 * qmi_message_wds_get_packet_statistics_output_get_tx_packets_dropped:
 * @self: a #QmiMessageWdsGetPacketStatisticsOutput.
 * @value_tx_packets_dropped: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Tx Packets Dropped' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_wds_get_packet_statistics_output_get_tx_packets_dropped (
    QmiMessageWdsGetPacketStatisticsOutput *self,
    guint32 *value_tx_packets_dropped,
    GError **error);

/**
 * qmi_message_wds_get_packet_statistics_output_get_rx_packets_dropped:
 * @self: a #QmiMessageWdsGetPacketStatisticsOutput.
 * @value_rx_packets_dropped: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Rx Packets Dropped' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_wds_get_packet_statistics_output_get_rx_packets_dropped (
    QmiMessageWdsGetPacketStatisticsOutput *self,
    guint32 *value_rx_packets_dropped,
    GError **error);

/**
 * qmi_message_wds_get_packet_statistics_output_ref:
 * @self: a #QmiMessageWdsGetPacketStatisticsOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiMessageWdsGetPacketStatisticsOutput *qmi_message_wds_get_packet_statistics_output_ref (QmiMessageWdsGetPacketStatisticsOutput *self);

/**
 * qmi_message_wds_get_packet_statistics_output_unref:
 * @self: a #QmiMessageWdsGetPacketStatisticsOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_message_wds_get_packet_statistics_output_unref (QmiMessageWdsGetPacketStatisticsOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Go Dormant */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageWdsGoDormantOutput:
 *
 * The #QmiMessageWdsGoDormantOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageWdsGoDormantOutput QmiMessageWdsGoDormantOutput;
GType qmi_message_wds_go_dormant_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GO_DORMANT_OUTPUT (qmi_message_wds_go_dormant_output_get_type ())

/**
 * qmi_message_wds_go_dormant_output_get_result:
 * @self: a QmiMessageWdsGoDormantOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_go_dormant_output_get_result (
    QmiMessageWdsGoDormantOutput *self,
    GError **error);

/**
 * qmi_message_wds_go_dormant_output_ref:
 * @self: a #QmiMessageWdsGoDormantOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessageWdsGoDormantOutput *qmi_message_wds_go_dormant_output_ref (QmiMessageWdsGoDormantOutput *self);

/**
 * qmi_message_wds_go_dormant_output_unref:
 * @self: a #QmiMessageWdsGoDormantOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_wds_go_dormant_output_unref (QmiMessageWdsGoDormantOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Go Active */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageWdsGoActiveOutput:
 *
 * The #QmiMessageWdsGoActiveOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageWdsGoActiveOutput QmiMessageWdsGoActiveOutput;
GType qmi_message_wds_go_active_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GO_ACTIVE_OUTPUT (qmi_message_wds_go_active_output_get_type ())

/**
 * qmi_message_wds_go_active_output_get_result:
 * @self: a QmiMessageWdsGoActiveOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_go_active_output_get_result (
    QmiMessageWdsGoActiveOutput *self,
    GError **error);

/**
 * qmi_message_wds_go_active_output_ref:
 * @self: a #QmiMessageWdsGoActiveOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessageWdsGoActiveOutput *qmi_message_wds_go_active_output_ref (QmiMessageWdsGoActiveOutput *self);

/**
 * qmi_message_wds_go_active_output_unref:
 * @self: a #QmiMessageWdsGoActiveOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_wds_go_active_output_unref (QmiMessageWdsGoActiveOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Create Profile */


/* --- Input -- */

/**
 * QmiMessageWdsCreateProfileInput:
 *
 * The #QmiMessageWdsCreateProfileInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageWdsCreateProfileInput QmiMessageWdsCreateProfileInput;
GType qmi_message_wds_create_profile_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_CREATE_PROFILE_INPUT (qmi_message_wds_create_profile_input_get_type ())

/**
 * qmi_message_wds_create_profile_input_get_lte_qos_parameters:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_lte_qos_parameters_qos_class_identifier: a placeholder for the output #QmiWdsQosClassIdentifier, or %NULL if not required.
 * @value_lte_qos_parameters_guaranteed_downlink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_lte_qos_parameters_max_downlink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_lte_qos_parameters_guaranteed_uplink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_lte_qos_parameters_max_uplink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE QoS Parameters' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_lte_qos_parameters (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsQosClassIdentifier *value_lte_qos_parameters_qos_class_identifier,
    guint32 *value_lte_qos_parameters_guaranteed_downlink_bitrate,
    guint32 *value_lte_qos_parameters_max_downlink_bitrate,
    guint32 *value_lte_qos_parameters_guaranteed_uplink_bitrate,
    guint32 *value_lte_qos_parameters_max_uplink_bitrate,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_set_lte_qos_parameters:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_lte_qos_parameters_qos_class_identifier: a #QmiWdsQosClassIdentifier.
 * @value_lte_qos_parameters_guaranteed_downlink_bitrate: a #guint32.
 * @value_lte_qos_parameters_max_downlink_bitrate: a #guint32.
 * @value_lte_qos_parameters_guaranteed_uplink_bitrate: a #guint32.
 * @value_lte_qos_parameters_max_uplink_bitrate: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'LTE QoS Parameters' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_lte_qos_parameters (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsQosClassIdentifier value_lte_qos_parameters_qos_class_identifier,
    guint32 value_lte_qos_parameters_guaranteed_downlink_bitrate,
    guint32 value_lte_qos_parameters_max_downlink_bitrate,
    guint32 value_lte_qos_parameters_guaranteed_uplink_bitrate,
    guint32 value_lte_qos_parameters_max_uplink_bitrate,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_get_ipv6_secondary_dns_address_preference:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_ipv6_secondary_dns_address_preference: a placeholder for the output #GArray of #guint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv6 Secondary DNS Address Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_ipv6_secondary_dns_address_preference (
    QmiMessageWdsCreateProfileInput *self,
    GArray **value_ipv6_secondary_dns_address_preference,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_set_ipv6_secondary_dns_address_preference:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_ipv6_secondary_dns_address_preference: a #GArray of #guint16 elements. A new reference to @value_ipv6_secondary_dns_address_preference will be taken.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IPv6 Secondary DNS Address Preference' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_ipv6_secondary_dns_address_preference (
    QmiMessageWdsCreateProfileInput *self,
    GArray *value_ipv6_secondary_dns_address_preference,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_get_ipv6_primary_dns_address_preference:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_ipv6_primary_dns_address_preference: a placeholder for the output #GArray of #guint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv6 Primary DNS Address Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_ipv6_primary_dns_address_preference (
    QmiMessageWdsCreateProfileInput *self,
    GArray **value_ipv6_primary_dns_address_preference,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_set_ipv6_primary_dns_address_preference:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_ipv6_primary_dns_address_preference: a #GArray of #guint16 elements. A new reference to @value_ipv6_primary_dns_address_preference will be taken.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IPv6 Primary DNS Address Preference' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_ipv6_primary_dns_address_preference (
    QmiMessageWdsCreateProfileInput *self,
    GArray *value_ipv6_primary_dns_address_preference,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_get_umts_minimum_qos_with_signaling_indication_flag:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_umts_minimum_qos_with_signaling_indication_flag_traffic_class: a placeholder for the output #QmiWdsTrafficClass, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_max_uplink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_max_downlink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_qos_delivery_order: a placeholder for the output #QmiWdsDeliveryOrder, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_maximum_sdu_size: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_sdu_error_ratio: a placeholder for the output #QmiWdsSduErrorRatio, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_residual_bit_error_ratio: a placeholder for the output #QmiWdsSduResidualBitErrorRatio, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_delivery_erroneous_sdu: a placeholder for the output #QmiWdsSduErroneousDelivery, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_transfer_delay: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_traffic_handling_priority: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_signaling_indication: a placeholder for the output #gint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Minimum QoS With Signaling Indication Flag' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_umts_minimum_qos_with_signaling_indication_flag (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsTrafficClass *value_umts_minimum_qos_with_signaling_indication_flag_traffic_class,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_max_uplink_bitrate,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_max_downlink_bitrate,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder *value_umts_minimum_qos_with_signaling_indication_flag_qos_delivery_order,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_maximum_sdu_size,
    QmiWdsSduErrorRatio *value_umts_minimum_qos_with_signaling_indication_flag_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio *value_umts_minimum_qos_with_signaling_indication_flag_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery *value_umts_minimum_qos_with_signaling_indication_flag_delivery_erroneous_sdu,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_transfer_delay,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_traffic_handling_priority,
    gint8 *value_umts_minimum_qos_with_signaling_indication_flag_signaling_indication,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_set_umts_minimum_qos_with_signaling_indication_flag:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_umts_minimum_qos_with_signaling_indication_flag_traffic_class: a #QmiWdsTrafficClass.
 * @value_umts_minimum_qos_with_signaling_indication_flag_max_uplink_bitrate: a #guint32.
 * @value_umts_minimum_qos_with_signaling_indication_flag_max_downlink_bitrate: a #guint32.
 * @value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate: a #guint32.
 * @value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate: a #guint32.
 * @value_umts_minimum_qos_with_signaling_indication_flag_qos_delivery_order: a #QmiWdsDeliveryOrder.
 * @value_umts_minimum_qos_with_signaling_indication_flag_maximum_sdu_size: a #guint32.
 * @value_umts_minimum_qos_with_signaling_indication_flag_sdu_error_ratio: a #QmiWdsSduErrorRatio.
 * @value_umts_minimum_qos_with_signaling_indication_flag_residual_bit_error_ratio: a #QmiWdsSduResidualBitErrorRatio.
 * @value_umts_minimum_qos_with_signaling_indication_flag_delivery_erroneous_sdu: a #QmiWdsSduErroneousDelivery.
 * @value_umts_minimum_qos_with_signaling_indication_flag_transfer_delay: a #guint32.
 * @value_umts_minimum_qos_with_signaling_indication_flag_traffic_handling_priority: a #guint32.
 * @value_umts_minimum_qos_with_signaling_indication_flag_signaling_indication: a #gint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'UMTS Minimum QoS With Signaling Indication Flag' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_umts_minimum_qos_with_signaling_indication_flag (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsTrafficClass value_umts_minimum_qos_with_signaling_indication_flag_traffic_class,
    guint32 value_umts_minimum_qos_with_signaling_indication_flag_max_uplink_bitrate,
    guint32 value_umts_minimum_qos_with_signaling_indication_flag_max_downlink_bitrate,
    guint32 value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate,
    guint32 value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder value_umts_minimum_qos_with_signaling_indication_flag_qos_delivery_order,
    guint32 value_umts_minimum_qos_with_signaling_indication_flag_maximum_sdu_size,
    QmiWdsSduErrorRatio value_umts_minimum_qos_with_signaling_indication_flag_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio value_umts_minimum_qos_with_signaling_indication_flag_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery value_umts_minimum_qos_with_signaling_indication_flag_delivery_erroneous_sdu,
    guint32 value_umts_minimum_qos_with_signaling_indication_flag_transfer_delay,
    guint32 value_umts_minimum_qos_with_signaling_indication_flag_traffic_handling_priority,
    gint8 value_umts_minimum_qos_with_signaling_indication_flag_signaling_indication,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_get_umts_requested_qos_with_signaling_indication_flag:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_umts_requested_qos_with_signaling_indication_flag_traffic_class: a placeholder for the output #QmiWdsTrafficClass, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_max_uplink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_max_downlink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_qos_delivery_order: a placeholder for the output #QmiWdsDeliveryOrder, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_maximum_sdu_size: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_sdu_error_ratio: a placeholder for the output #QmiWdsSduErrorRatio, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_residual_bit_error_ratio: a placeholder for the output #QmiWdsSduResidualBitErrorRatio, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_delivery_erroneous_sdu: a placeholder for the output #QmiWdsSduErroneousDelivery, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_transfer_delay: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_traffic_handling_priority: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_signaling_indication: a placeholder for the output #gint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Requested QoS With Signaling Indication Flag' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_umts_requested_qos_with_signaling_indication_flag (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsTrafficClass *value_umts_requested_qos_with_signaling_indication_flag_traffic_class,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_max_uplink_bitrate,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_max_downlink_bitrate,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder *value_umts_requested_qos_with_signaling_indication_flag_qos_delivery_order,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_maximum_sdu_size,
    QmiWdsSduErrorRatio *value_umts_requested_qos_with_signaling_indication_flag_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio *value_umts_requested_qos_with_signaling_indication_flag_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery *value_umts_requested_qos_with_signaling_indication_flag_delivery_erroneous_sdu,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_transfer_delay,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_traffic_handling_priority,
    gint8 *value_umts_requested_qos_with_signaling_indication_flag_signaling_indication,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_set_umts_requested_qos_with_signaling_indication_flag:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_umts_requested_qos_with_signaling_indication_flag_traffic_class: a #QmiWdsTrafficClass.
 * @value_umts_requested_qos_with_signaling_indication_flag_max_uplink_bitrate: a #guint32.
 * @value_umts_requested_qos_with_signaling_indication_flag_max_downlink_bitrate: a #guint32.
 * @value_umts_requested_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate: a #guint32.
 * @value_umts_requested_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate: a #guint32.
 * @value_umts_requested_qos_with_signaling_indication_flag_qos_delivery_order: a #QmiWdsDeliveryOrder.
 * @value_umts_requested_qos_with_signaling_indication_flag_maximum_sdu_size: a #guint32.
 * @value_umts_requested_qos_with_signaling_indication_flag_sdu_error_ratio: a #QmiWdsSduErrorRatio.
 * @value_umts_requested_qos_with_signaling_indication_flag_residual_bit_error_ratio: a #QmiWdsSduResidualBitErrorRatio.
 * @value_umts_requested_qos_with_signaling_indication_flag_delivery_erroneous_sdu: a #QmiWdsSduErroneousDelivery.
 * @value_umts_requested_qos_with_signaling_indication_flag_transfer_delay: a #guint32.
 * @value_umts_requested_qos_with_signaling_indication_flag_traffic_handling_priority: a #guint32.
 * @value_umts_requested_qos_with_signaling_indication_flag_signaling_indication: a #gint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'UMTS Requested QoS With Signaling Indication Flag' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_umts_requested_qos_with_signaling_indication_flag (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsTrafficClass value_umts_requested_qos_with_signaling_indication_flag_traffic_class,
    guint32 value_umts_requested_qos_with_signaling_indication_flag_max_uplink_bitrate,
    guint32 value_umts_requested_qos_with_signaling_indication_flag_max_downlink_bitrate,
    guint32 value_umts_requested_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate,
    guint32 value_umts_requested_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder value_umts_requested_qos_with_signaling_indication_flag_qos_delivery_order,
    guint32 value_umts_requested_qos_with_signaling_indication_flag_maximum_sdu_size,
    QmiWdsSduErrorRatio value_umts_requested_qos_with_signaling_indication_flag_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio value_umts_requested_qos_with_signaling_indication_flag_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery value_umts_requested_qos_with_signaling_indication_flag_delivery_erroneous_sdu,
    guint32 value_umts_requested_qos_with_signaling_indication_flag_transfer_delay,
    guint32 value_umts_requested_qos_with_signaling_indication_flag_traffic_handling_priority,
    gint8 value_umts_requested_qos_with_signaling_indication_flag_signaling_indication,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_get_ipv6_address_preference:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_ipv6_address_preference_address: a placeholder for the output #GArray of #guint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv6 Address Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_ipv6_address_preference (
    QmiMessageWdsCreateProfileInput *self,
    GArray **value_ipv6_address_preference_address,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_set_ipv6_address_preference:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_ipv6_address_preference_address: a #GArray of #guint16 elements. A new reference to @value_ipv6_address_preference_address will be taken.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IPv6 Address Preference' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_ipv6_address_preference (
    QmiMessageWdsCreateProfileInput *self,
    GArray *value_ipv6_address_preference_address,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_get_pdp_context_primary_id:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_pdp_context_primary_id: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Context Primary ID' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_pdp_context_primary_id (
    QmiMessageWdsCreateProfileInput *self,
    guint8 *value_pdp_context_primary_id,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_set_pdp_context_primary_id:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_pdp_context_primary_id: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PDP Context Primary ID' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_pdp_context_primary_id (
    QmiMessageWdsCreateProfileInput *self,
    guint8 value_pdp_context_primary_id,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_get_pdp_context_secondary_flag:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_pdp_context_secondary_flag: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Context Secondary Flag' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_pdp_context_secondary_flag (
    QmiMessageWdsCreateProfileInput *self,
    gboolean *value_pdp_context_secondary_flag,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_set_pdp_context_secondary_flag:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_pdp_context_secondary_flag: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PDP Context Secondary Flag' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_pdp_context_secondary_flag (
    QmiMessageWdsCreateProfileInput *self,
    gboolean value_pdp_context_secondary_flag,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_get_pdp_context_number:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_pdp_context_number: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Context Number' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_pdp_context_number (
    QmiMessageWdsCreateProfileInput *self,
    guint8 *value_pdp_context_number,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_set_pdp_context_number:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_pdp_context_number: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PDP Context Number' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_pdp_context_number (
    QmiMessageWdsCreateProfileInput *self,
    guint8 value_pdp_context_number,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_get_imcn_flag:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_imcn_flag: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IMCN Flag' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_imcn_flag (
    QmiMessageWdsCreateProfileInput *self,
    gboolean *value_imcn_flag,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_set_imcn_flag:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_imcn_flag: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IMCN Flag' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_imcn_flag (
    QmiMessageWdsCreateProfileInput *self,
    gboolean value_imcn_flag,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_get_pcscf_address_using_dhcp:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_pcscf_address_using_dhcp: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PCSCF Address Using DHCP' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_pcscf_address_using_dhcp (
    QmiMessageWdsCreateProfileInput *self,
    gboolean *value_pcscf_address_using_dhcp,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_set_pcscf_address_using_dhcp:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_pcscf_address_using_dhcp: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PCSCF Address Using DHCP' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_pcscf_address_using_dhcp (
    QmiMessageWdsCreateProfileInput *self,
    gboolean value_pcscf_address_using_dhcp,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_get_pcscf_address_using_pco:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_pcscf_address_using_pco: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PCSCF Address Using PCO' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_pcscf_address_using_pco (
    QmiMessageWdsCreateProfileInput *self,
    gboolean *value_pcscf_address_using_pco,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_set_pcscf_address_using_pco:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_pcscf_address_using_pco: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PCSCF Address Using PCO' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_pcscf_address_using_pco (
    QmiMessageWdsCreateProfileInput *self,
    gboolean value_pcscf_address_using_pco,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_get_ipv4_address_preference:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_ipv4_address_preference: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv4 Address Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_ipv4_address_preference (
    QmiMessageWdsCreateProfileInput *self,
    guint32 *value_ipv4_address_preference,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_set_ipv4_address_preference:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_ipv4_address_preference: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IPv4 Address Preference' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_ipv4_address_preference (
    QmiMessageWdsCreateProfileInput *self,
    guint32 value_ipv4_address_preference,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_get_authentication:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_authentication: a placeholder for the output #QmiWdsAuthentication, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Authentication' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_authentication (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsAuthentication *value_authentication,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_set_authentication:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_authentication: a #QmiWdsAuthentication.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Authentication' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_authentication (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsAuthentication value_authentication,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_get_password:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_password: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Password' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_password (
    QmiMessageWdsCreateProfileInput *self,
    const gchar **value_password,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_set_password:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_password: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Password' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_password (
    QmiMessageWdsCreateProfileInput *self,
    const gchar *value_password,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_get_username:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_username: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Username' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_username (
    QmiMessageWdsCreateProfileInput *self,
    const gchar **value_username,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_set_username:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_username: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Username' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_username (
    QmiMessageWdsCreateProfileInput *self,
    const gchar *value_username,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_get_gprs_minimum_qos:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_gprs_minimum_qos_precedence_class: a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_minimum_qos_delay_class: a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_minimum_qos_reliability_class: a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_minimum_qos_peak_throughput_class: a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_minimum_qos_mean_throughput_class: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GPRS Minimum QoS' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_gprs_minimum_qos (
    QmiMessageWdsCreateProfileInput *self,
    guint32 *value_gprs_minimum_qos_precedence_class,
    guint32 *value_gprs_minimum_qos_delay_class,
    guint32 *value_gprs_minimum_qos_reliability_class,
    guint32 *value_gprs_minimum_qos_peak_throughput_class,
    guint32 *value_gprs_minimum_qos_mean_throughput_class,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_set_gprs_minimum_qos:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_gprs_minimum_qos_precedence_class: a #guint32.
 * @value_gprs_minimum_qos_delay_class: a #guint32.
 * @value_gprs_minimum_qos_reliability_class: a #guint32.
 * @value_gprs_minimum_qos_peak_throughput_class: a #guint32.
 * @value_gprs_minimum_qos_mean_throughput_class: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'GPRS Minimum QoS' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_gprs_minimum_qos (
    QmiMessageWdsCreateProfileInput *self,
    guint32 value_gprs_minimum_qos_precedence_class,
    guint32 value_gprs_minimum_qos_delay_class,
    guint32 value_gprs_minimum_qos_reliability_class,
    guint32 value_gprs_minimum_qos_peak_throughput_class,
    guint32 value_gprs_minimum_qos_mean_throughput_class,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_get_gprs_requested_qos:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_gprs_requested_qos_precedence_class: a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_requested_qos_delay_class: a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_requested_qos_reliability_class: a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_requested_qos_peak_throughput_class: a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_requested_qos_mean_throughput_class: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GPRS Requested QoS' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_gprs_requested_qos (
    QmiMessageWdsCreateProfileInput *self,
    guint32 *value_gprs_requested_qos_precedence_class,
    guint32 *value_gprs_requested_qos_delay_class,
    guint32 *value_gprs_requested_qos_reliability_class,
    guint32 *value_gprs_requested_qos_peak_throughput_class,
    guint32 *value_gprs_requested_qos_mean_throughput_class,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_set_gprs_requested_qos:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_gprs_requested_qos_precedence_class: a #guint32.
 * @value_gprs_requested_qos_delay_class: a #guint32.
 * @value_gprs_requested_qos_reliability_class: a #guint32.
 * @value_gprs_requested_qos_peak_throughput_class: a #guint32.
 * @value_gprs_requested_qos_mean_throughput_class: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'GPRS Requested QoS' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_gprs_requested_qos (
    QmiMessageWdsCreateProfileInput *self,
    guint32 value_gprs_requested_qos_precedence_class,
    guint32 value_gprs_requested_qos_delay_class,
    guint32 value_gprs_requested_qos_reliability_class,
    guint32 value_gprs_requested_qos_peak_throughput_class,
    guint32 value_gprs_requested_qos_mean_throughput_class,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_get_umts_minimum_qos:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_umts_minimum_qos_traffic_class: a placeholder for the output #QmiWdsTrafficClass, or %NULL if not required.
 * @value_umts_minimum_qos_max_uplink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_max_downlink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_guaranteed_uplink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_guaranteed_downlink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_qos_delivery_order: a placeholder for the output #QmiWdsDeliveryOrder, or %NULL if not required.
 * @value_umts_minimum_qos_maximum_sdu_size: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_sdu_error_ratio: a placeholder for the output #QmiWdsSduErrorRatio, or %NULL if not required.
 * @value_umts_minimum_qos_residual_bit_error_ratio: a placeholder for the output #QmiWdsSduResidualBitErrorRatio, or %NULL if not required.
 * @value_umts_minimum_qos_delivery_erroneous_sdu: a placeholder for the output #QmiWdsSduErroneousDelivery, or %NULL if not required.
 * @value_umts_minimum_qos_transfer_delay: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_traffic_handling_priority: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Minimum QoS' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_umts_minimum_qos (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsTrafficClass *value_umts_minimum_qos_traffic_class,
    guint32 *value_umts_minimum_qos_max_uplink_bitrate,
    guint32 *value_umts_minimum_qos_max_downlink_bitrate,
    guint32 *value_umts_minimum_qos_guaranteed_uplink_bitrate,
    guint32 *value_umts_minimum_qos_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder *value_umts_minimum_qos_qos_delivery_order,
    guint32 *value_umts_minimum_qos_maximum_sdu_size,
    QmiWdsSduErrorRatio *value_umts_minimum_qos_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio *value_umts_minimum_qos_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery *value_umts_minimum_qos_delivery_erroneous_sdu,
    guint32 *value_umts_minimum_qos_transfer_delay,
    guint32 *value_umts_minimum_qos_traffic_handling_priority,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_set_umts_minimum_qos:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_umts_minimum_qos_traffic_class: a #QmiWdsTrafficClass.
 * @value_umts_minimum_qos_max_uplink_bitrate: a #guint32.
 * @value_umts_minimum_qos_max_downlink_bitrate: a #guint32.
 * @value_umts_minimum_qos_guaranteed_uplink_bitrate: a #guint32.
 * @value_umts_minimum_qos_guaranteed_downlink_bitrate: a #guint32.
 * @value_umts_minimum_qos_qos_delivery_order: a #QmiWdsDeliveryOrder.
 * @value_umts_minimum_qos_maximum_sdu_size: a #guint32.
 * @value_umts_minimum_qos_sdu_error_ratio: a #QmiWdsSduErrorRatio.
 * @value_umts_minimum_qos_residual_bit_error_ratio: a #QmiWdsSduResidualBitErrorRatio.
 * @value_umts_minimum_qos_delivery_erroneous_sdu: a #QmiWdsSduErroneousDelivery.
 * @value_umts_minimum_qos_transfer_delay: a #guint32.
 * @value_umts_minimum_qos_traffic_handling_priority: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'UMTS Minimum QoS' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_umts_minimum_qos (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsTrafficClass value_umts_minimum_qos_traffic_class,
    guint32 value_umts_minimum_qos_max_uplink_bitrate,
    guint32 value_umts_minimum_qos_max_downlink_bitrate,
    guint32 value_umts_minimum_qos_guaranteed_uplink_bitrate,
    guint32 value_umts_minimum_qos_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder value_umts_minimum_qos_qos_delivery_order,
    guint32 value_umts_minimum_qos_maximum_sdu_size,
    QmiWdsSduErrorRatio value_umts_minimum_qos_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio value_umts_minimum_qos_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery value_umts_minimum_qos_delivery_erroneous_sdu,
    guint32 value_umts_minimum_qos_transfer_delay,
    guint32 value_umts_minimum_qos_traffic_handling_priority,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_get_umts_requested_qos:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_umts_requested_qos_traffic_class: a placeholder for the output #QmiWdsTrafficClass, or %NULL if not required.
 * @value_umts_requested_qos_max_uplink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_max_downlink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_guaranteed_uplink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_guaranteed_downlink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_qos_delivery_order: a placeholder for the output #QmiWdsDeliveryOrder, or %NULL if not required.
 * @value_umts_requested_qos_maximum_sdu_size: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_sdu_error_ratio: a placeholder for the output #QmiWdsSduErrorRatio, or %NULL if not required.
 * @value_umts_requested_qos_residual_bit_error_ratio: a placeholder for the output #QmiWdsSduResidualBitErrorRatio, or %NULL if not required.
 * @value_umts_requested_qos_delivery_erroneous_sdu: a placeholder for the output #QmiWdsSduErroneousDelivery, or %NULL if not required.
 * @value_umts_requested_qos_transfer_delay: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_traffic_handling_priority: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Requested QoS' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_umts_requested_qos (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsTrafficClass *value_umts_requested_qos_traffic_class,
    guint32 *value_umts_requested_qos_max_uplink_bitrate,
    guint32 *value_umts_requested_qos_max_downlink_bitrate,
    guint32 *value_umts_requested_qos_guaranteed_uplink_bitrate,
    guint32 *value_umts_requested_qos_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder *value_umts_requested_qos_qos_delivery_order,
    guint32 *value_umts_requested_qos_maximum_sdu_size,
    QmiWdsSduErrorRatio *value_umts_requested_qos_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio *value_umts_requested_qos_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery *value_umts_requested_qos_delivery_erroneous_sdu,
    guint32 *value_umts_requested_qos_transfer_delay,
    guint32 *value_umts_requested_qos_traffic_handling_priority,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_set_umts_requested_qos:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_umts_requested_qos_traffic_class: a #QmiWdsTrafficClass.
 * @value_umts_requested_qos_max_uplink_bitrate: a #guint32.
 * @value_umts_requested_qos_max_downlink_bitrate: a #guint32.
 * @value_umts_requested_qos_guaranteed_uplink_bitrate: a #guint32.
 * @value_umts_requested_qos_guaranteed_downlink_bitrate: a #guint32.
 * @value_umts_requested_qos_qos_delivery_order: a #QmiWdsDeliveryOrder.
 * @value_umts_requested_qos_maximum_sdu_size: a #guint32.
 * @value_umts_requested_qos_sdu_error_ratio: a #QmiWdsSduErrorRatio.
 * @value_umts_requested_qos_residual_bit_error_ratio: a #QmiWdsSduResidualBitErrorRatio.
 * @value_umts_requested_qos_delivery_erroneous_sdu: a #QmiWdsSduErroneousDelivery.
 * @value_umts_requested_qos_transfer_delay: a #guint32.
 * @value_umts_requested_qos_traffic_handling_priority: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'UMTS Requested QoS' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_umts_requested_qos (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsTrafficClass value_umts_requested_qos_traffic_class,
    guint32 value_umts_requested_qos_max_uplink_bitrate,
    guint32 value_umts_requested_qos_max_downlink_bitrate,
    guint32 value_umts_requested_qos_guaranteed_uplink_bitrate,
    guint32 value_umts_requested_qos_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder value_umts_requested_qos_qos_delivery_order,
    guint32 value_umts_requested_qos_maximum_sdu_size,
    QmiWdsSduErrorRatio value_umts_requested_qos_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio value_umts_requested_qos_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery value_umts_requested_qos_delivery_erroneous_sdu,
    guint32 value_umts_requested_qos_transfer_delay,
    guint32 value_umts_requested_qos_traffic_handling_priority,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_get_secondary_ipv4_dns_address:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_secondary_ipv4_dns_address: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Secondary IPv4 DNS Address' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_secondary_ipv4_dns_address (
    QmiMessageWdsCreateProfileInput *self,
    guint32 *value_secondary_ipv4_dns_address,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_set_secondary_ipv4_dns_address:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_secondary_ipv4_dns_address: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Secondary IPv4 DNS Address' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_secondary_ipv4_dns_address (
    QmiMessageWdsCreateProfileInput *self,
    guint32 value_secondary_ipv4_dns_address,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_get_primary_ipv4_dns_address:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_primary_ipv4_dns_address: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Primary IPv4 DNS Address' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_primary_ipv4_dns_address (
    QmiMessageWdsCreateProfileInput *self,
    guint32 *value_primary_ipv4_dns_address,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_set_primary_ipv4_dns_address:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_primary_ipv4_dns_address: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Primary IPv4 DNS Address' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_primary_ipv4_dns_address (
    QmiMessageWdsCreateProfileInput *self,
    guint32 value_primary_ipv4_dns_address,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_get_apn_name:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_apn_name: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'APN Name' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_apn_name (
    QmiMessageWdsCreateProfileInput *self,
    const gchar **value_apn_name,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_set_apn_name:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_apn_name: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'APN Name' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_apn_name (
    QmiMessageWdsCreateProfileInput *self,
    const gchar *value_apn_name,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_get_pdp_data_compression_type:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_pdp_data_compression_type: a placeholder for the output #QmiWdsPdpDataCompressionType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Data Compression Type' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_pdp_data_compression_type (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsPdpDataCompressionType *value_pdp_data_compression_type,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_set_pdp_data_compression_type:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_pdp_data_compression_type: a #QmiWdsPdpDataCompressionType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PDP Data Compression Type' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_pdp_data_compression_type (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsPdpDataCompressionType value_pdp_data_compression_type,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_get_pdp_header_compression_type:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_pdp_header_compression_type: a placeholder for the output #QmiWdsPdpHeaderCompressionType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Header Compression Type' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_pdp_header_compression_type (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsPdpHeaderCompressionType *value_pdp_header_compression_type,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_set_pdp_header_compression_type:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_pdp_header_compression_type: a #QmiWdsPdpHeaderCompressionType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PDP Header Compression Type' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_pdp_header_compression_type (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsPdpHeaderCompressionType value_pdp_header_compression_type,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_get_pdp_type:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_pdp_type: a placeholder for the output #QmiWdsPdpType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Type' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_pdp_type (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsPdpType *value_pdp_type,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_set_pdp_type:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_pdp_type: a #QmiWdsPdpType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PDP Type' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_pdp_type (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsPdpType value_pdp_type,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_get_profile_name:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_profile_name: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Profile Name' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_profile_name (
    QmiMessageWdsCreateProfileInput *self,
    const gchar **value_profile_name,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_set_profile_name:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_profile_name: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Profile Name' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_profile_name (
    QmiMessageWdsCreateProfileInput *self,
    const gchar *value_profile_name,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_get_profile_type:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_profile_type: a placeholder for the output #QmiWdsProfileType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Profile Type' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_profile_type (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsProfileType *value_profile_type,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_set_profile_type:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_profile_type: a #QmiWdsProfileType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Profile Type' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_profile_type (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsProfileType value_profile_type,
    GError **error);

/**
 * qmi_message_wds_create_profile_input_ref:
 * @self: a #QmiMessageWdsCreateProfileInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessageWdsCreateProfileInput *qmi_message_wds_create_profile_input_ref (QmiMessageWdsCreateProfileInput *self);

/**
 * qmi_message_wds_create_profile_input_unref:
 * @self: a #QmiMessageWdsCreateProfileInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_wds_create_profile_input_unref (QmiMessageWdsCreateProfileInput *self);

/**
 * qmi_message_wds_create_profile_input_new:
 *
 * Allocates a new #QmiMessageWdsCreateProfileInput.
 *
 * Returns: the newly created #QmiMessageWdsCreateProfileInput. The returned value should be freed with qmi_message_wds_create_profile_input_unref().
 *
 * Since: 1.18
 */
QmiMessageWdsCreateProfileInput *qmi_message_wds_create_profile_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWdsCreateProfileOutput:
 *
 * The #QmiMessageWdsCreateProfileOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageWdsCreateProfileOutput QmiMessageWdsCreateProfileOutput;
GType qmi_message_wds_create_profile_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_CREATE_PROFILE_OUTPUT (qmi_message_wds_create_profile_output_get_type ())

/**
 * qmi_message_wds_create_profile_output_get_result:
 * @self: a QmiMessageWdsCreateProfileOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_output_get_result (
    QmiMessageWdsCreateProfileOutput *self,
    GError **error);

/**
 * qmi_message_wds_create_profile_output_get_profile_identifier:
 * @self: a #QmiMessageWdsCreateProfileOutput.
 * @value_profile_identifier_profile_type: a placeholder for the output #QmiWdsProfileType, or %NULL if not required.
 * @value_profile_identifier_profile_index: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Profile Identifier' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_output_get_profile_identifier (
    QmiMessageWdsCreateProfileOutput *self,
    QmiWdsProfileType *value_profile_identifier_profile_type,
    guint8 *value_profile_identifier_profile_index,
    GError **error);

/**
 * qmi_message_wds_create_profile_output_get_extended_error_code:
 * @self: a #QmiMessageWdsCreateProfileOutput.
 * @value_extended_error_code: a placeholder for the output #QmiWdsDsProfileError, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Extended Error Code' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_output_get_extended_error_code (
    QmiMessageWdsCreateProfileOutput *self,
    QmiWdsDsProfileError *value_extended_error_code,
    GError **error);

/**
 * qmi_message_wds_create_profile_output_ref:
 * @self: a #QmiMessageWdsCreateProfileOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessageWdsCreateProfileOutput *qmi_message_wds_create_profile_output_ref (QmiMessageWdsCreateProfileOutput *self);

/**
 * qmi_message_wds_create_profile_output_unref:
 * @self: a #QmiMessageWdsCreateProfileOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_wds_create_profile_output_unref (QmiMessageWdsCreateProfileOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Modify Profile */


/* --- Input -- */

/**
 * QmiMessageWdsModifyProfileInput:
 *
 * The #QmiMessageWdsModifyProfileInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageWdsModifyProfileInput QmiMessageWdsModifyProfileInput;
GType qmi_message_wds_modify_profile_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_MODIFY_PROFILE_INPUT (qmi_message_wds_modify_profile_input_get_type ())

/**
 * qmi_message_wds_modify_profile_input_get_lte_qos_parameters:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_lte_qos_parameters_qos_class_identifier: a placeholder for the output #QmiWdsQosClassIdentifier, or %NULL if not required.
 * @value_lte_qos_parameters_guaranteed_downlink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_lte_qos_parameters_max_downlink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_lte_qos_parameters_guaranteed_uplink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_lte_qos_parameters_max_uplink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE QoS Parameters' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_lte_qos_parameters (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsQosClassIdentifier *value_lte_qos_parameters_qos_class_identifier,
    guint32 *value_lte_qos_parameters_guaranteed_downlink_bitrate,
    guint32 *value_lte_qos_parameters_max_downlink_bitrate,
    guint32 *value_lte_qos_parameters_guaranteed_uplink_bitrate,
    guint32 *value_lte_qos_parameters_max_uplink_bitrate,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_set_lte_qos_parameters:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_lte_qos_parameters_qos_class_identifier: a #QmiWdsQosClassIdentifier.
 * @value_lte_qos_parameters_guaranteed_downlink_bitrate: a #guint32.
 * @value_lte_qos_parameters_max_downlink_bitrate: a #guint32.
 * @value_lte_qos_parameters_guaranteed_uplink_bitrate: a #guint32.
 * @value_lte_qos_parameters_max_uplink_bitrate: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'LTE QoS Parameters' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_lte_qos_parameters (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsQosClassIdentifier value_lte_qos_parameters_qos_class_identifier,
    guint32 value_lte_qos_parameters_guaranteed_downlink_bitrate,
    guint32 value_lte_qos_parameters_max_downlink_bitrate,
    guint32 value_lte_qos_parameters_guaranteed_uplink_bitrate,
    guint32 value_lte_qos_parameters_max_uplink_bitrate,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_get_ipv6_secondary_dns_address_preference:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_ipv6_secondary_dns_address_preference: a placeholder for the output #GArray of #guint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv6 Secondary DNS Address Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_ipv6_secondary_dns_address_preference (
    QmiMessageWdsModifyProfileInput *self,
    GArray **value_ipv6_secondary_dns_address_preference,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_set_ipv6_secondary_dns_address_preference:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_ipv6_secondary_dns_address_preference: a #GArray of #guint16 elements. A new reference to @value_ipv6_secondary_dns_address_preference will be taken.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IPv6 Secondary DNS Address Preference' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_ipv6_secondary_dns_address_preference (
    QmiMessageWdsModifyProfileInput *self,
    GArray *value_ipv6_secondary_dns_address_preference,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_get_ipv6_primary_dns_address_preference:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_ipv6_primary_dns_address_preference: a placeholder for the output #GArray of #guint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv6 Primary DNS Address Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_ipv6_primary_dns_address_preference (
    QmiMessageWdsModifyProfileInput *self,
    GArray **value_ipv6_primary_dns_address_preference,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_set_ipv6_primary_dns_address_preference:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_ipv6_primary_dns_address_preference: a #GArray of #guint16 elements. A new reference to @value_ipv6_primary_dns_address_preference will be taken.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IPv6 Primary DNS Address Preference' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_ipv6_primary_dns_address_preference (
    QmiMessageWdsModifyProfileInput *self,
    GArray *value_ipv6_primary_dns_address_preference,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_get_umts_minimum_qos_with_signaling_indication_flag:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_umts_minimum_qos_with_signaling_indication_flag_traffic_class: a placeholder for the output #QmiWdsTrafficClass, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_max_uplink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_max_downlink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_qos_delivery_order: a placeholder for the output #QmiWdsDeliveryOrder, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_maximum_sdu_size: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_sdu_error_ratio: a placeholder for the output #QmiWdsSduErrorRatio, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_residual_bit_error_ratio: a placeholder for the output #QmiWdsSduResidualBitErrorRatio, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_delivery_erroneous_sdu: a placeholder for the output #QmiWdsSduErroneousDelivery, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_transfer_delay: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_traffic_handling_priority: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_signaling_indication: a placeholder for the output #gint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Minimum QoS With Signaling Indication Flag' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_umts_minimum_qos_with_signaling_indication_flag (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsTrafficClass *value_umts_minimum_qos_with_signaling_indication_flag_traffic_class,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_max_uplink_bitrate,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_max_downlink_bitrate,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder *value_umts_minimum_qos_with_signaling_indication_flag_qos_delivery_order,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_maximum_sdu_size,
    QmiWdsSduErrorRatio *value_umts_minimum_qos_with_signaling_indication_flag_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio *value_umts_minimum_qos_with_signaling_indication_flag_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery *value_umts_minimum_qos_with_signaling_indication_flag_delivery_erroneous_sdu,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_transfer_delay,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_traffic_handling_priority,
    gint8 *value_umts_minimum_qos_with_signaling_indication_flag_signaling_indication,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_set_umts_minimum_qos_with_signaling_indication_flag:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_umts_minimum_qos_with_signaling_indication_flag_traffic_class: a #QmiWdsTrafficClass.
 * @value_umts_minimum_qos_with_signaling_indication_flag_max_uplink_bitrate: a #guint32.
 * @value_umts_minimum_qos_with_signaling_indication_flag_max_downlink_bitrate: a #guint32.
 * @value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate: a #guint32.
 * @value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate: a #guint32.
 * @value_umts_minimum_qos_with_signaling_indication_flag_qos_delivery_order: a #QmiWdsDeliveryOrder.
 * @value_umts_minimum_qos_with_signaling_indication_flag_maximum_sdu_size: a #guint32.
 * @value_umts_minimum_qos_with_signaling_indication_flag_sdu_error_ratio: a #QmiWdsSduErrorRatio.
 * @value_umts_minimum_qos_with_signaling_indication_flag_residual_bit_error_ratio: a #QmiWdsSduResidualBitErrorRatio.
 * @value_umts_minimum_qos_with_signaling_indication_flag_delivery_erroneous_sdu: a #QmiWdsSduErroneousDelivery.
 * @value_umts_minimum_qos_with_signaling_indication_flag_transfer_delay: a #guint32.
 * @value_umts_minimum_qos_with_signaling_indication_flag_traffic_handling_priority: a #guint32.
 * @value_umts_minimum_qos_with_signaling_indication_flag_signaling_indication: a #gint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'UMTS Minimum QoS With Signaling Indication Flag' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_umts_minimum_qos_with_signaling_indication_flag (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsTrafficClass value_umts_minimum_qos_with_signaling_indication_flag_traffic_class,
    guint32 value_umts_minimum_qos_with_signaling_indication_flag_max_uplink_bitrate,
    guint32 value_umts_minimum_qos_with_signaling_indication_flag_max_downlink_bitrate,
    guint32 value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate,
    guint32 value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder value_umts_minimum_qos_with_signaling_indication_flag_qos_delivery_order,
    guint32 value_umts_minimum_qos_with_signaling_indication_flag_maximum_sdu_size,
    QmiWdsSduErrorRatio value_umts_minimum_qos_with_signaling_indication_flag_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio value_umts_minimum_qos_with_signaling_indication_flag_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery value_umts_minimum_qos_with_signaling_indication_flag_delivery_erroneous_sdu,
    guint32 value_umts_minimum_qos_with_signaling_indication_flag_transfer_delay,
    guint32 value_umts_minimum_qos_with_signaling_indication_flag_traffic_handling_priority,
    gint8 value_umts_minimum_qos_with_signaling_indication_flag_signaling_indication,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_get_umts_requested_qos_with_signaling_indication_flag:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_umts_requested_qos_with_signaling_indication_flag_traffic_class: a placeholder for the output #QmiWdsTrafficClass, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_max_uplink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_max_downlink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_qos_delivery_order: a placeholder for the output #QmiWdsDeliveryOrder, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_maximum_sdu_size: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_sdu_error_ratio: a placeholder for the output #QmiWdsSduErrorRatio, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_residual_bit_error_ratio: a placeholder for the output #QmiWdsSduResidualBitErrorRatio, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_delivery_erroneous_sdu: a placeholder for the output #QmiWdsSduErroneousDelivery, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_transfer_delay: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_traffic_handling_priority: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_signaling_indication: a placeholder for the output #gint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Requested QoS With Signaling Indication Flag' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_umts_requested_qos_with_signaling_indication_flag (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsTrafficClass *value_umts_requested_qos_with_signaling_indication_flag_traffic_class,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_max_uplink_bitrate,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_max_downlink_bitrate,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder *value_umts_requested_qos_with_signaling_indication_flag_qos_delivery_order,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_maximum_sdu_size,
    QmiWdsSduErrorRatio *value_umts_requested_qos_with_signaling_indication_flag_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio *value_umts_requested_qos_with_signaling_indication_flag_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery *value_umts_requested_qos_with_signaling_indication_flag_delivery_erroneous_sdu,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_transfer_delay,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_traffic_handling_priority,
    gint8 *value_umts_requested_qos_with_signaling_indication_flag_signaling_indication,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_set_umts_requested_qos_with_signaling_indication_flag:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_umts_requested_qos_with_signaling_indication_flag_traffic_class: a #QmiWdsTrafficClass.
 * @value_umts_requested_qos_with_signaling_indication_flag_max_uplink_bitrate: a #guint32.
 * @value_umts_requested_qos_with_signaling_indication_flag_max_downlink_bitrate: a #guint32.
 * @value_umts_requested_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate: a #guint32.
 * @value_umts_requested_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate: a #guint32.
 * @value_umts_requested_qos_with_signaling_indication_flag_qos_delivery_order: a #QmiWdsDeliveryOrder.
 * @value_umts_requested_qos_with_signaling_indication_flag_maximum_sdu_size: a #guint32.
 * @value_umts_requested_qos_with_signaling_indication_flag_sdu_error_ratio: a #QmiWdsSduErrorRatio.
 * @value_umts_requested_qos_with_signaling_indication_flag_residual_bit_error_ratio: a #QmiWdsSduResidualBitErrorRatio.
 * @value_umts_requested_qos_with_signaling_indication_flag_delivery_erroneous_sdu: a #QmiWdsSduErroneousDelivery.
 * @value_umts_requested_qos_with_signaling_indication_flag_transfer_delay: a #guint32.
 * @value_umts_requested_qos_with_signaling_indication_flag_traffic_handling_priority: a #guint32.
 * @value_umts_requested_qos_with_signaling_indication_flag_signaling_indication: a #gint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'UMTS Requested QoS With Signaling Indication Flag' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_umts_requested_qos_with_signaling_indication_flag (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsTrafficClass value_umts_requested_qos_with_signaling_indication_flag_traffic_class,
    guint32 value_umts_requested_qos_with_signaling_indication_flag_max_uplink_bitrate,
    guint32 value_umts_requested_qos_with_signaling_indication_flag_max_downlink_bitrate,
    guint32 value_umts_requested_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate,
    guint32 value_umts_requested_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder value_umts_requested_qos_with_signaling_indication_flag_qos_delivery_order,
    guint32 value_umts_requested_qos_with_signaling_indication_flag_maximum_sdu_size,
    QmiWdsSduErrorRatio value_umts_requested_qos_with_signaling_indication_flag_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio value_umts_requested_qos_with_signaling_indication_flag_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery value_umts_requested_qos_with_signaling_indication_flag_delivery_erroneous_sdu,
    guint32 value_umts_requested_qos_with_signaling_indication_flag_transfer_delay,
    guint32 value_umts_requested_qos_with_signaling_indication_flag_traffic_handling_priority,
    gint8 value_umts_requested_qos_with_signaling_indication_flag_signaling_indication,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_get_ipv6_address_preference:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_ipv6_address_preference_address: a placeholder for the output #GArray of #guint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv6 Address Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_ipv6_address_preference (
    QmiMessageWdsModifyProfileInput *self,
    GArray **value_ipv6_address_preference_address,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_set_ipv6_address_preference:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_ipv6_address_preference_address: a #GArray of #guint16 elements. A new reference to @value_ipv6_address_preference_address will be taken.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IPv6 Address Preference' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_ipv6_address_preference (
    QmiMessageWdsModifyProfileInput *self,
    GArray *value_ipv6_address_preference_address,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_get_pdp_context_primary_id:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_pdp_context_primary_id: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Context Primary ID' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_pdp_context_primary_id (
    QmiMessageWdsModifyProfileInput *self,
    guint8 *value_pdp_context_primary_id,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_set_pdp_context_primary_id:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_pdp_context_primary_id: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PDP Context Primary ID' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_pdp_context_primary_id (
    QmiMessageWdsModifyProfileInput *self,
    guint8 value_pdp_context_primary_id,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_get_pdp_context_secondary_flag:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_pdp_context_secondary_flag: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Context Secondary Flag' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_pdp_context_secondary_flag (
    QmiMessageWdsModifyProfileInput *self,
    gboolean *value_pdp_context_secondary_flag,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_set_pdp_context_secondary_flag:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_pdp_context_secondary_flag: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PDP Context Secondary Flag' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_pdp_context_secondary_flag (
    QmiMessageWdsModifyProfileInput *self,
    gboolean value_pdp_context_secondary_flag,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_get_pdp_context_number:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_pdp_context_number: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Context Number' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_pdp_context_number (
    QmiMessageWdsModifyProfileInput *self,
    guint8 *value_pdp_context_number,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_set_pdp_context_number:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_pdp_context_number: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PDP Context Number' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_pdp_context_number (
    QmiMessageWdsModifyProfileInput *self,
    guint8 value_pdp_context_number,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_get_imcn_flag:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_imcn_flag: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IMCN Flag' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_imcn_flag (
    QmiMessageWdsModifyProfileInput *self,
    gboolean *value_imcn_flag,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_set_imcn_flag:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_imcn_flag: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IMCN Flag' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_imcn_flag (
    QmiMessageWdsModifyProfileInput *self,
    gboolean value_imcn_flag,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_get_pcscf_address_using_dhcp:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_pcscf_address_using_dhcp: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PCSCF Address Using DHCP' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_pcscf_address_using_dhcp (
    QmiMessageWdsModifyProfileInput *self,
    gboolean *value_pcscf_address_using_dhcp,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_set_pcscf_address_using_dhcp:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_pcscf_address_using_dhcp: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PCSCF Address Using DHCP' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_pcscf_address_using_dhcp (
    QmiMessageWdsModifyProfileInput *self,
    gboolean value_pcscf_address_using_dhcp,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_get_pcscf_address_using_pco:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_pcscf_address_using_pco: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PCSCF Address Using PCO' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_pcscf_address_using_pco (
    QmiMessageWdsModifyProfileInput *self,
    gboolean *value_pcscf_address_using_pco,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_set_pcscf_address_using_pco:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_pcscf_address_using_pco: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PCSCF Address Using PCO' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_pcscf_address_using_pco (
    QmiMessageWdsModifyProfileInput *self,
    gboolean value_pcscf_address_using_pco,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_get_ipv4_address_preference:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_ipv4_address_preference: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv4 Address Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_ipv4_address_preference (
    QmiMessageWdsModifyProfileInput *self,
    guint32 *value_ipv4_address_preference,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_set_ipv4_address_preference:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_ipv4_address_preference: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IPv4 Address Preference' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_ipv4_address_preference (
    QmiMessageWdsModifyProfileInput *self,
    guint32 value_ipv4_address_preference,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_get_authentication:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_authentication: a placeholder for the output #QmiWdsAuthentication, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Authentication' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_authentication (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsAuthentication *value_authentication,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_set_authentication:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_authentication: a #QmiWdsAuthentication.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Authentication' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_authentication (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsAuthentication value_authentication,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_get_password:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_password: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Password' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_password (
    QmiMessageWdsModifyProfileInput *self,
    const gchar **value_password,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_set_password:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_password: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Password' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_password (
    QmiMessageWdsModifyProfileInput *self,
    const gchar *value_password,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_get_username:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_username: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Username' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_username (
    QmiMessageWdsModifyProfileInput *self,
    const gchar **value_username,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_set_username:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_username: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Username' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_username (
    QmiMessageWdsModifyProfileInput *self,
    const gchar *value_username,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_get_gprs_minimum_qos:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_gprs_minimum_qos_precedence_class: a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_minimum_qos_delay_class: a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_minimum_qos_reliability_class: a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_minimum_qos_peak_throughput_class: a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_minimum_qos_mean_throughput_class: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GPRS Minimum QoS' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_gprs_minimum_qos (
    QmiMessageWdsModifyProfileInput *self,
    guint32 *value_gprs_minimum_qos_precedence_class,
    guint32 *value_gprs_minimum_qos_delay_class,
    guint32 *value_gprs_minimum_qos_reliability_class,
    guint32 *value_gprs_minimum_qos_peak_throughput_class,
    guint32 *value_gprs_minimum_qos_mean_throughput_class,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_set_gprs_minimum_qos:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_gprs_minimum_qos_precedence_class: a #guint32.
 * @value_gprs_minimum_qos_delay_class: a #guint32.
 * @value_gprs_minimum_qos_reliability_class: a #guint32.
 * @value_gprs_minimum_qos_peak_throughput_class: a #guint32.
 * @value_gprs_minimum_qos_mean_throughput_class: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'GPRS Minimum QoS' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_gprs_minimum_qos (
    QmiMessageWdsModifyProfileInput *self,
    guint32 value_gprs_minimum_qos_precedence_class,
    guint32 value_gprs_minimum_qos_delay_class,
    guint32 value_gprs_minimum_qos_reliability_class,
    guint32 value_gprs_minimum_qos_peak_throughput_class,
    guint32 value_gprs_minimum_qos_mean_throughput_class,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_get_gprs_requested_qos:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_gprs_requested_qos_precedence_class: a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_requested_qos_delay_class: a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_requested_qos_reliability_class: a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_requested_qos_peak_throughput_class: a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_requested_qos_mean_throughput_class: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GPRS Requested QoS' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_gprs_requested_qos (
    QmiMessageWdsModifyProfileInput *self,
    guint32 *value_gprs_requested_qos_precedence_class,
    guint32 *value_gprs_requested_qos_delay_class,
    guint32 *value_gprs_requested_qos_reliability_class,
    guint32 *value_gprs_requested_qos_peak_throughput_class,
    guint32 *value_gprs_requested_qos_mean_throughput_class,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_set_gprs_requested_qos:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_gprs_requested_qos_precedence_class: a #guint32.
 * @value_gprs_requested_qos_delay_class: a #guint32.
 * @value_gprs_requested_qos_reliability_class: a #guint32.
 * @value_gprs_requested_qos_peak_throughput_class: a #guint32.
 * @value_gprs_requested_qos_mean_throughput_class: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'GPRS Requested QoS' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_gprs_requested_qos (
    QmiMessageWdsModifyProfileInput *self,
    guint32 value_gprs_requested_qos_precedence_class,
    guint32 value_gprs_requested_qos_delay_class,
    guint32 value_gprs_requested_qos_reliability_class,
    guint32 value_gprs_requested_qos_peak_throughput_class,
    guint32 value_gprs_requested_qos_mean_throughput_class,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_get_umts_minimum_qos:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_umts_minimum_qos_traffic_class: a placeholder for the output #QmiWdsTrafficClass, or %NULL if not required.
 * @value_umts_minimum_qos_max_uplink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_max_downlink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_guaranteed_uplink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_guaranteed_downlink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_qos_delivery_order: a placeholder for the output #QmiWdsDeliveryOrder, or %NULL if not required.
 * @value_umts_minimum_qos_maximum_sdu_size: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_sdu_error_ratio: a placeholder for the output #QmiWdsSduErrorRatio, or %NULL if not required.
 * @value_umts_minimum_qos_residual_bit_error_ratio: a placeholder for the output #QmiWdsSduResidualBitErrorRatio, or %NULL if not required.
 * @value_umts_minimum_qos_delivery_erroneous_sdu: a placeholder for the output #QmiWdsSduErroneousDelivery, or %NULL if not required.
 * @value_umts_minimum_qos_transfer_delay: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_traffic_handling_priority: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Minimum QoS' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_umts_minimum_qos (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsTrafficClass *value_umts_minimum_qos_traffic_class,
    guint32 *value_umts_minimum_qos_max_uplink_bitrate,
    guint32 *value_umts_minimum_qos_max_downlink_bitrate,
    guint32 *value_umts_minimum_qos_guaranteed_uplink_bitrate,
    guint32 *value_umts_minimum_qos_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder *value_umts_minimum_qos_qos_delivery_order,
    guint32 *value_umts_minimum_qos_maximum_sdu_size,
    QmiWdsSduErrorRatio *value_umts_minimum_qos_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio *value_umts_minimum_qos_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery *value_umts_minimum_qos_delivery_erroneous_sdu,
    guint32 *value_umts_minimum_qos_transfer_delay,
    guint32 *value_umts_minimum_qos_traffic_handling_priority,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_set_umts_minimum_qos:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_umts_minimum_qos_traffic_class: a #QmiWdsTrafficClass.
 * @value_umts_minimum_qos_max_uplink_bitrate: a #guint32.
 * @value_umts_minimum_qos_max_downlink_bitrate: a #guint32.
 * @value_umts_minimum_qos_guaranteed_uplink_bitrate: a #guint32.
 * @value_umts_minimum_qos_guaranteed_downlink_bitrate: a #guint32.
 * @value_umts_minimum_qos_qos_delivery_order: a #QmiWdsDeliveryOrder.
 * @value_umts_minimum_qos_maximum_sdu_size: a #guint32.
 * @value_umts_minimum_qos_sdu_error_ratio: a #QmiWdsSduErrorRatio.
 * @value_umts_minimum_qos_residual_bit_error_ratio: a #QmiWdsSduResidualBitErrorRatio.
 * @value_umts_minimum_qos_delivery_erroneous_sdu: a #QmiWdsSduErroneousDelivery.
 * @value_umts_minimum_qos_transfer_delay: a #guint32.
 * @value_umts_minimum_qos_traffic_handling_priority: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'UMTS Minimum QoS' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_umts_minimum_qos (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsTrafficClass value_umts_minimum_qos_traffic_class,
    guint32 value_umts_minimum_qos_max_uplink_bitrate,
    guint32 value_umts_minimum_qos_max_downlink_bitrate,
    guint32 value_umts_minimum_qos_guaranteed_uplink_bitrate,
    guint32 value_umts_minimum_qos_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder value_umts_minimum_qos_qos_delivery_order,
    guint32 value_umts_minimum_qos_maximum_sdu_size,
    QmiWdsSduErrorRatio value_umts_minimum_qos_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio value_umts_minimum_qos_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery value_umts_minimum_qos_delivery_erroneous_sdu,
    guint32 value_umts_minimum_qos_transfer_delay,
    guint32 value_umts_minimum_qos_traffic_handling_priority,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_get_umts_requested_qos:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_umts_requested_qos_traffic_class: a placeholder for the output #QmiWdsTrafficClass, or %NULL if not required.
 * @value_umts_requested_qos_max_uplink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_max_downlink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_guaranteed_uplink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_guaranteed_downlink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_qos_delivery_order: a placeholder for the output #QmiWdsDeliveryOrder, or %NULL if not required.
 * @value_umts_requested_qos_maximum_sdu_size: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_sdu_error_ratio: a placeholder for the output #QmiWdsSduErrorRatio, or %NULL if not required.
 * @value_umts_requested_qos_residual_bit_error_ratio: a placeholder for the output #QmiWdsSduResidualBitErrorRatio, or %NULL if not required.
 * @value_umts_requested_qos_delivery_erroneous_sdu: a placeholder for the output #QmiWdsSduErroneousDelivery, or %NULL if not required.
 * @value_umts_requested_qos_transfer_delay: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_traffic_handling_priority: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Requested QoS' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_umts_requested_qos (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsTrafficClass *value_umts_requested_qos_traffic_class,
    guint32 *value_umts_requested_qos_max_uplink_bitrate,
    guint32 *value_umts_requested_qos_max_downlink_bitrate,
    guint32 *value_umts_requested_qos_guaranteed_uplink_bitrate,
    guint32 *value_umts_requested_qos_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder *value_umts_requested_qos_qos_delivery_order,
    guint32 *value_umts_requested_qos_maximum_sdu_size,
    QmiWdsSduErrorRatio *value_umts_requested_qos_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio *value_umts_requested_qos_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery *value_umts_requested_qos_delivery_erroneous_sdu,
    guint32 *value_umts_requested_qos_transfer_delay,
    guint32 *value_umts_requested_qos_traffic_handling_priority,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_set_umts_requested_qos:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_umts_requested_qos_traffic_class: a #QmiWdsTrafficClass.
 * @value_umts_requested_qos_max_uplink_bitrate: a #guint32.
 * @value_umts_requested_qos_max_downlink_bitrate: a #guint32.
 * @value_umts_requested_qos_guaranteed_uplink_bitrate: a #guint32.
 * @value_umts_requested_qos_guaranteed_downlink_bitrate: a #guint32.
 * @value_umts_requested_qos_qos_delivery_order: a #QmiWdsDeliveryOrder.
 * @value_umts_requested_qos_maximum_sdu_size: a #guint32.
 * @value_umts_requested_qos_sdu_error_ratio: a #QmiWdsSduErrorRatio.
 * @value_umts_requested_qos_residual_bit_error_ratio: a #QmiWdsSduResidualBitErrorRatio.
 * @value_umts_requested_qos_delivery_erroneous_sdu: a #QmiWdsSduErroneousDelivery.
 * @value_umts_requested_qos_transfer_delay: a #guint32.
 * @value_umts_requested_qos_traffic_handling_priority: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'UMTS Requested QoS' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_umts_requested_qos (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsTrafficClass value_umts_requested_qos_traffic_class,
    guint32 value_umts_requested_qos_max_uplink_bitrate,
    guint32 value_umts_requested_qos_max_downlink_bitrate,
    guint32 value_umts_requested_qos_guaranteed_uplink_bitrate,
    guint32 value_umts_requested_qos_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder value_umts_requested_qos_qos_delivery_order,
    guint32 value_umts_requested_qos_maximum_sdu_size,
    QmiWdsSduErrorRatio value_umts_requested_qos_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio value_umts_requested_qos_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery value_umts_requested_qos_delivery_erroneous_sdu,
    guint32 value_umts_requested_qos_transfer_delay,
    guint32 value_umts_requested_qos_traffic_handling_priority,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_get_secondary_ipv4_dns_address:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_secondary_ipv4_dns_address: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Secondary IPv4 DNS Address' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_secondary_ipv4_dns_address (
    QmiMessageWdsModifyProfileInput *self,
    guint32 *value_secondary_ipv4_dns_address,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_set_secondary_ipv4_dns_address:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_secondary_ipv4_dns_address: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Secondary IPv4 DNS Address' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_secondary_ipv4_dns_address (
    QmiMessageWdsModifyProfileInput *self,
    guint32 value_secondary_ipv4_dns_address,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_get_primary_ipv4_dns_address:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_primary_ipv4_dns_address: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Primary IPv4 DNS Address' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_primary_ipv4_dns_address (
    QmiMessageWdsModifyProfileInput *self,
    guint32 *value_primary_ipv4_dns_address,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_set_primary_ipv4_dns_address:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_primary_ipv4_dns_address: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Primary IPv4 DNS Address' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_primary_ipv4_dns_address (
    QmiMessageWdsModifyProfileInput *self,
    guint32 value_primary_ipv4_dns_address,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_get_apn_name:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_apn_name: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'APN Name' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_apn_name (
    QmiMessageWdsModifyProfileInput *self,
    const gchar **value_apn_name,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_set_apn_name:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_apn_name: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'APN Name' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_apn_name (
    QmiMessageWdsModifyProfileInput *self,
    const gchar *value_apn_name,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_get_pdp_data_compression_type:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_pdp_data_compression_type: a placeholder for the output #QmiWdsPdpDataCompressionType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Data Compression Type' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_pdp_data_compression_type (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsPdpDataCompressionType *value_pdp_data_compression_type,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_set_pdp_data_compression_type:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_pdp_data_compression_type: a #QmiWdsPdpDataCompressionType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PDP Data Compression Type' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_pdp_data_compression_type (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsPdpDataCompressionType value_pdp_data_compression_type,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_get_pdp_header_compression_type:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_pdp_header_compression_type: a placeholder for the output #QmiWdsPdpHeaderCompressionType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Header Compression Type' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_pdp_header_compression_type (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsPdpHeaderCompressionType *value_pdp_header_compression_type,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_set_pdp_header_compression_type:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_pdp_header_compression_type: a #QmiWdsPdpHeaderCompressionType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PDP Header Compression Type' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_pdp_header_compression_type (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsPdpHeaderCompressionType value_pdp_header_compression_type,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_get_pdp_type:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_pdp_type: a placeholder for the output #QmiWdsPdpType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Type' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_pdp_type (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsPdpType *value_pdp_type,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_set_pdp_type:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_pdp_type: a #QmiWdsPdpType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PDP Type' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_pdp_type (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsPdpType value_pdp_type,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_get_profile_name:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_profile_name: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Profile Name' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_profile_name (
    QmiMessageWdsModifyProfileInput *self,
    const gchar **value_profile_name,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_set_profile_name:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_profile_name: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Profile Name' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_profile_name (
    QmiMessageWdsModifyProfileInput *self,
    const gchar *value_profile_name,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_get_profile_identifier:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_profile_identifier_profile_type: a placeholder for the output #QmiWdsProfileType, or %NULL if not required.
 * @value_profile_identifier_profile_index: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Profile Identifier' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_profile_identifier (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsProfileType *value_profile_identifier_profile_type,
    guint8 *value_profile_identifier_profile_index,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_set_profile_identifier:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_profile_identifier_profile_type: a #QmiWdsProfileType.
 * @value_profile_identifier_profile_index: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Profile Identifier' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_profile_identifier (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsProfileType value_profile_identifier_profile_type,
    guint8 value_profile_identifier_profile_index,
    GError **error);

/**
 * qmi_message_wds_modify_profile_input_ref:
 * @self: a #QmiMessageWdsModifyProfileInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessageWdsModifyProfileInput *qmi_message_wds_modify_profile_input_ref (QmiMessageWdsModifyProfileInput *self);

/**
 * qmi_message_wds_modify_profile_input_unref:
 * @self: a #QmiMessageWdsModifyProfileInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_wds_modify_profile_input_unref (QmiMessageWdsModifyProfileInput *self);

/**
 * qmi_message_wds_modify_profile_input_new:
 *
 * Allocates a new #QmiMessageWdsModifyProfileInput.
 *
 * Returns: the newly created #QmiMessageWdsModifyProfileInput. The returned value should be freed with qmi_message_wds_modify_profile_input_unref().
 *
 * Since: 1.18
 */
QmiMessageWdsModifyProfileInput *qmi_message_wds_modify_profile_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWdsModifyProfileOutput:
 *
 * The #QmiMessageWdsModifyProfileOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageWdsModifyProfileOutput QmiMessageWdsModifyProfileOutput;
GType qmi_message_wds_modify_profile_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_MODIFY_PROFILE_OUTPUT (qmi_message_wds_modify_profile_output_get_type ())

/**
 * qmi_message_wds_modify_profile_output_get_result:
 * @self: a QmiMessageWdsModifyProfileOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_output_get_result (
    QmiMessageWdsModifyProfileOutput *self,
    GError **error);

/**
 * qmi_message_wds_modify_profile_output_get_extended_error_code:
 * @self: a #QmiMessageWdsModifyProfileOutput.
 * @value_extended_error_code: a placeholder for the output #QmiWdsDsProfileError, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Extended Error Code' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_output_get_extended_error_code (
    QmiMessageWdsModifyProfileOutput *self,
    QmiWdsDsProfileError *value_extended_error_code,
    GError **error);

/**
 * qmi_message_wds_modify_profile_output_ref:
 * @self: a #QmiMessageWdsModifyProfileOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessageWdsModifyProfileOutput *qmi_message_wds_modify_profile_output_ref (QmiMessageWdsModifyProfileOutput *self);

/**
 * qmi_message_wds_modify_profile_output_unref:
 * @self: a #QmiMessageWdsModifyProfileOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_wds_modify_profile_output_unref (QmiMessageWdsModifyProfileOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Delete Profile */


/* --- Input -- */

/**
 * QmiMessageWdsDeleteProfileInput:
 *
 * The #QmiMessageWdsDeleteProfileInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageWdsDeleteProfileInput QmiMessageWdsDeleteProfileInput;
GType qmi_message_wds_delete_profile_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_DELETE_PROFILE_INPUT (qmi_message_wds_delete_profile_input_get_type ())

/**
 * qmi_message_wds_delete_profile_input_get_profile_identifier:
 * @self: a #QmiMessageWdsDeleteProfileInput.
 * @value_profile_identifier_profile_type: a placeholder for the output #QmiWdsProfileType, or %NULL if not required.
 * @value_profile_identifier_profile_index: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Profile Identifier' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_delete_profile_input_get_profile_identifier (
    QmiMessageWdsDeleteProfileInput *self,
    QmiWdsProfileType *value_profile_identifier_profile_type,
    guint8 *value_profile_identifier_profile_index,
    GError **error);

/**
 * qmi_message_wds_delete_profile_input_set_profile_identifier:
 * @self: a #QmiMessageWdsDeleteProfileInput.
 * @value_profile_identifier_profile_type: a #QmiWdsProfileType.
 * @value_profile_identifier_profile_index: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Profile Identifier' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_delete_profile_input_set_profile_identifier (
    QmiMessageWdsDeleteProfileInput *self,
    QmiWdsProfileType value_profile_identifier_profile_type,
    guint8 value_profile_identifier_profile_index,
    GError **error);

/**
 * qmi_message_wds_delete_profile_input_ref:
 * @self: a #QmiMessageWdsDeleteProfileInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessageWdsDeleteProfileInput *qmi_message_wds_delete_profile_input_ref (QmiMessageWdsDeleteProfileInput *self);

/**
 * qmi_message_wds_delete_profile_input_unref:
 * @self: a #QmiMessageWdsDeleteProfileInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_wds_delete_profile_input_unref (QmiMessageWdsDeleteProfileInput *self);

/**
 * qmi_message_wds_delete_profile_input_new:
 *
 * Allocates a new #QmiMessageWdsDeleteProfileInput.
 *
 * Returns: the newly created #QmiMessageWdsDeleteProfileInput. The returned value should be freed with qmi_message_wds_delete_profile_input_unref().
 *
 * Since: 1.18
 */
QmiMessageWdsDeleteProfileInput *qmi_message_wds_delete_profile_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWdsDeleteProfileOutput:
 *
 * The #QmiMessageWdsDeleteProfileOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageWdsDeleteProfileOutput QmiMessageWdsDeleteProfileOutput;
GType qmi_message_wds_delete_profile_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_DELETE_PROFILE_OUTPUT (qmi_message_wds_delete_profile_output_get_type ())

/**
 * qmi_message_wds_delete_profile_output_get_result:
 * @self: a QmiMessageWdsDeleteProfileOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_delete_profile_output_get_result (
    QmiMessageWdsDeleteProfileOutput *self,
    GError **error);

/**
 * qmi_message_wds_delete_profile_output_get_extended_error_code:
 * @self: a #QmiMessageWdsDeleteProfileOutput.
 * @value_extended_error_code: a placeholder for the output #QmiWdsDsProfileError, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Extended Error Code' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_delete_profile_output_get_extended_error_code (
    QmiMessageWdsDeleteProfileOutput *self,
    QmiWdsDsProfileError *value_extended_error_code,
    GError **error);

/**
 * qmi_message_wds_delete_profile_output_ref:
 * @self: a #QmiMessageWdsDeleteProfileOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessageWdsDeleteProfileOutput *qmi_message_wds_delete_profile_output_ref (QmiMessageWdsDeleteProfileOutput *self);

/**
 * qmi_message_wds_delete_profile_output_unref:
 * @self: a #QmiMessageWdsDeleteProfileOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_wds_delete_profile_output_unref (QmiMessageWdsDeleteProfileOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Get Profile List */


/* --- Input -- */

/**
 * QmiMessageWdsGetProfileListInput:
 *
 * The #QmiMessageWdsGetProfileListInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.8
 */
typedef struct _QmiMessageWdsGetProfileListInput QmiMessageWdsGetProfileListInput;
GType qmi_message_wds_get_profile_list_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GET_PROFILE_LIST_INPUT (qmi_message_wds_get_profile_list_input_get_type ())

/**
 * qmi_message_wds_get_profile_list_input_get_profile_type:
 * @self: a #QmiMessageWdsGetProfileListInput.
 * @value_profile_type: a placeholder for the output #QmiWdsProfileType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Profile Type' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_list_input_get_profile_type (
    QmiMessageWdsGetProfileListInput *self,
    QmiWdsProfileType *value_profile_type,
    GError **error);

/**
 * qmi_message_wds_get_profile_list_input_set_profile_type:
 * @self: a #QmiMessageWdsGetProfileListInput.
 * @value_profile_type: a #QmiWdsProfileType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Profile Type' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_list_input_set_profile_type (
    QmiMessageWdsGetProfileListInput *self,
    QmiWdsProfileType value_profile_type,
    GError **error);

/**
 * qmi_message_wds_get_profile_list_input_ref:
 * @self: a #QmiMessageWdsGetProfileListInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.8
 */
QmiMessageWdsGetProfileListInput *qmi_message_wds_get_profile_list_input_ref (QmiMessageWdsGetProfileListInput *self);

/**
 * qmi_message_wds_get_profile_list_input_unref:
 * @self: a #QmiMessageWdsGetProfileListInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.8
 */
void qmi_message_wds_get_profile_list_input_unref (QmiMessageWdsGetProfileListInput *self);

/**
 * qmi_message_wds_get_profile_list_input_new:
 *
 * Allocates a new #QmiMessageWdsGetProfileListInput.
 *
 * Returns: the newly created #QmiMessageWdsGetProfileListInput. The returned value should be freed with qmi_message_wds_get_profile_list_input_unref().
 *
 * Since: 1.8
 */
QmiMessageWdsGetProfileListInput *qmi_message_wds_get_profile_list_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWdsGetProfileListOutputProfileListProfile:
 * @profile_type: a #QmiWdsProfileType.
 * @profile_index: a #guint8.
 * @profile_name: a string.
 *
 * A QmiMessageWdsGetProfileListOutputProfileListProfile struct.
 *
 * Since: 1.8
 */
typedef struct _QmiMessageWdsGetProfileListOutputProfileListProfile {
    QmiWdsProfileType profile_type;
    guint8 profile_index;
    gchar *profile_name;
} QmiMessageWdsGetProfileListOutputProfileListProfile;

/**
 * QmiMessageWdsGetProfileListOutput:
 *
 * The #QmiMessageWdsGetProfileListOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.8
 */
typedef struct _QmiMessageWdsGetProfileListOutput QmiMessageWdsGetProfileListOutput;
GType qmi_message_wds_get_profile_list_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GET_PROFILE_LIST_OUTPUT (qmi_message_wds_get_profile_list_output_get_type ())

/**
 * qmi_message_wds_get_profile_list_output_get_result:
 * @self: a QmiMessageWdsGetProfileListOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_list_output_get_result (
    QmiMessageWdsGetProfileListOutput *self,
    GError **error);

/**
 * qmi_message_wds_get_profile_list_output_get_profile_list:
 * @self: a #QmiMessageWdsGetProfileListOutput.
 * @value_profile_list: a placeholder for the output #GArray of #QmiMessageWdsGetProfileListOutputProfileListProfile elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Profile List' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_list_output_get_profile_list (
    QmiMessageWdsGetProfileListOutput *self,
    GArray **value_profile_list,
    GError **error);

/**
 * qmi_message_wds_get_profile_list_output_get_extended_error_code:
 * @self: a #QmiMessageWdsGetProfileListOutput.
 * @value_extended_error_code: a placeholder for the output #QmiWdsDsProfileError, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Extended Error Code' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_list_output_get_extended_error_code (
    QmiMessageWdsGetProfileListOutput *self,
    QmiWdsDsProfileError *value_extended_error_code,
    GError **error);

/**
 * qmi_message_wds_get_profile_list_output_ref:
 * @self: a #QmiMessageWdsGetProfileListOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.8
 */
QmiMessageWdsGetProfileListOutput *qmi_message_wds_get_profile_list_output_ref (QmiMessageWdsGetProfileListOutput *self);

/**
 * qmi_message_wds_get_profile_list_output_unref:
 * @self: a #QmiMessageWdsGetProfileListOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.8
 */
void qmi_message_wds_get_profile_list_output_unref (QmiMessageWdsGetProfileListOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Get Profile Settings */


/* --- Input -- */

/**
 * QmiMessageWdsGetProfileSettingsInput:
 *
 * The #QmiMessageWdsGetProfileSettingsInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.8
 */
typedef struct _QmiMessageWdsGetProfileSettingsInput QmiMessageWdsGetProfileSettingsInput;
GType qmi_message_wds_get_profile_settings_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GET_PROFILE_SETTINGS_INPUT (qmi_message_wds_get_profile_settings_input_get_type ())

/**
 * qmi_message_wds_get_profile_settings_input_get_profile_id:
 * @self: a #QmiMessageWdsGetProfileSettingsInput.
 * @value_profile_id_profile_type: a placeholder for the output #QmiWdsProfileType, or %NULL if not required.
 * @value_profile_id_profile_index: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Profile ID' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_settings_input_get_profile_id (
    QmiMessageWdsGetProfileSettingsInput *self,
    QmiWdsProfileType *value_profile_id_profile_type,
    guint8 *value_profile_id_profile_index,
    GError **error);

/**
 * qmi_message_wds_get_profile_settings_input_set_profile_id:
 * @self: a #QmiMessageWdsGetProfileSettingsInput.
 * @value_profile_id_profile_type: a #QmiWdsProfileType.
 * @value_profile_id_profile_index: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Profile ID' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_settings_input_set_profile_id (
    QmiMessageWdsGetProfileSettingsInput *self,
    QmiWdsProfileType value_profile_id_profile_type,
    guint8 value_profile_id_profile_index,
    GError **error);

/**
 * qmi_message_wds_get_profile_settings_input_ref:
 * @self: a #QmiMessageWdsGetProfileSettingsInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.8
 */
QmiMessageWdsGetProfileSettingsInput *qmi_message_wds_get_profile_settings_input_ref (QmiMessageWdsGetProfileSettingsInput *self);

/**
 * qmi_message_wds_get_profile_settings_input_unref:
 * @self: a #QmiMessageWdsGetProfileSettingsInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.8
 */
void qmi_message_wds_get_profile_settings_input_unref (QmiMessageWdsGetProfileSettingsInput *self);

/**
 * qmi_message_wds_get_profile_settings_input_new:
 *
 * Allocates a new #QmiMessageWdsGetProfileSettingsInput.
 *
 * Returns: the newly created #QmiMessageWdsGetProfileSettingsInput. The returned value should be freed with qmi_message_wds_get_profile_settings_input_unref().
 *
 * Since: 1.8
 */
QmiMessageWdsGetProfileSettingsInput *qmi_message_wds_get_profile_settings_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWdsGetProfileSettingsOutput:
 *
 * The #QmiMessageWdsGetProfileSettingsOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.8
 */
typedef struct _QmiMessageWdsGetProfileSettingsOutput QmiMessageWdsGetProfileSettingsOutput;
GType qmi_message_wds_get_profile_settings_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GET_PROFILE_SETTINGS_OUTPUT (qmi_message_wds_get_profile_settings_output_get_type ())

/**
 * qmi_message_wds_get_profile_settings_output_get_result:
 * @self: a QmiMessageWdsGetProfileSettingsOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_settings_output_get_result (
    QmiMessageWdsGetProfileSettingsOutput *self,
    GError **error);

/**
 * qmi_message_wds_get_profile_settings_output_get_profile_name:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_profile_name: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Profile Name' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_settings_output_get_profile_name (
    QmiMessageWdsGetProfileSettingsOutput *self,
    const gchar **value_profile_name,
    GError **error);

/**
 * qmi_message_wds_get_profile_settings_output_get_pdp_type:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_pdp_type: a placeholder for the output #QmiWdsPdpType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Type' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_settings_output_get_pdp_type (
    QmiMessageWdsGetProfileSettingsOutput *self,
    QmiWdsPdpType *value_pdp_type,
    GError **error);

/**
 * qmi_message_wds_get_profile_settings_output_get_pdp_header_compression_type:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_pdp_header_compression_type: a placeholder for the output #QmiWdsPdpHeaderCompressionType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Header Compression Type' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_get_profile_settings_output_get_pdp_header_compression_type (
    QmiMessageWdsGetProfileSettingsOutput *self,
    QmiWdsPdpHeaderCompressionType *value_pdp_header_compression_type,
    GError **error);

/**
 * qmi_message_wds_get_profile_settings_output_get_pdp_data_compression_type:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_pdp_data_compression_type: a placeholder for the output #QmiWdsPdpDataCompressionType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Data Compression Type' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_get_profile_settings_output_get_pdp_data_compression_type (
    QmiMessageWdsGetProfileSettingsOutput *self,
    QmiWdsPdpDataCompressionType *value_pdp_data_compression_type,
    GError **error);

/**
 * qmi_message_wds_get_profile_settings_output_get_apn_name:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_apn_name: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'APN Name' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_settings_output_get_apn_name (
    QmiMessageWdsGetProfileSettingsOutput *self,
    const gchar **value_apn_name,
    GError **error);

/**
 * qmi_message_wds_get_profile_settings_output_get_primary_ipv4_dns_address:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_primary_ipv4_dns_address: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Primary IPv4 DNS Address' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_settings_output_get_primary_ipv4_dns_address (
    QmiMessageWdsGetProfileSettingsOutput *self,
    guint32 *value_primary_ipv4_dns_address,
    GError **error);

/**
 * qmi_message_wds_get_profile_settings_output_get_secondary_ipv4_dns_address:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_secondary_ipv4_dns_address: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Secondary IPv4 DNS Address' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_settings_output_get_secondary_ipv4_dns_address (
    QmiMessageWdsGetProfileSettingsOutput *self,
    guint32 *value_secondary_ipv4_dns_address,
    GError **error);

/**
 * qmi_message_wds_get_profile_settings_output_get_umts_requested_qos:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_umts_requested_qos_traffic_class: a placeholder for the output #QmiWdsTrafficClass, or %NULL if not required.
 * @value_umts_requested_qos_max_uplink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_max_downlink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_guaranteed_uplink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_guaranteed_downlink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_qos_delivery_order: a placeholder for the output #QmiWdsDeliveryOrder, or %NULL if not required.
 * @value_umts_requested_qos_maximum_sdu_size: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_sdu_error_ratio: a placeholder for the output #QmiWdsSduErrorRatio, or %NULL if not required.
 * @value_umts_requested_qos_residual_bit_error_ratio: a placeholder for the output #QmiWdsSduResidualBitErrorRatio, or %NULL if not required.
 * @value_umts_requested_qos_delivery_erroneous_sdu: a placeholder for the output #QmiWdsSduErroneousDelivery, or %NULL if not required.
 * @value_umts_requested_qos_transfer_delay: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_traffic_handling_priority: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Requested QoS' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_get_profile_settings_output_get_umts_requested_qos (
    QmiMessageWdsGetProfileSettingsOutput *self,
    QmiWdsTrafficClass *value_umts_requested_qos_traffic_class,
    guint32 *value_umts_requested_qos_max_uplink_bitrate,
    guint32 *value_umts_requested_qos_max_downlink_bitrate,
    guint32 *value_umts_requested_qos_guaranteed_uplink_bitrate,
    guint32 *value_umts_requested_qos_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder *value_umts_requested_qos_qos_delivery_order,
    guint32 *value_umts_requested_qos_maximum_sdu_size,
    QmiWdsSduErrorRatio *value_umts_requested_qos_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio *value_umts_requested_qos_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery *value_umts_requested_qos_delivery_erroneous_sdu,
    guint32 *value_umts_requested_qos_transfer_delay,
    guint32 *value_umts_requested_qos_traffic_handling_priority,
    GError **error);

/**
 * qmi_message_wds_get_profile_settings_output_get_umts_minimum_qos:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_umts_minimum_qos_traffic_class: a placeholder for the output #QmiWdsTrafficClass, or %NULL if not required.
 * @value_umts_minimum_qos_max_uplink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_max_downlink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_guaranteed_uplink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_guaranteed_downlink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_qos_delivery_order: a placeholder for the output #QmiWdsDeliveryOrder, or %NULL if not required.
 * @value_umts_minimum_qos_maximum_sdu_size: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_sdu_error_ratio: a placeholder for the output #QmiWdsSduErrorRatio, or %NULL if not required.
 * @value_umts_minimum_qos_residual_bit_error_ratio: a placeholder for the output #QmiWdsSduResidualBitErrorRatio, or %NULL if not required.
 * @value_umts_minimum_qos_delivery_erroneous_sdu: a placeholder for the output #QmiWdsSduErroneousDelivery, or %NULL if not required.
 * @value_umts_minimum_qos_transfer_delay: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_traffic_handling_priority: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Minimum QoS' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_get_profile_settings_output_get_umts_minimum_qos (
    QmiMessageWdsGetProfileSettingsOutput *self,
    QmiWdsTrafficClass *value_umts_minimum_qos_traffic_class,
    guint32 *value_umts_minimum_qos_max_uplink_bitrate,
    guint32 *value_umts_minimum_qos_max_downlink_bitrate,
    guint32 *value_umts_minimum_qos_guaranteed_uplink_bitrate,
    guint32 *value_umts_minimum_qos_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder *value_umts_minimum_qos_qos_delivery_order,
    guint32 *value_umts_minimum_qos_maximum_sdu_size,
    QmiWdsSduErrorRatio *value_umts_minimum_qos_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio *value_umts_minimum_qos_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery *value_umts_minimum_qos_delivery_erroneous_sdu,
    guint32 *value_umts_minimum_qos_transfer_delay,
    guint32 *value_umts_minimum_qos_traffic_handling_priority,
    GError **error);

/**
 * qmi_message_wds_get_profile_settings_output_get_gprs_requested_qos:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_gprs_requested_qos_precedence_class: a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_requested_qos_delay_class: a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_requested_qos_reliability_class: a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_requested_qos_peak_throughput_class: a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_requested_qos_mean_throughput_class: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GPRS Requested QoS' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_settings_output_get_gprs_requested_qos (
    QmiMessageWdsGetProfileSettingsOutput *self,
    guint32 *value_gprs_requested_qos_precedence_class,
    guint32 *value_gprs_requested_qos_delay_class,
    guint32 *value_gprs_requested_qos_reliability_class,
    guint32 *value_gprs_requested_qos_peak_throughput_class,
    guint32 *value_gprs_requested_qos_mean_throughput_class,
    GError **error);

/**
 * qmi_message_wds_get_profile_settings_output_get_gprs_minimum_qos:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_gprs_minimum_qos_precedence_class: a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_minimum_qos_delay_class: a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_minimum_qos_reliability_class: a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_minimum_qos_peak_throughput_class: a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_minimum_qos_mean_throughput_class: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GPRS Minimum QoS' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_settings_output_get_gprs_minimum_qos (
    QmiMessageWdsGetProfileSettingsOutput *self,
    guint32 *value_gprs_minimum_qos_precedence_class,
    guint32 *value_gprs_minimum_qos_delay_class,
    guint32 *value_gprs_minimum_qos_reliability_class,
    guint32 *value_gprs_minimum_qos_peak_throughput_class,
    guint32 *value_gprs_minimum_qos_mean_throughput_class,
    GError **error);

/**
 * qmi_message_wds_get_profile_settings_output_get_username:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_username: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Username' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_settings_output_get_username (
    QmiMessageWdsGetProfileSettingsOutput *self,
    const gchar **value_username,
    GError **error);

/**
 * qmi_message_wds_get_profile_settings_output_get_password:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_password: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Password' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_settings_output_get_password (
    QmiMessageWdsGetProfileSettingsOutput *self,
    const gchar **value_password,
    GError **error);

/**
 * qmi_message_wds_get_profile_settings_output_get_authentication:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_authentication: a placeholder for the output #QmiWdsAuthentication, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Authentication' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_settings_output_get_authentication (
    QmiMessageWdsGetProfileSettingsOutput *self,
    QmiWdsAuthentication *value_authentication,
    GError **error);

/**
 * qmi_message_wds_get_profile_settings_output_get_ipv4_address_preference:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_ipv4_address_preference: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv4 Address Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_settings_output_get_ipv4_address_preference (
    QmiMessageWdsGetProfileSettingsOutput *self,
    guint32 *value_ipv4_address_preference,
    GError **error);

/**
 * qmi_message_wds_get_profile_settings_output_get_pcscf_address_using_pco:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_pcscf_address_using_pco: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PCSCF Address Using PCO' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_settings_output_get_pcscf_address_using_pco (
    QmiMessageWdsGetProfileSettingsOutput *self,
    gboolean *value_pcscf_address_using_pco,
    GError **error);

/**
 * qmi_message_wds_get_profile_settings_output_get_pcscf_address_using_dhcp:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_pcscf_address_using_dhcp: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PCSCF Address Using DHCP' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_settings_output_get_pcscf_address_using_dhcp (
    QmiMessageWdsGetProfileSettingsOutput *self,
    gboolean *value_pcscf_address_using_dhcp,
    GError **error);

/**
 * qmi_message_wds_get_profile_settings_output_get_imcn_flag:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_imcn_flag: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IMCN Flag' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_settings_output_get_imcn_flag (
    QmiMessageWdsGetProfileSettingsOutput *self,
    gboolean *value_imcn_flag,
    GError **error);

/**
 * qmi_message_wds_get_profile_settings_output_get_pdp_context_number:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_pdp_context_number: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Context Number' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_get_profile_settings_output_get_pdp_context_number (
    QmiMessageWdsGetProfileSettingsOutput *self,
    guint8 *value_pdp_context_number,
    GError **error);

/**
 * qmi_message_wds_get_profile_settings_output_get_pdp_context_secondary_flag:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_pdp_context_secondary_flag: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Context Secondary Flag' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_get_profile_settings_output_get_pdp_context_secondary_flag (
    QmiMessageWdsGetProfileSettingsOutput *self,
    gboolean *value_pdp_context_secondary_flag,
    GError **error);

/**
 * qmi_message_wds_get_profile_settings_output_get_pdp_context_primary_id:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_pdp_context_primary_id: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Context Primary ID' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_get_profile_settings_output_get_pdp_context_primary_id (
    QmiMessageWdsGetProfileSettingsOutput *self,
    guint8 *value_pdp_context_primary_id,
    GError **error);

/**
 * qmi_message_wds_get_profile_settings_output_get_ipv6_address_preference:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_ipv6_address_preference_address: a placeholder for the output #GArray of #guint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv6 Address Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_settings_output_get_ipv6_address_preference (
    QmiMessageWdsGetProfileSettingsOutput *self,
    GArray **value_ipv6_address_preference_address,
    GError **error);

/**
 * qmi_message_wds_get_profile_settings_output_get_umts_requested_qos_with_signaling_indication_flag:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_umts_requested_qos_with_signaling_indication_flag_traffic_class: a placeholder for the output #QmiWdsTrafficClass, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_max_uplink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_max_downlink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_qos_delivery_order: a placeholder for the output #QmiWdsDeliveryOrder, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_maximum_sdu_size: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_sdu_error_ratio: a placeholder for the output #QmiWdsSduErrorRatio, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_residual_bit_error_ratio: a placeholder for the output #QmiWdsSduResidualBitErrorRatio, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_delivery_erroneous_sdu: a placeholder for the output #QmiWdsSduErroneousDelivery, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_transfer_delay: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_traffic_handling_priority: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_signaling_indication: a placeholder for the output #gint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Requested QoS With Signaling Indication Flag' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_get_profile_settings_output_get_umts_requested_qos_with_signaling_indication_flag (
    QmiMessageWdsGetProfileSettingsOutput *self,
    QmiWdsTrafficClass *value_umts_requested_qos_with_signaling_indication_flag_traffic_class,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_max_uplink_bitrate,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_max_downlink_bitrate,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder *value_umts_requested_qos_with_signaling_indication_flag_qos_delivery_order,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_maximum_sdu_size,
    QmiWdsSduErrorRatio *value_umts_requested_qos_with_signaling_indication_flag_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio *value_umts_requested_qos_with_signaling_indication_flag_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery *value_umts_requested_qos_with_signaling_indication_flag_delivery_erroneous_sdu,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_transfer_delay,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_traffic_handling_priority,
    gint8 *value_umts_requested_qos_with_signaling_indication_flag_signaling_indication,
    GError **error);

/**
 * qmi_message_wds_get_profile_settings_output_get_umts_minimum_qos_with_signaling_indication_flag:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_umts_minimum_qos_with_signaling_indication_flag_traffic_class: a placeholder for the output #QmiWdsTrafficClass, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_max_uplink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_max_downlink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_qos_delivery_order: a placeholder for the output #QmiWdsDeliveryOrder, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_maximum_sdu_size: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_sdu_error_ratio: a placeholder for the output #QmiWdsSduErrorRatio, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_residual_bit_error_ratio: a placeholder for the output #QmiWdsSduResidualBitErrorRatio, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_delivery_erroneous_sdu: a placeholder for the output #QmiWdsSduErroneousDelivery, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_transfer_delay: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_traffic_handling_priority: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_signaling_indication: a placeholder for the output #gint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Minimum QoS With Signaling Indication Flag' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_get_profile_settings_output_get_umts_minimum_qos_with_signaling_indication_flag (
    QmiMessageWdsGetProfileSettingsOutput *self,
    QmiWdsTrafficClass *value_umts_minimum_qos_with_signaling_indication_flag_traffic_class,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_max_uplink_bitrate,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_max_downlink_bitrate,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder *value_umts_minimum_qos_with_signaling_indication_flag_qos_delivery_order,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_maximum_sdu_size,
    QmiWdsSduErrorRatio *value_umts_minimum_qos_with_signaling_indication_flag_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio *value_umts_minimum_qos_with_signaling_indication_flag_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery *value_umts_minimum_qos_with_signaling_indication_flag_delivery_erroneous_sdu,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_transfer_delay,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_traffic_handling_priority,
    gint8 *value_umts_minimum_qos_with_signaling_indication_flag_signaling_indication,
    GError **error);

/**
 * qmi_message_wds_get_profile_settings_output_get_ipv6_primary_dns_address_preference:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_ipv6_primary_dns_address_preference: a placeholder for the output #GArray of #guint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv6 Primary DNS Address Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_settings_output_get_ipv6_primary_dns_address_preference (
    QmiMessageWdsGetProfileSettingsOutput *self,
    GArray **value_ipv6_primary_dns_address_preference,
    GError **error);

/**
 * qmi_message_wds_get_profile_settings_output_get_ipv6_secondary_dns_address_preference:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_ipv6_secondary_dns_address_preference: a placeholder for the output #GArray of #guint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv6 Secondary DNS Address Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_settings_output_get_ipv6_secondary_dns_address_preference (
    QmiMessageWdsGetProfileSettingsOutput *self,
    GArray **value_ipv6_secondary_dns_address_preference,
    GError **error);

/**
 * qmi_message_wds_get_profile_settings_output_get_lte_qos_parameters:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_lte_qos_parameters_qos_class_identifier: a placeholder for the output #QmiWdsQosClassIdentifier, or %NULL if not required.
 * @value_lte_qos_parameters_guaranteed_downlink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_lte_qos_parameters_max_downlink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_lte_qos_parameters_guaranteed_uplink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_lte_qos_parameters_max_uplink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE QoS Parameters' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_get_profile_settings_output_get_lte_qos_parameters (
    QmiMessageWdsGetProfileSettingsOutput *self,
    QmiWdsQosClassIdentifier *value_lte_qos_parameters_qos_class_identifier,
    guint32 *value_lte_qos_parameters_guaranteed_downlink_bitrate,
    guint32 *value_lte_qos_parameters_max_downlink_bitrate,
    guint32 *value_lte_qos_parameters_guaranteed_uplink_bitrate,
    guint32 *value_lte_qos_parameters_max_uplink_bitrate,
    GError **error);

/**
 * qmi_message_wds_get_profile_settings_output_get_extended_error_code:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_extended_error_code: a placeholder for the output #QmiWdsDsProfileError, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Extended Error Code' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_settings_output_get_extended_error_code (
    QmiMessageWdsGetProfileSettingsOutput *self,
    QmiWdsDsProfileError *value_extended_error_code,
    GError **error);

/**
 * qmi_message_wds_get_profile_settings_output_ref:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.8
 */
QmiMessageWdsGetProfileSettingsOutput *qmi_message_wds_get_profile_settings_output_ref (QmiMessageWdsGetProfileSettingsOutput *self);

/**
 * qmi_message_wds_get_profile_settings_output_unref:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.8
 */
void qmi_message_wds_get_profile_settings_output_unref (QmiMessageWdsGetProfileSettingsOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Get Default Settings */


/* --- Input -- */

/**
 * QmiMessageWdsGetDefaultSettingsInput:
 *
 * The #QmiMessageWdsGetDefaultSettingsInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.8
 */
typedef struct _QmiMessageWdsGetDefaultSettingsInput QmiMessageWdsGetDefaultSettingsInput;
GType qmi_message_wds_get_default_settings_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GET_DEFAULT_SETTINGS_INPUT (qmi_message_wds_get_default_settings_input_get_type ())

/**
 * qmi_message_wds_get_default_settings_input_get_profile_type:
 * @self: a #QmiMessageWdsGetDefaultSettingsInput.
 * @value_profile_type: a placeholder for the output #QmiWdsProfileType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Profile Type' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_default_settings_input_get_profile_type (
    QmiMessageWdsGetDefaultSettingsInput *self,
    QmiWdsProfileType *value_profile_type,
    GError **error);

/**
 * qmi_message_wds_get_default_settings_input_set_profile_type:
 * @self: a #QmiMessageWdsGetDefaultSettingsInput.
 * @value_profile_type: a #QmiWdsProfileType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Profile Type' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_default_settings_input_set_profile_type (
    QmiMessageWdsGetDefaultSettingsInput *self,
    QmiWdsProfileType value_profile_type,
    GError **error);

/**
 * qmi_message_wds_get_default_settings_input_ref:
 * @self: a #QmiMessageWdsGetDefaultSettingsInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.8
 */
QmiMessageWdsGetDefaultSettingsInput *qmi_message_wds_get_default_settings_input_ref (QmiMessageWdsGetDefaultSettingsInput *self);

/**
 * qmi_message_wds_get_default_settings_input_unref:
 * @self: a #QmiMessageWdsGetDefaultSettingsInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.8
 */
void qmi_message_wds_get_default_settings_input_unref (QmiMessageWdsGetDefaultSettingsInput *self);

/**
 * qmi_message_wds_get_default_settings_input_new:
 *
 * Allocates a new #QmiMessageWdsGetDefaultSettingsInput.
 *
 * Returns: the newly created #QmiMessageWdsGetDefaultSettingsInput. The returned value should be freed with qmi_message_wds_get_default_settings_input_unref().
 *
 * Since: 1.8
 */
QmiMessageWdsGetDefaultSettingsInput *qmi_message_wds_get_default_settings_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWdsGetDefaultSettingsOutput:
 *
 * The #QmiMessageWdsGetDefaultSettingsOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.8
 */
typedef struct _QmiMessageWdsGetDefaultSettingsOutput QmiMessageWdsGetDefaultSettingsOutput;
GType qmi_message_wds_get_default_settings_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GET_DEFAULT_SETTINGS_OUTPUT (qmi_message_wds_get_default_settings_output_get_type ())

/**
 * qmi_message_wds_get_default_settings_output_get_result:
 * @self: a QmiMessageWdsGetDefaultSettingsOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_default_settings_output_get_result (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    GError **error);

/**
 * qmi_message_wds_get_default_settings_output_get_profile_name:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_profile_name: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Profile Name' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_default_settings_output_get_profile_name (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    const gchar **value_profile_name,
    GError **error);

/**
 * qmi_message_wds_get_default_settings_output_get_pdp_type:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_pdp_type: a placeholder for the output #QmiWdsPdpType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Type' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_default_settings_output_get_pdp_type (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    QmiWdsPdpType *value_pdp_type,
    GError **error);

/**
 * qmi_message_wds_get_default_settings_output_get_pdp_header_compression_type:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_pdp_header_compression_type: a placeholder for the output #QmiWdsPdpHeaderCompressionType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Header Compression Type' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_get_default_settings_output_get_pdp_header_compression_type (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    QmiWdsPdpHeaderCompressionType *value_pdp_header_compression_type,
    GError **error);

/**
 * qmi_message_wds_get_default_settings_output_get_pdp_data_compression_type:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_pdp_data_compression_type: a placeholder for the output #QmiWdsPdpDataCompressionType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Data Compression Type' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_get_default_settings_output_get_pdp_data_compression_type (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    QmiWdsPdpDataCompressionType *value_pdp_data_compression_type,
    GError **error);

/**
 * qmi_message_wds_get_default_settings_output_get_apn_name:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_apn_name: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'APN Name' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_default_settings_output_get_apn_name (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    const gchar **value_apn_name,
    GError **error);

/**
 * qmi_message_wds_get_default_settings_output_get_primary_ipv4_dns_address:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_primary_ipv4_dns_address: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Primary IPv4 DNS Address' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_default_settings_output_get_primary_ipv4_dns_address (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    guint32 *value_primary_ipv4_dns_address,
    GError **error);

/**
 * qmi_message_wds_get_default_settings_output_get_secondary_ipv4_dns_address:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_secondary_ipv4_dns_address: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Secondary IPv4 DNS Address' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_default_settings_output_get_secondary_ipv4_dns_address (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    guint32 *value_secondary_ipv4_dns_address,
    GError **error);

/**
 * qmi_message_wds_get_default_settings_output_get_umts_requested_qos:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_umts_requested_qos_traffic_class: a placeholder for the output #QmiWdsTrafficClass, or %NULL if not required.
 * @value_umts_requested_qos_max_uplink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_max_downlink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_guaranteed_uplink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_guaranteed_downlink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_qos_delivery_order: a placeholder for the output #QmiWdsDeliveryOrder, or %NULL if not required.
 * @value_umts_requested_qos_maximum_sdu_size: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_sdu_error_ratio: a placeholder for the output #QmiWdsSduErrorRatio, or %NULL if not required.
 * @value_umts_requested_qos_residual_bit_error_ratio: a placeholder for the output #QmiWdsSduResidualBitErrorRatio, or %NULL if not required.
 * @value_umts_requested_qos_delivery_erroneous_sdu: a placeholder for the output #QmiWdsSduErroneousDelivery, or %NULL if not required.
 * @value_umts_requested_qos_transfer_delay: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_traffic_handling_priority: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Requested QoS' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_get_default_settings_output_get_umts_requested_qos (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    QmiWdsTrafficClass *value_umts_requested_qos_traffic_class,
    guint32 *value_umts_requested_qos_max_uplink_bitrate,
    guint32 *value_umts_requested_qos_max_downlink_bitrate,
    guint32 *value_umts_requested_qos_guaranteed_uplink_bitrate,
    guint32 *value_umts_requested_qos_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder *value_umts_requested_qos_qos_delivery_order,
    guint32 *value_umts_requested_qos_maximum_sdu_size,
    QmiWdsSduErrorRatio *value_umts_requested_qos_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio *value_umts_requested_qos_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery *value_umts_requested_qos_delivery_erroneous_sdu,
    guint32 *value_umts_requested_qos_transfer_delay,
    guint32 *value_umts_requested_qos_traffic_handling_priority,
    GError **error);

/**
 * qmi_message_wds_get_default_settings_output_get_umts_minimum_qos:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_umts_minimum_qos_traffic_class: a placeholder for the output #QmiWdsTrafficClass, or %NULL if not required.
 * @value_umts_minimum_qos_max_uplink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_max_downlink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_guaranteed_uplink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_guaranteed_downlink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_qos_delivery_order: a placeholder for the output #QmiWdsDeliveryOrder, or %NULL if not required.
 * @value_umts_minimum_qos_maximum_sdu_size: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_sdu_error_ratio: a placeholder for the output #QmiWdsSduErrorRatio, or %NULL if not required.
 * @value_umts_minimum_qos_residual_bit_error_ratio: a placeholder for the output #QmiWdsSduResidualBitErrorRatio, or %NULL if not required.
 * @value_umts_minimum_qos_delivery_erroneous_sdu: a placeholder for the output #QmiWdsSduErroneousDelivery, or %NULL if not required.
 * @value_umts_minimum_qos_transfer_delay: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_traffic_handling_priority: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Minimum QoS' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_get_default_settings_output_get_umts_minimum_qos (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    QmiWdsTrafficClass *value_umts_minimum_qos_traffic_class,
    guint32 *value_umts_minimum_qos_max_uplink_bitrate,
    guint32 *value_umts_minimum_qos_max_downlink_bitrate,
    guint32 *value_umts_minimum_qos_guaranteed_uplink_bitrate,
    guint32 *value_umts_minimum_qos_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder *value_umts_minimum_qos_qos_delivery_order,
    guint32 *value_umts_minimum_qos_maximum_sdu_size,
    QmiWdsSduErrorRatio *value_umts_minimum_qos_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio *value_umts_minimum_qos_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery *value_umts_minimum_qos_delivery_erroneous_sdu,
    guint32 *value_umts_minimum_qos_transfer_delay,
    guint32 *value_umts_minimum_qos_traffic_handling_priority,
    GError **error);

/**
 * qmi_message_wds_get_default_settings_output_get_gprs_requested_qos:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_gprs_requested_qos_precedence_class: a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_requested_qos_delay_class: a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_requested_qos_reliability_class: a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_requested_qos_peak_throughput_class: a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_requested_qos_mean_throughput_class: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GPRS Requested QoS' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_default_settings_output_get_gprs_requested_qos (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    guint32 *value_gprs_requested_qos_precedence_class,
    guint32 *value_gprs_requested_qos_delay_class,
    guint32 *value_gprs_requested_qos_reliability_class,
    guint32 *value_gprs_requested_qos_peak_throughput_class,
    guint32 *value_gprs_requested_qos_mean_throughput_class,
    GError **error);

/**
 * qmi_message_wds_get_default_settings_output_get_gprs_minimum_qos:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_gprs_minimum_qos_precedence_class: a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_minimum_qos_delay_class: a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_minimum_qos_reliability_class: a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_minimum_qos_peak_throughput_class: a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_minimum_qos_mean_throughput_class: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GPRS Minimum QoS' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_default_settings_output_get_gprs_minimum_qos (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    guint32 *value_gprs_minimum_qos_precedence_class,
    guint32 *value_gprs_minimum_qos_delay_class,
    guint32 *value_gprs_minimum_qos_reliability_class,
    guint32 *value_gprs_minimum_qos_peak_throughput_class,
    guint32 *value_gprs_minimum_qos_mean_throughput_class,
    GError **error);

/**
 * qmi_message_wds_get_default_settings_output_get_username:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_username: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Username' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_default_settings_output_get_username (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    const gchar **value_username,
    GError **error);

/**
 * qmi_message_wds_get_default_settings_output_get_password:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_password: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Password' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_default_settings_output_get_password (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    const gchar **value_password,
    GError **error);

/**
 * qmi_message_wds_get_default_settings_output_get_authentication:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_authentication: a placeholder for the output #QmiWdsAuthentication, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Authentication' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_default_settings_output_get_authentication (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    QmiWdsAuthentication *value_authentication,
    GError **error);

/**
 * qmi_message_wds_get_default_settings_output_get_ipv4_address_preference:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_ipv4_address_preference: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv4 Address Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_default_settings_output_get_ipv4_address_preference (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    guint32 *value_ipv4_address_preference,
    GError **error);

/**
 * qmi_message_wds_get_default_settings_output_get_pcscf_address_using_pco:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_pcscf_address_using_pco: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PCSCF Address Using PCO' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_default_settings_output_get_pcscf_address_using_pco (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    gboolean *value_pcscf_address_using_pco,
    GError **error);

/**
 * qmi_message_wds_get_default_settings_output_get_pcscf_address_using_dhcp:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_pcscf_address_using_dhcp: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PCSCF Address Using DHCP' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_default_settings_output_get_pcscf_address_using_dhcp (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    gboolean *value_pcscf_address_using_dhcp,
    GError **error);

/**
 * qmi_message_wds_get_default_settings_output_get_imcn_flag:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_imcn_flag: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IMCN Flag' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_default_settings_output_get_imcn_flag (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    gboolean *value_imcn_flag,
    GError **error);

/**
 * qmi_message_wds_get_default_settings_output_get_pdp_context_number:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_pdp_context_number: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Context Number' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_get_default_settings_output_get_pdp_context_number (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    guint8 *value_pdp_context_number,
    GError **error);

/**
 * qmi_message_wds_get_default_settings_output_get_pdp_context_secondary_flag:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_pdp_context_secondary_flag: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Context Secondary Flag' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_get_default_settings_output_get_pdp_context_secondary_flag (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    gboolean *value_pdp_context_secondary_flag,
    GError **error);

/**
 * qmi_message_wds_get_default_settings_output_get_pdp_context_primary_id:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_pdp_context_primary_id: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Context Primary ID' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_get_default_settings_output_get_pdp_context_primary_id (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    guint8 *value_pdp_context_primary_id,
    GError **error);

/**
 * qmi_message_wds_get_default_settings_output_get_ipv6_address_preference:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_ipv6_address_preference_address: a placeholder for the output #GArray of #guint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv6 Address Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_default_settings_output_get_ipv6_address_preference (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    GArray **value_ipv6_address_preference_address,
    GError **error);

/**
 * qmi_message_wds_get_default_settings_output_get_umts_requested_qos_with_signaling_indication_flag:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_umts_requested_qos_with_signaling_indication_flag_traffic_class: a placeholder for the output #QmiWdsTrafficClass, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_max_uplink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_max_downlink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_qos_delivery_order: a placeholder for the output #QmiWdsDeliveryOrder, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_maximum_sdu_size: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_sdu_error_ratio: a placeholder for the output #QmiWdsSduErrorRatio, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_residual_bit_error_ratio: a placeholder for the output #QmiWdsSduResidualBitErrorRatio, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_delivery_erroneous_sdu: a placeholder for the output #QmiWdsSduErroneousDelivery, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_transfer_delay: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_traffic_handling_priority: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_signaling_indication: a placeholder for the output #gint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Requested QoS With Signaling Indication Flag' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_get_default_settings_output_get_umts_requested_qos_with_signaling_indication_flag (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    QmiWdsTrafficClass *value_umts_requested_qos_with_signaling_indication_flag_traffic_class,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_max_uplink_bitrate,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_max_downlink_bitrate,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder *value_umts_requested_qos_with_signaling_indication_flag_qos_delivery_order,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_maximum_sdu_size,
    QmiWdsSduErrorRatio *value_umts_requested_qos_with_signaling_indication_flag_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio *value_umts_requested_qos_with_signaling_indication_flag_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery *value_umts_requested_qos_with_signaling_indication_flag_delivery_erroneous_sdu,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_transfer_delay,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_traffic_handling_priority,
    gint8 *value_umts_requested_qos_with_signaling_indication_flag_signaling_indication,
    GError **error);

/**
 * qmi_message_wds_get_default_settings_output_get_umts_minimum_qos_with_signaling_indication_flag:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_umts_minimum_qos_with_signaling_indication_flag_traffic_class: a placeholder for the output #QmiWdsTrafficClass, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_max_uplink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_max_downlink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_qos_delivery_order: a placeholder for the output #QmiWdsDeliveryOrder, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_maximum_sdu_size: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_sdu_error_ratio: a placeholder for the output #QmiWdsSduErrorRatio, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_residual_bit_error_ratio: a placeholder for the output #QmiWdsSduResidualBitErrorRatio, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_delivery_erroneous_sdu: a placeholder for the output #QmiWdsSduErroneousDelivery, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_transfer_delay: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_traffic_handling_priority: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_signaling_indication: a placeholder for the output #gint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Minimum QoS With Signaling Indication Flag' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_get_default_settings_output_get_umts_minimum_qos_with_signaling_indication_flag (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    QmiWdsTrafficClass *value_umts_minimum_qos_with_signaling_indication_flag_traffic_class,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_max_uplink_bitrate,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_max_downlink_bitrate,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder *value_umts_minimum_qos_with_signaling_indication_flag_qos_delivery_order,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_maximum_sdu_size,
    QmiWdsSduErrorRatio *value_umts_minimum_qos_with_signaling_indication_flag_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio *value_umts_minimum_qos_with_signaling_indication_flag_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery *value_umts_minimum_qos_with_signaling_indication_flag_delivery_erroneous_sdu,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_transfer_delay,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_traffic_handling_priority,
    gint8 *value_umts_minimum_qos_with_signaling_indication_flag_signaling_indication,
    GError **error);

/**
 * qmi_message_wds_get_default_settings_output_get_ipv6_primary_dns_address_preference:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_ipv6_primary_dns_address_preference: a placeholder for the output #GArray of #guint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv6 Primary DNS Address Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_default_settings_output_get_ipv6_primary_dns_address_preference (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    GArray **value_ipv6_primary_dns_address_preference,
    GError **error);

/**
 * qmi_message_wds_get_default_settings_output_get_ipv6_secondary_dns_address_preference:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_ipv6_secondary_dns_address_preference: a placeholder for the output #GArray of #guint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv6 Secondary DNS Address Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_default_settings_output_get_ipv6_secondary_dns_address_preference (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    GArray **value_ipv6_secondary_dns_address_preference,
    GError **error);

/**
 * qmi_message_wds_get_default_settings_output_get_lte_qos_parameters:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_lte_qos_parameters_qos_class_identifier: a placeholder for the output #QmiWdsQosClassIdentifier, or %NULL if not required.
 * @value_lte_qos_parameters_guaranteed_downlink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_lte_qos_parameters_max_downlink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_lte_qos_parameters_guaranteed_uplink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_lte_qos_parameters_max_uplink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE QoS Parameters' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_get_default_settings_output_get_lte_qos_parameters (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    QmiWdsQosClassIdentifier *value_lte_qos_parameters_qos_class_identifier,
    guint32 *value_lte_qos_parameters_guaranteed_downlink_bitrate,
    guint32 *value_lte_qos_parameters_max_downlink_bitrate,
    guint32 *value_lte_qos_parameters_guaranteed_uplink_bitrate,
    guint32 *value_lte_qos_parameters_max_uplink_bitrate,
    GError **error);

/**
 * qmi_message_wds_get_default_settings_output_get_extended_error_code:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_extended_error_code: a placeholder for the output #QmiWdsDsProfileError, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Extended Error Code' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_default_settings_output_get_extended_error_code (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    QmiWdsDsProfileError *value_extended_error_code,
    GError **error);

/**
 * qmi_message_wds_get_default_settings_output_ref:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.8
 */
QmiMessageWdsGetDefaultSettingsOutput *qmi_message_wds_get_default_settings_output_ref (QmiMessageWdsGetDefaultSettingsOutput *self);

/**
 * qmi_message_wds_get_default_settings_output_unref:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.8
 */
void qmi_message_wds_get_default_settings_output_unref (QmiMessageWdsGetDefaultSettingsOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Get Current Settings */


/* --- Input -- */

/**
 * QmiMessageWdsGetCurrentSettingsInput:
 *
 * The #QmiMessageWdsGetCurrentSettingsInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWdsGetCurrentSettingsInput QmiMessageWdsGetCurrentSettingsInput;
GType qmi_message_wds_get_current_settings_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GET_CURRENT_SETTINGS_INPUT (qmi_message_wds_get_current_settings_input_get_type ())

/**
 * qmi_message_wds_get_current_settings_input_get_requested_settings:
 * @self: a #QmiMessageWdsGetCurrentSettingsInput.
 * @value_requested_settings: a placeholder for the output #QmiWdsGetCurrentSettingsRequestedSettings, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Requested Settings' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_input_get_requested_settings (
    QmiMessageWdsGetCurrentSettingsInput *self,
    QmiWdsGetCurrentSettingsRequestedSettings *value_requested_settings,
    GError **error);

/**
 * qmi_message_wds_get_current_settings_input_set_requested_settings:
 * @self: a #QmiMessageWdsGetCurrentSettingsInput.
 * @value_requested_settings: a #QmiWdsGetCurrentSettingsRequestedSettings.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Requested Settings' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_input_set_requested_settings (
    QmiMessageWdsGetCurrentSettingsInput *self,
    QmiWdsGetCurrentSettingsRequestedSettings value_requested_settings,
    GError **error);

/**
 * qmi_message_wds_get_current_settings_input_ref:
 * @self: a #QmiMessageWdsGetCurrentSettingsInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWdsGetCurrentSettingsInput *qmi_message_wds_get_current_settings_input_ref (QmiMessageWdsGetCurrentSettingsInput *self);

/**
 * qmi_message_wds_get_current_settings_input_unref:
 * @self: a #QmiMessageWdsGetCurrentSettingsInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wds_get_current_settings_input_unref (QmiMessageWdsGetCurrentSettingsInput *self);

/**
 * qmi_message_wds_get_current_settings_input_new:
 *
 * Allocates a new #QmiMessageWdsGetCurrentSettingsInput.
 *
 * Returns: the newly created #QmiMessageWdsGetCurrentSettingsInput. The returned value should be freed with qmi_message_wds_get_current_settings_input_unref().
 *
 * Since: 1.0
 */
QmiMessageWdsGetCurrentSettingsInput *qmi_message_wds_get_current_settings_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWdsGetCurrentSettingsOutput:
 *
 * The #QmiMessageWdsGetCurrentSettingsOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWdsGetCurrentSettingsOutput QmiMessageWdsGetCurrentSettingsOutput;
GType qmi_message_wds_get_current_settings_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GET_CURRENT_SETTINGS_OUTPUT (qmi_message_wds_get_current_settings_output_get_type ())

/**
 * qmi_message_wds_get_current_settings_output_get_result:
 * @self: a QmiMessageWdsGetCurrentSettingsOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_result (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    GError **error);

/**
 * qmi_message_wds_get_current_settings_output_get_profile_name:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_profile_name: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Profile Name' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_profile_name (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    const gchar **value_profile_name,
    GError **error);

/**
 * qmi_message_wds_get_current_settings_output_get_pdp_type:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_pdp_type: a placeholder for the output #QmiWdsPdpType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Type' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_pdp_type (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    QmiWdsPdpType *value_pdp_type,
    GError **error);

/**
 * qmi_message_wds_get_current_settings_output_get_apn_name:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_apn_name: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'APN Name' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_apn_name (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    const gchar **value_apn_name,
    GError **error);

/**
 * qmi_message_wds_get_current_settings_output_get_primary_ipv4_dns_address:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_primary_ipv4_dns_address: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Primary IPv4 DNS Address' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_primary_ipv4_dns_address (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    guint32 *value_primary_ipv4_dns_address,
    GError **error);

/**
 * qmi_message_wds_get_current_settings_output_get_secondary_ipv4_dns_address:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_secondary_ipv4_dns_address: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Secondary IPv4 DNS Address' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_secondary_ipv4_dns_address (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    guint32 *value_secondary_ipv4_dns_address,
    GError **error);

/**
 * qmi_message_wds_get_current_settings_output_get_umts_granted_qos:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_umts_granted_qos_traffic_class: a placeholder for the output #QmiWdsTrafficClass, or %NULL if not required.
 * @value_umts_granted_qos_max_uplink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_granted_qos_max_downlink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_granted_qos_guaranteed_uplink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_granted_qos_guaranteed_downlink_bitrate: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_granted_qos_qos_delivery_order: a placeholder for the output #QmiWdsDeliveryOrder, or %NULL if not required.
 * @value_umts_granted_qos_maximum_sdu_size: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_granted_qos_sdu_error_ratio: a placeholder for the output #QmiWdsSduErrorRatio, or %NULL if not required.
 * @value_umts_granted_qos_residual_bit_error_ratio: a placeholder for the output #QmiWdsSduResidualBitErrorRatio, or %NULL if not required.
 * @value_umts_granted_qos_delivery_erroneous_sdu: a placeholder for the output #QmiWdsSduErroneousDelivery, or %NULL if not required.
 * @value_umts_granted_qos_transfer_delay: a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_granted_qos_traffic_handling_priority: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Granted QoS' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_wds_get_current_settings_output_get_umts_granted_qos (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    QmiWdsTrafficClass *value_umts_granted_qos_traffic_class,
    guint32 *value_umts_granted_qos_max_uplink_bitrate,
    guint32 *value_umts_granted_qos_max_downlink_bitrate,
    guint32 *value_umts_granted_qos_guaranteed_uplink_bitrate,
    guint32 *value_umts_granted_qos_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder *value_umts_granted_qos_qos_delivery_order,
    guint32 *value_umts_granted_qos_maximum_sdu_size,
    QmiWdsSduErrorRatio *value_umts_granted_qos_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio *value_umts_granted_qos_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery *value_umts_granted_qos_delivery_erroneous_sdu,
    guint32 *value_umts_granted_qos_transfer_delay,
    guint32 *value_umts_granted_qos_traffic_handling_priority,
    GError **error);

/**
 * qmi_message_wds_get_current_settings_output_get_gprs_granted_qos:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_gprs_granted_qos_precedence_class: a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_granted_qos_delay_class: a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_granted_qos_reliability_class: a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_granted_qos_peak_throughput_class: a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_granted_qos_mean_throughput_class: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GPRS Granted QoS' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_gprs_granted_qos (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    guint32 *value_gprs_granted_qos_precedence_class,
    guint32 *value_gprs_granted_qos_delay_class,
    guint32 *value_gprs_granted_qos_reliability_class,
    guint32 *value_gprs_granted_qos_peak_throughput_class,
    guint32 *value_gprs_granted_qos_mean_throughput_class,
    GError **error);

/**
 * qmi_message_wds_get_current_settings_output_get_username:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_username: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Username' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_username (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    const gchar **value_username,
    GError **error);

/**
 * qmi_message_wds_get_current_settings_output_get_authentication:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_authentication: a placeholder for the output #QmiWdsAuthentication, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Authentication' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_authentication (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    QmiWdsAuthentication *value_authentication,
    GError **error);

/**
 * qmi_message_wds_get_current_settings_output_get_ipv4_address:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_ipv4_address: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv4 Address' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_ipv4_address (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    guint32 *value_ipv4_address,
    GError **error);

/**
 * qmi_message_wds_get_current_settings_output_get_profile_id:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_profile_id_profile_type: a placeholder for the output #QmiWdsProfileType, or %NULL if not required.
 * @value_profile_id_profile_index: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Profile ID' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_profile_id (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    QmiWdsProfileType *value_profile_id_profile_type,
    guint8 *value_profile_id_profile_index,
    GError **error);

/**
 * qmi_message_wds_get_current_settings_output_get_ipv4_gateway_address:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_ipv4_gateway_address: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv4 Gateway Address' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_ipv4_gateway_address (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    guint32 *value_ipv4_gateway_address,
    GError **error);

/**
 * qmi_message_wds_get_current_settings_output_get_ipv4_gateway_subnet_mask:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_ipv4_gateway_subnet_mask: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv4 Gateway Subnet Mask' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_ipv4_gateway_subnet_mask (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    guint32 *value_ipv4_gateway_subnet_mask,
    GError **error);

/**
 * qmi_message_wds_get_current_settings_output_get_pcscf_address_using_pco:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_pcscf_address_using_pco: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PCSCF Address Using PCO' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_pcscf_address_using_pco (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    guint8 *value_pcscf_address_using_pco,
    GError **error);

/**
 * qmi_message_wds_get_current_settings_output_get_pcscf_server_address_list:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_pcscf_server_address_list: a placeholder for the output #GArray of #guint32 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PCSCF Server Address List' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_pcscf_server_address_list (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    GArray **value_pcscf_server_address_list,
    GError **error);

/**
 * qmi_message_wds_get_current_settings_output_get_pcscf_domain_name_list:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_pcscf_domain_name_list: a placeholder for the output #GArray of #gchar * elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PCSCF Domain Name List' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_pcscf_domain_name_list (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    GArray **value_pcscf_domain_name_list,
    GError **error);

/**
 * qmi_message_wds_get_current_settings_output_get_ipv6_address:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_ipv6_address_address: a placeholder for the output #GArray of #guint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @value_ipv6_address_prefix_length: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv6 Address' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_ipv6_address (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    GArray **value_ipv6_address_address,
    guint8 *value_ipv6_address_prefix_length,
    GError **error);

/**
 * qmi_message_wds_get_current_settings_output_get_ipv6_gateway_address:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_ipv6_gateway_address_address: a placeholder for the output #GArray of #guint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @value_ipv6_gateway_address_prefix_length: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv6 Gateway Address' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_ipv6_gateway_address (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    GArray **value_ipv6_gateway_address_address,
    guint8 *value_ipv6_gateway_address_prefix_length,
    GError **error);

/**
 * qmi_message_wds_get_current_settings_output_get_ipv6_primary_dns_address:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_ipv6_primary_dns_address: a placeholder for the output #GArray of #guint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv6 Primary DNS Address' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_ipv6_primary_dns_address (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    GArray **value_ipv6_primary_dns_address,
    GError **error);

/**
 * qmi_message_wds_get_current_settings_output_get_ipv6_secondary_dns_address:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_ipv6_secondary_dns_address: a placeholder for the output #GArray of #guint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv6 Secondary DNS Address' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_ipv6_secondary_dns_address (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    GArray **value_ipv6_secondary_dns_address,
    GError **error);

/**
 * qmi_message_wds_get_current_settings_output_get_mtu:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_mtu: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'MTU' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_mtu (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    guint32 *value_mtu,
    GError **error);

/**
 * qmi_message_wds_get_current_settings_output_get_domain_name_list:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_domain_name_list: a placeholder for the output #GArray of #gchar * elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Domain Name List' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_domain_name_list (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    GArray **value_domain_name_list,
    GError **error);

/**
 * qmi_message_wds_get_current_settings_output_get_ip_family:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_ip_family: a placeholder for the output #QmiWdsIpFamily, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IP Family' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_ip_family (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    QmiWdsIpFamily *value_ip_family,
    GError **error);

/**
 * qmi_message_wds_get_current_settings_output_get_imcn_flag:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_imcn_flag: a placeholder for the output #gint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IMCN Flag' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_imcn_flag (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    gint8 *value_imcn_flag,
    GError **error);

/**
 * qmi_message_wds_get_current_settings_output_get_extended_technology_preference:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_extended_technology_preference: a placeholder for the output #QmiWdsExtendedTechnologyPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Extended Technology Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_extended_technology_preference (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    QmiWdsExtendedTechnologyPreference *value_extended_technology_preference,
    GError **error);

/**
 * qmi_message_wds_get_current_settings_output_ref:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWdsGetCurrentSettingsOutput *qmi_message_wds_get_current_settings_output_ref (QmiMessageWdsGetCurrentSettingsOutput *self);

/**
 * qmi_message_wds_get_current_settings_output_unref:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wds_get_current_settings_output_unref (QmiMessageWdsGetCurrentSettingsOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Get Dormancy Status */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageWdsGetDormancyStatusOutput:
 *
 * The #QmiMessageWdsGetDormancyStatusOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageWdsGetDormancyStatusOutput QmiMessageWdsGetDormancyStatusOutput;
GType qmi_message_wds_get_dormancy_status_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GET_DORMANCY_STATUS_OUTPUT (qmi_message_wds_get_dormancy_status_output_get_type ())

/**
 * qmi_message_wds_get_dormancy_status_output_get_result:
 * @self: a QmiMessageWdsGetDormancyStatusOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.14
 */
gboolean qmi_message_wds_get_dormancy_status_output_get_result (
    QmiMessageWdsGetDormancyStatusOutput *self,
    GError **error);

/**
 * qmi_message_wds_get_dormancy_status_output_get_dormancy_status:
 * @self: a #QmiMessageWdsGetDormancyStatusOutput.
 * @value_dormancy_status: a placeholder for the output #QmiWdsDormancyStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Dormancy Status' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_wds_get_dormancy_status_output_get_dormancy_status (
    QmiMessageWdsGetDormancyStatusOutput *self,
    QmiWdsDormancyStatus *value_dormancy_status,
    GError **error);

/**
 * qmi_message_wds_get_dormancy_status_output_ref:
 * @self: a #QmiMessageWdsGetDormancyStatusOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageWdsGetDormancyStatusOutput *qmi_message_wds_get_dormancy_status_output_ref (QmiMessageWdsGetDormancyStatusOutput *self);

/**
 * qmi_message_wds_get_dormancy_status_output_unref:
 * @self: a #QmiMessageWdsGetDormancyStatusOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_wds_get_dormancy_status_output_unref (QmiMessageWdsGetDormancyStatusOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Get Autoconnect Settings */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageWdsGetAutoconnectSettingsOutput:
 *
 * The #QmiMessageWdsGetAutoconnectSettingsOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageWdsGetAutoconnectSettingsOutput QmiMessageWdsGetAutoconnectSettingsOutput;
GType qmi_message_wds_get_autoconnect_settings_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GET_AUTOCONNECT_SETTINGS_OUTPUT (qmi_message_wds_get_autoconnect_settings_output_get_type ())

/**
 * qmi_message_wds_get_autoconnect_settings_output_get_result:
 * @self: a QmiMessageWdsGetAutoconnectSettingsOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.14
 */
gboolean qmi_message_wds_get_autoconnect_settings_output_get_result (
    QmiMessageWdsGetAutoconnectSettingsOutput *self,
    GError **error);

/**
 * qmi_message_wds_get_autoconnect_settings_output_get_status:
 * @self: a #QmiMessageWdsGetAutoconnectSettingsOutput.
 * @value_status: a placeholder for the output #QmiWdsAutoconnectSetting, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Status' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_wds_get_autoconnect_settings_output_get_status (
    QmiMessageWdsGetAutoconnectSettingsOutput *self,
    QmiWdsAutoconnectSetting *value_status,
    GError **error);

/**
 * qmi_message_wds_get_autoconnect_settings_output_get_roaming:
 * @self: a #QmiMessageWdsGetAutoconnectSettingsOutput.
 * @value_roaming: a placeholder for the output #QmiWdsAutoconnectSettingRoaming, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Roaming' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_wds_get_autoconnect_settings_output_get_roaming (
    QmiMessageWdsGetAutoconnectSettingsOutput *self,
    QmiWdsAutoconnectSettingRoaming *value_roaming,
    GError **error);

/**
 * qmi_message_wds_get_autoconnect_settings_output_ref:
 * @self: a #QmiMessageWdsGetAutoconnectSettingsOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageWdsGetAutoconnectSettingsOutput *qmi_message_wds_get_autoconnect_settings_output_ref (QmiMessageWdsGetAutoconnectSettingsOutput *self);

/**
 * qmi_message_wds_get_autoconnect_settings_output_unref:
 * @self: a #QmiMessageWdsGetAutoconnectSettingsOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_wds_get_autoconnect_settings_output_unref (QmiMessageWdsGetAutoconnectSettingsOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Get Data Bearer Technology */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageWdsGetDataBearerTechnologyOutput:
 *
 * The #QmiMessageWdsGetDataBearerTechnologyOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWdsGetDataBearerTechnologyOutput QmiMessageWdsGetDataBearerTechnologyOutput;
GType qmi_message_wds_get_data_bearer_technology_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GET_DATA_BEARER_TECHNOLOGY_OUTPUT (qmi_message_wds_get_data_bearer_technology_output_get_type ())

/**
 * qmi_message_wds_get_data_bearer_technology_output_get_result:
 * @self: a QmiMessageWdsGetDataBearerTechnologyOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_data_bearer_technology_output_get_result (
    QmiMessageWdsGetDataBearerTechnologyOutput *self,
    GError **error);

/**
 * qmi_message_wds_get_data_bearer_technology_output_get_current:
 * @self: a #QmiMessageWdsGetDataBearerTechnologyOutput.
 * @value_current: a placeholder for the output #QmiWdsDataBearerTechnology, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Current' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_data_bearer_technology_output_get_current (
    QmiMessageWdsGetDataBearerTechnologyOutput *self,
    QmiWdsDataBearerTechnology *value_current,
    GError **error);

/**
 * qmi_message_wds_get_data_bearer_technology_output_get_last:
 * @self: a #QmiMessageWdsGetDataBearerTechnologyOutput.
 * @value_last: a placeholder for the output #QmiWdsDataBearerTechnology, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Last' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_data_bearer_technology_output_get_last (
    QmiMessageWdsGetDataBearerTechnologyOutput *self,
    QmiWdsDataBearerTechnology *value_last,
    GError **error);

/**
 * qmi_message_wds_get_data_bearer_technology_output_ref:
 * @self: a #QmiMessageWdsGetDataBearerTechnologyOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWdsGetDataBearerTechnologyOutput *qmi_message_wds_get_data_bearer_technology_output_ref (QmiMessageWdsGetDataBearerTechnologyOutput *self);

/**
 * qmi_message_wds_get_data_bearer_technology_output_unref:
 * @self: a #QmiMessageWdsGetDataBearerTechnologyOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wds_get_data_bearer_technology_output_unref (QmiMessageWdsGetDataBearerTechnologyOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Get Current Data Bearer Technology */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageWdsGetCurrentDataBearerTechnologyOutput:
 *
 * The #QmiMessageWdsGetCurrentDataBearerTechnologyOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWdsGetCurrentDataBearerTechnologyOutput QmiMessageWdsGetCurrentDataBearerTechnologyOutput;
GType qmi_message_wds_get_current_data_bearer_technology_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GET_CURRENT_DATA_BEARER_TECHNOLOGY_OUTPUT (qmi_message_wds_get_current_data_bearer_technology_output_get_type ())

/**
 * qmi_message_wds_get_current_data_bearer_technology_output_get_last:
 * @self: a #QmiMessageWdsGetCurrentDataBearerTechnologyOutput.
 * @value_last_network_type: a placeholder for the output #QmiWdsNetworkType, or %NULL if not required.
 * @value_last_rat_mask: a placeholder for the output #guint32, or %NULL if not required.
 * @value_last_so_mask: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Last' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_data_bearer_technology_output_get_last (
    QmiMessageWdsGetCurrentDataBearerTechnologyOutput *self,
    QmiWdsNetworkType *value_last_network_type,
    guint32 *value_last_rat_mask,
    guint32 *value_last_so_mask,
    GError **error);

/**
 * qmi_message_wds_get_current_data_bearer_technology_output_get_result:
 * @self: a QmiMessageWdsGetCurrentDataBearerTechnologyOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_data_bearer_technology_output_get_result (
    QmiMessageWdsGetCurrentDataBearerTechnologyOutput *self,
    GError **error);

/**
 * qmi_message_wds_get_current_data_bearer_technology_output_get_current:
 * @self: a #QmiMessageWdsGetCurrentDataBearerTechnologyOutput.
 * @value_current_network_type: a placeholder for the output #QmiWdsNetworkType, or %NULL if not required.
 * @value_current_rat_mask: a placeholder for the output #guint32, or %NULL if not required.
 * @value_current_so_mask: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Current' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_data_bearer_technology_output_get_current (
    QmiMessageWdsGetCurrentDataBearerTechnologyOutput *self,
    QmiWdsNetworkType *value_current_network_type,
    guint32 *value_current_rat_mask,
    guint32 *value_current_so_mask,
    GError **error);

/**
 * qmi_message_wds_get_current_data_bearer_technology_output_ref:
 * @self: a #QmiMessageWdsGetCurrentDataBearerTechnologyOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWdsGetCurrentDataBearerTechnologyOutput *qmi_message_wds_get_current_data_bearer_technology_output_ref (QmiMessageWdsGetCurrentDataBearerTechnologyOutput *self);

/**
 * qmi_message_wds_get_current_data_bearer_technology_output_unref:
 * @self: a #QmiMessageWdsGetCurrentDataBearerTechnologyOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wds_get_current_data_bearer_technology_output_unref (QmiMessageWdsGetCurrentDataBearerTechnologyOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Set IP Family */


/* --- Input -- */

/**
 * QmiMessageWdsSetIpFamilyInput:
 *
 * The #QmiMessageWdsSetIpFamilyInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWdsSetIpFamilyInput QmiMessageWdsSetIpFamilyInput;
GType qmi_message_wds_set_ip_family_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_SET_IP_FAMILY_INPUT (qmi_message_wds_set_ip_family_input_get_type ())

/**
 * qmi_message_wds_set_ip_family_input_get_preference:
 * @self: a #QmiMessageWdsSetIpFamilyInput.
 * @value_preference: a placeholder for the output #QmiWdsIpFamily, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Preference' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_set_ip_family_input_get_preference (
    QmiMessageWdsSetIpFamilyInput *self,
    QmiWdsIpFamily *value_preference,
    GError **error);

/**
 * qmi_message_wds_set_ip_family_input_set_preference:
 * @self: a #QmiMessageWdsSetIpFamilyInput.
 * @value_preference: a #QmiWdsIpFamily.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Preference' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_set_ip_family_input_set_preference (
    QmiMessageWdsSetIpFamilyInput *self,
    QmiWdsIpFamily value_preference,
    GError **error);

/**
 * qmi_message_wds_set_ip_family_input_ref:
 * @self: a #QmiMessageWdsSetIpFamilyInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWdsSetIpFamilyInput *qmi_message_wds_set_ip_family_input_ref (QmiMessageWdsSetIpFamilyInput *self);

/**
 * qmi_message_wds_set_ip_family_input_unref:
 * @self: a #QmiMessageWdsSetIpFamilyInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wds_set_ip_family_input_unref (QmiMessageWdsSetIpFamilyInput *self);

/**
 * qmi_message_wds_set_ip_family_input_new:
 *
 * Allocates a new #QmiMessageWdsSetIpFamilyInput.
 *
 * Returns: the newly created #QmiMessageWdsSetIpFamilyInput. The returned value should be freed with qmi_message_wds_set_ip_family_input_unref().
 *
 * Since: 1.0
 */
QmiMessageWdsSetIpFamilyInput *qmi_message_wds_set_ip_family_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWdsSetIpFamilyOutput:
 *
 * The #QmiMessageWdsSetIpFamilyOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWdsSetIpFamilyOutput QmiMessageWdsSetIpFamilyOutput;
GType qmi_message_wds_set_ip_family_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_SET_IP_FAMILY_OUTPUT (qmi_message_wds_set_ip_family_output_get_type ())

/**
 * qmi_message_wds_set_ip_family_output_get_result:
 * @self: a QmiMessageWdsSetIpFamilyOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_set_ip_family_output_get_result (
    QmiMessageWdsSetIpFamilyOutput *self,
    GError **error);

/**
 * qmi_message_wds_set_ip_family_output_ref:
 * @self: a #QmiMessageWdsSetIpFamilyOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWdsSetIpFamilyOutput *qmi_message_wds_set_ip_family_output_ref (QmiMessageWdsSetIpFamilyOutput *self);

/**
 * qmi_message_wds_set_ip_family_output_unref:
 * @self: a #QmiMessageWdsSetIpFamilyOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wds_set_ip_family_output_unref (QmiMessageWdsSetIpFamilyOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Set Autoconnect Settings */


/* --- Input -- */

/**
 * QmiMessageWdsSetAutoconnectSettingsInput:
 *
 * The #QmiMessageWdsSetAutoconnectSettingsInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageWdsSetAutoconnectSettingsInput QmiMessageWdsSetAutoconnectSettingsInput;
GType qmi_message_wds_set_autoconnect_settings_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_SET_AUTOCONNECT_SETTINGS_INPUT (qmi_message_wds_set_autoconnect_settings_input_get_type ())

/**
 * qmi_message_wds_set_autoconnect_settings_input_get_roaming:
 * @self: a #QmiMessageWdsSetAutoconnectSettingsInput.
 * @value_roaming: a placeholder for the output #QmiWdsAutoconnectSettingRoaming, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Roaming' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_wds_set_autoconnect_settings_input_get_roaming (
    QmiMessageWdsSetAutoconnectSettingsInput *self,
    QmiWdsAutoconnectSettingRoaming *value_roaming,
    GError **error);

/**
 * qmi_message_wds_set_autoconnect_settings_input_set_roaming:
 * @self: a #QmiMessageWdsSetAutoconnectSettingsInput.
 * @value_roaming: a #QmiWdsAutoconnectSettingRoaming.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Roaming' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_wds_set_autoconnect_settings_input_set_roaming (
    QmiMessageWdsSetAutoconnectSettingsInput *self,
    QmiWdsAutoconnectSettingRoaming value_roaming,
    GError **error);

/**
 * qmi_message_wds_set_autoconnect_settings_input_get_status:
 * @self: a #QmiMessageWdsSetAutoconnectSettingsInput.
 * @value_status: a placeholder for the output #QmiWdsAutoconnectSetting, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Status' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_wds_set_autoconnect_settings_input_get_status (
    QmiMessageWdsSetAutoconnectSettingsInput *self,
    QmiWdsAutoconnectSetting *value_status,
    GError **error);

/**
 * qmi_message_wds_set_autoconnect_settings_input_set_status:
 * @self: a #QmiMessageWdsSetAutoconnectSettingsInput.
 * @value_status: a #QmiWdsAutoconnectSetting.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Status' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_wds_set_autoconnect_settings_input_set_status (
    QmiMessageWdsSetAutoconnectSettingsInput *self,
    QmiWdsAutoconnectSetting value_status,
    GError **error);

/**
 * qmi_message_wds_set_autoconnect_settings_input_ref:
 * @self: a #QmiMessageWdsSetAutoconnectSettingsInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageWdsSetAutoconnectSettingsInput *qmi_message_wds_set_autoconnect_settings_input_ref (QmiMessageWdsSetAutoconnectSettingsInput *self);

/**
 * qmi_message_wds_set_autoconnect_settings_input_unref:
 * @self: a #QmiMessageWdsSetAutoconnectSettingsInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_wds_set_autoconnect_settings_input_unref (QmiMessageWdsSetAutoconnectSettingsInput *self);

/**
 * qmi_message_wds_set_autoconnect_settings_input_new:
 *
 * Allocates a new #QmiMessageWdsSetAutoconnectSettingsInput.
 *
 * Returns: the newly created #QmiMessageWdsSetAutoconnectSettingsInput. The returned value should be freed with qmi_message_wds_set_autoconnect_settings_input_unref().
 *
 * Since: 1.14
 */
QmiMessageWdsSetAutoconnectSettingsInput *qmi_message_wds_set_autoconnect_settings_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWdsSetAutoconnectSettingsOutput:
 *
 * The #QmiMessageWdsSetAutoconnectSettingsOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageWdsSetAutoconnectSettingsOutput QmiMessageWdsSetAutoconnectSettingsOutput;
GType qmi_message_wds_set_autoconnect_settings_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_SET_AUTOCONNECT_SETTINGS_OUTPUT (qmi_message_wds_set_autoconnect_settings_output_get_type ())

/**
 * qmi_message_wds_set_autoconnect_settings_output_get_result:
 * @self: a QmiMessageWdsSetAutoconnectSettingsOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.14
 */
gboolean qmi_message_wds_set_autoconnect_settings_output_get_result (
    QmiMessageWdsSetAutoconnectSettingsOutput *self,
    GError **error);

/**
 * qmi_message_wds_set_autoconnect_settings_output_ref:
 * @self: a #QmiMessageWdsSetAutoconnectSettingsOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageWdsSetAutoconnectSettingsOutput *qmi_message_wds_set_autoconnect_settings_output_ref (QmiMessageWdsSetAutoconnectSettingsOutput *self);

/**
 * qmi_message_wds_set_autoconnect_settings_output_unref:
 * @self: a #QmiMessageWdsSetAutoconnectSettingsOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_wds_set_autoconnect_settings_output_unref (QmiMessageWdsSetAutoconnectSettingsOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Get PDN Throttle Info */


/* --- Input -- */

/**
 * QmiMessageWdsGetPdnThrottleInfoInput:
 *
 * The #QmiMessageWdsGetPdnThrottleInfoInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageWdsGetPdnThrottleInfoInput QmiMessageWdsGetPdnThrottleInfoInput;
GType qmi_message_wds_get_pdn_throttle_info_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GET_PDN_THROTTLE_INFO_INPUT (qmi_message_wds_get_pdn_throttle_info_input_get_type ())

/**
 * qmi_message_wds_get_pdn_throttle_info_input_get_network_type:
 * @self: a #QmiMessageWdsGetPdnThrottleInfoInput.
 * @value_network_type: a placeholder for the output #QmiWdsDataSystemNetworkType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Network Type' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_wds_get_pdn_throttle_info_input_get_network_type (
    QmiMessageWdsGetPdnThrottleInfoInput *self,
    QmiWdsDataSystemNetworkType *value_network_type,
    GError **error);

/**
 * qmi_message_wds_get_pdn_throttle_info_input_set_network_type:
 * @self: a #QmiMessageWdsGetPdnThrottleInfoInput.
 * @value_network_type: a #QmiWdsDataSystemNetworkType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Network Type' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_wds_get_pdn_throttle_info_input_set_network_type (
    QmiMessageWdsGetPdnThrottleInfoInput *self,
    QmiWdsDataSystemNetworkType value_network_type,
    GError **error);

/**
 * qmi_message_wds_get_pdn_throttle_info_input_ref:
 * @self: a #QmiMessageWdsGetPdnThrottleInfoInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageWdsGetPdnThrottleInfoInput *qmi_message_wds_get_pdn_throttle_info_input_ref (QmiMessageWdsGetPdnThrottleInfoInput *self);

/**
 * qmi_message_wds_get_pdn_throttle_info_input_unref:
 * @self: a #QmiMessageWdsGetPdnThrottleInfoInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_wds_get_pdn_throttle_info_input_unref (QmiMessageWdsGetPdnThrottleInfoInput *self);

/**
 * qmi_message_wds_get_pdn_throttle_info_input_new:
 *
 * Allocates a new #QmiMessageWdsGetPdnThrottleInfoInput.
 *
 * Returns: the newly created #QmiMessageWdsGetPdnThrottleInfoInput. The returned value should be freed with qmi_message_wds_get_pdn_throttle_info_input_unref().
 *
 * Since: 1.14
 */
QmiMessageWdsGetPdnThrottleInfoInput *qmi_message_wds_get_pdn_throttle_info_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWdsGetPdnThrottleInfoOutputInfoElement:
 * @ipv4_throttled: a #gboolean.
 * @ipv6_throttled: a #gboolean.
 * @ipv4_throttle_time_left_ms: a #guint32.
 * @ipv6_throttle_time_left_ms: a #guint32.
 * @apn: a string.
 *
 * A QmiMessageWdsGetPdnThrottleInfoOutputInfoElement struct.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageWdsGetPdnThrottleInfoOutputInfoElement {
    gboolean ipv4_throttled;
    gboolean ipv6_throttled;
    guint32 ipv4_throttle_time_left_ms;
    guint32 ipv6_throttle_time_left_ms;
    gchar *apn;
} QmiMessageWdsGetPdnThrottleInfoOutputInfoElement;

/**
 * QmiMessageWdsGetPdnThrottleInfoOutput:
 *
 * The #QmiMessageWdsGetPdnThrottleInfoOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageWdsGetPdnThrottleInfoOutput QmiMessageWdsGetPdnThrottleInfoOutput;
GType qmi_message_wds_get_pdn_throttle_info_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GET_PDN_THROTTLE_INFO_OUTPUT (qmi_message_wds_get_pdn_throttle_info_output_get_type ())

/**
 * qmi_message_wds_get_pdn_throttle_info_output_get_result:
 * @self: a QmiMessageWdsGetPdnThrottleInfoOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.14
 */
gboolean qmi_message_wds_get_pdn_throttle_info_output_get_result (
    QmiMessageWdsGetPdnThrottleInfoOutput *self,
    GError **error);

/**
 * qmi_message_wds_get_pdn_throttle_info_output_get_info:
 * @self: a #QmiMessageWdsGetPdnThrottleInfoOutput.
 * @value_info: a placeholder for the output #GArray of #QmiMessageWdsGetPdnThrottleInfoOutputInfoElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_wds_get_pdn_throttle_info_output_get_info (
    QmiMessageWdsGetPdnThrottleInfoOutput *self,
    GArray **value_info,
    GError **error);

/**
 * qmi_message_wds_get_pdn_throttle_info_output_ref:
 * @self: a #QmiMessageWdsGetPdnThrottleInfoOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageWdsGetPdnThrottleInfoOutput *qmi_message_wds_get_pdn_throttle_info_output_ref (QmiMessageWdsGetPdnThrottleInfoOutput *self);

/**
 * qmi_message_wds_get_pdn_throttle_info_output_unref:
 * @self: a #QmiMessageWdsGetPdnThrottleInfoOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_wds_get_pdn_throttle_info_output_unref (QmiMessageWdsGetPdnThrottleInfoOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Bind Mux Data Port */


/* --- Input -- */

/**
 * QmiMessageWdsBindMuxDataPortInput:
 *
 * The #QmiMessageWdsBindMuxDataPortInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageWdsBindMuxDataPortInput QmiMessageWdsBindMuxDataPortInput;
GType qmi_message_wds_bind_mux_data_port_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_BIND_MUX_DATA_PORT_INPUT (qmi_message_wds_bind_mux_data_port_input_get_type ())

/**
 * qmi_message_wds_bind_mux_data_port_input_get_client_type:
 * @self: a #QmiMessageWdsBindMuxDataPortInput.
 * @value_client_type: a placeholder for the output #QmiWdsClientType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Client Type' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_bind_mux_data_port_input_get_client_type (
    QmiMessageWdsBindMuxDataPortInput *self,
    QmiWdsClientType *value_client_type,
    GError **error);

/**
 * qmi_message_wds_bind_mux_data_port_input_set_client_type:
 * @self: a #QmiMessageWdsBindMuxDataPortInput.
 * @value_client_type: a #QmiWdsClientType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Client Type' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_bind_mux_data_port_input_set_client_type (
    QmiMessageWdsBindMuxDataPortInput *self,
    QmiWdsClientType value_client_type,
    GError **error);

/**
 * qmi_message_wds_bind_mux_data_port_input_get_mux_id:
 * @self: a #QmiMessageWdsBindMuxDataPortInput.
 * @value_mux_id: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Mux ID' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_bind_mux_data_port_input_get_mux_id (
    QmiMessageWdsBindMuxDataPortInput *self,
    guint8 *value_mux_id,
    GError **error);

/**
 * qmi_message_wds_bind_mux_data_port_input_set_mux_id:
 * @self: a #QmiMessageWdsBindMuxDataPortInput.
 * @value_mux_id: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Mux ID' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_bind_mux_data_port_input_set_mux_id (
    QmiMessageWdsBindMuxDataPortInput *self,
    guint8 value_mux_id,
    GError **error);

/**
 * qmi_message_wds_bind_mux_data_port_input_get_endpoint_info:
 * @self: a #QmiMessageWdsBindMuxDataPortInput.
 * @value_endpoint_info_endpoint_type: a placeholder for the output #QmiDataEndpointType, or %NULL if not required.
 * @value_endpoint_info_interface_number: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Endpoint Info' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_bind_mux_data_port_input_get_endpoint_info (
    QmiMessageWdsBindMuxDataPortInput *self,
    QmiDataEndpointType *value_endpoint_info_endpoint_type,
    guint32 *value_endpoint_info_interface_number,
    GError **error);

/**
 * qmi_message_wds_bind_mux_data_port_input_set_endpoint_info:
 * @self: a #QmiMessageWdsBindMuxDataPortInput.
 * @value_endpoint_info_endpoint_type: a #QmiDataEndpointType.
 * @value_endpoint_info_interface_number: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Endpoint Info' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_bind_mux_data_port_input_set_endpoint_info (
    QmiMessageWdsBindMuxDataPortInput *self,
    QmiDataEndpointType value_endpoint_info_endpoint_type,
    guint32 value_endpoint_info_interface_number,
    GError **error);

/**
 * qmi_message_wds_bind_mux_data_port_input_ref:
 * @self: a #QmiMessageWdsBindMuxDataPortInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessageWdsBindMuxDataPortInput *qmi_message_wds_bind_mux_data_port_input_ref (QmiMessageWdsBindMuxDataPortInput *self);

/**
 * qmi_message_wds_bind_mux_data_port_input_unref:
 * @self: a #QmiMessageWdsBindMuxDataPortInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_wds_bind_mux_data_port_input_unref (QmiMessageWdsBindMuxDataPortInput *self);

/**
 * qmi_message_wds_bind_mux_data_port_input_new:
 *
 * Allocates a new #QmiMessageWdsBindMuxDataPortInput.
 *
 * Returns: the newly created #QmiMessageWdsBindMuxDataPortInput. The returned value should be freed with qmi_message_wds_bind_mux_data_port_input_unref().
 *
 * Since: 1.18
 */
QmiMessageWdsBindMuxDataPortInput *qmi_message_wds_bind_mux_data_port_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWdsBindMuxDataPortOutput:
 *
 * The #QmiMessageWdsBindMuxDataPortOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageWdsBindMuxDataPortOutput QmiMessageWdsBindMuxDataPortOutput;
GType qmi_message_wds_bind_mux_data_port_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_BIND_MUX_DATA_PORT_OUTPUT (qmi_message_wds_bind_mux_data_port_output_get_type ())

/**
 * qmi_message_wds_bind_mux_data_port_output_get_result:
 * @self: a QmiMessageWdsBindMuxDataPortOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_bind_mux_data_port_output_get_result (
    QmiMessageWdsBindMuxDataPortOutput *self,
    GError **error);

/**
 * qmi_message_wds_bind_mux_data_port_output_ref:
 * @self: a #QmiMessageWdsBindMuxDataPortOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessageWdsBindMuxDataPortOutput *qmi_message_wds_bind_mux_data_port_output_ref (QmiMessageWdsBindMuxDataPortOutput *self);

/**
 * qmi_message_wds_bind_mux_data_port_output_unref:
 * @self: a #QmiMessageWdsBindMuxDataPortOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_wds_bind_mux_data_port_output_unref (QmiMessageWdsBindMuxDataPortOutput *self);

/*****************************************************************************/
/* Service-specific printable: WDS */


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *__qmi_message_wds_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix);

#endif


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gboolean __qmi_message_wds_get_version_introduced (
    QmiMessage *self,
    QmiMessageContext *context,
    guint *major,
    guint *minor);

#endif


/*****************************************************************************/
/* CLIENT: QMI Client WDS */

#define QMI_TYPE_CLIENT_WDS            (qmi_client_wds_get_type ())
#define QMI_CLIENT_WDS(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), QMI_TYPE_CLIENT_WDS, QmiClientWds))
#define QMI_CLIENT_WDS_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  QMI_TYPE_CLIENT_WDS, QmiClientWdsClass))
#define QMI_IS_CLIENT_WDS(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), QMI_TYPE_CLIENT_WDS))
#define QMI_IS_CLIENT_WDS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  QMI_TYPE_CLIENT_WDS))
#define QMI_CLIENT_WDS_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  QMI_TYPE_CLIENT_WDS, QmiClientWdsClass))

typedef struct _QmiClientWds QmiClientWds;
typedef struct _QmiClientWdsClass QmiClientWdsClass;

/**
 * QmiClientWds:
 *
 * The #QmiClientWds structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
struct _QmiClientWds {
    /*< private >*/
    QmiClient parent;
    gpointer priv_unused;
};

struct _QmiClientWdsClass {
    /*< private >*/
    QmiClientClass parent;
};

GType qmi_client_wds_get_type (void);


/**
 * qmi_client_wds_reset:
 * @self: a #QmiClientWds.
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
 * You can then call qmi_client_wds_reset_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_wds_reset (
    QmiClientWds *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_reset_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_reset().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_reset().
 *
 * Returns: a #QmiMessageWdsResetOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_reset_output_unref().
 *
 * Since: 1.0
 */
QmiMessageWdsResetOutput *qmi_client_wds_reset_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_set_event_report:
 * @self: a #QmiClientWds.
 * @input: a #QmiMessageWdsSetEventReportInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set Event Report request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_set_event_report_finish() to get the result of the operation.
 *
 * Since: 1.18
 */
void qmi_client_wds_set_event_report (
    QmiClientWds *self,
    QmiMessageWdsSetEventReportInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_set_event_report_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_set_event_report().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_set_event_report().
 *
 * Returns: a #QmiMessageWdsSetEventReportOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_set_event_report_output_unref().
 *
 * Since: 1.18
 */
QmiMessageWdsSetEventReportOutput *qmi_client_wds_set_event_report_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_get_supported_messages:
 * @self: a #QmiClientWds.
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
 * You can then call qmi_client_wds_get_supported_messages_finish() to get the result of the operation.
 *
 * Since: 1.14
 */
void qmi_client_wds_get_supported_messages (
    QmiClientWds *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_get_supported_messages_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_get_supported_messages().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_get_supported_messages().
 *
 * Returns: a #QmiMessageWdsGetSupportedMessagesOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_supported_messages_output_unref().
 *
 * Since: 1.14
 */
QmiMessageWdsGetSupportedMessagesOutput *qmi_client_wds_get_supported_messages_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_start_network:
 * @self: a #QmiClientWds.
 * @input: a #QmiMessageWdsStartNetworkInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Start Network request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_start_network_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_wds_start_network (
    QmiClientWds *self,
    QmiMessageWdsStartNetworkInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_start_network_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_start_network().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_start_network().
 *
 * Returns: a #QmiMessageWdsStartNetworkOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_start_network_output_unref().
 *
 * Since: 1.0
 */
QmiMessageWdsStartNetworkOutput *qmi_client_wds_start_network_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_stop_network:
 * @self: a #QmiClientWds.
 * @input: a #QmiMessageWdsStopNetworkInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Stop Network request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_stop_network_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_wds_stop_network (
    QmiClientWds *self,
    QmiMessageWdsStopNetworkInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_stop_network_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_stop_network().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_stop_network().
 *
 * Returns: a #QmiMessageWdsStopNetworkOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_stop_network_output_unref().
 *
 * Since: 1.0
 */
QmiMessageWdsStopNetworkOutput *qmi_client_wds_stop_network_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_get_packet_service_status:
 * @self: a #QmiClientWds.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Packet Service Status request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_get_packet_service_status_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_wds_get_packet_service_status (
    QmiClientWds *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_get_packet_service_status_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_get_packet_service_status().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_get_packet_service_status().
 *
 * Returns: a #QmiMessageWdsGetPacketServiceStatusOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_packet_service_status_output_unref().
 *
 * Since: 1.0
 */
QmiMessageWdsGetPacketServiceStatusOutput *qmi_client_wds_get_packet_service_status_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_get_channel_rates:
 * @self: a #QmiClientWds.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Channel Rates request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_get_channel_rates_finish() to get the result of the operation.
 *
 * Since: 1.20
 */
void qmi_client_wds_get_channel_rates (
    QmiClientWds *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_get_channel_rates_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_get_channel_rates().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_get_channel_rates().
 *
 * Returns: a #QmiMessageWdsGetChannelRatesOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_channel_rates_output_unref().
 *
 * Since: 1.20
 */
QmiMessageWdsGetChannelRatesOutput *qmi_client_wds_get_channel_rates_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_get_packet_statistics:
 * @self: a #QmiClientWds.
 * @input: a #QmiMessageWdsGetPacketStatisticsInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Packet Statistics request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_get_packet_statistics_finish() to get the result of the operation.
 *
 * Since: 1.6
 */
void qmi_client_wds_get_packet_statistics (
    QmiClientWds *self,
    QmiMessageWdsGetPacketStatisticsInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_get_packet_statistics_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_get_packet_statistics().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_get_packet_statistics().
 *
 * Returns: a #QmiMessageWdsGetPacketStatisticsOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_packet_statistics_output_unref().
 *
 * Since: 1.6
 */
QmiMessageWdsGetPacketStatisticsOutput *qmi_client_wds_get_packet_statistics_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_go_dormant:
 * @self: a #QmiClientWds.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Go Dormant request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_go_dormant_finish() to get the result of the operation.
 *
 * Since: 1.18
 */
void qmi_client_wds_go_dormant (
    QmiClientWds *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_go_dormant_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_go_dormant().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_go_dormant().
 *
 * Returns: a #QmiMessageWdsGoDormantOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_go_dormant_output_unref().
 *
 * Since: 1.18
 */
QmiMessageWdsGoDormantOutput *qmi_client_wds_go_dormant_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_go_active:
 * @self: a #QmiClientWds.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Go Active request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_go_active_finish() to get the result of the operation.
 *
 * Since: 1.18
 */
void qmi_client_wds_go_active (
    QmiClientWds *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_go_active_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_go_active().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_go_active().
 *
 * Returns: a #QmiMessageWdsGoActiveOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_go_active_output_unref().
 *
 * Since: 1.18
 */
QmiMessageWdsGoActiveOutput *qmi_client_wds_go_active_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_create_profile:
 * @self: a #QmiClientWds.
 * @input: a #QmiMessageWdsCreateProfileInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Create Profile request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_create_profile_finish() to get the result of the operation.
 *
 * Since: 1.18
 */
void qmi_client_wds_create_profile (
    QmiClientWds *self,
    QmiMessageWdsCreateProfileInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_create_profile_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_create_profile().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_create_profile().
 *
 * Returns: a #QmiMessageWdsCreateProfileOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_create_profile_output_unref().
 *
 * Since: 1.18
 */
QmiMessageWdsCreateProfileOutput *qmi_client_wds_create_profile_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_modify_profile:
 * @self: a #QmiClientWds.
 * @input: a #QmiMessageWdsModifyProfileInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Modify Profile request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_modify_profile_finish() to get the result of the operation.
 *
 * Since: 1.18
 */
void qmi_client_wds_modify_profile (
    QmiClientWds *self,
    QmiMessageWdsModifyProfileInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_modify_profile_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_modify_profile().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_modify_profile().
 *
 * Returns: a #QmiMessageWdsModifyProfileOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_modify_profile_output_unref().
 *
 * Since: 1.18
 */
QmiMessageWdsModifyProfileOutput *qmi_client_wds_modify_profile_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_delete_profile:
 * @self: a #QmiClientWds.
 * @input: a #QmiMessageWdsDeleteProfileInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Delete Profile request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_delete_profile_finish() to get the result of the operation.
 *
 * Since: 1.18
 */
void qmi_client_wds_delete_profile (
    QmiClientWds *self,
    QmiMessageWdsDeleteProfileInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_delete_profile_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_delete_profile().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_delete_profile().
 *
 * Returns: a #QmiMessageWdsDeleteProfileOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_delete_profile_output_unref().
 *
 * Since: 1.18
 */
QmiMessageWdsDeleteProfileOutput *qmi_client_wds_delete_profile_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_get_profile_list:
 * @self: a #QmiClientWds.
 * @input: a #QmiMessageWdsGetProfileListInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Profile List request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_get_profile_list_finish() to get the result of the operation.
 *
 * Since: 1.8
 */
void qmi_client_wds_get_profile_list (
    QmiClientWds *self,
    QmiMessageWdsGetProfileListInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_get_profile_list_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_get_profile_list().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_get_profile_list().
 *
 * Returns: a #QmiMessageWdsGetProfileListOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_profile_list_output_unref().
 *
 * Since: 1.8
 */
QmiMessageWdsGetProfileListOutput *qmi_client_wds_get_profile_list_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_get_profile_settings:
 * @self: a #QmiClientWds.
 * @input: a #QmiMessageWdsGetProfileSettingsInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Profile Settings request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_get_profile_settings_finish() to get the result of the operation.
 *
 * Since: 1.8
 */
void qmi_client_wds_get_profile_settings (
    QmiClientWds *self,
    QmiMessageWdsGetProfileSettingsInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_get_profile_settings_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_get_profile_settings().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_get_profile_settings().
 *
 * Returns: a #QmiMessageWdsGetProfileSettingsOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_profile_settings_output_unref().
 *
 * Since: 1.8
 */
QmiMessageWdsGetProfileSettingsOutput *qmi_client_wds_get_profile_settings_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_get_default_settings:
 * @self: a #QmiClientWds.
 * @input: a #QmiMessageWdsGetDefaultSettingsInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Default Settings request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_get_default_settings_finish() to get the result of the operation.
 *
 * Since: 1.8
 */
void qmi_client_wds_get_default_settings (
    QmiClientWds *self,
    QmiMessageWdsGetDefaultSettingsInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_get_default_settings_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_get_default_settings().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_get_default_settings().
 *
 * Returns: a #QmiMessageWdsGetDefaultSettingsOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_default_settings_output_unref().
 *
 * Since: 1.8
 */
QmiMessageWdsGetDefaultSettingsOutput *qmi_client_wds_get_default_settings_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_get_current_settings:
 * @self: a #QmiClientWds.
 * @input: a #QmiMessageWdsGetCurrentSettingsInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Current Settings request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_get_current_settings_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_wds_get_current_settings (
    QmiClientWds *self,
    QmiMessageWdsGetCurrentSettingsInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_get_current_settings_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_get_current_settings().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_get_current_settings().
 *
 * Returns: a #QmiMessageWdsGetCurrentSettingsOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_current_settings_output_unref().
 *
 * Since: 1.0
 */
QmiMessageWdsGetCurrentSettingsOutput *qmi_client_wds_get_current_settings_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_get_dormancy_status:
 * @self: a #QmiClientWds.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Dormancy Status request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_get_dormancy_status_finish() to get the result of the operation.
 *
 * Since: 1.14
 */
void qmi_client_wds_get_dormancy_status (
    QmiClientWds *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_get_dormancy_status_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_get_dormancy_status().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_get_dormancy_status().
 *
 * Returns: a #QmiMessageWdsGetDormancyStatusOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_dormancy_status_output_unref().
 *
 * Since: 1.14
 */
QmiMessageWdsGetDormancyStatusOutput *qmi_client_wds_get_dormancy_status_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_get_autoconnect_settings:
 * @self: a #QmiClientWds.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Autoconnect Settings request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_get_autoconnect_settings_finish() to get the result of the operation.
 *
 * Since: 1.14
 */
void qmi_client_wds_get_autoconnect_settings (
    QmiClientWds *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_get_autoconnect_settings_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_get_autoconnect_settings().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_get_autoconnect_settings().
 *
 * Returns: a #QmiMessageWdsGetAutoconnectSettingsOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_autoconnect_settings_output_unref().
 *
 * Since: 1.14
 */
QmiMessageWdsGetAutoconnectSettingsOutput *qmi_client_wds_get_autoconnect_settings_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_get_data_bearer_technology:
 * @self: a #QmiClientWds.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Data Bearer Technology request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_get_data_bearer_technology_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_wds_get_data_bearer_technology (
    QmiClientWds *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_get_data_bearer_technology_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_get_data_bearer_technology().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_get_data_bearer_technology().
 *
 * Returns: a #QmiMessageWdsGetDataBearerTechnologyOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_data_bearer_technology_output_unref().
 *
 * Since: 1.0
 */
QmiMessageWdsGetDataBearerTechnologyOutput *qmi_client_wds_get_data_bearer_technology_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_get_current_data_bearer_technology:
 * @self: a #QmiClientWds.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Current Data Bearer Technology request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_get_current_data_bearer_technology_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_wds_get_current_data_bearer_technology (
    QmiClientWds *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_get_current_data_bearer_technology_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_get_current_data_bearer_technology().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_get_current_data_bearer_technology().
 *
 * Returns: a #QmiMessageWdsGetCurrentDataBearerTechnologyOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_current_data_bearer_technology_output_unref().
 *
 * Since: 1.0
 */
QmiMessageWdsGetCurrentDataBearerTechnologyOutput *qmi_client_wds_get_current_data_bearer_technology_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_set_ip_family:
 * @self: a #QmiClientWds.
 * @input: a #QmiMessageWdsSetIpFamilyInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set IP Family request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_set_ip_family_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_wds_set_ip_family (
    QmiClientWds *self,
    QmiMessageWdsSetIpFamilyInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_set_ip_family_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_set_ip_family().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_set_ip_family().
 *
 * Returns: a #QmiMessageWdsSetIpFamilyOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_set_ip_family_output_unref().
 *
 * Since: 1.0
 */
QmiMessageWdsSetIpFamilyOutput *qmi_client_wds_set_ip_family_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_set_autoconnect_settings:
 * @self: a #QmiClientWds.
 * @input: a #QmiMessageWdsSetAutoconnectSettingsInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set Autoconnect Settings request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_set_autoconnect_settings_finish() to get the result of the operation.
 *
 * Since: 1.14
 */
void qmi_client_wds_set_autoconnect_settings (
    QmiClientWds *self,
    QmiMessageWdsSetAutoconnectSettingsInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_set_autoconnect_settings_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_set_autoconnect_settings().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_set_autoconnect_settings().
 *
 * Returns: a #QmiMessageWdsSetAutoconnectSettingsOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_set_autoconnect_settings_output_unref().
 *
 * Since: 1.14
 */
QmiMessageWdsSetAutoconnectSettingsOutput *qmi_client_wds_set_autoconnect_settings_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_get_pdn_throttle_info:
 * @self: a #QmiClientWds.
 * @input: a #QmiMessageWdsGetPdnThrottleInfoInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get PDN Throttle Info request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_get_pdn_throttle_info_finish() to get the result of the operation.
 *
 * Since: 1.14
 */
void qmi_client_wds_get_pdn_throttle_info (
    QmiClientWds *self,
    QmiMessageWdsGetPdnThrottleInfoInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_get_pdn_throttle_info_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_get_pdn_throttle_info().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_get_pdn_throttle_info().
 *
 * Returns: a #QmiMessageWdsGetPdnThrottleInfoOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_pdn_throttle_info_output_unref().
 *
 * Since: 1.14
 */
QmiMessageWdsGetPdnThrottleInfoOutput *qmi_client_wds_get_pdn_throttle_info_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_bind_mux_data_port:
 * @self: a #QmiClientWds.
 * @input: a #QmiMessageWdsBindMuxDataPortInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Bind Mux Data Port request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_bind_mux_data_port_finish() to get the result of the operation.
 *
 * Since: 1.18
 */
void qmi_client_wds_bind_mux_data_port (
    QmiClientWds *self,
    QmiMessageWdsBindMuxDataPortInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_bind_mux_data_port_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_bind_mux_data_port().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_bind_mux_data_port().
 *
 * Returns: a #QmiMessageWdsBindMuxDataPortOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_bind_mux_data_port_output_unref().
 *
 * Since: 1.18
 */
QmiMessageWdsBindMuxDataPortOutput *qmi_client_wds_bind_mux_data_port_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

G_END_DECLS

#endif /* __LIBQMI_GLIB_QMI_WDS__ */
