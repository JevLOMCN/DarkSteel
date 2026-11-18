// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// ActivateConstraint @ 1439c4dd0

bool __thiscall
Chaos::Private::FCollisionContextAllocator::ActivateConstraint
          (FCollisionContextAllocator *this,FPBDCollisionConstraint *param_1)

{
  TArray<Chaos::FPBDCollisionConstraint_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  undefined1 *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  FPBDCollisionConstraint *local_res10 [3];
  
  iVar8 = this->CurrentEpoch;
  if ((param_1->ContainerCookie).LastUsedEpoch == iVar8) {
    return false;
  }
  (param_1->ContainerCookie).ConstraintIndex = -1;
  (param_1->ContainerCookie).LastUsedEpoch = iVar8;
  pTVar1 = &this->NewActiveConstraints;
  (param_1->ContainerCookie).CCDConstraintIndex = -1;
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  local_res10[0] = param_1;
  if ((pFVar4 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar4 + (longlong)(this->NewActiveConstraints).ArrayMax * 8)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  iVar8 = (this->NewActiveConstraints).ArrayNum;
  piVar2 = &(this->NewActiveConstraints).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->NewActiveConstraints).ArrayNum = iVar8 + 1;
  *(FPBDCollisionConstraint **)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 8) =
       local_res10[0];
  FPBDCollisionConstraint::Activate(local_res10[0]);
  return true;
}

// CreateConstraint @ 1439c8ec0

TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>
* __thiscall
Chaos::Private::FCollisionContextAllocator::CreateConstraint
          (FCollisionContextAllocator *this,
          TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>
          *__return_storage_ptr__,TGeometryParticleHandleImp<double,3,1> *param_1,
          FImplicitObject *param_2,FPerShapeData *param_3,FBVHParticles *param_4,
          TRigidTransform<double,3> *param_5,TGeometryParticleHandleImp<double,3,1> *param_6,
          FImplicitObject *param_7,FPerShapeData *param_8,FBVHParticles *param_9,
          TRigidTransform<double,3> *param_10,double param_11,bool param_12,
          EContactShapesType param_13)

{
  FPBDCollisionConstraint *pFVar1;
  
  pFVar1 = TObjectPool<Chaos::FPBDCollisionConstraint>::Alloc<>(&this->ConstraintPool);
  __return_storage_ptr__->_padding_ = (longlong)&this->ConstraintPool;
  __return_storage_ptr__->Ptr = pFVar1;
  if (pFVar1 != (FPBDCollisionConstraint *)0x0) {
    pFVar1->_padding_ = (longlong)this->CollisionContainer;
    FPBDCollisionConstraint::Make
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,__return_storage_ptr__->Ptr);
  }
  return __return_storage_ptr__;
}

// CreateMidPhase @ 143d4a530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FParticlePairMidPhase * __thiscall
Chaos::Private::FCollisionContextAllocator::CreateMidPhase
          (FCollisionContextAllocator *this,TGeometryParticleHandleImp<double,3,1> *param_1,
          TGeometryParticleHandleImp<double,3,1> *param_2,FCollisionContext *param_3)

{
  int *piVar1;
  FParticleID FVar2;
  FParticleID FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar9;
  FParticleID *pFVar10;
  FParticlePairMidPhase *pFVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined1 auStackY_b8 [32];
  FParticlePairMidPhase *local_68;
  FIDKey local_60;
  ulonglong local_58;
  uint uVar8;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_60.Key64 = 0;
  if ((param_1 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
     (param_2 != (TGeometryParticleHandleImp<double,3,1> *)0x0)) {
    pFVar10 = TGeometryParticlesImp<double,3,0>::ParticleID
                        ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                         (int)param_1->_padding_);
    FVar2 = *pFVar10;
    pFVar10 = TGeometryParticlesImp<double,3,0>::ParticleID
                        ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                         (int)param_2->_padding_);
    FVar3 = *pFVar10;
    pFVar10 = TGeometryParticlesImp<double,3,0>::ParticleID
                        ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                         (int)param_1->_padding_);
    iVar9 = FVar2.LocalID;
    if (iVar9 == -1) {
      uVar14 = pFVar10->GlobalID;
    }
    else {
      uVar14 = (*pFVar10).LocalID;
    }
    pFVar10 = TGeometryParticlesImp<double,3,0>::ParticleID
                        ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                         (int)param_2->_padding_);
    iVar13 = FVar3.LocalID;
    if (iVar13 == -1) {
      uVar12 = pFVar10->GlobalID;
    }
    else {
      uVar12 = (*pFVar10).LocalID;
    }
    if (uVar14 < uVar12) {
      uVar7 = 0;
      uVar8 = uVar7;
      if (iVar9 != -1) {
        uVar8 = 0x80000000;
      }
      local_60.Key32s[0] = (FParticleIDKey)(uVar8 | uVar14 & 0x7fffffff);
      if (iVar13 != -1) {
        uVar7 = 0x80000000;
      }
      local_60.Key32s[1] = (FParticleIDKey)(uVar7 | uVar12 & 0x7fffffff);
    }
    else {
      uVar7 = 0;
      uVar8 = uVar7;
      if (iVar13 != -1) {
        uVar8 = 0x80000000;
      }
      local_60.Key32s[0] = (FParticleIDKey)(uVar8 | uVar12 & 0x7fffffff);
      if (iVar9 != -1) {
        uVar7 = 0x80000000;
      }
      local_60.Key32s[1] = (FParticleIDKey)(uVar7 | uVar14 & 0x7fffffff);
    }
  }
  local_68 = FParticlePairMidPhase::Make(param_1,param_2);
  pFVar4 = (this->NewMidPhases).AllocatorInstance.Data;
  if ((pFVar4 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 < pFVar4 + (longlong)(this->NewMidPhases).ArrayMax * 8))
  {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar11 = (FParticlePairMidPhase *)(*pcVar5)();
      return pFVar11;
    }
  }
  iVar9 = (this->NewMidPhases).ArrayNum;
  piVar1 = &(this->NewMidPhases).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->NewMidPhases).AllocatorInstance,piVar1);
  }
  (this->NewMidPhases).ArrayNum = iVar9 + 1;
  *(FParticlePairMidPhase **)((this->NewMidPhases).AllocatorInstance.Data + (longlong)iVar9 * 8) =
       local_68;
  FParticlePairMidPhase::Init
            (local_68,param_1,param_2,(FCollisionParticlePairKey *)local_60.Key32s,param_3);
  return local_68;
}

