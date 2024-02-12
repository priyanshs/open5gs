/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER -no-gen-JER`
 */

#ifndef	_S1AP_AreaScopeOfQMC_H_
#define	_S1AP_AreaScopeOfQMC_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_AreaScopeOfQMC_PR {
	S1AP_AreaScopeOfQMC_PR_NOTHING,	/* No components present */
	S1AP_AreaScopeOfQMC_PR_cellBased,
	S1AP_AreaScopeOfQMC_PR_tABased,
	S1AP_AreaScopeOfQMC_PR_tAIBased,
	S1AP_AreaScopeOfQMC_PR_pLMNAreaBased
	/* Extensions may appear below */
	
} S1AP_AreaScopeOfQMC_PR;

/* Forward declarations */
struct S1AP_CellBasedQMC;
struct S1AP_TABasedQMC;
struct S1AP_TAIBasedQMC;
struct S1AP_PLMNAreaBasedQMC;

/* S1AP_AreaScopeOfQMC */
typedef struct S1AP_AreaScopeOfQMC {
	S1AP_AreaScopeOfQMC_PR present;
	union S1AP_AreaScopeOfQMC_u {
		struct S1AP_CellBasedQMC	*cellBased;
		struct S1AP_TABasedQMC	*tABased;
		struct S1AP_TAIBasedQMC	*tAIBased;
		struct S1AP_PLMNAreaBasedQMC	*pLMNAreaBased;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_AreaScopeOfQMC_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_AreaScopeOfQMC;
extern asn_CHOICE_specifics_t asn_SPC_S1AP_AreaScopeOfQMC_specs_1;
extern asn_TYPE_member_t asn_MBR_S1AP_AreaScopeOfQMC_1[4];
extern asn_per_constraints_t asn_PER_type_S1AP_AreaScopeOfQMC_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_AreaScopeOfQMC_H_ */
#include <asn_internal.h>
