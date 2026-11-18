// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 1

// EC_GROUP_check @ 14f78ca80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong EC_GROUP_check(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar4;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar9 = 0x14f78ca98;
  lVar4 = 0;
  lVar3 = 0;
  lVar6 = 0;
  if ((*(byte *)*param_1 & 2) == 0) {
    lVar7 = lVar4;
    lVar5 = lVar4;
    if ((param_2 == 0) && (param_2 = BN_CTX_new(), lVar7 = param_2, param_2 == 0)) {
      ERR_put_error(0x10,0xaa,0x41,"crypto\\ec\\ec_check.c",CONCAT44(uVar8,0x1b),uVar9);
      lVar6 = lVar4;
    }
    else {
      iVar1 = EC_GROUP_check_discriminant(param_1,param_2);
      if (iVar1 == 0) {
        ERR_put_error(0x10,0xaa,0x76,"crypto\\ec\\ec_check.c",CONCAT44(uVar8,0x22),uVar9);
      }
      else if (param_1[1] == 0) {
        ERR_put_error(0x10,0xaa,0x71,"crypto\\ec\\ec_check.c",CONCAT44(uVar8,0x28),uVar9);
      }
      else {
        iVar1 = EC_POINT_is_on_curve(param_1,param_1[1],param_2);
        lVar5 = lVar3;
        if (iVar1 < 1) {
          ERR_put_error(0x10,0xaa,0x6b,"crypto\\ec\\ec_check.c",CONCAT44(uVar8,0x2c),uVar9);
        }
        else {
          lVar6 = EC_POINT_new(param_1);
          if ((lVar6 != 0) && (lVar2 = EC_GROUP_get0_order(param_1), lVar5 = lVar4, lVar2 != 0)) {
            iVar1 = BN_is_zero(lVar2);
            if (iVar1 == 0) {
              uVar8 = 0;
              iVar1 = EC_POINT_mul(param_1,lVar6,lVar2,0,0,param_2);
              if (iVar1 != 0) {
                iVar1 = EC_POINT_is_at_infinity(param_1,lVar6);
                if (iVar1 == 0) {
                  ERR_put_error(0x10,0xaa,0x7a,"crypto\\ec\\ec_check.c",CONCAT44(uVar8,0x3e));
                  lVar5 = lVar3;
                }
                else {
                  lVar5 = 1;
                }
              }
            }
            else {
              ERR_put_error(0x10,0xaa,0x80,"crypto\\ec\\ec_check.c",CONCAT44(uVar8,0x37));
            }
          }
        }
      }
    }
    BN_CTX_free(lVar7);
    EC_POINT_free(lVar6);
  }
  else {
    lVar5 = 1;
  }
  return lVar5;
}

