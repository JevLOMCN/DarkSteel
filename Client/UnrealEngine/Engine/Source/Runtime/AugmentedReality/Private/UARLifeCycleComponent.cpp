// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 21

// StaticClass @ 14cf29870

UClass * __cdecl UARLifeCycleComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARLifeCycleComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARLifeCycleComponent",
               &Z_Registration_Info_UClass_UARLifeCycleComponent.InnerSingleton,
               StaticRegisterNativesUARLifeCycleComponent,0x290,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UARLifeCycleComponent>,
               InternalVTableHelperCtorCaller<UARLifeCycleComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARLifeCycleComponent.InnerSingleton;
}

// UARLifeCycleComponent @ 14cf41b10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UARLifeCycleComponent * __thiscall
UARLifeCycleComponent::UARLifeCycleComponent(UARLifeCycleComponent *this,FVTableHelper *param_1)

{
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)&this->OnARActorSpawnedDelegate = 0;
  *(undefined8 *)&(this->OnARActorSpawnedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnARActorSpawnedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnARActorToBeDestroyedDelegate = 0;
  *(undefined8 *)&(this->OnARActorToBeDestroyedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnARActorToBeDestroyedDelegate).field_0x10 = 0;
  (this->SpawnDelegateHandle).ID = 0;
  (this->DestroyDelegateHandle).ID = 0;
  return this;
}

// UARLifeCycleComponent @ 14cf41b90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UARLifeCycleComponent * __thiscall
UARLifeCycleComponent::UARLifeCycleComponent
          (UARLifeCycleComponent *this,FObjectInitializer *param_1)

{
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)&this->OnARActorSpawnedDelegate = 0;
  *(undefined8 *)&(this->OnARActorSpawnedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnARActorSpawnedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnARActorToBeDestroyedDelegate = 0;
  *(undefined8 *)&(this->OnARActorToBeDestroyedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnARActorToBeDestroyedDelegate).field_0x10 = 0;
  (this->SpawnDelegateHandle).ID = 0;
  (this->DestroyDelegateHandle).ID = 0;
  return this;
}

// ~UARLifeCycleComponent @ 14cf44440

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UARLifeCycleComponent::~UARLifeCycleComponent(UARLifeCycleComponent *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pvVar1 = *(void **)&(this->OnARActorToBeDestroyedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnARActorToBeDestroyedDelegate);
  pvVar1 = *(void **)&(this->OnARActorSpawnedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnARActorSpawnedDelegate);
  USceneComponent::~USceneComponent((USceneComponent *)this);
  return;
}

// CallInstanceRequestDestroyARActorDelegate @ 14cf4ba70

void __thiscall
UARLifeCycleComponent::CallInstanceRequestDestroyARActorDelegate
          (UARLifeCycleComponent *this,AARActor *param_1)

{
  UFunction *pUVar1;
  AARActor *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UARLifeCycleComponent_ServerDestroyARActor);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// CallInstanceRequestSpawnARActorDelegate @ 14cf4bab0

void __thiscall
UARLifeCycleComponent::CallInstanceRequestSpawnARActorDelegate
          (UARLifeCycleComponent *this,UClass *param_1,FGuid *param_2)

{
  UFunction *pUVar1;
  UClass *local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20._0_4_ = param_2->A;
  local_20._4_4_ = param_2->B;
  uStack_18._0_4_ = param_2->C;
  uStack_18._4_4_ = param_2->D;
  local_28 = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UARLifeCycleComponent_ServerSpawnARActor);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_28);
  return;
}

// DestroyComponent @ 14cf4e2c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UARLifeCycleComponent::DestroyComponent(UARLifeCycleComponent *this,bool param_1)

{
  FDelegateHandle FVar1;
  
  USceneComponent::DestroyComponent((USceneComponent *)this,param_1);
  FVar1.ID = (this->SpawnDelegateHandle).ID;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&RequestSpawnARActorDelegate,
               FVar1);
  }
  FVar1.ID = (this->DestroyDelegateHandle).ID;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&RequestDestroyARActorDelegate,
               FVar1);
    return;
  }
  return;
}

// FInstanceARActorSpawnedDelegate_DelegateWrapper @ 14cf4f060

