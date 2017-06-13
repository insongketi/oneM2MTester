// This C++ header file was generated by the TTCN-3 compiler
// of the TTCN-3 Test Executor version CRL 113 200/6 R1A
// for oneM2MTester (martin@ubuntu) on Wed May 31 13:52:13 2017

// Copyright (c) 2000-2017 Ericsson Telecom AB

// Do not edit this file unless you know what you are doing.

#ifndef OneM2M__Ports_HH
#define OneM2M__Ports_HH

#ifdef TITAN_RUNTIME_2
#error Generated code does not match with used runtime.\
 Code was generated without -R option but -DTITAN_RUNTIME_2 was used.
#endif

/* Header file includes */

#include <TTCN3.hh>
#include "OneM2M_DualFaceMapping.hh"

#if TTCN3_VERSION != 60100
#error Version mismatch detected.\
 Please check the version of the TTCN-3 compiler and the base library.\
 Run make clean and rebuild the project if the version of the compiler changed recently.
#endif

#ifndef LINUX
#error This file should be compiled on LINUX
#endif

#undef OneM2M__Ports_HH
#endif

namespace OneM2M__Ports {

/* Forward declarations of classes */

class OneM2MPort;
class AdapterControlPort_BASE;
class AdapterControlPort;

} /* end of namespace */

#ifndef OneM2M__Ports_HH
#define OneM2M__Ports_HH

namespace OneM2M__Ports {

/* Class definitions */

class OneM2MPort : public IPL4asp__PortType::IPL4asp__PT_PROVIDER {
enum msg_selection { MESSAGE_0, MESSAGE_1 };
struct msg_queue_item : public msg_queue_item_base {
msg_selection item_selection;
union {
OneM2M__Types::MsgIn *message_0;
Socket__API__Definitions::PortEvent *message_1;
};
component sender_component;
};

void remove_msg_queue_head();
protected:
void clear_queue();
public:
OneM2MPort(const char *par_port_name = NULL);
~OneM2MPort();
void send(const OneM2M__Types::MsgOut& send_par, const COMPONENT& destination_component);
void send(const OneM2M__Types::MsgOut& send_par);
void send(const OneM2M__Types::MsgOut_template& send_par, const COMPONENT& destination_component);
void send(const OneM2M__Types::MsgOut_template& send_par);
alt_status receive(const COMPONENT_template& sender_template, COMPONENT *sender_ptr, Index_Redirect*);
alt_status check_receive(const COMPONENT_template& sender_template, COMPONENT *sender_ptr, Index_Redirect*);
alt_status trigger(const COMPONENT_template& sender_template, COMPONENT *sender_ptr, Index_Redirect*);
alt_status receive(const OneM2M__Types::MsgIn_template& value_template, OneM2M__Types::MsgIn *value_redirect, const COMPONENT_template& sender_template, COMPONENT *sender_ptr, Index_Redirect*);
alt_status check_receive(const OneM2M__Types::MsgIn_template& value_template, OneM2M__Types::MsgIn *value_redirect, const COMPONENT_template& sender_template, COMPONENT *sender_ptr, Index_Redirect*);
alt_status trigger(const OneM2M__Types::MsgIn_template& value_template, OneM2M__Types::MsgIn *value_redirect, const COMPONENT_template& sender_template, COMPONENT *sender_ptr, Index_Redirect*);
alt_status receive(const Socket__API__Definitions::PortEvent_template& value_template, Socket__API__Definitions::PortEvent *value_redirect, const COMPONENT_template& sender_template, COMPONENT *sender_ptr, Index_Redirect*);
alt_status check_receive(const Socket__API__Definitions::PortEvent_template& value_template, Socket__API__Definitions::PortEvent *value_redirect, const COMPONENT_template& sender_template, COMPONENT *sender_ptr, Index_Redirect*);
alt_status trigger(const Socket__API__Definitions::PortEvent_template& value_template, Socket__API__Definitions::PortEvent *value_redirect, const COMPONENT_template& sender_template, COMPONENT *sender_ptr, Index_Redirect*);
private:
void incoming_message(const IPL4asp__Types::ASP__RecvFrom& incoming_par, component sender_component);
void incoming_message(const Socket__API__Definitions::PortEvent& incoming_par, component sender_component);
protected:
void incoming_message(const IPL4asp__Types::ASP__RecvFrom& incoming_par);
void incoming_message(const Socket__API__Definitions::PortEvent& incoming_par);
boolean process_message(const char *message_type, Text_Buf& incoming_buf, component sender_component, OCTETSTRING& slider);
};

class AdapterControlPort_BASE : public PORT {
enum msg_selection { MESSAGE_0 };
struct msg_queue_item : public msg_queue_item_base {
msg_selection item_selection;
union {
OneM2M__Types::AcResponsePrimitive *message_0;
};
component sender_component;
};

void remove_msg_queue_head();
protected:
void clear_queue();
public:
AdapterControlPort_BASE(const char *par_port_name);
~AdapterControlPort_BASE();
void send(const OneM2M__Types::AcRequestPrimitive& send_par, const COMPONENT& destination_component);
void send(const OneM2M__Types::AcRequestPrimitive& send_par);
void send(const OneM2M__Types::AcRequestPrimitive_template& send_par, const COMPONENT& destination_component);
void send(const OneM2M__Types::AcRequestPrimitive_template& send_par);
protected:
virtual void outgoing_send(const OneM2M__Types::AcRequestPrimitive& send_par) = 0;
public:
alt_status receive(const COMPONENT_template& sender_template, COMPONENT *sender_ptr, Index_Redirect*);
alt_status check_receive(const COMPONENT_template& sender_template, COMPONENT *sender_ptr, Index_Redirect*);
alt_status trigger(const COMPONENT_template& sender_template, COMPONENT *sender_ptr, Index_Redirect*);
alt_status receive(const OneM2M__Types::AcResponsePrimitive_template& value_template, OneM2M__Types::AcResponsePrimitive *value_redirect, const COMPONENT_template& sender_template, COMPONENT *sender_ptr, Index_Redirect*);
alt_status check_receive(const OneM2M__Types::AcResponsePrimitive_template& value_template, OneM2M__Types::AcResponsePrimitive *value_redirect, const COMPONENT_template& sender_template, COMPONENT *sender_ptr, Index_Redirect*);
alt_status trigger(const OneM2M__Types::AcResponsePrimitive_template& value_template, OneM2M__Types::AcResponsePrimitive *value_redirect, const COMPONENT_template& sender_template, COMPONENT *sender_ptr, Index_Redirect*);
private:
void incoming_message(const OneM2M__Types::AcResponsePrimitive& incoming_par, component sender_component);
protected:
inline void incoming_message(const OneM2M__Types::AcResponsePrimitive& incoming_par) { incoming_message(incoming_par, SYSTEM_COMPREF); }
boolean process_message(const char *message_type, Text_Buf& incoming_buf, component sender_component, OCTETSTRING& slider);
};


/* Global variable declarations */

extern TTCN_Module module_object;

} /* end of namespace */

/* Test port header files */

#include "AdapterControlPort.hh"

#endif