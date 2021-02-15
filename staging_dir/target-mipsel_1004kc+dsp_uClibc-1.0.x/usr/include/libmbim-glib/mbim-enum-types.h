
/* Generated data (by glib-mkenums) */

#ifndef __LIBMBIM_GLIB_ENUM_TYPES_H__
#define __LIBMBIM_GLIB_ENUM_TYPES_H__
#include "mbim-uuid.h"
#include "mbim-cid.h"
#include "mbim-message.h"
#include "mbim-enums.h"

#include <glib-object.h>

G_BEGIN_DECLS

/* enumerations from "../../../src/libmbim-glib/mbim-uuid.h" */
GType mbim_service_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_SERVICE (mbim_service_get_type ())

/* Define type-specific symbols */
#define __MBIM_SERVICE_IS_ENUM__

#if defined __MBIM_SERVICE_IS_ENUM__
const gchar *mbim_service_get_string (MbimService val);
#endif

#if defined __MBIM_SERVICE_IS_FLAGS__
gchar *mbim_service_build_string_from_mask (MbimService mask);
#endif

GType mbim_context_type_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_CONTEXT_TYPE (mbim_context_type_get_type ())

/* Define type-specific symbols */
#define __MBIM_CONTEXT_TYPE_IS_ENUM__

#if defined __MBIM_CONTEXT_TYPE_IS_ENUM__
const gchar *mbim_context_type_get_string (MbimContextType val);
#endif

#if defined __MBIM_CONTEXT_TYPE_IS_FLAGS__
gchar *mbim_context_type_build_string_from_mask (MbimContextType mask);
#endif


/* enumerations from "../../../src/libmbim-glib/mbim-cid.h" */
GType mbim_cid_basic_connect_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_CID_BASIC_CONNECT (mbim_cid_basic_connect_get_type ())

/* Define type-specific symbols */
#define __MBIM_CID_BASIC_CONNECT_IS_ENUM__

#if defined __MBIM_CID_BASIC_CONNECT_IS_ENUM__
const gchar *mbim_cid_basic_connect_get_string (MbimCidBasicConnect val);
#endif

#if defined __MBIM_CID_BASIC_CONNECT_IS_FLAGS__
gchar *mbim_cid_basic_connect_build_string_from_mask (MbimCidBasicConnect mask);
#endif

GType mbim_cid_sms_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_CID_SMS (mbim_cid_sms_get_type ())

/* Define type-specific symbols */
#define __MBIM_CID_SMS_IS_ENUM__

#if defined __MBIM_CID_SMS_IS_ENUM__
const gchar *mbim_cid_sms_get_string (MbimCidSms val);
#endif

#if defined __MBIM_CID_SMS_IS_FLAGS__
gchar *mbim_cid_sms_build_string_from_mask (MbimCidSms mask);
#endif

GType mbim_cid_ussd_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_CID_USSD (mbim_cid_ussd_get_type ())

/* Define type-specific symbols */
#define __MBIM_CID_USSD_IS_ENUM__

#if defined __MBIM_CID_USSD_IS_ENUM__
const gchar *mbim_cid_ussd_get_string (MbimCidUssd val);
#endif

#if defined __MBIM_CID_USSD_IS_FLAGS__
gchar *mbim_cid_ussd_build_string_from_mask (MbimCidUssd mask);
#endif

GType mbim_cid_phonebook_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_CID_PHONEBOOK (mbim_cid_phonebook_get_type ())

/* Define type-specific symbols */
#define __MBIM_CID_PHONEBOOK_IS_ENUM__

#if defined __MBIM_CID_PHONEBOOK_IS_ENUM__
const gchar *mbim_cid_phonebook_get_string (MbimCidPhonebook val);
#endif

#if defined __MBIM_CID_PHONEBOOK_IS_FLAGS__
gchar *mbim_cid_phonebook_build_string_from_mask (MbimCidPhonebook mask);
#endif

GType mbim_cid_stk_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_CID_STK (mbim_cid_stk_get_type ())

/* Define type-specific symbols */
#define __MBIM_CID_STK_IS_ENUM__

#if defined __MBIM_CID_STK_IS_ENUM__
const gchar *mbim_cid_stk_get_string (MbimCidStk val);
#endif

#if defined __MBIM_CID_STK_IS_FLAGS__
gchar *mbim_cid_stk_build_string_from_mask (MbimCidStk mask);
#endif

GType mbim_cid_auth_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_CID_AUTH (mbim_cid_auth_get_type ())

/* Define type-specific symbols */
#define __MBIM_CID_AUTH_IS_ENUM__

#if defined __MBIM_CID_AUTH_IS_ENUM__
const gchar *mbim_cid_auth_get_string (MbimCidAuth val);
#endif

#if defined __MBIM_CID_AUTH_IS_FLAGS__
gchar *mbim_cid_auth_build_string_from_mask (MbimCidAuth mask);
#endif

GType mbim_cid_dss_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_CID_DSS (mbim_cid_dss_get_type ())

