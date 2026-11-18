// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WNAbilityRuntime
// Functions: 48

// StaticClass @ 148db3b30

UClass * __cdecl UWN_Ability::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_Ability.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WNAbilityRuntime",L"WN_Ability",
               &Z_Registration_Info_UClass_UWN_Ability.InnerSingleton,
               StaticRegisterNativesUWN_Ability,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_Ability>,InternalVTableHelperCtorCaller<UWN_Ability>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_Ability.InnerSingleton;
}

// UWN_Ability @ 148db5fe0

UWN_Ability * __thiscall UWN_Ability::UWN_Ability(UWN_Ability *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bIsActive = false;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->AbilitySystemComponent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->Context).field0_0x0.DebugPtr = (UWN_AbilityContext *)0x0;
  (this->InstanceHandle).HandleImpl.Object = (FWN_AbilityInstanceHandleImpl *)0x0;
  (this->InstanceHandle).HandleImpl.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->EndTaskInstanceNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EndTaskInstanceNames).ArrayNum = 0;
  (this->EndTaskInstanceNames).ArrayMax = 0;
  (this->CancelTaskInstanceNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CancelTaskInstanceNames).ArrayNum = 0;
  (this->CancelTaskInstanceNames).ArrayMax = 0;
  (this->Tag).TagName = (FName)0x0;
  (this->ActiveTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveTasks).ArrayNum = 0;
  (this->ActiveTasks).ArrayMax = 0;
  (this->TaskDebugMessages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TaskDebugMessages).ArrayNum = 0;
  (this->TaskDebugMessages).ArrayMax = 0;
  (this->LogicalParent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->LogicalChildren).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LogicalChildren).ArrayNum = 0;
  (this->LogicalChildren).ArrayMax = 0;
  return this;
}

// UWN_Ability @ 148db6070

UWN_Ability * __thiscall UWN_Ability::UWN_Ability(UWN_Ability *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->AbilitySystemComponent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->Context).field0_0x0.DebugPtr = (UWN_AbilityContext *)0x0;
  (this->InstanceHandle).HandleImpl.Object = (FWN_AbilityInstanceHandleImpl *)0x0;
  (this->InstanceHandle).HandleImpl.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->EndTaskInstanceNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EndTaskInstanceNames).ArrayNum = 0;
  (this->EndTaskInstanceNames).ArrayMax = 0;
  (this->CancelTaskInstanceNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CancelTaskInstanceNames).ArrayNum = 0;
  (this->CancelTaskInstanceNames).ArrayMax = 0;
  (this->Tag).TagName = (FName)0x0;
  (this->ActiveTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveTasks).ArrayNum = 0;
  (this->ActiveTasks).ArrayMax = 0;
  (this->TaskDebugMessages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TaskDebugMessages).ArrayNum = 0;
  (this->TaskDebugMessages).ArrayMax = 0;
  (this->LogicalParent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->LogicalChildren).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LogicalChildren).ArrayNum = 0;
  (this->LogicalChildren).ArrayMax = 0;
  this->bIsActive = false;
  return this;
}

// ~UWN_Ability @ 148db6800

void __thiscall UWN_Ability::~UWN_Ability(UWN_Ability *this)

