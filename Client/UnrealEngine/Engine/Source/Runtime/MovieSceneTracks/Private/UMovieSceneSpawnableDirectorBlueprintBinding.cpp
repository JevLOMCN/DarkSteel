// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 14

// StaticClass @ 14658b120

UClass * __cdecl UMovieSceneSpawnableDirectorBlueprintBinding::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSpawnableDirectorBlueprintBinding.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneSpawnableDirectorBlueprintBinding",
               &Z_Registration_Info_UClass_UMovieSceneSpawnableDirectorBlueprintBinding.
                InnerSingleton,StaticRegisterNativesUMovieSceneSpawnableDirectorBlueprintBinding,
               0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneSpawnableDirectorBlueprintBinding>,
               InternalVTableHelperCtorCaller<UMovieSceneSpawnableDirectorBlueprintBinding>,
               local_res8,UMovieSceneSpawnableBindingBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSpawnableDirectorBlueprintBinding.InnerSingleton;
}

// UMovieSceneSpawnableDirectorBlueprintBinding @ 14661bae0

UMovieSceneSpawnableDirectorBlueprintBinding * __thiscall
UMovieSceneSpawnableDirectorBlueprintBinding::UMovieSceneSpawnableDirectorBlueprintBinding
          (UMovieSceneSpawnableDirectorBlueprintBinding *this,FVTableHelper *param_1)