/* Define type-specific symbols */
#define __MBIM_CID_DSS_IS_ENUM__

#if defined __MBIM_CID_DSS_IS_ENUM__
const gchar *mbim_cid_dss_get_string (MbimCidDss val);
#endif

#if defined __MBIM_CID_DSS_IS_FLAGS__
gchar *mbim_cid_dss_build_string_from_mask (MbimCidDss mask);
#endif

GType mbim_cid_ms_firmware_id_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_CID_MS_FIRMWARE_ID (mbim_cid_ms_firmware_id_get_type ())

/* Define type-specific symbols */
#define __MBIM_CID_MS_FIRMWARE_ID_IS_ENUM__

#if defined __MBIM_CID_MS_FIRMWARE_ID_IS_ENUM__
const gchar *mbim_cid_ms_firmware_id_get_string (MbimCidMsFirmwareId val);
#endif

#if defined __MBIM_CID_MS_FIRMWARE_ID_IS_FLAGS__
gchar *mbim_cid_ms_firmware_id_build_string_from_mask (MbimCidMsFirmwareId mask);
#endif

GType mbim_cid_ms_host_shutdown_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_CID_MS_HOST_SHUTDOWN (mbim_cid_ms_host_shutdown_get_type ())

/* Define type-specific symbols */
#define __MBIM_CID_MS_HOST_SHUTDOWN_IS_ENUM__

#if defined __MBIM_CID_MS_HOST_SHUTDOWN_IS_ENUM__
const gchar *mbim_cid_ms_host_shutdown_get_string (MbimCidMsHostShutdown val);
#endif

#if defined __MBIM_CID_MS_HOST_SHUTDOWN_IS_FLAGS__
gchar *mbim_cid_ms_host_shutdown_build_string_from_mask (MbimCidMsHostShutdown mask);
#endif

GType mbim_cid_proxy_control_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_CID_PROXY_CONTROL (mbim_cid_proxy_control_get_type ())

/* Define type-specific symbols */
#define __MBIM_CID_PROXY_CONTROL_IS_ENUM__

#if defined __MBIM_CID_PROXY_CONTROL_IS_ENUM__
const gchar *mbim_cid_proxy_control_get_string (MbimCidProxyControl val);
#endif

#if defined __MBIM_CID_PROXY_CONTROL_IS_FLAGS__
gchar *mbim_cid_proxy_control_build_string_from_mask (MbimCidProxyControl mask);
#endif

GType mbim_cid_qmi_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_CID_QMI (mbim_cid_qmi_get_type ())

/* Define type-specific symbols */
#define __MBIM_CID_QMI_IS_ENUM__

#if defined __MBIM_CID_QMI_IS_ENUM__
const gchar *mbim_cid_qmi_get_string (MbimCidQmi val);
#endif

#if defined __MBIM_CID_QMI_IS_FLAGS__
gchar *mbim_cid_qmi_build_string_from_mask (MbimCidQmi mask);
#endif

GType mbim_cid_atds_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_CID_ATDS (mbim_cid_atds_get_type ())

/* Define type-specific symbols */
#define __MBIM_CID_ATDS_IS_ENUM__

#if defined __MBIM_CID_ATDS_IS_ENUM__
const gchar *mbim_cid_atds_get_string (MbimCidAtds val);
#endif

#if defined __MBIM_CID_ATDS_IS_FLAGS__
gchar *mbim_cid_atds_build_string_from_mask (MbimCidAtds mask);
#endif

GType mbim_cid_intel_firmware_update_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_CID_INTEL_FIRMWARE_UPDATE (mbim_cid_intel_firmware_update_get_type ())

/* Define type-specific symbols */
#define __MBIM_CID_INTEL_FIRMWARE_UPDATE_IS_ENUM__

#if defined __MBIM_CID_INTEL_FIRMWARE_UPDATE_IS_ENUM__
const gchar *mbim_cid_intel_firmware_update_get_string (MbimCidIntelFirmwareUpdate val);
#endif

#if defined __MBIM_CID_INTEL_FIRMWARE_UPDATE_IS_FLAGS__
gchar *mbim_cid_intel_firmware_update_build_string_from_mask (MbimCidIntelFirmwareUpdate mask);
#endif


/* enumerations from "../../../src/libmbim-glib/mbim-message.h" */
GType mbim_message_type_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_MESSAGE_TYPE (mbim_message_type_get_type ())

/* Define type-specific symbols */
#define __MBIM_MESSAGE_TYPE_IS_ENUM__

#if defined __MBIM_MESSAGE_TYPE_IS_ENUM__
const gchar *mbim_message_type_get_string (MbimMessageType val);
#endif

#if defined __MBIM_MESSAGE_TYPE_IS_FLAGS__
gchar *mbim_message_type_build_string_from_mask (MbimMessageType mask);
#endif

GType mbim_message_command_type_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_MESSAGE_COMMAND_TYPE (mbim_message_command_type_get_type ())

/* Define type-specific symbols */
#define __MBIM_MESSAGE_COMMAND_TYPE_IS_ENUM__

