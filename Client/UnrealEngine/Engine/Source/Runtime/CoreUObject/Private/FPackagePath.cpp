// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 42

// FPackagePath @ 141ed39b0

FPackagePath * __thiscall FPackagePath::FPackagePath(FPackagePath *this,FPackagePath *param_1)

{
  (this->PackageName).ComparisonIndex = 0;
  (this->PackageName).Number = 0;
  this->HeaderExtension = Unspecified;
  this->PackageName = param_1->PackageName;
  this->HeaderExtension = param_1->HeaderExtension;
  return this;
}

// operator= @ 141ed5ea0

FPackagePath * __thiscall FPackagePath::operator=(FPackagePath *this,FPackagePath *param_1)

{
  this->PackageName = param_1->PackageName;
  this->HeaderExtension = param_1->HeaderExtension;
  return this;
}

// operator== @ 141ed7790

bool __thiscall FPackagePath::operator==(FPackagePath *this,FPackagePath *param_1)

{
  return param_1->PackageName == this->PackageName;
}

// operator!= @ 141ed77a0

bool __thiscall FPackagePath::operator!=(FPackagePath *this,FPackagePath *param_1)

{
  return param_1->PackageName != this->PackageName;
}

// AppendPackageName @ 141edcfa0

void __thiscall
FPackagePath::AppendPackageName(FPackagePath *this,TStringBuilderBase<wchar_t> *param_1)

{
  FNameEntry *this_00;
  
  this_00 = ::FName::ResolveEntry((FNameEntryId)(this->PackageName).ComparisonIndex.Value);
  FNameEntry::AppendNameToString(this_00,param_1);
  if ((this->PackageName).Number != 0) {
    if (param_1->End < param_1->CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(param_1,1);
    }
    *param_1->CurPos = L'_';
    param_1->CurPos = param_1->CurPos + 1;
    TStringBuilderBase<wchar_t>::AppendfImpl(param_1,L"%d");
  }
  return;
}

// Empty @ 141eebb30

void __thiscall FPackagePath::Empty(FPackagePath *this)

{
  (this->PackageName).ComparisonIndex = 0;
  (this->PackageName).Number = 0;
  *(undefined4 *)&this->HeaderExtension = 0;
  return;
}

// FromLocalPath @ 141ef6c20

/* WARNING: Enum "Type": Some values do not have unique names */

FPackagePath * __cdecl
FPackagePath::FromLocalPath(FPackagePath *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  EPackageExtension EVar1;
  EPackageSegment EVar2;
  bool bVar3;
  FString *pFVar4;
  FName *pFVar5;
  FNameEntryId FVar6;
  int iVar7;
  uint uVar8;
  EPackageExtension EVar9;
  FName local_res8;
  FString local_48;
  FString local_38;
  TStringView<wchar_t> local_28;
  
  local_28.DataPtr = param_1->DataPtr;
  local_28.Size = param_1->Size;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  EVar1 = ParseExtension(&local_28,(int *)&local_res8);
  EVar2 = ExtensionToSegment(EVar1);
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  EVar9 = Unspecified;
  if (EVar2 == Header) {
    EVar9 = EVar1;
  }
  FVar6.Value = param_1->Size;
  if ((int)local_res8.ComparisonIndex.Value < param_1->Size) {
    FVar6.Value = local_res8.ComparisonIndex.Value;
  }
  uVar8 = 0;
  if (0 < (int)FVar6.Value) {
    uVar8 = FVar6.Value;
  }
  pFVar4 = ::FString::ConstructFromPtrSize((FString *)&local_28,param_1->DataPtr,uVar8);
  if (&local_48 != pFVar4) {
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    local_48.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = (pFVar4->Data).ArrayNum;
    local_48.Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_28.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_28.DataPtr);
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  bVar3 = FPackageName::TryConvertFilenameToLongPackageName(&local_48,&local_38,(FString *)0x0,None)
  ;
  if ((!bVar3) && (1 < (byte)LogPackageName._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPackageName);
  }
  (__return_storage_ptr__->PackageName).ComparisonIndex = 0;
  (__return_storage_ptr__->PackageName).Number = 0;
  __return_storage_ptr__->HeaderExtension = Unspecified;
  iVar7 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar7 = 0;
  }
  pFVar5 = ::FName::FName(&local_res8,iVar7,(wchar_t *)local_38.Data.AllocatorInstance.Data,
                          FNAME_Add);
  __return_storage_ptr__->PackageName = *pFVar5;
  __return_storage_ptr__->HeaderExtension = EVar9;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FromLocalPath @ 141ef6d90

