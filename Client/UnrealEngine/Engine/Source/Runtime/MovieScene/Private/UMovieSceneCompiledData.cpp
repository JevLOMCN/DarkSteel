// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 7

// StaticClass @ 146066080

UClass * __cdecl UMovieSceneCompiledData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCompiledData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneCompiledData",
               &Z_Registration_Info_UClass_UMovieSceneCompiledData.InnerSingleton,
               StaticRegisterNativesUMovieSceneCompiledData,0x420,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneCompiledData>,
               InternalVTableHelperCtorCaller<UMovieSceneCompiledData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCompiledData.InnerSingleton;
}

// UMovieSceneCompiledData @ 146094df0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMovieSceneCompiledData * __thiscall
UMovieSceneCompiledData::UMovieSceneCompiledData
          (UMovieSceneCompiledData *this,FVTableHelper *param_1)

{
  FMovieSceneCompiledSequenceFlagStruct *pFVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneCompiledData__6B_;
  FMovieSceneEvaluationTemplate::FMovieSceneEvaluationTemplate(&this->EvaluationTemplate);
  FMovieSceneSequenceHierarchy::FMovieSceneSequenceHierarchy(&this->Hierarchy);
  FMovieSceneEntityComponentField::FMovieSceneEntityComponentField(&this->EntityComponentField);
  pFVar1->bParentSequenceRequiresLowerFence = '\0';
  pFVar1->bParentSequenceRequiresUpperFence = '\0';
  (this->TrackTemplateField).Ranges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrackTemplateField).Ranges.ArrayNum = 0;
  (this->TrackTemplateField).Ranges.ArrayMax = 0;
  (this->TrackTemplateField).Groups.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrackTemplateField).Groups.ArrayNum = 0;
  (this->TrackTemplateField).Groups.ArrayMax = 0;
  (this->TrackTemplateField).MetaData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrackTemplateField).MetaData.ArrayNum = 0;
  (this->TrackTemplateField).MetaData.ArrayMax = 0;
  (this->DeterminismFences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeterminismFences).ArrayNum = 0;
  (this->DeterminismFences).ArrayMax = 0;
  (this->CompiledSignature).A = 0;
  (this->CompiledSignature).B = 0;
  (this->CompiledSignature).C = 0;
  (this->CompiledSignature).D = 0;
  (this->CompilerVersion).A = 0;
  (this->CompilerVersion).B = 0;
  (this->CompilerVersion).C = 0;
  (this->CompilerVersion).D = 0;
  return this;
}

// UMovieSceneCompiledData @ 146094ea0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMovieSceneCompiledData * __thiscall
UMovieSceneCompiledData::UMovieSceneCompiledData(UMovieSceneCompiledData *this)

{
  FMovieSceneCompiledSequenceFlagStruct *pFVar1;
  
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UMovieSceneCompiledData__6B_;
  FMovieSceneEvaluationTemplate::FMovieSceneEvaluationTemplate(&this->EvaluationTemplate);
  FMovieSceneSequenceHierarchy::FMovieSceneSequenceHierarchy(&this->Hierarchy);
  FMovieSceneEntityComponentField::FMovieSceneEntityComponentField(&this->EntityComponentField);
  pFVar1->bParentSequenceRequiresLowerFence = '\0';
  pFVar1->bParentSequenceRequiresUpperFence = '\0';
  (this->TrackTemplateField).Ranges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrackTemplateField).Ranges.ArrayNum = 0;
  (this->TrackTemplateField).Ranges.ArrayMax = 0;
  (this->TrackTemplateField).Groups.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrackTemplateField).Groups.ArrayNum = 0;
  (this->TrackTemplateField).Groups.ArrayMax = 0;
  (this->TrackTemplateField).MetaData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrackTemplateField).MetaData.ArrayNum = 0;
  (this->TrackTemplateField).MetaData.ArrayMax = 0;
  (this->DeterminismFences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeterminismFences).ArrayNum = 0;
  (this->DeterminismFences).ArrayMax = 0;
  (this->CompiledSignature).A = 0;
  (this->CompiledSignature).B = 0;
  (this->CompiledSignature).C = 0;
  (this->CompiledSignature).D = 0;
  (this->CompilerVersion).A = 0;
  (this->CompilerVersion).B = 0;
  (this->CompilerVersion).C = 0;
  (this->CompilerVersion).D = 0;
  this->AccumulatedMask = None;
  this->AllocatedMask = None;
  this->AccumulatedFlags = None;
  return this;
}