#if defined __MBIM_MESSAGE_COMMAND_TYPE_IS_ENUM__
const gchar *mbim_message_command_type_get_string (MbimMessageCommandType val);
#endif

#if defined __MBIM_MESSAGE_COMMAND_TYPE_IS_FLAGS__
gchar *mbim_message_command_type_build_string_from_mask (MbimMessageCommandType mask);
#endif


/* enumerations from "../../../src/libmbim-glib/mbim-enums.h" */
GType mbim_device_type_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_DEVICE_TYPE (mbim_device_type_get_type ())

/* Define type-specific symbols */
#define __MBIM_DEVICE_TYPE_IS_ENUM__

#if defined __MBIM_DEVICE_TYPE_IS_ENUM__
const gchar *mbim_device_type_get_string (MbimDeviceType val);
#endif

#if defined __MBIM_DEVICE_TYPE_IS_FLAGS__
gchar *mbim_device_type_build_string_from_mask (MbimDeviceType mask);
#endif

GType mbim_cellular_class_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_CELLULAR_CLASS (mbim_cellular_class_get_type ())

/* Define type-specific symbols */
#define __MBIM_CELLULAR_CLASS_IS_FLAGS__

#if defined __MBIM_CELLULAR_CLASS_IS_ENUM__
const gchar *mbim_cellular_class_get_string (MbimCellularClass val);
#endif

#if defined __MBIM_CELLULAR_CLASS_IS_FLAGS__
gchar *mbim_cellular_class_build_string_from_mask (MbimCellularClass mask);
#endif

GType mbim_voice_class_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_VOICE_CLASS (mbim_voice_class_get_type ())

/* Define type-specific symbols */
#define __MBIM_VOICE_CLASS_IS_ENUM__

#if defined __MBIM_VOICE_CLASS_IS_ENUM__
const gchar *mbim_voice_class_get_string (MbimVoiceClass val);
#endif

#if defined __MBIM_VOICE_CLASS_IS_FLAGS__
gchar *mbim_voice_class_build_string_from_mask (MbimVoiceClass mask);
#endif

GType mbim_sim_class_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_SIM_CLASS (mbim_sim_class_get_type ())

/* Define type-specific symbols */
#define __MBIM_SIM_CLASS_IS_FLAGS__

#if defined __MBIM_SIM_CLASS_IS_ENUM__
const gchar *mbim_sim_class_get_string (MbimSimClass val);
#endif

#if defined __MBIM_SIM_CLASS_IS_FLAGS__
gchar *mbim_sim_class_build_string_from_mask (MbimSimClass mask);
#endif

GType mbim_data_class_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_DATA_CLASS (mbim_data_class_get_type ())

/* Define type-specific symbols */
#define __MBIM_DATA_CLASS_IS_FLAGS__

#if defined __MBIM_DATA_CLASS_IS_ENUM__
const gchar *mbim_data_class_get_string (MbimDataClass val);
#endif

#if defined __MBIM_DATA_CLASS_IS_FLAGS__
gchar *mbim_data_class_build_string_from_mask (MbimDataClass mask);
#endif

GType mbim_sms_caps_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_SMS_CAPS (mbim_sms_caps_get_type ())

/* Define type-specific symbols */
#define __MBIM_SMS_CAPS_IS_FLAGS__

#if defined __MBIM_SMS_CAPS_IS_ENUM__
const gchar *mbim_sms_caps_get_string (MbimSmsCaps val);
#endif

#if defined __MBIM_SMS_CAPS_IS_FLAGS__
gchar *mbim_sms_caps_build_string_from_mask (MbimSmsCaps mask);
#endif

GType mbim_ctrl_caps_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_CTRL_CAPS (mbim_ctrl_caps_get_type ())

/* Define type-specific symbols */
#define __MBIM_CTRL_CAPS_IS_FLAGS__

#if defined __MBIM_CTRL_CAPS_IS_ENUM__
const gchar *mbim_ctrl_caps_get_string (MbimCtrlCaps val);
#endif

#if defined __MBIM_CTRL_CAPS_IS_FLAGS__
gchar *mbim_ctrl_caps_build_string_from_mask (MbimCtrlCaps mask);
#endif

GType mbim_subscriber_ready_state_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_SUBSCRIBER_READY_STATE (mbim_subscriber_ready_state_get_type ())

/* Define type-specific symbols */
#define __MBIM_SUBSCRIBER_READY_STATE_IS_ENUM__

#if defined __MBIM_SUBSCRIBER_READY_STATE_IS_ENUM__
const gchar *mbim_subscriber_ready_state_get_string (MbimSubscriberReadyState val);
#endif

#if defined __MBIM_SUBSCRIBER_READY_STATE_IS_FLAGS__
gchar *mbim_subscriber_ready_state_build_string_from_mask (MbimSubscriberReadyState mask);
#endif

GType mbim_ready_info_flag_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_READY_INFO_FLAG (mbim_ready_info_flag_get_type ())

