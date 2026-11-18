// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCaching
// Functions: 1

// Execute @ 14daf4aa0

void __thiscall
FChaosCacheExecutionToken::Execute
          (FChaosCacheExecutionToken *this,FMovieSceneContext *param_1,
          FMovieSceneEvaluationOperand *param_2,FPersistentEvaluationData *param_3,
          IMovieScenePlayer *param_4)

{
  int iVar1;
  UChaosCacheCollection *pUVar2;
  UChaosCacheCollection *pUVar3;
  FFrameRate FVar4;
  code *pcVar5;
  bool bVar6;
  AChaosCacheManager *this_00;
  UClass *pUVar7;
  FMovieSceneAnimTypeID FVar8;
  FMovieSceneContext *pFVar9;
  FWeakObjectPtr *pFVar10;
  float fVar11;
  FFrameTime local_res18;
  IMovieScenePreAnimatedTokenProducer local_48;
  FWeakObjectPtr local_40;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_38;
  
  if ((((param_2->ObjectBindingID).D != 0 || (param_2->ObjectBindingID).C != 0) ||
      (param_2->ObjectBindingID).B != 0) || (param_2->ObjectBindingID).A != 0) {
    IMovieScenePlayer::FindBoundObjects
              (param_4,&local_38,&param_2->ObjectBindingID,&param_2->SequenceID);
    for (pFVar10 = &(local_38.DataPtr)->WeakPtr;
        pFVar10 != &local_38.DataPtr[local_38.ArrayNum].WeakPtr; pFVar10 = pFVar10 + 1) {
      local_40 = *pFVar10;
      this_00 = (AChaosCacheManager *)FWeakObjectPtr::Get(&local_40);
      if (this_00 != (AChaosCacheManager *)0x0) {
        pUVar7 = Z_Construct_UClass_AActor_NoRegister();
        iVar1 = (int)pUVar7->_padding_;
        if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar7->_padding_)) {
          pUVar7 = AChaosCacheManager::StaticClass();
          iVar1 = (int)pUVar7->_padding_;
          if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
             (((longlong *)
               *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
               &pUVar7->_padding_ &&
              (pUVar2 = (this_00->CacheCollection).field0_0x0.DebugPtr,
              pUVar2 != (UChaosCacheCollection *)0x0)))) {
            pUVar3 = (this->Params).ChaosCacheParams.CacheCollection.field0_0x0.DebugPtr;
            if ((pUVar3 == (UChaosCacheCollection *)0x0) || (pUVar3 == pUVar2)) {
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)pUVar2);
              }
              (this->Params).ChaosCacheParams.CacheCollection.field0_0x0 =
                   (this_00->CacheCollection).field0_0x0;
            }
            else {
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)pUVar3);
              }
              (this_00->CacheCollection).field0_0x0 =
                   (this->Params).ChaosCacheParams.CacheCollection.field0_0x0;
            }
            local_48 = (IMovieScenePreAnimatedTokenProducer)
                       &___7FPreAnimatedChaosCacheTokenProducer__6B_;
            FVar8.ID = TMovieSceneAnimTypeID<FPreAnimatedChaosCacheTokenProducer,0>::CachedID;
            if (TMovieSceneAnimTypeID<FPreAnimatedChaosCacheTokenProducer,0>::CachedID == 0) {
              FVar8.ID = FMovieSceneAnimTypeID::Initialize
                                   (&TMovieSceneAnimTypeID<FPreAnimatedChaosCacheTokenProducer,0>::
                                     CachedID,0);
            }
            FMovieScenePreAnimatedState::SavePreAnimatedState
                      (&param_4->PreAnimatedState,(UObject *)this_00,FVar8,&local_48);
            this_00->CacheMode = None;
            this_00->StartMode = Timed;
            local_res18.FrameNumber.Value = *(uint *)((longlong)&param_1->_padding_ + 4);
            FVar4 = (FFrameRate)param_1->_padding_;
            local_48 = (IMovieScenePreAnimatedTokenProducer)
                       &___7IMovieScenePreAnimatedTokenProducer__6B_;
            if (local_res18.FrameNumber.Value == 0x80000000) {
              if ((int)param_1->_padding_ == 0) {
                pFVar9 = (FMovieSceneContext *)((longlong)&param_1->_padding_ + 4);
                if ((*(char *)((longlong)&param_1->_padding_ + 4) == '\x02') &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Type != ERangeBoundTypes::Open",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                       ,99,L""), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
              }
              else {
                pFVar9 = param_1;
                if (((char)param_1->_padding_ == '\x02') &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Type != ERangeBoundTypes::Open",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                       ,99,L""), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
              }
              local_res18 = *(FFrameTime *)((longlong)&pFVar9->_padding_ + 4);
            }
            else {
              local_res18.SubFrame = 0.0;
            }
            fVar11 = UChaosCacheCollection::GetMaxDuration
                               ((this_00->CacheCollection).field0_0x0.DebugPtr);
            fVar11 = FMovieSceneBaseCacheSectionTemplateParameters::MapTimeToAnimation
                               ((FMovieSceneBaseCacheSectionTemplateParameters *)&this->Params,
                                (FMovieSceneBaseCacheParams *)&(this->Params).ChaosCacheParams,
                                fVar11,local_res18,FVar4);
            this_00->StartTime = fVar11;
            if (this_00->CacheMode != Record) {
              AChaosCacheManager::OnStartFrameChanged(this_00,(double)fVar11);
            }
          }
        }
      }
    }
  }
  return;
}

