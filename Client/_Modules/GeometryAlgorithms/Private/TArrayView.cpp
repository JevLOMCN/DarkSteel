// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryAlgorithms
// Functions: 3

// TArrayView<UE::Math::TVector2<float>_const_,int><TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> @ 1494dc230

TArrayView<UE::Math::TVector2<float>_const_,int> * __thiscall
TArrayView<UE::Math::TVector2<float>_const_,int>::
TArrayView<UE::Math::TVector2<float>_const_,int><TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
          (TArrayView<UE::Math::TVector2<float>_const_,int> *this,
          TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::Math::TVector2<float>_const_,int> *pTVar4;
  
  this->DataPtr = (TVector2<float> *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<UE::Math::TVector2<float>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<UE::Math::TVector2<double>_const_,int><TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_> @ 1494dc2a0

TArrayView<UE::Math::TVector2<double>_const_,int> * __thiscall
TArrayView<UE::Math::TVector2<double>_const_,int>::
TArrayView<UE::Math::TVector2<double>_const_,int><TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
          (TArrayView<UE::Math::TVector2<double>_const_,int> *this,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::Math::TVector2<double>_const_,int> *pTVar4;
  
  this->DataPtr = (TVector2<double> *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<UE::Math::TVector2<double>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<UE::Geometry::FIndex2i_const_,int><TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>_&,TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>_> @ 1494dc310

TArrayView<UE::Geometry::FIndex2i_const_,int> * __thiscall
TArrayView<UE::Geometry::FIndex2i_const_,int>::
TArrayView<UE::Geometry::FIndex2i_const_,int><TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>_&,TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>_>
          (TArrayView<UE::Geometry::FIndex2i_const_,int> *this,
          TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::Geometry::FIndex2i_const_,int> *pTVar4;
  
  this->DataPtr = (FIndex2i *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<UE::Geometry::FIndex2i_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

