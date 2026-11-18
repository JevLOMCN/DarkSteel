// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 7

// FUN_14f8fb300 @ 14f8fb300

int FUN_14f8fb300(char *param_1,char *param_2,int param_3,int *param_4,undefined1 *param_5)

{
  int iVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar1 = *param_4;
  pcVar3 = param_1;
  if (iVar1 == 0) {
    for (; (param_2 != pcVar3 && (*pcVar3 == '0')); pcVar3 = pcVar3 + 1) {
    }
  }
  pcVar4 = pcVar3 + param_3;
  if ((longlong)param_2 - (longlong)pcVar3 <= (longlong)param_3) {
    pcVar4 = param_2;
  }
  for (; (pcVar3 < pcVar4 && ((byte)(*pcVar3 - 0x30U) < 10)); pcVar3 = pcVar3 + 1) {
    iVar1 = (int)*pcVar3 + (iVar1 * 5 + -0x18) * 2;
  }
  bVar2 = false;
  if (pcVar3 < param_2) {
    do {
      if (9 < (byte)(*pcVar3 - 0x30U)) break;
      if ((bVar2) || (*pcVar3 != '0')) {
        bVar2 = true;
      }
      pcVar3 = pcVar3 + 1;
    } while (pcVar3 < param_2);
    if ((bVar2) && (param_5 != (undefined1 *)0x0)) {
      *param_5 = 1;
    }
  }
  *param_4 = iVar1;
  return (int)pcVar3 - (int)param_1;
}

// FUN_14f8fb3d0 @ 14f8fb3d0

int FUN_14f8fb3d0(char *param_1,char *param_2,int param_3,longlong *param_4,undefined1 *param_5)

{
  longlong lVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  
  lVar1 = *param_4;
  pcVar3 = param_1;
  if (lVar1 == 0) {
    for (; (param_2 != pcVar3 && (*pcVar3 == '0')); pcVar3 = pcVar3 + 1) {
    }
  }
  pcVar4 = pcVar3 + param_3;
  if ((longlong)param_2 - (longlong)pcVar3 <= (longlong)param_3) {
    pcVar4 = param_2;
  }
  for (; (pcVar3 < pcVar4 && ((byte)(*pcVar3 - 0x30U) < 10)); pcVar3 = pcVar3 + 1) {
    lVar1 = (ulonglong)((int)*pcVar3 - 0x30) + lVar1 * 10;
  }
  bVar2 = false;
  if (pcVar3 < param_2) {
    do {
      if (9 < (byte)(*pcVar3 - 0x30U)) break;
      if ((bVar2) || (*pcVar3 != '0')) {
        bVar2 = true;
      }
      pcVar3 = pcVar3 + 1;
    } while (pcVar3 < param_2);
    if ((bVar2) && (param_5 != (undefined1 *)0x0)) {
      *param_5 = 1;
    }
  }
  *param_4 = lVar1;
  return (int)pcVar3 - (int)param_1;
}

// FUN_14f8fb480 @ 14f8fb480

int FUN_14f8fb480(byte *param_1,byte *param_2,int param_3,longlong *param_4,undefined1 *param_5)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  byte *pbVar4;
  longlong lVar5;
  
  lVar5 = *param_4;
  pbVar3 = param_1;
  if (lVar5 == 0) {
    for (; (param_2 != pbVar3 && (*pbVar3 == 0x30)); pbVar3 = pbVar3 + 1) {
    }
  }
  pbVar4 = pbVar3 + param_3;
  if ((longlong)param_2 - (longlong)pbVar3 <= (longlong)param_3) {
    pbVar4 = param_2;
  }
  while ((pbVar3 < pbVar4 && (bVar1 = *pbVar3, -1 < (char)(&DAT_153536850)[bVar1]))) {
    pbVar3 = pbVar3 + 1;
    lVar5 = lVar5 * 0x10 + (ulonglong)(uint)(int)(char)(&DAT_153536850)[bVar1];
  }
  bVar2 = false;
  if (pbVar3 < param_2) {
    do {
      if ((char)(&DAT_153536850)[*pbVar3] < '\0') break;
      if ((bVar2) || (*pbVar3 != 0x30)) {
        bVar2 = true;
      }
      pbVar3 = pbVar3 + 1;
    } while (pbVar3 < param_2);
    if ((bVar2) && (param_5 != (undefined1 *)0x0)) {
      *param_5 = 1;
    }
  }
  *param_4 = lVar5;
  return (int)pbVar3 - (int)param_1;
}

