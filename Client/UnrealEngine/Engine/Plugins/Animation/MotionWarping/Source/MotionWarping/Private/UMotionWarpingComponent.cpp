// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MotionWarping
// Functions: 40

// StaticClass @ 14ceff100

UClass * __cdecl UMotionWarpingComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMotionWarpingComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"MotionWarpingComponent",
               &Z_Registration_Info_UClass_UMotionWarpingComponent.InnerSingleton,
               StaticRegisterNativesUMotionWarpingComponent,0x158,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UMotionWarpingComponent>,
               InternalVTableHelperCtorCaller<UMotionWarpingComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMotionWarpingComponent.InnerSingleton;
}

// UMotionWarpingComponent @ 14cf04300

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMotionWarpingComponent * __thiscall
UMotionWarpingComponent::UMotionWarpingComponent
          (UMotionWarpingComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)&this->OnPreUpdate = 0;
  *(undefined8 *)&(this->OnPreUpdate).field_0x8 = 0;
  *(undefined8 *)&(this->OnPreUpdate).field_0x10 = 0;
  (this->OwnerAdapter).field0_0x0.DebugPtr = (UMotionWarpingBaseAdapter *)0x0;
  (this->Modifiers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Modifiers).ArrayNum = 0;
  (this->Modifiers).ArrayMax = 0;
  (this->WarpTargets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WarpTargets).ArrayNum = 0;
  (this->WarpTargets).ArrayMax = 0;
  (this->SwitchOffConditions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SwitchOffConditions).ArrayNum = 0;
  (this->SwitchOffConditions).ArrayMax = 0;
  (this->OriginalRootMotionAccum).bIsSet = false;
  (this->WarpedRootMotionAccum).bIsSet = false;
  return this;
}

// UMotionWarpingComponent @ 14cf043a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMotionWarpingComponent * __thiscall
UMotionWarpingComponent::UMotionWarpingComponent
          (UMotionWarpingComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)&this->OnPreUpdate = 0;
  *(undefined8 *)&(this->OnPreUpdate).field_0x8 = 0;
  *(undefined8 *)&(this->OnPreUpdate).field_0x10 = 0;
  (this->OwnerAdapter).field0_0x0.DebugPtr = (UMotionWarpingBaseAdapter *)0x0;
  (this->Modifiers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Modifiers).ArrayNum = 0;
  (this->Modifiers).ArrayMax = 0;
  (this->WarpTargets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WarpTargets).ArrayNum = 0;
  (this->WarpTargets).ArrayMax = 0;
  (this->SwitchOffConditions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SwitchOffConditions).ArrayNum = 0;
  (this->SwitchOffConditions).ArrayMax = 0;
  (this->OriginalRootMotionAccum).bIsSet = false;
  (this->WarpedRootMotionAccum).bIsSet = false;
  UActorComponent::SetIsReplicatedByDefault((UActorComponent *)this,true);
  return this;
}

// ~UMotionWarpingComponent @ 14cf05820

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMotionWarpingComponent::~UMotionWarpingComponent(UMotionWarpingComponent *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  DestructItems<FSwitchOffConditionData,int>
            ((FSwitchOffConditionData *)(this->SwitchOffConditions).AllocatorInstance.Data,
             (this->SwitchOffConditions).ArrayNum);
  pFVar1 = (this->SwitchOffConditions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WarpTargets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Modifiers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->OnPreUpdate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPreUpdate);
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// operator() @ 14cf05c30

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
`UMotionWarpingComponent::UpdateWithContext'::__l90::<lambda_1>::operator()
          (void *this,URootMotionModifier *param_1)

{
  longlong lVar1;
  TRotator<double> *this_00;
  UObject *pUVar2;
  UWorld *this_01;
  FName local_res10;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8 [2];
  double local_88;
  TRotator<double> local_80 [4];
  
  if (param_1->State == MarkedForRemoval) {
    if (5 < (byte)LogMotionWarping._0_1_) {
      this_00 = AActor::GetActorRotation(*(AActor **)(*(longlong *)this + 0xa8),local_80);
      UE::Math::TRotator<double>::ToCompactString(this_00,local_a8);
      lVar1 = *(longlong *)(*(longlong *)(*(longlong *)this + 0xa8) + 0x1b8);
      local_88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (lVar1 != 0) {
        local_88 = *(double *)(lVar1 + 0x220);
      }
      ::FString::PrintfImpl(&local_b8,L"X=%3.3f Y=%3.3f Z=%3.3f");
      pUVar2 = FWeakObjectPtr::Get(&(param_1->Animation).WeakPtr);
      if (pUVar2 == (UObject *)0x0) {
        ::FString::FString(&local_c8,L"None");
      }
      else {
        local_res10.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
        local_res10.Number = *(uint *)&pUVar2->field_0x1c;
        ::FName::ToString(&local_res10,&local_c8);
      }
      if (*(longlong *)(*(longlong *)this + 0xa8) == 0) {
        ::FString::FString(&local_d8,L"None");
      }
      else {
        local_res10 = *(FName *)(*(longlong *)(*(longlong *)this + 0xa8) + 0x18);
        ::FName::ToString(&local_res10,&local_d8);
      }
      if ((*(UActorComponent **)this)->WorldPrivate == (UWorld *)0x0) {
        UActorComponent::GetWorld_Uncached(*(UActorComponent **)this);
      }
      this_01 = (*(UActorComponent **)this)->WorldPrivate;
      if (this_01 == (UWorld *)0x0) {
        this_01 = UActorComponent::GetWorld_Uncached(*(UActorComponent **)this);
      }
      UWorld::InternalGetNetMode(this_01);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMotionWarping);
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (local_a8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8[0].Data.AllocatorInstance.Data);
      }
    }
    return true;
  }
  return false;
}

// AddModifier @ 14cf06ab0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
UMotionWarpingComponent::AddModifier(UMotionWarpingComponent *this,URootMotionModifier *param_1)

{
  int *piVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TRotator<double> *this_00;
  UObject *pUVar7;
  UWorld *this_01;
  TArray<TObjectPtr<URootMotionModifier>,TSizedDefaultAllocator<32>_> *pTVar8;
  FName local_res10;
  FName local_res18;
  URootMotionModifier *local_108;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0 [2];
  double local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  double local_98;
  TRotator<double> local_90 [4];
  
  if (param_1 == (URootMotionModifier *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_575305612259229353>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\MotionWarping\\Source\\MotionWarping\\Private\\MotionWarpingComponent.cpp"
                       ,0x157,"Modifier");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    return -1;
  }
  if (5 < (byte)LogMotionWarping._0_1_) {
    this_00 = AActor::GetActorRotation((AActor *)this->_padding_,local_90);
    UE::Math::TRotator<double>::ToCompactString(this_00,local_d0);
    lVar2 = *(longlong *)(this->_padding_ + 0x1b8);
    local_b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (lVar2 != 0) {
      local_a8 = *(undefined8 *)(lVar2 + 0x210);
      uStack_a0 = *(undefined8 *)(lVar2 + 0x218);
      local_98 = *(double *)(lVar2 + 0x220);
      local_b0 = local_98;
    }
    ::FString::PrintfImpl(&local_e0,L"X=%3.3f Y=%3.3f Z=%3.3f");
    pUVar7 = FWeakObjectPtr::Get(&(param_1->Animation).WeakPtr);
    if (pUVar7 == (UObject *)0x0) {
      ::FString::FString(&local_f0,L"None");
    }
    else {
      local_res10.ComparisonIndex.Value = *(uint *)&pUVar7->field_0x18;
      local_res10.Number = *(uint *)&pUVar7->field_0x1c;
      ::FName::ToString(&local_res10,&local_f0);
    }
    if (this->_padding_ == 0) {
      ::FString::FString(&local_100,L"None");
    }
    else {
      local_res18 = *(FName *)(this->_padding_ + 0x18);
      ::FName::ToString(&local_res18,&local_100);
    }
    if (this->_padding_ == 0) {
      UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    this_01 = (UWorld *)this->_padding_;
    if (this_01 == (UWorld *)0x0) {
      this_01 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    UWorld::InternalGetNetMode(this_01);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMotionWarping);
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    if (local_d0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0[0].Data.AllocatorInstance.Data);
    }
  }
  pTVar8 = &this->Modifiers;
  local_108 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar3 = (pTVar8->AllocatorInstance).Data;
  if (((pFVar3 <= (FScriptContainerElement *)&local_108) &&
      ((FScriptContainerElement *)&local_108 < pFVar3 + (longlong)(this->Modifiers).ArrayMax * 8))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  iVar6 = (this->Modifiers).ArrayNum;
  piVar1 = &(this->Modifiers).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar8->AllocatorInstance,piVar1);
  }
  pFVar3 = (pTVar8->AllocatorInstance).Data;
  (this->Modifiers).ArrayNum = iVar6 + 1;
  *(URootMotionModifier **)(pFVar3 + (longlong)iVar6 * 8) = local_108;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_108 != (URootMotionModifier *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_108);
  }
  return iVar6;
}

// AddModifierFromTemplate @ 14cf06eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

URootMotionModifier * __thiscall
UMotionWarpingComponent::AddModifierFromTemplate
          (UMotionWarpingComponent *this,URootMotionModifier *param_1,UAnimSequenceBase *param_2,
          float param_3,float param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  URootMotionModifier *pUVar4;
  UClass *pUVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  undefined1 auStackY_148 [32];
  UAnimSequenceBase *local_118;
  FString local_110;
  FString local_100;
  FString local_f0;
  undefined1 local_d8 [128];
  void *local_58;
  undefined4 local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if (param_1 == (URootMotionModifier *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_575305612259228868>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\MotionWarping\\Source\\MotionWarping\\Private\\MotionWarpingComponent.cpp"
                       ,0x33c,"Template");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (URootMotionModifier *)(*pcVar2)();
      return pUVar4;
    }
    pUVar4 = (URootMotionModifier *)0x0;
  }
  else {
    FObjectDuplicationParameters::FObjectDuplicationParameters
              ((FObjectDuplicationParameters *)local_d8,(UObject *)param_1,(UObject *)this);
    pUVar4 = (URootMotionModifier *)
             StaticDuplicateObjectEx((FObjectDuplicationParameters *)local_d8);
    if (pUVar4 == (URootMotionModifier *)0x0) {
      pFVar6 = GetTypeName<URootMotionModifier>(&local_110);
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar7);
    }
    pUVar5 = URootMotionModifier::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar5->_padding_)) {
      pFVar6 = GetTypeName<URootMotionModifier>(&local_100);
      pwVar7 = L"";
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      pFVar6 = GetFullNameForCastLogError<UObject>(&local_f0,(UObject *)pUVar4);
      if ((pFVar6->Data).ArrayNum != 0) {
        pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar7,pwVar8);
    }
    local_118 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (UAnimSequenceBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&(pUVar4->Animation).WeakPtr,(FObjectPtr)&local_118);
    pUVar4->EndTime = param_4;
    pUVar4->StartTime = param_3;
    AddModifier(this,pUVar4);
    local_50 = 0;
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_d8 + 0x40));
  }
  return pUVar4;
}

// AddOrUpdateWarpTarget @ 14cf07090

void __thiscall
UMotionWarpingComponent::AddOrUpdateWarpTarget
          (UMotionWarpingComponent *this,FMotionWarpingTarget *param_1)

{
  int *piVar1;
  TArray<FMotionWarpingTarget,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FMotionWarpingTarget *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FName FVar7;
  FName FVar8;
  FName FVar9;
  FName FVar10;
  FName FVar11;
  FName FVar12;
  FName FVar13;
  FName FVar14;
  FName FVar15;
  FName FVar16;
  FName FVar17;
  FName FVar18;
  FName FVar19;
  FName FVar20;
  FName FVar21;
  FName FVar22;
  FName FVar23;
  FName FVar24;
  FName FVar25;
  FName FVar26;
  FName FVar27;
  FName FVar28;
  FName FVar29;
  FName FVar30;
  FName FVar31;
  FName FVar32;
  FName FVar33;
  FName FVar34;
  bool bVar35;
  uint uVar36;
  FSwitchOffConditionData *pFVar37;
  FName *pFVar38;
  uint uVar39;
  FScriptContainerElement *pFVar40;
  longlong lVar41;
  FScriptContainerElement *pFVar42;
  undefined1 local_res10 [8];
  longlong local_res18;
  
  if (param_1->Name != (FName)0x0) {
    pTVar2 = &this->WarpTargets;
    uVar39 = 0;
    if (0 < (this->WarpTargets).ArrayNum) {
      lVar41 = 0;
      do {
        uVar36 = 0;
        if ((int)uVar39 < (this->WarpTargets).ArrayNum) {
          uVar36 = ~uVar39 >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar35)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(FName *)((pTVar2->AllocatorInstance).Data + lVar41) == param_1->Name) {
          FVar7 = param_1->Name;
          FVar8 = (FName)(param_1->Location).field0_0x0._s_0.X;
          FVar9 = (FName)(param_1->Location).field0_0x0._s_0.Y;
          FVar10 = (FName)(param_1->Location).field0_0x0._s_0.Z;
          FVar11 = (FName)(param_1->Rotation).Pitch;
          FVar12 = (FName)(param_1->Rotation).Yaw;
          FVar13 = (FName)(param_1->Rotation).Roll;
          FVar14 = *(FName *)&(param_1->Component).WeakPtr;
          FVar15 = param_1->BoneName;
          FVar16 = *(FName *)&param_1->bFollowComponent;
          FVar17 = (FName)(param_1->LocationOffset).field0_0x0._s_0.X;
          FVar18 = (FName)(param_1->LocationOffset).field0_0x0._s_0.Y;
          FVar19 = (FName)(param_1->LocationOffset).field0_0x0._s_0.Z;
          FVar20 = (FName)(param_1->RotationOffset).Pitch;
          FVar21 = (FName)(param_1->RotationOffset).Yaw;
          FVar22 = (FName)(param_1->RotationOffset).Roll;
          FVar23 = *(FName *)&(param_1->AvatarActor).WeakPtr;
          FVar24 = *(FName *)&param_1->bCacheForwardOffset;
          FVar25 = (FName)(param_1->CachedForwardOffset).field0_0x0._s_0.X;
          FVar26 = (FName)(param_1->CachedForwardOffset).field0_0x0._s_0.Y;
          FVar27 = (FName)(param_1->CachedForwardOffset).field0_0x0._s_0.Z;
          FVar28 = (FName)(param_1->CachedRightOffset).field0_0x0._s_0.X;
          FVar29 = (FName)(param_1->CachedRightOffset).field0_0x0._s_0.Y;
          FVar30 = (FName)(param_1->CachedRightOffset).field0_0x0._s_0.Z;
          FVar31 = (FName)(param_1->CachedUpOffset).field0_0x0._s_0.X;
          FVar32 = (FName)(param_1->CachedUpOffset).field0_0x0._s_0.Y;
          FVar33 = (FName)(param_1->CachedUpOffset).field0_0x0._s_0.Z;
          FVar34 = *(FName *)&param_1->bWarpingPaused;
          uVar36 = 0;
          if ((int)uVar39 < (this->WarpTargets).ArrayNum) {
            uVar36 = ~uVar39 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar35)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar38 = (FName *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar39 * 0xe0);
          *pFVar38 = FVar7;
          pFVar38[1] = FVar8;
          pFVar38[2] = FVar9;
          pFVar38[3] = FVar10;
          pFVar38[4] = FVar11;
          pFVar38[5] = FVar12;
          pFVar38[6] = FVar13;
          pFVar38[7] = FVar14;
          pFVar38[8] = FVar15;
          pFVar38[9] = FVar16;
          pFVar38[10] = FVar17;
          pFVar38[0xb] = FVar18;
          pFVar38[0xc] = FVar19;
          pFVar38[0xd] = FVar20;
          pFVar38[0xe] = FVar21;
          pFVar38[0xf] = FVar22;
          pFVar38[0x10] = FVar23;
          pFVar38[0x11] = FVar24;
          pFVar38[0x12] = FVar25;
          pFVar38[0x13] = FVar26;
          pFVar38[0x14] = FVar27;
          pFVar38[0x15] = FVar28;
          pFVar38[0x16] = FVar29;
          pFVar38[0x17] = FVar30;
          pFVar38[0x18] = FVar31;
          pFVar38[0x19] = FVar32;
          pFVar38[0x1a] = FVar33;
          pFVar38[0x1b] = FVar34;
          return;
        }
        uVar39 = uVar39 + 1;
        lVar41 = lVar41 + 0xe0;
      } while ((int)uVar39 < (this->WarpTargets).ArrayNum);
    }
    pFVar4 = (FMotionWarpingTarget *)(pTVar2->AllocatorInstance).Data;
    if (((pFVar4 <= param_1) && (param_1 < pFVar4 + (this->WarpTargets).ArrayMax)) &&
       (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar35)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar39 = (this->WarpTargets).ArrayNum;
    piVar1 = &(this->WarpTargets).ArrayMax;
    if (uVar39 == *piVar1) {
      uVar39 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x8e0,&pTVar2->AllocatorInstance,piVar1);
      (this->WarpTargets).ArrayNum = uVar39;
    }
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    (this->WarpTargets).ArrayNum = uVar39 + 1;
    FVar7 = (FName)(param_1->Location).field0_0x0._s_0.X;
    local_res18 = (longlong)(int)uVar39 * 0xe0;
    pFVar38 = (FName *)(pFVar5 + local_res18);
    *pFVar38 = param_1->Name;
    pFVar38[1] = FVar7;
    FVar7 = (FName)(param_1->Location).field0_0x0._s_0.Z;
    pFVar38[2] = (FName)(param_1->Location).field0_0x0._s_0.Y;
    pFVar38[3] = FVar7;
    FVar7 = (FName)(param_1->Rotation).Yaw;
    pFVar38[4] = (FName)(param_1->Rotation).Pitch;
    pFVar38[5] = FVar7;
    FVar7 = *(FName *)&(param_1->Component).WeakPtr;
    pFVar38[6] = (FName)(param_1->Rotation).Roll;
    pFVar38[7] = FVar7;
    FVar7 = *(FName *)&param_1->bFollowComponent;
    pFVar38[8] = param_1->BoneName;
    pFVar38[9] = FVar7;
    FVar7 = (FName)(param_1->LocationOffset).field0_0x0._s_0.Y;
    pFVar38[10] = (FName)(param_1->LocationOffset).field0_0x0._s_0.X;
    pFVar38[0xb] = FVar7;
    FVar7 = (FName)(param_1->RotationOffset).Pitch;
    pFVar38[0xc] = (FName)(param_1->LocationOffset).field0_0x0._s_0.Z;
    pFVar38[0xd] = FVar7;
    FVar7 = (FName)(param_1->RotationOffset).Roll;
    pFVar38[0xe] = (FName)(param_1->RotationOffset).Yaw;
    pFVar38[0xf] = FVar7;
    FVar7 = *(FName *)&param_1->bCacheForwardOffset;
    pFVar38[0x10] = *(FName *)&(param_1->AvatarActor).WeakPtr;
    pFVar38[0x11] = FVar7;
    FVar7 = (FName)(param_1->CachedForwardOffset).field0_0x0._s_0.Y;
    pFVar38[0x12] = (FName)(param_1->CachedForwardOffset).field0_0x0._s_0.X;
    pFVar38[0x13] = FVar7;
    FVar7 = (FName)(param_1->CachedRightOffset).field0_0x0._s_0.X;
    pFVar38[0x14] = (FName)(param_1->CachedForwardOffset).field0_0x0._s_0.Z;
    pFVar38[0x15] = FVar7;
    FVar7 = (FName)(param_1->CachedRightOffset).field0_0x0._s_0.Z;
    pFVar38[0x16] = (FName)(param_1->CachedRightOffset).field0_0x0._s_0.Y;
    pFVar38[0x17] = FVar7;
    FVar7 = (FName)(param_1->CachedUpOffset).field0_0x0._s_0.Y;
    pFVar38[0x18] = (FName)(param_1->CachedUpOffset).field0_0x0._s_0.X;
    pFVar38[0x19] = FVar7;
    FVar7 = *(FName *)&param_1->bWarpingPaused;
    pFVar38[0x1a] = (FName)(param_1->CachedUpOffset).field0_0x0._s_0.Z;
    pFVar38[0x1b] = FVar7;
    pFVar37 = FindSwitchOffConditionData(this,param_1->Name);
    if (pFVar37 != (FSwitchOffConditionData *)0x0) {
      uVar36 = 0;
      if ((int)uVar39 < (this->WarpTargets).ArrayNum) {
        uVar36 = ~uVar39 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar35)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar40 = (pFVar37->SwitchOffConditions).AllocatorInstance.Data;
      iVar3 = (pFVar37->SwitchOffConditions).ArrayNum;
      pFVar42 = (pTVar2->AllocatorInstance).Data + local_res18;
      pFVar5 = pFVar40 + (longlong)iVar3 * 8;
      while( true ) {
        if ((pFVar37->SwitchOffConditions).ArrayNum != iVar3) {
          `TCheckedPointerIterator<TObjectPtr<UMotionWarpingSwitchOffCondition>,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(local_res10);
        }
        if (pFVar40 == pFVar5) break;
        (**(code **)(**(longlong **)pFVar40 + 0x2e0))(*(longlong **)pFVar40,pFVar42);
        pFVar40 = pFVar40 + 8;
      }
    }
  }
  return;
}

