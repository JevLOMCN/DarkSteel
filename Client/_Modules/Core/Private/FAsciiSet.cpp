// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// HasOnly<char> @ 141795220

bool __cdecl FAsciiSet::HasOnly<char>(char *param_1,FAsciiSet *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  
  bVar1 = *param_1;
  uVar2 = ((ulonglong)((bVar1 & 0xc0) != 0x40) - 1 & param_2->HiMask |
          -(ulonglong)(bVar1 < 0x40) & param_2->LoMask) >> (bVar1 & 0x3f);
  while ((uVar2 & 1) != 0) {
    bVar1 = param_1[1];
    param_1 = param_1 + 1;
    uVar2 = ((ulonglong)(bVar1 >> 6 != 1) - 1 & param_2->HiMask |
            (ulonglong)(bVar1 >> 6 != 0) - 1 & param_2->LoMask) >> (bVar1 & 0x3f);
  }
  return bVar1 == 0;
}

// StringToBitset<char,40> @ 1419cb380

InitData * __cdecl
FAsciiSet::StringToBitset<char,40>(InitData *__return_storage_ptr__,char (*param_1) [40])

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  char *pcVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong local_90;
  ulonglong local_58;
  longlong local_48;
  
  local_48 = 3;
  pcVar34 = *param_1 + 2;
  local_90 = 0;
  local_58 = 0;
  do {
    bVar1 = (byte)(*(char (*) [40])(pcVar34 + -2))[0] >> 6;
    uVar14 = 1L << ((*(char (*) [40])(pcVar34 + -2))[0] & 0x3fU);
    bVar2 = (byte)pcVar34[-1] >> 6;
    uVar15 = 1L << (pcVar34[-1] & 0x3fU);
    bVar3 = (byte)*pcVar34 >> 6;
    uVar16 = 1L << (*pcVar34 & 0x3fU);
    bVar4 = (byte)pcVar34[1] >> 6;
    uVar17 = 1L << (pcVar34[1] & 0x3fU);
    bVar5 = (byte)pcVar34[2] >> 6;
    uVar18 = 1L << (pcVar34[2] & 0x3fU);
    bVar6 = (byte)pcVar34[3] >> 6;
    uVar19 = 1L << (pcVar34[3] & 0x3fU);
    uVar39 = 1L << (pcVar34[4] & 0x3fU);
    uVar40 = 1L << (pcVar34[5] & 0x3fU);
    uVar35 = 1L << (pcVar34[6] & 0x3fU);
    uVar36 = 1L << (pcVar34[7] & 0x3fU);
    uVar38 = 1L << (pcVar34[8] & 0x3fU);
    uVar37 = 1L << (pcVar34[9] & 0x3fU);
    uVar33 = 1L << (pcVar34[10] & 0x3fU);
    bVar7 = (byte)pcVar34[4] >> 6;
    bVar8 = (byte)pcVar34[10] >> 6;
    bVar9 = (byte)pcVar34[5] >> 6;
    bVar10 = (byte)pcVar34[6] >> 6;
    bVar11 = (byte)pcVar34[7] >> 6;
    bVar12 = (byte)pcVar34[8] >> 6;
    bVar13 = (byte)pcVar34[9] >> 6;
    uVar32 = 0;
    if (bVar2 == 0) {
      uVar32 = uVar15;
    }
    uVar20 = 0;
    if (bVar1 == 0) {
      uVar20 = uVar14;
    }
    uVar21 = 0;
    if (bVar8 == 0) {
      uVar21 = uVar33;
    }
    uVar22 = 0;
    if (bVar13 == 0) {
      uVar22 = uVar37;
    }
    uVar23 = 0;
    if (bVar12 == 0) {
      uVar23 = uVar38;
    }
    uVar24 = 0;
    if (bVar11 == 0) {
      uVar24 = uVar36;
    }
    uVar25 = 0;
    if (bVar10 == 0) {
      uVar25 = uVar35;
    }
    uVar26 = 0;
    if (bVar9 == 0) {
      uVar26 = uVar40;
    }
    uVar27 = 0;
    if (bVar7 == 0) {
      uVar27 = uVar39;
    }
    uVar28 = 0;
    if (bVar6 == 0) {
      uVar28 = uVar19;
    }
    uVar29 = 0;
    if (bVar5 == 0) {
      uVar29 = uVar18;
    }
    uVar30 = 0;
    if (bVar4 == 0) {
      uVar30 = uVar17;
    }
    uVar31 = 0;
    if (bVar3 == 0) {
      uVar31 = uVar16;
    }
    local_90 = local_90 |
               uVar32 | uVar20 | uVar21 | uVar22 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27 |
               uVar28 | uVar29 | uVar30 | uVar31;
    uVar32 = 0;
    if (bVar2 == 1) {
      uVar32 = uVar15;
    }
    uVar15 = 0;
    if (bVar1 == 1) {
      uVar15 = uVar14;
    }
    uVar14 = 0;
    if (bVar8 == 1) {
      uVar14 = uVar33;
    }
    uVar33 = 0;
    if (bVar13 == 1) {
      uVar33 = uVar37;
    }
    uVar37 = 0;
    if (bVar12 == 1) {
      uVar37 = uVar38;
    }
    uVar38 = 0;
    if (bVar11 == 1) {
      uVar38 = uVar36;
    }
    uVar36 = 0;
    if (bVar10 == 1) {
      uVar36 = uVar35;
    }
    uVar35 = 0;
    if (bVar9 == 1) {
      uVar35 = uVar40;
    }
    uVar40 = 0;
    if (bVar7 == 1) {
      uVar40 = uVar39;
    }
    uVar39 = 0;
    if (bVar6 == 1) {
      uVar39 = uVar19;
    }
    uVar19 = 0;
    if (bVar5 == 1) {
      uVar19 = uVar18;
    }
    uVar18 = 0;
    if (bVar4 == 1) {
      uVar18 = uVar17;
    }
    uVar17 = 0;
    if (bVar3 == 1) {
      uVar17 = uVar16;
    }
    pcVar34 = pcVar34 + 0xd;
    local_58 = local_58 |
               uVar32 | uVar15 | uVar14 | uVar33 | uVar37 | uVar38 | uVar36 | uVar35 | uVar40 |
               uVar39 | uVar19 | uVar18 | uVar17;
    local_48 = local_48 + -1;
  } while (local_48 != 0);
  __return_storage_ptr__->Lo = local_90;
  __return_storage_ptr__->Hi = local_58;
  return __return_storage_ptr__;
}