/* Define type-specific symbols */
#define __MBIM_READY_INFO_FLAG_IS_FLAGS__

#if defined __MBIM_READY_INFO_FLAG_IS_ENUM__
const gchar *mbim_ready_info_flag_get_string (MbimReadyInfoFlag val);
#endif

#if defined __MBIM_READY_INFO_FLAG_IS_FLAGS__
gchar *mbim_ready_info_flag_build_string_from_mask (MbimReadyInfoFlag mask);
#endif

GType mbim_radio_switch_state_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_RADIO_SWITCH_STATE (mbim_radio_switch_state_get_type ())

/* Define type-specific symbols */
#define __MBIM_RADIO_SWITCH_STATE_IS_ENUM__

#if defined __MBIM_RADIO_SWITCH_STATE_IS_ENUM__
const gchar *mbim_radio_switch_state_get_string (MbimRadioSwitchState val);
#endif

#if defined __MBIM_RADIO_SWITCH_STATE_IS_FLAGS__
gchar *mbim_radio_switch_state_build_string_from_mask (MbimRadioSwitchState mask);
#endif

GType mbim_pin_type_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_PIN_TYPE (mbim_pin_type_get_type ())

/* Define type-specific symbols */
#define __MBIM_PIN_TYPE_IS_ENUM__

#if defined __MBIM_PIN_TYPE_IS_ENUM__
const gchar *mbim_pin_type_get_string (MbimPinType val);
#endif

#if defined __MBIM_PIN_TYPE_IS_FLAGS__
gchar *mbim_pin_type_build_string_from_mask (MbimPinType mask);
#endif

GType mbim_pin_state_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_PIN_STATE (mbim_pin_state_get_type ())

/* Define type-specific symbols */
#define __MBIM_PIN_STATE_IS_ENUM__

#if defined __MBIM_PIN_STATE_IS_ENUM__
const gchar *mbim_pin_state_get_string (MbimPinState val);
#endif

#if defined __MBIM_PIN_STATE_IS_FLAGS__
gchar *mbim_pin_state_build_string_from_mask (MbimPinState mask);
#endif

GType mbim_pin_operation_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_PIN_OPERATION (mbim_pin_operation_get_type ())

/* Define type-specific symbols */
#define __MBIM_PIN_OPERATION_IS_ENUM__

#if defined __MBIM_PIN_OPERATION_IS_ENUM__
const gchar *mbim_pin_operation_get_string (MbimPinOperation val);
#endif

#if defined __MBIM_PIN_OPERATION_IS_FLAGS__
gchar *mbim_pin_operation_build_string_from_mask (MbimPinOperation mask);
#endif

GType mbim_pin_mode_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_PIN_MODE (mbim_pin_mode_get_type ())

/* Define type-specific symbols */
#define __MBIM_PIN_MODE_IS_ENUM__

#if defined __MBIM_PIN_MODE_IS_ENUM__
const gchar *mbim_pin_mode_get_string (MbimPinMode val);
#endif

#if defined __MBIM_PIN_MODE_IS_FLAGS__
gchar *mbim_pin_mode_build_string_from_mask (MbimPinMode mask);
#endif

GType mbim_pin_format_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_PIN_FORMAT (mbim_pin_format_get_type ())

/* Define type-specific symbols */
#define __MBIM_PIN_FORMAT_IS_ENUM__

#if defined __MBIM_PIN_FORMAT_IS_ENUM__
const gchar *mbim_pin_format_get_string (MbimPinFormat val);
#endif

#if defined __MBIM_PIN_FORMAT_IS_FLAGS__
gchar *mbim_pin_format_build_string_from_mask (MbimPinFormat mask);
#endif

GType mbim_provider_state_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_PROVIDER_STATE (mbim_provider_state_get_type ())

/* Define type-specific symbols */
#define __MBIM_PROVIDER_STATE_IS_FLAGS__

#if defined __MBIM_PROVIDER_STATE_IS_ENUM__
const gchar *mbim_provider_state_get_string (MbimProviderState val);
#endif

#if defined __MBIM_PROVIDER_STATE_IS_FLAGS__
gchar *mbim_provider_state_build_string_from_mask (MbimProviderState mask);
#endif

GType mbim_visible_providers_action_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_VISIBLE_PROVIDERS_ACTION (mbim_visible_providers_action_get_type ())

/* Define type-specific symbols */
#define __MBIM_VISIBLE_PROVIDERS_ACTION_IS_ENUM__

#if defined __MBIM_VISIBLE_PROVIDERS_ACTION_IS_ENUM__
const gchar *mbim_visible_providers_action_get_string (MbimVisibleProvidersAction val);
#endif

#if defined __MBIM_VISIBLE_PROVIDERS_ACTION_IS_FLAGS__
gchar *mbim_visible_providers_action_build_string_from_mask (MbimVisibleProvidersAction mask);
#endif

GType mbim_nw_error_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_NW_ERROR (mbim_nw_error_get_type ())

/* Define type-specific symbols */
#define __MBIM_NW_ERROR_IS_ENUM__

