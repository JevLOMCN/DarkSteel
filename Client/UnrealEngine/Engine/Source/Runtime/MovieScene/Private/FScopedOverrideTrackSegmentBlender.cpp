// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// FScopedOverrideTrackSegmentBlender @ 146181e20

FScopedOverrideTrackSegmentBlender * __thiscall
FScopedOverrideTrackSegmentBlender::FScopedOverrideTrackSegmentBlender
          (FScopedOverrideTrackSegmentBlender *this,
          TInlineValue<FMovieSceneTrackSegmentBlender,16,8> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FScopedOverrideTrackSegmentBlender *pFVar3;
  TInlineValue<FMovieSceneTrackSegmentBlender,16,8> *pTVar4;
  
  if (FGetTrackSegmentBlender::Override.bIsValid) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GetTrackSegmentBlender.Override.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieSceneEvaluationTrack.cpp"
                       ,0x2a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FScopedOverrideTrackSegmentBlender *)(*pcVar1)();
      return pFVar3;
    }
    if (FGetTrackSegmentBlender::Override.bIsValid) {
      pTVar4 = &FGetTrackSegmentBlender::Override;
      if (!FGetTrackSegmentBlender::Override.bInline) {
        pTVar4 = (TInlineValue<FMovieSceneTrackSegmentBlender,16,8> *)
                 FGetTrackSegmentBlender::Override.Data.Pad._0_8_;
      }
      FGetTrackSegmentBlender::Override.bIsValid = false;
      (*(code *)**(undefined8 **)(pTVar4->Data).Pad)(pTVar4,0);
      if (!FGetTrackSegmentBlender::Override.bInline) {
        FMemory::Free((void *)FGetTrackSegmentBlender::Override.Data.Pad._0_8_);
      }
    }
  }
  if (param_1->bIsValid) {
    FGetTrackSegmentBlender::Override.bIsValid = true;
    param_1->bIsValid = false;
    FGetTrackSegmentBlender::Override._16_1_ =
         param_1->field_0x10 & 2 | FGetTrackSegmentBlender::Override._16_1_ & 0xfd;
    FGetTrackSegmentBlender::Override.Data.Pad = *&(param_1->Data).Pad;
  }
  return this;
}

// ~FScopedOverrideTrackSegmentBlender @ 1461859f0

void __thiscall
FScopedOverrideTrackSegmentBlender::~FScopedOverrideTrackSegmentBlender
          (FScopedOverrideTrackSegmentBlender *this)

{
  TInlineValue<FMovieSceneTrackSegmentBlender,16,8> *pTVar1;
  
  if (FGetTrackSegmentBlender::Override.bIsValid) {
    pTVar1 = &FGetTrackSegmentBlender::Override;
    if (!FGetTrackSegmentBlender::Override.bInline) {
      pTVar1 = (TInlineValue<FMovieSceneTrackSegmentBlender,16,8> *)
               FGetTrackSegmentBlender::Override.Data.Pad._0_8_;
    }
    FGetTrackSegmentBlender::Override.bIsValid = false;
    (*(code *)**(undefined8 **)(pTVar1->Data).Pad)(pTVar1,0);
    if (!FGetTrackSegmentBlender::Override.bInline) {
      FMemory::Free((void *)FGetTrackSegmentBlender::Override.Data.Pad._0_8_);
      return;
    }
  }
  return;
}

