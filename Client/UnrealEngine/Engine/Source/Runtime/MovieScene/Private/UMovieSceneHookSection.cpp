// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 14

// StaticClass @ 1461e84f0

UClass * __cdecl UMovieSceneHookSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneHookSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneHookSection",
               &Z_Registration_Info_UClass_UMovieSceneHookSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneHookSection,0x128,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneHookSection>,
               InternalVTableHelperCtorCaller<UMovieSceneHookSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneHookSection.InnerSingleton;
}

// UMovieSceneHookSection @ 1461fdbb0

UMovieSceneHookSection * __thiscall
UMovieSceneHookSection::UMovieSceneHookSection(UMovieSceneHookSection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEvaluationHook__;
  return this;
}

// UMovieSceneHookSection @ 1461fdc00

UMovieSceneHookSection * __thiscall
UMovieSceneHookSection::UMovieSceneHookSection
          (UMovieSceneHookSection *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->bRequiresRangedHook = '\0';
  this->bRequiresTriggerHooks = '\0';
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEvaluationHook__;
  return this;
}

// ~UMovieSceneHookSection @ 1461ffc20

void __thiscall UMovieSceneHookSection::~UMovieSceneHookSection(UMovieSceneHookSection *this)

{
  this->_padding_ = (longlong)&___7IMovieSceneEvaluationHook__6B_;
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
  this->_padding_ = (longlong)&___7UMovieSceneSection__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  UMovieSceneDecorationContainerObject::~UMovieSceneDecorationContainerObject
            ((UMovieSceneDecorationContainerObject *)this);
  return;
}

// GetPrivateStaticClass @ 14621bab0

UClass * __cdecl UMovieSceneHookSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneHookSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneHookSection",
               &Z_Registration_Info_UClass_UMovieSceneHookSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneHookSection,0x128,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneHookSection>,
               InternalVTableHelperCtorCaller<UMovieSceneHookSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneHookSection.InnerSingleton;
}

// GetTriggerTimes @ 14621d8c0

