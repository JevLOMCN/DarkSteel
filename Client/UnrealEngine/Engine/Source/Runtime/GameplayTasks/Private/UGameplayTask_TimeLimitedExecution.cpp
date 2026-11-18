// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTasks
// Functions: 13

// StaticClass @ 146ceb1f0

UClass * __cdecl UGameplayTask_TimeLimitedExecution::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayTask_TimeLimitedExecution.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTasks",L"GameplayTask_TimeLimitedExecution",
               &Z_Registration_Info_UClass_UGameplayTask_TimeLimitedExecution.InnerSingleton,
               StaticRegisterNativesUGameplayTask_TimeLimitedExecution,0xc0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<UGameplayTask_TimeLimitedExecution>,
               InternalVTableHelperCtorCaller<UGameplayTask_TimeLimitedExecution>,local_res8,
               UGameplayTask::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayTask_TimeLimitedExecution.InnerSingleton;
}

// UGameplayTask_TimeLimitedExecution @ 146cedbb0

UGameplayTask_TimeLimitedExecution * __thiscall
UGameplayTask_TimeLimitedExecution::UGameplayTask_TimeLimitedExecution
          (UGameplayTask_TimeLimitedExecution *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->OnFinished = 0;
  *(undefined8 *)&(this->OnFinished).field_0x8 = 0;
  *(undefined8 *)&(this->OnFinished).field_0x10 = 0;
  *(undefined8 *)&this->OnTimeExpired = 0;
  *(undefined8 *)&(this->OnTimeExpired).field_0x8 = 0;
  *(undefined8 *)&(this->OnTimeExpired).field_0x10 = 0;
  return this;
}

// UGameplayTask_TimeLimitedExecution @ 146cedc30

