// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 4

// AddKey<FMovieSceneFloatChannel,float> @ 146885160

FSequenceSectionBuilder<UMovieSceneFloatTrack> * __thiscall
UE::MovieScene::Test::FSequenceSectionBuilder<UMovieSceneFloatTrack>::
AddKey<FMovieSceneFloatChannel,float>
          (FSequenceSectionBuilder<UMovieSceneFloatTrack> *this,int param_1,FFrameNumber param_2,
          float param_3,EMovieSceneKeyInterpolation param_4)

{
  FMovieSceneChannelProxy *this_00;
  FMovieSceneFloatChannel *pFVar1;
  FSequenceSectionBuilder<UMovieSceneFloatTrack> *pFVar2;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> local_38;
  TArray<float,TSizedDefaultAllocator<32>_> local_28 [2];
  
  this_00 = UMovieSceneSection::GetChannelProxy((this->Section).field0_0x0.DebugPtr);
  pFVar1 = FMovieSceneChannelProxy::GetChannel<FMovieSceneFloatChannel>(this_00,param_1);
  local_28[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28[0].ArrayNum = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,1,0,&local_28[0].AllocatorInstance,1,&local_28[0].ArrayMax);
  *(float *)local_28[0].AllocatorInstance.Data = param_3;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,1,0,&local_38.AllocatorInstance,1,&local_38.ArrayMax);
  *(int *)local_38.AllocatorInstance.Data = param_2.Value;
  pFVar2 = AddKeys<FMovieSceneFloatChannel,float>(this,pFVar1,&local_38,local_28,param_4);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (local_28[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].AllocatorInstance.Data);
  }
  return pFVar2;
}

// AddKeys<FMovieSceneFloatChannel,float> @ 1468852a0

FSequenceSectionBuilder<UMovieSceneFloatTrack> * __thiscall
UE::MovieScene::Test::FSequenceSectionBuilder<UMovieSceneFloatTrack>::
AddKeys<FMovieSceneFloatChannel,float>
          (FSequenceSectionBuilder<UMovieSceneFloatTrack> *this,FMovieSceneFloatChannel *param_1,
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3,EMovieSceneKeyInterpolation param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSequenceSectionBuilder<UMovieSceneFloatTrack> *pFVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  wchar_t *pwVar8;
  float in_XMM2_Da;
  
  pwVar8 = (wchar_t *)param_3;
  if (param_2->ArrayNum != param_3->ArrayNum) {
    pwVar8 = (wchar_t *)0x10f;
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6892070475850055951>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Tests\\MovieSceneTestDataBuilders.h"
                       ,0x10f,"InTimes.Num() == InValues.Num()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSequenceSectionBuilder<UMovieSceneFloatTrack> *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar7 = 0;
  iVar5 = param_3->ArrayNum;
  if (param_2->ArrayNum < param_3->ArrayNum) {
    iVar5 = param_2->ArrayNum;
  }
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar7 < param_3->ArrayNum) {
        uVar3 = ~uVar7 >> 0x1f;
      }
      if (uVar3 == 0) {
        pwVar8 = L"Array index out of bounds: %lld into an array of size %lld";
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FSequenceSectionBuilder<UMovieSceneFloatTrack> *)(*pcVar1)();
          return pFVar4;
        }
      }
      uVar3 = 0;
      if ((int)uVar7 < param_2->ArrayNum) {
        uVar3 = ~uVar7 >> 0x1f;
      }
      if (uVar3 == 0) {
        pwVar8 = L"Array index out of bounds: %lld into an array of size %lld";
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FSequenceSectionBuilder<UMovieSceneFloatTrack> *)(*pcVar1)();
          return pFVar4;
        }
      }
      AddKeyToChannel((FMovieSceneFloatChannel *)&stack0x00000018,(FFrameNumber)(int)param_1,
                      in_XMM2_Da,(EMovieSceneKeyInterpolation)pwVar8);
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar5);
    return this;
  }
  return this;
}

// SetEaseIn @ 1468ce8f0

FSequenceSectionBuilder<UMovieSceneFloatTrack> * __thiscall
UE::MovieScene::Test::FSequenceSectionBuilder<UMovieSceneFloatTrack>::SetEaseIn
          (FSequenceSectionBuilder<UMovieSceneFloatTrack> *this,int param_1,
          EMovieSceneBuiltInEasing param_2)

{
  int iVar1;
  UMovieSceneSection *pUVar2;
  longlong lVar3;
  UClass *pUVar4;
  
  pUVar2 = (this->Section).field0_0x0.DebugPtr;
  lVar3 = *(longlong *)&(pUVar2->Easing).EaseIn;
  (pUVar2->Easing).bManualEaseIn = true;
  (pUVar2->Easing).ManualEaseInDuration = param_1;
  if (lVar3 != 0) {
    pUVar4 = Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      *(EMovieSceneBuiltInEasing *)(lVar3 + 0x30) = param_2;
      return this;
    }
  }
  return this;
}

// SetEaseOut @ 1468ce980

FSequenceSectionBuilder<UMovieSceneFloatTrack> * __thiscall
UE::MovieScene::Test::FSequenceSectionBuilder<UMovieSceneFloatTrack>::SetEaseOut
          (FSequenceSectionBuilder<UMovieSceneFloatTrack> *this,int param_1,
          EMovieSceneBuiltInEasing param_2)

{
  int iVar1;
  UMovieSceneSection *pUVar2;
  longlong lVar3;
  UClass *pUVar4;
  
  pUVar2 = (this->Section).field0_0x0.DebugPtr;
  lVar3 = *(longlong *)&(pUVar2->Easing).EaseOut;
  (pUVar2->Easing).bManualEaseOut = true;
  (pUVar2->Easing).ManualEaseOutDuration = param_1;
  if (lVar3 != 0) {
    pUVar4 = Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      *(EMovieSceneBuiltInEasing *)(lVar3 + 0x30) = param_2;
      return this;
    }
  }
  return this;
}

