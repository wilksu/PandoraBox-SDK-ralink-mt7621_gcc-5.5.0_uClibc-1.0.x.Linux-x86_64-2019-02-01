
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
#include "qmi-enums-wda.h"
#include "qmi-message.h"
#include "qmi-client.h"

#ifndef __LIBQMI_GLIB_QMI_WDA__
#define __LIBQMI_GLIB_QMI_WDA__

G_BEGIN_DECLS


/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDA Get Supported Messages */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageWdaGetSupportedMessagesOutput:
 *
 * The #QmiMessageWdaGetSupportedMessagesOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageWdaGetSupportedMessagesOutput QmiMessageWdaGetSupportedMessagesOutput;
GType qmi_message_wda_get_supported_messages_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDA_GET_SUPPORTED_MESSAGES_OUTPUT (qmi_message_wda_get_supported_messages_output_get_type ())

/**
 * qmi_message_wda_get_supported_messages_output_get_result:
 * @self: a QmiMessageWdaGetSupportedMessagesOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.14
 */
gboolean qmi_message_wda_get_supported_messages_output_get_result (
    QmiMessageWdaGetSupportedMessagesOutput *self,
    GError **error);

/**
 * qmi_message_wda_get_supported_messages_output_get_list:
 * @self: a #QmiMessageWdaGetSupportedMessagesOutput.
 * @value_list: a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'List' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_wda_get_supported_messages_output_get_list (
    QmiMessageWdaGetSupportedMessagesOutput *self,
    GArray **value_list,
    GError **error);

/**
 * qmi_message_wda_get_supported_messages_output_ref:
 * @self: a #QmiMessageWdaGetSupportedMessagesOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageWdaGetSupportedMessagesOutput *qmi_message_wda_get_supported_messages_output_ref (QmiMessageWdaGetSupportedMessagesOutput *self);

/**
 * qmi_message_wda_get_supported_messages_output_unref:
 * @self: a #QmiMessageWdaGetSupportedMessagesOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_wda_get_supported_messages_output_unref (QmiMessageWdaGetSupportedMessagesOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDA Set Data Format */


/* --- Input -- */

/**
 * QmiMessageWdaSetDataFormatInput:
 *
 * The #QmiMessageWdaSetDataFormatInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.10
 */
typedef struct _QmiMessageWdaSetDataFormatInput QmiMessageWdaSetDataFormatInput;
GType qmi_message_wda_set_data_format_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDA_SET_DATA_FORMAT_INPUT (qmi_message_wda_set_data_format_input_get_type ())