// AddOrUpdateWarpTargetFromComponent @ 14cf074d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMotionWarpingComponent::AddOrUpdateWarpTargetFromComponent
          (UMotionWarpingComponent *this,FName param_1,USceneComponent *param_2,FName param_3,
          bool param_4,TVector<double> *param_5,TRotator<double> *param_6)

{
  FMotionWarpingTarget *pFVar1;
  TRotator<double> local_128;
  TVector<double>_u_0 local_108;
  FMotionWarpingTarget local_e8;
  
  local_128.Roll = param_6->Roll;
  local_128.Pitch = param_6->Pitch;
  local_128.Yaw = param_6->Yaw;
  local_108._s_0.Z = (param_5->field0_0x0)._s_0.Z;
  local_108._s_0.X = (param_5->field0_0x0)._s_0.X;
  local_108._s_0.Y = (param_5->field0_0x0)._s_0.Y;
  param_6 = (TRotator<double> *)param_1;
  if (param_2 == (USceneComponent *)0x0) {
    if (2 < (byte)LogMotionWarping._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMotionWarping);
      return;
    }
  }
  else {
    pFVar1 = FMotionWarpingTarget::FMotionWarpingTarget
                       (&local_e8,(FName *)&param_6,param_2,param_3,param_4,TargetsForwardVector,
                        (AActor *)this->_padding_,(TVector<double> *)&local_108._s_0,&local_128);
    AddOrUpdateWarpTarget(this,pFVar1);
  }
  return;
}

// AddOrUpdateWarpTargetFromComponent @ 14cf075b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMotionWarpingComponent::AddOrUpdateWarpTargetFromComponent
          (UMotionWarpingComponent *this,FName param_1,USceneComponent *param_2,FName param_3,
          bool param_4,EWarpTargetLocationOffsetDirection param_5,TVector<double> *param_6,
          TRotator<double> *param_7)

{
  FMotionWarpingTarget *pFVar1;
  FName local_res10 [3];
  FMotionWarpingTarget local_e8;
  
  local_res10[0] = param_1;
  if (param_2 == (USceneComponent *)0x0) {
    if (2 < (byte)LogMotionWarping._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMotionWarping);
      return;
    }
  }
  else {
    pFVar1 = FMotionWarpingTarget::FMotionWarpingTarget
                       (&local_e8,local_res10,param_2,param_3,param_4,param_5,
                        (AActor *)this->_padding_,param_6,param_7);
    AddOrUpdateWarpTarget(this,pFVar1);
  }
  return;
}

// AddOrUpdateWarpTargetFromTransform @ 14cf07660

void __thiscall
UMotionWarpingComponent::AddOrUpdateWarpTargetFromTransform
          (UMotionWarpingComponent *this,FName param_1,TTransform<double> *param_2)

{
  undefined8 local_res10;
  FMotionWarpingTarget local_108;
  TQuat<double> local_28;
  
  local_108.Location.field0_0x0._s_0.X = (param_2->Translation).XY.m128d_f64[0];
  local_108.Location.field0_0x0._s_0.Y = (param_2->Translation).XY.m128d_f64[1];
  local_108.Location.field0_0x0._s_0.Z = (param_2->Translation).ZW.m128d_f64[0];
  local_28.Z = (param_2->Rotation).ZW.m128d_f64[0];
  local_28.W = (param_2->Rotation).ZW.m128d_f64[1];
  local_28.X = (param_2->Rotation).XY.m128d_f64[0];
  local_28.Y = (param_2->Rotation).XY.m128d_f64[1];
  local_108.Name = param_1;
  UE::Math::TQuat<double>::Rotator(&local_28,&local_108.Rotation);
  local_108.Component.WeakPtr.ObjectIndex = 0;
  local_108.Component.WeakPtr.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_108.Component.WeakPtr,(FObjectPtr)&local_res10);
  local_108.BoneName.ComparisonIndex.Value = 0;
  local_108.BoneName.Number = 0;
  local_108.bFollowComponent = false;
  local_108.LocationOffsetDirection = TargetsForwardVector;
  local_108.RotationOffset.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  local_108.RotationOffset.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  local_108.AvatarActor.WeakPtr.ObjectIndex = 0;
  local_108.AvatarActor.WeakPtr.ObjectSerialNumber = 0;
  local_108.RotationOffset.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  local_108.LocationOffset.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_108.LocationOffset.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_108.bCacheForwardOffset = false;
  local_108.LocationOffset.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_108.CachedForwardOffset.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_108.CachedForwardOffset.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_108.bWarpingPaused = false;
  local_108.bRootMotionPaused = false;
  local_108.CachedForwardOffset.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_108.CachedRightOffset.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_108.CachedRightOffset.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_108.CachedRightOffset.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_108.CachedUpOffset.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_108.CachedUpOffset.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_108.CachedUpOffset.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  AddOrUpdateWarpTarget(this,&local_108);
  return;
}

// AddSwitchOffCondition @ 14cf07e80

/* WARNING: Removing unreachable block (ram,0x00014cf0817b) */
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
UMotionWarpingComponent::AddSwitchOffCondition
          (UMotionWarpingComponent *this,FName param_1,UMotionWarpingSwitchOffCondition *param_2)

{
  TArray<TObjectPtr<UMotionWarpingSwitchOffCondition>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FSwitchOffConditionData *pFVar7;
  FName *pFVar8;
  TArray<FSwitchOffConditionData,TSizedDefaultAllocator<32>_> *pTVar9;
  FName *pFVar10;
  UMotionWarpingSwitchOffCondition *local_38;
  UMotionWarpingSwitchOffCondition *local_30;
  FName local_28;
  FName local_20;
  undefined8 local_18;
  
  if ((param_2 == (UMotionWarpingSwitchOffCondition *)0x0) ||
     (((uint)param_2->_padding_ >> 0x1e & 1) != 0)) {
    if (1 < (byte)LogMotionWarping._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMotionWarping);
    }
  }
  else {
    pFVar8 = (FName *)(this->WarpTargets).AllocatorInstance.Data;
    pFVar10 = pFVar8 + (longlong)(this->WarpTargets).ArrayNum * 0x1c;
    for (; pFVar8 != pFVar10; pFVar8 = pFVar8 + 0x1c) {
      if (*pFVar8 == param_1) {
        (**(code **)(param_2->_padding_ + 0x2e0))(param_2);
        break;
      }
    }
    pFVar7 = FindSwitchOffConditionData(this,param_1);
    if (pFVar7 == (FSwitchOffConditionData *)0x0) {
      pTVar9 = &this->SwitchOffConditions;
      local_20.ComparisonIndex.Value = 0;
      local_20.Number = 0;
      local_18 = 0;
      local_30 = param_2;
      local_28 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      if ((((ulonglong)local_20 <= &local_30) &&
          (&local_30 <
           (UMotionWarpingSwitchOffCondition **)
           ((longlong)local_20 + (longlong)(int)local_18._4_4_ * 8))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (uint)local_18;
      if ((uint)local_18 == local_18._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)&local_20,(int *)((longlong)&local_18 + 4));
      }
      local_18 = CONCAT44(local_18._4_4_,iVar6 + 1);
      *(UMotionWarpingSwitchOffCondition **)((longlong)local_20 + (longlong)iVar6 * 8) = local_30;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_30 != (UMotionWarpingSwitchOffCondition *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_30);
      }
      pFVar8 = (FName *)(pTVar9->AllocatorInstance).Data;
      if (((pFVar8 <= &local_28) &&
          (&local_28 < pFVar8 + (longlong)(this->SwitchOffConditions).ArrayMax * 3)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (this->SwitchOffConditions).ArrayNum;
      piVar2 = &(this->SwitchOffConditions).ArrayMax;
      if (iVar6 == *piVar2) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&pTVar9->AllocatorInstance,piVar2);
      }
      (this->SwitchOffConditions).ArrayNum = iVar6 + 1;
      pFVar8 = (FName *)((pTVar9->AllocatorInstance).Data + (longlong)iVar6 * 0x18);
      *pFVar8 = local_28;
      pFVar8[1].ComparisonIndex = 0;
      pFVar8[1].Number = 0;
      pFVar8[1] = local_20;
      pFVar8[2].ComparisonIndex.Value = (uint)local_18;
      pFVar8[2].Number = local_18._4_4_;
    }
    else {
      pTVar1 = &pFVar7->SwitchOffConditions;
      local_38 = param_2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 <
           pFVar3 + (longlong)(pFVar7->SwitchOffConditions).ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (pFVar7->SwitchOffConditions).ArrayNum;
      piVar2 = &(pFVar7->SwitchOffConditions).ArrayMax;
      if (iVar6 == *piVar2) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar1->AllocatorInstance,piVar2);
      }
      (pFVar7->SwitchOffConditions).ArrayNum = iVar6 + 1;
      *(UMotionWarpingSwitchOffCondition **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8)
           = local_38;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_38 != (UMotionWarpingSwitchOffCondition *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_38);
      }
    }
  }
  return;
}

