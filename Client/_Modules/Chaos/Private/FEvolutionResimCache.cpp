// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 5

// operator()<TArray<Chaos::FPBDCollisionConstraint,TSizedDefaultAllocator<32>_>,TArray<Chaos::FEvolutionResimCache::FWeakConstraintPair,TSizedDefaultAllocator<32>_>_> @ 143cb3900

void __thiscall
`Chaos::FEvolutionResimCache::GetAndSanitizeConstraints'::__l2::<lambda_1>::
operator()<TArray<Chaos::FPBDCollisionConstraint,TSizedDefaultAllocator<32>_>,TArray<Chaos::FEvolutionResimCache::FWeakConstraintPair,TSizedDefaultAllocator<32>_>_>
          (void *this,TArray<Chaos::FPBDCollisionConstraint,TSizedDefaultAllocator<32>_> *param_1,
          TArray<Chaos::FEvolutionResimCache::FWeakConstraintPair,TSizedDefaultAllocator<32>_>
          *param_2)

{
  TGeometryParticleHandleImp<double,3,1> *this_00;
  TGeometryParticleHandleImp<double,3,1> *this_01;
  code *pcVar1;
  bool bVar2;
  ESyncState EVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Constraints.Num() == WeakPairs.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\EvolutionResimCache.h"
                         ,0x66,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar5 = param_1->ArrayNum - 1;
  if (-1 < (int)uVar5) {
    lVar8 = (longlong)(int)uVar5 << 5;
    do {
      uVar6 = ~uVar5 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar5 < param_1->ArrayNum) {
        uVar4 = uVar6;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar4 = 0;
      if ((int)uVar5 < param_2->ArrayNum) {
        uVar4 = uVar6;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar7 = (param_2->AllocatorInstance).Data + lVar8;
      if ((*(longlong *)pFVar7 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = (TGeometryParticleHandleImp<double,3,1> *)**(undefined8 **)pFVar7;
      if ((*(longlong *)(pFVar7 + 0x10) == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_01 = (TGeometryParticleHandleImp<double,3,1> *)**(undefined8 **)(pFVar7 + 0x10);
      if ((this_00 == (TGeometryParticleHandleImp<double,3,1> *)0x0) ||
         (this_01 == (TGeometryParticleHandleImp<double,3,1> *)0x0)) {
LAB_143cb3a97:
        uVar4 = 0;
        if ((int)uVar5 < param_1->ArrayNum) {
          uVar4 = uVar6;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        TArray<Chaos::FPBDCollisionConstraint,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (param_1,uVar5);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x660,0x10,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
        uVar4 = 0;
        if ((int)uVar5 < param_2->ArrayNum) {
          uVar4 = uVar6;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        TArray<Chaos::FEvolutionResimCache::FWeakConstraintPair,TSizedDefaultAllocator<32>_>::
        RemoveAtSwapImpl(param_2,uVar5);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,&param_2->AllocatorInstance,param_2->ArrayNum,&param_2->ArrayMax);
      }
      else {
        EVar3 = Chaos::TGeometryParticleHandleImp<double,3,1>::SyncState(this_00);
        if ((EVar3 == HardDesync) ||
           (EVar3 = Chaos::TGeometryParticleHandleImp<double,3,1>::SyncState(this_01),
           EVar3 == HardDesync)) {
          Chaos::TGeometryParticleHandleImp<double,3,1>::SyncState(this_00);
          Chaos::TGeometryParticleHandleImp<double,3,1>::SyncState(this_01);
          goto LAB_143cb3a97;
        }
      }
      lVar8 = lVar8 + -0x20;
      uVar5 = uVar5 - 1;
    } while (-1 < (int)uVar5);
  }
  return;
}

// operator()<TArray<Chaos::FPBDCollisionConstraint,TSizedDefaultAllocator<32>_>,TArray<Chaos::FEvolutionResimCache::FWeakConstraintPair,TSizedDefaultAllocator<32>_>_> @ 143cb3ba0

void __thiscall
`Chaos::FEvolutionResimCache::SaveConstraints'::__l2::<lambda_1>::
operator()<TArray<Chaos::FPBDCollisionConstraint,TSizedDefaultAllocator<32>_>,TArray<Chaos::FEvolutionResimCache::FWeakConstraintPair,TSizedDefaultAllocator<32>_>_>
          (void *this,TArray<Chaos::FPBDCollisionConstraint,TSizedDefaultAllocator<32>_> *param_1,
          TArray<Chaos::FEvolutionResimCache::FWeakConstraintPair,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  TGeometryParticleHandleImp<double,3,1> *this_01;
  code *pcVar4;
  bool bVar5;
  ESyncState EVar6;
  int iVar7;
  FWeakParticleHandle *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res10 [8];
  FData *local_48;
  TReferenceControllerBase<1> *local_40;
  FData *local_38;
  TReferenceControllerBase<1> *local_30;
  
  uVar2 = param_1->ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  DestructItems<Chaos::FEvolutionResimCache::FWeakConstraintPair,int>
            ((FWeakConstraintPair *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (*piVar1 != uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar2,&param_2->AllocatorInstance,0,piVar1);
  }
  iVar3 = param_1->ArrayNum;
  pFVar10 = (param_1->AllocatorInstance).Data;
  pFVar11 = pFVar10 + (longlong)iVar3 * 0x660;
  do {
    if (param_1->ArrayNum != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<Chaos::FPBDCollisionConstraint,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if (pFVar10 == pFVar11) {
      if (param_1->ArrayNum != param_2->ArrayNum) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Constraints.Num() == WeakPairs.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\EvolutionResimCache.h"
                           ,0x5b,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      return;
    }
    pFVar8 = Chaos::TGeometryParticlesImp<double,3,0>::WeakParticleHandle
                       ((TGeometryParticlesImp<double,3,0> *)**(undefined8 **)(pFVar10 + 0xe0),
                        *(int *)(*(undefined8 **)(pFVar10 + 0xe0) + 1));
    local_48 = (pFVar8->SharedData).Object;
    local_40 = (pFVar8->SharedData).SharedReferenceCount.ReferenceController;
    if (local_40 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar8 = Chaos::TGeometryParticlesImp<double,3,0>::WeakParticleHandle
                       ((TGeometryParticlesImp<double,3,0> *)**(undefined8 **)(pFVar10 + 0xe8),
                        *(int *)(*(undefined8 **)(pFVar10 + 0xe8) + 1));
    local_38 = (pFVar8->SharedData).Object;
    local_30 = (pFVar8->SharedData).SharedReferenceCount.ReferenceController;
    if (local_30 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar9 = (param_2->AllocatorInstance).Data;
    if ((pFVar9 <= (FScriptContainerElement *)&local_48) &&
       ((FScriptContainerElement *)&local_48 < pFVar9 + (longlong)*piVar1 * 0x20)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar7 = param_2->ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&param_2->AllocatorInstance,piVar1);
    }
    param_2->ArrayNum = iVar7 + 1;
    pFVar9 = (param_2->AllocatorInstance).Data + (longlong)iVar7 * 0x20;
    *(FData **)pFVar9 = local_48;
    *(TReferenceControllerBase<1> **)(pFVar9 + 8) = local_40;
    local_40 = (TReferenceControllerBase<1> *)0x0;
    local_48 = (FData *)0x0;
    *(FData **)(pFVar9 + 0x10) = local_38;
    *(TReferenceControllerBase<1> **)(pFVar9 + 0x18) = local_30;
    local_30 = (TReferenceControllerBase<1> *)0x0;
    local_38 = (FData *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    this_00 = *(TGeometryParticleHandleImp<double,3,1> **)(pFVar10 + 0xe0);
    this_01 = *(TGeometryParticleHandleImp<double,3,1> **)(pFVar10 + 0xe8);
    EVar6 = Chaos::TGeometryParticleHandleImp<double,3,1>::SyncState(this_00);
    if (EVar6 == HardDesync) {
LAB_143cb3da3:
      Chaos::TGeometryParticleHandleImp<double,3,1>::SyncState(this_00);
      Chaos::TGeometryParticleHandleImp<double,3,1>::SyncState(this_01);
    }
    else {
      EVar6 = Chaos::TGeometryParticleHandleImp<double,3,1>::SyncState(this_01);
      if (EVar6 == HardDesync) goto LAB_143cb3da3;
    }
    pFVar10 = pFVar10 + 0x660;
  } while( true );
}

// ~FEvolutionResimCache @ 143d03210

void __thiscall Chaos::FEvolutionResimCache::~FEvolutionResimCache(FEvolutionResimCache *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->ParticleToCachedSolve).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ParticleToCachedSolve).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::FUniqueIdx,Chaos::FEvolutionResimCache::FPBDSolveCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::FUniqueIdx,Chaos::FEvolutionResimCache::FPBDSolveCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::FUniqueIdx,Chaos::FEvolutionResimCache::FPBDSolveCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ParticleToCachedSolve);
  DestructItems<Chaos::FEvolutionResimCache::FWeakConstraintPair,int>
            ((FWeakConstraintPair *)(this->WeakSinglePointConstraints).AllocatorInstance.Data,
             (this->WeakSinglePointConstraints).ArrayNum);
  pFVar2 = (this->WeakSinglePointConstraints).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<Chaos::FPBDCollisionConstraint,int>
            ((FPBDCollisionConstraint *)(this->SavedConstraints).AllocatorInstance.Data,
             (this->SavedConstraints).ArrayNum);
  pFVar2 = (this->SavedConstraints).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  return;
}

// ReloadParticlePostSolve @ 143d612a0

bool __thiscall
Chaos::FEvolutionResimCache::ReloadParticlePostSolve
          (FEvolutionResimCache *this,TPBDRigidParticleHandleImp<double,3,1> *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  FUniqueIdx *pFVar4;
  TVector<double,3> *pTVar5;
  TRotation<double,3> *pTVar6;
  uint uVar7;
  uint *puVar8;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar9;
  TVector<double,3> *pTVar10;
  undefined1 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 local_28 [16];
  double local_18;
  undefined8 uStack_10;
  
  pFVar4 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                     (*(TGeometryParticlesImp<double,3,0> **)param_1,*(int *)&param_1->field_0x8);
  if (*(int *)&(this->ParticleToCachedSolve).field_0x8 !=
      *(int *)&(this->ParticleToCachedSolve).field_0x34) {
    puVar11 = *(undefined1 **)&(this->ParticleToCachedSolve).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->ParticleToCachedSolve).field_0x38;
    }
    uVar7 = *(uint *)(puVar11 +
                     (ulonglong)
                     (*(int *)&(this->ParticleToCachedSolve).field_0x48 - 1U & pFVar4->Idx) * 4);
    if (uVar7 != 0xffffffff) {
      do {
        puVar8 = (uint *)((longlong)(int)uVar7 * 0x90 + *(longlong *)&this->ParticleToCachedSolve);
        if (*puVar8 == pFVar4->Idx) {
          pTVar10 = (TVector<double,3> *)(puVar8 + 4);
          if (puVar8 == (uint *)0x0) {
            pTVar10 = (TVector<double,3> *)0x0;
          }
          if (pTVar10 != (TVector<double,3> *)0x0) {
            pTVar5 = TPBDRigidParticleHandleImp<double,3,1>::GetP(param_1);
            if (((*(double *)pTVar10 == *(double *)pTVar5) &&
                (*(double *)&pTVar10->field_0x8 == *(double *)&pTVar5->field_0x8)) &&
               (*(double *)&pTVar10->field_0x10 == *(double *)&pTVar5->field_0x10)) {
              pTVar9 = param_1;
              pTVar6 = TPBDRigidParticleHandleImp<double,3,1>::GetQ
                                 (param_1,(TRotation<double,3> *)local_28);
              lVar12 = -(ulonglong)
                        (*(double *)&pTVar10[2].field_0x8 != *(double *)&pTVar6->field_0x18);
              lVar13 = -(ulonglong)
                        (*(double *)&pTVar10[1].field_0x10 != *(double *)&pTVar6->field_0x8);
              auVar1._8_4_ = (int)lVar12;
              auVar1._0_8_ = -(ulonglong)
                              (*(double *)(pTVar10 + 2) != *(double *)&pTVar6->field_0x10);
              auVar1._12_4_ = (int)((ulonglong)lVar12 >> 0x20);
              uVar7 = movmskpd((int)pTVar9,auVar1);
              auVar2._8_4_ = (int)lVar13;
              auVar2._0_8_ = -(ulonglong)(*(double *)&pTVar10[1].field_0x8 != *(double *)pTVar6);
              auVar2._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
              iVar3 = movmskpd((int)pTVar6,auVar2);
              if ((((((uVar7 & 0x3fffffff) == 0 && iVar3 == 0) &&
                    (TKinematicGeometryParticlesImp<double,3,0>::GetV
                               (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,
                                (TVector<double,3> *)local_28,*(int *)&param_1->field_0x8),
                    (double)local_28._0_8_ == *(double *)&pTVar10[2].field_0x10)) &&
                   (((double)local_28._8_8_ == *(double *)(pTVar10 + 3) &&
                    ((local_18 == *(double *)&pTVar10[3].field_0x8 &&
                     (TKinematicGeometryParticlesImp<double,3,0>::GetW
                                (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,
                                 (TVector<double,3> *)local_28,*(int *)&param_1->field_0x8),
                     (double)local_28._0_8_ == *(double *)&pTVar10[3].field_0x10)))))) &&
                  ((double)local_28._8_8_ == *(double *)(pTVar10 + 4))) &&
                 (local_18 == *(double *)&pTVar10[4].field_0x8)) {
                return false;
              }
            }
            TPBDRigidParticleHandleImp<double,3,1>::SetP(param_1,pTVar10);
            local_28._0_8_ = *(undefined8 *)&pTVar10[1].field_0x8;
            local_28._8_8_ = *(undefined8 *)&pTVar10[1].field_0x10;
            local_18 = *(double *)(pTVar10 + 2);
            uStack_10 = *(undefined8 *)&pTVar10[2].field_0x8;
            TPBDRigidParticleHandleImp<double,3,1>::SetQ(param_1,(TRotation<double,3> *)local_28);
            TKinematicGeometryParticlesImp<double,3,0>::SetV
                      (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,
                       *(int *)&param_1->field_0x8,(TVector<double,3> *)&pTVar10[2].field_0x10);
            TKinematicGeometryParticlesImp<double,3,0>::SetW
                      (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,
                       *(int *)&param_1->field_0x8,(TVector<double,3> *)&pTVar10[3].field_0x10);
            return true;
          }
          return false;
        }
        uVar7 = puVar8[0x20];
      } while (uVar7 != 0xffffffff);
    }
  }
  return false;
}

