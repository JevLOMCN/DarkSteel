// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaCompositing
// Functions: 5

// StaticStruct @ 14ea62470

UScriptStruct * __cdecl FMovieSceneMediaPlayerPropertySectionTemplate::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaCompositing();
    Z_Registration_Info_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate,
                         (UObject *)pUVar1,L"MovieSceneMediaPlayerPropertySectionTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate.
         OuterSingleton;
}

// Evaluate @ 14ea624b0

void __thiscall
FMovieSceneMediaPlayerPropertySectionTemplate::Evaluate
          (FMovieSceneMediaPlayerPropertySectionTemplate *this,FMovieSceneEvaluationOperand *param_1
          ,FMovieSceneContext *param_2,FPersistentEvaluationData *param_3,
          FMovieSceneExecutionTokens *param_4)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  FMediaPlayerSectionExecutionToken local_48;
  FMediaPlayerSectionPreRollExecutionToken local_28;
  
  local_28.MediaSource = (this->MediaSource).field0_0x0.DebugPtr;
  if (local_28.MediaSource != (UMediaSource *)0x0) {
    iVar9 = (int)param_2->_padding_;
    iVar8 = (int)((ulonglong)param_2->_padding_ >> 0x20);
    if (!param_2->bSectionPreRoll && !param_2->bHasPreRollEndTime) {
      iVar6 = *(int *)((longlong)&param_2->_padding_ + 4);
      iVar3 = (this->SectionStartFrame).Value;
      if (iVar6 == -0x80000000) {
        if ((int)param_2->_padding_ == 0) {
          param_2 = (FMovieSceneContext *)((longlong)&param_2->_padding_ + 4);
          cVar2 = (char)param_2->_padding_;
        }
        else {
          cVar2 = (char)param_2->_padding_;
        }
        if (cVar2 == '\x02') {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)((longlong)&param_2->_padding_ + 4);
      }
      lVar11 = (longlong)iVar9;
      lVar10 = (longlong)(iVar6 - iVar3) * (longlong)iVar8 * 10000000;
      lVar7 = lVar11 / 2;
      if (lVar10 < 0) {
        lVar10 = (lVar10 - lVar7) + 1;
      }
      else {
        lVar10 = lVar7 + lVar10;
      }
      local_48.CurrentTime.Ticks = lVar7 / lVar11 + lVar10 / lVar11;
      local_48._padding_ = (longlong)&___7FMediaPlayerSectionExecutionToken__6B_;
      local_48.MediaSource = *(UMediaSource **)&(this->MediaSource).field0_0x0;
      local_48.bLoop = this->bLoop;
      FMovieSceneExecutionTokens::Add<FMediaPlayerSectionExecutionToken>(param_4,&local_48);
      return;
    }
    if (param_2->bHasPreRollEndTime) {
      iVar6 = (param_2->PrePostRollStartEndTime).Value - (this->SectionStartFrame).Value;
    }
    else {
      iVar6 = 0;
    }
    lVar7 = (longlong)iVar8 * (longlong)iVar6 * 10000000;
    lVar10 = (longlong)iVar9 / 2;
    if (lVar7 < 0) {
      lVar10 = (lVar7 - lVar10) + 1;
    }
    else {
      lVar10 = lVar10 + lVar7;
    }
    local_28.StartTime.Ticks = lVar10 / (longlong)iVar9;
    local_28.bLoop = this->bLoop;
    local_28._padding_ = (longlong)&___7FMediaPlayerSectionPreRollExecutionToken__6B_;
    FMovieSceneExecutionTokens::Add<FMediaPlayerSectionPreRollExecutionToken>(param_4,&local_28);
  }
  return;
}

// GetScriptStructImpl @ 14ea62670

UScriptStruct * __thiscall
FMovieSceneMediaPlayerPropertySectionTemplate::GetScriptStructImpl
          (FMovieSceneMediaPlayerPropertySectionTemplate *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaCompositing();
    Z_Registration_Info_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate,
                         (UObject *)pUVar1,L"MovieSceneMediaPlayerPropertySectionTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate.
         OuterSingleton;
}

// SetupOverrides @ 14ea626b0

void __thiscall
FMovieSceneMediaPlayerPropertySectionTemplate::SetupOverrides
          (FMovieSceneMediaPlayerPropertySectionTemplate *this)

{
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 1;
  return;
}

// FMovieSceneMediaPlayerPropertySectionTemplate @ 14ea67000

FMovieSceneMediaPlayerPropertySectionTemplate * __thiscall
FMovieSceneMediaPlayerPropertySectionTemplate::FMovieSceneMediaPlayerPropertySectionTemplate
          (FMovieSceneMediaPlayerPropertySectionTemplate *this,
          UMovieSceneMediaPlayerPropertySection *param_1,
          UMovieSceneMediaPlayerPropertyTrack *param_2)

{
  FName FVar1;
  UMediaSource *pUVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  FMovieSceneMediaPlayerPropertySectionTemplate *pFVar6;
  FName local_res8;
  FString local_28;
  char local_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  int iStack_14;
  undefined1 uStack_10;
  undefined1 uStack_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined1 uStack_c;
  undefined1 uStack_b;
  undefined1 uStack_a;
  undefined1 uStack_9;
  
  local_res8.ComparisonIndex.Value = *(uint *)&param_2->field_0x128;
  local_res8.Number = *(uint *)&param_2->field_0x12c;
  pFVar5 = ::FName::ToString(&local_res8,&local_28);
  FVar1.ComparisonIndex.Value = *(uint *)&param_2->field_0x120;
  FVar1.Number = *(uint *)&param_2->field_0x124;
  FMovieScenePropertySectionTemplate::FMovieScenePropertySectionTemplate
            ((FMovieScenePropertySectionTemplate *)this,FVar1,pFVar5);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  this->_padding_ = (longlong)&___7FMovieSceneMediaPlayerPropertySectionTemplate__6B_;
  (this->MediaSource).field0_0x0.DebugPtr = (UMediaSource *)0x0;
  (this->SectionStartFrame).Value = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (param_1->MediaSource).field0_0x0.DebugPtr, pUVar2 != (UMediaSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->MediaSource).field0_0x0 = (param_1->MediaSource).field0_0x0;
  this->bLoop = param_1->bLoop;
  if ((char)param_1->_padding_ != '\x02') {
    local_18 = (char)param_1->_padding_;
    uStack_17 = *(undefined1 *)((longlong)&param_1->_padding_ + 1);
    uStack_16 = *(undefined1 *)((longlong)&param_1->_padding_ + 2);
    uStack_15 = *(undefined1 *)((longlong)&param_1->_padding_ + 3);
    iStack_14 = *(int *)((longlong)&param_1->_padding_ + 4);
    uStack_10 = (undefined1)param_1->_padding_;
    uStack_f = *(undefined1 *)((longlong)&param_1->_padding_ + 1);
    uStack_e = *(undefined1 *)((longlong)&param_1->_padding_ + 2);
    uStack_d = *(undefined1 *)((longlong)&param_1->_padding_ + 3);
    uStack_c = *(undefined1 *)((longlong)&param_1->_padding_ + 4);
    uStack_b = *(undefined1 *)((longlong)&param_1->_padding_ + 5);
    uStack_a = *(undefined1 *)((longlong)&param_1->_padding_ + 6);
    uStack_9 = *(undefined1 *)((longlong)&param_1->_padding_ + 7);
    if (local_18 == '\x02') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FMovieSceneMediaPlayerPropertySectionTemplate *)(*pcVar3)();
        return pFVar6;
      }
    }
    (this->SectionStartFrame).Value = iStack_14;
  }
  return this;
}