// ContainsModifier @ 14cf0a5e0

bool __thiscall
UMotionWarpingComponent::ContainsModifier
          (UMotionWarpingComponent *this,UAnimSequenceBase *param_1,float param_2,float param_3)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar4 = (this->Modifiers).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)(this->Modifiers).ArrayNum * 8;
  for (; pFVar4 != pFVar1; pFVar4 = pFVar4 + 8) {
    lVar2 = *(longlong *)pFVar4;
    bVar3 = TWeakObjectPtr<UAnimSequenceBase_const_,FWeakObjectPtr>::
            UEOpEquals<UAnimSequenceBase,bool>
                      ((TWeakObjectPtr<UAnimSequenceBase_const_,FWeakObjectPtr> *)(lVar2 + 0x28),
                       param_1);
    if (((bVar3) && (param_2 == *(float *)(lVar2 + 0x30))) && (param_3 == *(float *)(lVar2 + 0x34)))
    goto LAB_14cf0a64a;
  }
  pFVar4 = (FScriptContainerElement *)0x0;
LAB_14cf0a64a:
  return pFVar4 != (FScriptContainerElement *)0x0;
}

// CreateOwnerAdapter @ 14cf0a9a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMotionWarpingBaseAdapter * __thiscall
UMotionWarpingComponent::CreateOwnerAdapter
          (UMotionWarpingComponent *this,TSubclassOf<UMotionWarpingBaseAdapter> param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  FName FVar4;
  FName FVar5;
  bool bVar6;
  UClass *pUVar7;
  UMotionWarpingBaseAdapter *pUVar8;
  UClass *pUVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  longlong *plVar12;
  undefined1 auStack_108 [32];
  FName local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  UMotionWarpingComponent *local_d8;
  undefined4 local_cc;
  FDestructionSentinel local_c8;
  undefined1 *local_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar2 != 0) && (pUVar7 = UMotionWarpingBaseAdapter::StaticClass(), pUVar7 != (UClass *)0x0))
  {
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if ((bVar6) && (*(longlong *)param_1.Class.field0_0x0 != 0)) goto LAB_14cf0aa29;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("AdapterClass",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\MotionWarping\\Source\\MotionWarping\\Private\\MotionWarpingComponent.cpp"
                     ,0x13c,L"");
  if (bVar6) {
    pcVar3 = (code *)swi(3);
    pUVar8 = (UMotionWarpingBaseAdapter *)(*pcVar3)();
    return pUVar8;
  }
LAB_14cf0aa29:
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  pUVar7 = (UClass *)0x0;
  local_e8.ComparisonIndex.Value = 0;
  local_e8.Number = 0;
  if ((lVar2 != 0) && (pUVar9 = UMotionWarpingBaseAdapter::StaticClass(), pUVar9 != (UClass *)0x0))
  {
    iVar1 = (int)pUVar9->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar9->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      pUVar7 = *(UClass **)param_1.Class.field0_0x0;
    }
  }
  FVar4 = local_e8;
  if (local_e8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar9 = UMotionWarpingBaseAdapter::StaticClass();
  CheckIsClassChildOf_Internal(pUVar9,pUVar7);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar7);
  FVar5 = local_e8;
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_e8.ComparisonIndex = FVar4.ComparisonIndex.Value;
  local_e8.Number = FVar4.Number;
  local_a8._16_4_ = local_e8.ComparisonIndex.Value;
  local_a8._20_4_ = local_e8.Number;
  local_a8._24_4_ = RF_NoFlags;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_e8 = FVar5;
  local_a8._8_8_ = this;
  pUVar8 = (UMotionWarpingBaseAdapter *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar12 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar8 != (UMotionWarpingBaseAdapter *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  (this->OwnerAdapter).field0_0x0.DebugPtr = pUVar8;
  local_e8 = (FName)ProcessRootMotionPreConvertToWorld;
  uStack_dc = local_cc;
  uStack_e0 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pUVar8->WarpLocalRootMotionDelegate,(FWriteAccessScope *)&local_c8);
  local_b0 = &(pUVar8->WarpLocalRootMotionDelegate).field_0x8;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_b0);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6A_AU__TTransform_N_Math_UE__AEBU123_MPEBUFMotionWarpingUpdateContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUMotionWarpingComponent____A6A_AU__TTransform_N_Math_UE__AEBU234_MPEBUFMotionWarpingUpdateContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UMotionWarpingComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar10[3] = 0;
    local_d8 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UMotionWarpingComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_d8);
    puVar10[4] = local_e8;
    puVar10[5] = CONCAT44(uStack_dc,uStack_e0);
  }
  if (local_c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
  }
  return (this->OwnerAdapter).field0_0x0.DebugPtr;
}

// DisableAllRootMotionModifiers @ 14cf0b280

void __thiscall
UMotionWarpingComponent::DisableAllRootMotionModifiers(UMotionWarpingComponent *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Modifiers).ArrayNum;
  if (0 < iVar2) {
    pFVar4 = (this->Modifiers).AllocatorInstance.Data;
    pFVar1 = pFVar4 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->Modifiers).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<URootMotionModifier>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar4 == pFVar1) break;
      plVar3 = *(longlong **)pFVar4;
      if ((char)plVar3[0x2d] != '\x03') {
        *(undefined1 *)(plVar3 + 0x2d) = 3;
        (**(code **)(*plVar3 + 0x2b0))();
      }
      pFVar4 = pFVar4 + 8;
    }
  }
  return;
}

// FindAndUpdateWarpTarget @ 14cf0ec50

bool __thiscall
UMotionWarpingComponent::FindAndUpdateWarpTarget
          (UMotionWarpingComponent *this,FMotionWarpingTarget *param_1)

{
  code *pcVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  FName FVar5;
  FName FVar6;
  FName FVar7;
  FName FVar8;
  FName FVar9;
  FName FVar10;
  FName FVar11;
  FName FVar12;
  FName FVar13;
  FName FVar14;
  FName FVar15;
  FName FVar16;
  FName FVar17;
  FName FVar18;
  FName FVar19;
  FName FVar20;
  FName FVar21;
  FName FVar22;
  FName FVar23;
  FName FVar24;
  FName FVar25;
  FName FVar26;
  FName FVar27;
  FName FVar28;
  FName FVar29;
  bool bVar30;
  undefined1 uVar31;
  uint uVar32;
  FName *pFVar33;
  uint uVar34;
  longlong lVar35;
  
  uVar34 = 0;
  if (0 < (this->WarpTargets).ArrayNum) {
    lVar35 = 0;
    do {
      uVar32 = 0;
      if ((int)uVar34 < (this->WarpTargets).ArrayNum) {
        uVar32 = ~uVar34 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar30)) {
        pcVar1 = (code *)swi(3);
        uVar31 = (*pcVar1)();
        return (bool)uVar31;
      }
      if (*(FName *)((this->WarpTargets).AllocatorInstance.Data + lVar35) == param_1->Name) {
        FVar2 = param_1->Name;
        FVar3 = (FName)(param_1->Location).field0_0x0._s_0.X;
        FVar4 = (FName)(param_1->Location).field0_0x0._s_0.Y;
        FVar5 = (FName)(param_1->Location).field0_0x0._s_0.Z;
        FVar6 = (FName)(param_1->Rotation).Pitch;
        FVar7 = (FName)(param_1->Rotation).Yaw;
        FVar8 = (FName)(param_1->Rotation).Roll;
        FVar9 = *(FName *)&(param_1->Component).WeakPtr;
        FVar10 = param_1->BoneName;
        FVar11 = *(FName *)&param_1->bFollowComponent;
        FVar12 = (FName)(param_1->LocationOffset).field0_0x0._s_0.X;
        FVar13 = (FName)(param_1->LocationOffset).field0_0x0._s_0.Y;
        FVar14 = (FName)(param_1->LocationOffset).field0_0x0._s_0.Z;
        FVar15 = (FName)(param_1->RotationOffset).Pitch;
        FVar16 = (FName)(param_1->RotationOffset).Yaw;
        FVar17 = (FName)(param_1->RotationOffset).Roll;
        FVar18 = *(FName *)&(param_1->AvatarActor).WeakPtr;
        FVar19 = *(FName *)&param_1->bCacheForwardOffset;
        FVar20 = (FName)(param_1->CachedForwardOffset).field0_0x0._s_0.X;
        FVar21 = (FName)(param_1->CachedForwardOffset).field0_0x0._s_0.Y;
        FVar22 = (FName)(param_1->CachedForwardOffset).field0_0x0._s_0.Z;
        FVar23 = (FName)(param_1->CachedRightOffset).field0_0x0._s_0.X;
        FVar24 = (FName)(param_1->CachedRightOffset).field0_0x0._s_0.Y;
        FVar25 = (FName)(param_1->CachedRightOffset).field0_0x0._s_0.Z;
        FVar26 = (FName)(param_1->CachedUpOffset).field0_0x0._s_0.X;
        FVar27 = (FName)(param_1->CachedUpOffset).field0_0x0._s_0.Y;
        FVar28 = (FName)(param_1->CachedUpOffset).field0_0x0._s_0.Z;
        FVar29 = *(FName *)&param_1->bWarpingPaused;
        uVar32 = 0;
        if ((int)uVar34 < (this->WarpTargets).ArrayNum) {
          uVar32 = ~uVar34 >> 0x1f;
        }
        if ((uVar32 == 0) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar30)) {
          pcVar1 = (code *)swi(3);
          uVar31 = (*pcVar1)();
          return (bool)uVar31;
        }
        pFVar33 = (FName *)((this->WarpTargets).AllocatorInstance.Data +
                           (longlong)(int)uVar34 * 0xe0);
        *pFVar33 = FVar2;
        pFVar33[1] = FVar3;
        pFVar33[2] = FVar4;
        pFVar33[3] = FVar5;
        pFVar33[4] = FVar6;
        pFVar33[5] = FVar7;
        pFVar33[6] = FVar8;
        pFVar33[7] = FVar9;
        pFVar33[8] = FVar10;
        pFVar33[9] = FVar11;
        pFVar33[10] = FVar12;
        pFVar33[0xb] = FVar13;
        pFVar33[0xc] = FVar14;
        pFVar33[0xd] = FVar15;
        pFVar33[0xe] = FVar16;
        pFVar33[0xf] = FVar17;
        pFVar33[0x10] = FVar18;
        pFVar33[0x11] = FVar19;
        pFVar33[0x12] = FVar20;
        pFVar33[0x13] = FVar21;
        pFVar33[0x14] = FVar22;
        pFVar33[0x15] = FVar23;
        pFVar33[0x16] = FVar24;
        pFVar33[0x17] = FVar25;
        pFVar33[0x18] = FVar26;
        pFVar33[0x19] = FVar27;
        pFVar33[0x1a] = FVar28;
        pFVar33[0x1b] = FVar29;
        return true;
      }
      uVar34 = uVar34 + 1;
      lVar35 = lVar35 + 0xe0;
    } while ((int)uVar34 < (this->WarpTargets).ArrayNum);
  }
  return false;
}

// FindSwitchOffConditionData @ 14cf0ee80

FSwitchOffConditionData * __thiscall
UMotionWarpingComponent::FindSwitchOffConditionData(UMotionWarpingComponent *this,FName param_1)

{
  FSwitchOffConditionData *pFVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  FSwitchOffConditionData *pFVar4;
  FSwitchOffConditionData *pFVar5;
  FSwitchOffConditionData local_28;
  
  pFVar5 = (FSwitchOffConditionData *)(this->SwitchOffConditions).AllocatorInstance.Data;
  pFVar1 = pFVar5 + (this->SwitchOffConditions).ArrayNum;
  while( true ) {
    if (pFVar5 == pFVar1) {
      return (FSwitchOffConditionData *)0x0;
    }
    pFVar4 = FSwitchOffConditionData::FSwitchOffConditionData(&local_28,pFVar5);
    pFVar2 = (pFVar4->SwitchOffConditions).AllocatorInstance.Data;
    FVar3 = pFVar4->WarpTargetName;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    if (FVar3 == param_1) break;
    pFVar5 = pFVar5 + 1;
  }
  return pFVar5;
}

// GetCharacterOwner @ 14cf0f2a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ACharacter * __thiscall UMotionWarpingComponent::GetCharacterOwner(UMotionWarpingComponent *this)

{
  int iVar1;
  UMotionWarpingBaseAdapter *pUVar2;
  ACharacter *pAVar3;
  UClass *pUVar4;
  
  pUVar2 = (this->OwnerAdapter).field0_0x0.DebugPtr;
  if (pUVar2 == (UMotionWarpingBaseAdapter *)0x0) {
    return (ACharacter *)0x0;
  }
  pAVar3 = (ACharacter *)(**(code **)(pUVar2->_padding_ + 0x2b0))();
  if (pAVar3 != (ACharacter *)0x0) {
    pUVar4 = Z_Construct_UClass_ACharacter_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pAVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pAVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      return pAVar3;
    }
  }
  return (ACharacter *)0x0;
}

// GetLifetimeReplicatedProps @ 14cf0f9c0

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
UMotionWarpingComponent::GetLifetimeReplicatedProps
          (UMotionWarpingComponent *this,
          TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

{
  FRepPropertyDescriptor local_38;
  FDoRepLifetimeParams local_28;
  
  UActorComponent::GetLifetimeReplicatedProps((UActorComponent *)this,param_1);
  local_28.Condition = COND_SimulatedOnly;
  local_28.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_28.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_28.bIsPushBased = true;
  local_38.PropertyName = L"WarpTargets";
  local_38.RepIndex = 2;
  local_38.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_38,param_1,&local_28);
  return;
}

// GetPrivateStaticClass @ 14cf10460

UClass * __cdecl UMotionWarpingComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMotionWarpingComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"MotionWarpingComponent",
               &Z_Registration_Info_UClass_UMotionWarpingComponent.InnerSingleton,
               StaticRegisterNativesUMotionWarpingComponent,0x158,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UMotionWarpingComponent>,
               InternalVTableHelperCtorCaller<UMotionWarpingComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMotionWarpingComponent.InnerSingleton;
}

