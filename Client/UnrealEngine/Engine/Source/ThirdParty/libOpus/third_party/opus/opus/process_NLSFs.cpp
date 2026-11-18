// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_process_NLSFs @ 14f892194

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void silk_process_NLSFs(longlong param_1,void *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_e8 [32];
  int local_c8;
  undefined4 local_c0;
  int local_b8;
  short local_a8 [16];
  undefined1 local_88 [32];
  short local_68 [16];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  bVar3 = true;
  if ((*(int *)(param_1 + 0x1218) != 1) && (*(char *)(param_1 + 0x12af) != '\x04')) {
    celt_fatal("assertion failed: psEncC->useInterpolatedNLSFs == 1 || psEncC->indices.NLSFInterpCoef_Q2 == ( 1 << 2 )"
               ,"../../../third_party/opus/src/silk/process_NLSFs.c",0x33);
  }
  iVar5 = (int)((ulonglong)((longlong)*(short *)(param_1 + 0x11b4) * -0x41892) >> 0x10) + 0xc4a;
  if (*(int *)(param_1 + 0x11e4) == 2) {
    iVar5 = iVar5 + (iVar5 >> 1);
  }
  if (iVar5 < 1) {
    celt_fatal("assertion failed: NLSF_mu_Q20 > 0",
               "../../../third_party/opus/src/silk/process_NLSFs.c",0x3f);
  }
  silk_NLSF_VQ_weights_laroia(local_a8,param_3,*(undefined4 *)(param_1 + 0x1220));
  if ((*(int *)(param_1 + 0x1218) == 1) && (*(char *)(param_1 + 0x12af) < '\x04')) {
    local_c8 = *(undefined4 *)(param_1 + 0x1220);
    silk_interpolate(local_88,param_4,param_3,(int)*(char *)(param_1 + 0x12af));
    silk_NLSF_VQ_weights_laroia(local_68,local_88,*(undefined4 *)(param_1 + 0x1220));
    cVar1 = *(char *)(param_1 + 0x12af);
    iVar2 = *(int *)(param_1 + 0x1220);
    if (0 < (longlong)iVar2) {
      lVar4 = 0;
      do {
        local_a8[lVar4] =
             (short)((uint)((int)local_68[lVar4] * (int)(short)((short)cVar1 * (short)cVar1 * 0x800)
                           ) >> 0x10) + (local_a8[lVar4] >> 1);
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar2);
    }
  }
  else {
    bVar3 = false;
  }
  local_b8 = (int)*(char *)(param_1 + 0x12ad);
  local_c0 = *(undefined4 *)(param_1 + 0x1234);
  local_c8 = iVar5;
  silk_NLSF_encode(param_1 + 0x1298,param_3,*(undefined8 *)(param_1 + 0x1260),local_a8);
  silk_NLSF2A((longlong)param_2 + 0x20,param_3,*(undefined4 *)(param_1 + 0x1220),
              *(undefined4 *)(param_1 + 0x13f4));
  iVar5 = *(int *)(param_1 + 0x1220);
  if (bVar3) {
    local_c8 = iVar5;
    silk_interpolate(local_88,param_4,param_3,(int)*(char *)(param_1 + 0x12af));
    silk_NLSF2A(param_2,local_88,*(undefined4 *)(param_1 + 0x1220),*(undefined4 *)(param_1 + 0x13f4)
               );
  }
  else {
    if (0x10 < iVar5) {
      celt_fatal("assertion failed: psEncC->predictLPCOrder <= MAX_LPC_ORDER",
                 "../../../third_party/opus/src/silk/process_NLSFs.c",0x68);
      iVar5 = *(int *)(param_1 + 0x1220);
    }
    memcpy(param_2,(void *)((longlong)param_2 + 0x20),(longlong)iVar5 * 2);
  }
  return;
}