/**
 * qmi_message_wda_set_data_format_input_get_endpoint_info:
 * @self: a #QmiMessageWdaSetDataFormatInput.
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
gboolean qmi_message_wda_set_data_format_input_get_endpoint_info (
    QmiMessageWdaSetDataFormatInput *self,
    QmiDataEndpointType *value_endpoint_info_endpoint_type,
    guint32 *value_endpoint_info_interface_number,
    GError **error);

/**
 * qmi_message_wda_set_data_format_input_set_endpoint_info:
 * @self: a #QmiMessageWdaSetDataFormatInput.
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
gboolean qmi_message_wda_set_data_format_input_set_endpoint_info (
    QmiMessageWdaSetDataFormatInput *self,
    QmiDataEndpointType value_endpoint_info_endpoint_type,
    guint32 value_endpoint_info_interface_number,
    GError **error);

/**
 * qmi_message_wda_set_data_format_input_get_downlink_data_aggregation_max_size:
 * @self: a #QmiMessageWdaSetDataFormatInput.
 * @value_downlink_data_aggregation_max_size: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Downlink Data Aggregation Max Size' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_wda_set_data_format_input_get_downlink_data_aggregation_max_size (
    QmiMessageWdaSetDataFormatInput *self,
    guint32 *value_downlink_data_aggregation_max_size,
    GError **error);

/**
 * qmi_message_wda_set_data_format_input_set_downlink_data_aggregation_max_size:
 * @self: a #QmiMessageWdaSetDataFormatInput.
 * @value_downlink_data_aggregation_max_size: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Downlink Data Aggregation Max Size' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_wda_set_data_format_input_set_downlink_data_aggregation_max_size (
    QmiMessageWdaSetDataFormatInput *self,
    guint32 value_downlink_data_aggregation_max_size,
    GError **error);

/**
 * qmi_message_wda_set_data_format_input_get_downlink_data_aggregation_max_datagrams:
 * @self: a #QmiMessageWdaSetDataFormatInput.
 * @value_downlink_data_aggregation_max_datagrams: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Downlink Data Aggregation Max Datagrams' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_wda_set_data_format_input_get_downlink_data_aggregation_max_datagrams (
    QmiMessageWdaSetDataFormatInput *self,
    guint32 *value_downlink_data_aggregation_max_datagrams,
    GError **error);

/**
 * qmi_message_wda_set_data_format_input_set_downlink_data_aggregation_max_datagrams:
 * @self: a #QmiMessageWdaSetDataFormatInput.
 * @value_downlink_data_aggregation_max_datagrams: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Downlink Data Aggregation Max Datagrams' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_wda_set_data_format_input_set_downlink_data_aggregation_max_datagrams (
    QmiMessageWdaSetDataFormatInput *self,
    guint32 value_downlink_data_aggregation_max_datagrams,
    GError **error);

/**
 * qmi_message_wda_set_data_format_input_get_ndp_signature:
 * @self: a #QmiMessageWdaSetDataFormatInput.
 * @value_ndp_signature: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'NDP Signature' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_wda_set_data_format_input_get_ndp_signature (
    QmiMessageWdaSetDataFormatInput *self,
    guint32 *value_ndp_signature,
    GError **error);

/**
 * qmi_message_wda_set_data_format_input_set_ndp_signature:
 * @self: a #QmiMessageWdaSetDataFormatInput.
 * @value_ndp_signature: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'NDP Signature' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_wda_set_data_format_input_set_ndp_signature (
    QmiMessageWdaSetDataFormatInput *self,
    guint32 value_ndp_signature,
    GError **error);

/**
 * qmi_message_wda_set_data_format_input_get_downlink_data_aggregation_protocol:
 * @self: a #QmiMessageWdaSetDataFormatInput.
 * @value_downlink_data_aggregation_protocol: a placeholder for the output #QmiWdaDataAggregationProtocol, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Downlink Data Aggregation Protocol' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_wda_set_data_format_input_get_downlink_data_aggregation_protocol (
    QmiMessageWdaSetDataFormatInput *self,
    QmiWdaDataAggregationProtocol *value_downlink_data_aggregation_protocol,
    GError **error);

/**
 * qmi_message_wda_set_data_format_input_set_downlink_data_aggregation_protocol:
 * @self: a #QmiMessageWdaSetDataFormatInput.
 * @value_downlink_data_aggregation_protocol: a #QmiWdaDataAggregationProtocol.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Downlink Data Aggregation Protocol' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_wda_set_data_format_input_set_downlink_data_aggregation_protocol (
    QmiMessageWdaSetDataFormatInput *self,
    QmiWdaDataAggregationProtocol value_downlink_data_aggregation_protocol,
    GError **error);

/**
 * qmi_message_wda_set_data_format_input_get_uplink_data_aggregation_protocol:
 * @self: a #QmiMessageWdaSetDataFormatInput.
 * @value_uplink_data_aggregation_protocol: a placeholder for the output #QmiWdaDataAggregationProtocol, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Uplink Data Aggregation Protocol' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_wda_set_data_format_input_get_uplink_data_aggregation_protocol (
    QmiMessageWdaSetDataFormatInput *self,
    QmiWdaDataAggregationProtocol *value_uplink_data_aggregation_protocol,
    GError **error);

/**
 * qmi_message_wda_set_data_format_input_set_uplink_data_aggregation_protocol:
 * @self: a #QmiMessageWdaSetDataFormatInput.
 * @value_uplink_data_aggregation_protocol: a #QmiWdaDataAggregationProtocol.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Uplink Data Aggregation Protocol' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_wda_set_data_format_input_set_uplink_data_aggregation_protocol (
    QmiMessageWdaSetDataFormatInput *self,
    QmiWdaDataAggregationProtocol value_uplink_data_aggregation_protocol,
    GError **error);

/**
 * qmi_message_wda_set_data_format_input_get_link_layer_protocol:
 * @self: a #QmiMessageWdaSetDataFormatInput.
 * @value_link_layer_protocol: a placeholder for the output #QmiWdaLinkLayerProtocol, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Link Layer Protocol' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_wda_set_data_format_input_get_link_layer_protocol (
    QmiMessageWdaSetDataFormatInput *self,
    QmiWdaLinkLayerProtocol *value_link_layer_protocol,
    GError **error);

/**
 * qmi_message_wda_set_data_format_input_set_link_layer_protocol:
 * @self: a #QmiMessageWdaSetDataFormatInput.
 * @value_link_layer_protocol: a #QmiWdaLinkLayerProtocol.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Link Layer Protocol' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_wda_set_data_format_input_set_link_layer_protocol (
    QmiMessageWdaSetDataFormatInput *self,
    QmiWdaLinkLayerProtocol value_link_layer_protocol,
    GError **error);

/**
 * qmi_message_wda_set_data_format_input_get_qos_format:
 * @self: a #QmiMessageWdaSetDataFormatInput.
 * @value_qos_format: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'QoS Format' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_wda_set_data_format_input_get_qos_format (
    QmiMessageWdaSetDataFormatInput *self,
    gboolean *value_qos_format,
    GError **error);

/**
 * qmi_message_wda_set_data_format_input_set_qos_format:
 * @self: a #QmiMessageWdaSetDataFormatInput.
 * @value_qos_format: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'QoS Format' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_wda_set_data_format_input_set_qos_format (
    QmiMessageWdaSetDataFormatInput *self,
    gboolean value_qos_format,
    GError **error);

/**
 * qmi_message_wda_set_data_format_input_ref:
 * @self: a #QmiMessageWdaSetDataFormatInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.10
 */