// InitializeComponent @ 14cf120d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMotionWarpingComponent::InitializeComponent(UMotionWarpingComponent *this)

{
  int iVar1;
  UClass *pUVar2;
  longlong lVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  FString *pFVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  UClass *local_res8;
  FString local_38;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  UActorComponent::InitializeComponent((UActorComponent *)this);
  if (((this->OwnerAdapter).field0_0x0.DebugPtr == (UMotionWarpingBaseAdapter *)0x0) &&
     (pUVar2 = (UClass *)this->_padding_, pUVar2 != (UClass *)0x0)) {
    pUVar5 = Z_Construct_UClass_ACharacter_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      local_res8 = UMotionWarpingCharacterAdapter::StaticClass();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res8);
      }
      pUVar5 = (UClass *)
               CreateOwnerAdapter(this,(TSubclassOf<UMotionWarpingBaseAdapter>)&local_res8);
      if (pUVar5 == (UClass *)0x0) {
        pFVar9 = GetTypeName<UMotionWarpingCharacterAdapter>(&local_38);
        if ((pFVar9->Data).ArrayNum == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar10);
      }
      pUVar6 = UMotionWarpingCharacterAdapter::StaticClass();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        pFVar9 = GetTypeName<UMotionWarpingCharacterAdapter>(&local_38);
        pwVar10 = L"";
        if ((pFVar9->Data).ArrayNum == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
        }
        pFVar9 = GetFullNameForCastLogError<UMotionWarpingBaseAdapter>
                           ((FString *)&local_28,(UMotionWarpingBaseAdapter *)pUVar5);
        if ((pFVar9->Data).ArrayNum != 0) {
          pwVar10 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar10,pwVar11);
      }
      if ((*(longlong *)&pUVar2[1].FuncMap.field_0x10 != 0) ||
         (bVar4 = `UMotionWarpingCharacterAdapter::SetCharacter'::__l3::<lambda_1>::operator()
                            (&local_res8), bVar4)) {
        local_res8 = pUVar2;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar2);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar5->_padding_,(FObjectPtr)&local_res8);
        lVar3 = *(longlong *)&pUVar2[1].FuncMap.field_0x10;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar3 + 0xfc8),
                   (FWriteAccessScope *)&local_28);
        local_10 = (FDelegateAllocation *)(lVar3 + 0xfd0);
        puVar7 = UE::Core::Private::DelegateAllocate(0x28,local_10);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = &
                    ___7__TCommonDelegateInstanceState___A6A_AU__TTransform_N_Math_UE__AEBU123_PEAVUCharacterMovementComponent__M_ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar8 = FDelegateHandle::GenerateNewID();
          puVar7[2] = uVar8;
          *puVar7 = &
                    ___7__TBaseUObjectMethodDelegateInstance__0A_VUMotionWarpingCharacterAdapter____A6A_AU__TTransform_N_Math_UE__AEBU234_PEAVUCharacterMovementComponent__M_ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar5);
          }
          puVar7[3] = 0;
          local_res8 = pUVar5;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar5);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_res8);
          puVar7[4] = UMotionWarpingCharacterAdapter::WarpLocalRootMotionOnCharacter;
        }
        if (local_28.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
        }
      }
    }
  }
  return;
}

// ProcessRootMotionPreConvertToWorld @ 14cf19930

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

TTransform<double> * __thiscall
UMotionWarpingComponent::ProcessRootMotionPreConvertToWorld
          (UMotionWarpingComponent *this,TTransform<double> *__return_storage_ptr__,
          TTransform<double> *param_1,float param_2,FMotionWarpingUpdateContext *param_3)

{
  TOptional<UE::Math::TVector<double>_> *pTVar1;
  FSwitchOffConditionData *pFVar2;
  float fVar3;
  longlong *plVar4;
  UMotionWarpingBaseAdapter *pUVar5;
  FName FVar6;
  FScriptContainerElement *pFVar7;
  FName FVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  float fVar13;
  float fVar14;
  TConsoleVariableData<int> *pTVar15;
  TConsoleVariableData<float> *pTVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  char cVar20;
  int iVar21;
  int iVar22;
  FColor_u_0 FVar23;
  TTransform<double> *pTVar24;
  double *pdVar25;
  USkeletalMeshComponent *pUVar26;
  UWorld *pUVar27;
  UClass *pUVar28;
  FSwitchOffConditionData *pFVar29;
  uint uVar30;
  ForAnyElementType FVar31;
  FScriptContainerElement *pFVar32;
  uint uVar33;
  FSwitchOffConditionData *pFVar34;
  longlong lVar35;
  FMotionWarpingTarget *this_00;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined1 auStackY_5b8 [32];
  undefined1 local_566;
  undefined1 local_565;
  undefined1 local_564 [4];
  uint local_560;
  undefined4 local_55c;
  ForAnyElementType local_558;
  undefined8 local_550;
  FColor_u_0 local_548 [2];
  longlong local_540;
  longlong local_538;
  TVector<double>_u_0 local_530;
  FColor_u_0 local_518 [2];
  TTransform<double> *local_510;
  undefined1 local_508 [16];
  double local_4f8;
  TVector<double>_u_0 local_4f0;
  undefined1 local_4d8 [16];
  double local_4c8;
  FString local_4c0;
  FString local_4b0;
  FString local_4a0;
  FString local_490;
  void *local_480 [2];
  TVector<double>_u_0 local_470;
  TVector<double>_u_0 local_458;
  double local_440;
  double dStack_438;
  double local_430;
  double local_428;
  double dStack_420;
  double local_418;
  double local_410;
  double dStack_408;
  double local_400;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  undefined4 local_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined8 local_3d0;
  FSwitchOffConditionData local_3c8;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  TTransform<double> local_348;
  TTransform<double> local_2e8;
  undefined1 local_288 [96];
  TTransform<double> local_228;
  TTransform<double> local_1c8;
  TTransform<double> local_168;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  pTVar15 = FMotionWarpingCVars::CVarMotionWarpingDisable.Ref;
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_5b8;
  local_510 = __return_storage_ptr__;
  bVar17 = IsInParallelGameThread();
  if (((!bVar17) && (bVar17 = IsInGameThread(), !bVar17)) &&
     (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar17)) {
    pcVar9 = (code *)swi(3);
    pTVar24 = (TTransform<double> *)(*pcVar9)();
    return pTVar24;
  }
  if ((0 < pTVar15->ShadowedValue[0]) || (param_3 == (FMotionWarpingUpdateContext *)0x0)) {
    dVar12 = (param_1->Rotation).XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar12;
    dVar12 = (param_1->Rotation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar12;
    dVar12 = (param_1->Translation).XY.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar12;
    dVar12 = (param_1->Translation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar12;
    dVar12 = (param_1->Scale3D).XY.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar12;
    dVar12 = (param_1->Scale3D).ZW.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar12;
    return __return_storage_ptr__;
  }
  UpdateWithContext(this,param_3,param_2);
  local_3a8 = (param_1->Rotation).XY.m128d_f64[0];
  dStack_3a0 = (param_1->Rotation).XY.m128d_f64[1];
  local_398 = (param_1->Rotation).ZW.m128d_f64[0];
  dStack_390 = (param_1->Rotation).ZW.m128d_f64[1];
  pFVar32 = (this->Modifiers).AllocatorInstance.Data;
  iVar21 = (this->Modifiers).ArrayNum;
  local_388 = (param_1->Translation).XY.m128d_f64[0];
  dStack_380 = (param_1->Translation).XY.m128d_f64[1];
  local_378 = (param_1->Translation).ZW.m128d_f64[0];
  dStack_370 = (param_1->Translation).ZW.m128d_f64[1];
  pFVar7 = pFVar32 + (longlong)iVar21 * 8;
  local_368 = (param_1->Scale3D).XY.m128d_f64[0];
  dStack_360 = (param_1->Scale3D).XY.m128d_f64[1];
  local_358 = (param_1->Scale3D).ZW.m128d_f64[0];
  dStack_350 = (param_1->Scale3D).ZW.m128d_f64[1];
  while( true ) {
    if ((this->Modifiers).ArrayNum != iVar21) {
      local_566 = 0;
      `TCheckedPointerIterator<TObjectPtr<URootMotionModifier>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_566);
    }
    pTVar15 = FMotionWarpingCVars::CVarMotionWarpingDebug.Ref;
    if (pFVar32 == pFVar7) break;
    plVar4 = *(longlong **)pFVar32;
    if ((char)plVar4[0x2d] == '\x01') {
      pdVar25 = (double *)(**(code **)(*plVar4 + 0x2c0))(plVar4,local_288,&local_3a8,param_2);
      local_3a8 = *pdVar25;
      dStack_3a0 = pdVar25[1];
      local_398 = pdVar25[2];
      dStack_390 = pdVar25[3];
      local_388 = pdVar25[4];
      dStack_380 = pdVar25[5];
      local_378 = pdVar25[6];
      dStack_370 = pdVar25[7];
      local_368 = pdVar25[8];
      dStack_360 = pdVar25[9];
      local_358 = pdVar25[10];
      dStack_350 = pdVar25[0xb];
    }
    pFVar32 = pFVar32 + 8;
  }
  bVar17 = IsInParallelGameThread();
  if (((!bVar17) && (bVar17 = IsInGameThread(), !bVar17)) &&
     (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar17)) {
    pcVar9 = (code *)swi(3);
    pTVar24 = (TTransform<double> *)(*pcVar9)();
    return pTVar24;
  }
  pTVar16 = FMotionWarpingCVars::CVarMotionWarpingDrawDebugDuration.Ref;
  if ((1 < pTVar15->ShadowedValue[0]) &&
     ((this->OwnerAdapter).field0_0x0.DebugPtr != (UMotionWarpingBaseAdapter *)0x0)) {
    bVar17 = IsInParallelGameThread();
    if ((!bVar17) &&
       ((bVar17 = IsInGameThread(), !bVar17 &&
        (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0"), bVar17)))) {
      pcVar9 = (code *)swi(3);
      pTVar24 = (TTransform<double> *)(*pcVar9)();
      return pTVar24;
    }
    pUVar5 = (this->OwnerAdapter).field0_0x0.DebugPtr;
    fVar3 = pTVar16->ShadowedValue[0];
    (**(code **)(pUVar5->_padding_ + 0x2c0))(pUVar5,&local_4f0);
    fVar13 = __real_40e00000;
    if ((this->Modifiers).ArrayNum < 1) {
      if ((this->OriginalRootMotionAccum).bIsSet != false) {
        (this->OriginalRootMotionAccum).bIsSet = false;
      }
      if ((this->WarpedRootMotionAccum).bIsSet != false) {
        (this->WarpedRootMotionAccum).bIsSet = false;
      }
    }
    else {
      if ((this->OriginalRootMotionAccum).bIsSet == false) {
        if (&local_4f0 != (TVector<double>_u_0 *)&this->OriginalRootMotionAccum) {
          (this->OriginalRootMotionAccum).TypedValue.field0_0x0._s_0.X = local_4f0._s_0.X;
          (this->OriginalRootMotionAccum).TypedValue.field0_0x0._s_0.Y = local_4f0._s_0.Y;
          (this->OriginalRootMotionAccum).TypedValue.field0_0x0._s_0.Z = local_4f0._s_0.Z;
          (this->OriginalRootMotionAccum).bIsSet = true;
        }
        if (&local_4f0 != (TVector<double>_u_0 *)&this->WarpedRootMotionAccum) {
          (this->WarpedRootMotionAccum).TypedValue.field0_0x0._s_0.X = local_4f0._s_0.X;
          (this->WarpedRootMotionAccum).TypedValue.field0_0x0._s_0.Y = local_4f0._s_0.Y;
          (this->WarpedRootMotionAccum).TypedValue.field0_0x0._s_0.Z = local_4f0._s_0.Z;
          (this->WarpedRootMotionAccum).bIsSet = true;
        }
      }
      pTVar1 = &this->OriginalRootMotionAccum;
      if (((this->OriginalRootMotionAccum).bIsSet == false) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar17)) {
        pcVar9 = (code *)swi(3);
        pTVar24 = (TTransform<double> *)(*pcVar9)();
        return pTVar24;
      }
      pUVar26 = (USkeletalMeshComponent *)
                (**(code **)(((this->OwnerAdapter).field0_0x0.DebugPtr)->_padding_ + 0x2b8))();
      local_440 = (param_1->Translation).XY.m128d_f64[0];
      dStack_438 = (param_1->Translation).XY.m128d_f64[1];
      local_430 = (param_1->Translation).ZW.m128d_f64[0];
      local_348.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_348.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_348.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_348.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_348.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_348.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_348.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_348.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_348.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_348.Translation.ZW.m128d_f64[1] = 0.0;
      local_348.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_348.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_348.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      local_348.Translation.XY.m128d_f64[0] = local_440;
      local_348.Translation.XY.m128d_f64[1] = dStack_438;
      local_348.Translation.ZW.m128d_f64[0] = local_430;
      pTVar24 = USkeletalMeshComponent::ConvertLocalRootMotionToWorld(pUVar26,&local_228,&local_348)
      ;
      local_428 = (pTVar24->Translation).XY.m128d_f64[0];
      dStack_420 = (pTVar24->Translation).XY.m128d_f64[1];
      local_418 = (pTVar24->Translation).ZW.m128d_f64[0];
      local_4d8._0_8_ = local_428 + (pTVar1->TypedValue).field0_0x0._s_0.X;
      local_4d8._8_8_ = dStack_420 + (this->OriginalRootMotionAccum).TypedValue.field0_0x0._s_0.Y;
      uVar36 = (undefined4)((ulonglong)local_4d8._8_8_ >> 0x20);
      local_4c8 = local_418 + (this->OriginalRootMotionAccum).TypedValue.field0_0x0._s_0.Z;
      if ((TOptional<UE::Math::TVector<double>_> *)local_4d8 != pTVar1) {
        auVar10._8_4_ = (int)local_4d8._8_8_;
        auVar10._0_8_ = local_4d8._0_8_;
        auVar10._12_4_ = uVar36;
        *(undefined1 (*) [16])&(pTVar1->TypedValue).field0_0x0 = auVar10;
        local_4d8._8_4_ = (int)local_4d8._8_8_;
        local_4d8._12_4_ = uVar36;
        (this->OriginalRootMotionAccum).TypedValue.field0_0x0._s_0.Z = local_4c8;
        (this->OriginalRootMotionAccum).bIsSet = true;
      }
      pTVar1 = &this->WarpedRootMotionAccum;
      if (((this->WarpedRootMotionAccum).bIsSet == false) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar17)) {
        pcVar9 = (code *)swi(3);
        pTVar24 = (TTransform<double> *)(*pcVar9)();
        return pTVar24;
      }
      pUVar26 = (USkeletalMeshComponent *)
                (**(code **)(((this->OwnerAdapter).field0_0x0.DebugPtr)->_padding_ + 0x2b8))();
      local_2e8.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_2e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_2e8.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_400 = local_378;
      local_410 = local_388;
      dStack_408 = dStack_380;
      local_2e8.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_2e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_2e8.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_2e8.Translation.XY.m128d_f64[0] = local_388;
      local_2e8.Translation.XY.m128d_f64[1] = dStack_380;
      local_2e8.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_2e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_2e8.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_2e8.Translation.ZW.m128d_f64[0] = local_378;
      local_2e8.Translation.ZW.m128d_f64[1] = 0.0;
      local_2e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_2e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_2e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      pTVar24 = USkeletalMeshComponent::ConvertLocalRootMotionToWorld(pUVar26,&local_1c8,&local_2e8)
      ;
      local_3f8 = (pTVar24->Translation).XY.m128d_f64[0];
      dStack_3f0 = (pTVar24->Translation).XY.m128d_f64[1];
      local_3e8 = (pTVar24->Translation).ZW.m128d_f64[0];
      local_508._0_8_ = local_3f8 + (pTVar1->TypedValue).field0_0x0._s_0.X;
      local_508._8_8_ = dStack_3f0 + (this->WarpedRootMotionAccum).TypedValue.field0_0x0._s_0.Y;
      uVar36 = (undefined4)((ulonglong)local_508._8_8_ >> 0x20);
      local_4f8 = local_3e8 + (this->WarpedRootMotionAccum).TypedValue.field0_0x0._s_0.Z;
      if ((TOptional<UE::Math::TVector<double>_> *)local_508 != pTVar1) {
        auVar11._8_4_ = (int)local_508._8_8_;
        auVar11._0_8_ = local_508._0_8_;
        auVar11._12_4_ = uVar36;
        *(undefined1 (*) [16])&(pTVar1->TypedValue).field0_0x0 = auVar11;
        local_508._8_4_ = (int)local_508._8_8_;
        local_508._12_4_ = uVar36;
        (this->WarpedRootMotionAccum).TypedValue.field0_0x0._s_0.Z = local_4f8;
        (this->WarpedRootMotionAccum).bIsSet = true;
      }
      if (((this->OriginalRootMotionAccum).bIsSet == false) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar17)) {
        pcVar9 = (code *)swi(3);
        pTVar24 = (TTransform<double> *)(*pcVar9)();
        return pTVar24;
      }
      pUVar27 = (UWorld *)this->_padding_;
      if (pUVar27 == (UWorld *)0x0) {
        pUVar27 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      }
      DrawDebugPoint(pUVar27,&(this->OriginalRootMotionAccum).TypedValue,fVar13,&FColor::Red,false,
                     fVar3,'\0');
      if (((this->WarpedRootMotionAccum).bIsSet == false) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar17)) {
        pcVar9 = (code *)swi(3);
        pTVar24 = (TTransform<double> *)(*pcVar9)();
        return pTVar24;
      }
      pUVar27 = (UWorld *)this->_padding_;
      if (pUVar27 == (UWorld *)0x0) {
        pUVar27 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      }
      DrawDebugPoint(pUVar27,&(this->WarpedRootMotionAccum).TypedValue,fVar13,&FColor::Green,false,
                     fVar3,'\0');
    }
    pUVar27 = (UWorld *)this->_padding_;
    if (pUVar27 == (UWorld *)0x0) {
      pUVar27 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    DrawDebugPoint(pUVar27,(TVector<double> *)&local_4f0._s_0,fVar13,&FColor::Blue,false,fVar3,'\0')
    ;
  }
  iVar21 = (**(code **)(*(longlong *)
                         FMotionWarpingCVars::CVarWarpedSwitchOffConditionDebug._padding_ + 200))();
  if (iVar21 == 1) {
    bVar17 = UObject::IsSelected((UObject *)this->_padding_);
    if (bVar17) goto LAB_14cf19fa4;
LAB_14cf1a011:
    bVar17 = false;
  }
  else {
    if (iVar21 != 2) goto LAB_14cf1a011;
LAB_14cf19fa4:
    bVar17 = true;
  }
  iVar21 = (**(code **)(*(longlong *)FMotionWarpingCVars::CVarWarpedTargetDebug._padding_ + 200))();
  if (iVar21 == 1) {
    bVar18 = UObject::IsSelected((UObject *)this->_padding_);
    if (bVar18) {
LAB_14cf19fd1:
      bVar18 = true;
      goto LAB_14cf19fd6;
    }
  }
  else if (iVar21 == 2) goto LAB_14cf19fd1;
  bVar18 = false;
