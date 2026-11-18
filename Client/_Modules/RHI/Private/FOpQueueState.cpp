// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 3

// ~FOpQueueState @ 145cd2880

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall RHIValidation::FOpQueueState::~FOpQueueState(FOpQueueState *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<RHIValidation::FOpQueueState::FOpsList,int>
            ((FOpsList *)(this->Ops).AllocatorInstance.Data,(this->Ops).ArrayNum);
  pFVar1 = (this->Ops).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AppendOps @ 145cd4c00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
RHIValidation::FOpQueueState::AppendOps(FOpQueueState *this,FValidationCommandList *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  iVar3 = (this->Ops).ArrayNum;
  piVar1 = &(this->Ops).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->Ops).AllocatorInstance,piVar1);
  }
  (this->Ops).ArrayNum = iVar3 + 1;
  pFVar2 = (this->Ops).AllocatorInstance.Data + (longlong)iVar3 * 0x18;
  *(undefined8 *)pFVar2 = 0;
  *(FScriptContainerElement **)pFVar2 = (param_1->CompletedOpList).AllocatorInstance.Data;
  (param_1->CompletedOpList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar2 + 8) = (param_1->CompletedOpList).ArrayNum;
  *(int *)(pFVar2 + 0xc) = (param_1->CompletedOpList).ArrayMax;
  (param_1->CompletedOpList).ArrayNum = 0;
  (param_1->CompletedOpList).ArrayMax = 0;
  *(undefined4 *)(pFVar2 + 0x10) = 0;
  return;
}

// Execute @ 145cdb1b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall RHIValidation::FOpQueueState::Execute(FOpQueueState *this)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  if ((this->Ops).ArrayNum == 0) {
    return false;
  }
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar3 = *(undefined8 *)(lVar2 + 0xec8);
  if (*(char *)(lVar2 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  *(FOpQueueState **)(lVar2 + 0xec8) = this;
  iVar9 = (this->Ops).ArrayNum;
  bVar11 = false;
  while (iVar9 != 0) {
    if (((this->Ops).ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    pFVar4 = (this->Ops).AllocatorInstance.Data;
    uVar10 = *(uint *)(pFVar4 + 0x10);
    iVar9 = *(int *)(pFVar4 + 8);
    bVar6 = bVar11;
    if ((int)uVar10 < iVar9) {
      do {
        uVar8 = 0;
        if ((int)uVar10 < iVar9) {
          uVar8 = ~uVar10 >> 0x1f;
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
        bVar6 = FOperation::Replay((FOperation *)
                                   (*(longlong *)pFVar4 + (longlong)(int)uVar10 * 0x48),this);
        if (!bVar6) goto LAB_145cdb3a8;
        *(int *)(pFVar4 + 0x10) = *(int *)(pFVar4 + 0x10) + 1;
        bVar11 = true;
        bVar6 = true;
        uVar10 = *(uint *)(pFVar4 + 0x10);
        iVar9 = *(int *)(pFVar4 + 8);
      } while ((int)uVar10 < iVar9);
    }
    if (((this->Ops).ArrayNum < 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    pFVar4 = (this->Ops).AllocatorInstance.Data;
    if (*(void **)pFVar4 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar4);
    }
    iVar9 = (this->Ops).ArrayNum + -1;
    if (iVar9 != 0) {
      memmove(pFVar4,pFVar4 + 0x18,(longlong)iVar9 * 0x18);
    }
    piVar1 = &(this->Ops).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,&(this->Ops).AllocatorInstance,(this->Ops).ArrayNum,&(this->Ops).ArrayMax);
    bVar11 = bVar6;
    iVar9 = (this->Ops).ArrayNum;
  }
LAB_145cdb3a8:
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  *(undefined8 *)(lVar2 + 0xec8) = uVar3;
  return bVar11;
}