#if defined __MBIM_NW_ERROR_IS_ENUM__
const gchar *mbim_nw_error_get_string (MbimNwError val);
#endif

#if defined __MBIM_NW_ERROR_IS_FLAGS__
gchar *mbim_nw_error_build_string_from_mask (MbimNwError mask);
#endif

GType mbim_register_action_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_REGISTER_ACTION (mbim_register_action_get_type ())

/* Define type-specific symbols */
#define __MBIM_REGISTER_ACTION_IS_ENUM__

#if defined __MBIM_REGISTER_ACTION_IS_ENUM__
const gchar *mbim_register_action_get_string (MbimRegisterAction val);
#endif

#if defined __MBIM_REGISTER_ACTION_IS_FLAGS__
gchar *mbim_register_action_build_string_from_mask (MbimRegisterAction mask);
#endif

GType mbim_register_state_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_REGISTER_STATE (mbim_register_state_get_type ())

/* Define type-specific symbols */
#define __MBIM_REGISTER_STATE_IS_ENUM__

#if defined __MBIM_REGISTER_STATE_IS_ENUM__
const gchar *mbim_register_state_get_string (MbimRegisterState val);
#endif

#if defined __MBIM_REGISTER_STATE_IS_FLAGS__
gchar *mbim_register_state_build_string_from_mask (MbimRegisterState mask);
#endif

GType mbim_register_mode_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_REGISTER_MODE (mbim_register_mode_get_type ())

/* Define type-specific symbols */
#define __MBIM_REGISTER_MODE_IS_ENUM__

#if defined __MBIM_REGISTER_MODE_IS_ENUM__
const gchar *mbim_register_mode_get_string (MbimRegisterMode val);
#endif

#if defined __MBIM_REGISTER_MODE_IS_FLAGS__
gchar *mbim_register_mode_build_string_from_mask (MbimRegisterMode mask);
#endif

GType mbim_registration_flag_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_REGISTRATION_FLAG (mbim_registration_flag_get_type ())

/* Define type-specific symbols */
#define __MBIM_REGISTRATION_FLAG_IS_FLAGS__

#if defined __MBIM_REGISTRATION_FLAG_IS_ENUM__
const gchar *mbim_registration_flag_get_string (MbimRegistrationFlag val);
#endif

#if defined __MBIM_REGISTRATION_FLAG_IS_FLAGS__
gchar *mbim_registration_flag_build_string_from_mask (MbimRegistrationFlag mask);
#endif

GType mbim_packet_service_action_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_PACKET_SERVICE_ACTION (mbim_packet_service_action_get_type ())

/* Define type-specific symbols */
#define __MBIM_PACKET_SERVICE_ACTION_IS_ENUM__

#if defined __MBIM_PACKET_SERVICE_ACTION_IS_ENUM__
const gchar *mbim_packet_service_action_get_string (MbimPacketServiceAction val);
#endif

#if defined __MBIM_PACKET_SERVICE_ACTION_IS_FLAGS__
gchar *mbim_packet_service_action_build_string_from_mask (MbimPacketServiceAction mask);
#endif

GType mbim_packet_service_state_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_PACKET_SERVICE_STATE (mbim_packet_service_state_get_type ())

/* Define type-specific symbols */
#define __MBIM_PACKET_SERVICE_STATE_IS_ENUM__

#if defined __MBIM_PACKET_SERVICE_STATE_IS_ENUM__
const gchar *mbim_packet_service_state_get_string (MbimPacketServiceState val);
#endif

#if defined __MBIM_PACKET_SERVICE_STATE_IS_FLAGS__
gchar *mbim_packet_service_state_build_string_from_mask (MbimPacketServiceState mask);
#endif

GType mbim_activation_command_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_ACTIVATION_COMMAND (mbim_activation_command_get_type ())

/* Define type-specific symbols */
#define __MBIM_ACTIVATION_COMMAND_IS_ENUM__

#if defined __MBIM_ACTIVATION_COMMAND_IS_ENUM__
const gchar *mbim_activation_command_get_string (MbimActivationCommand val);
#endif

#if defined __MBIM_ACTIVATION_COMMAND_IS_FLAGS__
gchar *mbim_activation_command_build_string_from_mask (MbimActivationCommand mask);
#endif

GType mbim_compression_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_COMPRESSION (mbim_compression_get_type ())

/* Define type-specific symbols */
#define __MBIM_COMPRESSION_IS_ENUM__

#if defined __MBIM_COMPRESSION_IS_ENUM__
const gchar *mbim_compression_get_string (MbimCompression val);
#endif

#if defined __MBIM_COMPRESSION_IS_FLAGS__
gchar *mbim_compression_build_string_from_mask (MbimCompression mask);
#endif

GType mbim_auth_protocol_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_AUTH_PROTOCOL (mbim_auth_protocol_get_type ())

/* Define type-specific symbols */
#define __MBIM_AUTH_PROTOCOL_IS_ENUM__

