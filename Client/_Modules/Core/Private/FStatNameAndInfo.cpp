// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// FStatNameAndInfo @ 1419ceaf0

/* WARNING: Enum "Type": Some values do not have unique names */

FStatNameAndInfo * __thiscall
FStatNameAndInfo::FStatNameAndInfo
          (FStatNameAndInfo *this,FName param_1,char *param_2,char *param_3,wchar_t *param_4,
          Type param_5,bool param_6,bool param_7,bool param_8,EMemoryCounterRegion param_9)

{
  uint uVar1;
  uint uVar2;
  uint local_res8;
  uint local_resc;
  
  (this->Index).Value = 0;
  ToLongName((FName)&local_res8,(char *)param_1,param_2,(wchar_t *)param_3,SUB81(param_4,0));
  (this->Index).Value = local_res8;
  uVar2 = (param_5 | 0x80) << 9 | local_resc & 0xfffff1ff;
  uVar1 = uVar2 | 0x200000;
  if (!param_6) {
    uVar1 = uVar2 & 0xffdfffff;
  }
  uVar2 = uVar1 | 0x40000;
  if (!param_7) {
    uVar2 = uVar1 & 0xfffbffff;
  }
  this->Number = uVar2;
  if (param_9 != MCR_Invalid) {
    uVar2 = uVar2 & 0xf0ffffff | param_9 << 0x18 | 0x80000;
    this->Number = uVar2;
  }
  if (param_3 == GpuStatCategory) {
    this->Number = uVar2 | 0x20000;
  }
  return this;
}

// GetDescription @ 1419fd2a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __thiscall
FStatNameAndInfo::GetDescription(FStatNameAndInfo *this,FString *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  ForAnyElementType FVar3;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  local_res8 = (FName)((ulonglong)*this & 0x1ffffffffff);
  ::FName::ToString(&local_res8,&local_28);
  iVar1 = ::FString::Find(&local_28,L"///",3,CaseSensitive,FromStart,-1);
  if (iVar1 != -1) {
    ::FString::RemoveAt(&local_28,0,iVar1 + 3,No);
    iVar1 = ::FString::Find(&local_28,L"///",3,CaseSensitive,FromStart,-1);
    if (iVar1 != -1) {
      iVar2 = local_28.Data.ArrayNum + -1;
      if (local_28.Data.ArrayNum == 0) {
        iVar2 = 0;
      }
      if (iVar1 < iVar2) {
        iVar2 = iVar1;
      }
      iVar1 = 0;
      if (0 < iVar2) {
        iVar1 = iVar2;
      }
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        FVar3.Data = local_28.Data.AllocatorInstance.Data;
      }
      ::FString::ConstructFromPtrSize(&local_18,(wchar_t *)FVar3.Data,iVar1);
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar3.Data = local_18.Data.AllocatorInstance.Data;
      }
      FStatsUtils::FromEscapedString(__return_storage_ptr__,(wchar_t *)FVar3.Data);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      goto LAB_1419fd3b8;
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
LAB_1419fd3b8:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDescriptionFrom @ 1419fd3e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __cdecl
FStatNameAndInfo::GetDescriptionFrom(FString *__return_storage_ptr__,FName param_1)

{
  int iVar1;
  int iVar2;
  ForAnyElementType FVar3;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  local_res10 = param_1;
  ::FName::ToString(&local_res10,&local_28);
  iVar1 = ::FString::Find(&local_28,L"///",3,CaseSensitive,FromStart,-1);
  if (iVar1 != -1) {
    ::FString::RemoveAt(&local_28,0,iVar1 + 3,No);
    iVar1 = ::FString::Find(&local_28,L"///",3,CaseSensitive,FromStart,-1);
    if (iVar1 != -1) {
      iVar2 = local_28.Data.ArrayNum + -1;
      if (local_28.Data.ArrayNum == 0) {
        iVar2 = 0;
      }
      if (iVar1 < iVar2) {
        iVar2 = iVar1;
      }
      iVar1 = 0;
      if (0 < iVar2) {
        iVar1 = iVar2;
      }
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        FVar3.Data = local_28.Data.AllocatorInstance.Data;
      }
      ::FString::ConstructFromPtrSize(&local_18,(wchar_t *)FVar3.Data,iVar1);
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar3.Data = local_18.Data.AllocatorInstance.Data;
      }
      FStatsUtils::FromEscapedString(__return_storage_ptr__,(wchar_t *)FVar3.Data);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      goto LAB_1419fd4e1;
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
LAB_1419fd4e1:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetGroupCategory @ 1419fe590

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FName __thiscall FStatNameAndInfo::GetGroupCategory(FStatNameAndInfo *this)

{
  int iVar1;
  int iVar2;
  FName in_RDX;
  ForAnyElementType FVar3;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  local_res8 = (FName)((ulonglong)*this & 0x1ffffffffff);
  ::FName::ToString(&local_res8,&local_28);
  iVar1 = ::FString::Find(&local_28,L"####",4,CaseSensitive,FromStart,-1);
  if (iVar1 != -1) {
    ::FString::RemoveAt(&local_28,0,iVar1 + 4,No);
    iVar1 = ::FString::Find(&local_28,L"####",4,CaseSensitive,FromStart,-1);
    if (iVar1 != -1) {
      iVar2 = local_28.Data.ArrayNum + -1;
      if (local_28.Data.ArrayNum == 0) {
        iVar2 = 0;
      }
      if (iVar1 < iVar2) {
        iVar2 = iVar1;
      }
      iVar1 = 0;
      if (0 < iVar2) {
        iVar1 = iVar2;
      }
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        FVar3.Data = local_28.Data.AllocatorInstance.Data;
      }
      ::FString::ConstructFromPtrSize(&local_18,(wchar_t *)FVar3.Data,iVar1);
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar3.Data = local_18.Data.AllocatorInstance.Data;
      }
      ::FName::FName((FName *)in_RDX,(wchar_t *)FVar3.Data);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      goto LAB_1419fe6a4;
    }
  }
  *(undefined8 *)in_RDX = 0;
LAB_1419fe6a4:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return in_RDX;
}

