// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// ~FUniformExpressionCache @ 147f69ca0

void __thiscall FUniformExpressionCache::~FUniformExpressionCache(FUniformExpressionCache *this)

{
  FRHIUniformBuffer *pFVar1;
  FScriptContainerElement *pFVar2;
  
  ResetAllocatedVTs(this);
  pFVar1 = (this->UniformBuffer).Reference;
  if (pFVar1 != (FRHIUniformBuffer *)0x0) {
    (this->UniformBuffer).Reference = (FRHIUniformBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->ParameterCollections).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->OwnedAllocatedVTs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->AllocatedVTs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar1 = (this->UniformBuffer).Reference;
  if (pFVar1 != (FRHIUniformBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
    return;
  }
  return;
}

// ResetAllocatedVTs @ 147f85800

void __thiscall FUniformExpressionCache::ResetAllocatedVTs(FUniformExpressionCache *this)

{
  code *pcVar1;
  bool bVar2;
  IRendererModule *pIVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->OwnedAllocatedVTs).ArrayNum) {
    lVar6 = 0;
    do {
      pIVar3 = GetRendererModule();
      pcVar1 = *(code **)((longlong)*pIVar3 + 0x148);
      uVar4 = 0;
      if ((int)uVar5 < (this->OwnedAllocatedVTs).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (*pcVar1)(pIVar3,*(undefined8 *)((this->OwnedAllocatedVTs).AllocatorInstance.Data + lVar6));
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->OwnedAllocatedVTs).ArrayNum);
  }
  (this->AllocatedVTs).ArrayNum = 0;
  if ((this->AllocatedVTs).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->AllocatedVTs).AllocatorInstance,0,&(this->AllocatedVTs).ArrayMax);
  }
  (this->OwnedAllocatedVTs).ArrayNum = 0;
  if ((this->OwnedAllocatedVTs).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->OwnedAllocatedVTs).AllocatorInstance,0,
               &(this->OwnedAllocatedVTs).ArrayMax);
  }
  return;
}

