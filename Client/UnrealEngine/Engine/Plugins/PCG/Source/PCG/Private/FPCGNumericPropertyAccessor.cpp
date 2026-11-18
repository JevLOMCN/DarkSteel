// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 6

// GetRangeImpl @ 149e67de0

bool __thiscall
FPCGNumericPropertyAccessor<int>::GetRangeImpl
          (FPCGNumericPropertyAccessor<int> *this,TArrayView<int,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  TArray<void_const_*,TSizedDefaultAllocator<32>_> local_58;
  FScriptContainerElement *local_48;
  TArrayView<void_const_*,int> local_38;
  
  PCGPropertyAccessor::GetContainerKeys(&local_58,param_2,param_1->ArrayNum,param_3);
  if (local_58.ArrayNum == 0) {
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
    return false;
  }
  local_48 = local_58.AllocatorInstance.Data;
  if ((local_58.ArrayNum < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  local_38.DataPtr = (void **)local_48;
  PCGPropertyAccessor::AddressOffset<void_const_*>
            ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,&local_38);
  uVar6 = 0;
  if (0 < param_1->ArrayNum) {
    lVar8 = 0;
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < local_58.ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      uVar5 = (**(code **)(*(longlong *)this->Property + 0x210))
                        (this->Property,*(undefined8 *)(local_58.AllocatorInstance.Data + lVar7));
      uVar4 = 0;
      if ((int)uVar6 < param_1->ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
      *(undefined4 *)(lVar8 + (longlong)param_1->DataPtr) = uVar5;
      lVar8 = lVar8 + 4;
    } while ((int)uVar6 < param_1->ArrayNum);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return true;
}

// GetRangeImpl @ 149e67fd0

bool __thiscall
FPCGNumericPropertyAccessor<double>::GetRangeImpl
          (FPCGNumericPropertyAccessor<double> *this,TArrayView<double,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  TArray<void_const_*,TSizedDefaultAllocator<32>_> local_58;
  FScriptContainerElement *local_48;
  TArrayView<void_const_*,int> local_38 [2];
  
  PCGPropertyAccessor::GetContainerKeys(&local_58,param_2,param_1->ArrayNum,param_3);
  if (local_58.ArrayNum == 0) {
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
    return false;
  }
  local_48 = local_58.AllocatorInstance.Data;
  if ((local_58.ArrayNum < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  local_38[0].DataPtr = (void **)local_48;
  PCGPropertyAccessor::AddressOffset<void_const_*>
            ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,local_38);
  uVar6 = 0;
  if (0 < param_1->ArrayNum) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < local_58.ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      uVar2 = (**(code **)(*(longlong *)this->Property + 0x230))
                        (this->Property,*(undefined8 *)(local_58.AllocatorInstance.Data + lVar7));
      uVar5 = 0;
      if ((int)uVar6 < param_1->ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      uVar6 = uVar6 + 1;
      *(undefined8 *)(lVar7 + (longlong)param_1->DataPtr) = uVar2;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < param_1->ArrayNum);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return true;
}

// GetRangeImpl @ 149e681b0

bool __thiscall
FPCGNumericPropertyAccessor<__int64>::GetRangeImpl
          (FPCGNumericPropertyAccessor<__int64> *this,TArrayView<__int64,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined8 uVar5;
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
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  local_28.DataPtr = (void **)local_38;
  PCGPropertyAccessor::AddressOffset<void_const_*>
            ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,&local_28);
  uVar6 = 0;
  if (0 < param_1->ArrayNum) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < local_48.ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      uVar5 = (**(code **)(*(longlong *)this->Property + 0x210))
                        (this->Property,*(undefined8 *)(local_48.AllocatorInstance.Data + lVar7));
      uVar4 = 0;
      if ((int)uVar6 < param_1->ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      uVar6 = uVar6 + 1;
      *(undefined8 *)(lVar7 + (longlong)param_1->DataPtr) = uVar5;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < param_1->ArrayNum);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return true;
}

// SetRangeImpl @ 149ea4170

bool __thiscall
FPCGNumericPropertyAccessor<int>::SetRangeImpl
          (FPCGNumericPropertyAccessor<int> *this,TArrayView<int_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
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
  uVar8 = 0;
  if (0 < iVar6) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < iVar6) {
        uVar5 = ~uVar8 >> 0x1f;
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
      piVar1 = param_1->DataPtr;
      uVar5 = 0;
      if ((int)uVar8 < local_48.ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
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
      (**(code **)(*(longlong *)this->Property + 0x1e8))
                (this->Property,*(undefined8 *)(local_48.AllocatorInstance.Data + lVar7 * 8),
                 (longlong)piVar1[lVar7]);
      iVar6 = param_1->ArrayNum;
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 1;
    } while ((int)uVar8 < iVar6);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return true;
}

// SetRangeImpl @ 149ea4340

bool __thiscall
FPCGNumericPropertyAccessor<double>::SetRangeImpl
          (FPCGNumericPropertyAccessor<double> *this,TArrayView<double_const_,int> *param_1,
          int param_2,IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  double *pdVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
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
  uVar8 = 0;
  if (0 < iVar6) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < iVar6) {
        uVar5 = ~uVar8 >> 0x1f;
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
      pdVar1 = param_1->DataPtr;
      uVar5 = 0;
      if ((int)uVar8 < local_48.ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
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
      (**(code **)(*(longlong *)this->Property + 0x1f8))
                (this->Property,*(undefined8 *)(local_48.AllocatorInstance.Data + lVar7 * 8),
                 pdVar1[lVar7]);
      iVar6 = param_1->ArrayNum;
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 1;
    } while ((int)uVar8 < iVar6);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return true;
}

// SetRangeImpl @ 149ea4520

bool __thiscall
FPCGNumericPropertyAccessor<__int64>::SetRangeImpl
          (FPCGNumericPropertyAccessor<__int64> *this,TArrayView<__int64_const_,int> *param_1,
          int param_2,IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  long64 *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
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
  uVar8 = 0;
  if (0 < iVar6) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < iVar6) {
        uVar5 = ~uVar8 >> 0x1f;
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
      plVar1 = param_1->DataPtr;
      uVar5 = 0;
      if ((int)uVar8 < local_48.ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
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
      (**(code **)(*(longlong *)this->Property + 0x1e8))
                (this->Property,*(undefined8 *)(local_48.AllocatorInstance.Data + lVar7 * 8),
                 plVar1[lVar7]);
      iVar6 = param_1->ArrayNum;
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 1;
    } while ((int)uVar8 < iVar6);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return true;
}