// GetGroupCategoryFrom @ 1419fe6d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FName __cdecl FStatNameAndInfo::GetGroupCategoryFrom(FName param_1)

{
  int iVar1;
  int iVar2;
  ForAnyElementType FVar3;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  ::FName::ToString(&local_res10,&local_28);
  iVar1 = ::FString::Find(&local_28,L"####",4,CaseSensitive,FromStart,-1);
  if (iVar1 != -1) {
    ::FString::RemoveAt(&local_28,0,iVar1 + 4,No);
    iVar1 = ::FString::Find(&local_28,L"####",4,CaseSensitive,FromStart,-1);
    if (iVar1 != -1) {
      iVar2 = local_28.Data.ArrayNum + -1;
      if (local_28.Data.ArrayNum == 0) {
        iVar2 = 0;
      }
      if (iVar1 < iVar2) {
        iVar2 = iVar1;
      }
      iVar1 = 0;
      if (0 < iVar2) {
        iVar1 = iVar2;
      }
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        FVar3.Data = local_28.Data.AllocatorInstance.Data;
      }
      ::FString::ConstructFromPtrSize(&local_18,(wchar_t *)FVar3.Data,iVar1);
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar3.Data = local_18.Data.AllocatorInstance.Data;
      }
      ::FName::FName((FName *)param_1,(wchar_t *)FVar3.Data);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      goto LAB_1419fe7cd;
    }
  }
  *(undefined8 *)param_1 = 0;
LAB_1419fe7cd:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return param_1;
}

// GetGroupName @ 1419fe7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FName __thiscall FStatNameAndInfo::GetGroupName(FStatNameAndInfo *this)