// FAsciiSet<char,6> @ 141c61c40

FAsciiSet * __thiscall FAsciiSet::FAsciiSet<char,6>(FAsciiSet *this,char (*param_1) [6])

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  uVar15 = 0;
  uVar16 = 1L << ((*param_1)[0] & 0x3fU);
  uVar12 = 1L << ((*param_1)[1] & 0x3fU);
  uVar11 = 1L << ((*param_1)[2] & 0x3fU);
  uVar14 = 1L << ((*param_1)[3] & 0x3fU);
  uVar13 = 1L << ((*param_1)[4] & 0x3fU);
  bVar1 = (byte)(*param_1)[2] >> 6;
  bVar2 = (byte)(*param_1)[4] >> 6;
  bVar3 = (byte)(*param_1)[0] >> 6;
  bVar4 = (byte)(*param_1)[1] >> 6;
  bVar5 = (byte)(*param_1)[3] >> 6;
  uVar10 = uVar15;
  if (bVar2 == 0) {
    uVar10 = uVar13;
  }
  uVar6 = uVar15;
  if (bVar5 == 0) {
    uVar6 = uVar14;
  }
  uVar7 = uVar15;
  if (bVar1 == 0) {
    uVar7 = uVar11;
  }
  uVar8 = uVar15;
  if (bVar4 == 0) {
    uVar8 = uVar12;
  }
  uVar9 = uVar15;
  if (bVar3 == 0) {
    uVar9 = uVar16;
  }
  this->LoMask = uVar10 | uVar6 | uVar7 | uVar8 | uVar9;
  uVar10 = uVar15;
  if (bVar2 == 1) {
    uVar10 = uVar13;
  }
  uVar13 = uVar15;
  if (bVar5 == 1) {
    uVar13 = uVar14;
  }
  uVar14 = uVar15;
  if (bVar1 == 1) {
    uVar14 = uVar11;
  }
  uVar11 = uVar15;
  if (bVar4 == 1) {
    uVar11 = uVar12;
  }
  if (bVar3 == 1) {
    uVar15 = uVar16;
  }
  this->HiMask = uVar10 | uVar13 | uVar14 | uVar11 | uVar15;
  return this;
}

