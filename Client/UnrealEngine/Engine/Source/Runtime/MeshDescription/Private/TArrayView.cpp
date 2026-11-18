// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshDescription
// Functions: 7

// TArrayView<FVertexInstanceID_const_,int><TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>_&,TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>_> @ 143634d50

TArrayView<FVertexInstanceID_const_,int> * __thiscall
TArrayView<FVertexInstanceID_const_,int>::
TArrayView<FVertexInstanceID_const_,int><TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>_&,TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FVertexInstanceID_const_,int> *this,
          TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FVertexInstanceID_const_,int> *pTVar4;
  
  this->DataPtr = (FVertexInstanceID *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<FVertexInstanceID_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<FVertexInstanceID_const_,int><TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>_const_&,TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>_> @ 143634dc0

TArrayView<FVertexInstanceID_const_,int> * __thiscall
TArrayView<FVertexInstanceID_const_,int>::
TArrayView<FVertexInstanceID_const_,int><TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>_const_&,TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FVertexInstanceID_const_,int> *this,
          TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FVertexInstanceID_const_,int> *pTVar4;
  
  this->DataPtr = (FVertexInstanceID *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<FVertexInstanceID_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 14365dd80

FTriangleID * __thiscall
TArrayView<FTriangleID_const_,int>::operator[](TArrayView<FTriangleID_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FTriangleID *pFVar4;
  
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
      pFVar4 = (FTriangleID *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14365de00

FVertexInstanceID * __thiscall
TArrayView<FVertexInstanceID_const_,int>::operator[]
          (TArrayView<FVertexInstanceID_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FVertexInstanceID *pFVar4;
  
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
      pFVar4 = (FVertexInstanceID *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14365de80

TTuple<int,int> * __thiscall
TArrayView<TTuple<int,int>,int>::operator[](TArrayView<TTuple<int,int>,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TTuple<int,int> *pTVar4;
  
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
      pTVar4 = (TTuple<int,int> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14365df00

FVertexID * __thiscall
TArrayView<FVertexID,int>::operator[](TArrayView<FVertexID,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FVertexID *pFVar4;
  
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
      pFVar4 = (FVertexID *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14365df80

FVertexInstanceID * __thiscall
TArrayView<FVertexInstanceID,int>::operator[](TArrayView<FVertexInstanceID,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FVertexInstanceID *pFVar4;
  
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
      pFVar4 = (FVertexInstanceID *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

