// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 10

// StaticClass @ 146725880

UClass * __cdecl UMovieSceneCameraShakeSourceTriggerSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCameraShakeSourceTriggerSection.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCameraShakeSourceTriggerSection",
               &Z_Registration_Info_UClass_UMovieSceneCameraShakeSourceTriggerSection.InnerSingleton
               ,StaticRegisterNativesUMovieSceneCameraShakeSourceTriggerSection,0x228,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneCameraShakeSourceTriggerSection>,
               InternalVTableHelperCtorCaller<UMovieSceneCameraShakeSourceTriggerSection>,local_res8
               ,UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCameraShakeSourceTriggerSection.InnerSingleton;
}

// UMovieSceneCameraShakeSourceTriggerSection @ 1467627a0

UMovieSceneCameraShakeSourceTriggerSection * __thiscall
UMovieSceneCameraShakeSourceTriggerSection::UMovieSceneCameraShakeSourceTriggerSection
          (UMovieSceneCameraShakeSourceTriggerSection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneCameraShakeSourceTriggerChannel::FMovieSceneCameraShakeSourceTriggerChannel
            (&this->Channel);
  return this;
}

// UMovieSceneCameraShakeSourceTriggerSection @ 1467627f0

UMovieSceneCameraShakeSourceTriggerSection * __thiscall
UMovieSceneCameraShakeSourceTriggerSection::UMovieSceneCameraShakeSourceTriggerSection
          (UMovieSceneCameraShakeSourceTriggerSection *this,FObjectInitializer *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  UMovieSceneCameraShakeSourceTriggerSection *pUVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *local_18;
  FSharedReferencer<1> local_10;
  
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneCameraShakeSourceTriggerChannel::FMovieSceneCameraShakeSourceTriggerChannel
            (&this->Channel);
  pTVar6 = ::operator_new(0x68);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMovieSceneChannelProxy___00_SharedPointerInternals__6B_
    ;
    FMovieSceneChannelProxy::FMovieSceneChannelProxy<FMovieSceneCameraShakeSourceTriggerChannel>
              ((FMovieSceneChannelProxy *)(pTVar6 + 1),&this->Channel);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pUVar7 = (UMovieSceneCameraShakeSourceTriggerSection *)(*pcVar4)();
        return pUVar7;
      }
      goto LAB_14676291a;
    }
  }
  if (((pTVar8->_padding_ == 0) || (*(longlong *)&pTVar8->SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8->SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8->_padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8->SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8->SharedReferenceCount;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pTVar8->SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14676291a:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18 = pTVar8;
  local_10.ReferenceController = pTVar6;
  if ((TReferenceControllerBase<1> **)&this->_padding_ != &local_18) {
    this->_padding_ = (longlong)pTVar8;
    local_18 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return this;
}

// ~UMovieSceneCameraShakeSourceTriggerSection @ 146769fa0

void __thiscall
UMovieSceneCameraShakeSourceTriggerSection::~UMovieSceneCameraShakeSourceTriggerSection
          (UMovieSceneCameraShakeSourceTriggerSection *this)

{
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneCameraShakeSourceTriggerChannel::~FMovieSceneCameraShakeSourceTriggerChannel
            (&this->Channel);
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// GetPrivateStaticClass @ 146797d20

UClass * __cdecl UMovieSceneCameraShakeSourceTriggerSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCameraShakeSourceTriggerSection.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCameraShakeSourceTriggerSection",
               &Z_Registration_Info_UClass_UMovieSceneCameraShakeSourceTriggerSection.InnerSingleton
               ,StaticRegisterNativesUMovieSceneCameraShakeSourceTriggerSection,0x228,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneCameraShakeSourceTriggerSection>,
               InternalVTableHelperCtorCaller<UMovieSceneCameraShakeSourceTriggerSection>,local_res8
               ,UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCameraShakeSourceTriggerSection.InnerSingleton;
}

// ImportEntityImpl @ 14679d6c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneCameraShakeSourceTriggerSection::ImportEntityImpl
          (UMovieSceneCameraShakeSourceTriggerSection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  longlong *plVar1;
  FMovieSceneCameraShakeSourceTrigger *pFVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  UMovieSceneCameraShakeInstantiatorSystem *this_00;
  UClass *pUVar8;
  FGuid *pFVar9;
  FString *pFVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  uint local_res8 [2];
  FFrameTime local_f8;
  longlong local_f0;
  int local_e8;
  UClass *local_e0;
  FScriptContainerElement *local_d8;
  uint *local_d0;
  longlong *local_c8;
  FMovieSceneChannelData local_c0;
  longlong *local_a8;
  FMovieSceneChannelData local_a0;
  longlong *local_88;
  FString local_80;
  FGuid local_70;
  FString local_60;
  FString local_50;
  
  local_res8[0] = param_2->EntityID;
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_c0,(FMovieSceneChannel *)&this->_padding_,
             (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             (FKeyHandleLookupTable *)&this->_padding_);
  plVar1 = &this->_padding_;
  pwVar11 = L"";
  local_a8 = plVar1;
  if (((local_c0.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
      (plVar1 == (longlong *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar3 = (local_c0.Times)->ArrayNum;
  local_d8 = ((local_c0.Times)->AllocatorInstance).Data;
  if ((iVar3 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_a0,(FMovieSceneChannel *)&this->_padding_,
             (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             (FKeyHandleLookupTable *)&this->_padding_);
  local_88 = plVar1;
  if (((local_a0.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
      (plVar1 == (longlong *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar12 = *local_88;
  iVar4 = (int)local_88[1];
  if ((iVar4 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_f0 = lVar12;
  local_e8 = iVar4;
  if (((int)local_res8[0] < 0) || (iVar4 <= (int)local_res8[0])) {
    local_d0 = local_res8;
    local_c8 = &local_f0;
    bVar6 = `UMovieSceneCameraShakeSourceTriggerSection::ImportEntityImpl'::__l3::<lambda_1>::
            operator()(&local_d0);
    if (!bVar6) {
      return;
    }
  }
  local_e0 = UMovieSceneCameraShakeInstantiatorSystem::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e0 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_e0);
  }
  this_00 = (UMovieSceneCameraShakeInstantiatorSystem *)
            UMovieSceneEntitySystemLinker::LinkSystem
                      (param_1,(TSubclassOf<UMovieSceneEntitySystem>)&local_e0);
  if (this_00 == (UMovieSceneCameraShakeInstantiatorSystem *)0x0) {
    pFVar10 = GetTypeName<UMovieSceneCameraShakeInstantiatorSystem>(&local_80);
    if ((pFVar10->Data).ArrayNum != 0) {
      pwVar11 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar11);
  }
  pUVar8 = UMovieSceneCameraShakeInstantiatorSystem::StaticClass();
  iVar4 = (int)pUVar8->_padding_;
  if ((*(int *)(this_00->_padding_ + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar4 * 8)
      != &pUVar8->_padding_)) {
    pFVar10 = GetTypeName<UMovieSceneCameraShakeInstantiatorSystem>(&local_60);
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
    pFVar10 = GetFullNameForCastLogError<UMovieSceneEntitySystem>
                        (&local_50,(UMovieSceneEntitySystem *)this_00);
    if ((pFVar10->Data).ArrayNum != 0) {
      pwVar11 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar11,pwVar14);
  }
  lVar12 = (longlong)(int)local_res8[0];
  uVar7 = 0;
  if ((int)local_res8[0] < local_e8) {
    uVar7 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar13 = (longlong)(int)local_res8[0];
  pFVar2 = (FMovieSceneCameraShakeSourceTrigger *)(local_f0 + lVar12 * 0x28);
  uVar7 = 0;
  if ((int)local_res8[0] < iVar3) {
    uVar7 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_f8.SubFrame = 0.0;
  local_f8.FrameNumber.Value = *(int *)(local_d8 + lVar13 * 4);
  pFVar9 = UE::MovieScene::FEntityImportParams::GetObjectBindingID(param_2,&local_70);
  UMovieSceneCameraShakeInstantiatorSystem::AddShakeTrigger
            (this_00,(param_2->Sequence).InstanceHandle,pFVar9,&local_f8,pFVar2);
  UE::MovieScene::FEntityManager::OnStructureChanged(&param_1->EntityManager);
  return;
}

// PopulateEvaluationFieldImpl @ 1467b1070

bool __thiscall
UMovieSceneCameraShakeSourceTriggerSection::PopulateEvaluationFieldImpl
          (UMovieSceneCameraShakeSourceTriggerSection *this,TRange<FFrameNumber> *param_1,
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
LAB_1467b11d2:
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
            if (uVar1 != '\x01') goto LAB_1467b1279;
          }
          if ((pTVar9->Value).Value != (param_1->UpperBound).Value.Value) goto LAB_1467b1279;
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
                  (param_3,&local_58,(UObject *)&this[-1].Channel,uVar11,iVar8);
      }
      else {
        iVar3 = (param_1->LowerBound).Value.Value;
        pTVar10 = param_1;
        if (iVar3 < local_68.LowerBound.Value.Value) {
LAB_1467b11c6:
          if ((pTVar10->LowerBound).Value.Value == (param_1->LowerBound).Value.Value)
          goto LAB_1467b11d2;
        }
        else {
          if (local_68.LowerBound.Value.Value < iVar3) {
            pTVar10 = &local_68;
          }
          if (uVar1 == '\x01') goto LAB_1467b11c6;
        }
      }
LAB_1467b1279:
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 4;
    } while ((int)uVar11 < iVar2);
  }
  return true;
}

// StaticRegisterNativesUMovieSceneCameraShakeSourceTriggerSection @ 1467c2750

void __cdecl
UMovieSceneCameraShakeSourceTriggerSection::
StaticRegisterNativesUMovieSceneCameraShakeSourceTriggerSection(void)

{
  return;
}

// _getUObject @ 1467ca700

UObject * __thiscall
UMovieSceneCameraShakeSourceTriggerSection::_getUObject
          (UMovieSceneCameraShakeSourceTriggerSection *this)

{
  return (UObject *)&this[-1].Channel;
}

// operator() @ 1504f3490

bool __thiscall
`UMovieSceneCameraShakeSourceTriggerSection::ImportEntityImpl'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1781710643796115407>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1781710643796115407>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

