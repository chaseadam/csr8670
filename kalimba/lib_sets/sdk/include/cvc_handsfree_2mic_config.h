// -----------------------------------------------------------------------------
// Copyright (C) Cambridge Silicon Radio plc 2013             http://www.csr.com
// Generated by ../../util/CommonParameters/DerivationEngine.py
// source v1.1, namespace com.csr.cps.2 on 2014-08-15 11:12:48 by wasbu_build
// from $Id: //depot/bg/adk3.5-release/dsp/lib_private/cvc_handsfree_2mic/cvc_handsfree_2mic.xml#2 $
// last modifed with $Change: 1938571 $ by $Author: gh01 $ on $DateTime: 2014/07/11 19:22:43 $
// -----------------------------------------------------------------------------
#ifndef __CVC_HANDSFREE_2MIC_CONFIG_H__
#define __CVC_HANDSFREE_2MIC_CONFIG_H__

#define uses_RCV_AGC             	1
#define uses_DCBLOCK             	1
#define uses_RCV_PEQ             	1
#define uses_SND_PEQ             	1
#define uses_NSVOLUME            	1
#define uses_AEC                 	1
#define uses_ADF                 	1
#define uses_SND_NS              	1
#define uses_SND_AGC             	1
#define uses_NONLINEAR_PROCESSING	1
#define uses_RCV_NS              	1
#define uses_AEQ                 	1
#define uses_PLC                 	1
#define uses_HOWLING_CONTROL     	1
#define uses_R_DIGITAL_MIC       	0
#define uses_L_DIGITAL_MIC       	0
#define uses_BF                  	1
#define uses_AED                 	1
#define uses_TWOCH_NC            	1
#define uses_TMP                 	1

#define flag_uses_RCV_AGC             	0x008000
#define flag_uses_DCBLOCK             	0x004000
#define flag_uses_RCV_PEQ             	0x002000
#define flag_uses_SND_PEQ             	0x001000
#define flag_uses_NSVOLUME            	0x000800
#define flag_uses_AEC                 	0x000400
#define flag_uses_ADF                 	0x000001
#define flag_uses_SND_NS              	0x000002
#define flag_uses_SND_AGC             	0x000100
#define flag_uses_NONLINEAR_PROCESSING	0x000080
#define flag_uses_RCV_NS              	0x000040
#define flag_uses_AEQ                 	0x000020
#define flag_uses_PLC                 	0x000010
#define flag_uses_HOWLING_CONTROL     	0x000008
#define flag_uses_R_DIGITAL_MIC       	0x200000
#define flag_uses_L_DIGITAL_MIC       	0x100000
#define flag_uses_BF                  	0x010000
#define flag_uses_AED                 	0x020000
#define flag_uses_TWOCH_NC            	0x040000
#define flag_uses_TMP                 	0x080000


// Bit-mask flags to return in SPI status, which tells the Parameter Manager
// (Windows Realtime Tuning GUI) which modules are included in the build.  The
// mask is also written to the kap file so that the build configuration can be
// identified using a text editor.

#define CVC_HANDSFREE_2MIC_CONFIG_FLAG	uses_RCV_AGC*flag_uses_RCV_AGC +  uses_DCBLOCK*flag_uses_DCBLOCK +  uses_RCV_PEQ*flag_uses_RCV_PEQ +  uses_SND_PEQ*flag_uses_SND_PEQ +  uses_NSVOLUME*flag_uses_NSVOLUME +  uses_AEC*flag_uses_AEC +  uses_ADF*flag_uses_ADF +  uses_SND_NS*flag_uses_SND_NS +  uses_SND_AGC*flag_uses_SND_AGC +  uses_NONLINEAR_PROCESSING*flag_uses_NONLINEAR_PROCESSING +  uses_RCV_NS*flag_uses_RCV_NS +  uses_AEQ*flag_uses_AEQ +  uses_PLC*flag_uses_PLC +  uses_HOWLING_CONTROL*flag_uses_HOWLING_CONTROL +  uses_R_DIGITAL_MIC*flag_uses_R_DIGITAL_MIC +  uses_L_DIGITAL_MIC*flag_uses_L_DIGITAL_MIC +  uses_BF*flag_uses_BF +  uses_AED*flag_uses_AED +  uses_TWOCH_NC*flag_uses_TWOCH_NC +  uses_TMP*flag_uses_TMP


#endif // __CVC_HANDSFREE_2MIC_CONFIG_H__
