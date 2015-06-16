// -----------------------------------------------------------------------------
// Copyright (C) Cambridge Silicon Radio plc 2013             http://www.csr.com
// Generated by ../../util/CommonParameters/DerivationEngine.py
// source v1.1, namespace com.csr.cps.2 on 2014-08-15 11:12:47 by wasbu_build
// from $Id: //depot/bg/adk3.5-release/dsp/lib_private/cvc_handsfree/cvc_handsfree.xml#2 $
// last modifed with $Change: 1938571 $ by $Author: gh01 $ on $DateTime: 2014/07/11 19:22:43 $
// -----------------------------------------------------------------------------
#ifndef __CVC_HANDSFREE_LIBRARY_GEN_H__
#define __CVC_HANDSFREE_LIBRARY_GEN_H__

// Algorithm IDs
.CONST $CVC_HANDSFREE_SYSID     	0xA00B;

// Piecewise Enables
.CONST $M.CVC_HANDSFREE.CONFIG.CNGENA           		0x008000;
.CONST $M.CVC_HANDSFREE.CONFIG.RERENA           		0x004000;
.CONST $M.CVC_HANDSFREE.CONFIG.PLCENA           		0x002000;
.CONST $M.CVC_HANDSFREE.CONFIG.SNDAGCBYP        		0x001000;
.CONST $M.CVC_HANDSFREE.CONFIG.BEXENA           		0x000800;
.CONST $M.CVC_HANDSFREE.CONFIG.AEQBYP           		0x000400;
.CONST $M.CVC_HANDSFREE.CONFIG.NDVCBYP          		0x000200;
.CONST $M.CVC_HANDSFREE.CONFIG.RCVAGCBYP        		0x000100;
.CONST $M.CVC_HANDSFREE.CONFIG.SND2OMSBYP       		0x000080;
.CONST $M.CVC_HANDSFREE.CONFIG.RCVOMSBYP        		0x000040;
.CONST $M.CVC_HANDSFREE.CONFIG.RERCBAENA        		0x000020;
.CONST $M.CVC_HANDSFREE.CONFIG.WNRBYP           		0x000008;
.CONST $M.CVC_HANDSFREE.CONFIG.BYPASS_AGCPERSIST		0x040000;

