// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNEDenoiser
// Functions: 2

// TArrayView<UE::NNE::FTensorShape_const_,int><TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_>,TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_>_> @ 14eadb4a0

TArrayView<UE::NNE::FTensorShape_const_,int> * __thiscall
TArrayView<UE::NNE::FTensorShape_const_,int>::
TArrayView<UE::NNE::FTensorShape_const_,int><TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_>,TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_>_>
          (TArrayView<UE::NNE::FTensorShape_const_,int> *this,
          TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::NNE::FTensorShape_const_,int> *pTVar4;
  
  this->DataPtr = (FTensorShape *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<UE::NNE::FTensorShape_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 14eae7220

FTensorDesc * __thiscall
TArrayView<UE::NNE::FTensorDesc_const_,int>::operator[]
          (TArrayView<UE::NNE::FTensorDesc_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FTensorDesc *pFVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FTensorDesc *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

