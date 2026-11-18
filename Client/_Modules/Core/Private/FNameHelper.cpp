// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 7

// EqualsString<char> @ 141a4e030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FNameHelper::EqualsString<char>(FName param_1,char *param_2,int param_3)

{
  code *pcVar1;
  FNameEntryHeader *pFVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  FNameEntry *pFVar7;
  FNameEntry_u_2 *pFVar8;
  uint uStackX_c;
  undefined1 auStack_858 [32];
  uint local_838 [4];
  FNameEntry_u_2 local_828;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_858;
  local_838[0] = param_3;
  if ((param_3 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Len >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xc3a,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  if (param_3 == 0) {
    bVar3 = param_1 == (FName)0x0;
  }
  else if (param_1 == (FName)0x0 && *param_2 == '_') {
    UE::Core::Private::ParseNumberFromName<char>(param_2,(int *)local_838);
    bVar3 = local_838[0] == 0;
  }
  else {
    pFVar7 = ::FName::ResolveEntry(param_1.ComparisonIndex.Value);
    uStackX_c = param_1.Number;
    if (((uStackX_c == 0) ||
        (uVar5 = UE::Core::Private::ParseNumberFromName<char>(param_2,(int *)local_838),
        param_3 = local_838[0], uStackX_c == uVar5)) && (param_3 == pFVar7->Len)) {
      pFVar8 = &pFVar7->field1_0x2;
      if (pFVar7->bIsWide == 0) {
        if (pFVar8 == (FNameEntry_u_2 *)0x0) {
          memcpy(&local_828,(void *)0x0,pFVar7->Len);
          pFVar8 = &local_828;
        }
        iVar6 = FGenericPlatformStricmp::Strnicmp(param_2,pFVar8->AnsiName,(longlong)param_3);
      }
      else {
        if (pFVar8 == (FNameEntry_u_2 *)0x0) {
          memcpy(&local_828,(void *)0x0,pFVar7->Len * 2);
          pFVar8 = &local_828;
        }
        iVar6 = FGenericPlatformStricmp::Strnicmp(param_2,pFVar8->WideName,(longlong)param_3);
      }
      bVar3 = iVar6 == 0;
    }
    else {
      bVar3 = false;
    }
  }
  return bVar3;
}

// EqualsString<wchar_t> @ 141a4e1b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FNameHelper::EqualsString<wchar_t>(FName param_1,wchar_t *param_2,int param_3)

{
  code *pcVar1;
  FNameEntryHeader *pFVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  FNameEntry *pFVar7;
  FNameEntry_u_2 *pFVar8;
  uint uStackX_c;
  undefined1 auStack_858 [32];
  uint local_838 [4];
  FNameEntry_u_2 local_828;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_858;
  local_838[0] = param_3;
  if ((param_3 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Len >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xc3a,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  if (param_3 == 0) {
    bVar3 = param_1 == (FName)0x0;
  }
  else if (param_1 == (FName)0x0 && *param_2 == L'_') {
    UE::Core::Private::ParseNumberFromName<wchar_t>(param_2,(int *)local_838);
    bVar3 = local_838[0] == 0;
  }
  else {
    pFVar7 = ::FName::ResolveEntry(param_1.ComparisonIndex.Value);
    uStackX_c = param_1.Number;
    if (((uStackX_c == 0) ||
        (uVar5 = UE::Core::Private::ParseNumberFromName<wchar_t>(param_2,(int *)local_838),
        param_3 = local_838[0], uStackX_c == uVar5)) && (param_3 == pFVar7->Len)) {
      pFVar8 = &pFVar7->field1_0x2;
      if (pFVar7->bIsWide == 0) {
        if (pFVar8 == (FNameEntry_u_2 *)0x0) {
          memcpy(&local_828,(void *)0x0,pFVar7->Len);
          pFVar8 = &local_828;
        }
        iVar6 = FGenericPlatformStricmp::Strnicmp(param_2,pFVar8->AnsiName,(longlong)param_3);
      }
      else {
        if (pFVar8 == (FNameEntry_u_2 *)0x0) {
          memcpy(&local_828,(void *)0x0,pFVar7->Len * 2);
          pFVar8 = &local_828;
        }
        iVar6 = FGenericPlatformStricmp::Strnicmp(param_2,pFVar8->WideName,(longlong)param_3);
      }
      bVar3 = iVar6 == 0;
    }
    else {
      bVar3 = false;
    }
  }
  return bVar3;
}

// MakeDetectNumber<FNameAnsiStringView> @ 141a527d0

FName __cdecl
FNameHelper::MakeDetectNumber<FNameAnsiStringView>(FNameAnsiStringView *param_1,EFindName param_2)

{
  uint uVar1;
  FNameEntryIds FVar2;
  undefined4 in_register_00000014;
  undefined8 *puVar3;
  EFindName in_R8D;
  FNameStringView_u_0 local_18;
  uint5 uStack_10;
  undefined3 uStack_b;
  
  puVar3 = (undefined8 *)CONCAT44(in_register_00000014,param_2);
  if (*(int *)(puVar3 + 1) == 0) {
    param_1->Str = (char *)0x0;
  }
  else {
    uVar1 = UE::Core::Private::ParseNumberFromName<char>((char *)*puVar3,(int *)(puVar3 + 1));
    local_18.Ansi = (char *)*puVar3;
    if (*(uint *)(puVar3 + 1) == 0) {
      uVar1 = 0;
      *(undefined4 *)&param_1->Str = 0;
    }
    else {
      uStack_10 = (uint5)*(uint *)(puVar3 + 1);
      FVar2 = FindOrStoreString((FNameStringView *)&local_18,in_R8D);
      *(uint *)&param_1->Str = FVar2.ComparisonId.Value.Value;
    }
    *(uint *)((longlong)&param_1->Str + 4) = uVar1;
  }
  return (FName)param_1;
}

// MakeDetectNumber<FWideStringViewWithWidth> @ 141a52860

FName __cdecl
FNameHelper::MakeDetectNumber<FWideStringViewWithWidth>
          (FWideStringViewWithWidth *param_1,EFindName param_2)

{
  undefined4 in_register_00000014;
  undefined8 *puVar1;
  int in_R8D;
  undefined8 local_18;
  undefined8 uStack_10;
  
  puVar1 = (undefined8 *)CONCAT44(in_register_00000014,param_2);
  if (*(int *)(puVar1 + 1) == 0) {
    param_1->Str = (wchar_t *)0x0;
    return (FName)param_1;
  }
  UE::Core::Private::ParseNumberFromName<wchar_t>((wchar_t *)*puVar1,(int *)(puVar1 + 1));
  local_18 = *puVar1;
  uStack_10 = puVar1[1];
  MakeWithNumber(param_1,(EFindName)&local_18,in_R8D);
  return (FName)param_1;
}

// FindOrStoreString @ 141a7fcc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FNameEntryIds __cdecl FNameHelper::FindOrStoreString(FNameStringView *param_1,EFindName param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  FNameEntryIds _Str;
  code *pcVar6;
  bool bVar7;
  size_t sVar8;
  wchar_t *pwVar9;
  FNameEntryIds FVar10;
  FNamePool *this;
  FNameHash *pFVar11;
  FNameEntry *pFVar12;
  ulonglong uVar13;
  FNamePoolShard<1> *SRWLock;
  uint uVar14;
  undefined1 auStack_218 [32];
  undefined4 local_1f8;
  uint local_1f0;
  undefined4 local_1e8;
  FNameEntryIds local_1e0;
  FNameStringView_u_0 local_1d8;
  uint local_1d0;
  uint uStack_1cc;
  char *local_1c8;
  undefined4 uStack_1c0;
  uint uStack_1bc;
  FNameStringView_u_0 local_1b8;
  undefined8 uStack_1b0;
  uint local_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  undefined4 uStack_19c;
  FNameStringView local_198;
  FNameStringView_u_0 local_188;
  undefined8 uStack_180;
  FNameStringView_u_0 local_178;
  undefined8 uStack_170;
  FNameHash local_168;
  FNameHash local_158;
  undefined1 local_148 [256];
  FNameEntryIds local_48;
  FNameEntryIds local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_218;
  FVar10.ComparisonId.Value = 0;
  FVar10.DisplayId.Value = 0;
  local_1d8._0_4_ = 0;
  local_1f0 = param_1->Len;
  if (local_1f0 < 0x400) {
    this = GetNamePool();
    if (param_2 == FNAME_Add) {
      local_188 = param_1->field0_0x0;
      uStack_180._0_4_ = param_1->Len;
      uStack_180._4_1_ = param_1->bIsWide;
      uStack_180._5_3_ = *(undefined3 *)&param_1->field_0xd;
      FNamePool::Store(this,(FNameStringView *)&local_1d8);
      FVar10.DisplayId.Value = local_1d8._0_4_;
      FVar10.ComparisonId.Value = local_1d8._0_4_;
    }
    else {
      if ((param_2 != FNAME_Find) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("FindType == FNAME_Find",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0xcc5,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        FVar10 = (FNameEntryIds)(*pcVar6)();
        return FVar10;
      }
      local_1b8 = (FNameStringView_u_0)(param_1->field0_0x0).Ansi;
      uStack_1b0._0_4_ = param_1->Len;
      uStack_1b0._4_1_ = param_1->bIsWide;
      uStack_1b0._5_3_ = *(undefined3 *)&param_1->field_0xd;
      uVar4 = param_1->Len;
      uVar5 = param_1->bIsWide;
      if (uVar5 == '\0') {
        pFVar11 = HashLowerCase<char>(&local_168,local_1b8.Ansi,uVar4);
      }
      else {
        pFVar11 = HashLowerCase<wchar_t>(&local_158,local_1b8.Wide,uVar4);
      }
      local_1a8 = pFVar11->ShardIndex;
      uStack_1a4 = pFVar11->UnmaskedSlotIndex;
      uStack_1a0 = pFVar11->SlotProbeHash;
      uStack_19c = *(undefined4 *)&pFVar11->EntryProbeHeader;
      SRWLock = this->ComparisonShards + local_1a8;
      AcquireSRWLockShared((PSRWLOCK)SRWLock);
      uVar14 = *(uint *)&SRWLock->field_0xc;
      uVar13 = (ulonglong)(uStack_1a4 & uVar14);
      puVar1 = (undefined4 *)(*(longlong *)&SRWLock->field_0x10 + uVar13 * 4);
      uVar2 = *(uint *)(*(longlong *)&SRWLock->field_0x10 + uVar13 * 4);
      while (uVar2 != 0) {
        if ((uVar2 & 0xe0000000) == uStack_1a0) {
          uStack_1cc = uVar2 & 0xffff;
          local_1d0 = (uVar2 & 0x1fffffff) >> 0x10;
          pFVar12 = (FNameEntry *)
                    ((ulonglong)((uVar2 & 0xffff) * 2) +
                    *(longlong *)
                     (*(longlong *)&SRWLock->field_0x18 + (ulonglong)local_1d0 * 8 + 0x10));
          if ((pFVar12->Header == uStack_19c._0_2_) &&
             (local_178 = local_1b8, uStack_170 = uStack_1b0,
             bVar7 = EqualsSameDimensions<1>(pFVar12,(FNameStringView *)&local_178), bVar7)) break;
        }
        uVar13 = (ulonglong)((int)uVar13 + 1U & uVar14);
        puVar1 = (undefined4 *)(*(longlong *)&SRWLock->field_0x10 + uVar13 * 4);
        uVar2 = *(uint *)(*(longlong *)&SRWLock->field_0x10 + uVar13 * 4);
      }
      uVar3 = *puVar1;
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
      FVar10 = (FNameEntryIds)(CONCAT44(uVar3,uVar3) & 0x1fffffff1fffffff);
    }
  }
  else if (param_2 != FNAME_Find) {
    _Str = (FNameEntryIds)(param_1->field0_0x0).Ansi;
    local_1e0 = _Str;
    if (param_1->bIsWide == false) {
      local_48.ComparisonId.Value = 0;
      local_48.DisplayId.Value = 0;
      if (_Str == (FNameEntryIds)0x0) {
        local_40.ComparisonId.Value = 0;
        local_40.DisplayId.Value = 0;
        local_38 = 0;
      }
      else {
        sVar8 = strlen((char *)_Str);
        local_38 = (int)sVar8;
        uVar14 = local_38 + 1;
        if (0x80 < uVar14) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_48,0,uVar14,2);
          FVar10 = local_48;
        }
        local_40 = (FNameEntryIds)local_148;
        if (FVar10 != (FNameEntryIds)0x0) {
          local_40 = FVar10;
        }
        pwVar9 = FGenericPlatformString::Convert<char,wchar_t>
                           ((wchar_t *)local_40,uVar14,(char *)_Str,uVar14);
        if ((pwVar9 == (wchar_t *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                               ,0x25,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          FVar10 = (FNameEntryIds)(*pcVar6)();
          return FVar10;
        }
        local_1f0 = param_1->Len;
      }
      FVar10.ComparisonId.Value = 1;
      FVar10.DisplayId.Value = 0;
      local_1e0 = local_40;
    }
    local_1e8 = 0x400;
    local_1f8 = 0x3ff;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                       ,0xcb4,
                       L"FName\'s %d max length exceeded. Got %d characters excluding null-terminator:\n%.*s"
                      );
    if ((FVar10 != (FNameEntryIds)0x0) && (local_48 != (FNameEntryIds)0x0)) {
      FMemory::Free((void *)local_48);
    }
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      FVar10 = (FNameEntryIds)(*pcVar6)();
      return FVar10;
    }
    uStack_1c0 = 0x18;
    local_1c8 = "ERROR_NAME_SIZE_EXCEEDED";
    uStack_1bc = uStack_1bc & 0xffffff00;
    local_198._12_4_ = uStack_1bc;
    local_198.Len = 0x18;
    local_198.field0_0x0.Data = "ERROR_NAME_SIZE_EXCEEDED";
    FVar10 = FindOrStoreString(&local_198,FNAME_Add);
  }
  return FVar10;
}

// MakeWithNumber @ 141a8b150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FName __cdecl
FNameHelper::MakeWithNumber(FNameUtf8StringViewWithWidth *param_1,EFindName param_2,int param_3)

{
  FNameStringView_u_0 FVar1;
  FNameEntryIds FVar2;
  undefined4 in_register_00000014;
  FNameStringView_u_0 *pFVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_R9D;
  uint uVar7;
  undefined1 auStack_888 [32];
  FNameStringView_u_0 local_868;
  undefined1 auStack_860 [8];
  undefined1 local_858 [2048];
  FNameStringView_u_0 local_58;
  FNameStringView_u_0 local_50;
  int local_48;
  ulonglong local_38;
  
  pFVar3 = (FNameStringView_u_0 *)CONCAT44(in_register_00000014,param_2);
  local_38 = __security_cookie.value ^ (ulonglong)auStack_888;
  uVar5 = *(uint *)(pFVar3 + 1);
  if (uVar5 == 0) {
    param_1->Str = (uchar *)0x0;
    return (FName)param_1;
  }
  FVar1 = (FNameStringView_u_0)pFVar3->Ansi;
  if (*(char *)((longlong)pFVar3 + 0xc) == '\0') {
    auStack_860[4] = 0;
    auStack_860._0_4_ = uVar5;
    local_868 = FVar1;
    FVar2 = FindOrStoreString((FNameStringView *)&local_868,param_3);
    *(uint *)&param_1->Str = FVar2.ComparisonId.Value.Value;
    *(undefined4 *)((longlong)&param_1->Str + 4) = in_R9D;
    return (FName)param_1;
  }
  iVar4 = 0;
  local_58.Data = (wchar_t *)0x0;
  if (FVar1.Data == (uchar *)0x0) {
    local_50.Data = (wchar_t *)0x0;
    local_48 = 0;
    goto LAB_141a8b29b;
  }
  if ((0 < (int)uVar5) && (*(uchar *)((longlong)(int)uVar5 + -1 + (longlong)FVar1.Data) == '\0')) {
    iVar4 = 1;
    uVar5 = uVar5 - 1;
  }
  local_48 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)FVar1.Ansi,uVar5);
  uVar7 = local_48 + iVar4;
  uVar6 = uVar7;
  if (uVar7 < 0x401) {
    if (local_58.Data != (wchar_t *)0x0) {
      uVar6 = 0;
      goto LAB_141a8b230;
    }
  }
  else {
LAB_141a8b230:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_58,0,uVar6,2);
  }
  local_50.Data = local_858;
  if (local_58.Data != (wchar_t *)0x0) {
    local_50 = local_58;
  }
  UE::Core::Private::Convert(local_50.Wide,uVar7,(uchar *)FVar1.Ansi,iVar4 + uVar5);
