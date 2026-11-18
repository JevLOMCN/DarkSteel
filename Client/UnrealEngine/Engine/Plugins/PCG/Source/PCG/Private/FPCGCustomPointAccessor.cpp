// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// GetRangeImpl @ 149f4e750

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGCustomPointAccessor<UE::Math::TQuat<double>_>::GetRangeImpl
          (FPCGCustomPointAccessor<UE::Math::TQuat<double>_> *this,
          TArrayView<UE::Math::TQuat<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  int iVar1;
  TQuat<double> *pTVar2;
  undefined8 uVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  uint uVar11;
  longlong local_res10;
  TQuat<double> *local_68;
  TArray<FPCGPoint_const_*,TSizedDefaultAllocator<32>_> local_60;
  FScriptContainerElement *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TArrayView<FPCGPoint_const_*,int> local_38;
  
  local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.ArrayNum = 0;
  local_60.ArrayMax = 0;
  TArray<FPCGPoint_const_*,TSizedDefaultAllocator<32>_>::SetNum(&local_60,param_1->ArrayNum,Default)
  ;
  iStack_40 = local_60.ArrayNum;
  local_48 = local_60.AllocatorInstance.Data;
  if ((local_60.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  local_38._12_4_ = uStack_3c;
  local_38.ArrayNum = iStack_40;
  local_38.DataPtr = (FPCGPoint **)local_48;
  bVar6 = IPCGAttributeAccessorKeys::GetKeys<FPCGPoint>(param_3,param_2,&local_38);
  if (bVar6) {
    iVar1 = param_1->ArrayNum;
    uVar11 = 0;
    if (0 < iVar1) {
      local_res10 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar11 < iVar1) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pTVar2 = param_1->DataPtr;
        uVar8 = 0;
        if ((int)uVar11 < local_60.ArrayNum) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        local_68 = pTVar2 + (int)uVar11;
        uVar3 = *(undefined8 *)(local_60.AllocatorInstance.Data + local_res10);
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Getter);
        plVar4 = *(longlong **)&(this->Getter).field_0x28;
        pcVar5 = *(code **)&this->Getter;
        plVar10 = (longlong *)&(this->Getter).field_0x10;
        if (plVar4 != (longlong *)0x0) {
          plVar10 = plVar4;
        }
        uVar9 = (**(code **)(*plVar10 + 8))();
        (*pcVar5)(uVar9,uVar3,&local_68);
        local_res10 = local_res10 + 8;
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < iVar1);
    }
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.AllocatorInstance.Data);
  }
  return bVar6;
}

// GetRangeImpl @ 149f4e970

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGCustomPointAccessor<UE::Math::TVector<double>_>::GetRangeImpl
          (FPCGCustomPointAccessor<UE::Math::TVector<double>_> *this,
          TArrayView<UE::Math::TVector<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  int iVar1;
  TVector<double> *pTVar2;
  undefined8 uVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  uint uVar11;
  longlong local_res10;
  TVector<double> *local_68;
  TArray<FPCGPoint_const_*,TSizedDefaultAllocator<32>_> local_60;
  FScriptContainerElement *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TArrayView<FPCGPoint_const_*,int> local_38;
  
  local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.ArrayNum = 0;
  local_60.ArrayMax = 0;
  TArray<FPCGPoint_const_*,TSizedDefaultAllocator<32>_>::SetNum(&local_60,param_1->ArrayNum,Default)
  ;
  iStack_40 = local_60.ArrayNum;
  local_48 = local_60.AllocatorInstance.Data;
  if ((local_60.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  local_38._12_4_ = uStack_3c;
  local_38.ArrayNum = iStack_40;
  local_38.DataPtr = (FPCGPoint **)local_48;
  bVar6 = IPCGAttributeAccessorKeys::GetKeys<FPCGPoint>(param_3,param_2,&local_38);
  if (bVar6) {
    iVar1 = param_1->ArrayNum;
    uVar11 = 0;
    if (0 < iVar1) {
      local_res10 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar11 < iVar1) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pTVar2 = param_1->DataPtr;
        uVar8 = 0;
        if ((int)uVar11 < local_60.ArrayNum) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        uVar3 = *(undefined8 *)(local_60.AllocatorInstance.Data + local_res10);
        local_68 = pTVar2 + (int)uVar11;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Getter);
        plVar4 = *(longlong **)&(this->Getter).field_0x28;
        pcVar5 = *(code **)&this->Getter;
        plVar10 = (longlong *)&(this->Getter).field_0x10;
        if (plVar4 != (longlong *)0x0) {
          plVar10 = plVar4;
        }
        uVar9 = (**(code **)(*plVar10 + 8))();
        (*pcVar5)(uVar9,uVar3,&local_68);
        local_res10 = local_res10 + 8;
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < iVar1);
    }
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.AllocatorInstance.Data);
  }
  return bVar6;
}

