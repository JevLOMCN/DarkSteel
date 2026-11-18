// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 19

// Convert<char,wchar_t> @ 1414ffeb0

wchar_t * __cdecl
FGenericPlatformString::Convert<char,wchar_t>
          (wchar_t *param_1,int param_2,char *param_3,int param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  undefined1 (*pauVar9) [16];
  int iVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar27 [16];
  undefined1 auVar31 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  
  uVar5 = param_4;
  if (param_2 <= param_4) {
    uVar5 = param_2;
  }
  iVar10 = 0;
  iVar11 = iVar10;
  if (((0 < (int)uVar5) && (iVar11 = 0, 3 < uVar5)) &&
     ((param_3 + (int)(uVar5 - 1) < param_1 || (param_1 + (int)(uVar5 - 1) < param_3)))) {
    if (0x1f < uVar5) {
      uVar6 = uVar5 & 0x8000001f;
      if ((int)uVar6 < 0) {
        uVar6 = (uVar6 - 1 | 0xffffffe0) + 1;
      }
      puVar7 = (ulonglong *)(param_3 + 0x10);
      pauVar9 = (undefined1 (*) [16])(param_1 + 0x10);
      do {
        uVar2 = puVar7[-2];
        iVar10 = iVar10 + 0x20;
        uVar3 = puVar7[-1];
        puVar1 = puVar7 + 4;
        uVar28 = (undefined1)(uVar2 >> 0x38);
        auVar17._8_6_ = 0;
        auVar17._0_8_ = uVar2;
        auVar17[0xe] = uVar28;
        auVar17[0xf] = uVar28;
        uVar28 = (undefined1)(uVar2 >> 0x30);
        auVar16._14_2_ = auVar17._14_2_;
        auVar16._8_5_ = 0;
        auVar16._0_8_ = uVar2;
        auVar16[0xd] = uVar28;
        auVar15._13_3_ = auVar16._13_3_;
        auVar15._8_4_ = 0;
        auVar15._0_8_ = uVar2;
        auVar15[0xc] = uVar28;
        uVar28 = (undefined1)(uVar2 >> 0x28);
        auVar14._12_4_ = auVar15._12_4_;
        auVar14._8_3_ = 0;
        auVar14._0_8_ = uVar2;
        auVar14[0xb] = uVar28;
        auVar13._11_5_ = auVar14._11_5_;
        auVar13._8_2_ = 0;
        auVar13._0_8_ = uVar2;
        auVar13[10] = uVar28;
        uVar28 = (undefined1)(uVar2 >> 0x20);
        auVar12._10_6_ = auVar13._10_6_;
        auVar12[8] = 0;
        auVar12._0_8_ = uVar2;
        auVar12[9] = uVar28;
        auVar39._9_7_ = auVar12._9_7_;
        auVar39[8] = uVar28;
        auVar39._0_8_ = uVar2;
        uVar28 = (undefined1)(uVar2 >> 0x18);
        auVar18._8_8_ = auVar39._8_8_;
        auVar18[7] = uVar28;
        auVar18[6] = uVar28;
        uVar28 = (undefined1)(uVar2 >> 0x10);
        auVar18[5] = uVar28;
        auVar18[4] = uVar28;
        uVar28 = (undefined1)(uVar2 >> 8);
        auVar18[3] = uVar28;
        auVar18[2] = uVar28;
        auVar18[0] = (undefined1)uVar2;
        auVar18[1] = auVar18[0];
        uVar28 = (undefined1)(uVar3 >> 0x38);
        auVar38._8_6_ = 0;
        auVar38._0_8_ = uVar3;
        auVar38[0xe] = uVar28;
        auVar38[0xf] = uVar28;
        uVar28 = (undefined1)(uVar3 >> 0x30);
        auVar37._14_2_ = auVar38._14_2_;
        auVar37._8_5_ = 0;
        auVar37._0_8_ = uVar3;
        auVar37[0xd] = uVar28;
        auVar36._13_3_ = auVar37._13_3_;
        auVar36._8_4_ = 0;
        auVar36._0_8_ = uVar3;
        auVar36[0xc] = uVar28;
        uVar28 = (undefined1)(uVar3 >> 0x28);
        auVar35._12_4_ = auVar36._12_4_;
        auVar35._8_3_ = 0;
        auVar35._0_8_ = uVar3;
        auVar35[0xb] = uVar28;
        auVar34._11_5_ = auVar35._11_5_;
        auVar34._8_2_ = 0;
        auVar34._0_8_ = uVar3;
        auVar34[10] = uVar28;
        uVar28 = (undefined1)(uVar3 >> 0x20);
        auVar33._10_6_ = auVar34._10_6_;
        auVar33[8] = 0;
        auVar33._0_8_ = uVar3;
        auVar33[9] = uVar28;
        auVar32._9_7_ = auVar33._9_7_;
        auVar32[8] = uVar28;
        auVar32._0_8_ = uVar3;
        uVar28 = (undefined1)(uVar3 >> 0x18);
        auVar31._8_8_ = auVar32._8_8_;
        auVar31[7] = uVar28;
        auVar31[6] = uVar28;
        uVar28 = (undefined1)(uVar3 >> 0x10);
        auVar31[5] = uVar28;
        auVar31[4] = uVar28;
        uVar28 = (undefined1)(uVar3 >> 8);
        auVar31[3] = uVar28;
        auVar31[2] = uVar28;
        auVar31[0] = (undefined1)uVar3;
        auVar31[1] = auVar31[0];
        auVar18 = psraw(auVar18,8);
        auVar39 = psraw(auVar31,8);
        pauVar9[-2] = auVar18;
        uVar2 = *puVar7;
        uVar28 = (undefined1)(uVar2 >> 0x38);
        auVar26._8_6_ = 0;
        auVar26._0_8_ = uVar2;
        auVar26[0xe] = uVar28;
        auVar26[0xf] = uVar28;
        uVar28 = (undefined1)(uVar2 >> 0x30);
        auVar25._14_2_ = auVar26._14_2_;
        auVar25._8_5_ = 0;
        auVar25._0_8_ = uVar2;
        auVar25[0xd] = uVar28;
        auVar24._13_3_ = auVar25._13_3_;
        auVar24._8_4_ = 0;
        auVar24._0_8_ = uVar2;
        auVar24[0xc] = uVar28;
        uVar28 = (undefined1)(uVar2 >> 0x28);
        auVar23._12_4_ = auVar24._12_4_;
        auVar23._8_3_ = 0;
        auVar23._0_8_ = uVar2;
        auVar23[0xb] = uVar28;
        auVar22._11_5_ = auVar23._11_5_;
        auVar22._8_2_ = 0;
        auVar22._0_8_ = uVar2;
        auVar22[10] = uVar28;
        uVar28 = (undefined1)(uVar2 >> 0x20);
        auVar21._10_6_ = auVar22._10_6_;
        auVar21[8] = 0;
        auVar21._0_8_ = uVar2;
        auVar21[9] = uVar28;
        auVar20._9_7_ = auVar21._9_7_;
        auVar20[8] = uVar28;
        auVar20._0_8_ = uVar2;
        uVar28 = (undefined1)(uVar2 >> 0x18);
        auVar19._8_8_ = auVar20._8_8_;
        auVar19[7] = uVar28;
        auVar19[6] = uVar28;
        uVar28 = (undefined1)(uVar2 >> 0x10);
        auVar19[5] = uVar28;
        auVar19[4] = uVar28;
        uVar28 = (undefined1)(uVar2 >> 8);
        auVar19[3] = uVar28;
        auVar19[2] = uVar28;
        auVar19[0] = (undefined1)uVar2;
        auVar19[1] = auVar19[0];
        auVar18 = psraw(auVar19,8);
        pauVar9[-1] = auVar39;
        uVar2 = puVar7[1];
        uVar28 = (undefined1)(uVar2 >> 0x38);
        auVar47._8_6_ = 0;
        auVar47._0_8_ = uVar2;
        auVar47[0xe] = uVar28;
        auVar47[0xf] = uVar28;
        uVar28 = (undefined1)(uVar2 >> 0x30);
        auVar46._14_2_ = auVar47._14_2_;
        auVar46._8_5_ = 0;
        auVar46._0_8_ = uVar2;
        auVar46[0xd] = uVar28;
        auVar45._13_3_ = auVar46._13_3_;
        auVar45._8_4_ = 0;
        auVar45._0_8_ = uVar2;
        auVar45[0xc] = uVar28;
        uVar28 = (undefined1)(uVar2 >> 0x28);
        auVar44._12_4_ = auVar45._12_4_;
        auVar44._8_3_ = 0;
        auVar44._0_8_ = uVar2;
        auVar44[0xb] = uVar28;
        auVar43._11_5_ = auVar44._11_5_;
        auVar43._8_2_ = 0;
        auVar43._0_8_ = uVar2;
        auVar43[10] = uVar28;
        uVar28 = (undefined1)(uVar2 >> 0x20);
        auVar42._10_6_ = auVar43._10_6_;
        auVar42[8] = 0;
        auVar42._0_8_ = uVar2;
        auVar42[9] = uVar28;
        auVar41._9_7_ = auVar42._9_7_;
        auVar41[8] = uVar28;
        auVar41._0_8_ = uVar2;
        uVar28 = (undefined1)(uVar2 >> 0x18);
        auVar40._8_8_ = auVar41._8_8_;
        auVar40[7] = uVar28;
        auVar40[6] = uVar28;
        uVar28 = (undefined1)(uVar2 >> 0x10);
        auVar40[5] = uVar28;
        auVar40[4] = uVar28;
        uVar28 = (undefined1)(uVar2 >> 8);
        auVar40[3] = uVar28;
        auVar40[2] = uVar28;
        auVar40[0] = (undefined1)uVar2;
        auVar40[1] = auVar40[0];
        auVar39 = psraw(auVar40,8);
        *pauVar9 = auVar18;
        pauVar9[1] = auVar39;
        puVar7 = puVar1;
        pauVar9 = pauVar9 + 4;
      } while ((-0x10 - (longlong)param_3) + (longlong)puVar1 < (longlong)(int)(uVar5 - uVar6));
      iVar11 = iVar10;
      if (((byte)uVar5 & 0x1f) < 4) goto LAB_141500002;
    }
    lVar8 = (longlong)iVar10;
    uVar6 = uVar5 & 0x80000003;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
    }
    iVar11 = iVar10;
    do {
      uVar4 = *(undefined4 *)(param_3 + lVar8);
      iVar11 = iVar11 + 4;
      uVar30 = (undefined1)((uint)uVar4 >> 0x18);
      uVar29 = (undefined1)((uint)uVar4 >> 0x10);
      uVar28 = (undefined1)((uint)uVar4 >> 8);
      auVar27._4_4_ =
           (int)(CONCAT35(CONCAT21(CONCAT11(uVar30,uVar30),uVar29),CONCAT14(uVar29,uVar4)) >> 0x20);
      auVar27[3] = uVar28;
      auVar27[2] = uVar28;
      auVar27[0] = (undefined1)uVar4;
      auVar27[1] = auVar27[0];
      auVar27._8_8_ = 0;
      auVar18 = psraw(auVar27,8);
      *(longlong *)(param_1 + lVar8) = auVar18._0_8_;
      lVar8 = lVar8 + 4;
    } while (lVar8 < (int)(uVar5 - uVar6));
  }
