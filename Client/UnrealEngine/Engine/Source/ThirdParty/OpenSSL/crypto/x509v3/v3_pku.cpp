// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 5

// FUN_14f781500 @ 14f781500

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f781500(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  BIO_printf(param_3,"%*s",param_4,"");
  if (*param_2 != 0) {
    BIO_write(param_3,"Not Before: ",0xc);
    ASN1_GENERALIZEDTIME_print(param_3,*param_2);
    if (param_2[1] == 0) {
      return 1;
    }
    BIO_write(param_3,", ",2);
  }
  if (param_2[1] != 0) {
    BIO_write(param_3,"Not After: ",0xb);
    ASN1_GENERALIZEDTIME_print(param_3,param_2[1]);
  }
  return 1;
}

// PKEY_USAGE_PERIOD_free @ 14f7815d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKEY_USAGE_PERIOD_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534da650);
  return;
}

// PKEY_USAGE_PERIOD_new @ 14f781600

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKEY_USAGE_PERIOD_new(void)

{
  ASN1_item_new(&DAT_1534da650);
  return;
}

// d2i_PKEY_USAGE_PERIOD @ 14f781630

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_PKEY_USAGE_PERIOD(void)

{
  ASN1_item_d2i();
  return;
}

// i2d_PKEY_USAGE_PERIOD @ 14f781660

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_PKEY_USAGE_PERIOD(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534da650);
  return;
}

