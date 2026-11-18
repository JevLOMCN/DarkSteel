// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaCompositing
// Functions: 2

// StaticStruct @ 14ea62b30

UScriptStruct * __cdecl FMovieSceneMediaSectionParams::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneMediaSectionParams.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaCompositing();
    Z_Registration_Info_UScriptStruct_FMovieSceneMediaSectionParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams,(UObject *)pUVar1,
                         L"MovieSceneMediaSectionParams");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneMediaSectionParams.OuterSingleton;
}

// operator= @ 14ea68230

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

FMovieSceneMediaSectionParams * __thiscall
FMovieSceneMediaSectionParams::operator=
          (FMovieSceneMediaSectionParams *this,FMovieSceneMediaSectionParams *param_1)

{
  UMediaSoundComponent *pUVar1;
  UMediaSource *pUVar2;
  UMediaTexture *pUVar3;
  UMediaPlayer *pUVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->MediaSoundComponent).field0_0x0.DebugPtr,
     pUVar1 != (UMediaSoundComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->MediaSoundComponent).field0_0x0 = (param_1->MediaSoundComponent).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (param_1->MediaSource).field0_0x0.DebugPtr, pUVar2 != (UMediaSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->MediaSource).field0_0x0 = (param_1->MediaSource).field0_0x0;
  uVar5 = (param_1->MediaSourceProxy).Guid.B;
  uVar6 = (param_1->MediaSourceProxy).Guid.C;
  uVar7 = (param_1->MediaSourceProxy).Guid.D;
  (this->MediaSourceProxy).Guid.A = (param_1->MediaSourceProxy).Guid.A;
  (this->MediaSourceProxy).Guid.B = uVar5;
  (this->MediaSourceProxy).Guid.C = uVar6;
  (this->MediaSourceProxy).Guid.D = uVar7;
  iVar8 = (param_1->MediaSourceProxy).ResolveParentIndex;
  (this->MediaSourceProxy).SequenceID = (param_1->MediaSourceProxy).SequenceID;
  (this->MediaSourceProxy).ResolveParentIndex = iVar8;
  this->MediaSourceProxyIndex = param_1->MediaSourceProxyIndex;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 = (param_1->MediaTexture).field0_0x0.DebugPtr, pUVar3 != (UMediaTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->MediaTexture).field0_0x0 = (param_1->MediaTexture).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 = (param_1->MediaPlayer).field0_0x0.DebugPtr, pUVar4 != (UMediaPlayer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->MediaPlayer).field0_0x0 = (param_1->MediaPlayer).field0_0x0;
  (this->SectionStartFrame).Value = (param_1->SectionStartFrame).Value;
  (this->SectionEndFrame).Value = (param_1->SectionEndFrame).Value;
  this->bLooping = param_1->bLooping;
  (this->StartFrameOffset).Value = (param_1->StartFrameOffset).Value;
  FMovieSceneFloatChannel::operator=(&this->ProxyTextureBlend,&param_1->ProxyTextureBlend);
  this->CacheSettings = param_1->CacheSettings;
  return this;
}

