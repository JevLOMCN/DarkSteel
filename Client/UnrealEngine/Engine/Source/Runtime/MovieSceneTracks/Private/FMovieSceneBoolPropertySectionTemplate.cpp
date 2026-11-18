// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 5

// StaticStruct @ 14658c240

UScriptStruct * __cdecl FMovieSceneBoolPropertySectionTemplate::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneBoolPropertySectionTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneBoolPropertySectionTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate,
                         (UObject *)pUVar1,L"MovieSceneBoolPropertySectionTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneBoolPropertySectionTemplate.OuterSingleton;
}

// GetScriptStructImpl @ 14658c370

UScriptStruct * __thiscall
FMovieSceneBoolPropertySectionTemplate::GetScriptStructImpl
          (FMovieSceneBoolPropertySectionTemplate *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneBoolPropertySectionTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneBoolPropertySectionTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate,
                         (UObject *)pUVar1,L"MovieSceneBoolPropertySectionTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneBoolPropertySectionTemplate.OuterSingleton;
}

// SetupOverrides @ 14658c3b0

void __thiscall
FMovieSceneBoolPropertySectionTemplate::SetupOverrides(FMovieSceneBoolPropertySectionTemplate *this)

{
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 1;
  return;
}

// Evaluate @ 14658c3e0

void __thiscall
FMovieSceneBoolPropertySectionTemplate::Evaluate
          (FMovieSceneBoolPropertySectionTemplate *this,FMovieSceneEvaluationOperand *param_1,
          FMovieSceneContext *param_2,FPersistentEvaluationData *param_3,
          FMovieSceneExecutionTokens *param_4)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  undefined1 local_28 [4];
  uint local_24;
  undefined4 uStack_20;
  TPropertyTrackExecutionToken<bool,bool> local_18;
  
  if (UE::MovieScene::GBooleanPropertyLegacyTemplate) {
    local_28[0] = 0;
    pcVar2 = *(code **)((this->BoolCurve)._padding_ + 0xa0);
    uVar1 = *(uint *)((longlong)&param_2->_padding_ + 4);
    if (uVar1 == 0x80000000) {
      if ((int)param_2->_padding_ == 0) {
        param_2 = (FMovieSceneContext *)((longlong)&param_2->_padding_ + 4);
        cVar4 = (char)param_2->_padding_;
      }
      else {
        cVar4 = (char)param_2->_padding_;
      }
      if (cVar4 == '\x02') {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      uVar5 = *(ulonglong *)((longlong)&param_2->_padding_ + 4);
    }
    else {
      uStack_20 = 0;
      uVar5 = (ulonglong)uVar1;
      local_24 = uVar1;
    }
    cVar4 = (*pcVar2)(&this->BoolCurve,uVar5,local_28);
    if (cVar4 != '\0') {
      local_18._padding_ = (longlong)&___7__TPropertyTrackExecutionToken__N_N__6B_;
      local_18.Value = (bool)local_28[0];
      FMovieSceneExecutionTokens::Add<TPropertyTrackExecutionToken<bool,bool>_>(param_4,&local_18);
    }
  }
  return;
}

// FMovieSceneBoolPropertySectionTemplate @ 146610170

FMovieSceneBoolPropertySectionTemplate * __thiscall
FMovieSceneBoolPropertySectionTemplate::FMovieSceneBoolPropertySectionTemplate
          (FMovieSceneBoolPropertySectionTemplate *this,UMovieSceneBoolSection *param_1,
          UMovieScenePropertyTrack *param_2)

{
  FString *pFVar1;
  ForAnyElementType FVar2;
  int iVar3;
  FName local_res8;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  local_res8 = (param_2->PropertyBinding).PropertyPath;
  pFVar1 = ::FName::ToString(&local_res8,&local_18);
  FMovieScenePropertySectionTemplate::FMovieScenePropertySectionTemplate
            ((FMovieScenePropertySectionTemplate *)this,(param_2->PropertyBinding).PropertyName,
             pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  this->_padding_ = (longlong)&___7FMovieSceneBoolPropertySectionTemplate__6B_;
  FMovieSceneBoolChannel::FMovieSceneBoolChannel(&this->BoolCurve,&param_1->BoolCurve);
  local_res10 = (FName)this->_padding_;
  ::FName::ToString(&local_res10,&local_28);
  ::FString::FString(&local_18,"b");
  iVar3 = local_18.Data.ArrayNum + -1;
  FVar2.Data = local_18.Data.AllocatorInstance.Data;
  if (local_18.Data.ArrayNum == 0) {
    iVar3 = 0;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  ::FString::RemoveFromStart(&local_28,(wchar_t *)FVar2.Data,iVar3,CaseSensitive);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar2.Data = local_28.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,(wchar_t *)FVar2.Data);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  this->_padding_ = (longlong)local_res8;
  return this;
}