LAB_141500002:
  for (lVar8 = (longlong)iVar11; lVar8 < (int)uVar5; lVar8 = lVar8 + 1) {
    param_1[lVar8] = (short)param_3[lVar8];
  }
  if (param_4 <= param_2) {
    return param_1 + (int)uVar5;
  }
  return (wchar_t *)0x0;
}

// Convert<unsigned_short,char> @ 141500050

char * __cdecl
FGenericPlatformString::Convert<unsigned_short,char>
          (char *param_1,int param_2,ushort *param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  longlong lVar6;
  
  bVar3 = false;
  iVar2 = param_4;
  if (param_2 <= param_4) {
    iVar2 = param_2;
  }
  pcVar5 = (char *)0x0;
  lVar6 = (longlong)iVar2;
  pcVar4 = pcVar5;
  if (0 < iVar2) {
    do {
      uVar1 = param_3[(longlong)pcVar4];
      param_1[(longlong)pcVar4] = (char)uVar1;
      pcVar4 = pcVar4 + 1;
      bVar3 = (bool)(bVar3 | 0x7f < uVar1);
    } while ((longlong)pcVar4 < lVar6);
    pcVar4 = pcVar5;
    if (bVar3) {
      do {
        if (0x7f < param_3[(longlong)pcVar4]) {
          pcVar4[(longlong)param_1] = '?';
        }
        pcVar4 = pcVar4 + 1;
      } while ((longlong)pcVar4 < lVar6);
    }
  }
  if (param_4 <= param_2) {
    pcVar5 = param_1 + lVar6;
  }
  return pcVar5;
}

