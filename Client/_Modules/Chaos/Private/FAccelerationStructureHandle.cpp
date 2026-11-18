// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 11

// ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticle<double,3>_> @ 14370cf60

void __cdecl
Chaos::FAccelerationStructureHandle::
ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticle<double,3>_>
          (TGeometryParticle<double,3> *param_1,FCollisionFilterData *param_2)

{
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  FCollisionFilterData *pFVar5;
  FCollisionData *this;
  uint uVar6;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar7;
  undefined1 local_res8 [8];
  
  FVar7 = (param_1->MShapesArray).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->MShapesArray).ArrayNum;
  if (FVar7 == (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                )0x0) {
    FVar7 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
             )&param_1->MShapesArray;
  }
  FVar1 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
           )((longlong)FVar7 + (longlong)iVar2 * 8);
  while( true ) {
    if ((param_1->MShapesArray).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar7 == FVar1) break;
    lVar3 = *(longlong *)FVar7;
    uVar6 = *(uint *)(lVar3 + 8) & 3;
    if (uVar6 == 0) {
      bVar4 = *(byte *)(lVar3 + 0x79);
    }
    else {
      bVar4 = *(byte *)(lVar3 + 0x71);
    }
    if ((bVar4 >> 1 & 1) != 0) {
      if (uVar6 == 0) {
        this = (FCollisionData *)(lVar3 + 0x50);
      }
      else {
        this = (FCollisionData *)(lVar3 + 0x48);
      }
      pFVar5 = FCollisionData::GetQueryData(this);
      param_2->Word0 = param_2->Word0 | pFVar5->Word0;
      param_2->Word1 = param_2->Word1 | pFVar5->Word1;
      param_2->Word2 = param_2->Word2 | pFVar5->Word2;
      param_2->Word3 = param_2->Word3 | pFVar5->Word3;
    }
    FVar7 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
             )((longlong)FVar7 + 8);
  }
  return;
}

// ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticle<double,3>_> @ 14370d010

void __cdecl
Chaos::FAccelerationStructureHandle::
ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticle<double,3>_>
          (TGeometryParticle<double,3> *param_1,FCollisionFilterData *param_2)

{
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar1;
  int iVar2;
  longlong lVar3;
  FCollisionFilterData *pFVar4;
  byte bVar5;
  byte *pbVar6;
  FCollisionData *this;
  uint uVar7;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar8;
  undefined1 local_res8 [8];
  
  param_2->Word2 = 0;
  FVar8 = (param_1->MShapesArray).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->MShapesArray).ArrayNum;
  if (FVar8 == (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                )0x0) {
    FVar8 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
             )&param_1->MShapesArray;
  }
  FVar1 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
           )((longlong)FVar8 + (longlong)iVar2 * 8);
  do {
    if ((param_1->MShapesArray).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar8 == FVar1) {
      return;
    }
    lVar3 = *(longlong *)FVar8;
    pbVar6 = (byte *)(lVar3 + 0x79);
    uVar7 = *(uint *)(lVar3 + 8) & 3;
    if (uVar7 != 0) {
      pbVar6 = (byte *)(lVar3 + 0x71);
    }
    if ((*pbVar6 & 1) == 0) {
      if (uVar7 == 0) {
        bVar5 = *(byte *)(lVar3 + 0x79);
      }
      else {
        bVar5 = *(byte *)(lVar3 + 0x71);
      }
      if ((bVar5 >> 2 & 1) != 0) goto LAB_14370d092;
    }
    else {
LAB_14370d092:
      this = (FCollisionData *)(lVar3 + 0x50);
      if (uVar7 != 0) {
        this = (FCollisionData *)(lVar3 + 0x48);
      }
      pFVar4 = FCollisionData::GetSimData(this);
      uVar7 = pFVar4->Word3;
      param_2->Word0 = param_2->Word0 | pFVar4->Word0;
      param_2->Word1 = param_2->Word1 | pFVar4->Word1;
      param_2->Word2 = param_2->Word2 | 1 << ((byte)(uVar7 >> 0x15) & 0x1f);
      param_2->Word3 = param_2->Word3 | pFVar4->Word3;
    }
    FVar8 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
             )((longlong)FVar8 + 8);
  } while( true );
}

// UpdatePrePreFilter<Chaos::TGeometryParticle<double,3>_> @ 143734500

void __thiscall
Chaos::FAccelerationStructureHandle::UpdatePrePreFilter<Chaos::TGeometryParticle<double,3>_>
          (FAccelerationStructureHandle *this,TGeometryParticle<double,3> *param_1)

{
  ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticle<double,3>_>
            (param_1,&this->UnionQueryFilterData);
  ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticle<double,3>_>
            (param_1,&this->UnionSimFilterData);
  this->bCanPrePreFilter = true;
  return;
}

