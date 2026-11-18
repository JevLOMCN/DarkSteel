// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 11

// opus_multistream_packet_pad @ 14f871aac

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 opus_multistream_packet_pad(longlong param_1,int param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined8 local_b8;
  int *local_b0;
  undefined1 local_a8 [4];
  int local_a4 [3];
  undefined1 local_98 [96];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (0 < param_2) {
    if (param_2 == param_3) {
      return 0;
    }
    if (param_2 <= param_3) {
      param_3 = param_3 - param_2;
      iVar2 = 0;
      if (0 < param_4 + -1) {
        do {
          if (param_2 < 1) {
            return 0xfffffffc;
          }
          local_b0 = local_a4;
          local_b8 = 0;
          local_c0 = local_98;
          local_c8 = 0;
          uVar1 = opus_packet_parse_impl(param_1,param_2,1,local_a8);
          if ((int)uVar1 < 0) {
            return uVar1;
          }
          iVar2 = iVar2 + 1;
          param_2 = param_2 - local_a4[0];
          param_1 = param_1 + local_a4[0];
        } while (iVar2 < param_4 + -1);
      }
      uVar1 = opus_packet_pad(param_1,param_2,param_2 + param_3);
      return uVar1;
    }
  }
  return 0xffffffff;
}

// opus_multistream_packet_unpad @ 14f871b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong opus_multistream_packet_unpad(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_2e8 [32];
  undefined8 local_2c8;
  undefined1 *local_2c0;
  ulonglong local_2b8;
  int *local_2b0;
  undefined1 local_2a8 [4];
  int local_2a4 [3];
  undefined1 local_298 [4];
  undefined4 local_294;
  undefined1 local_a8 [96];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2e8;
  if (param_2 < 1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar3 = 0;
    iVar4 = 0;
    if (0 < param_3) {
      lVar5 = param_1;
      do {
        bVar6 = iVar4 != param_3 + -1;
        if (param_2 < 1) {
          return 0xfffffffc;
        }
        local_294 = 0;
        local_2b0 = local_2a4;
        local_2b8 = 0;
        local_2c0 = local_a8;
        local_2c8 = 0;
        uVar2 = opus_packet_parse_impl(param_1,param_2,bVar6,local_2a8);
        if ((int)uVar2 < 0) {
          return uVar2;
        }
        uVar2 = FUN_14f871e44(local_298,param_1,local_2a4[0],bVar6);
        if ((int)uVar2 < 0) {
          return uVar2;
        }
        local_2b8 = local_2b8 & 0xffffffff00000000;
        local_2c0 = (undefined1 *)CONCAT44(local_2c0._4_4_,(uint)bVar6);
        local_2c8 = CONCAT44(local_2c8._4_4_,param_2);
        uVar2 = opus_repacketizer_out_range_impl(local_298,0,local_294,lVar5);
        iVar1 = (int)uVar2;
        if (iVar1 < 0) {
          return uVar2;
        }
        param_2 = param_2 - local_2a4[0];
        uVar3 = uVar3 + iVar1;
        iVar4 = iVar4 + 1;
        lVar5 = lVar5 + iVar1;
        param_1 = param_1 + local_2a4[0];
      } while (iVar4 < param_3);
    }
    uVar2 = (ulonglong)uVar3;
  }
  return uVar2;
}