LAB_14cf19fd6:
  lVar35 = *(longlong *)(this->_padding_ + 0x1b8);
  if (lVar35 == 0) {
    uVar36 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar37 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
    local_530._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    local_530._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    local_530._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    local_530._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  }
  else {
    local_3d0 = *(undefined8 *)(lVar35 + 0x220);
    uVar36 = (undefined4)local_3d0;
    uVar37 = (undefined4)((ulonglong)local_3d0 >> 0x20);
    local_3e0 = *(undefined4 *)(lVar35 + 0x210);
    uStack_3dc = *(undefined4 *)(lVar35 + 0x214);
    uStack_3d8 = *(undefined4 *)(lVar35 + 0x218);
    uStack_3d4 = *(undefined4 *)(lVar35 + 0x21c);
    local_530._0_4_ = local_3e0;
    local_530._4_4_ = uStack_3dc;
    local_530._8_4_ = uStack_3d8;
    local_530._12_4_ = uStack_3d4;
  }
  pFVar32 = (this->Modifiers).AllocatorInstance.Data;
  iVar21 = (this->Modifiers).ArrayNum;
  local_558.Data = (FScriptContainerElement *)0x0;
  local_530._s_0.Z = (double)CONCAT44(uVar37,uVar36);
  pFVar7 = pFVar32 + (longlong)iVar21 * 8;
  local_550 = 0;
  while( true ) {
    if ((this->Modifiers).ArrayNum != iVar21) {
      local_565 = 0;
      `TCheckedPointerIterator<TObjectPtr<URootMotionModifier>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_565);
    }
    dVar12 = __real_c024000000000000;
    fVar14 = __real_bf800000;
    fVar13 = __real_40a00000;
    fVar3 = __real_3f800000;
    if (pFVar32 == pFVar7) break;
    lVar35 = *(longlong *)pFVar32;
    if (*(char *)(lVar35 + 0x168) == '\x01') {
      pUVar28 = URootMotionModifier_Warp::StaticClass();
      iVar22 = (int)pUVar28->_padding_;
      if ((*(int *)(*(longlong *)(lVar35 + 0x10) + 0x38) < iVar22) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)(lVar35 + 0x10) + 0x30) + (longlong)iVar22 * 8) !=
          &pUVar28->_padding_)) {
        local_540 = 0;
        goto LAB_14cf1a188;
      }
      local_540 = lVar35;
      if (lVar35 == 0) goto LAB_14cf1a188;
      if (((local_558.Data <= (FScriptContainerElement *)&local_540) &&
          ((FScriptContainerElement *)&local_540 < local_558.Data + (longlong)local_550._4_4_ * 8))
         && (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar19)) {
        pcVar9 = (code *)swi(3);
        pTVar24 = (TTransform<double> *)(*pcVar9)();
        return pTVar24;
      }
      iVar22 = (int)local_550;
      if ((int)local_550 == local_550._4_4_) {
        iVar22 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_558,(int *)((longlong)&local_550 + 4));
      }
      pFVar32 = pFVar32 + 8;
      local_550 = CONCAT44(local_550._4_4_,iVar22 + 1);
      *(longlong *)(local_558.Data + (longlong)iVar22 * 8) = local_540;
    }
    else {
LAB_14cf1a188:
      pFVar32 = pFVar32 + 8;
    }
  }
  local_560 = 0;
  if ((this->WarpTargets).ArrayNum < 1) {
LAB_14cf1a66e:
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_3a8;
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dStack_3a0;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_398;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dStack_390;
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_388;
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dStack_380;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_378;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dStack_370;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_368;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dStack_360;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = local_358;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dStack_350;
    if (local_558.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_558.Data);
    }
    return __return_storage_ptr__;
  }
  local_538 = 0;
  FVar23 = FColor::Green.field0_0x0;
LAB_14cf1a1f0:
  lVar35 = local_538;
  uVar33 = local_560;
  uVar30 = 0;
  if ((int)local_560 < (this->WarpTargets).ArrayNum) {
    uVar30 = ~local_560 >> 0x1f;
  }
  if ((uVar30 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     FVar23 = FColor::Green.field0_0x0, bVar19)) {
    pcVar9 = (code *)swi(3);
    pTVar24 = (TTransform<double> *)(*pcVar9)();
    return pTVar24;
  }
  this_00 = (FMotionWarpingTarget *)((this->WarpTargets).AllocatorInstance.Data + lVar35);
  if (local_558.Data != local_558.Data + (longlong)(int)local_550 * 8) {
    FVar31.Data = local_558.Data;
    do {
      if (*(FName *)(*(longlong *)FVar31.Data + 0x170) == this_00->Name) {
        local_548[0] = FVar23;
        if ((uVar33 & 1) != 0) {
          local_55c = 0xff154cbe;
          local_548[0].Bits = 0xff154cbe;
        }
        if (bVar18) {
          pTVar24 = FMotionWarpingTarget::GetTargetTrasform(this_00,&local_168);
          local_470._s_0.X = (pTVar24->Translation).XY.m128d_f64[0];
          local_470._s_0.Y = (pTVar24->Translation).XY.m128d_f64[1];
          local_470._s_0.Z = (pTVar24->Translation).ZW.m128d_f64[0];
          pUVar27 = (UWorld *)this->_padding_;
          if (pUVar27 == (UWorld *)0x0) {
            pUVar27 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
          }
          DrawDebugSphere(pUVar27,(TVector<double> *)&local_470._s_0,fVar13,0x10,
                          (FColor *)&local_548[0]._s_0,false,fVar14,'\0',0.0);
          pTVar24 = FMotionWarpingTarget::GetTargetTrasform(this_00,&local_108);
          local_458._s_0.X = (pTVar24->Translation).XY.m128d_f64[0];
          local_458._s_0.Y = (pTVar24->Translation).XY.m128d_f64[1];
          local_458._s_0.Z = (pTVar24->Translation).ZW.m128d_f64[0];
          pUVar27 = (UWorld *)this->_padding_;
          if (pUVar27 == (UWorld *)0x0) {
            pUVar27 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
          }
          DrawDebugLine(pUVar27,(TVector<double> *)&local_530._s_0,
                        (TVector<double> *)&local_458._s_0,(FColor *)&local_548[0]._s_0,false,fVar14
                        ,'\0',0.0);
          ::FName::ToString((FName *)this_00,&local_490);
          ::FString::PrintfImpl(&local_4c0,L"Warp target name: %s, is dynamic: %s");
          if (local_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_490.Data.AllocatorInstance.Data);
          }
          pUVar27 = (UWorld *)this->_padding_;
          if (pUVar27 == (UWorld *)0x0) {
            pUVar27 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
          }
          DrawDebugString(pUVar27,(TVector<double> *)&local_530._s_0,&local_4c0,(AActor *)0x0,
                          (FColor *)&local_548[0]._s_0,0.0,true,fVar3);
          local_530._s_0.Z = local_530._s_0.Z + dVar12;
          FVar23 = FColor::Green.field0_0x0;
          if (local_4c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4c0.Data.AllocatorInstance.Data);
            FVar23 = FColor::Green.field0_0x0;
          }
        }
        if (!bVar17) goto LAB_14cf1a62d;
        pFVar34 = (FSwitchOffConditionData *)(this->SwitchOffConditions).AllocatorInstance.Data;
        FVar6 = this_00->Name;
        pFVar2 = pFVar34 + (this->SwitchOffConditions).ArrayNum;
        goto joined_r0x00014cf1a45a;
      }
      FVar31.Data = FVar31.Data + 8;
    } while (FVar31.Data != local_558.Data + (longlong)(int)local_550 * 8);
  }
  goto LAB_14cf1a63b;
joined_r0x00014cf1a45a:
  lVar35 = local_538;
  uVar33 = local_560;
  if (pFVar34 == pFVar2) goto LAB_14cf1a62d;
  pFVar29 = FSwitchOffConditionData::FSwitchOffConditionData(&local_3c8,pFVar34);
  pFVar7 = (pFVar29->SwitchOffConditions).AllocatorInstance.Data;
  FVar8 = pFVar29->WarpTargetName;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  FVar23 = FColor::Green.field0_0x0;
  if (FVar8 == FVar6) {
    lVar35 = local_538;
    uVar33 = local_560;
    if (pFVar34 != (FSwitchOffConditionData *)0x0) {
      ::FString::FString(&local_4b0,L"Switch off conditions:");
      pUVar27 = (UWorld *)this->_padding_;
      if (pUVar27 == (UWorld *)0x0) {
        pUVar27 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      }
      DrawDebugString(pUVar27,(TVector<double> *)&local_530._s_0,&local_4b0,(AActor *)0x0,
                      &FColor::White,0.0,true,fVar3);
      if (local_4b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4b0.Data.AllocatorInstance.Data);
      }
      pFVar32 = (pFVar34->SwitchOffConditions).AllocatorInstance.Data;
      iVar21 = (pFVar34->SwitchOffConditions).ArrayNum;
      pFVar7 = pFVar32 + (longlong)iVar21 * 8;
      while( true ) {
        local_530._s_0.Z = local_530._s_0.Z + dVar12;
        if ((pFVar34->SwitchOffConditions).ArrayNum != iVar21) {
          local_564[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<UMotionWarpingSwitchOffCondition>,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(local_564);
        }
        lVar35 = local_538;
        uVar33 = local_560;
        FVar23 = FColor::Green.field0_0x0;
        if (pFVar32 == pFVar7) break;
        plVar4 = *(longlong **)pFVar32;
        cVar20 = (**(code **)(*plVar4 + 0x2b8))(plVar4);
        local_518[0] = FColor::Yellow.field0_0x0;
        if (cVar20 != '\0') {
          local_518[0] = FColor::Red.field0_0x0;
        }
        (**(code **)(*plVar4 + 0x2c0))(plVar4,local_480);
        ::FString::PrintfImpl(&local_4a0,L"%s - %s");
        pUVar27 = (UWorld *)this->_padding_;
        if (pUVar27 == (UWorld *)0x0) {
          pUVar27 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
        }
        DrawDebugString(pUVar27,(TVector<double> *)&local_530._s_0,&local_4a0,(AActor *)0x0,
                        (FColor *)&local_518[0]._s_0,0.0,true,fVar3);
        if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
        }
        if (local_480[0] != (void *)0x0) {
          FMemory::Free(local_480[0]);
        }
        pFVar32 = pFVar32 + 8;
      }
    }
    goto LAB_14cf1a62d;
  }
  pFVar34 = pFVar34 + 1;
  goto joined_r0x00014cf1a45a;
LAB_14cf1a62d:
  local_530._s_0.Z = local_530._s_0.Z + dVar12;
LAB_14cf1a63b:
  local_560 = uVar33 + 1;
  local_538 = lVar35 + 0xe0;
  __return_storage_ptr__ = local_510;
  if ((this->WarpTargets).ArrayNum <= (int)local_560) goto LAB_14cf1a66e;
  goto LAB_14cf1a1f0;
}

// RemoveAllWarpTargets @ 14cf1b0a0

int __thiscall UMotionWarpingComponent::RemoveAllWarpTargets(UMotionWarpingComponent *this)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  FName *pFVar4;
  undefined1 local_res8 [8];
  
  iVar2 = (this->WarpTargets).ArrayNum;
  pFVar3 = (FName *)(this->WarpTargets).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar2 * 0x1c;
  while( true ) {
    if ((this->WarpTargets).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FMotionWarpingTarget,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    RemoveSwitchOffConditions(this,*pFVar3);
    pFVar3 = pFVar3 + 0x1c;
  }
  piVar1 = &(this->WarpTargets).ArrayMax;
  (this->WarpTargets).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xe0,8,0,&(this->WarpTargets).AllocatorInstance,0,piVar1);
  }
  return iVar2;
}

// RemoveSwitchOffConditions @ 14cf1b1e0

void __thiscall
UMotionWarpingComponent::RemoveSwitchOffConditions(UMotionWarpingComponent *this,FName param_1)

{
  TArray<FSwitchOffConditionData,TSizedDefaultAllocator<32>_> *this_00;
  int iVar1;
  FSwitchOffConditionData *pFVar2;
  FScriptContainerElement *pFVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FSwitchOffConditionData *pFVar8;
  longlong lVar9;
  uint uVar10;
  FSwitchOffConditionData *pFVar11;
  FSwitchOffConditionData local_38;
  
  this_00 = &this->SwitchOffConditions;
  pFVar2 = (FSwitchOffConditionData *)(this_00->AllocatorInstance).Data;
  iVar1 = (this->SwitchOffConditions).ArrayNum;
  pFVar11 = pFVar2;
  while( true ) {
    if (pFVar11 == pFVar2 + iVar1) {
      return;
    }
    pFVar8 = FSwitchOffConditionData::FSwitchOffConditionData(&local_38,pFVar11);
    pFVar3 = (pFVar8->SwitchOffConditions).AllocatorInstance.Data;
    FVar4 = pFVar8->WarpTargetName;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    if (FVar4 == param_1) break;
    pFVar11 = pFVar11 + 1;
  }
  lVar9 = ((longlong)pFVar11 - (longlong)pFVar2) / 6 +
          ((longlong)pFVar11 - (longlong)pFVar2 >> 0x3f);
  uVar10 = (int)(lVar9 >> 2) - (int)(lVar9 >> 0x3f);
  if (uVar10 == 0xffffffff) {
    return;
  }
  uVar7 = 0;
  if ((int)uVar10 < (this->SwitchOffConditions).ArrayNum) {
    uVar7 = ~uVar10 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  TArray<FSwitchOffConditionData,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl(this_00,uVar10);
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,&this_00->AllocatorInstance,(this->SwitchOffConditions).ArrayNum,
             &(this->SwitchOffConditions).ArrayMax);
  return;
}

// RemoveWarpTarget @ 14cf1b310

int __thiscall
UMotionWarpingComponent::RemoveWarpTarget(UMotionWarpingComponent *this,FName param_1)

{
  int iVar1;
  FName *pFVar2;
  longlong lVar3;
  FName *pFVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  iVar1 = (this->WarpTargets).ArrayNum;
  lVar3 = (longlong)iVar1;
  iVar8 = 0;
  if (iVar1 != 0) {
    pFVar2 = (FName *)(this->WarpTargets).AllocatorInstance.Data;
    lVar6 = 0;
    bVar9 = *pFVar2 != param_1;
    iVar7 = 0;
    iVar8 = 0;
    do {
      lVar6 = lVar6 + 1;
      iVar5 = iVar8 + 1;
      if (lVar6 < lVar3) {
        pFVar4 = pFVar2 + lVar6 * 0x1c;
        do {
          if (bVar9 != (*pFVar4 != param_1)) break;
          iVar5 = iVar5 + 1;
          lVar6 = lVar6 + 1;
          pFVar4 = pFVar4 + 0x1c;
        } while (lVar6 < lVar3);
      }
      if (bVar9 != false) {
        if (iVar7 != iVar8) {
          memmove(pFVar2 + (longlong)iVar7 * 0x1c,pFVar2 + (longlong)iVar8 * 0x1c,
                  (longlong)(iVar5 - iVar8) * 0xe0);
        }
        iVar7 = iVar7 + (iVar5 - iVar8);
      }
      bVar9 = (bool)(bVar9 ^ 1);
      iVar8 = iVar5;
    } while (lVar6 < lVar3);
    iVar8 = iVar1 - iVar7;
    (this->WarpTargets).ArrayNum = iVar7;
  }
  RemoveSwitchOffConditions(this,param_1);
  return iVar8;
}

// RemoveWarpTargets @ 14cf1b450

int __thiscall
UMotionWarpingComponent::RemoveWarpTargets
          (UMotionWarpingComponent *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  FName *pFVar1;
  int iVar2;
  int iVar3;
  FName *pFVar4;
  int iVar5;
  undefined1 local_res10 [8];
  
  pFVar4 = (FName *)(param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  iVar5 = 0;
  pFVar1 = pFVar4 + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar4 == pFVar1) break;
    iVar3 = RemoveWarpTarget(this,*pFVar4);
    iVar5 = iVar5 + iVar3;
    pFVar4 = pFVar4 + 1;
  }
  return iVar5;
}

// StaticRegisterNativesUMotionWarpingComponent @ 14cf1bd70

void __cdecl UMotionWarpingComponent::StaticRegisterNativesUMotionWarpingComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 10;
  local_18.DataPtr = Z_Construct_UClass_UMotionWarpingComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateSwitchOffConditions @ 14cf1d160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMotionWarpingComponent::UpdateSwitchOffConditions(UMotionWarpingComponent *this)

{
  int *piVar1;
  TArray<FMotionWarpingTarget,TSizedDefaultAllocator<32>_> *pTVar2;
  FSwitchOffConditionData *pFVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  FName FVar6;
  FName FVar7;
  longlong *plVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  char cVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  FSwitchOffConditionData *pFVar20;
  TTransform<double> *pTVar21;
  int iVar22;
  ulonglong uVar23;
  FSwitchOffConditionData *pFVar24;
  FScriptContainerElement *pFVar25;
  UMotionWarpingComponent *pUVar26;
  uint uVar27;
  longlong lVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 auStackY_238 [32];
  FScriptContainerElement local_207;
  FScriptContainerElement local_206;
  undefined1 local_205 [5];
  longlong local_200;
  uint local_1f8;
  UMotionWarpingComponent *local_1f0;
  uint local_1e8;
  uint local_1e4;
  TArray<TObjectPtr<UMotionWarpingSwitchOffCondition>,TSizedDefaultAllocator<32>_> *local_1e0;
  FScriptContainerElement *local_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  double local_1c0;
  TRotator<double> local_1b8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  double local_190;
  double local_178;
  TQuat<double> local_168;
  double local_138;
  FSwitchOffConditionData local_130;
  TTransform<double> local_118;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_238;
  uVar27 = (this->WarpTargets).ArrayNum - 1;
  if ((int)uVar27 < 0) {
    return;
  }
  pTVar2 = &this->WarpTargets;
  local_200 = (longlong)(int)uVar27;
  lVar28 = local_200 * 0xe0;
  pUVar26 = this;
  local_1f0 = this;
LAB_14cf1d1e0:
  local_1e4 = ~uVar27;
  local_1f8 = local_1e4 >> 0x1f;
  uVar18 = 0;
  if ((int)uVar27 < (this->WarpTargets).ArrayNum) {
    uVar18 = local_1f8;
  }
  if ((uVar18 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pFVar24 = (FSwitchOffConditionData *)(pUVar26->SwitchOffConditions).AllocatorInstance.Data;
  FVar6 = *(FName *)((pTVar2->AllocatorInstance).Data + lVar28);
  pFVar3 = pFVar24 + (pUVar26->SwitchOffConditions).ArrayNum;
  for (; pFVar24 != pFVar3; pFVar24 = pFVar24 + 1) {
    pFVar20 = FSwitchOffConditionData::FSwitchOffConditionData(&local_130,pFVar24);
    pFVar25 = (pFVar20->SwitchOffConditions).AllocatorInstance.Data;
    FVar7 = pFVar20->WarpTargetName;
    if (pFVar25 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar25);
    }
    pUVar26 = local_1f0;
    if (FVar7 == FVar6) {
      if ((pFVar24 != (FSwitchOffConditionData *)0x0) &&
         (local_1e0 = &pFVar24->SwitchOffConditions,
         local_1e0 !=
         (TArray<TObjectPtr<UMotionWarpingSwitchOffCondition>,TSizedDefaultAllocator<32>_> *)0x0)) {
        pFVar25 = (local_1e0->AllocatorInstance).Data;
        local_207 = (FScriptContainerElement)0x0;
        local_1e8 = (pFVar24->SwitchOffConditions).ArrayNum;
        uVar23 = (ulonglong)(int)local_1e8;
        bVar15 = false;
        local_206 = (FScriptContainerElement)0x0;
        local_1d8 = pFVar25 + uVar23 * 8;
        goto LAB_14cf1d2d3;
      }
      break;
    }
  }
  goto LAB_14cf1d7f8;
LAB_14cf1d2d3:
  pFVar4 = local_1d8;
  if (local_1e0->ArrayNum != (int)uVar23) {
    local_205[0] = 0;
    `TCheckedPointerIterator<TObjectPtr<UMotionWarpingSwitchOffCondition>,int,0>::operator!='::__l2
    ::<lambda_1>::operator()(local_205);
  }
  uVar18 = local_1f8;
  if (pFVar25 != pFVar4) {
    plVar8 = *(longlong **)pFVar25;
    if ((((plVar8 == (longlong *)0x0) || ((*(uint *)(plVar8 + 1) >> 0x1e & 1) != 0)) ||
        (cVar16 = (**(code **)(*plVar8 + 0x2c8))(plVar8), cVar16 == '\0')) ||
       (cVar16 = (**(code **)(*plVar8 + 0x2b8))(plVar8), uVar18 = local_1f8, cVar16 == '\0')) {
LAB_14cf1d632:
      pFVar25 = pFVar25 + 8;
      uVar23 = (ulonglong)local_1e8;
    }
    else {
      cVar16 = *(char *)((longlong)plVar8 + 0x29);
      if (cVar16 == '\0') {
        uVar19 = 0;
        if ((int)uVar27 < (this->WarpTargets).ArrayNum) {
          uVar19 = local_1f8;
        }
        if ((uVar19 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if ((pTVar2->AllocatorInstance).Data[lVar28 + 0x48] == (FScriptContainerElement)0x0)
        goto LAB_14cf1d632;
        uVar19 = 0;
        if ((int)uVar27 < (this->WarpTargets).ArrayNum) {
          uVar19 = uVar18;
        }
        if ((uVar19 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        (pTVar2->AllocatorInstance).Data[lVar28 + 0x48] = (FScriptContainerElement)0x0;
        if ((char)plVar8[5] == '\0') {
LAB_14cf1d4cf:
          lVar9 = *(longlong *)(plVar8[7] + 0x1b8);
          if (lVar9 == 0) {
            local_138 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            uVar29 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
            uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
            uVar31 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
            uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
          }
          else {
            local_190 = *(double *)(lVar9 + 0x220);
            local_1a0 = *(undefined4 *)(lVar9 + 0x210);
            uStack_19c = *(undefined4 *)(lVar9 + 0x214);
            uStack_198 = *(undefined4 *)(lVar9 + 0x218);
            uStack_194 = *(undefined4 *)(lVar9 + 0x21c);
            local_1c0 = local_190;
            uVar29 = local_1a0;
            uVar30 = uStack_19c;
            uVar31 = uStack_198;
            uVar32 = uStack_194;
          }
        }
        else {
          if ((FMotionWarpingTarget *)plVar8[8] == (FMotionWarpingTarget *)0x0) {
            if (2 < (byte)LogMotionWarping._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMotionWarping)
              ;
            }
            goto LAB_14cf1d4cf;
          }
          pTVar21 = FMotionWarpingTarget::GetTargetTrasform
                              ((FMotionWarpingTarget *)plVar8[8],&local_118);
          local_1c0 = (pTVar21->Translation).ZW.m128d_f64[0];
          uVar29 = *(undefined4 *)(pTVar21->Translation).XY.m128d_f64;
          uVar30 = *(undefined4 *)((longlong)(pTVar21->Translation).XY.m128d_f64 + 4);
          uVar31 = *(undefined4 *)((pTVar21->Translation).XY.m128d_f64 + 1);
          uVar32 = *(undefined4 *)((longlong)(pTVar21->Translation).XY.m128d_f64 + 0xc);
        }
        uVar19 = 0;
        if ((int)uVar27 < (this->WarpTargets).ArrayNum) {
          uVar19 = uVar18;
        }
        local_1d0 = uVar29;
        uStack_1cc = uVar30;
        uStack_1c8 = uVar31;
        uStack_1c4 = uVar32;
        local_178 = local_1c0;
        if ((uVar19 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar10 = (pTVar2->AllocatorInstance).Data;
        pFVar4 = pFVar10 + lVar28 + 8;
        *(undefined4 *)pFVar4 = uVar29;
        *(undefined4 *)(pFVar4 + 4) = uVar30;
        *(undefined4 *)(pFVar4 + 8) = uVar31;
        *(undefined4 *)(pFVar4 + 0xc) = uVar32;
        *(double *)(pFVar10 + lVar28 + 0x18) = local_178;
        if ((char)plVar8[5] == '\0') {
LAB_14cf1d5cc:
          AActor::GetActorRotation((AActor *)plVar8[7],&local_1b8);
        }
        else {
          if ((FMotionWarpingTarget *)plVar8[8] == (FMotionWarpingTarget *)0x0) {
            if (2 < (byte)LogMotionWarping._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMotionWarping)
              ;
            }
            goto LAB_14cf1d5cc;
          }
          pTVar21 = FMotionWarpingTarget::GetTargetTrasform
                              ((FMotionWarpingTarget *)plVar8[8],&local_b8);
          local_168.X = (pTVar21->Rotation).XY.m128d_f64[0];
          local_168.Y = (pTVar21->Rotation).XY.m128d_f64[1];
          local_168.Z = (pTVar21->Rotation).ZW.m128d_f64[0];
          local_168.W = (pTVar21->Rotation).ZW.m128d_f64[1];
          UE::Math::TQuat<double>::Rotator(&local_168,&local_1b8);
        }
        dVar14 = local_1b8.Roll;
        dVar13 = local_1b8.Yaw;
        dVar12 = local_1b8.Pitch;
        uVar19 = 0;
        if ((int)uVar27 < (this->WarpTargets).ArrayNum) {
          uVar19 = uVar18;
        }
        if ((uVar19 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar10 = (pTVar2->AllocatorInstance).Data;
        pFVar4 = pFVar10 + lVar28 + 0x20;
        *(double *)pFVar4 = dVar12;
        *(double *)(pFVar4 + 8) = dVar13;
        *(double *)(pFVar10 + lVar28 + 0x30) = dVar14;
        goto LAB_14cf1d632;
      }
      if (cVar16 == '\x01') {
        pFVar25 = pFVar25 + 8;
        uVar23 = (ulonglong)local_1e8;
        bVar15 = true;
      }
      else if (cVar16 == '\x02') {
        pFVar25 = pFVar25 + 8;
        uVar23 = (ulonglong)local_1e8;
        local_207 = (FScriptContainerElement)0x1;
      }
      else {
        if (cVar16 != '\x03') {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("!\"Enclosing block should never be called\"",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\MotionWarping\\Source\\MotionWarping\\Private\\MotionWarpingComponent.cpp"
                              ,0x19e,L"");
          if (bVar17) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          goto LAB_14cf1d632;
        }
        pFVar25 = pFVar25 + 8;
        uVar23 = (ulonglong)local_1e8;
        local_206 = (FScriptContainerElement)0x1;
      }
    }
    goto LAB_14cf1d2d3;
  }
  iVar5 = (this->WarpTargets).ArrayNum;
  if (bVar15) {
    uVar19 = 0;
    if ((int)uVar27 < iVar5) {
      uVar19 = local_1f8;
    }
    if ((uVar19 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    RemoveSwitchOffConditions(local_1f0,*(FName *)((pTVar2->AllocatorInstance).Data + lVar28));
    uVar19 = 0;
    if ((int)uVar27 < (this->WarpTargets).ArrayNum) {
      uVar19 = uVar18;
    }
    if ((uVar19 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    iVar5 = (this->WarpTargets).ArrayNum;
    iVar22 = local_1e4 + iVar5;
    pFVar25 = (pTVar2->AllocatorInstance).Data;
    if (1 < iVar22) {
      iVar22 = 1;
    }
    if (iVar22 != 0) {
      memmove(pFVar25 + lVar28,pFVar25 + (longlong)(iVar5 - iVar22) * 0xe0,(longlong)iVar22 * 0xe0);
    }
    piVar1 = &(this->WarpTargets).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xe0,8,&pTVar2->AllocatorInstance,(this->WarpTargets).ArrayNum,
               &(this->WarpTargets).ArrayMax);
    pUVar26 = local_1f0;
  }
  else {
    uVar19 = 0;
    if ((int)uVar27 < iVar5) {
      uVar19 = local_1f8;
    }
    if ((uVar19 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    (pTVar2->AllocatorInstance).Data[lVar28 + 0xd8] = local_207;
    uVar19 = 0;
    if ((int)uVar27 < (this->WarpTargets).ArrayNum) {
      uVar19 = uVar18;
    }
    if ((uVar19 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    (pTVar2->AllocatorInstance).Data[lVar28 + 0xd9] = local_206;
    pUVar26 = local_1f0;
  }
LAB_14cf1d7f8:
  local_200 = local_200 + -1;
  lVar28 = lVar28 + -0xe0;
  uVar27 = uVar27 - 1;
  if ((int)uVar27 < 0) {
    return;
  }
  goto LAB_14cf1d1e0;
}

// UpdateWithContext @ 14cf1d870

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMotionWarpingComponent::UpdateWithContext
          (UMotionWarpingComponent *this,FMotionWarpingUpdateContext *param_1,float param_2)

{
  FAnimNotifyEvent *this_00;
  float fVar1;
  int iVar2;
  UAnimSequenceBase *pUVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  UAnimSequenceBase *pUVar7;
  UClass *pUVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  UAnimNotifyState_MotionWarping *pUVar11;
  UAnimNotifyState_MotionWarping *pUVar12;
  uint uVar13;
  uint uVar14;
  FAnimNotifyEvent *pFVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ulonglong local_res20;
  undefined1 local_e8 [8];
  FAnimNotifyEvent *local_e0;
  undefined1 local_d8 [4];
  uint local_d4;
  UMotionWarpingComponent *local_d0;
  FString local_c8;
  FName local_b8;
  FName local_b0;
  FAnimSegment *local_a8;
  UMotionWarpingComponent *local_a0;
  FString local_98 [6];
  
  UpdateSwitchOffConditions(this);
  bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_1);
  pUVar11 = (UAnimNotifyState_MotionWarping *)0x0;
  local_res20 = 0;
  if (bVar5) {
    pUVar7 = (UAnimSequenceBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    fVar1 = param_1->PreviousPosition;
    pFVar10 = (pUVar7->Notifies).AllocatorInstance.Data;
    iVar2 = (pUVar7->Notifies).ArrayNum;
    pFVar9 = pFVar10 + 0x50;
    while( true ) {
      if ((pUVar7->Notifies).ArrayNum != iVar2) {
        local_res20 = local_res20 & 0xffffffffffffff00;
        `TCheckedPointerIterator<FAnimNotifyEvent_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res20);
      }
      pFVar15 = (FAnimNotifyEvent *)(pFVar9 + -0x50);
      if (pFVar15 == (FAnimNotifyEvent *)(pFVar10 + (longlong)iVar2 * 0xb8)) break;
      if (*(longlong *)pFVar9 == 0) {
LAB_14cf1da79:
        pFVar9 = pFVar9 + 0xb8;
      }
      else {
        pUVar8 = UAnimNotifyState_MotionWarping::StaticClass();
        bVar5 = FObjectPtr::IsA((FObjectPtr *)pFVar9,pUVar8);
        pUVar12 = pUVar11;
        if (bVar5) {
          pUVar12 = *(UAnimNotifyState_MotionWarping **)pFVar9;
        }
        if (pUVar12 == (UAnimNotifyState_MotionWarping *)0x0) goto LAB_14cf1da79;
        if ((pUVar12->RootMotionModifier).field0_0x0.DebugPtr != (URootMotionModifier *)0x0) {
          fVar17 = (float)(**(code **)(pUVar7->_padding_ + 0x2c0))(pUVar7);
          fVar18 = FAnimNotifyEvent::GetTriggerTime(pFVar15);
          if (fVar17 <= fVar18) {
            fVar18 = fVar17;
          }
          if (fVar18 <= 0.0) {
            fVar18 = 0.0;
          }
          fVar19 = (float)(**(code **)(pUVar7->_padding_ + 0x2c0))(pUVar7);
          fVar17 = FAnimNotifyEvent::GetEndTriggerTime(pFVar15);
          if (fVar19 <= fVar17) {
            fVar17 = fVar19;
          }
          if (fVar17 <= 0.0) {
            fVar17 = 0.0;
          }
          if (((fVar18 <= fVar1) && (fVar1 < fVar17)) &&
             (bVar5 = ContainsModifier(this,pUVar7,fVar18,fVar17), !bVar5)) {
            UAnimNotifyState_MotionWarping::OnBecomeRelevant(pUVar12,this,pUVar7,fVar18,fVar17);
          }
          goto LAB_14cf1da79;
        }
        if ((byte)LogMotionWarping._0_1_ < 3) goto LAB_14cf1da79;
        if (pUVar7 == (UAnimSequenceBase *)0x0) {
          ::FString::FString(&local_c8,L"None");
        }
        else {
          local_b8 = (FName)pUVar7->_padding_;
          ::FName::ToString(&local_b8,&local_c8);
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMotionWarping);
        if (local_c8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
        goto LAB_14cf1da79;
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        pFVar9 = pFVar9 + 0xb8;
      }
    }
    if ((this->bSearchForWindowsInAnimsWithinMontages != false) &&
       (pUVar7 = (UAnimSequenceBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_1),
       pUVar7 != (UAnimSequenceBase *)0x0)) {
      pUVar8 = Z_Construct_UClass_UAnimMontage_NoRegister();
      iVar2 = (int)pUVar8->_padding_;
      if ((iVar2 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
         (((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
           &pUVar8->_padding_ && (local_d4 = 0, pUVar12 = pUVar11, 0 < (int)pUVar7[2]._padding_))))
      {
        do {
          uVar14 = (uint)pUVar12;
          uVar16 = 0;
          if ((int)uVar14 < (int)pUVar7[2]._padding_) {
            uVar16 = ~uVar14 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_a8 = FAnimTrack::GetSegmentAtTime
                               ((FAnimTrack *)
                                (pUVar7[2]._padding_ + ((longlong)(int)uVar14 * 3 + 1) * 8),fVar1);
          if ((local_a8 != (FAnimSegment *)0x0) &&
             (pUVar3 = (local_a8->AnimReference).field0_0x0.DebugPtr,
             pUVar3 != (UAnimSequenceBase *)0x0)) {
            pFVar10 = (pUVar3->Notifies).AllocatorInstance.Data;
            iVar2 = (pUVar3->Notifies).ArrayNum;
            pFVar9 = pFVar10 + 0x50;
            local_e0 = (FAnimNotifyEvent *)(pFVar10 + (longlong)iVar2 * 0xb8);
            pFVar15 = local_e0;
            while( true ) {
              if ((pUVar3->Notifies).ArrayNum != iVar2) {
                local_e8[0] = 0;
                `TCheckedPointerIterator<FAnimNotifyEvent_const_,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_e8);
              }
              this_00 = (FAnimNotifyEvent *)(pFVar9 + -0x50);
              uVar14 = local_d4;
              if (this_00 == pFVar15) break;
              if (*(longlong *)pFVar9 == 0) {
LAB_14cf1dd15:
                pFVar9 = pFVar9 + 0xb8;
              }
              else {
                pUVar8 = UAnimNotifyState_MotionWarping::StaticClass();
                bVar5 = FObjectPtr::IsA((FObjectPtr *)pFVar9,pUVar8);
                pUVar12 = pUVar11;
                if (bVar5) {
                  pUVar12 = *(UAnimNotifyState_MotionWarping **)pFVar9;
                }
                pFVar15 = local_e0;
                if (pUVar12 == (UAnimNotifyState_MotionWarping *)0x0) goto LAB_14cf1dd15;
                if ((pUVar12->RootMotionModifier).field0_0x0.DebugPtr != (URootMotionModifier *)0x0)
                {
                  fVar17 = (float)(**(code **)(pUVar3->_padding_ + 0x2c0))(pUVar3);
                  fVar18 = FAnimNotifyEvent::GetTriggerTime(this_00);
                  if (fVar17 <= fVar18) {
                    fVar18 = fVar17;
                  }
                  if (fVar18 <= 0.0) {
                    fVar18 = 0.0;
                  }
                  fVar19 = (float)(**(code **)(pUVar3->_padding_ + 0x2c0))(pUVar3);
                  fVar17 = FAnimNotifyEvent::GetEndTriggerTime(this_00);
                  if (fVar19 <= fVar17) {
                    fVar17 = fVar19;
                  }
                  if (fVar17 <= 0.0) {
                    fVar17 = 0.0;
                  }
                  fVar19 = (fVar18 - local_a8->AnimStartTime) + local_a8->StartPos;
                  fVar18 = (fVar17 - local_a8->AnimStartTime) + local_a8->StartPos;
                  pFVar15 = local_e0;
                  if (((fVar19 <= fVar1) && (fVar1 < fVar18)) &&
                     (bVar5 = ContainsModifier(this,pUVar7,fVar19,fVar18), pFVar15 = local_e0,
                     !bVar5)) {
                    UAnimNotifyState_MotionWarping::OnBecomeRelevant
                              (pUVar12,this,pUVar7,fVar19,fVar18);
                    pFVar15 = local_e0;
                  }
                  goto LAB_14cf1dd15;
                }
                if ((byte)LogMotionWarping._0_1_ < 3) goto LAB_14cf1dd15;
                local_b0 = (FName)pUVar3->_padding_;
                ::FName::ToString(&local_b0,local_98);
                UE::Logging::Private::BasicLog<3>
                          (&::LOG_Static,(FLogCategoryBase *)&LogMotionWarping);
                pFVar15 = local_e0;
                if (local_98[0].Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
                goto LAB_14cf1dd15;
                FMemory::Free(local_98[0].Data.AllocatorInstance.Data);
                pFVar9 = pFVar9 + 0xb8;
                pFVar15 = local_e0;
              }
            }
          }
          local_d4 = uVar14 + 1;
          pUVar12 = (UAnimNotifyState_MotionWarping *)(ulonglong)local_d4;
        } while ((int)local_d4 < (int)pUVar7[2]._padding_);
      }
    }
  }
  local_a0 = this;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnPreUpdate,&local_a0);
  if (0 < (this->Modifiers).ArrayNum) {
    pFVar10 = (this->Modifiers).AllocatorInstance.Data;
    iVar2 = (this->Modifiers).ArrayNum;
    pFVar9 = pFVar10 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->Modifiers).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<URootMotionModifier>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_d8);
      }
      if (pFVar10 == pFVar9) break;
      (**(code **)(**(longlong **)pFVar10 + 0x2b8))(*(longlong **)pFVar10,param_1);
      pFVar10 = pFVar10 + 8;
    }
    iVar2 = (this->Modifiers).ArrayNum;
    if (iVar2 != 0) {
      pFVar9 = (this->Modifiers).AllocatorInstance.Data;
      local_d0 = this;
      bVar5 = `UMotionWarpingComponent::UpdateWithContext'::__l90::<lambda_1>::operator()
                        (&local_d0,*(URootMotionModifier **)pFVar9);
      bVar5 = !bVar5;
      uVar16 = 0;
      pUVar12 = pUVar11;
      do {
        uVar13 = (uint)pUVar12;
        uVar14 = uVar13;
        do {
          pUVar11 = (UAnimNotifyState_MotionWarping *)((longlong)&pUVar11->_padding_ + 1);
          uVar14 = uVar14 + 1;
          pUVar12 = (UAnimNotifyState_MotionWarping *)(ulonglong)uVar14;
          if ((longlong)iVar2 <= (longlong)pUVar11) break;
          bVar6 = `UMotionWarpingComponent::UpdateWithContext'::__l90::<lambda_1>::operator()
                            (&local_d0,*(URootMotionModifier **)(pFVar9 + (longlong)pUVar11 * 8));
        } while (bVar5 == !bVar6);
        if (bVar5 != false) {
          if (uVar16 != uVar13) {
            memmove(pFVar9 + (longlong)(int)uVar16 * 8,pFVar9 + (longlong)(int)uVar13 * 8,
                    (longlong)(int)(uVar14 - uVar13) << 3);
          }
          uVar16 = uVar16 + (uVar14 - uVar13);
        }
        bVar5 = (bool)(bVar5 ^ 1);
      } while ((longlong)pUVar11 < (longlong)iVar2);
      (this->Modifiers).ArrayNum = uVar16;
    }
  }
  return;
}

// ValidateGeneratedRepEnums @ 14cf1dec0

void __thiscall
UMotionWarpingComponent::ValidateGeneratedRepEnums
          (UMotionWarpingComponent *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&Name_WarpTargets,L"WarpTargets");
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (param_1->ArrayNum < 3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x20);
  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
  if (bVar3) {
    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
  }
  else {
    FVar4.ComparisonIndex.Value = 0;
    FVar4.Number = 0;
  }
  if (Name_WarpTargets != FVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\MotionWarping\\UHT\\MotionWarpingComponent.gen.cpp"
                       ,0x55b,
                       L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UMotionWarpingComponent"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// execAddOrUpdateWarpTarget @ 14cf201c0

void __cdecl
UMotionWarpingComponent::execAddOrUpdateWarpTarget(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FMotionWarpingTarget *pFVar2;
  FMotionWarpingTarget local_e8;
  
  FMotionWarpingTarget::FMotionWarpingTarget(&local_e8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  pFVar2 = &local_e8;
  if ((FMotionWarpingTarget *)param_2->MostRecentPropertyAddress != (FMotionWarpingTarget *)0x0) {
    pFVar2 = (FMotionWarpingTarget *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  AddOrUpdateWarpTarget((UMotionWarpingComponent *)param_1,pFVar2);
  return;
}

// execAddOrUpdateWarpTargetFromComponent @ 14cf20270

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
UMotionWarpingComponent::execAddOrUpdateWarpTargetFromComponent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FMotionWarpingTarget *pFVar3;
  bool bVar4;
  EWarpTargetLocationOffsetDirection local_res10 [8];
  int local_res20 [2];
  FName local_198;
  FName local_190;
  USceneComponent *local_188;
  FName local_180;
  double local_178;
  double dStack_170;
  double local_168;
  double local_160;
  double dStack_158;
  double local_150;
  TRotator<double> local_148;
  TVector<double>_u_0 local_128;
  FMotionWarpingTarget local_108;
  
  local_198.ComparisonIndex.Value = 0;
  local_198.Number = 0;
  FNameProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_198,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_198);
  }
  local_188 = (USceneComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_188,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_188);
  }
  local_190.ComparisonIndex.Value = 0;
  local_190.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_190,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_190);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar4 = local_res20[0] != 0;
  local_res10[0] = TargetsForwardVector;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_160,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_160);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_178,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_178);
  }
  local_148.Pitch = local_178;
  local_148.Yaw = dStack_170;
  local_148.Roll = local_168;
  local_180 = local_198;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_128._s_0.Z = local_150;
  local_128._s_0.X = local_160;
  local_128._s_0.Y = dStack_158;
  if (local_188 == (USceneComponent *)0x0) {
    if (2 < (byte)LogMotionWarping._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMotionWarping);
    }
  }
  else {
    pFVar3 = FMotionWarpingTarget::FMotionWarpingTarget
                       (&local_108,&local_180,local_188,local_190,bVar4,local_res10[0],
                        *(AActor **)&param_1[4].field_0x8,(TVector<double> *)&local_128._s_0,
                        &local_148);
    AddOrUpdateWarpTarget((UMotionWarpingComponent *)param_1,pFVar3);
  }
  return;
}