// FAccelerationStructureHandle<1> @ 1437c17e0

FAccelerationStructureHandle * __thiscall
Chaos::FAccelerationStructureHandle::FAccelerationStructureHandle<1>
          (FAccelerationStructureHandle *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TGeometryParticle<double,3> **ppTVar4;
  FUniqueIdx *pFVar5;
  FAccelerationStructureHandle *pFVar6;
  
  ppTVar4 = TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                      ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                       (int)param_1->_padding_);
  this->ExternalGeometryParticle = *ppTVar4;
  this->GeometryParticleHandle = param_1;
  pFVar5 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                     ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                      (int)param_1->_padding_);
  (this->CachedUniqueIdx).Idx = pFVar5->Idx;
  iVar1 = (this->CachedUniqueIdx).Idx;
  (this->UnionQueryFilterData).Word2 = 0;
  (this->UnionQueryFilterData).Word3 = 0;
  (this->UnionQueryFilterData).Word0 = 0;
  (this->UnionQueryFilterData).Word1 = 0;
  (this->UnionSimFilterData).Word2 = 0;
  (this->UnionSimFilterData).Word3 = 0;
  (this->UnionSimFilterData).Word0 = 0;
  (this->UnionSimFilterData).Word1 = 0;
  this->bCanPrePreFilter = false;
  if (iVar1 == -1) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3133560516564217994>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                       ,0xf76,"CachedUniqueIdx.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FAccelerationStructureHandle *)(*pcVar2)();
      return pFVar6;
    }
  }
  ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
            (param_1,&this->UnionQueryFilterData);
  ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
            (param_1,&this->UnionSimFilterData);
  this->bCanPrePreFilter = true;
  return this;
}

// ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_> @ 1437da030

void __cdecl
Chaos::FAccelerationStructureHandle::
ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
          (TGeometryParticleHandleImp<double,3,1> *param_1,FCollisionFilterData *param_2)

{
  int *piVar1;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar6;
  FCollisionFilterData *pFVar7;
  FCollisionData *this;
  uint uVar8;
  undefined1 local_res8 [8];
  
  FVar6 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)
          TGeometryParticlesImp<double,3,0>::ShapesArray
                    ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,(int)param_1->_padding_
                    );
  iVar3 = *(int *)((longlong)FVar6 + 0x10);
  piVar1 = (int *)((longlong)FVar6 + 0x10);
  if (*(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> *)
       ((longlong)FVar6 + 8) !=
      (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)0x0)
  {
    FVar6 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
              *)((longlong)FVar6 + 8);
  }
  FVar2 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)
          ((longlong)FVar6 + (longlong)iVar3 * 8);
  while( true ) {
    if (*piVar1 != iVar3) {
      `TCheckedPointerIterator<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar6 == FVar2) break;
    lVar4 = *(longlong *)FVar6;
    uVar8 = *(uint *)(lVar4 + 8) & 3;
    if (uVar8 == 0) {
      bVar5 = *(byte *)(lVar4 + 0x79);
    }
    else {
      bVar5 = *(byte *)(lVar4 + 0x71);
    }
    if ((bVar5 >> 1 & 1) != 0) {
      if (uVar8 == 0) {
        this = (FCollisionData *)(lVar4 + 0x50);
      }
      else {
        this = (FCollisionData *)(lVar4 + 0x48);
      }
      pFVar7 = FCollisionData::GetQueryData(this);
      param_2->Word0 = param_2->Word0 | pFVar7->Word0;
      param_2->Word1 = param_2->Word1 | pFVar7->Word1;
      param_2->Word2 = param_2->Word2 | pFVar7->Word2;
      param_2->Word3 = param_2->Word3 | pFVar7->Word3;
    }
    FVar6 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
            )((longlong)FVar6 + 8);
  }
  return;
}

// ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_> @ 1437da0f0

void __cdecl
Chaos::FAccelerationStructureHandle::
ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
          (TGeometryParticleHandleImp<double,3,1> *param_1,FCollisionFilterData *param_2)

{
  int *piVar1;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar2;
  int iVar3;
  longlong lVar4;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar5;
  FCollisionFilterData *pFVar6;
  byte bVar7;
  byte *pbVar8;
  FCollisionData *this;
  uint uVar9;
  undefined1 local_res8 [8];
  
  FVar5 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)
          TGeometryParticlesImp<double,3,0>::ShapesArray
                    ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,(int)param_1->_padding_
                    );
  param_2->Word2 = 0;
  iVar3 = *(int *)((longlong)FVar5 + 0x10);
  piVar1 = (int *)((longlong)FVar5 + 0x10);
  if (*(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> *)
       ((longlong)FVar5 + 8) !=
      (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)0x0)
  {
    FVar5 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
              *)((longlong)FVar5 + 8);
  }
  FVar2 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)
          ((longlong)FVar5 + (longlong)iVar3 * 8);
  do {
    if (*piVar1 != iVar3) {
      `TCheckedPointerIterator<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar5 == FVar2) {
      return;
    }
    lVar4 = *(longlong *)FVar5;
    pbVar8 = (byte *)(lVar4 + 0x79);
    uVar9 = *(uint *)(lVar4 + 8) & 3;
    if (uVar9 != 0) {
      pbVar8 = (byte *)(lVar4 + 0x71);
    }
    if ((*pbVar8 & 1) == 0) {
      if (uVar9 == 0) {
        bVar7 = *(byte *)(lVar4 + 0x79);
      }
      else {
        bVar7 = *(byte *)(lVar4 + 0x71);
      }
      if ((bVar7 >> 2 & 1) != 0) goto LAB_1437da182;
    }
    else {
LAB_1437da182:
      this = (FCollisionData *)(lVar4 + 0x50);
      if (uVar9 != 0) {
        this = (FCollisionData *)(lVar4 + 0x48);
      }
      pFVar6 = FCollisionData::GetSimData(this);
      uVar9 = pFVar6->Word3;
      param_2->Word0 = param_2->Word0 | pFVar6->Word0;
      param_2->Word1 = param_2->Word1 | pFVar6->Word1;
      param_2->Word2 = param_2->Word2 | 1 << ((byte)(uVar9 >> 0x15) & 0x1f);
      param_2->Word3 = param_2->Word3 | pFVar6->Word3;
    }
    FVar5 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
            )((longlong)FVar5 + 8);
  } while( true );
}

