// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FObjectSearchPath @ 142294870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FObjectSearchPath * __thiscall
FObjectSearchPath::FObjectSearchPath(FObjectSearchPath *this,FName param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t wVar3;
  ForElementType<FName> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ForElementType<FName> FVar8;
  ForElementType<FName> FVar9;
  FObjectSearchPath *pFVar10;
  FName *pFVar11;
  ulonglong uVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  FName local_res10;
  undefined1 auStack_898 [32];
  ForElementType<FName> local_878;
  ForElementType<FName> local_870;
  longlong local_868;
  longlong local_860;
  undefined8 local_858;
  FName local_848;
  FName local_840;
  wchar_t local_838;
  wchar_t local_836 [1023];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_898;
  (this->Inner).ComparisonIndex = 0;
  (this->Inner).Number = 0;
  (this->Outers).AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
  (this->Outers).ArrayNum = 0;
  (this->Outers).ArrayMax = 8;
  local_res10 = param_1;
  ::FName::GetPlainNameString(&local_res10,(wchar_t (*) [1024])&local_838);
  pwVar2 = &local_838;
  pwVar13 = &local_838;
  uVar12 = 0;
  if ((ushort)local_838 < 0x40) {
    uVar12 = 1L << ((byte)local_838 & 0x3f);
  }
  while ((uVar12 & 0x400400000000001) == 0) {
    pwVar1 = pwVar13 + 1;
    pwVar13 = pwVar13 + 1;
    uVar12 = 0;
    if ((ushort)*pwVar1 < 0x40) {
      uVar12 = 1L << ((byte)*pwVar1 & 0x3f);
    }
  }
  wVar3 = *pwVar13;
  do {
    if (wVar3 == L'\0') {
      if ((this->Outers).ArrayNum != 0) {
        pFVar11 = ::FName::FName(&local_840,(int)((longlong)pwVar13 - (longlong)pwVar2 >> 1),pwVar2,
                                 local_res10.Number);
        local_res10 = *pFVar11;
      }
      this->Inner = local_res10;
      return this;
    }
    FVar8 = (ForElementType<FName>)
            ::FName::FName(&local_848,(int)((longlong)pwVar13 - (longlong)pwVar2 >> 1),pwVar2,
                           FNAME_Add);
    FVar4 = (this->Outers).AllocatorInstance.SecondaryData;
    FVar9 = (ForElementType<FName>)&this->Outers;
    if (FVar4 != (ForElementType<FName>)0x0) {
      FVar9 = FVar4;
    }
    if ((ulonglong)FVar9 <= (ulonglong)FVar8) {
      lVar14 = (longlong)(this->Outers).ArrayMax;
      FVar9 = (ForElementType<FName>)&this->Outers;
      if (FVar4 != (ForElementType<FName>)0x0) {
        FVar9 = FVar4;
      }
      if ((ulonglong)FVar8 < (ulonglong)((longlong)FVar9 + lVar14 * 8)) {
        local_860 = (longlong)(this->Outers).ArrayNum;
        local_858 = 8;
        local_870 = (ForElementType<FName>)&this->Outers;
        if (FVar4 != (ForElementType<FName>)0x0) {
          local_870 = FVar4;
        }
        local_878 = FVar8;
        local_868 = lVar14;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pFVar10 = (FObjectSearchPath *)(*pcVar5)();
          return pFVar10;
        }
      }
    }
    iVar7 = (this->Outers).ArrayNum;
    if (iVar7 == (this->Outers).ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                        (0x408,&(this->Outers).AllocatorInstance,&(this->Outers).ArrayMax);
    }
    (this->Outers).ArrayNum = iVar7 + 1;
    pwVar2 = pwVar13 + 1;
    FVar4 = (this->Outers).AllocatorInstance.SecondaryData;
    FVar9 = (ForElementType<FName>)&this->Outers;
    if (FVar4 != (ForElementType<FName>)0x0) {
      FVar9 = FVar4;
    }
    *(FName *)((longlong)FVar9 + (longlong)iVar7 * 8) = *(FName *)FVar8;
    wVar3 = *pwVar2;
    uVar12 = (-(ulonglong)((ushort)wVar3 < 0x40) & 0x400400000000001) >> ((byte)wVar3 & 0x3f);
    pwVar13 = pwVar2;
    while ((uVar12 & 1) == 0) {
      wVar3 = pwVar13[1];
      pwVar13 = pwVar13 + 1;
      uVar12 = (-(ulonglong)((ushort)wVar3 < 0x40) & 0x400400000000001) >> ((byte)wVar3 & 0x3f);
    }
  } while( true );
}

// MatchOuterNames @ 1422a37b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FObjectSearchPath::MatchOuterNames(FObjectSearchPath *this,UObject *param_1)

{
  ForElementType<FName> FVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  ForElementType<FName> FVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_1068 [32];
  ulonglong local_1048;
  longlong local_1040;
  FName local_1038;
  FName local_1030;
  wchar_t local_1028 [1024];
  wchar_t local_828 [1024];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x1422a37be;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1068;
  iVar6 = (this->Outers).ArrayNum;
  if (iVar6 == 0) {
    return true;
  }
  uVar8 = iVar6 - 1;
  if (0 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar8 * 8;
    do {
      if (param_1 == (UObject *)0x0) {
        return false;
      }
      iVar6 = (this->Outers).ArrayNum;
      uVar5 = 0;
      if ((int)uVar8 < iVar6) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_1048 = (ulonglong)uVar8;
        local_1040 = (longlong)iVar6;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      FVar1 = (this->Outers).AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<FName>)&this->Outers;
      if (FVar1 != (ForElementType<FName>)0x0) {
        FVar7 = FVar1;
      }
      if (*(longlong *)&param_1->field_0x18 != *(longlong *)(lVar9 + (longlong)FVar7)) {
        return false;
      }
      param_1 = *(UObject **)&param_1->field_0x20;
      uVar8 = uVar8 - 1;
      lVar9 = lVar9 + -8;
    } while (0 < (int)uVar8);
  }
  if (param_1 != (UObject *)0x0) {
    iVar6 = (this->Outers).ArrayNum;
    if (iVar6 < 1) {
      local_1048 = 0;
      local_1040 = (longlong)iVar6;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    FVar1 = (this->Outers).AllocatorInstance.SecondaryData;
    local_1038.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_1038.Number = *(uint *)&param_1->field_0x1c;
    FVar7 = (ForElementType<FName>)&this->Outers;
    if (FVar1 != (ForElementType<FName>)0x0) {
      FVar7 = FVar1;
    }
    local_1030 = *(FName *)FVar7;
    if (local_1038 == local_1030) {
      return true;
    }
    if (local_1038.Number == local_1030.Number) {
      uVar8 = ::FName::GetPlainNameString(&local_1038,&local_1028);
      uVar5 = ::FName::GetPlainNameString(&local_1030,&local_828);
      if ((uVar5 <= uVar8) &&
         (iVar6 = FGenericPlatformStricmp::Strnicmp
                            (local_1028 + ((ulonglong)uVar8 - (ulonglong)uVar5),local_828,
                             (ulonglong)uVar5), iVar6 == 0)) {
        return true;
      }
    }
  }
  return false;
}

