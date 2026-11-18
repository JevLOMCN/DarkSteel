// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaCompositing
// Functions: 3

// FMovieSceneMediaPlayerStoreContainer @ 14ea671e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FMovieSceneMediaPlayerStoreContainer * __thiscall
FMovieSceneMediaPlayerStoreContainer::FMovieSceneMediaPlayerStoreContainer
          (FMovieSceneMediaPlayerStoreContainer *this)

{
  TSharedPtr<FMovieSceneMediaPlayerStore,1> *pTVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  FDelegateHandle FVar6;
  FMovieSceneMediaPlayerStoreContainer *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  FMovieSceneMediaPlayerStore *pFVar9;
  FMovieSceneMediaPlayerStore *local_38;
  FSharedReferencer<1> FStack_30;
  
  pTVar1 = &this->MediaPlayerStore;
  this->_padding_ = (longlong)&___7FMovieSceneMediaPlayerStoreContainer__6B_;
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  pTVar1->Object = (FMovieSceneMediaPlayerStore *)0x0;
  (this->MediaPlayerStore).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar5 = ::operator_new(200);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    local_38 = ___xmm_00000000000000000000000000000010;
    pFVar9 = (FMovieSceneMediaPlayerStore *)&DAT_00000010;
    FStack_30.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFMovieSceneMediaPlayerStore___00_SharedPointerInternals__6B_
    ;
    pTVar5[2]._padding_ = 0;
    pTVar5[1]._padding_ = (longlong)&___7FMovieSceneMediaPlayerStore__6B_;
    pTVar5[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[3].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar5[4]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar5[4]._padding_ + 4) = 0x80;
    pTVar5[4].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar5[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[5].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar5[6]._padding_ = 0;
    pTVar5[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[7]._padding_ = 0;
    pTVar5[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[8].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar5[9]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar5[9]._padding_ + 4) = 0x80;
    pTVar5[9].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar5[9].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[10].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[10].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar5[0xb]._padding_ = 0;
    pTVar5[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[0xb].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[0xc]._padding_ = 0;
    FVar6 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
            AddRaw<FMovieSceneMediaPlayerStore>
                      ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                        *)&FCoreDelegates::OnEndFrame,
                       (FMovieSceneMediaPlayerStore *)&stack0x00000008,(pmf_e3b72090)(pTVar5 + 1));
    uVar2 = *(undefined8 *)FVar6.ID;
    pTVar5[0xb].SharedReferenceCount = (atomic<int>)(int)uVar2;
    pTVar5[0xb].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar2 >> 0x20);
    FVar6 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
            AddRaw<FMovieSceneMediaPlayerStore>
                      ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                        *)&FCoreDelegates::OnPreExit,(FMovieSceneMediaPlayerStore *)&stack0x00000010
                       ,(pmf_e3b72090)(pTVar5 + 1));
    pFVar9 = (FMovieSceneMediaPlayerStore *)(pTVar5 + 1);
    pTVar5[0xc]._padding_ = *(longlong *)FVar6.ID;
    if (pFVar9 == (FMovieSceneMediaPlayerStore *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FMovieSceneMediaPlayerStoreContainer *)(*pcVar3)();
        return pFVar7;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    FStack_30.ReferenceController = pTVar5;
    pTVar8 = pTVar5;
    local_38 = pFVar9;
  }
  if (pTVar1 != (TSharedPtr<FMovieSceneMediaPlayerStore,1> *)&local_38) {
    pTVar1->Object = pFVar9;
    local_38 = (FMovieSceneMediaPlayerStore *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MediaPlayerStore).SharedReferenceCount,&FStack_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return this;
}

// ~FMovieSceneMediaPlayerStoreContainer @ 14ea68110

void __thiscall
FMovieSceneMediaPlayerStoreContainer::~FMovieSceneMediaPlayerStoreContainer
          (FMovieSceneMediaPlayerStoreContainer *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MediaPlayerStore).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IPersistentEvaluationData__6B_;
  return;
}

// GetOrAdd @ 14ea6c6d0

FMovieSceneMediaPlayerStoreContainer * __cdecl
FMovieSceneMediaPlayerStoreContainer::GetOrAdd(FPersistentEvaluationData *param_1)

{
  longlong lVar1;
  TMap<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>_>
  *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FMovieSceneMediaPlayerStoreContainer *pFVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  
  if ((param_1->SharedData ==
       (TMap<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>_>
        *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PersistentEvaluationData.h"
                         ,199,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FMovieSceneMediaPlayerStoreContainer *)(*pcVar3)();
    return pFVar6;
  }
  pTVar2 = param_1->SharedData;
  uVar5 = ::GetTypeHash(&UE::MediaCompositing::Private::MediaPlayerDataContainerSharedKey);
  if (*(int *)&pTVar2->field_0x8 != *(int *)&pTVar2->field_0x34) {
    puVar8 = *(undefined1 **)&pTVar2->field_0x40;
    if (*(undefined1 **)&pTVar2->field_0x40 == (undefined1 *)0x0) {
      puVar8 = &pTVar2->field_0x38;
    }
    iVar9 = *(int *)(puVar8 + (ulonglong)(*(int *)&pTVar2->field_0x48 - 1U & uVar5) * 4);
    if (iVar9 != -1) {
      do {
        lVar1 = *(longlong *)pTVar2 + (longlong)iVar9 * 0x28;
        if (((*(uint *)(*(longlong *)pTVar2 + (longlong)iVar9 * 0x28) ==
              UE::MediaCompositing::Private::MediaPlayerDataContainerSharedKey.UniqueId.UniqueId) &&
            (*(uint *)(lVar1 + 0x14) ==
             UE::MediaCompositing::Private::MediaPlayerDataContainerSharedKey.Operand.SequenceID.
             Value)) &&
           (((UE::MediaCompositing::Private::MediaPlayerDataContainerSharedKey.Operand.
              ObjectBindingID.D == *(uint *)(lVar1 + 0x10) &&
             UE::MediaCompositing::Private::MediaPlayerDataContainerSharedKey.Operand.
             ObjectBindingID.C == *(uint *)(lVar1 + 0xc)) &&
            UE::MediaCompositing::Private::MediaPlayerDataContainerSharedKey.Operand.ObjectBindingID
            .B == *(uint *)(lVar1 + 8)) &&
            UE::MediaCompositing::Private::MediaPlayerDataContainerSharedKey.Operand.ObjectBindingID
            .A == *(uint *)(lVar1 + 4))) {
          if (iVar9 != -1) {
            puVar7 = (undefined8 *)(lVar1 + 0x18);
            if (lVar1 == 0) {
              puVar7 = (undefined8 *)0x0;
            }
            if (puVar7 != (undefined8 *)0x0) {
              return (FMovieSceneMediaPlayerStoreContainer *)*puVar7;
            }
          }
          break;
        }
        iVar9 = *(int *)(lVar1 + 0x20);
      } while (iVar9 != -1);
    }
  }
  pFVar6 = FPersistentEvaluationData::Add<FMovieSceneMediaPlayerStoreContainer>
                     (param_1,&UE::MediaCompositing::Private::MediaPlayerDataContainerSharedKey);
  return pFVar6;
}