// ParseFloat<10> @ 14f8fb5f0

/* struct absl::lts_20240722::strings_internal::ParsedFloat __cdecl
   absl::lts_20240722::strings_internal::ParseFloat<10>(char const * __ptr64,char const *
   __ptr64,enum absl::lts_20240722::chars_format) */

char * __cdecl
absl::lts_20240722::strings_internal::ParseFloat<10>
          (char *param_1,char *param_2,chars_format param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 in_register_00000084;
  char *pcVar8;
  ulonglong in_R9;
  longlong lVar9;
  int iVar10;
  int iVar11;
  
  pcVar8 = (char *)CONCAT44(in_register_00000084,param_3);
  lVar9 = 0;
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  param_1[0x20] = '\0';
  param_1[0x21] = '\0';
  param_1[0x22] = '\0';
  param_1[0x23] = '\0';
  param_1[0x24] = '\0';
  param_1[0x25] = '\0';
  param_1[0x26] = '\0';
  param_1[0x27] = '\0';
  param_1[0x28] = '\0';
  param_1[0x29] = '\0';
  param_1[0x2a] = '\0';
  param_1[0x2b] = '\0';
  param_1[0x2c] = '\0';
  param_1[0x2d] = '\0';
  param_1[0x2e] = '\0';
  param_1[0x2f] = '\0';
  if (param_2 == pcVar8) {
    return param_1;
  }
  cVar3 = FUN_14f8fbcf0(param_2,pcVar8,param_1);
  pcVar6 = param_2;
  if (cVar3 != '\0') {
    return param_1;
  }
  for (; (pcVar6 < pcVar8 && (*pcVar6 == '0')); pcVar6 = pcVar6 + 1) {
  }
  bVar2 = false;
  for (pcVar5 = pcVar6; (pcVar8 != pcVar5 && (*pcVar5 == '0')); pcVar5 = pcVar5 + 1) {
  }
  pcVar7 = pcVar5 + 0x13;
  if ((longlong)pcVar8 - (longlong)pcVar5 < 0x14) {
    pcVar7 = pcVar8;
  }
  for (; (pcVar5 < pcVar7 && ((byte)(*pcVar5 - 0x30U) < 10)); pcVar5 = pcVar5 + 1) {
    lVar9 = (ulonglong)((int)*pcVar5 - 0x30) + lVar9 * 10;
  }
  bVar1 = false;
  if (pcVar5 < pcVar8) {
    do {
      if (9 < (byte)(*pcVar5 - 0x30U)) break;
      if ((bVar1) || (*pcVar5 != '0')) {
        bVar1 = true;
      }
      pcVar5 = pcVar5 + 1;
    } while (pcVar5 < pcVar8);
    if (bVar1) {
      bVar2 = true;
    }
  }
  iVar4 = (int)pcVar5 - (int)pcVar6;
  pcVar6 = pcVar6 + iVar4;
  if (49999999 < iVar4) {
    return param_1;
  }
  iVar10 = 0;
  iVar11 = iVar4 + -0x13;
  if (iVar4 < 0x14) {
    iVar10 = 0x13 - iVar4;
    iVar11 = 0;
  }
  if ((pcVar6 < pcVar8) && (*pcVar6 == '.')) {
    pcVar6 = pcVar6 + 1;
    pcVar5 = pcVar6;
    if (lVar9 == 0) {
      for (; (pcVar5 < pcVar8 && (*pcVar5 == '0')); pcVar5 = pcVar5 + 1) {
      }
      iVar4 = (int)pcVar5 - (int)pcVar6;
      if (49999999 < iVar4) {
        return param_1;
      }
      iVar11 = iVar11 - iVar4;
      for (pcVar6 = pcVar5; (pcVar8 != pcVar6 && (*pcVar6 == '0')); pcVar6 = pcVar6 + 1) {
      }
    }
    pcVar7 = pcVar6 + iVar10;
    if ((longlong)pcVar8 - (longlong)pcVar6 <= (longlong)iVar10) {
      pcVar7 = pcVar8;
    }
    for (; (pcVar6 < pcVar7 && ((byte)(*pcVar6 - 0x30U) < 10)); pcVar6 = pcVar6 + 1) {
      lVar9 = (ulonglong)((int)*pcVar6 - 0x30) + lVar9 * 10;
    }
    bVar1 = false;
    if (pcVar6 < pcVar8) {
      do {
        if (9 < (byte)(*pcVar6 - 0x30U)) break;
        if ((bVar1) || (*pcVar6 != '0')) {
          bVar1 = true;
        }
        pcVar6 = pcVar6 + 1;
      } while (pcVar6 < pcVar8);
      if (bVar1) {
        bVar2 = true;
      }
    }
    iVar4 = (int)pcVar6 - (int)pcVar5;
    pcVar6 = pcVar5 + iVar4;
    if (49999999 < iVar4) {
      return param_1;
    }
    if (iVar10 < iVar4) {
      iVar11 = iVar11 - iVar10;
    }
    else {
      iVar11 = iVar11 - iVar4;
    }
  }
  if (param_2 == pcVar6) {
    return param_1;
  }
  if (((longlong)pcVar6 - (longlong)param_2 == 1) && (*param_2 == '.')) {
    return param_1;
  }
  if (bVar2) {
    *(char **)(param_1 + 0x18) = param_2;
    *(char **)(param_1 + 0x20) = pcVar6;
  }
  *(longlong *)param_1 = lVar9;
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  if (((in_R9 & 1) == 0) && (pcVar5 = pcVar6, ((in_R9 & 0xffffffff) >> 1 & 1) != 0))
  goto LAB_14f8fb8c3;
  if ((pcVar6 < pcVar8) && ((*pcVar6 + 0xbbU & 0xdf) == 0)) {
    bVar2 = false;
    pcVar7 = pcVar6 + 1;
    if (pcVar7 < pcVar8) {
      if (*pcVar7 == '-') {
        bVar1 = true;
      }
      else {
        bVar1 = false;
        if (*pcVar7 != '+') goto LAB_14f8fb885;
      }
      bVar2 = bVar1;
      pcVar7 = pcVar6 + 2;
    }
LAB_14f8fb885:
    iVar4 = FUN_14f8fb300(pcVar7,pcVar8,9,param_1 + 0xc,0);
    pcVar5 = pcVar7 + iVar4;
    if (pcVar5 != pcVar7) {
      if (bVar2) {
        *(int *)(param_1 + 0xc) = -*(int *)(param_1 + 0xc);
      }
      goto LAB_14f8fb8c3;
    }
  }
  pcVar5 = pcVar6;
  if (((in_R9 & 1) != 0) && (((uint)in_R9 >> 1 & 1) == 0)) {
    return param_1;
  }
LAB_14f8fb8c3:
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  if (*(longlong *)param_1 == 0) {
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
  }
  else {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 0xc) + iVar11;
  }
  *(char **)(param_1 + 0x28) = pcVar5;
  return param_1;
}

