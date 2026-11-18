// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 9

// StaticClass @ 146724630

UClass * __cdecl UMovieSceneEventRepeaterSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEventRepeaterSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneEventRepeaterSection",
               &Z_Registration_Info_UClass_UMovieSceneEventRepeaterSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneEventRepeaterSection,0x140,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneEventRepeaterSection>,
               InternalVTableHelperCtorCaller<UMovieSceneEventRepeaterSection>,local_res8,
               UMovieSceneEventSectionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEventRepeaterSection.InnerSingleton;
}

// UMovieSceneEventRepeaterSection @ 146764ca0

UMovieSceneEventRepeaterSection * __thiscall
UMovieSceneEventRepeaterSection::UMovieSceneEventRepeaterSection
          (UMovieSceneEventRepeaterSection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneEventSectionBase__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  (this->Event).Ptrs.Function.field0_0x0.DebugPtr = (UFunction *)0x0;
  *(undefined8 *)&(this->Event).Ptrs.BoundObjectProperty = 0;
  *(undefined8 *)&(this->Event).Ptrs.BoundObjectProperty.field_0x8 = 0;
  *(undefined8 *)&(this->Event).Ptrs.BoundObjectProperty.field_0x10 = 0;
  *(undefined8 *)&(this->Event).Ptrs.BoundObjectProperty.field_0x18 = 0;
  return this;
}

// UMovieSceneEventRepeaterSection @ 146764d00

UMovieSceneEventRepeaterSection * __thiscall
UMovieSceneEventRepeaterSection::UMovieSceneEventRepeaterSection
          (UMovieSceneEventRepeaterSection *this,FObjectInitializer *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneEventSectionBase__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  (this->Event).Ptrs.Function.field0_0x0.DebugPtr = (UFunction *)0x0;
  *(undefined8 *)&(this->Event).Ptrs.BoundObjectProperty = 0;
  *(undefined8 *)&(this->Event).Ptrs.BoundObjectProperty.field_0x8 = 0;
  *(undefined8 *)&(this->Event).Ptrs.BoundObjectProperty.field_0x10 = 0;
  *(undefined8 *)&(this->Event).Ptrs.BoundObjectProperty.field_0x18 = 0;
  return this;
}

// ~UMovieSceneEventRepeaterSection @ 14676a680

void __thiscall
UMovieSceneEventRepeaterSection::~UMovieSceneEventRepeaterSection
          (UMovieSceneEventRepeaterSection *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneEventSectionBase__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  pvVar1 = *(void **)&(this->Event).Ptrs.BoundObjectProperty.field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
  this->_padding_ = (longlong)&___7UMovieSceneEventSectionBase__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// GetPrivateStaticClass @ 146798aa0

UClass * __cdecl UMovieSceneEventRepeaterSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEventRepeaterSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneEventRepeaterSection",
               &Z_Registration_Info_UClass_UMovieSceneEventRepeaterSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneEventRepeaterSection,0x140,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneEventRepeaterSection>,
               InternalVTableHelperCtorCaller<UMovieSceneEventRepeaterSection>,local_res8,
               UMovieSceneEventSectionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEventRepeaterSection.InnerSingleton;
}

