// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaCompositing
// Functions: 1

// InitializeFrom<FMovieSceneMediaSectionTemplate,FMovieSceneMediaSectionTemplate> @ 14ea66460

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
TInlineValue<FMovieSceneEvalTemplate,128,8>::
InitializeFrom<FMovieSceneMediaSectionTemplate,FMovieSceneMediaSectionTemplate>
          (TInlineValue<FMovieSceneEvalTemplate,128,8> *this,
          FMovieSceneMediaSectionTemplate *param_1)

{
  undefined1 uVar1;
  UMediaSoundComponent *pUVar2;
  UMediaSource *pUVar3;
  UMediaTexture *pUVar4;
  UMediaPlayer *pUVar5;
  UMovieSceneMediaSection *pUVar6;
  code *pcVar7;
  undefined8 uVar8;
  longlong lVar9;
  bool bVar10;
  TInlineValue<FMovieSceneEvalTemplate,128,8> *pTVar11;
  
  this->bInline = false;
  pTVar11 = FMemory::Malloc(0x1a8,8);
  this->bIsValid = true;
  *(TInlineValue<FMovieSceneEvalTemplate,128,8> **)(this->Data).Pad = pTVar11;
  if (this->bInline) {
    pTVar11 = this;
  }
  *(undefined ***)(pTVar11->Data).Pad = &___7FMovieSceneEvalTemplateBase__6B_;
  lVar9 = param_1->_padding_;
  *(undefined ***)(pTVar11->Data).Pad = &___7FMovieSceneEvalTemplate__6B_;
  (pTVar11->Data).Pad[8] = (uchar)lVar9;
  (pTVar11->Data).Pad[0x10] = (uchar)param_1->_padding_;
  *(undefined8 *)((pTVar11->Data).Pad + 0x14) = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  *(undefined ***)(pTVar11->Data).Pad = &___7FMovieSceneMediaSectionTemplate__6B_;
  pUVar2 = (param_1->Params).MediaSoundComponent.field0_0x0.DebugPtr;
  *(UMediaSoundComponent **)((pTVar11->Data).Pad + 0x20) = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UMediaSoundComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  pUVar3 = (param_1->Params).MediaSource.field0_0x0.DebugPtr;
  *(UMediaSource **)((pTVar11->Data).Pad + 0x28) = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UMediaSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  uVar8 = *(undefined8 *)&(param_1->Params).MediaSourceProxy.Guid.C;
  *(undefined8 *)((pTVar11->Data).Pad + 0x30) =
       *(undefined8 *)&(param_1->Params).MediaSourceProxy.Guid;
  *(undefined8 *)((pTVar11->Data).Pad + 0x38) = uVar8;
  *(undefined8 *)((pTVar11->Data).Pad + 0x40) =
       *(undefined8 *)&(param_1->Params).MediaSourceProxy.SequenceID;
  *(int *)((pTVar11->Data).Pad + 0x48) = (param_1->Params).MediaSourceProxyIndex;
  pUVar4 = (param_1->Params).MediaTexture.field0_0x0.DebugPtr;
  *(UMediaTexture **)((pTVar11->Data).Pad + 0x50) = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UMediaTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  pUVar5 = (param_1->Params).MediaPlayer.field0_0x0.DebugPtr;
  *(UMediaPlayer **)((pTVar11->Data).Pad + 0x58) = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UMediaPlayer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  *(int *)((pTVar11->Data).Pad + 0x60) = (param_1->Params).SectionStartFrame.Value;
  *(int *)((pTVar11->Data).Pad + 100) = (param_1->Params).SectionEndFrame.Value;
  (pTVar11->Data).Pad[0x68] = (param_1->Params).bLooping;
  *(int *)((pTVar11->Data).Pad + 0x6c) = (param_1->Params).StartFrameOffset.Value;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((pTVar11->Data).Pad + 0x70),
             &(param_1->Params).ProxyTextureBlend);
  *(FMediaSourceCacheSettings *)pTVar11[3].Data.Pad = (param_1->Params).CacheSettings;
  pUVar6 = (param_1->MediaSection).field0_0x0.DebugPtr;
  *(UMovieSceneMediaSection **)(pTVar11[3].Data.Pad + 8) = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UMovieSceneMediaSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  if (!this->bIsValid) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pTVar11 = this;
  if (!this->bInline) {
    pTVar11 = *(TInlineValue<FMovieSceneEvalTemplate,128,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<FMovieSceneEvalTemplate,128,8> **)(this->Data).Pad;
  }
  if (pTVar11 != this) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  return;
}