{
  wchar_t *pwVar1;
  int iVar2;
  FName *pFVar3;
  FName in_RDX;
  int iVar4;
  int iVar5;
  int iVar6;
  wchar_t *pwVar7;
  undefined1 auStack_2a8 [32];
  TStringView<wchar_t> local_288;
  TStringView<wchar_t> local_278;
  FName local_268 [2];
  TStringBuilderBase<wchar_t> local_258;
  wchar_t local_238 [256];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_2a8;
  local_258.bIsDynamic = false;
  local_258.bIsExternal = false;
  local_288.DataPtr = (wchar_t *)((ulonglong)*this & 0x1ffffffffff);
  local_268[0] = (FName)local_288.DataPtr;
  local_258.Base = local_238;
  local_258.CurPos = local_238;
  local_258.End = (wchar_t *)local_38;
  ::FName::AppendString(local_268,&local_258);
  pwVar1 = local_258.Base;
  iVar4 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  iVar2 = iVar4;
  if (2 < iVar4) {
    iVar2 = 2;
  }
  iVar5 = 0;
  if (0 < iVar2) {
    iVar5 = iVar2;
  }
  if ((iVar5 == 2) && (iVar2 = wcsncmp(L"//",local_258.Base,2), iVar2 == 0)) {
    iVar5 = iVar4 + -2;
    pwVar7 = pwVar1 + 2;
    local_278.Size = iVar5;
    iVar2 = iVar5;
    if (8 < iVar5) {
      iVar2 = 8;
    }
    iVar6 = 0;
    if (0 < iVar2) {
      iVar6 = iVar2;
    }
    local_278.DataPtr = pwVar7;
    if ((iVar6 == 8) &&
       (iVar2 = FGenericPlatformStricmp::Strnicmp(L"Groups//",pwVar7,8), iVar2 == 0)) {
      pwVar7 = pwVar1 + 10;
      iVar5 = iVar4 + -10;
      local_278.Size = iVar5;
      local_278.DataPtr = pwVar7;
    }
    local_288.Size = 2;
    local_288.DataPtr = L"//";
    iVar2 = UE::String::FindFirst(&local_278,&local_288,CaseSensitive);
    if (iVar2 != -1) {
      if (iVar2 < iVar5) {
        iVar5 = iVar2;
      }
      iVar2 = 0;
      if (0 < iVar5) {
        iVar2 = iVar5;
      }
      pFVar3 = ::FName::FName((FName *)&local_288,iVar2,pwVar7,FNAME_Add);
      *(FName *)in_RDX = *pFVar3;
      goto LAB_1419fe992;
    }
  }
  *(FName *)in_RDX = (FName)0x0;
LAB_1419fe992:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
  return in_RDX;
}

// GetGroupNameFrom @ 1419fe9e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FName __cdecl FStatNameAndInfo::GetGroupNameFrom(FName param_1)

{
  wchar_t *pwVar1;
  int iVar2;
  FName *pFVar3;
  int iVar4;
  int iVar5;
  wchar_t *pwVar6;
  int iVar7;
  FName local_res10;
  undefined1 auStack_2a8 [32];
  TStringView<wchar_t> local_288;
  TStringView<wchar_t> local_278;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_2a8;
  local_268.Base = local_248;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  local_268.CurPos = local_248;
  local_268.End = (wchar_t *)local_48;
  ::FName::AppendString(&local_res10,&local_268);
  pwVar1 = local_268.Base;
  iVar4 = (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1);
  iVar2 = iVar4;
  if (2 < iVar4) {
    iVar2 = 2;
  }
  iVar5 = 0;
  if (0 < iVar2) {
    iVar5 = iVar2;
  }
  if ((iVar5 == 2) && (iVar2 = wcsncmp(L"//",local_268.Base,2), iVar2 == 0)) {
    iVar5 = iVar4 + -2;
    pwVar6 = pwVar1 + 2;
    local_278.Size = iVar5;
    iVar2 = iVar5;
    if (8 < iVar5) {
      iVar2 = 8;
    }
    iVar7 = 0;
    if (0 < iVar2) {
      iVar7 = iVar2;
    }
    local_278.DataPtr = pwVar6;
    if ((iVar7 == 8) &&
       (iVar2 = FGenericPlatformStricmp::Strnicmp(L"Groups//",pwVar6,8), iVar2 == 0)) {
      pwVar6 = pwVar1 + 10;
      iVar5 = iVar4 + -10;
      local_278.Size = iVar5;
      local_278.DataPtr = pwVar6;
    }
    local_288.Size = 2;
    local_288.DataPtr = L"//";
    iVar2 = UE::String::FindFirst(&local_278,&local_288,CaseSensitive);
    if (iVar2 != -1) {
      if (iVar2 < iVar5) {
        iVar5 = iVar2;
      }
      iVar2 = 0;
      if (0 < iVar5) {
        iVar2 = iVar5;
      }
      pFVar3 = ::FName::FName((FName *)&local_288,iVar2,pwVar6,FNAME_Add);
      *(FName *)param_1 = *pFVar3;
      goto LAB_1419feb5f;
    }
  }
  *(undefined8 *)param_1 = 0;
LAB_1419feb5f:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  return param_1;
}

