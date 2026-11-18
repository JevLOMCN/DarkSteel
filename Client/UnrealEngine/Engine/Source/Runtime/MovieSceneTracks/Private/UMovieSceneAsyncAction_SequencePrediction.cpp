// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 25

// StaticClass @ 1467cd0a0

UClass * __cdecl UMovieSceneAsyncAction_SequencePrediction::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneAsyncAction_SequencePrediction.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneAsyncAction_SequencePrediction",
               &Z_Registration_Info_UClass_UMovieSceneAsyncAction_SequencePrediction.InnerSingleton,
               StaticRegisterNativesUMovieSceneAsyncAction_SequencePrediction,0x90,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneAsyncAction_SequencePrediction>,
               InternalVTableHelperCtorCaller<UMovieSceneAsyncAction_SequencePrediction>,local_res8,
               UBlueprintAsyncActionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneAsyncAction_SequencePrediction.InnerSingleton;
}

// UMovieSceneAsyncAction_SequencePrediction @ 146808760

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMovieSceneAsyncAction_SequencePrediction * __thiscall
UMovieSceneAsyncAction_SequencePrediction::UMovieSceneAsyncAction_SequencePrediction
          (UMovieSceneAsyncAction_SequencePrediction *this,FVTableHelper *param_1)

{
  UBlueprintAsyncActionBase::UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneAsyncAction_SequencePrediction__6B_;
  *(undefined8 *)&this->Result = 0;
  *(undefined8 *)&(this->Result).field_0x8 = 0;
  *(undefined8 *)&(this->Result).field_0x10 = 0;
  *(undefined8 *)&this->Failure = 0;
  *(undefined8 *)&(this->Failure).field_0x8 = 0;
  *(undefined8 *)&(this->Failure).field_0x10 = 0;
  (this->ImportedEntities).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImportedEntities).ArrayNum = 0;
  (this->ImportedEntities).ArrayMax = 0;
  (this->SequencePlayer).field0_0x0.DebugPtr = (UMovieSceneSequencePlayer *)0x0;
  (this->SceneComponent).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  (this->RootPredictedTime).FrameNumber = 0;
  (this->RootPredictedTime).SubFrame = 0.0;
  return this;
}

// UMovieSceneAsyncAction_SequencePrediction @ 1468087c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMovieSceneAsyncAction_SequencePrediction * __thiscall
UMovieSceneAsyncAction_SequencePrediction::UMovieSceneAsyncAction_SequencePrediction
          (UMovieSceneAsyncAction_SequencePrediction *this,FObjectInitializer *param_1)

{
  UBlueprintAsyncActionBase::UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneAsyncAction_SequencePrediction__6B_;
  *(undefined8 *)&this->Result = 0;
  *(undefined8 *)&(this->Result).field_0x8 = 0;
  *(undefined8 *)&(this->Result).field_0x10 = 0;
  *(undefined8 *)&this->Failure = 0;
  *(undefined8 *)&(this->Failure).field_0x8 = 0;
  *(undefined8 *)&(this->Failure).field_0x10 = 0;
  (this->ImportedEntities).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImportedEntities).ArrayNum = 0;
  (this->ImportedEntities).ArrayMax = 0;
  (this->SequencePlayer).field0_0x0.DebugPtr = (UMovieSceneSequencePlayer *)0x0;
  (this->SceneComponent).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  (this->RootPredictedTime).FrameNumber = 0;
  (this->RootPredictedTime).SubFrame = 0.0;
  return this;
}

// ~UMovieSceneAsyncAction_SequencePrediction @ 14680f450

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMovieSceneAsyncAction_SequencePrediction::~UMovieSceneAsyncAction_SequencePrediction
          (UMovieSceneAsyncAction_SequencePrediction *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UMovieSceneAsyncAction_SequencePrediction__6B_;
  pFVar1 = (this->ImportedEntities).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->Failure).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Failure);
  pvVar2 = *(void **)&(this->Result).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Result);
  UBlueprintAsyncActionBase::~UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this);
  return;
}