UGameplayTask_TimeLimitedExecution * __thiscall
UGameplayTask_TimeLimitedExecution::UGameplayTask_TimeLimitedExecution
          (UGameplayTask_TimeLimitedExecution *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  
  UGameplayTask::UGameplayTask((UGameplayTask *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->bTimeExpired = 0;
  this->bChildTaskFinished = 0;
  *(undefined8 *)&this->OnFinished = 0;
  *(undefined8 *)&(this->OnFinished).field_0x8 = 0;
  *(undefined8 *)&(this->OnFinished).field_0x10 = 0;
  *(undefined8 *)&this->OnTimeExpired = 0;
  *(undefined8 *)&(this->OnTimeExpired).field_0x8 = 0;
  *(undefined8 *)&(this->OnTimeExpired).field_0x10 = 0;
  this->Time = 0.0;
  this->TimeStarted = 0.0;
  return this;
}

// ~UGameplayTask_TimeLimitedExecution @ 146cee200

void __thiscall
UGameplayTask_TimeLimitedExecution::~UGameplayTask_TimeLimitedExecution
          (UGameplayTask_TimeLimitedExecution *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  pvVar1 = *(void **)&(this->OnTimeExpired).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTimeExpired);
  pvVar1 = *(void **)&(this->OnFinished).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFinished);
  this->_padding_ = (longlong)&UGameplayTask::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UGameplayTask::_vftable__for__IGameplayTaskOwnerInterface__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IGameplayTaskOwnerInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Activate @ 146ceec30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameplayTask_TimeLimitedExecution::Activate(UGameplayTask_TimeLimitedExecution *this)

{
  UWorld *this_00;
  FTimerManager *this_01;
  UObject *pUVar1;
  FTimerHandle local_res8;
  FName local_res10;
  FString local_38;
  FString local_28 [2];
  
  if (this->_padding_ == 0) {
    UGameplayTask::EndTask((UGameplayTask *)this);
    return;
  }
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  this->TimeStarted = this_00->TimeSeconds;
  local_res8.Handle = 0;
  this_01 = UWorld::GetTimerManager(this_00);
  local_28[0].Data._8_8_ = (ulonglong)(uint)local_28[0].Data.ArrayMax << 0x20;
  local_28[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)OnTimer;
  FTimerManager::SetTimer<UGameplayTask_TimeLimitedExecution>
            (this_01,&local_res8,this,(pmf_628d0a52 *)local_28,(float)this->Time,false,
             __real_bf800000);
  if (FVisualLogger::bIsRecording != 0) {
    local_res10 = *(FName *)(this->_padding_ + 0x18);
    ::FName::ToString(&local_res10,local_28);
    local_res10 = (FName)this->_padding_;
    ::FName::ToString(&local_res10,&local_38);
    pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    FVisualLogger::CategorizedLogfImpl
              (pUVar1,(FName *)&LogGameplayTasks.field_0x4,Verbose,
               L"%s> started timeout: %.2fs for task:%s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
  }
  if (((UGameplayTask *)this->_padding_)->TaskState != Active) {
    UGameplayTask::ReadyForActivation((UGameplayTask *)this->_padding_);
  }
  return;
}

// FTaskFinishDelegate_DelegateWrapper @ 146cf1960

void __cdecl
UGameplayTask_TimeLimitedExecution::FTaskFinishDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// GetDebugString @ 146cf2560

FString * __thiscall
UGameplayTask_TimeLimitedExecution::GetDebugString
          (UGameplayTask_TimeLimitedExecution *this,FString *__return_storage_ptr__)

{
  FName local_res8;
  FString local_38 [3];
  
  (**(code **)(this->_padding_ + 0x180))();
  if (this->_padding_ == 0) {
    ::FString::FString(local_38,L"None");
  }
  else {
    local_res8 = *(FName *)(this->_padding_ + 0x18);
    ::FName::ToString(&local_res8,local_38);
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"TimeLimit for %s. Time: %.2f. TimeLeft: %.2f");
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146cf30e0

UClass * __cdecl UGameplayTask_TimeLimitedExecution::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayTask_TimeLimitedExecution.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTasks",L"GameplayTask_TimeLimitedExecution",
               &Z_Registration_Info_UClass_UGameplayTask_TimeLimitedExecution.InnerSingleton,
               StaticRegisterNativesUGameplayTask_TimeLimitedExecution,0xc0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<UGameplayTask_TimeLimitedExecution>,
               InternalVTableHelperCtorCaller<UGameplayTask_TimeLimitedExecution>,local_res8,
               UGameplayTask::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayTask_TimeLimitedExecution.InnerSingleton;
}

// LimitExecutionTime @ 146cf4410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGameplayTask_TimeLimitedExecution * __cdecl
UGameplayTask_TimeLimitedExecution::LimitExecutionTime
          (IGameplayTaskOwnerInterface *param_1,float param_2,uchar param_3,FName param_4)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UGameplayTask_TimeLimitedExecution *this;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (0.0 < param_2) {
    pUVar1 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar2);
    local_a8._8_8_ = pUVar1;
    this = (UGameplayTask_TimeLimitedExecution *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar3 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar3 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    if (this != (UGameplayTask_TimeLimitedExecution *)0x0) {
      *(FName *)&this->_padding_ = param_4;
      UGameplayTask::InitTask((UGameplayTask *)this,param_1,param_3);
      this->Time = (double)param_2;
    }
  }
  else {
    this = (UGameplayTask_TimeLimitedExecution *)0x0;
  }
  return this;
}

// OnGameplayTaskActivated @ 146cf4790

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UGameplayTask_TimeLimitedExecution::OnGameplayTaskActivated
          (UGameplayTask_TimeLimitedExecution *this,UGameplayTask *param_1)

{
  int *piVar1;
  TArray<FGameplayTaskEventData,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UGameplayTasksComponent *this_00;
  undefined1 *this_01;
  FName FStackX_8;
  FScriptContainerElement FStack_28;
  undefined7 uStack_27;
  undefined1 *puStack_20;
  FString FStack_18;
  
  this_01 = &this[-1].OnTimeExpired.field_0x8;
  if (*(char *)((longlong)&this->_padding_ + 1) == '\x03') {
    return;
  }
  this_00 = (UGameplayTasksComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (this_00 == (UGameplayTasksComponent *)0x0) {
    UGameplayTask::EndTask((UGameplayTask *)this_01);
  }
  else {
    if ((((this->_padding_ & 0x1000000000) == 0) && ((short)this->_padding_ == 0)) &&
       (*(short *)((longlong)&this->_padding_ + 2) == 0)) {
      UGameplayTask::PerformActivation((UGameplayTask *)this_01);
      return;
    }
    if (FVisualLogger::bIsRecording != 0) {
      FStackX_8 = (FName)this[-1].TimeStarted;
      ::FName::ToString(&FStackX_8,&FStack_18);
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this_00,(FName *)&LogGameplayTasks.field_0x4,Log,
                 L"AddTaskReadyForActivation %s");
      if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
      }
    }
    if ((((this->_padding_ & 0x1000000000) == 0) && ((short)this->_padding_ == 0)) &&
       ((*(short *)((longlong)&this->_padding_ + 2) == 0 &&
        (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<3689787317158936915>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTasks\\Private\\GameplayTasksComponent.cpp"
                            ,0x153,"NewTask.RequiresPriorityOrResourceManagement() == true"), bVar5)
        ))) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar2 = &this_00->TaskEvents;
    FStack_28 = (FScriptContainerElement)0x0;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    puStack_20 = this_01;
    if (((pFVar3 <= &FStack_28) &&
        (&FStack_28 < pFVar3 + (longlong)(this_00->TaskEvents).ArrayMax * 0x10)) &&
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
    iVar6 = (this_00->TaskEvents).ArrayNum;
    piVar1 = &(this_00->TaskEvents).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,piVar1);
    }
    (this_00->TaskEvents).ArrayNum = iVar6 + 1;
    pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
    *(ulonglong *)pFVar3 = CONCAT71(uStack_27,FStack_28);
    *(undefined1 **)(pFVar3 + 8) = puStack_20;
    if ((((this_00->TaskEvents).ArrayNum == 1) && (this_00->bInEventProcessingInProgress == 0)) &&
       (this_00->EventLockCounter == 0)) {
      UGameplayTasksComponent::ProcessTaskEvents(this_00);
      return;
    }
  }
  return;
}

