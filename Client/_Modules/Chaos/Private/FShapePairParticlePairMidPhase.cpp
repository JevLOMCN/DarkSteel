// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 7

// FShapePairParticlePairMidPhase @ 1439c0a70

FShapePairParticlePairMidPhase * __thiscall
Chaos::FShapePairParticlePairMidPhase::FShapePairParticlePairMidPhase
          (FShapePairParticlePairMidPhase *this)

{
  *(undefined1 *)&this->_padding_ = 1;
  *(undefined2 *)((longlong)&this->_padding_ + 2) = 0;
  this->_padding_ = (longlong)&___7FShapePairParticlePairMidPhase_Chaos__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  (this->ShapePairDetectors).AllocatorInstance.SecondaryData =
       (ForElementType<Chaos::FSingleShapePairCollisionDetector>)0x0;
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = -1;
  (this->ShapePairDetectors).ArrayNum = 0;
  (this->ShapePairDetectors).ArrayMax = 1;
  return this;
}

// BuildDetectorsImpl @ 1439c6b20

void __thiscall
Chaos::FShapePairParticlePairMidPhase::BuildDetectorsImpl(FShapePairParticlePairMidPhase *this)

{
  undefined8 *puVar1;
  FPerShapeData *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar6;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar7;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  
  puVar1 = (undefined8 *)this->_padding_;
  if (((puVar1 != (undefined8 *)0x0) && ((undefined8 *)this->_padding_ != (undefined8 *)0x0)) &&
     (puVar1 != (undefined8 *)this->_padding_)) {
    FVar6 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
            )TGeometryParticlesImp<double,3,0>::ShapesArray
                       ((TGeometryParticlesImp<double,3,0> *)*puVar1,*(int *)(puVar1 + 1));
    FVar7 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
            )TGeometryParticlesImp<double,3,0>::ShapesArray
                       (*(TGeometryParticlesImp<double,3,0> **)this->_padding_,
                        *(int *)((undefined8 *)this->_padding_ + 1));
    iVar9 = *(int *)((longlong)FVar6 + 0x10);
    uVar12 = 0;
    if (0 < iVar9) {
      lVar13 = 0;
      do {
        uVar10 = 0;
        if ((int)uVar12 < iVar9) {
          uVar10 = ~uVar12 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar9 = *(int *)((longlong)FVar7 + 0x10);
        FVar8 = FVar6;
        if (*(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
              *)((longlong)FVar6 + 8) !=
            (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
            )0x0) {
          FVar8 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                    *)((longlong)FVar6 + 8);
        }
        uVar10 = 0;
        pFVar2 = *(FPerShapeData **)(lVar13 + (longlong)FVar8);
        if (0 < iVar9) {
          lVar11 = 0;
          do {
            uVar5 = 0;
            if ((int)uVar10 < iVar9) {
              uVar5 = ~uVar10 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FVar8 = FVar7;
            if (*(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                  *)((longlong)FVar7 + 8) !=
                (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                 )0x0) {
              FVar8 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                        *)((longlong)FVar7 + 8);
            }
            TryAddShapePair(this,pFVar2,uVar12,*(FPerShapeData **)(lVar11 + (longlong)FVar8),uVar10)
            ;
            iVar9 = *(int *)((longlong)FVar7 + 0x10);
            uVar10 = uVar10 + 1;
            lVar11 = lVar11 + 8;
          } while ((int)uVar10 < iVar9);
        }
        iVar9 = *(int *)((longlong)FVar6 + 0x10);
        uVar12 = uVar12 + 1;
        lVar13 = lVar13 + 8;
      } while ((int)uVar12 < iVar9);
    }
  }
  return;
}

// GenerateCollisionsImpl @ 1439d1b30

