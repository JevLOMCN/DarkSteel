// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 5

// operator[] @ 14388d4d0

TContactPoint<double> * __thiscall
Chaos::TCArray<Chaos::TContactPoint<double>,4>::operator[]
          (TCArray<Chaos::TContactPoint<double>,4> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TContactPoint<double> *pTVar3;
  
  if (this->NumElements <= param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < NumElements",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                       ,0x60,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TContactPoint<double> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this->Elements + param_1;
}

// Add @ 143898a20

int __thiscall
Chaos::TCArray<Chaos::TContactPoint<double>,4>::Add
          (TCArray<Chaos::TContactPoint<double>,4> *this,TContactPoint<double> *param_1)

{
  undefined1 *puVar1;
  TVector<double,3> *pTVar2;
  code *pcVar3;
  undefined8 uVar4;
  double dVar5;
  TContactPoint<double> *pTVar6;
  EContactPointType EVar7;
  undefined3 uVar8;
  bool bVar9;
  int iVar10;
  
  if (3 < this->NumElements) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumElements < MaxElements",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                       ,0xa9,L"");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      iVar10 = (*pcVar3)();
      return iVar10;
    }
  }
  iVar10 = this->NumElements;
  uVar4 = *(undefined8 *)&param_1->ShapeContactPoints[0].field_0x8;
  *(undefined8 *)this->Elements[iVar10].ShapeContactPoints =
       *(undefined8 *)param_1->ShapeContactPoints;
  *(undefined8 *)&this->Elements[iVar10].ShapeContactPoints[0].field_0x8 = uVar4;
  uVar4 = *(undefined8 *)(param_1->ShapeContactPoints + 1);
  puVar1 = &this->Elements[iVar10].ShapeContactPoints[0].field_0x10;
  *(undefined8 *)puVar1 = *(undefined8 *)&param_1->ShapeContactPoints[0].field_0x10;
  *(undefined8 *)(puVar1 + 8) = uVar4;
  uVar4 = *(undefined8 *)&param_1->ShapeContactPoints[1].field_0x10;
  puVar1 = &this->Elements[iVar10].ShapeContactPoints[1].field_0x8;
  *(undefined8 *)puVar1 = *(undefined8 *)&param_1->ShapeContactPoints[1].field_0x8;
  *(undefined8 *)(puVar1 + 8) = uVar4;
  uVar4 = *(undefined8 *)&(param_1->ShapeContactNormal).field_0x8;
  pTVar2 = &this->Elements[iVar10].ShapeContactNormal;
  *(undefined8 *)pTVar2 = *(undefined8 *)&param_1->ShapeContactNormal;
  *(undefined8 *)&pTVar2->field_0x8 = uVar4;
  dVar5 = param_1->Phi;
  puVar1 = &this->Elements[iVar10].ShapeContactNormal.field_0x10;
  *(undefined8 *)puVar1 = *(undefined8 *)&(param_1->ShapeContactNormal).field_0x10;
  *(double *)(puVar1 + 8) = dVar5;
  EVar7 = param_1->ContactType;
  uVar8 = *(undefined3 *)&param_1->field_0x55;
  pTVar6 = this->Elements + iVar10;
  pTVar6->FaceIndex = param_1->FaceIndex;
  pTVar6->ContactType = EVar7;
  *(undefined3 *)&pTVar6->field_0x55 = uVar8;
  iVar10 = this->NumElements;
  this->NumElements = iVar10 + 1;
  return iVar10;
}

// AddUninitialized @ 14389bcc0

int __thiscall
Chaos::TCArray<Chaos::TContactPoint<double>,4>::AddUninitialized
          (TCArray<Chaos::TContactPoint<double>,4> *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (3 < this->NumElements) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumElements < MaxElements",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                       ,0x9e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = this->NumElements;
  this->NumElements = iVar3 + 1;
  return iVar3;
}

// operator[] @ 143a04fa0

FManifoldPoint * __thiscall
Chaos::TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>::
operator[](TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4> *this,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  FManifoldPoint *pFVar3;
  
  if (this->NumElements <= param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < NumElements",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                       ,0x60,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FManifoldPoint *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this->Elements + param_1;
}

// AddUninitialized @ 143a08110

int __thiscall
Chaos::TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>::
AddUninitialized(TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                 *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (3 < this->NumElements) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumElements < MaxElements",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                       ,0x9e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = this->NumElements;
  this->NumElements = iVar3 + 1;
  return iVar3;
}

