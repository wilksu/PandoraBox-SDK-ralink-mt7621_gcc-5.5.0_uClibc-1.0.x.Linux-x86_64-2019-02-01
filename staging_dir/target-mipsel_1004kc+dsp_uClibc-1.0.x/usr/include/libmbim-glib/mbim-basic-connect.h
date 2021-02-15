
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

#ifndef __LIBMBIM_GLIB_MBIM_BASIC_CONNECT__
#define __LIBMBIM_GLIB_MBIM_BASIC_CONNECT__

G_BEGIN_DECLS

/*****************************************************************************/
/* Struct: MbimPinDesc */

/**
 * MbimPinDesc:
 * @pin_mode: a #guint32.
 * @pin_format: a #guint32.
 * @pin_length_min: a #guint32.
 * @pin_length_max: a #guint32.
 */
typedef struct {
    guint32 pin_mode;
    guint32 pin_format;
    guint32 pin_length_min;
    guint32 pin_length_max;
} MbimPinDesc;

void mbim_pin_desc_free (MbimPinDesc *var);

/*****************************************************************************/
/* Struct: MbimProvider */

/**
 * MbimProvider:
 * @provider_id: a string.
 * @provider_state: a #guint32.
 * @provider_name: a string.
 * @cellular_class: a #guint32.
 * @rssi: a #guint32.
 * @error_rate: a #guint32.
 */
typedef struct {
    gchar *provider_id;
    guint32 provider_state;
    gchar *provider_name;
    guint32 cellular_class;
    guint32 rssi;
    guint32 error_rate;
} MbimProvider;

void mbim_provider_free (MbimProvider *var);

void mbim_provider_array_free (MbimProvider **array);

/*****************************************************************************/
/* Struct: MbimProvisionedContextElement */

/**
 * MbimProvisionedContextElement:
 * @context_id: a #guint32.
 * @context_type: a #MbimUuid.
 * @access_string: a string.
 * @user_name: a string.
 * @password: a string.
 * @compression: a #guint32.
 * @auth_protocol: a #guint32.
 */
typedef struct {
    guint32 context_id;
    MbimUuid context_type;
    gchar *access_string;
    gchar *user_name;
    gchar *password;
    guint32 compression;
    guint32 auth_protocol;
} MbimProvisionedContextElement;

void mbim_provisioned_context_element_array_free (MbimProvisionedContextElement **array);

/*****************************************************************************/
/* Struct: MbimIPv4Element */

/**
 * MbimIPv4Element:
 * @on_link_prefix_length: a #guint32.
 * @ipv4_address: a #MbimIPv4.
 */
typedef struct {
    guint32 on_link_prefix_length;
    MbimIPv4 ipv4_address;
} MbimIPv4Element;

void mbim_ipv4_element_array_free (MbimIPv4Element **array);

/*****************************************************************************/
/* Struct: MbimIPv6Element */

/**
 * MbimIPv6Element:
 * @on_link_prefix_length: a #guint32.
 * @ipv6_address: a #MbimIPv6
 */
typedef struct {
    guint32 on_link_prefix_length;
    MbimIPv6 ipv6_address;
} MbimIPv6Element;

void mbim_ipv6_element_array_free (MbimIPv6Element **array);

/*****************************************************************************/
/* Struct: MbimDeviceServiceElement */

/**
 * MbimDeviceServiceElement:
 * @device_service_id: a #MbimUuid.
 * @dss_payload: a #guint32.
 * @max_dss_instances: a #guint32.
 * @cids_count: a #guint32.
 * @cids: an array of #guint32 values.
 */
typedef struct {
    MbimUuid device_service_id;
    guint32 dss_payload;
    guint32 max_dss_instances;
    guint32 cids_count;
    guint32 *cids;
} MbimDeviceServiceElement;

void mbim_device_service_element_array_free (MbimDeviceServiceElement **array);

/*****************************************************************************/
/* Struct: MbimEventEntry */