// OnGameplayTaskDeactivated @ 146cf4d70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UGameplayTask_TimeLimitedExecution::OnGameplayTaskDeactivated
          (UGameplayTask_TimeLimitedExecution *this,UGameplayTask *param_1)

{
  UObject *pUVar1;
  bool bVar2;
  FName local_res8;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if ((UGameplayTask *)this->_padding_ == (UGameplayTask *)0x0) {
    bVar2 = param_1 == (UGameplayTask *)0x0;
  }
  else {
    bVar2 = (UGameplayTask *)this->_padding_ == param_1;
  }
  if (bVar2) {
    if (FVisualLogger::bIsRecording != 0) {
      UGameplayTask::GetTaskStateName(param_1,&local_28);
      local_res8 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res8,&local_38);
      local_res8 = (FName)this[-1].TimeStarted;
      ::FName::ToString(&local_res8,&local_48);
      pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      FVisualLogger::CategorizedLogfImpl
                (pUVar1,(FName *)&LogGameplayTasks.field_0x4,Verbose,
                 L"%s> Child task deactivated: %s (state: %s)");
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    bVar2 = param_1->TaskState == Finished;
    if (!bVar2) goto LAB_146cf4eb9;
    this->_padding_ = 0;
  }
  bVar2 = param_1->TaskState == Finished;
LAB_146cf4eb9:
  if (bVar2) {
    if ((*(byte *)&this->OnTimeExpired & 3) == 0) {
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_,
                 (void *)0x0);
    }
    *(uint *)&this->OnTimeExpired = *(uint *)&this->OnTimeExpired | 2;
    UGameplayTask::EndTask((UGameplayTask *)&this[-1].OnTimeExpired.field_0x8);
  }
  return;
}

// OnTimer @ 146cf5b20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UGameplayTask_TimeLimitedExecution::OnTimer(UGameplayTask_TimeLimitedExecution *this)

{
  UObject *pUVar1;
  FName local_res8;
  FString local_18;
  
  if (this->bTimeExpired == 0 && this->bChildTaskFinished == 0) {
    if (FVisualLogger::bIsRecording != 0) {
      local_res8 = (FName)this->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      FVisualLogger::CategorizedLogfImpl
                (pUVar1,(FName *)&LogGameplayTasks.field_0x4,Verbose,L"%s> time expired!");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnTimeExpired,
               (void *)0x0);
  }
  this->bTimeExpired = 1;
  UGameplayTask::EndTask((UGameplayTask *)this);
  return;
}

// StaticRegisterNativesUGameplayTask_TimeLimitedExecution @ 146cf7cf0

void __cdecl
UGameplayTask_TimeLimitedExecution::StaticRegisterNativesUGameplayTask_TimeLimitedExecution(void)

{
  return;
}