{
  FSharedReferencer<1> *this_00;
  FScriptContainerElement *pFVar1;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  pFVar1 = (this->LogicalChildren).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FWN_AbilityTaskDebugMessage,int>
            ((FWN_AbilityTaskDebugMessage *)(this->TaskDebugMessages).AllocatorInstance.Data,
             (this->TaskDebugMessages).ArrayNum);
  pFVar1 = (this->TaskDebugMessages).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ActiveTasks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CancelTaskInstanceNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EndTaskInstanceNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this_00 = &(this->InstanceHandle).HandleImpl.SharedReferenceCount;
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->InstanceHandle != (FWN_AbilityInstanceHandle *)&local_18) {
    (this->InstanceHandle).HandleImpl.Object = (FWN_AbilityInstanceHandleImpl *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(this_00,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (this_00->ReferenceController);
  this->_padding_ = (longlong)&___7IGameplayTaskOwnerInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Activate @ 148db7040

bool __thiscall UWN_Ability::Activate(UWN_Ability *this)

{
  char cVar1;
  UWN_Ability *local_res8 [4];
  
  local_res8[0] = this;
  if ((this->Tag).TagName == (FName)0x0) {
    `UWN_Ability::Activate'::__l5::<lambda_1>::operator()(local_res8);
    return false;
  }
  if (this->bIsActive != false) {
    `UWN_Ability::Activate'::__l8::<lambda_2>::operator()(local_res8);
    return false;
  }
  cVar1 = (**(code **)(this->_padding_ + 0x2d0))();
  if (cVar1 != '\0') {
    this->bIsActive = true;
    cVar1 = (**(code **)(this->_padding_ + 0x2c8))(this);
    if (cVar1 != '\0') {
      (**(code **)(this->_padding_ + 0x2d8))(this);
      return true;
    }
  }
  this->bIsActive = false;
  return false;
}

// AddAbilityTaskDebugMessage @ 148db74c0

void __thiscall
UWN_Ability::AddAbilityTaskDebugMessage(UWN_Ability *this,UGameplayTask *param_1,FString *param_2)

{
  int *piVar1;
  TArray<FWN_AbilityTaskDebugMessage,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  FString local_48;
  void *local_38 [2];
  
  pTVar2 = &this->TaskDebugMessages;
  iVar7 = (this->TaskDebugMessages).ArrayNum;
  piVar1 = &(this->TaskDebugMessages).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->TaskDebugMessages).ArrayNum = iVar7 + 1;
  DefaultConstructItems<FWN_AbilityTaskDebugMessage,int>
            ((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x18,1);
  iVar7 = (this->TaskDebugMessages).ArrayNum;
  uVar9 = iVar7 - 1;
  uVar8 = 0;
  if ((int)uVar9 < iVar7) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = (this->TaskDebugMessages).ArrayNum;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UGameplayTask *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  *(UGameplayTask **)(pFVar4 + (longlong)iVar7 * 0x18 + -0x18) = param_1;
  if (param_1 != (UGameplayTask *)0x0) {
    (**(code **)(param_1->_padding_ + 0x2d8))(param_1,local_38);
  }
  ::FString::PrintfImpl(&local_48,L"{%s} %s");
  pFVar3 = pFVar4 + (longlong)iVar7 * 0x18 + -0x10;
  if (pFVar3 != (FScriptContainerElement *)&local_48) {
    if (*(void **)pFVar3 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar3);
    }
    *(FScriptContainerElement **)pFVar3 = local_48.Data.AllocatorInstance.Data;
    *(int *)(pFVar4 + (longlong)iVar7 * 0x18 + -8) = local_48.Data.ArrayNum;
    *(int *)(pFVar4 + (longlong)iVar7 * 0x18 + -4) = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((param_1 != (UGameplayTask *)0x0) && (local_38[0] != (void *)0x0)) {
    FMemory::Free(local_38[0]);
  }
  pFVar4 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// CanActivate @ 148db7880

bool __thiscall UWN_Ability::CanActivate(UWN_Ability *this)

{
  undefined1 uVar1;
  UWN_Ability *local_res8 [4];
  
  if (this->bIsActive == false) {
    if ((this->Tag).TagName != (FName)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148db78ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(this->_padding_ + 0x2c0))();
      return (bool)uVar1;
    }
    local_res8[0] = this;
    `UWN_Ability::CanActivate'::__l8::<lambda_1>::operator()(local_res8);
  }
  return false;
}

// Cancel @ 148db7960

bool __thiscall UWN_Ability::Cancel(UWN_Ability *this)

{
  UWN_Ability *local_res8 [4];
  
  if (this->bIsActive == false) {
    local_res8[0] = this;
    `UWN_Ability::Cancel'::__l5::<lambda_1>::operator()(local_res8);
    return false;
  }
  this->bIsActive = false;
  (**(code **)(this->_padding_ + 0x300))();
  (**(code **)(this->_padding_ + 0x2f8))(this);
  (**(code **)(this->_padding_ + 0x308))(this);
  return true;
}

// CancelTask @ 148db7aa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWN_Ability::CancelTask(UWN_Ability *this,FName param_1)

{
  UWorld *this_00;
  FTimerManager *this_01;
  FName local_res10 [3];
  
  local_res10[0] = param_1;
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
            (&this->CancelTaskInstanceNames,local_res10);
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  this_01 = UWorld::GetTimerManager(this_00);
  FTimerManager::SetTimerForNextTick<UWN_Ability>
            (this_01,(UWN_Ability *)&stack0x00000008,(pmf_25c6d823 *)this);
  return;
}

// Deactivate @ 148db7ca0

bool __thiscall UWN_Ability::Deactivate(UWN_Ability *this)

{
  UWN_Ability *local_res8 [4];
  
  if (this->bIsActive == false) {
    local_res8[0] = this;
    `UWN_Ability::Deactivate'::__l5::<lambda_1>::operator()(local_res8);
    return false;
  }
  this->bIsActive = false;
  (**(code **)(this->_padding_ + 0x2e8))();
  (**(code **)(this->_padding_ + 0x2e0))(this);
  (**(code **)(this->_padding_ + 0x2f0))(this);
  return true;
}

// EndTask @ 148db94a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWN_Ability::EndTask(UWN_Ability *this,FName param_1)

{
  UWorld *this_00;
  FTimerManager *this_01;
  FName local_res10 [3];
  
  local_res10[0] = param_1;
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
            (&this->EndTaskInstanceNames,local_res10);
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  this_01 = UWorld::GetTimerManager(this_00);
  FTimerManager::SetTimerForNextTick<UWN_Ability>
            (this_01,(UWN_Ability *)&stack0x00000008,(pmf_25c6d823 *)this);
  return;
}

// GetGameplayTaskAvatar @ 148db9930

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall UWN_Ability::GetGameplayTaskAvatar(UWN_Ability *this,UGameplayTask *param_1)

{
  UObject *pUVar1;
  AActor *pAVar2;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  pAVar2 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar1[0xe].field_0x18);
  return pAVar2;
}

// GetGameplayTaskOwner @ 148db9960

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall UWN_Ability::GetGameplayTaskOwner(UWN_Ability *this,UGameplayTask *param_1)

{
  UObject *pUVar1;
  AActor *pAVar2;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  pAVar2 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar1[0xe].field_0x10);
  return pAVar2;
}

// GetGameplayTasksComponent @ 148db9990

UGameplayTasksComponent * __thiscall
UWN_Ability::GetGameplayTasksComponent(UWN_Ability *this,UGameplayTask *param_1)

{
  UGameplayTasksComponent *pUVar1;
  
  pUVar1 = (UGameplayTasksComponent *)
           FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  return pUVar1;
}

// GetPrivateStaticClass @ 148db99b0

UClass * __cdecl UWN_Ability::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_Ability.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WNAbilityRuntime",L"WN_Ability",
               &Z_Registration_Info_UClass_UWN_Ability.InnerSingleton,
               StaticRegisterNativesUWN_Ability,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_Ability>,InternalVTableHelperCtorCaller<UWN_Ability>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_Ability.InnerSingleton;
}

// OnActivate @ 148db9f50

bool __thiscall UWN_Ability::OnActivate(UWN_Ability *this)

{
  return true;
}

// OnAddedToASC @ 148db9f60

void __thiscall UWN_Ability::OnAddedToASC(UWN_Ability *this)

{
  return;
}

// OnAddedToAbilitySystemComponent @ 148db9f70

void __thiscall
UWN_Ability::OnAddedToAbilitySystemComponent
          (UWN_Ability *this,UWN_AbilitySystemComponent *param_1,FGameplayTag param_2,
          TWeakObjectPtr<UWN_Ability,FWeakObjectPtr> *param_3)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UObject *pUVar5;
  UWN_AbilitySystemComponent *local_res8;
  UWN_Ability *local_res10;
  FWeakObjectPtr local_18 [2];
  
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UWN_AbilitySystemComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->AbilitySystemComponent).WeakPtr,(FObjectPtr)&local_res8);
  (this->Tag).TagName = param_2.TagName;
  (this->LogicalParent).WeakPtr = param_3->WeakPtr;
  bVar3 = FWeakObjectPtr::IsValid(&(this->LogicalParent).WeakPtr);
  if (bVar3) {
    pUVar5 = FWeakObjectPtr::Get(&(this->LogicalParent).WeakPtr);
    puVar1 = &pUVar5[4].field_0x8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_18[0].ObjectIndex = 0;
    local_18[0].ObjectSerialNumber = 0;
    local_res10 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(local_18,(FObjectPtr)&local_res10);
    if ((*(FWeakObjectPtr **)puVar1 <= local_18) &&
       (local_18 < *(FWeakObjectPtr **)puVar1 + *(int *)&pUVar5[4].field_0x14)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = *(int *)&pUVar5[4].field_0x10;
    if (iVar4 == *(int *)&pUVar5[4].field_0x14) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,(ForAnyElementType *)puVar1,(int *)&pUVar5[4].field_0x14);
    }
    *(int *)&pUVar5[4].field_0x10 = iVar4 + 1;
    *(FWeakObjectPtr *)(*(longlong *)puVar1 + (longlong)iVar4 * 8) = local_18[0];
  }
                    /* WARNING: Could not recover jumptable at 0x000148dba0d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2b0))(this);
  return;
}

// OnCanActivate @ 148dba0f0

bool __thiscall UWN_Ability::OnCanActivate(UWN_Ability *this)

{
  return true;
}

// OnCancel @ 148dba100

void __thiscall UWN_Ability::OnCancel(UWN_Ability *this)

{
  return;
}

// OnDeactivate @ 148dba150

void __thiscall UWN_Ability::OnDeactivate(UWN_Ability *this)

{
  return;
}

// OnEndOrCancelTasks @ 148dba1f0

void __thiscall UWN_Ability::OnEndOrCancelTasks(UWN_Ability *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UGameplayTask *this_00;
  FName *pFVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FName *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  pFVar8 = (this->ActiveTasks).AllocatorInstance.Data;
  iVar2 = (this->ActiveTasks).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
LAB_148dba220:
  do {
    if ((this->ActiveTasks).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UGameplayTask>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    this_00 = *(UGameplayTask **)pFVar8;
    if (this_00 != (UGameplayTask *)0x0) {
      pFVar3 = (FName *)(this->EndTaskInstanceNames).AllocatorInstance.Data;
      pFVar7 = pFVar3;
      if (pFVar3 != pFVar3 + (this->EndTaskInstanceNames).ArrayNum) {
        do {
          if (*pFVar7 == this_00->InstanceName) {
            if ((int)((longlong)pFVar7 - (longlong)pFVar3 >> 3) != -1) {
              UGameplayTask::EndTask(this_00);
            }
            goto LAB_148dba27f;
          }
          pFVar7 = pFVar7 + 1;
        } while (pFVar7 != pFVar3 + (this->EndTaskInstanceNames).ArrayNum);
        pFVar8 = pFVar8 + 8;
        goto LAB_148dba220;
      }
    }
LAB_148dba27f:
    pFVar8 = pFVar8 + 8;
  } while( true );
  pFVar8 = (this->ActiveTasks).AllocatorInstance.Data;
  iVar2 = (this->ActiveTasks).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
LAB_148dba297:
  do {
    if ((this->ActiveTasks).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UGameplayTask>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar1) {
      return;
    }
    plVar4 = *(longlong **)pFVar8;
    if (plVar4 != (longlong *)0x0) {
      pFVar5 = (this->EndTaskInstanceNames).AllocatorInstance.Data;
      pFVar6 = pFVar5;
      if (pFVar5 != pFVar5 + (longlong)(this->EndTaskInstanceNames).ArrayNum * 8) {
        do {
          if (*(longlong *)pFVar6 == plVar4[6]) {
            if ((int)((longlong)pFVar6 - (longlong)pFVar5 >> 3) != -1) {
              (**(code **)(*plVar4 + 0x2d0))(plVar4);
            }
            goto LAB_148dba2fc;
          }
          pFVar6 = pFVar6 + 8;
        } while (pFVar6 != pFVar5 + (longlong)(this->EndTaskInstanceNames).ArrayNum * 8);
        pFVar8 = pFVar8 + 8;
        goto LAB_148dba297;
      }
    }
LAB_148dba2fc:
    pFVar8 = pFVar8 + 8;
  } while( true );
}

// OnGameplayTaskActivated @ 148dba320

void __thiscall UWN_Ability::OnGameplayTaskActivated(UWN_Ability *this,UGameplayTask *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UGameplayTask *local_18 [2];
  
  pTVar1 = &this->EndTaskInstanceNames;
  local_18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UGameplayTask *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar3 + (longlong)(this->EndTaskInstanceNames).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->EndTaskInstanceNames).ArrayNum;
  piVar2 = &(this->EndTaskInstanceNames).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->EndTaskInstanceNames).ArrayNum = iVar6 + 1;
  *(UGameplayTask **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18[0] != (UGameplayTask *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  return;
}

// OnGameplayTaskDeactivated @ 148dba410

void __thiscall UWN_Ability::OnGameplayTaskDeactivated(UWN_Ability *this,UGameplayTask *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UGameplayTask *pUVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  UGameplayTask *local_38 [2];
  
  local_38[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UGameplayTask *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar2 = (this->EndTaskInstanceNames).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
      ((FScriptContainerElement *)local_38 <
       pFVar2 + (longlong)(this->EndTaskInstanceNames).ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->EndTaskInstanceNames).ArrayNum;
  if (iVar1 != 0) {
    iVar9 = 0;
    pFVar2 = (this->EndTaskInstanceNames).AllocatorInstance.Data;
    bVar4 = *(UGameplayTask **)pFVar2 != local_38[0];
    lVar6 = 0;
    pUVar5 = local_38[0];
    iVar7 = 0;
    do {
      iVar8 = iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar8 = iVar8 + 1;
        if (iVar1 <= lVar6) break;
      } while (bVar4 == (*(UGameplayTask **)(pFVar2 + lVar6 * 8) != pUVar5));
      if (bVar4 != false) {
        if (iVar9 != iVar7) {
          memmove(pFVar2 + (longlong)iVar9 * 8,pFVar2 + (longlong)iVar7 * 8,
                  (longlong)(iVar8 - iVar7) << 3);
          pUVar5 = local_38[0];
        }
        iVar9 = iVar9 + (iVar8 - iVar7);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar7 = iVar8;
    } while (lVar6 < iVar1);
    (this->EndTaskInstanceNames).ArrayNum = iVar9;
  }
  return;
}

// OnGameplayTaskInitialized @ 148dba5a0

void __thiscall UWN_Ability::OnGameplayTaskInitialized(UWN_Ability *this,UGameplayTask *param_1)

{
  int iVar1;
  UClass *pUVar2;
  TArray<FWN_AbilityTaskDebugMessage,TSizedDefaultAllocator<32>_> *pTVar3;
  UObject *local_res8;
  
  if (param_1 != (UGameplayTask *)0x0) {
    pUVar2 = UWN_AbilityTask::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) goto LAB_148dba5df;
  }
  param_1 = (UGameplayTask *)0x0;
LAB_148dba5df:
  local_res8 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&param_1[1]._padding_,(FObjectPtr)&local_res8);
  pTVar3 = &this[-1].TaskDebugMessages;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pTVar3 != (TArray<FWN_AbilityTaskDebugMessage,TSizedDefaultAllocator<32>_> *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pTVar3);
  }
  param_1[1]._padding_ = (longlong)pTVar3;
  return;
}

// OnPostActivate @ 148dba650

void __thiscall UWN_Ability::OnPostActivate(UWN_Ability *this)

{
  return;
}

// OnPostCancel @ 148dba690

void __thiscall UWN_Ability::OnPostCancel(UWN_Ability *this)

{
  return;
}

// OnPostDeactivate @ 148dba6b0

void __thiscall UWN_Ability::OnPostDeactivate(UWN_Ability *this)

{
  return;
}

// OnPostTickComponent @ 148dba710

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
UWN_Ability::OnPostTickComponent
          (UWN_Ability *this,float param_1,ELevelTick param_2,FActorComponentTickFunction *param_3)

{
  return;
}

// OnPreActivate @ 148dba730

bool __thiscall UWN_Ability::OnPreActivate(UWN_Ability *this)

{
  return true;
}

// OnPreCancel @ 148dba760

void __thiscall UWN_Ability::OnPreCancel(UWN_Ability *this)

{
  return;
}

// OnPreDeactivate @ 148dba790

void __thiscall UWN_Ability::OnPreDeactivate(UWN_Ability *this)

{
  return;
}

// OnPreTickComponent @ 148dba7e0

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
UWN_Ability::OnPreTickComponent
          (UWN_Ability *this,float param_1,ELevelTick param_2,FActorComponentTickFunction *param_3)

{
  return;
}

// OnRemovedFromASC @ 148dba850

void __thiscall UWN_Ability::OnRemovedFromASC(UWN_Ability *this)

{
  return;
}

// OnRemovedFromAbilitySystemComponent @ 148dba860

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWN_Ability::OnRemovedFromAbilitySystemComponent
          (UWN_Ability *this,UWN_AbilitySystemComponent *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FWeakObjectPtr *pFVar3;
  int iVar4;
  UGameplayTask *this_00;
  FName *pFVar5;
  FWN_AbilityTaskDebugMessage *pFVar6;
  code *pcVar7;
  FWN_AbilityInstanceHandleImpl *pFVar8;
  FSharedReferencer<1> FVar9;
  bool bVar10;
  FName *pFVar11;
  UObject *pUVar12;
  FScriptContainerElement *pFVar13;
  FWeakObjectPtr *this_01;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  FWeakObjectPtr local_res20;
  UWN_Ability *local_c0;
  UWN_Ability *local_b8;
  UWN_Ability *local_b0;
  UWN_Ability *local_a8;
  FName local_a0;
  FName local_98;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FWN_AbilityInstanceHandleImpl *local_50;
  TReferenceControllerBase<1> *pTStack_48;
  
  if (this->bIsActive != false) {
    local_c0 = this;
    `UWN_Ability::OnRemovedFromAbilitySystemComponent'::__l5::<lambda_1>::operator()(&local_c0);
    if (this->bIsActive == false) {
      local_b8 = this;
      `UWN_Ability::Deactivate'::__l5::<lambda_1>::operator()(&local_b8);
    }
    else {
      this->bIsActive = false;
      (**(code **)(this->_padding_ + 0x2e8))(this);
      (**(code **)(this->_padding_ + 0x2e0))(this);
      (**(code **)(this->_padding_ + 0x2f0))(this);
    }
  }
  bVar10 = TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>::
           UEOpEquals<UWN_AbilitySystemComponent,bool>(&this->AbilitySystemComponent,param_1);
  if ((!bVar10) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("AbilitySystemComponent == InASC",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WNAbility\\Source\\WNAbilityRuntime\\Private\\WNAbility.cpp"
                          ,0x55,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  (**(code **)(this->_padding_ + 0x2b8))(this);
  pFVar13 = (this->ActiveTasks).AllocatorInstance.Data;
  iVar4 = (this->ActiveTasks).ArrayNum;
  pFVar2 = pFVar13 + (longlong)iVar4 * 8;
  do {
    while( true ) {
      if ((this->ActiveTasks).ArrayNum != iVar4) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UGameplayTask>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar13 == pFVar2) {
        (this->ActiveTasks).ArrayNum = 0;
        if ((this->ActiveTasks).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&(this->ActiveTasks).AllocatorInstance,0,&(this->ActiveTasks).ArrayMax);
        }
        (this->Tag).TagName = FGameplayTag::EmptyTag.TagName;
        (this->AbilitySystemComponent).WeakPtr = (FWeakObjectPtr)0x0;
        FVar9 = FWN_AbilityInstanceHandle::Invalid.HandleImpl.SharedReferenceCount;
        pFVar8 = FWN_AbilityInstanceHandle::Invalid.HandleImpl.Object;
        if (FWN_AbilityInstanceHandle::Invalid.HandleImpl.SharedReferenceCount.ReferenceController
            != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FWN_AbilityInstanceHandle::Invalid.HandleImpl.SharedReferenceCount.ReferenceController)->
          SharedReferenceCount =
               (atomic<int>)
               ((int)(FWN_AbilityInstanceHandle::Invalid.HandleImpl.SharedReferenceCount.
                     ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_50 = (this->InstanceHandle).HandleImpl.Object;
        pTStack_48 = (this->InstanceHandle).HandleImpl.SharedReferenceCount.ReferenceController;
        (this->InstanceHandle).HandleImpl.Object = pFVar8;
        (this->InstanceHandle).HandleImpl.SharedReferenceCount.ReferenceController =
             FVar9.ReferenceController;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_48);
        (this->EndTaskInstanceNames).ArrayNum = 0;
        if ((this->EndTaskInstanceNames).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,0,&(this->EndTaskInstanceNames).AllocatorInstance,0,
                     &(this->EndTaskInstanceNames).ArrayMax);
        }
        (this->CancelTaskInstanceNames).ArrayNum = 0;
        if ((this->CancelTaskInstanceNames).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,0,&(this->CancelTaskInstanceNames).AllocatorInstance,0,
                     &(this->CancelTaskInstanceNames).ArrayMax);
        }
        piVar1 = &(this->TaskDebugMessages).ArrayMax;
        pFVar6 = (FWN_AbilityTaskDebugMessage *)(this->TaskDebugMessages).AllocatorInstance.Data;
        iVar4 = (this->TaskDebugMessages).ArrayNum;
        if (*piVar1 < 0) {
          DestructItems<FWN_AbilityTaskDebugMessage,int>(pFVar6,iVar4);
          (this->TaskDebugMessages).ArrayNum = 0;
          if (*piVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,0,&(this->TaskDebugMessages).AllocatorInstance,0,piVar1);
          }
        }
        else {
          DestructItems<FWN_AbilityTaskDebugMessage,int>(pFVar6,iVar4);
          (this->TaskDebugMessages).ArrayNum = 0;
        }
        bVar10 = FWeakObjectPtr::IsValid(&(this->LogicalParent).WeakPtr);
        if (bVar10) {
          pUVar12 = FWeakObjectPtr::Get(&(this->LogicalParent).WeakPtr);
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          local_res20.ObjectIndex = 0;
          local_res20.ObjectSerialNumber = 0;
          local_b0 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_b0);
          TArray<TWeakObjectPtr<UWN_Ability,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::RemoveSwap
                    ((TArray<TWeakObjectPtr<UWN_Ability,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                      *)&pUVar12[4].field_0x8,
                     (TWeakObjectPtr<UWN_Ability,FWeakObjectPtr> *)&local_res20,Default);
          (this->LogicalParent).WeakPtr = (FWeakObjectPtr)0x0;
        }
        if ((this->LogicalChildren).ArrayNum != 0) {
          local_a8 = this;
          `UWN_Ability::OnRemovedFromAbilitySystemComponent'::__l28::<lambda_2>::operator()
                    (&local_a8);
          this_01 = (FWeakObjectPtr *)(this->LogicalChildren).AllocatorInstance.Data;
          iVar4 = (this->LogicalChildren).ArrayNum;
          pFVar3 = this_01 + iVar4;
          while( true ) {
            if ((this->LogicalChildren).ArrayNum != iVar4) {
              local_res18[0] = 0;
              `TCheckedPointerIterator<TWeakObjectPtr<UWN_Ability,FWeakObjectPtr>,int,0>::
              operator!='::__l2::<lambda_1>::operator()(local_res18);
            }
            if (this_01 == pFVar3) break;
            bVar10 = FWeakObjectPtr::IsValid(this_01);
            if ((!bVar10) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("child.IsValid()",
                                    "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WNAbility\\Source\\WNAbilityRuntime\\Private\\WNAbility.cpp"
                                    ,0x82,L""), bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (2 < (byte)LogWNAbility._0_1_) {
              pUVar12 = FWeakObjectPtr::Get(this_01);
              ::FName::ToString((FName *)(pUVar12 + 3),&local_60);
              pUVar12 = FWeakObjectPtr::Get(this_01);
              local_a0.ComparisonIndex.Value = *(uint *)&pUVar12->field_0x18;
              local_a0.Number = *(uint *)&pUVar12->field_0x1c;
              ::FName::ToString(&local_a0,&local_70);
              ::FName::ToString(&(this->Tag).TagName,&local_80);
              local_98 = (FName)this->_padding_;
              ::FName::ToString(&local_98,&local_90);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWNAbility);
              if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_90.Data.AllocatorInstance.Data);
              }
              if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_80.Data.AllocatorInstance.Data);
              }
              if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_70.Data.AllocatorInstance.Data);
              }
              if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_60.Data.AllocatorInstance.Data);
              }
            }
            pUVar12 = FWeakObjectPtr::Get(this_01);
            this_01 = this_01 + 1;
            *(undefined8 *)(pUVar12 + 4) = 0;
          }
          (this->LogicalChildren).ArrayNum = 0;
          if ((this->LogicalChildren).ArrayMax < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,0,&(this->LogicalChildren).AllocatorInstance,0,
                       &(this->LogicalChildren).ArrayMax);
          }
        }
        return;
      }
      this_00 = *(UGameplayTask **)pFVar13;
      if (this_00 != (UGameplayTask *)0x0) break;
LAB_148dba988:
      pFVar13 = pFVar13 + 8;
    }
    pFVar5 = (FName *)(this->EndTaskInstanceNames).AllocatorInstance.Data;
    pFVar11 = pFVar5;
    if (pFVar5 == pFVar5 + (this->EndTaskInstanceNames).ArrayNum) goto LAB_148dba988;
    do {
      if (*pFVar11 == this_00->InstanceName) {
        if ((int)((longlong)pFVar11 - (longlong)pFVar5 >> 3) != -1) {
          UGameplayTask::EndTask(this_00);
        }
        goto LAB_148dba988;
      }
      pFVar11 = pFVar11 + 1;
    } while (pFVar11 != pFVar5 + (this->EndTaskInstanceNames).ArrayNum);
    pFVar13 = pFVar13 + 8;
  } while( true );
}

// PostTickComponent @ 148dbad60

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
UWN_Ability::PostTickComponent
          (UWN_Ability *this,float param_1,ELevelTick param_2,FActorComponentTickFunction *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000148dbad63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 800))();
  return;
}

// PreTickComponent @ 148dbad70

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
UWN_Ability::PreTickComponent
          (UWN_Ability *this,float param_1,ELevelTick param_2,FActorComponentTickFunction *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000148dbad73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x310))();
  return;
}

// ShouldPostTickComponent @ 148dbb6a0

bool __thiscall UWN_Ability::ShouldPostTickComponent(UWN_Ability *this)

{
  return false;
}

// ShouldPreTickComponent @ 148dbb6b0

bool __thiscall UWN_Ability::ShouldPreTickComponent(UWN_Ability *this)

{
  return false;
}

// StaticRegisterNativesUWN_Ability @ 148dbb6c0

void __cdecl UWN_Ability::StaticRegisterNativesUWN_Ability(void)

{
  return;
}

// _getUObject @ 148dbc370

UObject * __thiscall UWN_Ability::_getUObject(UWN_Ability *this)

{
  return (UObject *)&this[-1].TaskDebugMessages;
}

// operator() @ 15053a430

bool __thiscall `UWN_Ability::Activate'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3559349581286211760>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)this + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3559349581286211760>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15053a4a5;
    }
  }
  bVar2 = false;
LAB_15053a4a5:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15053a520

bool __thiscall `UWN_Ability::Cancel'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<3559349581286211832>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)this + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3559349581286211832>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15053a595;
    }
  }
  bVar2 = false;
LAB_15053a595:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15053a680

bool __thiscall `UWN_Ability::Deactivate'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<3559349581286211810>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)this + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3559349581286211810>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15053a6f5;
    }
  }
  bVar2 = false;
LAB_15053a6f5:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15053a7e0

bool __thiscall
`UWN_Ability::OnRemovedFromAbilitySystemComponent'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3559349581286211665>);
  if (bVar4) {
    ::FName::ToString((FName *)(*(longlong *)this + 0x78),&local_18);
    local_res10 = *(FName *)(*(longlong *)this + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3559349581286211665>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15053a88a;
    }
  }
  bVar4 = false;
LAB_15053a88a:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 15053aa40

bool __thiscall `UWN_Ability::CanActivate'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3559349581286211735>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)this + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3559349581286211735>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15053aab5;
    }
  }
  bVar2 = false;
LAB_15053aab5:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15053aaf0

bool __thiscall `UWN_Ability::Activate'::__l8::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3559349581286211770>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)this + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3559349581286211770>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15053ab65;
    }
  }
  bVar2 = false;
LAB_15053ab65:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15053af10

bool __thiscall
`UWN_Ability::OnRemovedFromAbilitySystemComponent'::__l28::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<3559349581286211711>);
  if (bVar4) {
    ::FName::ToString((FName *)(*(longlong *)this + 0x78),&local_18);
    local_res10 = *(FName *)(*(longlong *)this + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3559349581286211711>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15053afba;
    }
  }
  bVar4 = false;
LAB_15053afba:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