// GetShortNameFrom @ 141a03580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FName __cdecl FStatNameAndInfo::GetShortNameFrom(FName param_1)

{
  wchar_t *pwVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  FName in_RDX;
  int iVar6;
  int iVar7;
  wchar_t *pwVar8;
  FName local_res10;
  undefined1 auStack_2b8 [32];
  TStringView<wchar_t> local_298;
  TStringView<wchar_t> local_288;
  TStringBuilderBase<wchar_t> local_278;
  wchar_t local_258 [256];
  ulonglong local_58 [4];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStack_2b8;
  local_278.Base = local_258;
  local_278.bIsDynamic = false;
  local_278.bIsExternal = false;
  local_278.CurPos = local_258;
  local_278.End = (wchar_t *)local_58;
  local_res10 = in_RDX;
  ::FName::AppendString(&local_res10,&local_278);
  pwVar8 = local_278.Base;
  local_298.DataPtr._0_4_ = SUB84(local_278.Base,0);
  local_298.DataPtr._4_4_ = (undefined4)((ulonglong)local_278.Base >> 0x20);
  iVar6 = (int)((longlong)local_278.CurPos - (longlong)local_278.Base >> 1);
  iVar3 = iVar6;
  if (2 < iVar6) {
    iVar3 = 2;
  }
  iVar7 = 0;
  if (0 < iVar3) {
    iVar7 = iVar3;
  }
  local_298.Size = iVar6;
  if ((iVar7 == 2) && (iVar3 = wcsncmp(L"//",local_278.Base,2), iVar3 == 0)) {
    iVar7 = iVar6 + -2;
    local_288.Size = 2;
    local_288.DataPtr = L"//";
    local_298.Size = iVar7;
    local_298.DataPtr = pwVar8 + 2;
    iVar3 = UE::String::FindFirst(&local_298,&local_288,CaseSensitive);
    if (iVar3 == -1) goto LAB_141a038c3;
    iVar4 = iVar6;
    if ((iVar7 - iVar3) + -2 < iVar7) {
      iVar4 = iVar7 - iVar3;
    }
    iVar6 = 0;
    if (0 < iVar4 + -2) {
      iVar6 = iVar4 + -2;
    }
    pwVar8 = pwVar8 + 2 + ((longlong)iVar7 - (longlong)iVar6);
    iVar3 = iVar6;
    pwVar1 = pwVar8;
  }
  else {
    pwVar1 = (wchar_t *)CONCAT44(local_298.DataPtr._4_4_,local_298.DataPtr._0_4_);
    iVar3 = local_298.Size;
  }
  uVar2 = local_298._12_4_;
  local_298.DataPtr._0_4_ = 0x506d4ac0;
  local_298.DataPtr._4_4_ = 1;
  local_298.Size = 3;
  local_288._12_4_ = local_298._12_4_;
  local_288.Size = iVar3;
  local_288.DataPtr = pwVar1;
  iVar4 = UE::String::FindFirst(&local_288,&local_298,CaseSensitive);
  iVar7 = 0;
  if (iVar4 == -1) {
    local_298.DataPtr._0_4_ = 0x506d4ac8;
    local_298.DataPtr._4_4_ = 1;
    local_298.Size = 4;
    local_288.DataPtr = pwVar1;
    iVar4 = UE::String::FindFirst(&local_288,&local_298,CaseSensitive);
    if (iVar4 == -1) {
      local_298.DataPtr._0_4_ = 0x506d4ad8;
      local_298.DataPtr._4_4_ = 1;
      local_298.Size = 4;
      local_288._12_4_ = uVar2;
      local_288.DataPtr = pwVar1;
      local_288.Size = iVar3;
      iVar3 = UE::String::FindFirst(&local_288,&local_298,CaseSensitive);
      iVar7 = iVar6;
      if (iVar3 != -1) {
        local_298.DataPtr._0_4_ = SUB84(pwVar8,0);
        local_298.DataPtr._4_4_ = (undefined4)((ulonglong)pwVar8 >> 0x20);
        if (iVar3 < iVar6) {
          iVar6 = iVar3;
        }
        iVar7 = 0;
        local_298.Size = 0;
        if (0 < iVar6) {
          iVar7 = iVar6;
          local_298.Size = iVar6;
        }
      }
    }
    else {
      if (iVar4 < iVar6) {
        iVar6 = iVar4;
      }
      if (0 < iVar6) {
        iVar7 = iVar6;
      }
      local_288._12_4_ = local_298._12_4_;
      local_298.DataPtr._0_4_ = 0x506d4ad8;
      local_298.DataPtr._4_4_ = 1;
      local_298.Size = 4;
      local_288.DataPtr = pwVar8;
      local_288.Size = iVar7;
      UE::String::FindFirst(&local_288,&local_298,CaseSensitive);
    }
  }
  else {
    if (iVar4 < iVar6) {
      iVar6 = iVar4;
    }
    if (0 < iVar6) {
      iVar7 = iVar6;
    }
    local_298.DataPtr._0_4_ = 0x506d4ac8;
    local_298.DataPtr._4_4_ = 1;
    local_298.Size = 4;
    local_288.DataPtr = pwVar8;
    local_288.Size = iVar7;
    UE::String::FindFirst(&local_288,&local_298,CaseSensitive);
    local_298.DataPtr._0_4_ = 0x506d4ad8;
    local_298.DataPtr._4_4_ = 1;
    local_298.Size = 4;
    local_288.DataPtr = pwVar8;
    local_288.Size = iVar7;
    local_288._12_4_ = local_298._12_4_;
    UE::String::FindFirst(&local_288,&local_298,CaseSensitive);
  }
  pFVar5 = ::FName::FName((FName *)&local_288,iVar7,pwVar8,FNAME_Add);
  local_res10 = *pFVar5;
LAB_141a038c3:
  *(FName *)param_1 = local_res10;
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_278);
  return param_1;
}