QmiMessageWdaSetDataFormatInput *qmi_message_wda_set_data_format_input_ref (QmiMessageWdaSetDataFormatInput *self);

/**
 * qmi_message_wda_set_data_format_input_unref:
 * @self: a #QmiMessageWdaSetDataFormatInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.10
 */
void qmi_message_wda_set_data_format_input_unref (QmiMessageWdaSetDataFormatInput *self);

/**
 * qmi_message_wda_set_data_format_input_new:
 *
 * Allocates a new #QmiMessageWdaSetDataFormatInput.
 *
 * Returns: the newly created #QmiMessageWdaSetDataFormatInput. The returned value should be freed with qmi_message_wda_set_data_format_input_unref().
 *
 * Since: 1.10
 */
QmiMessageWdaSetDataFormatInput *qmi_message_wda_set_data_format_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWdaSetDataFormatOutput:
 *
 * The #QmiMessageWdaSetDataFormatOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.10
 */
typedef struct _QmiMessageWdaSetDataFormatOutput QmiMessageWdaSetDataFormatOutput;
GType qmi_message_wda_set_data_format_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT (qmi_message_wda_set_data_format_output_get_type ())

/**
 * qmi_message_wda_set_data_format_output_get_result:
 * @self: a QmiMessageWdaSetDataFormatOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.10
 */
gboolean qmi_message_wda_set_data_format_output_get_result (
    QmiMessageWdaSetDataFormatOutput *self,
    GError **error);