// FindMidPhaseImpl @ 143d523e0

FParticlePairMidPhase * __thiscall
Chaos::Private::FCollisionContextAllocator::FindMidPhaseImpl
          (FCollisionContextAllocator *this,TGeometryParticleHandleImp<double,3,1> *param_1,
          TGeometryParticleHandleImp<double,3,1> *param_2,
          TGeometryParticleHandleImp<double,3,1> *param_3)

{
  FParticleID FVar1;
  FParticleID FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  FParticlePairMidPhase *pFVar8;
  FParticleID *pFVar9;
  FParticleCollisions *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  undefined8 local_res10;
  
  if (((param_3 != param_1) && (param_3 != param_2)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(SearchParticle == Particle0) || (SearchParticle == Particle1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\CollisionConstraintAllocator.h"
                         ,0xa2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FParticlePairMidPhase *)(*pcVar3)();
    return pFVar8;
  }
  uVar12 = 0;
  uVar11 = 0;
  local_res10 = uVar12;
  if ((param_1 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
     (local_res10 = 0, param_2 != (TGeometryParticleHandleImp<double,3,1> *)0x0)) {
    pFVar9 = TGeometryParticlesImp<double,3,0>::ParticleID
                       ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                        (int)param_1->_padding_);
    FVar1 = *pFVar9;
    pFVar9 = TGeometryParticlesImp<double,3,0>::ParticleID
                       ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                        (int)param_2->_padding_);
    FVar2 = *pFVar9;
    pFVar9 = TGeometryParticlesImp<double,3,0>::ParticleID
                       ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                        (int)param_1->_padding_);
    iVar14 = FVar1.LocalID;
    if (iVar14 == -1) {
      uVar7 = pFVar9->GlobalID;
    }
    else {
      uVar7 = (*pFVar9).LocalID;
    }
    pFVar9 = TGeometryParticlesImp<double,3,0>::ParticleID
                       ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                        (int)param_2->_padding_);
    iVar16 = FVar2.LocalID;
    if (iVar16 == -1) {
      uVar13 = pFVar9->GlobalID;
    }
    else {
      uVar13 = (*pFVar9).LocalID;
    }
    if (uVar7 < uVar13) {
      uVar5 = uVar11;
      if (iVar14 != -1) {
        uVar5 = 0x80000000;
      }
      uVar5 = uVar5 | uVar7 & 0x7fffffff;
      uVar6 = uVar11;
      if (iVar16 != -1) {
        uVar6 = 0x80000000;
      }
      uVar6 = uVar6 | uVar13 & 0x7fffffff;
    }
    else {
      uVar5 = uVar11;
      if (iVar16 != -1) {
        uVar5 = 0x80000000;
      }
      uVar5 = uVar5 | uVar13 & 0x7fffffff;
      uVar6 = uVar11;
      if (iVar14 != -1) {
        uVar6 = 0x80000000;
      }
      uVar6 = uVar6 | uVar7 & 0x7fffffff;
    }
    local_res10 = CONCAT44(uVar6,uVar5);
  }
  pFVar10 = TGeometryParticlesImp<double,3,0>::ParticleCollisions
                      ((TGeometryParticlesImp<double,3,0> *)param_3->_padding_,
                       (int)param_3->_padding_);
  iVar14 = (pFVar10->MidPhases).ArrayNum;
  uVar15 = uVar12;
  if (0 < iVar14) {
    do {
      uVar13 = (uint)uVar12;
      uVar7 = uVar11;
      if ((int)uVar13 < iVar14) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FParticlePairMidPhase *)(*pcVar3)();
        return pFVar8;
      }
      iVar14 = (pFVar10->MidPhases).ArrayNum;
      if (*(ulonglong *)((pFVar10->MidPhases).AllocatorInstance.Data + uVar15) == local_res10) {
        if ((int)uVar13 < iVar14) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FParticlePairMidPhase *)(*pcVar3)();
          return pFVar8;
        }
        return *(FParticlePairMidPhase **)
                ((pFVar10->MidPhases).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x10 + 8);
      }
      uVar12 = (ulonglong)(uVar13 + 1);
      uVar15 = uVar15 + 0x10;
    } while ((int)(uVar13 + 1) < iVar14);
  }
  return (FParticlePairMidPhase *)0x0;
}