// GetSortByName @ 141a039d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall FStatNameAndInfo::GetSortByName(FStatNameAndInfo *this)

{
  int iVar1;
  int iVar2;
  ForAnyElementType FVar3;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  local_res8 = (FName)((ulonglong)*this & 0x1ffffffffff);
  ::FName::ToString(&local_res8,&local_28);
  iVar1 = ::FString::Find(&local_28,L"/#/#",4,CaseSensitive,FromStart,-1);
  if (iVar1 != -1) {
    ::FString::RemoveAt(&local_28,0,iVar1 + 4,No);
    iVar1 = ::FString::Find(&local_28,L"/#/#",4,CaseSensitive,FromStart,-1);
    if (iVar1 != -1) {
      iVar2 = local_28.Data.ArrayNum + -1;
      if (local_28.Data.ArrayNum == 0) {
        iVar2 = 0;
      }
      if (iVar1 < iVar2) {
        iVar2 = iVar1;
      }
      iVar1 = 0;
      if (0 < iVar2) {
        iVar1 = iVar2;
      }
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        FVar3.Data = local_28.Data.AllocatorInstance.Data;
      }
      ::FString::ConstructFromPtrSize(&local_18,(wchar_t *)FVar3.Data,iVar1);
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar3.Data = local_18.Data.AllocatorInstance.Data;
      }
      iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar3.Data,L"SortByName");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      return iVar1 == 0;
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return false;
}

// GetSortByNameFrom @ 141a03b20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl FStatNameAndInfo::GetSortByNameFrom(FName param_1)

