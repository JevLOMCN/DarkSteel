// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 17

// StaticClass @ 14658a1d0

UClass * __cdecl UMovieSceneSpawnableActorBinding::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSpawnableActorBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneSpawnableActorBinding",
               &Z_Registration_Info_UClass_UMovieSceneSpawnableActorBinding.InnerSingleton,
               StaticRegisterNativesUMovieSceneSpawnableActorBinding,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneSpawnableActorBinding>,
               InternalVTableHelperCtorCaller<UMovieSceneSpawnableActorBinding>,local_res8,
               UMovieSceneSpawnableActorBindingBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSpawnableActorBinding.InnerSingleton;
}

// UMovieSceneSpawnableActorBinding @ 14661b9e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMovieSceneSpawnableActorBinding * __thiscall
UMovieSceneSpawnableActorBinding::UMovieSceneSpawnableActorBinding
          (UMovieSceneSpawnableActorBinding *this,FVTableHelper *param_1)

{
  UMovieSceneSpawnableBindingBase::UMovieSceneSpawnableBindingBase
            ((UMovieSceneSpawnableBindingBase *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMovieSceneSpawnableActorBinding__6B_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  (this->ActorTemplate).field0_0x0.DebugPtr = (AActor *)0x0;
  return this;
}

// UMovieSceneSpawnableActorBinding @ 14661ba20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMovieSceneSpawnableActorBinding * __thiscall
UMovieSceneSpawnableActorBinding::UMovieSceneSpawnableActorBinding
          (UMovieSceneSpawnableActorBinding *this,FObjectInitializer *param_1)

{
  UMovieSceneSpawnableBindingBase::UMovieSceneSpawnableBindingBase
            ((UMovieSceneSpawnableBindingBase *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMovieSceneSpawnableActorBinding__6B_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  (this->ActorTemplate).field0_0x0.DebugPtr = (AActor *)0x0;
  return this;
}

// ~UMovieSceneSpawnableActorBinding @ 146621db0

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
UMovieSceneSpawnableActorBinding::~UMovieSceneSpawnableActorBinding
          (UMovieSceneSpawnableActorBinding *this)

{
  this->_padding_ = (longlong)&___7UMovieSceneSpawnableActorBindingBase__6B_;
  UMovieSceneSpawnableBindingBase::~UMovieSceneSpawnableBindingBase
            ((UMovieSceneSpawnableBindingBase *)this);
  return;
}

// operator() @ 146623fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSpawnableActorBinding * __thiscall
`UMovieSceneSpawnableActorBinding::CreateNewCustomBinding'::__l2::<lambda_1>::operator()(void *this)

{
  UObject *pUVar1;
  UClass *pUVar2;
  FName FVar3;
  UClass *pUVar4;
  UMovieSceneSpawnableActorBinding *pUVar5;
  longlong *plVar6;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar1 = *(UObject **)this;
  pUVar2 = *(UClass **)(*(longlong *)((longlong)this + 8) + 0x10);
  FVar3 = **(FName **)((longlong)this + 0x10);
  if (FVar3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (pUVar1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = UMovieSceneSpawnableActorBinding::StaticClass();
  CheckIsClassChildOf_Internal(pUVar4,pUVar2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._24_4_ = RF_Transactional;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = pUVar1;
  local_98._16_8_ = FVar3;
  pUVar5 = (UMovieSceneSpawnableActorBinding *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return pUVar5;
}

// CopyObjectTemplate @ 1466539d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UMovieSceneSpawnableActorBinding::CopyObjectTemplate
          (UMovieSceneSpawnableActorBinding *this,UObject *param_1,UMovieSceneSequence *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  FName *pFVar6;
  FName FVar7;
  FUObjectItem *pFVar8;
  AActor *pAVar9;
  uint uVar10;
  ForAnyElementType FVar11;
  FName FVar12;
  longlong lVar13;
  FName local_res10 [2];
  undefined1 local_res20 [8];
  char *in_stack_ffffffffffffff98;
  ulonglong uVar14;
  FString local_48;
  
  if (param_1 == (UObject *)0x0) {
    return;
  }
  pUVar5 = Z_Construct_UClass_AActor_NoRegister();
  iVar1 = (int)pUVar5->_padding_;
  if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar5->_padding_)) {
    in_stack_ffffffffffffff98 = "InSourceObject->IsA<AActor>()";
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7389950433491419564>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Bindings\\MovieSceneSpawnableActorBinding.cpp"
                       ,0x1ac,"InSourceObject->IsA<AActor>()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar5 = Z_Construct_UClass_AActor_NoRegister();
  iVar1 = (int)pUVar5->_padding_;
  if (*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) {
    return;
  }
  if ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar5->_padding_) {
    return;
  }
  pAVar9 = (this->ActorTemplate).field0_0x0.DebugPtr;
  if (pAVar9 == (AActor *)0x0) {
    lVar13 = *(longlong *)&param_1->field_0x18;
  }
  else {
    lVar13 = pAVar9->_padding_;
    pFVar6 = ::FName::FName(local_res10,"ExpiredSpawnable");
    FVar7 = *pFVar6;
    pFVar6 = (FName *)(**(code **)(this->_padding_ + 0x350))(this,local_res20);
    FVar12 = *pFVar6;
    if ((FVar12 == (FName)0x0) ||
       (pUVar5 = Z_Construct_UClass_AActor_NoRegister(), pUVar5 == (UClass *)0x0)) {
LAB_146653afc:
      FVar12.ComparisonIndex.Value = 0;
      FVar12.Number = 0;
    }
    else {
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)((longlong)FVar12 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)((longlong)FVar12 + 0x30) + (longlong)iVar1 * 8)
          != &pUVar5->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_146653afc;
      FVar12 = *pFVar6;
    }
    pUVar5 = (UClass *)(**(code **)(param_2->_padding_ + 0x2f8))(param_2);
    uVar14 = (ulonglong)in_stack_ffffffffffffff98 & 0xffffffff00000000;
    FVar7 = MakeUniqueObjectName
                      ((UObject *)&stack0xffffffffffffffa8,pUVar5,FVar12,
                       FVar7.ComparisonIndex.Value.Value);
    ::FName::ToString((FName *)FVar7,&local_48);
    pAVar9 = (this->ActorTemplate).field0_0x0.DebugPtr;
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar11.Data = local_48.Data.AllocatorInstance.Data;
    }
    (**(code **)(pAVar9->_padding_ + 0x170))(pAVar9,FVar11.Data,0,0x34,uVar14);
    pAVar9 = (this->ActorTemplate).field0_0x0.DebugPtr;
    pFVar8 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&pAVar9->_padding_ + 4))
    ;
    if ((((ulonglong)((pFVar8->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1e & 1) != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsRooted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                           ,0xb8,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UObjectBase::AtomicallySetFlags((UObjectBase *)pAVar9,RF_MirroredGarbage);
    pFVar8 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&pAVar9->_padding_ + 4))
    ;
    do {
      lVar2 = (pFVar8->field0_0x0).FlagsAndRefCount;
      uVar10 = (uint)((ulonglong)lVar2 >> 0x20);
      if ((uVar10 >> 0x15 & 1) != 0) break;
      if (((ulonglong)pFVar8 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (
                  L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                  );
      }
      LOCK();
      bVar4 = lVar2 == (pFVar8->field0_0x0).FlagsAndRefCount;
      if (bVar4) {
        (pFVar8->field0_0x0).FlagsAndRefCount =
             ((longlong)(int)uVar10 | 0x200000U) << 0x20 | (longlong)(int)lVar2;
      }
      UNLOCK();
    } while (!bVar4);
    pFVar8 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&pAVar9->_padding_ + 4))
    ;
    FUObjectItem::ClearRootFlags(pFVar8,Async);
    (this->ActorTemplate).field0_0x0.DebugPtr = (AActor *)0x0;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  pAVar9 = (AActor *)(**(code **)(param_2->_padding_ + 0x330))(param_2,param_1,lVar13);
  if (pAVar9 != (AActor *)0x0) {
    pUVar5 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pAVar9->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar9->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) goto LAB_146653ca3;
  }
  pAVar9 = (AActor *)0x0;
LAB_146653ca3:
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pAVar9 == (AActor *)0x0)) {
    (this->ActorTemplate).field0_0x0.DebugPtr = pAVar9;
    if ((pAVar9 == (AActor *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ActorTemplate",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Bindings\\MovieSceneSpawnableActorBinding.cpp"
                           ,0x1bc,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pAVar9);
    (this->ActorTemplate).field0_0x0.DebugPtr = pAVar9;
  }
  FMovieSceneSpawnable::MarkSpawnableTemplate((UObject *)(this->ActorTemplate).field0_0x0.DebugPtr);
  UMovieSceneSpawnableActorBindingBase::AutoSetNetAddressableName
            ((UMovieSceneSpawnableActorBindingBase *)this);
  UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)param_2);
  return;
}

// CreateNewCustomBinding @ 146654b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneCustomBinding * __thiscall
UMovieSceneSpawnableActorBinding::CreateNewCustomBinding
          (UMovieSceneSpawnableActorBinding *this,UObject *param_1,UMovieScene *param_2)

{
  FName FVar1;
  longlong lVar2;
  longlong lVar3;
  TObjectPtr<UClass> TVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FName FVar8;
  FString *pFVar9;
  FName *pFVar10;
  UClass *pUVar11;
  UMovieSceneSpawnableActorBinding *pUVar12;
  AActor *pAVar13;
  UPackage *pUVar14;
  UClass *pUVar15;
  UObject *pUVar16;
  ForAnyElementType FVar17;
  AActor *pAVar18;
  uint uVar19;
  undefined1 auStackY_298 [32];
  FName local_258;
  undefined1 local_250 [8];
  undefined1 local_248 [16];
  undefined1 *local_238;
  undefined1 local_230 [8];
  FString local_228;
  undefined1 local_218 [24];
  undefined8 uStack_200;
  void *local_1f8;
  undefined4 local_1f0;
  uint local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined8 local_1e0;
  void *local_1d8;
  ulonglong local_1d0;
  undefined1 local_1c8 [232];
  void *local_e0;
  undefined4 local_d8;
  void *local_d0;
  TSparseArray<TSparseSetElement<TTuple<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_c0;
  void *local_80;
  undefined4 local_78;
  UPackage *local_60;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_298;
  pAVar18 = (AActor *)0x0;
  if (param_1 == (UObject *)0x0) {
    pFVar10 = ::FName::FName(&local_258,L"EmptyBinding");
  }
  else {
    pFVar10 = (FName *)&param_1->field_0x18;
  }
  FVar1 = *pFVar10;
  FVar8 = (FName)Z_Construct_UClass_UObject_NoRegister();
  MakeUniqueObjectName
            ((UObject *)local_250,(UClass *)param_2,FVar8,FVar1.ComparisonIndex.Value.Value);
  pFVar9 = ::FName::ToString((FName *)local_250,(FString *)local_248);
  ::FString::ConcatFC(&local_228,pFVar9,L"_CustomBinding");
  FVar17.Data = (FScriptContainerElement *)L"";
  if (local_228.Data.ArrayNum != 0) {
    FVar17.Data = local_228.Data.AllocatorInstance.Data;
  }
  pFVar10 = ::FName::FName(&local_258,(wchar_t *)FVar17.Data);
  FVar1 = *pFVar10;
  FVar8 = (FName)Z_Construct_UClass_UObject_NoRegister();
  MakeUniqueObjectName
            ((UObject *)local_230,(UClass *)param_2,FVar8,FVar1.ComparisonIndex.Value.Value);
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_248._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_248._0_8_);
  }
  local_238 = local_230;
  local_248._0_8_ = param_2;
  local_248._8_8_ = this;
  pUVar11 = Z_Construct_UClass_AActor_NoRegister();
  if (param_1 == (UObject *)0x0) {
    if (pUVar11 == (UClass *)0x0) {
      return (UMovieSceneCustomBinding *)0x0;
    }
LAB_146655082:
    pUVar15 = Z_Construct_UClass_UClass_NoRegister();
    iVar7 = (int)pUVar15->_padding_;
    if (*(int *)(pUVar11->_padding_ + 0x38) < iVar7) {
      return (UMovieSceneCustomBinding *)0x0;
    }
    if ((longlong *)*(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar7 * 8)
        == &pUVar15->_padding_) {
      pUVar15 = Z_Construct_UClass_AActor_NoRegister();
      if (pUVar15 != (UClass *)0x0) {
        iVar7 = (int)pUVar15->_padding_;
        if (((int)pUVar11->_padding_ < iVar7) ||
           ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar7 * 8) !=
            &pUVar15->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          pUVar12 = `UMovieSceneSpawnableActorBinding::CreateNewCustomBinding'::__l2::<lambda_1>::
                    operator()(local_248);
          if (pUVar12 != (UMovieSceneSpawnableActorBinding *)0x0) {
            pcVar5 = *(code **)(pUVar12->_padding_ + 0x318);
            pUVar16 = NewObject<UObject>((UObject *)param_2,pUVar11,(FName)local_250,
                                         RF_Transactional,(UObject *)0x0,false,
                                         (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
            (*pcVar5)(pUVar12,pUVar16);
            return (UMovieSceneCustomBinding *)pUVar12;
          }
          return (UMovieSceneCustomBinding *)0x0;
        }
      }
      return (UMovieSceneCustomBinding *)0x0;
    }
    return (UMovieSceneCustomBinding *)0x0;
  }
  iVar7 = (int)pUVar11->_padding_;
  if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar7) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar7 * 8) !=
      &pUVar11->_padding_)) {
    pUVar15 = Z_Construct_UClass_UBlueprint_NoRegister();
    iVar7 = (int)pUVar15->_padding_;
    pUVar11 = (UClass *)param_1;
    if ((iVar7 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar7 * 8) ==
        &pUVar15->_padding_)) {
      lVar2 = *(longlong *)&param_1[1].field_0x8;
      lVar3 = param_2->_padding_;
      pAVar13 = pAVar18;
      if ((lVar2 != 0) &&
         (pUVar11 = Z_Construct_UClass_UObject_NoRegister(), pUVar11 != (UClass *)0x0)) {
        iVar7 = (int)pUVar11->_padding_;
        if ((*(int *)(lVar2 + 0x38) < iVar7) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar7 * 8) !=
            &pUVar11->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          pAVar13 = *(AActor **)&param_1[1].field_0x8;
        }
      }
      TVar4.field0_0x0 =
           (TObjectPtr<UClass>_u_0)
           ((TObjectPtr<UClass>_u_0 *)
           ((longlong)&(pAVar13->ReplicatedMovement).LinearVelocity.field0_0x0 + 0x10))->DebugPtr;
      if (TVar4.field0_0x0 == (UClass *)0x0) {
        return (UMovieSceneCustomBinding *)0x0;
      }
      if ((*(int *)(lVar3 + 0x38) < *(int *)((longlong)TVar4.field0_0x0 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)((longlong)TVar4.field0_0x0 + 0x38) * 8)
          != (longlong)TVar4.field0_0x0 + 0x30)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (!bVar6) {
        return (UMovieSceneCustomBinding *)0x0;
      }
      lVar2 = *(longlong *)&param_1[1].field_0x8;
      pAVar13 = pAVar18;
      if ((lVar2 != 0) &&
         (pUVar11 = Z_Construct_UClass_UObject_NoRegister(), pUVar11 != (UClass *)0x0)) {
        iVar7 = (int)pUVar11->_padding_;
        if ((*(int *)(lVar2 + 0x38) < iVar7) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar7 * 8) !=
            &pUVar11->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          pAVar13 = *(AActor **)&param_1[1].field_0x8;
        }
      }
      pUVar11 = Z_Construct_UClass_AActor_NoRegister();
      if (pUVar11 == (UClass *)0x0) {
        return (UMovieSceneCustomBinding *)0x0;
      }
      iVar7 = (int)pUVar11->_padding_;
      if (((int)(pAVar13->PrimaryActorTick)._padding_ < iVar7) ||
         ((longlong *)*(undefined1 **)((pAVar13->PrimaryActorTick)._padding_ + (longlong)iVar7 * 8)
          != &pUVar11->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (!bVar6) {
        return (UMovieSceneCustomBinding *)0x0;
      }
      pUVar12 = `UMovieSceneSpawnableActorBinding::CreateNewCustomBinding'::__l2::<lambda_1>::
                operator()(local_248);
      pUVar11 = (UClass *)param_1;
      if (pUVar12 != (UMovieSceneSpawnableActorBinding *)0x0) {
        lVar2 = *(longlong *)&param_1[1].field_0x8;
        pcVar5 = *(code **)(pUVar12->_padding_ + 0x318);
        if ((lVar2 != 0) &&
           (pUVar11 = Z_Construct_UClass_UObject_NoRegister(), pUVar11 != (UClass *)0x0)) {
          iVar7 = (int)pUVar11->_padding_;
          if ((*(int *)(lVar2 + 0x38) < iVar7) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar7 * 8) !=
              &pUVar11->_padding_)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (bVar6) {
            pAVar18 = *(AActor **)&param_1[1].field_0x8;
          }
        }
        pUVar16 = NewObject<UObject>((UObject *)pUVar12,(UClass *)pAVar18,(FName)local_250,
                                     RF_Transactional,(UObject *)0x0,false,
                                     (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
        (*pcVar5)(pUVar12,pUVar16);
        return (UMovieSceneCustomBinding *)pUVar12;
      }
    }
    goto LAB_146655082;
  }
  TArray<FName,TSizedDefaultAllocator<32>_>::Remove
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)&param_1[0xc].field_0x18,
             &SequencerActorTag);
  TArray<FName,TSizedDefaultAllocator<32>_>::Remove
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)&param_1[0xc].field_0x18,
             &SequencerPreviewActorTag);
  uVar19 = *(uint *)&param_1->field_0x8 >> 3;
  if ((uVar19 & 1) == 0) {
    UObjectBase::AtomicallySetFlags((UObjectBase *)param_1,RF_Transactional);
  }
  pUVar12 = `UMovieSceneSpawnableActorBinding::CreateNewCustomBinding'::__l2::<lambda_1>::operator()
                      (local_248);
  pUVar11 = (UClass *)param_1;
  if (pUVar12 == (UMovieSceneSpawnableActorBinding *)0x0) goto LAB_146655082;
  pAVar13 = (AActor *)
            StaticDuplicateObject
                      (param_1,(UObject *)param_2,(FName)local_250,
                       RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                       RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                       RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|RF_DuplicateTransient|
                       RF_InheritableComponentTemplate|RF_LoadCompleted|RF_TextExportTransient|
                       RF_WasLoaded|RF_DefaultSubObject|RF_BeingRegenerated|RF_FinishDestroyed|
                       RF_BeginDestroyed|RF_NewerVersionExists|RF_NeedPostLoadSubobjects|
                       RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|RF_NeedInitialization|
                       RF_TagGarbageTemp|RF_MarkAsRootSet|RF_ArchetypeObject|RF_ClassDefaultObject|
                       RF_Transactional|RF_MarkAsNative|RF_Standalone|RF_Public,(UClass *)0x0,Normal
                       ,PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|Native|
                        ClusterRoot|ReachableInCluster|AsyncLoadingPhase1|Garbage|LoaderImport|
                        AutoRTFMConstructionAborted|ReachabilityFlag2|ReachabilityFlag1|
                        ReachabilityFlag0);
  if (pAVar13 != (AActor *)0x0) {
    pUVar11 = Z_Construct_UClass_AActor_NoRegister();
    iVar7 = (int)pUVar11->_padding_;
    if ((iVar7 <= *(int *)(pAVar13->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar13->_padding_ + 0x30) + (longlong)iVar7 * 8)
        == &pUVar11->_padding_)) goto LAB_146654ce5;
  }
  pAVar13 = pAVar18;
LAB_146654ce5:
  local_258.ComparisonIndex.Value = 0;
  AActor::DetachFromActor(pAVar13,(FDetachmentTransformRules *)&local_258);
  (**(code **)(pUVar12->_padding_ + 0x318))(pUVar12,pAVar13);
  if ((uVar19 & 1) == 0) {
    UObjectBase::AtomicallyClearFlags((UObjectBase *)param_1,RF_Transactional);
  }
  pUVar14 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)pAVar13);
  local_1e0 = 0;
  local_218._16_8_ = 0;
  uStack_200 = 0;
  local_1d0 = 0;
  local_218._0_8_ = (FScriptContainerElement *)0x0;
  local_218._8_8_ = 0;
  local_1f8 = (void *)0x0;
  local_1f0 = 0;
  local_1ec = 0x80;
  local_1e8 = 0xffffffff;
  local_1e4 = 0;
  local_1d8 = (void *)0x0;
  FArchiveReplaceObjectRef<UObject>::FArchiveReplaceObjectRef<UObject>
            ((FArchiveReplaceObjectRef<UObject> *)local_1c8,(UObject *)pAVar13,
             (TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
              *)local_218,DelayStart|NullPrivateRefs);
  local_1c8._0_8_ = &___7FArchiveClearExternalReferences_MovieSceneTracks_UE__6B_;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  local_60 = pUVar14;
  FArchiveReplaceObjectRef<UObject>::SerializeSearchObject
            ((FArchiveReplaceObjectRef<UObject> *)local_1c8);
  local_1d0 = local_1d0 & 0xffffffff00000000;
  if (local_1d8 != (void *)0x0) {
    FMemory::Free(local_1d8);
  }
  iVar7 = SUB84(local_218._8_8_,4);
  local_218._8_8_ = local_218._8_8_ & 0xffffffff00000000;
  if (iVar7 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_218,0,(int *)(local_218 + 0xc));
  }
  local_1e8 = 0xffffffff;
  local_1e4 = 0;
  local_1f0 = 0;
  if (0x80 < local_1ec) {
    local_1ec = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_218 + 0x10),0);
  }
  if (local_1f8 != (void *)0x0) {
    FMemory::Free(local_1f8);
  }
  if ((FScriptContainerElement *)local_218._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_218._0_8_);
  }
  UE::MovieSceneTracks::LogRemovedExternalObjects((UObject *)this,&local_58);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  local_78 = 0;
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_c0);
  if (local_d0 != (void *)0x0) {
    FMemory::Free(local_d0);
  }
  local_d8 = 0;
  if (local_e0 != (void *)0x0) {
    FMemory::Free(local_e0);
  }
  TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_1c8 + 0xa8));
  FArchive::~FArchive((FArchive *)local_1c8);
  return (UMovieSceneCustomBinding *)pUVar12;
}