// Convert<char32_t,char> @ 1415000e0

char * __cdecl
FGenericPlatformString::Convert<char32_t,char>
          (char *param_1,int param_2,wchar32 *param_3,int param_4)

{
  wchar32 wVar1;
  int iVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  longlong lVar6;
  
  bVar3 = false;
  iVar2 = param_4;
  if (param_2 <= param_4) {
    iVar2 = param_2;
  }
  pcVar5 = (char *)0x0;
  lVar6 = (longlong)iVar2;
  pcVar4 = pcVar5;
  if (0 < iVar2) {
    do {
      wVar1 = param_3[(longlong)pcVar4];
      param_1[(longlong)pcVar4] = (char)wVar1;
      pcVar4 = pcVar4 + 1;
      bVar3 = (bool)(bVar3 | 0x7f < (uint)wVar1);
    } while ((longlong)pcVar4 < lVar6);
    pcVar4 = pcVar5;
    if (bVar3) {
      do {
        if (0x7f < (uint)param_3[(longlong)pcVar4]) {
          pcVar4[(longlong)param_1] = '?';
        }
        pcVar4 = pcVar4 + 1;
      } while ((longlong)pcVar4 < lVar6);
    }
  }
  if (param_4 <= param_2) {
    pcVar5 = param_1 + lVar6;
  }
  return pcVar5;
}

