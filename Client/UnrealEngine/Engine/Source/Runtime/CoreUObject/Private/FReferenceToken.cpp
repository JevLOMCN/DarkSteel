// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// GetDescription @ 1421cf5f0

FString * __thiscall
FReferenceToken::GetDescription
          (FReferenceToken *this,FString *__return_storage_ptr__,FName param_1,wchar_t *param_2)

{
  FName local_res18;
  FString local_38;
  FString local_28;
  
  local_res18 = param_1;
  if (param_1 != (FName)0x0) {
    ::FName::ToString(&local_res18,&local_28);
  }
  GetDescription(this,&local_38);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s->%s");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((param_1 != (FName)0x0) &&
     (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDescription @ 1421cf6b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FString * __thiscall
FReferenceToken::GetDescription(FReferenceToken *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  FString local_28;
  void *local_18 [2];
  
  uVar5 = (uint)this->EncodedBits;
  uVar3 = uVar5 & 7;
  if (uVar3 != 0) {
    uVar5 = uVar3;
  }
  switch(uVar5) {
  case 0:
    ::FString::FString(__return_storage_ptr__,L"None");
    return __return_storage_ptr__;
  case 1:
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)(this->EncodedBits & 0xfffffffffffffff8),__return_storage_ptr__
               ,(UObject *)0x0,None);
    return __return_storage_ptr__;
  case 2:
    plVar6 = (longlong *)(this->EncodedBits & 0xfffffffffffffff8);
    bVar2 = plVar6 == (longlong *)0x0;
    if (bVar2) {
      pFVar4 = ::FString::FString(&local_28,L"Unknown");
    }
    else {
      pFVar4 = (FString *)(**(code **)(*plVar6 + 0x10))(plVar6,local_18);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
    if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      return __return_storage_ptr__;
    }
    if (local_18[0] == (void *)0x0) {
      return __return_storage_ptr__;
    }
    FMemory::Free(local_18[0]);
    return __return_storage_ptr__;
  case 3:
    iVar7 = 0x27;
    break;
  case 4:
    FGCObjectInfo::GetFullName
              ((FGCObjectInfo *)(this->EncodedBits & 0xfffffffffffffff8),__return_storage_ptr__);
    return __return_storage_ptr__;
  case 5:
    iVar7 = 0x2e;
    break;
  default:
    iVar7 = 0x32;
    break;
  case 8:
    ::FString::FString(__return_storage_ptr__,L"Barrier");
    return __return_storage_ptr__;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ReferenceToken.cpp"
                     ,iVar7,L"");
  if (!bVar2) {
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    return __return_storage_ptr__;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FString *)(*pcVar1)();
  return pFVar4;
}

// GetMemberName @ 1421cfbd0

FString * __thiscall
FReferenceToken::GetMemberName
          (FReferenceToken *this,FString *__return_storage_ptr__,FMemberId *param_1)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  FMemberInfo *pFVar6;
  FString *pFVar7;
  uint uVar8;
  undefined1 local_48 [8];
  uint local_40;
  FMemberInfo local_38;
  FString local_28;
  FString local_18;
  
  uVar8 = (uint)this->EncodedBits;
  uVar4 = uVar8 & 7;
  if (uVar4 != 0) {
    uVar8 = uVar4;
  }
  if (uVar8 != 1) {
    ::FString::FString(__return_storage_ptr__,L"N/A");
    return __return_storage_ptr__;
  }
  uVar5 = this->EncodedBits & 0xfffffffffffffff8;
  if ((uVar5 == 0) || (lVar1 = *(longlong *)(uVar5 + 0x10), lVar1 == 0)) {
    pFVar7 = ::FString::FString(&local_28,L"N/A");
    bVar3 = false;
    bVar2 = true;
  }
  else {
    pFVar6 = UE::GC::GetMemberDebugInfo(&local_38,(FSchemaView)*(ulong64 *)(lVar1 + 0x1f0),*param_1)
    ;
    local_48._0_4_ = pFVar6->Offset;
    local_48._4_4_ = (pFVar6->Name).ComparisonIndex;
    local_40 = (pFVar6->Name).Number;
    pFVar7 = ::FName::ToString((FName *)(local_48 + 4),&local_18);
    bVar3 = true;
    bVar2 = false;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
  (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar7->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar7->Data).ArrayMax;
  (pFVar7->Data).ArrayNum = 0;
  (pFVar7->Data).ArrayMax = 0;
  if (bVar2) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

