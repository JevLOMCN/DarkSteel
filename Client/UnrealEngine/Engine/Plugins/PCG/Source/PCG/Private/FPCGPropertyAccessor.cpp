// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// GetRangeImpl @ 149e68390

bool __thiscall
FPCGPropertyAccessor<FName,FNameProperty>::GetRangeImpl
          (FPCGPropertyAccessor<FName,FNameProperty> *this,TArrayView<FName,int> *param_1,
          int param_2,IPCGAttributeAccessorKeys *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  TArray<void_const_*,TSizedDefaultAllocator<32>_> local_48;
  FScriptContainerElement *local_38;
  TArrayView<void_const_*,int> local_28;
  
  PCGPropertyAccessor::GetContainerKeys(&local_48,param_2,param_1->ArrayNum,param_3);
  if (local_48.ArrayNum == 0) {
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    return false;
  }
  local_38 = local_48.AllocatorInstance.Data;
  if ((local_48.ArrayNum < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  local_28.DataPtr = (void **)local_38;
  PCGPropertyAccessor::AddressOffset<void_const_*>
            ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,&local_28);
  uVar6 = 0;
  if (0 < param_1->ArrayNum) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < local_48.ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar5 = 0;
      if ((int)uVar6 < param_1->ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      uVar1 = **(undefined8 **)(local_48.AllocatorInstance.Data + lVar7);
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar6 = uVar6 + 1;
      *(undefined8 *)((longlong)&(param_1->DataPtr->ComparisonIndex).Value + lVar7) = uVar1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < param_1->ArrayNum);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return true;
}

// SetRangeImpl @ 149ea46f0

bool __thiscall
FPCGPropertyAccessor<FName,FNameProperty>::SetRangeImpl
          (FPCGPropertyAccessor<FName,FNameProperty> *this,TArrayView<FName_const_,int> *param_1,
          int param_2,IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  longlong lVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  TArray<void_*,TSizedDefaultAllocator<32>_> local_48;
  FScriptContainerElement *local_38;
  TArrayView<void_*,int> local_28;
  
  PCGPropertyAccessor::GetContainerKeys(&local_48,param_2,param_1->ArrayNum,param_3);
  if (local_48.ArrayNum == 0) {
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    return false;
  }
  local_38 = local_48.AllocatorInstance.Data;
  if ((local_48.ArrayNum < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  local_28.DataPtr = (void **)local_38;
  PCGPropertyAccessor::AddressOffset<void_*>
            ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,&local_28);
  iVar7 = param_1->ArrayNum;
  uVar9 = 0;
  if (0 < iVar7) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < iVar7) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar2 = param_1->DataPtr;
      uVar6 = 0;
      if ((int)uVar9 < local_48.ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar9 = uVar9 + 1;
      lVar1 = lVar8 * 8;
      pFVar2 = pFVar2 + lVar8;
      lVar8 = lVar8 + 1;
      **(FName **)(local_48.AllocatorInstance.Data + lVar1) = *pFVar2;
      iVar7 = param_1->ArrayNum;
    } while ((int)uVar9 < iVar7);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return true;
}

// SetRangeImpl @ 149ea48b0

bool __thiscall
FPCGPropertyAccessor<FString,FStrProperty>::SetRangeImpl
          (FPCGPropertyAccessor<FString,FStrProperty> *this,TArrayView<FString_const_,int> *param_1,
          int param_2,IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  FString *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  TArray<void_*,TSizedDefaultAllocator<32>_> local_48;
  FScriptContainerElement *local_38;
  TArrayView<void_*,int> local_28;
  
  PCGPropertyAccessor::GetContainerKeys(&local_48,param_2,param_1->ArrayNum,param_3);
  if (local_48.ArrayNum == 0) {
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    return false;
  }
  local_38 = local_48.AllocatorInstance.Data;
  if ((local_48.ArrayNum < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  local_28.DataPtr = (void **)local_38;
  PCGPropertyAccessor::AddressOffset<void_*>
            ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,&local_28);
  iVar6 = param_1->ArrayNum;
  uVar7 = 0;
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar1 = param_1->DataPtr;
      uVar5 = 0;
      if ((int)uVar7 < local_48.ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      ::FString::operator=
                (*(FString **)(local_48.AllocatorInstance.Data + lVar8),pFVar1 + (int)uVar7);
      iVar6 = param_1->ArrayNum;
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < iVar6);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return true;
}