// ~UMovieSceneCompiledData @ 146098300

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall UMovieSceneCompiledData::~UMovieSceneCompiledData(UMovieSceneCompiledData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneCompiledData__6B_;
  pFVar1 = (this->DeterminismFences).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMovieSceneEvaluationMetaData,int>
            ((FMovieSceneEvaluationMetaData *)
             (this->TrackTemplateField).MetaData.AllocatorInstance.Data,
             (this->TrackTemplateField).MetaData.ArrayNum);
  pFVar1 = (this->TrackTemplateField).MetaData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMovieSceneEvaluationGroup,int>
            ((FMovieSceneEvaluationGroup *)(this->TrackTemplateField).Groups.AllocatorInstance.Data,
             (this->TrackTemplateField).Groups.ArrayNum);
  pFVar1 = (this->TrackTemplateField).Groups.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TrackTemplateField).Ranges.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FMovieSceneEntityComponentField::~FMovieSceneEntityComponentField(&this->EntityComponentField);
  FMovieSceneSequenceHierarchy::~FMovieSceneSequenceHierarchy(&this->Hierarchy);
  FMovieSceneEvaluationTemplate::~FMovieSceneEvaluationTemplate(&this->EvaluationTemplate);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1460cf490

UClass * __cdecl UMovieSceneCompiledData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCompiledData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneCompiledData",
               &Z_Registration_Info_UClass_UMovieSceneCompiledData.InnerSingleton,
               StaticRegisterNativesUMovieSceneCompiledData,0x420,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneCompiledData>,
               InternalVTableHelperCtorCaller<UMovieSceneCompiledData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCompiledData.InnerSingleton;
}

// Reset @ 1460e9550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall UMovieSceneCompiledData::Reset(UMovieSceneCompiledData *this)