#if defined __MBIM_AUTH_PROTOCOL_IS_ENUM__
const gchar *mbim_auth_protocol_get_string (MbimAuthProtocol val);
#endif

#if defined __MBIM_AUTH_PROTOCOL_IS_FLAGS__
gchar *mbim_auth_protocol_build_string_from_mask (MbimAuthProtocol mask);
#endif

GType mbim_context_ip_type_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_CONTEXT_IP_TYPE (mbim_context_ip_type_get_type ())

/* Define type-specific symbols */
#define __MBIM_CONTEXT_IP_TYPE_IS_ENUM__

#if defined __MBIM_CONTEXT_IP_TYPE_IS_ENUM__
const gchar *mbim_context_ip_type_get_string (MbimContextIpType val);
#endif

#if defined __MBIM_CONTEXT_IP_TYPE_IS_FLAGS__
gchar *mbim_context_ip_type_build_string_from_mask (MbimContextIpType mask);
#endif

GType mbim_activation_state_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_ACTIVATION_STATE (mbim_activation_state_get_type ())

/* Define type-specific symbols */
#define __MBIM_ACTIVATION_STATE_IS_ENUM__

#if defined __MBIM_ACTIVATION_STATE_IS_ENUM__
const gchar *mbim_activation_state_get_string (MbimActivationState val);
#endif

#if defined __MBIM_ACTIVATION_STATE_IS_FLAGS__
gchar *mbim_activation_state_build_string_from_mask (MbimActivationState mask);
#endif

GType mbim_voice_call_state_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_VOICE_CALL_STATE (mbim_voice_call_state_get_type ())

/* Define type-specific symbols */
#define __MBIM_VOICE_CALL_STATE_IS_ENUM__

#if defined __MBIM_VOICE_CALL_STATE_IS_ENUM__
const gchar *mbim_voice_call_state_get_string (MbimVoiceCallState val);
#endif

#if defined __MBIM_VOICE_CALL_STATE_IS_FLAGS__
gchar *mbim_voice_call_state_build_string_from_mask (MbimVoiceCallState mask);
#endif

GType mbim_ip_configuration_available_flag_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_IP_CONFIGURATION_AVAILABLE_FLAG (mbim_ip_configuration_available_flag_get_type ())

/* Define type-specific symbols */
#define __MBIM_IP_CONFIGURATION_AVAILABLE_FLAG_IS_FLAGS__

#if defined __MBIM_IP_CONFIGURATION_AVAILABLE_FLAG_IS_ENUM__
const gchar *mbim_ip_configuration_available_flag_get_string (MbimIPConfigurationAvailableFlag val);
#endif

#if defined __MBIM_IP_CONFIGURATION_AVAILABLE_FLAG_IS_FLAGS__
gchar *mbim_ip_configuration_available_flag_build_string_from_mask (MbimIPConfigurationAvailableFlag mask);
#endif

GType mbim_sms_storage_state_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_SMS_STORAGE_STATE (mbim_sms_storage_state_get_type ())

/* Define type-specific symbols */
#define __MBIM_SMS_STORAGE_STATE_IS_ENUM__

#if defined __MBIM_SMS_STORAGE_STATE_IS_ENUM__
const gchar *mbim_sms_storage_state_get_string (MbimSmsStorageState val);
#endif

#if defined __MBIM_SMS_STORAGE_STATE_IS_FLAGS__
gchar *mbim_sms_storage_state_build_string_from_mask (MbimSmsStorageState mask);
#endif

GType mbim_sms_format_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_SMS_FORMAT (mbim_sms_format_get_type ())

/* Define type-specific symbols */
#define __MBIM_SMS_FORMAT_IS_ENUM__

#if defined __MBIM_SMS_FORMAT_IS_ENUM__
const gchar *mbim_sms_format_get_string (MbimSmsFormat val);
#endif

#if defined __MBIM_SMS_FORMAT_IS_FLAGS__
gchar *mbim_sms_format_build_string_from_mask (MbimSmsFormat mask);
#endif

GType mbim_sms_flag_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_SMS_FLAG (mbim_sms_flag_get_type ())

/* Define type-specific symbols */
#define __MBIM_SMS_FLAG_IS_ENUM__

#if defined __MBIM_SMS_FLAG_IS_ENUM__
const gchar *mbim_sms_flag_get_string (MbimSmsFlag val);
#endif

#if defined __MBIM_SMS_FLAG_IS_FLAGS__
gchar *mbim_sms_flag_build_string_from_mask (MbimSmsFlag mask);
#endif

GType mbim_sms_cdma_lang_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_SMS_CDMA_LANG (mbim_sms_cdma_lang_get_type ())

/* Define type-specific symbols */
#define __MBIM_SMS_CDMA_LANG_IS_ENUM__

#if defined __MBIM_SMS_CDMA_LANG_IS_ENUM__
const gchar *mbim_sms_cdma_lang_get_string (MbimSmsCdmaLang val);
#endif

#if defined __MBIM_SMS_CDMA_LANG_IS_FLAGS__
gchar *mbim_sms_cdma_lang_build_string_from_mask (MbimSmsCdmaLang mask);
#endif

