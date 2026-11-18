// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionTracks
// Functions: 1

// Execute @ 14e7fd440

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGeometryCollectionExecutionToken::Execute
          (FGeometryCollectionExecutionToken *this,FMovieSceneContext *param_1,
          FMovieSceneEvaluationOperand *param_2,FPersistentEvaluationData *param_3,
          IMovieScenePlayer *param_4)

{
  int iVar1;
  FFrameRate FVar2;
  code *pcVar3;
  bool bVar4;
  UObject *this_00;
  UClass *pUVar5;
  UGeometryCollectionCache *this_01;
  FMovieSceneAnimTypeID FVar6;
  FMovieSceneContext *pFVar7;
  FWeakObjectPtr *pFVar8;
  float fVar9;
  FFrameTime local_res18;
  IMovieScenePreAnimatedTokenProducer local_68;
  FWeakObjectPtr local_60;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_58;
  FString local_48;
  FString local_38;
  
  IMovieScenePlayer::FindBoundObjects
            (param_4,&local_58,&param_2->ObjectBindingID,&param_2->SequenceID);
  pFVar8 = &(local_58.DataPtr)->WeakPtr;
  do {
    if (pFVar8 == &local_58.DataPtr[local_58.ArrayNum].WeakPtr) {
      return;
    }
    local_60 = *pFVar8;
    this_00 = FWeakObjectPtr::Get(&local_60);
    if (this_00 != (UObject *)0x0) {
      pUVar5 = Z_Construct_UClass_UGeometryCollectionComponent_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if (((iVar1 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar5->_padding_)) &&
         (this_01 = (UGeometryCollectionCache *)
                    FSoftObjectPath::ResolveObject((FSoftObjectPath *)&(this->Params)._padding_),
         this_01 != (UGeometryCollectionCache *)0x0)) {
        pUVar5 = Z_Construct_UClass_UGeometryCollectionCache_NoRegister();
        iVar1 = (int)pUVar5->_padding_;
        if ((iVar1 <= *(int *)(this_01->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar5->_padding_)) {
          bVar4 = UGeometryCollectionCache::CompatibleWithForPlayback
                            (this_01,*(UGeometryCollection **)(this_00 + 0x24));
          if (bVar4) {
            local_68 = (IMovieScenePreAnimatedTokenProducer)
                       &___7FPreAnimatedGeometryCollectionTokenProducer__6B_;
            FVar6.ID = TMovieSceneAnimTypeID<FPreAnimatedGeometryCollectionTokenProducer,0>::
                       CachedID;
            if (TMovieSceneAnimTypeID<FPreAnimatedGeometryCollectionTokenProducer,0>::CachedID == 0)
            {
              FVar6.ID = FMovieSceneAnimTypeID::Initialize
                                   (&TMovieSceneAnimTypeID<FPreAnimatedGeometryCollectionTokenProducer,0>
                                     ::CachedID,0);
            }
            FMovieScenePreAnimatedState::SavePreAnimatedState
                      (&param_4->PreAnimatedState,this_00,FVar6,&local_68);
            this_00[0x24].field_0x1a = 2;
            this_00[0x31].field_0xc = 1;
            this_00[0x28].field_0x18 = 0;
            local_68 = (IMovieScenePreAnimatedTokenProducer)
                       &___7IMovieScenePreAnimatedTokenProducer__6B_;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this_01);
            }
            *(UGeometryCollectionCache **)&this_00[0x28].field_0x20 = this_01;
            local_res18.FrameNumber.Value = *(uint *)((longlong)&param_1->_padding_ + 4);
            FVar2 = (FFrameRate)param_1->_padding_;
            if (local_res18.FrameNumber.Value == 0x80000000) {
              if ((int)param_1->_padding_ == 0) {
                pFVar7 = (FMovieSceneContext *)((longlong)&param_1->_padding_ + 4);
                if ((*(char *)((longlong)&param_1->_padding_ + 4) == '\x02') &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Type != ERangeBoundTypes::Open",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                       ,99,L""), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              else {
                pFVar7 = param_1;
                if (((char)param_1->_padding_ == '\x02') &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Type != ERangeBoundTypes::Open",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                       ,99,L""), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              local_res18 = *(FFrameTime *)((longlong)&pFVar7->_padding_ + 4);
            }
            else {
              local_res18.SubFrame = 0.0;
            }
            fVar9 = FMovieSceneGeometryCollectionSectionTemplateParameters::MapTimeToAnimation
                              (&this->Params,local_res18,FVar2);
            *(float *)&this_00[0x31].field_0x8 = fVar9;
          }
          else if (2 < (byte)LogMovieScene._0_1_) {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)this_00,&local_38,(UObject *)0x0,None);
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)this_01,&local_48,(UObject *)0x0,None);
            UE::Logging::Private::BasicLog<3>
                      (&`public:_virtual_void___cdecl_FGeometryCollectionExecutionToken::Execute(FMovieSceneContext_const&___ptr64,FMovieSceneEvaluationOperand_const&___ptr64,FPersistentEvaluationData&___ptr64,IMovieScenePlayer&___ptr64)___ptr64'
                        ::__l16::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
            if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_38.Data.AllocatorInstance.Data);
            }
          }
        }
      }
    }
    pFVar8 = pFVar8 + 1;
  } while( true );
}

