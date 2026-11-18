// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 28

// OodleFree @ 14f3d3130

void __cdecl oo2::OodleFree(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f3d3130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// OodleMallocAligned @ 14f3d3140

void * __cdecl oo2::OodleMallocAligned(long64 param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = (*g_fp_OodleCore_Plugin_MallocAligned)(param_1,param_2);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(param_1);
  }
  return pvVar1;
}

// RR_GET16_NATIVE @ 14f3d3180

ushort __cdecl oo2::RR_GET16_NATIVE(void *param_1)

{
  return *(ushort *)param_1;
}

// RR_GET32_NATIVE @ 14f3d3190

uint __cdecl oo2::RR_GET32_NATIVE(void *param_1)

{
  return *(uint *)param_1;
}

// RR_GET64_NATIVE @ 14f3d31a0

ulong64 __cdecl oo2::RR_GET64_NATIVE(void *param_1)

{
  return *(ulong64 *)param_1;
}

// RR_PUT32_NATIVE @ 14f3d31b0

void __cdecl oo2::RR_PUT32_NATIVE(void *param_1,uint param_2)

{
  *(uint *)param_1 = param_2;
  return;
}

// newLZ_get_array @ 14f3d31c0

long64 __cdecl
oo2::newLZ_get_array
          (uchar **param_1,uchar *param_2,uchar *param_3,long64 *param_4,long64 param_5,bool param_6
          ,uchar *param_7,uchar *param_8)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  long64 lVar4;
  uint uVar5;
  longlong lVar6;
  size_t _Size;
  uchar *_Src;
  int iVar7;
  char *pcVar8;
  
  lVar6 = (longlong)param_3 - (longlong)param_2;
  if (lVar6 < 2) {
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto code_r0x00014f3d32e0;
    pcVar8 = "OODLE ERROR : corruption : 2 <= rrPtrDiff( from_end - from_ptr )\n";
    iVar7 = 0x35;
  }
  else {
    bVar1 = *param_2;
    bVar3 = bVar1 >> 4;
    uVar5 = (uint)bVar3;
    if (0x7f < bVar1) {
      uVar5 = uVar5 & 7;
      if ((bVar3 & 7) != 0) {
LAB_14f3d3334:
        lVar4 = newLZ_get_array_comp(uVar5,param_1,param_2,param_3,param_4,param_5,param_7,param_8);
        return lVar4;
      }
      _Src = param_2 + 2;
      _Size = (size_t)((ushort)(*(ushort *)param_2 >> 8 | *(ushort *)param_2 << 8) & 0xfff);
      if (param_5 < (longlong)_Size) {
        return -1;
      }
      if (param_3 < _Src + _Size) {
        return -1;
      }
LAB_14f3d3258:
      if (!param_6) {
        *param_1 = _Src;
        *param_4 = _Size;
        return (long64)(_Src + (_Size - (longlong)param_2));
      }
      memmove(*param_1,_Src,_Size);
      *param_4 = _Size;
      return (long64)(_Src + (_Size - (longlong)param_2));
    }
    if (3 < lVar6) {
      if (bVar3 != 0) goto LAB_14f3d3334;
      uVar5 = *(uint *)param_2;
      _Src = param_2 + 3;
      uVar2 = (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8;
      _Size = (size_t)((uVar2 | uVar5 << 0x18 & 0x3ffff00) >> 8);
      if (0x3ffff < (uVar2 | uVar5 << 0x18) >> 8) {
        return -1;
      }
      if (param_5 < (longlong)_Size) {
        return -1;
      }
      if ((longlong)param_3 - (longlong)_Src < (longlong)_Size) {
        return -1;
      }
      goto LAB_14f3d3258;
    }
    if (lVar6 != 3) {
      return -1;
    }
    if (CONCAT21(CONCAT11(bVar1,param_2[1]),param_2[2]) == 0) {
      *param_1 = (uchar *)0x0;
      *param_4 = 0;
      return (long64)&DAT_00000003;
    }
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto code_r0x00014f3d32e0;
    pcVar8 = "OODLE ERROR : corruption : header == 0\n";
    iVar7 = 0x78;
  }
  (*g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\newlz_arrays.inl",iVar7,pcVar8);
code_r0x00014f3d32e0:
  ooLogErrorPost();
  return -1;
}

// newLZ_get_array_rle @ 14f3d33a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

long64 __cdecl
oo2::newLZ_get_array_rle
          (uchar *param_1,long64 param_2,uchar *param_3,long64 param_4,uchar *param_5,uchar *param_6
          )

{
  uchar *puVar1;
  uchar uVar2;
  ushort uVar3;
  undefined8 uVar4;
  uint uVar5;
  long64 lVar6;
  longlong lVar7;
  ulonglong uVar8;
  byte bVar9;
  int iVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  ushort *puVar13;
  ushort *puVar14;
  uchar *puVar15;
  size_t sVar16;
  size_t _Size;
  uchar *_Src;
  uchar *puVar17;
  uchar *puVar18;
  size_t sVar19;
  undefined2 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStackY_308 [32];
  uchar *local_2c8;
  long64 local_2c0;
  ulonglong local_2b8;
  uchar *local_2b0;
  long64 local_2a8;
  uchar local_298 [130];
  ushort local_216 [7];
  uchar local_208 [416];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_308;
  local_2a8 = param_2;
  local_2b8 = param_4;
  local_2b0 = param_3;
  if (param_2 < 2) {
    if (param_2 == 1) {
      memset(param_3,(uint)*param_1,param_4);
      return 1;
    }
  }
  else if (0 < param_4) {
    puVar13 = (ushort *)(param_1 + param_2);
    sVar19 = 0;
    _Src = param_1 + 1;
    if (*param_1 != '\0') {
      local_2c8 = param_5;
      local_2c0 = 0;
      lVar6 = newLZ_get_array(&local_2c8,param_1,(uchar *)puVar13,&local_2c0,
                              (longlong)param_6 - (longlong)param_5,true,param_5,param_6);
      if (lVar6 < 1) {
        return -1;
      }
      sVar16 = param_2 - lVar6;
      if ((longlong)param_6 - (longlong)param_5 < (longlong)(sVar16 + local_2c0)) {
        return -1;
      }
      memcpy(local_2c8 + local_2c0,param_1 + lVar6,sVar16);
      puVar13 = (ushort *)(local_2c8 + local_2c0 + sVar16);
      _Src = local_2c8;
    }
    puVar18 = param_3 + local_2b8;
    sVar16 = sVar19;
    if (0x126 < local_2b8) {
      sVar16 = local_2b8 - 0x127;
    }
    puVar17 = param_3 + sVar16;
    lVar7 = (longlong)puVar13 - (longlong)_Src;
    uVar21 = 0;
    uVar22 = 0;
    uVar23 = 0;
    uVar24 = 0;
    do {
      if ((lVar7 < 0x71) || (puVar17 <= param_3)) {
        local_298[0x70] = '\0';
        local_298[0x71] = '\0';
        local_298[0] = '\0';
        local_298[1] = '\0';
        local_298[2] = '\0';
        local_298[3] = '\0';
        local_298[4] = '\0';
        local_298[5] = '\0';
        local_298[6] = '\0';
        local_298[7] = '\0';
        local_298[8] = '\0';
        local_298[9] = '\0';
        local_298[10] = '\0';
        local_298[0xb] = '\0';
        local_298[0xc] = '\0';
        local_298[0xd] = '\0';
        local_298[0xe] = '\0';
        local_298[0xf] = '\0';
        local_298[0x10] = '\0';
        local_298[0x11] = '\0';
        local_298[0x12] = '\0';
        local_298[0x13] = '\0';
        local_298[0x14] = '\0';
        local_298[0x15] = '\0';
        local_298[0x16] = '\0';
        local_298[0x17] = '\0';
        local_298[0x18] = '\0';
        local_298[0x19] = '\0';
        local_298[0x1a] = '\0';
        local_298[0x1b] = '\0';
        local_298[0x1c] = '\0';
        local_298[0x1d] = '\0';
        local_298[0x1e] = '\0';
        local_298[0x1f] = '\0';
        sVar16 = sVar19;
        if (0xcd < local_2b8) {
          sVar16 = local_2b8 - 0xce;
        }
        local_298[0x20] = '\0';
        local_298[0x21] = '\0';
        local_298[0x22] = '\0';
        local_298[0x23] = '\0';
        local_298[0x24] = '\0';
        local_298[0x25] = '\0';
        local_298[0x26] = '\0';
        local_298[0x27] = '\0';
        local_298[0x28] = '\0';
        local_298[0x29] = '\0';
        local_298[0x2a] = '\0';
        local_298[0x2b] = '\0';
        local_298[0x2c] = '\0';
        local_298[0x2d] = '\0';
        local_298[0x2e] = '\0';
        local_298[0x2f] = '\0';
        puVar17 = local_2b0 + sVar16;
        local_298[0x30] = '\0';
        local_298[0x31] = '\0';
        local_298[0x32] = '\0';
        local_298[0x33] = '\0';
        local_298[0x34] = '\0';
        local_298[0x35] = '\0';
        local_298[0x36] = '\0';
        local_298[0x37] = '\0';
        local_298[0x38] = '\0';
        local_298[0x39] = '\0';
        local_298[0x3a] = '\0';
        local_298[0x3b] = '\0';
        local_298[0x3c] = '\0';
        local_298[0x3d] = '\0';
        local_298[0x3e] = '\0';
        local_298[0x3f] = '\0';
        local_298[0x40] = '\0';
        local_298[0x41] = '\0';
        local_298[0x42] = '\0';
        local_298[0x43] = '\0';
        local_298[0x44] = '\0';
        local_298[0x45] = '\0';
        local_298[0x46] = '\0';
        local_298[0x47] = '\0';
        local_298[0x48] = '\0';
        local_298[0x49] = '\0';
        local_298[0x4a] = '\0';
        local_298[0x4b] = '\0';
        local_298[0x4c] = '\0';
        local_298[0x4d] = '\0';
        local_298[0x4e] = '\0';
        local_298[0x4f] = '\0';
        local_298[0x50] = '\0';
        local_298[0x51] = '\0';
        local_298[0x52] = '\0';
        local_298[0x53] = '\0';
        local_298[0x54] = '\0';
        local_298[0x55] = '\0';
        local_298[0x56] = '\0';
        local_298[0x57] = '\0';
        local_298[0x58] = '\0';
        local_298[0x59] = '\0';
        local_298[0x5a] = '\0';
        local_298[0x5b] = '\0';
        local_298[0x5c] = '\0';
        local_298[0x5d] = '\0';
        local_298[0x5e] = '\0';
        local_298[0x5f] = '\0';
        local_298[0x60] = '\0';
        local_298[0x61] = '\0';
        local_298[0x62] = '\0';
        local_298[99] = '\0';
        local_298[100] = '\0';
        local_298[0x65] = '\0';
        local_298[0x66] = '\0';
        local_298[0x67] = '\0';
        local_298[0x68] = '\0';
        local_298[0x69] = '\0';
        local_298[0x6a] = '\0';
        local_298[0x6b] = '\0';
        local_298[0x6c] = '\0';
        local_298[0x6d] = '\0';
        local_298[0x6e] = '\0';
        local_298[0x6f] = '\0';
        local_298[0x72] = '\0';
        local_298[0x73] = '\0';
        local_298[0x74] = '\0';
        local_298[0x75] = '\0';
        local_298[0x76] = '\0';
        local_298[0x77] = '\0';
        local_298[0x78] = '\0';
        local_298[0x79] = '\0';
        local_298[0x7a] = '\0';
        local_298[0x7b] = '\0';
        local_298[0x7c] = '\0';
        local_298[0x7d] = '\0';
        local_298[0x7e] = '\0';
        local_298[0x7f] = '\0';
        local_298[0x80] = '\0';
        local_298[0x81] = '\0';
        sVar16 = sVar19;
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                while( true ) {
                  _Size = (longlong)puVar13 - (longlong)_Src;
                  if ((longlong)_Size < 0x41) {
                    if (sVar19 != 0) {
                      return -1;
                    }
                    memcpy(local_298,_Src,_Size);
                    memcpy((void *)((longlong)local_216 - _Size),_Src,_Size);
                    _Src = local_298;
                    sVar19 = 0x82 - _Size;
                    puVar13 = local_216;
                  }
                  if (puVar17 <= param_3) {
                    if (param_3 == puVar18) {
                      if ((longlong)puVar13 - (longlong)_Src != sVar19) {
                        return -1;
                      }
                      if (sVar16 != 0) {
                        memcpy(local_2b0 + (local_2b8 - sVar16),local_208,sVar16);
                        return local_2a8;
                      }
                      return local_2a8;
                    }
                    if (sVar16 != 0) {
                      return -1;
                    }
                    sVar16 = (longlong)puVar18 - (longlong)param_3;
                    puVar18 = local_208 + sVar16;
                    param_3 = local_208;
                    puVar17 = puVar18;
                  }
                  bVar9 = *(byte *)((longlong)puVar13 + -1);
                  if (bVar9 - 1 < 0x2f) break;
                  uVar4 = *(undefined8 *)(_Src + 8);
                  uVar5 = -(uint)bVar9 - 1 & 0xf;
                  *(undefined8 *)param_3 = *(undefined8 *)_Src;
                  *(undefined8 *)(param_3 + 8) = uVar4;
                  puVar15 = param_3 + uVar5;
                  _Src = _Src + uVar5;
                  *(undefined4 *)puVar15 = uVar21;
                  *(undefined4 *)(puVar15 + 4) = uVar22;
                  *(undefined4 *)(puVar15 + 8) = uVar23;
                  *(undefined4 *)(puVar15 + 0xc) = uVar24;
                  param_3 = puVar15 + (bVar9 >> 4);
                  puVar13 = (ushort *)((longlong)puVar13 + -1);
                }
                if (bVar9 < 0x10) break;
                uVar3 = puVar13[-1];
                puVar13 = puVar13 + -1;
                uVar4 = *(undefined8 *)(_Src + 8);
                uVar5 = uVar3 - 0x1000 & 0x3f;
                *(undefined8 *)param_3 = *(undefined8 *)_Src;
                *(undefined8 *)(param_3 + 8) = uVar4;
                uVar11 = (ulonglong)(uVar3 - 0x1000 >> 6);
                uVar4 = *(undefined8 *)(_Src + 0x18);
                *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(_Src + 0x10);
                *(undefined8 *)(param_3 + 0x18) = uVar4;
                uVar4 = *(undefined8 *)(_Src + 0x28);
                *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(_Src + 0x20);
                *(undefined8 *)(param_3 + 0x28) = uVar4;
                puVar15 = _Src + 0x30;
                uVar4 = *(undefined8 *)(_Src + 0x38);
                _Src = _Src + uVar5;
                *(undefined8 *)(param_3 + 0x30) = *(undefined8 *)puVar15;
                *(undefined8 *)(param_3 + 0x38) = uVar4;
                puVar15 = param_3 + uVar5;
                *(undefined4 *)puVar15 = uVar21;
                *(undefined4 *)(puVar15 + 4) = uVar22;
                *(undefined4 *)(puVar15 + 8) = uVar23;
                *(undefined4 *)(puVar15 + 0xc) = uVar24;
                *(undefined4 *)(puVar15 + 0x10) = uVar21;
                *(undefined4 *)(puVar15 + 0x14) = uVar22;
                *(undefined4 *)(puVar15 + 0x18) = uVar23;
                *(undefined4 *)(puVar15 + 0x1c) = uVar24;
                *(undefined4 *)(puVar15 + 0x20) = uVar21;
                *(undefined4 *)(puVar15 + 0x24) = uVar22;
                *(undefined4 *)(puVar15 + 0x28) = uVar23;
                *(undefined4 *)(puVar15 + 0x2c) = uVar24;
                if (0x30 < uVar11) {
                  uVar8 = (ulonglong)(puVar15 + 0xf) & 0xfffffffffffffff0;
                  *(undefined4 *)(uVar8 + 0x20) = uVar21;
                  *(undefined4 *)(uVar8 + 0x24) = uVar22;
                  *(undefined4 *)(uVar8 + 0x28) = uVar23;
                  *(undefined4 *)(uVar8 + 0x2c) = uVar24;
                  *(undefined4 *)(uVar8 + 0x30) = uVar21;
                  *(undefined4 *)(uVar8 + 0x34) = uVar22;
                  *(undefined4 *)(uVar8 + 0x38) = uVar23;
                  *(undefined4 *)(uVar8 + 0x3c) = uVar24;
                  *(undefined4 *)(uVar8 + 0x40) = uVar21;
                  *(undefined4 *)(uVar8 + 0x44) = uVar22;
                  *(undefined4 *)(uVar8 + 0x48) = uVar23;
                  *(undefined4 *)(uVar8 + 0x4c) = uVar24;
                  *(undefined4 *)(uVar8 + 0x50) = uVar21;
                  *(undefined4 *)(uVar8 + 0x54) = uVar22;
                  *(undefined4 *)(uVar8 + 0x58) = uVar23;
                  *(undefined4 *)(uVar8 + 0x5c) = uVar24;
                  *(undefined4 *)(uVar8 + 0x60) = uVar21;
                  *(undefined4 *)(uVar8 + 100) = uVar22;
                  *(undefined4 *)(uVar8 + 0x68) = uVar23;
                  *(undefined4 *)(uVar8 + 0x6c) = uVar24;
                  *(undefined4 *)(uVar8 + 0x70) = uVar21;
                  *(undefined4 *)(uVar8 + 0x74) = uVar22;
                  *(undefined4 *)(uVar8 + 0x78) = uVar23;
                  *(undefined4 *)(uVar8 + 0x7c) = uVar24;
                }
                param_3 = puVar15 + uVar11;
              }
              if (bVar9 != 1) break;
              uVar2 = *_Src;
              puVar13 = (ushort *)((longlong)puVar13 + -1);
              _Src = _Src + 1;
              uVar20 = CONCAT11(uVar2,uVar2);
              uVar21 = CONCAT22(uVar20,uVar20);
              uVar22 = uVar21;
              uVar23 = uVar21;
              uVar24 = uVar21;
            }
            puVar13 = puVar13 + -1;
            uVar5 = (uint)*puVar13;
            if (bVar9 < 9) break;
            uVar11 = (ulonglong)((uVar5 - 0x8ff) * 0x80);
            if ((longlong)puVar18 - (longlong)param_3 < (longlong)uVar11) {
              return -1;
            }
            *(undefined4 *)param_3 = uVar21;
            *(undefined4 *)(param_3 + 4) = uVar22;
            *(undefined4 *)(param_3 + 8) = uVar23;
            *(undefined4 *)(param_3 + 0xc) = uVar24;
            puVar15 = param_3 + 0xf;
            param_3 = param_3 + uVar11;
            *(undefined4 *)(param_3 + -0x40) = uVar21;
            *(undefined4 *)(param_3 + -0x3c) = uVar22;
            *(undefined4 *)(param_3 + -0x38) = uVar23;
            *(undefined4 *)(param_3 + -0x34) = uVar24;
            *(undefined4 *)(param_3 + -0x30) = uVar21;
            *(undefined4 *)(param_3 + -0x2c) = uVar22;
            *(undefined4 *)(param_3 + -0x28) = uVar23;
            *(undefined4 *)(param_3 + -0x24) = uVar24;
            *(undefined4 *)(param_3 + -0x20) = uVar21;
            *(undefined4 *)(param_3 + -0x1c) = uVar22;
            *(undefined4 *)(param_3 + -0x18) = uVar23;
            *(undefined4 *)(param_3 + -0x14) = uVar24;
            *(undefined4 *)(param_3 + -0x10) = uVar21;
            *(undefined4 *)(param_3 + -0xc) = uVar22;
            *(undefined4 *)(param_3 + -8) = uVar23;
            *(undefined4 *)(param_3 + -4) = uVar24;
            puVar12 = (undefined4 *)(((ulonglong)puVar15 & 0xfffffffffffffff0) + 0x20);
            do {
              puVar12[-8] = uVar21;
              puVar12[-7] = uVar22;
              puVar12[-6] = uVar23;
              puVar12[-5] = uVar24;
              puVar12[-4] = uVar21;
              puVar12[-3] = uVar22;
              puVar12[-2] = uVar23;
              puVar12[-1] = uVar24;
              *puVar12 = uVar21;
              puVar12[1] = uVar22;
              puVar12[2] = uVar23;
              puVar12[3] = uVar24;
              puVar12[4] = uVar21;
              puVar12[5] = uVar22;
              puVar12[6] = uVar23;
              puVar12[7] = uVar24;
              puVar15 = (uchar *)(puVar12 + 8);
              puVar12 = puVar12 + 0x10;
            } while (puVar15 < param_3 + -0x40);
          }
          uVar11 = (ulonglong)((uVar5 - 0x1ff) * 0x40);
          if ((longlong)puVar13 - (longlong)_Src < (longlong)uVar11) {
            return -1;
          }
          if ((longlong)puVar18 - (longlong)param_3 < (longlong)uVar11) break;
          uVar4 = *(undefined8 *)(_Src + 8);
          uVar8 = (ulonglong)(-(int)param_3 & 0xf);
          *(undefined8 *)param_3 = *(undefined8 *)_Src;
          *(undefined8 *)(param_3 + 8) = uVar4;
          uVar4 = *(undefined8 *)(_Src + uVar8 + 8);
          *(undefined8 *)(param_3 + uVar8) = *(undefined8 *)(_Src + uVar8);
          *(undefined8 *)(param_3 + uVar8 + 8) = uVar4;
          uVar4 = *(undefined8 *)(_Src + uVar8 + 0x10 + 8);
          *(undefined8 *)(param_3 + uVar8 + 0x10) = *(undefined8 *)(_Src + uVar8 + 0x10);
          *(undefined8 *)(param_3 + uVar8 + 0x10 + 8) = uVar4;
          uVar4 = *(undefined8 *)(_Src + uVar8 + 0x20 + 8);
          *(undefined8 *)(param_3 + uVar8 + 0x20) = *(undefined8 *)(_Src + uVar8 + 0x20);
          *(undefined8 *)(param_3 + uVar8 + 0x20 + 8) = uVar4;
          iVar10 = uVar5 - 0x200;
          if (iVar10 != 0) {
            lVar7 = (longlong)param_3 - (longlong)_Src;
            puVar15 = _Src + uVar8 + 0x40;
            do {
              uVar4 = *(undefined8 *)(puVar15 + -8);
              *(undefined8 *)(puVar15 + lVar7 + -0x10) = *(undefined8 *)(puVar15 + -0x10);
              *(undefined8 *)(puVar15 + lVar7 + -0x10 + 8) = uVar4;
              uVar4 = *(undefined8 *)(puVar15 + 8);
              *(undefined8 *)(puVar15 + lVar7) = *(undefined8 *)puVar15;
              *(undefined8 *)(puVar15 + lVar7 + 8) = uVar4;
              uVar4 = *(undefined8 *)(puVar15 + 0x18);
              *(undefined8 *)(puVar15 + lVar7 + 0x10) = *(undefined8 *)(puVar15 + 0x10);
              *(undefined8 *)(puVar15 + lVar7 + 0x10 + 8) = uVar4;
              uVar4 = *(undefined8 *)(puVar15 + 0x28);
              *(undefined8 *)(puVar15 + lVar7 + 0x20) = *(undefined8 *)(puVar15 + 0x20);
              *(undefined8 *)(puVar15 + lVar7 + 0x20 + 8) = uVar4;
              iVar10 = iVar10 + -1;
              puVar15 = puVar15 + 0x40;
            } while (iVar10 != 0);
          }
          param_3 = param_3 + uVar11;
          _Src = _Src + uVar11;
          uVar4 = *(undefined8 *)(_Src + -8);
          *(undefined8 *)(param_3 + -0x10) = *(undefined8 *)(_Src + -0x10);
          *(undefined8 *)(param_3 + -8) = uVar4;
        }
        return -1;
      }
      bVar9 = *(byte *)((longlong)puVar13 + -1);
      puVar14 = puVar13;
      if (bVar9 - 1 < 0x2f) {
LAB_14f3d35e5:
        if (bVar9 < 0x10) {
          if (bVar9 == 1) {
            uVar2 = *_Src;
            puVar13 = (ushort *)((longlong)puVar14 + -1);
            _Src = _Src + 1;
            uVar20 = CONCAT11(uVar2,uVar2);
            uVar21 = CONCAT22(uVar20,uVar20);
            uVar22 = uVar21;
            uVar23 = uVar21;
            uVar24 = uVar21;
          }
          else {
            puVar13 = puVar14 + -1;
            uVar5 = (uint)*puVar13;
            if (bVar9 < 9) {
              uVar11 = (ulonglong)((uVar5 - 0x1ff) * 0x40);
              if ((longlong)puVar13 - (longlong)_Src < (longlong)uVar11) {
                return -1;
              }
              if ((longlong)puVar18 - (longlong)param_3 < (longlong)uVar11) {
                return -1;
              }
              uVar4 = *(undefined8 *)(_Src + 8);
              uVar8 = (ulonglong)(-(int)param_3 & 0xf);
              *(undefined8 *)param_3 = *(undefined8 *)_Src;
              *(undefined8 *)(param_3 + 8) = uVar4;
              uVar4 = *(undefined8 *)(_Src + uVar8 + 8);
              *(undefined8 *)(param_3 + uVar8) = *(undefined8 *)(_Src + uVar8);
              *(undefined8 *)(param_3 + uVar8 + 8) = uVar4;
              uVar4 = *(undefined8 *)(_Src + uVar8 + 0x10 + 8);
              *(undefined8 *)(param_3 + uVar8 + 0x10) = *(undefined8 *)(_Src + uVar8 + 0x10);
              *(undefined8 *)(param_3 + uVar8 + 0x10 + 8) = uVar4;
              uVar4 = *(undefined8 *)(_Src + uVar8 + 0x20 + 8);
              *(undefined8 *)(param_3 + uVar8 + 0x20) = *(undefined8 *)(_Src + uVar8 + 0x20);
              *(undefined8 *)(param_3 + uVar8 + 0x20 + 8) = uVar4;
              iVar10 = uVar5 - 0x200;
              if (iVar10 != 0) {
                puVar15 = _Src + uVar8 + 0x40;
                do {
                  uVar4 = *(undefined8 *)(puVar15 + -8);
                  puVar1 = puVar15 + 0x40;
                  *(undefined8 *)(puVar1 + (longlong)(param_3 + (-0x50 - (longlong)_Src))) =
                       *(undefined8 *)(puVar15 + -0x10);
                  *(undefined8 *)(puVar1 + (longlong)(param_3 + (-0x50 - (longlong)_Src)) + 8) =
                       uVar4;
                  uVar4 = *(undefined8 *)(puVar15 + 8);
                  *(undefined8 *)(puVar1 + (longlong)(param_3 + (-0x40 - (longlong)_Src))) =
                       *(undefined8 *)puVar15;
                  *(undefined8 *)(puVar1 + (longlong)(param_3 + (-0x40 - (longlong)_Src)) + 8) =
                       uVar4;
                  uVar4 = *(undefined8 *)(puVar15 + 0x18);
                  *(undefined8 *)(puVar1 + (longlong)(param_3 + (-0x30 - (longlong)_Src))) =
                       *(undefined8 *)(puVar15 + 0x10);
                  *(undefined8 *)(puVar1 + (longlong)(param_3 + (-0x30 - (longlong)_Src)) + 8) =
                       uVar4;
                  uVar4 = *(undefined8 *)(puVar15 + 0x28);
                  *(undefined8 *)(puVar1 + (longlong)(param_3 + (-0x20 - (longlong)_Src))) =
                       *(undefined8 *)(puVar15 + 0x20);
                  *(undefined8 *)(puVar1 + (longlong)(param_3 + (-0x20 - (longlong)_Src)) + 8) =
                       uVar4;
                  iVar10 = iVar10 + -1;
                  puVar15 = puVar1;
                } while (iVar10 != 0);
              }
              param_3 = param_3 + uVar11;
              _Src = _Src + uVar11;
              uVar4 = *(undefined8 *)(_Src + -8);
              *(undefined8 *)(param_3 + -0x10) = *(undefined8 *)(_Src + -0x10);
              *(undefined8 *)(param_3 + -8) = uVar4;
            }
            else {
              uVar11 = (ulonglong)((uVar5 - 0x8ff) * 0x80);
              if ((longlong)puVar18 - (longlong)param_3 < (longlong)uVar11) {
                return -1;
              }
              *(undefined4 *)param_3 = uVar21;
              *(undefined4 *)(param_3 + 4) = uVar22;
              *(undefined4 *)(param_3 + 8) = uVar23;
              *(undefined4 *)(param_3 + 0xc) = uVar24;
              puVar15 = param_3 + 0xf;
              param_3 = param_3 + uVar11;
              *(undefined4 *)(param_3 + -0x40) = uVar21;
              *(undefined4 *)(param_3 + -0x3c) = uVar22;
              *(undefined4 *)(param_3 + -0x38) = uVar23;
              *(undefined4 *)(param_3 + -0x34) = uVar24;
              *(undefined4 *)(param_3 + -0x30) = uVar21;
              *(undefined4 *)(param_3 + -0x2c) = uVar22;
              *(undefined4 *)(param_3 + -0x28) = uVar23;
              *(undefined4 *)(param_3 + -0x24) = uVar24;
              *(undefined4 *)(param_3 + -0x20) = uVar21;
              *(undefined4 *)(param_3 + -0x1c) = uVar22;
              *(undefined4 *)(param_3 + -0x18) = uVar23;
              *(undefined4 *)(param_3 + -0x14) = uVar24;
              *(undefined4 *)(param_3 + -0x10) = uVar21;
              *(undefined4 *)(param_3 + -0xc) = uVar22;
              *(undefined4 *)(param_3 + -8) = uVar23;
              *(undefined4 *)(param_3 + -4) = uVar24;
              puVar12 = (undefined4 *)(((ulonglong)puVar15 & 0xfffffffffffffff0) + 0x20);
              do {
                puVar12[-8] = uVar21;
                puVar12[-7] = uVar22;
                puVar12[-6] = uVar23;
                puVar12[-5] = uVar24;
                puVar12[-4] = uVar21;
                puVar12[-3] = uVar22;
                puVar12[-2] = uVar23;
                puVar12[-1] = uVar24;
                *puVar12 = uVar21;
                puVar12[1] = uVar22;
                puVar12[2] = uVar23;
                puVar12[3] = uVar24;
                puVar12[4] = uVar21;
                puVar12[5] = uVar22;
                puVar12[6] = uVar23;
                puVar12[7] = uVar24;
                puVar15 = (uchar *)(puVar12 + 8);
                puVar12 = puVar12 + 0x10;
              } while (puVar15 < param_3 + -0x40);
            }
          }
        }
        else {
          uVar3 = puVar14[-1];
          puVar13 = puVar14 + -1;
          uVar4 = *(undefined8 *)(_Src + 8);
          uVar5 = uVar3 - 0x1000 & 0x3f;
          *(undefined8 *)param_3 = *(undefined8 *)_Src;
          *(undefined8 *)(param_3 + 8) = uVar4;
          uVar11 = (ulonglong)(uVar3 - 0x1000 >> 6);
          uVar4 = *(undefined8 *)(_Src + 0x18);
          *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(_Src + 0x10);
          *(undefined8 *)(param_3 + 0x18) = uVar4;
          uVar4 = *(undefined8 *)(_Src + 0x28);
          *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(_Src + 0x20);
          *(undefined8 *)(param_3 + 0x28) = uVar4;
          puVar15 = _Src + 0x30;
          uVar4 = *(undefined8 *)(_Src + 0x38);
          _Src = _Src + uVar5;
          *(undefined8 *)(param_3 + 0x30) = *(undefined8 *)puVar15;
          *(undefined8 *)(param_3 + 0x38) = uVar4;
          puVar15 = param_3 + uVar5;
          *(undefined4 *)puVar15 = uVar21;
          *(undefined4 *)(puVar15 + 4) = uVar22;
          *(undefined4 *)(puVar15 + 8) = uVar23;
          *(undefined4 *)(puVar15 + 0xc) = uVar24;
          *(undefined4 *)(puVar15 + 0x10) = uVar21;
          *(undefined4 *)(puVar15 + 0x14) = uVar22;
          *(undefined4 *)(puVar15 + 0x18) = uVar23;
          *(undefined4 *)(puVar15 + 0x1c) = uVar24;
          *(undefined4 *)(puVar15 + 0x20) = uVar21;
          *(undefined4 *)(puVar15 + 0x24) = uVar22;
          *(undefined4 *)(puVar15 + 0x28) = uVar23;
          *(undefined4 *)(puVar15 + 0x2c) = uVar24;
          if (0x30 < uVar11) {
            uVar8 = (ulonglong)(puVar15 + 0xf) & 0xfffffffffffffff0;
            *(undefined4 *)(uVar8 + 0x20) = uVar21;
            *(undefined4 *)(uVar8 + 0x24) = uVar22;
            *(undefined4 *)(uVar8 + 0x28) = uVar23;
            *(undefined4 *)(uVar8 + 0x2c) = uVar24;
            *(undefined4 *)(uVar8 + 0x30) = uVar21;
            *(undefined4 *)(uVar8 + 0x34) = uVar22;
            *(undefined4 *)(uVar8 + 0x38) = uVar23;
            *(undefined4 *)(uVar8 + 0x3c) = uVar24;
            *(undefined4 *)(uVar8 + 0x40) = uVar21;
            *(undefined4 *)(uVar8 + 0x44) = uVar22;
            *(undefined4 *)(uVar8 + 0x48) = uVar23;
            *(undefined4 *)(uVar8 + 0x4c) = uVar24;
            *(undefined4 *)(uVar8 + 0x50) = uVar21;
            *(undefined4 *)(uVar8 + 0x54) = uVar22;
            *(undefined4 *)(uVar8 + 0x58) = uVar23;
            *(undefined4 *)(uVar8 + 0x5c) = uVar24;
            *(undefined4 *)(uVar8 + 0x60) = uVar21;
            *(undefined4 *)(uVar8 + 100) = uVar22;
            *(undefined4 *)(uVar8 + 0x68) = uVar23;
            *(undefined4 *)(uVar8 + 0x6c) = uVar24;
            *(undefined4 *)(uVar8 + 0x70) = uVar21;
            *(undefined4 *)(uVar8 + 0x74) = uVar22;
            *(undefined4 *)(uVar8 + 0x78) = uVar23;
            *(undefined4 *)(uVar8 + 0x7c) = uVar24;
          }
          param_3 = puVar15 + uVar11;
        }
      }
      else {
        uVar4 = *(undefined8 *)(_Src + 8);
        uVar5 = -(uint)bVar9 - 1 & 0xf;
        *(undefined8 *)param_3 = *(undefined8 *)_Src;
        *(undefined8 *)(param_3 + 8) = uVar4;
        puVar15 = param_3 + uVar5;
        _Src = _Src + uVar5;
        *(undefined4 *)puVar15 = uVar21;
        *(undefined4 *)(puVar15 + 4) = uVar22;
        *(undefined4 *)(puVar15 + 8) = uVar23;
        *(undefined4 *)(puVar15 + 0xc) = uVar24;
        param_3 = puVar15 + (bVar9 >> 4);
        bVar9 = (byte)puVar13[-1];
        if (bVar9 - 1 < 0x2f) {
          puVar14 = (ushort *)((longlong)puVar13 + -1);
          goto LAB_14f3d35e5;
        }
        uVar4 = *(undefined8 *)(_Src + 8);
        puVar14 = (ushort *)((longlong)puVar13 + -3);
        uVar5 = -(uint)bVar9 - 1 & 0xf;
        *(undefined8 *)param_3 = *(undefined8 *)_Src;
        *(undefined8 *)(param_3 + 8) = uVar4;
        puVar15 = param_3 + uVar5;
        _Src = _Src + uVar5;
        *(undefined4 *)puVar15 = uVar21;
        *(undefined4 *)(puVar15 + 4) = uVar22;
        *(undefined4 *)(puVar15 + 8) = uVar23;
        *(undefined4 *)(puVar15 + 0xc) = uVar24;
        param_3 = puVar15 + (bVar9 >> 4);
        bVar9 = *(byte *)puVar14;
        if (bVar9 - 1 < 0x2f) {
          puVar14 = puVar13 + -1;
          goto LAB_14f3d35e5;
        }
        uVar4 = *(undefined8 *)(_Src + 8);
        puVar13 = puVar13 + -2;
        uVar5 = -(uint)bVar9 - 1 & 0xf;
        *(undefined8 *)param_3 = *(undefined8 *)_Src;
        *(undefined8 *)(param_3 + 8) = uVar4;
        puVar15 = param_3 + uVar5;
        _Src = _Src + uVar5;
        *(undefined4 *)puVar15 = uVar21;
        *(undefined4 *)(puVar15 + 4) = uVar22;
        *(undefined4 *)(puVar15 + 8) = uVar23;
        *(undefined4 *)(puVar15 + 0xc) = uVar24;
        param_3 = puVar15 + (bVar9 >> 4);
        bVar9 = (byte)*puVar13;
        if (bVar9 - 1 < 0x2f) goto LAB_14f3d35e5;
        uVar4 = *(undefined8 *)(_Src + 8);
        uVar5 = -(uint)bVar9 - 1 & 0xf;
        *(undefined8 *)param_3 = *(undefined8 *)_Src;
        *(undefined8 *)(param_3 + 8) = uVar4;
        puVar15 = param_3 + uVar5;
        _Src = _Src + uVar5;
        *(undefined4 *)puVar15 = uVar21;
        *(undefined4 *)(puVar15 + 4) = uVar22;
        *(undefined4 *)(puVar15 + 8) = uVar23;
        *(undefined4 *)(puVar15 + 0xc) = uVar24;
        param_3 = puVar15 + (bVar9 >> 4);
      }
      lVar7 = (longlong)puVar13 - (longlong)_Src;
    } while( true );
  }
  return -1;
}

