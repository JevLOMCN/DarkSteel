// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 9

// TArrayView<UE::StateTree::FActiveFrameID_const_,int><TArray<UE::StateTree::FActiveFrameID,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_&,TArray<UE::StateTree::FActiveFrameID,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_> @ 14d4dc3e0

TArrayView<UE::StateTree::FActiveFrameID_const_,int> * __thiscall
TArrayView<UE::StateTree::FActiveFrameID_const_,int>::
TArrayView<UE::StateTree::FActiveFrameID_const_,int><TArray<UE::StateTree::FActiveFrameID,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_&,TArray<UE::StateTree::FActiveFrameID,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
          (TArrayView<UE::StateTree::FActiveFrameID_const_,int> *this,
          TArray<UE::StateTree::FActiveFrameID,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  int iVar1;
  ForElementType<UE::StateTree::FActiveFrameID> FVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<UE::StateTree::FActiveFrameID_const_,int> *pTVar5;
  ForElementType<UE::StateTree::FActiveFrameID> FVar6;
  
  FVar2 = (param_1->AllocatorInstance).SecondaryData;
  FVar6 = (ForElementType<UE::StateTree::FActiveFrameID>)param_1;
  if (FVar2 != (ForElementType<UE::StateTree::FActiveFrameID>)0x0) {
    FVar6 = FVar2;
  }
  this->DataPtr = (FActiveFrameID *)FVar6;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<UE::StateTree::FActiveFrameID_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
    this->ArrayNum = iVar1;
    return this;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<UE::StateTree::FActiveState_const_,int><TArray<UE::StateTree::FActiveState,TSizedDefaultAllocator<32>_>_&,TArray<UE::StateTree::FActiveState,TSizedDefaultAllocator<32>_>_> @ 14d4dc460

TArrayView<UE::StateTree::FActiveState_const_,int> * __thiscall
TArrayView<UE::StateTree::FActiveState_const_,int>::
TArrayView<UE::StateTree::FActiveState_const_,int><TArray<UE::StateTree::FActiveState,TSizedDefaultAllocator<32>_>_&,TArray<UE::StateTree::FActiveState,TSizedDefaultAllocator<32>_>_>
          (TArrayView<UE::StateTree::FActiveState_const_,int> *this,
          TArray<UE::StateTree::FActiveState,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::StateTree::FActiveState_const_,int> *pTVar4;
  
  this->DataPtr = (FActiveState *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<UE::StateTree::FActiveState_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<FStateTreeExecutionFrame_const_,int><TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_>_&,TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_>_> @ 14d4dc4d0

TArrayView<FStateTreeExecutionFrame_const_,int> * __thiscall
TArrayView<FStateTreeExecutionFrame_const_,int>::
TArrayView<FStateTreeExecutionFrame_const_,int><TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_>_&,TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FStateTreeExecutionFrame_const_,int> *this,
          TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FStateTreeExecutionFrame_const_,int> *pTVar4;
  
  this->DataPtr = (FStateTreeExecutionFrame *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<FStateTreeExecutionFrame_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<FStateTreeExecutionFrame,int><TArray<FStateTreeExecutionFrame,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_&,TArray<FStateTreeExecutionFrame,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_> @ 14d4dc540

TArrayView<FStateTreeExecutionFrame,int> * __thiscall
TArrayView<FStateTreeExecutionFrame,int>::
TArrayView<FStateTreeExecutionFrame,int><TArray<FStateTreeExecutionFrame,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_&,TArray<FStateTreeExecutionFrame,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>
          (TArrayView<FStateTreeExecutionFrame,int> *this,
          TArray<FStateTreeExecutionFrame,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  int iVar1;
  ForElementType<FStateTreeExecutionFrame> FVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<FStateTreeExecutionFrame,int> *pTVar5;
  ForElementType<FStateTreeExecutionFrame> FVar6;
  
  FVar2 = (param_1->AllocatorInstance).SecondaryData;
  FVar6 = (ForElementType<FStateTreeExecutionFrame>)param_1;
  if (FVar2 != (ForElementType<FStateTreeExecutionFrame>)0x0) {
    FVar6 = FVar2;
  }
  this->DataPtr = (FStateTreeExecutionFrame *)FVar6;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<FStateTreeExecutionFrame,int> *)(*pcVar3)();
      return pTVar5;
    }
    this->ArrayNum = iVar1;
    return this;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<FStateTreeExecutionFrame_const_,int><TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_>_const_&,TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_>_> @ 14d4dc5c0

TArrayView<FStateTreeExecutionFrame_const_,int> * __thiscall
TArrayView<FStateTreeExecutionFrame_const_,int>::
TArrayView<FStateTreeExecutionFrame_const_,int><TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_>_const_&,TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FStateTreeExecutionFrame_const_,int> *this,
          TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FStateTreeExecutionFrame_const_,int> *pTVar4;
  
  this->DataPtr = (FStateTreeExecutionFrame *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<FStateTreeExecutionFrame_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 14d4ed860

FActiveState * __thiscall
TArrayView<UE::StateTree::FActiveState_const_,int>::operator[]
          (TArrayView<UE::StateTree::FActiveState_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FActiveState *pFVar4;
  
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
      pFVar4 = (FActiveState *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14d4ed8e0

FStateHandleContext * __thiscall
TArrayView<UE::StateTree::ExecutionContext::FStateHandleContext_const_,int>::operator[]
          (TArrayView<UE::StateTree::ExecutionContext::FStateHandleContext_const_,int> *this,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FStateHandleContext *pFVar4;
  
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
      pFVar4 = (FStateHandleContext *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14d4ed960

FStateTreeExecutionFrame * __thiscall
TArrayView<FStateTreeExecutionFrame_const_,int>::operator[]
          (TArrayView<FStateTreeExecutionFrame_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FStateTreeExecutionFrame *pFVar4;
  
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
      pFVar4 = (FStateTreeExecutionFrame *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// Last @ 14d532190

FActiveState * __thiscall
TArrayView<UE::StateTree::FActiveState_const_,int>::Last
          (TArrayView<UE::StateTree::FActiveState_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FActiveState *pFVar4;
  uint uVar5;
  
  uVar5 = ~param_1 + this->ArrayNum;
  uVar3 = 0;
  if ((int)uVar5 < this->ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FActiveState *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + ((this->ArrayNum - param_1) + -1);
}