// SetRangeImpl @ 149f615a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGCustomPointAccessor<UE::Math::TQuat<double>_>::SetRangeImpl
          (FPCGCustomPointAccessor<UE::Math::TQuat<double>_> *this,
          TArrayView<UE::Math::TQuat<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  int iVar1;
  TQuat<double> *pTVar2;
  undefined8 uVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  uint uVar11;
  longlong local_res10;
  TQuat<double> *local_68;
  TArray<FPCGPoint_*,TSizedDefaultAllocator<32>_> local_60;
  FScriptContainerElement *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TArrayView<FPCGPoint_*,int> local_38;
  
  local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.ArrayNum = 0;
  local_60.ArrayMax = 0;
  TArray<FPCGPoint_*,TSizedDefaultAllocator<32>_>::SetNum(&local_60,param_1->ArrayNum,Default);
  iStack_40 = local_60.ArrayNum;
  local_48 = local_60.AllocatorInstance.Data;
  if ((local_60.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  local_38._12_4_ = uStack_3c;
  local_38.ArrayNum = iStack_40;
  local_38.DataPtr = (FPCGPoint **)local_48;
  bVar6 = IPCGAttributeAccessorKeys::GetKeys<FPCGPoint>(param_3,param_2,&local_38);
  if (bVar6) {
    iVar1 = param_1->ArrayNum;
    uVar11 = 0;
    if (0 < iVar1) {
      local_res10 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar11 < iVar1) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pTVar2 = param_1->DataPtr;
        uVar8 = 0;
        if ((int)uVar11 < local_60.ArrayNum) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        local_68 = pTVar2 + (int)uVar11;
        uVar3 = *(undefined8 *)(local_60.AllocatorInstance.Data + local_res10);
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Setter);
        plVar4 = *(longlong **)&(this->Setter).field_0x28;
        pcVar5 = *(code **)&this->Setter;
        plVar10 = (longlong *)&(this->Setter).field_0x10;
        if (plVar4 != (longlong *)0x0) {
          plVar10 = plVar4;
        }
        uVar9 = (**(code **)(*plVar10 + 8))();
        (*pcVar5)(uVar9,uVar3,&local_68);
        local_res10 = local_res10 + 8;
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < iVar1);
    }
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.AllocatorInstance.Data);
  }
  return bVar6;
}

// SetRangeImpl @ 149f617c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGCustomPointAccessor<UE::Math::TVector<double>_>::SetRangeImpl
          (FPCGCustomPointAccessor<UE::Math::TVector<double>_> *this,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  int iVar1;
  TVector<double> *pTVar2;
  undefined8 uVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  uint uVar11;
  longlong local_res10;
  TVector<double> *local_68;
  TArray<FPCGPoint_*,TSizedDefaultAllocator<32>_> local_60;
  FScriptContainerElement *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TArrayView<FPCGPoint_*,int> local_38;
  
  local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.ArrayNum = 0;
  local_60.ArrayMax = 0;
  TArray<FPCGPoint_*,TSizedDefaultAllocator<32>_>::SetNum(&local_60,param_1->ArrayNum,Default);
  iStack_40 = local_60.ArrayNum;
  local_48 = local_60.AllocatorInstance.Data;
  if ((local_60.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  local_38._12_4_ = uStack_3c;
  local_38.ArrayNum = iStack_40;
  local_38.DataPtr = (FPCGPoint **)local_48;
  bVar6 = IPCGAttributeAccessorKeys::GetKeys<FPCGPoint>(param_3,param_2,&local_38);
  if (bVar6) {
    iVar1 = param_1->ArrayNum;
    uVar11 = 0;
    if (0 < iVar1) {
      local_res10 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar11 < iVar1) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pTVar2 = param_1->DataPtr;
        uVar8 = 0;
        if ((int)uVar11 < local_60.ArrayNum) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        uVar3 = *(undefined8 *)(local_60.AllocatorInstance.Data + local_res10);
        local_68 = pTVar2 + (int)uVar11;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Setter);
        plVar4 = *(longlong **)&(this->Setter).field_0x28;
        pcVar5 = *(code **)&this->Setter;
        plVar10 = (longlong *)&(this->Setter).field_0x10;
        if (plVar4 != (longlong *)0x0) {
          plVar10 = plVar4;
        }
        uVar9 = (**(code **)(*plVar10 + 8))();
        (*pcVar5)(uVar9,uVar3,&local_68);
        local_res10 = local_res10 + 8;
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < iVar1);
    }
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.AllocatorInstance.Data);
  }
  return bVar6;
}

