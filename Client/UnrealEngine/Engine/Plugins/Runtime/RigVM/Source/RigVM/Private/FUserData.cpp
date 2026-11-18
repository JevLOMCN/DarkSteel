// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 3

// GetCPPType @ 14a094a30

FName * __thiscall UNameSpacedUserData::FUserData::GetCPPType(FUserData *this)

{
  FProperty *pFVar1;
  ForAnyElementType FVar2;
  int iVar3;
  FName local_res8;
  wchar_t *local_28;
  undefined8 local_20;
  FString local_18;
  
  if ((this->CPPType == (FName)0x0) && (pFVar1 = this->Property, pFVar1 != (FProperty *)0x0)) {
    local_28 = (wchar_t *)0x0;
    local_20 = 0;
    (**(code **)(pFVar1->_padding_ + 0x68))(pFVar1,&local_18,&local_28,0);
    iVar3 = (int)local_20 + -1;
    if ((int)local_20 == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars(&local_18,local_28,iVar3);
    RigVMTypeUtils::CleanupCPPType(&local_18);
    if (local_28 != (wchar_t *)0x0) {
      FMemory::Free(local_28);
    }
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar2.Data = local_18.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar2.Data);
    this->CPPType = local_res8;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return &this->CPPType;
}

// GetName @ 14a095bf0

FString * __thiscall
UNameSpacedUserData::FUserData::GetName(FUserData *this,FString *__return_storage_ptr__)

{
  bool bVar1;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::FString(&local_18,L".");
  bVar1 = ::FString::Split(&this->Path,&local_18,&local_28,&local_38,IgnoreCase,FromEnd);
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
  }
  else {
    ::FString::FString(__return_storage_ptr__,&this->Path);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetSuperStructs @ 14a0985d0

TArray<UStruct_*,TSizedDefaultAllocator<32>_> * __cdecl
UNameSpacedUserData::FUserData::GetSuperStructs
          (TArray<UStruct_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,UStruct *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<UStruct_*,TSizedDefaultAllocator<32>_> *pTVar6;
  longlong local_18 [2];
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&__return_storage_ptr__->AllocatorInstance,1,piVar1);
  *(UStruct **)(__return_storage_ptr__->AllocatorInstance).Data = param_1;
  while( true ) {
    if (__return_storage_ptr__->ArrayNum < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArray<UStruct_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar6;
      }
    }
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    local_18[0] = *(longlong *)(*(longlong *)pFVar2 + 0x40);
    if (local_18[0] == 0) break;
    if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)*piVar1 * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArray<UStruct_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar6;
      }
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    memmove(pFVar2 + 8,pFVar2,(longlong)iVar5 << 3);
    *(longlong *)(__return_storage_ptr__->AllocatorInstance).Data = local_18[0];
  }
  return __return_storage_ptr__;
}