/**
 * MbimEventEntry:
 * @device_service_id: a #MbimUuid.
 * @cids_count: a #guint32.
 * @cids: an array of #guint32 values.
 */
typedef struct {
    MbimUuid device_service_id;
    guint32 cids_count;
    guint32 *cids;
} MbimEventEntry;

void mbim_event_entry_array_free (MbimEventEntry **array);

/*****************************************************************************/
/* Struct: MbimPacketFilter */

/**
 * MbimPacketFilter:
 * @filter_size: a #guint32.
 * @packet_filter: an array of #guint8 values.
 * @packet_mask: an array of #guint8 values.
 */
typedef struct {
    guint32 filter_size;
    guint8 *packet_filter;
    guint8 *packet_mask;
} MbimPacketFilter;

void mbim_packet_filter_array_free (MbimPacketFilter **array);

/*****************************************************************************/
/* Message (Query): MBIM Message Device Caps */

MbimMessage *mbim_message_device_caps_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Device Caps */

gboolean mbim_message_device_caps_response_parse (
    const MbimMessage *message,
    MbimDeviceType *device_type,
    MbimCellularClass *cellular_class,
    MbimVoiceClass *voice_class,
    MbimSimClass *sim_class,
    MbimDataClass *data_class,
    MbimSmsCaps *sms_caps,
    MbimCtrlCaps *control_caps,
    guint32 *max_sessions,
    gchar **custom_data_class,
    gchar **device_id,
    gchar **firmware_info,
    gchar **hardware_info,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Subscriber Ready Status */

MbimMessage *mbim_message_subscriber_ready_status_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Subscriber Ready Status */

gboolean mbim_message_subscriber_ready_status_response_parse (
    const MbimMessage *message,
    MbimSubscriberReadyState *ready_state,
    gchar **subscriber_id,
    gchar **sim_icc_id,
    MbimReadyInfoFlag *ready_info,
    guint32 *telephone_numbers_count,
    gchar ***telephone_numbers,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message Subscriber Ready Status */

gboolean mbim_message_subscriber_ready_status_notification_parse (
    const MbimMessage *message,
    MbimSubscriberReadyState *ready_state,
    gchar **subscriber_id,
    gchar **sim_icc_id,
    MbimReadyInfoFlag *ready_info,
    guint32 *telephone_numbers_count,
    gchar ***telephone_numbers,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Radio State */

MbimMessage *mbim_message_radio_state_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message Radio State */

MbimMessage *mbim_message_radio_state_set_new (
    MbimRadioSwitchState radio_state,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Radio State */

gboolean mbim_message_radio_state_response_parse (
    const MbimMessage *message,
    MbimRadioSwitchState *hw_radio_state,
    MbimRadioSwitchState *sw_radio_state,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message Radio State */

gboolean mbim_message_radio_state_notification_parse (
    const MbimMessage *message,
    MbimRadioSwitchState *hw_radio_state,
    MbimRadioSwitchState *sw_radio_state,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Pin */

MbimMessage *mbim_message_pin_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message Pin */

MbimMessage *mbim_message_pin_set_new (
    MbimPinType pin_type,
    MbimPinOperation pin_operation,
    const gchar *pin,
    const gchar *new_pin,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Pin */

gboolean mbim_message_pin_response_parse (
    const MbimMessage *message,
    MbimPinType *pin_type,
    MbimPinState *pin_state,
    guint32 *remaining_attempts,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Pin List */

MbimMessage *mbim_message_pin_list_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Pin List */

gboolean mbim_message_pin_list_response_parse (
    const MbimMessage *message,
    MbimPinDesc **pin_desc_pin1,
    MbimPinDesc **pin_desc_pin2,
    MbimPinDesc **pin_desc_device_sim_pin,
    MbimPinDesc **pin_desc_device_first_sim_pin,
    MbimPinDesc **pin_desc_network_pin,
    MbimPinDesc **pin_desc_network_subset_pin,
    MbimPinDesc **pin_desc_service_provider_pin,
    MbimPinDesc **pin_desc_corporate_pin,
    MbimPinDesc **pin_desc_subsidy_lock,
    MbimPinDesc **pin_desc_custom,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Home Provider */

MbimMessage *mbim_message_home_provider_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message Home Provider */

MbimMessage *mbim_message_home_provider_set_new (
    const MbimProvider *provider,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Home Provider */

gboolean mbim_message_home_provider_response_parse (
    const MbimMessage *message,
    MbimProvider **provider,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Preferred Providers */

MbimMessage *mbim_message_preferred_providers_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message Preferred Providers */

MbimMessage *mbim_message_preferred_providers_set_new (
    guint32 providers_count,
    const MbimProvider *const *providers,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Preferred Providers */

gboolean mbim_message_preferred_providers_response_parse (
    const MbimMessage *message,
    guint32 *providers_count,
    MbimProvider ***providers,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message Preferred Providers */

gboolean mbim_message_preferred_providers_notification_parse (
    const MbimMessage *message,
    guint32 *providers_count,
    MbimProvider ***providers,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Visible Providers */

MbimMessage *mbim_message_visible_providers_query_new (
    MbimVisibleProvidersAction action,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Visible Providers */

gboolean mbim_message_visible_providers_response_parse (
    const MbimMessage *message,
    guint32 *providers_count,
    MbimProvider ***providers,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Register State */

MbimMessage *mbim_message_register_state_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message Register State */

MbimMessage *mbim_message_register_state_set_new (
    const gchar *provider_id,
    MbimRegisterAction register_action,
    MbimDataClass data_class,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Register State */

gboolean mbim_message_register_state_response_parse (
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

/*****************************************************************************/
/* Message (Notification): MBIM Message Register State */

gboolean mbim_message_register_state_notification_parse (
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

/*****************************************************************************/
/* Message (Query): MBIM Message Signal State */

MbimMessage *mbim_message_signal_state_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message Signal State */

MbimMessage *mbim_message_signal_state_set_new (
    guint32 signal_strength_interval,
    guint32 rssi_threshold,
    guint32 error_rate_threshold,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Signal State */

gboolean mbim_message_signal_state_response_parse (
    const MbimMessage *message,
    guint32 *rssi,
    guint32 *error_rate,
    guint32 *signal_strength_interval,
    guint32 *rssi_threshold,
    guint32 *error_rate_threshold,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message Signal State */

gboolean mbim_message_signal_state_notification_parse (
    const MbimMessage *message,
    guint32 *rssi,
    guint32 *error_rate,
    guint32 *signal_strength_interval,
    guint32 *rssi_threshold,
    guint32 *error_rate_threshold,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Packet Service */

MbimMessage *mbim_message_packet_service_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message Packet Service */

MbimMessage *mbim_message_packet_service_set_new (
    MbimPacketServiceAction packet_service_action,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Packet Service */

gboolean mbim_message_packet_service_response_parse (
    const MbimMessage *message,
    guint32 *nw_error,
    MbimPacketServiceState *packet_service_state,
    MbimDataClass *highest_available_data_class,
    guint64 *uplink_speed,
    guint64 *downlink_speed,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message Packet Service */

gboolean mbim_message_packet_service_notification_parse (
    const MbimMessage *message,
    guint32 *nw_error,
    MbimPacketServiceState *packet_service_state,
    MbimDataClass *highest_available_data_class,
    guint64 *uplink_speed,
    guint64 *downlink_speed,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Connect */

MbimMessage *mbim_message_connect_query_new (
    guint32 session_id,
    MbimActivationState activation_state,
    MbimVoiceCallState voice_call_state,
    MbimContextIpType ip_type,
    const MbimUuid *context_type,
    guint32 nw_error,
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message Connect */

MbimMessage *mbim_message_connect_set_new (
    guint32 session_id,
    MbimActivationCommand activation_command,
    const gchar *access_string,
    const gchar *user_name,
    const gchar *password,
    MbimCompression compression,
    MbimAuthProtocol auth_protocol,
    MbimContextIpType ip_type,
    const MbimUuid *context_type,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Connect */

gboolean mbim_message_connect_response_parse (
    const MbimMessage *message,
    guint32 *session_id,
    MbimActivationState *activation_state,
    MbimVoiceCallState *voice_call_state,
    MbimContextIpType *ip_type,
    const MbimUuid **context_type,
    guint32 *nw_error,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message Connect */

gboolean mbim_message_connect_notification_parse (
    const MbimMessage *message,
    guint32 *session_id,
    MbimActivationState *activation_state,
    MbimVoiceCallState *voice_call_state,
    MbimContextIpType *ip_type,
    const MbimUuid **context_type,
    guint32 *nw_error,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Provisioned Contexts */

MbimMessage *mbim_message_provisioned_contexts_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message Provisioned Contexts */

MbimMessage *mbim_message_provisioned_contexts_set_new (
    guint32 context_id,
    const MbimUuid *context_type,
    const gchar *access_string,
    const gchar *user_name,
    const gchar *password,
    MbimCompression compression,
    MbimAuthProtocol auth_protocol,
    const gchar *provider_id,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Provisioned Contexts */

gboolean mbim_message_provisioned_contexts_response_parse (
    const MbimMessage *message,
    guint32 *provisioned_contexts_count,
    MbimProvisionedContextElement ***provisioned_contexts,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message Provisioned Contexts */

gboolean mbim_message_provisioned_contexts_notification_parse (
    const MbimMessage *message,
    guint32 *provisioned_contexts_count,
    MbimProvisionedContextElement ***provisioned_contexts,
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message Service Activation */

MbimMessage *mbim_message_service_activation_set_new (
    const guint32 buffer_size,
    const guint8 *buffer,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Service Activation */

gboolean mbim_message_service_activation_response_parse (
    const MbimMessage *message,
    MbimNwError *nw_error,
    guint32 *buffer_size,
    const guint8 **buffer,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message IP Configuration */

MbimMessage *mbim_message_ip_configuration_query_new (
    guint32 session_id,
    MbimIPConfigurationAvailableFlag ipv4_configuration_available,
    MbimIPConfigurationAvailableFlag ipv6_configuration_available,
    guint32 ipv4_address_count,
    const MbimIPv4Element *const *ipv4_address,
    guint32 ipv6_address_count,
    const MbimIPv6Element *const *ipv6_address,
    const MbimIPv4 *ipv4_gateway,
    const MbimIPv6 *ipv6_gateway,
    guint32 ipv4_dns_server_count,
    const MbimIPv4 *ipv4_dns_server,
    guint32 ipv6_dns_server_count,
    const MbimIPv6 *ipv6_dns_server,
    guint32 ipv4_mtu,
    guint32 ipv6_mtu,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message IP Configuration */

gboolean mbim_message_ip_configuration_response_parse (
    const MbimMessage *message,
    guint32 *session_id,
    MbimIPConfigurationAvailableFlag *ipv4_configuration_available,
    MbimIPConfigurationAvailableFlag *ipv6_configuration_available,
    guint32 *ipv4_address_count,
    MbimIPv4Element ***ipv4_address,
    guint32 *ipv6_address_count,
    MbimIPv6Element ***ipv6_address,
    const MbimIPv4 **ipv4_gateway,
    const MbimIPv6 **ipv6_gateway,
    guint32 *ipv4_dns_server_count,
    MbimIPv4 **ipv4_dns_server,
    guint32 *ipv6_dns_server_count,
    MbimIPv6 **ipv6_dns_server,
    guint32 *ipv4_mtu,
    guint32 *ipv6_mtu,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message IP Configuration */

gboolean mbim_message_ip_configuration_notification_parse (
    const MbimMessage *message,
    guint32 *session_id,
    MbimIPConfigurationAvailableFlag *ipv4_configuration_available,
    MbimIPConfigurationAvailableFlag *ipv6_configuration_available,
    guint32 *ipv4_address_count,
    MbimIPv4Element ***ipv4_address,
    guint32 *ipv6_address_count,
    MbimIPv6Element ***ipv6_address,
    const MbimIPv4 **ipv4_gateway,
    const MbimIPv6 **ipv6_gateway,
    guint32 *ipv4_dns_server_count,
    MbimIPv4 **ipv4_dns_server,
    guint32 *ipv6_dns_server_count,
    MbimIPv6 **ipv6_dns_server,
    guint32 *ipv4_mtu,
    guint32 *ipv6_mtu,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Device Services */

MbimMessage *mbim_message_device_services_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Device Services */

gboolean mbim_message_device_services_response_parse (
    const MbimMessage *message,
    guint32 *device_services_count,
    guint32 *max_dss_sessions,
    MbimDeviceServiceElement ***device_services,
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message Device Service Subscribe List */

MbimMessage *mbim_message_device_service_subscribe_list_set_new (
    guint32 events_count,
    const MbimEventEntry *const *events,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Device Service Subscribe List */

gboolean mbim_message_device_service_subscribe_list_response_parse (
    const MbimMessage *message,
    guint32 *events_count,
    MbimEventEntry ***events,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Packet Statistics */

MbimMessage *mbim_message_packet_statistics_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Packet Statistics */

gboolean mbim_message_packet_statistics_response_parse (
    const MbimMessage *message,
    guint32 *in_discards,
    guint32 *in_errors,
    guint64 *in_octets,
    guint64 *in_packets,
    guint64 *out_octets,
    guint64 *out_packets,
    guint32 *out_errors,
    guint32 *out_discards,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Network Idle Hint */

MbimMessage *mbim_message_network_idle_hint_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message Network Idle Hint */

MbimMessage *mbim_message_network_idle_hint_set_new (
    MbimNetworkIdleHintState state,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Network Idle Hint */

gboolean mbim_message_network_idle_hint_response_parse (
    const MbimMessage *message,
    MbimNetworkIdleHintState *state,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Emergency Mode */

MbimMessage *mbim_message_emergency_mode_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message Emergency Mode */

MbimMessage *mbim_message_emergency_mode_set_new (
    MbimEmergencyModeState state,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Emergency Mode */

gboolean mbim_message_emergency_mode_response_parse (
    const MbimMessage *message,
    MbimEmergencyModeState *state,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message Emergency Mode */

gboolean mbim_message_emergency_mode_notification_parse (
    const MbimMessage *message,
    MbimEmergencyModeState *state,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message IP Packet Filters */

MbimMessage *mbim_message_ip_packet_filters_query_new (
    guint32 session_id,
    guint32 packet_filters_count,
    const MbimPacketFilter *const *packet_filters,
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message IP Packet Filters */

MbimMessage *mbim_message_ip_packet_filters_set_new (
    guint32 session_id,
    guint32 packet_filters_count,
    const MbimPacketFilter *const *packet_filters,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message IP Packet Filters */

gboolean mbim_message_ip_packet_filters_response_parse (
    const MbimMessage *message,
    guint32 *session_id,
    guint32 *packet_filters_count,
    MbimPacketFilter ***packet_filters,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Multicarrier Providers */

MbimMessage *mbim_message_multicarrier_providers_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message Multicarrier Providers */

MbimMessage *mbim_message_multicarrier_providers_set_new (
    guint32 providers_count,
    const MbimProvider *const *providers,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Multicarrier Providers */

gboolean mbim_message_multicarrier_providers_response_parse (
    const MbimMessage *message,
    guint32 *providers_count,
    MbimProvider ***providers,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message Multicarrier Providers */

gboolean mbim_message_multicarrier_providers_notification_parse (
    const MbimMessage *message,
    guint32 *providers_count,
    MbimProvider ***providers,
    GError **error);

G_END_DECLS

#endif /* __LIBMBIM_GLIB_MBIM_BASIC_CONNECT__ */
