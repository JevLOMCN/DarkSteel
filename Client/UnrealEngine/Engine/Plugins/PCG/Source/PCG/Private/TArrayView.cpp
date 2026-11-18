// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 43

// operator[] @ 14973fab0

FPCGDataDesc * __thiscall
TArrayView<FPCGDataDesc_const_,int>::operator[]
          (TArrayView<FPCGDataDesc_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPCGDataDesc *pFVar4;
  
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
      pFVar4 = (FPCGDataDesc *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// TArrayView<int,int><TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_&,TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_> @ 14978eab0

TArrayView<int,int> * __thiscall
TArrayView<int,int>::
TArrayView<int,int><TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_&,TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
          (TArrayView<int,int> *this,
          TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *param_1)

{
  int iVar1;
  ForElementType<int> FVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<int,int> *pTVar5;
  ForElementType<int> FVar6;
  
  FVar2 = (param_1->AllocatorInstance).SecondaryData;
  FVar6 = (ForElementType<int>)param_1;
  if (FVar2 != (ForElementType<int>)0x0) {
    FVar6 = FVar2;
  }
  this->DataPtr = (int *)FVar6;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<int,int> *)(*pcVar3)();
      return pTVar5;
    }
    this->ArrayNum = iVar1;
    return this;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<UE::Math::TQuat<double>_const_,int><TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_> @ 14978eb30

TArrayView<UE::Math::TQuat<double>_const_,int> * __thiscall
TArrayView<UE::Math::TQuat<double>_const_,int>::
TArrayView<UE::Math::TQuat<double>_const_,int><TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
          (TArrayView<UE::Math::TQuat<double>_const_,int> *this,
          TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::Math::TQuat<double>_const_,int> *pTVar4;
  
  this->DataPtr = (TQuat<double> *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<UE::Math::TQuat<double>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<UE::Math::TVector4<double>_const_,int><TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_> @ 14978eba0

TArrayView<UE::Math::TVector4<double>_const_,int> * __thiscall
TArrayView<UE::Math::TVector4<double>_const_,int>::
TArrayView<UE::Math::TVector4<double>_const_,int><TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
          (TArrayView<UE::Math::TVector4<double>_const_,int> *this,
          TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::Math::TVector4<double>_const_,int> *pTVar4;
  
  this->DataPtr = (TVector4<double> *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<UE::Math::TVector4<double>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<FPCGDataTypeIdentifier_const_,int><TArray<FPCGDataTypeIdentifier,TSizedDefaultAllocator<32>_>_const_&,TArray<FPCGDataTypeIdentifier,TSizedDefaultAllocator<32>_>_> @ 14978eda0

TArrayView<FPCGDataTypeIdentifier_const_,int> * __thiscall
TArrayView<FPCGDataTypeIdentifier_const_,int>::
TArrayView<FPCGDataTypeIdentifier_const_,int><TArray<FPCGDataTypeIdentifier,TSizedDefaultAllocator<32>_>_const_&,TArray<FPCGDataTypeIdentifier,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FPCGDataTypeIdentifier_const_,int> *this,
          TArray<FPCGDataTypeIdentifier,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FPCGDataTypeIdentifier_const_,int> *pTVar4;
  
  this->DataPtr = (FPCGDataTypeIdentifier *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<FPCGDataTypeIdentifier_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 1497e38f0

TQuat<double> * __thiscall
TArrayView<UE::Math::TQuat<double>_const_,int>::operator[]
          (TArrayView<UE::Math::TQuat<double>_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TQuat<double> *pTVar4;
  
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
      pTVar4 = (TQuat<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 1497e3970

TRotator<double> * __thiscall
TArrayView<UE::Math::TRotator<double>_const_,int>::operator[]
          (TArrayView<UE::Math::TRotator<double>_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TRotator<double> *pTVar4;
  
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
      pTVar4 = (TRotator<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 1497e39f0

TVector4<double> * __thiscall
TArrayView<UE::Math::TVector4<double>_const_,int>::operator[]
          (TArrayView<UE::Math::TVector4<double>_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector4<double> *pTVar4;
  
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
      pTVar4 = (TVector4<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 1497e3a70

bool * __thiscall
TArrayView<bool_const_,int>::operator[](TArrayView<bool_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  bool *pbVar4;
  
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
      pbVar4 = (bool *)(*pcVar1)();
      return pbVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 149893260

double * __thiscall TArrayView<double,int>::operator[](TArrayView<double,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  double *pdVar4;
  
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
      pdVar4 = (double *)(*pcVar1)();
      return pdVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 1498932e0

TQuat<double> * __thiscall
TArrayView<UE::Math::TQuat<double>,int>::operator[]
          (TArrayView<UE::Math::TQuat<double>,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TQuat<double> *pTVar4;
  
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
      pTVar4 = (TQuat<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 149893360

TTransform<double> * __thiscall
TArrayView<UE::Math::TTransform<double>,int>::operator[]
          (TArrayView<UE::Math::TTransform<double>,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TTransform<double> *pTVar4;
  
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
      pTVar4 = (TTransform<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 1498933e0

TVector2<double> * __thiscall
TArrayView<UE::Math::TVector2<double>,int>::operator[]
          (TArrayView<UE::Math::TVector2<double>,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector2<double> *pTVar4;
  
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
      pTVar4 = (TVector2<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 149893460

long64 * __thiscall TArrayView<__int64,int>::operator[](TArrayView<__int64,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  long64 *plVar4;
  
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
      plVar4 = (long64 *)(*pcVar1)();
      return plVar4;
    }
  }
  return this->DataPtr + param_1;
}

// TArrayView<int,int><TArray<int,TSizedDefaultAllocator<32>_>_&,TArray<int,TSizedDefaultAllocator<32>_>_> @ 149904750

TArrayView<int,int> * __thiscall
TArrayView<int,int>::
TArrayView<int,int><TArray<int,TSizedDefaultAllocator<32>_>_&,TArray<int,TSizedDefaultAllocator<32>_>_>
          (TArrayView<int,int> *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<int,int> *pTVar4;
  
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
    pTVar4 = (TArrayView<int,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<double,int><TArray<double,TSizedDefaultAllocator<32>_>_&,TArray<double,TSizedDefaultAllocator<32>_>_> @ 1499047c0

TArrayView<double,int> * __thiscall
TArrayView<double,int>::
TArrayView<double,int><TArray<double,TSizedDefaultAllocator<32>_>_&,TArray<double,TSizedDefaultAllocator<32>_>_>
          (TArrayView<double,int> *this,TArray<double,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<double,int> *pTVar4;
  
  this->DataPtr = (double *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<double,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<UE::Math::TQuat<double>,int><TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_> @ 149904830

TArrayView<UE::Math::TQuat<double>,int> * __thiscall
TArrayView<UE::Math::TQuat<double>,int>::
TArrayView<UE::Math::TQuat<double>,int><TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
          (TArrayView<UE::Math::TQuat<double>,int> *this,
          TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::Math::TQuat<double>,int> *pTVar4;
  
  this->DataPtr = (TQuat<double> *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<UE::Math::TQuat<double>,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<UE::Math::TRotator<double>,int><TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_> @ 1499048a0

TArrayView<UE::Math::TRotator<double>,int> * __thiscall
TArrayView<UE::Math::TRotator<double>,int>::
TArrayView<UE::Math::TRotator<double>,int><TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
          (TArrayView<UE::Math::TRotator<double>,int> *this,
          TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::Math::TRotator<double>,int> *pTVar4;
  
  this->DataPtr = (TRotator<double> *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<UE::Math::TRotator<double>,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<UE::Math::TTransform<double>,int><TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_> @ 149904910

TArrayView<UE::Math::TTransform<double>,int> * __thiscall
TArrayView<UE::Math::TTransform<double>,int>::
TArrayView<UE::Math::TTransform<double>,int><TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
          (TArrayView<UE::Math::TTransform<double>,int> *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::Math::TTransform<double>,int> *pTVar4;
  
  this->DataPtr = (TTransform<double> *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<UE::Math::TTransform<double>,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<UE::Math::TVector2<double>,int><TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_> @ 149904980

TArrayView<UE::Math::TVector2<double>,int> * __thiscall
TArrayView<UE::Math::TVector2<double>,int>::
TArrayView<UE::Math::TVector2<double>,int><TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
          (TArrayView<UE::Math::TVector2<double>,int> *this,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::Math::TVector2<double>,int> *pTVar4;
  
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
    pTVar4 = (TArrayView<UE::Math::TVector2<double>,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<UE::Math::TVector4<double>,int><TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_> @ 1499049f0

TArrayView<UE::Math::TVector4<double>,int> * __thiscall
TArrayView<UE::Math::TVector4<double>,int>::
TArrayView<UE::Math::TVector4<double>,int><TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
          (TArrayView<UE::Math::TVector4<double>,int> *this,
          TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::Math::TVector4<double>,int> *pTVar4;
  
  this->DataPtr = (TVector4<double> *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<UE::Math::TVector4<double>,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<UE::Math::TVector<double>,int><TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_> @ 149904a60

TArrayView<UE::Math::TVector<double>,int> * __thiscall
TArrayView<UE::Math::TVector<double>,int>::
TArrayView<UE::Math::TVector<double>,int><TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
          (TArrayView<UE::Math::TVector<double>,int> *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::Math::TVector<double>,int> *pTVar4;
  
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
    pTVar4 = (TArrayView<UE::Math::TVector<double>,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<FSoftClassPath,int><TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_&,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_> @ 149904ad0

TArrayView<FSoftClassPath,int> * __thiscall
TArrayView<FSoftClassPath,int>::
TArrayView<FSoftClassPath,int><TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_&,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FSoftClassPath,int> *this,
          TArray<FSoftClassPath,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FSoftClassPath,int> *pTVar4;
  
  this->DataPtr = (FSoftClassPath *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<FSoftClassPath,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<FSoftObjectPath,int><TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_&,TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_> @ 149904b40

TArrayView<FSoftObjectPath,int> * __thiscall
TArrayView<FSoftObjectPath,int>::
TArrayView<FSoftObjectPath,int><TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_&,TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FSoftObjectPath,int> *this,
          TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FSoftObjectPath,int> *pTVar4;
  
  this->DataPtr = (FSoftObjectPath *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<FSoftObjectPath,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<FName,int><TArray<FName,TSizedDefaultAllocator<32>_>_&,TArray<FName,TSizedDefaultAllocator<32>_>_> @ 149904bb0

TArrayView<FName,int> * __thiscall
TArrayView<FName,int>::
TArrayView<FName,int><TArray<FName,TSizedDefaultAllocator<32>_>_&,TArray<FName,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FName,int> *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FName,int> *pTVar4;
  
  this->DataPtr = (FName *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<FName,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<FString,int><TArray<FString,TSizedDefaultAllocator<32>_>_&,TArray<FString,TSizedDefaultAllocator<32>_>_> @ 149904c20

TArrayView<FString,int> * __thiscall
TArrayView<FString,int>::
TArrayView<FString,int><TArray<FString,TSizedDefaultAllocator<32>_>_&,TArray<FString,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FString,int> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FString,int> *pTVar4;
  
  this->DataPtr = (FString *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<FString,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<__int64,int><TArray<__int64,TSizedDefaultAllocator<32>_>_&,TArray<__int64,TSizedDefaultAllocator<32>_>_> @ 149904c90

TArrayView<__int64,int> * __thiscall
TArrayView<__int64,int>::
TArrayView<__int64,int><TArray<__int64,TSizedDefaultAllocator<32>_>_&,TArray<__int64,TSizedDefaultAllocator<32>_>_>
          (TArrayView<__int64,int> *this,TArray<__int64,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<__int64,int> *pTVar4;
  
  this->DataPtr = (long64 *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<__int64,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<bool,int><TArray<bool,TSizedDefaultAllocator<32>_>_&,TArray<bool,TSizedDefaultAllocator<32>_>_> @ 149904d00

TArrayView<bool,int> * __thiscall
TArrayView<bool,int>::
TArrayView<bool,int><TArray<bool,TSizedDefaultAllocator<32>_>_&,TArray<bool,TSizedDefaultAllocator<32>_>_>
          (TArrayView<bool,int> *this,TArray<bool,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<bool,int> *pTVar4;
  
  this->DataPtr = (bool *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<bool,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 1499c76d0

IPCGAttributeAccessor ** __thiscall
TArrayView<IPCGAttributeAccessor_const_*_const,int>::operator[]
          (TArrayView<IPCGAttributeAccessor_const_*_const,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  IPCGAttributeAccessor **ppIVar4;
  
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
      ppIVar4 = (IPCGAttributeAccessor **)(*pcVar1)();
      return ppIVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 1499c7750

IPCGAttributeAccessorKeys ** __thiscall
TArrayView<IPCGAttributeAccessorKeys_const_*_const,int>::operator[]
          (TArrayView<IPCGAttributeAccessorKeys_const_*_const,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  IPCGAttributeAccessorKeys **ppIVar4;
  
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
      ppIVar4 = (IPCGAttributeAccessorKeys **)(*pcVar1)();
      return ppIVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 149ad4bc0

FSoftClassPath * __thiscall
TArrayView<FSoftClassPath_const_,int>::operator[]
          (TArrayView<FSoftClassPath_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSoftClassPath *pFVar4;
  
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
      pFVar4 = (FSoftClassPath *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 149ad4c40

FSoftObjectPath * __thiscall
TArrayView<FSoftObjectPath_const_,int>::operator[]
          (TArrayView<FSoftObjectPath_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSoftObjectPath *pFVar4;
  
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
      pFVar4 = (FSoftObjectPath *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 149d35950

TTuple<int,float> * __thiscall
TArrayView<TTuple<int,float>_const_,int>::operator[]
          (TArrayView<TTuple<int,float>_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TTuple<int,float> *pTVar4;
  
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
      pTVar4 = (TTuple<int,float> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 149d359d0

TGeneralPolygon2<double> * __thiscall
TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int>::operator[]
          (TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TGeneralPolygon2<double> *pTVar4;
  
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
      pTVar4 = (TGeneralPolygon2<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 149e37da0

FPCGAttributePropertySelector * __thiscall
TArrayView<FPCGAttributePropertySelector_const_,int>::operator[]
          (TArrayView<FPCGAttributePropertySelector_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPCGAttributePropertySelector *pFVar4;
  
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
      pFVar4 = (FPCGAttributePropertySelector *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 149e37e20

long64 ** __thiscall
TArrayView<__int64_*,int>::operator[](TArrayView<__int64_*,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  long64 **pplVar4;
  
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
      pplVar4 = (long64 **)(*pcVar1)();
      return pplVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 149e37ea0

long64 ** __thiscall
TArrayView<__int64_const_*,int>::operator[](TArrayView<__int64_const_*,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  long64 **pplVar4;
  
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
      pplVar4 = (long64 **)(*pcVar1)();
      return pplVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 149e37f20

TRotator<double> * __thiscall
TArrayView<UE::Math::TRotator<double>,int>::operator[]
          (TArrayView<UE::Math::TRotator<double>,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TRotator<double> *pTVar4;
  
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
      pTVar4 = (TRotator<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 149e37fa0

TVector4<double> * __thiscall
TArrayView<UE::Math::TVector4<double>,int>::operator[]
          (TArrayView<UE::Math::TVector4<double>,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector4<double> *pTVar4;
  
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
      pTVar4 = (TVector4<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 149e38020

FPCGPoint * __thiscall
TArrayView<FPCGPoint,int>::operator[](TArrayView<FPCGPoint,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPCGPoint *pFVar4;
  
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
      pFVar4 = (FPCGPoint *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 149e380a0

FSoftClassPath * __thiscall
TArrayView<FSoftClassPath,int>::operator[](TArrayView<FSoftClassPath,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSoftClassPath *pFVar4;
  
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
      pFVar4 = (FSoftClassPath *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 149e38120

FSoftObjectPath * __thiscall
TArrayView<FSoftObjectPath,int>::operator[](TArrayView<FSoftObjectPath,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSoftObjectPath *pFVar4;
  
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
      pFVar4 = (FSoftObjectPath *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 149f36010

FPCGPoint * __thiscall
TArrayView<FPCGPoint_const_,int>::operator[](TArrayView<FPCGPoint_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPCGPoint *pFVar4;
  
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
      pFVar4 = (FPCGPoint *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