// Convert<char32_t,wchar_t> @ 141500170

wchar_t * __cdecl
FGenericPlatformString::Convert<char32_t,wchar_t>
          (wchar_t *param_1,int param_2,wchar32 *param_3,int param_4)

{
  wchar32 wVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  
  bVar3 = false;
  iVar2 = param_4;
  if (param_2 <= param_4) {
    iVar2 = param_2;
  }
  lVar5 = (longlong)iVar2;
  if (0 < iVar2) {
    lVar4 = 0;
    do {
      wVar1 = param_3[lVar4];
      param_1[lVar4] = (wchar_t)wVar1;
      lVar4 = lVar4 + 1;
      bVar3 = (bool)(bVar3 | 0xffff < (uint)wVar1);
    } while (lVar4 < lVar5);
    if (bVar3) {
      lVar4 = 0;
      do {
        if (0xffff < (uint)param_3[lVar4]) {
          param_1[lVar4] = L'?';
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < lVar5);
    }
  }
  if (param_2 < param_4) {
    return (wchar_t *)0x0;
  }
  return param_1 + lVar5;
}

// Convert<wchar_t,char> @ 1415001f0

char * __cdecl
FGenericPlatformString::Convert<wchar_t,char>
          (char *param_1,int param_2,wchar_t *param_3,int param_4)

{
  wchar_t wVar1;
  int iVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  longlong lVar6;
  
  bVar3 = false;
  iVar2 = param_4;
  if (param_2 <= param_4) {
    iVar2 = param_2;
  }
  pcVar5 = (char *)0x0;
  lVar6 = (longlong)iVar2;
  pcVar4 = pcVar5;
  if (0 < iVar2) {
    do {
      wVar1 = param_3[(longlong)pcVar4];
      param_1[(longlong)pcVar4] = (char)wVar1;
      pcVar4 = pcVar4 + 1;
      bVar3 = (bool)(bVar3 | 0x7f < (ushort)wVar1);
    } while ((longlong)pcVar4 < lVar6);
    pcVar4 = pcVar5;
    if (bVar3) {
      do {
        if (0x7f < (ushort)param_3[(longlong)pcVar4]) {
          pcVar4[(longlong)param_1] = '?';
        }
        pcVar4 = pcVar4 + 1;
      } while ((longlong)pcVar4 < lVar6);
    }
  }
  if (param_4 <= param_2) {
    pcVar5 = param_1 + lVar6;
  }
  return pcVar5;
}

// GetEncodingTypeName<char> @ 141613450

wchar_t * __cdecl FGenericPlatformString::GetEncodingTypeName<char>(void)

{
  return L"ANSICHAR";
}

// GetEncodingTypeName<unsigned_short> @ 141613460

wchar_t * __cdecl FGenericPlatformString::GetEncodingTypeName<unsigned_short>(void)

{
  return L"UCS2CHAR";
}

// GetEncodingTypeName<char8_t> @ 141613470

wchar_t * __cdecl FGenericPlatformString::GetEncodingTypeName<char8_t>(void)

{
  return L"UTF8CHAR";
}

// GetEncodingTypeName<wchar_t> @ 141613480

wchar_t * __cdecl FGenericPlatformString::GetEncodingTypeName<wchar_t>(void)

{
  return L"WIDECHAR";
}

// Memcpy @ 14164dba0

void * __cdecl FGenericPlatformString::Memcpy(void *param_1,void *param_2,ulong64 param_3)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018fa1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(param_1,param_2,param_3);
  return pvVar1;
}

// Strncmp @ 141662150

int __cdecl FGenericPlatformString::Strncmp(char *param_1,char *param_2,ulong64 param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_1 - (longlong)param_2;
    do {
      bVar1 = param_2[lVar3];
      bVar2 = *param_2;
      param_2 = param_2 + 1;
      if (bVar1 != bVar2) {
        return (uint)bVar1 - (uint)bVar2;
      }
    } while ((bVar1 != 0) && (param_3 = param_3 - 1, param_3 != 0));
  }
  return 0;
}

