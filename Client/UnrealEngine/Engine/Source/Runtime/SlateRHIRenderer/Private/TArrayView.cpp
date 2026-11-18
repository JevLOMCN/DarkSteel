// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 1

// TArrayView<FSlateRenderBatch_const_,int><TArray<FSlateRenderBatch,TSizedDefaultAllocator<32>_>_const_&,TArray<FSlateRenderBatch,TSizedDefaultAllocator<32>_>_> @ 145fd6e00

TArrayView<FSlateRenderBatch_const_,int> * __thiscall
TArrayView<FSlateRenderBatch_const_,int>::
TArrayView<FSlateRenderBatch_const_,int><TArray<FSlateRenderBatch,TSizedDefaultAllocator<32>_>_const_&,TArray<FSlateRenderBatch,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FSlateRenderBatch_const_,int> *this,
          TArray<FSlateRenderBatch,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FSlateRenderBatch_const_,int> *pTVar4;
  
  this->DataPtr = (FSlateRenderBatch *)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (-1 < iVar1) {
    this->ArrayNum = iVar1;
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FSlateRenderBatch_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

