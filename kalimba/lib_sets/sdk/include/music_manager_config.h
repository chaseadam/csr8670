// -----------------------------------------------------------------------------
// Copyright (C) Cambridge Silicon Radio plc 2013             http://www.csr.com
// Generated by ../../util/CommonParameters/DerivationEngine.py
// source v1.1, namespace com.csr.cps.2 on 2014-08-15 11:12:49 by wasbu_build
// from $Id: //depot/bg/adk3.5-release/dsp/lib_private/music_manager/music_manager.xml#1 $
// last modifed with $Change: 1882869 $ by $Author: ws03 $ on $DateTime: 2014/04/23 13:37:24 $
// -----------------------------------------------------------------------------
#ifndef __MUSIC_MANAGER_CONFIG_H__
#define __MUSIC_MANAGER_CONFIG_H__

#define uses_BASS_MANAGER      	1
#define uses_SPKR_EQ           	1
#define uses_BASS_BOOST        	1
#define uses_USER_EQ           	1
#define uses_STEREO_ENHANCEMENT	1
#define uses_DITHER            	1
#define uses_COMPANDER         	1
#define uses_SUBWOOFER         	1
#define uses_VOLUME_CONTROL    	1
#define uses_SIGNAL_DETECTION  	1

#define flag_uses_BASS_MANAGER      	0x040000
#define flag_uses_SPKR_EQ           	0x020000
#define flag_uses_BASS_BOOST        	0x010000
#define flag_uses_USER_EQ           	0x008000
#define flag_uses_STEREO_ENHANCEMENT	0x002000
#define flag_uses_DITHER            	0x001000
#define flag_uses_COMPANDER         	0x000800
#define flag_uses_SUBWOOFER         	0x000400
#define flag_uses_VOLUME_CONTROL    	0x000200
#define flag_uses_SIGNAL_DETECTION  	0x000100


// Bit-mask flags to return in SPI status, which tells the Parameter Manager
// (Windows Realtime Tuning GUI) which modules are included in the build.  The
// mask is also written to the kap file so that the build configuration can be
// identified using a text editor.

#define MUSIC_MANAGER_CONFIG_FLAG	uses_BASS_MANAGER*flag_uses_BASS_MANAGER +  uses_SPKR_EQ*flag_uses_SPKR_EQ +  uses_BASS_BOOST*flag_uses_BASS_BOOST +  uses_USER_EQ*flag_uses_USER_EQ +  uses_STEREO_ENHANCEMENT*flag_uses_STEREO_ENHANCEMENT +  uses_DITHER*flag_uses_DITHER +  uses_COMPANDER*flag_uses_COMPANDER +  uses_SUBWOOFER*flag_uses_SUBWOOFER +  uses_VOLUME_CONTROL*flag_uses_VOLUME_CONTROL +  uses_SIGNAL_DETECTION*flag_uses_SIGNAL_DETECTION


#endif // __MUSIC_MANAGER_CONFIG_H__