void __cdecl
UARLifeCycleComponent::FInstanceARActorSpawnedDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,UClass *param_2,
          FGuid *param_3,AARActor *param_4)

{
  UClass *local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  AARActor *local_10;
  
  local_20._0_4_ = param_3->A;
  local_20._4_4_ = param_3->B;
  uStack_18._0_4_ = param_3->C;
  uStack_18._4_4_ = param_3->D;
  local_28 = param_2;
  local_10 = param_4;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_28);
  return;
}

// FInstanceARActorToBeDestroyedDelegate_DelegateWrapper @ 14cf4f090

void __cdecl
UARLifeCycleComponent::FInstanceARActorToBeDestroyedDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,AARActor *param_2)

{
  AARActor *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// GetPrivateStaticClass @ 14cf54980

UClass * __cdecl UARLifeCycleComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARLifeCycleComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARLifeCycleComponent",
               &Z_Registration_Info_UClass_UARLifeCycleComponent.InnerSingleton,
               StaticRegisterNativesUARLifeCycleComponent,0x290,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UARLifeCycleComponent>,
               InternalVTableHelperCtorCaller<UARLifeCycleComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARLifeCycleComponent.InnerSingleton;
}

// OnComponentCreated @ 14cf58370

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UARLifeCycleComponent::OnComponentCreated(UARLifeCycleComponent *this)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  UClass *pUVar4;
  FDelegateHandle FVar5;
  
  UActorComponent::OnComponentCreated((UActorComponent *)this);
  if ((this->SpawnDelegateHandle).ID == 0) {
    plVar2 = (longlong *)this->_padding_;
    if (plVar2 != (longlong *)0x0) {
      pUVar4 = Z_Construct_UClass_APlayerController_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(plVar2[2] + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(plVar2[2] + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        cVar3 = (**(code **)(*plVar2 + 0x7f0))(plVar2);
        if (cVar3 == '\0') {
          return;
        }
        FVar5 = TMulticastDelegateRegistration<void___cdecl(UClass_*,FGuid),FDefaultDelegateUserPolicy>
                ::AddUObject<UARLifeCycleComponent>
                          ((TMulticastDelegateRegistration<void___cdecl(UClass_*,FGuid),FDefaultDelegateUserPolicy>
                            *)&RequestSpawnARActorDelegate,(UARLifeCycleComponent *)&stack0x00000008
                           ,(pmf_caf95705 *)this);
                    /* WARNING: Load size is inaccurate */
        (this->SpawnDelegateHandle).ID = *FVar5.ID;
        FVar5 = TMulticastDelegateRegistration<void___cdecl(AARActor_*),FDefaultDelegateUserPolicy>
                ::AddUObject<UARLifeCycleComponent>
                          ((TMulticastDelegateRegistration<void___cdecl(AARActor_*),FDefaultDelegateUserPolicy>
                            *)&RequestDestroyARActorDelegate,
                           (UARLifeCycleComponent *)&stack0x00000008,(pmf_25c318b6 *)this);
                    /* WARNING: Load size is inaccurate */
        (this->DestroyDelegateHandle).ID = *FVar5.ID;
        return;
      }
    }
    if (1 < (byte)LogAR._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAR);
    }
  }
  return;
}

