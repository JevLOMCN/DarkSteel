// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 10

// FUN_14f86a008 @ 14f86a008

void FUN_14f86a008(longlong param_1,int param_2,int param_3,float *param_4,int param_5,uint param_6)

{
  float fVar1;
  float fVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  float fVar5;
  
  fVar2 = __real_c7000000;
  fVar1 = __real_46fffe00;
  uVar3 = (ulonglong)param_6;
  if (0 < (int)param_6) {
    if (param_4 == (float *)0x0) {
      puVar4 = (undefined2 *)(param_1 + (longlong)param_3 * 2);
      do {
        *puVar4 = 0;
        puVar4 = puVar4 + param_2;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    else {
      puVar4 = (undefined2 *)(param_1 + (longlong)param_3 * 2);
      do {
        fVar5 = *param_4 * __real_47000000;
        if (*param_4 * __real_47000000 <= fVar2) {
          fVar5 = fVar2;
        }
        if (fVar1 <= fVar5) {
          fVar5 = fVar1;
        }
        param_4 = param_4 + param_5;
        *puVar4 = (short)(int)ROUND(fVar5);
        puVar4 = puVar4 + param_2;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  return;
}

// opus_multistream_decode @ 14f86a0ac

void opus_multistream_decode(void)

{
  opus_multistream_decode_native();
  return;
}

// opus_multistream_decode_float @ 14f86a0f0

void opus_multistream_decode_float(void)

{
  opus_multistream_decode_native();
  return;
}

// opus_multistream_decode_native @ 14f86a134

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong opus_multistream_decode_native
                    (int *param_1,longlong param_2,int param_3,undefined8 param_4,code *param_5,
                    uint param_6,undefined4 param_7,undefined4 param_8,undefined8 param_9)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int *piVar11;
  int iVar12;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [32];
  uint auStack_a8 [4];
  longlong local_98 [2];
  undefined4 local_88 [4];
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  int *local_48;
  longlong local_40;
  ulonglong local_38;
  
  puVar9 = auStack_c8;
  local_38 = __security_cookie.value ^ (ulonglong)&local_78;
  uStack_d0 = 0x14f86a18e;
  local_78 = param_3;
  local_6c = param_3;
  local_58 = param_4;
  local_40 = param_2;
  validate_layout();
  if (0 < (int)param_6) {
    uStack_d0 = 0x14f86a1ad;
    iVar4 = opus_multistream_decoder_ctl(param_1,0xfbd,&local_70);
    if (iVar4 != 0) {
      uStack_d0 = 0x14f86a1ca;
      celt_fatal("assertion failed: (opus_multistream_decoder_ctl(st, 4029, ((&Fs) + ((&Fs) - (opus_int32*)(&Fs))))) == OPUS_OK"
                 ,"../../../third_party/opus/src/src/opus_multistream_decoder.c",0xce);
    }
    uVar6 = (local_70 / 0x19) * 3;
    if ((int)uVar6 <= (int)param_6) {
      param_6 = uVar6;
    }
    uVar8 = (longlong)(int)(param_6 * 2) * 4;
    uVar7 = uVar8 + 0xf;
    if (uVar7 <= uVar8) {
      uVar7 = 0xffffffffffffff0;
    }
    uStack_d0 = 0x14f86a20a;
    local_48 = param_1 + 0x44;
    lVar1 = -(uVar7 & 0xfffffffffffffff0);
    puVar9 = auStack_c8 + lVar1;
    local_60 = (longlong)&local_78 + lVar1;
    *(undefined8 *)(auStack_c8 + lVar1 + -8) = 0x14f86a22b;
    local_50 = opus_decoder_get_size(2);
    *(undefined8 *)(auStack_c8 + lVar1 + -8) = 0x14f86a238;
    local_68 = opus_decoder_get_size(1);
    if (-1 < param_3) {
      if (param_3 != 0) {
        iVar4 = param_1[1];
        if (param_3 < iVar4 * 2 + -1) {
          uVar7 = 0xfffffffc;
          puVar10 = auStack_c8 + lVar1;
          goto LAB_14f86a4bf;
        }
        *(undefined8 *)(auStack_c8 + lVar1 + -8) = 0x14f86a270;
        uVar7 = FUN_14f86aa18(param_2,param_3,iVar4,local_70);
        puVar10 = auStack_c8 + lVar1;
        if ((int)uVar7 < 0) goto LAB_14f86a4bf;
        if ((int)param_6 < (int)uVar7) {
          uVar7 = 0xfffffffe;
          puVar10 = auStack_c8 + lVar1;
          goto LAB_14f86a4bf;
        }
      }
      iVar4 = param_1[1];
      iVar12 = 0;
      uVar7 = (ulonglong)param_6;
      if (0 < iVar4) {
        do {
          piVar11 = local_48;
          lVar2 = local_60;
          iVar5 = local_68;
          if (iVar12 < param_1[2]) {
            iVar5 = local_50;
          }
          local_48 = (int *)((longlong)local_48 + (longlong)(int)(iVar5 + 7U & 0xfffffff8));
          if ((local_6c != 0) && (param_3 < 1)) {
            uVar7 = 0xfffffffd;
            puVar10 = auStack_c8 + lVar1;
            goto LAB_14f86a4bf;
          }
          local_74 = 0;
          *(undefined4 *)((longlong)local_88 + lVar1) = param_8;
          *(int **)((longlong)local_98 + lVar1 + 8) = &local_74;
          *(uint *)((longlong)local_98 + lVar1) = (uint)(iVar12 != iVar4 + -1);
          *(undefined4 *)((longlong)auStack_a8 + lVar1 + 8) = param_7;
          *(int *)((longlong)auStack_a8 + lVar1) = (int)uVar7;
          *(undefined8 *)(auStack_c8 + lVar1 + -8) = 0x14f86a319;
          uVar6 = opus_decode_native(piVar11,param_2,param_3,lVar2);
          uVar7 = (ulonglong)uVar6;
          if (local_6c != 0) {
            local_40 = param_2 + local_74;
            local_78 = param_3 - local_74;
            param_3 = local_78;
          }
          puVar10 = auStack_c8 + lVar1;
          if ((int)uVar6 < 1) goto LAB_14f86a4bf;
          if (iVar12 < param_1[2]) {
            *(undefined8 *)(auStack_c8 + lVar1 + -8) = 0x14f86a354;
            iVar4 = get_left_channel();
            lVar2 = local_60;
            uVar3 = local_58;
            while (local_58 = uVar3, iVar4 != -1) {
              iVar5 = *param_1;
              *(undefined8 *)((longlong)local_98 + lVar1) = param_9;
              *(uint *)((longlong)auStack_a8 + lVar1 + 8) = uVar6;
              *(undefined4 *)((longlong)auStack_a8 + lVar1) = 2;
              *(undefined8 *)(auStack_c8 + lVar1 + -8) = 0x14f86a382;
              (*param_5)(uVar3,iVar5,iVar4,lVar2);
              *(undefined8 *)(auStack_c8 + lVar1 + -8) = 0x14f86a390;
              iVar4 = get_left_channel(param_1,iVar12,iVar4);
              uVar3 = local_58;
              param_3 = local_78;
            }
            *(undefined8 *)(auStack_c8 + lVar1 + -8) = 0x14f86a3a9;
            iVar4 = get_right_channel(param_1,iVar12,0xffffffff);
            lVar2 = local_60;
            uVar3 = local_58;
            while (local_58 = uVar3, iVar4 != -1) {
              iVar5 = *param_1;
              *(undefined8 *)((longlong)local_98 + lVar1) = param_9;
              *(uint *)((longlong)auStack_a8 + lVar1 + 8) = uVar6;
              *(undefined4 *)((longlong)auStack_a8 + lVar1) = 2;
              *(undefined8 *)(auStack_c8 + lVar1 + -8) = 0x14f86a3e3;
              (*param_5)(uVar3,iVar5,iVar4,lVar2 + 4);
              *(undefined8 *)(auStack_c8 + lVar1 + -8) = 0x14f86a3f1;
              iVar4 = get_right_channel(param_1,iVar12,iVar4);
              uVar3 = local_58;
              param_3 = local_78;
            }
          }
          else {
            *(undefined8 *)(auStack_c8 + lVar1 + -8) = 0x14f86a3ff;
            iVar4 = get_mono_channel(param_1,iVar12,0xffffffff);
            lVar2 = local_60;
            uVar3 = local_58;
            while (local_60 = lVar2, local_58 = uVar3, iVar4 != -1) {
              iVar5 = *param_1;
              *(undefined8 *)((longlong)local_98 + lVar1) = param_9;
              *(uint *)((longlong)auStack_a8 + lVar1 + 8) = uVar6;
              *(undefined4 *)((longlong)auStack_a8 + lVar1) = 1;
              *(undefined8 *)(auStack_c8 + lVar1 + -8) = 0x14f86a431;
              (*param_5)(uVar3,iVar5,iVar4,lVar2);
              *(undefined8 *)(auStack_c8 + lVar1 + -8) = 0x14f86a43f;
              iVar4 = get_mono_channel(param_1,iVar12,iVar4);
              lVar2 = local_60;
              uVar3 = local_58;
              param_3 = local_78;
            }
          }
          iVar4 = param_1[1];
          iVar12 = iVar12 + 1;
          param_2 = local_40;
          param_4 = local_58;
        } while (iVar12 < iVar4);
      }
      iVar4 = *param_1;
      iVar12 = 0;
      puVar10 = auStack_c8 + lVar1;
      if (0 < iVar4) {
        piVar11 = param_1 + 3;
        do {
          if ((char)*piVar11 == -1) {
            *(undefined8 *)((longlong)local_98 + lVar1) = param_9;
            *(int *)((longlong)auStack_a8 + lVar1 + 8) = (int)uVar7;
            *(undefined4 *)((longlong)auStack_a8 + lVar1) = 0;
            *(undefined8 *)(auStack_c8 + lVar1 + -8) = 0x14f86a4ab;
            (*param_5)(param_4,iVar4,iVar12,0);
            iVar4 = *param_1;
          }
          iVar12 = iVar12 + 1;
          piVar11 = (int *)((longlong)piVar11 + 1);
          puVar10 = auStack_c8 + lVar1;
        } while (iVar12 < iVar4);
      }
      goto LAB_14f86a4bf;
    }
  }
  uVar7 = 0xffffffff;
  puVar10 = puVar9;
LAB_14f86a4bf:
  *(undefined8 *)(puVar10 + -8) = 0x14f86a4cb;
  return uVar7;
}

// opus_multistream_decoder_create @ 14f86a4f4

void * opus_multistream_decoder_create
                 (undefined4 param_1,int param_2,int param_3,int param_4,undefined8 param_5,
                 int *param_6)

{
  int iVar1;
  void *_Memory;
  
  if ((((param_2 - 1U < 0xff) && (param_4 <= param_3)) && (0 < param_3)) &&
     ((-1 < param_4 && (param_3 <= 0xff - param_4)))) {
    iVar1 = opus_multistream_decoder_get_size(param_3,param_4);
    _Memory = malloc((longlong)iVar1);
    if (_Memory != (void *)0x0) {
      iVar1 = opus_multistream_decoder_init(_Memory,param_1,param_2,param_3,param_4,param_5);
      if (param_6 != (int *)0x0) {
        *param_6 = iVar1;
      }
      if (iVar1 == 0) {
        return _Memory;
      }
      free(_Memory);
      return (void *)0x0;
    }
    if (param_6 != (int *)0x0) {
      *param_6 = -7;
    }
  }
  else if (param_6 != (int *)0x0) {
    *param_6 = -1;
  }
  return (void *)0x0;
}

// opus_multistream_decoder_ctl @ 14f86a5e4

void opus_multistream_decoder_ctl
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  opus_multistream_decoder_ctl_va_list(param_1,param_2,&local_res18);
  return;
}

// opus_multistream_decoder_ctl_va_list @ 14f86a60c

int opus_multistream_decoder_ctl_va_list(longlong param_1,int param_2,int *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint local_res8 [2];
  uint local_res10;
  
  iVar6 = 0;
  uVar2 = opus_decoder_get_size(2);
  local_res8[0] = uVar2;
  local_res10 = opus_decoder_get_size(1);
  lVar5 = param_1 + 0x110;
  if (param_2 < 0xfc8) {
    if ((param_2 != 0xfc7) && (param_2 != 0xfa9)) {
      if (param_2 == 0xfbc) {
        iVar6 = 0;
        if (*(int *)(param_1 + 4) < 1) {
          return 0;
        }
        while( true ) {
          uVar3 = uVar2;
          if (*(int *)(param_1 + 8) <= iVar6) {
            uVar3 = local_res10;
          }
          iVar7 = opus_decoder_ctl(lVar5,0xfbc);
          if (iVar7 != 0) break;
          iVar6 = iVar6 + 1;
          lVar5 = lVar5 + (int)(uVar3 + 7 & 0xfffffff8);
          if (*(int *)(param_1 + 4) <= iVar6) {
            return 0;
          }
        }
        return iVar7;
      }
      if (param_2 != 0xfbd) {
        if (param_2 == 0xfbf) {
          puVar1 = *(uint **)param_3;
          if (puVar1 == (uint *)0x0) {
            return -1;
          }
          *puVar1 = 0;
          iVar6 = 0;
          if (0 < *(int *)(param_1 + 4)) {
            while( true ) {
              uVar3 = uVar2;
              if (*(int *)(param_1 + 8) <= iVar6) {
                uVar3 = local_res10;
              }
              iVar7 = opus_decoder_ctl(lVar5,0xfbf,local_res8);
              if (iVar7 != 0) break;
              iVar6 = iVar6 + 1;
              *puVar1 = *puVar1 ^ local_res8[0];
              lVar5 = lVar5 + (int)(uVar3 + 7 & 0xfffffff8);
              if (*(int *)(param_1 + 4) <= iVar6) {
                return 0;
              }
            }
            return iVar7;
          }
          return 0;
        }
        if (param_2 != 0xfc2) {
          return -5;
        }
LAB_14f86a693:
        iVar7 = 0;
        iVar6 = *param_3;
        if (*(int *)(param_1 + 4) < 1) {
          return 0;
        }
        while( true ) {
          uVar2 = local_res10;
          if (iVar7 < *(int *)(param_1 + 8)) {
            uVar2 = local_res8[0];
          }
          iVar4 = opus_decoder_ctl(lVar5,param_2,iVar6);
          if (iVar4 != 0) break;
          iVar7 = iVar7 + 1;
          lVar5 = lVar5 + (int)(uVar2 + 7 & 0xfffffff8);
          if (*(int *)(param_1 + 4) <= iVar7) {
            return 0;
          }
        }
        return iVar4;
      }
    }
  }
  else if (param_2 != 0xfcd) {
    if (param_2 == 0xfce) goto LAB_14f86a693;
    if (param_2 != 0xfcf) {
      if (param_2 != 0x1402) {
        return -5;
      }
      iVar7 = *param_3;
      if (iVar7 < 0) {
        return -1;
      }
      if (*(int *)(param_1 + 4) <= iVar7) {
        return -1;
      }
      if (*(longlong **)(param_3 + 2) == (longlong *)0x0) {
        return -1;
      }
      if (0 < iVar7) {
        do {
          uVar3 = uVar2;
          if (*(int *)(param_1 + 8) <= iVar6) {
            uVar3 = local_res10;
          }
          iVar6 = iVar6 + 1;
          lVar5 = lVar5 + (int)(uVar3 + 7 & 0xfffffff8);
        } while (iVar6 < iVar7);
      }
      **(longlong **)(param_3 + 2) = lVar5;
      return 0;
    }
  }
  iVar6 = opus_decoder_ctl(lVar5,param_2,*(undefined8 *)param_3);
  return iVar6;
}

// opus_multistream_decoder_get_size @ 14f86a870

int opus_multistream_decoder_get_size(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 < 1) || (param_1 < param_2)) || (param_2 < 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = opus_decoder_get_size(2);
    iVar2 = opus_decoder_get_size(1);
    iVar1 = ((iVar2 + 7U >> 3) * (param_1 - param_2) + (iVar1 + 7U >> 3) * param_2) * 8 + 0x110;
  }
  return iVar1;
}

// opus_multistream_decoder_init @ 14f86a8e0

undefined8
opus_multistream_decoder_init
          (int *param_1,undefined4 param_2,int param_3,int param_4,int param_5,longlong param_6)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  if ((((param_3 - 1U < 0xff) && (param_5 <= param_4)) && (0 < param_4)) &&
     ((-1 < param_5 && (param_4 <= 0xff - param_5)))) {
    param_1[1] = param_4;
    iVar5 = 0;
    *param_1 = param_3;
    param_1[2] = param_5;
    if (0 < param_3) {
      piVar3 = param_1 + 3;
      do {
        iVar5 = iVar5 + 1;
        *(undefined1 *)piVar3 =
             *(undefined1 *)((param_6 - (longlong)param_1) + -0xc + (longlong)piVar3);
        piVar3 = (int *)((longlong)piVar3 + 1);
      } while (iVar5 < *param_1);
    }
    iVar5 = validate_layout(param_1);
    if (iVar5 != 0) {
      piVar3 = param_1 + 0x44;
      iVar5 = opus_decoder_get_size(2);
      iVar1 = opus_decoder_get_size(1);
      iVar4 = 0;
      if (0 < param_1[2]) {
        do {
          uVar2 = opus_decoder_init(piVar3,param_2,2);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          iVar4 = iVar4 + 1;
          piVar3 = (int *)((longlong)piVar3 + (longlong)(int)(iVar5 + 7U & 0xfffffff8));
        } while (iVar4 < param_1[2]);
      }
      while( true ) {
        if (param_1[1] <= iVar4) {
          return 0;
        }
        uVar2 = opus_decoder_init(piVar3,param_2,1);
        if ((int)uVar2 != 0) break;
        piVar3 = (int *)((longlong)piVar3 + (longlong)(int)(iVar1 + 7U & 0xfffffff8));
        iVar4 = iVar4 + 1;
      }
      return uVar2;
    }
  }
  return 0xffffffff;
}

// FUN_14f86aa18 @ 14f86aa18

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14f86aa18(longlong param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  int *local_c0;
  undefined1 local_b8 [4];
  int local_b4 [3];
  undefined1 local_a8 [96];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  uVar1 = 0;
  iVar3 = 0;
  uVar4 = uVar1;
  if (0 < param_3) {
    do {
      if (param_2 < 1) {
        return 0xfffffffc;
      }
      local_c0 = local_b4;
      local_c8 = 0;
      local_d0 = local_a8;
      local_d8 = 0;
      uVar2 = opus_packet_parse_impl(param_1,param_2,iVar3 != param_3 + -1,local_b8);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      uVar1 = opus_packet_get_nb_samples(param_1,local_b4[0],param_4);
      if ((iVar3 != 0) && (uVar4 != uVar1)) {
        return 0xfffffffc;
      }
      param_2 = param_2 - local_b4[0];
      iVar3 = iVar3 + 1;
      param_1 = param_1 + local_b4[0];
      uVar4 = uVar1;
    } while (iVar3 < param_3);
  }
  return (ulonglong)uVar1;
}