/* WARNING: Enum "Type": Some values do not have unique names */

FPackagePath * __cdecl
FPackagePath::FromLocalPath
          (FPackagePath *__return_storage_ptr__,TStringView<wchar_t> *param_1,
          EPackageSegment *param_2)

{
  wchar_t *pwVar1;
  EPackageExtension EVar2;
  EPackageSegment EVar3;
  bool bVar4;
  FString *pFVar5;
  FName *pFVar6;
  FNameEntryId FVar7;
  int iVar8;
  EPackageExtension EVar9;
  uint uVar10;
  FName local_res8;
  FString local_48;
  FString local_38;
  TStringView<wchar_t> local_28;
  
  local_28.DataPtr = param_1->DataPtr;
  local_28.Size = param_1->Size;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  EVar2 = ParseExtension(&local_28,(int *)&local_res8);
  EVar3 = ExtensionToSegment(EVar2);
  FVar7.Value = param_1->Size;
  pwVar1 = param_1->DataPtr;
  *param_2 = EVar3;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  EVar9 = Unspecified;
  if (EVar3 == Header) {
    EVar9 = EVar2;
  }
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  if ((int)local_res8.ComparisonIndex.Value < (int)FVar7.Value) {
    FVar7.Value = local_res8.ComparisonIndex.Value;
  }
  uVar10 = 0;
  if (0 < (int)FVar7.Value) {
    uVar10 = FVar7.Value;
  }
  pFVar5 = ::FString::ConstructFromPtrSize((FString *)&local_28,pwVar1,uVar10);
  if (&local_48 != pFVar5) {
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    local_48.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = (pFVar5->Data).ArrayNum;
    local_48.Data.ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_28.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_28.DataPtr);
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  bVar4 = FPackageName::TryConvertFilenameToLongPackageName(&local_48,&local_38,(FString *)0x0,None)
  ;
  if ((!bVar4) && (1 < (byte)LogPackageName._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPackageName);
  }
  (__return_storage_ptr__->PackageName).ComparisonIndex = 0;
  (__return_storage_ptr__->PackageName).Number = 0;
  __return_storage_ptr__->HeaderExtension = Unspecified;
  iVar8 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar8 = 0;
  }
  pFVar6 = ::FName::FName(&local_res8,iVar8,(wchar_t *)local_38.Data.AllocatorInstance.Data,
                          FNAME_Add);
  __return_storage_ptr__->PackageName = *pFVar6;
  __return_storage_ptr__->HeaderExtension = EVar9;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FromMountedComponents @ 141ef6f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FPackagePath * __cdecl
FPackagePath::FromMountedComponents
          (FPackagePath *__return_storage_ptr__,TStringView<wchar_t> *param_1,
          TStringView<wchar_t> *param_2,TStringView<wchar_t> *param_3,EPackageExtension param_4,
          TStringView<wchar_t> *param_5)

