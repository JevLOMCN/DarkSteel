// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// FScopedVolatilityManagerSuppression @ 146119c50

FScopedVolatilityManagerSuppression * __thiscall
UE::MovieScene::FScopedVolatilityManagerSuppression::FScopedVolatilityManagerSuppression
          (FScopedVolatilityManagerSuppression *this,
          TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *param_1)

{
  TUniquePtr<UE::MovieScene::FCompiledDataVolatilityManager,TDefaultDelete<UE::MovieScene::FCompiledDataVolatilityManager>_>
  *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  FRootInstanceHandle FVar4;
  TReferenceControllerBase<1> *pTVar5;
  FCompiledDataVolatilityManager *pFVar6;
  ForElementType<TTuple<FMovieSceneSequenceID,FGuid>_> FVar7;
  code *pcVar8;
  bool bVar9;
  FScopedVolatilityManagerSuppression *pFVar10;
  UObject *pUVar11;
  undefined8 *puVar12;
  
  (this->WeakPlaybackState).Object = param_1->Object;
  pTVar5 = (param_1->SharedReferenceCount).ReferenceController;
  (this->WeakPlaybackState).WeakReferenceCount.ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->PreviousVolatilityManager;
  pTVar1->Ptr = (FCompiledDataVolatilityManager *)0x0;
  if (param_1->Object == (FSharedPlaybackState *)0x0) {
    bVar9 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7613121396662599521>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneInstanceRegistry.cpp"
                       ,0x9f,"PlaybackState.IsValid()");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pFVar10 = (FScopedVolatilityManagerSuppression *)(*pcVar8)();
      return pFVar10;
    }
    if (param_1->Object == (FSharedPlaybackState *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        pFVar10 = (FScopedVolatilityManagerSuppression *)(*pcVar8)();
        return pFVar10;
      }
    }
  }
  FVar4 = param_1->Object->RootInstanceHandle;
  if (param_1->Object == (FSharedPlaybackState *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pFVar10 = (FScopedVolatilityManagerSuppression *)(*pcVar8)();
      return pFVar10;
    }
  }
  pUVar11 = FWeakObjectPtr::Get(&(param_1->Object->WeakLinker).WeakPtr);
  if (*(longlong *)&pUVar11[0x23].field_0x8 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceRegistry.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                       ,0x96,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pFVar10 = (FScopedVolatilityManagerSuppression *)(*pcVar8)();
      return pFVar10;
    }
  }
  puVar12 = (undefined8 *)
            (*(longlong *)(*(longlong *)&pUVar11[0x23].field_0x8 + 8) +
            (ulonglong)((uint)FVar4 & 0xffff) * 0x140 + 0x110);
  if (pTVar1 != (TUniquePtr<UE::MovieScene::FCompiledDataVolatilityManager,TDefaultDelete<UE::MovieScene::FCompiledDataVolatilityManager>_>
                 *)puVar12) {
    pFVar6 = pTVar1->Ptr;
    pTVar1->Ptr = (FCompiledDataVolatilityManager *)*puVar12;
    *puVar12 = 0;
    if (pFVar6 != (FCompiledDataVolatilityManager *)0x0) {
      FVar7 = (pFVar6->CachedCompilationSignatures).Pairs.AllocatorInstance.SecondaryData;
      if (FVar7 != (ForElementType<TTuple<FMovieSceneSequenceID,FGuid>_>)0x0) {
        FMemory::Free((void *)FVar7);
      }
      pTVar5 = (pFVar6->WeakSharedPlaybackState).WeakReferenceCount.ReferenceController;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &pTVar5->WeakReferenceCount;
        aVar3 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
        }
      }
      ::operator_delete(pFVar6,0x160);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FScopedVolatilityManagerSuppression @ 14611df80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FScopedVolatilityManagerSuppression::~FScopedVolatilityManagerSuppression
          (FScopedVolatilityManagerSuppression *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong lVar5;
  FCompiledDataVolatilityManager *pFVar6;
  ForElementType<TTuple<FMovieSceneSequenceID,FGuid>_> FVar7;
  code *pcVar8;
  atomic<int> aVar9;
  UObject *pUVar10;
  FSharedPlaybackState *pFVar11;
  FSharedPlaybackState *pFVar12;
  FSequenceInstance *this_00;
  FSharedPlaybackState *pFVar13;
  FSharedPlaybackState *pFVar14;
  bool bVar15;
  undefined1 local_res8 [8];
  
  if ((((this->WeakPlaybackState).Object == (FSharedPlaybackState *)0x0) ||
      (pTVar4 = (this->WeakPlaybackState).WeakReferenceCount.ReferenceController,
      pTVar4 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar4->SharedReferenceCount < 1))
  goto LAB_14611e150;
  pFVar12 = (FSharedPlaybackState *)(this->WeakPlaybackState).WeakReferenceCount.ReferenceController
  ;
  pFVar14 = (FSharedPlaybackState *)0x0;
  pFVar11 = pFVar14;
  pFVar13 = pFVar12;
  if (pFVar12 == (FSharedPlaybackState *)0x0) {
LAB_14611dff5:
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pFVar12 = pFVar13;
    if (bVar15) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else {
    aVar2 = *(atomic<int> *)&pFVar12->_padding_;
    do {
      pFVar11 = (FSharedPlaybackState *)0x0;
      pFVar13 = pFVar14;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14611dff5;
      LOCK();
      aVar9 = *(atomic<int> *)&pFVar12->_padding_;
      bVar15 = aVar2 == aVar9;
      if (bVar15) {
        *(atomic<int> *)&pFVar12->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar9 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar9;
    } while (!bVar15);
    pFVar11 = (this->WeakPlaybackState).Object;
    pFVar13 = pFVar12;
    if (pFVar11 == (FSharedPlaybackState *)0x0) goto LAB_14611dff5;
  }
  uVar3 = *(uint *)&(pFVar11->RootInstanceHandle).field_0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar12);
  pFVar12 = (FSharedPlaybackState *)(this->WeakPlaybackState).WeakReferenceCount.ReferenceController
  ;
  pFVar11 = pFVar12;
  if (pFVar12 == (FSharedPlaybackState *)0x0) {
LAB_14611e055:
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pFVar12 = pFVar11;
    if (bVar15) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else {
    aVar2 = *(atomic<int> *)&pFVar12->_padding_;
    do {
      pFVar11 = pFVar14;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14611e055;
      LOCK();
      aVar9 = *(atomic<int> *)&pFVar12->_padding_;
      bVar15 = aVar2 == aVar9;
      if (bVar15) {
        *(atomic<int> *)&pFVar12->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar9 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar9;
    } while (!bVar15);
    pFVar14 = (this->WeakPlaybackState).Object;
    pFVar11 = pFVar12;
    if (pFVar14 == (FSharedPlaybackState *)0x0) goto LAB_14611e055;
  }
  pUVar10 = FWeakObjectPtr::Get(&(pFVar14->WeakLinker).WeakPtr);
  if ((*(longlong *)&pUVar10[0x23].field_0x8 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InstanceRegistry.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                          ,0x96,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar5 = *(longlong *)&pUVar10[0x23].field_0x8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar12);
  this_00 = (FSequenceInstance *)((ulonglong)(uVar3 & 0xffff) * 0x140 + *(longlong *)(lVar5 + 8));
  TUniquePtr<UE::MovieScene::FCompiledDataVolatilityManager,TDefaultDelete<UE::MovieScene::FCompiledDataVolatilityManager>_>
  ::operator=(&this_00->VolatilityManager,&this->PreviousVolatilityManager);
  if (!this_00->bInitialized) {
    `UE::MovieScene::FSequenceInstance::ConditionalRecompile'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  pFVar6 = (this_00->VolatilityManager).Ptr;
  if ((pFVar6 != (FCompiledDataVolatilityManager *)0x0) &&
     (bVar15 = FCompiledDataVolatilityManager::ConditionalRecompile(pFVar6), bVar15)) {
    FSequenceInstance::InvalidateCachedData(this_00,DataChanged);
  }
LAB_14611e150:
  pFVar6 = (this->PreviousVolatilityManager).Ptr;
  if (pFVar6 != (FCompiledDataVolatilityManager *)0x0) {
    FVar7 = (pFVar6->CachedCompilationSignatures).Pairs.AllocatorInstance.SecondaryData;
    if (FVar7 != (ForElementType<TTuple<FMovieSceneSequenceID,FGuid>_>)0x0) {
      FMemory::Free((void *)FVar7);
    }
    pTVar4 = (pFVar6->WeakSharedPlaybackState).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    ::operator_delete(pFVar6,0x160);
  }
  pTVar4 = (this->WeakPlaybackState).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00014611e1c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      return;
    }
  }
  return;
}