TArrayView<FFrameNumber_const_,int> * __thiscall
UMovieSceneHookSection::GetTriggerTimes
          (UMovieSceneHookSection *this,TArrayView<FFrameNumber_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (FFrameNumber *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// ImportEntityImpl @ 14621e3f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneHookSection::ImportEntityImpl
          (UMovieSceneHookSection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  longlong *this_00;
  TComponentTypeID<FMovieSceneEvaluationHookComponent> TVar1;
  FBuiltInComponentTypes *pFVar2;
  longlong *plVar3;
  FGuid local_58;
  undefined **local_48;
  TComponentTypeID<FMovieSceneEvaluationHookComponent> local_40;
  longlong *local_38;
  longlong *local_30;
  FGuid local_28;
  undefined1 local_18;
  undefined1 local_10;
  
  this_00 = &this[-1]._padding_;
  if (param_2->EntityID == 0xffffffff) {
    pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (longlong *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    plVar3 = &this->_padding_;
    if (this_00 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
    }
    UE::MovieScene::FEntityImportParams::GetObjectBindingID(param_2,&local_58);
    TVar1 = pFVar2->EvaluationHook;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (longlong *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (longlong *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    local_18 = 1;
    local_40 = TVar1;
    local_38 = this_00;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (longlong *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    local_10 = 1;
    local_48 = &
               ___7__TEntityBuilder_U__TAdd_UFMovieSceneEvaluationHookComponent___MovieScene_UE___MovieScene_UE__6B_
    ;
    local_28.A = local_58.A;
    local_28.B = local_58.B;
    local_28.C = local_58.C;
    local_28.D = local_58.D;
    local_30 = plVar3;
    UE::MovieScene::FImportedEntity::
    AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneEvaluationHookComponent>_>_>
              (param_3,(TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneEvaluationHookComponent>_> *)
                       &local_48);
  }
  else {
    ImportTriggerEntity((UMovieSceneHookSection *)this_00,param_1,param_2,param_3);
  }
  return;
}

// ImportRangedEntity @ 14621e540

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneHookSection::ImportRangedEntity
          (UMovieSceneHookSection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  TComponentTypeID<FMovieSceneEvaluationHookComponent> TVar1;
  FBuiltInComponentTypes *pFVar2;
  longlong *plVar3;
  FGuid local_58;
  undefined **local_48;
  TComponentTypeID<FMovieSceneEvaluationHookComponent> local_40;
  UMovieSceneHookSection *local_38;
  longlong *local_30;
  FGuid local_28;
  undefined1 local_18;
  undefined1 local_10;
  
  pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UMovieSceneHookSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  plVar3 = &this->_padding_;
  if (this == (UMovieSceneHookSection *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  UE::MovieScene::FEntityImportParams::GetObjectBindingID(param_2,&local_58);
  TVar1 = pFVar2->EvaluationHook;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UMovieSceneHookSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UMovieSceneHookSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_18 = 1;
  local_40 = TVar1;
  local_38 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UMovieSceneHookSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_10 = 1;
  local_48 = &
             ___7__TEntityBuilder_U__TAdd_UFMovieSceneEvaluationHookComponent___MovieScene_UE___MovieScene_UE__6B_
  ;
  local_28.A = local_58.A;
  local_28.B = local_58.B;
  local_28.C = local_58.C;
  local_28.D = local_58.D;
  local_30 = plVar3;
  UE::MovieScene::FImportedEntity::
  AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneEvaluationHookComponent>_>_>
            (param_3,(TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneEvaluationHookComponent>_> *)
                     &local_48);
  return;
}

// ImportTriggerEntity @ 14621ec90

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneHookSection::ImportTriggerEntity
          (UMovieSceneHookSection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  FFrameTime FVar4;
  bool bVar5;
  FGuid *pFVar6;
  UMovieSceneEvaluationHookSystem *this_00;
  UClass *pUVar7;
  FString *pFVar8;
  uint uVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  longlong lVar13;
  uint local_res8 [2];
  TOptional<FFrameTime> local_128;
  longlong local_118;
  int local_110;
  FMovieSceneTransformBreadcrumbs *local_108;
  FMovieSceneInverseSequenceTransform *local_100;
  UClass *local_f8 [2];
  UMovieSceneHookSection *local_e8;
  longlong *local_e0;
  FGuid local_d8;
  FRootInstanceHandle local_c8;
  FMovieSceneSequenceID local_c4;
  uint local_c0;
  FFrameTime local_bc;
  EEvaluationHookEvent local_b4;
  bool local_b0;
  uint *local_a8;
  longlong *local_a0;
  FGuid local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FMovieSceneInverseSequenceTransform local_58;
  
  local_res8[0] = param_2->EntityID;
  (**(code **)(this->_padding_ + 0x3a8))(this,&local_118);
  if (((int)local_res8[0] < 0) || (local_110 <= (int)local_res8[0])) {
    local_a8 = local_res8;
    local_a0 = &local_118;
    bVar5 = `UMovieSceneHookSection::ImportTriggerEntity'::__l3::<lambda_1>::operator()(&local_a8);
    if (!bVar5) {
      return;
    }
  }
  pwVar12 = L"";
  if (((param_1->InstanceRegistry).Ptr == (FInstanceRegistry *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceRegistry.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                         ,0x96,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar2 = *(longlong *)&((param_1->InstanceRegistry).Ptr)->Instances;
  lVar13 = (ulonglong)(param_2->Sequence).InstanceHandle.InstanceID * 0x140;
  local_100 = FMovieSceneContext::GetSequenceToRootSequenceTransform
                        ((FMovieSceneContext *)(lVar13 + lVar2 + 0x68),&local_58);
  local_108 = (FMovieSceneTransformBreadcrumbs *)(lVar13 + lVar2 + 0xb0);
  lVar10 = (longlong)(int)local_res8[0];
  uVar9 = 0;
  if ((int)local_res8[0] < local_110) {
    uVar9 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar4.SubFrame = 0.0;
  FVar4.FrameNumber.Value = *(uint *)(local_118 + lVar10 * 4);
  FMovieSceneInverseSequenceTransform::TryTransformTime(local_100,&local_128,FVar4,local_108);
  if (local_58.NestedTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.NestedTransforms.AllocatorInstance.Data);
  }
  if (local_128.bIsSet != false) {
    local_d8.A = 0;
    local_d8.B = 0;
    local_d8.C = 0;
    local_d8.D = 0;
    local_c8 = (FRootInstanceHandle)0xffff;
    local_b0 = false;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_e8 = this;
    local_e0 = &this->_padding_;
    pFVar6 = UE::MovieScene::FEntityImportParams::GetObjectBindingID(param_2,&local_98);
    local_d8.A = pFVar6->A;
    local_d8.B = pFVar6->B;
    local_d8.C = pFVar6->C;
    local_d8.D = pFVar6->D;
    if ((local_128.bIsSet == false) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_bc = local_128.TypedValue;
    local_b4 = Trigger;
    local_c4.Value = *(uint *)(lVar13 + 0x128 + lVar2);
    local_c0 = local_res8[0];
    local_f8[0] = Z_Construct_UClass_UMovieSceneEvaluationHookSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_f8[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_f8[0]);
    }
    this_00 = (UMovieSceneEvaluationHookSystem *)
              UMovieSceneEntitySystemLinker::LinkSystem
                        (param_1,(TSubclassOf<UMovieSceneEntitySystem>)local_f8);
    if (this_00 == (UMovieSceneEvaluationHookSystem *)0x0) {
      pFVar8 = GetTypeName<UMovieSceneEvaluationHookSystem>(&local_88);
      if ((pFVar8->Data).ArrayNum != 0) {
        pwVar12 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar12);
    }
    pUVar7 = Z_Construct_UClass_UMovieSceneEvaluationHookSystem_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar7->_padding_)) {
      pFVar8 = GetTypeName<UMovieSceneEvaluationHookSystem>(&local_78);
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      pFVar8 = GetFullNameForCastLogError<UMovieSceneEntitySystem>
                         (&local_68,(UMovieSceneEntitySystem *)this_00);
      if ((pFVar8->Data).ArrayNum != 0) {
        pwVar12 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar12,pwVar11);
    }
    UMovieSceneEvaluationHookSystem::AddEvent
              (this_00,*(FInstanceHandle *)(lVar13 + 0x13a + lVar2),
               (FMovieSceneEvaluationHookEvent *)&local_e8);
  }
  return;
}

// PopulateEvaluationFieldImpl @ 146227fd0

bool __thiscall
UMovieSceneHookSection::PopulateEvaluationFieldImpl
          (UMovieSceneHookSection *this,TRange<FFrameNumber> *param_1,
          FMovieSceneEvaluationFieldEntityMetaData *param_2,
          FMovieSceneEntityComponentFieldBuilder *param_3)

{
  longlong *plVar1;
  uchar uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  TRangeBound<FFrameNumber> *pTVar10;
  uint uVar11;
  longlong lVar12;
  TRange<FFrameNumber> *pTVar13;
  TRange<FFrameNumber> local_48;
  longlong local_38;
  int local_30;
  TRange<FFrameNumber> local_28;
  
  iVar7 = FMovieSceneEntityComponentFieldBuilder::AddMetaData(param_3,param_2);
  plVar1 = &this[-1]._padding_;
  if ((this->_padding_ & 2) != 0) {
    (**(code **)(*plVar1 + 0x3a8))(plVar1,&local_38);
    uVar11 = 0;
    if (0 < local_30) {
      lVar12 = 0;
      iVar9 = local_30;
      do {
        uVar8 = 0;
        if ((int)uVar11 < iVar9) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , iVar9 = local_30, bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        uVar2 = (param_1->LowerBound).Type.Value;
        local_48.LowerBound.Type.Value = '\x01';
        local_48.LowerBound.Value.Value = *(int *)(lVar12 + local_38);
        if (uVar2 == '\x02') {
LAB_1462280e9:
          uVar2 = (param_1->UpperBound).Type.Value;
          pTVar10 = &param_1->UpperBound;
          local_48.UpperBound.Type.Value = '\x01';
          local_48.UpperBound.Value.Value = local_48.LowerBound.Value.Value;
          if (uVar2 != '\x02') {
            iVar3 = (param_1->UpperBound).Value.Value;
            if (iVar3 <= local_48.LowerBound.Value.Value) {
              if (iVar3 < local_48.LowerBound.Value.Value) {
                pTVar10 = &local_48.UpperBound;
              }
              if (uVar2 != '\x01') goto LAB_1462281a4;
            }
            if ((pTVar10->Value).Value != (param_1->UpperBound).Value.Value) goto LAB_1462281a4;
          }
          uVar8 = 0;
          if ((int)uVar11 < iVar9) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          local_28.LowerBound.Type.Value = '\x01';
          local_28.LowerBound.Value.Value = *(int *)(local_38 + lVar12);
          local_28.UpperBound.Type.Value = '\x01';
          local_28.UpperBound.Value.Value = *(int *)(local_38 + lVar12);
          FMovieSceneEntityComponentFieldBuilder::AddOneShotEntity
                    (param_3,&local_28,(UObject *)plVar1,uVar11,iVar7);
          iVar9 = local_30;
        }
        else {
          iVar3 = (param_1->LowerBound).Value.Value;
          pTVar13 = param_1;
          if (iVar3 < local_48.LowerBound.Value.Value) {
LAB_1462280dc:
            if ((pTVar13->LowerBound).Value.Value == (param_1->LowerBound).Value.Value)
            goto LAB_1462280e9;
          }
          else {
            if (local_48.LowerBound.Value.Value < iVar3) {
              pTVar13 = &local_48;
            }
            if (uVar2 == '\x01') goto LAB_1462280dc;
          }
        }
LAB_1462281a4:
        uVar11 = uVar11 + 1;
        lVar12 = lVar12 + 4;
      } while ((int)uVar11 < iVar9);
    }
  }
  if ((this->_padding_ & 1) != 0) {
    iVar9 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity
                      (param_3,(UObject *)&this[-1]._padding_,0xffffffff);
    FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity(param_3,param_1,iVar9,iVar7);
  }
  return true;
}

// StaticRegisterNativesUMovieSceneHookSection @ 146237bf0

void __cdecl UMovieSceneHookSection::StaticRegisterNativesUMovieSceneHookSection(void)

{
  return;
}

// _getUObject @ 146241ea0

UObject * __thiscall UMovieSceneHookSection::_getUObject(UMovieSceneHookSection *this)

{
  return (UObject *)&this[-1]._padding_;
}

// _getUObject`adjustor{8}' @ 146241eb0

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UMovieSceneHookSection::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall UMovieSceneHookSection::_getUObject_adjustor_8__(UMovieSceneHookSection *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UMovieSceneHookSection *)&this[-1].field_0x120);
  return (UObject *)pUVar1;
}

// operator() @ 1504e7130

bool __thiscall
`UMovieSceneHookSection::ImportTriggerEntity'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8060557216815513561>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8060557216815513561>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