int __thiscall
Chaos::FShapePairParticlePairMidPhase::GenerateCollisionsImpl
          (FShapePairParticlePairMidPhase *this,float param_1,float param_2,
          TVector<float,3> *param_3,FCollisionContext *param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  ForElementType<Chaos::FSingleShapePairCollisionDetector> this_00;
  int iVar4;
  ForElementType<Chaos::FSingleShapePairCollisionDetector> FVar5;
  undefined1 local_res8 [8];
  
  this_00 = (this->ShapePairDetectors).AllocatorInstance.SecondaryData;
  iVar4 = 0;
  iVar1 = (this->ShapePairDetectors).ArrayNum;
  if ((this->_padding_ & 0x40000) == 0) {
    if (this_00 == (ForElementType<Chaos::FSingleShapePairCollisionDetector>)0x0) {
      this_00 = (ForElementType<Chaos::FSingleShapePairCollisionDetector>)&this->ShapePairDetectors;
    }
    FVar5 = (ForElementType<Chaos::FSingleShapePairCollisionDetector>)
            ((longlong)iVar1 * 0x58 + (longlong)this_00);
    while( true ) {
      if ((this->ShapePairDetectors).ArrayNum != iVar1) {
        `TCheckedPointerIterator<Chaos::FSingleShapePairCollisionDetector,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res8);
      }
      if (this_00 == FVar5) break;
      bVar2 = FSingleShapePairCollisionDetector::DoBoundsOverlap
                        ((FSingleShapePairCollisionDetector *)this_00,param_2,param_3,
                         param_4->Allocator->CurrentEpoch);
      if (bVar2) {
        iVar3 = FSingleShapePairCollisionDetector::GenerateCollisionImpl
                          ((FSingleShapePairCollisionDetector *)this_00,param_1,param_2,param_3,
                           param_4);
        iVar4 = iVar4 + iVar3;
        this_00 = (ForElementType<Chaos::FSingleShapePairCollisionDetector>)
                  ((longlong)this_00 + 0x58);
      }
      else {
        this_00 = (ForElementType<Chaos::FSingleShapePairCollisionDetector>)
                  ((longlong)this_00 + 0x58);
      }
    }
  }
  else {
    if (this_00 == (ForElementType<Chaos::FSingleShapePairCollisionDetector>)0x0) {
      this_00 = (ForElementType<Chaos::FSingleShapePairCollisionDetector>)&this->ShapePairDetectors;
    }
    FVar5 = (ForElementType<Chaos::FSingleShapePairCollisionDetector>)
            ((longlong)iVar1 * 0x58 + (longlong)this_00);
    while( true ) {
      if ((this->ShapePairDetectors).ArrayNum != iVar1) {
        `TCheckedPointerIterator<Chaos::FSingleShapePairCollisionDetector,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res8);
      }
      if (this_00 == FVar5) break;
      iVar3 = FSingleShapePairCollisionDetector::GenerateCollisionCCDImpl
                        ((FSingleShapePairCollisionDetector *)this_00,param_1,param_2,param_3,
                         (bool)(*(byte *)((longlong)&this->_padding_ + 2) >> 3 & 1),param_4);
      iVar4 = iVar4 + iVar3;
      this_00 = (ForElementType<Chaos::FSingleShapePairCollisionDetector>)((longlong)this_00 + 0x58)
      ;
    }
  }
  return iVar4;
}

// InjectCollisionImpl @ 1439d52a0

void __thiscall
Chaos::FShapePairParticlePairMidPhase::InjectCollisionImpl
          (FShapePairParticlePairMidPhase *this,FPBDCollisionConstraint *param_1,
          FCollisionContext *param_2)

