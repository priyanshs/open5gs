/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Contents"
 * 	found in "../support/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER -no-gen-JER`
 */

#ifndef	_S1AP_E_RABToBeModifiedListBearerModInd_H_
#define	_S1AP_E_RABToBeModifiedListBearerModInd_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_E-RAB-IE-ContainerList.h"

#ifdef __cplusplus
extern "C" {
#endif

/* S1AP_E-RABToBeModifiedListBearerModInd */
typedef S1AP_E_RAB_IE_ContainerList_1280P7_t	 S1AP_E_RABToBeModifiedListBearerModInd_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_S1AP_E_RABToBeModifiedListBearerModInd_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_E_RABToBeModifiedListBearerModInd;
asn_struct_free_f S1AP_E_RABToBeModifiedListBearerModInd_free;
asn_struct_print_f S1AP_E_RABToBeModifiedListBearerModInd_print;
asn_constr_check_f S1AP_E_RABToBeModifiedListBearerModInd_constraint;
per_type_decoder_f S1AP_E_RABToBeModifiedListBearerModInd_decode_aper;
per_type_encoder_f S1AP_E_RABToBeModifiedListBearerModInd_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_E_RABToBeModifiedListBearerModInd_H_ */
#include <asn_internal.h>