{
  TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>_>
  *pTVar1;
  TMap<FGuid,FMovieSceneTrackIdentifier,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneTrackIdentifier,0>_>
  *pTVar2;
  TMap<FGuid,FMovieSceneTrackIdentifier,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneTrackIdentifier,0>_>
  *pTVar3;
  TMap<FGuid,FMovieSceneFrameRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneFrameRange,0>_>
  *pTVar4;
  TMap<FGuid,FMovieSceneFrameRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneFrameRange,0>_>
  *pTVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ForAnyElementType FVar9;
  FMovieSceneEvaluationTemplate *pFVar10;
  FMovieSceneSequenceHierarchy *pFVar11;
  FMovieSceneEntityComponentField *pFVar12;
  undefined1 auStackY_1d8 [32];
  FMovieSceneEvaluationField local_1a8;
  FMovieSceneEvaluationTemplate local_178;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  memset(&local_178,0,0x160);
  pFVar10 = FMovieSceneEvaluationTemplate::FMovieSceneEvaluationTemplate(&local_178);
  if (&this->EvaluationTemplate != pFVar10) {
    TSet<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>,FDefaultSetAllocator>
                *)&this->EvaluationTemplate,
               (TSet<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>,FDefaultSetAllocator>
                *)pFVar10);
  }
  pTVar1 = &(this->EvaluationTemplate).StaleTracks;
  if (pTVar1 != &pFVar10->StaleTracks) {
    TSet<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>,FDefaultSetAllocator>
                *)pTVar1,
               (TSet<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>,FDefaultSetAllocator>
                *)&pFVar10->StaleTracks);
  }
  uVar6 = (pFVar10->SequenceSignature).B;
  uVar7 = (pFVar10->SequenceSignature).C;
  uVar8 = (pFVar10->SequenceSignature).D;
  pTVar2 = &(pFVar10->TemplateLedger).TrackSignatureToTrackIdentifier;
  pTVar3 = &(this->EvaluationTemplate).TemplateLedger.TrackSignatureToTrackIdentifier;
  (this->EvaluationTemplate).SequenceSignature.A = (pFVar10->SequenceSignature).A;
  (this->EvaluationTemplate).SequenceSignature.B = uVar6;
  (this->EvaluationTemplate).SequenceSignature.C = uVar7;
  (this->EvaluationTemplate).SequenceSignature.D = uVar8;
  (this->EvaluationTemplate).TemplateLedger.LastTrackIdentifier.Value =
       (pFVar10->TemplateLedger).LastTrackIdentifier.Value;
  if (pTVar3 != pTVar2) {
    TSet<TTuple<FGuid,FMovieSceneTrackIdentifier>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneTrackIdentifier,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FGuid,FMovieSceneTrackIdentifier>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneTrackIdentifier,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FGuid,FMovieSceneTrackIdentifier>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneTrackIdentifier,0>,FDefaultSetAllocator>
                *)pTVar3,
               (TSet<TTuple<FGuid,FMovieSceneTrackIdentifier>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneTrackIdentifier,0>,FDefaultSetAllocator>
                *)pTVar2);
  }
  pTVar4 = &(pFVar10->TemplateLedger).SubSectionRanges;
  pTVar5 = &(this->EvaluationTemplate).TemplateLedger.SubSectionRanges;
  if (pTVar5 != pTVar4) {
    TSet<TTuple<FGuid,FMovieSceneFrameRange>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneFrameRange,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FGuid,FMovieSceneFrameRange>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneFrameRange,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FGuid,FMovieSceneFrameRange>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneFrameRange,0>,FDefaultSetAllocator>
                *)pTVar5,
               (TSet<TTuple<FGuid,FMovieSceneFrameRange>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneFrameRange,0>,FDefaultSetAllocator>
                *)pTVar4);
  }
  FMovieSceneEvaluationTemplate::~FMovieSceneEvaluationTemplate(&local_178);
  pFVar11 = FMovieSceneSequenceHierarchy::FMovieSceneSequenceHierarchy
                      ((FMovieSceneSequenceHierarchy *)&local_178);
  FMovieSceneSequenceHierarchy::operator=(&this->Hierarchy,pFVar11);
  FMovieSceneSequenceHierarchy::~FMovieSceneSequenceHierarchy
            ((FMovieSceneSequenceHierarchy *)&local_178);
  memset(&local_178,0,0xf0);
  pFVar12 = FMovieSceneEntityComponentField::FMovieSceneEntityComponentField
                      ((FMovieSceneEntityComponentField *)&local_178);
  FMovieSceneEntityComponentField::operator=(&this->EntityComponentField,pFVar12);
  FMovieSceneEntityComponentField::~FMovieSceneEntityComponentField
            ((FMovieSceneEntityComponentField *)&local_178);
  local_1a8.Ranges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.Ranges.ArrayNum = 0;
  local_1a8.Ranges.ArrayMax = 0;
  local_1a8.Groups.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.Groups.ArrayNum = 0;
  local_1a8.Groups.ArrayMax = 0;
  local_1a8.MetaData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.MetaData.ArrayNum = 0;
  local_1a8.MetaData.ArrayMax = 0;
  FMovieSceneEvaluationField::operator=(&this->TrackTemplateField,&local_1a8);
  FVar9.Data = local_1a8.MetaData.AllocatorInstance.Data;
  DestructItems<FMovieSceneEvaluationMetaData,int>
            ((FMovieSceneEvaluationMetaData *)local_1a8.MetaData.AllocatorInstance.Data,
             local_1a8.MetaData.ArrayNum);
  if ((FMovieSceneEvaluationMetaData *)FVar9.Data != (FMovieSceneEvaluationMetaData *)0x0) {
    FMemory::Free(FVar9.Data);
  }
  FVar9.Data = local_1a8.Groups.AllocatorInstance.Data;
  DestructItems<FMovieSceneEvaluationGroup,int>
            ((FMovieSceneEvaluationGroup *)local_1a8.Groups.AllocatorInstance.Data,
             local_1a8.Groups.ArrayNum);
  if ((FMovieSceneEvaluationGroup *)FVar9.Data != (FMovieSceneEvaluationGroup *)0x0) {
    FMemory::Free(FVar9.Data);
  }
  if (local_1a8.Ranges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Ranges.AllocatorInstance.Data);
  }
  (this->DeterminismFences).ArrayNum = 0;
  if ((this->DeterminismFences).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->DeterminismFences).AllocatorInstance,0,
               &(this->DeterminismFences).ArrayMax);
  }
  (this->CompiledSignature).C = 0;
  (this->CompiledSignature).D = 0;
  (this->CompiledSignature).A = 0;
  (this->CompiledSignature).B = 0;
  (this->CompilerVersion).C = 0;
  (this->CompilerVersion).D = 0;
  (this->CompilerVersion).A = 0;
  (this->CompilerVersion).B = 0;
  this->AccumulatedMask = None;
  this->AllocatedMask = None;
  this->AccumulatedFlags = None;
  return;
}

// StaticRegisterNativesUMovieSceneCompiledData @ 1460fa1f0

void __cdecl UMovieSceneCompiledData::StaticRegisterNativesUMovieSceneCompiledData(void)

{
  return;
}