// execAddOrUpdateWarpTargetFromLocation @ 14cf20510

void __cdecl
UMotionWarpingComponent::execAddOrUpdateWarpTargetFromLocation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName local_res10;
  double local_88;
  double dStack_80;
  double local_78;
  TTransform<double> local_68;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_68.Translation.XY.m128d_f64[0] = local_88;
  local_68.Translation.XY.m128d_f64[1] = dStack_80;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_68.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_68.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_68.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_68.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_68.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_68.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_68.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_68.Translation.ZW.m128d_f64[0] = local_78;
  local_68.Translation.ZW.m128d_f64[1] = 0.0;
  AddOrUpdateWarpTargetFromTransform((UMotionWarpingComponent *)param_1,local_res10,&local_68);
  return;
}

// execAddOrUpdateWarpTargetFromLocationAndRotation @ 14cf20640

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UMotionWarpingComponent::execAddOrUpdateWarpTargetFromLocationAndRotation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  TQuat<double> *pTVar3;
  FName local_res10;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  double local_d0;
  TRotator<double> local_c8;
  TTransform<double> local_a8;
  TQuat<double> local_48 [2];
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  FVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_c8.Pitch = local_f8;
  local_c8.Yaw = dStack_f0;
  local_c8.Roll = local_e8;
  pTVar3 = UE::Math::TRotator<double>::Quaternion(&local_c8,local_48);
  local_a8.Rotation.XY.m128d_f64[0] = pTVar3->X;
  local_a8.Rotation.XY.m128d_f64[1]._0_4_ = *(undefined4 *)&pTVar3->Y;
  local_a8.Rotation.XY.m128d_f64[1]._4_4_ = *(undefined4 *)((longlong)&pTVar3->Y + 4);
  local_a8.Rotation.ZW.m128d_f64[0] = pTVar3->Z;
  local_a8.Rotation.ZW.m128d_f64[1] = pTVar3->W;
  local_a8.Translation.XY.m128d_f64[0]._0_4_ = local_e0;
  local_a8.Translation.XY.m128d_f64[0]._4_4_ = uStack_dc;
  local_a8.Translation.XY.m128d_f64[1]._0_4_ = uStack_d8;
  local_a8.Translation.XY.m128d_f64[1]._4_4_ = uStack_d4;
  local_a8.Translation.ZW.m128d_f64[0] = local_d0;
  local_a8.Translation.ZW.m128d_f64[1] = 0.0;
  local_a8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_a8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_a8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_a8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  AddOrUpdateWarpTargetFromTransform((UMotionWarpingComponent *)param_1,FVar2,&local_a8);
  return;
}

