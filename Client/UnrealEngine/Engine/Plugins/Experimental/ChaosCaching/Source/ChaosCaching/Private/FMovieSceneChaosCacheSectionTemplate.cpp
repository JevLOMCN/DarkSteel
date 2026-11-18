// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCaching
// Functions: 4

// StaticStruct @ 14dadbeb0

UScriptStruct * __cdecl FMovieSceneChaosCacheSectionTemplate::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneChaosCacheSectionTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosCaching();
    Z_Registration_Info_UScriptStruct_FMovieSceneChaosCacheSectionTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplate,
                         (UObject *)pUVar1,L"MovieSceneChaosCacheSectionTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneChaosCacheSectionTemplate.OuterSingleton;
}

// GetScriptStructImpl @ 14dadbef0

UScriptStruct * __thiscall
FMovieSceneChaosCacheSectionTemplate::GetScriptStructImpl
          (FMovieSceneChaosCacheSectionTemplate *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneChaosCacheSectionTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosCaching();
    Z_Registration_Info_UScriptStruct_FMovieSceneChaosCacheSectionTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplate,
                         (UObject *)pUVar1,L"MovieSceneChaosCacheSectionTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneChaosCacheSectionTemplate.OuterSingleton;
}

// Evaluate @ 14dadbf30

void __thiscall
FMovieSceneChaosCacheSectionTemplate::Evaluate
          (FMovieSceneChaosCacheSectionTemplate *this,FMovieSceneEvaluationOperand *param_1,
          FMovieSceneContext *param_2,FPersistentEvaluationData *param_3,
          FMovieSceneExecutionTokens *param_4)

{
  FChaosCacheExecutionToken local_48;
  
  local_48._padding_ = (longlong)&___7FChaosCacheExecutionToken__6B_;
  local_48.Params._padding_ = (this->Params)._padding_;
  FMovieSceneChaosCacheParams::FMovieSceneChaosCacheParams
            (&local_48.Params.ChaosCacheParams,&(this->Params).ChaosCacheParams);
  FMovieSceneExecutionTokens::Add<FChaosCacheExecutionToken>(param_4,&local_48);
  return;
}

// FMovieSceneChaosCacheSectionTemplate @ 14dae7040

FMovieSceneChaosCacheSectionTemplate * __thiscall
FMovieSceneChaosCacheSectionTemplate::FMovieSceneChaosCacheSectionTemplate
          (FMovieSceneChaosCacheSectionTemplate *this,UMovieSceneChaosCacheSection *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FMovieSceneChaosCacheSectionTemplate *pFVar4;
  int iVar5;
  int iVar6;
  
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMovieSceneChaosCacheSectionTemplate__6B_;
  iVar5 = (int)((ulonglong)param_1->_padding_ >> 0x20);
  cVar2 = (char)param_1->_padding_;
  if (cVar2 == '\x01') {
    iVar5 = iVar5 + 1;
  }
  else if (cVar2 == '\x02') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMovieSceneChaosCacheSectionTemplate *)(*pcVar1)();
      return pFVar4;
    }
  }
  iVar6 = (int)((ulonglong)param_1->_padding_ >> 0x20);
  cVar2 = (char)param_1->_padding_;
  if (cVar2 != '\x01') {
    if (cVar2 == '\x02') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FMovieSceneChaosCacheSectionTemplate *)(*pcVar1)();
        return pFVar4;
      }
    }
    iVar6 = iVar6 + 1;
  }
  *(int *)&(this->Params)._padding_ = iVar6;
  *(int *)((longlong)&(this->Params)._padding_ + 4) = iVar5;
  FMovieSceneChaosCacheParams::FMovieSceneChaosCacheParams
            (&(this->Params).ChaosCacheParams,&param_1->Params);
  return this;
}

