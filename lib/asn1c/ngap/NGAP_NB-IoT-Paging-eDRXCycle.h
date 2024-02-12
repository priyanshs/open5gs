/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r17.3.0/38413-h30.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER -no-gen-JER`
 */

#ifndef	_NGAP_NB_IoT_Paging_eDRXCycle_H_
#define	_NGAP_NB_IoT_Paging_eDRXCycle_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_NB_IoT_Paging_eDRXCycle {
	NGAP_NB_IoT_Paging_eDRXCycle_hf2	= 0,
	NGAP_NB_IoT_Paging_eDRXCycle_hf4	= 1,
	NGAP_NB_IoT_Paging_eDRXCycle_hf6	= 2,
	NGAP_NB_IoT_Paging_eDRXCycle_hf8	= 3,
	NGAP_NB_IoT_Paging_eDRXCycle_hf10	= 4,
	NGAP_NB_IoT_Paging_eDRXCycle_hf12	= 5,
	NGAP_NB_IoT_Paging_eDRXCycle_hf14	= 6,
	NGAP_NB_IoT_Paging_eDRXCycle_hf16	= 7,
	NGAP_NB_IoT_Paging_eDRXCycle_hf32	= 8,
	NGAP_NB_IoT_Paging_eDRXCycle_hf64	= 9,
	NGAP_NB_IoT_Paging_eDRXCycle_hf128	= 10,
	NGAP_NB_IoT_Paging_eDRXCycle_hf256	= 11,
	NGAP_NB_IoT_Paging_eDRXCycle_hf512	= 12,
	NGAP_NB_IoT_Paging_eDRXCycle_hf1024	= 13
	/*
	 * Enumeration is extensible
	 */
} e_NGAP_NB_IoT_Paging_eDRXCycle;

/* NGAP_NB-IoT-Paging-eDRXCycle */
typedef long	 NGAP_NB_IoT_Paging_eDRXCycle_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NGAP_NB_IoT_Paging_eDRXCycle_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NGAP_NB_IoT_Paging_eDRXCycle;
extern const asn_INTEGER_specifics_t asn_SPC_NGAP_NB_IoT_Paging_eDRXCycle_specs_1;
asn_struct_free_f NGAP_NB_IoT_Paging_eDRXCycle_free;
asn_struct_print_f NGAP_NB_IoT_Paging_eDRXCycle_print;
asn_constr_check_f NGAP_NB_IoT_Paging_eDRXCycle_constraint;
per_type_decoder_f NGAP_NB_IoT_Paging_eDRXCycle_decode_aper;
per_type_encoder_f NGAP_NB_IoT_Paging_eDRXCycle_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_NB_IoT_Paging_eDRXCycle_H_ */
#include <asn_internal.h>