// ParseFloat<16> @ 14f8fb920

/* struct absl::lts_20240722::strings_internal::ParsedFloat __cdecl
   absl::lts_20240722::strings_internal::ParseFloat<16>(char const * __ptr64,char const *
   __ptr64,enum absl::lts_20240722::chars_format) */

char * __cdecl
absl::lts_20240722::strings_internal::ParseFloat<16>
          (char *param_1,char *param_2,chars_format param_3)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined4 in_register_00000084;
  byte *pbVar9;
  ulonglong uVar10;
  ulonglong in_R9;
  int iVar11;
  int iVar12;
  
  pbVar9 = (byte *)CONCAT44(in_register_00000084,param_3);
  uVar10 = 0;
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  param_1[0x20] = '\0';
  param_1[0x21] = '\0';
  param_1[0x22] = '\0';
  param_1[0x23] = '\0';
  param_1[0x24] = '\0';
  param_1[0x25] = '\0';
  param_1[0x26] = '\0';
  param_1[0x27] = '\0';
  param_1[0x28] = '\0';
  param_1[0x29] = '\0';
  param_1[0x2a] = '\0';
  param_1[0x2b] = '\0';
  param_1[0x2c] = '\0';
  param_1[0x2d] = '\0';
  param_1[0x2e] = '\0';
  param_1[0x2f] = '\0';
  if ((byte *)param_2 == pbVar9) {
    return param_1;
  }
  cVar3 = FUN_14f8fbcf0(param_2,pbVar9,param_1);
  pbVar7 = (byte *)param_2;
  if (cVar3 != '\0') {
    return param_1;
  }
  for (; (pbVar7 < pbVar9 && (*pbVar7 == 0x30)); pbVar7 = pbVar7 + 1) {
  }
  bVar2 = false;
  for (pbVar6 = pbVar7; (pbVar9 != pbVar6 && (*pbVar6 == 0x30)); pbVar6 = pbVar6 + 1) {
  }
  pbVar8 = pbVar6 + 0xf;
  if ((longlong)pbVar9 - (longlong)pbVar6 < 0x10) {
    pbVar8 = pbVar9;
  }
  while ((pbVar6 < pbVar8 && (bVar1 = *pbVar6, -1 < (char)(&DAT_153536850)[bVar1]))) {
    pbVar6 = pbVar6 + 1;
    uVar10 = uVar10 * 0x10 + (ulonglong)(uint)(int)(char)(&DAT_153536850)[bVar1];
  }
  bVar4 = false;
  if (pbVar6 < pbVar9) {
    do {
      if ((char)(&DAT_153536850)[*pbVar6] < '\0') break;
      if ((bVar4) || (*pbVar6 != 0x30)) {
        bVar4 = true;
      }
      pbVar6 = pbVar6 + 1;
    } while (pbVar6 < pbVar9);
    bVar2 = false;
    if (bVar4) {
      bVar2 = true;
    }
  }
  iVar5 = (int)pbVar6 - (int)pbVar7;
  pbVar7 = pbVar7 + iVar5;
  if (12499999 < iVar5) {
    return param_1;
  }
  iVar11 = 0;
  iVar12 = iVar5 + -0xf;
  if (iVar5 < 0x10) {
    iVar11 = 0xf - iVar5;
    iVar12 = 0;
  }
  if ((pbVar7 < pbVar9) && (*pbVar7 == 0x2e)) {
    pbVar7 = pbVar7 + 1;
    pbVar6 = pbVar7;
    if (uVar10 == 0) {
      for (; (pbVar6 < pbVar9 && (*pbVar6 == 0x30)); pbVar6 = pbVar6 + 1) {
      }
      iVar5 = (int)pbVar6 - (int)pbVar7;
      if (12499999 < iVar5) {
        return param_1;
      }
      iVar12 = iVar12 - iVar5;
      for (pbVar7 = pbVar6; (pbVar9 != pbVar7 && (*pbVar7 == 0x30)); pbVar7 = pbVar7 + 1) {
      }
    }
    pbVar8 = pbVar7 + iVar11;
    if ((longlong)pbVar9 - (longlong)pbVar7 <= (longlong)iVar11) {
      pbVar8 = pbVar9;
    }
    while ((pbVar7 < pbVar8 && (bVar1 = *pbVar7, -1 < (char)(&DAT_153536850)[bVar1]))) {
      pbVar7 = pbVar7 + 1;
      uVar10 = uVar10 * 0x10 + (ulonglong)(uint)(int)(char)(&DAT_153536850)[bVar1];
    }
    bVar4 = false;
    if (pbVar7 < pbVar9) {
      do {
        if ((char)(&DAT_153536850)[*pbVar7] < '\0') break;
        if ((bVar4) || (*pbVar7 != 0x30)) {
          bVar4 = true;
        }
        pbVar7 = pbVar7 + 1;
      } while (pbVar7 < pbVar9);
      if (bVar4) {
        bVar2 = true;
      }
    }
    iVar5 = (int)pbVar7 - (int)pbVar6;
    pbVar7 = pbVar6 + iVar5;
    if (12499999 < iVar5) {
      return param_1;
    }
    if (iVar11 < iVar5) {
      iVar12 = iVar12 - iVar11;
    }
    else {
      iVar12 = iVar12 - iVar5;
    }
  }
  if ((byte *)param_2 == pbVar7) {
    return param_1;
  }
  if (((longlong)pbVar7 - (longlong)param_2 == 1) && (*param_2 == '.')) {
    return param_1;
  }
  if (bVar2) {
    uVar10 = uVar10 | 1;
  }
  *(ulonglong *)param_1 = uVar10;
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  if (((in_R9 & 1) == 0) && (pbVar6 = pbVar7, ((in_R9 & 0xffffffff) >> 1 & 1) != 0))
  goto LAB_14f8fbbed;
  if ((pbVar7 < pbVar9) && ((*pbVar7 + 0xb0 & 0xdf) == 0)) {
    bVar2 = false;
    pbVar8 = pbVar7 + 1;
    if (pbVar8 < pbVar9) {
      if (*pbVar8 == 0x2d) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
        if (*pbVar8 != 0x2b) goto LAB_14f8fbbaf;
      }
      bVar2 = bVar4;
      pbVar8 = pbVar7 + 2;
    }