// Strncmp @ 141662190

int __cdecl FGenericPlatformString::Strncmp(char *param_1,uchar *param_2,ulong64 param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_1 - (longlong)param_2;
    do {
      bVar1 = param_2[lVar3];
      bVar2 = *param_2;
      param_2 = param_2 + 1;
      if ((int)(char)bVar1 != (uint)bVar2) {
        return (uint)bVar1 - (uint)bVar2;
      }
    } while ((bVar1 != 0) && (param_3 = param_3 - 1, param_3 != 0));
  }
  return 0;
}

// Strncmp @ 1416621d0

int __cdecl FGenericPlatformString::Strncmp(char *param_1,wchar_t *param_2,ulong64 param_3)

{
  byte bVar1;
  wchar_t wVar2;
  
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    wVar2 = *param_2;
    param_2 = param_2 + 1;
    if ((int)(char)bVar1 != (uint)(ushort)wVar2) break;
    if (bVar1 == 0) {
      return 0;
    }
    param_3 = param_3 - 1;
  }
  return (uint)bVar1 - (uint)(ushort)wVar2;
}

// Strncmp @ 141662220

int __cdecl FGenericPlatformString::Strncmp(uchar *param_1,uchar *param_2,ulong64 param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_1 - (longlong)param_2;
    do {
      bVar1 = param_2[lVar3];
      bVar2 = *param_2;
      param_2 = param_2 + 1;
      if (bVar1 != bVar2) {
        return (uint)bVar1 - (uint)bVar2;
      }
    } while ((bVar1 != 0) && (param_3 = param_3 - 1, param_3 != 0));
  }
  return 0;
}

// Strncmp @ 141662260

int __cdecl FGenericPlatformString::Strncmp(uchar *param_1,char *param_2,ulong64 param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_1 - (longlong)param_2;
    do {
      bVar1 = *param_2;
      bVar2 = param_2[lVar3];
      param_2 = param_2 + 1;
      if ((uint)bVar2 != (int)(char)bVar1) {
        return (uint)bVar2 - (uint)bVar1;
      }
    } while ((bVar2 != 0) && (param_3 = param_3 - 1, param_3 != 0));
  }
  return 0;
}

// Strncmp @ 1416622a0

int __cdecl FGenericPlatformString::Strncmp(uchar *param_1,wchar_t *param_2,ulong64 param_3)

{
  byte bVar1;
  wchar_t wVar2;
  
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    wVar2 = *param_2;
    param_2 = param_2 + 1;
    if ((ushort)bVar1 != wVar2) break;
    if (bVar1 == 0) {
      return 0;
    }
    param_3 = param_3 - 1;
  }
  return (uint)bVar1 - (uint)(ushort)wVar2;
}

// Strncmp @ 1416622e0

int __cdecl FGenericPlatformString::Strncmp(wchar_t *param_1,wchar_t *param_2,ulong64 param_3)

{
  wchar_t wVar1;
  wchar_t wVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_1 - (longlong)param_2;
    do {
      wVar1 = *(wchar_t *)(lVar3 + (longlong)param_2);
      wVar2 = *param_2;
      param_2 = param_2 + 1;
      if (wVar1 != wVar2) {
        return (uint)(ushort)wVar1 - (uint)(ushort)wVar2;
      }
    } while ((wVar1 != L'\0') && (param_3 = param_3 - 1, param_3 != 0));
  }
  return 0;
}

// Strncmp @ 141662320

int __cdecl FGenericPlatformString::Strncmp(wchar_t *param_1,char *param_2,ulong64 param_3)

{
  byte bVar1;
  wchar_t wVar2;
  
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    bVar1 = *param_2;
    param_2 = param_2 + 1;
    wVar2 = *param_1;
    param_1 = param_1 + 1;
    if ((uint)(ushort)wVar2 != (int)(char)bVar1) break;
    if (wVar2 == L'\0') {
      return 0;
    }
    param_3 = param_3 - 1;
  }
  return (uint)(ushort)wVar2 - (uint)bVar1;
}

// Strncmp @ 141662370

int __cdecl FGenericPlatformString::Strncmp(wchar_t *param_1,uchar *param_2,ulong64 param_3)

{
  byte bVar1;
  wchar_t wVar2;
  
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    wVar2 = *param_1;
    param_1 = param_1 + 1;
    bVar1 = *param_2;
    param_2 = param_2 + 1;
    if (wVar2 != (ushort)bVar1) break;
    if (wVar2 == L'\0') {
      return 0;
    }
    param_3 = param_3 - 1;
  }
  return (uint)(ushort)wVar2 - (uint)bVar1;
}

