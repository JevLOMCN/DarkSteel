// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 10

// StaticClass @ 146725780

UClass * __cdecl UMovieSceneEventTriggerSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEventTriggerSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneEventTriggerSection",
               &Z_Registration_Info_UClass_UMovieSceneEventTriggerSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneEventTriggerSection,0x228,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneEventTriggerSection>,
               InternalVTableHelperCtorCaller<UMovieSceneEventTriggerSection>,local_res8,
               UMovieSceneEventSectionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEventTriggerSection.InnerSingleton;
}

// UMovieSceneEventTriggerSection @ 1467650c0

UMovieSceneEventTriggerSection * __thiscall
UMovieSceneEventTriggerSection::UMovieSceneEventTriggerSection
          (UMovieSceneEventTriggerSection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneEventSectionBase__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneEventChannel::FMovieSceneEventChannel(&this->EventChannel);
  return this;
}

// UMovieSceneEventTriggerSection @ 146765110

UMovieSceneEventTriggerSection * __thiscall
UMovieSceneEventTriggerSection::UMovieSceneEventTriggerSection
          (UMovieSceneEventTriggerSection *this,FObjectInitializer *param_1)

{
  uint local_res8;
  uint local_res18;
  TRange<FFrameNumber> local_18;
  
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneEventSectionBase__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneEventChannel::FMovieSceneEventChannel(&this->EventChannel);
  local_res8 = CONCAT31(local_res8._1_3_,2);
  local_18.LowerBound.Value.Value = 0;
  local_18.LowerBound._0_4_ = local_res8;
  local_res18 = CONCAT31(local_res18._1_3_,2);
  local_18.UpperBound.Value.Value = 0;
  local_18.UpperBound._0_4_ = local_res18;
  *(undefined1 *)&this->_padding_ = 1;
  UMovieSceneSection::SetRange((UMovieSceneSection *)this,&local_18);
  return this;
}

// ~UMovieSceneEventTriggerSection @ 14676a7a0

void __thiscall
UMovieSceneEventTriggerSection::~UMovieSceneEventTriggerSection
          (UMovieSceneEventTriggerSection *this)

{
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneEventSectionBase__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneEventChannel::~FMovieSceneEventChannel(&this->EventChannel);
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
  this->_padding_ = (longlong)&___7UMovieSceneEventSectionBase__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// GetPrivateStaticClass @ 146798ce0

UClass * __cdecl UMovieSceneEventTriggerSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEventTriggerSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneEventTriggerSection",
               &Z_Registration_Info_UClass_UMovieSceneEventTriggerSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneEventTriggerSection,0x228,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneEventTriggerSection>,
               InternalVTableHelperCtorCaller<UMovieSceneEventTriggerSection>,local_res8,
               UMovieSceneEventSectionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEventTriggerSection.InnerSingleton;
}