// execAddOrUpdateWarpTargetFromTransform @ 14cf207f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMotionWarpingComponent::execAddOrUpdateWarpTargetFromTransform
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 auStack_118 [32];
  FName local_f8 [2];
  TTransform<double> local_e8;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_f8[0].ComparisonIndex.Value = 0;
  local_f8[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_f8);
  }
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_88._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_78._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_68._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_58._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_48._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_48._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_38._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_38._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_38._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  local_e8.Rotation.XY.m128d_f64[0] = (double)local_88._0_8_;
  local_e8.Rotation.XY.m128d_f64[1] = (double)local_88._8_8_;
  local_e8.Rotation.ZW.m128d_f64[0] = (double)local_78._0_8_;
  local_e8.Rotation.ZW.m128d_f64[1] = (double)local_78._8_8_;
  local_e8.Translation.XY.m128d_f64[0] = (double)local_68._0_8_;
  local_e8.Translation.XY.m128d_f64[1] = (double)local_68._8_8_;
  local_e8.Translation.ZW.m128d_f64[0] = (double)local_58._0_8_;
  local_e8.Translation.ZW.m128d_f64[1] = (double)local_58._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_e8.Scale3D.XY.m128d_f64[0] = (double)local_48._0_8_;
  local_e8.Scale3D.XY.m128d_f64[1] = (double)local_48._8_8_;
  local_e8.Scale3D.ZW.m128d_f64[0] = (double)local_38._0_8_;
  local_e8.Scale3D.ZW.m128d_f64[1] = (double)local_38._8_8_;
  AddOrUpdateWarpTargetFromTransform((UMotionWarpingComponent *)param_1,local_f8[0],&local_e8);
  return;
}

