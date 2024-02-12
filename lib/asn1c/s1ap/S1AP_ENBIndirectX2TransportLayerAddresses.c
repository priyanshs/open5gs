/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER -no-gen-JER`
 */

#include "S1AP_ENBIndirectX2TransportLayerAddresses.h"

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_S1AP_ENBIndirectX2TransportLayerAddresses_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (SIZE(1..2)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_S1AP_ENBIndirectX2TransportLayerAddresses_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (3 << 2)),
		0,
		&asn_DEF_S1AP_TransportLayerAddress,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_S1AP_ENBIndirectX2TransportLayerAddresses_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_S1AP_ENBIndirectX2TransportLayerAddresses_specs_1 = {
	sizeof(struct S1AP_ENBIndirectX2TransportLayerAddresses),
	offsetof(struct S1AP_ENBIndirectX2TransportLayerAddresses, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_ENBIndirectX2TransportLayerAddresses = {
	"ENBIndirectX2TransportLayerAddresses",
	"ENBIndirectX2TransportLayerAddresses",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_S1AP_ENBIndirectX2TransportLayerAddresses_tags_1,
	sizeof(asn_DEF_S1AP_ENBIndirectX2TransportLayerAddresses_tags_1)
		/sizeof(asn_DEF_S1AP_ENBIndirectX2TransportLayerAddresses_tags_1[0]), /* 1 */
	asn_DEF_S1AP_ENBIndirectX2TransportLayerAddresses_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_ENBIndirectX2TransportLayerAddresses_tags_1)
		/sizeof(asn_DEF_S1AP_ENBIndirectX2TransportLayerAddresses_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_S1AP_ENBIndirectX2TransportLayerAddresses_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_S1AP_ENBIndirectX2TransportLayerAddresses_1,
	1,	/* Single element */
	&asn_SPC_S1AP_ENBIndirectX2TransportLayerAddresses_specs_1	/* Additional specs */
};