LAB_14f8fbbaf:
    iVar5 = FUN_14f8fb300(pbVar8,pbVar9,9,param_1 + 0xc,0);
    pbVar6 = pbVar8 + iVar5;
    if (pbVar6 != pbVar8) {
      if (bVar2) {
        *(int *)(param_1 + 0xc) = -*(int *)(param_1 + 0xc);
      }
      goto LAB_14f8fbbed;
    }
  }
  pbVar6 = pbVar7;
  if (((in_R9 & 1) != 0) && (((uint)in_R9 >> 1 & 1) == 0)) {
    return param_1;
  }
LAB_14f8fbbed:
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  if (*(longlong *)param_1 == 0) {
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
  }
  else {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 0xc) + iVar12 * 4;
  }
  *(byte **)(param_1 + 0x28) = pbVar6;
  return param_1;
}

// ParsedFloat @ 14f8fbc70

/* public: __cdecl absl::lts_20240722::strings_internal::ParsedFloat::ParsedFloat(void) __ptr64 */

ParsedFloat * __thiscall
absl::lts_20240722::strings_internal::ParsedFloat::ParsedFloat(ParsedFloat *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  return this;
}

// FUN_14f8fbcf0 @ 14f8fbcf0

ulonglong FUN_14f8fbcf0(char *param_1,byte *param_2,longlong param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte *in_RAX;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  char *pcVar4;
  byte *pbVar5;
  bool bVar6;
  bool bVar7;
  
  if ((longlong)param_2 - (longlong)param_1 < 3) goto LAB_14f8fbe19;
  cVar1 = *param_1;
  in_RAX = (byte *)0x0;
  if (cVar1 == 'I') {
LAB_14f8fbdcc:
    iVar3 = absl::lts_20240722::strings_internal::memcasecmp(param_1 + 1,"nf",2);
    in_RAX = (byte *)CONCAT44(extraout_var_00,iVar3);
    if (iVar3 == 0) {
      *(undefined4 *)(param_3 + 0x10) = 1;
      pcVar4 = param_1 + 3;
      if (7 < (longlong)param_2 - (longlong)param_1) {
        iVar3 = absl::lts_20240722::strings_internal::memcasecmp(pcVar4,"inity",5);
        in_RAX = (byte *)CONCAT44(extraout_var_01,iVar3);
        if (iVar3 == 0) {
          pcVar4 = param_1 + 8;
        }
      }
      *(char **)(param_3 + 0x28) = pcVar4;
      return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
    }
  }
  else {
    if (cVar1 != 'N') {
      if (cVar1 == 'i') goto LAB_14f8fbdcc;
      if (cVar1 != 'n') goto LAB_14f8fbe19;
    }
    iVar3 = absl::lts_20240722::strings_internal::memcasecmp(param_1 + 1,"an",2);
    in_RAX = (byte *)CONCAT44(extraout_var,iVar3);
    if (iVar3 == 0) {
      pbVar5 = (byte *)(param_1 + 3);
      *(undefined4 *)(param_3 + 0x10) = 2;
      *(byte **)(param_3 + 0x28) = pbVar5;
      if (((pbVar5 < param_2) && (*pbVar5 == 0x28)) &&
         (pbVar5 = (byte *)(param_1 + 4), pbVar5 < param_2)) {
        do {
          bVar2 = *pbVar5;
          if ((bVar2 != 0x5f) &&
             (in_RAX = (byte *)(ulonglong)(bVar2 - 0x30), 9 < (byte)(bVar2 - 0x30))) {
            if ((char)bVar2 < 'a') {
              if ((char)bVar2 < 'A') {
                if (bVar2 == 0x29) {
                  *(byte **)(param_3 + 0x20) = pbVar5;
                  *(char **)(param_3 + 0x18) = param_1 + 4;
                  in_RAX = pbVar5 + 1;
                  *(byte **)(param_3 + 0x28) = in_RAX;
                }
                break;
              }
              bVar7 = SBORROW1(bVar2,'Z');
              cVar1 = -0x5a;
              bVar6 = bVar2 == 0x5a;
            }
            else {
              bVar7 = SBORROW1(bVar2,'z');
              cVar1 = -0x7a;
              bVar6 = bVar2 == 0x7a;
            }
            if (!bVar6 && bVar7 == (char)(bVar2 + cVar1) < '\0') break;
          }
          pbVar5 = pbVar5 + 1;
          if (param_2 <= pbVar5) {
            return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
          }
        } while( true );
      }
      return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
    }
  }
LAB_14f8fbe19:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}

