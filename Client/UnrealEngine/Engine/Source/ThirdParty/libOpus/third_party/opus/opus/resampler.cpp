// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 2

// silk_resampler @ 14f87e624

undefined8 silk_resampler(longlong param_1,void *param_2,void *param_3,int param_4)

{
  void *_Src;
  size_t _Size;
  int iVar1;
  int iVar2;
  void *_Src_00;
  
  iVar1 = *(int *)(param_1 + 0x11c);
  if (param_4 < iVar1) {
    celt_fatal("assertion failed: inLen >= S->Fs_in_kHz",
               "../../../third_party/opus/src/silk/resampler.c",0xb8);
    iVar1 = *(int *)(param_1 + 0x11c);
  }
  iVar2 = *(int *)(param_1 + 0x124);
  if (iVar1 < iVar2) {
    celt_fatal("assertion failed: S->inputDelay <= S->Fs_in_kHz",
               "../../../third_party/opus/src/silk/resampler.c",0xba);
    iVar1 = *(int *)(param_1 + 0x11c);
    iVar2 = *(int *)(param_1 + 0x124);
  }
  _Size = (longlong)(iVar1 - iVar2) * 2;
  memcpy((void *)(param_1 + ((longlong)iVar2 + 0x54) * 2),param_3,_Size);
  iVar1 = *(int *)(param_1 + 0x108);
  _Src = (void *)(param_1 + 0xa8);
  _Src_00 = (void *)(_Size + (longlong)param_3);
  if (iVar1 == 1) {
    silk_resampler_private_up2_HQ_wrapper(param_1,param_2,_Src);
    silk_resampler_private_up2_HQ_wrapper
              (param_1,(void *)((longlong)param_2 + (longlong)*(int *)(param_1 + 0x120) * 2),_Src_00
               ,param_4 - *(int *)(param_1 + 0x11c));
  }
  else if (iVar1 == 2) {
    silk_resampler_private_IIR_FIR(param_1,param_2,_Src);
    silk_resampler_private_IIR_FIR
              (param_1,(void *)((longlong)param_2 + (longlong)*(int *)(param_1 + 0x120) * 2),_Src_00
               ,param_4 - *(int *)(param_1 + 0x11c));
  }
  else if (iVar1 == 3) {
    silk_resampler_private_down_FIR(param_1,param_2,_Src);
    silk_resampler_private_down_FIR
              (param_1,(void *)((longlong)param_2 + (longlong)*(int *)(param_1 + 0x120) * 2),_Src_00
               ,param_4 - *(int *)(param_1 + 0x11c));
  }
  else {
    memcpy(param_2,_Src,(longlong)*(int *)(param_1 + 0x11c) * 2);
    memcpy((void *)((longlong)param_2 + (longlong)*(int *)(param_1 + 0x120) * 2),_Src_00,
           (longlong)(param_4 - *(int *)(param_1 + 0x11c)) * 2);
  }
  memcpy(_Src,(void *)((longlong)param_3 + (longlong)(param_4 - *(int *)(param_1 + 0x124)) * 2),
         (longlong)*(int *)(param_1 + 0x124) * 2);
  return 0;
}

// silk_resampler_init @ 14f87e7f0

undefined8 silk_resampler_init(void *param_1,int param_2,int param_3,int param_4)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  
  memset(param_1,0,0x130);
  bVar5 = false;
  if (param_4 == 0) {
    if ((((param_2 != 8000) && (param_2 != 12000)) && (param_2 != 16000)) ||
       (((param_3 != 8000 && (param_3 != 12000)) &&
        ((param_3 != 16000 && ((param_3 != 24000 && (param_3 != 48000)))))))) {
      uVar4 = 0x65;
      goto LAB_14f87e86a;
    }
    cVar2 = (&DAT_153514472)
            [((longlong)(int)((param_2 >> 0xc) - (uint)(16000 < param_2)) >> (24000 < param_2)) * 5
             + ((longlong)(int)((param_3 >> 0xc) - (uint)(16000 < param_3)) >> (24000 < param_3))];
  }
  else {
    if (((((param_2 != 8000) && (param_2 != 12000)) && (param_2 != 16000)) &&
        ((param_2 != 24000 && (param_2 != 48000)))) ||
       ((param_3 != 8000 && ((param_3 != 12000 && (param_3 != 16000)))))) {
      uVar4 = 0x5e;
      goto LAB_14f87e86a;
    }
    cVar2 = (&DAT_153514464)
            [((longlong)(int)((param_2 >> 0xc) - (uint)(16000 < param_2)) >> (24000 < param_2)) * 3
             + ((longlong)(int)((param_3 >> 0xc) - (uint)(16000 < param_3)) >> (24000 < param_3))];
  }
  *(int *)((longlong)param_1 + 0x124) = (int)cVar2;
  *(int *)((longlong)param_1 + 0x11c) = param_2 / 1000;
  *(int *)((longlong)param_1 + 0x120) = param_3 / 1000;
  *(int *)((longlong)param_1 + 0x10c) = (param_2 / 1000) * 10;
  if (param_2 < param_3) {
    bVar5 = param_3 != param_2 * 2;
    *(uint *)((longlong)param_1 + 0x108) = bVar5 + 1;
  }
  else if (param_3 < param_2) {
    *(undefined4 *)((longlong)param_1 + 0x108) = 3;
    if (param_3 << 2 == param_2 * 3) {
      *(undefined4 *)((longlong)param_1 + 0x118) = 3;
      puVar1 = &silk_Resampler_3_4_COEFS;
      *(undefined4 *)((longlong)param_1 + 0x114) = 0x12;
    }
    else if (param_3 * 3 == param_2 * 2) {
      *(undefined4 *)((longlong)param_1 + 0x118) = 2;
      puVar1 = &silk_Resampler_2_3_COEFS;
      *(undefined4 *)((longlong)param_1 + 0x114) = 0x12;
    }
    else {
      if (param_3 * 2 == param_2) {
        *(undefined4 *)((longlong)param_1 + 0x114) = 0x18;
        puVar1 = &silk_Resampler_1_2_COEFS;
      }
      else {
        if (param_3 * 3 == param_2) {
          puVar1 = &silk_Resampler_1_3_COEFS;
        }
        else if (param_3 << 2 == param_2) {
          puVar1 = &silk_Resampler_1_4_COEFS;
        }
        else {
          if (param_3 * 6 != param_2) {
            uVar4 = 0x9a;
LAB_14f87e86a:
            celt_fatal("assertion failed: 0","../../../third_party/opus/src/silk/resampler.c",uVar4)
            ;
            return 0xffffffff;
          }
          puVar1 = &silk_Resampler_1_6_COEFS;
        }
        *(undefined4 *)((longlong)param_1 + 0x114) = 0x24;
      }
      *(undefined4 *)((longlong)param_1 + 0x118) = 1;
    }
    *(undefined **)((longlong)param_1 + 0x128) = puVar1;
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x108) = 0;
  }
  iVar3 = (param_2 << bVar5 + 0xe) / param_3 << 2;
  *(int *)((longlong)param_1 + 0x110) = iVar3;
  if ((int)((ulonglong)((longlong)iVar3 * (longlong)param_3) >> 0x10) < param_2 << bVar5) {
    do {
      iVar3 = iVar3 + 1;
    } while ((int)((ulonglong)((longlong)iVar3 * (longlong)param_3) >> 0x10) < param_2 << bVar5);
    *(int *)((longlong)param_1 + 0x110) = iVar3;
  }
  return 0;
}