// ResetCache @ 143d68f50

void __thiscall Chaos::FEvolutionResimCache::ResetCache(FEvolutionResimCache *this)

{
  int *piVar1;
  FPBDCollisionConstraint *pFVar2;
  FWeakConstraintPair *pFVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)&(this->ParticleToCachedSolve).field_0x8 -
          *(int *)&(this->ParticleToCachedSolve).field_0x34;
  iVar7 = (int)ROUND(__real_bf000000 - (float)iVar6 * __real_3e4ccccd) >> 1;
  iVar5 = this->ParticleCacheAllocationSize;
  if (this->ParticleCacheAllocationSize < iVar6) {
    iVar5 = iVar6;
  }
  this->ParticleCacheAllocationSize = iVar5;
  iVar5 = iVar5 + iVar7 * 2;
  iVar4 = 0;
  if (0 < iVar5) {
    iVar4 = iVar5;
  }
  if (iVar6 < iVar4) {
    iVar6 = iVar6 - iVar7;
    TSet<TTuple<Chaos::FUniqueIdx,Chaos::FEvolutionResimCache::FPBDSolveCache>,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,Chaos::FEvolutionResimCache::FPBDSolveCache,0>,FDefaultSetAllocator>
    ::Empty((TSet<TTuple<Chaos::FUniqueIdx,Chaos::FEvolutionResimCache::FPBDSolveCache>,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,Chaos::FEvolutionResimCache::FPBDSolveCache,0>,FDefaultSetAllocator>
             *)&this->ParticleToCachedSolve,iVar6);
    this->ParticleCacheAllocationSize = iVar6;
  }
  else {
    TSet<TTuple<Chaos::FUniqueIdx,Chaos::FEvolutionResimCache::FPBDSolveCache>,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,Chaos::FEvolutionResimCache::FPBDSolveCache,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<Chaos::FUniqueIdx,Chaos::FEvolutionResimCache::FPBDSolveCache>,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,Chaos::FEvolutionResimCache::FPBDSolveCache,0>,FDefaultSetAllocator>
             *)&this->ParticleToCachedSolve);
  }
  piVar1 = &(this->SavedConstraints).ArrayMax;
  pFVar2 = (FPBDCollisionConstraint *)(this->SavedConstraints).AllocatorInstance.Data;
  iVar5 = (this->SavedConstraints).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<Chaos::FPBDCollisionConstraint,int>(pFVar2,iVar5);
    (this->SavedConstraints).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x660,0x10,0,&(this->SavedConstraints).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<Chaos::FPBDCollisionConstraint,int>(pFVar2,iVar5);
    (this->SavedConstraints).ArrayNum = 0;
  }
  piVar1 = &(this->WeakSinglePointConstraints).ArrayMax;
  pFVar3 = (FWeakConstraintPair *)(this->WeakSinglePointConstraints).AllocatorInstance.Data;
  iVar5 = (this->WeakSinglePointConstraints).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<Chaos::FEvolutionResimCache::FWeakConstraintPair,int>(pFVar3,iVar5);
    (this->WeakSinglePointConstraints).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(this->WeakSinglePointConstraints).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<Chaos::FEvolutionResimCache::FWeakConstraintPair,int>(pFVar3,iVar5);
    (this->WeakSinglePointConstraints).ArrayNum = 0;
  }
  return;
}

