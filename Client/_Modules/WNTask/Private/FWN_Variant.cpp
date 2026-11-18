// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WNTask
// Functions: 2

// operator= @ 14a6acab0

FWN_Variant * __thiscall FWN_Variant::operator=(FWN_Variant *this,FWN_Variant *param_1)

{
  TArray<FWN_VariantItemBase_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FWN_VariantItemBase_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  
  Reset(this);
  if (this != param_1) {
    pFVar3 = (this->Buffer).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (this->Buffer).AllocatorInstance.Data = (param_1->Buffer).AllocatorInstance.Data;
    (param_1->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Buffer).ArrayNum = (param_1->Buffer).ArrayNum;
    (this->Buffer).ArrayMax = (param_1->Buffer).ArrayMax;
    (param_1->Buffer).ArrayNum = 0;
    (param_1->Buffer).ArrayMax = 0;
  }
  pTVar1 = &param_1->Items;
  pTVar2 = &this->Items;
  if (pTVar2 != pTVar1) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Items).ArrayNum = (param_1->Items).ArrayNum;
    (this->Items).ArrayMax = (param_1->Items).ArrayMax;
    (param_1->Items).ArrayNum = 0;
    (param_1->Items).ArrayMax = 0;
  }
  Reset(param_1);
  return this;
}

// Reset @ 14a6b1970

void __thiscall FWN_Variant::Reset(FWN_Variant *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  if (0 < (this->Items).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->Items).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)(**(longlong **)((this->Items).AllocatorInstance.Data + lVar5) + 0x10))();
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar4 < (this->Items).ArrayNum);
  }
  (this->Items).ArrayNum = 0;
  if ((this->Items).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Items).AllocatorInstance,0,&(this->Items).ArrayMax);
  }
  (this->Buffer).ArrayNum = 0;
  if ((this->Buffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)this,0,&(this->Buffer).ArrayMax);
  }
  return;
}