LAB_141a8b29b:
  auStack_860[4] = 1;
  auStack_860._0_4_ = local_48;
  local_868 = local_50;
  FVar2 = FindOrStoreString((FNameStringView *)&local_868,param_3);
  *(uint *)&param_1->Str = FVar2.ComparisonId.Value.Value;
  *(undefined4 *)((longlong)&param_1->Str + 4) = in_R9D;
  if (local_58.Data != (wchar_t *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return (FName)param_1;
}

// MakeWithNumber @ 141a8b310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FName __cdecl
FNameHelper::MakeWithNumber(FWideStringViewWithWidth *param_1,EFindName param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  int5 iVar14;
  longlong lVar15;
  FNameEntryIds FVar16;
  uint uVar17;
  uint uVar18;
  undefined4 in_register_00000014;
  ulonglong *puVar19;
  uint uVar20;
  undefined4 in_R9D;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  undefined1 auStack_458 [32];
  FNameStringView_u_0 local_438;
  int5 iStack_430;
  undefined3 uStack_42b;
  undefined8 local_428 [128];
  ulonglong local_28;
  ulonglong uVar21;
  
  puVar19 = (ulonglong *)CONCAT44(in_register_00000014,param_2);
  local_28 = __security_cookie.value ^ (ulonglong)auStack_458;
  uVar4 = (uint)puVar19[1];
  if (uVar4 == 0) {
    param_1->Str = (wchar_t *)0x0;
    return (FName)param_1;
  }
  if (*(char *)((longlong)puVar19 + 0xc) != '\0') {
    local_438.Data = (void *)*puVar19;
    iVar14 = 1;
    goto LAB_141a8b4d4;
  }
  uVar18 = 0x400;
  if ((int)uVar4 < 0x400) {
    uVar18 = uVar4;
  }
  uVar21 = 0;
  uVar20 = 0;
  if ((0 < (int)uVar18) && (uVar20 = 0, 3 < uVar18)) {
    uVar5 = *puVar19;
    if (((undefined8 *)(uVar5 + (longlong)(int)(uVar18 - 1) * 2) < local_428) ||
       (uVar20 = 0, (ulonglong)((longlong)local_428 + (longlong)(int)(uVar18 - 1)) < uVar5)) {
      if (0x1f < uVar18) {
        uVar17 = uVar18 & 0x8000001f;
        if ((int)uVar17 < 0) {
          uVar17 = (uVar17 - 1 | 0xffffffe0) + 1;
        }
        lVar15 = 0x20;
        uVar22 = uVar21;
        do {
          puVar1 = (uint *)((uVar5 - 0x20) + lVar15);
          uVar20 = (int)uVar21 + 0x20;
          uVar21 = (ulonglong)uVar20;
          puVar2 = (uint *)((uVar5 - 0x10) + lVar15);
          lVar15 = lVar15 + 0x40;
          uVar23 = *puVar1 & ___xmm_00ff00ff00ff00ff00ff00ff00ff00ff;
          uVar24 = puVar1[1] & _UNK_1506e9ce4;
          uVar25 = puVar1[2] & _UNK_1506e9ce8;
          uVar26 = puVar1[3] & _UNK_1506e9cec;
          uVar27 = *puVar2 & ___xmm_00ff00ff00ff00ff00ff00ff00ff00ff;
          uVar28 = puVar2[1] & _UNK_1506e9ce4;
          uVar29 = puVar2[2] & _UNK_1506e9ce8;
          uVar30 = puVar2[3] & _UNK_1506e9cec;
          sVar6 = (short)uVar23;
          sVar7 = (short)(uVar23 >> 0x10);
          sVar8 = (short)uVar24;
          sVar9 = (short)(uVar24 >> 0x10);
          sVar10 = (short)uVar25;
          sVar11 = (short)(uVar25 >> 0x10);
          sVar12 = (short)uVar26;
          sVar13 = (short)(uVar26 >> 0x10);
          *(ulonglong *)((longlong)local_428 + uVar22) =
               CONCAT17((0 < sVar13) * (sVar13 < 0x100) * (char)(uVar26 >> 0x10) - (0xff < sVar13),
                        CONCAT16((0 < sVar12) * (sVar12 < 0x100) * (char)uVar26 - (0xff < sVar12),
                                 CONCAT15((0 < sVar11) * (sVar11 < 0x100) * (char)(uVar25 >> 0x10) -
                                          (0xff < sVar11),
                                          CONCAT14((0 < sVar10) * (sVar10 < 0x100) * (char)uVar25 -
                                                   (0xff < sVar10),
                                                   CONCAT13((0 < sVar9) * (sVar9 < 0x100) *
                                                            (char)(uVar24 >> 0x10) - (0xff < sVar9),
                                                            CONCAT12((0 < sVar8) * (sVar8 < 0x100) *
                                                                     (char)uVar24 - (0xff < sVar8),
                                                                     CONCAT11((0 < sVar7) *
                                                                              (sVar7 < 0x100) *
                                                                              (char)(uVar23 >> 0x10)
                                                                              - (0xff < sVar7),
                                                                              (0 < sVar6) *
                                                                              (sVar6 < 0x100) *
                                                                              (char)uVar23 -
                                                                              (0xff < sVar6))))))));
          puVar1 = (uint *)((uVar5 - 0x40) + lVar15);
          uVar23 = *puVar1;
          uVar24 = puVar1[1];
          uVar25 = puVar1[2];
          uVar26 = puVar1[3];
          sVar6 = (short)uVar27;
          sVar7 = (short)(uVar27 >> 0x10);
          sVar8 = (short)uVar28;
          sVar9 = (short)(uVar28 >> 0x10);
          sVar10 = (short)uVar29;
          sVar11 = (short)(uVar29 >> 0x10);
          sVar12 = (short)uVar30;
          sVar13 = (short)(uVar30 >> 0x10);
          *(ulonglong *)((longlong)local_428 + uVar22 + 8) =
               CONCAT17((0 < sVar13) * (sVar13 < 0x100) * (char)(uVar30 >> 0x10) - (0xff < sVar13),
                        CONCAT16((0 < sVar12) * (sVar12 < 0x100) * (char)uVar30 - (0xff < sVar12),
                                 CONCAT15((0 < sVar11) * (sVar11 < 0x100) * (char)(uVar29 >> 0x10) -
                                          (0xff < sVar11),
                                          CONCAT14((0 < sVar10) * (sVar10 < 0x100) * (char)uVar29 -
                                                   (0xff < sVar10),
                                                   CONCAT13((0 < sVar9) * (sVar9 < 0x100) *
                                                            (char)(uVar28 >> 0x10) - (0xff < sVar9),
                                                            CONCAT12((0 < sVar8) * (sVar8 < 0x100) *
                                                                     (char)uVar28 - (0xff < sVar8),
                                                                     CONCAT11((0 < sVar7) *
                                                                              (sVar7 < 0x100) *
                                                                              (char)(uVar27 >> 0x10)
                                                                              - (0xff < sVar7),
                                                                              (0 < sVar6) *
                                                                              (sVar6 < 0x100) *
                                                                              (char)uVar27 -
                                                                              (0xff < sVar6))))))));
          uVar23 = uVar23 & ___xmm_00ff00ff00ff00ff00ff00ff00ff00ff;
          uVar24 = uVar24 & _UNK_1506e9ce4;
          uVar25 = uVar25 & _UNK_1506e9ce8;
          uVar26 = uVar26 & _UNK_1506e9cec;
          puVar1 = (uint *)((uVar5 - 0x30) + lVar15);
          uVar27 = *puVar1;
          uVar28 = puVar1[1];
          uVar29 = puVar1[2];
          uVar30 = puVar1[3];
          sVar6 = (short)uVar23;
          sVar7 = (short)(uVar23 >> 0x10);
          sVar8 = (short)uVar24;
          sVar9 = (short)(uVar24 >> 0x10);
          sVar10 = (short)uVar25;
          sVar11 = (short)(uVar25 >> 0x10);
          sVar12 = (short)uVar26;
          sVar13 = (short)(uVar26 >> 0x10);
          *(ulonglong *)((longlong)local_428 + uVar22 + 0x10) =
               CONCAT17((0 < sVar13) * (sVar13 < 0x100) * (char)(uVar26 >> 0x10) - (0xff < sVar13),
                        CONCAT16((0 < sVar12) * (sVar12 < 0x100) * (char)uVar26 - (0xff < sVar12),
                                 CONCAT15((0 < sVar11) * (sVar11 < 0x100) * (char)(uVar25 >> 0x10) -
                                          (0xff < sVar11),
                                          CONCAT14((0 < sVar10) * (sVar10 < 0x100) * (char)uVar25 -
                                                   (0xff < sVar10),
                                                   CONCAT13((0 < sVar9) * (sVar9 < 0x100) *
                                                            (char)(uVar24 >> 0x10) - (0xff < sVar9),
                                                            CONCAT12((0 < sVar8) * (sVar8 < 0x100) *
                                                                     (char)uVar24 - (0xff < sVar8),
                                                                     CONCAT11((0 < sVar7) *
                                                                              (sVar7 < 0x100) *
                                                                              (char)(uVar23 >> 0x10)
                                                                              - (0xff < sVar7),
                                                                              (0 < sVar6) *
                                                                              (sVar6 < 0x100) *
                                                                              (char)uVar23 -
                                                                              (0xff < sVar6))))))));
          uVar27 = uVar27 & ___xmm_00ff00ff00ff00ff00ff00ff00ff00ff;
          uVar28 = uVar28 & _UNK_1506e9ce4;
          uVar29 = uVar29 & _UNK_1506e9ce8;
          uVar30 = uVar30 & _UNK_1506e9cec;
          sVar6 = (short)uVar27;
          sVar7 = (short)(uVar27 >> 0x10);
          sVar8 = (short)uVar28;
          sVar9 = (short)(uVar28 >> 0x10);
          sVar10 = (short)uVar29;
          sVar11 = (short)(uVar29 >> 0x10);
          sVar12 = (short)uVar30;
          sVar13 = (short)(uVar30 >> 0x10);
          *(ulonglong *)((longlong)local_428 + uVar22 + 0x18) =
               CONCAT17((0 < sVar13) * (sVar13 < 0x100) * (char)(uVar30 >> 0x10) - (0xff < sVar13),
                        CONCAT16((0 < sVar12) * (sVar12 < 0x100) * (char)uVar30 - (0xff < sVar12),
                                 CONCAT15((0 < sVar11) * (sVar11 < 0x100) * (char)(uVar29 >> 0x10) -
                                          (0xff < sVar11),
                                          CONCAT14((0 < sVar10) * (sVar10 < 0x100) * (char)uVar29 -
                                                   (0xff < sVar10),
                                                   CONCAT13((0 < sVar9) * (sVar9 < 0x100) *
                                                            (char)(uVar28 >> 0x10) - (0xff < sVar9),
                                                            CONCAT12((0 < sVar8) * (sVar8 < 0x100) *
                                                                     (char)uVar28 - (0xff < sVar8),
                                                                     CONCAT11((0 < sVar7) *
                                                                              (sVar7 < 0x100) *
                                                                              (char)(uVar27 >> 0x10)
                                                                              - (0xff < sVar7),
                                                                              (0 < sVar6) *
                                                                              (sVar6 < 0x100) *
                                                                              (char)uVar27 -
                                                                              (0xff < sVar6))))))));
          uVar22 = uVar22 + 0x20;
        } while ((longlong)uVar22 < (longlong)(int)(uVar18 - uVar17));
        if (((byte)uVar18 & 0x1f) < 4) goto LAB_141a8b498;
      }
      lVar15 = (longlong)(int)uVar21;
      uVar17 = uVar18 & 0x80000003;
      if ((int)uVar17 < 0) {
        uVar17 = (uVar17 - 1 | 0xfffffffc) + 1;
      }
      do {
        uVar3 = *(undefined8 *)(uVar5 + lVar15 * 2);
        uVar20 = (int)uVar21 + 4;
        uVar21 = (ulonglong)uVar20;
        uVar23 = (uint)uVar3 & ___xmm_00ff00ff00ff00ff00ff00ff00ff00ff;
        uVar24 = (uint)((ulonglong)uVar3 >> 0x20) & _UNK_1506e9ce4;
        sVar6 = (short)uVar23;
        sVar7 = (short)(uVar23 >> 0x10);
        sVar8 = (short)uVar24;
        sVar9 = (short)(uVar24 >> 0x10);
        *(uint *)((longlong)local_428 + lVar15) =
             CONCAT13((0 < sVar9) * (sVar9 < 0x100) * (char)(uVar24 >> 0x10) - (0xff < sVar9),
                      CONCAT12((0 < sVar8) * (sVar8 < 0x100) * (char)uVar24 - (0xff < sVar8),
                               CONCAT11((0 < sVar7) * (sVar7 < 0x100) * (char)(uVar23 >> 0x10) -
                                        (0xff < sVar7),
                                        (0 < sVar6) * (sVar6 < 0x100) * (char)uVar23 -
                                        (0xff < sVar6))));
        lVar15 = lVar15 + 4;
      } while (lVar15 < (int)(uVar18 - uVar17));
    }
  }
LAB_141a8b498:
  lVar15 = (longlong)(int)uVar20;
  if (lVar15 < (int)uVar18) {
    uVar21 = *puVar19;
    do {
      *(undefined1 *)((longlong)local_428 + lVar15) = *(undefined1 *)(uVar21 + lVar15 * 2);
      lVar15 = lVar15 + 1;
    } while (lVar15 < (int)uVar18);
  }
  local_438.Data = local_428;
  iVar14 = 0;
LAB_141a8b4d4:
  _iStack_430 = CONCAT35(uStack_42b,iVar14 << 0x20);
  _iStack_430 = CONCAT44(stack0xfffffffffffffbd4,uVar4);
  FVar16 = FindOrStoreString((FNameStringView *)&local_438,param_3);
  *(uint *)&param_1->Str = FVar16.ComparisonId.Value.Value;
  *(undefined4 *)((longlong)&param_1->Str + 4) = in_R9D;
  return (FName)param_1;
}