// SPI Status Block
.CONST $M.CVC_HANDSFREE.STATUS.CUR_MODE_OFFSET      		0;
.CONST $M.CVC_HANDSFREE.STATUS.CALL_STATE_OFFSET    		1;
.CONST $M.CVC_HANDSFREE.STATUS.SYS_CONTROL_OFFSET   		2;
.CONST $M.CVC_HANDSFREE.STATUS.CUR_DAC_OFFSET       		3;
.CONST $M.CVC_HANDSFREE.STATUS.PRIM_PSKEY_OFFSET    		4;
.CONST $M.CVC_HANDSFREE.STATUS.SEC_STAT_OFFSET      		5;
.CONST $M.CVC_HANDSFREE.STATUS.PEAK_DAC_OFFSET      		6;
.CONST $M.CVC_HANDSFREE.STATUS.PEAK_ADC_OFFSET      		7;
.CONST $M.CVC_HANDSFREE.STATUS.PEAK_SCO_IN_OFFSET   		8;
.CONST $M.CVC_HANDSFREE.STATUS.PEAK_SCO_OUT_OFFSET  		9;
.CONST $M.CVC_HANDSFREE.STATUS.PEAK_MIPS_OFFSET     		10;
.CONST $M.CVC_HANDSFREE.STATUS.NDVC_NOISE_EST_OFFSET		11;
.CONST $M.CVC_HANDSFREE.STATUS.NDVC_DAC_ADJ_OFFSET  		12;
.CONST $M.CVC_HANDSFREE.STATUS.PEAK_AUX_OFFSET      		13;
.CONST $M.CVC_HANDSFREE.STATUS.COMPILED_CONFIG      		14;
.CONST $M.CVC_HANDSFREE.STATUS.VOLUME               		15;
.CONST $M.CVC_HANDSFREE.STATUS.CONNSTAT             		16;
.CONST $M.CVC_HANDSFREE.STATUS.PLC_PACKET_LOSS      		17;
.CONST $M.CVC_HANDSFREE.STATUS.AEQ_GAIN_LOW         		18;
.CONST $M.CVC_HANDSFREE.STATUS.AEQ_GAIN_HIGH        		19;
.CONST $M.CVC_HANDSFREE.STATUS.AEQ_STATE            		20;
.CONST $M.CVC_HANDSFREE.STATUS.AEQ_POWER_TEST       		21;
.CONST $M.CVC_HANDSFREE.STATUS.AEQ_TONE_POWER       		22;
.CONST $M.CVC_HANDSFREE.STATUS.NLP_TIER_HC_ACTIVE   		23;
.CONST $M.CVC_HANDSFREE.STATUS.AEC_COUPLING_OFFSET  		24;
.CONST $M.CVC_HANDSFREE.STATUS.VAD_RCV_DET_OFFSET   		25;
.CONST $M.CVC_HANDSFREE.STATUS.SND_AGC_SPEECH_LVL   		26;
.CONST $M.CVC_HANDSFREE.STATUS.SND_AGC_GAIN         		27;
.CONST $M.CVC_HANDSFREE.STATUS.RCV_AGC_SPEECH_LVL   		28;
.CONST $M.CVC_HANDSFREE.STATUS.RCV_AGC_GAIN         		29;
.CONST $M.CVC_HANDSFREE.STATUS.WNR_PWR_LVL          		30;
.CONST $M.CVC_HANDSFREE.STATUS.INTERFACE_TYPE       		31;
.CONST $M.CVC_HANDSFREE.STATUS.INPUT_RATE           		32;
.CONST $M.CVC_HANDSFREE.STATUS.OUTPUT_RATE          		33;
.CONST $M.CVC_HANDSFREE.STATUS.CODEC_RATE           		34;
.CONST $M.CVC_HANDSFREE.STATUS.BLOCK_SIZE                		35;

// System Mode
.CONST $M.CVC_HANDSFREE.SYSMODE.STANDBY		0;
.CONST $M.CVC_HANDSFREE.SYSMODE.HFK    		1;
.CONST $M.CVC_HANDSFREE.SYSMODE.SSR    		2;
.CONST $M.CVC_HANDSFREE.SYSMODE.PSTHRGH		3;
.CONST $M.CVC_HANDSFREE.SYSMODE.LPBACK 		4;
.CONST $M.CVC_HANDSFREE.SYSMODE.MAX_MODES		6;

// Call State
.CONST $M.CVC_HANDSFREE.CALLST.UNKNOWN   		0;
.CONST $M.CVC_HANDSFREE.CALLST.CONNECTED 		1;
.CONST $M.CVC_HANDSFREE.CALLST.CONNECTING		2;
.CONST $M.CVC_HANDSFREE.CALLST.MUTE      		3;

// System Control
.CONST $M.CVC_HANDSFREE.CONTROL.DAC_OVERRIDE      		0x8000;
.CONST $M.CVC_HANDSFREE.CONTROL.CALLSTATE_OVERRIDE		0x4000;
.CONST $M.CVC_HANDSFREE.CONTROL.MODE_OVERRIDE     		0x2000;

// AEQ State

// System Control

// NLP State

// Interface
.CONST $M.CVC_HANDSFREE.INTERFACE.ANALOG		0;
.CONST $M.CVC_HANDSFREE.INTERFACE.I2S   		1;

