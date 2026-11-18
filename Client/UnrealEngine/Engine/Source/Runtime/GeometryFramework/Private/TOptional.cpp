// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryFramework
// Functions: 3

// operator= @ 1496fb760

TOptional<TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
TOptional<TArray<int,TSizedDefaultAllocator<32>_>_>::operator=
          (TOptional<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  TOptional<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar6;
  
  if (param_1 != (TArray<int,TSizedDefaultAllocator<32>_> *)this) {
    pFVar3 = (this->field0_0x0).TypedValue.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (this->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar2 = param_1->ArrayNum;
    pFVar3 = (param_1->AllocatorInstance).Data;
    piVar1 = &(this->field0_0x0).TypedValue.ArrayMax;
    (this->field0_0x0).TypedValue.ArrayNum = iVar2;
    if (iVar2 == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
      memcpy((this->field0_0x0).TypedValue.AllocatorInstance.Data,pFVar3,(longlong)iVar2 << 2);
    }
    if (*piVar1 == -1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x171,
                         L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TOptional<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar4)();
        return pTVar6;
      }
    }
  }
  return this;
}

// operator-> @ 1496fb830

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
TOptional<TArray<int,TSizedDefaultAllocator<32>_>_>::operator->
          (TOptional<TArray<int,TSizedDefaultAllocator<32>_>_> *this)

{
  code *pcVar1;
  bool bVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if ((this->field0_0x0).TypedValue.ArrayMax == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return (TArray<int,TSizedDefaultAllocator<32>_> *)this;
}

// GetValue @ 149711bf0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
TOptional<TArray<int,TSizedDefaultAllocator<32>_>_>::GetValue
          (TOptional<TArray<int,TSizedDefaultAllocator<32>_>_> *this)

{
  code *pcVar1;
  bool bVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if ((this->field0_0x0).TypedValue.ArrayMax == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return (TArray<int,TSizedDefaultAllocator<32>_> *)this;
}

