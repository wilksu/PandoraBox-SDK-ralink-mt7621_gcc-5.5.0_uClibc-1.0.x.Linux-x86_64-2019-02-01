
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
#include "qmi-enums-loc.h"
#include "qmi-message.h"
#include "qmi-client.h"

#ifndef __LIBQMI_GLIB_QMI_LOC__
#define __LIBQMI_GLIB_QMI_LOC__

G_BEGIN_DECLS


/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message LOC Start */


/* --- Input -- */

/**
 * QmiMessageLocStartInput:
 *
 * The #QmiMessageLocStartInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.20
 */
typedef struct _QmiMessageLocStartInput QmiMessageLocStartInput;
GType qmi_message_loc_start_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_LOC_START_INPUT (qmi_message_loc_start_input_get_type ())

/**
 * qmi_message_loc_start_input_get_intermediate_report_state:
 * @self: a #QmiMessageLocStartInput.
 * @value_intermediate_report_state: a placeholder for the output #QmiLocIntermediateReportState, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Intermediate Report State' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_loc_start_input_get_intermediate_report_state (
    QmiMessageLocStartInput *self,
    QmiLocIntermediateReportState *value_intermediate_report_state,
    GError **error);

/**
 * qmi_message_loc_start_input_set_intermediate_report_state:
 * @self: a #QmiMessageLocStartInput.
 * @value_intermediate_report_state: a #QmiLocIntermediateReportState.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Intermediate Report State' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_loc_start_input_set_intermediate_report_state (
    QmiMessageLocStartInput *self,
    QmiLocIntermediateReportState value_intermediate_report_state,
    GError **error);

/**
 * qmi_message_loc_start_input_get_session_id:
 * @self: a #QmiMessageLocStartInput.
 * @value_session_id: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Session ID' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.20
 */
gboolean qmi_message_loc_start_input_get_session_id (
    QmiMessageLocStartInput *self,
    guint8 *value_session_id,
    GError **error);

/**
 * qmi_message_loc_start_input_set_session_id:
 * @self: a #QmiMessageLocStartInput.
 * @value_session_id: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Session ID' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.20
 */
gboolean qmi_message_loc_start_input_set_session_id (
    QmiMessageLocStartInput *self,
    guint8 value_session_id,
    GError **error);

/**
 * qmi_message_loc_start_input_ref:
 * @self: a #QmiMessageLocStartInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.20
 */
QmiMessageLocStartInput *qmi_message_loc_start_input_ref (QmiMessageLocStartInput *self);

/**
 * qmi_message_loc_start_input_unref:
 * @self: a #QmiMessageLocStartInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.20
 */
void qmi_message_loc_start_input_unref (QmiMessageLocStartInput *self);

/**
 * qmi_message_loc_start_input_new:
 *
 * Allocates a new #QmiMessageLocStartInput.
 *
 * Returns: the newly created #QmiMessageLocStartInput. The returned value should be freed with qmi_message_loc_start_input_unref().
 *
 * Since: 1.20
 */
QmiMessageLocStartInput *qmi_message_loc_start_input_new (void);

/* --- Output -- */

/**
 * QmiMessageLocStartOutput:
 *
 * The #QmiMessageLocStartOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.20
 */
typedef struct _QmiMessageLocStartOutput QmiMessageLocStartOutput;
GType qmi_message_loc_start_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_LOC_START_OUTPUT (qmi_message_loc_start_output_get_type ())

/**
 * qmi_message_loc_start_output_get_result:
 * @self: a QmiMessageLocStartOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.20
 */
gboolean qmi_message_loc_start_output_get_result (
    QmiMessageLocStartOutput *self,
    GError **error);

/**
 * qmi_message_loc_start_output_ref:
 * @self: a #QmiMessageLocStartOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.20
 */
QmiMessageLocStartOutput *qmi_message_loc_start_output_ref (QmiMessageLocStartOutput *self);

/**
 * qmi_message_loc_start_output_unref:
 * @self: a #QmiMessageLocStartOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.20
 */
