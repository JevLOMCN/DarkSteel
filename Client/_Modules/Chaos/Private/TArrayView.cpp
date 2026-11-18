// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 32

// TArrayView<unsigned_char_const_,int><TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> @ 143705900

TArrayView<unsigned_char_const_,int> * __thiscall
TArrayView<unsigned_char_const_,int>::
TArrayView<unsigned_char_const_,int><TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
          (TArrayView<unsigned_char_const_,int> *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_char_const_,int> *pTVar4;
  
  this->DataPtr = (uchar *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<unsigned_char_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int><TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_&,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_> @ 1437c18b0

TArrayView<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int> * __thiscall
TArrayView<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int>::
TArrayView<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int><TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_&,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
          (TArrayView<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int> *this,
          TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int> *pTVar4;
  
  this->DataPtr = (TPBDRigidParticleHandleImp<double,3,1> **)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int><TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_const_&,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_> @ 1437c1920

TArrayView<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int> * __thiscall
TArrayView<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int>::
TArrayView<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int><TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_const_&,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
          (TArrayView<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int> *this,
          TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int> *pTVar4;
  
  this->DataPtr = (TPBDRigidParticleHandleImp<double,3,1> **)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<Chaos::TVector<float,3>_const_,int><TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_const_&,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_> @ 1437c1990

TArrayView<Chaos::TVector<float,3>_const_,int> * __thiscall
TArrayView<Chaos::TVector<float,3>_const_,int>::
TArrayView<Chaos::TVector<float,3>_const_,int><TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_const_&,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_>
          (TArrayView<Chaos::TVector<float,3>_const_,int> *this,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar4;
  
  this->DataPtr = (TVector<float,3> *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<float,int><float> @ 1437c1a00

TArrayView<float,int> * __thiscall
TArrayView<float,int>::TArrayView<float,int><float>
          (TArrayView<float,int> *this,float *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float,int> *pTVar3;
  
  this->DataPtr = param_1;
  this->ArrayNum = param_2;
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int><TArray<int,TSizedDefaultAllocator<32>_>_> @ 1437c1b00

TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> * __thiscall
TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int>::
TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int><TArray<int,TSizedDefaultAllocator<32>_>_>
          (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *pTVar3;
  
  this->DataPtr = param_1;
  this->ArrayNum = param_2;
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int><TArray<float,TSizedDefaultAllocator<32>_>_> @ 1437c1b50

TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> * __thiscall
TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int>::
TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int><TArray<float,TSizedDefaultAllocator<32>_>_>
          (TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *this,
          TArray<float,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *pTVar3;
  
  this->DataPtr = param_1;
  this->ArrayNum = param_2;
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// operator[] @ 14388d1d0

uchar * __thiscall
TArrayView<unsigned_char_const_,int>::operator[]
          (TArrayView<unsigned_char_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uchar *puVar4;
  
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
      puVar4 = (uchar *)(*pcVar1)();
      return puVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14388d250

TVector<float> * __thiscall
TArrayView<UE::Math::TVector<float>,int>::operator[]
          (TArrayView<UE::Math::TVector<float>,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<float> *pTVar4;
  
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
      pTVar4 = (TVector<float> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14388d2d0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int>::operator[]
          (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  
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
      pTVar4 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14388d350

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int>::operator[]
          (TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  
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
      pTVar4 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14388d3d0

FString * __thiscall TArrayView<FString,int>::operator[](TArrayView<FString,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  
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
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14388d450

ECollectionPropertyFlags * __thiscall
TArrayView<enum_Chaos::Softs::ECollectionPropertyFlags,int>::operator[](void *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ECollectionPropertyFlags *pEVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)((longlong)this + 8)) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pEVar4 = (ECollectionPropertyFlags *)(*pcVar1)();
      return pEVar4;
    }
  }
  return (ECollectionPropertyFlags *)((longlong)param_1 + *(longlong *)this);
}

// operator[] @ 1439c0f90

TVector<double,3> * __thiscall
TArrayView<Chaos::TVector<double,3>,int>::operator[]
          (TArrayView<Chaos::TVector<double,3>,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<double,3> *pTVar4;
  
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
      pTVar4 = (TVector<double,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 143a04ea0

TPBDCollisionSolverManifoldPointsSimd<4> * __thiscall
TArrayView<Chaos::Private::TPBDCollisionSolverManifoldPointsSimd<4>,int>::operator[]
          (TArrayView<Chaos::Private::TPBDCollisionSolverManifoldPointsSimd<4>,int> *this,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TPBDCollisionSolverManifoldPointsSimd<4> *pTVar4;
  
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
      pTVar4 = (TPBDCollisionSolverManifoldPointsSimd<4> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 143a04f20

TPBDCollisionSolverSimd<4> * __thiscall
TArrayView<Chaos::Private::TPBDCollisionSolverSimd<4>,int>::operator[]
          (TArrayView<Chaos::Private::TPBDCollisionSolverSimd<4>,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TPBDCollisionSolverSimd<4> *pTVar4;
  
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
      pTVar4 = (TPBDCollisionSolverSimd<4> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 143a3b2c0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int>::operator[]
          (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  
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
      pTVar4 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 143a3b340

TVector<float,3> * __thiscall
TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
          (TArrayView<Chaos::TVector<float,3>_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<float,3> *pTVar4;
  
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
      pTVar4 = (TVector<float,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 143a3b3c0

FPBDCollisionConstraint ** __thiscall
TArrayView<Chaos::FPBDCollisionConstraint_*_const,int>::operator[]
          (TArrayView<Chaos::FPBDCollisionConstraint_*_const,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPBDCollisionConstraint **ppFVar4;
  
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
      ppFVar4 = (FPBDCollisionConstraint **)(*pcVar1)();
      return ppFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 143b58460

TRefCountPtr<Chaos::FImplicitObject> * __thiscall
TArrayView<TRefCountPtr<Chaos::FImplicitObject>,int>::operator[]
          (TArrayView<TRefCountPtr<Chaos::FImplicitObject>,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TRefCountPtr<Chaos::FImplicitObject> *pTVar4;
  
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
      pTVar4 = (TRefCountPtr<Chaos::FImplicitObject> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// TArrayView<Chaos::TVector<double,3>_const_,int><Chaos::TArrayCollectionArray<Chaos::TVector<double,3>_>_const_&,Chaos::TArrayCollectionArray<Chaos::TVector<double,3>_>_> @ 143bb2950

TArrayView<Chaos::TVector<double,3>_const_,int> * __thiscall
TArrayView<Chaos::TVector<double,3>_const_,int>::
TArrayView<Chaos::TVector<double,3>_const_,int><Chaos::TArrayCollectionArray<Chaos::TVector<double,3>_>_const_&,Chaos::TArrayCollectionArray<Chaos::TVector<double,3>_>_>
          (TArrayView<Chaos::TVector<double,3>_const_,int> *this,
          TArrayCollectionArray<Chaos::TVector<double,3>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<Chaos::TVector<double,3>_const_,int> *pTVar4;
  
  this->DataPtr = *(TVector<double,3> **)&param_1->field_0x8;
  iVar1 = *(int *)&param_1->field_0x10;
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
    pTVar4 = (TArrayView<Chaos::TVector<double,3>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 143c465b0

FGIAColor * __thiscall
TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>::operator[]
          (TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int> *this,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FGIAColor *pFVar4;
  
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
      pFVar4 = (FGIAColor *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 143c46630

TVector<int,3> * __thiscall
TArrayView<Chaos::TVector<int,3>_const_,int>::operator[]
          (TArrayView<Chaos::TVector<int,3>_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<int,3> *pTVar4;
  
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
      pTVar4 = (TVector<int,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 143c89600

TTuple<int,int,float> * __thiscall
TArrayView<TTuple<int,int,float>_const_,int>::operator[]
          (TArrayView<TTuple<int,int,float>_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TTuple<int,int,float> *pTVar4;
  
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
      pTVar4 = (TTuple<int,int,float> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 143d92c50

EFloodFillRegion * __thiscall
TArrayView<enum_Chaos::Softs::GIA::FloodFill::EFloodFillRegion,int>::operator[]
          (void *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  EFloodFillRegion *pEVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)((longlong)this + 8)) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pEVar4 = (EFloodFillRegion *)(*pcVar1)();
      return pEVar4;
    }
  }
  return (EFloodFillRegion *)((longlong)param_1 + *(longlong *)this);
}

// operator[] @ 143e00110

TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::ESolverMode)>
* __thiscall
TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode)>_const_,int>
::operator[](void *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::ESolverMode)>
  *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)((longlong)this + 8)) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::ESolverMode)>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::ESolverMode)>
          *)((longlong)param_1 * 0x30 + *(longlong *)this);
}

// operator[] @ 143e00190

TVector<double,3> * __thiscall
TArrayView<Chaos::TVector<double,3>_const_,int>::operator[]
          (TArrayView<Chaos::TVector<double,3>_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<double,3> *pTVar4;
  
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
      pTVar4 = (TVector<double,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// TArrayView<Chaos::TVector<int,2>_const_,int><TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>_&,TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>_> @ 143ee6da0

TArrayView<Chaos::TVector<int,2>_const_,int> * __thiscall
TArrayView<Chaos::TVector<int,2>_const_,int>::
TArrayView<Chaos::TVector<int,2>_const_,int><TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>_&,TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>_>
          (TArrayView<Chaos::TVector<int,2>_const_,int> *this,
          TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<Chaos::TVector<int,2>_const_,int> *pTVar4;
  
  this->DataPtr = (TVector<int,2> *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<Chaos::TVector<int,2>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<Chaos::TVector<int,3>_const_,int><TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>_&,TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>_> @ 143ee6e10

TArrayView<Chaos::TVector<int,3>_const_,int> * __thiscall
TArrayView<Chaos::TVector<int,3>_const_,int>::
TArrayView<Chaos::TVector<int,3>_const_,int><TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>_&,TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>_>
          (TArrayView<Chaos::TVector<int,3>_const_,int> *this,
          TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<Chaos::TVector<int,3>_const_,int> *pTVar4;
  
  this->DataPtr = (TVector<int,3> *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<Chaos::TVector<int,3>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 143f162d0

TVector<int,2> * __thiscall
TArrayView<Chaos::TVector<int,2>_const_,int>::operator[]
          (TArrayView<Chaos::TVector<int,2>_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<int,2> *pTVar4;
  
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
      pTVar4 = (TVector<int,2> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 143f4c940

IPhysicsProxyBase ** __thiscall
TArrayView<IPhysicsProxyBase_const_*,int>::operator[]
          (TArrayView<IPhysicsProxyBase_const_*,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  IPhysicsProxyBase **ppIVar4;
  
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
      ppIVar4 = (IPhysicsProxyBase **)(*pcVar1)();
      return ppIVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 143f8e520

TIntVector3<int> * __thiscall
TArrayView<UE::Math::TIntVector3<int>,int>::operator[]
          (TArrayView<UE::Math::TIntVector3<int>,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TIntVector3<int> *pTVar4;
  
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
      pTVar4 = (TIntVector3<int> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