{
  int iVar1;
  int iVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  local_res8 = param_1;
  ::FName::ToString(&local_res8,&local_28);
  iVar1 = ::FString::Find(&local_28,L"/#/#",4,CaseSensitive,FromStart,-1);
  if (iVar1 != -1) {
    ::FString::RemoveAt(&local_28,0,iVar1 + 4,No);
    iVar1 = ::FString::Find(&local_28,L"/#/#",4,CaseSensitive,FromStart,-1);
    if (iVar1 != -1) {
      iVar2 = local_28.Data.ArrayNum + -1;
      if (local_28.Data.ArrayNum == 0) {
        iVar2 = 0;
      }
      if (iVar1 < iVar2) {
        iVar2 = iVar1;
      }
      iVar1 = 0;
      if (0 < iVar2) {
        iVar1 = iVar2;
      }
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        FVar3.Data = local_28.Data.AllocatorInstance.Data;
      }
      ::FString::ConstructFromPtrSize(&local_18,(wchar_t *)FVar3.Data,iVar1);
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar3.Data = local_18.Data.AllocatorInstance.Data;
      }
      iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar3.Data,L"SortByName");
      bVar4 = iVar1 == 0;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      goto LAB_141a03c18;
    }
  }
  bVar4 = false;
LAB_141a03c18:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar4;
}

// ToLongName @ 141a24e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FName __cdecl
FStatNameAndInfo::ToLongName
          (FName param_1,char *param_2,char *param_3,wchar_t *param_4,bool param_5)