// newLZ_put_array_comp_header @ 14f3d3b80

uchar * __cdecl
oo2::newLZ_put_array_comp_header(uchar *param_1,int param_2,long64 param_3,long64 param_4)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = param_4 + -0x40000 + ((longlong)param_2 * 0x40000 + param_3) * 0x40000;
  *param_1 = (uchar)((ulonglong)lVar2 >> 0x20);
  uVar1 = (uint)lVar2;
  *(uint *)(param_1 + 1) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  return (uchar *)(param_4 + 4 + (longlong)(param_1 + 1));
}

// newLZ_put_array_rle @ 14f3d3bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

long64 __cdecl
oo2::newLZ_put_array_rle
          (uchar *param_1,uchar *param_2,uchar *param_3,long64 param_4,float param_5,
          OodleSpeedFit *param_6,float *param_7,rrArenaAllocator *param_8,uint param_9,int param_10)

{
  uchar uVar1;
  ushort uVar2;
  byte bVar3;
  undefined8 uVar4;
  uchar *puVar5;
  float *pfVar6;
  byte bVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  uchar *puVar11;
  uchar *puVar12;
  long64 lVar13;
  byte bVar14;
  uint uVar15;
  ulonglong *puVar16;
  longlong lVar17;
  ulonglong *puVar18;
  uchar *puVar19;
  ulonglong *puVar20;
  int iVar21;
  ulonglong uVar22;
  longlong lVar23;
  uchar *puVar24;
  byte *_Src;
  byte *pbVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  char cVar44;
  undefined1 auVar45 [16];
  float fVar46;
  undefined1 auStackY_538 [32];
  uchar local_4c8;
  float local_4c4;
  uchar *local_4c0;
  uint local_4b8 [2];
  uchar *local_4b0;
  OodleSpeedFit *local_4a8;
  long64 local_4a0;
  uchar *local_498;
  float *local_490;
  uint local_488 [256];
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_538;
  local_490 = param_7;
  local_4a8 = param_6;
  local_4a0 = param_4;
  if ((0 < param_4) && (4 < (longlong)param_2 - (longlong)param_1)) {
    *param_1 = '\0';
    puVar16 = (ulonglong *)(param_3 + param_4);
    lVar23 = 0;
    if (0x11 < (ulonglong)param_4) {
      lVar23 = param_4 + -0x12;
    }
    local_4c8 = '\0';
    local_4c0 = param_1 + 1;
    puVar18 = (ulonglong *)(param_3 + lVar23);
    puVar24 = local_4c0;
    _Src = param_2;
    puVar10 = (ulonglong *)param_3;
joined_r0x00014f3d3c83:
    if (param_3 < puVar18) {
LAB_14f3d3c90:
      puVar20 = (ulonglong *)param_3;
      auVar45[0] = -(*(char *)((longlong)puVar20 + 2) == (char)*puVar20);
      auVar45[1] = -(*(char *)((longlong)puVar20 + 3) == *(char *)((longlong)puVar20 + 1));
      auVar45[2] = -(*(char *)((longlong)puVar20 + 4) == *(char *)((longlong)puVar20 + 2));
      auVar45[3] = -(*(char *)((longlong)puVar20 + 5) == *(char *)((longlong)puVar20 + 3));
      auVar45[4] = -(*(char *)((longlong)puVar20 + 6) == *(char *)((longlong)puVar20 + 4));
      auVar45[5] = -(*(char *)((longlong)puVar20 + 7) == *(char *)((longlong)puVar20 + 5));
      auVar45[6] = -((char)puVar20[1] == *(char *)((longlong)puVar20 + 6));
      auVar45[7] = -(*(char *)((longlong)puVar20 + 9) == *(char *)((longlong)puVar20 + 7));
      auVar45[8] = -(*(char *)((longlong)puVar20 + 10) == (char)puVar20[1]);
      auVar45[9] = -(*(char *)((longlong)puVar20 + 0xb) == *(char *)((longlong)puVar20 + 9));
      auVar45[10] = -(*(char *)((longlong)puVar20 + 0xc) == *(char *)((longlong)puVar20 + 10));
      auVar45[0xb] = -(*(char *)((longlong)puVar20 + 0xd) == *(char *)((longlong)puVar20 + 0xb));
      auVar45[0xc] = -(*(char *)((longlong)puVar20 + 0xe) == *(char *)((longlong)puVar20 + 0xc));
      auVar45[0xd] = -(*(char *)((longlong)puVar20 + 0xf) == *(char *)((longlong)puVar20 + 0xd));
      auVar45[0xe] = -((char)puVar20[2] == *(char *)((longlong)puVar20 + 0xe));
      auVar45[0xf] = -(*(char *)((longlong)puVar20 + 0x11) == *(char *)((longlong)puVar20 + 0xf));
      auVar27[0] = -(*(char *)((longlong)puVar20 + 1) == (char)*puVar20);
      auVar27[1] = -(*(char *)((longlong)puVar20 + 2) == *(char *)((longlong)puVar20 + 1));
      auVar27[2] = -(*(char *)((longlong)puVar20 + 3) == *(char *)((longlong)puVar20 + 2));
      auVar27[3] = -(*(char *)((longlong)puVar20 + 4) == *(char *)((longlong)puVar20 + 3));
      auVar27[4] = -(*(char *)((longlong)puVar20 + 5) == *(char *)((longlong)puVar20 + 4));
      auVar27[5] = -(*(char *)((longlong)puVar20 + 6) == *(char *)((longlong)puVar20 + 5));
      auVar27[6] = -(*(char *)((longlong)puVar20 + 7) == *(char *)((longlong)puVar20 + 6));
      auVar27[7] = -((char)puVar20[1] == *(char *)((longlong)puVar20 + 7));
      auVar27[8] = -(*(char *)((longlong)puVar20 + 9) == (char)puVar20[1]);
      auVar27[9] = -(*(char *)((longlong)puVar20 + 10) == *(char *)((longlong)puVar20 + 9));
      auVar27[10] = -(*(char *)((longlong)puVar20 + 0xb) == *(char *)((longlong)puVar20 + 10));
      auVar27[0xb] = -(*(char *)((longlong)puVar20 + 0xc) == *(char *)((longlong)puVar20 + 0xb));
      auVar27[0xc] = -(*(char *)((longlong)puVar20 + 0xd) == *(char *)((longlong)puVar20 + 0xc));
      auVar27[0xd] = -(*(char *)((longlong)puVar20 + 0xe) == *(char *)((longlong)puVar20 + 0xd));
      auVar27[0xe] = -(*(char *)((longlong)puVar20 + 0xf) == *(char *)((longlong)puVar20 + 0xe));
      auVar27[0xf] = -((char)puVar20[2] == *(char *)((longlong)puVar20 + 0xf));
      auVar45 = auVar45 & auVar27;
      uVar2 = (ushort)(SUB161(auVar45 >> 7,0) & 1) | (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar45[0xf] >> 7) << 0xf;
      if (uVar2 == 0) goto code_r0x00014f3d3cb8;
      uVar8 = 0;
      if (uVar2 != 0) {
        for (; (uVar2 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
        }
      }
      uVar9 = (ulonglong)uVar8;
      goto LAB_14f3d3ccf;
    }
    goto LAB_14f3d4017;
  }
  goto LAB_14f3d442a;
code_r0x00014f3d3cb8:
  param_3 = (uchar *)(puVar20 + 2);
  if (puVar18 <= puVar20 + 2) goto code_r0x00014f3d3cc5;
  goto LAB_14f3d3c90;
code_r0x00014f3d3cc5:
  uVar9 = 0x10;
LAB_14f3d3ccf:
  puVar20 = (ulonglong *)(uVar9 + (longlong)puVar20);
  if (puVar18 <= puVar20) {
LAB_14f3d4017:
    uVar9 = (longlong)puVar16 - (longlong)puVar10;
    local_4b0 = param_2;
    local_498 = param_1;
    if (uVar9 == 0) goto LAB_14f3d40ea;
    if (uVar9 + 0x10 <= (ulonglong)((longlong)_Src - (longlong)puVar24)) {
      memcpy(puVar24,puVar10,uVar9);
      puVar24 = puVar24 + uVar9;
      if (uVar9 < 0x40) goto LAB_14f3d40cc;
      if (uVar9 < 0x4f) {
        uVar9 = uVar9 - 0xf;
        _Src[-1] = 0;
        _Src = _Src + -1;
        if (uVar9 < 0x40) goto LAB_14f3d40c7;
      }
      lVar23 = (longlong)_Src - (longlong)puVar24;
      goto LAB_14f3d4080;
    }
    goto LAB_14f3d442a;
  }
  uVar9 = *puVar20 ^ *(ulonglong *)((longlong)puVar20 + 1);
  if (uVar9 == 0) {
    if ((longlong)puVar16 - (longlong)puVar20 < 0x18) {
      cVar29 = (char)*puVar20;
      cVar30 = *(char *)((longlong)puVar20 + 1);
      cVar31 = *(char *)((longlong)puVar20 + 2);
      cVar32 = *(char *)((longlong)puVar20 + 3);
      cVar33 = *(char *)((longlong)puVar20 + 4);
      cVar34 = *(char *)((longlong)puVar20 + 5);
      cVar35 = *(char *)((longlong)puVar20 + 6);
      cVar36 = *(char *)((longlong)puVar20 + 7);
      cVar37 = (char)puVar20[1];
      cVar38 = *(char *)((longlong)puVar20 + 9);
      cVar39 = *(char *)((longlong)puVar20 + 10);
      cVar40 = *(char *)((longlong)puVar20 + 0xb);
      cVar41 = *(char *)((longlong)puVar20 + 0xc);
      cVar42 = *(char *)((longlong)puVar20 + 0xd);
      cVar43 = *(char *)((longlong)puVar20 + 0xe);
      cVar44 = *(char *)((longlong)puVar20 + 0xf);
      param_3 = (uchar *)((longlong)puVar20 + 1);
    }
    else {
      cVar29 = (char)puVar20[1];
      cVar30 = *(char *)((longlong)puVar20 + 9);
      cVar31 = *(char *)((longlong)puVar20 + 10);
      cVar32 = *(char *)((longlong)puVar20 + 0xb);
      cVar33 = *(char *)((longlong)puVar20 + 0xc);
      cVar34 = *(char *)((longlong)puVar20 + 0xd);
      cVar35 = *(char *)((longlong)puVar20 + 0xe);
      cVar36 = *(char *)((longlong)puVar20 + 0xf);
      cVar37 = (char)puVar20[2];
      cVar38 = *(char *)((longlong)puVar20 + 0x11);
      cVar39 = *(char *)((longlong)puVar20 + 0x12);
      cVar40 = *(char *)((longlong)puVar20 + 0x13);
      cVar41 = *(char *)((longlong)puVar20 + 0x14);
      cVar42 = *(char *)((longlong)puVar20 + 0x15);
      cVar43 = *(char *)((longlong)puVar20 + 0x16);
      cVar44 = *(char *)((longlong)puVar20 + 0x17);
      param_3 = (uchar *)((longlong)puVar20 + 9);
    }
    if (param_3 < puVar18) {
LAB_14f3d3d30:
      auVar28[0] = -((char)*(ulonglong *)param_3 == cVar29);
      auVar28[1] = -(*(char *)((longlong)param_3 + 1) == cVar30);
      auVar28[2] = -(*(char *)((longlong)param_3 + 2) == cVar31);
      auVar28[3] = -(*(char *)((longlong)param_3 + 3) == cVar32);
      auVar28[4] = -(*(char *)((longlong)param_3 + 4) == cVar33);
      auVar28[5] = -(*(char *)((longlong)param_3 + 5) == cVar34);
      auVar28[6] = -(*(char *)((longlong)param_3 + 6) == cVar35);
      auVar28[7] = -(*(char *)((longlong)param_3 + 7) == cVar36);
      auVar28[8] = -((char)*(ulonglong *)((longlong)param_3 + 8) == cVar37);
      auVar28[9] = -(*(char *)((longlong)param_3 + 9) == cVar38);
      auVar28[10] = -(*(char *)((longlong)param_3 + 10) == cVar39);
      auVar28[0xb] = -(*(char *)((longlong)param_3 + 0xb) == cVar40);
      auVar28[0xc] = -(*(char *)((longlong)param_3 + 0xc) == cVar41);
      auVar28[0xd] = -(*(char *)((longlong)param_3 + 0xd) == cVar42);
      auVar28[0xe] = -(*(char *)((longlong)param_3 + 0xe) == cVar43);
      auVar28[0xf] = -(*(char *)((longlong)param_3 + 0xf) == cVar44);
      uVar8 = (uint)(ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                            (ushort)(auVar28[0xf] >> 7) << 0xf);
      if (uVar8 == 0xffff) goto code_r0x00014f3d3d4b;
      uVar8 = ~uVar8;
      uVar15 = 0;
      if (uVar8 != 0) {
        for (; (uVar8 >> uVar15 & 1) == 0; uVar15 = uVar15 + 1) {
        }
      }
      param_3 = (uchar *)((ulonglong)uVar15 + (longlong)param_3);
      goto LAB_14f3d3d70;
    }
joined_r0x00014f3d3d57:
    for (; (param_3 < puVar16 && ((char)*(ulonglong *)param_3 == (char)*puVar20));
        param_3 = (uchar *)((longlong)param_3 + 1)) {
    }
  }
  else {
    uVar22 = 0;
    if (uVar9 != 0) {
      for (; (uVar9 >> uVar22 & 1) == 0; uVar22 = uVar22 + 1) {
      }
    }
    param_3 = (uchar *)((uVar22 >> 3) + 1 + (longlong)puVar20);
  }
LAB_14f3d3d70:
  uVar9 = (longlong)puVar20 - (longlong)puVar10;
  uVar22 = (longlong)param_3 - (longlong)puVar20;
  if ((ulonglong)((longlong)_Src - (longlong)puVar24) < uVar9 + 0x12) goto LAB_14f3d442a;
  uVar1 = (uchar)*puVar20;
  if (uVar1 != local_4c8) {
    if (uVar22 < 8) goto joined_r0x00014f3d3c83;
    _Src = _Src + -1;
    *_Src = 1;
    *puVar24 = uVar1;
    puVar24 = puVar24 + 1;
    local_4c8 = uVar1;
  }
  puVar11 = puVar24 + uVar9;
  lVar23 = (longlong)puVar10 - (longlong)puVar24;
  do {
    uVar4 = *(undefined8 *)(puVar24 + lVar23 + 8);
    *(undefined8 *)puVar24 = *(undefined8 *)(puVar24 + lVar23);
    *(undefined8 *)(puVar24 + 8) = uVar4;
    puVar24 = puVar24 + 0x10;
  } while (puVar24 < puVar11);
  puVar24 = puVar11;
  puVar10 = (ulonglong *)param_3;
  if ((uVar9 < 0x1f) && (((uVar22 < 0x10 || (uVar9 < 0x10)) && (uVar22 < 0x1f)))) {
    pbVar25 = _Src + -1;
    bVar14 = (byte)uVar22 * '\x10';
    if (uVar9 < 0x10) {
      bVar7 = 0xf - (char)uVar9;
      if (uVar22 < 0x10) {
        *pbVar25 = bVar7 | bVar14;
        _Src = pbVar25;
      }
      else {
        bVar3 = (byte)uVar22 & 0x1e;
        _Src = _Src + -2;
        *_Src = bVar14 + bVar3 * -8 | 0xf;
        *pbVar25 = bVar7 | bVar3 * '\b';
      }
    }
    else {
      _Src = _Src + -2;
      *_Src = 0x1eU - (char)uVar9 | bVar14;
      *pbVar25 = 0;
    }
  }
  else {
    if (uVar9 - 0x40 < 0xf) {
      _Src = _Src + -1;
      uVar9 = uVar9 - 0xf;
      *_Src = 0;
    }
    if (0x3f < uVar9) {
      lVar23 = (longlong)_Src - (longlong)puVar11;
      do {
        iVar21 = 0x700;
        if (uVar9 >> 6 < 0x700) {
          iVar21 = (int)(uVar9 >> 6);
        }
        if (lVar23 < 4) goto LAB_14f3d442a;
        lVar23 = lVar23 + -2;
        _Src[-2] = (byte)(iVar21 + -1);
        _Src[-1] = (char)((uint)(iVar21 + -1) >> 8) + 2;
        _Src = _Src + -2;
        uVar9 = uVar9 - (uint)(iVar21 << 6);
      } while (0x3f < uVar9);
    }
    uVar8 = (uint)uVar22 & 0x7f;
    if ((((uVar8 < 3) || (0x1e < uVar9)) || ((0xf < uVar8 && (0xf < uVar9)))) || (0x1e < uVar8)) {
      if ((uVar22 & 0x7f) != 0 || uVar9 != 0) {
        uVar8 = uVar8 << 6 | (uint)uVar9;
        _Src[-2] = (byte)uVar8;
        _Src[-1] = (char)(uVar8 >> 8) + 0x10;
        _Src = _Src + -2;
      }
    }
    else {
      pbVar25 = _Src + -1;
      bVar14 = (byte)uVar8 * '\x10';
      if (uVar9 < 0x10) {
        bVar7 = 0xf - (char)uVar9;
        if (uVar8 < 0x10) {
          *pbVar25 = bVar7 | bVar14;
          _Src = pbVar25;
        }
        else {
          bVar3 = (byte)uVar8 & 0x1e;
          _Src = _Src + -2;
          *_Src = bVar14 + bVar3 * -8 | 0xf;
          *pbVar25 = bVar7 | bVar3 * '\b';
        }
      }
      else {
        _Src = _Src + -2;
        *_Src = 0x1eU - (char)uVar9 | bVar14;
        *pbVar25 = 0;
      }
    }
    if (0x7f < uVar22) {
      lVar23 = (longlong)_Src - (longlong)puVar11;
      do {
        iVar21 = 0x700;
        if (uVar22 >> 7 < 0x700) {
          iVar21 = (int)(uVar22 >> 7);
        }
        if (lVar23 < 2) goto LAB_14f3d442a;
        lVar23 = lVar23 + -2;
        _Src[-2] = (byte)(iVar21 + -1);
        _Src[-1] = (char)((uint)(iVar21 + -1) >> 8) + 9;
        _Src = _Src + -2;
        uVar22 = uVar22 - (uint)(iVar21 << 7);
      } while (0x7f < uVar22);
    }
    if (_Src == (byte *)0x0) goto LAB_14f3d442a;
  }
  goto joined_r0x00014f3d3c83;
code_r0x00014f3d3d4b:
  param_3 = (uchar *)((longlong)param_3 + 0x10);
  if (puVar18 <= param_3) goto joined_r0x00014f3d3d57;
  goto LAB_14f3d3d30;
  while( true ) {
    lVar23 = lVar23 + -2;
    _Src[-2] = (byte)(iVar21 + -1);
    _Src[-1] = (char)((uint)(iVar21 + -1) >> 8) + 2;
    _Src = _Src + -2;
    uVar9 = uVar9 - (uint)(iVar21 << 6);
    if (uVar9 < 0x40) break;
LAB_14f3d4080:
    iVar21 = 0x700;
    if (uVar9 >> 6 < 0x700) {
      iVar21 = (int)(uVar9 >> 6);
    }
    if (lVar23 < 4) goto LAB_14f3d442a;
  }
LAB_14f3d40c7:
  if (uVar9 != 0) {
LAB_14f3d40cc:
    _Src[-2] = (byte)uVar9;
    _Src[-1] = (char)(uVar9 >> 8) + 0x10;
    _Src = _Src + -2;
  }
  if (_Src != (byte *)0x0) {
LAB_14f3d40ea:
    uVar8 = 0;
    local_4b0 = (uchar *)((longlong)local_4b0 - (longlong)_Src);
    lVar23 = (longlong)puVar24 - (longlong)local_4c0;
    puVar19 = (uchar *)0x0;
    local_4c4 = __real_4e800000;
    fVar46 = (float)(lVar23 + 1);
    puVar12 = (uchar *)0x0;
    puVar11 = (uchar *)0x0;
    if ((((param_9 & 8) != 0) && (puVar12 = puVar19, puVar11 = (uchar *)0x0, 0x1f < lVar23)) &&
       ((longlong)local_4b0 + lVar23 < 0xc001)) {
      puVar11 = (uchar *)param_8->m_cur;
      uVar22 = lVar23 + 0xfU & 0xfffffffffffffff0;
      uVar9 = (ulonglong)(-(uint)(param_8->m_unorderedStart != 0) & 0x10);
      if ((uchar *)(param_8->m_size + param_8->m_base) < puVar11 + uVar22 + uVar9) {
        if (param_8->m_allowFallback == 0) {
          puVar11 = (uchar *)0x0;
        }
        else {
          puVar11 = (*g_fp_OodleCore_Plugin_MallocAligned)(uVar22,0x10);
          if (puVar11 == (uchar *)0x0) {
                    /* WARNING: Subroutine does not return */
            Oodle_Core_Malloc_Failed(uVar22);
          }
        }
      }
      else {
        puVar16 = (ulonglong *)(puVar11 + uVar22);
        param_8->m_cur = (ulong64)puVar16;
        if (param_8->m_unorderedStart != 0) {
          *puVar16 = uVar22;
          puVar16[1] = 0;
          param_8->m_cur = param_8->m_cur + uVar9;
          puVar16 = (ulonglong *)param_8->m_cur;
        }
        puVar10 = (ulonglong *)param_8->m_cur_max;
        if ((ulonglong *)param_8->m_cur_max <= puVar16) {
          puVar10 = puVar16;
        }
        param_8->m_cur_max = (ulong64)puVar10;
      }
      puVar12 = local_4c0;
      CountHistoArrayU8(local_4c0,lVar23,local_488,0x100,false);
      uVar8 = simd_find_max_U32_256(local_488);
      if (uVar8 == (uint)lVar23) {
        local_4c0 = &DAT_00000003;
        fVar26 = (*local_4a8->memcpy)(lVar23);
        local_4c4 = fVar26 * param_5 + __real_40c00000;
        *puVar11 = *puVar12;
        puVar12 = &DAT_00000001;
        uVar8 = (uint)local_4c0;
      }
      else {
        local_4b8[0] = 0;
        local_4c0 = (uchar *)CONCAT44(local_4c0._4_4_,fVar46);
        puVar12 = (uchar *)newLZ_put_array_huff
                                     (puVar11,puVar11 + lVar23,puVar12,lVar23,local_488,param_5,
                                      local_4a8,(float *)&local_4c0,__real_53800000,local_4b8,
                                      param_9,param_8,param_10);
        if (((longlong)puVar12 < 0) || (lVar23 <= (longlong)puVar12)) {
          uVar8 = 0;
          puVar12 = puVar19;
        }
        else {
          local_4c4 = local_4c0._0_4_;
          uVar8 = local_4b8[0];
        }
      }
    }
    puVar5 = local_498;
    puVar19 = local_4b0;
    fVar26 = (float)(longlong)local_4b0;
    if (local_4c4 < fVar46) {
      uVar15 = (uint)(puVar12 + ((longlong)(int)uVar8 * 0x40000 + lVar23) * 0x40000 + -0x40000);
      *local_498 = (uchar)((ulonglong)
                           (puVar12 + ((longlong)(int)uVar8 * 0x40000 + lVar23) * 0x40000 + -0x40000
                           ) >> 0x20);
      *(uint *)(local_498 + 1) =
           uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18;
      memcpy(local_498 + 5,puVar11,(size_t)puVar12);
      lVar13 = newLZ_reput_array_small(puVar5,(long64)(puVar12 + 5),&local_4c4);
      lVar17 = (longlong)puVar19 + lVar13;
      memmove(puVar5 + lVar13,_Src,(size_t)puVar19);
      fVar46 = local_4c4;
    }
    else {
      memmove(puVar24,_Src,(size_t)local_4b0);
      lVar17 = (longlong)puVar19 + 1U + lVar23;
    }
    pfVar6 = local_490;
    *local_490 = fVar26 + fVar46;
    fVar46 = (*local_4a8->rle)(local_4a0);
    *pfVar6 = fVar46 * param_5 + __real_40a00000 + *pfVar6;
    if (puVar11 == (uchar *)0x0) {
      return lVar17;
    }
    rrArenaAllocator::Free(param_8,puVar11,lVar23);
    return lVar17;
  }
LAB_14f3d442a:
  return local_4a0 + 1;
}

// read128 @ 14f3d4460

__m128i * __cdecl oo2::read128(__m128i *__return_storage_ptr__,uchar *param_1)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// rle7_emit_long_packet @ 14f3d4480

uchar * __cdecl
oo2::rle7_emit_long_packet(uchar *param_1,uchar *param_2,ulong64 param_3,ulong64 param_4)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  
  if (0x3f < param_3) {
    if (param_3 < 0x4f) {
      param_1 = param_1 + -1;
      param_3 = param_3 - 0xf;
      *param_1 = 0;
      if (param_3 < 0x40) goto LAB_14f3d44f7;
    }
    lVar7 = (longlong)param_1 - (longlong)param_2;
    do {
      iVar6 = 0x700;
      if (param_3 >> 6 < 0x700) {
        iVar6 = (int)(param_3 >> 6);
      }
      if (lVar7 < 4) {
        return (uchar *)0x0;
      }
      lVar7 = lVar7 + -2;
      param_1[-2] = (byte)(iVar6 + -1);
      param_1[-1] = (char)((uint)(iVar6 + -1) >> 8) + 2;
      param_1 = param_1 + -2;
      param_3 = param_3 - (uint)(iVar6 << 6);
    } while (0x3f < param_3);
  }
LAB_14f3d44f7:
  uVar4 = (uint)param_4 & 0x7f;
  if ((((uVar4 < 3) || (0x1e < param_3)) || ((0xf < uVar4 && (0xf < param_3)))) || (0x1e < uVar4)) {
    if ((param_4 & 0x7f) != 0 || param_3 != 0) {
      uVar4 = uVar4 << 6 | (uint)param_3;
      param_1[-2] = (byte)uVar4;
      param_1[-1] = (char)(uVar4 >> 8) + 0x10;
      param_1 = param_1 + -2;
    }
  }
  else {
    pbVar3 = param_1 + -1;
    bVar5 = (byte)uVar4 * '\x10';
    if (param_3 < 0x10) {
      bVar2 = 0xf - (char)param_3;
      if (uVar4 < 0x10) {
        *pbVar3 = bVar2 | bVar5;
        param_1 = pbVar3;
      }
      else {
        bVar1 = (byte)uVar4 & 0x1e;
        param_1 = param_1 + -2;
        *param_1 = bVar5 + bVar1 * -8 | 0xf;
        *pbVar3 = bVar2 | bVar1 * '\b';
      }
    }
    else {
      param_1 = param_1 + -2;
      *param_1 = 0x1eU - (char)param_3 | bVar5;
      *pbVar3 = 0;
    }
  }
  if (0x7f < param_4) {
    lVar7 = (longlong)param_1 - (longlong)param_2;
    do {
      iVar6 = 0x700;
      if (param_4 >> 7 < 0x700) {
        iVar6 = (int)(param_4 >> 7);
      }
      if (lVar7 < 2) {
        return (uchar *)0x0;
      }
      lVar7 = lVar7 + -2;
      param_1[-2] = (byte)(iVar6 + -1);
      param_1[-1] = (char)((uint)(iVar6 + -1) >> 8) + 9;
      param_1 = param_1 + -2;
      param_4 = param_4 - (uint)(iVar6 << 7);
    } while (0x7f < param_4);
  }
  return param_1;
}