{
  uchar *puVar1;
  uint *puVar2;
  int iVar3;
  FShapeInstance *pFVar4;
  FShapeInstance *pFVar5;
  FPBDCollisionConstraint *pFVar6;
  code *pcVar7;
  bool bVar8;
  FPBDCollisionConstraint *pFVar9;
  ForElementType<Chaos::FSingleShapePairCollisionDetector> FVar10;
  TObjectPool<Chaos::FPBDCollisionConstraint> *this_00;
  ForElementType<Chaos::FSingleShapePairCollisionDetector> FVar11;
  undefined1 local_res8 [8];
  FPBDCollisionConstraint *local_res10;
  longlong local_48 [2];
  
  pFVar4 = param_1->Shape[0];
  FVar10 = (this->ShapePairDetectors).AllocatorInstance.SecondaryData;
  iVar3 = (this->ShapePairDetectors).ArrayNum;
  pFVar5 = param_1->Shape[1];
  if (FVar10 == (ForElementType<Chaos::FSingleShapePairCollisionDetector>)0x0) {
    FVar10 = (ForElementType<Chaos::FSingleShapePairCollisionDetector>)&this->ShapePairDetectors;
  }
  FVar11 = (ForElementType<Chaos::FSingleShapePairCollisionDetector>)
           ((longlong)iVar3 * 0x58 + (longlong)FVar10);
  local_res10 = param_1;
  while( true ) {
    if ((this->ShapePairDetectors).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::FSingleShapePairCollisionDetector,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar10 == FVar11) break;
    if (((pFVar4 == *(FShapeInstance **)((longlong)FVar10 + 0x28)) &&
        (pFVar5 == *(FShapeInstance **)((longlong)FVar10 + 0x30))) ||
       ((pFVar4 == *(FShapeInstance **)((longlong)FVar10 + 0x30) &&
        (pFVar5 == *(FShapeInstance **)((longlong)FVar10 + 0x28))))) {
      iVar3 = param_2->Allocator->CurrentEpoch;
      if (*(longlong *)((longlong)FVar10 + 0x10) == 0) {
        this_00 = &param_2->Allocator->ConstraintPool;
        pFVar9 = TObjectPool<Chaos::FPBDCollisionConstraint>::Alloc<>(this_00);
        puVar1 = (uchar *)((longlong)FVar10 + 8);
        if ((longlong *)puVar1 != local_48) {
          pFVar6 = *(FPBDCollisionConstraint **)((longlong)FVar10 + 0x10);
          *(FPBDCollisionConstraint **)((longlong)FVar10 + 0x10) = pFVar9;
          pFVar9 = (FPBDCollisionConstraint *)0x0;
          param_1 = local_res10;
          if (pFVar6 != (FPBDCollisionConstraint *)0x0) {
            if ((*(longlong *)puVar1 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Pool != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                                   ,0x249,L""), bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            TObjectPool<Chaos::FPBDCollisionConstraint>::Free
                      (*(TObjectPool<Chaos::FPBDCollisionConstraint> **)puVar1,pFVar6);
            param_1 = local_res10;
          }
        }
        *(TObjectPool<Chaos::FPBDCollisionConstraint> **)puVar1 = this_00;
        if (pFVar9 != (FPBDCollisionConstraint *)0x0) {
          if ((this_00 == (TObjectPool<Chaos::FPBDCollisionConstraint> *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pool != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                                 ,0x249,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          TObjectPool<Chaos::FPBDCollisionConstraint>::Free(this_00,pFVar9);
        }
        *(undefined8 *)(*(longlong *)((longlong)FVar10 + 0x10) + 0x140) = *(undefined8 *)FVar10;
        puVar2 = (uint *)(*(longlong *)((longlong)FVar10 + 0x10) + 0x150);
        *puVar2 = *puVar2 & 0x7fffffff;
        *(int *)(*(longlong *)((longlong)FVar10 + 0x10) + 0x148) = iVar3;
      }
      FPBDCollisionConstraint::RestoreFrom
                (*(FPBDCollisionConstraint **)((longlong)FVar10 + 0x10),param_1);
      Chaos::Private::FCollisionContextAllocator::ActivateConstraint
                (param_2->Allocator,*(FPBDCollisionConstraint **)((longlong)FVar10 + 0x10));
      *(int *)((longlong)FVar10 + 0x4c) = iVar3;
      return;
    }
    FVar10 = (ForElementType<Chaos::FSingleShapePairCollisionDetector>)((longlong)FVar10 + 0x58);
  }
  return;
}

// ResetImpl @ 1439ddac0

void __thiscall
Chaos::FShapePairParticlePairMidPhase::ResetImpl(FShapePairParticlePairMidPhase *this)

{
  TArray<Chaos::FSingleShapePairCollisionDetector,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  int iVar3;
  ForElementType<Chaos::FSingleShapePairCollisionDetector> FVar4;
  
  pTVar1 = &this->ShapePairDetectors;
  piVar2 = &(this->ShapePairDetectors).ArrayMax;
  iVar3 = (this->ShapePairDetectors).ArrayNum;
  FVar4 = (this->ShapePairDetectors).AllocatorInstance.SecondaryData;
  if (-1 < (this->ShapePairDetectors).ArrayMax) {
    if (FVar4 == (ForElementType<Chaos::FSingleShapePairCollisionDetector>)0x0) {
      FVar4 = (ForElementType<Chaos::FSingleShapePairCollisionDetector>)pTVar1;
    }
    DestructItems<Chaos::FSingleShapePairCollisionDetector,int>
              ((FSingleShapePairCollisionDetector *)FVar4,iVar3);
    (this->ShapePairDetectors).ArrayNum = 0;
    return;
  }
  if (FVar4 == (ForElementType<Chaos::FSingleShapePairCollisionDetector>)0x0) {
    FVar4 = (ForElementType<Chaos::FSingleShapePairCollisionDetector>)pTVar1;
  }
  DestructItems<Chaos::FSingleShapePairCollisionDetector,int>
            ((FSingleShapePairCollisionDetector *)FVar4,iVar3);
  (this->ShapePairDetectors).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Chaos::FSingleShapePairCollisionDetector>_>
              (0x58,8,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  return;
}

// TryAddShapePair @ 1439e1ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FShapePairParticlePairMidPhase::TryAddShapePair
          (FShapePairParticlePairMidPhase *this,FPerShapeData *param_1,int param_2,
          FPerShapeData *param_3,int param_4)

{
  TArray<Chaos::FSingleShapePairCollisionDetector,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  TGeometryParticleHandleImp<double,3,1> *pTVar3;
  code *pcVar4;
  FIDKey FVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  EContactShapesType EVar9;
  int iVar10;
  FImplicitObject *this_00;
  TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_> *pTVar11;
  FImplicitObject *this_01;
  FSingleShapePairCollisionDetector *pFVar12;
  longlong lVar13;
  ForElementType<Chaos::FSingleShapePairCollisionDetector> FVar14;
  undefined1 auStackY_188 [32];
  bool local_148 [4];
  int local_144;
  FGenericParticleHandleImp local_140;
  FGenericParticleHandleImp local_138;
  FCollisionSortKeyNonHashed local_130;
  FCollisionSortKeyNonHashed local_120;
  FSingleShapePairCollisionDetector local_108;
  FSingleShapePairCollisionDetector local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_144 = param_2;
  if (param_1->Type == 0) {
    this_00 = FShapeInstanceProxy::GetLeafGeometry((FShapeInstanceProxy *)param_1);
  }
  else {
    this_00 = FShapeInstance::GetLeafGeometry((FShapeInstance *)param_1);
  }
  pTVar3 = (TGeometryParticleHandleImp<double,3,1> *)this->_padding_;
  if (this_00 == (FImplicitObject *)0x0) {
    bVar6 = 7;
LAB_1439e1d51:
    local_140.MHandle = pTVar3;
    pTVar11 = FGenericParticleHandleImp::CollisionParticles(&local_140);
    if ((pTVar11->Ptr == (FBVHParticles *)0x0) || ((int)pTVar11->Ptr->_padding_ == 0)) {
      if (this_00 == (FImplicitObject *)0x0) {
        bVar6 = 7;
      }
      else {
        bVar6 = FImplicitObject::GetType(this_00);
        bVar6 = bVar6 & 0x1f;
      }
    }
  }
  else {
    bVar6 = FImplicitObject::GetCollisionType(this_00);
    bVar6 = bVar6 & 0x1f;
    if ((byte)(bVar6 - 6) < 2) goto LAB_1439e1d51;
  }
  if (param_3->Type == 0) {
    this_01 = FShapeInstanceProxy::GetLeafGeometry((FShapeInstanceProxy *)param_3);
  }
  else {
    this_01 = FShapeInstance::GetLeafGeometry((FShapeInstance *)param_3);
  }
  pTVar3 = (TGeometryParticleHandleImp<double,3,1> *)this->_padding_;
  if (this_01 == (FImplicitObject *)0x0) {
    bVar7 = 7;
  }
  else {
    bVar7 = FImplicitObject::GetCollisionType(this_01);
    bVar7 = bVar7 & 0x1f;
    if (1 < (byte)(bVar7 - 6)) goto LAB_1439e1df8;
  }
  local_138.MHandle = pTVar3;
  pTVar11 = FGenericParticleHandleImp::CollisionParticles(&local_138);
  if ((pTVar11->Ptr == (FBVHParticles *)0x0) || ((int)pTVar11->Ptr->_padding_ == 0)) {
    if (this_01 == (FImplicitObject *)0x0) {
      bVar7 = 7;
    }
    else {
      bVar7 = FImplicitObject::GetType(this_01);
      bVar7 = bVar7 & 0x1f;
    }
  }
LAB_1439e1df8:
  bVar8 = DoCollide(bVar6,param_1,bVar7,param_3);
  if (bVar8) {
    local_148[0] = false;
    EVar9 = Collisions::CalculateShapePairType
                      ((TGeometryParticleHandleImp<double,3,1> *)this->_padding_,this_00,
                       (TGeometryParticleHandleImp<double,3,1> *)this->_padding_,this_01,local_148);
    if (EVar9 == Unknown) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6000059167799245659>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\ParticlePairMidPhase.cpp"
                         ,0x4a5,"false");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      pTVar1 = &this->ShapePairDetectors;
      if (local_148[0] == false) {
        Chaos::Private::FCollisionSortKeyNonHashed::FCollisionSortKeyNonHashed
                  (&local_130,(TGeometryParticleHandleImp<double,3,1> *)this->_padding_,local_144,
                   (TGeometryParticleHandleImp<double,3,1> *)this->_padding_,param_4);
        pFVar12 = FSingleShapePairCollisionDetector::FSingleShapePairCollisionDetector
                            (&local_108,(TGeometryParticleHandleImp<double,3,1> *)this->_padding_,
                             param_1,(TGeometryParticleHandleImp<double,3,1> *)this->_padding_,
                             param_3,&local_130,EVar9,(FParticlePairMidPhase *)this);
        piVar2 = &(this->ShapePairDetectors).ArrayMax;
        iVar10 = (this->ShapePairDetectors).ArrayNum;
        if (iVar10 == *piVar2) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Chaos::FSingleShapePairCollisionDetector>_>
                             (0x858,&pTVar1->AllocatorInstance,piVar2);
        }
        (this->ShapePairDetectors).ArrayNum = iVar10 + 1;
        FVar14 = (this->ShapePairDetectors).AllocatorInstance.SecondaryData;
        if (FVar14 == (ForElementType<Chaos::FSingleShapePairCollisionDetector>)0x0) {
          FVar14 = (ForElementType<Chaos::FSingleShapePairCollisionDetector>)pTVar1;
        }
        lVar13 = (longlong)iVar10 * 0x58;
        *(FParticlePairMidPhase **)((longlong)FVar14 + lVar13) = pFVar12->MidPhase;
        *(longlong *)((uchar *)((longlong)FVar14 + 8) + lVar13) = (pFVar12->Constraint)._padding_;
        *(FPBDCollisionConstraint **)((uchar *)((longlong)FVar14 + 0x10) + lVar13) =
             (pFVar12->Constraint).Ptr;
        (pFVar12->Constraint).Ptr = (FPBDCollisionConstraint *)0x0;
        *(TGeometryParticleHandleImp<double,3,1> **)((uchar *)((longlong)FVar14 + 0x18) + lVar13) =
             pFVar12->Particle0;
        *(TGeometryParticleHandleImp<double,3,1> **)((uchar *)((longlong)FVar14 + 0x20) + lVar13) =
             pFVar12->Particle1;
        *(FPerShapeData **)((uchar *)((longlong)FVar14 + 0x28) + lVar13) = pFVar12->Shape0;
        *(FPerShapeData **)((uchar *)((longlong)FVar14 + 0x30) + lVar13) = pFVar12->Shape1;
        FVar5 = *(FIDKey *)&(pFVar12->CollisionSortKey).ShapePairKey.field0_0x0;
        *(FIDKey *)((uchar *)((longlong)FVar14 + 0x38) + lVar13) =
             (pFVar12->CollisionSortKey).ParticlePairKey.Key;
        ((FIDKey *)((uchar *)((longlong)FVar14 + 0x38) + lVar13))[1] = FVar5;
        *(float *)((uchar *)((longlong)FVar14 + 0x48) + lVar13) = pFVar12->SphereBoundsCheckSize;
        ((uchar *)((longlong)FVar14 + 0x50))[lVar13] = pFVar12->ShapePairType;
        *(FImplicitBoundsTestFlags *)((uchar *)((longlong)FVar14 + 0x51) + lVar13) =
             pFVar12->BoundsTestFlags;
        if (local_108.Constraint.Ptr != (FPBDCollisionConstraint *)0x0) {
          if (((TObjectPool<Chaos::FPBDCollisionConstraint> *)local_108.Constraint._padding_ ==
               (TObjectPool<Chaos::FPBDCollisionConstraint> *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pool != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                                 ,0x249,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          TObjectPool<Chaos::FPBDCollisionConstraint>::Free
                    ((TObjectPool<Chaos::FPBDCollisionConstraint> *)local_108.Constraint._padding_,
                     local_108.Constraint.Ptr);
        }
      }
      else {
        Chaos::Private::FCollisionSortKeyNonHashed::FCollisionSortKeyNonHashed
                  (&local_120,(TGeometryParticleHandleImp<double,3,1> *)this->_padding_,param_4,
                   (TGeometryParticleHandleImp<double,3,1> *)this->_padding_,local_144);
        pFVar12 = FSingleShapePairCollisionDetector::FSingleShapePairCollisionDetector
                            (&local_a8,(TGeometryParticleHandleImp<double,3,1> *)this->_padding_,
                             param_3,(TGeometryParticleHandleImp<double,3,1> *)this->_padding_,
                             param_1,&local_120,EVar9,(FParticlePairMidPhase *)this);
        piVar2 = &(this->ShapePairDetectors).ArrayMax;
        iVar10 = (this->ShapePairDetectors).ArrayNum;
        if (iVar10 == *piVar2) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Chaos::FSingleShapePairCollisionDetector>_>
                             (0x858,&pTVar1->AllocatorInstance,piVar2);
        }
        (this->ShapePairDetectors).ArrayNum = iVar10 + 1;
        FVar14 = (this->ShapePairDetectors).AllocatorInstance.SecondaryData;
        if (FVar14 == (ForElementType<Chaos::FSingleShapePairCollisionDetector>)0x0) {
          FVar14 = (ForElementType<Chaos::FSingleShapePairCollisionDetector>)pTVar1;
        }
        lVar13 = (longlong)iVar10 * 0x58;
        *(FParticlePairMidPhase **)((longlong)FVar14 + lVar13) = pFVar12->MidPhase;
        *(longlong *)((uchar *)((longlong)FVar14 + 8) + lVar13) = (pFVar12->Constraint)._padding_;
        *(FPBDCollisionConstraint **)((uchar *)((longlong)FVar14 + 0x10) + lVar13) =
             (pFVar12->Constraint).Ptr;
        (pFVar12->Constraint).Ptr = (FPBDCollisionConstraint *)0x0;
        *(TGeometryParticleHandleImp<double,3,1> **)((uchar *)((longlong)FVar14 + 0x18) + lVar13) =
             pFVar12->Particle0;
        *(TGeometryParticleHandleImp<double,3,1> **)((uchar *)((longlong)FVar14 + 0x20) + lVar13) =
             pFVar12->Particle1;
        *(FPerShapeData **)((uchar *)((longlong)FVar14 + 0x28) + lVar13) = pFVar12->Shape0;
        *(FPerShapeData **)((uchar *)((longlong)FVar14 + 0x30) + lVar13) = pFVar12->Shape1;
        FVar5 = *(FIDKey *)&(pFVar12->CollisionSortKey).ShapePairKey.field0_0x0;
        *(FIDKey *)((uchar *)((longlong)FVar14 + 0x38) + lVar13) =
             (pFVar12->CollisionSortKey).ParticlePairKey.Key;
        ((FIDKey *)((uchar *)((longlong)FVar14 + 0x38) + lVar13))[1] = FVar5;
        *(float *)((uchar *)((longlong)FVar14 + 0x48) + lVar13) = pFVar12->SphereBoundsCheckSize;
        ((uchar *)((longlong)FVar14 + 0x50))[lVar13] = pFVar12->ShapePairType;
        *(FImplicitBoundsTestFlags *)((uchar *)((longlong)FVar14 + 0x51) + lVar13) =
             pFVar12->BoundsTestFlags;
        if (local_a8.Constraint.Ptr != (FPBDCollisionConstraint *)0x0) {
          if (((TObjectPool<Chaos::FPBDCollisionConstraint> *)local_a8.Constraint._padding_ ==
               (TObjectPool<Chaos::FPBDCollisionConstraint> *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pool != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                                 ,0x249,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          TObjectPool<Chaos::FPBDCollisionConstraint>::Free
                    ((TObjectPool<Chaos::FPBDCollisionConstraint> *)local_a8.Constraint._padding_,
                     local_a8.Constraint.Ptr);
        }
      }
    }
  }
  return;
}

// WakeCollisionsImpl @ 1439e3c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FShapePairParticlePairMidPhase::WakeCollisionsImpl
          (FShapePairParticlePairMidPhase *this,int param_1)

{
  int iVar1;
  FPBDCollisionConstraint *pFVar2;
  FShapeInstanceProxy *pFVar3;
  longlong lVar4;
  int iVar5;
  ForElementType<Chaos::FSingleShapePairCollisionDetector> FVar6;
  longlong *plVar7;
  undefined1 auStack_128 [32];
  undefined1 local_108 [16];
  TRigidTransform<double,3> local_f8;
  TRigidTransform<double,3> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  FVar6 = (this->ShapePairDetectors).AllocatorInstance.SecondaryData;
  iVar1 = (this->ShapePairDetectors).ArrayNum;
  if (FVar6 == (ForElementType<Chaos::FSingleShapePairCollisionDetector>)0x0) {
    FVar6 = (ForElementType<Chaos::FSingleShapePairCollisionDetector>)&this->ShapePairDetectors;
  }
  plVar7 = (longlong *)((longlong)FVar6 + 0x10);
  while( true ) {
    if ((this->ShapePairDetectors).ArrayNum != iVar1) {
      `TCheckedPointerIterator<Chaos::FSingleShapePairCollisionDetector,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_108);
    }
    if (plVar7 + -2 == (longlong *)((longlong)iVar1 * 0x58 + (longlong)FVar6)) break;
    pFVar2 = (FPBDCollisionConstraint *)*plVar7;
    if ((pFVar2 != (FPBDCollisionConstraint *)0x0) &&
       ((int)this->_padding_ <= *(int *)((longlong)plVar7 + 0x3c))) {
      if (CVars::bChaosMidPhaseActivateWakingConstraints == false) {
        (pFVar2->ContainerCookie).LastUsedEpoch = param_1;
        *(uint *)(*plVar7 + 0x150) = *(uint *)(*plVar7 + 0x150) | 0x7fffffff;
        *(undefined4 *)(*plVar7 + 0x154) = 0xffffffff;
        iVar5 = param_1;
      }
      else {
        if ((pFVar2->ContainerCookie).LastUsedEpoch != *(int *)(pFVar2->_padding_ + 0x78)) {
          Chaos::Private::FCollisionConstraintAllocator::AddActiveConstraintImpl
                    ((FCollisionConstraintAllocator *)(pFVar2->_padding_ + 0x28),pFVar2);
        }
        (pFVar2->Flags).Bits = (pFVar2->Flags).Bits & 0xfffd;
        iVar5 = *(int *)(*plVar7 + 0x14c);
      }
      *(int *)((longlong)plVar7 + 0x3c) = iVar5;
      pFVar3 = (FShapeInstanceProxy *)plVar7[4];
      lVar4 = *plVar7;
      if ((pFVar3->_padding_ & 3) == 0) {
        FShapeInstanceProxy::GetLeafWorldTransform
                  (pFVar3,&local_98,(TGeometryParticleHandleImp<double,3,1> *)plVar7[2]);
      }
      else {
        FShapeInstance::GetLeafWorldTransform
                  ((FShapeInstance *)pFVar3,&local_98,
                   (TGeometryParticleHandleImp<double,3,1> *)plVar7[2]);
      }
      pFVar3 = (FShapeInstanceProxy *)plVar7[3];
      if ((pFVar3->_padding_ & 3) == 0) {
        FShapeInstanceProxy::GetLeafWorldTransform
                  (pFVar3,&local_f8,(TGeometryParticleHandleImp<double,3,1> *)plVar7[1]);
      }
      else {
        FShapeInstance::GetLeafWorldTransform
                  ((FShapeInstance *)pFVar3,&local_f8,
                   (TGeometryParticleHandleImp<double,3,1> *)plVar7[1]);
      }
      *(undefined8 *)(lVar4 + 0x170) = local_f8._0_8_;
      *(undefined8 *)(lVar4 + 0x178) = local_f8._8_8_;
      *(undefined8 *)(lVar4 + 0x180) = local_f8._16_8_;
      *(undefined8 *)(lVar4 + 0x188) = local_f8._24_8_;
      *(undefined8 *)(lVar4 + 400) = local_f8._32_8_;
      *(undefined8 *)(lVar4 + 0x198) = local_f8._40_8_;
      *(undefined8 *)(lVar4 + 0x1a0) = local_f8._48_8_;
      *(undefined8 *)(lVar4 + 0x1a8) = local_f8._56_8_;
      *(undefined8 *)(lVar4 + 0x1b0) = local_f8._64_8_;
      *(undefined8 *)(lVar4 + 0x1b8) = local_f8._72_8_;
      *(undefined8 *)(lVar4 + 0x1c0) = local_f8._80_8_;
      *(undefined8 *)(lVar4 + 0x1c8) = local_f8._88_8_;
      *(undefined8 *)(lVar4 + 0x1d0) = local_98._0_8_;
      *(undefined8 *)(lVar4 + 0x1d8) = local_98._8_8_;
      *(undefined8 *)(lVar4 + 0x1e0) = local_98._16_8_;
      *(undefined8 *)(lVar4 + 0x1e8) = local_98._24_8_;
      *(undefined8 *)(lVar4 + 0x1f0) = local_98._32_8_;
      *(undefined8 *)(lVar4 + 0x1f8) = local_98._40_8_;
      *(undefined8 *)(lVar4 + 0x200) = local_98._48_8_;
      *(undefined8 *)(lVar4 + 0x208) = local_98._56_8_;
      *(undefined8 *)(lVar4 + 0x210) = local_98._64_8_;
      *(undefined8 *)(lVar4 + 0x218) = local_98._72_8_;
      *(undefined8 *)(lVar4 + 0x220) = local_98._80_8_;
      *(undefined8 *)(lVar4 + 0x228) = local_98._88_8_;
    }
    plVar7 = plVar7 + 0xb;
  }
  return;
}