GType mbim_sms_cdma_encoding_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_SMS_CDMA_ENCODING (mbim_sms_cdma_encoding_get_type ())

/* Define type-specific symbols */
#define __MBIM_SMS_CDMA_ENCODING_IS_ENUM__

#if defined __MBIM_SMS_CDMA_ENCODING_IS_ENUM__
const gchar *mbim_sms_cdma_encoding_get_string (MbimSmsCdmaEncoding val);
#endif

#if defined __MBIM_SMS_CDMA_ENCODING_IS_FLAGS__
gchar *mbim_sms_cdma_encoding_build_string_from_mask (MbimSmsCdmaEncoding mask);
#endif

GType mbim_sms_status_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_SMS_STATUS (mbim_sms_status_get_type ())

/* Define type-specific symbols */
#define __MBIM_SMS_STATUS_IS_ENUM__

#if defined __MBIM_SMS_STATUS_IS_ENUM__
const gchar *mbim_sms_status_get_string (MbimSmsStatus val);
#endif

#if defined __MBIM_SMS_STATUS_IS_FLAGS__
gchar *mbim_sms_status_build_string_from_mask (MbimSmsStatus mask);
#endif

GType mbim_sms_status_flag_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_SMS_STATUS_FLAG (mbim_sms_status_flag_get_type ())

/* Define type-specific symbols */
#define __MBIM_SMS_STATUS_FLAG_IS_ENUM__

#if defined __MBIM_SMS_STATUS_FLAG_IS_ENUM__
const gchar *mbim_sms_status_flag_get_string (MbimSmsStatusFlag val);
#endif

#if defined __MBIM_SMS_STATUS_FLAG_IS_FLAGS__
gchar *mbim_sms_status_flag_build_string_from_mask (MbimSmsStatusFlag mask);
#endif

GType mbim_ussd_action_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_USSD_ACTION (mbim_ussd_action_get_type ())

/* Define type-specific symbols */
#define __MBIM_USSD_ACTION_IS_ENUM__

#if defined __MBIM_USSD_ACTION_IS_ENUM__
const gchar *mbim_ussd_action_get_string (MbimUssdAction val);
#endif

#if defined __MBIM_USSD_ACTION_IS_FLAGS__
gchar *mbim_ussd_action_build_string_from_mask (MbimUssdAction mask);
#endif

GType mbim_ussd_response_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_USSD_RESPONSE (mbim_ussd_response_get_type ())

/* Define type-specific symbols */
#define __MBIM_USSD_RESPONSE_IS_ENUM__

#if defined __MBIM_USSD_RESPONSE_IS_ENUM__
const gchar *mbim_ussd_response_get_string (MbimUssdResponse val);
#endif

#if defined __MBIM_USSD_RESPONSE_IS_FLAGS__
gchar *mbim_ussd_response_build_string_from_mask (MbimUssdResponse mask);
#endif

GType mbim_ussd_session_state_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_USSD_SESSION_STATE (mbim_ussd_session_state_get_type ())

/* Define type-specific symbols */
#define __MBIM_USSD_SESSION_STATE_IS_ENUM__

#if defined __MBIM_USSD_SESSION_STATE_IS_ENUM__
const gchar *mbim_ussd_session_state_get_string (MbimUssdSessionState val);
#endif

#if defined __MBIM_USSD_SESSION_STATE_IS_FLAGS__
gchar *mbim_ussd_session_state_build_string_from_mask (MbimUssdSessionState mask);
#endif

GType mbim_phonebook_state_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_PHONEBOOK_STATE (mbim_phonebook_state_get_type ())

/* Define type-specific symbols */
#define __MBIM_PHONEBOOK_STATE_IS_ENUM__

#if defined __MBIM_PHONEBOOK_STATE_IS_ENUM__
const gchar *mbim_phonebook_state_get_string (MbimPhonebookState val);
#endif

#if defined __MBIM_PHONEBOOK_STATE_IS_FLAGS__
gchar *mbim_phonebook_state_build_string_from_mask (MbimPhonebookState mask);
#endif

GType mbim_phonebook_flag_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_PHONEBOOK_FLAG (mbim_phonebook_flag_get_type ())

/* Define type-specific symbols */
#define __MBIM_PHONEBOOK_FLAG_IS_ENUM__

#if defined __MBIM_PHONEBOOK_FLAG_IS_ENUM__
const gchar *mbim_phonebook_flag_get_string (MbimPhonebookFlag val);
#endif

#if defined __MBIM_PHONEBOOK_FLAG_IS_FLAGS__
gchar *mbim_phonebook_flag_build_string_from_mask (MbimPhonebookFlag mask);
#endif

GType mbim_phonebook_write_flag_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_PHONEBOOK_WRITE_FLAG (mbim_phonebook_write_flag_get_type ())

/* Define type-specific symbols */
#define __MBIM_PHONEBOOK_WRITE_FLAG_IS_ENUM__

