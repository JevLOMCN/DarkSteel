// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCacheTracks
// Functions: 4

// StaticStruct @ 14cd87050

UScriptStruct * __cdecl FMovieSceneGeometryCacheSectionTemplate::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCacheTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate,
                         (UObject *)pUVar1,L"MovieSceneGeometryCacheSectionTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate.OuterSingleton;
}

// GetScriptStructImpl @ 14cd87090

UScriptStruct * __thiscall
FMovieSceneGeometryCacheSectionTemplate::GetScriptStructImpl
          (FMovieSceneGeometryCacheSectionTemplate *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCacheTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate,
                         (UObject *)pUVar1,L"MovieSceneGeometryCacheSectionTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate.OuterSingleton;
}

// Evaluate @ 14cd870d0

void __thiscall
FMovieSceneGeometryCacheSectionTemplate::Evaluate
          (FMovieSceneGeometryCacheSectionTemplate *this,FMovieSceneEvaluationOperand *param_1,
          FMovieSceneContext *param_2,FPersistentEvaluationData *param_3,
          FMovieSceneExecutionTokens *param_4)

{
  undefined1 local_68 [64];
  void *local_28;
  FFrameNumber local_18;
  FFrameNumber local_14;
  
  local_68._0_8_ = &___7FGeometryCacheExecutionToken__6B_;
  FMovieSceneGeometryCacheParams::FMovieSceneGeometryCacheParams
            ((FMovieSceneGeometryCacheParams *)(local_68 + 8),
             (FMovieSceneGeometryCacheParams *)&this->Params);
  local_18.Value = (this->Params).SectionStartTime.Value;
  local_14.Value = (this->Params).SectionEndTime.Value;
  FMovieSceneExecutionTokens::Add<FGeometryCacheExecutionToken>
            (param_4,(FGeometryCacheExecutionToken *)local_68);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// FMovieSceneGeometryCacheSectionTemplate @ 14cd88170

FMovieSceneGeometryCacheSectionTemplate * __thiscall
FMovieSceneGeometryCacheSectionTemplate::FMovieSceneGeometryCacheSectionTemplate
          (FMovieSceneGeometryCacheSectionTemplate *this,UMovieSceneGeometryCacheSection *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FMovieSceneGeometryCacheSectionTemplate *pFVar4;
  int iVar5;
  int iVar6;
  
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMovieSceneGeometryCacheSectionTemplate__6B_;
  iVar6 = (int)((ulonglong)param_1->_padding_ >> 0x20);
  cVar2 = (char)param_1->_padding_;
  if (cVar2 == '\x01') {
    iVar6 = iVar6 + 1;
  }
  else if (cVar2 == '\x02') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMovieSceneGeometryCacheSectionTemplate *)(*pcVar1)();
      return pFVar4;
    }
  }
  iVar5 = (int)((ulonglong)param_1->_padding_ >> 0x20);
  cVar2 = (char)param_1->_padding_;
  if (cVar2 != '\x01') {
    if (cVar2 == '\x02') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FMovieSceneGeometryCacheSectionTemplate *)(*pcVar1)();
        return pFVar4;
      }
    }
    iVar5 = iVar5 + 1;
  }
  FMovieSceneGeometryCacheParams::FMovieSceneGeometryCacheParams
            ((FMovieSceneGeometryCacheParams *)&this->Params,&param_1->Params);
  (this->Params).SectionStartTime.Value = iVar5;
  (this->Params).SectionEndTime.Value = iVar6;
  return this;
}