// FindLastOrEnd<char> @ 141c64480

char * __cdecl FAsciiSet::FindLastOrEnd<char>(char *param_1,FAsciiSet *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char *pcVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  bVar1 = *param_1;
  uVar2 = param_2->HiMask;
  uVar5 = param_2->LoMask | 1;
  uVar6 = 0;
  if ((bVar1 & 0xffffffc0) == 0x40) {
    uVar6 = uVar2;
  }
  uVar3 = 0;
  if (bVar1 < 0x40) {
    uVar3 = uVar5;
  }
  for (uVar6 = (uVar6 | uVar3) >> (bVar1 & 0x3f); (uVar6 & 1) == 0;
      uVar6 = ((ulonglong)(bVar1 >> 6 != 1) - 1 & uVar2 | uVar6) >> (bVar1 & 0x3f)) {
    bVar1 = param_1[1];
    param_1 = param_1 + 1;
    uVar6 = 0;
    if (bVar1 >> 6 == 0) {
      uVar6 = uVar5;
    }
  }
  if (bVar1 != 0) {
    uVar6 = param_2->LoMask | 1;
    do {
      pcVar4 = param_1;
      bVar1 = pcVar4[1];
      uVar5 = 0;
      if (bVar1 >> 6 == 1) {
        uVar5 = uVar2;
      }
      uVar3 = 0;
      if (bVar1 >> 6 == 0) {
        uVar3 = uVar6;
      }
      param_1 = pcVar4;
      for (uVar5 = (uVar5 | uVar3) >> (bVar1 & 0x3f); param_1 = param_1 + 1, (uVar5 & 1) == 0;
          uVar5 = ((ulonglong)(bVar1 >> 6 != 1) - 1 & uVar2 | uVar5) >> (bVar1 & 0x3f)) {
        bVar1 = param_1[1];
        uVar5 = 0;
        if (bVar1 >> 6 == 0) {
          uVar5 = uVar6;
        }
      }
    } while (bVar1 != 0);
    return pcVar4;
  }
  return param_1;
}

// HasAny<FString> @ 141c64770

bool __cdecl FAsciiSet::HasAny<FString>(FString *param_1,FAsciiSet *param_2)

{
  int iVar1;
  ushort uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  ulonglong uVar7;
  undefined1 local_res8 [8];
  
  iVar1 = (param_1->Data).ArrayNum;
  uVar7 = 0;
  uVar3 = param_2->LoMask;
  uVar4 = param_2->HiMask;
  pFVar5 = (param_1->Data).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 2 + -2;
  if (iVar1 == 0) {
    pFVar6 = pFVar5 + (longlong)iVar1 * 2;
  }
  while( true ) {
    if ((param_1->Data).ArrayNum != iVar1) {
      `TCheckedPointerIterator<wchar_t_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar6) break;
    uVar2 = *(ushort *)pFVar5 >> 6;
    uVar7 = uVar7 | ((ulonglong)(uVar2 != 1) - 1 & uVar4 | (ulonglong)(uVar2 != 0) - 1 & uVar3) &
                    1L << ((byte)*(ushort *)pFVar5 & 0x3f);
    pFVar5 = pFVar5 + 2;
  }
  return uVar7 != 0;
}