// execAddSwitchOffCondition @ 14cf21450

/* WARNING: Removing unreachable block (ram,0x00014cf217e5) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMotionWarpingComponent::execAddSwitchOffCondition(UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<TObjectPtr<UMotionWarpingSwitchOffCondition>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  undefined1 *puVar3;
  FProperty *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FName FVar7;
  UObject *pUVar8;
  bool bVar9;
  int iVar10;
  FSwitchOffConditionData *pFVar11;
  FName *pFVar12;
  FName *pFVar13;
  FName local_res10 [2];
  UObject *local_res20;
  UObject *local_58;
  UObject *local_50;
  FName local_48;
  FName local_40;
  undefined8 local_38;
  
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pUVar8 = local_res20;
  FVar7 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res20 == (UObject *)0x0) || ((*(uint *)&local_res20->field_0x8 >> 0x1e & 1) != 0)) {
    if (1 < (byte)LogMotionWarping._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMotionWarping);
    }
  }
  else {
    pFVar13 = *(FName **)&param_1[6].field_0x8;
    pFVar12 = pFVar13 + (longlong)*(int *)&param_1[6].field_0x10 * 0x1c;
    for (; pFVar13 != pFVar12; pFVar13 = pFVar13 + 0x1c) {
      if (*pFVar13 == local_res10[0]) {
        (**(code **)(*(longlong *)local_res20 + 0x2e0))();
        break;
      }
    }
    pFVar11 = FindSwitchOffConditionData((UMotionWarpingComponent *)param_1,FVar7);
    if (pFVar11 == (FSwitchOffConditionData *)0x0) {
      puVar3 = &param_1[6].field_0x18;
      local_48 = FVar7;
      local_40.ComparisonIndex.Value = 0;
      local_40.Number = 0;
      local_38 = 0;
      local_50 = pUVar8;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar8);
      }
      if ((((ulonglong)local_40 <= &local_50) &&
          (&local_50 < (UObject **)((longlong)local_40 + (longlong)(int)local_38._4_4_ * 8))) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = (uint)local_38;
      if ((uint)local_38 == local_38._4_4_) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)&local_40,(int *)((longlong)&local_38 + 4));
      }
      local_38 = CONCAT44(local_38._4_4_,iVar10 + 1);
      *(UObject **)((longlong)local_40 + (longlong)iVar10 * 8) = local_50;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_50 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_50);
      }
      if (((*(FName **)puVar3 <= &local_48) &&
          (&local_48 < *(FName **)puVar3 + (longlong)*(int *)&param_1[6].field_0x24 * 3)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = *(int *)&param_1[6].field_0x20;
      if (iVar10 == *(int *)&param_1[6].field_0x24) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)puVar3,(int *)&param_1[6].field_0x24);
      }
      *(int *)&param_1[6].field_0x20 = iVar10 + 1;
      pFVar13 = (FName *)(*(longlong *)puVar3 + (longlong)iVar10 * 0x18);
      *pFVar13 = local_48;
      pFVar13[1].ComparisonIndex = 0;
      pFVar13[1].Number = 0;
      pFVar13[1] = local_40;
      pFVar13[2].ComparisonIndex.Value = (uint)local_38;
      pFVar13[2].Number = local_38._4_4_;
    }
    else {
      pTVar1 = &pFVar11->SwitchOffConditions;
      local_58 = pUVar8;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar8);
      }
      pFVar5 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 <
           pFVar5 + (longlong)(pFVar11->SwitchOffConditions).ArrayMax * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = (pFVar11->SwitchOffConditions).ArrayNum;
      piVar2 = &(pFVar11->SwitchOffConditions).ArrayMax;
      if (iVar10 == *piVar2) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar1->AllocatorInstance,piVar2);
      }
      (pFVar11->SwitchOffConditions).ArrayNum = iVar10 + 1;
      *(UObject **)((pTVar1->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_58;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_58 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_58);
      }
    }
  }
  return;
}

// execDisableAllRootMotionModifiers @ 14cf227e0

void __cdecl
UMotionWarpingComponent::execDisableAllRootMotionModifiers
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = *(int *)(param_1 + 6);
  if (0 < iVar2) {
    plVar4 = *(longlong **)&param_1[5].field_0x20;
    plVar1 = plVar4 + iVar2;
    while( true ) {
      if (*(int *)(param_1 + 6) != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<URootMotionModifier>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (plVar4 == plVar1) break;
      plVar3 = (longlong *)*plVar4;
      if ((char)plVar3[0x2d] != '\x03') {
        *(undefined1 *)(plVar3 + 0x2d) = 3;
        (**(code **)(*plVar3 + 0x2b0))();
      }
      plVar4 = plVar4 + 1;
    }
  }
  return;
}

// execRemoveAllWarpTargets @ 14cf241e0

void __cdecl
UMotionWarpingComponent::execRemoveAllWarpTargets(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FName *pFVar2;
  FName *pFVar3;
  undefined1 local_res8 [8];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)&param_1[6].field_0x10;
  pFVar2 = *(FName **)&param_1[6].field_0x8;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x1c;
  while( true ) {
    if (*(int *)&param_1[6].field_0x10 != iVar1) {
      `TCheckedPointerIterator<FMotionWarpingTarget,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    RemoveSwitchOffConditions((UMotionWarpingComponent *)param_1,*pFVar2);
    pFVar2 = pFVar2 + 0x1c;
  }
  *(undefined4 *)&param_1[6].field_0x10 = 0;
  if (*(int *)&param_1[6].field_0x14 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xe0,8,0,(ForAnyElementType *)&param_1[6].field_0x8,0,(int *)&param_1[6].field_0x14);
  }
  *(int *)param_3 = iVar1;
  return;
}

// execRemoveWarpTarget @ 14cf242c0

void __cdecl
UMotionWarpingComponent::execRemoveWarpTarget(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = RemoveWarpTarget((UMotionWarpingComponent *)param_1,local_res10);
  *(int *)param_3 = iVar2;
  return;
}

// execRemoveWarpTargets @ 14cf24360

void __cdecl
UMotionWarpingComponent::execRemoveWarpTargets(UObject *param_1,FFrame *param_2,void *param_3)

{
  FName *pFVar1;
  int iVar2;
  FProperty *pFVar3;
  int iVar4;
  FName *pFVar5;
  void **ppvVar6;
  int iVar7;
  undefined1 local_res10 [8];
  void *local_38;
  undefined8 local_30;
  
  iVar7 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  ppvVar6 = &local_38;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar6 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar5 = *ppvVar6;
  iVar2 = *(int *)(ppvVar6 + 1);
  pFVar1 = pFVar5 + iVar2;
  while( true ) {
    if (*(int *)(ppvVar6 + 1) != iVar2) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar5 == pFVar1) break;
    iVar4 = RemoveWarpTarget((UMotionWarpingComponent *)param_1,*pFVar5);
    iVar7 = iVar7 + iVar4;
    pFVar5 = pFVar5 + 1;
  }
  *(int *)param_3 = iVar7;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