// UpdatePrePreFilter<Chaos::TGeometryParticleHandleImp<double,3,1>_> @ 1438887c0

void __thiscall
Chaos::FAccelerationStructureHandle::
UpdatePrePreFilter<Chaos::TGeometryParticleHandleImp<double,3,1>_>
          (FAccelerationStructureHandle *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
            (param_1,&this->UnionQueryFilterData);
  ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
            (param_1,&this->UnionSimFilterData);
  this->bCanPrePreFilter = true;
  return;
}

// FAccelerationStructureHandle<0> @ 143cb1ea0

FAccelerationStructureHandle * __thiscall
Chaos::FAccelerationStructureHandle::FAccelerationStructureHandle<0>
          (FAccelerationStructureHandle *this,TGeometryParticleHandleImp<double,3,0> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TGeometryParticle<double,3> **ppTVar4;
  TGeometryParticleHandleImp<double,3,1> *pTVar5;
  FUniqueIdx *pFVar6;
  FAccelerationStructureHandle *pFVar7;
  
  ppTVar4 = TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                      ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                       (int)param_1->_padding_);
  this->ExternalGeometryParticle = *ppTVar4;
  pTVar5 = TGeometryParticleHandleImp<double,3,0>::Handle(param_1);
  this->GeometryParticleHandle = pTVar5;
  pFVar6 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                     ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                      (int)param_1->_padding_);
  (this->CachedUniqueIdx).Idx = pFVar6->Idx;
  iVar1 = (this->CachedUniqueIdx).Idx;
  (this->UnionQueryFilterData).Word2 = 0;
  (this->UnionQueryFilterData).Word3 = 0;
  (this->UnionQueryFilterData).Word0 = 0;
  (this->UnionQueryFilterData).Word1 = 0;
  (this->UnionSimFilterData).Word2 = 0;
  (this->UnionSimFilterData).Word3 = 0;
  (this->UnionSimFilterData).Word0 = 0;
  (this->UnionSimFilterData).Word1 = 0;
  this->bCanPrePreFilter = false;
  if (iVar1 == -1) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3133560516564217994>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                       ,0xf76,"CachedUniqueIdx.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FAccelerationStructureHandle *)(*pcVar2)();
      return pFVar7;
    }
  }
  ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,0>_>
            (param_1,&this->UnionQueryFilterData);
  ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,0>_>
            (param_1,&this->UnionSimFilterData);
  this->bCanPrePreFilter = true;
  return this;
}

// ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,0>_> @ 143cbe190

void __cdecl
Chaos::FAccelerationStructureHandle::
ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,0>_>
          (TGeometryParticleHandleImp<double,3,0> *param_1,FCollisionFilterData *param_2)

