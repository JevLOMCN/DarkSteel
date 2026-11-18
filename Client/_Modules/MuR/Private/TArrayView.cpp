// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 2

// TArrayView<UE::Mutable::Private::FScheduledOp_const_,int><TArray<UE::Mutable::Private::FScheduledOp,TSizedDefaultAllocator<32>_>_&,TArray<UE::Mutable::Private::FScheduledOp,TSizedDefaultAllocator<32>_>_> @ 14a94e600

TArrayView<UE::Mutable::Private::FScheduledOp_const_,int> * __thiscall
TArrayView<UE::Mutable::Private::FScheduledOp_const_,int>::
TArrayView<UE::Mutable::Private::FScheduledOp_const_,int><TArray<UE::Mutable::Private::FScheduledOp,TSizedDefaultAllocator<32>_>_&,TArray<UE::Mutable::Private::FScheduledOp,TSizedDefaultAllocator<32>_>_>
          (TArrayView<UE::Mutable::Private::FScheduledOp_const_,int> *this,
          TArray<UE::Mutable::Private::FScheduledOp,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::Mutable::Private::FScheduledOp_const_,int> *pTVar4;
  
  this->DataPtr = (FScheduledOp *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<UE::Mutable::Private::FScheduledOp_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 14a9794f0

FIndex3i * __thiscall
TArrayView<UE::Geometry::FIndex3i_const_,int>::operator[]
          (TArrayView<UE::Geometry::FIndex3i_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FIndex3i *pFVar4;
  
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
      pFVar4 = (FIndex3i *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