/**
 * qmi_message_wda_set_data_format_output_get_qos_format:
 * @self: a #QmiMessageWdaSetDataFormatOutput.
 * @value_qos_format: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'QoS Format' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_wda_set_data_format_output_get_qos_format (
    QmiMessageWdaSetDataFormatOutput *self,
    gboolean *value_qos_format,
    GError **error);

/**
 * qmi_message_wda_set_data_format_output_get_link_layer_protocol:
 * @self: a #QmiMessageWdaSetDataFormatOutput.
 * @value_link_layer_protocol: a placeholder for the output #QmiWdaLinkLayerProtocol, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Link Layer Protocol' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_wda_set_data_format_output_get_link_layer_protocol (
    QmiMessageWdaSetDataFormatOutput *self,
    QmiWdaLinkLayerProtocol *value_link_layer_protocol,
    GError **error);

/**
 * qmi_message_wda_set_data_format_output_get_uplink_data_aggregation_protocol:
 * @self: a #QmiMessageWdaSetDataFormatOutput.
 * @value_uplink_data_aggregation_protocol: a placeholder for the output #QmiWdaDataAggregationProtocol, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Uplink Data Aggregation Protocol' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_wda_set_data_format_output_get_uplink_data_aggregation_protocol (
    QmiMessageWdaSetDataFormatOutput *self,
    QmiWdaDataAggregationProtocol *value_uplink_data_aggregation_protocol,
    GError **error);

/**
 * qmi_message_wda_set_data_format_output_get_downlink_data_aggregation_protocol:
 * @self: a #QmiMessageWdaSetDataFormatOutput.
 * @value_downlink_data_aggregation_protocol: a placeholder for the output #QmiWdaDataAggregationProtocol, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Downlink Data Aggregation Protocol' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_wda_set_data_format_output_get_downlink_data_aggregation_protocol (
    QmiMessageWdaSetDataFormatOutput *self,
    QmiWdaDataAggregationProtocol *value_downlink_data_aggregation_protocol,
    GError **error);

/**
 * qmi_message_wda_set_data_format_output_get_ndp_signature:
 * @self: a #QmiMessageWdaSetDataFormatOutput.
 * @value_ndp_signature: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'NDP Signature' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_wda_set_data_format_output_get_ndp_signature (
    QmiMessageWdaSetDataFormatOutput *self,
    guint32 *value_ndp_signature,
    GError **error);

/**
 * qmi_message_wda_set_data_format_output_get_downlink_data_aggregation_max_datagrams:
 * @self: a #QmiMessageWdaSetDataFormatOutput.
 * @value_downlink_data_aggregation_max_datagrams: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Downlink Data Aggregation Max Datagrams' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_wda_set_data_format_output_get_downlink_data_aggregation_max_datagrams (
    QmiMessageWdaSetDataFormatOutput *self,
    guint32 *value_downlink_data_aggregation_max_datagrams,
    GError **error);

/**
 * qmi_message_wda_set_data_format_output_get_downlink_data_aggregation_max_size:
 * @self: a #QmiMessageWdaSetDataFormatOutput.
 * @value_downlink_data_aggregation_max_size: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Downlink Data Aggregation Max Size' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_wda_set_data_format_output_get_downlink_data_aggregation_max_size (
    QmiMessageWdaSetDataFormatOutput *self,
    guint32 *value_downlink_data_aggregation_max_size,
    GError **error);

/**
 * qmi_message_wda_set_data_format_output_ref:
 * @self: a #QmiMessageWdaSetDataFormatOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.10
 */
QmiMessageWdaSetDataFormatOutput *qmi_message_wda_set_data_format_output_ref (QmiMessageWdaSetDataFormatOutput *self);

/**
 * qmi_message_wda_set_data_format_output_unref:
 * @self: a #QmiMessageWdaSetDataFormatOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.10
 */
