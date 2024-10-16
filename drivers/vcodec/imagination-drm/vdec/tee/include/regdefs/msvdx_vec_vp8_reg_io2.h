/*!
 *****************************************************************************
 *
 * @File       msvdx_vec_vp8_reg_io2.h
 * @Description    This file contains the MSVDX_VEC_VP8_REG_IO2_H Definitions.
 * ---------------------------------------------------------------------------
 *
 * Copyright (c) Imagination Technologies Ltd.
 * 
 * The contents of this file are subject to the MIT license as set out below.
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a 
 * copy of this software and associated documentation files (the "Software"), 
 * to deal in the Software without restriction, including without limitation 
 * the rights to use, copy, modify, merge, publish, distribute, sublicense, 
 * and/or sell copies of the Software, and to permit persons to whom the 
 * Software is furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in 
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, 
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN 
 * THE SOFTWARE.
 * 
 * Alternatively, the contents of this file may be used under the terms of the 
 * GNU General Public License Version 2 ("GPL")in which case the provisions of
 * GPL are applicable instead of those above. 
 * 
 * If you wish to allow use of your version of this file only under the terms 
 * of GPL, and not to allow others to use your version of this file under the 
 * terms of the MIT license, indicate your decision by deleting the provisions 
 * above and replace them with the notice and other provisions required by GPL 
 * as set out in the file called "GPLHEADER" included in this distribution. If 
 * you do not delete the provisions above, a recipient may use your version of 
 * this file under the terms of either the MIT license or GPL.
 * 
 * This License is also included in this distribution in the file called 
 * "MIT_COPYING".
 *
 *****************************************************************************/


#if !defined (__MSVDX_VEC_VP8_REG_IO2_H__)
#define __MSVDX_VEC_VP8_REG_IO2_H__