{
  int iVar1;
  void *pvVar2;
  size_t sVar3;
  TStringBuilderBase<wchar_t> *this;
  ulong64 uVar4;
  wchar_t *pwVar5;
  wchar_t *_Str;
  wchar_t *pwVar6;
  int iVar7;
  wchar_t *pwVar8;
  uint uVar9;
  FName local_res10;
  undefined7 in_stack_00000029;
  char in_stack_00000030;
  undefined1 auStack_2a8 [32];
  wchar_t *local_288;
  uint uStack_280;
  undefined4 uStack_27c;
  FName local_278;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_2a8;
  local_268.Base = local_248;
  local_268.CurPos = local_248;
  local_268.End = (wchar_t *)local_48;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  local_res10 = (FName)param_2;
  local_278 = param_1;
  if (param_3 != (char *)0x0) {
    pvVar2 = FGenericPlatformString::Memcpy(local_248,L"//",4);
    local_268.CurPos = (wchar_t *)((longlong)pvVar2 + 4);
    sVar3 = strlen(param_3);
    iVar7 = (int)sVar3;
    iVar1 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)param_3,iVar7);
    if (local_268.End < local_268.CurPos + iVar1) {
      TStringBuilderBase<wchar_t>::Extend(&local_268,(longlong)iVar1);
    }
    if (iVar7 != 0) {
      local_268.CurPos = UE::Core::Private::Convert(local_268.CurPos,iVar1,(uchar *)param_3,iVar7);
    }
    if (local_268.End < local_268.CurPos + 2) {
      TStringBuilderBase<wchar_t>::Extend(&local_268,2);
    }
    pvVar2 = FGenericPlatformString::Memcpy(local_268.CurPos,L"//",4);
    local_268.CurPos = (wchar_t *)((longlong)pvVar2 + 4);
  }
  ::FName::AppendString(&local_res10,&local_268);
  _Str = (wchar_t *)CONCAT71(in_stack_00000029,param_5);
  if (_Str != (wchar_t *)0x0) {
    if (local_268.End < local_268.CurPos + 3) {
      TStringBuilderBase<wchar_t>::Extend(&local_268,3);
    }
    pvVar2 = FGenericPlatformString::Memcpy(local_268.CurPos,L"///",6);
    local_288 = _Str;
    local_268.CurPos = (wchar_t *)((longlong)pvVar2 + 6);
    sVar3 = wcslen(_Str);
    uVar9 = (uint)sVar3;
    _uStack_280 = CONCAT44(uStack_27c,uVar9);
    pwVar6 = (wchar_t *)((longlong)pvVar2 + 6);
    pwVar8 = local_288;
    while( true ) {
      pwVar5 = _Str;
      while ((pwVar5 != _Str + (int)sVar3 &&
             (((-(ulonglong)((ushort)*pwVar5 < 0x40) & 0x109500002600) >> ((byte)*pwVar5 & 0x3f) & 1
              ) == 0))) {
        pwVar5 = pwVar5 + 1;
      }
      iVar1 = (int)((longlong)pwVar5 - (longlong)_Str >> 1);
      uVar4 = (ulong64)iVar1;
      if (local_268.End < pwVar6 + uVar4) {
        TStringBuilderBase<wchar_t>::Extend(&local_268,uVar4);
        pwVar6 = local_268.CurPos;
      }
      if (iVar1 != 0) {
        pvVar2 = FGenericPlatformString::Memcpy(pwVar6,_Str,uVar4 * 2);
        pwVar6 = (wchar_t *)((longlong)pvVar2 + uVar4 * 2);
        local_268.CurPos = pwVar6;
      }
      if (_Str + uVar4 == pwVar8 + (int)uVar9) break;
      if (local_268.End < pwVar6 + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_268,1);
        pwVar6 = local_268.CurPos;
      }
      *pwVar6 = L'$';
      local_268.CurPos = local_268.CurPos + 1;
      this = TStringBuilderBase<wchar_t>::AppendfImpl(&local_268,L"%u");
      if (this->End < this->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(this,1);
      }
      *this->CurPos = L'$';
      this->CurPos = this->CurPos + 1;
      uVar9 = uVar9 - (iVar1 + 1);
      _Str = pwVar8 + (iVar1 + 1);
      sVar3 = (size_t)uVar9;
      pwVar6 = local_268.CurPos;
      pwVar8 = _Str;
    }
    if (local_268.End < pwVar6 + 3) {
      TStringBuilderBase<wchar_t>::Extend(&local_268,3);
      pwVar6 = local_268.CurPos;
    }
    pvVar2 = FGenericPlatformString::Memcpy(pwVar6,L"///",6);
    local_268.CurPos = (wchar_t *)((longlong)pvVar2 + 6);
    param_1 = local_278;
  }
  if (param_4 != (wchar_t *)0x0) {
    if (local_268.End < local_268.CurPos + 4) {
      TStringBuilderBase<wchar_t>::Extend(&local_268,4);
    }
    pvVar2 = FGenericPlatformString::Memcpy(local_268.CurPos,L"####",8);
    local_268.CurPos = (wchar_t *)((longlong)pvVar2 + 8);
    sVar3 = strlen((char *)param_4);
    iVar7 = (int)sVar3;
    iVar1 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)param_4,iVar7);
    if (local_268.End < local_268.CurPos + iVar1) {
      TStringBuilderBase<wchar_t>::Extend(&local_268,(longlong)iVar1);
    }
    if (iVar7 != 0) {
      local_268.CurPos = UE::Core::Private::Convert(local_268.CurPos,iVar1,(uchar *)param_4,iVar7);
    }
    if (local_268.End < local_268.CurPos + 4) {
      TStringBuilderBase<wchar_t>::Extend(&local_268,4);
    }
    pvVar2 = FGenericPlatformString::Memcpy(local_268.CurPos,L"####",8);
    local_268.CurPos = (wchar_t *)((longlong)pvVar2 + 8);
  }
  if (in_stack_00000030 != '\0') {
    if (local_268.End < local_268.CurPos + 4) {
      TStringBuilderBase<wchar_t>::Extend(&local_268,4);
    }
    pvVar2 = FGenericPlatformString::Memcpy(local_268.CurPos,L"/#/#",8);
    local_268.CurPos = (wchar_t *)((longlong)pvVar2 + 8);
    if (local_268.End < (wchar_t *)((longlong)pvVar2 + 0x1c)) {
      TStringBuilderBase<wchar_t>::Extend(&local_268,10);
    }
    pvVar2 = FGenericPlatformString::Memcpy(local_268.CurPos,L"SortByName",0x14);
    local_268.CurPos = (wchar_t *)((longlong)pvVar2 + 0x14);
    if (local_268.End < (wchar_t *)((longlong)pvVar2 + 0x1c)) {
      TStringBuilderBase<wchar_t>::Extend(&local_268,4);
    }
    pvVar2 = FGenericPlatformString::Memcpy(local_268.CurPos,L"/#/#",8);
    local_268.CurPos = (wchar_t *)((longlong)pvVar2 + 8);
  }
  if (local_268.End < local_268.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_268,1);
  }
  *local_268.CurPos = L'\0';
  ::FName::FName((FName *)param_1,local_268.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  return param_1;
}