void qmi_message_wda_set_data_format_output_unref (QmiMessageWdaSetDataFormatOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDA Get Data Format */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageWdaGetDataFormatOutput:
 *
 * The #QmiMessageWdaGetDataFormatOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.10
 */
typedef struct _QmiMessageWdaGetDataFormatOutput QmiMessageWdaGetDataFormatOutput;
GType qmi_message_wda_get_data_format_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT (qmi_message_wda_get_data_format_output_get_type ())

/**
 * qmi_message_wda_get_data_format_output_get_result:
 * @self: a QmiMessageWdaGetDataFormatOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.10
 */
gboolean qmi_message_wda_get_data_format_output_get_result (
    QmiMessageWdaGetDataFormatOutput *self,
    GError **error);

/**
 * qmi_message_wda_get_data_format_output_get_qos_format:
 * @self: a #QmiMessageWdaGetDataFormatOutput.
 * @value_qos_format: a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'QoS Format' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_wda_get_data_format_output_get_qos_format (
    QmiMessageWdaGetDataFormatOutput *self,
    gboolean *value_qos_format,
    GError **error);

/**
 * qmi_message_wda_get_data_format_output_get_link_layer_protocol:
 * @self: a #QmiMessageWdaGetDataFormatOutput.
 * @value_link_layer_protocol: a placeholder for the output #QmiWdaLinkLayerProtocol, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Link Layer Protocol' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_wda_get_data_format_output_get_link_layer_protocol (
    QmiMessageWdaGetDataFormatOutput *self,
    QmiWdaLinkLayerProtocol *value_link_layer_protocol,
    GError **error);

/**
 * qmi_message_wda_get_data_format_output_get_uplink_data_aggregation_protocol:
 * @self: a #QmiMessageWdaGetDataFormatOutput.
 * @value_uplink_data_aggregation_protocol: a placeholder for the output #QmiWdaDataAggregationProtocol, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Uplink Data Aggregation Protocol' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_wda_get_data_format_output_get_uplink_data_aggregation_protocol (
    QmiMessageWdaGetDataFormatOutput *self,
    QmiWdaDataAggregationProtocol *value_uplink_data_aggregation_protocol,
    GError **error);

/**
 * qmi_message_wda_get_data_format_output_get_downlink_data_aggregation_protocol:
 * @self: a #QmiMessageWdaGetDataFormatOutput.
 * @value_downlink_data_aggregation_protocol: a placeholder for the output #QmiWdaDataAggregationProtocol, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Downlink Data Aggregation Protocol' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_wda_get_data_format_output_get_downlink_data_aggregation_protocol (
    QmiMessageWdaGetDataFormatOutput *self,
    QmiWdaDataAggregationProtocol *value_downlink_data_aggregation_protocol,
    GError **error);

/**
 * qmi_message_wda_get_data_format_output_get_ndp_signature:
 * @self: a #QmiMessageWdaGetDataFormatOutput.
 * @value_ndp_signature: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'NDP Signature' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_wda_get_data_format_output_get_ndp_signature (
    QmiMessageWdaGetDataFormatOutput *self,
    guint32 *value_ndp_signature,
    GError **error);

/**
 * qmi_message_wda_get_data_format_output_get_uplink_data_aggregation_max_size:
 * @self: a #QmiMessageWdaGetDataFormatOutput.
 * @value_uplink_data_aggregation_max_size: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Uplink Data Aggregation Max Size' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_wda_get_data_format_output_get_uplink_data_aggregation_max_size (
    QmiMessageWdaGetDataFormatOutput *self,
    guint32 *value_uplink_data_aggregation_max_size,
    GError **error);

/**
 * qmi_message_wda_get_data_format_output_get_downlink_data_aggregation_max_size:
 * @self: a #QmiMessageWdaGetDataFormatOutput.
 * @value_downlink_data_aggregation_max_size: a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Downlink Data Aggregation Max Size' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_wda_get_data_format_output_get_downlink_data_aggregation_max_size (
    QmiMessageWdaGetDataFormatOutput *self,
    guint32 *value_downlink_data_aggregation_max_size,
    GError **error);

/**
 * qmi_message_wda_get_data_format_output_ref:
 * @self: a #QmiMessageWdaGetDataFormatOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.10
 */
QmiMessageWdaGetDataFormatOutput *qmi_message_wda_get_data_format_output_ref (QmiMessageWdaGetDataFormatOutput *self);

/**
 * qmi_message_wda_get_data_format_output_unref:
 * @self: a #QmiMessageWdaGetDataFormatOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.10
 */
void qmi_message_wda_get_data_format_output_unref (QmiMessageWdaGetDataFormatOutput *self);

/*****************************************************************************/
/* Service-specific printable: WDA */


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *__qmi_message_wda_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix);

