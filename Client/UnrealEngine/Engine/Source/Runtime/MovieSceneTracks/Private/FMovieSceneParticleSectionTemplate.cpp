// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 4

// StaticStruct @ 14658a2f0

UScriptStruct * __cdecl FMovieSceneParticleSectionTemplate::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneParticleSectionTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneParticleSectionTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneParticleSectionTemplate,
                         (UObject *)pUVar1,L"MovieSceneParticleSectionTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneParticleSectionTemplate.OuterSingleton;
}

// GetScriptStructImpl @ 14658a330

UScriptStruct * __thiscall
FMovieSceneParticleSectionTemplate::GetScriptStructImpl(FMovieSceneParticleSectionTemplate *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneParticleSectionTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneParticleSectionTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneParticleSectionTemplate,
                         (UObject *)pUVar1,L"MovieSceneParticleSectionTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneParticleSectionTemplate.OuterSingleton;
}

// Evaluate @ 14658a3b0

void __thiscall
FMovieSceneParticleSectionTemplate::Evaluate
          (FMovieSceneParticleSectionTemplate *this,FMovieSceneEvaluationOperand *param_1,
          FMovieSceneContext *param_2,FPersistentEvaluationData *param_3,
          FMovieSceneExecutionTokens *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  EParticleKey EVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  FFrameTime FVar9;
  int iVar10;
  FParticleTrackExecutionToken *pFVar11;
  TEnumAsByte<ERangeBoundTypes::Type> TVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar17;
  undefined1 *puVar18;
  FFrameNumber FStackX_1c;
  TRange<FFrameNumber> local_a8;
  FParticleTrackExecutionToken local_98;
  FParticleTrackExecutionToken local_80;
  FParticleTrackExecutionToken local_68;
  TRange<FFrameTime> local_48;
  ulonglong uVar16;
  
  if ((int)param_2->_padding_ != 0) {
LAB_14658a712:
    local_68._padding_ = (longlong)&___7FParticleTrackExecutionToken__6B_;
    local_68.ParticleKey = Deactivate;
    local_68.KeyHandle.bIsSet = false;
    FMovieSceneExecutionTokens::Add<FParticleTrackExecutionToken>(param_4,&local_68);
    return;
  }
  local_48.LowerBound._0_8_ = param_2->_padding_;
  local_48._8_8_ = param_2->_padding_;
  local_48.UpperBound.Value = (FFrameTime)param_2->_padding_;
  FVar9 = TRange<FFrameTime>::Size<FFrameTime>(&local_48);
  iVar10 = (int)*(undefined8 *)FVar9;
  if ((iVar10 < 1) &&
     ((iVar10 != 0 ||
      (FStackX_1c.Value = (int)((ulonglong)*(undefined8 *)FVar9 >> 0x20),
      (float)FStackX_1c.Value < 0.0)))) goto LAB_14658a712;
  FMovieSceneEvaluationRange::TimeRangeToNumberRange(&local_a8,(TRange<FFrameTime> *)param_2);
  puVar1 = &(this->ParticleKeys).field_0x70;
  puVar18 = &(this->ParticleKeys).field_0x88;
  if (((puVar1 == (undefined1 *)0x0) || (puVar18 == (undefined1 *)0x0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x2f3,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar4 = *(uint *)&(this->ParticleKeys).field_0x78;
  lVar5 = *(longlong *)puVar1;
  if (((int)uVar4 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar10 = *(int *)&(this->ParticleKeys).field_0x90;
  lVar6 = *(longlong *)puVar18;
  if ((iVar10 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  TVar12 = local_a8.UpperBound.Type.Value;
  if ((TVar12.Value == '\x02') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InUpperBound.IsOpen()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                         ,0x44,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar14 = 0;
  if (TVar12.Value == '\x01') {
    uVar14 = 4;
  }
  iVar17 = *(int *)((longlong)
                    &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteExclusiveUpper(TRangeBound<FFrameNumber>_const&___ptr64)'
                     ::__l2::Offsets + (ulonglong)uVar14);
  if ((TVar12.Value == '\x02') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FStackX_1c = local_a8.UpperBound.Value.Value;
  iVar17 = iVar17 + FStackX_1c.Value;
  iVar13 = 0;
  uVar14 = uVar4;
  if (0 < (int)uVar4) {
    do {
      iVar2 = (uVar14 >> 1) + iVar13;
      if (*(int *)(lVar5 + (longlong)iVar2 * 4) <= iVar17) {
        iVar13 = iVar2 + (uVar14 & 1);
      }
      uVar15 = uVar14 >> 1;
      uVar14 = uVar14 >> 1;
    } while (uVar15 != 0);
  }
  uVar14 = iVar13 - 1;
  uVar16 = (ulonglong)uVar14;
  if (-1 < (int)uVar14) {
    uVar15 = 0;
    if ((int)uVar14 < (int)uVar4) {
      uVar15 = ~uVar14 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (*(int *)(lVar5 + (longlong)(int)uVar14 * 4) < iVar17) goto LAB_14658a5fb;
    uVar16 = (ulonglong)(iVar13 - 2);
  }
  if ((int)uVar16 < 0) {
    return;
  }
LAB_14658a5fb:
  uVar15 = (uint)uVar16;
  uVar14 = 0;
  if ((int)uVar15 < iVar10) {
    uVar14 = ~uVar15 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  EVar3 = *(EParticleKey *)(uVar16 + lVar6);
  if (EVar3 == Trigger) {
    uVar14 = 0;
    if ((int)uVar15 < (int)uVar4) {
      uVar14 = ~uVar15 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    bVar8 = TRange<FFrameNumber>::Contains(&local_a8,(FFrameNumber *)(lVar5 + uVar16 * 4));
    if (!bVar8) {
      return;
    }
    local_98.ParticleKey = Trigger;
    local_98._padding_ = (longlong)&___7FParticleTrackExecutionToken__6B_;
    pFVar11 = &local_98;
    local_98.KeyHandle.bIsSet = false;
  }
  else {
    local_80._padding_ = (longlong)&___7FParticleTrackExecutionToken__6B_;
    pFVar11 = &local_80;
    local_80.KeyHandle.bIsSet = false;
    local_80.ParticleKey = EVar3;
  }
  FMovieSceneExecutionTokens::Add<FParticleTrackExecutionToken>(param_4,pFVar11);
  return;
}

// FMovieSceneParticleSectionTemplate @ 146611100

FMovieSceneParticleSectionTemplate * __thiscall
FMovieSceneParticleSectionTemplate::FMovieSceneParticleSectionTemplate
          (FMovieSceneParticleSectionTemplate *this,UMovieSceneParticleSection *param_1)

{
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMovieSceneParticleSectionTemplate__6B_;
  FMovieSceneParticleChannel::FMovieSceneParticleChannel(&this->ParticleKeys,&param_1->ParticleKeys)
  ;
  return this;
}

