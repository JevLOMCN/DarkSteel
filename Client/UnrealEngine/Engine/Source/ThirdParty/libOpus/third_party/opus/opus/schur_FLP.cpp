// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_schur_FLP @ 14f88c220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float silk_schur_FLP(longlong param_1,longlong param_2,uint param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  undefined1 (*pauVar5) [16];
  longlong lVar6;
  double *pdVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  double dVar14;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8 [8];
  double adStack_1a0 [49];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  uVar9 = (ulonglong)(int)param_3;
  if (0x18 < param_3) {
    celt_fatal("assertion failed: order >= 0 && order <= SILK_MAX_ORDER_LPC",
               "../../../third_party/opus/src/silk/float/schur_FLP.c",0x2c);
  }
  pauVar5 = (undefined1 (*) [16])local_1a8;
  lVar4 = 0;
  do {
    lVar6 = lVar4 * 4;
    lVar4 = lVar4 + 1;
    dVar14 = (double)*(float *)(param_2 + lVar6);
    auVar3._8_4_ = SUB84(dVar14,0);
    auVar3._0_8_ = dVar14;
    auVar3._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
    *pauVar5 = auVar3;
    pauVar5 = pauVar5 + 1;
  } while (lVar4 <= (longlong)uVar9);
  if (0 < (int)param_3) {
    lVar4 = 0;
    lVar6 = 8;
    uVar10 = uVar9;
    do {
      uVar12 = SUB84(adStack_1a0[0],0);
      uVar13 = (undefined4)((ulonglong)adStack_1a0[0] >> 0x20);
      iVar8 = (int)uVar10;
      lVar11 = (longlong)iVar8;
      if (adStack_1a0[0] <= __real_3e112e0be0000000) {
        uVar12 = SUB84(__real_3e112e0be0000000,0);
        uVar13 = (undefined4)((ulonglong)__real_3e112e0be0000000 >> 0x20);
      }
      dVar14 = *(double *)((longlong)adStack_1a0 + lVar6) / (double)CONCAT44(uVar13,uVar12);
      dVar14 = (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) ^
                                __xmm_80000000000000008000000000000000._4_4_,
                                SUB84(dVar14,0) ^ (uint)__xmm_80000000000000008000000000000000);
      *(float *)(param_1 + lVar4 * 4) = (float)dVar14;
      if (0 < iVar8) {
        pdVar7 = adStack_1a0;
        do {
          dVar1 = *pdVar7;
          dVar2 = *(double *)(lVar6 + (longlong)pdVar7);
          *(double *)(lVar6 + (longlong)pdVar7) = dVar1 * dVar14 + dVar2;
          *pdVar7 = dVar2 * dVar14 + dVar1;
          pdVar7 = pdVar7 + 2;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      uVar10 = (ulonglong)(iVar8 - 1);
      lVar4 = lVar4 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar4 < (longlong)uVar9);
  }
  return (float)adStack_1a0[0];
}