{
  UMovieSceneSpawnableBindingBase::UMovieSceneSpawnableBindingBase
            ((UMovieSceneSpawnableBindingBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneSpawnableDirectorBlueprintBinding__6B_;
  (this->DynamicBinding).Function.field0_0x0.DebugPtr = (UFunction *)0x0;
  *(undefined8 *)&(this->DynamicBinding).ResolveParamsProperty = 0;
  *(undefined8 *)&(this->DynamicBinding).ResolveParamsProperty.field_0x8 = 0;
  *(undefined8 *)&(this->DynamicBinding).ResolveParamsProperty.field_0x10 = 0;
  *(undefined8 *)&(this->DynamicBinding).ResolveParamsProperty.field_0x18 = 0;
  return this;
}

// UMovieSceneSpawnableDirectorBlueprintBinding @ 14661bb20

UMovieSceneSpawnableDirectorBlueprintBinding * __thiscall
UMovieSceneSpawnableDirectorBlueprintBinding::UMovieSceneSpawnableDirectorBlueprintBinding
          (UMovieSceneSpawnableDirectorBlueprintBinding *this,FObjectInitializer *param_1)

{
  UMovieSceneSpawnableBindingBase::UMovieSceneSpawnableBindingBase
            ((UMovieSceneSpawnableBindingBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneSpawnableDirectorBlueprintBinding__6B_;
  (this->DynamicBinding).Function.field0_0x0.DebugPtr = (UFunction *)0x0;
  *(undefined8 *)&(this->DynamicBinding).ResolveParamsProperty = 0;
  *(undefined8 *)&(this->DynamicBinding).ResolveParamsProperty.field_0x8 = 0;
  *(undefined8 *)&(this->DynamicBinding).ResolveParamsProperty.field_0x10 = 0;
  *(undefined8 *)&(this->DynamicBinding).ResolveParamsProperty.field_0x18 = 0;
  return this;
}

// ~UMovieSceneSpawnableDirectorBlueprintBinding @ 146621df0

void __thiscall
UMovieSceneSpawnableDirectorBlueprintBinding::~UMovieSceneSpawnableDirectorBlueprintBinding
          (UMovieSceneSpawnableDirectorBlueprintBinding *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneSpawnableDirectorBlueprintBinding__6B_;
  pvVar1 = *(void **)&(this->DynamicBinding).ResolveParamsProperty.field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UMovieSceneSpawnableBindingBase::~UMovieSceneSpawnableBindingBase
            ((UMovieSceneSpawnableBindingBase *)this);
  return;
}

// CreateNewCustomBinding @ 146655140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneCustomBinding * __thiscall
UMovieSceneSpawnableDirectorBlueprintBinding::CreateNewCustomBinding
          (UMovieSceneSpawnableDirectorBlueprintBinding *this,UObject *param_1,UMovieScene *param_2)

{
  undefined8 uVar1;
  FName FVar2;
  FString *pFVar3;
  FName *pFVar4;
  FName FVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  longlong *plVar9;
  ForAnyElementType FVar10;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined1 local_e8 [8];
  undefined1 local_e0 [8];
  FString local_d8;
  FName local_c8;
  FString local_c0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  if (param_1 == (UObject *)0x0) {
    param_1 = (UObject *)this->_padding_;
  }
  uVar1 = *(undefined8 *)&param_1->field_0x18;
  FVar2 = (FName)Z_Construct_UClass_UObject_NoRegister();
  local_f8 = 0;
  MakeUniqueObjectName((UObject *)local_e8,(UClass *)param_2,FVar2,(EUniqueObjectNameOptions)uVar1);
  pFVar3 = ::FName::ToString((FName *)local_e8,&local_c0);
  ::FString::ConcatFC(&local_d8,pFVar3,L"_CustomBinding");
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_d8.Data.ArrayNum != 0) {
    FVar10.Data = local_d8.Data.AllocatorInstance.Data;
  }
  pFVar4 = ::FName::FName(&local_c8,(wchar_t *)FVar10.Data);
  FVar2 = *pFVar4;
  FVar5 = (FName)Z_Construct_UClass_UObject_NoRegister();
  local_f8 = 0;
  MakeUniqueObjectName
            ((UObject *)local_e0,(UClass *)param_2,FVar5,FVar2.ComparisonIndex.Value.Value);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  pUVar6 = StaticClass();
  if ((FName)local_e0 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)param_2,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar7 = StaticClass();
  CheckIsClassChildOf_Internal(pUVar7,pUVar6);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar6);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._16_8_ = local_e0;
  local_a8._24_4_ = RF_Transactional;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = param_2;
  pUVar8 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar9 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  return (UMovieSceneCustomBinding *)pUVar8;
}

// DestroySpawnedObjectInternal @ 14665a030

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMovieSceneSpawnableDirectorBlueprintBinding::DestroySpawnedObjectInternal
          (UMovieSceneSpawnableDirectorBlueprintBinding *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  UWorld *this_00;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if (((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar2->_padding_)) &&
       (this_00 = AActor::GetWorld((AActor *)param_1), this_00 != (UWorld *)0x0)) {
      UWorld::DestroyActor(this_00,(AActor *)param_1,false,false);
    }
  }
  return;
}

// GetBoundObjectClass @ 146689440

UClass * __thiscall
UMovieSceneSpawnableDirectorBlueprintBinding::GetBoundObjectClass
          (UMovieSceneSpawnableDirectorBlueprintBinding *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UObject.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"Object",&Z_Registration_Info_UClass_UObject.InnerSingleton,
               UObject::StaticRegisterNativesUObject,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UObject>,
               InternalVTableHelperCtorCaller<UObject>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObject.InnerSingleton;
}

// GetPrivateStaticClass @ 146696db0

UClass * __cdecl UMovieSceneSpawnableDirectorBlueprintBinding::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSpawnableDirectorBlueprintBinding.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneSpawnableDirectorBlueprintBinding",
               &Z_Registration_Info_UClass_UMovieSceneSpawnableDirectorBlueprintBinding.
                InnerSingleton,StaticRegisterNativesUMovieSceneSpawnableDirectorBlueprintBinding,
               0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneSpawnableDirectorBlueprintBinding>,
               InternalVTableHelperCtorCaller<UMovieSceneSpawnableDirectorBlueprintBinding>,
               local_res8,UMovieSceneSpawnableBindingBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSpawnableDirectorBlueprintBinding.InnerSingleton;
}

// GetSpawnName @ 146697fa0

FName __thiscall
UMovieSceneSpawnableDirectorBlueprintBinding::GetSpawnName
          (UMovieSceneSpawnableDirectorBlueprintBinding *this,FGuid *param_1,UMovieScene *param_2,
          FMovieSceneSequenceID *param_3,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_4)

{
  int iVar1;
  code *pcVar2;
  FScriptContainerElement *_Src;
  FMovieScenePossessable *pFVar3;
  ForAnyElementType FVar4;
  undefined8 *in_stack_00000030;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  undefined8 local_18;
  longlong local_10;
  
  pcVar2 = *(code **)(this->_padding_ + 0x338);
  local_18 = *in_stack_00000030;
  local_10 = in_stack_00000030[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  (*pcVar2)(this,&local_18);
  (**(code **)(this->_padding_ + 0x2d8))(this,&local_28);
  pFVar3 = UMovieScene::FindPossessable((UMovieScene *)param_3,(FGuid *)param_2);
  if (((pFVar3 != (FMovieScenePossessable *)0x0) && (local_20 < 2)) &&
     ((FString *)&local_28 != &pFVar3->Name)) {
    iVar1 = (pFVar3->Name).Data.ArrayNum;
    _Src = (pFVar3->Name).Data.AllocatorInstance.Data;
    local_20 = iVar1;
    if (((iVar1 != 0) || (local_1c != 0)) &&
       (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar1,local_1c,&local_28,iVar1,&local_1c), iVar1 != 0)) {
      memcpy(local_28.Data,_Src,(longlong)iVar1 * 2);
    }
  }
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_20 != 0) {
    FVar4.Data = local_28.Data;
  }
  ::FName::FName((FName *)param_1,(wchar_t *)FVar4.Data);
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)in_stack_00000030[1]);
  return (FName)param_1;
}

