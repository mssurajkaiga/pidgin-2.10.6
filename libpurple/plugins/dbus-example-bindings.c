/* Generated by ../../libpurple/dbus-analyze-functions.py.  Do not edit! */
static DBusMessage*
dbus_example_get_hello_object_DBUS(DBusMessage *message_DBUS, DBusError *error_DBUS) {
	DBusMessage *reply_DBUS;
	dbus_int32_t RESULT;
	dbus_message_get_args(message_DBUS, error_DBUS, DBUS_TYPE_INVALID);
	CHECK_ERROR(error_DBUS);
	PURPLE_DBUS_POINTER_TO_ID(RESULT, dbus_example_get_hello_object(), error_DBUS);
	reply_DBUS = dbus_message_new_method_return (message_DBUS);
	dbus_message_append_args(reply_DBUS, DBUS_TYPE_INT32, &RESULT, DBUS_TYPE_INVALID);
	return reply_DBUS;
}

static DBusMessage*
dbus_example_set_text_DBUS(DBusMessage *message_DBUS, DBusError *error_DBUS) {
	DBusMessage *reply_DBUS;
	dbus_int32_t obj_ID;
	PurpleText *obj;
	const char *text;
	dbus_message_get_args(message_DBUS, error_DBUS, DBUS_TYPE_INT32, &obj_ID, DBUS_TYPE_STRING, &text, DBUS_TYPE_INVALID);
	CHECK_ERROR(error_DBUS);
	PURPLE_DBUS_ID_TO_POINTER(obj, obj_ID, PurpleText, error_DBUS);
	text = (text && text[0]) ? text : NULL;
	dbus_example_set_text(obj, text);
	reply_DBUS = dbus_message_new_method_return (message_DBUS);
	dbus_message_append_args(reply_DBUS, DBUS_TYPE_INVALID);
	return reply_DBUS;
}

static DBusMessage*
dbus_example_get_text_DBUS(DBusMessage *message_DBUS, DBusError *error_DBUS) {
	DBusMessage *reply_DBUS;
	dbus_int32_t obj_ID;
	PurpleText *obj;
	const char *RESULT;
	dbus_message_get_args(message_DBUS, error_DBUS, DBUS_TYPE_INT32, &obj_ID, DBUS_TYPE_INVALID);
	CHECK_ERROR(error_DBUS);
	PURPLE_DBUS_ID_TO_POINTER(obj, obj_ID, PurpleText, error_DBUS);
	if ((RESULT = dbus_example_get_text(obj)) == NULL)
		RESULT = "";
	reply_DBUS = dbus_message_new_method_return (message_DBUS);
	dbus_message_append_args(reply_DBUS, DBUS_TYPE_STRING, &RESULT, DBUS_TYPE_INVALID);
	return reply_DBUS;
}

static DBusMessage*
dbus_example_get_buddy_name_DBUS(DBusMessage *message_DBUS, DBusError *error_DBUS) {
	DBusMessage *reply_DBUS;
	dbus_int32_t buddy_ID;
	PurpleBuddy *buddy;
	const char *RESULT;
	dbus_message_get_args(message_DBUS, error_DBUS, DBUS_TYPE_INT32, &buddy_ID, DBUS_TYPE_INVALID);
	CHECK_ERROR(error_DBUS);
	PURPLE_DBUS_ID_TO_POINTER(buddy, buddy_ID, PurpleBuddy, error_DBUS);
	if ((RESULT = dbus_example_get_buddy_name(buddy)) == NULL)
		RESULT = "";
	reply_DBUS = dbus_message_new_method_return (message_DBUS);
	dbus_message_append_args(reply_DBUS, DBUS_TYPE_STRING, &RESULT, DBUS_TYPE_INVALID);
	return reply_DBUS;
}

static PurpleDBusBinding bindings_DBUS[] = { 
{"DbusExampleGetHelloObject", "out\0i\0RESULT\0", dbus_example_get_hello_object_DBUS},
{"DbusExampleSetText", "in\0i\0obj\0in\0s\0text\0", dbus_example_set_text_DBUS},
{"DbusExampleGetText", "in\0i\0obj\0out\0s\0RESULT\0", dbus_example_get_text_DBUS},
{"DbusExampleGetBuddyName", "in\0i\0buddy\0out\0s\0RESULT\0", dbus_example_get_buddy_name_DBUS},
{NULL, NULL, NULL}
};
#define PURPLE_DBUS_REGISTER_BINDINGS(handle) purple_dbus_register_bindings(handle, bindings_DBUS)