// GetActorClass @ 146688970

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSubclassOf<AActor> __thiscall
UMovieSceneSpawnableActorBinding::GetActorClass(UMovieSceneSpawnableActorBinding *this)

{
  UObject *pUVar1;
  longlong lVar2;
  TObjectPtr<UClass> in_RDX;
  
  lVar2 = (**(code **)(this->_padding_ + 0x358))();
  if (lVar2 == 0) {
    *(undefined8 *)in_RDX.field0_0x0 = 0;
  }
  else {
    pUVar1 = *(UObject **)(lVar2 + 0x10);
    *(UObject **)in_RDX.field0_0x0 = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
      return (TSubclassOf<AActor>)in_RDX.field0_0x0;
    }
  }
  return (TSubclassOf<AActor>)in_RDX.field0_0x0.DebugPtr;
}

// GetActorTemplate @ 146688a20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall
UMovieSceneSpawnableActorBinding::GetActorTemplate(UMovieSceneSpawnableActorBinding *this)

{
  return (this->ActorTemplate).field0_0x0.DebugPtr;
}

// GetObjectTemplate @ 14668e520

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __thiscall
UMovieSceneSpawnableActorBinding::GetObjectTemplate(UMovieSceneSpawnableActorBinding *this)

{
  return (UObject *)(this->ActorTemplate).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 146696c30

UClass * __cdecl UMovieSceneSpawnableActorBinding::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSpawnableActorBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneSpawnableActorBinding",
               &Z_Registration_Info_UClass_UMovieSceneSpawnableActorBinding.InnerSingleton,
               StaticRegisterNativesUMovieSceneSpawnableActorBinding,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneSpawnableActorBinding>,
               InternalVTableHelperCtorCaller<UMovieSceneSpawnableActorBinding>,local_res8,
               UMovieSceneSpawnableActorBindingBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSpawnableActorBinding.InnerSingleton;
}