// OnUnregister @ 14cf59ce0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UARLifeCycleComponent::OnUnregister(UARLifeCycleComponent *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UWorld *pUVar7;
  AActor *pAVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  undefined1 local_res8 [8];
  UClass *local_res10;
  FName local_res18;
  ForAnyElementType local_b8;
  undefined8 local_b0;
  AARActor *local_a8;
  FString local_a0;
  TActorIteratorBase<TActorIterator<AARActor>_> local_88;
  
  lVar2 = this->_padding_;
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x168) == '\x03')) {
    local_b8.Data = (FScriptContainerElement *)0x0;
    local_b0 = 0;
    pUVar6 = AARActor::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    pUVar7 = (UWorld *)this->_padding_;
    if (pUVar7 == (UWorld *)0x0) {
      pUVar7 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    local_88.Flags = OnlyActiveLevels|SkipPendingKill;
    local_88.State.bIsSet = false;
    local_res10 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    FActorIteratorState::FActorIteratorState
              (&local_88.State.TypedValue,pUVar7,(TSubclassOf<AActor>)&local_res10);
    local_88.State.bIsSet = true;
    while( true ) {
      TActorIteratorBase<TActorIterator<AARActor>_>::operator++(&local_88);
      if ((local_88.State.bIsSet == false) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_88.State.TypedValue.ReachedEnd != false) break;
      if ((local_88.State.bIsSet == false) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pAVar8 = FActorIteratorState::GetActorChecked(&local_88.State.TypedValue);
      local_a8 = CastChecked<AARActor,AActor>(pAVar8);
      if (*(longlong *)&local_a8->field_0x158 == lVar2) {
        if (((local_b8.Data <= (FScriptContainerElement *)&local_a8) &&
            ((FScriptContainerElement *)&local_a8 < local_b8.Data + (longlong)local_b0._4_4_ * 8))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = (int)local_b0;
        if ((int)local_b0 == local_b0._4_4_) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_b8,(int *)((longlong)&local_b0 + 4));
        }
        local_b0 = CONCAT44(local_b0._4_4_,iVar5 + 1);
        *(AARActor **)(local_b8.Data + (longlong)iVar5 * 8) = local_a8;
      }
    }
    if (local_88.State.bIsSet != false) {
      UWorld::RemoveOnActorSpawnedHandler
                (local_88.State.TypedValue.CurrentWorld,
                 local_88.State.TypedValue.ActorSpawnedDelegateHandle);
      if (local_88.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
      }
      if (local_88.State.TypedValue.ActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.State.TypedValue.ActorArray.AllocatorInstance.Data);
      }
    }
    iVar5 = (int)local_b0;
    uVar9 = (ulonglong)(int)local_b0;
    pFVar1 = local_b8.Data + uVar9 * 8;
    FVar10.Data = local_b8.Data;
    while( true ) {
      if ((int)uVar9 != iVar5) {
        `TCheckedPointerIterator<AARActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar10.Data == pFVar1) break;
      pAVar8 = *(AActor **)FVar10.Data;
      if (4 < (byte)LogAR._0_1_) {
        local_res18 = (FName)pAVar8->_padding_;
        ::FName::ToString(&local_res18,&local_a0);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAR);
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
      }
      AActor::Destroy(pAVar8,false,true);
      uVar9 = local_b0 & 0xffffffff;
      FVar10.Data = FVar10.Data + 8;
    }
    if (local_b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data);
    }
  }
  USceneComponent::OnUnregister((USceneComponent *)this);
  return;
}

// ServerDestroyARActor @ 14cf5d640

void __thiscall
UARLifeCycleComponent::ServerDestroyARActor(UARLifeCycleComponent *this,AARActor *param_1)

{
  UFunction *pUVar1;
  AARActor *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UARLifeCycleComponent_ServerDestroyARActor);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// ServerDestroyARActor_Implementation @ 14cf5d680

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UARLifeCycleComponent::ServerDestroyARActor_Implementation
          (UARLifeCycleComponent *this,AARActor *param_1)

{
  FName local_res10 [3];
  FString local_18;
  
  if (param_1 != (AARActor *)0x0) {
    if (4 < (byte)LogAR._0_1_) {
      local_res10[0].ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
      local_res10[0].Number = *(uint *)&param_1->field_0x1c;
      ::FName::ToString(local_res10,&local_18);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAR);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    local_res10[0] = (FName)param_1;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->OnARActorToBeDestroyedDelegate,local_res10);
    AActor::Destroy((AActor *)param_1,false,true);
  }
  return;
}

// ServerDestroyARActor_Validate @ 14cf5d730

bool __thiscall
UARLifeCycleComponent::ServerDestroyARActor_Validate(UARLifeCycleComponent *this,AARActor *param_1)

{
  return true;
}

// ServerSpawnARActor @ 14cf5d7c0

void __thiscall
UARLifeCycleComponent::ServerSpawnARActor
          (UARLifeCycleComponent *this,UClass *param_1,FGuid *param_2)

{
  UFunction *pUVar1;
  UClass *local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20._0_4_ = param_2->A;
  local_20._4_4_ = param_2->B;
  uStack_18._0_4_ = param_2->C;
  uStack_18._4_4_ = param_2->D;
  local_28 = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UARLifeCycleComponent_ServerSpawnARActor);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_28);
  return;
}

// ServerSpawnARActor_Implementation @ 14cf5d810

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

void __thiscall
UARLifeCycleComponent::ServerSpawnARActor_Implementation
          (UARLifeCycleComponent *this,UClass *param_1,FGuid *param_2)

{
  int iVar1;
  UWorld *this_00;
  FActorSpawnParameters *pFVar2;
  UClass *pUVar3;
  AActor *this_01;
  longlong *plVar4;
  undefined1 auStack_198 [32];
  FScriptContainerElement *local_178;
  FName local_168;
  FString local_160;
  FString local_150;
  FString local_140;
  undefined8 uStack_130;
  AActor *local_128;
  TTransform<double> local_118;
  undefined1 local_b8 [112];
  ulonglong local_48;
  
  if (param_1 == (UClass *)0x0) {
    return;
  }
  local_48 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_118.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_118.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  this_00 = (UWorld *)this->_padding_;
  local_118.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_118.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_118.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_118.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  if (this_00 == (UWorld *)0x0) {
    this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  pFVar2 = FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_b8);
  pUVar3 = AARActor::StaticClass();
  this_01 = UWorld::SpawnActor(this_00,pUVar3,&local_118,pFVar2);
  if (this_01 != (AActor *)0x0) {
    pUVar3 = AARActor::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_14cf5d8fb;
  }
  this_01 = (AActor *)0x0;
LAB_14cf5d8fb:
  if (local_b8._64_8_ != 0) {
    plVar4 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (this_01 != (AActor *)0x0) {
    (**(code **)(this_01->_padding_ + 0x500))(this_01,this->_padding_);
    local_168 = (FName)param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    AARActor::AddARComponent((AARActor *)this_01,(TSubclassOf<UARComponent>)&local_168,param_2);
    if (4 < (byte)LogAR._0_1_) {
      local_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_160.Data.ArrayNum = 0;
      local_160.Data.ArrayMax = 0;
      FGuid::AppendString(param_2,&local_160,Digits);
      local_168 = (FName)param_1->_padding_;
      local_178 = (FScriptContainerElement *)L"";
      if (local_160.Data.ArrayNum != 0) {
        local_178 = local_160.Data.AllocatorInstance.Data;
      }
      ::FName::ToString(&local_168,&local_140);
      local_168 = (FName)this_01->_padding_;
      ::FName::ToString(&local_168,&local_150);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAR);
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
      if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_160.Data.AllocatorInstance.Data);
      }
    }
    local_140.Data.ArrayNum = param_2->A;
    local_140.Data.ArrayMax = param_2->B;
    uStack_130._0_4_ = param_2->C;
    uStack_130._4_4_ = param_2->D;
    local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
    local_128 = this_01;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->OnARActorSpawnedDelegate,&local_140);
  }
  return;
}

// ServerSpawnARActor_Validate @ 14cf5daa0

bool __thiscall
UARLifeCycleComponent::ServerSpawnARActor_Validate
          (UARLifeCycleComponent *this,UClass *param_1,FGuid *param_2)

{
  return true;
}

// StaticRegisterNativesUARLifeCycleComponent @ 14cf611b0

void __cdecl UARLifeCycleComponent::StaticRegisterNativesUARLifeCycleComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UARLifeCycleComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execServerDestroyARActor @ 14cf72530

void __cdecl
UARLifeCycleComponent::execServerDestroyARActor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x640))(param_1,local_res8);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"ServerDestroyARActor_Validate");
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x648))(param_1,local_res8);
  return;
}

// execServerSpawnARActor @ 14cf72650

void __cdecl
UARLifeCycleComponent::execServerSpawnARActor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  undefined8 local_res8;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_28 = 0;
  uStack_20 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18 = (undefined4)local_28;
  uStack_14 = local_28._4_4_;
  uStack_10 = (undefined4)uStack_20;
  uStack_c = uStack_20._4_4_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x650))(param_1,local_res8,&local_18);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"ServerSpawnARActor_Validate");
    return;
  }
  local_18 = (undefined4)local_28;
  uStack_14 = local_28._4_4_;
  uStack_10 = (undefined4)uStack_20;
  uStack_c = uStack_20._4_4_;
  (**(code **)(*(longlong *)param_1 + 0x658))(param_1,local_res8,&local_18);
  return;
}