// ImportEntityImpl @ 14679eec0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneEventRepeaterSection::ImportEntityImpl
          (UMovieSceneEventRepeaterSection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  longlong lVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  UMovieSceneEventSystem *this_00;
  FMovieSceneInverseSequenceTransform *this_01;
  longlong lVar8;
  FFrameTime local_res8;
  TOptional<FFrameTime> local_150 [2];
  FMovieSceneContext local_138;
  TRange<FFrameNumber> local_b8;
  undefined1 local_a8 [40];
  FGuid local_80;
  FMovieSceneSequenceID local_70;
  FFrameTime local_6c;
  FMovieSceneInverseSequenceTransform local_58;
  
  if (this->_padding_ == 0) {
    return;
  }
  pUVar6 = Z_Construct_UClass_UMovieSceneEventTrack_NoRegister();
  pUVar7 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)&this[-1]._padding_,pUVar6);
  if (((param_1->InstanceRegistry).Ptr == (FInstanceRegistry *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceRegistry.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                         ,0x96,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar8 = (ulonglong)(param_2->Sequence).InstanceHandle.InstanceID * 0x140;
  lVar1 = *(longlong *)&((param_1->InstanceRegistry).Ptr)->Instances;
  FMovieSceneContext::FMovieSceneContext(&local_138,(FMovieSceneContext *)(lVar1 + 0x68 + lVar8));
  if (local_138.bSilent) goto LAB_14679f1d0;
  if ((int)local_138._padding_ == 0) {
    bVar3 = pUVar7[7].field_0x10 & 1;
joined_r0x00014679ef9b:
    if (bVar3 == 0) goto LAB_14679f1d0;
  }
  else if ((int)local_138._padding_ == 1) {
    bVar3 = pUVar7[7].field_0x10 & 2;
    goto joined_r0x00014679ef9b;
  }
  local_b8.LowerBound = (TRangeBound<FFrameNumber>)this[-1]._padding_;
  local_b8.UpperBound = (TRangeBound<FFrameNumber>)this[-1]._padding_;
  if (local_138._padding_._4_4_ == 0x80000000) {
    if ((int)local_138._padding_ == 0) {
      local_res8 = (FFrameTime)local_138._padding_;
      if ((local_138._padding_._4_1_ == '\x02') &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), local_res8 = (FFrameTime)local_138._padding_, bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      local_res8 = (FFrameTime)local_138._4_8_;
      if (((char)local_138._padding_ == '\x02') &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), local_res8 = (FFrameTime)local_138._4_8_, bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  else {
    local_res8.SubFrame = 0.0;
    local_res8.FrameNumber.Value = local_138._padding_._4_4_;
  }
  bVar4 = TRange<FFrameNumber>::Contains(&local_b8,&local_res8.FrameNumber);
  if (bVar4) {
    bVar4 = false;
    if (pUVar7[7].field_0x14 == '\0') {
      bVar4 = true;
      this_00 = (UMovieSceneEventSystem *)
                UMovieSceneEntitySystemLinker::LinkSystem<UMovieScenePreSpawnEventSystem>(param_1);
    }
    else if (pUVar7[7].field_0x14 == '\x02') {
      bVar4 = true;
      this_00 = (UMovieSceneEventSystem *)
                UMovieSceneEntitySystemLinker::LinkSystem<UMovieScenePostSpawnEventSystem>(param_1);
    }
    else {
      this_00 = (UMovieSceneEventSystem *)
                UMovieSceneEntitySystemLinker::LinkSystem<UMovieScenePostEvalEventSystem>(param_1);
    }
    this_01 = FMovieSceneContext::GetSequenceToRootSequenceTransform(&local_138,&local_58);
    if (local_138._padding_._4_4_ == 0x80000000) {
      if ((int)local_138._padding_ == 0) {
        local_138._4_8_ = local_138._padding_;
        if ((local_138._padding_._4_1_ == '\x02') &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), local_138._4_8_ = local_138._padding_, bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      else if (((char)local_138._padding_ == '\x02') &&
              (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Type != ERangeBoundTypes::Open",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                  ,99,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      local_138._padding_._0_4_ = 0.0;
      local_138._padding_._4_4_ = local_138._padding_._4_4_;
    }
    FMovieSceneInverseSequenceTransform::TryTransformTime
              (this_01,local_150,(FFrameTime)local_138._4_8_);
    if (local_58.NestedTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.NestedTransforms.AllocatorInstance.Data);
    }
    if (local_150[0].bIsSet != false) {
      FMovieSceneEventPtrs::FMovieSceneEventPtrs
                ((FMovieSceneEventPtrs *)local_a8,(FMovieSceneEventPtrs *)&this->_padding_);
      UE::MovieScene::FEntityImportParams::GetObjectBindingID(param_2,&local_80);
      local_70.Value = *(uint *)(lVar8 + 0x128 + lVar1);
      if ((local_150[0].bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_6c = local_150[0].TypedValue;
      UMovieSceneEventSystem::AddEvent
                (this_00,*(FInstanceHandle *)(lVar8 + 0x13a + lVar1),
                 (FMovieSceneEventTriggerData *)local_a8);
      if (bVar4) {
        UE::MovieScene::FEntityManager::OnStructureChanged(&param_1->EntityManager);
      }
      if ((void *)local_a8._24_8_ != (void *)0x0) {
        FMemory::Free((void *)local_a8._24_8_);
      }
    }
  }
LAB_14679f1d0:
  FMovieSceneWarpCounter::~FMovieSceneWarpCounter(&local_138.RootToSequenceWarpCounter);
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)
             local_138.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data,
             local_138.RootToSequenceTransform.NestedTransforms.ArrayNum);
  if ((FMovieSceneNestedSequenceTransform *)
      local_138.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free(local_138.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data);
  }
  return;
}

// PopulateEvaluationFieldImpl @ 1467b1350

bool __thiscall
UMovieSceneEventRepeaterSection::PopulateEvaluationFieldImpl
          (UMovieSceneEventRepeaterSection *this,TRange<FFrameNumber> *param_1,
          FMovieSceneEvaluationFieldEntityMetaData *param_2,
          FMovieSceneEntityComponentFieldBuilder *param_3)

{
  int iVar1;
  
  iVar1 = FMovieSceneEntityComponentFieldBuilder::AddMetaData(param_3,param_2);
  FMovieSceneEntityComponentFieldBuilder::AddOneShotEntity
            (param_3,param_1,(UObject *)&this[-1]._padding_,0,iVar1);
  return true;
}

// StaticRegisterNativesUMovieSceneEventRepeaterSection @ 1467c2900

void __cdecl
UMovieSceneEventRepeaterSection::StaticRegisterNativesUMovieSceneEventRepeaterSection(void)

{
  return;
}

// _getUObject @ 1467ca7a0

UObject * __thiscall
UMovieSceneEventRepeaterSection::_getUObject(UMovieSceneEventRepeaterSection *this)

{
  return (UObject *)&this[-1]._padding_;
}

