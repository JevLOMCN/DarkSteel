// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 6

// StaticStruct @ 14658c0d0

UScriptStruct * __cdecl FMovieSceneActorReferenceSectionTemplate::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneActorReferenceSectionTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneActorReferenceSectionTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneActorReferenceSectionTemplate,
                         (UObject *)pUVar1,L"MovieSceneActorReferenceSectionTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneActorReferenceSectionTemplate.OuterSingleton;
}

// GetScriptStructImpl @ 14658c110

UScriptStruct * __thiscall
FMovieSceneActorReferenceSectionTemplate::GetScriptStructImpl
          (FMovieSceneActorReferenceSectionTemplate *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneActorReferenceSectionTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneActorReferenceSectionTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneActorReferenceSectionTemplate,
                         (UObject *)pUVar1,L"MovieSceneActorReferenceSectionTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneActorReferenceSectionTemplate.OuterSingleton;
}

// SetupOverrides @ 14658c150

void __thiscall
FMovieSceneActorReferenceSectionTemplate::SetupOverrides
          (FMovieSceneActorReferenceSectionTemplate *this)

{
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 1;
  return;
}

// Setup @ 14658c160

void __thiscall
FMovieSceneActorReferenceSectionTemplate::Setup
          (FMovieSceneActorReferenceSectionTemplate *this,FPersistentEvaluationData *param_1,
          IMovieScenePlayer *param_2)