// ImportEntityImpl @ 14679f230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneEventTriggerSection::ImportEntityImpl
          (UMovieSceneEventTriggerSection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  FMovieSceneEvent *pFVar4;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  FFrameTime FVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  UClass *pUVar13;
  UObject *pUVar14;
  FInstanceRegistry *pFVar15;
  UMovieSceneEventSystem *this_00;
  FMovieSceneInverseSequenceTransform *this_01;
  FMovieSceneEventPtrs *pFVar16;
  longlong lVar17;
  longlong lVar18;
  uint local_res8 [2];
  TArrayView<FMovieSceneEvent_const_,int> local_1a8;
  TOptional<FFrameTime> local_198;
  FScriptContainerElement *local_188;
  uint *local_180;
  TArrayView<FMovieSceneEvent_const_,int> *local_178;
  FMovieSceneChannelData local_170;
  longlong *local_158;
  FMovieSceneChannelData local_150;
  longlong *local_138;
  undefined1 local_128 [40];
  FGuid local_100;
  FMovieSceneSequenceID local_f0;
  FFrameTime local_ec;
  FMovieSceneContext local_d8;
  FMovieSceneInverseSequenceTransform local_58;
  
  local_res8[0] = param_2->EntityID;
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_170,(FMovieSceneChannel *)&this->_padding_,
             (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             (FKeyHandleLookupTable *)&this->_padding_);
  plVar1 = &this->_padding_;
  local_158 = plVar1;
  if (((local_170.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
      (plVar1 == (longlong *)0x0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_188 = ((local_170.Times)->AllocatorInstance).Data;
  iVar2 = (local_170.Times)->ArrayNum;
  if ((iVar2 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_150,(FMovieSceneChannel *)&this->_padding_,
             (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             (FKeyHandleLookupTable *)&this->_padding_);
  local_138 = plVar1;
  if (((local_150.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
      (plVar1 == (longlong *)0x0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar3 = (int)local_138[1];
  pFVar4 = (FMovieSceneEvent *)*local_138;
  if ((iVar3 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_1a8.DataPtr = pFVar4;
  local_1a8.ArrayNum = iVar3;
  if (((int)local_res8[0] < 0) || (iVar3 <= (int)local_res8[0])) {
    local_180 = local_res8;
    local_178 = &local_1a8;
    bVar9 = `UMovieSceneEventTriggerSection::ImportEntityImpl'::__l3::<lambda_1>::operator()
                      (&local_180);
    if (!bVar9) {
      return;
    }
  }
  uVar12 = local_res8[0];
  uVar11 = 0;
  if ((int)local_res8[0] < local_1a8.ArrayNum) {
    uVar11 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (local_1a8.DataPtr[(int)uVar12].Ptrs.Function.field0_0x0.DebugPtr == (UFunction *)0x0) {
    return;
  }
  pUVar13 = Z_Construct_UClass_UMovieSceneEventTrack_NoRegister();
  pUVar14 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)&this[-1].EventChannel,pUVar13);
  pFVar15 = UMovieSceneEntitySystemLinker::GetInstanceRegistry(param_1);
  lVar5 = *(longlong *)&pFVar15->Instances;
  lVar18 = (ulonglong)(param_2->Sequence).InstanceHandle.InstanceID * 0x140;
  FMovieSceneContext::FMovieSceneContext(&local_d8,(FMovieSceneContext *)(lVar18 + 0x68 + lVar5));
  if ((local_d8.Status == Stopped) || (local_d8.bSilent)) goto LAB_14679f61f;
  if ((int)local_d8._padding_ == 0) {
    bVar7 = pUVar14[7].field_0x10 & 1;
LAB_14679f4a0:
    if (bVar7 == 0) goto LAB_14679f61f;
  }
  else if ((int)local_d8._padding_ == 1) {
    bVar7 = pUVar14[7].field_0x10 & 2;
    goto LAB_14679f4a0;
  }
  bVar9 = false;
  if (pUVar14[7].field_0x14 == '\0') {
    bVar9 = true;
    this_00 = (UMovieSceneEventSystem *)
              UMovieSceneEntitySystemLinker::LinkSystem<UMovieScenePreSpawnEventSystem>(param_1);
  }
  else if (pUVar14[7].field_0x14 == '\x02') {
    bVar9 = true;
    this_00 = (UMovieSceneEventSystem *)
              UMovieSceneEntitySystemLinker::LinkSystem<UMovieScenePostSpawnEventSystem>(param_1);
  }
  else {
    this_00 = (UMovieSceneEventSystem *)
              UMovieSceneEntitySystemLinker::LinkSystem<UMovieScenePostEvalEventSystem>(param_1);
  }
  this_01 = FMovieSceneContext::GetSequenceToRootSequenceTransform(&local_d8,&local_58);
  lVar17 = (longlong)(int)local_res8[0];
  uVar12 = 0;
  if ((int)local_res8[0] < iVar2) {
    uVar12 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FVar8.SubFrame = 0.0;
  FVar8.FrameNumber.Value = *(uint *)(local_188 + lVar17 * 4);
  FMovieSceneInverseSequenceTransform::TryTransformTime(this_01,&local_198,FVar8);
  if (local_58.NestedTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.NestedTransforms.AllocatorInstance.Data);
  }
  if (local_198.bIsSet != false) {
    pFVar16 = &TArrayView<FMovieSceneEvent_const_,int>::operator[](&local_1a8,local_res8[0])->Ptrs;
    FMovieSceneEventPtrs::FMovieSceneEventPtrs((FMovieSceneEventPtrs *)local_128,pFVar16);
    UE::MovieScene::FEntityImportParams::GetObjectBindingID(param_2,&local_100);
    local_f0.Value = *(uint *)(lVar18 + 0x128 + lVar5);
    if ((local_198.bIsSet == false) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_ec = local_198.TypedValue;
    UMovieSceneEventSystem::AddEvent
              (this_00,*(FInstanceHandle *)(lVar18 + 0x13a + lVar5),
               (FMovieSceneEventTriggerData *)local_128);
    if (bVar9) {
      UE::MovieScene::FEntityManager::OnStructureChanged(&param_1->EntityManager);
    }
    if ((void *)local_128._24_8_ != (void *)0x0) {
      FMemory::Free((void *)local_128._24_8_);
    }
  }
LAB_14679f61f:
  FMovieSceneWarpCounter::~FMovieSceneWarpCounter(&local_d8.RootToSequenceWarpCounter);
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)
             local_d8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data,
             local_d8.RootToSequenceTransform.NestedTransforms.ArrayNum);
  if ((FMovieSceneNestedSequenceTransform *)
      local_d8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free(local_d8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data);
  }
  return;
}

// PopulateEvaluationFieldImpl @ 1467b13b0

bool __thiscall
UMovieSceneEventTriggerSection::PopulateEvaluationFieldImpl
          (UMovieSceneEventTriggerSection *this,TRange<FFrameNumber> *param_1,
          FMovieSceneEvaluationFieldEntityMetaData *param_2,
          FMovieSceneEntityComponentFieldBuilder *param_3)

{
  uchar uVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  TRangeBound<FFrameNumber> *pTVar9;
  TRange<FFrameNumber> *pTVar10;
  uint uVar11;
  longlong lVar12;
  TRange<FFrameNumber> local_68;
  TRange<FFrameNumber> local_58;
  FMovieSceneChannelData local_48;
  longlong *local_30;
  
  iVar8 = FMovieSceneEntityComponentFieldBuilder::AddMetaData(param_3,param_2);
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_48,(FMovieSceneChannel *)&this->_padding_,
             (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             (FKeyHandleLookupTable *)&this->_padding_);
  local_30 = &this->_padding_;
  if (((local_48.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
      (&this->_padding_ == (longlong *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  iVar2 = (local_48.Times)->ArrayNum;
  pFVar4 = ((local_48.Times)->AllocatorInstance).Data;
  if ((iVar2 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar11 = 0;
  if (0 < iVar2) {
    lVar12 = 0;
    do {
      if (((int)uVar11 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      uVar1 = (param_1->LowerBound).Type.Value;
      local_68.LowerBound.Value.Value = *(int *)(pFVar4 + lVar12);
      local_68.LowerBound.Type.Value = '\x01';
      if (uVar1 == '\x02') {
LAB_1467b1512:
        uVar1 = (param_1->UpperBound).Type.Value;
        pTVar9 = &param_1->UpperBound;
        local_68.UpperBound.Type.Value = '\x01';
        local_68.UpperBound.Value.Value = local_68.LowerBound.Value.Value;
        if (uVar1 != '\x02') {
          iVar3 = (param_1->UpperBound).Value.Value;
          if (iVar3 <= local_68.LowerBound.Value.Value) {
            if (iVar3 < local_68.LowerBound.Value.Value) {
              pTVar9 = &local_68.UpperBound;
            }
            if (uVar1 != '\x01') goto LAB_1467b15b9;
          }
          if ((pTVar9->Value).Value != (param_1->UpperBound).Value.Value) goto LAB_1467b15b9;
        }
        if (((int)uVar11 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        local_58.LowerBound.Type.Value = '\x01';
        local_58.LowerBound.Value.Value = *(int *)(pFVar4 + lVar12);
        local_58.UpperBound.Type.Value = '\x01';
        local_58.UpperBound.Value.Value = *(int *)(pFVar4 + lVar12);
        FMovieSceneEntityComponentFieldBuilder::AddOneShotEntity
                  (param_3,&local_58,(UObject *)&this[-1].EventChannel,uVar11,iVar8);
      }
      else {
        iVar3 = (param_1->LowerBound).Value.Value;
        pTVar10 = param_1;
        if (iVar3 < local_68.LowerBound.Value.Value) {
LAB_1467b1506:
          if ((pTVar10->LowerBound).Value.Value == (param_1->LowerBound).Value.Value)
          goto LAB_1467b1512;
        }
        else {
          if (local_68.LowerBound.Value.Value < iVar3) {
            pTVar10 = &local_68;
          }
          if (uVar1 == '\x01') goto LAB_1467b1506;
        }
      }
LAB_1467b15b9:
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 4;
    } while ((int)uVar11 < iVar2);
  }
  return true;
}

// StaticRegisterNativesUMovieSceneEventTriggerSection @ 1467c2930

void __cdecl
UMovieSceneEventTriggerSection::StaticRegisterNativesUMovieSceneEventTriggerSection(void)

{
  return;
}

// _getUObject @ 1467ca7b0

UObject * __thiscall
UMovieSceneEventTriggerSection::_getUObject(UMovieSceneEventTriggerSection *this)

{
  return (UObject *)&this[-1].EventChannel;
}

// operator() @ 1504f3520

bool __thiscall
`UMovieSceneEventTriggerSection::ImportEntityImpl'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6607546634999955418>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6607546634999955418>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