// operator() @ 146813550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`UMovieSceneAsyncAction_SequencePrediction::ImportTransformEntities'::__l2::<lambda_1>::operator()
          (void *this,FMovieSceneEvaluationFieldEntityQuery *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  UMovieSceneSection *this_00;
  UClass *pUVar8;
  UObject *this_01;
  IMovieSceneEntityProvider *this_02;
  uint uVar9;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar10;
  FMovieSceneEvaluationFieldSharedEntityMetaData *pFVar11;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 *local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  uint local_b8;
  FInterrogationKey local_b4;
  FInterrogationInstance local_a8;
  FEntityImportSequenceParams local_a0;
  FImportedEntity local_88;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_128;
  this_00 = (UMovieSceneSection *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  if (this_00 != (UMovieSceneSection *)0x0) {
    pUVar8 = Z_Construct_UClass_UMovieScene3DTransformSection_NoRegister();
    iVar7 = (int)pUVar8->_padding_;
    if (((iVar7 <= *(int *)(this_00->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar7 * 8) ==
         &pUVar8->_padding_)) && (bVar5 = MovieSceneHelpers::IsSectionKeyable(this_00), bVar5)) {
      uVar1 = (param_1->Entity).SharedMetaDataIndex;
      if (uVar1 != 0xffffffff) {
        lVar2 = *(longlong *)((longlong)this + 0x38);
        iVar7 = *(int *)(lVar2 + 0xe8);
        uVar9 = 0;
        if ((int)uVar1 < iVar7) {
          uVar9 = ~uVar1 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (local_108 = (undefined1 *)(longlong)(int)uVar1,
           local_100 = (undefined1 *)(longlong)iVar7,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pFVar11 = (FMovieSceneEvaluationFieldSharedEntityMetaData *)
                  ((longlong)(int)uVar1 * 0x10 + *(longlong *)(lVar2 + 0xe0));
        if (((pFVar11 != (FMovieSceneEvaluationFieldSharedEntityMetaData *)0x0) &&
            (((*(uint *)((longlong)this + 0x30) == (pFVar11->ObjectBindingID).D &&
              *(uint *)((longlong)this + 0x2c) == (pFVar11->ObjectBindingID).C) &&
             *(uint *)((longlong)this + 0x28) == (pFVar11->ObjectBindingID).B) &&
             *(uint *)((longlong)this + 0x24) == (pFVar11->ObjectBindingID).A)) &&
           (this_01 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_1), this_01 != (UObject *)0x0)) {
          pUVar8 = Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
          this_02 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_01,pUVar8);
          if (this_02 != (IMovieSceneEntityProvider *)0x0) {
            local_a0._16_4_ = *(undefined4 *)((longlong)this + 0x20);
            local_a0._0_8_ = *(undefined8 *)((longlong)this + 0x10);
            local_a0._8_8_ = *(undefined8 *)((longlong)this + 0x18);
            local_b8 = (param_1->Entity).Key.EntityID;
            uVar1 = param_1->MetaDataIndex;
            local_a8.Sequence = (UMovieSceneSequence *)0x0;
            if (uVar1 == 0xffffffff) {
              local_c8._0_8_ = (FMovieSceneEvaluationFieldEntityMetaData *)0x0;
            }
            else {
              lVar2 = *(longlong *)((longlong)this + 0x38);
              iVar7 = *(int *)(lVar2 + 0xd8);
              uVar9 = 0;
              if ((int)uVar1 < iVar7) {
                uVar9 = ~uVar1 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (local_108 = (undefined1 *)(longlong)(int)uVar1,
                 local_100 = (undefined1 *)(longlong)iVar7,
                 bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
              local_c8._0_8_ = *(longlong *)(lVar2 + 0xd0) + (longlong)(int)uVar1 * 0x48;
            }
            local_b4 = *(FInterrogationKey *)((longlong)this + 0x40);
            local_88.Builders.AllocatorInstance.SecondaryData =
                 (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0;
            local_88.Builders.ArrayNum = 0;
            local_88.Builders.ArrayMax = 1;
            local_c8._8_8_ = pFVar11;
            IMovieSceneEntityProvider::InterrogateEntity
                      (this_02,*(UMovieSceneEntitySystemLinker **)((longlong)this + 8),
                       (FEntityImportParams *)local_c8,&local_88);
            if (local_88.Builders.ArrayNum != 0) {
              UMovieSceneSection::BuildDefaultComponents
                        (this_00,*(UMovieSceneEntitySystemLinker **)((longlong)this + 8),
                         (FEntityImportParams *)local_c8,&local_88);
              UE::MovieScene::FImportedEntity::Manufacture
                        (&local_88,(FEntityImportParams *)local_d8,(FEntityManager *)local_c8);
              lVar2 = *(longlong *)this;
              puVar3 = *(undefined1 **)(lVar2 + 0x60);
              if ((puVar3 <= local_d8) && (local_d8 < puVar3 + (longlong)*(int *)(lVar2 + 0x6c) * 2)
                 ) {
                local_f0 = (longlong)*(int *)(lVar2 + 0x68);
                local_e8 = 2;
                local_108 = local_d8;
                local_100 = puVar3;
                local_f8 = (longlong)*(int *)(lVar2 + 0x6c);
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar5) {
                  pcVar4 = (code *)swi(3);
                  uVar6 = (*pcVar4)();
                  return (bool)uVar6;
                }
              }
              iVar7 = *(int *)(lVar2 + 0x68);
              if (iVar7 == *(int *)(lVar2 + 0x6c)) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x202,(ForAnyElementType *)(lVar2 + 0x60),(int *)(lVar2 + 0x6c));
              }
              *(int *)(lVar2 + 0x68) = iVar7 + 1;
              *(undefined2 *)(*(longlong *)(lVar2 + 0x60) + (longlong)iVar7 * 2) = local_d8._0_2_;
              **(int **)((longlong)this + 0x48) = **(int **)((longlong)this + 0x48) + 1;
            }
            FVar10 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)&local_88;
            if (local_88.Builders.AllocatorInstance.SecondaryData !=
                (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
              FVar10 = local_88.Builders.AllocatorInstance.SecondaryData;
            }
            DestructItems<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>,int>
                      ((TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *)FVar10,
                       local_88.Builders.ArrayNum);
            if (local_88.Builders.AllocatorInstance.SecondaryData !=
                (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
              FMemory::Free((void *)local_88.Builders.AllocatorInstance.SecondaryData);
            }
          }
        }
      }
    }
  }
  return true;
}

// GetPrivateStaticClass @ 1468356a0

UClass * __cdecl UMovieSceneAsyncAction_SequencePrediction::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneAsyncAction_SequencePrediction.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneAsyncAction_SequencePrediction",
               &Z_Registration_Info_UClass_UMovieSceneAsyncAction_SequencePrediction.InnerSingleton,
               StaticRegisterNativesUMovieSceneAsyncAction_SequencePrediction,0x90,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneAsyncAction_SequencePrediction>,
               InternalVTableHelperCtorCaller<UMovieSceneAsyncAction_SequencePrediction>,local_res8,
               UBlueprintAsyncActionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneAsyncAction_SequencePrediction.InnerSingleton;
}

// ImportEntities @ 1468394a0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMovieSceneAsyncAction_SequencePrediction::ImportEntities
          (UMovieSceneAsyncAction_SequencePrediction *this,FInterrogationChannels *param_1)

{
  USceneComponent *pUVar1;
  USceneComponent *pUVar2;
  AActor *this_00;
  code *pcVar3;
  bool bVar4;
  FInterrogationChannel FVar5;
  int iVar6;
  int iVar7;
  undefined4 extraout_var;
  FName *pFVar8;
  undefined4 extraout_var_00;
  UWorld *pUVar9;
  uint uVar10;
  FInterrogationChannel FStackX_18;
  undefined1 auStack_58 [8];
  FInterrogationKey FStack_50;
  FName FStack_48;
  FString FStack_40;
  FMovieScenePropertyBinding FStack_30;
  
  pUVar1 = (this->SceneComponent).field0_0x0.DebugPtr;
  if (pUVar1 == (USceneComponent *)0x0) {
    return;
  }
  if ((pUVar1 == (USceneComponent *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSceneComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieScenePredictionSystem.cpp"
                         ,0x174,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar2 = (pUVar1->AttachParent).field0_0x0.DebugPtr;
  if (pUVar2 != (USceneComponent *)0x0) {
    ImportTransformHierarchy(this,param_1,pUVar2);
  }
  uVar10 = 0xffffffff;
  if ((pUVar1->AttachParent).field0_0x0.DebugPtr != (USceneComponent *)0x0) {
    FVar5 = UE::MovieScene::FInterrogationChannels::FindChannel(param_1,(UObject *)&stack0x00000020)
    ;
    uVar10 = *(uint *)CONCAT44(extraout_var,FVar5.Value);
  }
  UE::MovieScene::FInterrogationChannels::FindChannel(param_1,(UObject *)&FStackX_18);
  if (FStackX_18.Value == -1) {
    ::FString::FString(&FStack_40,L"Transform");
    pFVar8 = ::FName::FName(&FStack_48,"Transform");
    FMovieScenePropertyBinding::FMovieScenePropertyBinding(&FStack_30,*pFVar8,&FStack_40);
    FVar5 = UE::MovieScene::FInterrogationChannels::AllocateChannel
                      (param_1,(UObject *)auStack_58,(int)pUVar1,
                       (FMovieScenePropertyBinding *)(ulonglong)uVar10);
    FStackX_18.Value = *(int *)CONCAT44(extraout_var_00,FVar5.Value);
    if (FStack_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_40.Data.AllocatorInstance.Data);
    }
    if (FStackX_18.Value == -1) {
      return;
    }
  }
  FStack_50.InterrogationIndex = this->InterrogationIndex;
  FStack_50.Channel.Value = FStackX_18.Value;
  iVar6 = ImportTransformEntities(this,(UObject *)pUVar1,(UObject *)pUVar1->_padding_,&FStack_50);
  this_00 = (AActor *)pUVar1->_padding_;
  if ((this_00 != (AActor *)0x0) && (pUVar1 == (this_00->RootComponent).field0_0x0.DebugPtr)) {
    pUVar9 = AActor::GetWorld(this_00);
    iVar7 = ImportTransformEntities(this,(UObject *)this_00,(UObject *)pUVar9,&FStack_50);
    iVar6 = iVar6 + iVar7;
  }
  if (0 < iVar6) {
    UE::MovieScene::FInterrogationChannels::ActivateChannel(param_1,FStackX_18);
  }
  return;
}

// ImportLocalTransforms @ 1468394c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMovieSceneAsyncAction_SequencePrediction::ImportLocalTransforms
          (UMovieSceneAsyncAction_SequencePrediction *this,FInterrogationChannels *param_1,
          USceneComponent *param_2)

{
  AActor *this_00;
  code *pcVar1;
  bool bVar2;
  FInterrogationChannel FVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_var;
  FName *pFVar6;
  undefined4 extraout_var_00;
  UWorld *pUVar7;
  uint uVar8;
  FInterrogationChannel local_res18;
  undefined1 local_58 [8];
  FInterrogationKey local_50;
  FName local_48;
  FString local_40;
  FMovieScenePropertyBinding local_30;
  
  if ((param_2 == (USceneComponent *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSceneComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieScenePredictionSystem.cpp"
                         ,0x14d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar8 = 0xffffffff;
  if ((param_2->AttachParent).field0_0x0.DebugPtr != (USceneComponent *)0x0) {
    FVar3 = UE::MovieScene::FInterrogationChannels::FindChannel(param_1,(UObject *)&stack0x00000020)
    ;
    uVar8 = *(uint *)CONCAT44(extraout_var,FVar3.Value);
  }
  UE::MovieScene::FInterrogationChannels::FindChannel(param_1,(UObject *)&local_res18);
  if (local_res18.Value == -1) {
    ::FString::FString(&local_40,L"Transform");
    pFVar6 = ::FName::FName(&local_48,"Transform");
    FMovieScenePropertyBinding::FMovieScenePropertyBinding(&local_30,*pFVar6,&local_40);
    FVar3 = UE::MovieScene::FInterrogationChannels::AllocateChannel
                      (param_1,(UObject *)local_58,(int)param_2,
                       (FMovieScenePropertyBinding *)(ulonglong)uVar8);
    local_res18.Value = *(int *)CONCAT44(extraout_var_00,FVar3.Value);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    if (local_res18.Value == -1) {
      return;
    }
  }
  local_50.InterrogationIndex = this->InterrogationIndex;
  local_50.Channel.Value = local_res18.Value;
  iVar4 = ImportTransformEntities(this,(UObject *)param_2,(UObject *)param_2->_padding_,&local_50);
  this_00 = (AActor *)param_2->_padding_;
  if ((this_00 != (AActor *)0x0) && (param_2 == (this_00->RootComponent).field0_0x0.DebugPtr)) {
    pUVar7 = AActor::GetWorld(this_00);
    iVar5 = ImportTransformEntities(this,(UObject *)this_00,(UObject *)pUVar7,&local_50);
    iVar4 = iVar4 + iVar5;
  }
  if (0 < iVar4) {
    UE::MovieScene::FInterrogationChannels::ActivateChannel(param_1,local_res18);
  }
  return;
}

// ImportTransformEntities @ 146839650

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
UMovieSceneAsyncAction_SequencePrediction::ImportTransformEntities
          (UMovieSceneAsyncAction_SequencePrediction *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportSequenceParams *param_2,FGuid *param_3,FFrameTime param_4,
          FMovieSceneEntityComponentField *param_5,FInterrogationKey *param_6)

{
  int local_res8 [8];
  TRange<FFrameNumber> local_78;
  code *local_68;
  UMovieSceneAsyncAction_SequencePrediction **local_60;
  UMovieSceneAsyncAction_SequencePrediction *local_58;
  UMovieSceneEntitySystemLinker *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined8 uStack_2c;
  FMovieSceneEntityComponentField *local_20;
  FInterrogationKey local_18;
  int *local_10;
  
  local_48._0_4_ = param_2->HierarchicalBias;
  local_48._4_4_ = param_2->SequenceID;
  uStack_40._0_2_ = (param_2->InstanceHandle).InstanceID;
  uStack_40._2_2_ = (param_2->InstanceHandle).InstanceSerial;
  uStack_40._4_4_ = param_2->RootInstanceHandle;
  local_38._0_1_ = param_2->DefaultCompletionMode;
  local_38._1_1_ = param_2->SubSectionFlags;
  local_38._2_2_ = *(undefined2 *)&param_2->field_0x12;
  local_34._0_4_ = param_3->A;
  local_34._4_4_ = param_3->B;
  uStack_2c._0_4_ = param_3->C;
  uStack_2c._4_4_ = param_3->D;
  local_78.LowerBound.Type.Value = '\x02';
  local_18 = *param_6;
  local_10 = local_res8;
  local_60 = &local_58;
  local_78.LowerBound.Value.Value = 0;
  local_78.UpperBound.Type.Value = '\x02';
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`UMovieSceneAsyncAction_SequencePrediction::ImportTransformEntities'::__l2::<lambda_1>,bool,FMovieSceneEvaluationFieldEntityQuery_const_&>
             ::Call;
  local_res8[0] = 0;
  local_20 = param_5;
  local_78.UpperBound.Value.Value = 0;
  local_58 = this;
  local_50 = param_1;
  FMovieSceneEntityComponentField::QueryPersistentEntities
            (param_5,param_4.FrameNumber,
             (TFunctionRef<bool___cdecl(FMovieSceneEvaluationFieldEntityQuery_const_&)> *)&local_68,
             &local_78);
  return local_res8[0];
}

// ImportTransformEntities @ 146839700

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
UMovieSceneAsyncAction_SequencePrediction::ImportTransformEntities
          (UMovieSceneAsyncAction_SequencePrediction *this,UObject *param_1,UObject *param_2,
          FInterrogationKey *param_3)

{
  short sVar1;
  UMovieSceneSequencePlayer *pUVar2;
  code *pcVar3;
  TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry> *this_00;
  FMovieSceneEvaluationTreeNode *pFVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  FMovieSceneRootEvaluationTemplateInstance *this_01;
  UClass *pUVar10;
  TOptional<FMovieSceneSpawnableAnnotation> *pTVar11;
  FMovieSceneSpawnRegister *this_02;
  UObject *pUVar12;
  UMovieSceneCompiledDataManager *this_03;
  UMovieSceneSequence *pUVar13;
  undefined8 *puVar14;
  FMovieSceneEntityComponentField *pFVar15;
  TArrayView<FMovieSceneSubSequenceTreeEntry_const_,int> *pTVar16;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *pTVar17;
  FGuid *pFVar18;
  UObject *pUVar19;
  undefined1 *puVar20;
  UObject *pUVar21;
  undefined1 *puVar22;
  int iVar23;
  longlong lVar24;
  FMovieSceneSubSequenceData *this_04;
  longlong lVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint local_2d8;
  FMovieSceneCompiledDataID local_2cc;
  uint local_2c8;
  FMovieSceneCompiledDataID local_2c4;
  int local_2c0 [2];
  FGuid local_2b8;
  TOptional<FMovieSceneSpawnableAnnotation> local_2a8;
  UMovieSceneCompiledDataManager *local_288;
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry> local_280;
  UMovieSceneEntitySystemLinker *local_268;
  TRange<FFrameNumber> local_260;
  TRange<FFrameNumber> local_250;
  FGuid local_240;
  UMovieSceneAsyncAction_SequencePrediction *local_228;
  UMovieSceneEntitySystemLinker *local_220;
  int local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined2 local_208;
  byte local_206;
  undefined1 local_205;
  undefined8 local_204;
  undefined8 uStack_1fc;
  FMovieSceneEntityComponentField *local_1f0;
  FInterrogationKey local_1e8;
  int *local_1e0;
  UMovieSceneAsyncAction_SequencePrediction *local_1d8;
  UMovieSceneEntitySystemLinker *local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined2 local_1b8;
  byte local_1b6;
  undefined1 local_1b5;
  FGuid local_1b4;
  FMovieSceneEntityComponentField *local_1a0;
  FInterrogationKey local_198;
  uint *local_190;
  FSharedPlaybackState *local_188;
  TReferenceControllerBase<1> *local_180;
  code *local_178;
  UMovieSceneAsyncAction_SequencePrediction **local_170;
  uint local_168;
  uint uStack_164;
  uint uStack_160;
  uint uStack_15c;
  FSharedPlaybackState *local_158;
  TReferenceControllerBase<1> *local_150;
  code *local_148;
  UMovieSceneAsyncAction_SequencePrediction **local_140;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_138;
  FGuid local_128;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_118;
  FGuid local_108 [2];
  byte local_e6;
  undefined1 local_e5;
  undefined1 local_e0 [16];
  TArrayView<FMovieSceneSubSequenceTreeEntry_const_,int> local_d0;
  TArrayView<FMovieSceneSubSequenceTreeEntry_const_,int> local_c0;
  TArrayView<FMovieSceneSubSequenceTreeEntry_const_,int> local_b0;
  TArrayView<FMovieSceneSubSequenceTreeEntry_const_,int> local_a0;
  undefined1 local_90 [16];
  FMovieSceneEvaluationTreeRangeIterator local_80;
  TOptional<FMovieSceneSpawnableAnnotation> local_60;
  
  pUVar21 = (UObject *)0x0;
  pUVar2 = (this->SequencePlayer).field0_0x0.DebugPtr;
  local_2d8 = 0;
  pUVar19 = (UObject *)&pUVar2->_padding_;
  if (pUVar2 == (UMovieSceneSequencePlayer *)0x0) {
    pUVar19 = pUVar21;
  }
  this_01 = (FMovieSceneRootEvaluationTemplateInstance *)
            (**(code **)(*(longlong *)pUVar19 + 0x18))();
  local_2a8.bIsSet = false;
  if (param_1 == (UObject *)0x0) {
LAB_146839796:
    pUVar19 = pUVar21;
  }
  else {
    pUVar10 = Z_Construct_UClass_AActor_NoRegister();
    iVar9 = (int)pUVar10->_padding_;
    if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar9) ||
       (pUVar19 = param_1,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar9 * 8) !=
       &pUVar10->_padding_)) goto LAB_146839796;
  }
  if (pUVar19 != (UObject *)0x0) {
    pTVar11 = FMovieSceneSpawnableAnnotation::Find(&local_60,pUVar19);
    if (pTVar11 == &local_2a8) {
      if (local_2a8.bIsSet != false) goto LAB_1468397fd;
    }
    else {
      if (pTVar11->bIsSet != false) {
        local_2a8.TypedValue.ObjectBindingID.A = (pTVar11->TypedValue).ObjectBindingID.A;
        local_2a8.TypedValue.ObjectBindingID.B = (pTVar11->TypedValue).ObjectBindingID.B;
        local_2a8.TypedValue.ObjectBindingID.C = (pTVar11->TypedValue).ObjectBindingID.C;
        local_2a8.TypedValue.ObjectBindingID.D = (pTVar11->TypedValue).ObjectBindingID.D;
        local_2a8.TypedValue.OriginatingSequence.WeakPtr =
             (pTVar11->TypedValue).OriginatingSequence.WeakPtr;
        local_2a8.TypedValue.SequenceID.Value = (pTVar11->TypedValue).SequenceID.Value;
        local_2a8.bIsSet = true;
LAB_1468397fd:
        pUVar2 = (this->SequencePlayer).field0_0x0.DebugPtr;
        pUVar12 = (UObject *)&pUVar2->_padding_;
        if (pUVar2 == (UMovieSceneSequencePlayer *)0x0) {
          pUVar12 = pUVar21;
        }
        this_02 = (FMovieSceneSpawnRegister *)(**(code **)(*(longlong *)pUVar12 + 0x68))();
        if (local_2a8.bIsSet == false) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            );
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            iVar9 = (*pcVar3)();
            return iVar9;
          }
          if ((local_2a8.bIsSet == false) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar7)) {
            pcVar3 = (code *)swi(3);
            iVar9 = (*pcVar3)();
            return iVar9;
          }
        }
        FMovieSceneSpawnRegister::FindSpawnedObject
                  (this_02,&local_240,(FMovieSceneSequenceID *)&local_2a8,(int)&local_2a8 + 0x18);
        pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_240);
        if (pUVar12 == pUVar19) goto LAB_1468398a4;
      }
      if (local_2a8.bIsSet != false) {
        local_2a8.bIsSet = false;
      }
    }
  }
LAB_1468398a4:
  local_268 = FMovieSceneRootEvaluationTemplateInstance::GetEntitySystemLinker(this_01);
  this_03 = FMovieSceneRootEvaluationTemplateInstance::GetCompiledDataManager(this_01);
  local_288 = this_03;
  FMovieSceneRootEvaluationTemplateInstance::GetCompiledDataID(this_01);
  if ((-1 < local_2cc.Value) &&
     (local_2cc.Value < *(int *)&(this_03->CompiledDataEntries).field_0x28)) {
    if ((*(int *)&(this_03->CompiledDataEntries).field_0x28 <= local_2cc.Value) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      iVar9 = (*pcVar3)();
      return iVar9;
    }
    puVar20 = *(undefined1 **)&(this_03->CompiledDataEntries).field_0x20;
    puVar22 = &(this_03->CompiledDataEntries).field_0x10;
    if (puVar20 != (undefined1 *)0x0) {
      puVar22 = puVar20;
    }
    if ((*(uint *)(puVar22 +
                  (longlong)((int)(local_2cc.Value + (local_2cc.Value >> 0x1f & 0x1fU)) >> 5) * 4)
         >> (local_2cc.Value & 0x1fU) & 1) != 0) goto LAB_14683995e;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("CompiledDataEntries.IsValidIndex(DataID.Value)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Compilation\\MovieSceneCompiledDataManager.h"
                     ,0xe1,L"");
  if (bVar7) {
    pcVar3 = (code *)swi(3);
    iVar9 = (*pcVar3)();
    return iVar9;
  }
LAB_14683995e:
  pUVar13 = FMovieSceneCompiledDataEntry::GetSequence
                      ((FMovieSceneCompiledDataEntry *)
                       ((longlong)local_2cc.Value * 0x30 +
                       *(longlong *)&this_03->CompiledDataEntries));
  if (pUVar13 != (UMovieSceneSequence *)0x0) {
    if ((local_2a8.bIsSet == false) || (local_2a8.TypedValue.SequenceID.Value != 0)) {
      pcVar3 = *(code **)(pUVar13->_padding_ + 0x2e0);
      pTVar17 = IMovieScenePlayer::GetSharedPlaybackState
                          ((IMovieScenePlayer *)
                           &((this->SequencePlayer).field0_0x0.DebugPtr)->_padding_,&local_138);
      local_188 = pTVar17->Object;
      local_180 = (pTVar17->SharedReferenceCount).ReferenceController;
      if (local_180 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_180->SharedReferenceCount = (atomic<int>)((int)local_180->SharedReferenceCount + 1);
        UNLOCK();
      }
      puVar14 = (undefined8 *)(*pcVar3)(pUVar13,local_e0,param_1,&local_188);
      this_03 = local_288;
      local_2b8._0_8_ = *puVar14;
      local_2b8._8_8_ = puVar14[1];
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_138.SharedReferenceCount.ReferenceController);
      uVar26 = local_2b8.A;
      uVar27 = local_2b8.B;
      uVar28 = local_2b8.C;
      uVar29 = local_2b8.D;
    }
    else {
      local_108[0].A = local_2a8.TypedValue.ObjectBindingID.A;
      local_108[0].B = local_2a8.TypedValue.ObjectBindingID.B;
      uVar5 = local_108[0]._0_8_;
      local_108[0].C = local_2a8.TypedValue.ObjectBindingID.C;
      local_108[0].D = local_2a8.TypedValue.ObjectBindingID.D;
      uVar6 = local_108[0]._8_8_;
      local_108[0].A = local_2a8.TypedValue.ObjectBindingID.A;
      local_108[0].B = local_2a8.TypedValue.ObjectBindingID.B;
      local_108[0].C = local_2a8.TypedValue.ObjectBindingID.C;
      local_108[0].D = local_2a8.TypedValue.ObjectBindingID.D;
      local_2b8.A = local_2a8.TypedValue.ObjectBindingID.A;
      local_2b8.B = local_2a8.TypedValue.ObjectBindingID.B;
      local_2b8.C = local_2a8.TypedValue.ObjectBindingID.C;
      local_2b8.D = local_2a8.TypedValue.ObjectBindingID.D;
      uVar26 = local_108[0].A;
      uVar27 = local_108[0].B;
      uVar28 = local_108[0].C;
      uVar29 = local_108[0].D;
      local_108[0]._0_8_ = uVar5;
      local_108[0]._8_8_ = uVar6;
    }
    if ((((uVar29 != 0 || uVar28 != 0) || uVar27 != 0) || uVar26 != 0) &&
       (pFVar15 = UMovieSceneCompiledDataManager::FindEntityComponentField(this_03,local_2cc),
       pFVar15 != (FMovieSceneEntityComponentField *)0x0)) {
      local_1d0 = local_268;
      local_2c8 = 0;
      local_1c8 = 0;
      local_198 = *param_3;
      local_190 = &local_2c8;
      local_170 = &local_1d8;
      local_178 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UMovieSceneAsyncAction_SequencePrediction::ImportTransformEntities'::__l2::<lambda_1>,bool,FMovieSceneEvaluationFieldEntityQuery_const_&>
                  ::Call;
      local_1c0 = 0xffff;
      local_1bc = 0xffff;
      local_1b8 = 0;
      local_1b5 = local_e5;
      local_1b4.A = local_2b8.A;
      local_1b4.B = local_2b8.B;
      local_1b4.C = local_2b8.C;
      local_1b4.D = local_2b8.D;
      local_260.LowerBound.Type.Value = '\x02';
      local_260.LowerBound.Value.Value = 0;
      local_260.UpperBound.Type.Value = '\x02';
      local_260.UpperBound.Value.Value = 0;
      local_1d8 = this;
      local_1b6 = local_e6 & 0xf8;
      local_1a0 = pFVar15;
      FMovieSceneEntityComponentField::QueryPersistentEntities
                (pFVar15,(FFrameNumber)(this->RootPredictedTime).FrameNumber.Value,
                 (TFunctionRef<bool___cdecl(FMovieSceneEvaluationFieldEntityQuery_const_&)> *)
                 &local_178,&local_260);
      pUVar21 = (UObject *)(ulonglong)local_2c8;
      local_2d8 = local_2c8;
    }
  }
  bVar7 = false;
  iVar9 = (int)pUVar21;
  if (*(int *)&(this_03->Hierarchies).field_0x8 != *(int *)&(this_03->Hierarchies).field_0x34) {
    puVar20 = *(undefined1 **)&(this_03->Hierarchies).field_0x40;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = &(this_03->Hierarchies).field_0x38;
    }
    iVar23 = *(int *)(puVar20 +
                     (ulonglong)(*(int *)&(this_03->Hierarchies).field_0x48 - 1U & local_2cc.Value)
                     * 4);
    if (iVar23 != -1) {
      lVar25 = *(longlong *)&this_03->Hierarchies;
      do {
        if (*(int *)((longlong)iVar23 * 0x150 + lVar25) == local_2cc.Value) {
          if ((iVar23 != -1) &&
             (lVar25 = (longlong)iVar23 * 0x150 + lVar25, lVar24 = lVar25 + 8, lVar25 != 0))
          goto LAB_146839bac;
          break;
        }
        iVar23 = *(int *)((longlong)iVar23 * 0x150 + 0x148 + lVar25);
      } while (iVar23 != -1);
    }
  }
  lVar24 = 0;
LAB_146839bac:
  if (lVar24 != 0) {
    local_2b8._0_8_ = lVar24;
    FMovieSceneEvaluationTree::IterateFromTime
              ((FMovieSceneEvaluationTree *)(lVar24 + 0x18),&local_80,
               (FFrameNumber)(this->RootPredictedTime).FrameNumber.Value);
    TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry>::
    TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry>
              (&local_280,
               (TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry> *)(lVar24 + 0x18),
               local_80.CurrentNodeHandle);
    while (pFVar4 = local_280.CurrentNode, this_00 = local_280.Tree, iVar9 = (int)pUVar21,
          local_280.CurrentNode != (FMovieSceneEvaluationTreeNode *)0x0) {
      pTVar16 = TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry>::GetDataForSingleNode
                          (local_280.Tree,&local_d0,local_280.CurrentNode);
      iVar9 = local_280.DataIndex;
      lVar25 = (longlong)local_280.DataIndex;
      if (local_280.DataIndex < 0) {
        return local_2d8;
      }
      if (pTVar16->ArrayNum <= local_280.DataIndex) {
        return local_2d8;
      }
      pTVar16 = TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry>::GetDataForSingleNode
                          (this_00,&local_c0,pFVar4);
      uVar26 = 0;
      if (iVar9 < pTVar16->ArrayNum) {
        uVar26 = (uint)~iVar9 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        iVar9 = (*pcVar3)();
        return iVar9;
      }
      if (pTVar16->DataPtr[lVar25].Flags == None) {
        pTVar16 = TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry>::GetDataForSingleNode
                            (this_00,&local_b0,pFVar4);
        uVar26 = 0;
        if (iVar9 < pTVar16->ArrayNum) {
          uVar26 = (uint)~iVar9 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          iVar9 = (*pcVar3)();
          return iVar9;
        }
        uVar26 = pTVar16->DataPtr[iVar9].SequenceID.Value;
        if (uVar26 == 0) goto LAB_14683a0bf;
        if (*(int *)(lVar24 + 0xa0) != *(int *)(lVar24 + 0xcc)) {
          lVar25 = lVar24 + 0xd0;
          if (*(longlong *)(lVar24 + 0xd8) != 0) {
            lVar25 = *(longlong *)(lVar24 + 0xd8);
          }
          iVar23 = *(int *)(lVar25 + (ulonglong)(*(int *)(lVar24 + 0xe0) - 1U & uVar26) * 4);
          if (iVar23 != -1) {
            lVar25 = *(longlong *)(lVar24 + 0x98);
            do {
              if (*(uint *)((longlong)iVar23 * 0x120 + lVar25) == uVar26) {
                if ((iVar23 != -1) &&
                   (lVar25 = (longlong)iVar23 * 0x120 + lVar25,
                   this_04 = (FMovieSceneSubSequenceData *)(lVar25 + 8), lVar25 != 0))
                goto LAB_146839dbe;
                break;
              }
              iVar23 = *(int *)((longlong)iVar23 * 0x120 + 0x118 + lVar25);
            } while (iVar23 != -1);
          }
        }
        this_04 = (FMovieSceneSubSequenceData *)0x0;
LAB_146839dbe:
        lVar24 = local_2b8._0_8_;
        if (((this_04 == (FMovieSceneSubSequenceData *)0x0) ||
            (pUVar13 = FMovieSceneSubSequenceData::GetSequence(this_04), lVar24 = local_2b8._0_8_,
            pUVar13 == (UMovieSceneSequence *)0x0)) ||
           (UMovieSceneCompiledDataManager::FindDataID(local_288,(UMovieSceneSequence *)&local_2c4),
           lVar24 = local_2b8._0_8_, local_2c4.Value == -1)) goto LAB_14683a0bf;
        if (local_2a8.bIsSet == false) {
LAB_146839ef3:
          bVar7 = true;
          pcVar3 = *(code **)(pUVar13->_padding_ + 0x2e0);
          pTVar17 = IMovieScenePlayer::GetSharedPlaybackState
                              ((IMovieScenePlayer *)
                               &((this->SequencePlayer).field0_0x0.DebugPtr)->_padding_,&local_118);
          local_158 = pTVar17->Object;
          local_150 = (pTVar17->SharedReferenceCount).ReferenceController;
          if (local_150 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_150->SharedReferenceCount =
                 (atomic<int>)((int)local_150->SharedReferenceCount + 1);
            UNLOCK();
          }
          pFVar18 = (FGuid *)(*pcVar3)(pUVar13,local_90,param_1,&local_158);
        }
        else {
          pTVar16 = TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry>::GetDataForSingleNode
                              (this_00,&local_a0,pFVar4);
          uVar26 = 0;
          if (iVar9 < pTVar16->ArrayNum) {
            uVar26 = (uint)~iVar9 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            iVar9 = (*pcVar3)();
            return iVar9;
          }
          uVar26 = pTVar16->DataPtr[iVar9].SequenceID.Value;
          if ((local_2a8.bIsSet == false) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar8)) {
            pcVar3 = (code *)swi(3);
            iVar9 = (*pcVar3)();
            return iVar9;
          }
          if (local_2a8.TypedValue.SequenceID.Value != uVar26) goto LAB_146839ef3;
          if ((local_2a8.bIsSet == false) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar8)) {
            pcVar3 = (code *)swi(3);
            iVar9 = (*pcVar3)();
            return iVar9;
          }
          pFVar18 = &local_128;
          local_128.A = local_2a8.TypedValue.ObjectBindingID.A;
          local_128.B = local_2a8.TypedValue.ObjectBindingID.B;
          local_128.C = local_2a8.TypedValue.ObjectBindingID.C;
          local_128.D = local_2a8.TypedValue.ObjectBindingID.D;
        }
        local_168 = pFVar18->A;
        uStack_164 = pFVar18->B;
        uStack_160 = pFVar18->C;
        uStack_15c = pFVar18->D;
        if (bVar7) {
          bVar7 = false;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_118.SharedReferenceCount.ReferenceController);
        }
        lVar24 = local_2b8._0_8_;
        if ((((uStack_15c == 0 && uStack_160 == 0) && uStack_164 == 0) && local_168 == 0) ||
           (pFVar15 = UMovieSceneCompiledDataManager::FindEntityComponentField(local_288,local_2c4),
           lVar24 = local_2b8._0_8_, pFVar15 == (FMovieSceneEntityComponentField *)0x0))
        goto LAB_14683a0bf;
        sVar1 = this_04->HierarchicalBias;
        ::operator*((FFrameTime)&local_240.C,(FMovieSceneSequenceTransform *)this->RootPredictedTime
                   );
        local_204 = CONCAT44(uStack_164,local_168);
        uStack_1fc = CONCAT44(uStack_15c,uStack_160);
        local_220 = local_268;
        local_2c0[0] = 0;
        local_1e8 = *param_3;
        local_1e0 = local_2c0;
        local_140 = &local_228;
        local_148 = UE::Core::Private::Function::
                    TFunctionRefCaller<`UMovieSceneAsyncAction_SequencePrediction::ImportTransformEntities'::__l2::<lambda_1>,bool,FMovieSceneEvaluationFieldEntityQuery_const_&>
                    ::Call;
        local_214 = 0;
        local_210 = 0xffff;
        local_20c = 0xffff;
        local_208 = 0;
        local_205 = local_e5;
        local_250.LowerBound.Type.Value = '\x02';
        local_250.LowerBound.Value.Value = 0;
        local_250.UpperBound.Type.Value = '\x02';
        local_250.UpperBound.Value.Value = 0;
        local_228 = this;
        local_218 = (int)sVar1;
        local_206 = local_e6 & 0xf8;
        local_1f0 = pFVar15;
        FMovieSceneEntityComponentField::QueryPersistentEntities
                  (pFVar15,(FFrameNumber)local_240.C,
                   (TFunctionRef<bool___cdecl(FMovieSceneEvaluationFieldEntityQuery_const_&)> *)
                   &local_148,&local_250);
        lVar24 = local_2b8._0_8_;
        local_2d8 = local_2d8 + local_2c0[0];
        pUVar21 = (UObject *)(ulonglong)local_2d8;
        TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry>::operator++
                  (&local_280);
      }
      else {
LAB_14683a0bf:
        pUVar21 = (UObject *)(ulonglong)local_2d8;
        TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry>::operator++
                  (&local_280);
      }
    }
  }
  return iVar9;
}

// ImportTransformHierarchy @ 14683a100

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMovieSceneAsyncAction_SequencePrediction::ImportTransformHierarchy
          (UMovieSceneAsyncAction_SequencePrediction *this,FInterrogationChannels *param_1,
          USceneComponent *param_2)

{
  USceneComponent *pUVar1;
  AActor *this_00;
  code *pcVar2;
  bool bVar3;
  FInterrogationChannel FVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_var;
  FName *pFVar7;
  undefined4 extraout_var_00;
  UWorld *pUVar8;
  uint uVar9;
  FInterrogationChannel local_res18;
  undefined1 local_58 [8];
  FInterrogationKey local_50;
  FName local_48;
  FString local_40;
  FMovieScenePropertyBinding local_30;
  
  if ((param_2 == (USceneComponent *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSceneComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieScenePredictionSystem.cpp"
                         ,0x174,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar1 = (param_2->AttachParent).field0_0x0.DebugPtr;
  if (pUVar1 != (USceneComponent *)0x0) {
    ImportTransformHierarchy(this,param_1,pUVar1);
  }
  uVar9 = 0xffffffff;
  if ((param_2->AttachParent).field0_0x0.DebugPtr != (USceneComponent *)0x0) {
    FVar4 = UE::MovieScene::FInterrogationChannels::FindChannel(param_1,(UObject *)&stack0x00000020)
    ;
    uVar9 = *(uint *)CONCAT44(extraout_var,FVar4.Value);
  }
  UE::MovieScene::FInterrogationChannels::FindChannel(param_1,(UObject *)&local_res18);
  if (local_res18.Value == -1) {
    ::FString::FString(&local_40,L"Transform");
    pFVar7 = ::FName::FName(&local_48,"Transform");
    FMovieScenePropertyBinding::FMovieScenePropertyBinding(&local_30,*pFVar7,&local_40);
    FVar4 = UE::MovieScene::FInterrogationChannels::AllocateChannel
                      (param_1,(UObject *)local_58,(int)param_2,
                       (FMovieScenePropertyBinding *)(ulonglong)uVar9);
    local_res18.Value = *(int *)CONCAT44(extraout_var_00,FVar4.Value);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    if (local_res18.Value == -1) {
      return;
    }
  }
  local_50.InterrogationIndex = this->InterrogationIndex;
  local_50.Channel.Value = local_res18.Value;
  iVar5 = ImportTransformEntities(this,(UObject *)param_2,(UObject *)param_2->_padding_,&local_50);
  this_00 = (AActor *)param_2->_padding_;
  if ((this_00 != (AActor *)0x0) && (param_2 == (this_00->RootComponent).field0_0x0.DebugPtr)) {
    pUVar8 = AActor::GetWorld(this_00);
    iVar6 = ImportTransformEntities(this,(UObject *)this_00,(UObject *)pUVar8,&local_50);
    iVar5 = iVar5 + iVar6;
  }
  if (0 < iVar5) {
    UE::MovieScene::FInterrogationChannels::ActivateChannel(param_1,local_res18);
  }
  return;
}

// MakePredictionImpl @ 146840d60

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMovieSceneAsyncAction_SequencePrediction * __cdecl
UMovieSceneAsyncAction_SequencePrediction::MakePredictionImpl
          (UMovieSceneSequencePlayer *param_1,USceneComponent *param_2,float param_3,bool param_4)

{
  UMovieSceneSequence *pUVar1;
  undefined1 auVar2 [16];
  FFrameTime FVar3;
  longlong lVar4;
  UMovieSceneAsyncAction_SequencePrediction *pUVar5;
  int iVar6;
  double dVar7;
  undefined1 in_register_00001284 [12];
  undefined1 auVar8 [16];
  double dVar9;
  float fVar10;
  float fVar11;
  
  auVar8._4_12_ = in_register_00001284;
  auVar8._0_4_ = param_3;
  if ((((param_1 == (UMovieSceneSequencePlayer *)0x0) || (param_2 == (USceneComponent *)0x0)) ||
      (pUVar1 = (param_1->Sequence).field0_0x0.DebugPtr, pUVar1 == (UMovieSceneSequence *)0x0)) ||
     (lVar4 = (**(code **)(pUVar1->_padding_ + 0x2f8))(pUVar1), lVar4 == 0)) {
    pUVar5 = (UMovieSceneAsyncAction_SequencePrediction *)0x0;
  }
  else {
    lVar4 = (**(code **)(pUVar1->_padding_ + 0x2f8))(pUVar1);
    dVar9 = ((double)(int)*(undefined8 *)(lVar4 + 0x138) * (double)param_3) /
            (double)(int)((ulonglong)*(undefined8 *)(lVar4 + 0x138) >> 0x20);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = dVar9;
    auVar8 = roundpd(auVar8,auVar2,1);
    dVar7 = auVar8._0_8_;
    dVar9 = dVar9 - dVar7;
    if (__real_41dfffffffc00000 <= dVar7) {
      dVar7 = __real_41dfffffffc00000;
    }
    if (dVar7 <= __real_c1e0000000000000) {
      dVar7 = __real_c1e0000000000000;
    }
    iVar6 = (int)dVar9;
    fVar10 = (float)dVar9 - (float)iVar6;
    fVar11 = fVar10;
    if ((0.0 < fVar10) && (fVar11 = ::FFrameTime::MaxSubframe, fVar10 <= ::FFrameTime::MaxSubframe))
    {
      fVar11 = fVar10;
    }
    fVar10 = ::FFrameTime::MaxSubframe;
    if (fVar11 <= ::FFrameTime::MaxSubframe) {
      fVar10 = fVar11;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    FVar3.SubFrame = fVar10;
    FVar3.FrameNumber.Value = (int)dVar7 + iVar6;
    pUVar5 = MakePredictionImpl(param_1,param_2,FVar3,param_4);
  }
  return pUVar5;
}

// MakePredictionImpl @ 146840ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneAsyncAction_SequencePrediction * __cdecl
UMovieSceneAsyncAction_SequencePrediction::MakePredictionImpl
          (UMovieSceneSequencePlayer *param_1,USceneComponent *param_2,FFrameTime param_3,
          bool param_4)

{
  int *piVar1;
  UMovieSceneEntitySystem *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UMovieSceneAsyncAction_SequencePrediction *pUVar7;
  FMovieSceneRootEvaluationTemplateInstance *this;
  UMovieSceneEntitySystemLinker *this_00;
  UMovieSceneEntitySystem *pUVar8;
  UClass *pUVar9;
  FString *pFVar10;
  longlong *plVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  undefined1 auStack_158 [32];
  UMovieSceneAsyncAction_SequencePrediction **local_138;
  FScriptContainerElement *local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  UMovieSceneAsyncAction_SequencePrediction *local_108;
  UClass *local_100;
  FFrameTime local_f8;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  pwVar14 = L"";
  if ((param_1 == (UMovieSceneSequencePlayer *)0x0) || (param_2 == (USceneComponent *)0x0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Player && TargetComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieScenePredictionSystem.cpp"
                       ,0x61,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar7 = (UMovieSceneAsyncAction_SequencePrediction *)(*pcVar4)();
      return pUVar7;
    }
    if (param_1 == (UMovieSceneSequencePlayer *)0x0) {
      plVar11 = (longlong *)0x0;
      goto LAB_146840f12;
    }
  }
  plVar11 = &param_1->_padding_;
LAB_146840f12:
  this = (FMovieSceneRootEvaluationTemplateInstance *)(**(code **)(*plVar11 + 0x18))();
  this_00 = FMovieSceneRootEvaluationTemplateInstance::GetEntitySystemLinker(this);
  local_100 = UMovieScenePredictionSystem::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_100 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_100);
  }
  pUVar8 = UMovieSceneEntitySystemLinker::LinkSystem
                     (this_00,(TSubclassOf<UMovieSceneEntitySystem>)&local_100);
  if (pUVar8 != (UMovieSceneEntitySystem *)0x0) {
    pUVar9 = UMovieScenePredictionSystem::StaticClass();
    iVar6 = (int)pUVar9->_padding_;
    if ((iVar6 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar6 * 8)
        == &pUVar9->_padding_)) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar8,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar9 = StaticClass();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_b8,pUVar9);
      local_b8._8_8_ = pUVar8;
      pUVar7 = (UMovieSceneAsyncAction_SequencePrediction *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
      if (local_b8._64_8_ != 0) {
        plVar11 = (longlong *)(local_b8 + 0x50);
        if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
          plVar11 = (longlong *)local_b8._104_8_;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (param_1 != (UMovieSceneSequencePlayer *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      (pUVar7->SequencePlayer).field0_0x0.DebugPtr = param_1;
      pUVar7->RootPredictedTime = param_3;
      local_f8 = param_3;
      iVar6 = UE::MovieScene::FInterrogationChannels::AddInterrogation
                        ((FInterrogationChannels *)(pUVar8 + 1),(FInterrogationParams *)&local_f8);
      pUVar7->InterrogationIndex = iVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (param_2 != (USceneComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      (pUVar7->SceneComponent).field0_0x0.DebugPtr = param_2;
      pUVar2 = pUVar8 + 3;
      pUVar7->bWorldSpace = param_4;
      local_108 = pUVar7;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      pFVar3 = (FScriptContainerElement *)pUVar2->_padding_;
      if ((pFVar3 <= (FScriptContainerElement *)&local_108) &&
         (lVar12 = (longlong)*(int *)((longlong)&pUVar8[3]._padding_ + 4),
         (FScriptContainerElement *)&local_108 < pFVar3 + lVar12 * 8)) {
        local_120 = (longlong)(int)pUVar8[3]._padding_;
        local_118 = 8;
        local_138 = &local_108;
        local_130 = pFVar3;
        local_128 = lVar12;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pUVar7 = (UMovieSceneAsyncAction_SequencePrediction *)(*pcVar4)();
          return pUVar7;
        }
      }
      iVar6 = (int)pUVar8[3]._padding_;
      piVar1 = (int *)((longlong)&pUVar8[3]._padding_ + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)pUVar2,piVar1);
      }
      *(int *)&pUVar8[3]._padding_ = iVar6 + 1;
      *(UMovieSceneAsyncAction_SequencePrediction **)
       ((FScriptContainerElement *)pUVar2->_padding_ + (longlong)iVar6 * 8) = local_108;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_108 != (UMovieSceneAsyncAction_SequencePrediction *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_108);
      }
      UE::MovieScene::FEntityManager::OnStructureChanged
                (&((pUVar8->Linker).field0_0x0.DebugPtr)->EntityManager);
      return pUVar7;
    }
    pFVar10 = GetTypeName<UMovieScenePredictionSystem>(&local_e0);
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
    pFVar10 = GetFullNameForCastLogError<UMovieSceneEntitySystem>(&local_d0,pUVar8);
    if ((pFVar10->Data).ArrayNum != 0) {
      pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar14,pwVar13);
  }
  pFVar10 = GetTypeName<UMovieScenePredictionSystem>(&local_f0);
  if ((pFVar10->Data).ArrayNum != 0) {
    pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar14);
}

// PredictLocalTransformAtFrame @ 146857580

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMovieSceneAsyncAction_SequencePrediction * __cdecl
UMovieSceneAsyncAction_SequencePrediction::PredictLocalTransformAtFrame
          (UMovieSceneSequencePlayer *param_1,USceneComponent *param_2,FFrameTime param_3)

{
  UMovieSceneSequence *pUVar1;
  longlong lVar2;
  UMovieSceneAsyncAction_SequencePrediction *pUVar3;
  FFrameTime local_res8;
  
  if (((param_1 != (UMovieSceneSequencePlayer *)0x0) && (param_2 != (USceneComponent *)0x0)) &&
     (pUVar1 = (param_1->Sequence).field0_0x0.DebugPtr, pUVar1 != (UMovieSceneSequence *)0x0)) {
    lVar2 = (**(code **)(pUVar1->_padding_ + 0x2f8))(pUVar1);
    if (lVar2 != 0) {
      (**(code **)(pUVar1->_padding_ + 0x2f8))(pUVar1);
      lVar2 = (**(code **)(pUVar1->_padding_ + 0x2f8))(pUVar1);
      ConvertFrameTime((FFrameTime)&local_res8,(FFrameRate)param_3,*(FFrameRate *)(lVar2 + 0x140));
      pUVar3 = MakePredictionImpl(param_1,param_2,local_res8,false);
      return pUVar3;
    }
  }
  return (UMovieSceneAsyncAction_SequencePrediction *)0x0;
}

// PredictLocalTransformAtTime @ 146857640

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMovieSceneAsyncAction_SequencePrediction * __cdecl
UMovieSceneAsyncAction_SequencePrediction::PredictLocalTransformAtTime
          (UMovieSceneSequencePlayer *param_1,USceneComponent *param_2,float param_3)

{
  UMovieSceneAsyncAction_SequencePrediction *pUVar1;
  
  pUVar1 = MakePredictionImpl(param_1,param_2,param_3,false);
  return pUVar1;
}

// PredictWorldTransformAtFrame @ 146857650

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMovieSceneAsyncAction_SequencePrediction * __cdecl
UMovieSceneAsyncAction_SequencePrediction::PredictWorldTransformAtFrame
          (UMovieSceneSequencePlayer *param_1,USceneComponent *param_2,FFrameTime param_3)

{
  UMovieSceneSequence *pUVar1;
  longlong lVar2;
  UMovieSceneAsyncAction_SequencePrediction *pUVar3;
  FFrameTime local_res8;
  
  if (((param_1 != (UMovieSceneSequencePlayer *)0x0) && (param_2 != (USceneComponent *)0x0)) &&
     (pUVar1 = (param_1->Sequence).field0_0x0.DebugPtr, pUVar1 != (UMovieSceneSequence *)0x0)) {
    lVar2 = (**(code **)(pUVar1->_padding_ + 0x2f8))(pUVar1);
    if (lVar2 != 0) {
      (**(code **)(pUVar1->_padding_ + 0x2f8))(pUVar1);
      lVar2 = (**(code **)(pUVar1->_padding_ + 0x2f8))(pUVar1);
      ConvertFrameTime((FFrameTime)&local_res8,(FFrameRate)param_3,*(FFrameRate *)(lVar2 + 0x140));
      pUVar3 = MakePredictionImpl(param_1,param_2,local_res8,true);
      return pUVar3;
    }
  }
  return (UMovieSceneAsyncAction_SequencePrediction *)0x0;
}

// PredictWorldTransformAtTime @ 146857710

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMovieSceneAsyncAction_SequencePrediction * __cdecl
UMovieSceneAsyncAction_SequencePrediction::PredictWorldTransformAtTime
          (UMovieSceneSequencePlayer *param_1,USceneComponent *param_2,float param_3)

{
  UMovieSceneAsyncAction_SequencePrediction *pUVar1;
  
  pUVar1 = MakePredictionImpl(param_1,param_2,param_3,true);
  return pUVar1;
}

// ReportResult @ 14685fa60

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMovieSceneAsyncAction_SequencePrediction::ReportResult
          (UMovieSceneAsyncAction_SequencePrediction *this,FInterrogationChannels *param_1,
          TSparseArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,FDefaultSparseArrayAllocator>
          *param_2)

{
  double *pdVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  uint local_res8;
  TTransform<double> local_68;
  
  if ((((this->InterrogationIndex != -1) &&
       (UE::MovieScene::FInterrogationChannels::FindChannel(param_1,(UObject *)&local_res8),
       local_res8 != 0xffffffff)) && (-1 < (int)local_res8)) &&
     ((int)local_res8 < *(int *)&param_2->field_0x28)) {
    puVar9 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar9 = &param_2->field_0x10;
    }
    if ((*(uint *)(puVar9 + (longlong)((int)(local_res8 + ((int)local_res8 >> 0x1f & 0x1fU)) >> 5) *
                            4) >> (local_res8 & 0x1f) & 1) != 0) {
      if ((local_res8 == 0xffffffff) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                             ,0xa1,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((-1 < this->InterrogationIndex) &&
         (this->InterrogationIndex <
          *(int *)(*(longlong *)param_2 + 8 + (longlong)(int)local_res8 * 0x10))) {
        if ((local_res8 == 0xffffffff) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Value != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                               ,0xa1,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        plVar8 = (longlong *)((longlong)(int)local_res8 * 0x10 + *(longlong *)param_2);
        uVar2 = this->InterrogationIndex;
        uVar6 = 0;
        if ((int)uVar2 < (int)plVar8[1]) {
          uVar6 = ~uVar2 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar3 = *plVar8;
        lVar7 = (longlong)(int)uVar2 * 0x60;
        local_68.Rotation.XY.m128d_f64[0] = *(double *)(lVar7 + lVar3);
        local_68.Rotation.XY.m128d_f64[1] = ((double *)(lVar7 + lVar3))[1];
        pdVar1 = (double *)(lVar7 + 0x10 + lVar3);
        local_68.Rotation.ZW.m128d_f64[0] = *pdVar1;
        local_68.Rotation.ZW.m128d_f64[1] = pdVar1[1];
        pdVar1 = (double *)(lVar7 + 0x20 + lVar3);
        local_68.Translation.XY.m128d_f64[0] = *pdVar1;
        local_68.Translation.XY.m128d_f64[1] = pdVar1[1];
        pdVar1 = (double *)(lVar7 + 0x30 + lVar3);
        local_68.Translation.ZW.m128d_f64[0] = *pdVar1;
        local_68.Translation.ZW.m128d_f64[1] = pdVar1[1];
        pdVar1 = (double *)(lVar7 + 0x40 + lVar3);
        local_68.Scale3D.XY.m128d_f64[0] = *pdVar1;
        local_68.Scale3D.XY.m128d_f64[1] = pdVar1[1];
        pdVar1 = (double *)(lVar7 + 0x50 + lVar3);
        local_68.Scale3D.ZW.m128d_f64[0] = *pdVar1;
        local_68.Scale3D.ZW.m128d_f64[1] = pdVar1[1];
        FMovieSceneActorPredictionResult::Broadcast(&this->Result,&local_68);
        return;
      }
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->Failure,(void *)0x0);
  return;
}

// ReportResult @ 14685fc70

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMovieSceneAsyncAction_SequencePrediction::ReportResult
          (UMovieSceneAsyncAction_SequencePrediction *this,FInterrogationChannels *param_1,
          TSparseArray<TArray<UE::MovieScene::FIntermediate3DTransform,TSizedDefaultAllocator<32>_>,FDefaultSparseArrayAllocator>
          *param_2)

{
  double *pdVar1;
  double dVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  TQuat<double> *pTVar13;
  longlong lVar14;
  undefined1 *puVar15;
  uint local_res8;
  TRotator<double> local_138;
  TTransform<double> local_118;
  TQuat<double> local_b8 [5];
  
  if ((((this->InterrogationIndex != -1) &&
       (UE::MovieScene::FInterrogationChannels::FindChannel(param_1,(UObject *)&local_res8),
       local_res8 != 0xffffffff)) && (-1 < (int)local_res8)) &&
     ((int)local_res8 < *(int *)&param_2->field_0x28)) {
    puVar15 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar15 = &param_2->field_0x10;
    }
    if ((*(uint *)(puVar15 +
                  (longlong)((int)(local_res8 + ((int)local_res8 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (local_res8 & 0x1f) & 1) != 0) {
      if ((local_res8 == 0xffffffff) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Value != INDEX_NONE",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                              ,0xa1,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((-1 < this->InterrogationIndex) &&
         (this->InterrogationIndex <
          *(int *)(*(longlong *)param_2 + 8 + (longlong)(int)local_res8 * 0x10))) {
        if ((local_res8 == 0xffffffff) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Value != INDEX_NONE",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                                ,0xa1,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar4 = *(longlong *)param_2;
        uVar3 = this->InterrogationIndex;
        lVar14 = (longlong)(int)uVar3;
        uVar12 = 0;
        if ((int)uVar3 < *(int *)(lVar4 + 8 + (longlong)(int)local_res8 * 0x10)) {
          uVar12 = ~uVar3 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar4 = *(longlong *)(lVar4 + (longlong)(int)local_res8 * 0x10);
        pdVar1 = (double *)(lVar4 + 0x20 + lVar14 * 0x48);
        local_138.Pitch = *pdVar1;
        local_138.Yaw = pdVar1[1];
        pdVar1 = (double *)(lVar4 + 0x10 + lVar14 * 0x48);
        dVar6 = *pdVar1;
        local_138.Roll = pdVar1[1];
        pdVar1 = (double *)(lVar4 + lVar14 * 0x48);
        dVar7 = *pdVar1;
        dVar8 = pdVar1[1];
        pdVar1 = (double *)(lVar4 + 0x30 + lVar14 * 0x48);
        dVar9 = *pdVar1;
        dVar10 = pdVar1[1];
        dVar2 = *(double *)(lVar4 + 0x40 + lVar14 * 0x48);
        pTVar13 = UE::Math::TRotator<double>::Quaternion(&local_138,local_b8);
        local_118.Rotation.XY.m128d_f64[0] = pTVar13->X;
        local_118.Rotation.XY.m128d_f64[1] = pTVar13->Y;
        local_118.Rotation.ZW.m128d_f64[0] = pTVar13->Z;
        local_118.Rotation.ZW.m128d_f64[1] = pTVar13->W;
        local_118.Translation.ZW.m128d_f64[1] = 0.0;
        local_118.Scale3D.ZW.m128d_f64[1] = 0.0;
        local_118.Translation.XY.m128d_f64[0] = dVar7;
        local_118.Translation.XY.m128d_f64[1] = dVar8;
        local_118.Translation.ZW.m128d_f64[0] = dVar6;
        local_118.Scale3D.XY.m128d_f64[0] = dVar9;
        local_118.Scale3D.XY.m128d_f64[1] = dVar10;
        local_118.Scale3D.ZW.m128d_f64[0] = dVar2;
        FMovieSceneActorPredictionResult::Broadcast(&this->Result,&local_118);
        return;
      }
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->Failure,(void *)0x0);
  return;
}

// Reset @ 146860580

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMovieSceneAsyncAction_SequencePrediction::Reset
          (UMovieSceneAsyncAction_SequencePrediction *this,UMovieSceneEntitySystemLinker *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FComponentTypeID FVar3;
  int iVar4;
  FBuiltInComponentTypes *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pFVar5 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar6 = (this->ImportedEntities).AllocatorInstance.Data;
  iVar4 = (this->ImportedEntities).ArrayNum;
  FVar3.Value = (pFVar5->Tags).NeedsUnlink.Value;
  pFVar2 = pFVar6 + (longlong)iVar4 * 2;
  while( true ) {
    if ((this->ImportedEntities).ArrayNum != iVar4) {
      `TCheckedPointerIterator<UE::MovieScene::FMovieSceneEntityID,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar2) break;
    UE::MovieScene::FEntityManager::AddComponent
              (&param_1->EntityManager,(FMovieSceneEntityID)*(ushort *)pFVar6,FVar3,Full);
    pFVar6 = pFVar6 + 2;
  }
  piVar1 = &(this->ImportedEntities).ArrayMax;
  (this->ImportedEntities).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0,&(this->ImportedEntities).AllocatorInstance,0,piVar1);
  }
  return;
}

// StaticRegisterNativesUMovieSceneAsyncAction_SequencePrediction @ 14686ca20

void __cdecl
UMovieSceneAsyncAction_SequencePrediction::
StaticRegisterNativesUMovieSceneAsyncAction_SequencePrediction(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneAsyncAction_SequencePrediction_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execPredictLocalTransformAtFrame @ 146875430

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UMovieSceneAsyncAction_SequencePrediction::execPredictLocalTransformAtFrame
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieSceneSequence *pUVar2;
  FFrameRate FVar3;
  USceneComponent *pUVar4;
  UMovieSceneSequencePlayer *pUVar5;
  longlong lVar6;
  UMovieSceneAsyncAction_SequencePrediction *pUVar7;
  FFrameRate local_res10;
  USceneComponent *local_res18;
  UMovieSceneSequencePlayer *local_res20;
  FFrameTime local_48;
  
  local_res20 = (UMovieSceneSequencePlayer *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = (USceneComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10.Numerator = 0;
  local_res10.Denominator = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar5 = local_res20;
  pUVar4 = local_res18;
  FVar3 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res20 != (UMovieSceneSequencePlayer *)0x0) && (local_res18 != (USceneComponent *)0x0))
  {
    pUVar2 = (local_res20->Sequence).field0_0x0.DebugPtr;
    if ((pUVar2 != (UMovieSceneSequence *)0x0) &&
       (lVar6 = (**(code **)(pUVar2->_padding_ + 0x2f8))(pUVar2), lVar6 != 0)) {
      (**(code **)(pUVar2->_padding_ + 0x2f8))(pUVar2);
      lVar6 = (**(code **)(pUVar2->_padding_ + 0x2f8))(pUVar2);
      ConvertFrameTime((FFrameTime)&local_48,FVar3,*(FFrameRate *)(lVar6 + 0x140));
      pUVar7 = MakePredictionImpl(pUVar5,pUVar4,local_48,false);
      *(UMovieSceneAsyncAction_SequencePrediction **)param_3 = pUVar7;
      return;
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execPredictLocalTransformAtTime @ 1468755f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UMovieSceneAsyncAction_SequencePrediction::execPredictLocalTransformAtTime
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieSceneSequence *pUVar2;
  FFrameTime FVar3;
  USceneComponent *pUVar4;
  UMovieSceneSequencePlayer *pUVar5;
  longlong lVar6;
  UMovieSceneAsyncAction_SequencePrediction *pUVar7;
  int iVar8;
  double dVar9;
  undefined1 in_XMM2 [16];
  undefined1 auVar10 [16];
  double dVar11;
  float fVar12;
  float local_res10 [2];
  USceneComponent *local_res18;
  UMovieSceneSequencePlayer *local_res20;
  
  local_res20 = (UMovieSceneSequencePlayer *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = (USceneComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar5 = local_res20;
  pUVar4 = local_res18;
  fVar12 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((((local_res20 != (UMovieSceneSequencePlayer *)0x0) && (local_res18 != (USceneComponent *)0x0)
       ) && (pUVar2 = (local_res20->Sequence).field0_0x0.DebugPtr,
            pUVar2 != (UMovieSceneSequence *)0x0)) &&
     (lVar6 = (**(code **)(pUVar2->_padding_ + 0x2f8))(pUVar2), lVar6 != 0)) {
    lVar6 = (**(code **)(pUVar2->_padding_ + 0x2f8))(pUVar2);
    dVar11 = ((double)(int)*(undefined8 *)(lVar6 + 0x138) * (double)fVar12) /
             (double)(int)((ulonglong)*(undefined8 *)(lVar6 + 0x138) >> 0x20);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = dVar11;
    auVar10 = roundpd(in_XMM2,auVar10,1);
    dVar9 = auVar10._0_8_;
    dVar11 = dVar11 - dVar9;
    if (__real_41dfffffffc00000 <= dVar9) {
      dVar9 = __real_41dfffffffc00000;
    }
    if (dVar9 <= __real_c1e0000000000000) {
      dVar9 = __real_c1e0000000000000;
    }
    iVar8 = (int)dVar11;
    fVar12 = (float)dVar11 - (float)iVar8;
    if ((0.0 < fVar12) && (::FFrameTime::MaxSubframe <= fVar12)) {
      fVar12 = ::FFrameTime::MaxSubframe;
    }
    if (::FFrameTime::MaxSubframe <= fVar12) {
      fVar12 = ::FFrameTime::MaxSubframe;
    }
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    FVar3.SubFrame = fVar12;
    FVar3.FrameNumber.Value = (int)dVar9 + iVar8;
    pUVar7 = MakePredictionImpl(pUVar5,pUVar4,FVar3,false);
    *(UMovieSceneAsyncAction_SequencePrediction **)param_3 = pUVar7;
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execPredictWorldTransformAtFrame @ 146875820

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UMovieSceneAsyncAction_SequencePrediction::execPredictWorldTransformAtFrame
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieSceneSequence *pUVar2;
  FFrameRate FVar3;
  USceneComponent *pUVar4;
  UMovieSceneSequencePlayer *pUVar5;
  longlong lVar6;
  UMovieSceneAsyncAction_SequencePrediction *pUVar7;
  FFrameRate local_res10;
  USceneComponent *local_res18;
  UMovieSceneSequencePlayer *local_res20;
  FFrameTime local_48;
  
  local_res20 = (UMovieSceneSequencePlayer *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = (USceneComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10.Numerator = 0;
  local_res10.Denominator = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar5 = local_res20;
  pUVar4 = local_res18;
  FVar3 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res20 != (UMovieSceneSequencePlayer *)0x0) && (local_res18 != (USceneComponent *)0x0))
  {
    pUVar2 = (local_res20->Sequence).field0_0x0.DebugPtr;
    if ((pUVar2 != (UMovieSceneSequence *)0x0) &&
       (lVar6 = (**(code **)(pUVar2->_padding_ + 0x2f8))(pUVar2), lVar6 != 0)) {
      (**(code **)(pUVar2->_padding_ + 0x2f8))(pUVar2);
      lVar6 = (**(code **)(pUVar2->_padding_ + 0x2f8))(pUVar2);
      ConvertFrameTime((FFrameTime)&local_48,FVar3,*(FFrameRate *)(lVar6 + 0x140));
      pUVar7 = MakePredictionImpl(pUVar5,pUVar4,local_48,true);
      *(UMovieSceneAsyncAction_SequencePrediction **)param_3 = pUVar7;
      return;
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execPredictWorldTransformAtTime @ 1468759e0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UMovieSceneAsyncAction_SequencePrediction::execPredictWorldTransformAtTime
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieSceneSequence *pUVar2;
  FFrameTime FVar3;
  USceneComponent *pUVar4;
  UMovieSceneSequencePlayer *pUVar5;
  longlong lVar6;
  UMovieSceneAsyncAction_SequencePrediction *pUVar7;
  int iVar8;
  double dVar9;
  undefined1 in_XMM2 [16];
  undefined1 auVar10 [16];
  double dVar11;
  float fVar12;
  float local_res10 [2];
  USceneComponent *local_res18;
  UMovieSceneSequencePlayer *local_res20;
  
  local_res20 = (UMovieSceneSequencePlayer *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = (USceneComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar5 = local_res20;
  pUVar4 = local_res18;
  fVar12 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((((local_res20 != (UMovieSceneSequencePlayer *)0x0) && (local_res18 != (USceneComponent *)0x0)
       ) && (pUVar2 = (local_res20->Sequence).field0_0x0.DebugPtr,
            pUVar2 != (UMovieSceneSequence *)0x0)) &&
     (lVar6 = (**(code **)(pUVar2->_padding_ + 0x2f8))(pUVar2), lVar6 != 0)) {
    lVar6 = (**(code **)(pUVar2->_padding_ + 0x2f8))(pUVar2);
    dVar11 = ((double)(int)*(undefined8 *)(lVar6 + 0x138) * (double)fVar12) /
             (double)(int)((ulonglong)*(undefined8 *)(lVar6 + 0x138) >> 0x20);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = dVar11;
    auVar10 = roundpd(in_XMM2,auVar10,1);
    dVar9 = auVar10._0_8_;
    dVar11 = dVar11 - dVar9;
    if (__real_41dfffffffc00000 <= dVar9) {
      dVar9 = __real_41dfffffffc00000;
    }
    if (dVar9 <= __real_c1e0000000000000) {
      dVar9 = __real_c1e0000000000000;
    }
    iVar8 = (int)dVar11;
    fVar12 = (float)dVar11 - (float)iVar8;
    if ((0.0 < fVar12) && (::FFrameTime::MaxSubframe <= fVar12)) {
      fVar12 = ::FFrameTime::MaxSubframe;
    }
    if (::FFrameTime::MaxSubframe <= fVar12) {
      fVar12 = ::FFrameTime::MaxSubframe;
    }
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    FVar3.SubFrame = fVar12;
    FVar3.FrameNumber.Value = (int)dVar9 + iVar8;
    pUVar7 = MakePredictionImpl(pUVar5,pUVar4,FVar3,true);
    *(UMovieSceneAsyncAction_SequencePrediction **)param_3 = pUVar7;
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

