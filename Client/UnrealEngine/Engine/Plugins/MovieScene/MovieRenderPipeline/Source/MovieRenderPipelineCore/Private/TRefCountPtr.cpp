// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 2

// TRefCountPtr<FRHIGPUFence> @ 14dd69c90

TRefCountPtr<FRHIGPUFence> * __thiscall
TRefCountPtr<FRHIGPUFence>::TRefCountPtr<FRHIGPUFence>(TRefCountPtr<FRHIGPUFence> *this)

{
  this->Reference = (FRHIGPUFence *)0x0;
  return this;
}

// ~TRefCountPtr<FRHIGPUFence> @ 14dd6ba00

void __thiscall
TRefCountPtr<FRHIGPUFence>::~TRefCountPtr<FRHIGPUFence>(TRefCountPtr<FRHIGPUFence> *this)

{
  FAtomicFlags *pFVar1;
  atomic<unsigned_int> aVar2;
  FRHIGPUFence *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  this_00 = this->Reference;
  if (this_00 == (FRHIGPUFence *)0x0) {
    return;
  }
  LOCK();
  pFVar1 = (FAtomicFlags *)&this_00->_padding_;
  aVar2 = pFVar1->Packed;
  pFVar1->Packed = (atomic<unsigned_int>)((int)pFVar1->Packed + -1);
  UNLOCK();
  if ((int)aVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(OldPacked & DeletingBit) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa2,L"Resource is being deleted.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = (uint)aVar2 & 0x3fffffff;
  if ((int)(uVar5 - 1) < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa4,L"Reference count has underflowed.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewValue >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x53,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (uVar5 == 1) {
    FRHIResource::MarkForDelete((FRHIResource *)this_00);
  }
  return;
}