#endif


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gboolean __qmi_message_wda_get_version_introduced (
    QmiMessage *self,
    QmiMessageContext *context,
    guint *major,
    guint *minor);

#endif


/*****************************************************************************/
/* CLIENT: QMI Client WDA */

#define QMI_TYPE_CLIENT_WDA            (qmi_client_wda_get_type ())
#define QMI_CLIENT_WDA(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), QMI_TYPE_CLIENT_WDA, QmiClientWda))
#define QMI_CLIENT_WDA_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  QMI_TYPE_CLIENT_WDA, QmiClientWdaClass))
#define QMI_IS_CLIENT_WDA(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), QMI_TYPE_CLIENT_WDA))
#define QMI_IS_CLIENT_WDA_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  QMI_TYPE_CLIENT_WDA))
#define QMI_CLIENT_WDA_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  QMI_TYPE_CLIENT_WDA, QmiClientWdaClass))

typedef struct _QmiClientWda QmiClientWda;
typedef struct _QmiClientWdaClass QmiClientWdaClass;

/**
 * QmiClientWda:
 *
 * The #QmiClientWda structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.10
 */
struct _QmiClientWda {
    /*< private >*/
    QmiClient parent;
    gpointer priv_unused;
};

struct _QmiClientWdaClass {
    /*< private >*/
    QmiClientClass parent;
};

GType qmi_client_wda_get_type (void);


/**
 * qmi_client_wda_get_supported_messages:
 * @self: a #QmiClientWda.
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
 * You can then call qmi_client_wda_get_supported_messages_finish() to get the result of the operation.
 *
 * Since: 1.14
 */
void qmi_client_wda_get_supported_messages (
    QmiClientWda *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wda_get_supported_messages_finish:
 * @self: a #QmiClientWda.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wda_get_supported_messages().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wda_get_supported_messages().
 *
 * Returns: a #QmiMessageWdaGetSupportedMessagesOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wda_get_supported_messages_output_unref().
 *
 * Since: 1.14
 */
QmiMessageWdaGetSupportedMessagesOutput *qmi_client_wda_get_supported_messages_finish (
    QmiClientWda *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wda_set_data_format:
 * @self: a #QmiClientWda.
 * @input: a #QmiMessageWdaSetDataFormatInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set Data Format request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wda_set_data_format_finish() to get the result of the operation.
 *
 * Since: 1.10
 */
void qmi_client_wda_set_data_format (
    QmiClientWda *self,
    QmiMessageWdaSetDataFormatInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wda_set_data_format_finish:
 * @self: a #QmiClientWda.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wda_set_data_format().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wda_set_data_format().
 *
 * Returns: a #QmiMessageWdaSetDataFormatOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wda_set_data_format_output_unref().
 *
 * Since: 1.10
 */
QmiMessageWdaSetDataFormatOutput *qmi_client_wda_set_data_format_finish (
    QmiClientWda *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wda_get_data_format:
 * @self: a #QmiClientWda.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Data Format request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wda_get_data_format_finish() to get the result of the operation.
 *
 * Since: 1.10
 */
void qmi_client_wda_get_data_format (
    QmiClientWda *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wda_get_data_format_finish:
 * @self: a #QmiClientWda.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wda_get_data_format().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wda_get_data_format().
 *
 * Returns: a #QmiMessageWdaGetDataFormatOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wda_get_data_format_output_unref().
 *
 * Since: 1.10
 */
QmiMessageWdaGetDataFormatOutput *qmi_client_wda_get_data_format_finish (
    QmiClientWda *self,
    GAsyncResult *res,
    GError **error);

G_END_DECLS

#endif /* __LIBQMI_GLIB_QMI_WDA__ */
