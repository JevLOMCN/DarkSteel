// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// GetCreatorDebugName @ 14229d2a0

FString * __thiscall
verse::FContentScope::GetCreatorDebugName(FContentScope *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->CreatorDebugName);
  return __return_storage_ptr__;
}

// SetCreatorDebugName @ 1422a66b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
verse::FContentScope::SetCreatorDebugName(FContentScope *this,TStringView<wchar_t> *param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  FString *pFVar3;
  ulong64 uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  undefined1 auStack_108 [32];
  FString local_e8;
  FString local_d8;
  TStringBuilderBase<wchar_t> local_c8;
  wchar_t local_a8 [64];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_108;
  local_e8.Data.AllocatorInstance.Data._0_4_ = *(undefined4 *)&param_1->DataPtr;
  local_e8.Data.AllocatorInstance.Data._4_4_ = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  local_e8.Data.ArrayNum = param_1->Size;
  local_e8.Data.ArrayMax = *(int *)&param_1->field_0xc;
  local_c8.Base = local_a8;
  local_c8.End = (wchar_t *)local_28;
  iVar7 = (int)*(undefined8 *)&param_1->Size;
  uVar4 = (ulong64)iVar7;
  local_c8.bIsDynamic = false;
  local_c8.bIsExternal = false;
  local_c8.CurPos = local_a8;
  if (local_28 < local_a8 + uVar4) {
    TStringBuilderBase<wchar_t>::Extend(&local_c8,uVar4);
  }
  if (iVar7 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy
                       (local_c8.CurPos,
                        (void *)CONCAT44(local_e8.Data.AllocatorInstance.Data._4_4_,
                                         local_e8.Data.AllocatorInstance.Data._0_4_),uVar4 * 2);
    local_c8.CurPos = (wchar_t *)((longlong)pvVar2 + uVar4 * 2);
  }
  if (local_c8.End < local_c8.CurPos + 0x12) {
    TStringBuilderBase<wchar_t>::Extend(&local_c8,0x12);
  }
  pvVar2 = FGenericPlatformString::Memcpy(local_c8.CurPos,L"_VerseContentScope",0x24);
  local_c8.CurPos = (wchar_t *)((longlong)pvVar2 + 0x24);
  pFVar3 = ::FString::ConstructFromPtrSize
                     (&local_e8,local_c8.Base,
                      (int)((longlong)local_c8.CurPos - (longlong)local_c8.Base >> 1));
  pFVar6 = (FScriptContainerElement *)0x0;
  iVar7 = 0;
  iVar5 = iVar7;
  if (&local_d8 != pFVar3) {
    pFVar6 = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar7 = (pFVar3->Data).ArrayNum;
    iVar5 = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if ((void *)CONCAT44(local_e8.Data.AllocatorInstance.Data._4_4_,
                       local_e8.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_e8.Data.AllocatorInstance.Data._4_4_,
                                   local_e8.Data.AllocatorInstance.Data._0_4_));
  }
  pFVar3 = &this->CreatorDebugName;
  if (pFVar3 == &local_d8) {
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
  }
  else {
    pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar3->Data).AllocatorInstance.Data = pFVar6;
    (this->CreatorDebugName).Data.ArrayNum = iVar7;
    (this->CreatorDebugName).Data.ArrayMax = iVar5;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_c8);
  return;
}

// SetCreatorDebugNameFromObject @ 1422a6840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
verse::FContentScope::SetCreatorDebugNameFromObject(FContentScope *this,UObject *param_1)

{
  FScriptContainerElement *pFVar1;
  ForAnyElementType FVar2;
  void *pvVar3;
  FString *pFVar4;
  ulong64 uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  undefined1 auStack_128 [32];
  FString local_108;
  FString local_f8;
  FString local_e8;
  TStringBuilderBase<wchar_t> local_d8;
  wchar_t local_b8 [64];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_128;
  if (param_1 == (UObject *)0x0) {
    ::FString::operator=(&this->CreatorDebugName,L"FContentScope");
  }
  else {
    local_108.Data.AllocatorInstance.Data._0_4_ = *(uint *)&param_1->field_0x18;
    local_108.Data.AllocatorInstance.Data._4_4_ = *(uint *)&param_1->field_0x1c;
    ::FName::ToString((FName *)&local_108,&local_f8);
    FVar2.Data = local_f8.Data.AllocatorInstance.Data;
    local_d8.CurPos = local_b8;
    pFVar7 = (FScriptContainerElement *)0x0;
    local_d8.bIsDynamic = false;
    local_d8.bIsExternal = false;
    iVar8 = 0;
    iVar6 = local_f8.Data.ArrayNum + -1;
    if (local_f8.Data.ArrayNum == 0) {
      iVar6 = iVar8;
    }
    local_d8.Base = local_b8;
    local_d8.End = (wchar_t *)local_38;
    uVar5 = (ulong64)iVar6;
    if (local_38 < local_b8 + uVar5) {
      TStringBuilderBase<wchar_t>::Extend(&local_d8,uVar5);
    }
    if (iVar6 != 0) {
      pvVar3 = FGenericPlatformString::Memcpy(local_d8.CurPos,FVar2.Data,uVar5 * 2);
      local_d8.CurPos = (wchar_t *)((longlong)pvVar3 + uVar5 * 2);
    }
    if (local_d8.End < local_d8.CurPos + 0x12) {
      TStringBuilderBase<wchar_t>::Extend(&local_d8,0x12);
    }
    pvVar3 = FGenericPlatformString::Memcpy(local_d8.CurPos,L"_VerseContentScope",0x24);
    local_d8.CurPos = (wchar_t *)((longlong)pvVar3 + 0x24);
    pFVar4 = ::FString::ConstructFromPtrSize
                       (&local_108,local_d8.Base,
                        (int)((longlong)local_d8.CurPos - (longlong)local_d8.Base >> 1));
    iVar6 = iVar8;
    if (&local_e8 != pFVar4) {
      pFVar7 = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar8 = (pFVar4->Data).ArrayNum;
      iVar6 = (pFVar4->Data).ArrayMax;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
    }
    if ((FName)local_108.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    pFVar4 = &this->CreatorDebugName;
    if (pFVar4 == &local_e8) {
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
    }
    else {
      pFVar1 = (pFVar4->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (pFVar4->Data).AllocatorInstance.Data = pFVar7;
      (this->CreatorDebugName).Data.ArrayNum = iVar8;
      (this->CreatorDebugName).Data.ArrayMax = iVar6;
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_d8);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  return;
}