// Parameter Block
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_HFK_CONFIG               		0;
// Send OMS
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_HFK_OMS_AGGR             		1;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SSR_OMS_AGGR             		2;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_OMS_HARMONICITY          		3;
// Wind Noise
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_WNR_AGGR                 		4;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_WNR_POWER_THRES          		5;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_WNR_HOLD                 		6;
// AEC parameters :: The DSP/UFE software assumes that the following thirteen AEC parameters are contiguous: Do not re-order them
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_CNG_Q                    		7;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_CNG_SHAPE                		8;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_DTC_AGGR                 		9;
// RER
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RER_AGGRESSIVENESS       		10;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RER_WGT_SY               		11;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RER_OFFSET_SY            		12;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RER_POWER                		13;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RER_VAR_THRESH           		14;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RERDT_OFF_THRESHOLD      		15;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RERDT_AGGRESSIVENESS     		16;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RERDT_POWER              		17;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_MAX_LPWRX_MARGIN         		18;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_AEC_REF_LPWR_HB          		19;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_ADCGAIN                  		20;
// NDVC
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_NDVC_HYSTERESIS          		21;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_NDVC_ATK_TC              		22;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_NDVC_DEC_TC              		23;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_NDVC_NUMVOLSTEPS         		24;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_NDVC_MAXNOISELVL         		25;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_NDVC_MINNOISELVL         		26;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_NDVC_LB                  		27;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_NDVC_HB                  		28;
// Send PEQ
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_PEQ_CONFIG           		29;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_PEQ_GAIN_EXP         		30;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_PEQ_GAIN_MANT        		31;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_PEQ_STAGE1_B2        		32;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_PEQ_STAGE1_B1        		33;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_PEQ_STAGE1_B0        		34;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_PEQ_STAGE1_A2        		35;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_PEQ_STAGE1_A1        		36;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_PEQ_STAGE2_B2        		37;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_PEQ_STAGE2_B1        		38;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_PEQ_STAGE2_B0        		39;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_PEQ_STAGE2_A2        		40;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_PEQ_STAGE2_A1        		41;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_PEQ_STAGE3_B2        		42;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_PEQ_STAGE3_B1        		43;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_PEQ_STAGE3_B0        		44;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_PEQ_STAGE3_A2        		45;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_PEQ_STAGE3_A1        		46;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_PEQ_STAGE4_B2        		47;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_PEQ_STAGE4_B1        		48;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_PEQ_STAGE4_B0        		49;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_PEQ_STAGE4_A2        		50;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_PEQ_STAGE4_A1        		51;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_PEQ_STAGE5_B2        		52;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_PEQ_STAGE5_B1        		53;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_PEQ_STAGE5_B0        		54;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_PEQ_STAGE5_A2        		55;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_PEQ_STAGE5_A1        		56;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_PEQ_SCALE1           		57;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_PEQ_SCALE2           		58;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_PEQ_SCALE3           		59;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_PEQ_SCALE4           		60;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_PEQ_SCALE5           		61;
// Receive PEQ
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_PEQ_CONFIG           		62;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_PEQ_GAIN_EXP         		63;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_PEQ_GAIN_MANT        		64;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_PEQ_STAGE1_B2        		65;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_PEQ_STAGE1_B1        		66;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_PEQ_STAGE1_B0        		67;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_PEQ_STAGE1_A2        		68;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_PEQ_STAGE1_A1        		69;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_PEQ_STAGE2_B2        		70;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_PEQ_STAGE2_B1        		71;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_PEQ_STAGE2_B0        		72;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_PEQ_STAGE2_A2        		73;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_PEQ_STAGE2_A1        		74;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_PEQ_STAGE3_B2        		75;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_PEQ_STAGE3_B1        		76;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_PEQ_STAGE3_B0        		77;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_PEQ_STAGE3_A2        		78;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_PEQ_STAGE3_A1        		79;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_PEQ_STAGE4_B2        		80;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_PEQ_STAGE4_B1        		81;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_PEQ_STAGE4_B0        		82;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_PEQ_STAGE4_A2        		83;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_PEQ_STAGE4_A1        		84;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_PEQ_STAGE5_B2        		85;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_PEQ_STAGE5_B1        		86;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_PEQ_STAGE5_B0        		87;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_PEQ_STAGE5_A2        		88;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_PEQ_STAGE5_A1        		89;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_PEQ_SCALE1           		90;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_PEQ_SCALE2           		91;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_PEQ_SCALE3           		92;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_PEQ_SCALE4           		93;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_PEQ_SCALE5           		94;
// Inverse DAC Table
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_INV_DAC_GAIN_TABLE       		95;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_INV_DAC_GAIN_TABLE1      		96;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_INV_DAC_GAIN_TABLE2      		97;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_INV_DAC_GAIN_TABLE3      		98;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_INV_DAC_GAIN_TABLE4      		99;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_INV_DAC_GAIN_TABLE5      		100;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_INV_DAC_GAIN_TABLE6      		101;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_INV_DAC_GAIN_TABLE7      		102;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_INV_DAC_GAIN_TABLE8      		103;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_INV_DAC_GAIN_TABLE9      		104;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_INV_DAC_GAIN_TABLE10     		105;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_INV_DAC_GAIN_TABLE11     		106;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_INV_DAC_GAIN_TABLE12     		107;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_INV_DAC_GAIN_TABLE13     		108;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_INV_DAC_GAIN_TABLE14     		109;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_INV_DAC_GAIN_TABLE15     		110;
// sidetone and clipper
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SIDETONE_GAIN            		111;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_CLIP_POINT               		112;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SIDETONE_LIMIT           		113;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_BOOST                    		114;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_BOOST_CLIP_POINT         		115;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_G_ALFA                   		116;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SNDGAIN_MANTISSA         		117;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SNDGAIN_EXPONENT         		118;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCVGAIN_MANTISSA         		119;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCVGAIN_EXPONENT         		120;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_PT_SNDGAIN_MANTISSA      		121;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_PT_SNDGAIN_EXPONENT      		122;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_PT_RCVGAIN_MANTISSA      		123;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_PT_RCVGAIN_EXPONENT      		124;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_REF_DELAY                		125;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_ADCGAIN_SSR              		126;
// Send VAD
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_VAD_ATTACK_TC        		127;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_VAD_DECAY_TC         		128;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_VAD_ENVELOPE_TC      		129;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_VAD_INIT_FRAME_THRESH		130;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_VAD_RATIO            		131;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_VAD_MIN_SIGNAL       		132;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_VAD_MIN_MAX_ENVELOPE 		133;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_VAD_DELTA_THRESHOLD  		134;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_VAD_COUNT_THRESHOLD  		135;
// Send AGC
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_AGC_G_INITIAL        		136;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_AGC_TARGET           		137;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_AGC_ATTACK_TC        		138;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_AGC_DECAY_TC         		139;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_AGC_A_90_PK          		140;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_AGC_D_90_PK          		141;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_AGC_G_MAX            		142;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_AGC_START_COMP       		143;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_AGC_COMP             		144;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_AGC_INP_THRESH       		145;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_AGC_SP_ATTACK        		146;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_AGC_AD_THRESH1       		147;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_AGC_AD_THRESH2       		148;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_AGC_G_MIN            		149;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SND_AGC_ECHO_HOLD_TIME   		150;
// Receive VAD
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_VAD_ATTACK_TC        		151;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_VAD_DECAY_TC         		152;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_VAD_ENVELOPE_TC      		153;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_VAD_INIT_FRAME_THRESH		154;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_VAD_RATIO            		155;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_VAD_MIN_SIGNAL       		156;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_VAD_MIN_MAX_ENVELOPE 		157;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_VAD_DELTA_THRESHOLD  		158;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_VAD_COUNT_THRESHOLD  		159;
// Receive AGC
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_AGC_G_INITIAL        		160;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_AGC_TARGET           		161;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_AGC_ATTACK_TC        		162;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_AGC_DECAY_TC         		163;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_AGC_A_90_PK          		164;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_AGC_D_90_PK          		165;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_AGC_G_MAX            		166;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_AGC_START_COMP       		167;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_AGC_COMP             		168;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_AGC_INP_THRESH       		169;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_AGC_SP_ATTACK        		170;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_AGC_AD_THRESH1       		171;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_AGC_AD_THRESH2       		172;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_AGC_G_MIN            		173;
// Adaptive EQ
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_AEQ_ATK_TC               		174;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_AEQ_ATK_1MTC             		175;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_AEQ_DEC_TC               		176;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_AEQ_DEC_1MTC             		177;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_AEQ_LO_GOAL_LOW          		178;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_AEQ_LO_GOAL_MID          		179;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_AEQ_LO_GOAL_HIGH         		180;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_AEQ_HI_GOAL_LOW          		181;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_AEQ_HI_GOAL_MID          		182;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_AEQ_HI_GOAL_HIGH         		183;
// Bandwidth Expansion
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_BEX_HI2_GOAL_LOW         		184;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_BEX_HI2_GOAL_MID         		185;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_BEX_HI2_GOAL_HIGH        		186;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_BEX_TOTAL_ATT_LOW        		187;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_BEX_TOTAL_ATT_MID        		188;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_BEX_TOTAL_ATT_HIGH       		189;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_BEX_NOISE_LVL_FLAGS      		190;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_BEX_LOW_STEP             		191;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_BEX_HIGH_STEP            		192;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_AEQ_POWER_TH             		193;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_AEQ_MIN_GAIN             		194;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_AEQ_MAX_GAIN             		195;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_AEQ_VOL_STEP_UP_TH1      		196;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_AEQ_VOL_STEP_UP_TH2      		197;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_AEQ_LOW_STEP             		198;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_AEQ_LOW_STEP_INV         		199;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_AEQ_HIGH_STEP            		200;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_AEQ_HIGH_STEP_INV        		201;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_AEQ_LOW_BAND_INDEX       		202;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_AEQ_LOW_BANDWIDTH        		203;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_AEQ_LOG2_LOW_BANDWIDTH   		204;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_AEQ_MID_BANDWIDTH        		205;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_AEQ_LOG2_MID_BANDWIDTH   		206;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_AEQ_HIGH_BANDWIDTH       		207;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_AEQ_LOG2_HIGH_BANDWIDTH  		208;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_AEQ_MID1_BAND_INDEX      		209;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_AEQ_MID2_BAND_INDEX      		210;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_AEQ_HIGH_BAND_INDEX      		211;
// Packet Loss
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_PLC_STAT_INTERVAL        		212;
// Receive OMS
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_RCV_OMS_HFK_AGGR         		213;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_OMS_HI_RES_MODE          		214;
// Noise Level w/ State Machine
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_VSM_HB_TIER1             		215;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_VSM_LB_TIER1             		216;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_VSM_MAX_ATT_TIER1        		217;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_FDNLP_HB_TIER1           		218;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_FDNLP_LB_TIER1           		219;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_FDNLP_MB_TIER1           		220;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_FDNLP_NBINS_TIER1        		221;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_FDNLP_ATT_TIER1          		222;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_FDNLP_ATT_THRESH_TIER1   		223;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_FDNLP_ECHO_THRESH_TIER1  		224;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_TIER2_THRESH             		225;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_VSM_HB_TIER2             		226;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_VSM_LB_TIER2             		227;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_VSM_MAX_ATT_TIER2        		228;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_FDNLP_HB_TIER2           		229;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_FDNLP_LB_TIER2           		230;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_FDNLP_MB_TIER2           		231;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_FDNLP_NBINS_TIER2        		232;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_FDNLP_ATT_TIER2          		233;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_FDNLP_ATT_THRESH_TIER2   		234;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_FDNLP_ECHO_THRESH_TIER2  		235;
// Howling
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_HD_THRESH_GAIN           		236;
// Power Margin
// Aux Gain
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_AUX_GAIN                 		237;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_SCO_STREAM_MIX           		238;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_AUX_STREAM_MIX           		239;
// User params
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_DSP_USER_0               		240;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_DSP_USER_1               		241;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_DSP_USER_2               		242;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_DSP_USER_3               		243;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_DSP_USER_4               		244;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_DSP_USER_5               		245;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_DSP_USER_6               		246;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_DSP_USER_7               		247;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_DSP_USER_8               		248;
.CONST $M.CVC_HANDSFREE.PARAMETERS.OFFSET_DSP_USER_9               		249;
.CONST $M.CVC_HANDSFREE.PARAMETERS.STRUCT_SIZE                    		250;


#endif // __CVC_HANDSFREE_LIBRARY_GEN_H__