{
  code *pcVar1;
  bool bVar2;
  FSectionData *pFVar3;
  FString *pFVar4;
  TPairInitializer<FMovieSceneEvaluationKey_const_&,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_&&>
  local_res8;
  FMovieSceneEvaluationKey *local_28;
  TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_> **local_20;
  FString local_18;
  
  if (param_1->EntityData ==
      (TMap<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>_>
       *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("EntityData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PersistentEvaluationData.h"
                       ,300,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = ::operator_new(0x20);
  if (pFVar3 == (FSectionData *)0x0) {
    pFVar3 = (FSectionData *)0x0;
  }
  else {
    pFVar3 = PropertyTemplate::FSectionData::FSectionData(pFVar3);
  }
  local_28 = &param_1->SectionKey;
  local_20 = &local_res8.Value;
  local_res8.Value =
       (TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_> *)pFVar3;
  TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FMovieSceneEvaluationKey_const_&,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_&&>_>
            ((TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
              *)param_1->EntityData,&local_res8,(bool *)&local_28);
  if ((FSectionData *)local_res8.Value != (FSectionData *)0x0) {
    (**(code **)(local_res8.Value)->Ptr)(local_res8.Value,1);
  }
  pFVar4 = ::FString::FString(&local_18,&(this->PropertyData).PropertyPath);
  PropertyTemplate::FSectionData::Initialize(pFVar3,(this->PropertyData).PropertyName,pFVar4);
  return;
}

// Evaluate @ 14658c280

void __thiscall
FMovieSceneActorReferenceSectionTemplate::Evaluate
          (FMovieSceneActorReferenceSectionTemplate *this,FMovieSceneEvaluationOperand *param_1,
          FMovieSceneContext *param_2,FPersistentEvaluationData *param_3,
          FMovieSceneExecutionTokens *param_4)

{
  char cVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  FFrameTime FVar5;
  TPropertyTrackExecutionToken<UObject_*,FMovieSceneObjectBindingID> local_58;
  FMovieSceneActorReferenceKey local_38;
  
  local_38.Object.ResolveParentIndex = -1;
  local_38.Object.Guid.A = 0;
  local_38.Object.Guid.B = 0;
  local_38.Object.Guid.C = 0;
  local_38.Object.Guid.D = 0;
  local_38.Object.SequenceID = 0;
  local_38.ComponentName.ComparisonIndex.Value = 0;
  local_38.ComponentName.Number = 0;
  local_38.SocketName.ComparisonIndex.Value = 0;
  local_38.SocketName.Number = 0;
  uVar2 = *(uint *)((longlong)&param_2->_padding_ + 4);
  if (uVar2 == 0x80000000) {
    if ((int)param_2->_padding_ == 0) {
      param_2 = (FMovieSceneContext *)((longlong)&param_2->_padding_ + 4);
      cVar1 = (char)param_2->_padding_;
    }
    else {
      cVar1 = (char)param_2->_padding_;
    }
    if (cVar1 == '\x02') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FVar5 = *(FFrameTime *)((longlong)&param_2->_padding_ + 4);
  }
  else {
    FVar5.SubFrame = 0.0;
    FVar5.FrameNumber.Value = uVar2;
  }
  FMovieSceneActorReferenceData::Evaluate(&this->ActorReferenceData,FVar5,&local_38);
  local_58.Value.ResolveParentIndex = local_38.Object.ResolveParentIndex;
  local_58.Value.SequenceID = local_38.Object.SequenceID;
  local_58.Value.Guid.A = local_38.Object.Guid.A;
  local_58.Value.Guid.B = local_38.Object.Guid.B;
  local_58.Value.Guid.C = local_38.Object.Guid.C;
  local_58.Value.Guid.D = local_38.Object.Guid.D;
  local_58._padding_ =
       (longlong)&___7__TPropertyTrackExecutionToken_PEAVUObject__UFMovieSceneObjectBindingID____6B_
  ;
  FMovieSceneExecutionTokens::
  Add<TPropertyTrackExecutionToken<UObject_*,FMovieSceneObjectBindingID>_>(param_4,&local_58);
  return;
}

// FMovieSceneActorReferenceSectionTemplate @ 14660fb30

FMovieSceneActorReferenceSectionTemplate * __thiscall
FMovieSceneActorReferenceSectionTemplate::FMovieSceneActorReferenceSectionTemplate
          (FMovieSceneActorReferenceSectionTemplate *this,UMovieSceneActorReferenceSection *param_1,
          UMovieScenePropertyTrack *param_2)

{
  int *piVar1;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FName FVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FString *pFVar10;
  FName local_res8;
  FString local_38;
  
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMovieSceneActorReferenceSectionTemplate__6B_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)&this->_padding_ = 0;
  local_res8 = (param_2->PropertyBinding).PropertyPath;
  pFVar10 = ::FName::ToString(&local_res8,&local_38);
  (this->PropertyData).PropertyName = (param_2->PropertyBinding).PropertyName;
  (this->PropertyData).PropertyPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyData).PropertyPath.Data.AllocatorInstance.Data =
       (pFVar10->Data).AllocatorInstance.Data;
  (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyData).PropertyPath.Data.ArrayNum = (pFVar10->Data).ArrayNum;
  (this->PropertyData).PropertyPath.Data.ArrayMax = (pFVar10->Data).ArrayMax;
  (pFVar10->Data).ArrayNum = 0;
  (pFVar10->Data).ArrayMax = 0;
  pFVar5 = (pFVar10->Data).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  FMovieSceneChannel::FMovieSceneChannel
            ((FMovieSceneChannel *)&this->ActorReferenceData,
             (FMovieSceneChannel *)&param_1->ActorReferenceData);
  pTVar2 = &(this->ActorReferenceData).KeyTimes;
  (this->ActorReferenceData)._padding_ = (longlong)&___7FMovieSceneActorReferenceData__6B_;
  piVar1 = &(this->ActorReferenceData).KeyTimes.ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->ActorReferenceData).KeyTimes.ArrayNum;
  pFVar5 = (param_1->ActorReferenceData).KeyTimes.AllocatorInstance.Data;
  (this->ActorReferenceData).KeyTimes.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 2);
  }
  uVar7 = (param_1->ActorReferenceData).DefaultValue.Object.Guid.B;
  uVar8 = (param_1->ActorReferenceData).DefaultValue.Object.Guid.C;
  uVar9 = (param_1->ActorReferenceData).DefaultValue.Object.Guid.D;
  pTVar3 = &(this->ActorReferenceData).KeyValues;
  piVar1 = &(this->ActorReferenceData).KeyValues.ArrayMax;
  (this->ActorReferenceData).DefaultValue.Object.Guid.A =
       (param_1->ActorReferenceData).DefaultValue.Object.Guid.A;
  (this->ActorReferenceData).DefaultValue.Object.Guid.B = uVar7;
  (this->ActorReferenceData).DefaultValue.Object.Guid.C = uVar8;
  (this->ActorReferenceData).DefaultValue.Object.Guid.D = uVar9;
  iVar4 = (param_1->ActorReferenceData).DefaultValue.Object.ResolveParentIndex;
  FVar6 = (param_1->ActorReferenceData).DefaultValue.ComponentName;
  (this->ActorReferenceData).DefaultValue.Object.SequenceID =
       (param_1->ActorReferenceData).DefaultValue.Object.SequenceID;
  (this->ActorReferenceData).DefaultValue.Object.ResolveParentIndex = iVar4;
  (this->ActorReferenceData).DefaultValue.ComponentName = FVar6;
  (this->ActorReferenceData).DefaultValue.SocketName =
       (param_1->ActorReferenceData).DefaultValue.SocketName;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->ActorReferenceData).KeyValues.ArrayNum;
  pFVar5 = (param_1->ActorReferenceData).KeyValues.AllocatorInstance.Data;
  (this->ActorReferenceData).KeyValues.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,4,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4 * 0x28);
  }
  *(undefined8 *)&(this->ActorReferenceData).KeyHandles = 0;
  *(undefined8 *)&(this->ActorReferenceData).KeyHandles.field_0x8 = 0;
  *(undefined8 *)&(this->ActorReferenceData).KeyHandles.field_0x20 = 0;
  *(undefined4 *)&(this->ActorReferenceData).KeyHandles.field_0x28 = 0;
  *(undefined4 *)&(this->ActorReferenceData).KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&(this->ActorReferenceData).KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActorReferenceData).KeyHandles.field_0x34 = 0;
  *(undefined8 *)&(this->ActorReferenceData).KeyHandles.field_0x38 = 0;
  *(undefined8 *)&(this->ActorReferenceData).KeyHandles.field_0x40 = 0;
  *(undefined8 *)&(this->ActorReferenceData).KeyHandles.field_0x58 = 0;
  *(undefined4 *)&(this->ActorReferenceData).KeyHandles.field_0x60 = 0;
  *(undefined4 *)&(this->ActorReferenceData).KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&(this->ActorReferenceData).KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&(this->ActorReferenceData).KeyHandles.field_0x6c = 0;
  *(undefined8 *)&(this->ActorReferenceData).KeyHandles.field_0x78 = 0;
  *(undefined4 *)&(this->ActorReferenceData).KeyHandles.field_0x80 = 0;
  return this;
}