#ifdef __cplusplus
extern "C" {
#endif


#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PARTITION_SIZE_N_OFFSET		(0x0230)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PARTITION_SIZE_N_STRIDE		(4)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PARTITION_SIZE_N_NO_ENTRIES		(8)

/* MSVDX_VEC_VP8, CR_VEC_VP8_FE_PARTITION_SIZE_N, VP8_FE_PARTITION_SIZE
*/
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PARTITION_SIZE_N_VP8_FE_PARTITION_SIZE_MASK		(0x0FFFFFFF)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PARTITION_SIZE_N_VP8_FE_PARTITION_SIZE_LSBMASK		(0x0FFFFFFF)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PARTITION_SIZE_N_VP8_FE_PARTITION_SIZE_SHIFT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PARTITION_SIZE_N_VP8_FE_PARTITION_SIZE_LENGTH		(28)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PARTITION_SIZE_N_VP8_FE_PARTITION_SIZE_DEFAULT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PARTITION_SIZE_N_VP8_FE_PARTITION_SIZE_SIGNED_FIELD	(IMG_FALSE)

#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC0_OFFSET		(0x0200)

/* MSVDX_VEC_VP8, CR_VEC_VP8_FE_PIC0, VP8_FE_FRAME_TYPE
*/
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC0_VP8_FE_FRAME_TYPE_MASK		(0x00000001)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC0_VP8_FE_FRAME_TYPE_LSBMASK		(0x00000001)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC0_VP8_FE_FRAME_TYPE_SHIFT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC0_VP8_FE_FRAME_TYPE_LENGTH		(1)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC0_VP8_FE_FRAME_TYPE_DEFAULT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC0_VP8_FE_FRAME_TYPE_SIGNED_FIELD	(IMG_FALSE)

enum MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC0_VP8_FE_FRAME_TYPE_ENUM {
	MSVDX_VEC_VP8_VP8_FE_FRAME_TYPE_INTER = 0x1,
	MSVDX_VEC_VP8_VP8_FE_FRAME_TYPE_INTRA = 0x0,
};

/* MSVDX_VEC_VP8, CR_VEC_VP8_FE_PIC0, VP8_FE_NUM_PARTITION_MINUS1
*/
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC0_VP8_FE_NUM_PARTITION_MINUS1_MASK		(0x0000000E)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC0_VP8_FE_NUM_PARTITION_MINUS1_LSBMASK		(0x00000007)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC0_VP8_FE_NUM_PARTITION_MINUS1_SHIFT		(1)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC0_VP8_FE_NUM_PARTITION_MINUS1_LENGTH		(3)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC0_VP8_FE_NUM_PARTITION_MINUS1_DEFAULT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC0_VP8_FE_NUM_PARTITION_MINUS1_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_VP8, CR_VEC_VP8_FE_PIC0, VP8_FE_SEG_ID_CTRL
*/
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC0_VP8_FE_SEG_ID_CTRL_MASK		(0x00000030)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC0_VP8_FE_SEG_ID_CTRL_LSBMASK		(0x00000003)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC0_VP8_FE_SEG_ID_CTRL_SHIFT		(4)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC0_VP8_FE_SEG_ID_CTRL_LENGTH		(2)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC0_VP8_FE_SEG_ID_CTRL_DEFAULT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC0_VP8_FE_SEG_ID_CTRL_SIGNED_FIELD	(IMG_FALSE)

enum MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC0_VP8_FE_SEG_ID_CTRL_ENUM {
	MSVDX_VEC_VP8_VP8_FE_SEG_ID_CTRL_CURRENT = 0x2,
	MSVDX_VEC_VP8_VP8_FE_SEG_ID_CTRL_PREVIOUS = 0x1,
	MSVDX_VEC_VP8_VP8_FE_SEG_ID_CTRL_NONE = 0x0,
};

/* MSVDX_VEC_VP8, CR_VEC_VP8_FE_PIC0, VP8_FE_UPDATE_SEGMENTATION_MAP
*/
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC0_VP8_FE_UPDATE_SEGMENTATION_MAP_MASK		(0x00000100)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC0_VP8_FE_UPDATE_SEGMENTATION_MAP_LSBMASK		(0x00000001)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC0_VP8_FE_UPDATE_SEGMENTATION_MAP_SHIFT		(8)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC0_VP8_FE_UPDATE_SEGMENTATION_MAP_LENGTH		(1)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC0_VP8_FE_UPDATE_SEGMENTATION_MAP_DEFAULT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC0_VP8_FE_UPDATE_SEGMENTATION_MAP_SIGNED_FIELD	(IMG_FALSE)

#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC1_OFFSET		(0x0204)

/* MSVDX_VEC_VP8, CR_VEC_VP8_FE_PIC1, VP8_FE_PIC_HEIGHT_IN_MBS_LESS1
*/
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC1_VP8_FE_PIC_HEIGHT_IN_MBS_LESS1_MASK		(0x0000FF00)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC1_VP8_FE_PIC_HEIGHT_IN_MBS_LESS1_LSBMASK		(0x000000FF)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC1_VP8_FE_PIC_HEIGHT_IN_MBS_LESS1_SHIFT		(8)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC1_VP8_FE_PIC_HEIGHT_IN_MBS_LESS1_LENGTH		(8)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC1_VP8_FE_PIC_HEIGHT_IN_MBS_LESS1_DEFAULT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC1_VP8_FE_PIC_HEIGHT_IN_MBS_LESS1_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_VP8, CR_VEC_VP8_FE_PIC1, VP8_FE_PIC_WIDTH_IN_MBS_LESS1
*/
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC1_VP8_FE_PIC_WIDTH_IN_MBS_LESS1_MASK		(0x000000FF)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC1_VP8_FE_PIC_WIDTH_IN_MBS_LESS1_LSBMASK		(0x000000FF)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC1_VP8_FE_PIC_WIDTH_IN_MBS_LESS1_SHIFT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC1_VP8_FE_PIC_WIDTH_IN_MBS_LESS1_LENGTH		(8)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC1_VP8_FE_PIC_WIDTH_IN_MBS_LESS1_DEFAULT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC1_VP8_FE_PIC_WIDTH_IN_MBS_LESS1_SIGNED_FIELD	(IMG_FALSE)

#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC2_OFFSET		(0x0208)

/* MSVDX_VEC_VP8, CR_VEC_VP8_FE_PIC2, VP8_FE_DECODE_PRED_NOT_COEFFS
*/
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC2_VP8_FE_DECODE_PRED_NOT_COEFFS_MASK		(0x00000001)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC2_VP8_FE_DECODE_PRED_NOT_COEFFS_LSBMASK		(0x00000001)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC2_VP8_FE_DECODE_PRED_NOT_COEFFS_SHIFT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC2_VP8_FE_DECODE_PRED_NOT_COEFFS_LENGTH		(1)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC2_VP8_FE_DECODE_PRED_NOT_COEFFS_DEFAULT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC2_VP8_FE_DECODE_PRED_NOT_COEFFS_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_VP8, CR_VEC_VP8_FE_PIC2, VP8_FE_MB_NO_COEFF_SKIP
*/
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC2_VP8_FE_MB_NO_COEFF_SKIP_MASK		(0x00000100)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC2_VP8_FE_MB_NO_COEFF_SKIP_LSBMASK		(0x00000001)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC2_VP8_FE_MB_NO_COEFF_SKIP_SHIFT		(8)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC2_VP8_FE_MB_NO_COEFF_SKIP_LENGTH		(1)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC2_VP8_FE_MB_NO_COEFF_SKIP_DEFAULT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC2_VP8_FE_MB_NO_COEFF_SKIP_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_VP8, CR_VEC_VP8_FE_PIC2, VP8_FE_SIGN_BIAS_FOR_GF
*/
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC2_VP8_FE_SIGN_BIAS_FOR_GF_MASK		(0x00010000)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC2_VP8_FE_SIGN_BIAS_FOR_GF_LSBMASK		(0x00000001)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC2_VP8_FE_SIGN_BIAS_FOR_GF_SHIFT		(16)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC2_VP8_FE_SIGN_BIAS_FOR_GF_LENGTH		(1)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC2_VP8_FE_SIGN_BIAS_FOR_GF_DEFAULT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC2_VP8_FE_SIGN_BIAS_FOR_GF_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_VP8, CR_VEC_VP8_FE_PIC2, VP8_FE_SIGN_BIAS_FOR_ALTREF
*/
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC2_VP8_FE_SIGN_BIAS_FOR_ALTREF_MASK		(0x01000000)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC2_VP8_FE_SIGN_BIAS_FOR_ALTREF_LSBMASK		(0x00000001)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC2_VP8_FE_SIGN_BIAS_FOR_ALTREF_SHIFT		(24)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC2_VP8_FE_SIGN_BIAS_FOR_ALTREF_LENGTH		(1)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC2_VP8_FE_SIGN_BIAS_FOR_ALTREF_DEFAULT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC2_VP8_FE_SIGN_BIAS_FOR_ALTREF_SIGNED_FIELD	(IMG_FALSE)

#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_MB_SEGMENT_PROBS_OFFSET		(0x020C)

/* MSVDX_VEC_VP8, CR_VEC_VP8_FE_MB_SEGMENT_PROBS, VP8_FE_SEGMENT_ID_PROB0
*/
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_MB_SEGMENT_PROBS_VP8_FE_SEGMENT_ID_PROB0_MASK		(0x000000FF)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_MB_SEGMENT_PROBS_VP8_FE_SEGMENT_ID_PROB0_LSBMASK		(0x000000FF)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_MB_SEGMENT_PROBS_VP8_FE_SEGMENT_ID_PROB0_SHIFT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_MB_SEGMENT_PROBS_VP8_FE_SEGMENT_ID_PROB0_LENGTH		(8)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_MB_SEGMENT_PROBS_VP8_FE_SEGMENT_ID_PROB0_DEFAULT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_MB_SEGMENT_PROBS_VP8_FE_SEGMENT_ID_PROB0_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_VP8, CR_VEC_VP8_FE_MB_SEGMENT_PROBS, VP8_FE_SEGMENT_ID_PROB1
*/
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_MB_SEGMENT_PROBS_VP8_FE_SEGMENT_ID_PROB1_MASK		(0x0000FF00)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_MB_SEGMENT_PROBS_VP8_FE_SEGMENT_ID_PROB1_LSBMASK		(0x000000FF)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_MB_SEGMENT_PROBS_VP8_FE_SEGMENT_ID_PROB1_SHIFT		(8)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_MB_SEGMENT_PROBS_VP8_FE_SEGMENT_ID_PROB1_LENGTH		(8)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_MB_SEGMENT_PROBS_VP8_FE_SEGMENT_ID_PROB1_DEFAULT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_MB_SEGMENT_PROBS_VP8_FE_SEGMENT_ID_PROB1_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_VP8, CR_VEC_VP8_FE_MB_SEGMENT_PROBS, VP8_FE_SEGMENT_ID_PROB2
*/
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_MB_SEGMENT_PROBS_VP8_FE_SEGMENT_ID_PROB2_MASK		(0x00FF0000)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_MB_SEGMENT_PROBS_VP8_FE_SEGMENT_ID_PROB2_LSBMASK		(0x000000FF)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_MB_SEGMENT_PROBS_VP8_FE_SEGMENT_ID_PROB2_SHIFT		(16)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_MB_SEGMENT_PROBS_VP8_FE_SEGMENT_ID_PROB2_LENGTH		(8)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_MB_SEGMENT_PROBS_VP8_FE_SEGMENT_ID_PROB2_DEFAULT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_MB_SEGMENT_PROBS_VP8_FE_SEGMENT_ID_PROB2_SIGNED_FIELD	(IMG_FALSE)

#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_MB_FLAGS_PROBS_OFFSET		(0x0210)

/* MSVDX_VEC_VP8, CR_VEC_VP8_FE_MB_FLAGS_PROBS, VP8_FE_SKIP_PROB
*/
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_MB_FLAGS_PROBS_VP8_FE_SKIP_PROB_MASK		(0x000000FF)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_MB_FLAGS_PROBS_VP8_FE_SKIP_PROB_LSBMASK		(0x000000FF)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_MB_FLAGS_PROBS_VP8_FE_SKIP_PROB_SHIFT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_MB_FLAGS_PROBS_VP8_FE_SKIP_PROB_LENGTH		(8)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_MB_FLAGS_PROBS_VP8_FE_SKIP_PROB_DEFAULT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_MB_FLAGS_PROBS_VP8_FE_SKIP_PROB_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_VP8, CR_VEC_VP8_FE_MB_FLAGS_PROBS, VP8_FE_INTRA_MB_PROB
*/
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_MB_FLAGS_PROBS_VP8_FE_INTRA_MB_PROB_MASK		(0x0000FF00)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_MB_FLAGS_PROBS_VP8_FE_INTRA_MB_PROB_LSBMASK		(0x000000FF)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_MB_FLAGS_PROBS_VP8_FE_INTRA_MB_PROB_SHIFT		(8)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_MB_FLAGS_PROBS_VP8_FE_INTRA_MB_PROB_LENGTH		(8)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_MB_FLAGS_PROBS_VP8_FE_INTRA_MB_PROB_DEFAULT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_MB_FLAGS_PROBS_VP8_FE_INTRA_MB_PROB_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_VP8, CR_VEC_VP8_FE_MB_FLAGS_PROBS, VP8_FE_LAST_FRAME_PROB
*/
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_MB_FLAGS_PROBS_VP8_FE_LAST_FRAME_PROB_MASK		(0x00FF0000)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_MB_FLAGS_PROBS_VP8_FE_LAST_FRAME_PROB_LSBMASK		(0x000000FF)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_MB_FLAGS_PROBS_VP8_FE_LAST_FRAME_PROB_SHIFT		(16)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_MB_FLAGS_PROBS_VP8_FE_LAST_FRAME_PROB_LENGTH		(8)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_MB_FLAGS_PROBS_VP8_FE_LAST_FRAME_PROB_DEFAULT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_MB_FLAGS_PROBS_VP8_FE_LAST_FRAME_PROB_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_VP8, CR_VEC_VP8_FE_MB_FLAGS_PROBS, VP8_FE_GOLDEN_FRAME_PROB
*/
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_MB_FLAGS_PROBS_VP8_FE_GOLDEN_FRAME_PROB_MASK		(0xFF000000)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_MB_FLAGS_PROBS_VP8_FE_GOLDEN_FRAME_PROB_LSBMASK		(0x000000FF)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_MB_FLAGS_PROBS_VP8_FE_GOLDEN_FRAME_PROB_SHIFT		(24)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_MB_FLAGS_PROBS_VP8_FE_GOLDEN_FRAME_PROB_LENGTH		(8)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_MB_FLAGS_PROBS_VP8_FE_GOLDEN_FRAME_PROB_DEFAULT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_MB_FLAGS_PROBS_VP8_FE_GOLDEN_FRAME_PROB_SIGNED_FIELD	(IMG_FALSE)

#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_SEG_ID_BASE_ADDRESS_OFFSET		(0x0214)

/* MSVDX_VEC_VP8, CR_VEC_VP8_FE_SEG_ID_BASE_ADDRESS, VP8_FE_SEG_ID_BASE_ADDRESS
*/
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_SEG_ID_BASE_ADDRESS_VP8_FE_SEG_ID_BASE_ADDRESS_MASK		(0xFFFFF000)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_SEG_ID_BASE_ADDRESS_VP8_FE_SEG_ID_BASE_ADDRESS_LSBMASK		(0x000FFFFF)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_SEG_ID_BASE_ADDRESS_VP8_FE_SEG_ID_BASE_ADDRESS_SHIFT		(12)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_SEG_ID_BASE_ADDRESS_VP8_FE_SEG_ID_BASE_ADDRESS_LENGTH		(20)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_SEG_ID_BASE_ADDRESS_VP8_FE_SEG_ID_BASE_ADDRESS_DEFAULT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_SEG_ID_BASE_ADDRESS_VP8_FE_SEG_ID_BASE_ADDRESS_SIGNED_FIELD	(IMG_FALSE)

#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC_MB_FLAGS_BASE_ADDRESS_OFFSET		(0x0220)

/* MSVDX_VEC_VP8, CR_VEC_VP8_FE_PIC_MB_FLAGS_BASE_ADDRESS, VP8_FE_PIC_MB_BASE_ADDRESS
*/
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC_MB_FLAGS_BASE_ADDRESS_VP8_FE_PIC_MB_BASE_ADDRESS_MASK		(0xFFFFFFFF)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC_MB_FLAGS_BASE_ADDRESS_VP8_FE_PIC_MB_BASE_ADDRESS_LSBMASK		(0xFFFFFFFF)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC_MB_FLAGS_BASE_ADDRESS_VP8_FE_PIC_MB_BASE_ADDRESS_SHIFT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC_MB_FLAGS_BASE_ADDRESS_VP8_FE_PIC_MB_BASE_ADDRESS_LENGTH		(32)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC_MB_FLAGS_BASE_ADDRESS_VP8_FE_PIC_MB_BASE_ADDRESS_DEFAULT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_PIC_MB_FLAGS_BASE_ADDRESS_VP8_FE_PIC_MB_BASE_ADDRESS_SIGNED_FIELD	(IMG_FALSE)

#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_DCT_BASE_ADDRESS_OFFSET		(0x0224)

/* MSVDX_VEC_VP8, CR_VEC_VP8_FE_DCT_BASE_ADDRESS, VP8_FE_DCT_BASE_ADDRESS
*/
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_DCT_BASE_ADDRESS_VP8_FE_DCT_BASE_ADDRESS_MASK		(0xFFFFFFFF)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_DCT_BASE_ADDRESS_VP8_FE_DCT_BASE_ADDRESS_LSBMASK		(0xFFFFFFFF)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_DCT_BASE_ADDRESS_VP8_FE_DCT_BASE_ADDRESS_SHIFT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_DCT_BASE_ADDRESS_VP8_FE_DCT_BASE_ADDRESS_LENGTH		(32)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_DCT_BASE_ADDRESS_VP8_FE_DCT_BASE_ADDRESS_DEFAULT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_FE_DCT_BASE_ADDRESS_VP8_FE_DCT_BASE_ADDRESS_SIGNED_FIELD	(IMG_FALSE)

#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_PIC0_OFFSET		(0x0250)

/* MSVDX_VEC_VP8, CR_VEC_VP8_BE_PIC0, VP8_BE_FRAME_TYPE
*/
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_PIC0_VP8_BE_FRAME_TYPE_MASK		(0x00000001)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_PIC0_VP8_BE_FRAME_TYPE_LSBMASK		(0x00000001)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_PIC0_VP8_BE_FRAME_TYPE_SHIFT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_PIC0_VP8_BE_FRAME_TYPE_LENGTH		(1)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_PIC0_VP8_BE_FRAME_TYPE_DEFAULT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_PIC0_VP8_BE_FRAME_TYPE_SIGNED_FIELD	(IMG_FALSE)

#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_PIC1_OFFSET		(0x0254)

/* MSVDX_VEC_VP8, CR_VEC_VP8_BE_PIC1, VP8_BE_PIC_HEIGHT_IN_MBS_LESS1
*/
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_PIC1_VP8_BE_PIC_HEIGHT_IN_MBS_LESS1_MASK		(0x0000FF00)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_PIC1_VP8_BE_PIC_HEIGHT_IN_MBS_LESS1_LSBMASK		(0x000000FF)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_PIC1_VP8_BE_PIC_HEIGHT_IN_MBS_LESS1_SHIFT		(8)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_PIC1_VP8_BE_PIC_HEIGHT_IN_MBS_LESS1_LENGTH		(8)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_PIC1_VP8_BE_PIC_HEIGHT_IN_MBS_LESS1_DEFAULT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_PIC1_VP8_BE_PIC_HEIGHT_IN_MBS_LESS1_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_VP8, CR_VEC_VP8_BE_PIC1, VP8_BE_PIC_WIDTH_IN_MBS_LESS1
*/
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_PIC1_VP8_BE_PIC_WIDTH_IN_MBS_LESS1_MASK		(0x000000FF)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_PIC1_VP8_BE_PIC_WIDTH_IN_MBS_LESS1_LSBMASK		(0x000000FF)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_PIC1_VP8_BE_PIC_WIDTH_IN_MBS_LESS1_SHIFT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_PIC1_VP8_BE_PIC_WIDTH_IN_MBS_LESS1_LENGTH		(8)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_PIC1_VP8_BE_PIC_WIDTH_IN_MBS_LESS1_DEFAULT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_PIC1_VP8_BE_PIC_WIDTH_IN_MBS_LESS1_SIGNED_FIELD	(IMG_FALSE)

#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_PIC2_OFFSET		(0x0258)

/* MSVDX_VEC_VP8, CR_VEC_VP8_BE_PIC2, VP8_BE_DECODE_PRED_NOT_COEFFS
*/
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_PIC2_VP8_BE_DECODE_PRED_NOT_COEFFS_MASK		(0x00000001)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_PIC2_VP8_BE_DECODE_PRED_NOT_COEFFS_LSBMASK		(0x00000001)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_PIC2_VP8_BE_DECODE_PRED_NOT_COEFFS_SHIFT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_PIC2_VP8_BE_DECODE_PRED_NOT_COEFFS_LENGTH		(1)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_PIC2_VP8_BE_DECODE_PRED_NOT_COEFFS_DEFAULT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_PIC2_VP8_BE_DECODE_PRED_NOT_COEFFS_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_VP8, CR_VEC_VP8_BE_PIC2, VP8_BE_USE_STORED_SEGMENT_MAP
*/
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_PIC2_VP8_BE_USE_STORED_SEGMENT_MAP_MASK		(0x00000100)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_PIC2_VP8_BE_USE_STORED_SEGMENT_MAP_LSBMASK		(0x00000001)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_PIC2_VP8_BE_USE_STORED_SEGMENT_MAP_SHIFT		(8)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_PIC2_VP8_BE_USE_STORED_SEGMENT_MAP_LENGTH		(1)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_PIC2_VP8_BE_USE_STORED_SEGMENT_MAP_DEFAULT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_PIC2_VP8_BE_USE_STORED_SEGMENT_MAP_SIGNED_FIELD	(IMG_FALSE)

#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QINDEXMAP_OFFSET		(0x02E4)

/* MSVDX_VEC_VP8, CR_VEC_VP8_BE_QINDEXMAP, VP8_BE_QINDEX_SEG0_DEFAULT
*/
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QINDEXMAP_VP8_BE_QINDEX_SEG0_DEFAULT_MASK		(0x000000FF)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QINDEXMAP_VP8_BE_QINDEX_SEG0_DEFAULT_LSBMASK		(0x000000FF)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QINDEXMAP_VP8_BE_QINDEX_SEG0_DEFAULT_SHIFT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QINDEXMAP_VP8_BE_QINDEX_SEG0_DEFAULT_LENGTH		(8)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QINDEXMAP_VP8_BE_QINDEX_SEG0_DEFAULT_DEFAULT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QINDEXMAP_VP8_BE_QINDEX_SEG0_DEFAULT_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_VP8, CR_VEC_VP8_BE_QINDEXMAP, VP8_BE_QINDEX_SEG1
*/
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QINDEXMAP_VP8_BE_QINDEX_SEG1_MASK		(0x0000FF00)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QINDEXMAP_VP8_BE_QINDEX_SEG1_LSBMASK		(0x000000FF)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QINDEXMAP_VP8_BE_QINDEX_SEG1_SHIFT		(8)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QINDEXMAP_VP8_BE_QINDEX_SEG1_LENGTH		(8)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QINDEXMAP_VP8_BE_QINDEX_SEG1_DEFAULT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QINDEXMAP_VP8_BE_QINDEX_SEG1_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_VP8, CR_VEC_VP8_BE_QINDEXMAP, VP8_BE_QINDEX_SEG2
*/
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QINDEXMAP_VP8_BE_QINDEX_SEG2_MASK		(0x00FF0000)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QINDEXMAP_VP8_BE_QINDEX_SEG2_LSBMASK		(0x000000FF)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QINDEXMAP_VP8_BE_QINDEX_SEG2_SHIFT		(16)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QINDEXMAP_VP8_BE_QINDEX_SEG2_LENGTH		(8)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QINDEXMAP_VP8_BE_QINDEX_SEG2_DEFAULT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QINDEXMAP_VP8_BE_QINDEX_SEG2_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_VP8, CR_VEC_VP8_BE_QINDEXMAP, VP8_BE_QINDEX_SEG3
*/
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QINDEXMAP_VP8_BE_QINDEX_SEG3_MASK		(0xFF000000)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QINDEXMAP_VP8_BE_QINDEX_SEG3_LSBMASK		(0x000000FF)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QINDEXMAP_VP8_BE_QINDEX_SEG3_SHIFT		(24)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QINDEXMAP_VP8_BE_QINDEX_SEG3_LENGTH		(8)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QINDEXMAP_VP8_BE_QINDEX_SEG3_DEFAULT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QINDEXMAP_VP8_BE_QINDEX_SEG3_SIGNED_FIELD	(IMG_FALSE)

#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QDELTAS_OFFSET		(0x02E8)

/* MSVDX_VEC_VP8, CR_VEC_VP8_BE_QDELTAS, VP8_BE_YDC_DELTA
*/
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QDELTAS_VP8_BE_YDC_DELTA_MASK		(0x1F000000)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QDELTAS_VP8_BE_YDC_DELTA_LSBMASK		(0x0000001F)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QDELTAS_VP8_BE_YDC_DELTA_SHIFT		(24)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QDELTAS_VP8_BE_YDC_DELTA_LENGTH		(5)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QDELTAS_VP8_BE_YDC_DELTA_DEFAULT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QDELTAS_VP8_BE_YDC_DELTA_SIGNED_FIELD	(IMG_TRUE)

/* MSVDX_VEC_VP8, CR_VEC_VP8_BE_QDELTAS, VP8_BE_Y2DC_DELTA
*/
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QDELTAS_VP8_BE_Y2DC_DELTA_MASK		(0x001F0000)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QDELTAS_VP8_BE_Y2DC_DELTA_LSBMASK		(0x0000001F)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QDELTAS_VP8_BE_Y2DC_DELTA_SHIFT		(16)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QDELTAS_VP8_BE_Y2DC_DELTA_LENGTH		(5)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QDELTAS_VP8_BE_Y2DC_DELTA_DEFAULT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QDELTAS_VP8_BE_Y2DC_DELTA_SIGNED_FIELD	(IMG_TRUE)

/* MSVDX_VEC_VP8, CR_VEC_VP8_BE_QDELTAS, VP8_BE_Y2AC_DELTA
*/
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QDELTAS_VP8_BE_Y2AC_DELTA_MASK		(0x00007C00)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QDELTAS_VP8_BE_Y2AC_DELTA_LSBMASK		(0x0000001F)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QDELTAS_VP8_BE_Y2AC_DELTA_SHIFT		(10)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QDELTAS_VP8_BE_Y2AC_DELTA_LENGTH		(5)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QDELTAS_VP8_BE_Y2AC_DELTA_DEFAULT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QDELTAS_VP8_BE_Y2AC_DELTA_SIGNED_FIELD	(IMG_TRUE)

/* MSVDX_VEC_VP8, CR_VEC_VP8_BE_QDELTAS, VP8_BE_UVDC_DELTA
*/
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QDELTAS_VP8_BE_UVDC_DELTA_MASK		(0x000003E0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QDELTAS_VP8_BE_UVDC_DELTA_LSBMASK		(0x0000001F)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QDELTAS_VP8_BE_UVDC_DELTA_SHIFT		(5)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QDELTAS_VP8_BE_UVDC_DELTA_LENGTH		(5)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QDELTAS_VP8_BE_UVDC_DELTA_DEFAULT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QDELTAS_VP8_BE_UVDC_DELTA_SIGNED_FIELD	(IMG_TRUE)

/* MSVDX_VEC_VP8, CR_VEC_VP8_BE_QDELTAS, VP8_BE_UVAC_DELTA
*/
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QDELTAS_VP8_BE_UVAC_DELTA_MASK		(0x0000001F)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QDELTAS_VP8_BE_UVAC_DELTA_LSBMASK		(0x0000001F)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QDELTAS_VP8_BE_UVAC_DELTA_SHIFT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QDELTAS_VP8_BE_UVAC_DELTA_LENGTH		(5)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QDELTAS_VP8_BE_UVAC_DELTA_DEFAULT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_QDELTAS_VP8_BE_UVAC_DELTA_SIGNED_FIELD	(IMG_TRUE)

#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_VLR_BASE_ADDR_OFFSET		(0x02F0)

/* MSVDX_VEC_VP8, CR_VEC_VP8_BE_VLR_BASE_ADDR, VP8_BE_DP_BUFFER_VLR_BASE_ADDR
*/
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_VLR_BASE_ADDR_VP8_BE_DP_BUFFER_VLR_BASE_ADDR_MASK		(0x00000FFF)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_VLR_BASE_ADDR_VP8_BE_DP_BUFFER_VLR_BASE_ADDR_LSBMASK		(0x00000FFF)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_VLR_BASE_ADDR_VP8_BE_DP_BUFFER_VLR_BASE_ADDR_SHIFT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_VLR_BASE_ADDR_VP8_BE_DP_BUFFER_VLR_BASE_ADDR_LENGTH		(12)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_VLR_BASE_ADDR_VP8_BE_DP_BUFFER_VLR_BASE_ADDR_DEFAULT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_VLR_BASE_ADDR_VP8_BE_DP_BUFFER_VLR_BASE_ADDR_SIGNED_FIELD	(IMG_FALSE)

#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_BASE_ADDR_1STPART_PIC_OFFSET		(0x02EC)

/* MSVDX_VEC_VP8, CR_VEC_VP8_BE_BASE_ADDR_1STPART_PIC, VP8_BE_BASE_ADDR_1STPART_PIC
*/
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_BASE_ADDR_1STPART_PIC_VP8_BE_BASE_ADDR_1STPART_PIC_MASK		(0xFFFFF000)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_BASE_ADDR_1STPART_PIC_VP8_BE_BASE_ADDR_1STPART_PIC_LSBMASK		(0x000FFFFF)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_BASE_ADDR_1STPART_PIC_VP8_BE_BASE_ADDR_1STPART_PIC_SHIFT		(12)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_BASE_ADDR_1STPART_PIC_VP8_BE_BASE_ADDR_1STPART_PIC_LENGTH		(20)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_BASE_ADDR_1STPART_PIC_VP8_BE_BASE_ADDR_1STPART_PIC_DEFAULT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_BASE_ADDR_1STPART_PIC_VP8_BE_BASE_ADDR_1STPART_PIC_SIGNED_FIELD	(IMG_FALSE)

#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_BASE_ADDR_CURR_OFFSET		(0x02F8)

/* MSVDX_VEC_VP8, CR_VEC_VP8_BE_BASE_ADDR_CURR, VP8_BE_BASE_ADDR_CUR_PIC
*/
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_BASE_ADDR_CURR_VP8_BE_BASE_ADDR_CUR_PIC_MASK		(0xFFFFF000)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_BASE_ADDR_CURR_VP8_BE_BASE_ADDR_CUR_PIC_LSBMASK		(0x000FFFFF)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_BASE_ADDR_CURR_VP8_BE_BASE_ADDR_CUR_PIC_SHIFT		(12)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_BASE_ADDR_CURR_VP8_BE_BASE_ADDR_CUR_PIC_LENGTH		(20)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_BASE_ADDR_CURR_VP8_BE_BASE_ADDR_CUR_PIC_DEFAULT		(0)
#define MSVDX_VEC_VP8_CR_VEC_VP8_BE_BASE_ADDR_CURR_VP8_BE_BASE_ADDR_CUR_PIC_SIGNED_FIELD	(IMG_FALSE)



#ifdef __cplusplus
}
#endif

#endif /* __MSVDX_VEC_VP8_REG_IO2_H__ */