void qmi_message_loc_start_output_unref (QmiMessageLocStartOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message LOC Stop */


/* --- Input -- */

/**
 * QmiMessageLocStopInput:
 *
 * The #QmiMessageLocStopInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.20
 */
typedef struct _QmiMessageLocStopInput QmiMessageLocStopInput;
GType qmi_message_loc_stop_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_LOC_STOP_INPUT (qmi_message_loc_stop_input_get_type ())

/**
 * qmi_message_loc_stop_input_get_session_id:
 * @self: a #QmiMessageLocStopInput.
 * @value_session_id: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Session ID' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.20
 */
gboolean qmi_message_loc_stop_input_get_session_id (
    QmiMessageLocStopInput *self,
    guint8 *value_session_id,
    GError **error);

/**
 * qmi_message_loc_stop_input_set_session_id:
 * @self: a #QmiMessageLocStopInput.
 * @value_session_id: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Session ID' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.20
 */
gboolean qmi_message_loc_stop_input_set_session_id (
    QmiMessageLocStopInput *self,
    guint8 value_session_id,
    GError **error);

/**
 * qmi_message_loc_stop_input_ref:
 * @self: a #QmiMessageLocStopInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.20
 */
QmiMessageLocStopInput *qmi_message_loc_stop_input_ref (QmiMessageLocStopInput *self);

/**
 * qmi_message_loc_stop_input_unref:
 * @self: a #QmiMessageLocStopInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.20
 */
void qmi_message_loc_stop_input_unref (QmiMessageLocStopInput *self);

/**
 * qmi_message_loc_stop_input_new:
 *
 * Allocates a new #QmiMessageLocStopInput.
 *
 * Returns: the newly created #QmiMessageLocStopInput. The returned value should be freed with qmi_message_loc_stop_input_unref().
 *
 * Since: 1.20
 */
QmiMessageLocStopInput *qmi_message_loc_stop_input_new (void);

/* --- Output -- */

/**
 * QmiMessageLocStopOutput:
 *
 * The #QmiMessageLocStopOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.20
 */
typedef struct _QmiMessageLocStopOutput QmiMessageLocStopOutput;
GType qmi_message_loc_stop_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_LOC_STOP_OUTPUT (qmi_message_loc_stop_output_get_type ())

/**
 * qmi_message_loc_stop_output_get_result:
 * @self: a QmiMessageLocStopOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.20
 */
gboolean qmi_message_loc_stop_output_get_result (
    QmiMessageLocStopOutput *self,
    GError **error);

/**
 * qmi_message_loc_stop_output_ref:
 * @self: a #QmiMessageLocStopOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.20
 */
QmiMessageLocStopOutput *qmi_message_loc_stop_output_ref (QmiMessageLocStopOutput *self);

/**
 * qmi_message_loc_stop_output_unref:
 * @self: a #QmiMessageLocStopOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.20
 */
void qmi_message_loc_stop_output_unref (QmiMessageLocStopOutput *self);

/*****************************************************************************/
/* INDICATION: Qmi Indication LOC Position Report */


/* --- Output -- */

/**
 * QmiIndicationLocPositionReportOutput:
 *
 * The #QmiIndicationLocPositionReportOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiIndicationLocPositionReportOutput QmiIndicationLocPositionReportOutput;
GType qmi_indication_loc_position_report_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_LOC_POSITION_REPORT_OUTPUT (qmi_indication_loc_position_report_output_get_type ())

/**
 * qmi_indication_loc_position_report_output_get_session_id:
 * @self: a #QmiIndicationLocPositionReportOutput.
 * @value_session_id: a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Session ID' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_loc_position_report_output_get_session_id (
    QmiIndicationLocPositionReportOutput *self,
    guint8 *value_session_id,
    GError **error);

/**
 * qmi_indication_loc_position_report_output_ref:
 * @self: a #QmiIndicationLocPositionReportOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiIndicationLocPositionReportOutput *qmi_indication_loc_position_report_output_ref (QmiIndicationLocPositionReportOutput *self);

/**
 * qmi_indication_loc_position_report_output_unref:
 * @self: a #QmiIndicationLocPositionReportOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_indication_loc_position_report_output_unref (QmiIndicationLocPositionReportOutput *self);

/*****************************************************************************/
/* Service-specific printable: LOC */


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *__qmi_message_loc_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix);

#endif


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gboolean __qmi_message_loc_get_version_introduced (
    QmiMessage *self,
    QmiMessageContext *context,
    guint *major,
    guint *minor);

#endif


/*****************************************************************************/
/* CLIENT: QMI Client LOC */

#define QMI_TYPE_CLIENT_LOC            (qmi_client_loc_get_type ())
#define QMI_CLIENT_LOC(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), QMI_TYPE_CLIENT_LOC, QmiClientLoc))
#define QMI_CLIENT_LOC_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  QMI_TYPE_CLIENT_LOC, QmiClientLocClass))
#define QMI_IS_CLIENT_LOC(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), QMI_TYPE_CLIENT_LOC))
#define QMI_IS_CLIENT_LOC_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  QMI_TYPE_CLIENT_LOC))
#define QMI_CLIENT_LOC_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  QMI_TYPE_CLIENT_LOC, QmiClientLocClass))

typedef struct _QmiClientLoc QmiClientLoc;
typedef struct _QmiClientLocClass QmiClientLocClass;

/**
 * QmiClientLoc:
 *
 * The #QmiClientLoc structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
struct _QmiClientLoc {
    /*< private >*/
    QmiClient parent;
    gpointer priv_unused;
};

struct _QmiClientLocClass {
    /*< private >*/
    QmiClientClass parent;
};

GType qmi_client_loc_get_type (void);


/**
 * qmi_client_loc_start:
 * @self: a #QmiClientLoc.
 * @input: a #QmiMessageLocStartInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Start request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_loc_start_finish() to get the result of the operation.
 *
 * Since: 1.20
 */
void qmi_client_loc_start (
    QmiClientLoc *self,
    QmiMessageLocStartInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_loc_start_finish:
 * @self: a #QmiClientLoc.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_loc_start().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_loc_start().
 *
 * Returns: a #QmiMessageLocStartOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_loc_start_output_unref().
 *
 * Since: 1.20
 */
QmiMessageLocStartOutput *qmi_client_loc_start_finish (
    QmiClientLoc *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_loc_stop:
 * @self: a #QmiClientLoc.
 * @input: a #QmiMessageLocStopInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Stop request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_loc_stop_finish() to get the result of the operation.
 *
 * Since: 1.20
 */
void qmi_client_loc_stop (
    QmiClientLoc *self,
    QmiMessageLocStopInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_loc_stop_finish:
 * @self: a #QmiClientLoc.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_loc_stop().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_loc_stop().
 *
 * Returns: a #QmiMessageLocStopOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_loc_stop_output_unref().
 *
 * Since: 1.20
 */
QmiMessageLocStopOutput *qmi_client_loc_stop_finish (
    QmiClientLoc *self,
    GAsyncResult *res,
    GError **error);

G_END_DECLS

#endif /* __LIBQMI_GLIB_QMI_LOC__ */
