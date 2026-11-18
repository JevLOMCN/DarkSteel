// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// ~FRHIGPUMemoryReadback @ 1447f6910

void __thiscall FRHIGPUMemoryReadback::~FRHIGPUMemoryReadback(FRHIGPUMemoryReadback *this)

{
  FAtomicFlags *pFVar1;
  atomic<unsigned_int> aVar2;
  FRHIGPUFence *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  this->_padding_ = (longlong)&___7FRHIGPUMemoryReadback__6B_;
  this_00 = (this->Fence).Reference;
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

// EnqueueCopy @ 14480e0f0

void __thiscall
FRHIGPUMemoryReadback::EnqueueCopy
          (FRHIGPUMemoryReadback *this,FRHICommandList *param_1,FRHIBuffer *param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIGPUReadback.h"
                     ,0x3b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// EnqueueCopy @ 14480e130

void __thiscall
FRHIGPUMemoryReadback::EnqueueCopy
          (FRHIGPUMemoryReadback *this,FRHICommandList *param_1,FRHITexture *param_2,
          TIntVector3<int> *param_3,uint param_4,TIntVector3<int> *param_5)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIGPUReadback.h"
                     ,0x40,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