{
  int *piVar1;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar6;
  FCollisionFilterData *pFVar7;
  FCollisionData *this;
  uint uVar8;
  undefined1 local_res8 [8];
  
  FVar6 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)
          TGeometryParticlesImp<double,3,0>::ShapesArray
                    ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,(int)param_1->_padding_
                    );
  iVar3 = *(int *)((longlong)FVar6 + 0x10);
  piVar1 = (int *)((longlong)FVar6 + 0x10);
  if (*(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> *)
       ((longlong)FVar6 + 8) !=
      (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)0x0)
  {
    FVar6 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
              *)((longlong)FVar6 + 8);
  }
  FVar2 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)
          ((longlong)FVar6 + (longlong)iVar3 * 8);
  while( true ) {
    if (*piVar1 != iVar3) {
      `TCheckedPointerIterator<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar6 == FVar2) break;
    lVar4 = *(longlong *)FVar6;
    uVar8 = *(uint *)(lVar4 + 8) & 3;
    if (uVar8 == 0) {
      bVar5 = *(byte *)(lVar4 + 0x79);
    }
    else {
      bVar5 = *(byte *)(lVar4 + 0x71);
    }
    if ((bVar5 >> 1 & 1) != 0) {
      if (uVar8 == 0) {
        this = (FCollisionData *)(lVar4 + 0x50);
      }
      else {
        this = (FCollisionData *)(lVar4 + 0x48);
      }
      pFVar7 = FCollisionData::GetQueryData(this);
      param_2->Word0 = param_2->Word0 | pFVar7->Word0;
      param_2->Word1 = param_2->Word1 | pFVar7->Word1;
      param_2->Word2 = param_2->Word2 | pFVar7->Word2;
      param_2->Word3 = param_2->Word3 | pFVar7->Word3;
    }
    FVar6 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
            )((longlong)FVar6 + 8);
  }
  return;
}

// ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,0>_> @ 143cbe250

void __cdecl
Chaos::FAccelerationStructureHandle::
ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,0>_>
          (TGeometryParticleHandleImp<double,3,0> *param_1,FCollisionFilterData *param_2)

{
  int *piVar1;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar2;
  int iVar3;
  longlong lVar4;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar5;
  FCollisionFilterData *pFVar6;
  byte bVar7;
  byte *pbVar8;
  FCollisionData *this;
  uint uVar9;
  undefined1 local_res8 [8];
  
  FVar5 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)
          TGeometryParticlesImp<double,3,0>::ShapesArray
                    ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,(int)param_1->_padding_
                    );
  param_2->Word2 = 0;
  iVar3 = *(int *)((longlong)FVar5 + 0x10);
  piVar1 = (int *)((longlong)FVar5 + 0x10);
  if (*(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> *)
       ((longlong)FVar5 + 8) !=
      (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)0x0)
  {
    FVar5 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
              *)((longlong)FVar5 + 8);
  }
  FVar2 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)
          ((longlong)FVar5 + (longlong)iVar3 * 8);
  do {
    if (*piVar1 != iVar3) {
      `TCheckedPointerIterator<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar5 == FVar2) {
      return;
    }
    lVar4 = *(longlong *)FVar5;
    pbVar8 = (byte *)(lVar4 + 0x79);
    uVar9 = *(uint *)(lVar4 + 8) & 3;
    if (uVar9 != 0) {
      pbVar8 = (byte *)(lVar4 + 0x71);
    }
    if ((*pbVar8 & 1) == 0) {
      if (uVar9 == 0) {
        bVar7 = *(byte *)(lVar4 + 0x79);
      }
      else {
        bVar7 = *(byte *)(lVar4 + 0x71);
      }
      if ((bVar7 >> 2 & 1) != 0) goto LAB_143cbe2e2;
    }
    else {
LAB_143cbe2e2:
      this = (FCollisionData *)(lVar4 + 0x50);
      if (uVar9 != 0) {
        this = (FCollisionData *)(lVar4 + 0x48);
      }
      pFVar6 = FCollisionData::GetSimData(this);
      uVar9 = pFVar6->Word3;
      param_2->Word0 = param_2->Word0 | pFVar6->Word0;
      param_2->Word1 = param_2->Word1 | pFVar6->Word1;
      param_2->Word2 = param_2->Word2 | 1 << ((byte)(uVar9 >> 0x15) & 0x1f);
      param_2->Word3 = param_2->Word3 | pFVar6->Word3;
    }
    FVar5 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
            )((longlong)FVar5 + 8);
  } while( true );
}

// UpdatePrePreFilter<Chaos::TGeometryParticleHandleImp<double,3,0>_> @ 143cfd700

void __thiscall
Chaos::FAccelerationStructureHandle::
UpdatePrePreFilter<Chaos::TGeometryParticleHandleImp<double,3,0>_>
          (FAccelerationStructureHandle *this,TGeometryParticleHandleImp<double,3,0> *param_1)

{
  ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,0>_>
            (param_1,&this->UnionQueryFilterData);
  ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,0>_>
            (param_1,&this->UnionSimFilterData);
  this->bCanPrePreFilter = true;
  return;
}

