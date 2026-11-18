// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesia
// Functions: 6

// TArrayView<Audio::FConstantQFrame_const_,int><TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>_const_&,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>_> @ 14d814dd0

TArrayView<Audio::FConstantQFrame_const_,int> * __thiscall
TArrayView<Audio::FConstantQFrame_const_,int>::
TArrayView<Audio::FConstantQFrame_const_,int><TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>_const_&,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>_>
          (TArrayView<Audio::FConstantQFrame_const_,int> *this,
          TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<Audio::FConstantQFrame_const_,int> *pTVar4;
  
  this->DataPtr = (FConstantQFrame *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<Audio::FConstantQFrame_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<FLKFSResults_const_,int><TArray<FLKFSResults,TSizedDefaultAllocator<32>_>_const_&,TArray<FLKFSResults,TSizedDefaultAllocator<32>_>_> @ 14d814e40

TArrayView<FLKFSResults_const_,int> * __thiscall
TArrayView<FLKFSResults_const_,int>::
TArrayView<FLKFSResults_const_,int><TArray<FLKFSResults,TSizedDefaultAllocator<32>_>_const_&,TArray<FLKFSResults,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FLKFSResults_const_,int> *this,
          TArray<FLKFSResults,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FLKFSResults_const_,int> *pTVar4;
  
  this->DataPtr = (FLKFSResults *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<FLKFSResults_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<Audio::FLoudnessDatum_const_,int><TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>_const_&,TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>_> @ 14d814eb0

TArrayView<Audio::FLoudnessDatum_const_,int> * __thiscall
TArrayView<Audio::FLoudnessDatum_const_,int>::
TArrayView<Audio::FLoudnessDatum_const_,int><TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>_const_&,TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>_>
          (TArrayView<Audio::FLoudnessDatum_const_,int> *this,
          TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<Audio::FLoudnessDatum_const_,int> *pTVar4;
  
  this->DataPtr = (FLoudnessDatum *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<Audio::FLoudnessDatum_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 14d81c900

FConstantQFrame * __thiscall
TArrayView<Audio::FConstantQFrame_const_,int>::operator[]
          (TArrayView<Audio::FConstantQFrame_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FConstantQFrame *pFVar4;
  
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
      pFVar4 = (FConstantQFrame *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14d81c980

FLKFSNRTResults * __thiscall
TArrayView<FLKFSNRTResults_const_,int>::operator[]
          (TArrayView<FLKFSNRTResults_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FLKFSNRTResults *pFVar4;
  
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
      pFVar4 = (FLKFSNRTResults *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14d81ca00

FLoudnessDatum * __thiscall
TArrayView<Audio::FLoudnessDatum_const_,int>::operator[]
          (TArrayView<Audio::FLoudnessDatum_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FLoudnessDatum *pFVar4;
  
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
      pFVar4 = (FLoudnessDatum *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

