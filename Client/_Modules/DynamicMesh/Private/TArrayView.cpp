// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 5

// TArrayView<int_const_,int><TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_> @ 14c77f680

TArrayView<int_const_,int> * __thiscall
TArrayView<int_const_,int>::
TArrayView<int_const_,int><TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
          (TArrayView<int_const_,int> *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<int_const_,int> *pTVar4;
  
  this->DataPtr = (int *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<int_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 14c7b7fa0

FIndex3i * __thiscall
TArrayView<UE::Geometry::FIndex3i,int>::operator[]
          (TArrayView<UE::Geometry::FIndex3i,int> *this,int param_1)

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

// operator[] @ 14c7b8020

FTaskContext * __thiscall
TArrayView<TransferValuesLocals::FTaskContext,int>::operator[]
          (TArrayView<TransferValuesLocals::FTaskContext,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FTaskContext *pFVar4;
  
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
      pFVar4 = (FTaskContext *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// Slice @ 14c831ef0

TArrayView<int,int> * __thiscall
TArrayView<int,int>::Slice
          (TArrayView<int,int> *this,TArrayView<int,int> *__return_storage_ptr__,int param_1,
          int param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<int,int> *pTVar4;
  
  if (param_1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x15b,L"Invalid index (%lld)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<int,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x15c,L"Invalid count (%lld)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<int,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if (this->ArrayNum < param_1 + param_2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index + InNum <= ArrayNum",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x15d,
                       L"Range (index: %lld, count: %lld) lies outside the view of %lld elements");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<int,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  piVar1 = this->DataPtr;
  __return_storage_ptr__->ArrayNum = param_2;
  __return_storage_ptr__->DataPtr = piVar1 + param_1;
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<int,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// TArrayView<UE::Math::TVector<double>_const_,int><TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_> @ 14c85cc40

TArrayView<UE::Math::TVector<double>_const_,int> * __thiscall
TArrayView<UE::Math::TVector<double>_const_,int>::
TArrayView<UE::Math::TVector<double>_const_,int><TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
          (TArrayView<UE::Math::TVector<double>_const_,int> *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::Math::TVector<double>_const_,int> *pTVar4;
  
  this->DataPtr = (TVector<double> *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<UE::Math::TVector<double>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