// rle7_emit_short_packets @ 14f3d4620

uchar * __cdecl
oo2::rle7_emit_short_packets(uchar *param_1,uchar *param_2,ulong64 param_3,ulong64 param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  
  pbVar1 = param_1 + -1;
  bVar4 = (byte)param_4 * '\x10';
  if (0xf < param_3) {
    param_1[-2] = 0x1eU - (char)param_3 | bVar4;
    *pbVar1 = 0;
    return param_1 + -2;
  }
  bVar3 = 0xf - (char)param_3;
  if (param_4 < 0x10) {
    *pbVar1 = bVar3 | bVar4;
    return pbVar1;
  }
  bVar2 = (byte)param_4 & 0x1e;
  param_1[-2] = bVar4 + bVar2 * -8 | 0xf;
  *pbVar1 = bVar3 | bVar2 * '\b';
  return param_1 + -2;
}

// rle7_find_run_end @ 14f3d46a0

uchar * __cdecl oo2::rle7_find_run_end(uchar *param_1,uchar *param_2,uchar *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  uchar *puVar5;
  undefined1 auVar6 [16];
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar uVar17;
  uchar uVar18;
  uchar uVar19;
  uchar uVar20;
  uchar uVar21;
  uchar uVar22;
  
  uVar4 = *(ulonglong *)param_1 ^ *(ulonglong *)(param_1 + 1);
  if (uVar4 != 0) {
    uVar2 = 0;
    if (uVar4 != 0) {
      for (; (uVar4 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    return param_1 + (uVar2 >> 3) + 1;
  }
  if ((longlong)param_3 - (longlong)param_1 < 0x18) {
    uVar7 = *param_1;
    uVar8 = param_1[1];
    uVar9 = param_1[2];
    uVar10 = param_1[3];
    uVar11 = param_1[4];
    uVar12 = param_1[5];
    uVar13 = param_1[6];
    uVar14 = param_1[7];
    uVar15 = param_1[8];
    uVar16 = param_1[9];
    uVar17 = param_1[10];
    uVar18 = param_1[0xb];
    uVar19 = param_1[0xc];
    uVar20 = param_1[0xd];
    uVar21 = param_1[0xe];
    uVar22 = param_1[0xf];
    puVar5 = param_1 + 1;
  }
  else {
    uVar7 = param_1[8];
    uVar8 = param_1[9];
    uVar9 = param_1[10];
    uVar10 = param_1[0xb];
    uVar11 = param_1[0xc];
    uVar12 = param_1[0xd];
    uVar13 = param_1[0xe];
    uVar14 = param_1[0xf];
    uVar15 = param_1[0x10];
    uVar16 = param_1[0x11];
    uVar17 = param_1[0x12];
    uVar18 = param_1[0x13];
    uVar19 = param_1[0x14];
    uVar20 = param_1[0x15];
    uVar21 = param_1[0x16];
    uVar22 = param_1[0x17];
    puVar5 = param_1 + 9;
  }
  while( true ) {
    if (param_2 <= puVar5) {
      for (; (puVar5 < param_3 && (*puVar5 == (uchar)*(ulonglong *)param_1)); puVar5 = puVar5 + 1) {
      }
      return puVar5;
    }
    auVar6[0] = -(*puVar5 == uVar7);
    auVar6[1] = -(puVar5[1] == uVar8);
    auVar6[2] = -(puVar5[2] == uVar9);
    auVar6[3] = -(puVar5[3] == uVar10);
    auVar6[4] = -(puVar5[4] == uVar11);
    auVar6[5] = -(puVar5[5] == uVar12);
    auVar6[6] = -(puVar5[6] == uVar13);
    auVar6[7] = -(puVar5[7] == uVar14);
    auVar6[8] = -(puVar5[8] == uVar15);
    auVar6[9] = -(puVar5[9] == uVar16);
    auVar6[10] = -(puVar5[10] == uVar17);
    auVar6[0xb] = -(puVar5[0xb] == uVar18);
    auVar6[0xc] = -(puVar5[0xc] == uVar19);
    auVar6[0xd] = -(puVar5[0xd] == uVar20);
    auVar6[0xe] = -(puVar5[0xe] == uVar21);
    auVar6[0xf] = -(puVar5[0xf] == uVar22);
    uVar3 = (uint)(ushort)((ushort)(SUB161(auVar6 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe |
                          (ushort)(auVar6[0xf] >> 7) << 0xf);
    if (uVar3 != 0xffff) break;
    puVar5 = puVar5 + 0x10;
  }
  uVar3 = ~uVar3;
  uVar1 = 0;
  if (uVar3 != 0) {
    for (; (uVar3 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  return puVar5 + uVar1;
}

// rle7_is_simple @ 14f3d4730

bool __cdecl oo2::rle7_is_simple(uint param_1)

{
  return 0x2e < param_1 - 1;
}

// rle7_skip_to_next_run3 @ 14f3d4740

uchar * __cdecl oo2::rle7_skip_to_next_run3(uchar *param_1,uchar *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  do {
    auVar4[0] = -(param_1[2] == *param_1);
    auVar4[1] = -(param_1[3] == param_1[1]);
    auVar4[2] = -(param_1[4] == param_1[2]);
    auVar4[3] = -(param_1[5] == param_1[3]);
    auVar4[4] = -(param_1[6] == param_1[4]);
    auVar4[5] = -(param_1[7] == param_1[5]);
    auVar4[6] = -(param_1[8] == param_1[6]);
    auVar4[7] = -(param_1[9] == param_1[7]);
    auVar4[8] = -(param_1[10] == param_1[8]);
    auVar4[9] = -(param_1[0xb] == param_1[9]);
    auVar4[10] = -(param_1[0xc] == param_1[10]);
    auVar4[0xb] = -(param_1[0xd] == param_1[0xb]);
    auVar4[0xc] = -(param_1[0xe] == param_1[0xc]);
    auVar4[0xd] = -(param_1[0xf] == param_1[0xd]);
    auVar4[0xe] = -(param_1[0x10] == param_1[0xe]);
    auVar4[0xf] = -(param_1[0x11] == param_1[0xf]);
    auVar3[0] = -(param_1[1] == *param_1);
    auVar3[1] = -(param_1[2] == param_1[1]);
    auVar3[2] = -(param_1[3] == param_1[2]);
    auVar3[3] = -(param_1[4] == param_1[3]);
    auVar3[4] = -(param_1[5] == param_1[4]);
    auVar3[5] = -(param_1[6] == param_1[5]);
    auVar3[6] = -(param_1[7] == param_1[6]);
    auVar3[7] = -(param_1[8] == param_1[7]);
    auVar3[8] = -(param_1[9] == param_1[8]);
    auVar3[9] = -(param_1[10] == param_1[9]);
    auVar3[10] = -(param_1[0xb] == param_1[10]);
    auVar3[0xb] = -(param_1[0xc] == param_1[0xb]);
    auVar3[0xc] = -(param_1[0xd] == param_1[0xc]);
    auVar3[0xd] = -(param_1[0xe] == param_1[0xd]);
    auVar3[0xe] = -(param_1[0xf] == param_1[0xe]);
    auVar3[0xf] = -(param_1[0x10] == param_1[0xf]);
    auVar4 = auVar4 & auVar3;
    uVar2 = (ushort)(SUB161(auVar4 >> 7,0) & 1) | (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar4[0xf] >> 7) << 0xf;
    if (uVar2 != 0) {
      uVar1 = 0;
      if (uVar2 != 0) {
        for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
        }
      }
      return param_1 + uVar1;
    }
    param_1 = param_1 + 0x10;
  } while (param_1 < param_2);
  return param_1;
}

// rrAlignUp64 @ 14f3d4780

ulong64 __cdecl oo2::rrAlignUp64(ulong64 param_1,long64 param_2)

{
  return (param_1 - 1) + param_2 & ~(param_2 - 1U);
}

// rrAlignUpA @ 14f3d47a0

long64 __cdecl oo2::rrAlignUpA(long64 param_1,long64 param_2)

{
  return param_1 + -1 + param_2 & ~(param_2 - 1U);
}

// rrCtz32 @ 14f3d47c0

uint __cdecl oo2::rrCtz32(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    for (; (param_1 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  return uVar1;
}

// rrCtz64 @ 14f3d47d0

uint __cdecl oo2::rrCtz64(ulong64 param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (param_1 != 0) {
    for (; (param_1 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
    }
  }
  return (uint)lVar1;
}

// rrCtzBytes64 @ 14f3d47e0

uint __cdecl oo2::rrCtzBytes64(ulong64 param_1)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    for (; (param_1 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  return (uint)(uVar1 >> 3) & 0x1fffffff;
}

// rrPrintfKill @ 14f3d4800

void __cdecl oo2::rrPrintfKill(char *param_1)

{
  return;
}

// rrPtrDiff @ 14f3d4820

long64 __cdecl oo2::rrPtrDiff(long64 param_1)

{
  return param_1;
}

// splatb_128 @ 14f3d4830

__m128i * __cdecl oo2::splatb_128(__m128i *__return_storage_ptr__,uchar *param_1)

{
  return (__m128i *)(ulonglong)(uint)(int)__return_storage_ptr__->m128i_i8[0];
}

// splatz_128 @ 14f3d4850

__m128i * __cdecl oo2::splatz_128(__m128i *__return_storage_ptr__)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// subtract_sat @ 14f3d4860

ulong64 __cdecl oo2::subtract_sat(ulong64 param_1,ulong64 param_2)

{
  ulong64 uVar1;
  
  uVar1 = 0;
  if (param_2 <= param_1) {
    uVar1 = param_1 - param_2;
  }
  return uVar1;
}

// write128 @ 14f3d4880

void __cdecl oo2::write128(uchar *param_1,__m128i *param_2)

{
  long64 lVar1;
  
  lVar1 = param_2->m128i_i64[1];
  *(long64 *)param_1 = param_2->m128i_i64[0];
  *(long64 *)(param_1 + 8) = lVar1;
  return;
}

// write128a @ 14f3d4890

void __cdecl oo2::write128a(uchar *param_1,__m128i *param_2)

{
  long64 lVar1;
  
  lVar1 = param_2->m128i_i64[1];
  *(long64 *)param_1 = param_2->m128i_i64[0];
  *(long64 *)(param_1 + 8) = lVar1;
  return;
}