{
  code *pcVar1;
  EPackageSegment EVar2;
  bool bVar3;
  FPackagePath *pFVar4;
  void *pvVar5;
  FString *pFVar6;
  FName *pFVar7;
  ulong64 uVar8;
  int iVar9;
  undefined1 auStack_2d8 [32];
  FString local_2b8;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  FString local_298;
  FName local_288;
  FString local_280;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_2d8;
  EVar2 = ExtensionToSegment(param_4);
  if (EVar2 != Header) {
    uStack_2a0 = 0;
    param_4 = Unspecified;
    local_2a8 = 0;
    param_5->DataPtr = (wchar_t *)0x0;
    *(undefined8 *)&param_5->Size = 0;
  }
  if (param_5->Size != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Misc\\PackagePath.cpp"
                       ,0x44f,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPackagePath *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_268.Base = local_248;
  local_2a8._0_4_ = *(undefined4 *)&param_2->DataPtr;
  local_2a8._4_4_ = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  uStack_2a0 = *(undefined8 *)&param_2->Size;
  local_268.End = (wchar_t *)local_48;
  iVar9 = (int)*(undefined8 *)&param_2->Size;
  uVar8 = (ulong64)iVar9;
  local_268.CurPos = local_248;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  if (local_48 < local_248 + uVar8) {
    TStringBuilderBase<wchar_t>::Extend(&local_268,uVar8);
  }
  if (iVar9 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy
                       (local_268.CurPos,(void *)CONCAT44(local_2a8._4_4_,(undefined4)local_2a8),
                        uVar8 * 2);
    local_268.CurPos = (wchar_t *)((longlong)pvVar5 + uVar8 * 2);
  }
  local_2a8._0_4_ = *(undefined4 *)&param_3->DataPtr;
  local_2a8._4_4_ = *(undefined4 *)((longlong)&param_3->DataPtr + 4);
  uStack_2a0 = *(undefined8 *)&param_3->Size;
  iVar9 = (int)*(undefined8 *)&param_3->Size;
  uVar8 = (ulong64)iVar9;
  if (local_268.End < local_268.CurPos + uVar8) {
    TStringBuilderBase<wchar_t>::Extend(&local_268,uVar8);
  }
  if (iVar9 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy
                       (local_268.CurPos,(void *)CONCAT44(local_2a8._4_4_,(undefined4)local_2a8),
                        uVar8 * 2);
    local_268.CurPos = (wchar_t *)((longlong)pvVar5 + uVar8 * 2);
  }
  local_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_298.Data.ArrayNum = 0;
  local_298.Data.ArrayMax = 0;
  local_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b8.Data.ArrayNum = 0;
  local_2b8.Data.ArrayMax = 0;
  pFVar6 = ::FString::ConstructFromPtrSize
                     (&local_280,local_268.Base,
                      (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1));
  if (&local_2b8 != pFVar6) {
    if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
    }
    local_2b8.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2b8.Data.ArrayNum = (pFVar6->Data).ArrayNum;
    local_2b8.Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_280.Data.AllocatorInstance.Data);
  }
  bVar3 = FPackageName::TryConvertFilenameToLongPackageName
                    (&local_2b8,&local_298,(FString *)0x0,None);
  if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
  }
  if ((!bVar3) && (1 < (byte)LogPackageName._0_1_)) {
    if (local_268.End < local_268.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_268,1);
    }
    *local_268.CurPos = L'\0';
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPackageName);
  }
  (__return_storage_ptr__->PackageName).ComparisonIndex = 0;
  (__return_storage_ptr__->PackageName).Number = 0;
  __return_storage_ptr__->HeaderExtension = Unspecified;
  iVar9 = local_298.Data.ArrayNum + -1;
  if (local_298.Data.ArrayNum == 0) {
    iVar9 = 0;
  }
  pFVar7 = ::FName::FName(&local_288,iVar9,(wchar_t *)local_298.Data.AllocatorInstance.Data,
                          FNAME_Add);
  __return_storage_ptr__->PackageName = *pFVar7;
  __return_storage_ptr__->HeaderExtension = param_4;
  if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  return __return_storage_ptr__;
}

// FromPackageNameChecked @ 141ef71d0

/* WARNING: Enum "Type": Some values do not have unique names */

FPackagePath * __cdecl
FPackagePath::FromPackageNameChecked(FPackagePath *__return_storage_ptr__,wchar_t *param_1)

{
  bool bVar1;
  size_t sVar2;
  FName *pFVar3;
  int iVar4;
  FName local_res8;
  TStringView<wchar_t> local_18;
  
  iVar4 = 0;
  local_18.DataPtr = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_1);
    iVar4 = (int)sVar2;
  }
  local_18.Size = iVar4;
  (__return_storage_ptr__->PackageName).ComparisonIndex = 0;
  (__return_storage_ptr__->PackageName).Number = 0;
  __return_storage_ptr__->HeaderExtension = Unspecified;
  bVar1 = FPackageName::IsValidTextForLongPackageName(&local_18,(EErrorCode *)0x0);
  if (bVar1) {
    pFVar3 = ::FName::FName(&local_res8,iVar4,param_1,FNAME_Add);
    __return_storage_ptr__->PackageName = *pFVar3;
    return __return_storage_ptr__;
  }
  if (1 < (byte)LogPackageName._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPackageName);
  }
  return __return_storage_ptr__;
}