#if defined __MBIM_PHONEBOOK_WRITE_FLAG_IS_ENUM__
const gchar *mbim_phonebook_write_flag_get_string (MbimPhonebookWriteFlag val);
#endif

#if defined __MBIM_PHONEBOOK_WRITE_FLAG_IS_FLAGS__
gchar *mbim_phonebook_write_flag_build_string_from_mask (MbimPhonebookWriteFlag mask);
#endif

GType mbim_stk_pac_profile_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_STK_PAC_PROFILE (mbim_stk_pac_profile_get_type ())

/* Define type-specific symbols */
#define __MBIM_STK_PAC_PROFILE_IS_ENUM__

#if defined __MBIM_STK_PAC_PROFILE_IS_ENUM__
const gchar *mbim_stk_pac_profile_get_string (MbimStkPacProfile val);
#endif

#if defined __MBIM_STK_PAC_PROFILE_IS_FLAGS__
gchar *mbim_stk_pac_profile_build_string_from_mask (MbimStkPacProfile mask);
#endif

GType mbim_stk_pac_type_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_STK_PAC_TYPE (mbim_stk_pac_type_get_type ())

/* Define type-specific symbols */
#define __MBIM_STK_PAC_TYPE_IS_ENUM__

#if defined __MBIM_STK_PAC_TYPE_IS_ENUM__
const gchar *mbim_stk_pac_type_get_string (MbimStkPacType val);
#endif

#if defined __MBIM_STK_PAC_TYPE_IS_FLAGS__
gchar *mbim_stk_pac_type_build_string_from_mask (MbimStkPacType mask);
#endif

GType mbim_network_idle_hint_state_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_NETWORK_IDLE_HINT_STATE (mbim_network_idle_hint_state_get_type ())

/* Define type-specific symbols */
#define __MBIM_NETWORK_IDLE_HINT_STATE_IS_ENUM__

#if defined __MBIM_NETWORK_IDLE_HINT_STATE_IS_ENUM__
const gchar *mbim_network_idle_hint_state_get_string (MbimNetworkIdleHintState val);
#endif

#if defined __MBIM_NETWORK_IDLE_HINT_STATE_IS_FLAGS__
gchar *mbim_network_idle_hint_state_build_string_from_mask (MbimNetworkIdleHintState mask);
#endif

GType mbim_emergency_mode_state_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_EMERGENCY_MODE_STATE (mbim_emergency_mode_state_get_type ())

/* Define type-specific symbols */
#define __MBIM_EMERGENCY_MODE_STATE_IS_ENUM__

#if defined __MBIM_EMERGENCY_MODE_STATE_IS_ENUM__
const gchar *mbim_emergency_mode_state_get_string (MbimEmergencyModeState val);
#endif

#if defined __MBIM_EMERGENCY_MODE_STATE_IS_FLAGS__
gchar *mbim_emergency_mode_state_build_string_from_mask (MbimEmergencyModeState mask);
#endif

GType mbim_dss_link_state_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_DSS_LINK_STATE (mbim_dss_link_state_get_type ())

/* Define type-specific symbols */
#define __MBIM_DSS_LINK_STATE_IS_ENUM__

#if defined __MBIM_DSS_LINK_STATE_IS_ENUM__
const gchar *mbim_dss_link_state_get_string (MbimDssLinkState val);
#endif

#if defined __MBIM_DSS_LINK_STATE_IS_FLAGS__
gchar *mbim_dss_link_state_build_string_from_mask (MbimDssLinkState mask);
#endif

GType mbim_atds_rat_mode_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_ATDS_RAT_MODE (mbim_atds_rat_mode_get_type ())

/* Define type-specific symbols */
#define __MBIM_ATDS_RAT_MODE_IS_ENUM__

#if defined __MBIM_ATDS_RAT_MODE_IS_ENUM__
const gchar *mbim_atds_rat_mode_get_string (MbimAtdsRatMode val);
#endif

#if defined __MBIM_ATDS_RAT_MODE_IS_FLAGS__
gchar *mbim_atds_rat_mode_build_string_from_mask (MbimAtdsRatMode mask);
#endif

GType mbim_atds_provider_plmn_mode_get_type (void) G_GNUC_CONST;
#define MBIM_TYPE_ATDS_PROVIDER_PLMN_MODE (mbim_atds_provider_plmn_mode_get_type ())

/* Define type-specific symbols */
#define __MBIM_ATDS_PROVIDER_PLMN_MODE_IS_ENUM__

#if defined __MBIM_ATDS_PROVIDER_PLMN_MODE_IS_ENUM__
const gchar *mbim_atds_provider_plmn_mode_get_string (MbimAtdsProviderPlmnMode val);
#endif

#if defined __MBIM_ATDS_PROVIDER_PLMN_MODE_IS_FLAGS__
gchar *mbim_atds_provider_plmn_mode_build_string_from_mask (MbimAtdsProviderPlmnMode mask);
#endif

G_END_DECLS

#endif /* __LIBMBIM_GLIB_ENUM_TYPES_H__ */

/* Generated data ends here */