// GetWorldContext @ 146699d90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UWorld * __thiscall
UMovieSceneSpawnableActorBinding::GetWorldContext
          (UMovieSceneSpawnableActorBinding *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ULevelStreaming *this_00;
  ForAnyElementType FVar3;
  bool bVar4;
  UObject *pUVar5;
  UWorld *pUVar6;
  FString *this_01;
  FScriptContainerElement *pFVar7;
  UWorld *pUVar8;
  int iVar9;
  undefined4 local_res8 [2];
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *local_res10;
  FName local_res18;
  FString local_58;
  FString local_48;
  
  pUVar8 = (UWorld *)0x0;
  local_res8[0] = 0;
  local_res10 = param_1;
  pUVar5 = FWeakObjectPtr::Get(&(param_1->Object->WeakPlaybackContext).WeakPtr);
  pUVar6 = pUVar8;
  if (pUVar5 != (UObject *)0x0) {
    pUVar6 = (UWorld *)(**(code **)(*(longlong *)pUVar5 + 0x180))(pUVar5);
  }
  local_res18 = *(FName *)((longlong)&this->_padding_ + 4);
  if ((local_res18 != (FName)0x0) &&
     ((pUVar6 == (UWorld *)0x0 || ((FName)pUVar6->_padding_ != local_res18)))) {
    ::FName::ToString(&local_res18,&local_58);
    bVar4 = FPackageName::IsShortPackageName(&local_58);
    if (bVar4) {
      ::FString::InsertAt(&local_58,0,L'/');
    }
    pFVar7 = (pUVar6->StreamingLevels).AllocatorInstance.Data;
    iVar2 = (pUVar6->StreamingLevels).ArrayNum;
    pFVar1 = pFVar7 + (longlong)iVar2 * 8;
    do {
      if ((pUVar6->StreamingLevels).ArrayNum != iVar2) {
        `TCheckedPointerIterator<ULevelStreaming_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar7 == pFVar1) {
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_146699f27;
      }
      this_00 = *(ULevelStreaming **)pFVar7;
      if (this_00 == (ULevelStreaming *)0x0) {
LAB_146699ebd:
        bVar4 = false;
      }
      else {
        pUVar8 = (UWorld *)&DAT_00000001;
        this_01 = ULevelStreaming::GetWorldAssetPackageName(this_00,&local_48);
        iVar9 = local_58.Data.ArrayNum + -1;
        FVar3.Data = local_58.Data.AllocatorInstance.Data;
        if (local_58.Data.ArrayNum == 0) {
          iVar9 = 0;
          FVar3.Data = (FScriptContainerElement *)L"";
        }
        bVar4 = ::FString::EndsWith(this_01,(wchar_t *)FVar3.Data,iVar9,IgnoreCase);
        if (!bVar4) goto LAB_146699ebd;
        bVar4 = true;
      }
      if ((pUVar8 != (UWorld *)0x0) &&
         (pUVar8 = (UWorld *)0x0,
         local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (bVar4) goto LAB_146699ee8;
      pFVar7 = pFVar7 + 8;
    } while( true );
  }
LAB_146699f87:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_res10->SharedReferenceCount).ReferenceController);
  return pUVar6;
LAB_146699ee8:
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((this_00 == (ULevelStreaming *)0x0) ||
     (pUVar8 = TSoftObjectPtr<UWorld>::Get(&this_00->WorldAsset), pUVar8 == (UWorld *)0x0)) {
LAB_146699f27:
    if (2 < (byte)LogMovieScene._0_1_) {
      ::FName::ToString(&local_res18,&local_48);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    pUVar6 = TSoftObjectPtr<UWorld>::Get(&this_00->WorldAsset);
  }
  goto LAB_146699f87;
}

// PostDuplicate @ 1466acdc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UMovieSceneSpawnableActorBinding::PostDuplicate(UMovieSceneSpawnableActorBinding *this,Type param_1)

{
  int iVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  AActor *pAVar5;
  undefined4 in_register_00000014;
  
  (**(code **)(this->_padding_ + 0xf8))
            (this,CONCAT71((int7)(CONCAT44(in_register_00000014,param_1) >> 8),param_1 == PIE));
  if ((this->ActorTemplate).field0_0x0.DebugPtr == (AActor *)0x0) {
    return;
  }
  pUVar2 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar3 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar2);
  if (pUVar3 == (UObject *)0x0) {
    return;
  }
  pAVar5 = (this->ActorTemplate).field0_0x0.DebugPtr;
  pUVar2 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar4 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)pAVar5,pUVar2);
  if (pUVar4 == pUVar3) {
    return;
  }
  pAVar5 = (AActor *)
           StaticDuplicateObject
                     ((UObject *)(this->ActorTemplate).field0_0x0.DebugPtr,pUVar3,(FName)0x0,
                      RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                      RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                      RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|RF_DuplicateTransient|
                      RF_InheritableComponentTemplate|RF_LoadCompleted|RF_TextExportTransient|
                      RF_WasLoaded|RF_DefaultSubObject|RF_BeingRegenerated|RF_FinishDestroyed|
                      RF_BeginDestroyed|RF_NewerVersionExists|RF_NeedPostLoadSubobjects|
                      RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|RF_NeedInitialization|
                      RF_TagGarbageTemp|RF_MarkAsRootSet|RF_Transient|RF_ArchetypeObject|
                      RF_ClassDefaultObject|RF_Transactional|RF_MarkAsNative|RF_Standalone|RF_Public
                      ,(UClass *)0x0,Normal,
                      PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|Native|
                      ClusterRoot|ReachableInCluster|AsyncLoadingPhase1|Garbage|LoaderImport|
                      AutoRTFMConstructionAborted|ReachabilityFlag2|ReachabilityFlag1|
                      ReachabilityFlag0);
  if (pAVar5 == (AActor *)0x0) {
LAB_1466ace83:
    pAVar5 = (AActor *)0x0;
  }
  else {
    pUVar2 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(pAVar5->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) goto LAB_1466ace83;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pAVar5 == (AActor *)0x0)) {
    (this->ActorTemplate).field0_0x0.DebugPtr = pAVar5;
    if (pAVar5 == (AActor *)0x0) goto LAB_1466aceb8;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pAVar5);
    (this->ActorTemplate).field0_0x0.DebugPtr = pAVar5;
  }
  FMovieSceneSpawnable::MarkSpawnableTemplate((UObject *)pAVar5);
LAB_1466aceb8:
  UMovieSceneSpawnableActorBindingBase::AutoSetNetAddressableName
            ((UMovieSceneSpawnableActorBindingBase *)this);
  return;
}

// SetObjectTemplate @ 1466fb090

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
UMovieSceneSpawnableActorBinding::SetObjectTemplate
          (UMovieSceneSpawnableActorBinding *this,UObject *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  
  if (param_1 == (UObject *)0x0) {
LAB_1466fb14c:
    param_1 = (UObject *)0x0;
  }
  else {
    pUVar4 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7389950433491419547>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Bindings\\MovieSceneSpawnableActorBinding.cpp"
                         ,0x19b,"InObjectTemplate == nullptr || InObjectTemplate->IsA<AActor>()");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((*(uint *)&param_1->field_0x8 >> 4 & 1) != 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObjectTemplate == nullptr || !InObjectTemplate->HasAnyFlags(RF_ClassDefaultObject)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Bindings\\MovieSceneSpawnableActorBinding.cpp"
                         ,0x19c,
                         L"Setting CDOs as object templates is not supported. Please use the class directly."
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pUVar4 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) goto LAB_1466fb14c;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || ((AActor *)param_1 == (AActor *)0x0))
  {
    (this->ActorTemplate).field0_0x0.DebugPtr = (AActor *)param_1;
    if ((AActor *)param_1 == (AActor *)0x0) goto LAB_1466fb17b;
  }
  else {
    UE::GC::MarkAsReachable(param_1);
    (this->ActorTemplate).field0_0x0.DebugPtr = (AActor *)param_1;
  }
  FMovieSceneSpawnable::MarkSpawnableTemplate(param_1);
LAB_1466fb17b:
  UMovieSceneSpawnableActorBindingBase::AutoSetNetAddressableName
            ((UMovieSceneSpawnableActorBindingBase *)this);
  return;
}

// StaticRegisterNativesUMovieSceneSpawnableActorBinding @ 1466fe870

void __cdecl
UMovieSceneSpawnableActorBinding::StaticRegisterNativesUMovieSceneSpawnableActorBinding(void)

{
  return;
}

// SupportsBindingCreationFromObject @ 1466fe920

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UMovieSceneSpawnableActorBinding::SupportsBindingCreationFromObject
          (UMovieSceneSpawnableActorBinding *this,UObject *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  longlong lVar4;
  
  if (param_1 == (UObject *)0x0) {
    return true;
  }
  pUVar3 = Z_Construct_UClass_AActor_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar3->_padding_)) {
    return true;
  }
  pUVar3 = Z_Construct_UClass_UBlueprint_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar3->_padding_)) {
    pUVar3 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if (*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) {
      return false;
    }
    if ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_) {
      return false;
    }
    pUVar3 = Z_Construct_UClass_AActor_NoRegister();
    if (pUVar3 == (UClass *)0x0) {
      return false;
    }
    iVar1 = (int)pUVar3->_padding_;
    if (*(int *)&param_1[1].field_0x10 < iVar1) {
      return false;
    }
    if ((longlong *)*(undefined1 **)(*(longlong *)&param_1[1].field_0x8 + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_) {
      return false;
    }
    return true;
  }
  lVar4 = *(longlong *)&param_1[1].field_0x8;
  if ((lVar4 != 0) && (pUVar3 = Z_Construct_UClass_UObject_NoRegister(), pUVar3 != (UClass *)0x0)) {
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar4 = *(longlong *)&param_1[1].field_0x8;
      goto LAB_1466fe9c4;
    }
  }
  lVar4 = 0;
LAB_1466fe9c4:
  pUVar3 = Z_Construct_UClass_AActor_NoRegister();
  if (pUVar3 != (UClass *)0x0) {
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(lVar4 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return true;
    }
  }
  return false;
}

// SupportsObjectTemplates @ 1466fea60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UMovieSceneSpawnableActorBinding::SupportsObjectTemplates(UMovieSceneSpawnableActorBinding *this)

{
  return true;
}

