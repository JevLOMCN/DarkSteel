// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 222

// UniqueIdx @ 143704dd0

FUniqueIdx * __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::UniqueIdx
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FUniqueIdx *pFVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MUniqueIdx).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FUniqueIdx *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FUniqueIdx *)(*(longlong *)&(this->MUniqueIdx).field_0x8 + (longlong)param_1 * 4);
}

// HasBounds @ 143794850

bool * __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::HasBounds
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  bool *pbVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MHasBounds).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pbVar4 = (bool *)(*pcVar1)();
      return pbVar4;
    }
  }
  return (bool *)((longlong)param_1 + *(longlong *)&(this->MHasBounds).field_0x8);
}

// ParticleCollisions @ 14379b410

FParticleCollisions * __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::ParticleCollisions
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FParticleCollisions *pFVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MParticleCollisions).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FParticleCollisions *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FParticleCollisions *)
         ((longlong)param_1 * 0x10 + *(longlong *)&(this->MParticleCollisions).field_0x8);
}

// PhysicsProxy @ 14379d860

IPhysicsProxyBase * __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::PhysicsProxy
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  IPhysicsProxyBase *pIVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MPhysicsProxy).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar4 = (IPhysicsProxyBase *)(*pcVar1)();
      return pIVar4;
    }
  }
  return *(IPhysicsProxyBase **)
          (*(longlong *)&(this->MPhysicsProxy).field_0x8 + (longlong)param_1 * 8);
}

// ShapesArray @ 1437b0a60

TArray<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
* __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::ShapesArray
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MShapesArray).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TArray<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *)(*(longlong *)&(this->MShapesArray).field_0x8 + (longlong)param_1 * 0x18);
}

// WorldSpaceInflatedBounds @ 1437c16a0

TAABB<double,3> * __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::WorldSpaceInflatedBounds
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TAABB<double,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MWorldSpaceInflatedBounds).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TAABB<double,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TAABB<double,3> *)
         ((longlong)param_1 * 0x30 + *(longlong *)&(this->MWorldSpaceInflatedBounds).field_0x8);
}

// AddConstraintHandle @ 14389a180

void __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::AddConstraintHandle
          (TGeometryParticlesImp<double,3,0> *this,int *param_1,FConstraintHandle *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForAnyElementType *pFVar5;
  uint uVar6;
  uint uVar7;
  FConstraintHandle *local_res18 [2];
  
  uVar7 = 0;
  if (*param_1 < *(int *)&(this->MParticleConstraints).field_0x10) {
    uVar7 = (uint)~*param_1 >> 0x1f;
  }
  local_res18[0] = param_2;
  if (uVar7 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar7 = *param_1;
  uVar6 = 0;
  if ((int)uVar7 < *(int *)&(this->MParticleConstraints).field_0x10) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar5 = (ForAnyElementType *)
           ((longlong)(int)uVar7 * 0x10 + *(longlong *)&(this->MParticleConstraints).field_0x8);
  if ((pFVar5->Data <= (FScriptContainerElement *)local_res18) &&
     ((FScriptContainerElement *)local_res18 <
      pFVar5->Data + (longlong)*(int *)((longlong)&pFVar5[1].Data + 4) * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)&pFVar5[1].Data;
  piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar5,piVar1);
  }
  *(int *)&pFVar5[1].Data = iVar4 + 1;
  *(FConstraintHandle **)(pFVar5->Data + (longlong)iVar4 * 8) = local_res18[0];
  return;
}

// GTGeometryParticle @ 1438b7550

TGeometryParticle<double,3> ** __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::GTGeometryParticle
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TGeometryParticle<double,3> **ppTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MGeometryParticle).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      ppTVar4 = (TGeometryParticle<double,3> **)(*pcVar1)();
      return ppTVar4;
    }
  }
  return (TGeometryParticle<double,3> **)
         (*(longlong *)&(this->MGeometryParticle).field_0x8 + (longlong)param_1 * 8);
}

// HasCollision @ 1438c1b70

bool * __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::HasCollision
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  bool *pbVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MHasCollision).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pbVar4 = (bool *)(*pcVar1)();
      return pbVar4;
    }
  }
  return (bool *)((longlong)param_1 + *(longlong *)&(this->MHasCollision).field_0x8);
}

// ParticleConstraints @ 1438c4d00

TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::ParticleConstraints
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MParticleConstraints).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_> *)
         ((longlong)param_1 * 0x10 + *(longlong *)&(this->MParticleConstraints).field_0x8);
}

// RemoveConstraintHandle @ 1438cbae0

void __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::RemoveConstraintHandle
          (TGeometryParticlesImp<double,3,0> *this,int *param_1,FConstraintHandle *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  ForAnyElementType *pFVar8;
  
  uVar6 = *param_1;
  uVar5 = 0;
  if ((int)uVar6 < *(int *)&(this->MParticleConstraints).field_0x10) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar8 = (ForAnyElementType *)
           ((longlong)(int)uVar6 * 0x10 + *(longlong *)&(this->MParticleConstraints).field_0x8);
  pFVar1 = pFVar8->Data;
  pFVar7 = pFVar1;
  do {
    if (pFVar7 == pFVar1 + (longlong)*(int *)&pFVar8[1].Data * 8) {
LAB_1438cbc52:
      uVar6 = 0;
      if (*param_1 < *(int *)&(this->MParticleConstraints).field_0x10) {
        uVar6 = (uint)~*param_1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      return;
    }
    if (*(FConstraintHandle **)pFVar7 == param_2) {
      uVar6 = (uint)((longlong)pFVar7 - (longlong)pFVar1 >> 3);
      if (uVar6 != 0xffffffff) {
        uVar5 = 0;
        if ((int)(uVar6 + 1) <= *(int *)&pFVar8[1].Data) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar4 = *(int *)&pFVar8[1].Data + ~uVar6;
        if (1 < iVar4) {
          iVar4 = 1;
        }
        if (iVar4 != 0) {
          memmove(pFVar8->Data + (longlong)(int)uVar6 * 8,
                  pFVar8->Data + (longlong)(*(int *)&pFVar8[1].Data - iVar4) * 8,
                  (longlong)iVar4 << 3);
        }
        *(int *)&pFVar8[1].Data = *(int *)&pFVar8[1].Data + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,pFVar8,*(int *)&pFVar8[1].Data,(int *)((longlong)&pFVar8[1].Data + 4));
      }
      goto LAB_1438cbc52;
    }
    pFVar7 = pFVar7 + 8;
  } while( true );
}

// SpatialIdx @ 1438d60f0

FSpatialAccelerationIdx * __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::SpatialIdx
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSpatialAccelerationIdx *pFVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MSpatialIdx).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSpatialAccelerationIdx *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FSpatialAccelerationIdx *)
         (*(longlong *)&(this->MSpatialIdx).field_0x8 + (longlong)param_1 * 2);
}

// UpdateWorldSpaceState @ 1438dbeb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::UpdateWorldSpaceState
          (TGeometryParticlesImp<double,3,0> *this,int param_1,TRigidTransform<double,3> *param_2,
          TVector<double,3> *param_3)

{
  int *piVar1;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar2;
  double *pdVar3;
  int iVar4;
  FShapeInstanceProxy *this_00;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar23;
  undefined4 uVar24;
  double dVar22;
  double dVar25;
  double dVar26;
  undefined1 local_res10 [16];
  TVector<double,3> *local_res20;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  
  lVar11 = (longlong)param_1;
  local_res20 = param_3;
  FVar9 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)
          ShapesArray(this,param_1);
  iVar4 = *(int *)((longlong)FVar9 + 0x10);
  piVar1 = (int *)((longlong)FVar9 + 0x10);
  if (iVar4 < 1) {
    puVar10 = &local_c8;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
  }
  else {
    puVar10 = &local_f8;
    local_f8 = ___xmm_7fefffffffffffff7fefffffffffffff;
    uStack_f0 = _UNK_150a9e648;
    local_d8 = ___xmm_ffefffffffffffffffefffffffffffff;
    uStack_d0 = _UNK_1508ffb58;
    local_e8 = ___xmm_ffefffffffffffff7fefffffffffffff;
    uStack_e0 = _UNK_150a9e6d8;
  }
  if (*(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> *)
       ((longlong)FVar9 + 8) !=
      (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)0x0)
  {
    FVar9 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
              *)((longlong)FVar9 + 8);
  }
  uVar15 = (undefined4)puVar10[5];
  uVar19 = (undefined4)((ulonglong)puVar10[5] >> 0x20);
  FVar2 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)
          ((longlong)FVar9 + (longlong)iVar4 * 8);
  uVar21 = (undefined4)puVar10[4];
  uVar24 = (undefined4)((ulonglong)puVar10[4] >> 0x20);
  uVar14 = (undefined4)puVar10[3];
  uVar18 = (undefined4)((ulonglong)puVar10[3] >> 0x20);
  uVar13 = (undefined4)puVar10[2];
  uVar17 = (undefined4)((ulonglong)puVar10[2] >> 0x20);
  uVar20 = (undefined4)puVar10[1];
  uVar23 = (undefined4)((ulonglong)puVar10[1] >> 0x20);
  uVar12 = (undefined4)*puVar10;
  uVar16 = (undefined4)((ulonglong)*puVar10 >> 0x20);
  while( true ) {
    if (*piVar1 != iVar4) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (FVar9 == FVar2) break;
    this_00 = *(FShapeInstanceProxy **)FVar9;
    if ((this_00->_padding_ & 3) == 0) {
      FShapeInstanceProxy::UpdateWorldSpaceState(this_00,param_2);
    }
    else {
      FShapeInstance::UpdateWorldSpaceState((FShapeInstance *)this_00,param_2);
    }
    lVar5 = *(longlong *)FVar9;
    FVar9 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
            )((longlong)FVar9 + 8);
    dVar22 = *(double *)(lVar5 + 0x18);
    dVar25 = *(double *)(lVar5 + 0x20);
    if ((double)CONCAT44(uVar16,uVar12) <= dVar22) {
      dVar22 = (double)CONCAT44(uVar16,uVar12);
    }
    if ((double)CONCAT44(uVar23,uVar20) <= dVar25) {
      dVar25 = (double)CONCAT44(uVar23,uVar20);
    }
    uVar12 = SUB84(dVar22,0);
    uVar16 = (undefined4)((ulonglong)dVar22 >> 0x20);
    dVar22 = *(double *)(lVar5 + 0x28);
    uVar20 = SUB84(dVar25,0);
    uVar23 = (undefined4)((ulonglong)dVar25 >> 0x20);
    dVar25 = *(double *)(lVar5 + 0x38);
    if ((double)CONCAT44(uVar17,uVar13) <= dVar22) {
      dVar22 = (double)CONCAT44(uVar17,uVar13);
    }
    if (dVar25 <= (double)CONCAT44(uVar24,uVar21)) {
      dVar25 = (double)CONCAT44(uVar24,uVar21);
    }
    uVar13 = SUB84(dVar22,0);
    uVar17 = (undefined4)((ulonglong)dVar22 >> 0x20);
    dVar22 = *(double *)(lVar5 + 0x30);
    if (dVar22 <= (double)CONCAT44(uVar18,uVar14)) {
      dVar22 = (double)CONCAT44(uVar18,uVar14);
    }
    uVar21 = SUB84(dVar25,0);
    uVar24 = (undefined4)((ulonglong)dVar25 >> 0x20);
    uVar14 = SUB84(dVar22,0);
    uVar18 = (undefined4)((ulonglong)dVar22 >> 0x20);
    dVar22 = *(double *)(lVar5 + 0x40);
    if (dVar22 <= (double)CONCAT44(uVar19,uVar15)) {
      dVar22 = (double)CONCAT44(uVar19,uVar15);
    }
    uVar15 = SUB84(dVar22,0);
    uVar19 = (undefined4)((ulonglong)dVar22 >> 0x20);
  }
  uVar8 = 0;
  if (param_1 < *(int *)&(this->MWorldSpaceInflatedBounds).field_0x10) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  dVar22 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)local_res20 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            (uint)*(undefined8 *)local_res20 &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar26 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&local_res20->field_0x10 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            (uint)*(undefined8 *)&local_res20->field_0x10 &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar25 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&local_res20->field_0x8 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            (uint)*(undefined8 *)&local_res20->field_0x8 &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar5 = *(longlong *)&(this->MWorldSpaceInflatedBounds).field_0x8;
  *(double *)(lVar5 + lVar11 * 0x30) = (double)CONCAT44(uVar16,uVar12) - dVar22;
  *(double *)(lVar5 + 8 + lVar11 * 0x30) = (double)CONCAT44(uVar23,uVar20) - dVar25;
  *(double *)(lVar5 + 0x10 + lVar11 * 0x30) = (double)CONCAT44(uVar17,uVar13) - dVar26;
  pdVar3 = (double *)(lVar5 + 0x18 + lVar11 * 0x30);
  *pdVar3 = (double)CONCAT44(uVar18,uVar14) + dVar22;
  pdVar3[1] = (double)CONCAT44(uVar24,uVar21) + dVar25;
  *(double *)(lVar5 + 0x28 + lVar11 * 0x30) = (double)CONCAT44(uVar19,uVar15) + dVar26;
  return;
}

// ParticleID @ 1439d5d30

FParticleID * __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::ParticleID
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FParticleID *pFVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MParticleIDs).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FParticleID *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FParticleID *)(*(longlong *)&(this->MParticleIDs).field_0x8 + (longlong)param_1 * 8);
}

// TGeometryParticlesImp<float,3,1> @ 143af2ba0

TGeometryParticlesImp<float,3,1> * __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::TGeometryParticlesImp<float,3,1>
          (TGeometryParticlesImp<float,3,1> *this,TGeometryParticlesImp<float,3,1> *param_1)

{
  longlong *plVar1;
  
  TParticles<float,3>::TParticles<float,3>
            ((TParticles<float,3> *)this,(TParticles<float,3> *)param_1);
  plVar1 = &this->_padding_;
  this->_padding_ = (longlong)&___7__TSimpleGeometryParticles_M_02_Chaos__6B_;
  *plVar1 = (longlong)&___7TArrayCollectionArrayBase_Chaos__6B_;
  this->_padding_ = 0;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = 0;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  param_1->_padding_ = 0;
  *plVar1 = (longlong)&___7__TArrayCollectionArray_V__TRotation_M_02_Chaos___Chaos__6B_;
  this->_padding_ = (longlong)&___7TArrayCollectionArrayBase_Chaos__6B_;
  this->_padding_ = 0;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = 0;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  param_1->_padding_ = 0;
  this->_padding_ =
       (longlong)&___7__TArrayCollectionArray_V__TRefCountPtr_VFImplicitObject_Chaos_____Chaos__6B_;
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)plVar1);
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->_padding_)
  ;
  this->_padding_ = (longlong)&___7__TGeometryParticlesImp_M_02_00_Chaos__6B_;
  this->MContainerListMask = param_1->MContainerListMask;
  *(undefined ***)&this->MUniqueIdx = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MUniqueIdx).field_0x8 = 0;
  *(undefined8 *)&(this->MUniqueIdx).field_0x8 = *(undefined8 *)&(param_1->MUniqueIdx).field_0x8;
  *(undefined8 *)&(param_1->MUniqueIdx).field_0x8 = 0;
  *(undefined4 *)&(this->MUniqueIdx).field_0x10 = *(undefined4 *)&(param_1->MUniqueIdx).field_0x10;
  *(undefined4 *)&(this->MUniqueIdx).field_0x14 = *(undefined4 *)&(param_1->MUniqueIdx).field_0x14;
  *(undefined8 *)&(param_1->MUniqueIdx).field_0x10 = 0;
  *(undefined ***)&this->MUniqueIdx = &___7__TArrayCollectionArray_UFUniqueIdx_Chaos___Chaos__6B_;
  *(undefined ***)&this->MGeometryParticleHandle = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MGeometryParticleHandle).field_0x8 = 0;
  *(undefined8 *)&(this->MGeometryParticleHandle).field_0x8 =
       *(undefined8 *)&(param_1->MGeometryParticleHandle).field_0x8;
  *(undefined8 *)&(param_1->MGeometryParticleHandle).field_0x8 = 0;
  *(undefined4 *)&(this->MGeometryParticleHandle).field_0x10 =
       *(undefined4 *)&(param_1->MGeometryParticleHandle).field_0x10;
  *(undefined4 *)&(this->MGeometryParticleHandle).field_0x14 =
       *(undefined4 *)&(param_1->MGeometryParticleHandle).field_0x14;
  *(undefined8 *)&(param_1->MGeometryParticleHandle).field_0x10 = 0;
  *(undefined ***)&this->MGeometryParticleHandle =
       &
       ___7__TArrayCollectionArray_V__TSerializablePtr_V__TGeometryParticleHandleImp_N_02_00_Chaos___Chaos___Chaos__6B_
  ;
  *(undefined ***)&this->MGeometryParticle = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MGeometryParticle).field_0x8 = 0;
  *(undefined8 *)&(this->MGeometryParticle).field_0x8 =
       *(undefined8 *)&(param_1->MGeometryParticle).field_0x8;
  *(undefined8 *)&(param_1->MGeometryParticle).field_0x8 = 0;
  *(undefined4 *)&(this->MGeometryParticle).field_0x10 =
       *(undefined4 *)&(param_1->MGeometryParticle).field_0x10;
  *(undefined4 *)&(this->MGeometryParticle).field_0x14 =
       *(undefined4 *)&(param_1->MGeometryParticle).field_0x14;
  *(undefined8 *)&(param_1->MGeometryParticle).field_0x10 = 0;
  *(undefined ***)&this->MGeometryParticle =
       &___7__TArrayCollectionArray_PEAV__TGeometryParticle_N_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MPhysicsProxy = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MPhysicsProxy).field_0x8 = 0;
  *(undefined8 *)&(this->MPhysicsProxy).field_0x8 =
       *(undefined8 *)&(param_1->MPhysicsProxy).field_0x8;
  *(undefined8 *)&(param_1->MPhysicsProxy).field_0x8 = 0;
  *(undefined4 *)&(this->MPhysicsProxy).field_0x10 =
       *(undefined4 *)&(param_1->MPhysicsProxy).field_0x10;
  *(undefined4 *)&(this->MPhysicsProxy).field_0x14 =
       *(undefined4 *)&(param_1->MPhysicsProxy).field_0x14;
  *(undefined8 *)&(param_1->MPhysicsProxy).field_0x10 = 0;
  *(undefined ***)&this->MPhysicsProxy =
       &___7__TArrayCollectionArray_PEAVIPhysicsProxyBase___Chaos__6B_;
  *(undefined ***)&this->MHasCollision = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MHasCollision).field_0x8 = 0;
  *(undefined8 *)&(this->MHasCollision).field_0x8 =
       *(undefined8 *)&(param_1->MHasCollision).field_0x8;
  *(undefined8 *)&(param_1->MHasCollision).field_0x8 = 0;
  *(undefined4 *)&(this->MHasCollision).field_0x10 =
       *(undefined4 *)&(param_1->MHasCollision).field_0x10;
  *(undefined4 *)&(this->MHasCollision).field_0x14 =
       *(undefined4 *)&(param_1->MHasCollision).field_0x14;
  *(undefined8 *)&(param_1->MHasCollision).field_0x10 = 0;
  *(undefined ***)&this->MHasCollision = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined ***)&this->MShapesArray = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MShapesArray).field_0x8 = 0;
  *(undefined8 *)&(this->MShapesArray).field_0x8 = *(undefined8 *)&(param_1->MShapesArray).field_0x8
  ;
  *(undefined8 *)&(param_1->MShapesArray).field_0x8 = 0;
  *(undefined4 *)&(this->MShapesArray).field_0x10 =
       *(undefined4 *)&(param_1->MShapesArray).field_0x10;
  *(undefined4 *)&(this->MShapesArray).field_0x14 =
       *(undefined4 *)&(param_1->MShapesArray).field_0x14;
  *(undefined8 *)&(param_1->MShapesArray).field_0x10 = 0;
  *(undefined ***)&this->MShapesArray =
       &
       ___7__TArrayCollectionArray_V__TArray_V__TUniquePtr_VFShapeInstance_Chaos__U__TDefaultDelete_VFShapeInstance_Chaos______V__TSizedInlineAllocator__00_0CA_V__TSizedDefaultAllocator__0CA________Chaos__6B_
  ;
  *(undefined ***)&this->MLocalBounds = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MLocalBounds).field_0x8 = 0;
  *(undefined8 *)&(this->MLocalBounds).field_0x8 = *(undefined8 *)&(param_1->MLocalBounds).field_0x8
  ;
  *(undefined8 *)&(param_1->MLocalBounds).field_0x8 = 0;
  *(undefined4 *)&(this->MLocalBounds).field_0x10 =
       *(undefined4 *)&(param_1->MLocalBounds).field_0x10;
  *(undefined4 *)&(this->MLocalBounds).field_0x14 =
       *(undefined4 *)&(param_1->MLocalBounds).field_0x14;
  *(undefined8 *)&(param_1->MLocalBounds).field_0x10 = 0;
  *(undefined ***)&this->MLocalBounds =
       &___7__TArrayCollectionArray_V__TAABB_M_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MCCDAxisThreshold = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MCCDAxisThreshold).field_0x8 = 0;
  *(undefined8 *)&(this->MCCDAxisThreshold).field_0x8 =
       *(undefined8 *)&(param_1->MCCDAxisThreshold).field_0x8;
  *(undefined8 *)&(param_1->MCCDAxisThreshold).field_0x8 = 0;
  *(undefined4 *)&(this->MCCDAxisThreshold).field_0x10 =
       *(undefined4 *)&(param_1->MCCDAxisThreshold).field_0x10;
  *(undefined4 *)&(this->MCCDAxisThreshold).field_0x14 =
       *(undefined4 *)&(param_1->MCCDAxisThreshold).field_0x14;
  *(undefined8 *)&(param_1->MCCDAxisThreshold).field_0x10 = 0;
  *(undefined ***)&this->MCCDAxisThreshold =
       &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MWorldSpaceInflatedBounds = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MWorldSpaceInflatedBounds).field_0x8 = 0;
  *(undefined8 *)&(this->MWorldSpaceInflatedBounds).field_0x8 =
       *(undefined8 *)&(param_1->MWorldSpaceInflatedBounds).field_0x8;
  *(undefined8 *)&(param_1->MWorldSpaceInflatedBounds).field_0x8 = 0;
  *(undefined4 *)&(this->MWorldSpaceInflatedBounds).field_0x10 =
       *(undefined4 *)&(param_1->MWorldSpaceInflatedBounds).field_0x10;
  *(undefined4 *)&(this->MWorldSpaceInflatedBounds).field_0x14 =
       *(undefined4 *)&(param_1->MWorldSpaceInflatedBounds).field_0x14;
  *(undefined8 *)&(param_1->MWorldSpaceInflatedBounds).field_0x10 = 0;
  *(undefined ***)&this->MWorldSpaceInflatedBounds =
       &___7__TArrayCollectionArray_V__TAABB_M_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MHasBounds = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MHasBounds).field_0x8 = 0;
  *(undefined8 *)&(this->MHasBounds).field_0x8 = *(undefined8 *)&(param_1->MHasBounds).field_0x8;
  *(undefined8 *)&(param_1->MHasBounds).field_0x8 = 0;
  *(undefined4 *)&(this->MHasBounds).field_0x10 = *(undefined4 *)&(param_1->MHasBounds).field_0x10;
  *(undefined4 *)&(this->MHasBounds).field_0x14 = *(undefined4 *)&(param_1->MHasBounds).field_0x14;
  *(undefined8 *)&(param_1->MHasBounds).field_0x10 = 0;
  *(undefined ***)&this->MHasBounds = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined ***)&this->MSpatialIdx = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MSpatialIdx).field_0x8 = 0;
  *(undefined8 *)&(this->MSpatialIdx).field_0x8 = *(undefined8 *)&(param_1->MSpatialIdx).field_0x8;
  *(undefined8 *)&(param_1->MSpatialIdx).field_0x8 = 0;
  *(undefined4 *)&(this->MSpatialIdx).field_0x10 = *(undefined4 *)&(param_1->MSpatialIdx).field_0x10
  ;
  *(undefined4 *)&(this->MSpatialIdx).field_0x14 = *(undefined4 *)&(param_1->MSpatialIdx).field_0x14
  ;
  *(undefined8 *)&(param_1->MSpatialIdx).field_0x10 = 0;
  *(undefined ***)&this->MSpatialIdx =
       &___7__TArrayCollectionArray_UFSpatialAccelerationIdx_Chaos___Chaos__6B_;
  *(undefined ***)&this->MSyncState = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MSyncState).field_0x8 = 0;
  *(undefined8 *)&(this->MSyncState).field_0x8 = *(undefined8 *)&(param_1->MSyncState).field_0x8;
  *(undefined8 *)&(param_1->MSyncState).field_0x8 = 0;
  *(undefined4 *)&(this->MSyncState).field_0x10 = *(undefined4 *)&(param_1->MSyncState).field_0x10;
  *(undefined4 *)&(this->MSyncState).field_0x14 = *(undefined4 *)&(param_1->MSyncState).field_0x14;
  *(undefined8 *)&(param_1->MSyncState).field_0x10 = 0;
  *(undefined ***)&this->MSyncState = &___7__TArrayCollectionArray_UFSyncState_Chaos___Chaos__6B_;
  *(undefined ***)&this->MWeakParticleHandle = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MWeakParticleHandle).field_0x8 = 0;
  *(undefined8 *)&(this->MWeakParticleHandle).field_0x8 =
       *(undefined8 *)&(param_1->MWeakParticleHandle).field_0x8;
  *(undefined8 *)&(param_1->MWeakParticleHandle).field_0x8 = 0;
  *(undefined4 *)&(this->MWeakParticleHandle).field_0x10 =
       *(undefined4 *)&(param_1->MWeakParticleHandle).field_0x10;
  *(undefined4 *)&(this->MWeakParticleHandle).field_0x14 =
       *(undefined4 *)&(param_1->MWeakParticleHandle).field_0x14;
  *(undefined8 *)&(param_1->MWeakParticleHandle).field_0x10 = 0;
  *(undefined ***)&this->MWeakParticleHandle =
       &___7__TArrayCollectionArray_VFWeakParticleHandle_Chaos___Chaos__6B_;
  *(undefined ***)&this->MParticleConstraints = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MParticleConstraints).field_0x8 = 0;
  *(undefined8 *)&(this->MParticleConstraints).field_0x8 =
       *(undefined8 *)&(param_1->MParticleConstraints).field_0x8;
  *(undefined8 *)&(param_1->MParticleConstraints).field_0x8 = 0;
  *(undefined4 *)&(this->MParticleConstraints).field_0x10 =
       *(undefined4 *)&(param_1->MParticleConstraints).field_0x10;
  *(undefined4 *)&(this->MParticleConstraints).field_0x14 =
       *(undefined4 *)&(param_1->MParticleConstraints).field_0x14;
  *(undefined8 *)&(param_1->MParticleConstraints).field_0x10 = 0;
  *(undefined ***)&this->MParticleConstraints =
       &
       ___7__TArrayCollectionArray_V__TArray_PEAVFConstraintHandle_Chaos__V__TSizedDefaultAllocator__0CA______Chaos__6B_
  ;
  *(undefined ***)&this->MParticleCollisions = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MParticleCollisions).field_0x8 = 0;
  *(undefined8 *)&(this->MParticleCollisions).field_0x8 =
       *(undefined8 *)&(param_1->MParticleCollisions).field_0x8;
  *(undefined8 *)&(param_1->MParticleCollisions).field_0x8 = 0;
  *(undefined4 *)&(this->MParticleCollisions).field_0x10 =
       *(undefined4 *)&(param_1->MParticleCollisions).field_0x10;
  *(undefined4 *)&(this->MParticleCollisions).field_0x14 =
       *(undefined4 *)&(param_1->MParticleCollisions).field_0x14;
  *(undefined8 *)&(param_1->MParticleCollisions).field_0x10 = 0;
  *(undefined ***)&this->MParticleCollisions =
       &___7__TArrayCollectionArray_VFParticleCollisions_Chaos___Chaos__6B_;
  *(undefined ***)&this->MGraphNode = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MGraphNode).field_0x8 = 0;
  *(undefined8 *)&(this->MGraphNode).field_0x8 = *(undefined8 *)&(param_1->MGraphNode).field_0x8;
  *(undefined8 *)&(param_1->MGraphNode).field_0x8 = 0;
  *(undefined4 *)&(this->MGraphNode).field_0x10 = *(undefined4 *)&(param_1->MGraphNode).field_0x10;
  *(undefined4 *)&(this->MGraphNode).field_0x14 = *(undefined4 *)&(param_1->MGraphNode).field_0x14;
  *(undefined8 *)&(param_1->MGraphNode).field_0x10 = 0;
  *(undefined ***)&this->MGraphNode =
       &___7__TArrayCollectionArray_PEAVFPBDIslandParticle_Private_Chaos___Chaos__6B_;
  *(undefined ***)&this->MResimType = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MResimType).field_0x8 = 0;
  *(undefined8 *)&(this->MResimType).field_0x8 = *(undefined8 *)&(param_1->MResimType).field_0x8;
  *(undefined8 *)&(param_1->MResimType).field_0x8 = 0;
  *(undefined4 *)&(this->MResimType).field_0x10 = *(undefined4 *)&(param_1->MResimType).field_0x10;
  *(undefined4 *)&(this->MResimType).field_0x14 = *(undefined4 *)&(param_1->MResimType).field_0x14;
  *(undefined8 *)&(param_1->MResimType).field_0x10 = 0;
  *(undefined ***)&this->MResimType = &___7__TArrayCollectionArray_W4EResimType_Chaos___Chaos__6B_;
  *(undefined ***)&this->MEnabledDuringResim = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MEnabledDuringResim).field_0x8 = 0;
  *(undefined8 *)&(this->MEnabledDuringResim).field_0x8 =
       *(undefined8 *)&(param_1->MEnabledDuringResim).field_0x8;
  *(undefined8 *)&(param_1->MEnabledDuringResim).field_0x8 = 0;
  *(undefined4 *)&(this->MEnabledDuringResim).field_0x10 =
       *(undefined4 *)&(param_1->MEnabledDuringResim).field_0x10;
  *(undefined4 *)&(this->MEnabledDuringResim).field_0x14 =
       *(undefined4 *)&(param_1->MEnabledDuringResim).field_0x14;
  *(undefined8 *)&(param_1->MEnabledDuringResim).field_0x10 = 0;
  *(undefined ***)&this->MEnabledDuringResim = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined ***)&this->MLightWeightDisabled = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MLightWeightDisabled).field_0x8 = 0;
  *(undefined8 *)&(this->MLightWeightDisabled).field_0x8 =
       *(undefined8 *)&(param_1->MLightWeightDisabled).field_0x8;
  *(undefined8 *)&(param_1->MLightWeightDisabled).field_0x8 = 0;
  *(undefined4 *)&(this->MLightWeightDisabled).field_0x10 =
       *(undefined4 *)&(param_1->MLightWeightDisabled).field_0x10;
  *(undefined4 *)&(this->MLightWeightDisabled).field_0x14 =
       *(undefined4 *)&(param_1->MLightWeightDisabled).field_0x14;
  *(undefined8 *)&(param_1->MLightWeightDisabled).field_0x10 = 0;
  *(undefined ***)&this->MLightWeightDisabled = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined ***)&this->MParticleListMask =
       &___7__TArrayCollectionArray_W4EGeometryParticleListMask_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->MParticleListMask).field_0x8 = 0;
  *(undefined8 *)&(this->MParticleListMask).field_0x10 = 0;
  *(undefined ***)&this->MParticleIDs = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MParticleIDs).field_0x8 = 0;
  *(undefined8 *)&(this->MParticleIDs).field_0x8 = *(undefined8 *)&(param_1->MParticleIDs).field_0x8
  ;
  *(undefined8 *)&(param_1->MParticleIDs).field_0x8 = 0;
  *(undefined4 *)&(this->MParticleIDs).field_0x10 =
       *(undefined4 *)&(param_1->MParticleIDs).field_0x10;
  *(undefined4 *)&(this->MParticleIDs).field_0x14 =
       *(undefined4 *)&(param_1->MParticleIDs).field_0x14;
  *(undefined8 *)&(param_1->MParticleIDs).field_0x10 = 0;
  *(undefined ***)&this->MParticleIDs = &___7__TArrayCollectionArray_UFParticleID_Chaos___Chaos__6B_
  ;
  *(undefined ***)&this->MDebugName = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MDebugName).field_0x8 = 0;
  *(undefined8 *)&(this->MDebugName).field_0x8 = *(undefined8 *)&(param_1->MDebugName).field_0x8;
  *(undefined8 *)&(param_1->MDebugName).field_0x8 = 0;
  *(undefined4 *)&(this->MDebugName).field_0x10 = *(undefined4 *)&(param_1->MDebugName).field_0x10;
  *(undefined4 *)&(this->MDebugName).field_0x14 = *(undefined4 *)&(param_1->MDebugName).field_0x14;
  *(undefined8 *)&(param_1->MDebugName).field_0x10 = 0;
  *(undefined ***)&this->MDebugName =
       &___7__TArrayCollectionArray_V__TSharedPtr_VFString___00___Chaos__6B_;
  this->MParticleType = Static;
  RegisterArrays(this);
  return this;
}

// TGeometryParticlesImp<float,3,1> @ 143af3320

TGeometryParticlesImp<float,3,1> * __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::TGeometryParticlesImp<float,3,1>
          (TGeometryParticlesImp<float,3,1> *this,TParticles<float,3> *param_1)

{
  TParticles<float,3>::TParticles<float,3>((TParticles<float,3> *)this,param_1);
  this->_padding_ = (longlong)&___7__TSimpleGeometryParticles_M_02_Chaos__6B_;
  this->_padding_ = (longlong)&___7__TArrayCollectionArray_V__TRotation_M_02_Chaos___Chaos__6B_;
  this->_padding_ =
       (longlong)&___7__TArrayCollectionArray_V__TRefCountPtr_VFImplicitObject_Chaos_____Chaos__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->_padding_)
  ;
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->_padding_)
  ;
  this->MContainerListMask = None;
  this->_padding_ = (longlong)&___7__TGeometryParticlesImp_M_02_00_Chaos__6B_;
  *(undefined8 *)&(this->MUniqueIdx).field_0x8 = 0;
  *(undefined ***)&this->MUniqueIdx = &___7__TArrayCollectionArray_UFUniqueIdx_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->MUniqueIdx).field_0x10 = 0;
  *(undefined ***)&this->MGeometryParticleHandle =
       &
       ___7__TArrayCollectionArray_V__TSerializablePtr_V__TGeometryParticleHandleImp_N_02_00_Chaos___Chaos___Chaos__6B_
  ;
  *(undefined ***)&this->MGeometryParticle =
       &___7__TArrayCollectionArray_PEAV__TGeometryParticle_N_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MPhysicsProxy =
       &___7__TArrayCollectionArray_PEAVIPhysicsProxyBase___Chaos__6B_;
  *(undefined ***)&this->MShapesArray =
       &
       ___7__TArrayCollectionArray_V__TArray_V__TUniquePtr_VFShapeInstance_Chaos__U__TDefaultDelete_VFShapeInstance_Chaos______V__TSizedInlineAllocator__00_0CA_V__TSizedDefaultAllocator__0CA________Chaos__6B_
  ;
  *(undefined ***)&this->MCCDAxisThreshold =
       &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MSpatialIdx =
       &___7__TArrayCollectionArray_UFSpatialAccelerationIdx_Chaos___Chaos__6B_;
  *(undefined ***)&this->MSyncState = &___7__TArrayCollectionArray_UFSyncState_Chaos___Chaos__6B_;
  *(undefined ***)&this->MWeakParticleHandle =
       &___7__TArrayCollectionArray_VFWeakParticleHandle_Chaos___Chaos__6B_;
  *(undefined ***)&this->MParticleConstraints =
       &
       ___7__TArrayCollectionArray_V__TArray_PEAVFConstraintHandle_Chaos__V__TSizedDefaultAllocator__0CA______Chaos__6B_
  ;
  *(undefined ***)&this->MParticleCollisions =
       &___7__TArrayCollectionArray_VFParticleCollisions_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->MGeometryParticleHandle).field_0x8 = 0;
  *(undefined8 *)&(this->MGeometryParticleHandle).field_0x10 = 0;
  *(undefined8 *)&(this->MGeometryParticle).field_0x8 = 0;
  *(undefined8 *)&(this->MGeometryParticle).field_0x10 = 0;
  *(undefined8 *)&(this->MPhysicsProxy).field_0x8 = 0;
  *(undefined8 *)&(this->MPhysicsProxy).field_0x10 = 0;
  *(undefined8 *)&(this->MHasCollision).field_0x8 = 0;
  *(undefined8 *)&(this->MHasCollision).field_0x10 = 0;
  *(undefined ***)&this->MHasCollision = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined8 *)&(this->MShapesArray).field_0x8 = 0;
  *(undefined8 *)&(this->MShapesArray).field_0x10 = 0;
  *(undefined8 *)&(this->MLocalBounds).field_0x8 = 0;
  *(undefined8 *)&(this->MLocalBounds).field_0x10 = 0;
  *(undefined ***)&this->MLocalBounds =
       &___7__TArrayCollectionArray_V__TAABB_M_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->MCCDAxisThreshold).field_0x8 = 0;
  *(undefined8 *)&(this->MCCDAxisThreshold).field_0x10 = 0;
  *(undefined8 *)&(this->MWorldSpaceInflatedBounds).field_0x8 = 0;
  *(undefined8 *)&(this->MWorldSpaceInflatedBounds).field_0x10 = 0;
  *(undefined ***)&this->MWorldSpaceInflatedBounds =
       &___7__TArrayCollectionArray_V__TAABB_M_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->MHasBounds).field_0x8 = 0;
  *(undefined8 *)&(this->MHasBounds).field_0x10 = 0;
  *(undefined ***)&this->MHasBounds = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined8 *)&(this->MSpatialIdx).field_0x8 = 0;
  *(undefined8 *)&(this->MSpatialIdx).field_0x10 = 0;
  *(undefined8 *)&(this->MSyncState).field_0x8 = 0;
  *(undefined8 *)&(this->MSyncState).field_0x10 = 0;
  *(undefined8 *)&(this->MWeakParticleHandle).field_0x8 = 0;
  *(undefined8 *)&(this->MWeakParticleHandle).field_0x10 = 0;
  *(undefined8 *)&(this->MParticleConstraints).field_0x8 = 0;
  *(undefined8 *)&(this->MParticleConstraints).field_0x10 = 0;
  *(undefined8 *)&(this->MParticleCollisions).field_0x8 = 0;
  *(undefined8 *)&(this->MParticleCollisions).field_0x10 = 0;
  *(undefined8 *)&(this->MGraphNode).field_0x8 = 0;
  *(undefined8 *)&(this->MGraphNode).field_0x10 = 0;
  *(undefined ***)&this->MGraphNode =
       &___7__TArrayCollectionArray_PEAVFPBDIslandParticle_Private_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->MResimType).field_0x8 = 0;
  *(undefined ***)&this->MResimType = &___7__TArrayCollectionArray_W4EResimType_Chaos___Chaos__6B_;
  *(undefined ***)&this->MParticleListMask =
       &___7__TArrayCollectionArray_W4EGeometryParticleListMask_Chaos___Chaos__6B_;
  *(undefined ***)&this->MParticleIDs = &___7__TArrayCollectionArray_UFParticleID_Chaos___Chaos__6B_
  ;
  *(undefined ***)&this->MDebugName =
       &___7__TArrayCollectionArray_V__TSharedPtr_VFString___00___Chaos__6B_;
  *(undefined8 *)&(this->MResimType).field_0x10 = 0;
  *(undefined8 *)&(this->MEnabledDuringResim).field_0x8 = 0;
  *(undefined8 *)&(this->MEnabledDuringResim).field_0x10 = 0;
  *(undefined ***)&this->MEnabledDuringResim = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined8 *)&(this->MLightWeightDisabled).field_0x8 = 0;
  *(undefined8 *)&(this->MLightWeightDisabled).field_0x10 = 0;
  *(undefined ***)&this->MLightWeightDisabled = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined8 *)&(this->MParticleListMask).field_0x8 = 0;
  *(undefined8 *)&(this->MParticleListMask).field_0x10 = 0;
  *(undefined8 *)&(this->MParticleIDs).field_0x8 = 0;
  *(undefined8 *)&(this->MParticleIDs).field_0x10 = 0;
  *(undefined8 *)&(this->MDebugName).field_0x8 = 0;
  *(undefined8 *)&(this->MDebugName).field_0x10 = 0;
  this->MParticleType = Static;
  RegisterArrays(this);
  return this;
}

// TGeometryParticlesImp<float,3,1> @ 143af3600

TGeometryParticlesImp<float,3,1> * __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::TGeometryParticlesImp<float,3,1>
          (TGeometryParticlesImp<float,3,1> *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7__TParticles_M_02_Chaos__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->_padding_)
  ;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7__TSimpleGeometryParticles_M_02_Chaos__6B_;
  this->_padding_ = (longlong)&___7__TArrayCollectionArray_V__TRotation_M_02_Chaos___Chaos__6B_;
  this->_padding_ =
       (longlong)&___7__TArrayCollectionArray_V__TRefCountPtr_VFImplicitObject_Chaos_____Chaos__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->_padding_)
  ;
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->_padding_)
  ;
  this->MContainerListMask = None;
  this->_padding_ = (longlong)&___7__TGeometryParticlesImp_M_02_00_Chaos__6B_;
  *(undefined8 *)&(this->MUniqueIdx).field_0x8 = 0;
  *(undefined ***)&this->MUniqueIdx = &___7__TArrayCollectionArray_UFUniqueIdx_Chaos___Chaos__6B_;
  *(undefined ***)&this->MGeometryParticleHandle =
       &
       ___7__TArrayCollectionArray_V__TSerializablePtr_V__TGeometryParticleHandleImp_N_02_00_Chaos___Chaos___Chaos__6B_
  ;
  *(undefined ***)&this->MGeometryParticle =
       &___7__TArrayCollectionArray_PEAV__TGeometryParticle_N_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MPhysicsProxy =
       &___7__TArrayCollectionArray_PEAVIPhysicsProxyBase___Chaos__6B_;
  *(undefined ***)&this->MShapesArray =
       &
       ___7__TArrayCollectionArray_V__TArray_V__TUniquePtr_VFShapeInstance_Chaos__U__TDefaultDelete_VFShapeInstance_Chaos______V__TSizedInlineAllocator__00_0CA_V__TSizedDefaultAllocator__0CA________Chaos__6B_
  ;
  *(undefined ***)&this->MLocalBounds =
       &___7__TArrayCollectionArray_V__TAABB_M_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MWorldSpaceInflatedBounds =
       &___7__TArrayCollectionArray_V__TAABB_M_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MSpatialIdx =
       &___7__TArrayCollectionArray_UFSpatialAccelerationIdx_Chaos___Chaos__6B_;
  *(undefined ***)&this->MSyncState = &___7__TArrayCollectionArray_UFSyncState_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->MUniqueIdx).field_0x10 = 0;
  *(undefined8 *)&(this->MGeometryParticleHandle).field_0x8 = 0;
  *(undefined8 *)&(this->MGeometryParticleHandle).field_0x10 = 0;
  *(undefined8 *)&(this->MGeometryParticle).field_0x8 = 0;
  *(undefined8 *)&(this->MGeometryParticle).field_0x10 = 0;
  *(undefined8 *)&(this->MPhysicsProxy).field_0x8 = 0;
  *(undefined8 *)&(this->MPhysicsProxy).field_0x10 = 0;
  *(undefined8 *)&(this->MHasCollision).field_0x8 = 0;
  *(undefined8 *)&(this->MHasCollision).field_0x10 = 0;
  *(undefined ***)&this->MHasCollision = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined8 *)&(this->MShapesArray).field_0x8 = 0;
  *(undefined8 *)&(this->MShapesArray).field_0x10 = 0;
  *(undefined8 *)&(this->MLocalBounds).field_0x8 = 0;
  *(undefined8 *)&(this->MLocalBounds).field_0x10 = 0;
  *(undefined8 *)&(this->MCCDAxisThreshold).field_0x8 = 0;
  *(undefined8 *)&(this->MCCDAxisThreshold).field_0x10 = 0;
  *(undefined ***)&this->MCCDAxisThreshold =
       &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->MWorldSpaceInflatedBounds).field_0x8 = 0;
  *(undefined8 *)&(this->MWorldSpaceInflatedBounds).field_0x10 = 0;
  *(undefined8 *)&(this->MHasBounds).field_0x8 = 0;
  *(undefined8 *)&(this->MHasBounds).field_0x10 = 0;
  *(undefined ***)&this->MHasBounds = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined8 *)&(this->MSpatialIdx).field_0x8 = 0;
  *(undefined8 *)&(this->MSpatialIdx).field_0x10 = 0;
  *(undefined8 *)&(this->MSyncState).field_0x8 = 0;
  *(undefined8 *)&(this->MSyncState).field_0x10 = 0;
  *(undefined8 *)&(this->MWeakParticleHandle).field_0x8 = 0;
  *(undefined8 *)&(this->MWeakParticleHandle).field_0x10 = 0;
  *(undefined ***)&this->MEnabledDuringResim = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined ***)&this->MWeakParticleHandle =
       &___7__TArrayCollectionArray_VFWeakParticleHandle_Chaos___Chaos__6B_;
  *(undefined ***)&this->MParticleConstraints =
       &
       ___7__TArrayCollectionArray_V__TArray_PEAVFConstraintHandle_Chaos__V__TSizedDefaultAllocator__0CA______Chaos__6B_
  ;
  *(undefined ***)&this->MParticleCollisions =
       &___7__TArrayCollectionArray_VFParticleCollisions_Chaos___Chaos__6B_;
  *(undefined ***)&this->MGraphNode =
       &___7__TArrayCollectionArray_PEAVFPBDIslandParticle_Private_Chaos___Chaos__6B_;
  *(undefined ***)&this->MResimType = &___7__TArrayCollectionArray_W4EResimType_Chaos___Chaos__6B_;
  *(undefined ***)&this->MParticleListMask =
       &___7__TArrayCollectionArray_W4EGeometryParticleListMask_Chaos___Chaos__6B_;
  *(undefined ***)&this->MParticleIDs = &___7__TArrayCollectionArray_UFParticleID_Chaos___Chaos__6B_
  ;
  *(undefined ***)&this->MLightWeightDisabled = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined ***)&this->MDebugName =
       &___7__TArrayCollectionArray_V__TSharedPtr_VFString___00___Chaos__6B_;
  *(undefined8 *)&(this->MParticleConstraints).field_0x8 = 0;
  *(undefined8 *)&(this->MParticleConstraints).field_0x10 = 0;
  *(undefined8 *)&(this->MParticleCollisions).field_0x8 = 0;
  *(undefined8 *)&(this->MParticleCollisions).field_0x10 = 0;
  *(undefined8 *)&(this->MGraphNode).field_0x8 = 0;
  *(undefined8 *)&(this->MGraphNode).field_0x10 = 0;
  *(undefined8 *)&(this->MResimType).field_0x8 = 0;
  *(undefined8 *)&(this->MResimType).field_0x10 = 0;
  *(undefined8 *)&(this->MEnabledDuringResim).field_0x8 = 0;
  *(undefined8 *)&(this->MEnabledDuringResim).field_0x10 = 0;
  *(undefined8 *)&(this->MLightWeightDisabled).field_0x8 = 0;
  *(undefined8 *)&(this->MLightWeightDisabled).field_0x10 = 0;
  *(undefined8 *)&(this->MParticleListMask).field_0x8 = 0;
  *(undefined8 *)&(this->MParticleListMask).field_0x10 = 0;
  *(undefined8 *)&(this->MParticleIDs).field_0x8 = 0;
  *(undefined8 *)&(this->MParticleIDs).field_0x10 = 0;
  *(undefined8 *)&(this->MDebugName).field_0x8 = 0;
  *(undefined8 *)&(this->MDebugName).field_0x10 = 0;
  this->MParticleType = Static;
  RegisterArrays(this);
  return this;
}

// TGeometryParticlesImp<double,3,1> @ 143af3910

TGeometryParticlesImp<double,3,1> * __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::TGeometryParticlesImp<double,3,1>
          (TGeometryParticlesImp<double,3,1> *this,TGeometryParticlesImp<double,3,1> *param_1)

{
  TSimpleGeometryParticles<double,3>::TSimpleGeometryParticles<double,3>
            ((TSimpleGeometryParticles<double,3> *)this,
             (TSimpleGeometryParticles<double,3> *)param_1);
  this->_padding_ = (longlong)&___7__TGeometryParticlesImp_N_02_00_Chaos__6B_;
  this->MContainerListMask = param_1->MContainerListMask;
  *(undefined ***)&this->MUniqueIdx = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MUniqueIdx).field_0x8 = 0;
  *(undefined8 *)&(this->MUniqueIdx).field_0x8 = *(undefined8 *)&(param_1->MUniqueIdx).field_0x8;
  *(undefined8 *)&(param_1->MUniqueIdx).field_0x8 = 0;
  *(undefined4 *)&(this->MUniqueIdx).field_0x10 = *(undefined4 *)&(param_1->MUniqueIdx).field_0x10;
  *(undefined4 *)&(this->MUniqueIdx).field_0x14 = *(undefined4 *)&(param_1->MUniqueIdx).field_0x14;
  *(undefined8 *)&(param_1->MUniqueIdx).field_0x10 = 0;
  *(undefined ***)&this->MUniqueIdx = &___7__TArrayCollectionArray_UFUniqueIdx_Chaos___Chaos__6B_;
  *(undefined ***)&this->MGeometryParticleHandle = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MGeometryParticleHandle).field_0x8 = 0;
  *(undefined8 *)&(this->MGeometryParticleHandle).field_0x8 =
       *(undefined8 *)&(param_1->MGeometryParticleHandle).field_0x8;
  *(undefined8 *)&(param_1->MGeometryParticleHandle).field_0x8 = 0;
  *(undefined4 *)&(this->MGeometryParticleHandle).field_0x10 =
       *(undefined4 *)&(param_1->MGeometryParticleHandle).field_0x10;
  *(undefined4 *)&(this->MGeometryParticleHandle).field_0x14 =
       *(undefined4 *)&(param_1->MGeometryParticleHandle).field_0x14;
  *(undefined8 *)&(param_1->MGeometryParticleHandle).field_0x10 = 0;
  *(undefined ***)&this->MGeometryParticleHandle =
       &
       ___7__TArrayCollectionArray_V__TSerializablePtr_V__TGeometryParticleHandleImp_N_02_00_Chaos___Chaos___Chaos__6B_
  ;
  *(undefined ***)&this->MGeometryParticle = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MGeometryParticle).field_0x8 = 0;
  *(undefined8 *)&(this->MGeometryParticle).field_0x8 =
       *(undefined8 *)&(param_1->MGeometryParticle).field_0x8;
  *(undefined8 *)&(param_1->MGeometryParticle).field_0x8 = 0;
  *(undefined4 *)&(this->MGeometryParticle).field_0x10 =
       *(undefined4 *)&(param_1->MGeometryParticle).field_0x10;
  *(undefined4 *)&(this->MGeometryParticle).field_0x14 =
       *(undefined4 *)&(param_1->MGeometryParticle).field_0x14;
  *(undefined8 *)&(param_1->MGeometryParticle).field_0x10 = 0;
  *(undefined ***)&this->MGeometryParticle =
       &___7__TArrayCollectionArray_PEAV__TGeometryParticle_N_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MPhysicsProxy = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MPhysicsProxy).field_0x8 = 0;
  *(undefined8 *)&(this->MPhysicsProxy).field_0x8 =
       *(undefined8 *)&(param_1->MPhysicsProxy).field_0x8;
  *(undefined8 *)&(param_1->MPhysicsProxy).field_0x8 = 0;
  *(undefined4 *)&(this->MPhysicsProxy).field_0x10 =
       *(undefined4 *)&(param_1->MPhysicsProxy).field_0x10;
  *(undefined4 *)&(this->MPhysicsProxy).field_0x14 =
       *(undefined4 *)&(param_1->MPhysicsProxy).field_0x14;
  *(undefined8 *)&(param_1->MPhysicsProxy).field_0x10 = 0;
  *(undefined ***)&this->MPhysicsProxy =
       &___7__TArrayCollectionArray_PEAVIPhysicsProxyBase___Chaos__6B_;
  *(undefined ***)&this->MHasCollision = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MHasCollision).field_0x8 = 0;
  *(undefined8 *)&(this->MHasCollision).field_0x8 =
       *(undefined8 *)&(param_1->MHasCollision).field_0x8;
  *(undefined8 *)&(param_1->MHasCollision).field_0x8 = 0;
  *(undefined4 *)&(this->MHasCollision).field_0x10 =
       *(undefined4 *)&(param_1->MHasCollision).field_0x10;
  *(undefined4 *)&(this->MHasCollision).field_0x14 =
       *(undefined4 *)&(param_1->MHasCollision).field_0x14;
  *(undefined8 *)&(param_1->MHasCollision).field_0x10 = 0;
  *(undefined ***)&this->MHasCollision = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined ***)&this->MShapesArray = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MShapesArray).field_0x8 = 0;
  *(undefined8 *)&(this->MShapesArray).field_0x8 = *(undefined8 *)&(param_1->MShapesArray).field_0x8
  ;
  *(undefined8 *)&(param_1->MShapesArray).field_0x8 = 0;
  *(undefined4 *)&(this->MShapesArray).field_0x10 =
       *(undefined4 *)&(param_1->MShapesArray).field_0x10;
  *(undefined4 *)&(this->MShapesArray).field_0x14 =
       *(undefined4 *)&(param_1->MShapesArray).field_0x14;
  *(undefined8 *)&(param_1->MShapesArray).field_0x10 = 0;
  *(undefined ***)&this->MShapesArray =
       &
       ___7__TArrayCollectionArray_V__TArray_V__TUniquePtr_VFShapeInstance_Chaos__U__TDefaultDelete_VFShapeInstance_Chaos______V__TSizedInlineAllocator__00_0CA_V__TSizedDefaultAllocator__0CA________Chaos__6B_
  ;
  *(undefined ***)&this->MLocalBounds = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MLocalBounds).field_0x8 = 0;
  *(undefined8 *)&(this->MLocalBounds).field_0x8 = *(undefined8 *)&(param_1->MLocalBounds).field_0x8
  ;
  *(undefined8 *)&(param_1->MLocalBounds).field_0x8 = 0;
  *(undefined4 *)&(this->MLocalBounds).field_0x10 =
       *(undefined4 *)&(param_1->MLocalBounds).field_0x10;
  *(undefined4 *)&(this->MLocalBounds).field_0x14 =
       *(undefined4 *)&(param_1->MLocalBounds).field_0x14;
  *(undefined8 *)&(param_1->MLocalBounds).field_0x10 = 0;
  *(undefined ***)&this->MLocalBounds =
       &___7__TArrayCollectionArray_V__TAABB_N_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MCCDAxisThreshold = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MCCDAxisThreshold).field_0x8 = 0;
  *(undefined8 *)&(this->MCCDAxisThreshold).field_0x8 =
       *(undefined8 *)&(param_1->MCCDAxisThreshold).field_0x8;
  *(undefined8 *)&(param_1->MCCDAxisThreshold).field_0x8 = 0;
  *(undefined4 *)&(this->MCCDAxisThreshold).field_0x10 =
       *(undefined4 *)&(param_1->MCCDAxisThreshold).field_0x10;
  *(undefined4 *)&(this->MCCDAxisThreshold).field_0x14 =
       *(undefined4 *)&(param_1->MCCDAxisThreshold).field_0x14;
  *(undefined8 *)&(param_1->MCCDAxisThreshold).field_0x10 = 0;
  *(undefined ***)&this->MCCDAxisThreshold =
       &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MWorldSpaceInflatedBounds = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MWorldSpaceInflatedBounds).field_0x8 = 0;
  *(undefined8 *)&(this->MWorldSpaceInflatedBounds).field_0x8 =
       *(undefined8 *)&(param_1->MWorldSpaceInflatedBounds).field_0x8;
  *(undefined8 *)&(param_1->MWorldSpaceInflatedBounds).field_0x8 = 0;
  *(undefined4 *)&(this->MWorldSpaceInflatedBounds).field_0x10 =
       *(undefined4 *)&(param_1->MWorldSpaceInflatedBounds).field_0x10;
  *(undefined4 *)&(this->MWorldSpaceInflatedBounds).field_0x14 =
       *(undefined4 *)&(param_1->MWorldSpaceInflatedBounds).field_0x14;
  *(undefined8 *)&(param_1->MWorldSpaceInflatedBounds).field_0x10 = 0;
  *(undefined ***)&this->MWorldSpaceInflatedBounds =
       &___7__TArrayCollectionArray_V__TAABB_N_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MHasBounds = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MHasBounds).field_0x8 = 0;
  *(undefined8 *)&(this->MHasBounds).field_0x8 = *(undefined8 *)&(param_1->MHasBounds).field_0x8;
  *(undefined8 *)&(param_1->MHasBounds).field_0x8 = 0;
  *(undefined4 *)&(this->MHasBounds).field_0x10 = *(undefined4 *)&(param_1->MHasBounds).field_0x10;
  *(undefined4 *)&(this->MHasBounds).field_0x14 = *(undefined4 *)&(param_1->MHasBounds).field_0x14;
  *(undefined8 *)&(param_1->MHasBounds).field_0x10 = 0;
  *(undefined ***)&this->MHasBounds = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined ***)&this->MSpatialIdx = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MSpatialIdx).field_0x8 = 0;
  *(undefined8 *)&(this->MSpatialIdx).field_0x8 = *(undefined8 *)&(param_1->MSpatialIdx).field_0x8;
  *(undefined8 *)&(param_1->MSpatialIdx).field_0x8 = 0;
  *(undefined4 *)&(this->MSpatialIdx).field_0x10 = *(undefined4 *)&(param_1->MSpatialIdx).field_0x10
  ;
  *(undefined4 *)&(this->MSpatialIdx).field_0x14 = *(undefined4 *)&(param_1->MSpatialIdx).field_0x14
  ;
  *(undefined8 *)&(param_1->MSpatialIdx).field_0x10 = 0;
  *(undefined ***)&this->MSpatialIdx =
       &___7__TArrayCollectionArray_UFSpatialAccelerationIdx_Chaos___Chaos__6B_;
  *(undefined ***)&this->MSyncState = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MSyncState).field_0x8 = 0;
  *(undefined8 *)&(this->MSyncState).field_0x8 = *(undefined8 *)&(param_1->MSyncState).field_0x8;
  *(undefined8 *)&(param_1->MSyncState).field_0x8 = 0;
  *(undefined4 *)&(this->MSyncState).field_0x10 = *(undefined4 *)&(param_1->MSyncState).field_0x10;
  *(undefined4 *)&(this->MSyncState).field_0x14 = *(undefined4 *)&(param_1->MSyncState).field_0x14;
  *(undefined8 *)&(param_1->MSyncState).field_0x10 = 0;
  *(undefined ***)&this->MSyncState = &___7__TArrayCollectionArray_UFSyncState_Chaos___Chaos__6B_;
  *(undefined ***)&this->MWeakParticleHandle = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MWeakParticleHandle).field_0x8 = 0;
  *(undefined8 *)&(this->MWeakParticleHandle).field_0x8 =
       *(undefined8 *)&(param_1->MWeakParticleHandle).field_0x8;
  *(undefined8 *)&(param_1->MWeakParticleHandle).field_0x8 = 0;
  *(undefined4 *)&(this->MWeakParticleHandle).field_0x10 =
       *(undefined4 *)&(param_1->MWeakParticleHandle).field_0x10;
  *(undefined4 *)&(this->MWeakParticleHandle).field_0x14 =
       *(undefined4 *)&(param_1->MWeakParticleHandle).field_0x14;
  *(undefined8 *)&(param_1->MWeakParticleHandle).field_0x10 = 0;
  *(undefined ***)&this->MWeakParticleHandle =
       &___7__TArrayCollectionArray_VFWeakParticleHandle_Chaos___Chaos__6B_;
  *(undefined ***)&this->MParticleConstraints = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MParticleConstraints).field_0x8 = 0;
  *(undefined8 *)&(this->MParticleConstraints).field_0x8 =
       *(undefined8 *)&(param_1->MParticleConstraints).field_0x8;
  *(undefined8 *)&(param_1->MParticleConstraints).field_0x8 = 0;
  *(undefined4 *)&(this->MParticleConstraints).field_0x10 =
       *(undefined4 *)&(param_1->MParticleConstraints).field_0x10;
  *(undefined4 *)&(this->MParticleConstraints).field_0x14 =
       *(undefined4 *)&(param_1->MParticleConstraints).field_0x14;
  *(undefined8 *)&(param_1->MParticleConstraints).field_0x10 = 0;
  *(undefined ***)&this->MParticleConstraints =
       &
       ___7__TArrayCollectionArray_V__TArray_PEAVFConstraintHandle_Chaos__V__TSizedDefaultAllocator__0CA______Chaos__6B_
  ;
  *(undefined ***)&this->MParticleCollisions = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MParticleCollisions).field_0x8 = 0;
  *(undefined8 *)&(this->MParticleCollisions).field_0x8 =
       *(undefined8 *)&(param_1->MParticleCollisions).field_0x8;
  *(undefined8 *)&(param_1->MParticleCollisions).field_0x8 = 0;
  *(undefined4 *)&(this->MParticleCollisions).field_0x10 =
       *(undefined4 *)&(param_1->MParticleCollisions).field_0x10;
  *(undefined4 *)&(this->MParticleCollisions).field_0x14 =
       *(undefined4 *)&(param_1->MParticleCollisions).field_0x14;
  *(undefined8 *)&(param_1->MParticleCollisions).field_0x10 = 0;
  *(undefined ***)&this->MParticleCollisions =
       &___7__TArrayCollectionArray_VFParticleCollisions_Chaos___Chaos__6B_;
  *(undefined ***)&this->MGraphNode = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MGraphNode).field_0x8 = 0;
  *(undefined8 *)&(this->MGraphNode).field_0x8 = *(undefined8 *)&(param_1->MGraphNode).field_0x8;
  *(undefined8 *)&(param_1->MGraphNode).field_0x8 = 0;
  *(undefined4 *)&(this->MGraphNode).field_0x10 = *(undefined4 *)&(param_1->MGraphNode).field_0x10;
  *(undefined4 *)&(this->MGraphNode).field_0x14 = *(undefined4 *)&(param_1->MGraphNode).field_0x14;
  *(undefined8 *)&(param_1->MGraphNode).field_0x10 = 0;
  *(undefined ***)&this->MGraphNode =
       &___7__TArrayCollectionArray_PEAVFPBDIslandParticle_Private_Chaos___Chaos__6B_;
  *(undefined ***)&this->MResimType = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MResimType).field_0x8 = 0;
  *(undefined8 *)&(this->MResimType).field_0x8 = *(undefined8 *)&(param_1->MResimType).field_0x8;
  *(undefined8 *)&(param_1->MResimType).field_0x8 = 0;
  *(undefined4 *)&(this->MResimType).field_0x10 = *(undefined4 *)&(param_1->MResimType).field_0x10;
  *(undefined4 *)&(this->MResimType).field_0x14 = *(undefined4 *)&(param_1->MResimType).field_0x14;
  *(undefined8 *)&(param_1->MResimType).field_0x10 = 0;
  *(undefined ***)&this->MResimType = &___7__TArrayCollectionArray_W4EResimType_Chaos___Chaos__6B_;
  *(undefined ***)&this->MEnabledDuringResim = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MEnabledDuringResim).field_0x8 = 0;
  *(undefined8 *)&(this->MEnabledDuringResim).field_0x8 =
       *(undefined8 *)&(param_1->MEnabledDuringResim).field_0x8;
  *(undefined8 *)&(param_1->MEnabledDuringResim).field_0x8 = 0;
  *(undefined4 *)&(this->MEnabledDuringResim).field_0x10 =
       *(undefined4 *)&(param_1->MEnabledDuringResim).field_0x10;
  *(undefined4 *)&(this->MEnabledDuringResim).field_0x14 =
       *(undefined4 *)&(param_1->MEnabledDuringResim).field_0x14;
  *(undefined8 *)&(param_1->MEnabledDuringResim).field_0x10 = 0;
  *(undefined ***)&this->MEnabledDuringResim = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined ***)&this->MLightWeightDisabled = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MLightWeightDisabled).field_0x8 = 0;
  *(undefined8 *)&(this->MLightWeightDisabled).field_0x8 =
       *(undefined8 *)&(param_1->MLightWeightDisabled).field_0x8;
  *(undefined8 *)&(param_1->MLightWeightDisabled).field_0x8 = 0;
  *(undefined4 *)&(this->MLightWeightDisabled).field_0x10 =
       *(undefined4 *)&(param_1->MLightWeightDisabled).field_0x10;
  *(undefined4 *)&(this->MLightWeightDisabled).field_0x14 =
       *(undefined4 *)&(param_1->MLightWeightDisabled).field_0x14;
  *(undefined8 *)&(param_1->MLightWeightDisabled).field_0x10 = 0;
  *(undefined ***)&this->MLightWeightDisabled = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined8 *)&(this->MParticleListMask).field_0x8 = 0;
  *(undefined8 *)&(this->MParticleListMask).field_0x10 = 0;
  *(undefined ***)&this->MParticleListMask =
       &___7__TArrayCollectionArray_W4EGeometryParticleListMask_Chaos___Chaos__6B_;
  *(undefined ***)&this->MParticleIDs = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MParticleIDs).field_0x8 = 0;
  *(undefined8 *)&(this->MParticleIDs).field_0x8 = *(undefined8 *)&(param_1->MParticleIDs).field_0x8
  ;
  *(undefined8 *)&(param_1->MParticleIDs).field_0x8 = 0;
  *(undefined4 *)&(this->MParticleIDs).field_0x10 =
       *(undefined4 *)&(param_1->MParticleIDs).field_0x10;
  *(undefined4 *)&(this->MParticleIDs).field_0x14 =
       *(undefined4 *)&(param_1->MParticleIDs).field_0x14;
  *(undefined8 *)&(param_1->MParticleIDs).field_0x10 = 0;
  *(undefined ***)&this->MParticleIDs = &___7__TArrayCollectionArray_UFParticleID_Chaos___Chaos__6B_
  ;
  *(undefined ***)&this->MDebugName = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MDebugName).field_0x8 = 0;
  *(undefined8 *)&(this->MDebugName).field_0x8 = *(undefined8 *)&(param_1->MDebugName).field_0x8;
  *(undefined8 *)&(param_1->MDebugName).field_0x8 = 0;
  *(undefined4 *)&(this->MDebugName).field_0x10 = *(undefined4 *)&(param_1->MDebugName).field_0x10;
  *(undefined4 *)&(this->MDebugName).field_0x14 = *(undefined4 *)&(param_1->MDebugName).field_0x14;
  *(undefined8 *)&(param_1->MDebugName).field_0x10 = 0;
  *(undefined ***)&this->MDebugName =
       &___7__TArrayCollectionArray_V__TSharedPtr_VFString___00___Chaos__6B_;
  this->MParticleType = Static;
  RegisterArrays(this);
  return this;
}

// TGeometryParticlesImp<double,3,1> @ 143af3ff0

TGeometryParticlesImp<double,3,1> * __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::TGeometryParticlesImp<double,3,1>
          (TGeometryParticlesImp<double,3,1> *this,TParticles<double,3> *param_1)

{
  TSimpleGeometryParticles<double,3>::TSimpleGeometryParticles<double,3>
            ((TSimpleGeometryParticles<double,3> *)this,param_1);
  this->MContainerListMask = None;
  this->_padding_ = (longlong)&___7__TGeometryParticlesImp_N_02_00_Chaos__6B_;
  *(undefined8 *)&(this->MUniqueIdx).field_0x8 = 0;
  *(undefined ***)&this->MUniqueIdx = &___7__TArrayCollectionArray_UFUniqueIdx_Chaos___Chaos__6B_;
  *(undefined ***)&this->MGeometryParticleHandle =
       &
       ___7__TArrayCollectionArray_V__TSerializablePtr_V__TGeometryParticleHandleImp_N_02_00_Chaos___Chaos___Chaos__6B_
  ;
  *(undefined ***)&this->MGeometryParticle =
       &___7__TArrayCollectionArray_PEAV__TGeometryParticle_N_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MPhysicsProxy =
       &___7__TArrayCollectionArray_PEAVIPhysicsProxyBase___Chaos__6B_;
  *(undefined ***)&this->MShapesArray =
       &
       ___7__TArrayCollectionArray_V__TArray_V__TUniquePtr_VFShapeInstance_Chaos__U__TDefaultDelete_VFShapeInstance_Chaos______V__TSizedInlineAllocator__00_0CA_V__TSizedDefaultAllocator__0CA________Chaos__6B_
  ;
  *(undefined ***)&this->MCCDAxisThreshold =
       &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MSpatialIdx =
       &___7__TArrayCollectionArray_UFSpatialAccelerationIdx_Chaos___Chaos__6B_;
  *(undefined ***)&this->MSyncState = &___7__TArrayCollectionArray_UFSyncState_Chaos___Chaos__6B_;
  *(undefined ***)&this->MWeakParticleHandle =
       &___7__TArrayCollectionArray_VFWeakParticleHandle_Chaos___Chaos__6B_;
  *(undefined ***)&this->MParticleConstraints =
       &
       ___7__TArrayCollectionArray_V__TArray_PEAVFConstraintHandle_Chaos__V__TSizedDefaultAllocator__0CA______Chaos__6B_
  ;
  *(undefined ***)&this->MParticleCollisions =
       &___7__TArrayCollectionArray_VFParticleCollisions_Chaos___Chaos__6B_;
  *(undefined ***)&this->MGraphNode =
       &___7__TArrayCollectionArray_PEAVFPBDIslandParticle_Private_Chaos___Chaos__6B_;
  *(undefined ***)&this->MResimType = &___7__TArrayCollectionArray_W4EResimType_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->MUniqueIdx).field_0x10 = 0;
  *(undefined8 *)&(this->MGeometryParticleHandle).field_0x8 = 0;
  *(undefined8 *)&(this->MGeometryParticleHandle).field_0x10 = 0;
  *(undefined8 *)&(this->MGeometryParticle).field_0x8 = 0;
  *(undefined8 *)&(this->MGeometryParticle).field_0x10 = 0;
  *(undefined8 *)&(this->MPhysicsProxy).field_0x8 = 0;
  *(undefined8 *)&(this->MPhysicsProxy).field_0x10 = 0;
  *(undefined8 *)&(this->MHasCollision).field_0x8 = 0;
  *(undefined8 *)&(this->MHasCollision).field_0x10 = 0;
  *(undefined ***)&this->MHasCollision = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined8 *)&(this->MShapesArray).field_0x8 = 0;
  *(undefined8 *)&(this->MShapesArray).field_0x10 = 0;
  *(undefined8 *)&(this->MLocalBounds).field_0x8 = 0;
  *(undefined8 *)&(this->MLocalBounds).field_0x10 = 0;
  *(undefined ***)&this->MLocalBounds =
       &___7__TArrayCollectionArray_V__TAABB_N_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->MCCDAxisThreshold).field_0x8 = 0;
  *(undefined8 *)&(this->MCCDAxisThreshold).field_0x10 = 0;
  *(undefined8 *)&(this->MWorldSpaceInflatedBounds).field_0x8 = 0;
  *(undefined8 *)&(this->MWorldSpaceInflatedBounds).field_0x10 = 0;
  *(undefined ***)&this->MWorldSpaceInflatedBounds =
       &___7__TArrayCollectionArray_V__TAABB_N_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->MHasBounds).field_0x8 = 0;
  *(undefined8 *)&(this->MHasBounds).field_0x10 = 0;
  *(undefined ***)&this->MHasBounds = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined8 *)&(this->MSpatialIdx).field_0x8 = 0;
  *(undefined8 *)&(this->MSpatialIdx).field_0x10 = 0;
  *(undefined8 *)&(this->MSyncState).field_0x8 = 0;
  *(undefined8 *)&(this->MSyncState).field_0x10 = 0;
  *(undefined8 *)&(this->MWeakParticleHandle).field_0x8 = 0;
  *(undefined8 *)&(this->MWeakParticleHandle).field_0x10 = 0;
  *(undefined8 *)&(this->MParticleConstraints).field_0x8 = 0;
  *(undefined8 *)&(this->MParticleConstraints).field_0x10 = 0;
  *(undefined8 *)&(this->MParticleCollisions).field_0x8 = 0;
  *(undefined8 *)&(this->MParticleCollisions).field_0x10 = 0;
  *(undefined8 *)&(this->MGraphNode).field_0x8 = 0;
  *(undefined8 *)&(this->MGraphNode).field_0x10 = 0;
  *(undefined8 *)&(this->MResimType).field_0x8 = 0;
  *(undefined8 *)&(this->MResimType).field_0x10 = 0;
  *(undefined8 *)&(this->MEnabledDuringResim).field_0x8 = 0;
  *(undefined8 *)&(this->MEnabledDuringResim).field_0x10 = 0;
  *(undefined ***)&this->MEnabledDuringResim = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined8 *)&(this->MLightWeightDisabled).field_0x8 = 0;
  *(undefined8 *)&(this->MLightWeightDisabled).field_0x10 = 0;
  *(undefined ***)&this->MLightWeightDisabled = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined8 *)&(this->MParticleListMask).field_0x8 = 0;
  *(undefined8 *)&(this->MParticleListMask).field_0x10 = 0;
  *(undefined ***)&this->MParticleListMask =
       &___7__TArrayCollectionArray_W4EGeometryParticleListMask_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->MParticleIDs).field_0x8 = 0;
  *(undefined ***)&this->MParticleIDs = &___7__TArrayCollectionArray_UFParticleID_Chaos___Chaos__6B_
  ;
  *(undefined ***)&this->MDebugName =
       &___7__TArrayCollectionArray_V__TSharedPtr_VFString___00___Chaos__6B_;
  *(undefined8 *)&(this->MParticleIDs).field_0x10 = 0;
  *(undefined8 *)&(this->MDebugName).field_0x8 = 0;
  *(undefined8 *)&(this->MDebugName).field_0x10 = 0;
  this->MParticleType = Static;
  RegisterArrays(this);
  return this;
}

// TGeometryParticlesImp<double,3,1> @ 143af4280

TGeometryParticlesImp<double,3,1> * __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::TGeometryParticlesImp<double,3,1>
          (TGeometryParticlesImp<double,3,1> *this)

{
  TSimpleGeometryParticles<double,3>::TSimpleGeometryParticles<double,3>
            ((TSimpleGeometryParticles<double,3> *)this);
  this->MContainerListMask = None;
  this->_padding_ = (longlong)&___7__TGeometryParticlesImp_N_02_00_Chaos__6B_;
  *(undefined8 *)&(this->MUniqueIdx).field_0x8 = 0;
  *(undefined ***)&this->MUniqueIdx = &___7__TArrayCollectionArray_UFUniqueIdx_Chaos___Chaos__6B_;
  *(undefined ***)&this->MGeometryParticleHandle =
       &
       ___7__TArrayCollectionArray_V__TSerializablePtr_V__TGeometryParticleHandleImp_N_02_00_Chaos___Chaos___Chaos__6B_
  ;
  *(undefined ***)&this->MGeometryParticle =
       &___7__TArrayCollectionArray_PEAV__TGeometryParticle_N_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MPhysicsProxy =
       &___7__TArrayCollectionArray_PEAVIPhysicsProxyBase___Chaos__6B_;
  *(undefined ***)&this->MShapesArray =
       &
       ___7__TArrayCollectionArray_V__TArray_V__TUniquePtr_VFShapeInstance_Chaos__U__TDefaultDelete_VFShapeInstance_Chaos______V__TSizedInlineAllocator__00_0CA_V__TSizedDefaultAllocator__0CA________Chaos__6B_
  ;
  *(undefined ***)&this->MCCDAxisThreshold =
       &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MSpatialIdx =
       &___7__TArrayCollectionArray_UFSpatialAccelerationIdx_Chaos___Chaos__6B_;
  *(undefined ***)&this->MSyncState = &___7__TArrayCollectionArray_UFSyncState_Chaos___Chaos__6B_;
  *(undefined ***)&this->MWeakParticleHandle =
       &___7__TArrayCollectionArray_VFWeakParticleHandle_Chaos___Chaos__6B_;
  *(undefined ***)&this->MParticleConstraints =
       &
       ___7__TArrayCollectionArray_V__TArray_PEAVFConstraintHandle_Chaos__V__TSizedDefaultAllocator__0CA______Chaos__6B_
  ;
  *(undefined ***)&this->MParticleCollisions =
       &___7__TArrayCollectionArray_VFParticleCollisions_Chaos___Chaos__6B_;
  *(undefined ***)&this->MGraphNode =
       &___7__TArrayCollectionArray_PEAVFPBDIslandParticle_Private_Chaos___Chaos__6B_;
  *(undefined ***)&this->MResimType = &___7__TArrayCollectionArray_W4EResimType_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->MUniqueIdx).field_0x10 = 0;
  *(undefined8 *)&(this->MGeometryParticleHandle).field_0x8 = 0;
  *(undefined8 *)&(this->MGeometryParticleHandle).field_0x10 = 0;
  *(undefined8 *)&(this->MGeometryParticle).field_0x8 = 0;
  *(undefined8 *)&(this->MGeometryParticle).field_0x10 = 0;
  *(undefined8 *)&(this->MPhysicsProxy).field_0x8 = 0;
  *(undefined8 *)&(this->MPhysicsProxy).field_0x10 = 0;
  *(undefined8 *)&(this->MHasCollision).field_0x8 = 0;
  *(undefined8 *)&(this->MHasCollision).field_0x10 = 0;
  *(undefined ***)&this->MHasCollision = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined8 *)&(this->MShapesArray).field_0x8 = 0;
  *(undefined8 *)&(this->MShapesArray).field_0x10 = 0;
  *(undefined8 *)&(this->MLocalBounds).field_0x8 = 0;
  *(undefined8 *)&(this->MLocalBounds).field_0x10 = 0;
  *(undefined ***)&this->MLocalBounds =
       &___7__TArrayCollectionArray_V__TAABB_N_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->MCCDAxisThreshold).field_0x8 = 0;
  *(undefined8 *)&(this->MCCDAxisThreshold).field_0x10 = 0;
  *(undefined8 *)&(this->MWorldSpaceInflatedBounds).field_0x8 = 0;
  *(undefined8 *)&(this->MWorldSpaceInflatedBounds).field_0x10 = 0;
  *(undefined ***)&this->MWorldSpaceInflatedBounds =
       &___7__TArrayCollectionArray_V__TAABB_N_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->MHasBounds).field_0x8 = 0;
  *(undefined8 *)&(this->MHasBounds).field_0x10 = 0;
  *(undefined ***)&this->MHasBounds = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined8 *)&(this->MSpatialIdx).field_0x8 = 0;
  *(undefined8 *)&(this->MSpatialIdx).field_0x10 = 0;
  *(undefined8 *)&(this->MSyncState).field_0x8 = 0;
  *(undefined8 *)&(this->MSyncState).field_0x10 = 0;
  *(undefined8 *)&(this->MWeakParticleHandle).field_0x8 = 0;
  *(undefined8 *)&(this->MWeakParticleHandle).field_0x10 = 0;
  *(undefined8 *)&(this->MParticleConstraints).field_0x8 = 0;
  *(undefined8 *)&(this->MParticleConstraints).field_0x10 = 0;
  *(undefined8 *)&(this->MParticleCollisions).field_0x8 = 0;
  *(undefined8 *)&(this->MParticleCollisions).field_0x10 = 0;
  *(undefined8 *)&(this->MGraphNode).field_0x8 = 0;
  *(undefined8 *)&(this->MGraphNode).field_0x10 = 0;
  *(undefined8 *)&(this->MResimType).field_0x8 = 0;
  *(undefined8 *)&(this->MResimType).field_0x10 = 0;
  *(undefined8 *)&(this->MEnabledDuringResim).field_0x8 = 0;
  *(undefined8 *)&(this->MEnabledDuringResim).field_0x10 = 0;
  *(undefined ***)&this->MEnabledDuringResim = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined8 *)&(this->MLightWeightDisabled).field_0x8 = 0;
  *(undefined8 *)&(this->MLightWeightDisabled).field_0x10 = 0;
  *(undefined ***)&this->MLightWeightDisabled = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined8 *)&(this->MParticleListMask).field_0x8 = 0;
  *(undefined8 *)&(this->MParticleListMask).field_0x10 = 0;
  *(undefined ***)&this->MParticleListMask =
       &___7__TArrayCollectionArray_W4EGeometryParticleListMask_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->MParticleIDs).field_0x8 = 0;
  *(undefined ***)&this->MParticleIDs = &___7__TArrayCollectionArray_UFParticleID_Chaos___Chaos__6B_
  ;
  *(undefined ***)&this->MDebugName =
       &___7__TArrayCollectionArray_V__TSharedPtr_VFString___00___Chaos__6B_;
  *(undefined8 *)&(this->MParticleIDs).field_0x10 = 0;
  *(undefined8 *)&(this->MDebugName).field_0x8 = 0;
  *(undefined8 *)&(this->MDebugName).field_0x10 = 0;
  this->MParticleType = Static;
  RegisterArrays(this);
  return this;
}

// TGeometryParticlesImp<double,3,0> @ 143af4510

TGeometryParticlesImp<double,3,0> * __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::TGeometryParticlesImp<double,3,0>
          (TGeometryParticlesImp<double,3,0> *this,TGeometryParticlesImp<double,3,0> *param_1)

{
  TSimpleGeometryParticles<double,3>::TSimpleGeometryParticles<double,3>
            ((TSimpleGeometryParticles<double,3> *)this,
             (TSimpleGeometryParticles<double,3> *)param_1);
  this->_padding_ = (longlong)&___7__TGeometryParticlesImp_N_02_0A__Chaos__6B_;
  this->MContainerListMask = param_1->MContainerListMask;
  *(undefined ***)&this->MUniqueIdx = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MUniqueIdx).field_0x8 = 0;
  *(undefined8 *)&(this->MUniqueIdx).field_0x8 = *(undefined8 *)&(param_1->MUniqueIdx).field_0x8;
  *(undefined8 *)&(param_1->MUniqueIdx).field_0x8 = 0;
  *(undefined4 *)&(this->MUniqueIdx).field_0x10 = *(undefined4 *)&(param_1->MUniqueIdx).field_0x10;
  *(undefined4 *)&(this->MUniqueIdx).field_0x14 = *(undefined4 *)&(param_1->MUniqueIdx).field_0x14;
  *(undefined8 *)&(param_1->MUniqueIdx).field_0x10 = 0;
  *(undefined ***)&this->MUniqueIdx = &___7__TArrayCollectionArray_UFUniqueIdx_Chaos___Chaos__6B_;
  *(undefined ***)&this->MGeometryParticleHandle = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MGeometryParticleHandle).field_0x8 = 0;
  *(undefined8 *)&(this->MGeometryParticleHandle).field_0x8 =
       *(undefined8 *)&(param_1->MGeometryParticleHandle).field_0x8;
  *(undefined8 *)&(param_1->MGeometryParticleHandle).field_0x8 = 0;
  *(undefined4 *)&(this->MGeometryParticleHandle).field_0x10 =
       *(undefined4 *)&(param_1->MGeometryParticleHandle).field_0x10;
  *(undefined4 *)&(this->MGeometryParticleHandle).field_0x14 =
       *(undefined4 *)&(param_1->MGeometryParticleHandle).field_0x14;
  *(undefined8 *)&(param_1->MGeometryParticleHandle).field_0x10 = 0;
  *(undefined ***)&this->MGeometryParticleHandle =
       &
       ___7__TArrayCollectionArray_V__TSerializablePtr_V__TGeometryParticleHandleImp_N_02_00_Chaos___Chaos___Chaos__6B_
  ;
  *(undefined ***)&this->MGeometryParticle = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MGeometryParticle).field_0x8 = 0;
  *(undefined8 *)&(this->MGeometryParticle).field_0x8 =
       *(undefined8 *)&(param_1->MGeometryParticle).field_0x8;
  *(undefined8 *)&(param_1->MGeometryParticle).field_0x8 = 0;
  *(undefined4 *)&(this->MGeometryParticle).field_0x10 =
       *(undefined4 *)&(param_1->MGeometryParticle).field_0x10;
  *(undefined4 *)&(this->MGeometryParticle).field_0x14 =
       *(undefined4 *)&(param_1->MGeometryParticle).field_0x14;
  *(undefined8 *)&(param_1->MGeometryParticle).field_0x10 = 0;
  *(undefined ***)&this->MGeometryParticle =
       &___7__TArrayCollectionArray_PEAV__TGeometryParticle_N_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MPhysicsProxy = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MPhysicsProxy).field_0x8 = 0;
  *(undefined8 *)&(this->MPhysicsProxy).field_0x8 =
       *(undefined8 *)&(param_1->MPhysicsProxy).field_0x8;
  *(undefined8 *)&(param_1->MPhysicsProxy).field_0x8 = 0;
  *(undefined4 *)&(this->MPhysicsProxy).field_0x10 =
       *(undefined4 *)&(param_1->MPhysicsProxy).field_0x10;
  *(undefined4 *)&(this->MPhysicsProxy).field_0x14 =
       *(undefined4 *)&(param_1->MPhysicsProxy).field_0x14;
  *(undefined8 *)&(param_1->MPhysicsProxy).field_0x10 = 0;
  *(undefined ***)&this->MPhysicsProxy =
       &___7__TArrayCollectionArray_PEAVIPhysicsProxyBase___Chaos__6B_;
  *(undefined ***)&this->MHasCollision = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MHasCollision).field_0x8 = 0;
  *(undefined8 *)&(this->MHasCollision).field_0x8 =
       *(undefined8 *)&(param_1->MHasCollision).field_0x8;
  *(undefined8 *)&(param_1->MHasCollision).field_0x8 = 0;
  *(undefined4 *)&(this->MHasCollision).field_0x10 =
       *(undefined4 *)&(param_1->MHasCollision).field_0x10;
  *(undefined4 *)&(this->MHasCollision).field_0x14 =
       *(undefined4 *)&(param_1->MHasCollision).field_0x14;
  *(undefined8 *)&(param_1->MHasCollision).field_0x10 = 0;
  *(undefined ***)&this->MHasCollision = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined ***)&this->MShapesArray = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MShapesArray).field_0x8 = 0;
  *(undefined8 *)&(this->MShapesArray).field_0x8 = *(undefined8 *)&(param_1->MShapesArray).field_0x8
  ;
  *(undefined8 *)&(param_1->MShapesArray).field_0x8 = 0;
  *(undefined4 *)&(this->MShapesArray).field_0x10 =
       *(undefined4 *)&(param_1->MShapesArray).field_0x10;
  *(undefined4 *)&(this->MShapesArray).field_0x14 =
       *(undefined4 *)&(param_1->MShapesArray).field_0x14;
  *(undefined8 *)&(param_1->MShapesArray).field_0x10 = 0;
  *(undefined ***)&this->MShapesArray =
       &
       ___7__TArrayCollectionArray_V__TArray_V__TUniquePtr_VFShapeInstance_Chaos__U__TDefaultDelete_VFShapeInstance_Chaos______V__TSizedInlineAllocator__00_0CA_V__TSizedDefaultAllocator__0CA________Chaos__6B_
  ;
  *(undefined ***)&this->MLocalBounds = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MLocalBounds).field_0x8 = 0;
  *(undefined8 *)&(this->MLocalBounds).field_0x8 = *(undefined8 *)&(param_1->MLocalBounds).field_0x8
  ;
  *(undefined8 *)&(param_1->MLocalBounds).field_0x8 = 0;
  *(undefined4 *)&(this->MLocalBounds).field_0x10 =
       *(undefined4 *)&(param_1->MLocalBounds).field_0x10;
  *(undefined4 *)&(this->MLocalBounds).field_0x14 =
       *(undefined4 *)&(param_1->MLocalBounds).field_0x14;
  *(undefined8 *)&(param_1->MLocalBounds).field_0x10 = 0;
  *(undefined ***)&this->MLocalBounds =
       &___7__TArrayCollectionArray_V__TAABB_N_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MCCDAxisThreshold = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MCCDAxisThreshold).field_0x8 = 0;
  *(undefined8 *)&(this->MCCDAxisThreshold).field_0x8 =
       *(undefined8 *)&(param_1->MCCDAxisThreshold).field_0x8;
  *(undefined8 *)&(param_1->MCCDAxisThreshold).field_0x8 = 0;
  *(undefined4 *)&(this->MCCDAxisThreshold).field_0x10 =
       *(undefined4 *)&(param_1->MCCDAxisThreshold).field_0x10;
  *(undefined4 *)&(this->MCCDAxisThreshold).field_0x14 =
       *(undefined4 *)&(param_1->MCCDAxisThreshold).field_0x14;
  *(undefined8 *)&(param_1->MCCDAxisThreshold).field_0x10 = 0;
  *(undefined ***)&this->MCCDAxisThreshold =
       &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MWorldSpaceInflatedBounds = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MWorldSpaceInflatedBounds).field_0x8 = 0;
  *(undefined8 *)&(this->MWorldSpaceInflatedBounds).field_0x8 =
       *(undefined8 *)&(param_1->MWorldSpaceInflatedBounds).field_0x8;
  *(undefined8 *)&(param_1->MWorldSpaceInflatedBounds).field_0x8 = 0;
  *(undefined4 *)&(this->MWorldSpaceInflatedBounds).field_0x10 =
       *(undefined4 *)&(param_1->MWorldSpaceInflatedBounds).field_0x10;
  *(undefined4 *)&(this->MWorldSpaceInflatedBounds).field_0x14 =
       *(undefined4 *)&(param_1->MWorldSpaceInflatedBounds).field_0x14;
  *(undefined8 *)&(param_1->MWorldSpaceInflatedBounds).field_0x10 = 0;
  *(undefined ***)&this->MWorldSpaceInflatedBounds =
       &___7__TArrayCollectionArray_V__TAABB_N_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MHasBounds = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MHasBounds).field_0x8 = 0;
  *(undefined8 *)&(this->MHasBounds).field_0x8 = *(undefined8 *)&(param_1->MHasBounds).field_0x8;
  *(undefined8 *)&(param_1->MHasBounds).field_0x8 = 0;
  *(undefined4 *)&(this->MHasBounds).field_0x10 = *(undefined4 *)&(param_1->MHasBounds).field_0x10;
  *(undefined4 *)&(this->MHasBounds).field_0x14 = *(undefined4 *)&(param_1->MHasBounds).field_0x14;
  *(undefined8 *)&(param_1->MHasBounds).field_0x10 = 0;
  *(undefined ***)&this->MHasBounds = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined ***)&this->MSpatialIdx = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MSpatialIdx).field_0x8 = 0;
  *(undefined8 *)&(this->MSpatialIdx).field_0x8 = *(undefined8 *)&(param_1->MSpatialIdx).field_0x8;
  *(undefined8 *)&(param_1->MSpatialIdx).field_0x8 = 0;
  *(undefined4 *)&(this->MSpatialIdx).field_0x10 = *(undefined4 *)&(param_1->MSpatialIdx).field_0x10
  ;
  *(undefined4 *)&(this->MSpatialIdx).field_0x14 = *(undefined4 *)&(param_1->MSpatialIdx).field_0x14
  ;
  *(undefined8 *)&(param_1->MSpatialIdx).field_0x10 = 0;
  *(undefined ***)&this->MSpatialIdx =
       &___7__TArrayCollectionArray_UFSpatialAccelerationIdx_Chaos___Chaos__6B_;
  *(undefined ***)&this->MSyncState = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MSyncState).field_0x8 = 0;
  *(undefined8 *)&(this->MSyncState).field_0x8 = *(undefined8 *)&(param_1->MSyncState).field_0x8;
  *(undefined8 *)&(param_1->MSyncState).field_0x8 = 0;
  *(undefined4 *)&(this->MSyncState).field_0x10 = *(undefined4 *)&(param_1->MSyncState).field_0x10;
  *(undefined4 *)&(this->MSyncState).field_0x14 = *(undefined4 *)&(param_1->MSyncState).field_0x14;
  *(undefined8 *)&(param_1->MSyncState).field_0x10 = 0;
  *(undefined ***)&this->MSyncState = &___7__TArrayCollectionArray_UFSyncState_Chaos___Chaos__6B_;
  *(undefined ***)&this->MWeakParticleHandle = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MWeakParticleHandle).field_0x8 = 0;
  *(undefined8 *)&(this->MWeakParticleHandle).field_0x8 =
       *(undefined8 *)&(param_1->MWeakParticleHandle).field_0x8;
  *(undefined8 *)&(param_1->MWeakParticleHandle).field_0x8 = 0;
  *(undefined4 *)&(this->MWeakParticleHandle).field_0x10 =
       *(undefined4 *)&(param_1->MWeakParticleHandle).field_0x10;
  *(undefined4 *)&(this->MWeakParticleHandle).field_0x14 =
       *(undefined4 *)&(param_1->MWeakParticleHandle).field_0x14;
  *(undefined8 *)&(param_1->MWeakParticleHandle).field_0x10 = 0;
  *(undefined ***)&this->MWeakParticleHandle =
       &___7__TArrayCollectionArray_VFWeakParticleHandle_Chaos___Chaos__6B_;
  *(undefined ***)&this->MParticleConstraints = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MParticleConstraints).field_0x8 = 0;
  *(undefined8 *)&(this->MParticleConstraints).field_0x8 =
       *(undefined8 *)&(param_1->MParticleConstraints).field_0x8;
  *(undefined8 *)&(param_1->MParticleConstraints).field_0x8 = 0;
  *(undefined4 *)&(this->MParticleConstraints).field_0x10 =
       *(undefined4 *)&(param_1->MParticleConstraints).field_0x10;
  *(undefined4 *)&(this->MParticleConstraints).field_0x14 =
       *(undefined4 *)&(param_1->MParticleConstraints).field_0x14;
  *(undefined8 *)&(param_1->MParticleConstraints).field_0x10 = 0;
  *(undefined ***)&this->MParticleConstraints =
       &
       ___7__TArrayCollectionArray_V__TArray_PEAVFConstraintHandle_Chaos__V__TSizedDefaultAllocator__0CA______Chaos__6B_
  ;
  *(undefined ***)&this->MParticleCollisions = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MParticleCollisions).field_0x8 = 0;
  *(undefined8 *)&(this->MParticleCollisions).field_0x8 =
       *(undefined8 *)&(param_1->MParticleCollisions).field_0x8;
  *(undefined8 *)&(param_1->MParticleCollisions).field_0x8 = 0;
  *(undefined4 *)&(this->MParticleCollisions).field_0x10 =
       *(undefined4 *)&(param_1->MParticleCollisions).field_0x10;
  *(undefined4 *)&(this->MParticleCollisions).field_0x14 =
       *(undefined4 *)&(param_1->MParticleCollisions).field_0x14;
  *(undefined8 *)&(param_1->MParticleCollisions).field_0x10 = 0;
  *(undefined ***)&this->MParticleCollisions =
       &___7__TArrayCollectionArray_VFParticleCollisions_Chaos___Chaos__6B_;
  *(undefined ***)&this->MGraphNode = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MGraphNode).field_0x8 = 0;
  *(undefined8 *)&(this->MGraphNode).field_0x8 = *(undefined8 *)&(param_1->MGraphNode).field_0x8;
  *(undefined8 *)&(param_1->MGraphNode).field_0x8 = 0;
  *(undefined4 *)&(this->MGraphNode).field_0x10 = *(undefined4 *)&(param_1->MGraphNode).field_0x10;
  *(undefined4 *)&(this->MGraphNode).field_0x14 = *(undefined4 *)&(param_1->MGraphNode).field_0x14;
  *(undefined8 *)&(param_1->MGraphNode).field_0x10 = 0;
  *(undefined ***)&this->MGraphNode =
       &___7__TArrayCollectionArray_PEAVFPBDIslandParticle_Private_Chaos___Chaos__6B_;
  *(undefined ***)&this->MResimType = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MResimType).field_0x8 = 0;
  *(undefined8 *)&(this->MResimType).field_0x8 = *(undefined8 *)&(param_1->MResimType).field_0x8;
  *(undefined8 *)&(param_1->MResimType).field_0x8 = 0;
  *(undefined4 *)&(this->MResimType).field_0x10 = *(undefined4 *)&(param_1->MResimType).field_0x10;
  *(undefined4 *)&(this->MResimType).field_0x14 = *(undefined4 *)&(param_1->MResimType).field_0x14;
  *(undefined8 *)&(param_1->MResimType).field_0x10 = 0;
  *(undefined ***)&this->MResimType = &___7__TArrayCollectionArray_W4EResimType_Chaos___Chaos__6B_;
  *(undefined ***)&this->MEnabledDuringResim = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MEnabledDuringResim).field_0x8 = 0;
  *(undefined8 *)&(this->MEnabledDuringResim).field_0x8 =
       *(undefined8 *)&(param_1->MEnabledDuringResim).field_0x8;
  *(undefined8 *)&(param_1->MEnabledDuringResim).field_0x8 = 0;
  *(undefined4 *)&(this->MEnabledDuringResim).field_0x10 =
       *(undefined4 *)&(param_1->MEnabledDuringResim).field_0x10;
  *(undefined4 *)&(this->MEnabledDuringResim).field_0x14 =
       *(undefined4 *)&(param_1->MEnabledDuringResim).field_0x14;
  *(undefined8 *)&(param_1->MEnabledDuringResim).field_0x10 = 0;
  *(undefined ***)&this->MEnabledDuringResim = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined ***)&this->MLightWeightDisabled = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MLightWeightDisabled).field_0x8 = 0;
  *(undefined8 *)&(this->MLightWeightDisabled).field_0x8 =
       *(undefined8 *)&(param_1->MLightWeightDisabled).field_0x8;
  *(undefined8 *)&(param_1->MLightWeightDisabled).field_0x8 = 0;
  *(undefined4 *)&(this->MLightWeightDisabled).field_0x10 =
       *(undefined4 *)&(param_1->MLightWeightDisabled).field_0x10;
  *(undefined4 *)&(this->MLightWeightDisabled).field_0x14 =
       *(undefined4 *)&(param_1->MLightWeightDisabled).field_0x14;
  *(undefined8 *)&(param_1->MLightWeightDisabled).field_0x10 = 0;
  *(undefined ***)&this->MLightWeightDisabled = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined8 *)&(this->MParticleListMask).field_0x8 = 0;
  *(undefined8 *)&(this->MParticleListMask).field_0x10 = 0;
  *(undefined ***)&this->MParticleListMask =
       &___7__TArrayCollectionArray_W4EGeometryParticleListMask_Chaos___Chaos__6B_;
  *(undefined ***)&this->MParticleIDs = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MParticleIDs).field_0x8 = 0;
  *(undefined8 *)&(this->MParticleIDs).field_0x8 = *(undefined8 *)&(param_1->MParticleIDs).field_0x8
  ;
  *(undefined8 *)&(param_1->MParticleIDs).field_0x8 = 0;
  *(undefined4 *)&(this->MParticleIDs).field_0x10 =
       *(undefined4 *)&(param_1->MParticleIDs).field_0x10;
  *(undefined4 *)&(this->MParticleIDs).field_0x14 =
       *(undefined4 *)&(param_1->MParticleIDs).field_0x14;
  *(undefined8 *)&(param_1->MParticleIDs).field_0x10 = 0;
  *(undefined ***)&this->MParticleIDs = &___7__TArrayCollectionArray_UFParticleID_Chaos___Chaos__6B_
  ;
  *(undefined ***)&this->MDebugName = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MDebugName).field_0x8 = 0;
  *(undefined8 *)&(this->MDebugName).field_0x8 = *(undefined8 *)&(param_1->MDebugName).field_0x8;
  *(undefined8 *)&(param_1->MDebugName).field_0x8 = 0;
  *(undefined4 *)&(this->MDebugName).field_0x10 = *(undefined4 *)&(param_1->MDebugName).field_0x10;
  *(undefined4 *)&(this->MDebugName).field_0x14 = *(undefined4 *)&(param_1->MDebugName).field_0x14;
  *(undefined8 *)&(param_1->MDebugName).field_0x10 = 0;
  *(undefined ***)&this->MDebugName =
       &___7__TArrayCollectionArray_V__TSharedPtr_VFString___00___Chaos__6B_;
  this->MParticleType = Static;
  RegisterArrays(this);
  return this;
}

// TGeometryParticlesImp<double,3,0> @ 143af4bf0

TGeometryParticlesImp<double,3,0> * __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::TGeometryParticlesImp<double,3,0>
          (TGeometryParticlesImp<double,3,0> *this,TParticles<double,3> *param_1)

{
  TSimpleGeometryParticles<double,3>::TSimpleGeometryParticles<double,3>
            ((TSimpleGeometryParticles<double,3> *)this,param_1);
  this->MContainerListMask = None;
  this->_padding_ = (longlong)&___7__TGeometryParticlesImp_N_02_0A__Chaos__6B_;
  *(undefined8 *)&(this->MUniqueIdx).field_0x8 = 0;
  *(undefined ***)&this->MUniqueIdx = &___7__TArrayCollectionArray_UFUniqueIdx_Chaos___Chaos__6B_;
  *(undefined ***)&this->MGeometryParticleHandle =
       &
       ___7__TArrayCollectionArray_V__TSerializablePtr_V__TGeometryParticleHandleImp_N_02_00_Chaos___Chaos___Chaos__6B_
  ;
  *(undefined ***)&this->MGeometryParticle =
       &___7__TArrayCollectionArray_PEAV__TGeometryParticle_N_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MPhysicsProxy =
       &___7__TArrayCollectionArray_PEAVIPhysicsProxyBase___Chaos__6B_;
  *(undefined ***)&this->MShapesArray =
       &
       ___7__TArrayCollectionArray_V__TArray_V__TUniquePtr_VFShapeInstance_Chaos__U__TDefaultDelete_VFShapeInstance_Chaos______V__TSizedInlineAllocator__00_0CA_V__TSizedDefaultAllocator__0CA________Chaos__6B_
  ;
  *(undefined ***)&this->MCCDAxisThreshold =
       &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MSpatialIdx =
       &___7__TArrayCollectionArray_UFSpatialAccelerationIdx_Chaos___Chaos__6B_;
  *(undefined ***)&this->MSyncState = &___7__TArrayCollectionArray_UFSyncState_Chaos___Chaos__6B_;
  *(undefined ***)&this->MWeakParticleHandle =
       &___7__TArrayCollectionArray_VFWeakParticleHandle_Chaos___Chaos__6B_;
  *(undefined ***)&this->MParticleConstraints =
       &
       ___7__TArrayCollectionArray_V__TArray_PEAVFConstraintHandle_Chaos__V__TSizedDefaultAllocator__0CA______Chaos__6B_
  ;
  *(undefined ***)&this->MParticleCollisions =
       &___7__TArrayCollectionArray_VFParticleCollisions_Chaos___Chaos__6B_;
  *(undefined ***)&this->MGraphNode =
       &___7__TArrayCollectionArray_PEAVFPBDIslandParticle_Private_Chaos___Chaos__6B_;
  *(undefined ***)&this->MResimType = &___7__TArrayCollectionArray_W4EResimType_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->MUniqueIdx).field_0x10 = 0;
  *(undefined8 *)&(this->MGeometryParticleHandle).field_0x8 = 0;
  *(undefined8 *)&(this->MGeometryParticleHandle).field_0x10 = 0;
  *(undefined8 *)&(this->MGeometryParticle).field_0x8 = 0;
  *(undefined8 *)&(this->MGeometryParticle).field_0x10 = 0;
  *(undefined8 *)&(this->MPhysicsProxy).field_0x8 = 0;
  *(undefined8 *)&(this->MPhysicsProxy).field_0x10 = 0;
  *(undefined8 *)&(this->MHasCollision).field_0x8 = 0;
  *(undefined8 *)&(this->MHasCollision).field_0x10 = 0;
  *(undefined ***)&this->MHasCollision = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined8 *)&(this->MShapesArray).field_0x8 = 0;
  *(undefined8 *)&(this->MShapesArray).field_0x10 = 0;
  *(undefined8 *)&(this->MLocalBounds).field_0x8 = 0;
  *(undefined8 *)&(this->MLocalBounds).field_0x10 = 0;
  *(undefined ***)&this->MLocalBounds =
       &___7__TArrayCollectionArray_V__TAABB_N_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->MCCDAxisThreshold).field_0x8 = 0;
  *(undefined8 *)&(this->MCCDAxisThreshold).field_0x10 = 0;
  *(undefined8 *)&(this->MWorldSpaceInflatedBounds).field_0x8 = 0;
  *(undefined8 *)&(this->MWorldSpaceInflatedBounds).field_0x10 = 0;
  *(undefined ***)&this->MWorldSpaceInflatedBounds =
       &___7__TArrayCollectionArray_V__TAABB_N_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->MHasBounds).field_0x8 = 0;
  *(undefined8 *)&(this->MHasBounds).field_0x10 = 0;
  *(undefined ***)&this->MHasBounds = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined8 *)&(this->MSpatialIdx).field_0x8 = 0;
  *(undefined8 *)&(this->MSpatialIdx).field_0x10 = 0;
  *(undefined8 *)&(this->MSyncState).field_0x8 = 0;
  *(undefined8 *)&(this->MSyncState).field_0x10 = 0;
  *(undefined8 *)&(this->MWeakParticleHandle).field_0x8 = 0;
  *(undefined8 *)&(this->MWeakParticleHandle).field_0x10 = 0;
  *(undefined8 *)&(this->MParticleConstraints).field_0x8 = 0;
  *(undefined8 *)&(this->MParticleConstraints).field_0x10 = 0;
  *(undefined8 *)&(this->MParticleCollisions).field_0x8 = 0;
  *(undefined8 *)&(this->MParticleCollisions).field_0x10 = 0;
  *(undefined8 *)&(this->MGraphNode).field_0x8 = 0;
  *(undefined8 *)&(this->MGraphNode).field_0x10 = 0;
  *(undefined8 *)&(this->MResimType).field_0x8 = 0;
  *(undefined8 *)&(this->MResimType).field_0x10 = 0;
  *(undefined8 *)&(this->MEnabledDuringResim).field_0x8 = 0;
  *(undefined8 *)&(this->MEnabledDuringResim).field_0x10 = 0;
  *(undefined ***)&this->MEnabledDuringResim = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined8 *)&(this->MLightWeightDisabled).field_0x8 = 0;
  *(undefined8 *)&(this->MLightWeightDisabled).field_0x10 = 0;
  *(undefined ***)&this->MLightWeightDisabled = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined8 *)&(this->MParticleListMask).field_0x8 = 0;
  *(undefined8 *)&(this->MParticleListMask).field_0x10 = 0;
  *(undefined ***)&this->MParticleListMask =
       &___7__TArrayCollectionArray_W4EGeometryParticleListMask_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->MParticleIDs).field_0x8 = 0;
  *(undefined ***)&this->MParticleIDs = &___7__TArrayCollectionArray_UFParticleID_Chaos___Chaos__6B_
  ;
  *(undefined ***)&this->MDebugName =
       &___7__TArrayCollectionArray_V__TSharedPtr_VFString___00___Chaos__6B_;
  *(undefined8 *)&(this->MParticleIDs).field_0x10 = 0;
  *(undefined8 *)&(this->MDebugName).field_0x8 = 0;
  *(undefined8 *)&(this->MDebugName).field_0x10 = 0;
  this->MParticleType = Static;
  RegisterArrays(this);
  return this;
}

// TGeometryParticlesImp<double,3,0> @ 143af4e80

TGeometryParticlesImp<double,3,0> * __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::TGeometryParticlesImp<double,3,0>
          (TGeometryParticlesImp<double,3,0> *this)

{
  TSimpleGeometryParticles<double,3>::TSimpleGeometryParticles<double,3>
            ((TSimpleGeometryParticles<double,3> *)this);
  this->MContainerListMask = None;
  this->_padding_ = (longlong)&___7__TGeometryParticlesImp_N_02_0A__Chaos__6B_;
  *(undefined8 *)&(this->MUniqueIdx).field_0x8 = 0;
  *(undefined ***)&this->MUniqueIdx = &___7__TArrayCollectionArray_UFUniqueIdx_Chaos___Chaos__6B_;
  *(undefined ***)&this->MGeometryParticleHandle =
       &
       ___7__TArrayCollectionArray_V__TSerializablePtr_V__TGeometryParticleHandleImp_N_02_00_Chaos___Chaos___Chaos__6B_
  ;
  *(undefined ***)&this->MGeometryParticle =
       &___7__TArrayCollectionArray_PEAV__TGeometryParticle_N_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MPhysicsProxy =
       &___7__TArrayCollectionArray_PEAVIPhysicsProxyBase___Chaos__6B_;
  *(undefined ***)&this->MShapesArray =
       &
       ___7__TArrayCollectionArray_V__TArray_V__TUniquePtr_VFShapeInstance_Chaos__U__TDefaultDelete_VFShapeInstance_Chaos______V__TSizedInlineAllocator__00_0CA_V__TSizedDefaultAllocator__0CA________Chaos__6B_
  ;
  *(undefined ***)&this->MCCDAxisThreshold =
       &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MSpatialIdx =
       &___7__TArrayCollectionArray_UFSpatialAccelerationIdx_Chaos___Chaos__6B_;
  *(undefined ***)&this->MSyncState = &___7__TArrayCollectionArray_UFSyncState_Chaos___Chaos__6B_;
  *(undefined ***)&this->MWeakParticleHandle =
       &___7__TArrayCollectionArray_VFWeakParticleHandle_Chaos___Chaos__6B_;
  *(undefined ***)&this->MParticleConstraints =
       &
       ___7__TArrayCollectionArray_V__TArray_PEAVFConstraintHandle_Chaos__V__TSizedDefaultAllocator__0CA______Chaos__6B_
  ;
  *(undefined ***)&this->MParticleCollisions =
       &___7__TArrayCollectionArray_VFParticleCollisions_Chaos___Chaos__6B_;
  *(undefined ***)&this->MGraphNode =
       &___7__TArrayCollectionArray_PEAVFPBDIslandParticle_Private_Chaos___Chaos__6B_;
  *(undefined ***)&this->MResimType = &___7__TArrayCollectionArray_W4EResimType_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->MUniqueIdx).field_0x10 = 0;
  *(undefined8 *)&(this->MGeometryParticleHandle).field_0x8 = 0;
  *(undefined8 *)&(this->MGeometryParticleHandle).field_0x10 = 0;
  *(undefined8 *)&(this->MGeometryParticle).field_0x8 = 0;
  *(undefined8 *)&(this->MGeometryParticle).field_0x10 = 0;
  *(undefined8 *)&(this->MPhysicsProxy).field_0x8 = 0;
  *(undefined8 *)&(this->MPhysicsProxy).field_0x10 = 0;
  *(undefined8 *)&(this->MHasCollision).field_0x8 = 0;
  *(undefined8 *)&(this->MHasCollision).field_0x10 = 0;
  *(undefined ***)&this->MHasCollision = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined8 *)&(this->MShapesArray).field_0x8 = 0;
  *(undefined8 *)&(this->MShapesArray).field_0x10 = 0;
  *(undefined8 *)&(this->MLocalBounds).field_0x8 = 0;
  *(undefined8 *)&(this->MLocalBounds).field_0x10 = 0;
  *(undefined ***)&this->MLocalBounds =
       &___7__TArrayCollectionArray_V__TAABB_N_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->MCCDAxisThreshold).field_0x8 = 0;
  *(undefined8 *)&(this->MCCDAxisThreshold).field_0x10 = 0;
  *(undefined8 *)&(this->MWorldSpaceInflatedBounds).field_0x8 = 0;
  *(undefined8 *)&(this->MWorldSpaceInflatedBounds).field_0x10 = 0;
  *(undefined ***)&this->MWorldSpaceInflatedBounds =
       &___7__TArrayCollectionArray_V__TAABB_N_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->MHasBounds).field_0x8 = 0;
  *(undefined8 *)&(this->MHasBounds).field_0x10 = 0;
  *(undefined ***)&this->MHasBounds = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined8 *)&(this->MSpatialIdx).field_0x8 = 0;
  *(undefined8 *)&(this->MSpatialIdx).field_0x10 = 0;
  *(undefined8 *)&(this->MSyncState).field_0x8 = 0;
  *(undefined8 *)&(this->MSyncState).field_0x10 = 0;
  *(undefined8 *)&(this->MWeakParticleHandle).field_0x8 = 0;
  *(undefined8 *)&(this->MWeakParticleHandle).field_0x10 = 0;
  *(undefined8 *)&(this->MParticleConstraints).field_0x8 = 0;
  *(undefined8 *)&(this->MParticleConstraints).field_0x10 = 0;
  *(undefined8 *)&(this->MParticleCollisions).field_0x8 = 0;
  *(undefined8 *)&(this->MParticleCollisions).field_0x10 = 0;
  *(undefined8 *)&(this->MGraphNode).field_0x8 = 0;
  *(undefined8 *)&(this->MGraphNode).field_0x10 = 0;
  *(undefined8 *)&(this->MResimType).field_0x8 = 0;
  *(undefined8 *)&(this->MResimType).field_0x10 = 0;
  *(undefined8 *)&(this->MEnabledDuringResim).field_0x8 = 0;
  *(undefined8 *)&(this->MEnabledDuringResim).field_0x10 = 0;
  *(undefined ***)&this->MEnabledDuringResim = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined8 *)&(this->MLightWeightDisabled).field_0x8 = 0;
  *(undefined8 *)&(this->MLightWeightDisabled).field_0x10 = 0;
  *(undefined ***)&this->MLightWeightDisabled = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined8 *)&(this->MParticleListMask).field_0x8 = 0;
  *(undefined8 *)&(this->MParticleListMask).field_0x10 = 0;
  *(undefined ***)&this->MParticleListMask =
       &___7__TArrayCollectionArray_W4EGeometryParticleListMask_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->MParticleIDs).field_0x8 = 0;
  *(undefined ***)&this->MParticleIDs = &___7__TArrayCollectionArray_UFParticleID_Chaos___Chaos__6B_
  ;
  *(undefined ***)&this->MDebugName =
       &___7__TArrayCollectionArray_V__TSharedPtr_VFString___00___Chaos__6B_;
  *(undefined8 *)&(this->MParticleIDs).field_0x10 = 0;
  *(undefined8 *)&(this->MDebugName).field_0x8 = 0;
  *(undefined8 *)&(this->MDebugName).field_0x10 = 0;
  this->MParticleType = Static;
  RegisterArrays(this);
  return this;
}

// ~TGeometryParticlesImp<float,3,1> @ 143afb200

void __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::~TGeometryParticlesImp<float,3,1>
          (TGeometryParticlesImp<float,3,1> *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7__TGeometryParticlesImp_M_02_00_Chaos__6B_;
  *(undefined ***)&this->MDebugName =
       &___7__TArrayCollectionArray_V__TSharedPtr_VFString___00___Chaos__6B_;
  DestructItems<TSharedPtr<FString,1>,int>
            (*(TSharedPtr<FString,1> **)&(this->MDebugName).field_0x8,
             *(int *)&(this->MDebugName).field_0x10);
  pvVar1 = *(void **)&(this->MDebugName).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MParticleIDs = &___7__TArrayCollectionArray_UFParticleID_Chaos___Chaos__6B_
  ;
  pvVar1 = *(void **)&(this->MParticleIDs).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MParticleListMask =
       &___7__TArrayCollectionArray_W4EGeometryParticleListMask_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MParticleListMask).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MLightWeightDisabled = &___7__TArrayCollectionArray__N_Chaos__6B_;
  pvVar1 = *(void **)&(this->MLightWeightDisabled).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MEnabledDuringResim = &___7__TArrayCollectionArray__N_Chaos__6B_;
  pvVar1 = *(void **)&(this->MEnabledDuringResim).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MResimType = &___7__TArrayCollectionArray_W4EResimType_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MResimType).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MGraphNode =
       &___7__TArrayCollectionArray_PEAVFPBDIslandParticle_Private_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MGraphNode).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MParticleCollisions =
       &___7__TArrayCollectionArray_VFParticleCollisions_Chaos___Chaos__6B_;
  DestructItems<Chaos::FParticleCollisions,int>
            (*(FParticleCollisions **)&(this->MParticleCollisions).field_0x8,
             *(int *)&(this->MParticleCollisions).field_0x10);
  pvVar1 = *(void **)&(this->MParticleCollisions).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MParticleConstraints =
       &
       ___7__TArrayCollectionArray_V__TArray_PEAVFConstraintHandle_Chaos__V__TSizedDefaultAllocator__0CA______Chaos__6B_
  ;
  DestructItems<TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_> **)
              &(this->MParticleConstraints).field_0x8,
             *(int *)&(this->MParticleConstraints).field_0x10);
  pvVar1 = *(void **)&(this->MParticleConstraints).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MWeakParticleHandle =
       &___7__TArrayCollectionArray_VFWeakParticleHandle_Chaos___Chaos__6B_;
  DestructItems<Chaos::FWeakParticleHandle,int>
            (*(FWeakParticleHandle **)&(this->MWeakParticleHandle).field_0x8,
             *(int *)&(this->MWeakParticleHandle).field_0x10);
  pvVar1 = *(void **)&(this->MWeakParticleHandle).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MSyncState = &___7__TArrayCollectionArray_UFSyncState_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MSyncState).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MSpatialIdx =
       &___7__TArrayCollectionArray_UFSpatialAccelerationIdx_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MSpatialIdx).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MHasBounds = &___7__TArrayCollectionArray__N_Chaos__6B_;
  pvVar1 = *(void **)&(this->MHasBounds).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MWorldSpaceInflatedBounds =
       &___7__TArrayCollectionArray_V__TAABB_M_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MWorldSpaceInflatedBounds).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MCCDAxisThreshold =
       &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MCCDAxisThreshold).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MLocalBounds =
       &___7__TArrayCollectionArray_V__TAABB_M_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MLocalBounds).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MShapesArray =
       &
       ___7__TArrayCollectionArray_V__TArray_V__TUniquePtr_VFShapeInstance_Chaos__U__TDefaultDelete_VFShapeInstance_Chaos______V__TSizedInlineAllocator__00_0CA_V__TSizedDefaultAllocator__0CA________Chaos__6B_
  ;
  DestructItems<TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,int>
            (*(TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
               **)&(this->MShapesArray).field_0x8,*(int *)&(this->MShapesArray).field_0x10);
  pvVar1 = *(void **)&(this->MShapesArray).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MHasCollision = &___7__TArrayCollectionArray__N_Chaos__6B_;
  pvVar1 = *(void **)&(this->MHasCollision).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MPhysicsProxy =
       &___7__TArrayCollectionArray_PEAVIPhysicsProxyBase___Chaos__6B_;
  pvVar1 = *(void **)&(this->MPhysicsProxy).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MGeometryParticle =
       &___7__TArrayCollectionArray_PEAV__TGeometryParticle_N_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MGeometryParticle).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MGeometryParticleHandle =
       &
       ___7__TArrayCollectionArray_V__TSerializablePtr_V__TGeometryParticleHandleImp_N_02_00_Chaos___Chaos___Chaos__6B_
  ;
  pvVar1 = *(void **)&(this->MGeometryParticleHandle).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MUniqueIdx = &___7__TArrayCollectionArray_UFUniqueIdx_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MUniqueIdx).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSimpleGeometryParticles<float,3>::~TSimpleGeometryParticles<float,3>
            ((TSimpleGeometryParticles<float,3> *)this);
  return;
}

// ~TGeometryParticlesImp<double,3,1> @ 143afb520

void __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::~TGeometryParticlesImp<double,3,1>
          (TGeometryParticlesImp<double,3,1> *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7__TGeometryParticlesImp_N_02_00_Chaos__6B_;
  *(undefined ***)&this->MDebugName =
       &___7__TArrayCollectionArray_V__TSharedPtr_VFString___00___Chaos__6B_;
  DestructItems<TSharedPtr<FString,1>,int>
            (*(TSharedPtr<FString,1> **)&(this->MDebugName).field_0x8,
             *(int *)&(this->MDebugName).field_0x10);
  pvVar1 = *(void **)&(this->MDebugName).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MParticleIDs = &___7__TArrayCollectionArray_UFParticleID_Chaos___Chaos__6B_
  ;
  pvVar1 = *(void **)&(this->MParticleIDs).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MParticleListMask =
       &___7__TArrayCollectionArray_W4EGeometryParticleListMask_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MParticleListMask).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MLightWeightDisabled = &___7__TArrayCollectionArray__N_Chaos__6B_;
  pvVar1 = *(void **)&(this->MLightWeightDisabled).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MEnabledDuringResim = &___7__TArrayCollectionArray__N_Chaos__6B_;
  pvVar1 = *(void **)&(this->MEnabledDuringResim).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MResimType = &___7__TArrayCollectionArray_W4EResimType_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MResimType).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MGraphNode =
       &___7__TArrayCollectionArray_PEAVFPBDIslandParticle_Private_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MGraphNode).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MParticleCollisions =
       &___7__TArrayCollectionArray_VFParticleCollisions_Chaos___Chaos__6B_;
  DestructItems<Chaos::FParticleCollisions,int>
            (*(FParticleCollisions **)&(this->MParticleCollisions).field_0x8,
             *(int *)&(this->MParticleCollisions).field_0x10);
  pvVar1 = *(void **)&(this->MParticleCollisions).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MParticleConstraints =
       &
       ___7__TArrayCollectionArray_V__TArray_PEAVFConstraintHandle_Chaos__V__TSizedDefaultAllocator__0CA______Chaos__6B_
  ;
  DestructItems<TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_> **)
              &(this->MParticleConstraints).field_0x8,
             *(int *)&(this->MParticleConstraints).field_0x10);
  pvVar1 = *(void **)&(this->MParticleConstraints).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MWeakParticleHandle =
       &___7__TArrayCollectionArray_VFWeakParticleHandle_Chaos___Chaos__6B_;
  DestructItems<Chaos::FWeakParticleHandle,int>
            (*(FWeakParticleHandle **)&(this->MWeakParticleHandle).field_0x8,
             *(int *)&(this->MWeakParticleHandle).field_0x10);
  pvVar1 = *(void **)&(this->MWeakParticleHandle).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MSyncState = &___7__TArrayCollectionArray_UFSyncState_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MSyncState).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MSpatialIdx =
       &___7__TArrayCollectionArray_UFSpatialAccelerationIdx_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MSpatialIdx).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MHasBounds = &___7__TArrayCollectionArray__N_Chaos__6B_;
  pvVar1 = *(void **)&(this->MHasBounds).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MWorldSpaceInflatedBounds =
       &___7__TArrayCollectionArray_V__TAABB_N_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MWorldSpaceInflatedBounds).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MCCDAxisThreshold =
       &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MCCDAxisThreshold).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MLocalBounds =
       &___7__TArrayCollectionArray_V__TAABB_N_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MLocalBounds).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MShapesArray =
       &
       ___7__TArrayCollectionArray_V__TArray_V__TUniquePtr_VFShapeInstance_Chaos__U__TDefaultDelete_VFShapeInstance_Chaos______V__TSizedInlineAllocator__00_0CA_V__TSizedDefaultAllocator__0CA________Chaos__6B_
  ;
  DestructItems<TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,int>
            (*(TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
               **)&(this->MShapesArray).field_0x8,*(int *)&(this->MShapesArray).field_0x10);
  pvVar1 = *(void **)&(this->MShapesArray).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MHasCollision = &___7__TArrayCollectionArray__N_Chaos__6B_;
  pvVar1 = *(void **)&(this->MHasCollision).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MPhysicsProxy =
       &___7__TArrayCollectionArray_PEAVIPhysicsProxyBase___Chaos__6B_;
  pvVar1 = *(void **)&(this->MPhysicsProxy).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MGeometryParticle =
       &___7__TArrayCollectionArray_PEAV__TGeometryParticle_N_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MGeometryParticle).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MGeometryParticleHandle =
       &
       ___7__TArrayCollectionArray_V__TSerializablePtr_V__TGeometryParticleHandleImp_N_02_00_Chaos___Chaos___Chaos__6B_
  ;
  pvVar1 = *(void **)&(this->MGeometryParticleHandle).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MUniqueIdx = &___7__TArrayCollectionArray_UFUniqueIdx_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MUniqueIdx).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSimpleGeometryParticles<double,3>::~TSimpleGeometryParticles<double,3>
            ((TSimpleGeometryParticles<double,3> *)this);
  return;
}

// ~TGeometryParticlesImp<double,3,0> @ 143afb840

void __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::~TGeometryParticlesImp<double,3,0>
          (TGeometryParticlesImp<double,3,0> *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7__TGeometryParticlesImp_N_02_0A__Chaos__6B_;
  *(undefined ***)&this->MDebugName =
       &___7__TArrayCollectionArray_V__TSharedPtr_VFString___00___Chaos__6B_;
  DestructItems<TSharedPtr<FString,1>,int>
            (*(TSharedPtr<FString,1> **)&(this->MDebugName).field_0x8,
             *(int *)&(this->MDebugName).field_0x10);
  pvVar1 = *(void **)&(this->MDebugName).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MParticleIDs = &___7__TArrayCollectionArray_UFParticleID_Chaos___Chaos__6B_
  ;
  pvVar1 = *(void **)&(this->MParticleIDs).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MParticleListMask =
       &___7__TArrayCollectionArray_W4EGeometryParticleListMask_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MParticleListMask).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MLightWeightDisabled = &___7__TArrayCollectionArray__N_Chaos__6B_;
  pvVar1 = *(void **)&(this->MLightWeightDisabled).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MEnabledDuringResim = &___7__TArrayCollectionArray__N_Chaos__6B_;
  pvVar1 = *(void **)&(this->MEnabledDuringResim).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MResimType = &___7__TArrayCollectionArray_W4EResimType_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MResimType).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MGraphNode =
       &___7__TArrayCollectionArray_PEAVFPBDIslandParticle_Private_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MGraphNode).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MParticleCollisions =
       &___7__TArrayCollectionArray_VFParticleCollisions_Chaos___Chaos__6B_;
  DestructItems<Chaos::FParticleCollisions,int>
            (*(FParticleCollisions **)&(this->MParticleCollisions).field_0x8,
             *(int *)&(this->MParticleCollisions).field_0x10);
  pvVar1 = *(void **)&(this->MParticleCollisions).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MParticleConstraints =
       &
       ___7__TArrayCollectionArray_V__TArray_PEAVFConstraintHandle_Chaos__V__TSizedDefaultAllocator__0CA______Chaos__6B_
  ;
  DestructItems<TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_> **)
              &(this->MParticleConstraints).field_0x8,
             *(int *)&(this->MParticleConstraints).field_0x10);
  pvVar1 = *(void **)&(this->MParticleConstraints).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MWeakParticleHandle =
       &___7__TArrayCollectionArray_VFWeakParticleHandle_Chaos___Chaos__6B_;
  DestructItems<Chaos::FWeakParticleHandle,int>
            (*(FWeakParticleHandle **)&(this->MWeakParticleHandle).field_0x8,
             *(int *)&(this->MWeakParticleHandle).field_0x10);
  pvVar1 = *(void **)&(this->MWeakParticleHandle).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MSyncState = &___7__TArrayCollectionArray_UFSyncState_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MSyncState).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MSpatialIdx =
       &___7__TArrayCollectionArray_UFSpatialAccelerationIdx_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MSpatialIdx).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MHasBounds = &___7__TArrayCollectionArray__N_Chaos__6B_;
  pvVar1 = *(void **)&(this->MHasBounds).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MWorldSpaceInflatedBounds =
       &___7__TArrayCollectionArray_V__TAABB_N_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MWorldSpaceInflatedBounds).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MCCDAxisThreshold =
       &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MCCDAxisThreshold).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MLocalBounds =
       &___7__TArrayCollectionArray_V__TAABB_N_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MLocalBounds).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MShapesArray =
       &
       ___7__TArrayCollectionArray_V__TArray_V__TUniquePtr_VFShapeInstance_Chaos__U__TDefaultDelete_VFShapeInstance_Chaos______V__TSizedInlineAllocator__00_0CA_V__TSizedDefaultAllocator__0CA________Chaos__6B_
  ;
  DestructItems<TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,int>
            (*(TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
               **)&(this->MShapesArray).field_0x8,*(int *)&(this->MShapesArray).field_0x10);
  pvVar1 = *(void **)&(this->MShapesArray).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MHasCollision = &___7__TArrayCollectionArray__N_Chaos__6B_;
  pvVar1 = *(void **)&(this->MHasCollision).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MPhysicsProxy =
       &___7__TArrayCollectionArray_PEAVIPhysicsProxyBase___Chaos__6B_;
  pvVar1 = *(void **)&(this->MPhysicsProxy).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MGeometryParticle =
       &___7__TArrayCollectionArray_PEAV__TGeometryParticle_N_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MGeometryParticle).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MGeometryParticleHandle =
       &
       ___7__TArrayCollectionArray_V__TSerializablePtr_V__TGeometryParticleHandleImp_N_02_00_Chaos___Chaos___Chaos__6B_
  ;
  pvVar1 = *(void **)&(this->MGeometryParticleHandle).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MUniqueIdx = &___7__TArrayCollectionArray_UFUniqueIdx_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MUniqueIdx).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSimpleGeometryParticles<double,3>::~TSimpleGeometryParticles<double,3>
            ((TSimpleGeometryParticles<double,3> *)this);
  return;
}

// AddConstraintHandle @ 143b0f660

void __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::AddConstraintHandle
          (TGeometryParticlesImp<float,3,1> *this,int *param_1,FConstraintHandle *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForAnyElementType *pFVar5;
  uint uVar6;
  uint uVar7;
  FConstraintHandle *local_res18 [2];
  
  uVar7 = 0;
  if (*param_1 < *(int *)&(this->MParticleConstraints).field_0x10) {
    uVar7 = (uint)~*param_1 >> 0x1f;
  }
  local_res18[0] = param_2;
  if (uVar7 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar7 = *param_1;
  uVar6 = 0;
  if ((int)uVar7 < *(int *)&(this->MParticleConstraints).field_0x10) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar5 = (ForAnyElementType *)
           ((longlong)(int)uVar7 * 0x10 + *(longlong *)&(this->MParticleConstraints).field_0x8);
  if ((pFVar5->Data <= (FScriptContainerElement *)local_res18) &&
     ((FScriptContainerElement *)local_res18 <
      pFVar5->Data + (longlong)*(int *)((longlong)&pFVar5[1].Data + 4) * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)&pFVar5[1].Data;
  piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar5,piVar1);
  }
  *(int *)&pFVar5[1].Data = iVar4 + 1;
  *(FConstraintHandle **)(pFVar5->Data + (longlong)iVar4 * 8) = local_res18[0];
  return;
}

// AddConstraintHandle @ 143b0f7d0

void __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::AddConstraintHandle
          (TGeometryParticlesImp<double,3,1> *this,int *param_1,FConstraintHandle *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForAnyElementType *pFVar5;
  uint uVar6;
  uint uVar7;
  FConstraintHandle *local_res18 [2];
  
  uVar7 = 0;
  if (*param_1 < *(int *)&(this->MParticleConstraints).field_0x10) {
    uVar7 = (uint)~*param_1 >> 0x1f;
  }
  local_res18[0] = param_2;
  if (uVar7 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar7 = *param_1;
  uVar6 = 0;
  if ((int)uVar7 < *(int *)&(this->MParticleConstraints).field_0x10) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar5 = (ForAnyElementType *)
           ((longlong)(int)uVar7 * 0x10 + *(longlong *)&(this->MParticleConstraints).field_0x8);
  if ((pFVar5->Data <= (FScriptContainerElement *)local_res18) &&
     ((FScriptContainerElement *)local_res18 <
      pFVar5->Data + (longlong)*(int *)((longlong)&pFVar5[1].Data + 4) * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)&pFVar5[1].Data;
  piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar5,piVar1);
  }
  *(int *)&pFVar5[1].Data = iVar4 + 1;
  *(FConstraintHandle **)(pFVar5->Data + (longlong)iVar4 * 8) = local_res18[0];
  return;
}

// AllHasBounds @ 143b13f10

TArray<bool,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::AllHasBounds(TGeometryParticlesImp<float,3,1> *this)

{
  return (TArray<bool,TSizedDefaultAllocator<32>_> *)&(this->MHasBounds).field_0x8;
}

// AllHasBounds @ 143b13f20

TArray<bool,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::AllHasBounds(TGeometryParticlesImp<double,3,1> *this)

{
  return (TArray<bool,TSizedDefaultAllocator<32>_> *)&(this->MHasBounds).field_0x8;
}

// AllHasBounds @ 143b13f30

TArray<bool,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::AllHasBounds(TGeometryParticlesImp<double,3,0> *this)

{
  return (TArray<bool,TSizedDefaultAllocator<32>_> *)&(this->MHasBounds).field_0x8;
}

// AllLocalBounds @ 143b13f40

TArray<Chaos::TAABB<float,3>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::AllLocalBounds(TGeometryParticlesImp<float,3,1> *this)

{
  return (TArray<Chaos::TAABB<float,3>,TSizedDefaultAllocator<32>_> *)
         &(this->MLocalBounds).field_0x8;
}

// AllLocalBounds @ 143b13f50

TArray<Chaos::TAABB<double,3>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::AllLocalBounds(TGeometryParticlesImp<double,3,1> *this)

{
  return (TArray<Chaos::TAABB<double,3>,TSizedDefaultAllocator<32>_> *)
         &(this->MLocalBounds).field_0x8;
}

// AllLocalBounds @ 143b13f60

TArray<Chaos::TAABB<double,3>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::AllLocalBounds(TGeometryParticlesImp<double,3,0> *this)

{
  return (TArray<Chaos::TAABB<double,3>,TSizedDefaultAllocator<32>_> *)
         &(this->MLocalBounds).field_0x8;
}

// AllWorldSpaceInflatedBounds @ 143b13f70

TArray<Chaos::TAABB<float,3>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::AllWorldSpaceInflatedBounds
          (TGeometryParticlesImp<float,3,1> *this)

{
  return (TArray<Chaos::TAABB<float,3>,TSizedDefaultAllocator<32>_> *)
         &(this->MWorldSpaceInflatedBounds).field_0x8;
}

// AllWorldSpaceInflatedBounds @ 143b13f80

TArray<Chaos::TAABB<double,3>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::AllWorldSpaceInflatedBounds
          (TGeometryParticlesImp<double,3,1> *this)

{
  return (TArray<Chaos::TAABB<double,3>,TSizedDefaultAllocator<32>_> *)
         &(this->MWorldSpaceInflatedBounds).field_0x8;
}

// AllWorldSpaceInflatedBounds @ 143b13f90

TArray<Chaos::TAABB<double,3>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::AllWorldSpaceInflatedBounds
          (TGeometryParticlesImp<double,3,0> *this)

{
  return (TArray<Chaos::TAABB<double,3>,TSizedDefaultAllocator<32>_> *)
         &(this->MWorldSpaceInflatedBounds).field_0x8;
}

// CCDAxisThreshold @ 143b172a0

TVector<float,3> * __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::CCDAxisThreshold
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<float,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MCCDAxisThreshold).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<float,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<float,3> *)
         (*(longlong *)&(this->MCCDAxisThreshold).field_0x8 + (longlong)param_1 * 0xc);
}

// CCDAxisThreshold @ 143b17320

TVector<double,3> * __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::CCDAxisThreshold
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<double,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MCCDAxisThreshold).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<double,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<double,3> *)
         (*(longlong *)&(this->MCCDAxisThreshold).field_0x8 + (longlong)param_1 * 0x18);
}

// CCDAxisThreshold @ 143b173a0

TVector<double,3> * __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::CCDAxisThreshold
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<double,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MCCDAxisThreshold).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<double,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<double,3> *)
         (*(longlong *)&(this->MCCDAxisThreshold).field_0x8 + (longlong)param_1 * 0x18);
}

// ConstraintGraphIndex @ 143b1a320

int * __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::ConstraintGraphIndex
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  return &`public:_int&___ptr64___cdecl_Chaos::TGeometryParticlesImp<float,3,1>::ConstraintGraphIndex(int)___ptr64'
          ::__l2::Dummy;
}

// ConstraintGraphIndex @ 143b1a330

int __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::ConstraintGraphIndex
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  return -1;
}

// ConstraintGraphIndex @ 143b1a340

int * __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::ConstraintGraphIndex
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  return &`public:_int&___ptr64___cdecl_Chaos::TGeometryParticlesImp<double,3,1>::ConstraintGraphIndex(int)___ptr64'
          ::__l2::Dummy;
}

// ConstraintGraphIndex @ 143b1a350

int __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::ConstraintGraphIndex
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  return -1;
}

// ConstraintGraphIndex @ 143b1a360

int * __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::ConstraintGraphIndex
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  return &`public:_int&___ptr64___cdecl_Chaos::TGeometryParticlesImp<double,3,0>::ConstraintGraphIndex(int)___ptr64'
          ::__l2::Dummy;
}

// ConstraintGraphIndex @ 143b1a370

int __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::ConstraintGraphIndex
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  return -1;
}

// ConstraintGraphNode @ 143b1a380

FPBDIslandParticle ** __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::ConstraintGraphNode
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPBDIslandParticle **ppFVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MGraphNode).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      ppFVar4 = (FPBDIslandParticle **)(*pcVar1)();
      return ppFVar4;
    }
  }
  return (FPBDIslandParticle **)(*(longlong *)&(this->MGraphNode).field_0x8 + (longlong)param_1 * 8)
  ;
}

// ConstraintGraphNode @ 143b1a400

FPBDIslandParticle * __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::ConstraintGraphNode
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPBDIslandParticle *pFVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MGraphNode).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPBDIslandParticle *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FPBDIslandParticle **)
          (*(longlong *)&(this->MGraphNode).field_0x8 + (longlong)param_1 * 8);
}

// ConstraintGraphNode @ 143b1a480

FPBDIslandParticle ** __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::ConstraintGraphNode
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPBDIslandParticle **ppFVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MGraphNode).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      ppFVar4 = (FPBDIslandParticle **)(*pcVar1)();
      return ppFVar4;
    }
  }
  return (FPBDIslandParticle **)(*(longlong *)&(this->MGraphNode).field_0x8 + (longlong)param_1 * 8)
  ;
}

// ConstraintGraphNode @ 143b1a500

FPBDIslandParticle * __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::ConstraintGraphNode
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPBDIslandParticle *pFVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MGraphNode).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPBDIslandParticle *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FPBDIslandParticle **)
          (*(longlong *)&(this->MGraphNode).field_0x8 + (longlong)param_1 * 8);
}

// ConstraintGraphNode @ 143b1a580

FPBDIslandParticle ** __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::ConstraintGraphNode
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPBDIslandParticle **ppFVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MGraphNode).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      ppFVar4 = (FPBDIslandParticle **)(*pcVar1)();
      return ppFVar4;
    }
  }
  return (FPBDIslandParticle **)(*(longlong *)&(this->MGraphNode).field_0x8 + (longlong)param_1 * 8)
  ;
}

// ConstraintGraphNode @ 143b1a600

FPBDIslandParticle * __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::ConstraintGraphNode
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPBDIslandParticle *pFVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MGraphNode).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPBDIslandParticle *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FPBDIslandParticle **)
          (*(longlong *)&(this->MGraphNode).field_0x8 + (longlong)param_1 * 8);
}

// DebugName @ 143b1add0

TSharedPtr<FString,1> * __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::DebugName
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSharedPtr<FString,1> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MDebugName).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<FString,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TSharedPtr<FString,1> *)
         ((longlong)param_1 * 0x10 + *(longlong *)&(this->MDebugName).field_0x8);
}

// DebugName @ 143b1ae50

TSharedPtr<FString,1> * __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::DebugName
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSharedPtr<FString,1> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MDebugName).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<FString,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TSharedPtr<FString,1> *)
         ((longlong)param_1 * 0x10 + *(longlong *)&(this->MDebugName).field_0x8);
}

// DebugName @ 143b1aed0

TSharedPtr<FString,1> * __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::DebugName
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSharedPtr<FString,1> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MDebugName).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<FString,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TSharedPtr<FString,1> *)
         ((longlong)param_1 * 0x10 + *(longlong *)&(this->MDebugName).field_0x8);
}

// DebugName @ 143b1af50

TSharedPtr<FString,1> * __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::DebugName
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSharedPtr<FString,1> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MDebugName).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<FString,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TSharedPtr<FString,1> *)
         ((longlong)param_1 * 0x10 + *(longlong *)&(this->MDebugName).field_0x8);
}

// DebugName @ 143b1afd0

TSharedPtr<FString,1> * __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::DebugName
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSharedPtr<FString,1> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MDebugName).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<FString,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TSharedPtr<FString,1> *)
         ((longlong)param_1 * 0x10 + *(longlong *)&(this->MDebugName).field_0x8);
}

// DebugName @ 143b1b050

TSharedPtr<FString,1> * __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::DebugName
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSharedPtr<FString,1> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MDebugName).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<FString,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TSharedPtr<FString,1> *)
         ((longlong)param_1 * 0x10 + *(longlong *)&(this->MDebugName).field_0x8);
}

// DynamicGeometry @ 143b1b7c0

TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_> * __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::DynamicGeometry
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_> *pTVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\GeometryParticles.h"
                     ,0xe8,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_> *)
             (*pcVar1)();
    return pTVar3;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_class_TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>_const&___ptr64___cdecl_Chaos::TGeometryParticlesImp<float,3,1>::DynamicGeometry(int)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_class_TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>_const&___ptr64___cdecl_Chaos::TGeometryParticlesImp<float,3,1>::DynamicGeometry(int)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_class_TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>_const&___ptr64___cdecl_Chaos::TGeometryParticlesImp<float,3,1>::DynamicGeometry(int)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`Chaos::TGeometryParticlesImp<float,3,1>::DynamicGeometry'::__l2::
             _dynamic_atexit_destructor_for__DummyPtr__);
      _Init_thread_footer(&`public:_class_TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>_const&___ptr64___cdecl_Chaos::TGeometryParticlesImp<float,3,1>::DynamicGeometry(int)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return (TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_> *)
         &`public:_class_TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>_const&___ptr64___cdecl_Chaos::TGeometryParticlesImp<float,3,1>::DynamicGeometry(int)const___ptr64'
          ::__l2::DummyPtr;
}

// DynamicGeometry @ 143b1b850

TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_> * __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::DynamicGeometry
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_> *pTVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\GeometryParticles.h"
                     ,0xe8,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_> *)
             (*pcVar1)();
    return pTVar3;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_class_TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>_const&___ptr64___cdecl_Chaos::TGeometryParticlesImp<double,3,1>::DynamicGeometry(int)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_class_TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>_const&___ptr64___cdecl_Chaos::TGeometryParticlesImp<double,3,1>::DynamicGeometry(int)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_class_TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>_const&___ptr64___cdecl_Chaos::TGeometryParticlesImp<double,3,1>::DynamicGeometry(int)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`Chaos::TGeometryParticlesImp<double,3,1>::DynamicGeometry'::__l2::
             _dynamic_atexit_destructor_for__DummyPtr__);
      _Init_thread_footer(&`public:_class_TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>_const&___ptr64___cdecl_Chaos::TGeometryParticlesImp<double,3,1>::DynamicGeometry(int)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return (TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_> *)
         &`public:_class_TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>_const&___ptr64___cdecl_Chaos::TGeometryParticlesImp<double,3,1>::DynamicGeometry(int)const___ptr64'
          ::__l2::DummyPtr;
}

// DynamicGeometry @ 143b1b8e0

TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_> * __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::DynamicGeometry
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_> *pTVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\GeometryParticles.h"
                     ,0xe8,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_> *)
             (*pcVar1)();
    return pTVar3;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_class_TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>_const&___ptr64___cdecl_Chaos::TGeometryParticlesImp<double,3,0>::DynamicGeometry(int)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_class_TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>_const&___ptr64___cdecl_Chaos::TGeometryParticlesImp<double,3,0>::DynamicGeometry(int)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_class_TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>_const&___ptr64___cdecl_Chaos::TGeometryParticlesImp<double,3,0>::DynamicGeometry(int)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`Chaos::TGeometryParticlesImp<double,3,0>::DynamicGeometry'::__l2::
             _dynamic_atexit_destructor_for__DummyPtr__);
      _Init_thread_footer(&`public:_class_TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>_const&___ptr64___cdecl_Chaos::TGeometryParticlesImp<double,3,0>::DynamicGeometry(int)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return (TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_> *)
         &`public:_class_TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>_const&___ptr64___cdecl_Chaos::TGeometryParticlesImp<double,3,0>::DynamicGeometry(int)const___ptr64'
          ::__l2::DummyPtr;
}

// EnabledDuringResim @ 143b1be00

bool * __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::EnabledDuringResim
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  bool *pbVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MEnabledDuringResim).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pbVar4 = (bool *)(*pcVar1)();
      return pbVar4;
    }
  }
  return (bool *)((longlong)param_1 + *(longlong *)&(this->MEnabledDuringResim).field_0x8);
}

// EnabledDuringResim @ 143b1be80

bool __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::EnabledDuringResim
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < *(int *)&(this->MEnabledDuringResim).field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)*(undefined1 *)
                ((longlong)param_1 + *(longlong *)&(this->MEnabledDuringResim).field_0x8);
}

// EnabledDuringResim @ 143b1bf00

bool * __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::EnabledDuringResim
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  bool *pbVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MEnabledDuringResim).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pbVar4 = (bool *)(*pcVar1)();
      return pbVar4;
    }
  }
  return (bool *)((longlong)param_1 + *(longlong *)&(this->MEnabledDuringResim).field_0x8);
}

// EnabledDuringResim @ 143b1bf80

bool __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::EnabledDuringResim
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < *(int *)&(this->MEnabledDuringResim).field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)*(undefined1 *)
                ((longlong)param_1 + *(longlong *)&(this->MEnabledDuringResim).field_0x8);
}

// EnabledDuringResim @ 143b1c000

bool * __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::EnabledDuringResim
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  bool *pbVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MEnabledDuringResim).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pbVar4 = (bool *)(*pcVar1)();
      return pbVar4;
    }
  }
  return (bool *)((longlong)param_1 + *(longlong *)&(this->MEnabledDuringResim).field_0x8);
}

// EnabledDuringResim @ 143b1c080

bool __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::EnabledDuringResim
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < *(int *)&(this->MEnabledDuringResim).field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)*(undefined1 *)
                ((longlong)param_1 + *(longlong *)&(this->MEnabledDuringResim).field_0x8);
}

// GTGeometryParticle @ 143b1eb30

TGeometryParticle<double,3> ** __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::GTGeometryParticle
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TGeometryParticle<double,3> **ppTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MGeometryParticle).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      ppTVar4 = (TGeometryParticle<double,3> **)(*pcVar1)();
      return ppTVar4;
    }
  }
  return (TGeometryParticle<double,3> **)
         (*(longlong *)&(this->MGeometryParticle).field_0x8 + (longlong)param_1 * 8);
}

// GTGeometryParticle @ 143b1ebb0

TGeometryParticle<double,3> * __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::GTGeometryParticle
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TGeometryParticle<double,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MGeometryParticle).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TGeometryParticle<double,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return *(TGeometryParticle<double,3> **)
          (*(longlong *)&(this->MGeometryParticle).field_0x8 + (longlong)param_1 * 8);
}

// GTGeometryParticle @ 143b1ec30

TGeometryParticle<double,3> ** __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::GTGeometryParticle
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TGeometryParticle<double,3> **ppTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MGeometryParticle).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      ppTVar4 = (TGeometryParticle<double,3> **)(*pcVar1)();
      return ppTVar4;
    }
  }
  return (TGeometryParticle<double,3> **)
         (*(longlong *)&(this->MGeometryParticle).field_0x8 + (longlong)param_1 * 8);
}

// GTGeometryParticle @ 143b1ecb0

TGeometryParticle<double,3> * __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::GTGeometryParticle
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TGeometryParticle<double,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MGeometryParticle).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TGeometryParticle<double,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return *(TGeometryParticle<double,3> **)
          (*(longlong *)&(this->MGeometryParticle).field_0x8 + (longlong)param_1 * 8);
}

// GTGeometryParticle @ 143b1ed30

TGeometryParticle<double,3> * __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::GTGeometryParticle
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TGeometryParticle<double,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MGeometryParticle).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TGeometryParticle<double,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return *(TGeometryParticle<double,3> **)
          (*(longlong *)&(this->MGeometryParticle).field_0x8 + (longlong)param_1 * 8);
}

// Geometry @ 143b1fd20

TSerializablePtr<Chaos::FImplicitObject> __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::Geometry
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TSerializablePtr<Chaos::FImplicitObject> TVar3;
  undefined4 in_register_00000014;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\GeometryParticles.h"
                     ,0xe3,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.Ptr = (FImplicitObject *)(*pcVar1)();
    return (TSerializablePtr<Chaos::FImplicitObject>)TVar3.Ptr;
  }
  ((FImplicitObject *)CONCAT44(in_register_00000014,param_1))->_padding_ = 0;
  return (TSerializablePtr<Chaos::FImplicitObject>)
         (FImplicitObject *)CONCAT44(in_register_00000014,param_1);
}

// Geometry @ 143b1fd70

TSerializablePtr<Chaos::FImplicitObject> __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::Geometry
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TSerializablePtr<Chaos::FImplicitObject> TVar3;
  undefined4 in_register_00000014;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\GeometryParticles.h"
                     ,0xe3,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.Ptr = (FImplicitObject *)(*pcVar1)();
    return (TSerializablePtr<Chaos::FImplicitObject>)TVar3.Ptr;
  }
  ((FImplicitObject *)CONCAT44(in_register_00000014,param_1))->_padding_ = 0;
  return (TSerializablePtr<Chaos::FImplicitObject>)
         (FImplicitObject *)CONCAT44(in_register_00000014,param_1);
}

// Geometry @ 143b1fdc0

TSerializablePtr<Chaos::FImplicitObject> __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::Geometry
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TSerializablePtr<Chaos::FImplicitObject> TVar3;
  undefined4 in_register_00000014;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\GeometryParticles.h"
                     ,0xe3,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.Ptr = (FImplicitObject *)(*pcVar1)();
    return (TSerializablePtr<Chaos::FImplicitObject>)TVar3.Ptr;
  }
  ((FImplicitObject *)CONCAT44(in_register_00000014,param_1))->_padding_ = 0;
  return (TSerializablePtr<Chaos::FImplicitObject>)
         (FImplicitObject *)CONCAT44(in_register_00000014,param_1);
}

// GetContainerListMask @ 143b203d0

EGeometryParticleListMask __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::GetContainerListMask
          (TGeometryParticlesImp<float,3,1> *this)

{
  return this->MContainerListMask;
}

// GetContainerListMask @ 143b203e0

EGeometryParticleListMask __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::GetContainerListMask
          (TGeometryParticlesImp<double,3,1> *this)

{
  return this->MContainerListMask;
}

// GetContainerListMask @ 143b203f0

EGeometryParticleListMask __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::GetContainerListMask
          (TGeometryParticlesImp<double,3,0> *this)

{
  return this->MContainerListMask;
}

// GetDebugName @ 143b20400

FString * __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::GetDebugName
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MDebugName).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
  }
  if (*(longlong *)(*(longlong *)&(this->MDebugName).field_0x8 + (longlong)param_1 * 0x10) == 0) {
    pFVar4 = &Chaos::Private::EmptyParticleName;
  }
  else {
    uVar3 = 0;
    if (param_1 < *(int *)&(this->MDebugName).field_0x10) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar1)();
        return pFVar4;
      }
    }
    pFVar4 = *(FString **)(*(longlong *)&(this->MDebugName).field_0x8 + (longlong)param_1 * 0x10);
  }
  return pFVar4;
}

// GetDebugName @ 143b20500

FString * __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::GetDebugName
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MDebugName).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
  }
  if (*(longlong *)(*(longlong *)&(this->MDebugName).field_0x8 + (longlong)param_1 * 0x10) == 0) {
    pFVar4 = &Chaos::Private::EmptyParticleName;
  }
  else {
    uVar3 = 0;
    if (param_1 < *(int *)&(this->MDebugName).field_0x10) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar1)();
        return pFVar4;
      }
    }
    pFVar4 = *(FString **)(*(longlong *)&(this->MDebugName).field_0x8 + (longlong)param_1 * 0x10);
  }
  return pFVar4;
}

// GetDebugName @ 143b20600

FString * __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::GetDebugName
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MDebugName).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
  }
  if (*(longlong *)(*(longlong *)&(this->MDebugName).field_0x8 + (longlong)param_1 * 0x10) == 0) {
    pFVar4 = &Chaos::Private::EmptyParticleName;
  }
  else {
    uVar3 = 0;
    if (param_1 < *(int *)&(this->MDebugName).field_0x10) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar1)();
        return pFVar4;
      }
    }
    pFVar4 = *(FString **)(*(longlong *)&(this->MDebugName).field_0x8 + (longlong)param_1 * 0x10);
  }
  return pFVar4;
}

// Handle @ 143b223b0

TGeometryParticleHandleImp<double,3,1> * __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::Handle(TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TGeometryParticleHandleImp<double,3,1> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MGeometryParticleHandle).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TGeometryParticleHandleImp<double,3,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return *(TGeometryParticleHandleImp<double,3,1> **)
          (*(longlong *)&(this->MGeometryParticleHandle).field_0x8 + (longlong)param_1 * 8);
}

// Handle @ 143b22430

TGeometryParticleHandleImp<double,3,1> * __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::Handle
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TGeometryParticleHandleImp<double,3,1> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MGeometryParticleHandle).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TGeometryParticleHandleImp<double,3,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return *(TGeometryParticleHandleImp<double,3,1> **)
          (*(longlong *)&(this->MGeometryParticleHandle).field_0x8 + (longlong)param_1 * 8);
}

// Handle @ 143b224b0

TGeometryParticleHandleImp<double,3,1> * __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::Handle
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TGeometryParticleHandleImp<double,3,1> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MGeometryParticleHandle).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TGeometryParticleHandleImp<double,3,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return *(TGeometryParticleHandleImp<double,3,1> **)
          (*(longlong *)&(this->MGeometryParticleHandle).field_0x8 + (longlong)param_1 * 8);
}

// HasBounds @ 143b22530

bool * __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::HasBounds
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  bool *pbVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MHasBounds).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pbVar4 = (bool *)(*pcVar1)();
      return pbVar4;
    }
  }
  return (bool *)((longlong)param_1 + *(longlong *)&(this->MHasBounds).field_0x8);
}

// HasBounds @ 143b225b0

bool __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::HasBounds
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < *(int *)&(this->MHasBounds).field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)*(undefined1 *)((longlong)param_1 + *(longlong *)&(this->MHasBounds).field_0x8);
}

// HasBounds @ 143b22630

bool * __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::HasBounds
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  bool *pbVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MHasBounds).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pbVar4 = (bool *)(*pcVar1)();
      return pbVar4;
    }
  }
  return (bool *)((longlong)param_1 + *(longlong *)&(this->MHasBounds).field_0x8);
}

// HasBounds @ 143b226b0

bool __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::HasBounds
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < *(int *)&(this->MHasBounds).field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)*(undefined1 *)((longlong)param_1 + *(longlong *)&(this->MHasBounds).field_0x8);
}

// HasBounds @ 143b22730

bool __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::HasBounds
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < *(int *)&(this->MHasBounds).field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)*(undefined1 *)((longlong)param_1 + *(longlong *)&(this->MHasBounds).field_0x8);
}

// HasCollision @ 143b227b0

bool * __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::HasCollision
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  bool *pbVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MHasCollision).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pbVar4 = (bool *)(*pcVar1)();
      return pbVar4;
    }
  }
  return (bool *)((longlong)param_1 + *(longlong *)&(this->MHasCollision).field_0x8);
}

// HasCollision @ 143b22830

bool __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::HasCollision
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < *(int *)&(this->MHasCollision).field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)*(undefined1 *)((longlong)param_1 + *(longlong *)&(this->MHasCollision).field_0x8);
}

// HasCollision @ 143b228b0

bool * __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::HasCollision
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  bool *pbVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MHasCollision).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pbVar4 = (bool *)(*pcVar1)();
      return pbVar4;
    }
  }
  return (bool *)((longlong)param_1 + *(longlong *)&(this->MHasCollision).field_0x8);
}

// HasCollision @ 143b22930

bool __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::HasCollision
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < *(int *)&(this->MHasCollision).field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)*(undefined1 *)((longlong)param_1 + *(longlong *)&(this->MHasCollision).field_0x8);
}

// HasCollision @ 143b229b0

bool __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::HasCollision
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < *(int *)&(this->MHasCollision).field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)*(undefined1 *)((longlong)param_1 + *(longlong *)&(this->MHasCollision).field_0x8);
}

// IsRigidBodySim @ 143b25b50

bool __cdecl Chaos::TGeometryParticlesImp<float,3,1>::IsRigidBodySim(void)

{
  return false;
}

// IsRigidBodySim @ 143b25b60

bool __cdecl Chaos::TGeometryParticlesImp<double,3,1>::IsRigidBodySim(void)

{
  return false;
}

// IsRigidBodySim @ 143b25b70

bool __cdecl Chaos::TGeometryParticlesImp<double,3,0>::IsRigidBodySim(void)

{
  return true;
}

// LightWeightDisabled @ 143b25e20

bool * __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::LightWeightDisabled
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  bool *pbVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MLightWeightDisabled).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pbVar4 = (bool *)(*pcVar1)();
      return pbVar4;
    }
  }
  return (bool *)((longlong)param_1 + *(longlong *)&(this->MLightWeightDisabled).field_0x8);
}

// LightWeightDisabled @ 143b25ea0

bool __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::LightWeightDisabled
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < *(int *)&(this->MLightWeightDisabled).field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)*(undefined1 *)
                ((longlong)param_1 + *(longlong *)&(this->MLightWeightDisabled).field_0x8);
}

// LightWeightDisabled @ 143b25f20

bool * __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::LightWeightDisabled
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  bool *pbVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MLightWeightDisabled).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pbVar4 = (bool *)(*pcVar1)();
      return pbVar4;
    }
  }
  return (bool *)((longlong)param_1 + *(longlong *)&(this->MLightWeightDisabled).field_0x8);
}

// LightWeightDisabled @ 143b25fa0

bool __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::LightWeightDisabled
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < *(int *)&(this->MLightWeightDisabled).field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)*(undefined1 *)
                ((longlong)param_1 + *(longlong *)&(this->MLightWeightDisabled).field_0x8);
}

// LightWeightDisabled @ 143b26020

bool * __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::LightWeightDisabled
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  bool *pbVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MLightWeightDisabled).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pbVar4 = (bool *)(*pcVar1)();
      return pbVar4;
    }
  }
  return (bool *)((longlong)param_1 + *(longlong *)&(this->MLightWeightDisabled).field_0x8);
}

// LightWeightDisabled @ 143b260a0

bool __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::LightWeightDisabled
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < *(int *)&(this->MLightWeightDisabled).field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)*(undefined1 *)
                ((longlong)param_1 + *(longlong *)&(this->MLightWeightDisabled).field_0x8);
}

// ListMask @ 143b26120

EGeometryParticleListMask * __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::ListMask
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  EGeometryParticleListMask *pEVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MParticleListMask).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pEVar4 = (EGeometryParticleListMask *)(*pcVar1)();
      return pEVar4;
    }
  }
  return (EGeometryParticleListMask *)
         (*(longlong *)&(this->MParticleListMask).field_0x8 + (longlong)param_1 * 4);
}

// ListMask @ 143b261a0

EGeometryParticleListMask __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::ListMask
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  EGeometryParticleListMask EVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MParticleListMask).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
  }
  return *(EGeometryParticleListMask *)
          (*(longlong *)&(this->MParticleListMask).field_0x8 + (longlong)param_1 * 4);
}

// ListMask @ 143b26220

EGeometryParticleListMask * __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::ListMask
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  EGeometryParticleListMask *pEVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MParticleListMask).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pEVar4 = (EGeometryParticleListMask *)(*pcVar1)();
      return pEVar4;
    }
  }
  return (EGeometryParticleListMask *)
         (*(longlong *)&(this->MParticleListMask).field_0x8 + (longlong)param_1 * 4);
}

// ListMask @ 143b262a0

EGeometryParticleListMask __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::ListMask
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  EGeometryParticleListMask EVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MParticleListMask).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
  }
  return *(EGeometryParticleListMask *)
          (*(longlong *)&(this->MParticleListMask).field_0x8 + (longlong)param_1 * 4);
}

// ListMask @ 143b26320

EGeometryParticleListMask * __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::ListMask
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  EGeometryParticleListMask *pEVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MParticleListMask).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pEVar4 = (EGeometryParticleListMask *)(*pcVar1)();
      return pEVar4;
    }
  }
  return (EGeometryParticleListMask *)
         (*(longlong *)&(this->MParticleListMask).field_0x8 + (longlong)param_1 * 4);
}

// ListMask @ 143b263a0

EGeometryParticleListMask __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::ListMask
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  EGeometryParticleListMask EVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MParticleListMask).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
  }
  return *(EGeometryParticleListMask *)
          (*(longlong *)&(this->MParticleListMask).field_0x8 + (longlong)param_1 * 4);
}

// LocalBounds @ 143b26440

TAABB<float,3> * __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::LocalBounds
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TAABB<float,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MLocalBounds).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TAABB<float,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TAABB<float,3> *)(*(longlong *)&(this->MLocalBounds).field_0x8 + (longlong)param_1 * 0x18)
  ;
}

// LocalBounds @ 143b264c0

TAABB<float,3> * __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::LocalBounds
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TAABB<float,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MLocalBounds).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TAABB<float,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TAABB<float,3> *)(*(longlong *)&(this->MLocalBounds).field_0x8 + (longlong)param_1 * 0x18)
  ;
}

// LocalBounds @ 143b26540

TAABB<double,3> * __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::LocalBounds
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TAABB<double,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MLocalBounds).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TAABB<double,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TAABB<double,3> *)
         ((longlong)param_1 * 0x30 + *(longlong *)&(this->MLocalBounds).field_0x8);
}

// LocalBounds @ 143b265c0

TAABB<double,3> * __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::LocalBounds
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TAABB<double,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MLocalBounds).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TAABB<double,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TAABB<double,3> *)
         ((longlong)param_1 * 0x30 + *(longlong *)&(this->MLocalBounds).field_0x8);
}

// LocalBounds @ 143b26640

TAABB<double,3> * __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::LocalBounds
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TAABB<double,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MLocalBounds).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TAABB<double,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TAABB<double,3> *)
         ((longlong)param_1 * 0x30 + *(longlong *)&(this->MLocalBounds).field_0x8);
}

// LocalBounds @ 143b266c0

TAABB<double,3> * __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::LocalBounds
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TAABB<double,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MLocalBounds).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TAABB<double,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TAABB<double,3> *)
         ((longlong)param_1 * 0x30 + *(longlong *)&(this->MLocalBounds).field_0x8);
}

// ParticleCollisions @ 143b2a260

FParticleCollisions * __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::ParticleCollisions
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FParticleCollisions *pFVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MParticleCollisions).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FParticleCollisions *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FParticleCollisions *)
         ((longlong)param_1 * 0x10 + *(longlong *)&(this->MParticleCollisions).field_0x8);
}

// ParticleCollisions @ 143b2a2e0

FParticleCollisions * __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::ParticleCollisions
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FParticleCollisions *pFVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MParticleCollisions).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FParticleCollisions *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FParticleCollisions *)
         ((longlong)param_1 * 0x10 + *(longlong *)&(this->MParticleCollisions).field_0x8);
}

// ParticleConstraints @ 143b2a360

TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::ParticleConstraints
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MParticleConstraints).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_> *)
         ((longlong)param_1 * 0x10 + *(longlong *)&(this->MParticleConstraints).field_0x8);
}

// ParticleConstraints @ 143b2a3e0

TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::ParticleConstraints
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MParticleConstraints).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_> *)
         ((longlong)param_1 * 0x10 + *(longlong *)&(this->MParticleConstraints).field_0x8);
}

// ParticleID @ 143b2a460

FParticleID * __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::ParticleID
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FParticleID *pFVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MParticleIDs).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FParticleID *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FParticleID *)(*(longlong *)&(this->MParticleIDs).field_0x8 + (longlong)param_1 * 8);
}

// ParticleID @ 143b2a4e0

FParticleID __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::ParticleID
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FParticleID FVar4;
  int in_register_00000014;
  uint in_R8D;
  
  FVar4.LocalID = in_register_00000014;
  FVar4.GlobalID = param_1;
  uVar3 = 0;
  if ((int)in_R8D < *(int *)&(this->MParticleIDs).field_0x10) {
    uVar3 = ~in_R8D >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar4 = (FParticleID)(*pcVar1)();
      return FVar4;
    }
  }
  *(undefined8 *)FVar4 =
       *(undefined8 *)(*(longlong *)&(this->MParticleIDs).field_0x8 + (longlong)(int)in_R8D * 8);
  return FVar4;
}

// ParticleID @ 143b2a570

FParticleID * __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::ParticleID
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FParticleID *pFVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MParticleIDs).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FParticleID *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FParticleID *)(*(longlong *)&(this->MParticleIDs).field_0x8 + (longlong)param_1 * 8);
}

// ParticleID @ 143b2a5f0

FParticleID __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::ParticleID
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FParticleID FVar4;
  int in_register_00000014;
  uint in_R8D;
  
  FVar4.LocalID = in_register_00000014;
  FVar4.GlobalID = param_1;
  uVar3 = 0;
  if ((int)in_R8D < *(int *)&(this->MParticleIDs).field_0x10) {
    uVar3 = ~in_R8D >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar4 = (FParticleID)(*pcVar1)();
      return FVar4;
    }
  }
  *(undefined8 *)FVar4 =
       *(undefined8 *)(*(longlong *)&(this->MParticleIDs).field_0x8 + (longlong)(int)in_R8D * 8);
  return FVar4;
}

// ParticleID @ 143b2a680

FParticleID __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::ParticleID
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FParticleID FVar4;
  int in_register_00000014;
  uint in_R8D;
  
  FVar4.LocalID = in_register_00000014;
  FVar4.GlobalID = param_1;
  uVar3 = 0;
  if ((int)in_R8D < *(int *)&(this->MParticleIDs).field_0x10) {
    uVar3 = ~in_R8D >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar4 = (FParticleID)(*pcVar1)();
      return FVar4;
    }
  }
  *(undefined8 *)FVar4 =
       *(undefined8 *)(*(longlong *)&(this->MParticleIDs).field_0x8 + (longlong)(int)in_R8D * 8);
  return FVar4;
}

// ParticleType @ 143b2a710

EParticleType __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::ParticleType(TGeometryParticlesImp<float,3,1> *this)

{
  return this->MParticleType;
}

// ParticleType @ 143b2a720

EParticleType __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::ParticleType(TGeometryParticlesImp<double,3,1> *this)

{
  return this->MParticleType;
}

// ParticleType @ 143b2a730

EParticleType __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::ParticleType(TGeometryParticlesImp<double,3,0> *this)

{
  return this->MParticleType;
}

// PhysicsProxy @ 143b2b460

IPhysicsProxyBase * __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::PhysicsProxy
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  IPhysicsProxyBase *pIVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MPhysicsProxy).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar4 = (IPhysicsProxyBase *)(*pcVar1)();
      return pIVar4;
    }
  }
  return *(IPhysicsProxyBase **)
          (*(longlong *)&(this->MPhysicsProxy).field_0x8 + (longlong)param_1 * 8);
}

// PhysicsProxy @ 143b2b4e0

IPhysicsProxyBase * __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::PhysicsProxy
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  IPhysicsProxyBase *pIVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MPhysicsProxy).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar4 = (IPhysicsProxyBase *)(*pcVar1)();
      return pIVar4;
    }
  }
  return *(IPhysicsProxyBase **)
          (*(longlong *)&(this->MPhysicsProxy).field_0x8 + (longlong)param_1 * 8);
}

// PhysicsProxy @ 143b2b560

IPhysicsProxyBase * __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::PhysicsProxy
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  IPhysicsProxyBase *pIVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MPhysicsProxy).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar4 = (IPhysicsProxyBase *)(*pcVar1)();
      return pIVar4;
    }
  }
  return *(IPhysicsProxyBase **)
          (*(longlong *)&(this->MPhysicsProxy).field_0x8 + (longlong)param_1 * 8);
}

// PhysicsProxy @ 143b2b5e0

IPhysicsProxyBase * __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::PhysicsProxy
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  IPhysicsProxyBase *pIVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MPhysicsProxy).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar4 = (IPhysicsProxyBase *)(*pcVar1)();
      return pIVar4;
    }
  }
  return *(IPhysicsProxyBase **)
          (*(longlong *)&(this->MPhysicsProxy).field_0x8 + (longlong)param_1 * 8);
}

// PhysicsProxy @ 143b2b660

IPhysicsProxyBase * __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::PhysicsProxy
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  IPhysicsProxyBase *pIVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MPhysicsProxy).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar4 = (IPhysicsProxyBase *)(*pcVar1)();
      return pIVar4;
    }
  }
  return *(IPhysicsProxyBase **)
          (*(longlong *)&(this->MPhysicsProxy).field_0x8 + (longlong)param_1 * 8);
}

// RegisterArrays @ 143b2fc20

void __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::RegisterArrays(TGeometryParticlesImp<float,3,1> *this)

{
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MUniqueIdx);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MParticleIDs);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MHasCollision);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MShapesArray);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MLocalBounds);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MCCDAxisThreshold);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MWorldSpaceInflatedBounds)
  ;
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MHasBounds);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MSpatialIdx);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MSyncState);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MWeakParticleHandle);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MParticleConstraints);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MParticleCollisions);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MGraphNode);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MResimType);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MEnabledDuringResim);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MLightWeightDisabled);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MParticleListMask);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MDebugName);
  return;
}

// RegisterArrays @ 143b2fd50

void __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::RegisterArrays(TGeometryParticlesImp<double,3,1> *this)

{
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MUniqueIdx);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MParticleIDs);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MHasCollision);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MShapesArray);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MLocalBounds);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MCCDAxisThreshold);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MWorldSpaceInflatedBounds)
  ;
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MHasBounds);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MSpatialIdx);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MSyncState);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MWeakParticleHandle);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MParticleConstraints);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MParticleCollisions);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MGraphNode);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MResimType);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MEnabledDuringResim);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MLightWeightDisabled);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MParticleListMask);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MDebugName);
  return;
}

// RegisterArrays @ 143b2fe80

void __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::RegisterArrays(TGeometryParticlesImp<double,3,0> *this)

{
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MUniqueIdx);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MParticleIDs);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MHasCollision);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MShapesArray);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MLocalBounds);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MCCDAxisThreshold);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MWorldSpaceInflatedBounds)
  ;
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MHasBounds);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MSpatialIdx);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MSyncState);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MWeakParticleHandle);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MParticleConstraints);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MParticleCollisions);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MGraphNode);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MResimType);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MEnabledDuringResim);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MLightWeightDisabled);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MParticleListMask);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MDebugName);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MGeometryParticleHandle);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MGeometryParticle);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MPhysicsProxy);
  return;
}

// RemoveConstraintHandle @ 143b35c60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::RemoveConstraintHandle
          (TGeometryParticlesImp<float,3,1> *this,int *param_1,FConstraintHandle *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FConstraintHandle *local_res18;
  
  uVar4 = *param_1;
  uVar3 = 0;
  if ((int)uVar4 < *(int *)&(this->MParticleConstraints).field_0x10) {
    uVar3 = ~uVar4 >> 0x1f;
  }
  local_res18 = param_2;
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
            ((TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_> *)
             ((longlong)(int)uVar4 * 0x10 + *(longlong *)&(this->MParticleConstraints).field_0x8),
             &local_res18,Default);
  uVar4 = 0;
  if (*param_1 < *(int *)&(this->MParticleConstraints).field_0x10) {
    uVar4 = (uint)~*param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// RemoveConstraintHandle @ 143b35d60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::RemoveConstraintHandle
          (TGeometryParticlesImp<double,3,1> *this,int *param_1,FConstraintHandle *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FConstraintHandle *local_res18;
  
  uVar4 = *param_1;
  uVar3 = 0;
  if ((int)uVar4 < *(int *)&(this->MParticleConstraints).field_0x10) {
    uVar3 = ~uVar4 >> 0x1f;
  }
  local_res18 = param_2;
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
            ((TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_> *)
             ((longlong)(int)uVar4 * 0x10 + *(longlong *)&(this->MParticleConstraints).field_0x8),
             &local_res18,Default);
  uVar4 = 0;
  if (*param_1 < *(int *)&(this->MParticleConstraints).field_0x10) {
    uVar4 = (uint)~*param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// RemoveShapesAtSortedIndices @ 143b35f80

void __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::RemoveShapesAtSortedIndices
          (TGeometryParticlesImp<float,3,1> *this,int param_1,TArrayView<int_const_,int> *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  
  uVar9 = (uint)~param_1 >> 0x1f;
  uVar5 = 0;
  if (param_1 < *(int *)&(this->MShapesArray).field_0x10) {
    uVar5 = uVar9;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar1 = (longlong)param_1 * 0x18;
  RemoveArrayItemsAtSortedIndices<TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
            ((TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
              *)(*(longlong *)&(this->MShapesArray).field_0x8 + lVar1),param_2);
  uVar5 = 0;
  if (param_1 < *(int *)&(this->MShapesArray).field_0x10) {
    uVar5 = uVar9;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar5 = 0;
  lVar8 = (longlong)*(int *)(lVar1 + 0x10 + *(longlong *)&(this->MShapesArray).field_0x8);
  if (0 < lVar8) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if (param_1 < *(int *)&(this->MShapesArray).field_0x10) {
        uVar4 = uVar9;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar6 = lVar1 + *(longlong *)&(this->MShapesArray).field_0x8;
      uVar4 = 0;
      if ((int)uVar5 < *(int *)(lVar6 + 0x10)) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(longlong *)(lVar6 + 8) != 0) {
        lVar6 = *(longlong *)(lVar6 + 8);
      }
      lVar6 = *(longlong *)(lVar6 + lVar7 * 8);
      if (lVar6 != 0) {
        *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) & 7;
        *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | uVar5 * 8;
      }
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar8);
  }
  return;
}

// RemoveShapesAtSortedIndices @ 143b36170

void __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::RemoveShapesAtSortedIndices
          (TGeometryParticlesImp<double,3,1> *this,int param_1,TArrayView<int_const_,int> *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  
  uVar9 = (uint)~param_1 >> 0x1f;
  uVar5 = 0;
  if (param_1 < *(int *)&(this->MShapesArray).field_0x10) {
    uVar5 = uVar9;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar1 = (longlong)param_1 * 0x18;
  RemoveArrayItemsAtSortedIndices<TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
            ((TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
              *)(*(longlong *)&(this->MShapesArray).field_0x8 + lVar1),param_2);
  uVar5 = 0;
  if (param_1 < *(int *)&(this->MShapesArray).field_0x10) {
    uVar5 = uVar9;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar5 = 0;
  lVar8 = (longlong)*(int *)(lVar1 + 0x10 + *(longlong *)&(this->MShapesArray).field_0x8);
  if (0 < lVar8) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if (param_1 < *(int *)&(this->MShapesArray).field_0x10) {
        uVar4 = uVar9;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar6 = lVar1 + *(longlong *)&(this->MShapesArray).field_0x8;
      uVar4 = 0;
      if ((int)uVar5 < *(int *)(lVar6 + 0x10)) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(longlong *)(lVar6 + 8) != 0) {
        lVar6 = *(longlong *)(lVar6 + 8);
      }
      lVar6 = *(longlong *)(lVar6 + lVar7 * 8);
      if (lVar6 != 0) {
        *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) & 7;
        *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | uVar5 * 8;
      }
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar8);
  }
  return;
}

// RemoveShapesAtSortedIndices @ 143b36360

void __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::RemoveShapesAtSortedIndices
          (TGeometryParticlesImp<double,3,0> *this,int param_1,TArrayView<int_const_,int> *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  
  uVar9 = (uint)~param_1 >> 0x1f;
  uVar5 = 0;
  if (param_1 < *(int *)&(this->MShapesArray).field_0x10) {
    uVar5 = uVar9;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar1 = (longlong)param_1 * 0x18;
  RemoveArrayItemsAtSortedIndices<TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
            ((TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
              *)(*(longlong *)&(this->MShapesArray).field_0x8 + lVar1),param_2);
  uVar5 = 0;
  if (param_1 < *(int *)&(this->MShapesArray).field_0x10) {
    uVar5 = uVar9;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar5 = 0;
  lVar8 = (longlong)*(int *)(lVar1 + 0x10 + *(longlong *)&(this->MShapesArray).field_0x8);
  if (0 < lVar8) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if (param_1 < *(int *)&(this->MShapesArray).field_0x10) {
        uVar4 = uVar9;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar6 = lVar1 + *(longlong *)&(this->MShapesArray).field_0x8;
      uVar4 = 0;
      if ((int)uVar5 < *(int *)(lVar6 + 0x10)) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(longlong *)(lVar6 + 8) != 0) {
        lVar6 = *(longlong *)(lVar6 + 8);
      }
      lVar6 = *(longlong *)(lVar6 + lVar7 * 8);
      if (lVar6 != 0) {
        *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) & 7;
        *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | uVar5 * 8;
      }
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar8);
  }
  return;
}

// ResetWeakParticleHandle @ 143b37000

void __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::ResetWeakParticleHandle
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < *(int *)&(this->MWeakParticleHandle).field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar1 = *(undefined8 **)
            (*(longlong *)&(this->MWeakParticleHandle).field_0x8 + (longlong)param_1 * 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
  }
  return;
}

// ResetWeakParticleHandle @ 143b37090

void __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::ResetWeakParticleHandle
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < *(int *)&(this->MWeakParticleHandle).field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar1 = *(undefined8 **)
            (*(longlong *)&(this->MWeakParticleHandle).field_0x8 + (longlong)param_1 * 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
  }
  return;
}

// ResetWeakParticleHandle @ 143b37120

void __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::ResetWeakParticleHandle
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < *(int *)&(this->MWeakParticleHandle).field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar1 = *(undefined8 **)
            (*(longlong *)&(this->MWeakParticleHandle).field_0x8 + (longlong)param_1 * 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
  }
  return;
}

// ResimType @ 143b371b0

EResimType * __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::ResimType
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  EResimType *pEVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MResimType).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pEVar4 = (EResimType *)(*pcVar1)();
      return pEVar4;
    }
  }
  return (EResimType *)((longlong)param_1 + *(longlong *)&(this->MResimType).field_0x8);
}

// ResimType @ 143b37230

EResimType __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::ResimType
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  EResimType EVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < *(int *)&(this->MResimType).field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return *(EResimType *)((longlong)param_1 + *(longlong *)&(this->MResimType).field_0x8);
}

// ResimType @ 143b372b0

EResimType * __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::ResimType
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  EResimType *pEVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MResimType).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pEVar4 = (EResimType *)(*pcVar1)();
      return pEVar4;
    }
  }
  return (EResimType *)((longlong)param_1 + *(longlong *)&(this->MResimType).field_0x8);
}

// ResimType @ 143b37330

EResimType __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::ResimType
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  EResimType EVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < *(int *)&(this->MResimType).field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return *(EResimType *)((longlong)param_1 + *(longlong *)&(this->MResimType).field_0x8);
}

// ResimType @ 143b373b0

EResimType * __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::ResimType
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  EResimType *pEVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MResimType).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pEVar4 = (EResimType *)(*pcVar1)();
      return pEVar4;
    }
  }
  return (EResimType *)((longlong)param_1 + *(longlong *)&(this->MResimType).field_0x8);
}

// ResimType @ 143b37430

EResimType __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::ResimType
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  EResimType EVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < *(int *)&(this->MResimType).field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return *(EResimType *)((longlong)param_1 + *(longlong *)&(this->MResimType).field_0x8);
}

// SerializationFactory @ 143b3aed0

TGeometryParticlesImp<float,3,1> * __cdecl
Chaos::TGeometryParticlesImp<float,3,1>::SerializationFactory
          (FChaosArchive *param_1,TGeometryParticlesImp<float,3,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TGeometryParticlesImp<float,3,1> *pTVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\GeometryParticles.cpp"
                     ,0x6e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TGeometryParticlesImp<float,3,1> *)(*pcVar1)();
    return pTVar3;
  }
  return (TGeometryParticlesImp<float,3,1> *)0x0;
}

// SerializationFactory @ 143b3af10

TGeometryParticlesImp<double,3,1> * __cdecl
Chaos::TGeometryParticlesImp<double,3,1>::SerializationFactory
          (FChaosArchive *param_1,TGeometryParticlesImp<double,3,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TGeometryParticlesImp<double,3,1> *pTVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\GeometryParticles.cpp"
                     ,0x75,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TGeometryParticlesImp<double,3,1> *)(*pcVar1)();
    return pTVar3;
  }
  return (TGeometryParticlesImp<double,3,1> *)0x0;
}

// SerializationFactory @ 143b3af50

TGeometryParticlesImp<double,3,0> * __cdecl
Chaos::TGeometryParticlesImp<double,3,0>::SerializationFactory
          (FChaosArchive *param_1,TGeometryParticlesImp<double,3,0> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  TGeometryParticlesImp<double,3,0> *pTVar4;
  TPBDRigidClusteredParticles<double,3> *pTVar5;
  TPBDRigidParticles<double,3> *pTVar6;
  TKinematicGeometryParticlesImp<double,3,0> *pTVar7;
  EParticleType local_res8 [32];
  
  if ((param_1->_padding_ & 1) == 0) {
    local_res8[0] = param_2->MParticleType;
  }
  else {
    local_res8[0] = Static;
  }
  plVar1 = (longlong *)param_1->_padding_;
  if ((EParticleType *)plVar1[1] < (EParticleType *)*plVar1 + 1) {
    (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,1);
  }
  else {
    local_res8[0] = *(EParticleType *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  if (local_res8[0] == Static) {
    if ((param_1->_padding_ & 1) != 0) {
      pTVar4 = ::operator_new(0x288);
      if (pTVar4 != (TGeometryParticlesImp<double,3,0> *)0x0) {
        pTVar4 = TGeometryParticlesImp<double,3,0>(pTVar4);
        return pTVar4;
      }
    }
  }
  else if (local_res8[0] == Kinematic) {
    if ((param_1->_padding_ & 1) != 0) {
      pTVar7 = ::operator_new(0x2d0);
      if (pTVar7 != (TKinematicGeometryParticlesImp<double,3,0> *)0x0) {
        pTVar7 = TKinematicGeometryParticlesImp<double,3,0>::
                 TKinematicGeometryParticlesImp<double,3,0>(pTVar7);
        return (TGeometryParticlesImp<double,3,0> *)pTVar7;
      }
    }
  }
  else if (local_res8[0] == Rigid) {
    if ((param_1->_padding_ & 1) != 0) {
      pTVar6 = ::operator_new(0x5b8);
      if (pTVar6 != (TPBDRigidParticles<double,3> *)0x0) {
        pTVar6 = TPBDRigidParticles<double,3>::TPBDRigidParticles<double,3>(pTVar6);
        return (TGeometryParticlesImp<double,3,0> *)pTVar6;
      }
    }
  }
  else if (local_res8[0] == Clustered) {
    if ((param_1->_padding_ & 1) != 0) {
      pTVar5 = ::operator_new(0x6c0);
      if (pTVar5 != (TPBDRigidClusteredParticles<double,3> *)0x0) {
        pTVar5 = TPBDRigidClusteredParticles<double,3>::TPBDRigidClusteredParticles<double,3>
                           (pTVar5);
        return (TGeometryParticlesImp<double,3,0> *)pTVar5;
      }
    }
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\GeometryParticles.cpp"
                       ,0x67,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TGeometryParticlesImp<double,3,0> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return (TGeometryParticlesImp<double,3,0> *)0x0;
}

// Serialize @ 143b3b5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::Serialize
          (TGeometryParticlesImp<float,3,1> *this,FChaosArchive *param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  float *pfVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong *plVar7;
  code *pcVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  longlong lVar18;
  bool bVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  double *pdVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  undefined1 uVar27;
  longlong lVar28;
  undefined1 auStackY_268 [32];
  FLLMScope local_238 [2];
  longlong local_230;
  longlong local_228;
  FChaosArchive *local_220;
  FMemScope local_218 [2];
  float local_204;
  float fStack_200;
  float local_1fc;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  TVector<double,3> local_1d8;
  TVector<double,3> local_1c0;
  undefined1 local_1a8 [48];
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  undefined1 local_158 [16];
  double local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  double local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_220 = param_1;
  FLLMScope::FLLMScope(local_238,ChaosParticles,false,None,Default,true);
  FMemScope::FMemScope(local_218,ChaosParticles,true);
  TSimpleGeometryParticles<float,3>::Serialize((TSimpleGeometryParticles<float,3> *)this,param_1);
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FPhysicsObjectVersion::GUID);
  iVar20 = FArchiveState::CustomVer((FArchiveState *)param_1,&FPhysicsObjectVersion::GUID);
  if (0 < iVar20) {
    operator<<<Chaos::
    FShapeInstance_TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_TSizedDefaultAllocator<32>_>
              (param_1,(TArray<TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
                        *)&(this->MShapesArray).field_0x8);
  }
  iVar20 = FArchiveState::CustomVer((FArchiveState *)param_1,&FPhysicsObjectVersion::GUID);
  if ((1 < iVar20) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\GeometryParticles.h"
                          ,0x29f,L""), bVar19)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  iVar20 = FArchiveState::CustomVer
                     ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  uVar17 = _UNK_150689688;
  uVar16 = ___xmm_3ff00000000000003ff0000000000000;
  uVar15 = _UNK_150689518;
  uVar14 = ___xmm_00000000000000003ff0000000000000;
  if (iVar20 < 2) {
    iVar20 = (int)this->_padding_;
    plVar1 = &this->_padding_;
    uVar25 = 0;
    if (0 < iVar20) {
      lVar28 = 0;
      lVar26 = 0;
      local_228 = 0;
      local_230 = 0;
      do {
        uVar24 = ~uVar25 >> 0x1f;
        uVar21 = 0;
        if ((int)uVar25 < iVar20) {
          uVar21 = uVar24;
        }
        if ((uVar21 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (*(longlong *)(this->_padding_ + lVar28 * 8) == 0) {
LAB_143b3b9eb:
          uVar27 = 0;
        }
        else {
          uVar21 = 0;
          if ((int)uVar25 < (int)*plVar1) {
            uVar21 = uVar24;
          }
          if ((uVar21 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (*(char *)(*(longlong *)(this->_padding_ + lVar28 * 8) + 0x16) == '\0')
          goto LAB_143b3b9eb;
          uVar27 = 1;
        }
        uVar21 = 0;
        if ((int)uVar25 < *(int *)&(this->MHasBounds).field_0x10) {
          uVar21 = uVar24;
        }
        if ((uVar21 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        *(undefined1 *)(lVar28 + *(longlong *)&(this->MHasBounds).field_0x8) = uVar27;
        uVar21 = 0;
        if ((int)uVar25 < *(int *)&(this->MHasBounds).field_0x10) {
          uVar21 = uVar24;
        }
        if ((uVar21 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (*(char *)(lVar28 + *(longlong *)&(this->MHasBounds).field_0x8) != '\0') {
          uVar21 = 0;
          if ((int)uVar25 < (int)*plVar1) {
            uVar21 = uVar24;
          }
          if ((uVar21 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          plVar7 = *(longlong **)(this->_padding_ + lVar28 * 8);
          pdVar23 = (double *)(**(code **)(*plVar7 + 0x90))(plVar7,local_1a8);
          dVar9 = *pdVar23;
          dVar4 = pdVar23[1];
          dVar5 = pdVar23[2];
          local_204 = (float)pdVar23[3];
          fStack_200 = (float)pdVar23[4];
          local_1fc = (float)pdVar23[5];
          uVar21 = 0;
          if ((int)uVar25 < *(int *)&(this->MLocalBounds).field_0x10) {
            uVar21 = uVar24;
          }
          if ((uVar21 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar6 = *(longlong *)&(this->MLocalBounds).field_0x8;
          *(float *)(lVar6 + lVar26) = (float)dVar9;
          *(float *)(lVar6 + 4 + lVar26) = (float)dVar4;
          *(float *)(lVar6 + 8 + lVar26) = (float)dVar5;
          *(ulonglong *)(lVar6 + 0xc + lVar26) = CONCAT44(fStack_200,local_204);
          *(float *)(lVar6 + 0x14 + lVar26) = local_1fc;
          local_1c0._16_8_ = 0;
          local_1c0._0_8_ = 0;
          local_1c0._8_8_ = 0;
          uVar21 = 0;
          if ((int)uVar25 < (int)this->_padding_) {
            uVar21 = uVar24;
          }
          if ((uVar21 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pfVar3 = (float *)(this->_padding_ + local_230);
          fVar10 = *pfVar3;
          fVar11 = pfVar3[1];
          fVar12 = pfVar3[2];
          fVar13 = pfVar3[3];
          uVar21 = 0;
          if ((int)uVar25 < (int)this->_padding_) {
            uVar21 = uVar24;
          }
          if ((uVar21 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar18 = local_228;
          lVar6 = this->_padding_;
          dVar9 = (double)*(float *)(lVar6 + 4 + local_228);
          local_118._8_4_ = SUB84((double)fVar11,0);
          local_118._0_8_ = (double)fVar10;
          local_118._12_4_ = (int)((ulonglong)(double)fVar11 >> 0x20);
          local_108._8_4_ = SUB84((double)fVar13,0);
          local_108._0_8_ = (double)fVar12;
          local_108._12_4_ = (int)((ulonglong)(double)fVar13 >> 0x20);
          local_e8 = (double)*(float *)(lVar6 + 8 + local_228);
          local_d8 = uVar16;
          uStack_d0 = uVar17;
          local_f8._8_4_ = SUB84(dVar9,0);
          local_f8._0_8_ = (double)*(float *)(lVar6 + local_228);
          local_f8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
          uStack_e0 = 0;
          local_c8 = uVar14;
          uStack_c0 = uVar15;
          UpdateWorldSpaceState(this,uVar25,(TRigidTransform<double,3> *)local_118,&local_1c0);
          local_228 = lVar18;
        }
        local_230 = local_230 + 0x10;
        local_228 = local_228 + 0xc;
        iVar20 = (int)*plVar1;
        uVar25 = uVar25 + 1;
        lVar28 = lVar28 + 1;
        lVar26 = lVar26 + 0x18;
        param_1 = local_220;
      } while ((int)uVar25 < iVar20);
    }
  }
  else {
    TBox<double,3>::SerializeAsAABBs<float>
              ((FArchive *)param_1,
               (TArray<Chaos::TAABB<float,3>,TSizedDefaultAllocator<32>_> *)
               &(this->MLocalBounds).field_0x8);
    TBox<double,3>::SerializeAsAABBs<float>
              ((FArchive *)param_1,
               (TArray<Chaos::TAABB<float,3>,TSizedDefaultAllocator<32>_> *)
               &(this->MWorldSpaceInflatedBounds).field_0x8);
    operator<<<bool,TSizedDefaultAllocator<32>_>
              (param_1,(TArray<bool,TSizedDefaultAllocator<32>_> *)&(this->MHasBounds).field_0x8);
    iVar20 = FArchiveState::CustomVer
                       ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
    uVar17 = _UNK_150689688;
    uVar16 = ___xmm_3ff00000000000003ff0000000000000;
    uVar15 = _UNK_150689518;
    uVar14 = ___xmm_00000000000000003ff0000000000000;
    if ((iVar20 < 0x10) && (uVar25 = 0, 0 < *(int *)&(this->MShapesArray).field_0x10)) {
      lVar26 = 0;
      lVar28 = 0;
      do {
        local_1d8._16_8_ = 0;
        local_1d8._0_8_ = 0;
        local_1d8._8_8_ = 0;
        uVar21 = 0;
        if ((int)uVar25 < (int)this->_padding_) {
          uVar21 = ~uVar25 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pfVar3 = (float *)(this->_padding_ + lVar28);
        local_1f8 = (double)*pfVar3;
        uVar21 = 0;
        if ((int)uVar25 < (int)this->_padding_) {
          uVar21 = ~uVar25 >> 0x1f;
        }
        dStack_1f0 = (double)pfVar3[1];
        local_1e8 = (double)pfVar3[2];
        dStack_1e0 = (double)pfVar3[3];
        if ((uVar21 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar6 = this->_padding_;
        dVar9 = (double)*(float *)(lVar6 + 4 + lVar26);
        local_178 = local_1f8;
        dStack_170 = dStack_1f0;
        local_168 = local_1e8;
        dStack_160 = dStack_1e0;
        local_148 = (double)*(float *)(lVar6 + 8 + lVar26);
        local_138 = uVar16;
        uStack_130 = uVar17;
        local_158._8_4_ = SUB84(dVar9,0);
        local_158._0_8_ = (double)*(float *)(lVar6 + lVar26);
        local_158._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        uStack_140 = 0;
        local_128 = uVar14;
        uStack_120 = uVar15;
        UpdateWorldSpaceState(this,uVar25,(TRigidTransform<double,3> *)&local_178,&local_1d8);
        uVar25 = uVar25 + 1;
        lVar28 = lVar28 + 0x10;
        lVar26 = lVar26 + 0xc;
      } while ((int)uVar25 < *(int *)&(this->MShapesArray).field_0x10);
    }
  }
  puVar2 = &(this->MSpatialIdx).field_0x8;
  iVar20 = FArchiveState::CustomVer
                     ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (iVar20 < 6) {
    iVar20 = (int)this->_padding_;
    iVar22 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (2,2,iVar20,(ForAnyElementType *)puVar2,
                        (int *)&(this->MSpatialIdx).field_0x10,
                        (int *)&(this->MSpatialIdx).field_0x14);
    memset((void *)(*(longlong *)puVar2 + (longlong)iVar22 * 2),0,(longlong)iVar20 * 2);
  }
  else {
    operator<<<Chaos::FSpatialAccelerationIdx_TSizedDefaultAllocator<32>_>
              (param_1,(TArray<Chaos::FSpatialAccelerationIdx,TSizedDefaultAllocator<32>_> *)puVar2)
    ;
  }
  FArchiveState::CustomVer((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  FMemScope::~FMemScope(local_218);
  FLLMScope::~FLLMScope(local_238);
  return;
}

// Serialize @ 143b3be30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::Serialize
          (TGeometryParticlesImp<double,3,1> *this,FChaosArchive *param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  code *pcVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  undefined8 *puVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  undefined1 uVar23;
  longlong lVar24;
  undefined1 auStackY_248 [32];
  FLLMScope local_218 [2];
  longlong local_210;
  longlong local_208;
  FChaosArchive *local_200;
  FMemScope local_1f8;
  TVector<double,3> local_1f0;
  TVector<double,3> local_1d8;
  double local_1b8;
  double dStack_1b0;
  undefined1 local_198 [48];
  double local_168;
  double dStack_160;
  undefined1 local_158 [16];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [16];
  double local_f8;
  double dStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_248;
  local_200 = param_1;
  FLLMScope::FLLMScope(local_218,ChaosParticles,false,None,Default,true);
  FMemScope::FMemScope(&local_1f8,ChaosParticles,true);
  TSimpleGeometryParticles<double,3>::Serialize((TSimpleGeometryParticles<double,3> *)this,param_1);
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FPhysicsObjectVersion::GUID);
  iVar16 = FArchiveState::CustomVer((FArchiveState *)param_1,&FPhysicsObjectVersion::GUID);
  if (0 < iVar16) {
    operator<<<Chaos::
    FShapeInstance_TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_TSizedDefaultAllocator<32>_>
              (param_1,(TArray<TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
                        *)&(this->MShapesArray).field_0x8);
  }
  iVar16 = FArchiveState::CustomVer((FArchiveState *)param_1,&FPhysicsObjectVersion::GUID);
  if ((1 < iVar16) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\GeometryParticles.h"
                          ,0x29f,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  iVar16 = FArchiveState::CustomVer
                     ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  uVar13 = _UNK_150689688;
  uVar12 = ___xmm_3ff00000000000003ff0000000000000;
  uVar11 = _UNK_150689518;
  uVar10 = ___xmm_00000000000000003ff0000000000000;
  if (iVar16 < 2) {
    iVar16 = (int)this->_padding_;
    plVar1 = &this->_padding_;
    uVar20 = 0;
    if (0 < iVar16) {
      lVar24 = 0;
      lVar22 = 0;
      local_208 = 0;
      local_210 = 0;
      do {
        uVar21 = ~uVar20 >> 0x1f;
        uVar17 = 0;
        if ((int)uVar20 < iVar16) {
          uVar17 = uVar21;
        }
        if ((uVar17 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (*(longlong *)(this->_padding_ + lVar24 * 8) == 0) {
LAB_143b3c20f:
          uVar23 = 0;
        }
        else {
          uVar17 = 0;
          if ((int)uVar20 < (int)*plVar1) {
            uVar17 = uVar21;
          }
          if ((uVar17 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (*(char *)(*(longlong *)(this->_padding_ + lVar24 * 8) + 0x16) == '\0')
          goto LAB_143b3c20f;
          uVar23 = 1;
        }
        uVar17 = 0;
        if ((int)uVar20 < *(int *)&(this->MHasBounds).field_0x10) {
          uVar17 = uVar21;
        }
        if ((uVar17 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        *(undefined1 *)(lVar24 + *(longlong *)&(this->MHasBounds).field_0x8) = uVar23;
        uVar17 = 0;
        if ((int)uVar20 < *(int *)&(this->MHasBounds).field_0x10) {
          uVar17 = uVar21;
        }
        if ((uVar17 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (*(char *)(lVar24 + *(longlong *)&(this->MHasBounds).field_0x8) != '\0') {
          uVar17 = 0;
          if ((int)uVar20 < (int)*plVar1) {
            uVar17 = uVar21;
          }
          if ((uVar17 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          plVar7 = *(longlong **)(this->_padding_ + lVar24 * 8);
          puVar19 = (undefined8 *)(**(code **)(*plVar7 + 0x90))(plVar7,local_198);
          uVar17 = 0;
          if ((int)uVar20 < *(int *)&(this->MLocalBounds).field_0x10) {
            uVar17 = uVar21;
          }
          if ((uVar17 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar6 = *(longlong *)&(this->MLocalBounds).field_0x8;
          uVar5 = puVar19[1];
          local_1d8._16_8_ = 0;
          *(undefined8 *)(lVar6 + lVar22) = *puVar19;
          ((undefined8 *)(lVar6 + lVar22))[1] = uVar5;
          *(undefined8 *)(lVar6 + 0x10 + lVar22) = puVar19[2];
          uVar5 = puVar19[4];
          puVar3 = (undefined8 *)(lVar6 + 0x18 + lVar22);
          *puVar3 = puVar19[3];
          puVar3[1] = uVar5;
          *(undefined8 *)(lVar6 + 0x28 + lVar22) = puVar19[5];
          local_1d8._0_8_ = 0;
          local_1d8._8_8_ = 0;
          uVar17 = 0;
          if ((int)uVar20 < (int)this->_padding_) {
            uVar17 = uVar21;
          }
          if ((uVar17 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar14 = local_210;
          lVar6 = this->_padding_;
          fVar4 = *(float *)(local_210 + lVar6);
          uVar5 = *(undefined8 *)(local_210 + 8 + lVar6);
          uVar17 = 0;
          if ((int)uVar20 < (int)this->_padding_) {
            uVar17 = uVar21;
          }
          dVar9 = (double)*(float *)(local_210 + 4 + lVar6);
          if ((uVar17 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar6 = local_208;
          local_108._8_4_ = SUB84(dVar9,0);
          local_108._0_8_ = (double)fVar4;
          local_108._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
          local_d8 = *(undefined8 *)(local_208 + 0x10 + this->_padding_);
          puVar19 = (undefined8 *)(local_208 + this->_padding_);
          local_e8 = *puVar19;
          uStack_e0 = puVar19[1];
          uStack_d0 = 0;
          local_c8 = uVar12;
          uStack_c0 = uVar13;
          local_b8 = uVar10;
          uStack_b0 = uVar11;
          local_f8 = (double)(float)uVar5;
          dStack_f0 = (double)(float)((ulonglong)uVar5 >> 0x20);
          UpdateWorldSpaceState(this,uVar20,(TRigidTransform<double,3> *)local_108,&local_1d8);
          local_208 = lVar6;
          local_210 = lVar14;
        }
        iVar16 = (int)*plVar1;
        local_210 = local_210 + 0x10;
        local_208 = local_208 + 0x18;
        uVar20 = uVar20 + 1;
        lVar24 = lVar24 + 1;
        lVar22 = lVar22 + 0x30;
        param_1 = local_200;
      } while ((int)uVar20 < iVar16);
    }
  }
  else {
    TBox<double,3>::SerializeAsAABBs<double>
              ((FArchive *)param_1,
               (TArray<Chaos::TAABB<double,3>,TSizedDefaultAllocator<32>_> *)
               &(this->MLocalBounds).field_0x8);
    TBox<double,3>::SerializeAsAABBs<double>
              ((FArchive *)param_1,
               (TArray<Chaos::TAABB<double,3>,TSizedDefaultAllocator<32>_> *)
               &(this->MWorldSpaceInflatedBounds).field_0x8);
    operator<<<bool,TSizedDefaultAllocator<32>_>
              (param_1,(TArray<bool,TSizedDefaultAllocator<32>_> *)&(this->MHasBounds).field_0x8);
    iVar16 = FArchiveState::CustomVer
                       ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
    uVar13 = _UNK_150689688;
    uVar12 = ___xmm_3ff00000000000003ff0000000000000;
    uVar11 = _UNK_150689518;
    uVar10 = ___xmm_00000000000000003ff0000000000000;
    if ((iVar16 < 0x10) && (uVar20 = 0, 0 < *(int *)&(this->MShapesArray).field_0x10)) {
      lVar24 = 0;
      lVar22 = 0;
      do {
        local_1f0._16_8_ = 0;
        local_1f0._0_8_ = 0;
        local_1f0._8_8_ = 0;
        uVar17 = 0;
        if ((int)uVar20 < (int)this->_padding_) {
          uVar17 = ~uVar20 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar6 = this->_padding_;
        uVar5 = *(undefined8 *)(lVar22 + 8 + lVar6);
        dVar9 = (double)(float)((ulonglong)uVar5 >> 0x20);
        uVar17 = 0;
        if ((int)uVar20 < (int)this->_padding_) {
          uVar17 = ~uVar20 >> 0x1f;
        }
        local_1b8 = (double)*(float *)(lVar22 + lVar6);
        dStack_1b0 = (double)*(float *)(lVar22 + 4 + lVar6);
        if ((uVar17 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_168 = local_1b8;
        dStack_160 = dStack_1b0;
        local_158._8_4_ = SUB84(dVar9,0);
        local_158._0_8_ = (double)(float)uVar5;
        local_158._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        local_138 = *(undefined8 *)(lVar24 + 0x10 + this->_padding_);
        puVar19 = (undefined8 *)(lVar24 + this->_padding_);
        local_148 = *puVar19;
        uStack_140 = puVar19[1];
        uStack_130 = 0;
        local_128 = uVar12;
        uStack_120 = uVar13;
        local_118 = uVar10;
        uStack_110 = uVar11;
        UpdateWorldSpaceState(this,uVar20,(TRigidTransform<double,3> *)&local_168,&local_1f0);
        uVar20 = uVar20 + 1;
        lVar22 = lVar22 + 0x10;
        lVar24 = lVar24 + 0x18;
      } while ((int)uVar20 < *(int *)&(this->MShapesArray).field_0x10);
    }
  }
  puVar2 = &(this->MSpatialIdx).field_0x8;
  iVar16 = FArchiveState::CustomVer
                     ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (iVar16 < 6) {
    iVar16 = (int)this->_padding_;
    iVar18 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (2,2,iVar16,(ForAnyElementType *)puVar2,
                        (int *)&(this->MSpatialIdx).field_0x10,
                        (int *)&(this->MSpatialIdx).field_0x14);
    memset((void *)(*(longlong *)puVar2 + (longlong)iVar18 * 2),0,(longlong)iVar16 * 2);
  }
  else {
    operator<<<Chaos::FSpatialAccelerationIdx_TSizedDefaultAllocator<32>_>
              (param_1,(TArray<Chaos::FSpatialAccelerationIdx,TSizedDefaultAllocator<32>_> *)puVar2)
    ;
  }
  FArchiveState::CustomVer((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  FMemScope::~FMemScope(&local_1f8);
  FLLMScope::~FLLMScope(local_218);
  return;
}

// Serialize @ 143b3c5d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::Serialize
          (TGeometryParticlesImp<double,3,0> *this,FChaosArchive *param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  code *pcVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  undefined8 *puVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  undefined1 uVar23;
  longlong lVar24;
  undefined1 auStackY_248 [32];
  FLLMScope local_218 [2];
  longlong local_210;
  longlong local_208;
  FChaosArchive *local_200;
  FMemScope local_1f8;
  TVector<double,3> local_1f0;
  TVector<double,3> local_1d8;
  double local_1b8;
  double dStack_1b0;
  undefined1 local_198 [48];
  double local_168;
  double dStack_160;
  undefined1 local_158 [16];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [16];
  double local_f8;
  double dStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_248;
  local_200 = param_1;
  FLLMScope::FLLMScope(local_218,ChaosParticles,false,None,Default,true);
  FMemScope::FMemScope(&local_1f8,ChaosParticles,true);
  TSimpleGeometryParticles<double,3>::Serialize((TSimpleGeometryParticles<double,3> *)this,param_1);
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FPhysicsObjectVersion::GUID);
  iVar16 = FArchiveState::CustomVer((FArchiveState *)param_1,&FPhysicsObjectVersion::GUID);
  if (0 < iVar16) {
    operator<<<Chaos::
    FShapeInstance_TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_TSizedDefaultAllocator<32>_>
              (param_1,(TArray<TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
                        *)&(this->MShapesArray).field_0x8);
  }
  iVar16 = FArchiveState::CustomVer((FArchiveState *)param_1,&FPhysicsObjectVersion::GUID);
  if (1 < iVar16) {
    operator<<<Chaos::TGeometryParticle<double,3>_TSizedDefaultAllocator<32>_>
              (param_1,(TArray<Chaos::TSerializablePtr<Chaos::TGeometryParticle<double,3>_>,TSizedDefaultAllocator<32>_>
                        *)&(this->MGeometryParticle).field_0x8);
  }
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  iVar16 = FArchiveState::CustomVer
                     ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  uVar13 = _UNK_150689688;
  uVar12 = ___xmm_3ff00000000000003ff0000000000000;
  uVar11 = _UNK_150689518;
  uVar10 = ___xmm_00000000000000003ff0000000000000;
  if (iVar16 < 2) {
    iVar16 = (int)this->_padding_;
    plVar1 = &this->_padding_;
    uVar20 = 0;
    if (0 < iVar16) {
      lVar24 = 0;
      lVar22 = 0;
      local_208 = 0;
      local_210 = 0;
      do {
        uVar21 = ~uVar20 >> 0x1f;
        uVar17 = 0;
        if ((int)uVar20 < iVar16) {
          uVar17 = uVar21;
        }
        if ((uVar17 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (*(longlong *)(this->_padding_ + lVar24 * 8) == 0) {
LAB_143b3c98f:
          uVar23 = 0;
        }
        else {
          uVar17 = 0;
          if ((int)uVar20 < (int)*plVar1) {
            uVar17 = uVar21;
          }
          if ((uVar17 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (*(char *)(*(longlong *)(this->_padding_ + lVar24 * 8) + 0x16) == '\0')
          goto LAB_143b3c98f;
          uVar23 = 1;
        }
        uVar17 = 0;
        if ((int)uVar20 < *(int *)&(this->MHasBounds).field_0x10) {
          uVar17 = uVar21;
        }
        if ((uVar17 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        *(undefined1 *)(lVar24 + *(longlong *)&(this->MHasBounds).field_0x8) = uVar23;
        uVar17 = 0;
        if ((int)uVar20 < *(int *)&(this->MHasBounds).field_0x10) {
          uVar17 = uVar21;
        }
        if ((uVar17 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (*(char *)(lVar24 + *(longlong *)&(this->MHasBounds).field_0x8) != '\0') {
          uVar17 = 0;
          if ((int)uVar20 < (int)*plVar1) {
            uVar17 = uVar21;
          }
          if ((uVar17 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          plVar7 = *(longlong **)(this->_padding_ + lVar24 * 8);
          puVar19 = (undefined8 *)(**(code **)(*plVar7 + 0x90))(plVar7,local_198);
          uVar17 = 0;
          if ((int)uVar20 < *(int *)&(this->MLocalBounds).field_0x10) {
            uVar17 = uVar21;
          }
          if ((uVar17 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar6 = *(longlong *)&(this->MLocalBounds).field_0x8;
          uVar5 = puVar19[1];
          local_1d8._16_8_ = 0;
          *(undefined8 *)(lVar6 + lVar22) = *puVar19;
          ((undefined8 *)(lVar6 + lVar22))[1] = uVar5;
          *(undefined8 *)(lVar6 + 0x10 + lVar22) = puVar19[2];
          uVar5 = puVar19[4];
          puVar3 = (undefined8 *)(lVar6 + 0x18 + lVar22);
          *puVar3 = puVar19[3];
          puVar3[1] = uVar5;
          *(undefined8 *)(lVar6 + 0x28 + lVar22) = puVar19[5];
          local_1d8._0_8_ = 0;
          local_1d8._8_8_ = 0;
          uVar17 = 0;
          if ((int)uVar20 < (int)this->_padding_) {
            uVar17 = uVar21;
          }
          if ((uVar17 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar14 = local_210;
          lVar6 = this->_padding_;
          fVar4 = *(float *)(local_210 + lVar6);
          uVar5 = *(undefined8 *)(local_210 + 8 + lVar6);
          uVar17 = 0;
          if ((int)uVar20 < (int)this->_padding_) {
            uVar17 = uVar21;
          }
          dVar9 = (double)*(float *)(local_210 + 4 + lVar6);
          if ((uVar17 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar6 = local_208;
          local_108._8_4_ = SUB84(dVar9,0);
          local_108._0_8_ = (double)fVar4;
          local_108._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
          local_d8 = *(undefined8 *)(local_208 + 0x10 + this->_padding_);
          puVar19 = (undefined8 *)(local_208 + this->_padding_);
          local_e8 = *puVar19;
          uStack_e0 = puVar19[1];
          uStack_d0 = 0;
          local_c8 = uVar12;
          uStack_c0 = uVar13;
          local_b8 = uVar10;
          uStack_b0 = uVar11;
          local_f8 = (double)(float)uVar5;
          dStack_f0 = (double)(float)((ulonglong)uVar5 >> 0x20);
          UpdateWorldSpaceState(this,uVar20,(TRigidTransform<double,3> *)local_108,&local_1d8);
          local_208 = lVar6;
          local_210 = lVar14;
        }
        iVar16 = (int)*plVar1;
        local_210 = local_210 + 0x10;
        local_208 = local_208 + 0x18;
        uVar20 = uVar20 + 1;
        lVar24 = lVar24 + 1;
        lVar22 = lVar22 + 0x30;
        param_1 = local_200;
      } while ((int)uVar20 < iVar16);
    }
  }
  else {
    TBox<double,3>::SerializeAsAABBs<double>
              ((FArchive *)param_1,
               (TArray<Chaos::TAABB<double,3>,TSizedDefaultAllocator<32>_> *)
               &(this->MLocalBounds).field_0x8);
    TBox<double,3>::SerializeAsAABBs<double>
              ((FArchive *)param_1,
               (TArray<Chaos::TAABB<double,3>,TSizedDefaultAllocator<32>_> *)
               &(this->MWorldSpaceInflatedBounds).field_0x8);
    operator<<<bool,TSizedDefaultAllocator<32>_>
              (param_1,(TArray<bool,TSizedDefaultAllocator<32>_> *)&(this->MHasBounds).field_0x8);
    iVar16 = FArchiveState::CustomVer
                       ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
    uVar13 = _UNK_150689688;
    uVar12 = ___xmm_3ff00000000000003ff0000000000000;
    uVar11 = _UNK_150689518;
    uVar10 = ___xmm_00000000000000003ff0000000000000;
    if ((iVar16 < 0x10) && (uVar20 = 0, 0 < *(int *)&(this->MShapesArray).field_0x10)) {
      lVar24 = 0;
      lVar22 = 0;
      do {
        local_1f0._16_8_ = 0;
        local_1f0._0_8_ = 0;
        local_1f0._8_8_ = 0;
        uVar17 = 0;
        if ((int)uVar20 < (int)this->_padding_) {
          uVar17 = ~uVar20 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar6 = this->_padding_;
        uVar5 = *(undefined8 *)(lVar22 + 8 + lVar6);
        dVar9 = (double)(float)((ulonglong)uVar5 >> 0x20);
        uVar17 = 0;
        if ((int)uVar20 < (int)this->_padding_) {
          uVar17 = ~uVar20 >> 0x1f;
        }
        local_1b8 = (double)*(float *)(lVar22 + lVar6);
        dStack_1b0 = (double)*(float *)(lVar22 + 4 + lVar6);
        if ((uVar17 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_168 = local_1b8;
        dStack_160 = dStack_1b0;
        local_158._8_4_ = SUB84(dVar9,0);
        local_158._0_8_ = (double)(float)uVar5;
        local_158._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        local_138 = *(undefined8 *)(lVar24 + 0x10 + this->_padding_);
        puVar19 = (undefined8 *)(lVar24 + this->_padding_);
        local_148 = *puVar19;
        uStack_140 = puVar19[1];
        uStack_130 = 0;
        local_128 = uVar12;
        uStack_120 = uVar13;
        local_118 = uVar10;
        uStack_110 = uVar11;
        UpdateWorldSpaceState(this,uVar20,(TRigidTransform<double,3> *)&local_168,&local_1f0);
        uVar20 = uVar20 + 1;
        lVar22 = lVar22 + 0x10;
        lVar24 = lVar24 + 0x18;
      } while ((int)uVar20 < *(int *)&(this->MShapesArray).field_0x10);
    }
  }
  puVar2 = &(this->MSpatialIdx).field_0x8;
  iVar16 = FArchiveState::CustomVer
                     ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (iVar16 < 6) {
    iVar16 = (int)this->_padding_;
    iVar18 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (2,2,iVar16,(ForAnyElementType *)puVar2,
                        (int *)&(this->MSpatialIdx).field_0x10,
                        (int *)&(this->MSpatialIdx).field_0x14);
    memset((void *)(*(longlong *)puVar2 + (longlong)iVar18 * 2),0,(longlong)iVar16 * 2);
  }
  else {
    operator<<<Chaos::FSpatialAccelerationIdx_TSizedDefaultAllocator<32>_>
              (param_1,(TArray<Chaos::FSpatialAccelerationIdx,TSizedDefaultAllocator<32>_> *)puVar2)
    ;
  }
  FArchiveState::CustomVer((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  FMemScope::~FMemScope(&local_1f8);
  FLLMScope::~FLLMScope(local_218);
  return;
}

// SerializeGeometryParticleHelper @ 143b3ec30

void __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::SerializeGeometryParticleHelper
          (TGeometryParticlesImp<float,3,1> *this,FChaosArchive *param_1,
          TGeometryParticlesImp<float,3,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\GeometryParticles.h"
                     ,0x29f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SerializeGeometryParticleHelper @ 143b3ec70

void __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::SerializeGeometryParticleHelper
          (TGeometryParticlesImp<float,3,1> *this,FChaosArchive *param_1,
          TGeometryParticlesImp<float,3,0> *param_2)

{
  operator<<<Chaos::TGeometryParticle<double,3>_TSizedDefaultAllocator<32>_>
            (param_1,(TArray<Chaos::TSerializablePtr<Chaos::TGeometryParticle<double,3>_>,TSizedDefaultAllocator<32>_>
                      *)&(param_2->MGeometryParticle).field_0x8);
  return;
}

// SerializeGeometryParticleHelper @ 143b3ec90

void __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::SerializeGeometryParticleHelper
          (TGeometryParticlesImp<double,3,1> *this,FChaosArchive *param_1,
          TGeometryParticlesImp<double,3,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\GeometryParticles.h"
                     ,0x29f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SerializeGeometryParticleHelper @ 143b3ecd0

void __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::SerializeGeometryParticleHelper
          (TGeometryParticlesImp<double,3,1> *this,FChaosArchive *param_1,
          TGeometryParticlesImp<double,3,0> *param_2)

{
  operator<<<Chaos::TGeometryParticle<double,3>_TSizedDefaultAllocator<32>_>
            (param_1,(TArray<Chaos::TSerializablePtr<Chaos::TGeometryParticle<double,3>_>,TSizedDefaultAllocator<32>_>
                      *)&(param_2->MGeometryParticle).field_0x8);
  return;
}

// SerializeGeometryParticleHelper @ 143b3ecf0

void __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::SerializeGeometryParticleHelper
          (TGeometryParticlesImp<double,3,0> *this,FChaosArchive *param_1,
          TGeometryParticlesImp<double,3,0> *param_2)

{
  operator<<<Chaos::TGeometryParticle<double,3>_TSizedDefaultAllocator<32>_>
            (param_1,(TArray<Chaos::TSerializablePtr<Chaos::TGeometryParticle<double,3>_>,TSizedDefaultAllocator<32>_>
                      *)&(param_2->MGeometryParticle).field_0x8);
  return;
}

// SerializeGeometryParticleHelper @ 143b3ed10

void __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::SerializeGeometryParticleHelper
          (TGeometryParticlesImp<double,3,0> *this,FChaosArchive *param_1,
          TGeometryParticlesImp<double,3,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\GeometryParticles.h"
                     ,0x29f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SetContainerListMask @ 143b3f1c0

void __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::SetContainerListMask
          (TGeometryParticlesImp<float,3,1> *this,EGeometryParticleListMask param_1)

{
  this->MContainerListMask = param_1;
  return;
}

// SetContainerListMask @ 143b3f1d0

void __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::SetContainerListMask
          (TGeometryParticlesImp<double,3,1> *this,EGeometryParticleListMask param_1)

{
  this->MContainerListMask = param_1;
  return;
}

// SetContainerListMask @ 143b3f1e0

void __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::SetContainerListMask
          (TGeometryParticlesImp<double,3,0> *this,EGeometryParticleListMask param_1)

{
  this->MContainerListMask = param_1;
  return;
}

// SetDynamicGeometry @ 143b3f210

void __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::SetDynamicGeometry
          (TGeometryParticlesImp<float,3,1> *this,int param_1,
          TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\GeometryParticles.h"
                     ,0x103,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SetDynamicGeometry @ 143b3f250

void __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::SetDynamicGeometry
          (TGeometryParticlesImp<double,3,1> *this,int param_1,
          TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\GeometryParticles.h"
                     ,0x103,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SetDynamicGeometry @ 143b3f290

void __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::SetDynamicGeometry
          (TGeometryParticlesImp<double,3,0> *this,int param_1,
          TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\GeometryParticles.h"
                     ,0x103,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SetGeometryImpl @ 143b3f320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::SetGeometryImpl
          (TGeometryParticlesImp<float,3,1> *this,int param_1,
          TRefCountPtr<Chaos::FImplicitObject> *param_2)

{
  float *pfVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  uint uVar13;
  double *pdVar14;
  TVector<float,3> *pTVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 uVar18;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong local_160;
  float local_14c;
  float fStack_148;
  float local_144;
  TVector<double,3> local_140;
  undefined1 local_128 [48];
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined1 local_d8 [16];
  double local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_188;
  lVar17 = (longlong)param_1;
  iVar5 = *(int *)&(this->MParticleCollisions).field_0x10;
  uVar16 = (uint)~param_1 >> 0x1f;
  uVar13 = 0;
  if (param_1 < iVar5) {
    uVar13 = uVar16;
  }
  if (uVar13 == 0) {
    local_168 = lVar17;
    local_160 = (longlong)iVar5;
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (*(int *)(*(longlong *)&(this->MParticleCollisions).field_0x8 + 8 + lVar17 * 0x10) != 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("MParticleCollisions[Index].Num() == 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\GeometryParticles.h"
                        ,0x130,L"");
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  TSimpleGeometryParticles<float,3>::SetGeometryImpl
            ((TSimpleGeometryParticles<float,3> *)this,param_1,param_2);
  UpdateShapesArray(this,param_1);
  if ((param_2->Reference == (FImplicitObject *)0x0) ||
     (param_2->Reference->bHasBoundingBox == false)) {
    uVar18 = 0;
  }
  else {
    uVar18 = 1;
  }
  iVar5 = *(int *)&(this->MHasBounds).field_0x10;
  uVar13 = 0;
  if (param_1 < iVar5) {
    uVar13 = uVar16;
  }
  if (uVar13 == 0) {
    local_168 = lVar17;
    local_160 = (longlong)iVar5;
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  *(undefined1 *)(lVar17 + *(longlong *)&(this->MHasBounds).field_0x8) = uVar18;
  iVar5 = *(int *)&(this->MHasBounds).field_0x10;
  uVar13 = 0;
  if (param_1 < iVar5) {
    uVar13 = uVar16;
  }
  if (uVar13 == 0) {
    local_168 = lVar17;
    local_160 = (longlong)iVar5;
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (*(char *)(lVar17 + *(longlong *)&(this->MHasBounds).field_0x8) != '\0') {
    pdVar14 = (double *)
              (**(code **)(param_2->Reference->_padding_ + 0x90))(param_2->Reference,local_128);
    iVar5 = *(int *)&(this->MLocalBounds).field_0x10;
    dVar2 = *pdVar14;
    dVar3 = pdVar14[1];
    dVar4 = pdVar14[2];
    local_14c = (float)pdVar14[3];
    fStack_148 = (float)pdVar14[4];
    local_144 = (float)pdVar14[5];
    uVar13 = 0;
    if (param_1 < iVar5) {
      uVar13 = uVar16;
    }
    if (uVar13 == 0) {
      local_168 = lVar17;
      local_160 = (longlong)iVar5;
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar12) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    lVar6 = *(longlong *)&(this->MLocalBounds).field_0x8;
    *(float *)(lVar6 + lVar17 * 0x18) = (float)dVar2;
    *(float *)(lVar6 + 4 + lVar17 * 0x18) = (float)dVar3;
    *(float *)(lVar6 + 8 + lVar17 * 0x18) = (float)dVar4;
    *(ulonglong *)(lVar6 + 0xc + lVar17 * 0x18) = CONCAT44(fStack_148,local_14c);
    *(float *)(lVar6 + 0x14 + lVar17 * 0x18) = local_144;
    UpdateCCDAxisThreshold(this,param_1);
    iVar5 = (int)this->_padding_;
    local_140._16_8_ = 0;
    uVar13 = 0;
    if (param_1 < iVar5) {
      uVar13 = uVar16;
    }
    local_140._0_8_ = 0;
    local_140._8_8_ = 0;
    if (uVar13 == 0) {
      local_168 = lVar17;
      local_160 = (longlong)iVar5;
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar12) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pfVar1 = (float *)(this->_padding_ + lVar17 * 0x10);
    fVar8 = *pfVar1;
    fVar9 = pfVar1[1];
    fVar10 = pfVar1[2];
    fVar11 = pfVar1[3];
    pTVar15 = TParticles<float,3>::GetX((TParticles<float,3> *)this,param_1);
    local_c8 = (double)*(float *)&pTVar15->field_0x8;
    local_d8._8_4_ = SUB84((double)*(float *)&pTVar15->field_0x4,0);
    local_d8._0_8_ = (double)*(float *)pTVar15;
    local_d8._12_4_ = (int)((ulonglong)(double)*(float *)&pTVar15->field_0x4 >> 0x20);
    uStack_c0 = 0;
    local_a8 = ___xmm_00000000000000003ff0000000000000;
    uStack_a0 = _UNK_150689518;
    local_b8 = ___xmm_3ff00000000000003ff0000000000000;
    uStack_b0 = _UNK_150689688;
    local_f8 = (double)fVar8;
    dStack_f0 = (double)fVar9;
    local_e8 = (double)fVar10;
    dStack_e0 = (double)fVar11;
    UpdateWorldSpaceState(this,param_1,(TRigidTransform<double,3> *)&local_f8,&local_140);
  }
  return;
}

// SetGeometryImpl @ 143b3f740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::SetGeometryImpl
          (TGeometryParticlesImp<double,3,1> *this,int param_1,
          TRefCountPtr<Chaos::FImplicitObject> *param_2)

{
  undefined8 *puVar1;
  float fVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  undefined8 *puVar11;
  TVector<double,3> *pTVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 uVar15;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  TVector<double,3> local_138;
  undefined1 local_120 [56];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_168;
  lVar14 = (longlong)param_1;
  iVar4 = *(int *)&(this->MParticleCollisions).field_0x10;
  uVar13 = (uint)~param_1 >> 0x1f;
  uVar10 = 0;
  if (param_1 < iVar4) {
    uVar10 = uVar13;
  }
  if (uVar10 == 0) {
    local_148 = lVar14;
    local_140 = (longlong)iVar4;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (*(int *)(*(longlong *)&(this->MParticleCollisions).field_0x8 + 8 + lVar14 * 0x10) != 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("MParticleCollisions[Index].Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\GeometryParticles.h"
                       ,0x130,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  TSimpleGeometryParticles<double,3>::SetGeometryImpl
            ((TSimpleGeometryParticles<double,3> *)this,param_1,param_2);
  UpdateShapesArray(this,param_1);
  if ((param_2->Reference == (FImplicitObject *)0x0) ||
     (param_2->Reference->bHasBoundingBox == false)) {
    uVar15 = 0;
  }
  else {
    uVar15 = 1;
  }
  iVar4 = *(int *)&(this->MHasBounds).field_0x10;
  uVar10 = 0;
  if (param_1 < iVar4) {
    uVar10 = uVar13;
  }
  if (uVar10 == 0) {
    local_148 = lVar14;
    local_140 = (longlong)iVar4;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  *(undefined1 *)(lVar14 + *(longlong *)&(this->MHasBounds).field_0x8) = uVar15;
  iVar4 = *(int *)&(this->MHasBounds).field_0x10;
  uVar10 = 0;
  if (param_1 < iVar4) {
    uVar10 = uVar13;
  }
  if (uVar10 == 0) {
    local_148 = lVar14;
    local_140 = (longlong)iVar4;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (*(char *)(lVar14 + *(longlong *)&(this->MHasBounds).field_0x8) != '\0') {
    puVar11 = (undefined8 *)
              (**(code **)(param_2->Reference->_padding_ + 0x90))(param_2->Reference,local_120);
    iVar4 = *(int *)&(this->MLocalBounds).field_0x10;
    uVar10 = 0;
    if (param_1 < iVar4) {
      uVar10 = uVar13;
    }
    if (uVar10 == 0) {
      local_148 = lVar14;
      local_140 = (longlong)iVar4;
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    uVar3 = puVar11[1];
    lVar5 = *(longlong *)&(this->MLocalBounds).field_0x8;
    puVar1 = (undefined8 *)(lVar5 + lVar14 * 0x30);
    *puVar1 = *puVar11;
    puVar1[1] = uVar3;
    *(undefined8 *)(lVar5 + 0x10 + lVar14 * 0x30) = puVar11[2];
    uVar3 = puVar11[4];
    puVar1 = (undefined8 *)(lVar5 + 0x18 + lVar14 * 0x30);
    *puVar1 = puVar11[3];
    puVar1[1] = uVar3;
    *(undefined8 *)(lVar5 + 0x28 + lVar14 * 0x30) = puVar11[5];
    UpdateCCDAxisThreshold(this,param_1);
    iVar4 = (int)this->_padding_;
    local_138._16_8_ = 0;
    uVar10 = 0;
    if (param_1 < iVar4) {
      uVar10 = uVar13;
    }
    local_138._0_8_ = 0;
    local_138._8_8_ = 0;
    if (uVar10 == 0) {
      local_148 = lVar14;
      local_140 = (longlong)iVar4;
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    lVar5 = this->_padding_;
    fVar2 = *(float *)(lVar5 + lVar14 * 0x10);
    uVar3 = *(undefined8 *)(lVar5 + 8 + lVar14 * 0x10);
    dVar7 = (double)(float)((ulonglong)uVar3 >> 0x20);
    dVar8 = (double)*(float *)(lVar5 + 4 + lVar14 * 0x10);
    pTVar12 = TParticles<double,3>::GetX((TParticles<double,3> *)this,param_1);
    local_d8._8_4_ = SUB84(dVar7,0);
    local_d8._0_8_ = (double)(float)uVar3;
    local_d8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    local_e8._8_4_ = SUB84(dVar8,0);
    local_e8._0_8_ = (double)fVar2;
    local_e8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    local_c8 = *(undefined8 *)pTVar12;
    uStack_c0 = *(undefined8 *)&pTVar12->field_0x8;
    local_b8 = *(undefined8 *)&pTVar12->field_0x10;
    local_98 = ___xmm_00000000000000003ff0000000000000;
    uStack_90 = _UNK_150689518;
    uStack_b0 = 0;
    local_a8 = ___xmm_3ff00000000000003ff0000000000000;
    uStack_a0 = _UNK_150689688;
    UpdateWorldSpaceState(this,param_1,(TRigidTransform<double,3> *)local_e8,&local_138);
  }
  return;
}

// SetGeometryImpl @ 143b3fac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::SetGeometryImpl
          (TGeometryParticlesImp<double,3,0> *this,int param_1,
          TRefCountPtr<Chaos::FImplicitObject> *param_2)

{
  undefined8 *puVar1;
  float fVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  undefined8 *puVar11;
  TVector<double,3> *pTVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 uVar15;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  TVector<double,3> local_138;
  undefined1 local_120 [56];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_168;
  lVar14 = (longlong)param_1;
  iVar4 = *(int *)&(this->MParticleCollisions).field_0x10;
  uVar13 = (uint)~param_1 >> 0x1f;
  uVar10 = 0;
  if (param_1 < iVar4) {
    uVar10 = uVar13;
  }
  if (uVar10 == 0) {
    local_148 = lVar14;
    local_140 = (longlong)iVar4;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (*(int *)(*(longlong *)&(this->MParticleCollisions).field_0x8 + 8 + lVar14 * 0x10) != 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("MParticleCollisions[Index].Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\GeometryParticles.h"
                       ,0x130,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  TSimpleGeometryParticles<double,3>::SetGeometryImpl
            ((TSimpleGeometryParticles<double,3> *)this,param_1,param_2);
  UpdateShapesArray(this,param_1);
  if ((param_2->Reference == (FImplicitObject *)0x0) ||
     (param_2->Reference->bHasBoundingBox == false)) {
    uVar15 = 0;
  }
  else {
    uVar15 = 1;
  }
  iVar4 = *(int *)&(this->MHasBounds).field_0x10;
  uVar10 = 0;
  if (param_1 < iVar4) {
    uVar10 = uVar13;
  }
  if (uVar10 == 0) {
    local_148 = lVar14;
    local_140 = (longlong)iVar4;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  *(undefined1 *)(lVar14 + *(longlong *)&(this->MHasBounds).field_0x8) = uVar15;
  iVar4 = *(int *)&(this->MHasBounds).field_0x10;
  uVar10 = 0;
  if (param_1 < iVar4) {
    uVar10 = uVar13;
  }
  if (uVar10 == 0) {
    local_148 = lVar14;
    local_140 = (longlong)iVar4;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (*(char *)(lVar14 + *(longlong *)&(this->MHasBounds).field_0x8) != '\0') {
    puVar11 = (undefined8 *)
              (**(code **)(param_2->Reference->_padding_ + 0x90))(param_2->Reference,local_120);
    iVar4 = *(int *)&(this->MLocalBounds).field_0x10;
    uVar10 = 0;
    if (param_1 < iVar4) {
      uVar10 = uVar13;
    }
    if (uVar10 == 0) {
      local_148 = lVar14;
      local_140 = (longlong)iVar4;
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    uVar3 = puVar11[1];
    lVar5 = *(longlong *)&(this->MLocalBounds).field_0x8;
    puVar1 = (undefined8 *)(lVar5 + lVar14 * 0x30);
    *puVar1 = *puVar11;
    puVar1[1] = uVar3;
    *(undefined8 *)(lVar5 + 0x10 + lVar14 * 0x30) = puVar11[2];
    uVar3 = puVar11[4];
    puVar1 = (undefined8 *)(lVar5 + 0x18 + lVar14 * 0x30);
    *puVar1 = puVar11[3];
    puVar1[1] = uVar3;
    *(undefined8 *)(lVar5 + 0x28 + lVar14 * 0x30) = puVar11[5];
    UpdateCCDAxisThreshold(this,param_1);
    iVar4 = (int)this->_padding_;
    local_138._16_8_ = 0;
    uVar10 = 0;
    if (param_1 < iVar4) {
      uVar10 = uVar13;
    }
    local_138._0_8_ = 0;
    local_138._8_8_ = 0;
    if (uVar10 == 0) {
      local_148 = lVar14;
      local_140 = (longlong)iVar4;
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    lVar5 = this->_padding_;
    fVar2 = *(float *)(lVar5 + lVar14 * 0x10);
    uVar3 = *(undefined8 *)(lVar5 + 8 + lVar14 * 0x10);
    dVar7 = (double)(float)((ulonglong)uVar3 >> 0x20);
    dVar8 = (double)*(float *)(lVar5 + 4 + lVar14 * 0x10);
    pTVar12 = TParticles<double,3>::GetX((TParticles<double,3> *)this,param_1);
    local_d8._8_4_ = SUB84(dVar7,0);
    local_d8._0_8_ = (double)(float)uVar3;
    local_d8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    local_e8._8_4_ = SUB84(dVar8,0);
    local_e8._0_8_ = (double)fVar2;
    local_e8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    local_c8 = *(undefined8 *)pTVar12;
    uStack_c0 = *(undefined8 *)&pTVar12->field_0x8;
    local_b8 = *(undefined8 *)&pTVar12->field_0x10;
    local_98 = ___xmm_00000000000000003ff0000000000000;
    uStack_90 = _UNK_150689518;
    uStack_b0 = 0;
    local_a8 = ___xmm_3ff00000000000003ff0000000000000;
    uStack_a0 = _UNK_150689688;
    UpdateWorldSpaceState(this,param_1,(TRigidTransform<double,3> *)local_e8,&local_138);
  }
  return;
}

// SetHandle @ 143b3ff00

void __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::SetHandle
          (TGeometryParticlesImp<float,3,1> *this,int param_1,
          TGeometryParticleHandleImp<double,3,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\GeometryParticles.cpp"
                     ,0x52,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SetHandle @ 143b3ff40

void __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::SetHandle
          (TGeometryParticlesImp<double,3,1> *this,int param_1,
          TGeometryParticleHandleImp<double,3,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\GeometryParticles.cpp"
                     ,0x58,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SetHandle @ 143b3ff80

void __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::SetHandle
          (TGeometryParticlesImp<double,3,0> *this,int param_1,
          TGeometryParticleHandleImp<double,3,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (((TGeometryParticlesImp<double,3,0> *)param_2->_padding_ !=
       (TGeometryParticlesImp<double,3,0> *)0x0) &&
     ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_ != this)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3133560516564221558>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                       ,0x18a,"GeometryParticles == nullptr || GeometryParticles == InParticles");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  param_2->_padding_ = (longlong)this;
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MGeometryParticleHandle).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(TGeometryParticleHandleImp<double,3,1> **)
   (*(longlong *)&(this->MGeometryParticleHandle).field_0x8 + (longlong)param_1 * 8) = param_2;
  return;
}

// SetPhysicsProxy @ 143b40de0

void __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::SetPhysicsProxy
          (TGeometryParticlesImp<float,3,1> *this,int param_1,IPhysicsProxyBase *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MPhysicsProxy).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(IPhysicsProxyBase **)(*(longlong *)&(this->MPhysicsProxy).field_0x8 + (longlong)param_1 * 8) =
       param_2;
  return;
}

// SetPhysicsProxy @ 143b40e70

void __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::SetPhysicsProxy
          (TGeometryParticlesImp<double,3,1> *this,int param_1,IPhysicsProxyBase *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MPhysicsProxy).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(IPhysicsProxyBase **)(*(longlong *)&(this->MPhysicsProxy).field_0x8 + (longlong)param_1 * 8) =
       param_2;
  return;
}

// SetPhysicsProxy @ 143b40f00

void __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::SetPhysicsProxy
          (TGeometryParticlesImp<double,3,0> *this,int param_1,IPhysicsProxyBase *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MPhysicsProxy).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(IPhysicsProxyBase **)(*(longlong *)&(this->MPhysicsProxy).field_0x8 + (longlong)param_1 * 8) =
       param_2;
  return;
}

// SetSharedGeometry @ 143b41240

void __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::SetSharedGeometry
          (TGeometryParticlesImp<float,3,1> *this,int param_1,
          TSharedPtr<Chaos::FImplicitObject_const_,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\GeometryParticles.h"
                     ,0x106,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// SetSharedGeometry @ 143b41290

void __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::SetSharedGeometry
          (TGeometryParticlesImp<double,3,1> *this,int param_1,
          TSharedPtr<Chaos::FImplicitObject_const_,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\GeometryParticles.h"
                     ,0x106,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// SetSharedGeometry @ 143b412e0

void __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::SetSharedGeometry
          (TGeometryParticlesImp<double,3,0> *this,int param_1,
          TSharedPtr<Chaos::FImplicitObject_const_,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\GeometryParticles.h"
                     ,0x106,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// ShapeInstances @ 143b419d0

TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
* __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::ShapeInstances
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MShapesArray).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *)(*(longlong *)&(this->MShapesArray).field_0x8 + (longlong)param_1 * 0x18);
}

// ShapeInstances @ 143b41a50

TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
* __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::ShapeInstances
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MShapesArray).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *)(*(longlong *)&(this->MShapesArray).field_0x8 + (longlong)param_1 * 0x18);
}

// ShapeInstances @ 143b41ad0

TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
* __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::ShapeInstances
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MShapesArray).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *)(*(longlong *)&(this->MShapesArray).field_0x8 + (longlong)param_1 * 0x18);
}

// ShapesArray @ 143b41b50

TArray<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
* __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::ShapesArray
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MShapesArray).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TArray<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *)(*(longlong *)&(this->MShapesArray).field_0x8 + (longlong)param_1 * 0x18);
}

// ShapesArray @ 143b41bd0

TArray<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
* __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::ShapesArray
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MShapesArray).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TArray<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *)(*(longlong *)&(this->MShapesArray).field_0x8 + (longlong)param_1 * 0x18);
}

// SharedGeometry @ 143b41c50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<Chaos::FImplicitObject_const_,1> * __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::SharedGeometry
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<Chaos::FImplicitObject_const_,1> *pTVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\GeometryParticles.h"
                     ,0xf0,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TSharedPtr<Chaos::FImplicitObject_const_,1> *)(*pcVar1)();
    return pTVar3;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_class_TSharedPtr<Chaos::FImplicitObject_const_,1>_const&___ptr64___cdecl_Chaos::TGeometryParticlesImp<float,3,1>::SharedGeometry(int)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_class_TSharedPtr<Chaos::FImplicitObject_const_,1>_const&___ptr64___cdecl_Chaos::TGeometryParticlesImp<float,3,1>::SharedGeometry(int)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_class_TSharedPtr<Chaos::FImplicitObject_const_,1>_const&___ptr64___cdecl_Chaos::TGeometryParticlesImp<float,3,1>::SharedGeometry(int)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      _DummyPtr = 0;
      DAT_155070820 = 0;
      atexit(`Chaos::TGeometryParticlesImp<float,3,1>::SharedGeometry'::__l2::
             _dynamic_atexit_destructor_for__DummyPtr__);
      _Init_thread_footer(&`public:_class_TSharedPtr<Chaos::FImplicitObject_const_,1>_const&___ptr64___cdecl_Chaos::TGeometryParticlesImp<float,3,1>::SharedGeometry(int)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      return (TSharedPtr<Chaos::FImplicitObject_const_,1> *)
             &`public:_class_TSharedPtr<Chaos::FImplicitObject_const_,1>_const&___ptr64___cdecl_Chaos::TGeometryParticlesImp<float,3,1>::SharedGeometry(int)const___ptr64'
              ::__l2::DummyPtr;
    }
  }
  return (TSharedPtr<Chaos::FImplicitObject_const_,1> *)
         &`public:_class_TSharedPtr<Chaos::FImplicitObject_const_,1>_const&___ptr64___cdecl_Chaos::TGeometryParticlesImp<float,3,1>::SharedGeometry(int)const___ptr64'
          ::__l2::DummyPtr;
}

// SharedGeometry @ 143b41d00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<Chaos::FImplicitObject_const_,1> * __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::SharedGeometry
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<Chaos::FImplicitObject_const_,1> *pTVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\GeometryParticles.h"
                     ,0xf0,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TSharedPtr<Chaos::FImplicitObject_const_,1> *)(*pcVar1)();
    return pTVar3;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_class_TSharedPtr<Chaos::FImplicitObject_const_,1>_const&___ptr64___cdecl_Chaos::TGeometryParticlesImp<double,3,1>::SharedGeometry(int)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_class_TSharedPtr<Chaos::FImplicitObject_const_,1>_const&___ptr64___cdecl_Chaos::TGeometryParticlesImp<double,3,1>::SharedGeometry(int)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_class_TSharedPtr<Chaos::FImplicitObject_const_,1>_const&___ptr64___cdecl_Chaos::TGeometryParticlesImp<double,3,1>::SharedGeometry(int)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      _DummyPtr = 0;
      DAT_155070838 = 0;
      atexit(`Chaos::TGeometryParticlesImp<double,3,1>::SharedGeometry'::__l2::
             _dynamic_atexit_destructor_for__DummyPtr__);
      _Init_thread_footer(&`public:_class_TSharedPtr<Chaos::FImplicitObject_const_,1>_const&___ptr64___cdecl_Chaos::TGeometryParticlesImp<double,3,1>::SharedGeometry(int)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      return (TSharedPtr<Chaos::FImplicitObject_const_,1> *)
             &`public:_class_TSharedPtr<Chaos::FImplicitObject_const_,1>_const&___ptr64___cdecl_Chaos::TGeometryParticlesImp<double,3,1>::SharedGeometry(int)const___ptr64'
              ::__l2::DummyPtr;
    }
  }
  return (TSharedPtr<Chaos::FImplicitObject_const_,1> *)
         &`public:_class_TSharedPtr<Chaos::FImplicitObject_const_,1>_const&___ptr64___cdecl_Chaos::TGeometryParticlesImp<double,3,1>::SharedGeometry(int)const___ptr64'
          ::__l2::DummyPtr;
}

// SharedGeometry @ 143b41db0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<Chaos::FImplicitObject_const_,1> * __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::SharedGeometry
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<Chaos::FImplicitObject_const_,1> *pTVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\GeometryParticles.h"
                     ,0xf0,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TSharedPtr<Chaos::FImplicitObject_const_,1> *)(*pcVar1)();
    return pTVar3;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_class_TSharedPtr<Chaos::FImplicitObject_const_,1>_const&___ptr64___cdecl_Chaos::TGeometryParticlesImp<double,3,0>::SharedGeometry(int)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_class_TSharedPtr<Chaos::FImplicitObject_const_,1>_const&___ptr64___cdecl_Chaos::TGeometryParticlesImp<double,3,0>::SharedGeometry(int)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_class_TSharedPtr<Chaos::FImplicitObject_const_,1>_const&___ptr64___cdecl_Chaos::TGeometryParticlesImp<double,3,0>::SharedGeometry(int)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      _DummyPtr = 0;
      DAT_155070850 = 0;
      atexit(`Chaos::TGeometryParticlesImp<double,3,0>::SharedGeometry'::__l2::
             _dynamic_atexit_destructor_for__DummyPtr__);
      _Init_thread_footer(&`public:_class_TSharedPtr<Chaos::FImplicitObject_const_,1>_const&___ptr64___cdecl_Chaos::TGeometryParticlesImp<double,3,0>::SharedGeometry(int)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      return (TSharedPtr<Chaos::FImplicitObject_const_,1> *)
             &`public:_class_TSharedPtr<Chaos::FImplicitObject_const_,1>_const&___ptr64___cdecl_Chaos::TGeometryParticlesImp<double,3,0>::SharedGeometry(int)const___ptr64'
              ::__l2::DummyPtr;
    }
  }
  return (TSharedPtr<Chaos::FImplicitObject_const_,1> *)
         &`public:_class_TSharedPtr<Chaos::FImplicitObject_const_,1>_const&___ptr64___cdecl_Chaos::TGeometryParticlesImp<double,3,0>::SharedGeometry(int)const___ptr64'
          ::__l2::DummyPtr;
}

// SpatialIdx @ 143b425c0

FSpatialAccelerationIdx * __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::SpatialIdx
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSpatialAccelerationIdx *pFVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MSpatialIdx).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSpatialAccelerationIdx *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FSpatialAccelerationIdx *)
         (*(longlong *)&(this->MSpatialIdx).field_0x8 + (longlong)param_1 * 2);
}

// SpatialIdx @ 143b42640

FSpatialAccelerationIdx __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::SpatialIdx
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FSpatialAccelerationIdx FVar3;
  uint uVar4;
  undefined4 in_register_00000014;
  uint in_R8D;
  
  uVar4 = 0;
  if ((int)in_R8D < *(int *)&(this->MSpatialIdx).field_0x10) {
    uVar4 = ~in_R8D >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FSpatialAccelerationIdx)(*pcVar1)();
      return FVar3;
    }
  }
  *(undefined2 *)CONCAT44(in_register_00000014,param_1) =
       *(undefined2 *)(*(longlong *)&(this->MSpatialIdx).field_0x8 + (longlong)(int)in_R8D * 2);
  return SUB42(param_1,0);
}

// SpatialIdx @ 143b426d0

FSpatialAccelerationIdx * __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::SpatialIdx
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSpatialAccelerationIdx *pFVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MSpatialIdx).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSpatialAccelerationIdx *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FSpatialAccelerationIdx *)
         (*(longlong *)&(this->MSpatialIdx).field_0x8 + (longlong)param_1 * 2);
}

// SpatialIdx @ 143b42750

FSpatialAccelerationIdx __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::SpatialIdx
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FSpatialAccelerationIdx FVar3;
  uint uVar4;
  undefined4 in_register_00000014;
  uint in_R8D;
  
  uVar4 = 0;
  if ((int)in_R8D < *(int *)&(this->MSpatialIdx).field_0x10) {
    uVar4 = ~in_R8D >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FSpatialAccelerationIdx)(*pcVar1)();
      return FVar3;
    }
  }
  *(undefined2 *)CONCAT44(in_register_00000014,param_1) =
       *(undefined2 *)(*(longlong *)&(this->MSpatialIdx).field_0x8 + (longlong)(int)in_R8D * 2);
  return SUB42(param_1,0);
}

// SpatialIdx @ 143b427e0

FSpatialAccelerationIdx __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::SpatialIdx
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FSpatialAccelerationIdx FVar3;
  uint uVar4;
  undefined4 in_register_00000014;
  uint in_R8D;
  
  uVar4 = 0;
  if ((int)in_R8D < *(int *)&(this->MSpatialIdx).field_0x10) {
    uVar4 = ~in_R8D >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FSpatialAccelerationIdx)(*pcVar1)();
      return FVar3;
    }
  }
  *(undefined2 *)CONCAT44(in_register_00000014,param_1) =
       *(undefined2 *)(*(longlong *)&(this->MSpatialIdx).field_0x8 + (longlong)(int)in_R8D * 2);
  return SUB42(param_1,0);
}

// SyncState @ 143b454c0

ESyncState * __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::SyncState
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ESyncState *pEVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MSyncState).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pEVar4 = (ESyncState *)(*pcVar1)();
      return pEVar4;
    }
  }
  return (ESyncState *)((longlong)param_1 + *(longlong *)&(this->MSyncState).field_0x8);
}

// SyncState @ 143b45540

ESyncState __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::SyncState
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  ESyncState EVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < *(int *)&(this->MSyncState).field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return *(ESyncState *)((longlong)param_1 + *(longlong *)&(this->MSyncState).field_0x8);
}

// SyncState @ 143b455c0

ESyncState * __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::SyncState
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ESyncState *pEVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MSyncState).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pEVar4 = (ESyncState *)(*pcVar1)();
      return pEVar4;
    }
  }
  return (ESyncState *)((longlong)param_1 + *(longlong *)&(this->MSyncState).field_0x8);
}

// SyncState @ 143b45640

ESyncState __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::SyncState
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  ESyncState EVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < *(int *)&(this->MSyncState).field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return *(ESyncState *)((longlong)param_1 + *(longlong *)&(this->MSyncState).field_0x8);
}

// SyncState @ 143b456c0

ESyncState * __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::SyncState
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ESyncState *pEVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MSyncState).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pEVar4 = (ESyncState *)(*pcVar1)();
      return pEVar4;
    }
  }
  return (ESyncState *)((longlong)param_1 + *(longlong *)&(this->MSyncState).field_0x8);
}

// SyncState @ 143b45740

ESyncState __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::SyncState
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  ESyncState EVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < *(int *)&(this->MSyncState).field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return *(ESyncState *)((longlong)param_1 + *(longlong *)&(this->MSyncState).field_0x8);
}

// ToString @ 143b457c0

FString * __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::ToString
          (TGeometryParticlesImp<float,3,1> *this,FString *__return_storage_ptr__,int param_1)

{
  undefined4 *puVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FString *pFVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  lVar11 = (longlong)param_1;
  bVar5 = false;
  TParticles<float,3>::GetX((TParticles<float,3> *)this,param_1);
  ::FString::PrintfImpl(&local_88,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(&local_68,L"MX:%s");
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  uVar10 = (uint)~param_1 >> 0x1f;
  uVar6 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar6 = uVar10;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FString *)(*pcVar3)();
    return pFVar8;
  }
  uVar6 = 0;
  if (*(longlong *)(this->_padding_ + lVar11 * 8) != 0) {
    uVar7 = uVar6;
    if (param_1 < (int)this->_padding_) {
      uVar7 = uVar10;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FString *)(*pcVar3)();
      return pFVar8;
    }
    plVar2 = *(longlong **)(this->_padding_ + lVar11 * 8);
    lVar9 = (**(code **)(*plVar2 + 0xf8))(plVar2,local_58);
    if (*(int *)(lVar9 + 8) == 0) {
      bVar5 = true;
    }
    else {
      bVar5 = true;
    }
  }
  uVar7 = uVar6;
  if (param_1 < (int)this->_padding_) {
    uVar7 = uVar10;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FString *)(*pcVar3)();
    return pFVar8;
  }
  puVar1 = (undefined4 *)(this->_padding_ + lVar11 * 0x10);
  local_48 = *puVar1;
  uStack_44 = puVar1[1];
  uStack_40 = puVar1[2];
  uStack_3c = puVar1[3];
  ::FString::PrintfImpl(&local_78,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
  if (param_1 < *(int *)&(this->MUniqueIdx).field_0x10) {
    uVar6 = uVar10;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FString *)(*pcVar3)();
    return pFVar8;
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s, MUniqueIdx:%d MR:%s, MGeometry:%s");
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if ((bVar5) && (local_58[0] != (void *)0x0)) {
    FMemory::Free(local_58[0]);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToString @ 143b45ad0

FString * __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::ToString
          (TGeometryParticlesImp<double,3,1> *this,FString *__return_storage_ptr__,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FString *pFVar7;
  longlong lVar8;
  uint uVar9;
  FString local_78;
  FString local_68;
  FString local_58;
  void *local_48 [2];
  
  bVar4 = false;
  TParticles<double,3>::GetX((TParticles<double,3> *)this,param_1);
  ::FString::PrintfImpl(&local_78,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(&local_58,L"MX:%s");
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  uVar9 = (uint)~param_1 >> 0x1f;
  uVar5 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar5 = uVar9;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FString *)(*pcVar2)();
    return pFVar7;
  }
  uVar5 = 0;
  if (*(longlong *)(this->_padding_ + (longlong)param_1 * 8) != 0) {
    uVar6 = uVar5;
    if (param_1 < (int)this->_padding_) {
      uVar6 = uVar9;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar2)();
      return pFVar7;
    }
    plVar1 = *(longlong **)(this->_padding_ + (longlong)param_1 * 8);
    lVar8 = (**(code **)(*plVar1 + 0xf8))(plVar1,local_48);
    if (*(int *)(lVar8 + 8) == 0) {
      bVar4 = true;
    }
    else {
      bVar4 = true;
    }
  }
  uVar6 = uVar5;
  if (param_1 < (int)this->_padding_) {
    uVar6 = uVar9;
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FString *)(*pcVar2)();
    return pFVar7;
  }
  ::FString::PrintfImpl(&local_68,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
  if (param_1 < *(int *)&(this->MUniqueIdx).field_0x10) {
    uVar5 = uVar9;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FString *)(*pcVar2)();
    return pFVar7;
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s, MUniqueIdx:%d MR:%s, MGeometry:%s");
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_48[0] != (void *)0x0)) {
    FMemory::Free(local_48[0]);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToString @ 143b45dc0

FString * __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::ToString
          (TGeometryParticlesImp<double,3,0> *this,FString *__return_storage_ptr__,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FString *pFVar7;
  longlong lVar8;
  uint uVar9;
  FString local_78;
  FString local_68;
  FString local_58;
  void *local_48 [2];
  
  bVar4 = false;
  TParticles<double,3>::GetX((TParticles<double,3> *)this,param_1);
  ::FString::PrintfImpl(&local_78,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(&local_58,L"MX:%s");
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  uVar9 = (uint)~param_1 >> 0x1f;
  uVar5 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar5 = uVar9;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FString *)(*pcVar2)();
    return pFVar7;
  }
  uVar5 = 0;
  if (*(longlong *)(this->_padding_ + (longlong)param_1 * 8) != 0) {
    uVar6 = uVar5;
    if (param_1 < (int)this->_padding_) {
      uVar6 = uVar9;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar2)();
      return pFVar7;
    }
    plVar1 = *(longlong **)(this->_padding_ + (longlong)param_1 * 8);
    lVar8 = (**(code **)(*plVar1 + 0xf8))(plVar1,local_48);
    if (*(int *)(lVar8 + 8) == 0) {
      bVar4 = true;
    }
    else {
      bVar4 = true;
    }
  }
  uVar6 = uVar5;
  if (param_1 < (int)this->_padding_) {
    uVar6 = uVar9;
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FString *)(*pcVar2)();
    return pFVar7;
  }
  ::FString::PrintfImpl(&local_68,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
  if (param_1 < *(int *)&(this->MUniqueIdx).field_0x10) {
    uVar5 = uVar9;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FString *)(*pcVar2)();
    return pFVar7;
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s, MUniqueIdx:%d MR:%s, MGeometry:%s");
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_48[0] != (void *)0x0)) {
    FMemory::Free(local_48[0]);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// UniqueIdx @ 143b470d0

FUniqueIdx * __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::UniqueIdx
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FUniqueIdx *pFVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MUniqueIdx).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FUniqueIdx *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FUniqueIdx *)(*(longlong *)&(this->MUniqueIdx).field_0x8 + (longlong)param_1 * 4);
}

// UniqueIdx @ 143b47150

FUniqueIdx __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::UniqueIdx
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_register_00000014;
  uint in_R8D;
  
  uVar3 = 0;
  if ((int)in_R8D < *(int *)&(this->MUniqueIdx).field_0x10) {
    uVar3 = ~in_R8D >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return (FUniqueIdx)iVar4;
    }
  }
  *(undefined4 *)CONCAT44(in_register_00000014,param_1) =
       *(undefined4 *)(*(longlong *)&(this->MUniqueIdx).field_0x8 + (longlong)(int)in_R8D * 4);
  return (FUniqueIdx)param_1;
}

// UniqueIdx @ 143b471e0

FUniqueIdx * __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::UniqueIdx
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FUniqueIdx *pFVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MUniqueIdx).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FUniqueIdx *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FUniqueIdx *)(*(longlong *)&(this->MUniqueIdx).field_0x8 + (longlong)param_1 * 4);
}

// UniqueIdx @ 143b47260

FUniqueIdx __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::UniqueIdx
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_register_00000014;
  uint in_R8D;
  
  uVar3 = 0;
  if ((int)in_R8D < *(int *)&(this->MUniqueIdx).field_0x10) {
    uVar3 = ~in_R8D >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return (FUniqueIdx)iVar4;
    }
  }
  *(undefined4 *)CONCAT44(in_register_00000014,param_1) =
       *(undefined4 *)(*(longlong *)&(this->MUniqueIdx).field_0x8 + (longlong)(int)in_R8D * 4);
  return (FUniqueIdx)param_1;
}

// UniqueIdx @ 143b472f0

FUniqueIdx __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::UniqueIdx
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_register_00000014;
  uint in_R8D;
  
  uVar3 = 0;
  if ((int)in_R8D < *(int *)&(this->MUniqueIdx).field_0x10) {
    uVar3 = ~in_R8D >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return (FUniqueIdx)iVar4;
    }
  }
  *(undefined4 *)CONCAT44(in_register_00000014,param_1) =
       *(undefined4 *)(*(longlong *)&(this->MUniqueIdx).field_0x8 + (longlong)(int)in_R8D * 4);
  return (FUniqueIdx)param_1;
}

// UpdateCCDAxisThreshold @ 143b47830

void __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::UpdateCCDAxisThreshold
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  int *piVar1;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  code *pcVar15;
  bool bVar16;
  byte bVar17;
  uint uVar18;
  uint uVar19;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar20;
  double *pdVar21;
  byte *pbVar22;
  uint uVar23;
  longlong lVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 local_res10 [8];
  undefined1 local_c8 [144];
  
  lVar24 = (longlong)param_1;
  uVar25 = (uint)~param_1 >> 0x1f;
  uVar23 = 0;
  uVar18 = uVar23;
  if (param_1 < *(int *)&(this->MHasBounds).field_0x10) {
    uVar18 = uVar25;
  }
  if ((uVar18 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  uVar18 = 0;
  if (*(char *)(lVar24 + *(longlong *)&(this->MHasBounds).field_0x8) != '\0') {
    uVar19 = uVar23;
    if (param_1 < *(int *)&(this->MLocalBounds).field_0x10) {
      uVar19 = uVar25;
    }
    if ((uVar19 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    if (__real_7f7fffff != *(float *)(*(longlong *)&(this->MLocalBounds).field_0x8 + lVar24 * 0x18))
    {
      iVar12 = *(int *)&(this->MLocalBounds).field_0x10;
      if (CVars::CCDAxisThresholdMode == 0) {
        uVar23 = uVar18;
        if (param_1 < iVar12) {
          uVar23 = uVar25;
        }
        if ((uVar23 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        lVar13 = *(longlong *)&(this->MLocalBounds).field_0x8;
        fVar28 = *(float *)(lVar13 + 0x14 + lVar24 * 0x18);
        fVar26 = *(float *)(lVar13 + 0x10 + lVar24 * 0x18);
        fVar27 = *(float *)(lVar13 + 0xc + lVar24 * 0x18);
        fVar3 = *(float *)(lVar13 + 8 + lVar24 * 0x18);
        fVar4 = *(float *)(lVar13 + 4 + lVar24 * 0x18);
        fVar5 = *(float *)(lVar13 + lVar24 * 0x18);
        if (param_1 < *(int *)&(this->MCCDAxisThreshold).field_0x10) {
          uVar18 = uVar25;
        }
        if ((uVar18 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        lVar13 = *(longlong *)&(this->MCCDAxisThreshold).field_0x8;
        *(float *)(lVar13 + lVar24 * 0xc) = fVar27 - fVar5;
        *(float *)(lVar13 + 4 + lVar24 * 0xc) = fVar26 - fVar4;
        *(float *)(lVar13 + 8 + lVar24 * 0xc) = fVar28 - fVar3;
        return;
      }
      if (CVars::CCDAxisThresholdMode == 1) {
        if (param_1 < iVar12) {
          uVar18 = uVar25;
        }
        if ((uVar18 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        lVar13 = *(longlong *)&(this->MLocalBounds).field_0x8;
        fVar28 = *(float *)(lVar13 + 0x10 + lVar24 * 0x18) - *(float *)(lVar13 + 4 + lVar24 * 0x18);
        fVar26 = *(float *)(lVar13 + 0xc + lVar24 * 0x18) - *(float *)(lVar13 + lVar24 * 0x18);
        fVar27 = *(float *)(lVar13 + 0x14 + lVar24 * 0x18) - *(float *)(lVar13 + 8 + lVar24 * 0x18);
        if (fVar26 <= fVar28) {
          fVar28 = fVar26;
        }
        if (param_1 < *(int *)&(this->MCCDAxisThreshold).field_0x10) {
          uVar23 = uVar25;
        }
        if (fVar27 <= fVar28) {
          fVar28 = fVar27;
        }
        if ((uVar23 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        lVar13 = *(longlong *)&(this->MCCDAxisThreshold).field_0x8;
        *(float *)(lVar13 + lVar24 * 0xc) = fVar28;
        *(float *)(lVar13 + 4 + lVar24 * 0xc) = fVar28;
        *(float *)(lVar13 + 8 + lVar24 * 0xc) = fVar28;
        return;
      }
      uVar19 = uVar18;
      if (param_1 < iVar12) {
        uVar19 = uVar25;
      }
      if ((uVar19 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      lVar13 = *(longlong *)&(this->MLocalBounds).field_0x8;
      fVar28 = *(float *)(lVar13 + 0xc + lVar24 * 0x18) - *(float *)(lVar13 + lVar24 * 0x18);
      fVar26 = *(float *)(lVar13 + 0x10 + lVar24 * 0x18) - *(float *)(lVar13 + 4 + lVar24 * 0x18);
      fVar27 = *(float *)(lVar13 + 0x14 + lVar24 * 0x18) - *(float *)(lVar13 + 8 + lVar24 * 0x18);
      FVar20 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                )ShapesArray(this,param_1);
      iVar12 = *(int *)((longlong)FVar20 + 0x10);
      piVar1 = (int *)((longlong)FVar20 + 0x10);
      if (*(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
            *)((longlong)FVar20 + 8) !=
          (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)
          0x0) {
        FVar20 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                   *)((longlong)FVar20 + 8);
      }
      FVar2 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
               )((longlong)FVar20 + (longlong)iVar12 * 8);
      do {
        if (*piVar1 != iVar12) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (FVar20 == FVar2) {
          if (CVars::CCDAxisThresholdMode == 2) {
            if (param_1 < *(int *)&(this->MCCDAxisThreshold).field_0x10) {
              uVar23 = uVar25;
            }
            if ((uVar23 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            lVar13 = *(longlong *)&(this->MCCDAxisThreshold).field_0x8;
            *(float *)(lVar13 + lVar24 * 0xc) = fVar28;
            *(float *)(lVar13 + 4 + lVar24 * 0xc) = fVar26;
            *(float *)(lVar13 + 8 + lVar24 * 0xc) = fVar27;
            return;
          }
          if (CVars::CCDAxisThresholdMode != 3) {
            return;
          }
          if (fVar28 <= fVar26) {
            fVar26 = fVar28;
          }
          if (param_1 < *(int *)&(this->MCCDAxisThreshold).field_0x10) {
            uVar23 = uVar25;
          }
          if (fVar27 <= fVar26) {
            fVar26 = fVar27;
          }
          if ((uVar23 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          lVar13 = *(longlong *)&(this->MCCDAxisThreshold).field_0x8;
          *(float *)(lVar13 + lVar24 * 0xc) = fVar26;
          *(float *)(lVar13 + 4 + lVar24 * 0xc) = fVar26;
          *(float *)(lVar13 + 8 + lVar24 * 0xc) = fVar26;
          return;
        }
        lVar13 = *(longlong *)FVar20;
        pbVar22 = (byte *)(lVar13 + 0x79);
        uVar19 = *(uint *)(lVar13 + 8) & 3;
        if (uVar19 != 0) {
          pbVar22 = (byte *)(lVar13 + 0x71);
        }
        fVar3 = fVar27;
        if ((*pbVar22 & 1) != 0) {
          if (CVars::bCCDAxisThresholdUsesProbeShapes == false) {
            if (uVar19 == 0) {
              bVar17 = *(byte *)(lVar13 + 0x79);
            }
            else {
              bVar17 = *(byte *)(lVar13 + 0x71);
            }
            if ((bVar17 >> 2 & 1) != 0) goto LAB_143b47cd8;
          }
          plVar14 = *(longlong **)(lVar13 + 0x10);
          if ((plVar14 != (longlong *)0x0) && (*(char *)((longlong)plVar14 + 0x16) != '\0')) {
            pdVar21 = (double *)(**(code **)(*plVar14 + 0x90))(plVar14,local_c8);
            dVar6 = pdVar21[3];
            dVar7 = *pdVar21;
            dVar8 = pdVar21[4];
            dVar9 = pdVar21[1];
            dVar10 = pdVar21[5];
            dVar11 = pdVar21[2];
            uVar19 = uVar18;
            if (param_1 < *(int *)&(this->MCCDAxisThreshold).field_0x10) {
              uVar19 = uVar25;
            }
            if ((uVar19 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            fVar4 = (float)(dVar6 - dVar7);
            if (fVar28 <= (float)(dVar6 - dVar7)) {
              fVar4 = fVar28;
            }
            fVar28 = (float)(dVar8 - dVar9);
            if (fVar26 <= (float)(dVar8 - dVar9)) {
              fVar28 = fVar26;
            }
            fVar26 = fVar28;
            fVar3 = (float)(dVar10 - dVar11);
            fVar28 = fVar4;
            if (fVar27 <= (float)(dVar10 - dVar11)) {
              fVar3 = fVar27;
            }
          }
        }
LAB_143b47cd8:
        fVar27 = fVar3;
        FVar20 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                  )((longlong)FVar20 + 8);
      } while( true );
    }
  }
  if (param_1 < *(int *)&(this->MCCDAxisThreshold).field_0x10) {
    uVar18 = uVar25;
  }
  if ((uVar18 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  lVar13 = *(longlong *)&(this->MCCDAxisThreshold).field_0x8;
  *(undefined8 *)(lVar13 + lVar24 * 0xc) = 0;
  *(undefined4 *)(lVar13 + 8 + lVar24 * 0xc) = 0;
  return;
}

// UpdateCCDAxisThreshold @ 143b47eb0

void __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::UpdateCCDAxisThreshold
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  int *piVar1;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  code *pcVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  bool bVar19;
  byte bVar20;
  uint uVar21;
  uint uVar22;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar23;
  double *pdVar24;
  byte *pbVar25;
  uint uVar26;
  longlong lVar27;
  uint uVar28;
  double dVar29;
  undefined1 local_res10 [8];
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined1 local_d0 [152];
  
  lVar27 = (longlong)param_1;
  uVar28 = (uint)~param_1 >> 0x1f;
  uVar26 = 0;
  uVar21 = uVar26;
  if (param_1 < *(int *)&(this->MHasBounds).field_0x10) {
    uVar21 = uVar28;
  }
  if ((uVar21 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  uVar21 = 0;
  if (*(char *)(lVar27 + *(longlong *)&(this->MHasBounds).field_0x8) != '\0') {
    uVar22 = uVar26;
    if (param_1 < *(int *)&(this->MLocalBounds).field_0x10) {
      uVar22 = uVar28;
    }
    if ((uVar22 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if (__real_7fefffffffffffff !=
        *(double *)(*(longlong *)&(this->MLocalBounds).field_0x8 + lVar27 * 0x30)) {
      iVar8 = *(int *)&(this->MLocalBounds).field_0x10;
      if (CVars::CCDAxisThresholdMode == 0) {
        if (param_1 < iVar8) {
          uVar21 = uVar28;
        }
        if ((uVar21 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar9 = *(longlong *)&(this->MLocalBounds).field_0x8;
        pdVar24 = (double *)(lVar9 + 0x20 + lVar27 * 0x30);
        dVar12 = *pdVar24;
        if (param_1 < *(int *)&(this->MCCDAxisThreshold).field_0x10) {
          uVar26 = uVar28;
        }
        dVar4 = *(double *)(lVar9 + 0x18 + lVar27 * 0x30);
        pdVar3 = (double *)(lVar9 + 8 + lVar27 * 0x30);
        dVar5 = *pdVar3;
        dVar29 = *(double *)(lVar9 + lVar27 * 0x30);
        dVar16 = pdVar24[1] - pdVar3[1];
        if ((uVar26 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar9 = *(longlong *)&(this->MCCDAxisThreshold).field_0x8;
        *(double *)(lVar9 + lVar27 * 0x18) = dVar4 - dVar29;
        auVar15._8_4_ = SUB84(dVar16,0);
        auVar15._0_8_ = dVar12 - dVar5;
        auVar15._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
        *(undefined1 (*) [16])(lVar9 + 8 + lVar27 * 0x18) = auVar15;
        return;
      }
      if (CVars::CCDAxisThresholdMode == 1) {
        if (param_1 < iVar8) {
          uVar21 = uVar28;
        }
        if ((uVar21 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar9 = *(longlong *)&(this->MLocalBounds).field_0x8;
        dVar4 = *(double *)(lVar9 + 0x20 + lVar27 * 0x30) - *(double *)(lVar9 + 8 + lVar27 * 0x30);
        dVar12 = *(double *)(lVar9 + 0x18 + lVar27 * 0x30) - *(double *)(lVar9 + lVar27 * 0x30);
        dVar29 = *(double *)(lVar9 + 0x28 + lVar27 * 0x30) -
                 *(double *)(lVar9 + 0x10 + lVar27 * 0x30);
        if (dVar12 <= dVar4) {
          dVar4 = dVar12;
        }
        if (param_1 < *(int *)&(this->MCCDAxisThreshold).field_0x10) {
          uVar26 = uVar28;
        }
        if (dVar29 <= dVar4) {
          dVar4 = dVar29;
        }
        if ((uVar26 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar9 = *(longlong *)&(this->MCCDAxisThreshold).field_0x8;
        auVar13._8_4_ = SUB84(dVar4,0);
        auVar13._0_8_ = dVar4;
        auVar13._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
        *(undefined1 (*) [16])(lVar9 + lVar27 * 0x18) = auVar13;
        *(double *)(lVar9 + 0x10 + lVar27 * 0x18) = dVar4;
        return;
      }
      uVar22 = uVar21;
      if (param_1 < iVar8) {
        uVar22 = uVar28;
      }
      if ((uVar22 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      lVar9 = *(longlong *)&(this->MLocalBounds).field_0x8;
      dVar29 = *(double *)(lVar9 + 0x18 + lVar27 * 0x30) - *(double *)(lVar9 + lVar27 * 0x30);
      dVar12 = *(double *)(lVar9 + 0x20 + lVar27 * 0x30) - *(double *)(lVar9 + 8 + lVar27 * 0x30);
      dVar4 = *(double *)(lVar9 + 0x28 + lVar27 * 0x30) - *(double *)(lVar9 + 0x10 + lVar27 * 0x30);
      FVar23 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                )ShapesArray(this,param_1);
      iVar8 = *(int *)((longlong)FVar23 + 0x10);
      piVar1 = (int *)((longlong)FVar23 + 0x10);
      if (*(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
            *)((longlong)FVar23 + 8) !=
          (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)
          0x0) {
        FVar23 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                   *)((longlong)FVar23 + 8);
      }
      FVar2 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
               )((longlong)FVar23 + (longlong)iVar8 * 8);
      local_e8 = dVar29;
      dStack_e0 = dVar12;
      local_d8 = dVar4;
      do {
        if (*piVar1 != iVar8) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (FVar23 == FVar2) {
          if (CVars::CCDAxisThresholdMode == 2) {
            if (param_1 < *(int *)&(this->MCCDAxisThreshold).field_0x10) {
              uVar21 = uVar28;
            }
            if ((uVar21 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            lVar9 = *(longlong *)&(this->MCCDAxisThreshold).field_0x8;
            pdVar24 = (double *)(lVar9 + lVar27 * 0x18);
            *pdVar24 = local_e8;
            pdVar24[1] = dStack_e0;
            *(double *)(lVar9 + 0x10 + lVar27 * 0x18) = local_d8;
            return;
          }
          if (CVars::CCDAxisThresholdMode != 3) {
            return;
          }
          if (dVar29 <= dVar12) {
            dVar12 = dVar29;
          }
          if (param_1 < *(int *)&(this->MCCDAxisThreshold).field_0x10) {
            uVar26 = uVar28;
          }
          if (dVar4 <= dVar12) {
            dVar12 = dVar4;
          }
          if ((uVar26 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          lVar9 = *(longlong *)&(this->MCCDAxisThreshold).field_0x8;
          auVar14._8_4_ = SUB84(dVar12,0);
          auVar14._0_8_ = dVar12;
          auVar14._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
          *(undefined1 (*) [16])(lVar9 + lVar27 * 0x18) = auVar14;
          *(double *)(lVar9 + 0x10 + lVar27 * 0x18) = dVar12;
          return;
        }
        lVar9 = *(longlong *)FVar23;
        pbVar25 = (byte *)(lVar9 + 0x79);
        uVar22 = *(uint *)(lVar9 + 8) & 3;
        if (uVar22 != 0) {
          pbVar25 = (byte *)(lVar9 + 0x71);
        }
        if ((*pbVar25 & 1) != 0) {
          if (CVars::bCCDAxisThresholdUsesProbeShapes == false) {
            if (uVar22 == 0) {
              bVar20 = *(byte *)(lVar9 + 0x79);
            }
            else {
              bVar20 = *(byte *)(lVar9 + 0x71);
            }
            if ((bVar20 >> 2 & 1) != 0) goto LAB_143b48363;
          }
          plVar10 = *(longlong **)(lVar9 + 0x10);
          if ((plVar10 != (longlong *)0x0) && (*(char *)((longlong)plVar10 + 0x16) != '\0')) {
            pdVar24 = (double *)(**(code **)(*plVar10 + 0x90))(plVar10,local_d0);
            dVar16 = pdVar24[4];
            dVar5 = pdVar24[3];
            dVar17 = pdVar24[5] - pdVar24[2];
            dVar6 = pdVar24[1];
            dVar7 = *pdVar24;
            uVar22 = uVar21;
            if (param_1 < *(int *)&(this->MCCDAxisThreshold).field_0x10) {
              uVar22 = uVar28;
            }
            if ((uVar22 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            dVar18 = dVar5 - dVar7;
            if (dVar29 <= dVar5 - dVar7) {
              dVar18 = dVar29;
            }
            dVar29 = dVar18;
            if (dVar16 - dVar6 <= dVar12) {
              dVar12 = dVar16 - dVar6;
            }
            local_e8 = dVar29;
            dStack_e0 = dVar12;
            local_d8 = dVar4;
            if (dVar17 <= dVar4) {
              dVar4 = dVar17;
              local_d8 = dVar17;
            }
          }
        }
LAB_143b48363:
        FVar23 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                  )((longlong)FVar23 + 8);
      } while( true );
    }
  }
  if (param_1 < *(int *)&(this->MCCDAxisThreshold).field_0x10) {
    uVar21 = uVar28;
  }
  if ((uVar21 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  lVar9 = *(longlong *)&(this->MCCDAxisThreshold).field_0x8;
  *(undefined8 *)(lVar9 + lVar27 * 0x18) = 0;
  *(undefined8 *)(lVar9 + 8 + lVar27 * 0x18) = 0;
  *(undefined8 *)(lVar9 + 0x10 + lVar27 * 0x18) = 0;
  return;
}

// UpdateCCDAxisThreshold @ 143b48520

void __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::UpdateCCDAxisThreshold
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  int *piVar1;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  code *pcVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  bool bVar19;
  byte bVar20;
  uint uVar21;
  uint uVar22;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar23;
  double *pdVar24;
  byte *pbVar25;
  uint uVar26;
  longlong lVar27;
  uint uVar28;
  double dVar29;
  undefined1 local_res10 [8];
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined1 local_d0 [152];
  
  lVar27 = (longlong)param_1;
  uVar28 = (uint)~param_1 >> 0x1f;
  uVar26 = 0;
  uVar21 = uVar26;
  if (param_1 < *(int *)&(this->MHasBounds).field_0x10) {
    uVar21 = uVar28;
  }
  if ((uVar21 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  uVar21 = 0;
  if (*(char *)(lVar27 + *(longlong *)&(this->MHasBounds).field_0x8) != '\0') {
    uVar22 = uVar26;
    if (param_1 < *(int *)&(this->MLocalBounds).field_0x10) {
      uVar22 = uVar28;
    }
    if ((uVar22 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if (__real_7fefffffffffffff !=
        *(double *)(*(longlong *)&(this->MLocalBounds).field_0x8 + lVar27 * 0x30)) {
      iVar8 = *(int *)&(this->MLocalBounds).field_0x10;
      if (CVars::CCDAxisThresholdMode == 0) {
        if (param_1 < iVar8) {
          uVar21 = uVar28;
        }
        if ((uVar21 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar9 = *(longlong *)&(this->MLocalBounds).field_0x8;
        pdVar24 = (double *)(lVar9 + 0x20 + lVar27 * 0x30);
        dVar12 = *pdVar24;
        if (param_1 < *(int *)&(this->MCCDAxisThreshold).field_0x10) {
          uVar26 = uVar28;
        }
        dVar4 = *(double *)(lVar9 + 0x18 + lVar27 * 0x30);
        pdVar3 = (double *)(lVar9 + 8 + lVar27 * 0x30);
        dVar5 = *pdVar3;
        dVar29 = *(double *)(lVar9 + lVar27 * 0x30);
        dVar16 = pdVar24[1] - pdVar3[1];
        if ((uVar26 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar9 = *(longlong *)&(this->MCCDAxisThreshold).field_0x8;
        *(double *)(lVar9 + lVar27 * 0x18) = dVar4 - dVar29;
        auVar15._8_4_ = SUB84(dVar16,0);
        auVar15._0_8_ = dVar12 - dVar5;
        auVar15._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
        *(undefined1 (*) [16])(lVar9 + 8 + lVar27 * 0x18) = auVar15;
        return;
      }
      if (CVars::CCDAxisThresholdMode == 1) {
        if (param_1 < iVar8) {
          uVar21 = uVar28;
        }
        if ((uVar21 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar9 = *(longlong *)&(this->MLocalBounds).field_0x8;
        dVar4 = *(double *)(lVar9 + 0x20 + lVar27 * 0x30) - *(double *)(lVar9 + 8 + lVar27 * 0x30);
        dVar12 = *(double *)(lVar9 + 0x18 + lVar27 * 0x30) - *(double *)(lVar9 + lVar27 * 0x30);
        dVar29 = *(double *)(lVar9 + 0x28 + lVar27 * 0x30) -
                 *(double *)(lVar9 + 0x10 + lVar27 * 0x30);
        if (dVar12 <= dVar4) {
          dVar4 = dVar12;
        }
        if (param_1 < *(int *)&(this->MCCDAxisThreshold).field_0x10) {
          uVar26 = uVar28;
        }
        if (dVar29 <= dVar4) {
          dVar4 = dVar29;
        }
        if ((uVar26 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar9 = *(longlong *)&(this->MCCDAxisThreshold).field_0x8;
        auVar13._8_4_ = SUB84(dVar4,0);
        auVar13._0_8_ = dVar4;
        auVar13._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
        *(undefined1 (*) [16])(lVar9 + lVar27 * 0x18) = auVar13;
        *(double *)(lVar9 + 0x10 + lVar27 * 0x18) = dVar4;
        return;
      }
      uVar22 = uVar21;
      if (param_1 < iVar8) {
        uVar22 = uVar28;
      }
      if ((uVar22 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      lVar9 = *(longlong *)&(this->MLocalBounds).field_0x8;
      dVar29 = *(double *)(lVar9 + 0x18 + lVar27 * 0x30) - *(double *)(lVar9 + lVar27 * 0x30);
      dVar12 = *(double *)(lVar9 + 0x20 + lVar27 * 0x30) - *(double *)(lVar9 + 8 + lVar27 * 0x30);
      dVar4 = *(double *)(lVar9 + 0x28 + lVar27 * 0x30) - *(double *)(lVar9 + 0x10 + lVar27 * 0x30);
      FVar23 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                )ShapesArray(this,param_1);
      iVar8 = *(int *)((longlong)FVar23 + 0x10);
      piVar1 = (int *)((longlong)FVar23 + 0x10);
      if (*(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
            *)((longlong)FVar23 + 8) !=
          (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)
          0x0) {
        FVar23 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                   *)((longlong)FVar23 + 8);
      }
      FVar2 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
               )((longlong)FVar23 + (longlong)iVar8 * 8);
      local_e8 = dVar29;
      dStack_e0 = dVar12;
      local_d8 = dVar4;
      do {
        if (*piVar1 != iVar8) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (FVar23 == FVar2) {
          if (CVars::CCDAxisThresholdMode == 2) {
            if (param_1 < *(int *)&(this->MCCDAxisThreshold).field_0x10) {
              uVar21 = uVar28;
            }
            if ((uVar21 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            lVar9 = *(longlong *)&(this->MCCDAxisThreshold).field_0x8;
            pdVar24 = (double *)(lVar9 + lVar27 * 0x18);
            *pdVar24 = local_e8;
            pdVar24[1] = dStack_e0;
            *(double *)(lVar9 + 0x10 + lVar27 * 0x18) = local_d8;
            return;
          }
          if (CVars::CCDAxisThresholdMode != 3) {
            return;
          }
          if (dVar29 <= dVar12) {
            dVar12 = dVar29;
          }
          if (param_1 < *(int *)&(this->MCCDAxisThreshold).field_0x10) {
            uVar26 = uVar28;
          }
          if (dVar4 <= dVar12) {
            dVar12 = dVar4;
          }
          if ((uVar26 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          lVar9 = *(longlong *)&(this->MCCDAxisThreshold).field_0x8;
          auVar14._8_4_ = SUB84(dVar12,0);
          auVar14._0_8_ = dVar12;
          auVar14._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
          *(undefined1 (*) [16])(lVar9 + lVar27 * 0x18) = auVar14;
          *(double *)(lVar9 + 0x10 + lVar27 * 0x18) = dVar12;
          return;
        }
        lVar9 = *(longlong *)FVar23;
        pbVar25 = (byte *)(lVar9 + 0x79);
        uVar22 = *(uint *)(lVar9 + 8) & 3;
        if (uVar22 != 0) {
          pbVar25 = (byte *)(lVar9 + 0x71);
        }
        if ((*pbVar25 & 1) != 0) {
          if (CVars::bCCDAxisThresholdUsesProbeShapes == false) {
            if (uVar22 == 0) {
              bVar20 = *(byte *)(lVar9 + 0x79);
            }
            else {
              bVar20 = *(byte *)(lVar9 + 0x71);
            }
            if ((bVar20 >> 2 & 1) != 0) goto LAB_143b489d3;
          }
          plVar10 = *(longlong **)(lVar9 + 0x10);
          if ((plVar10 != (longlong *)0x0) && (*(char *)((longlong)plVar10 + 0x16) != '\0')) {
            pdVar24 = (double *)(**(code **)(*plVar10 + 0x90))(plVar10,local_d0);
            dVar16 = pdVar24[4];
            dVar5 = pdVar24[3];
            dVar17 = pdVar24[5] - pdVar24[2];
            dVar6 = pdVar24[1];
            dVar7 = *pdVar24;
            uVar22 = uVar21;
            if (param_1 < *(int *)&(this->MCCDAxisThreshold).field_0x10) {
              uVar22 = uVar28;
            }
            if ((uVar22 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            dVar18 = dVar5 - dVar7;
            if (dVar29 <= dVar5 - dVar7) {
              dVar18 = dVar29;
            }
            dVar29 = dVar18;
            if (dVar16 - dVar6 <= dVar12) {
              dVar12 = dVar16 - dVar6;
            }
            local_e8 = dVar29;
            dStack_e0 = dVar12;
            local_d8 = dVar4;
            if (dVar17 <= dVar4) {
              dVar4 = dVar17;
              local_d8 = dVar17;
            }
          }
        }
LAB_143b489d3:
        FVar23 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                  )((longlong)FVar23 + 8);
      } while( true );
    }
  }
  if (param_1 < *(int *)&(this->MCCDAxisThreshold).field_0x10) {
    uVar21 = uVar28;
  }
  if ((uVar21 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  lVar9 = *(longlong *)&(this->MCCDAxisThreshold).field_0x8;
  *(undefined8 *)(lVar9 + lVar27 * 0x18) = 0;
  *(undefined8 *)(lVar9 + 8 + lVar27 * 0x18) = 0;
  *(undefined8 *)(lVar9 + 0x10 + lVar27 * 0x18) = 0;
  return;
}

// UpdateShapesArray @ 143b493b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::UpdateShapesArray
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  float *pfVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  TVector<float,3> *pTVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  undefined1 local_b8 [16];
  double local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_108;
  lVar13 = (longlong)param_1;
  iVar2 = (int)this->_padding_;
  uVar12 = (uint)~param_1 >> 0x1f;
  uVar10 = 0;
  if (param_1 < iVar2) {
    uVar10 = uVar12;
  }
  if (uVar10 == 0) {
    local_e8 = lVar13;
    local_e0 = (longlong)iVar2;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pfVar1 = (float *)(this->_padding_ + lVar13 * 0x10);
  fVar5 = *pfVar1;
  fVar6 = pfVar1[1];
  fVar7 = pfVar1[2];
  fVar8 = pfVar1[3];
  pTVar11 = TParticles<float,3>::GetX((TParticles<float,3> *)this,param_1);
  iVar2 = (int)this->_padding_;
  uVar10 = 0;
  if (param_1 < iVar2) {
    uVar10 = uVar12;
  }
  local_b8._8_4_ = SUB84((double)*(float *)&pTVar11->field_0x4,0);
  local_b8._0_8_ = (double)*(float *)pTVar11;
  local_b8._12_4_ = (int)((ulonglong)(double)*(float *)&pTVar11->field_0x4 >> 0x20);
  local_a8 = (double)*(float *)&pTVar11->field_0x8;
  uStack_a0 = 0;
  local_88 = ___xmm_00000000000000003ff0000000000000;
  uStack_80 = _UNK_150689518;
  local_98 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_90 = _UNK_150689688;
  local_d8 = (double)fVar5;
  dStack_d0 = (double)fVar6;
  local_c8 = (double)fVar7;
  dStack_c0 = (double)fVar8;
  if (uVar10 == 0) {
    local_e8 = lVar13;
    local_e0 = (longlong)iVar2;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar2 = *(int *)&(this->MShapesArray).field_0x10;
  lVar3 = this->_padding_;
  uVar10 = 0;
  if (param_1 < iVar2) {
    uVar10 = uVar12;
  }
  if (uVar10 == 0) {
    local_e8 = lVar13;
    local_e0 = (longlong)iVar2;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  UpdateShapesArrayFromGeometry
            ((TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
              *)(*(longlong *)&(this->MShapesArray).field_0x8 + lVar13 * 0x18),
             (TRefCountPtr<Chaos::FImplicitObject> *)(lVar3 + lVar13 * 8),
             (TRigidTransform<double,3> *)&local_d8);
  return;
}

// UpdateShapesArray @ 143b495e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::UpdateShapesArray
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  float fVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  TVector<double,3> *pTVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_f8;
  lVar12 = (longlong)param_1;
  iVar3 = (int)this->_padding_;
  uVar11 = (uint)~param_1 >> 0x1f;
  uVar9 = 0;
  if (param_1 < iVar3) {
    uVar9 = uVar11;
  }
  if (uVar9 == 0) {
    local_d8 = lVar12;
    local_d0 = (longlong)iVar3;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = this->_padding_;
  fVar1 = *(float *)(lVar4 + lVar12 * 0x10);
  uVar2 = *(undefined8 *)(lVar4 + 8 + lVar12 * 0x10);
  dVar6 = (double)(float)((ulonglong)uVar2 >> 0x20);
  dVar7 = (double)*(float *)(lVar4 + 4 + lVar12 * 0x10);
  pTVar10 = TParticles<double,3>::GetX((TParticles<double,3> *)this,param_1);
  iVar3 = (int)this->_padding_;
  local_b8._8_4_ = SUB84(dVar6,0);
  local_b8._0_8_ = (double)(float)uVar2;
  local_b8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  local_c8._8_4_ = SUB84(dVar7,0);
  local_c8._0_8_ = (double)fVar1;
  local_c8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  local_a8 = *(undefined8 *)pTVar10;
  uStack_a0 = *(undefined8 *)&pTVar10->field_0x8;
  local_98 = *(undefined8 *)&pTVar10->field_0x10;
  uVar9 = 0;
  if (param_1 < iVar3) {
    uVar9 = uVar11;
  }
  local_78 = ___xmm_00000000000000003ff0000000000000;
  uStack_70 = _UNK_150689518;
  uStack_90 = 0;
  local_88 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_80 = _UNK_150689688;
  if (uVar9 == 0) {
    local_d8 = lVar12;
    local_d0 = (longlong)iVar3;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = this->_padding_;
  iVar3 = *(int *)&(this->MShapesArray).field_0x10;
  uVar9 = 0;
  if (param_1 < iVar3) {
    uVar9 = uVar11;
  }
  if (uVar9 == 0) {
    local_d8 = lVar12;
    local_d0 = (longlong)iVar3;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  UpdateShapesArrayFromGeometry
            ((TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
              *)(*(longlong *)&(this->MShapesArray).field_0x8 + lVar12 * 0x18),
             (TRefCountPtr<Chaos::FImplicitObject> *)(lVar4 + lVar12 * 8),
             (TRigidTransform<double,3> *)local_c8);
  return;
}

// UpdateShapesArray @ 143b497c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::UpdateShapesArray
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  float fVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  TVector<double,3> *pTVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_f8;
  lVar12 = (longlong)param_1;
  iVar3 = (int)this->_padding_;
  uVar11 = (uint)~param_1 >> 0x1f;
  uVar9 = 0;
  if (param_1 < iVar3) {
    uVar9 = uVar11;
  }
  if (uVar9 == 0) {
    local_d8 = lVar12;
    local_d0 = (longlong)iVar3;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = this->_padding_;
  fVar1 = *(float *)(lVar4 + lVar12 * 0x10);
  uVar2 = *(undefined8 *)(lVar4 + 8 + lVar12 * 0x10);
  dVar6 = (double)(float)((ulonglong)uVar2 >> 0x20);
  dVar7 = (double)*(float *)(lVar4 + 4 + lVar12 * 0x10);
  pTVar10 = TParticles<double,3>::GetX((TParticles<double,3> *)this,param_1);
  iVar3 = (int)this->_padding_;
  local_b8._8_4_ = SUB84(dVar6,0);
  local_b8._0_8_ = (double)(float)uVar2;
  local_b8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  local_c8._8_4_ = SUB84(dVar7,0);
  local_c8._0_8_ = (double)fVar1;
  local_c8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  local_a8 = *(undefined8 *)pTVar10;
  uStack_a0 = *(undefined8 *)&pTVar10->field_0x8;
  local_98 = *(undefined8 *)&pTVar10->field_0x10;
  uVar9 = 0;
  if (param_1 < iVar3) {
    uVar9 = uVar11;
  }
  local_78 = ___xmm_00000000000000003ff0000000000000;
  uStack_70 = _UNK_150689518;
  uStack_90 = 0;
  local_88 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_80 = _UNK_150689688;
  if (uVar9 == 0) {
    local_d8 = lVar12;
    local_d0 = (longlong)iVar3;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = this->_padding_;
  iVar3 = *(int *)&(this->MShapesArray).field_0x10;
  uVar9 = 0;
  if (param_1 < iVar3) {
    uVar9 = uVar11;
  }
  if (uVar9 == 0) {
    local_d8 = lVar12;
    local_d0 = (longlong)iVar3;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  UpdateShapesArrayFromGeometry
            ((TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
              *)(*(longlong *)&(this->MShapesArray).field_0x8 + lVar12 * 0x18),
             (TRefCountPtr<Chaos::FImplicitObject> *)(lVar4 + lVar12 * 8),
             (TRigidTransform<double,3> *)local_c8);
  return;
}

// UpdateWorldSpaceState @ 143b4a130

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::UpdateWorldSpaceState
          (TGeometryParticlesImp<float,3,1> *this,int param_1,TRigidTransform<double,3> *param_2,
          TVector<double,3> *param_3)

{
  int *piVar1;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  FShapeInstanceProxy *this_00;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  undefined1 local_res10 [16];
  TVector<double,3> *local_res20;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  
  lVar12 = (longlong)param_1;
  local_res20 = param_3;
  FVar10 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)
           ShapesArray(this,param_1);
  iVar5 = *(int *)((longlong)FVar10 + 0x10);
  piVar1 = (int *)((longlong)FVar10 + 0x10);
  if (iVar5 < 1) {
    puVar11 = &local_d0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
  }
  else {
    puVar11 = &local_100;
    local_100 = ___xmm_7fefffffffffffff7fefffffffffffff;
    uStack_f8 = _UNK_150a9e648;
    local_e0 = ___xmm_ffefffffffffffffffefffffffffffff;
    uStack_d8 = _UNK_1508ffb58;
    local_f0 = ___xmm_ffefffffffffffff7fefffffffffffff;
    uStack_e8 = _UNK_150a9e6d8;
  }
  if (*(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> *)
       ((longlong)FVar10 + 8) !=
      (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)0x0)
  {
    FVar10 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
               *)((longlong)FVar10 + 8);
  }
  uVar16 = (undefined4)puVar11[5];
  uVar20 = (undefined4)((ulonglong)puVar11[5] >> 0x20);
  FVar2 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)
          ((longlong)FVar10 + (longlong)iVar5 * 8);
  uVar22 = (undefined4)puVar11[4];
  uVar25 = (undefined4)((ulonglong)puVar11[4] >> 0x20);
  uVar15 = (undefined4)puVar11[3];
  uVar19 = (undefined4)((ulonglong)puVar11[3] >> 0x20);
  uVar14 = (undefined4)puVar11[2];
  uVar18 = (undefined4)((ulonglong)puVar11[2] >> 0x20);
  uVar21 = (undefined4)puVar11[1];
  uVar24 = (undefined4)((ulonglong)puVar11[1] >> 0x20);
  uVar13 = (undefined4)*puVar11;
  uVar17 = (undefined4)((ulonglong)*puVar11 >> 0x20);
  while( true ) {
    if (*piVar1 != iVar5) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (FVar10 == FVar2) break;
    this_00 = *(FShapeInstanceProxy **)FVar10;
    if ((this_00->_padding_ & 3) == 0) {
      FShapeInstanceProxy::UpdateWorldSpaceState(this_00,param_2);
    }
    else {
      FShapeInstance::UpdateWorldSpaceState((FShapeInstance *)this_00,param_2);
    }
    lVar6 = *(longlong *)FVar10;
    FVar10 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
              )((longlong)FVar10 + 8);
    dVar3 = *(double *)(lVar6 + 0x18);
    dVar4 = *(double *)(lVar6 + 0x20);
    if ((double)CONCAT44(uVar17,uVar13) <= dVar3) {
      dVar3 = (double)CONCAT44(uVar17,uVar13);
    }
    if ((double)CONCAT44(uVar24,uVar21) <= dVar4) {
      dVar4 = (double)CONCAT44(uVar24,uVar21);
    }
    uVar13 = SUB84(dVar3,0);
    uVar17 = (undefined4)((ulonglong)dVar3 >> 0x20);
    dVar3 = *(double *)(lVar6 + 0x28);
    if ((double)CONCAT44(uVar18,uVar14) <= dVar3) {
      dVar3 = (double)CONCAT44(uVar18,uVar14);
    }
    uVar21 = SUB84(dVar4,0);
    uVar24 = (undefined4)((ulonglong)dVar4 >> 0x20);
    dVar4 = *(double *)(lVar6 + 0x38);
    if (dVar4 <= (double)CONCAT44(uVar25,uVar22)) {
      dVar4 = (double)CONCAT44(uVar25,uVar22);
    }
    uVar14 = SUB84(dVar3,0);
    uVar18 = (undefined4)((ulonglong)dVar3 >> 0x20);
    dVar3 = *(double *)(lVar6 + 0x30);
    if (dVar3 <= (double)CONCAT44(uVar19,uVar15)) {
      dVar3 = (double)CONCAT44(uVar19,uVar15);
    }
    uVar22 = SUB84(dVar4,0);
    uVar25 = (undefined4)((ulonglong)dVar4 >> 0x20);
    uVar15 = SUB84(dVar3,0);
    uVar19 = (undefined4)((ulonglong)dVar3 >> 0x20);
    dVar3 = *(double *)(lVar6 + 0x40);
    if (dVar3 <= (double)CONCAT44(uVar20,uVar16)) {
      dVar3 = (double)CONCAT44(uVar20,uVar16);
    }
    uVar16 = SUB84(dVar3,0);
    uVar20 = (undefined4)((ulonglong)dVar3 >> 0x20);
  }
  uVar9 = 0;
  if (param_1 < *(int *)&(this->MWorldSpaceInflatedBounds).field_0x10) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  fVar23 = (float)((uint)(float)*(double *)local_res20 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar26 = (float)((uint)(float)*(double *)&local_res20->field_0x8 &
                  __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar27 = (float)((uint)(float)*(double *)&local_res20->field_0x10 &
                  __xmm_7fffffff7fffffff7fffffff7fffffff);
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar6 = *(longlong *)&(this->MWorldSpaceInflatedBounds).field_0x8;
  *(float *)(lVar6 + lVar12 * 0x18) = (float)(double)CONCAT44(uVar17,uVar13) - fVar23;
  *(float *)(lVar6 + 4 + lVar12 * 0x18) = (float)(double)CONCAT44(uVar24,uVar21) - fVar26;
  *(float *)(lVar6 + 8 + lVar12 * 0x18) = (float)(double)CONCAT44(uVar18,uVar14) - fVar27;
  *(ulonglong *)(lVar6 + 0xc + lVar12 * 0x18) =
       CONCAT44((float)(double)CONCAT44(uVar25,uVar22) + fVar26,
                (float)(double)CONCAT44(uVar19,uVar15) + fVar23);
  *(float *)(lVar6 + 0x14 + lVar12 * 0x18) = (float)(double)CONCAT44(uVar20,uVar16) + fVar27;
  return;
}

// UpdateWorldSpaceState @ 143b4a440

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::UpdateWorldSpaceState
          (TGeometryParticlesImp<double,3,1> *this,int param_1,TRigidTransform<double,3> *param_2,
          TVector<double,3> *param_3)

{
  int *piVar1;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar2;
  double *pdVar3;
  int iVar4;
  FShapeInstanceProxy *this_00;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar23;
  undefined4 uVar24;
  double dVar22;
  double dVar25;
  double dVar26;
  undefined1 local_res10 [16];
  TVector<double,3> *local_res20;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  
  lVar11 = (longlong)param_1;
  local_res20 = param_3;
  FVar9 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)
          ShapesArray(this,param_1);
  iVar4 = *(int *)((longlong)FVar9 + 0x10);
  piVar1 = (int *)((longlong)FVar9 + 0x10);
  if (iVar4 < 1) {
    puVar10 = &local_c8;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
  }
  else {
    puVar10 = &local_f8;
    local_f8 = ___xmm_7fefffffffffffff7fefffffffffffff;
    uStack_f0 = _UNK_150a9e648;
    local_d8 = ___xmm_ffefffffffffffffffefffffffffffff;
    uStack_d0 = _UNK_1508ffb58;
    local_e8 = ___xmm_ffefffffffffffff7fefffffffffffff;
    uStack_e0 = _UNK_150a9e6d8;
  }
  if (*(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> *)
       ((longlong)FVar9 + 8) !=
      (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)0x0)
  {
    FVar9 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
              *)((longlong)FVar9 + 8);
  }
  uVar15 = (undefined4)puVar10[5];
  uVar19 = (undefined4)((ulonglong)puVar10[5] >> 0x20);
  FVar2 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)
          ((longlong)FVar9 + (longlong)iVar4 * 8);
  uVar21 = (undefined4)puVar10[4];
  uVar24 = (undefined4)((ulonglong)puVar10[4] >> 0x20);
  uVar14 = (undefined4)puVar10[3];
  uVar18 = (undefined4)((ulonglong)puVar10[3] >> 0x20);
  uVar13 = (undefined4)puVar10[2];
  uVar17 = (undefined4)((ulonglong)puVar10[2] >> 0x20);
  uVar20 = (undefined4)puVar10[1];
  uVar23 = (undefined4)((ulonglong)puVar10[1] >> 0x20);
  uVar12 = (undefined4)*puVar10;
  uVar16 = (undefined4)((ulonglong)*puVar10 >> 0x20);
  while( true ) {
    if (*piVar1 != iVar4) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (FVar9 == FVar2) break;
    this_00 = *(FShapeInstanceProxy **)FVar9;
    if ((this_00->_padding_ & 3) == 0) {
      FShapeInstanceProxy::UpdateWorldSpaceState(this_00,param_2);
    }
    else {
      FShapeInstance::UpdateWorldSpaceState((FShapeInstance *)this_00,param_2);
    }
    lVar5 = *(longlong *)FVar9;
    FVar9 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
            )((longlong)FVar9 + 8);
    dVar22 = *(double *)(lVar5 + 0x18);
    dVar25 = *(double *)(lVar5 + 0x20);
    if ((double)CONCAT44(uVar16,uVar12) <= dVar22) {
      dVar22 = (double)CONCAT44(uVar16,uVar12);
    }
    if ((double)CONCAT44(uVar23,uVar20) <= dVar25) {
      dVar25 = (double)CONCAT44(uVar23,uVar20);
    }
    uVar12 = SUB84(dVar22,0);
    uVar16 = (undefined4)((ulonglong)dVar22 >> 0x20);
    dVar22 = *(double *)(lVar5 + 0x28);
    uVar20 = SUB84(dVar25,0);
    uVar23 = (undefined4)((ulonglong)dVar25 >> 0x20);
    dVar25 = *(double *)(lVar5 + 0x38);
    if ((double)CONCAT44(uVar17,uVar13) <= dVar22) {
      dVar22 = (double)CONCAT44(uVar17,uVar13);
    }
    if (dVar25 <= (double)CONCAT44(uVar24,uVar21)) {
      dVar25 = (double)CONCAT44(uVar24,uVar21);
    }
    uVar13 = SUB84(dVar22,0);
    uVar17 = (undefined4)((ulonglong)dVar22 >> 0x20);
    dVar22 = *(double *)(lVar5 + 0x30);
    if (dVar22 <= (double)CONCAT44(uVar18,uVar14)) {
      dVar22 = (double)CONCAT44(uVar18,uVar14);
    }
    uVar21 = SUB84(dVar25,0);
    uVar24 = (undefined4)((ulonglong)dVar25 >> 0x20);
    uVar14 = SUB84(dVar22,0);
    uVar18 = (undefined4)((ulonglong)dVar22 >> 0x20);
    dVar22 = *(double *)(lVar5 + 0x40);
    if (dVar22 <= (double)CONCAT44(uVar19,uVar15)) {
      dVar22 = (double)CONCAT44(uVar19,uVar15);
    }
    uVar15 = SUB84(dVar22,0);
    uVar19 = (undefined4)((ulonglong)dVar22 >> 0x20);
  }
  uVar8 = 0;
  if (param_1 < *(int *)&(this->MWorldSpaceInflatedBounds).field_0x10) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  dVar22 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)local_res20 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            (uint)*(undefined8 *)local_res20 &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar26 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&local_res20->field_0x10 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            (uint)*(undefined8 *)&local_res20->field_0x10 &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar25 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&local_res20->field_0x8 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            (uint)*(undefined8 *)&local_res20->field_0x8 &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar5 = *(longlong *)&(this->MWorldSpaceInflatedBounds).field_0x8;
  *(double *)(lVar5 + lVar11 * 0x30) = (double)CONCAT44(uVar16,uVar12) - dVar22;
  *(double *)(lVar5 + 8 + lVar11 * 0x30) = (double)CONCAT44(uVar23,uVar20) - dVar25;
  *(double *)(lVar5 + 0x10 + lVar11 * 0x30) = (double)CONCAT44(uVar17,uVar13) - dVar26;
  pdVar3 = (double *)(lVar5 + 0x18 + lVar11 * 0x30);
  *pdVar3 = (double)CONCAT44(uVar18,uVar14) + dVar22;
  pdVar3[1] = (double)CONCAT44(uVar24,uVar21) + dVar25;
  *(double *)(lVar5 + 0x28 + lVar11 * 0x30) = (double)CONCAT44(uVar19,uVar15) + dVar26;
  return;
}

// UpdateWorldSpaceStateSwept @ 143b4a880

void __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::UpdateWorldSpaceStateSwept
          (TGeometryParticlesImp<float,3,1> *this,int param_1,TRigidTransform<double,3> *param_2,
          TVector<double,3> *param_3,TVector<double,3> *param_4)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar5 = (longlong)param_1;
  UpdateWorldSpaceState(this,param_1,param_2,param_3);
  uVar4 = 0;
  if (param_1 < *(int *)&(this->MWorldSpaceInflatedBounds).field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar1 = *(longlong *)&(this->MWorldSpaceInflatedBounds).field_0x8;
  fVar6 = (float)*(double *)param_4;
  fVar8 = (float)*(double *)&param_4->field_0x8;
  fVar7 = fVar6;
  if (fVar6 <= 0.0) {
    fVar7 = 0.0;
  }
  if (0.0 <= fVar6) {
    fVar6 = 0.0;
  }
  fVar9 = (float)*(double *)&param_4->field_0x10;
  fVar10 = fVar9;
  if (fVar9 <= 0.0) {
    fVar10 = 0.0;
  }
  if (0.0 <= fVar9) {
    fVar9 = 0.0;
  }
  *(float *)(lVar1 + lVar5 * 0x18) = fVar6 + *(float *)(lVar1 + lVar5 * 0x18);
  fVar6 = fVar8;
  if (0.0 <= fVar8) {
    fVar6 = 0.0;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  *(float *)(lVar1 + 8 + lVar5 * 0x18) = fVar9 + *(float *)(lVar1 + 8 + lVar5 * 0x18);
  *(float *)(lVar1 + 4 + lVar5 * 0x18) = fVar6 + *(float *)(lVar1 + 4 + lVar5 * 0x18);
  *(float *)(lVar1 + 0xc + lVar5 * 0x18) = fVar7 + *(float *)(lVar1 + 0xc + lVar5 * 0x18);
  *(float *)(lVar1 + 0x10 + lVar5 * 0x18) = fVar8 + *(float *)(lVar1 + 0x10 + lVar5 * 0x18);
  *(float *)(lVar1 + 0x14 + lVar5 * 0x18) = fVar10 + *(float *)(lVar1 + 0x14 + lVar5 * 0x18);
  return;
}

// UpdateWorldSpaceStateSwept @ 143b4a990

void __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::UpdateWorldSpaceStateSwept
          (TGeometryParticlesImp<double,3,1> *this,int param_1,TRigidTransform<double,3> *param_2,
          TVector<double,3> *param_3,TVector<double,3> *param_4)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  lVar5 = (longlong)param_1;
  UpdateWorldSpaceState(this,param_1,param_2,param_3);
  uVar4 = 0;
  if (param_1 < *(int *)&(this->MWorldSpaceInflatedBounds).field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar1 = *(longlong *)&(this->MWorldSpaceInflatedBounds).field_0x8;
  dVar8 = *(double *)&param_4->field_0x8;
  dVar7 = *(double *)&param_4->field_0x10;
  if (0.0 <= dVar8) {
    dVar8 = 0.0;
  }
  dVar6 = *(double *)param_4;
  if (0.0 <= dVar7) {
    dVar7 = 0.0;
  }
  if (0.0 <= dVar6) {
    dVar6 = 0.0;
  }
  *(double *)(lVar1 + 8 + lVar5 * 0x30) = dVar8 + *(double *)(lVar1 + 8 + lVar5 * 0x30);
  *(double *)(lVar1 + 0x10 + lVar5 * 0x30) = dVar7 + *(double *)(lVar1 + 0x10 + lVar5 * 0x30);
  *(double *)(lVar1 + lVar5 * 0x30) = dVar6 + *(double *)(lVar1 + lVar5 * 0x30);
  dVar8 = *(double *)&param_4->field_0x8;
  dVar7 = *(double *)&param_4->field_0x10;
  if (dVar8 <= 0.0) {
    dVar8 = 0.0;
  }
  dVar6 = *(double *)param_4;
  if (dVar7 <= 0.0) {
    dVar7 = 0.0;
  }
  if (dVar6 <= 0.0) {
    dVar6 = 0.0;
  }
  *(double *)(lVar1 + 0x20 + lVar5 * 0x30) = dVar8 + *(double *)(lVar1 + 0x20 + lVar5 * 0x30);
  *(double *)(lVar1 + 0x28 + lVar5 * 0x30) = dVar7 + *(double *)(lVar1 + 0x28 + lVar5 * 0x30);
  *(double *)(lVar1 + 0x18 + lVar5 * 0x30) = dVar6 + *(double *)(lVar1 + 0x18 + lVar5 * 0x30);
  return;
}

// UpdateWorldSpaceStateSwept @ 143b4aaa0

void __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::UpdateWorldSpaceStateSwept
          (TGeometryParticlesImp<double,3,0> *this,int param_1,TRigidTransform<double,3> *param_2,
          TVector<double,3> *param_3,TVector<double,3> *param_4)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  lVar5 = (longlong)param_1;
  UpdateWorldSpaceState(this,param_1,param_2,param_3);
  uVar4 = 0;
  if (param_1 < *(int *)&(this->MWorldSpaceInflatedBounds).field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar1 = *(longlong *)&(this->MWorldSpaceInflatedBounds).field_0x8;
  dVar8 = *(double *)&param_4->field_0x8;
  dVar7 = *(double *)&param_4->field_0x10;
  if (0.0 <= dVar8) {
    dVar8 = 0.0;
  }
  dVar6 = *(double *)param_4;
  if (0.0 <= dVar7) {
    dVar7 = 0.0;
  }
  if (0.0 <= dVar6) {
    dVar6 = 0.0;
  }
  *(double *)(lVar1 + 8 + lVar5 * 0x30) = dVar8 + *(double *)(lVar1 + 8 + lVar5 * 0x30);
  *(double *)(lVar1 + 0x10 + lVar5 * 0x30) = dVar7 + *(double *)(lVar1 + 0x10 + lVar5 * 0x30);
  *(double *)(lVar1 + lVar5 * 0x30) = dVar6 + *(double *)(lVar1 + lVar5 * 0x30);
  dVar8 = *(double *)&param_4->field_0x8;
  dVar7 = *(double *)&param_4->field_0x10;
  if (dVar8 <= 0.0) {
    dVar8 = 0.0;
  }
  dVar6 = *(double *)param_4;
  if (dVar7 <= 0.0) {
    dVar7 = 0.0;
  }
  if (dVar6 <= 0.0) {
    dVar6 = 0.0;
  }
  *(double *)(lVar1 + 0x20 + lVar5 * 0x30) = dVar8 + *(double *)(lVar1 + 0x20 + lVar5 * 0x30);
  *(double *)(lVar1 + 0x28 + lVar5 * 0x30) = dVar7 + *(double *)(lVar1 + 0x28 + lVar5 * 0x30);
  *(double *)(lVar1 + 0x18 + lVar5 * 0x30) = dVar6 + *(double *)(lVar1 + 0x18 + lVar5 * 0x30);
  return;
}

// WeakParticleHandle @ 143b4fcd0

FWeakParticleHandle * __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::WeakParticleHandle
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FWeakParticleHandle *pFVar4;
  FWeakParticleHandle *pFVar5;
  FWeakParticleHandle local_18;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MWeakParticleHandle).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FWeakParticleHandle *)(*pcVar1)();
      return pFVar4;
    }
  }
  pFVar4 = (FWeakParticleHandle *)
           ((longlong)param_1 * 0x10 + *(longlong *)&(this->MWeakParticleHandle).field_0x8);
  if ((pFVar4->SharedData).Object == (FData *)0x0) {
    uVar3 = 0;
    if (param_1 < *(int *)&(this->MGeometryParticleHandle).field_0x10) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FWeakParticleHandle *)(*pcVar1)();
        return pFVar4;
      }
    }
    pFVar5 = FWeakParticleHandle::FWeakParticleHandle
                       (&local_18,
                        *(TGeometryParticleHandleImp<double,3,1> **)
                         (*(longlong *)&(this->MGeometryParticleHandle).field_0x8 +
                         (longlong)param_1 * 8));
    if (pFVar4 != pFVar5) {
      (pFVar4->SharedData).Object = (pFVar5->SharedData).Object;
      (pFVar5->SharedData).Object = (FData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pFVar4->SharedData).SharedReferenceCount,
                 &(pFVar5->SharedData).SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedData.SharedReferenceCount.ReferenceController);
  }
  return pFVar4;
}

// WeakParticleHandle @ 143b4fe00

FWeakParticleHandle * __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::WeakParticleHandle
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FWeakParticleHandle *pFVar4;
  FWeakParticleHandle *pFVar5;
  FWeakParticleHandle local_18;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MWeakParticleHandle).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FWeakParticleHandle *)(*pcVar1)();
      return pFVar4;
    }
  }
  pFVar4 = (FWeakParticleHandle *)
           ((longlong)param_1 * 0x10 + *(longlong *)&(this->MWeakParticleHandle).field_0x8);
  if ((pFVar4->SharedData).Object == (FData *)0x0) {
    uVar3 = 0;
    if (param_1 < *(int *)&(this->MGeometryParticleHandle).field_0x10) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FWeakParticleHandle *)(*pcVar1)();
        return pFVar4;
      }
    }
    pFVar5 = FWeakParticleHandle::FWeakParticleHandle
                       (&local_18,
                        *(TGeometryParticleHandleImp<double,3,1> **)
                         (*(longlong *)&(this->MGeometryParticleHandle).field_0x8 +
                         (longlong)param_1 * 8));
    if (pFVar4 != pFVar5) {
      (pFVar4->SharedData).Object = (pFVar5->SharedData).Object;
      (pFVar5->SharedData).Object = (FData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pFVar4->SharedData).SharedReferenceCount,
                 &(pFVar5->SharedData).SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedData.SharedReferenceCount.ReferenceController);
  }
  return pFVar4;
}

// WeakParticleHandle @ 143b4ff30

FWeakParticleHandle * __thiscall
Chaos::TGeometryParticlesImp<double,3,0>::WeakParticleHandle
          (TGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FWeakParticleHandle *pFVar4;
  FWeakParticleHandle *pFVar5;
  FWeakParticleHandle local_18;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MWeakParticleHandle).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FWeakParticleHandle *)(*pcVar1)();
      return pFVar4;
    }
  }
  pFVar4 = (FWeakParticleHandle *)
           ((longlong)param_1 * 0x10 + *(longlong *)&(this->MWeakParticleHandle).field_0x8);
  if ((pFVar4->SharedData).Object == (FData *)0x0) {
    uVar3 = 0;
    if (param_1 < *(int *)&(this->MGeometryParticleHandle).field_0x10) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FWeakParticleHandle *)(*pcVar1)();
        return pFVar4;
      }
    }
    pFVar5 = FWeakParticleHandle::FWeakParticleHandle
                       (&local_18,
                        *(TGeometryParticleHandleImp<double,3,1> **)
                         (*(longlong *)&(this->MGeometryParticleHandle).field_0x8 +
                         (longlong)param_1 * 8));
    if (pFVar4 != pFVar5) {
      (pFVar4->SharedData).Object = (pFVar5->SharedData).Object;
      (pFVar5->SharedData).Object = (FData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pFVar4->SharedData).SharedReferenceCount,
                 &(pFVar5->SharedData).SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedData.SharedReferenceCount.ReferenceController);
  }
  return pFVar4;
}

// WorldSpaceInflatedBounds @ 143b50060

TAABB<float,3> * __thiscall
Chaos::TGeometryParticlesImp<float,3,1>::WorldSpaceInflatedBounds
          (TGeometryParticlesImp<float,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TAABB<float,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MWorldSpaceInflatedBounds).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TAABB<float,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TAABB<float,3> *)
         (*(longlong *)&(this->MWorldSpaceInflatedBounds).field_0x8 + (longlong)param_1 * 0x18);
}

// WorldSpaceInflatedBounds @ 143b500e0

TAABB<double,3> * __thiscall
Chaos::TGeometryParticlesImp<double,3,1>::WorldSpaceInflatedBounds
          (TGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TAABB<double,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MWorldSpaceInflatedBounds).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TAABB<double,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TAABB<double,3> *)
         ((longlong)param_1 * 0x30 + *(longlong *)&(this->MWorldSpaceInflatedBounds).field_0x8);
}