// FromPackageNameChecked @ 141ef7290

/* WARNING: Enum "Type": Some values do not have unique names */

FPackagePath * __cdecl
FPackagePath::FromPackageNameChecked
          (FPackagePath *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  bool bVar1;
  FName *pFVar2;
  FName local_res8;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  (__return_storage_ptr__->PackageName).ComparisonIndex = 0;
  (__return_storage_ptr__->PackageName).Number = 0;
  __return_storage_ptr__->HeaderExtension = Unspecified;
  bVar1 = FPackageName::IsValidTextForLongPackageName(&local_18,(EErrorCode *)0x0);
  if (bVar1) {
    pFVar2 = ::FName::FName(&local_res8,(int)*(undefined8 *)&param_1->Size,param_1->DataPtr,
                            FNAME_Add);
    __return_storage_ptr__->PackageName = *pFVar2;
    return __return_storage_ptr__;
  }
  if (1 < (byte)LogPackageName._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPackageName);
  }
  return __return_storage_ptr__;
}

// FromPackageNameChecked @ 141ef7330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FPackagePath * __cdecl
FPackagePath::FromPackageNameChecked(FPackagePath *__return_storage_ptr__,FName param_1)

{
  wchar_t *pwVar1;
  bool bVar2;
  FName *pFVar3;
  int iVar4;
  FName local_res10;
  undefined1 auStack_268 [32];
  TStringView<wchar_t> local_248;
  TStringBuilderBase<wchar_t> local_238;
  wchar_t local_218 [256];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_268;
  local_238.Base = local_218;
  local_238.bIsDynamic = false;
  local_238.bIsExternal = false;
  local_238.CurPos = local_218;
  local_238.End = (wchar_t *)local_18;
  local_res10 = param_1;
  ::FName::AppendString(&local_res10,&local_238);
  pwVar1 = local_238.Base;
  iVar4 = (int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1);
  local_248.Size = iVar4;
  local_248.DataPtr = local_238.Base;
  (__return_storage_ptr__->PackageName).ComparisonIndex = 0;
  (__return_storage_ptr__->PackageName).Number = 0;
  __return_storage_ptr__->HeaderExtension = Unspecified;
  bVar2 = FPackageName::IsValidTextForLongPackageName(&local_248,(EErrorCode *)0x0);
  if (bVar2) {
    pFVar3 = ::FName::FName((FName *)&local_248,iVar4,pwVar1,FNAME_Add);
    __return_storage_ptr__->PackageName = *pFVar3;
  }
  else if (1 < (byte)LogPackageName._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPackageName);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
  return __return_storage_ptr__;
}

// FromPackageNameUnchecked @ 141ef7450

FPackagePath * __cdecl
FPackagePath::FromPackageNameUnchecked(FPackagePath *__return_storage_ptr__,FName param_1)

{
  __return_storage_ptr__->HeaderExtension = Unspecified;
  __return_storage_ptr__->PackageName = param_1;
  return __return_storage_ptr__;
}

// GetCustomExtension @ 141ef9670

TStringView<wchar_t> * __thiscall
FPackagePath::GetCustomExtension(FPackagePath *this,TStringView<wchar_t> *__return_storage_ptr__)

{
  *(undefined8 *)&__return_storage_ptr__->Size = 0;
  __return_storage_ptr__->DataPtr = (wchar_t *)0x0;
  return __return_storage_ptr__;
}

// GetDebugName @ 141ef9690

FString * __thiscall
FPackagePath::GetDebugName
          (FPackagePath *this,FString *__return_storage_ptr__,EPackageSegment param_1)

