// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionTracks
// Functions: 4

// StaticStruct @ 14e7fb490

UScriptStruct * __cdecl FMovieSceneGeometryCollectionSectionTemplate::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate,
                         (UObject *)pUVar1,L"MovieSceneGeometryCollectionSectionTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate.
         OuterSingleton;
}

// GetScriptStructImpl @ 14e7fb4d0

UScriptStruct * __thiscall
FMovieSceneGeometryCollectionSectionTemplate::GetScriptStructImpl
          (FMovieSceneGeometryCollectionSectionTemplate *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate,
                         (UObject *)pUVar1,L"MovieSceneGeometryCollectionSectionTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate.
         OuterSingleton;
}

// Evaluate @ 14e7fb510

void __thiscall
FMovieSceneGeometryCollectionSectionTemplate::Evaluate
          (FMovieSceneGeometryCollectionSectionTemplate *this,FMovieSceneEvaluationOperand *param_1,
          FMovieSceneContext *param_2,FPersistentEvaluationData *param_3,
          FMovieSceneExecutionTokens *param_4)

{
  undefined1 local_58 [32];
  void *local_38;
  FFrameNumber local_18;
  FFrameNumber local_14;
  
  local_58._0_8_ = &___7FGeometryCollectionExecutionToken__6B_;
  FMovieSceneGeometryCollectionParams::FMovieSceneGeometryCollectionParams
            ((FMovieSceneGeometryCollectionParams *)(local_58 + 8),
             (FMovieSceneGeometryCollectionParams *)&this->Params);
  local_58._8_8_ = &___7FMovieSceneGeometryCollectionSectionTemplateParameters__6B_;
  local_18.Value = (this->Params).SectionStartTime.Value;
  local_14.Value = (this->Params).SectionEndTime.Value;
  FMovieSceneExecutionTokens::Add<FGeometryCollectionExecutionToken>
            (param_4,(FGeometryCollectionExecutionToken *)local_58);
  local_58._8_8_ = &___7FMovieSceneGeometryCollectionParams__6B_;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// FMovieSceneGeometryCollectionSectionTemplate @ 14e7fc530

FMovieSceneGeometryCollectionSectionTemplate * __thiscall
FMovieSceneGeometryCollectionSectionTemplate::FMovieSceneGeometryCollectionSectionTemplate
          (FMovieSceneGeometryCollectionSectionTemplate *this,
          UMovieSceneGeometryCollectionSection *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FMovieSceneGeometryCollectionSectionTemplate *pFVar4;
  int iVar5;
  int iVar6;
  
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMovieSceneGeometryCollectionSectionTemplate__6B_;
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
      pFVar4 = (FMovieSceneGeometryCollectionSectionTemplate *)(*pcVar1)();
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
        pFVar4 = (FMovieSceneGeometryCollectionSectionTemplate *)(*pcVar1)();
        return pFVar4;
      }
    }
    iVar5 = iVar5 + 1;
  }
  FMovieSceneGeometryCollectionParams::FMovieSceneGeometryCollectionParams
            ((FMovieSceneGeometryCollectionParams *)&this->Params,&param_1->Params);
  (this->Params)._padding_ =
       (longlong)&___7FMovieSceneGeometryCollectionSectionTemplateParameters__6B_;
  (this->Params).SectionStartTime.Value = iVar5;
  (this->Params).SectionEndTime.Value = iVar6;
  return this;
}