// opus_packet_pad @ 14f871cbc

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 opus_packet_pad(void *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  void *_Dst;
  undefined1 auStack_258 [32];
  int local_238;
  undefined4 local_230;
  undefined4 local_228;
  undefined1 local_218 [4];
  undefined4 local_214;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_258;
  if (param_2 < 1) {
LAB_14f871d50:
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 != param_3) {
      if (param_3 <= param_2) goto LAB_14f871d50;
      local_214 = 0;
      _Dst = (void *)(((longlong)param_3 - (longlong)param_2) + (longlong)param_1);
      memmove(_Dst,param_1,(longlong)param_2);
      uVar1 = FUN_14f871e44(local_218,_Dst,param_2,0);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      local_228 = 1;
      local_230 = 0;
      local_238 = param_3;
      uVar1 = opus_repacketizer_out_range_impl(local_218,0,local_214,param_1);
      if ((int)uVar1 < 1) {
        return uVar1;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}

// opus_packet_unpad @ 14f871d7c

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong opus_packet_unpad(undefined8 param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 auStack_248 [32];
  int local_228;
  undefined4 local_220;
  undefined4 local_218;
  undefined1 local_208 [4];
  undefined4 local_204;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_248;
  if (param_2 < 1) {
    uVar2 = 0xffffffff;
  }
  else {
    local_204 = 0;
    uVar2 = FUN_14f871e44(local_208,param_1,param_2,0);
    if (-1 < (int)uVar2) {
      local_218 = 0;
      local_220 = 0;
      local_228 = param_2;
      uVar1 = opus_repacketizer_out_range_impl(local_208,0,local_204,param_1);
      uVar2 = (ulonglong)uVar1;
      if (((int)uVar1 < 1) || (param_2 < (int)uVar1)) {
        celt_fatal("assertion failed: ret > 0 && ret <= len",
                   "../../../third_party/opus/src/src/repacketizer.c",0x112);
      }
    }
  }
  return uVar2;
}

// opus_repacketizer_cat @ 14f871e34

void opus_repacketizer_cat(void)

{
  FUN_14f871e44();
  return;
}

// FUN_14f871e44 @ 14f871e44

undefined8 FUN_14f871e44(byte *param_1,byte *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_res18 [16];
  
  if (0 < param_3) {
    if (*(int *)(param_1 + 4) == 0) {
      *param_1 = *param_2;
      uVar2 = opus_packet_get_samples_per_frame(param_2,8000);
      *(undefined4 *)(param_1 + 0x1e8) = uVar2;
    }
    else if (((*param_1 ^ *param_2) & 0xfc) != 0) {
      return 0xfffffffc;
    }
    iVar3 = opus_packet_get_nb_frames(param_2,param_3);
    if ((0 < iVar3) &&
       (iVar1 = *(int *)(param_1 + 4), (iVar1 + iVar3) * *(int *)(param_1 + 0x1e8) < 0x3c1)) {
      uVar4 = opus_packet_parse_impl
                        (param_2,param_3,param_4,local_res18,param_1 + ((longlong)iVar1 + 1) * 8,
                         param_1 + (longlong)iVar1 * 2 + 0x188,0,0);
      if (0 < (int)uVar4) {
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + iVar3;
        return 0;
      }
      return uVar4;
    }
  }
  return 0xfffffffc;
}

// opus_repacketizer_create @ 14f871f20

void opus_repacketizer_create(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(0x1f0);
  if (pvVar1 != (void *)0x0) {
    *(undefined4 *)((longlong)pvVar1 + 4) = 0;
  }
  return;
}

// opus_repacketizer_init @ 14f871f6c

longlong opus_repacketizer_init(longlong param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return param_1;
}

// opus_repacketizer_out @ 14f871f7c

void opus_repacketizer_out(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  opus_repacketizer_out_range_impl(param_1,0,*(undefined4 *)(param_1 + 4),param_2,param_3,0,0);
  return;
}

// opus_repacketizer_out_range @ 14f871fa8

void opus_repacketizer_out_range(void)

{
  opus_repacketizer_out_range_impl();
  return;
}

// opus_repacketizer_out_range_impl @ 14f871fd0

int opus_repacketizer_out_range_impl
              (byte *param_1,int param_2,int param_3,byte *param_4,int param_5,int param_6,
              int param_7)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  size_t _Size;
  longlong lVar13;
  uint uVar14;
  byte *pbVar15;
  
  iVar11 = 0;
  if (((param_2 < 0) || (param_3 <= param_2)) || (*(int *)(param_1 + 4) < param_3)) {
    return -1;
  }
  uVar9 = param_3 - param_2;
  uVar10 = (ulonglong)uVar9;
  lVar13 = (longlong)(int)uVar9;
  pbVar15 = param_1 + (longlong)param_2 * 2 + 0x188;
  pbVar7 = param_1 + (longlong)param_2 * 8 + 8;
  if (param_6 != 0) {
    iVar11 = (0xfb < *(short *)(pbVar15 + lVar13 * 2 + -2)) + 1;
  }
  if (uVar9 == 1) {
    iVar11 = iVar11 + *(short *)pbVar15 + 1;
    if (param_5 < iVar11) goto LAB_14f872184;
    bVar4 = *param_1 & 0xfc;
LAB_14f87208d:
    *param_4 = bVar4;
    pbVar5 = param_4 + 1;
LAB_14f872125:
    if ((param_7 != 0) && (iVar11 < param_5)) {
LAB_14f872137:
      iVar11 = 0;
      if (param_6 != 0) {
        iVar11 = (0xfb < *(short *)(pbVar15 + (longlong)(int)uVar9 * 2 + -2)) + 1;
      }
      iVar6 = 1;
      bVar3 = false;
      bVar4 = (byte)uVar9;
      if (1 < (int)uVar9) {
        pbVar5 = pbVar15;
LAB_14f872164:
        pbVar5 = pbVar5 + 2;
        if (*(short *)pbVar5 == *(short *)pbVar15) goto code_r0x00014f872169;
        iVar11 = iVar11 + 2;
        bVar3 = true;
        if (0 < (int)(uVar9 - 1)) {
          uVar12 = (ulonglong)(uVar9 - 1);
          pbVar5 = pbVar15;
          do {
            sVar1 = *(short *)pbVar5;
            sVar2 = *(short *)pbVar5;
            pbVar5 = pbVar5 + 2;
            iVar11 = iVar11 + sVar2 + (0xfb < sVar1) + 1;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        iVar11 = iVar11 + *(short *)(pbVar15 + lVar13 * 2 + -2);
        if (param_5 < iVar11) goto LAB_14f872184;
        bVar4 = bVar4 | 0x80;
        goto LAB_14f8721db;
      }
LAB_14f872173:
      iVar11 = iVar11 + (int)*(short *)pbVar15 * uVar9 + 2;
      if (param_5 < iVar11) goto LAB_14f872184;
LAB_14f8721db:
      pbVar5 = param_4 + 2;
      *param_4 = *param_1 | 3;
      param_4[1] = bVar4;
      uVar14 = -(uint)(param_7 != 0) & param_5 - iVar11;
      if (uVar14 != 0) {
        param_4[1] = bVar4 | 0x40;
        iVar6 = (int)(uVar14 - 1) / 0xff;
        if (0 < iVar6) {
          memset(pbVar5,(int)CONCAT71((uint7)((ulonglong)((longlong)(int)(uVar14 - 1) * -0x7f7f7f7f)
                                             >> 0x28),0xff),(longlong)iVar6);
          pbVar5 = pbVar5 + iVar6;
        }
        *pbVar5 = (char)uVar14 + -1 + (char)iVar6;
        pbVar5 = pbVar5 + 1;
        iVar11 = iVar11 + uVar14;
      }
      lVar8 = 0;
      if ((bVar3) && (0 < (int)(uVar9 - 1))) {
        do {
          iVar6 = encode_size((int)*(short *)(pbVar15 + lVar8 * 2),pbVar5);
          lVar8 = lVar8 + 1;
          pbVar5 = pbVar5 + iVar6;
        } while (lVar8 < (int)(uVar9 - 1));
      }
    }
    if (param_6 != 0) {
      iVar6 = encode_size((int)*(short *)(pbVar15 + lVar13 * 2 + -2),pbVar5);
      pbVar5 = pbVar5 + iVar6;
    }
    if (0 < (int)uVar9) {
      do {
        memmove(pbVar5,*(void **)pbVar7,(longlong)*(short *)pbVar15);
        pbVar7 = pbVar7 + 8;
        pbVar5 = pbVar5 + *(short *)pbVar15;
        pbVar15 = pbVar15 + 2;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if (param_7 != 0) {
      _Size = (longlong)(param_4 + param_5) - (longlong)pbVar5;
      if (param_4 + param_5 < pbVar5) {
        _Size = 0;
      }
      if (_Size != 0) {
        memset(pbVar5,0,_Size);
      }
    }
  }
  else {
    pbVar5 = param_4;
    if (uVar9 != 2) {
LAB_14f872123:
      if ((int)uVar9 < 3) goto LAB_14f872125;
      goto LAB_14f872137;
    }
    if (*(short *)(pbVar15 + 2) == *(short *)pbVar15) {
      iVar11 = iVar11 + *(short *)pbVar15 * 2 + 1;
      if (iVar11 <= param_5) {
        bVar4 = *param_1 & 0xfd | 1;
        goto LAB_14f87208d;
      }
    }
    else {
      iVar11 = iVar11 + (int)*(short *)(pbVar15 + 2) +
                        (0xfb < *(short *)pbVar15) + 2 + (int)*(short *)pbVar15;
      if (iVar11 <= param_5) {
        *param_4 = *param_1 & 0xfe | 2;
        iVar6 = encode_size((int)*(short *)pbVar15,param_4 + 1);
        pbVar5 = param_4 + 1 + iVar6;
        goto LAB_14f872123;
      }
    }
LAB_14f872184:
    iVar11 = -2;
  }
  return iVar11;
code_r0x00014f872169:
  iVar6 = iVar6 + 1;
  if ((int)uVar9 <= iVar6) goto LAB_14f872173;
  goto LAB_14f872164;
}

