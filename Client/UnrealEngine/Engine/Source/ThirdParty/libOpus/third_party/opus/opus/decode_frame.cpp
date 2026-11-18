// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_decode_frame @ 14f8846ac

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
silk_decode_frame(longlong param_1,undefined8 param_2,void *param_3,int *param_4,int param_5,
                 undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  size_t _Size;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined8 uStack_100;
  undefined1 auStack_f8 [32];
  undefined4 local_d8 [4];
  undefined1 local_c8 [136];
  undefined4 local_40;
  int *local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)&local_38;
  iVar3 = *(int *)(param_1 + 0x918);
  puVar10 = auStack_f8;
  local_40 = 0;
  local_38 = param_4;
  if (0x13f < iVar3 - 1U) {
    uStack_100 = 0x14f88472e;
    celt_fatal("assertion failed: L > 0 && L <= MAX_FRAME_LENGTH",
               "../../../third_party/opus/src/silk/decode_frame.c",0x3a);
  }
  if ((param_5 == 0) ||
     ((param_5 == 2 && (*(int *)(param_1 + 0x980 + (longlong)*(int *)(param_1 + 0x960) * 4) == 1))))
  {
    uVar5 = ((longlong)(iVar3 + 0xf) & 0xfffffffffffffff0U) * 2;
    uVar8 = uVar5 + 0xf;
    if (uVar8 <= uVar5) {
      uVar8 = 0xffffffffffffff0;
    }
    uStack_100 = 0x14f8847a4;
    lVar6 = -(uVar8 & 0xfffffffffffffff0);
    puVar10 = auStack_f8 + lVar6;
    uVar4 = *(undefined4 *)(param_1 + 0x960);
    *(undefined4 *)((longlong)local_d8 + lVar6) = param_6;
    *(undefined8 *)(auStack_f8 + lVar6 + -8) = 0x14f8847c5;
    silk_decode_indices(param_1,param_2,uVar4);
    cVar1 = *(char *)(param_1 + 0xae6);
    cVar2 = *(char *)(param_1 + 0xae5);
    *(undefined4 *)((longlong)local_d8 + lVar6) = *(undefined4 *)(param_1 + 0x918);
    *(undefined8 *)(auStack_f8 + lVar6 + -8) = 0x14f8847ea;
    silk_decode_pulses(param_2,local_c8 + lVar6,(int)cVar2,(int)cVar1);
    *(undefined8 *)(auStack_f8 + lVar6 + -8) = 0x14f8847f8;
    silk_decode_parameters(param_1,local_c8,param_6);
    *(undefined4 *)((longlong)local_d8 + lVar6) = param_7;
    *(undefined8 *)(auStack_f8 + lVar6 + -8) = 0x14f884810;
    silk_decode_core(param_1,local_c8,param_3,local_c8 + lVar6);
    *(undefined4 *)((longlong)local_d8 + lVar6) = param_7;
    *(undefined8 *)(auStack_f8 + lVar6 + -8) = 0x14f884825;
    silk_PLC(param_1,local_c8,param_3,0);
    *(undefined4 *)(param_1 + 0x1058) = 0;
    *(int *)(param_1 + 0x105c) = (int)*(char *)(param_1 + 0xae5);
    if (2 < (uint)(int)*(char *)(param_1 + 0xae5)) {
      *(undefined8 *)(auStack_f8 + lVar6 + -8) = 0x14f884857;
      celt_fatal("assertion failed: psDec->prevSignalType >= 0 && psDec->prevSignalType <= 2",
                 "../../../third_party/opus/src/silk/decode_frame.c",0x5e);
    }
    *(undefined4 *)(param_1 + 0x948) = 0;
    param_4 = local_38;
  }
  else {
    *(undefined1 *)(param_1 + 0xae5) = *(undefined1 *)(param_1 + 0x105c);
    local_d8[0] = param_7;
    uStack_100 = 0x14f884775;
    silk_PLC(param_1,local_c8,param_3,1);
  }
  iVar7 = *(int *)(param_1 + 0x920);
  iVar9 = *(int *)(param_1 + 0x918);
  if (iVar7 < iVar9) {
    *(undefined8 *)(puVar10 + -8) = 0x14f88488b;
    celt_fatal("assertion failed: psDec->ltp_mem_length >= psDec->frame_length",
               "../../../third_party/opus/src/silk/decode_frame.c",0x6b);
    iVar7 = *(int *)(param_1 + 0x920);
    iVar9 = *(int *)(param_1 + 0x918);
  }
  _Size = (longlong)(iVar7 - iVar9) * 2;
  *(undefined8 *)(puVar10 + -8) = 0x14f8848bb;
  memmove((void *)(param_1 + 0x544),(void *)(param_1 + ((longlong)iVar9 + 0x2a2) * 2),_Size);
  iVar7 = *(int *)(param_1 + 0x918);
  *(undefined8 *)(puVar10 + -8) = 0x14f8848d7;
  memcpy((void *)(param_1 + 0x544 + _Size),param_3,(longlong)iVar7 * 2);
  *(undefined8 *)(puVar10 + -8) = 0x14f8848e8;
  silk_CNG(param_1,local_c8,param_3,iVar3);
  *(undefined8 *)(puVar10 + -8) = 0x14f8848f6;
  silk_PLC_glue_frames(param_1,param_3,iVar3);
  *(undefined4 *)(param_1 + 0x904) = local_d8[(longlong)*(int *)(param_1 + 0x914) + 3];
  *param_4 = iVar3;
  *(undefined8 *)(puVar10 + -8) = 0x14f884919;
  return 0;
}