// GetWorldContext @ 146699fb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall
UMovieSceneSpawnableDirectorBlueprintBinding::GetWorldContext
          (UMovieSceneSpawnableDirectorBlueprintBinding *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1)

{
  UObject *pUVar1;
  UWorld *pUVar2;
  
  pUVar1 = FWeakObjectPtr::Get(&(param_1->Object->WeakPlaybackContext).WeakPtr);
  if (pUVar1 == (UObject *)0x0) {
    pUVar2 = (UWorld *)0x0;
  }
  else {
    pUVar2 = (UWorld *)(**(code **)(*(longlong *)pUVar1 + 0x180))(pUVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return pUVar2;
}

// PostDuplicate @ 1466acee0

void __thiscall
UMovieSceneSpawnableDirectorBlueprintBinding::PostDuplicate
          (UMovieSceneSpawnableDirectorBlueprintBinding *this,Type param_1)

{
  undefined1 *puVar1;
  int iVar2;
  FFieldClass *pFVar3;
  code *pcVar4;
  ForAnyElementType _Src;
  bool bVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  UPackage *pUVar8;
  UPackage *pUVar9;
  FFieldClass *pFVar10;
  FField *pFVar11;
  undefined4 in_register_00000014;
  int iVar12;
  undefined1 *puVar13;
  FFieldPath local_28;
  
  (**(code **)(this->_padding_ + 0xf8))
            (this,CONCAT71((int7)(CONCAT44(in_register_00000014,param_1) >> 8),param_1 == PIE));
  if ((this->DynamicBinding).Function.field0_0x0.DebugPtr == (UFunction *)0x0) {
    return;
  }
  pUVar6 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar7 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar6);
  if (pUVar7 == (UObject *)0x0) {
    return;
  }
  pUVar8 = UObjectBaseUtility::GetPackage
                     ((UObjectBaseUtility *)(this->DynamicBinding).Function.field0_0x0.DebugPtr);
  pUVar9 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this);
  if (pUVar9 == pUVar8) {
    return;
  }
  (this->DynamicBinding).Function.field0_0x0.DebugPtr = (UFunction *)0x0;
  local_28.ResolvedField = (FField *)0x0;
  local_28.ResolvedOwner.WeakPtr.ObjectIndex = 0;
  local_28.ResolvedOwner.WeakPtr.ObjectSerialNumber = 0;
  local_28.Path.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Path.ArrayNum = 0;
  local_28.Path.ArrayMax = 0;
  pFVar10 = FProperty::StaticClass();
  if ((local_28.ResolvedField == (FField *)0x0) ||
     (bVar5 = FWeakObjectPtr::IsValid(&local_28.ResolvedOwner.WeakPtr),
     pFVar11 = local_28.ResolvedField, !bVar5)) {
    iVar12 = 0;
    if (local_28.Path.ArrayNum == 0) goto LAB_1466ad023;
    pFVar11 = FFieldPath::TryToResolvePath(&local_28,(UStruct *)0x0,UseStructIfOuterNotFound);
    if (pFVar11 != (FField *)0x0) {
      if ((pFVar10 == (FFieldClass *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("FieldType",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                             ,0x2dd,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = pFVar11->ClassPrivate;
      if (pFVar10->Id == CASTCLASS_None) {
        for (; pFVar3 != (FFieldClass *)0x0; pFVar3 = pFVar3->SuperClass) {
          if (pFVar3 == pFVar10) {
            bVar5 = true;
            goto LAB_1466ad001;
          }
        }
        bVar5 = false;
      }
      else {
        bVar5 = (pFVar3->CastFlags & pFVar10->Id) != CASTCLASS_None;
      }
LAB_1466ad001:
      if (bVar5) goto LAB_1466ad020;
    }
    pFVar11 = local_28.ResolvedField;
    if (local_28.ResolvedField != (FField *)0x0) {
      local_28.ResolvedOwner.WeakPtr.ObjectIndex = 0;
      local_28.ResolvedOwner.WeakPtr.ObjectSerialNumber = 0;
      local_28.ResolvedField = (FField *)0x0;
      pFVar11 = local_28.ResolvedField;
    }
  }
LAB_1466ad020:
  local_28.ResolvedField = pFVar11;
  iVar12 = local_28.Path.ArrayNum;
LAB_1466ad023:
  _Src.Data = local_28.Path.AllocatorInstance.Data;
  *(FField **)&(this->DynamicBinding).ResolveParamsProperty = local_28.ResolvedField;
  *(int *)&(this->DynamicBinding).ResolveParamsProperty.field_0x8 =
       local_28.ResolvedOwner.WeakPtr.ObjectIndex;
  *(int *)&(this->DynamicBinding).ResolveParamsProperty.field_0xc =
       local_28.ResolvedOwner.WeakPtr.ObjectSerialNumber;
  puVar13 = &(this->DynamicBinding).ResolveParamsProperty.field_0x10;
  if ((TArray<FName,TSizedDefaultAllocator<32>_> *)puVar13 != &local_28.Path) {
    iVar2 = *(int *)&(this->DynamicBinding).ResolveParamsProperty.field_0x1c;
    puVar1 = &(this->DynamicBinding).ResolveParamsProperty.field_0x1c;
    *(int *)&(this->DynamicBinding).ResolveParamsProperty.field_0x18 = iVar12;
    if ((iVar12 == 0) && (iVar2 == 0)) {
      *(undefined4 *)puVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar12,iVar2,(ForAnyElementType *)puVar13,iVar12,(int *)puVar1);
      if (iVar12 != 0) {
        memcpy(*(void **)puVar13,_Src.Data,(longlong)iVar12 << 3);
      }
    }
  }
  if (local_28.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Path.AllocatorInstance.Data);
  }
  return;
}

// SpawnObjectInternal @ 1466fe2a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UObject * __thiscall
UMovieSceneSpawnableDirectorBlueprintBinding::SpawnObjectInternal
          (UMovieSceneSpawnableDirectorBlueprintBinding *this,UWorld *param_1,FName param_2,
          FGuid *param_3,int param_4,UMovieScene *param_5,FMovieSceneSequenceID *param_6,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_7)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *pTVar3;
  UClass *pUVar4;
  UMovieSceneSequence *pUVar5;
  int iVar6;
  undefined8 uVar7;
  ForAnyElementType FVar8;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_38;
  FMovieSceneDynamicBindingResolveResult local_28;
  
  pUVar4 = Z_Construct_UClass_UMovieSceneSequence_NoRegister();
  pUVar5 = (UMovieSceneSequence *)
           UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_5,pUVar4);
  pTVar3 = param_7;
  local_38.Object = param_7->Object;
  local_38.SharedReferenceCount.ReferenceController =
       (param_7->SharedReferenceCount).ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMovieSceneDynamicBindingInvoker::ResolveDynamicBinding
            (&local_28,&local_38,pUVar5,param_6,param_3,&this->DynamicBinding);
  iVar6 = local_28.Objects.ArrayNum;
  pFVar1 = local_28.Objects.AllocatorInstance.Data + (longlong)iVar6 * 8;
  uVar7 = local_28.Objects._8_8_;
  FVar8.Data = local_28.Objects.AllocatorInstance.Data;
  do {
    if ((int)uVar7 != iVar6) {
      `TCheckedPointerIterator<TObjectPtr<UObject>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&param_7);
      uVar7 = local_28.Objects._8_8_;
    }
    if (FVar8.Data == pFVar1) {
      if (local_28.Objects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Objects.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pTVar3->SharedReferenceCount).ReferenceController);
      return (UObject *)0x0;
    }
    pUVar2 = *(UObject **)FVar8.Data;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar2 != (UObject *)0x0) goto LAB_1466fe364;
    }
    else if (pUVar2 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar2);
LAB_1466fe364:
      if (local_28.Objects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Objects.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pTVar3->SharedReferenceCount).ReferenceController);
      return pUVar2;
    }
    FVar8.Data = FVar8.Data + 8;
  } while( true );
}

// StaticRegisterNativesUMovieSceneSpawnableDirectorBlueprintBinding @ 1466fe890

void __cdecl
UMovieSceneSpawnableDirectorBlueprintBinding::
StaticRegisterNativesUMovieSceneSpawnableDirectorBlueprintBinding(void)

{
  return;
}

// SupportsBindingCreationFromObject @ 1466fea50

bool __thiscall
UMovieSceneSpawnableDirectorBlueprintBinding::SupportsBindingCreationFromObject
          (UMovieSceneSpawnableDirectorBlueprintBinding *this,UObject *param_1)

{
  return true;
}

