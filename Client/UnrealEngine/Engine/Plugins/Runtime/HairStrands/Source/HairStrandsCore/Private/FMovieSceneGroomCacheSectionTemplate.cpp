// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 4

// StaticStruct @ 14e0cb120

UScriptStruct * __cdecl FMovieSceneGroomCacheSectionTemplate::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneGroomCacheSectionTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsCore();
    Z_Registration_Info_UScriptStruct_FMovieSceneGroomCacheSectionTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplate,
                         (UObject *)pUVar1,L"MovieSceneGroomCacheSectionTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneGroomCacheSectionTemplate.OuterSingleton;
}

// GetScriptStructImpl @ 14e0cb160

UScriptStruct * __thiscall
FMovieSceneGroomCacheSectionTemplate::GetScriptStructImpl
          (FMovieSceneGroomCacheSectionTemplate *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneGroomCacheSectionTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsCore();
    Z_Registration_Info_UScriptStruct_FMovieSceneGroomCacheSectionTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplate,
                         (UObject *)pUVar1,L"MovieSceneGroomCacheSectionTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneGroomCacheSectionTemplate.OuterSingleton;
}

// Evaluate @ 14e0cb1a0

void __thiscall
FMovieSceneGroomCacheSectionTemplate::Evaluate
          (FMovieSceneGroomCacheSectionTemplate *this,FMovieSceneEvaluationOperand *param_1,
          FMovieSceneContext *param_2,FPersistentEvaluationData *param_3,
          FMovieSceneExecutionTokens *param_4)

{
  FGroomCacheExecutionToken local_38;
  
  local_38._padding_ = (longlong)&___7FGroomCacheExecutionToken__6B_;
  local_38.Params._padding_ = (this->Params)._padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     ((UObject *)local_38.Params._padding_ != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_38.Params._padding_);
  }
  local_38.Params._padding_._0_4_ = (undefined4)(this->Params)._padding_;
  local_38.Params._padding_._4_4_ = *(undefined4 *)((longlong)&(this->Params)._padding_ + 4);
  local_38.Params._padding_._4_4_ = *(undefined4 *)((longlong)&(this->Params)._padding_ + 4);
  local_38.Params._padding_._0_4_ = (undefined4)(this->Params)._padding_;
  local_38.Params._padding_._0_4_ =
       (uint)local_38.Params._padding_ ^
       ((uint)local_38.Params._padding_ ^ (uint)(this->Params)._padding_) & 1;
  local_38.Params.SectionStartTime.Value = (this->Params).SectionStartTime.Value;
  local_38.Params.SectionEndTime.Value = (this->Params).SectionEndTime.Value;
  FMovieSceneExecutionTokens::Add<FGroomCacheExecutionToken>(param_4,&local_38);
  return;
}

// FMovieSceneGroomCacheSectionTemplate @ 14e0d0c60

FMovieSceneGroomCacheSectionTemplate * __thiscall
FMovieSceneGroomCacheSectionTemplate::FMovieSceneGroomCacheSectionTemplate
          (FMovieSceneGroomCacheSectionTemplate *this,UMovieSceneGroomCacheSection *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FMovieSceneGroomCacheSectionTemplate *pFVar4;
  FFrameNumber FVar5;
  FFrameNumber FVar6;
  
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMovieSceneGroomCacheSectionTemplate__6B_;
  FVar6.Value = (int)((ulonglong)param_1->_padding_ >> 0x20);
  cVar2 = (char)param_1->_padding_;
  if (cVar2 == '\x01') {
    FVar6.Value = FVar6.Value + 1;
  }
  else if (cVar2 == '\x02') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMovieSceneGroomCacheSectionTemplate *)(*pcVar1)();
      return pFVar4;
    }
  }
  FVar5.Value = (int)((ulonglong)param_1->_padding_ >> 0x20);
  cVar2 = (char)param_1->_padding_;
  if (cVar2 != '\x01') {
    if (cVar2 == '\x02') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FMovieSceneGroomCacheSectionTemplate *)(*pcVar1)();
        return pFVar4;
      }
    }
    FVar5.Value = FVar5.Value + 1;
  }
  FMovieSceneGroomCacheSectionTemplateParameters::FMovieSceneGroomCacheSectionTemplateParameters
            (&this->Params,&param_1->Params,FVar5,FVar6);
  return this;
}

