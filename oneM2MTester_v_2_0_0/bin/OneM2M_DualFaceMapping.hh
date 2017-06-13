// This C++ header file was generated by the TTCN-3 compiler
// of the TTCN-3 Test Executor version CRL 113 200/6 R1A
// for oneM2MTester (martin@ubuntu) on Wed May 31 13:52:13 2017

// Copyright (c) 2000-2017 Ericsson Telecom AB

// Do not edit this file unless you know what you are doing.

#ifndef OneM2M__DualFaceMapping_HH
#define OneM2M__DualFaceMapping_HH

#ifdef TITAN_RUNTIME_2
#error Generated code does not match with used runtime.\
 Code was generated without -R option but -DTITAN_RUNTIME_2 was used.
#endif

/* Header file includes */

#include <TTCN3.hh>
#include "IPL4asp_PortType.hh"
#include "OneM2M_Primitive_EncDec.hh"
#include "OneM2M_Pixits.hh"
#include "oneM2MTester_Template.hh"

#if TTCN3_VERSION != 60100
#error Version mismatch detected.\
 Please check the version of the TTCN-3 compiler and the base library.\
 Run make clean and rebuild the project if the version of the compiler changed recently.
#endif

#ifndef LINUX
#error This file should be compiled on LINUX
#endif

namespace OneM2M__DualFaceMapping {

/* Function prototypes */

extern CHARSTRING f__primitiveContent__Dec(const CHARSTRING& p__source, const CHARSTRING& p__serialization__type);
extern CHARSTRING f__upper2lower(const CHARSTRING& p__string);
extern CHARSTRING f__serialization__Enc(const CHARSTRING& p__source, const CHARSTRING& p__serialization__type);
extern CHARSTRING f__split(const CHARSTRING& p__cs, const CHARSTRING& p__delim);
extern CoAP__Types::Charstring__List f__split__uri(const CHARSTRING& p__cs, const CHARSTRING& p__delim);
extern CHARSTRING f__replace(const CHARSTRING& p__source, const CHARSTRING& p__str1, const CHARSTRING& p__str2);
extern CHARSTRING f__adressingFormatter(const CHARSTRING& p__source, const CHARSTRING& p__str1, const CHARSTRING& p__str2);
extern void f__enc__M2MPrimitive__to__ASPSend(const OneM2M__Types::MsgOut& p__msgout, IPL4asp__Types::ASP__Send& p__asp__Send);
extern INTEGER f__dec__ASPRecvFrom__to__M2MPrimitive(const IPL4asp__Types::ASP__RecvFrom& p__aspRecvFrom, OneM2M__Types::MsgIn& p__msgin);

/* Global variable declarations */

extern TTCN_Module module_object;

} /* end of namespace */

#endif