{
  ::FName::ToString(&this->PackageName,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetDebugName @ 141ef96b0

FString * __thiscall FPackagePath::GetDebugName(FPackagePath *this,FString *__return_storage_ptr__)

{
  ::FName::ToString(&this->PackageName,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetDebugNameText @ 141ef96d0

FText * __thiscall
FPackagePath::GetDebugNameText
          (FPackagePath *this,FText *__return_storage_ptr__,EPackageSegment param_1)

{
  FString local_18;
  
  ::FName::ToString(&this->PackageName,&local_18);
  FText::FromString(__return_storage_ptr__,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDebugNameText @ 141ef9710

FText * __thiscall FPackagePath::GetDebugNameText(FPackagePath *this,FText *__return_storage_ptr__)

{
  FString local_18;
  
  ::FName::ToString(&this->PackageName,&local_18);
  FText::FromString(__return_storage_ptr__,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDebugNameWithExtension @ 141ef9750

FString * __thiscall
FPackagePath::GetDebugNameWithExtension
          (FPackagePath *this,FString *__return_storage_ptr__,EPackageSegment param_1)

{
  EPackageExtension EVar1;
  int iVar2;
  wchar_t *_Str;
  size_t sVar3;
  
  ::FName::ToString(&this->PackageName,__return_storage_ptr__);
  if (param_1 == Header) {
    EVar1 = this->HeaderExtension;
    if (EVar1 == Custom) {
      iVar2 = 0;
      _Str = (wchar_t *)0x0;
      goto LAB_141ef9796;
    }
  }
  else {
    EVar1 = SegmentToExtension(param_1);
  }
  _Str = ::LexToString(EVar1);
  iVar2 = 0;
  if (_Str != (wchar_t *)0x0) {
    sVar3 = wcslen(_Str);
    iVar2 = (int)sVar3;
  }
LAB_141ef9796:
  ::FString::AppendChars(__return_storage_ptr__,_Str,iVar2);
  return __return_storage_ptr__;
}

// GetDebugNameWithExtension @ 141ef97d0

FString * __thiscall
FPackagePath::GetDebugNameWithExtension(FPackagePath *this,FString *__return_storage_ptr__)

{
  int iVar1;
  wchar_t *_Str;
  size_t sVar2;
  
  ::FName::ToString(&this->PackageName,__return_storage_ptr__);
  if (this->HeaderExtension == Custom) {
    _Str = (wchar_t *)0x0;
    iVar1 = 0;
  }
  else {
    _Str = ::LexToString(this->HeaderExtension);
    iVar1 = 0;
    if (_Str != (wchar_t *)0x0) {
      sVar2 = wcslen(_Str);
      iVar1 = (int)sVar2;
    }
  }
  ::FString::AppendChars(__return_storage_ptr__,_Str,iVar1);
  return __return_storage_ptr__;
}

// GetExtension @ 141ef9b40

EPackageExtension __thiscall
FPackagePath::GetExtension(FPackagePath *this,EPackageSegment param_1,TStringView<wchar_t> *param_2)

{
  EPackageExtension EVar1;
  
  param_2->DataPtr = (wchar_t *)0x0;
  *(undefined8 *)&param_2->Size = 0;
  if (param_1 != Header) {
    EVar1 = SegmentToExtension(param_1);
    return EVar1;
  }
  return this->HeaderExtension;
}

// GetExtensionString @ 141ef9b80

TStringView<wchar_t> * __thiscall
FPackagePath::GetExtensionString
          (FPackagePath *this,TStringView<wchar_t> *__return_storage_ptr__,EPackageSegment param_1)

{
  EPackageExtension EVar1;
  int iVar2;
  wchar_t *_Str;
  size_t sVar3;
  
  if (param_1 == Header) {
    EVar1 = this->HeaderExtension;
    if (EVar1 == Custom) {
      *(undefined8 *)&__return_storage_ptr__->Size = 0;
      __return_storage_ptr__->DataPtr = (wchar_t *)0x0;
      return __return_storage_ptr__;
    }
  }
  else {
    EVar1 = SegmentToExtension(param_1);
  }
  _Str = ::LexToString(EVar1);
  iVar2 = 0;
  __return_storage_ptr__->DataPtr = _Str;
  if (_Str != (wchar_t *)0x0) {
    sVar3 = wcslen(_Str);
    iVar2 = (int)sVar3;
  }
  __return_storage_ptr__->Size = iVar2;
  return __return_storage_ptr__;
}

// GetExternalActorsFolderName @ 141ef9be0

wchar_t * __cdecl FPackagePath::GetExternalActorsFolderName(void)

{
  return L"__ExternalActors__";
}

// GetExternalObjectsFolderName @ 141ef9bf0

wchar_t * __cdecl FPackagePath::GetExternalObjectsFolderName(void)

{
  return L"__ExternalObjects__";
}

// GetHeaderExtension @ 141ef9c20

EPackageExtension __thiscall FPackagePath::GetHeaderExtension(FPackagePath *this)

{
  return this->HeaderExtension;
}

// GetLocalBaseFilenameWithPath @ 141ef9c70

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
FPackagePath::GetLocalBaseFilenameWithPath(FPackagePath *this,FString *__return_storage_ptr__)

{
  bool bVar1;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (this->PackageName != (FName)0x0) {
    ::FName::ToString(&this->PackageName,&local_28);
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    ::FString::FString(&local_18,L"");
    bVar1 = FPackageName::TryConvertLongPackageNameToFilename(&local_28,&local_38,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar1) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_38.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_38.Data.ArrayMax;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
    if (1 < (byte)LogPackageName._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPackageName);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// GetLocalFullPath @ 141ef9d90

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
FPackagePath::GetLocalFullPath
          (FPackagePath *this,FString *__return_storage_ptr__,EPackageSegment param_1)

{
  EPackageExtension EVar1;
  bool bVar2;
  wchar_t *pwVar3;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (this->PackageName != (FName)0x0) {
    ::FName::ToString(&this->PackageName,&local_28);
    if (param_1 == Header) {
      EVar1 = this->HeaderExtension;
    }
    else {
      EVar1 = SegmentToExtension(param_1);
    }
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    pwVar3 = ::LexToString(EVar1);
    ::FString::FString(&local_18,pwVar3);
    bVar2 = FPackageName::TryConvertLongPackageNameToFilename(&local_28,&local_38,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_38.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_38.Data.ArrayMax;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
    if (1 < (byte)LogPackageName._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPackageName);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// GetLocalFullPath @ 141ef9ee0

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
FPackagePath::GetLocalFullPath(FPackagePath *this,FString *__return_storage_ptr__)

{
  bool bVar1;
  wchar_t *pwVar2;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (this->PackageName != (FName)0x0) {
    ::FName::ToString(&this->PackageName,&local_28);
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    pwVar2 = ::LexToString(this->HeaderExtension);
    ::FString::FString(&local_18,pwVar2);
    bVar1 = FPackageName::TryConvertLongPackageNameToFilename(&local_28,&local_38,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar1) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_38.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_38.Data.ArrayMax;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
    if (1 < (byte)LogPackageName._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPackageName);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// GetOptionalSegmentExtensionModifier @ 141efa0b0

wchar_t * __cdecl FPackagePath::GetOptionalSegmentExtensionModifier(void)

{
  return L".o";
}

// GetPackageFName @ 141efa180

FName __thiscall FPackagePath::GetPackageFName(FPackagePath *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->PackageName;
  return in_RDX;
}

// GetPackageName @ 141efa190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FPackagePath::GetPackageName(FPackagePath *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  undefined1 auStack_268 [32];
  FString local_248;
  TStringBuilderBase<wchar_t> local_238;
  wchar_t local_218 [256];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_268;
  local_238.Base = local_218;
  local_238.bIsDynamic = false;
  local_238.bIsExternal = false;
  local_238.CurPos = local_218;
  local_238.End = (wchar_t *)local_18;
  ::FName::AppendString(&this->PackageName,&local_238);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar2 = ::FString::ConstructFromPtrSize
                     (&local_248,local_238.Base,
                      (int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1));
  if (__return_storage_ptr__ != pFVar2) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
  return __return_storage_ptr__;
}

// GetPackageNameOrFallback @ 141efa290

FString * __thiscall
FPackagePath::GetPackageNameOrFallback(FPackagePath *this,FString *__return_storage_ptr__)

{
  GetPackageName(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPossibleExtensions @ 141efa2b0

TArrayView<EPackageExtension_const_,int> * __thiscall
FPackagePath::GetPossibleExtensions
          (FPackagePath *this,TArrayView<EPackageExtension_const_,int> *__return_storage_ptr__,
          EPackageSegment param_1)

{
  EPackageExtension EVar1;
  
  if (param_1 == Header) {
    EVar1 = this->HeaderExtension;
  }
  else {
    EVar1 = SegmentToExtension(param_1);
  }
  if (EVar1 != Unspecified) {
    __return_storage_ptr__->ArrayNum = 1;
    __return_storage_ptr__->DataPtr = UE::PackagePathPrivate::AllExtensions + EVar1;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->ArrayNum = 2;
  __return_storage_ptr__->DataPtr = (EPackageExtension *)0x154b88109;
  return __return_storage_ptr__;
}

// IsEmpty @ 141efbc00

bool __thiscall FPackagePath::IsEmpty(FPackagePath *this)

{
  return this->PackageName == (FName)0x0;
}

// IsMountedPath @ 141efbfd0

bool __thiscall FPackagePath::IsMountedPath(FPackagePath *this)

{
  return true;
}

// ParseExtension @ 141f00d40

EPackageExtension __cdecl FPackagePath::ParseExtension(TStringView<wchar_t> *param_1,int *param_2)

{
  int iVar1;
  TStringView<wchar_t> *pTVar2;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  FPathViews::GetExtension(&local_38,param_1,true);
  if (param_2 != (int *)0x0) {
    *param_2 = param_1->Size - local_38.Size;
  }
  if (local_38.Size == 0) {
    return Unspecified;
  }
  if ((local_38.Size == 7) &&
     (iVar1 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L".uasset",7), iVar1 == 0)) {
    return Asset;
  }
  if (local_38.Size == 5) {
    iVar1 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L".umap",5);
    if (iVar1 == 0) {
      return Map;
    }
    if ((local_38.Size == 5) &&
       (iVar1 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L".utxt",5), iVar1 == 0)) {
      return TextAsset;
    }
  }
  if ((local_38.Size == 8) &&
     (iVar1 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L".utxtmap",8), iVar1 == 0)) {
    return TextMap;
  }
  if ((local_38.Size == 5) &&
     (iVar1 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L".uexp",5), iVar1 == 0)) {
    return Exports;
  }
  if (local_38.Size == 6) {
    iVar1 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L".ubulk",6);
    if (iVar1 == 0) {
      iVar1 = param_1->Size;
      if (iVar1 - local_38.Size < iVar1) {
        iVar1 = iVar1 - local_38.Size;
      }
      local_28.DataPtr = param_1->DataPtr;
      local_28.Size = 0;
      if (0 < iVar1) {
        local_28.Size = iVar1;
      }
      pTVar2 = FPathViews::GetExtension(&local_18,&local_28,true);
      if ((pTVar2->Size == 2) &&
         (iVar1 = FGenericPlatformStricmp::Strnicmp(pTVar2->DataPtr,L".m",2), iVar1 == 0)) {
        if (param_2 != (int *)0x0) {
          *param_2 = *param_2 + -2;
        }
        return BulkDataMemoryMapped;
      }
      return BulkDataDefault;
    }
    if ((local_38.Size == 6) &&
       (iVar1 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L".uptnl",6), iVar1 == 0)) {
      return BulkDataOptional;
    }
  }
  if ((local_38.Size == 9) &&
     (iVar1 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L".upayload",9), iVar1 == 0)) {
    return PayloadSidecar;
  }
  return Custom;
}

// SetHeaderExtension @ 141f11190

void __thiscall
FPackagePath::SetHeaderExtension
          (FPackagePath *this,EPackageExtension param_1,TStringView<wchar_t> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_2->Size == 0) {
    this->HeaderExtension = param_1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Misc\\PackagePath.cpp"
                     ,0x4b7,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->HeaderExtension = param_1;
  return;
}

// TryFromMountedName @ 141f16f40

bool __cdecl FPackagePath::TryFromMountedName(TStringView<wchar_t> *param_1,FPackagePath *param_2)

{
  int iVar1;
  bool bVar2;
  FName *pFVar3;
  FString *pFVar4;
  int iVar5;
  FName local_res8;
  FString local_38;
  TStringView<wchar_t> local_28;
  FString local_18;
  
  local_28.DataPtr = param_1->DataPtr;
  local_28.Size = param_1->Size;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  bVar2 = FPackageName::IsValidLongPackageName(&local_28,false,(EErrorCode *)0x0);
  if (bVar2) {
    pFVar3 = ::FName::FName(&local_res8,(int)*(undefined8 *)&param_1->Size,param_1->DataPtr,
                            FNAME_Add);
    param_2->PackageName = *pFVar3;
    return true;
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  pFVar4 = ::FString::ConstructFromPtrSize
                     ((FString *)&local_28,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
  if (&local_38 != pFVar4) {
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    local_38.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = (pFVar4->Data).ArrayNum;
    local_38.Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_28.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_28.DataPtr);
  }
  pFVar4 = FPackageName::FilenameToLongPackageName(&local_18,&local_38);
  iVar1 = (pFVar4->Data).ArrayNum;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  pFVar3 = ::FName::FName(&local_res8,iVar5,(wchar_t *)(pFVar4->Data).AllocatorInstance.Data,
                          FNAME_Add);
  param_2->PackageName = *pFVar3;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return true;
}

// TryFromPackageName @ 141f17070

bool __cdecl FPackagePath::TryFromPackageName(wchar_t *param_1,FPackagePath *param_2)

{
  bool bVar1;
  size_t sVar2;
  FName *pFVar3;
  int iVar4;
  FName local_res8;
  TStringView<wchar_t> local_18;
  
  iVar4 = 0;
  local_18.DataPtr = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_1);
    iVar4 = (int)sVar2;
  }
  local_18.Size = iVar4;
  bVar1 = FPackageName::IsValidTextForLongPackageName(&local_18,(EErrorCode *)0x0);
  if (!bVar1) {
    return false;
  }
  pFVar3 = ::FName::FName(&local_res8,iVar4,param_1,FNAME_Add);
  param_2->PackageName = *pFVar3;
  return true;
}

// TryFromPackageName @ 141f17100

bool __cdecl FPackagePath::TryFromPackageName(TStringView<wchar_t> *param_1,FPackagePath *param_2)

{
  bool bVar1;
  FName *pFVar2;
  FName local_res8;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  bVar1 = FPackageName::IsValidTextForLongPackageName(&local_18,(EErrorCode *)0x0);
  if (!bVar1) {
    return false;
  }
  pFVar2 = ::FName::FName(&local_res8,(int)*(undefined8 *)&param_1->Size,param_1->DataPtr,FNAME_Add)
  ;
  param_2->PackageName = *pFVar2;
  return true;
}

// TryFromPackageName @ 141f17170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FPackagePath::TryFromPackageName(FName param_1,FPackagePath *param_2)

{
  bool bVar1;
  FName local_res8 [4];
  undefined1 auStack_268 [32];
  TStringView<wchar_t> local_248;
  TStringBuilderBase<wchar_t> local_238;
  wchar_t local_218 [256];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_268;
  local_238.Base = local_218;
  local_238.bIsDynamic = false;
  local_238.bIsExternal = false;
  local_238.CurPos = local_218;
  local_238.End = (wchar_t *)local_18;
  local_res8[0] = param_1;
  ::FName::AppendString(local_res8,&local_238);
  local_248.Size = (int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1);
  local_248.DataPtr = local_238.Base;
  bVar1 = FPackageName::IsValidTextForLongPackageName(&local_248,(EErrorCode *)0x0);
  if (bVar1) {
    param_2->PackageName = local_res8[0];
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
  return bVar1;
}

// TryMatchCase @ 141f17250

bool __cdecl
FPackagePath::TryMatchCase
          (FPackagePath *param_1,TStringView<wchar_t> *param_2,FPackagePath *param_3)

{
  return true;
}

