// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTasks
// Functions: 55

// StaticClass @ 146cea970

UClass * __cdecl UGameplayTask::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayTask.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTasks",L"GameplayTask",
               &Z_Registration_Info_UClass_UGameplayTask.InnerSingleton,
               StaticRegisterNativesUGameplayTask,0x78,8,CLASS_Intrinsic|CLASS_Config|CLASS_Abstract
               ,CASTCLASS_None,L"Game",InternalConstructor<UGameplayTask>,
               InternalVTableHelperCtorCaller<UGameplayTask>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayTask.InnerSingleton;
}

// NewTaskUninitialized<UGameplayTask_ClaimResource> @ 146cecb20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGameplayTask_ClaimResource * __cdecl
UGameplayTask::NewTaskUninitialized<UGameplayTask_ClaimResource>(void)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UGameplayTask_ClaimResource *pUVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = UGameplayTask_ClaimResource::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  pUVar3 = (UGameplayTask_ClaimResource *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return pUVar3;
}

// NewTaskUninitialized<UGameplayTask_WaitDelay> @ 146cecbc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGameplayTask_WaitDelay * __cdecl UGameplayTask::NewTaskUninitialized<UGameplayTask_WaitDelay>(void)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UGameplayTask_WaitDelay *pUVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = UGameplayTask_WaitDelay::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  pUVar3 = (UGameplayTask_WaitDelay *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return pUVar3;
}

// UGameplayTask @ 146ced860

UGameplayTask * __thiscall UGameplayTask::UGameplayTask(UGameplayTask *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->InstanceName).ComparisonIndex = 0;
  (this->InstanceName).Number = 0;
  this->RequiredResources = 0;
  this->ClaimedResources = 0;
  (this->TaskOwner).ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
  (this->TaskOwner).InterfaceInstance = (IGameplayTaskOwnerInterface *)0x0;
  (this->TasksComponent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ChildTask).field0_0x0.DebugPtr = (UGameplayTask *)0x0;
  (this->DebugDescription).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugDescription).Data.ArrayNum = 0;
  (this->DebugDescription).Data.ArrayMax = 0;
  return this;
}

// UGameplayTask @ 146ced8c0

UGameplayTask * __thiscall
UGameplayTask::UGameplayTask(UGameplayTask *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  UObject::UObject((UObject *)this,param_1);
  this->TaskState = Uninitialized;
  this->ResourceOverlapPolicy = StartOnTop;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->Priority = '\x7f';
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->InstanceName).ComparisonIndex = 0;
  (this->InstanceName).Number = 0;
  this->RequiredResources = 0;
  this->ClaimedResources = 0;
  (this->TaskOwner).ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
  (this->TaskOwner).InterfaceInstance = (IGameplayTaskOwnerInterface *)0x0;
  (this->TasksComponent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ChildTask).field0_0x0.DebugPtr = (UGameplayTask *)0x0;
  (this->DebugDescription).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugDescription).Data.ArrayNum = 0;
  (this->DebugDescription).Data.ArrayMax = 0;
  puVar2 = &this->field_0x3c;
  this->bTickingTask = 0;
  this->bOwnerFinished = 0;
  this->bClaimRequiredResources = 1;
  this->bOwnedByTasksComponent = 0;
  this->bIsSimulating = 0;
  this->bSimulatedTask = 0;
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_StrongRefOnFrame);
  return this;
}

// ~UGameplayTask @ 146cee090

void __thiscall UGameplayTask::~UGameplayTask(UGameplayTask *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  pFVar1 = (this->DebugDescription).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IGameplayTaskOwnerInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Activate @ 146ceeb60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UGameplayTask::Activate(UGameplayTask *this)

{
  UObject *pUVar1;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  if (FVisualLogger::bIsRecording != 0) {
    GetTaskStateName(this,&local_18);
    local_res10 = (FName)this->_padding_;
    ::FName::ToString(&local_res10,&local_28);
    pUVar1 = FWeakObjectPtr::Get(&(this->TasksComponent).WeakPtr);
    FVisualLogger::CategorizedLogfImpl
              (pUVar1,(FName *)&LogGameplayTasks.field_0x4,Verbose,
               L"%s Activate called, current State: %s");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ActivateInTaskQueue @ 146ceeed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UGameplayTask::ActivateInTaskQueue(UGameplayTask *this)

{
  EGameplayTaskState EVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  FName local_res8;
  FString local_18;
  
  EVar1 = this->TaskState;
  if (EVar1 == Uninitialized) {
    if (FVisualLogger::bIsRecording != 0) {
      local_res8 = (FName)this->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      pUVar4 = FWeakObjectPtr::Get(&(this->TasksComponent).WeakPtr);
      FVisualLogger::CategorizedLogfImpl
                (pUVar4,(FName *)&LogGameplayTasks.field_0x4,Error,
                 L"UGameplayTask::ActivateInTaskQueue Task %s passed for activation withouth having InitTask called on it!"
                );
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    if (EVar1 == AwaitingActivation) {
LAB_146ceef46:
      PerformActivation(this);
      return;
    }
    if (EVar1 == Paused) {
                    /* WARNING: Could not recover jumptable at 0x000146ceef3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 0x300))();
      return;
    }
    if (EVar1 != Active) {
      if (EVar1 == Finished) goto LAB_146ceef46;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTasks\\Private\\GameplayTask.cpp"
                         ,0x168,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

// AddClaimedResource @ 146cef180

void __thiscall
UGameplayTask::AddClaimedResource(UGameplayTask *this,TSubclassOf<UGameplayTaskResource> param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  UClass *pUVar6;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 != 0) {
    pUVar6 = UGameplayTaskResource::StaticClass();
    if (pUVar6 != (UClass *)0x0) {
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (*(longlong *)param_1.Class.field0_0x0 != 0)) goto LAB_146cef1f7;
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("ClaimedResource",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTasks\\Private\\GameplayTask.cpp"
                     ,0xfe,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_146cef1f7:
  bVar5 = UGameplayTaskResource::GetResourceID
                    ((TSubclassOf<UGameplayTaskResource> *)param_1.Class.field0_0x0);
  if (0xf < bVar5) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_27176809292365749>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTasks\\Classes\\GameplayTask.h"
                       ,0x4b,"ResourceID < MaxResources");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (this->ClaimedResources).Flags = (this->ClaimedResources).Flags | (ushort)(1 << (bVar5 & 0x1f));
  return;
}

// AddClaimedResourceSet @ 146cef260

void __thiscall
UGameplayTask::AddClaimedResourceSet
          (UGameplayTask *this,
          TArray<TSubclassOf<UGameplayTaskResource>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UGameplayTaskResource *this_00;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  byte bVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [8];
  
  pFVar10 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar10 + (longlong)iVar2 * 8;
  do {
    if (param_1->ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TSubclassOf<UGameplayTaskResource>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar10 == pFVar1) {
      return;
    }
    pUVar9 = *(UClass **)pFVar10;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar9 != (UClass *)0x0) goto LAB_146cef2d6;
    }
    else if (pUVar9 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
LAB_146cef2d6:
      pUVar8 = UGameplayTaskResource::StaticClass();
      if (pUVar8 != (UClass *)0x0) {
        iVar3 = (int)pUVar8->_padding_;
        if (((int)pUVar9->_padding_ < iVar3) ||
           ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar3 * 8) !=
            &pUVar8->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          pUVar8 = UGameplayTaskResource::StaticClass();
          if (pUVar8 == (UClass *)0x0) {
LAB_146cef33a:
            pUVar9 = (UClass *)0x0;
          }
          else {
            iVar3 = (int)pUVar8->_padding_;
            if (((int)pUVar9->_padding_ < iVar3) ||
               ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar3 * 8) !=
                &pUVar8->_padding_)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (!bVar6) goto LAB_146cef33a;
          }
          if ((pUVar9->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
            UClass::InternalCreateDefaultObjectWrapper(pUVar9);
          }
          this_00 = (UGameplayTaskResource *)(pUVar9->ClassDefaultObject).field0_0x0.DebugPtr;
          pUVar9 = UGameplayTaskResource::StaticClass();
          lVar4 = this_00->_padding_;
          iVar3 = (int)pUVar9->_padding_;
          if ((*(int *)(lVar4 + 0x38) < iVar3) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
              &pUVar9->_padding_)) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ret->IsA(T::StaticClass())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0x1181,L"");
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          bVar7 = UGameplayTaskResource::GetResourceID(this_00);
          if (0xf < bVar7) {
            bVar6 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_27176809292365749>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTasks\\Classes\\GameplayTask.h"
                               ,0x4b,"ResourceID < MaxResources");
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          (this->ClaimedResources).Flags =
               (this->ClaimedResources).Flags | (ushort)(1 << (bVar7 & 0x1f));
        }
      }
    }
    pFVar10 = pFVar10 + 8;
  } while( true );
}

// AddClaimedResourceSet @ 146cef410

void __thiscall
UGameplayTask::AddClaimedResourceSet(UGameplayTask *this,FGameplayResourceSet param_1)

{
  (this->ClaimedResources).Flags = (this->ClaimedResources).Flags | param_1.Flags;
  return;
}

// AddRequiredResource @ 146cef420

void __thiscall
UGameplayTask::AddRequiredResource(UGameplayTask *this,TSubclassOf<UGameplayTaskResource> param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  UClass *pUVar6;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 != 0) {
    pUVar6 = UGameplayTaskResource::StaticClass();
    if (pUVar6 != (UClass *)0x0) {
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (*(longlong *)param_1.Class.field0_0x0 != 0)) goto LAB_146cef497;
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("RequiredResource",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTasks\\Private\\GameplayTask.cpp"
                     ,0xe6,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_146cef497:
  bVar5 = UGameplayTaskResource::GetResourceID
                    ((TSubclassOf<UGameplayTaskResource> *)param_1.Class.field0_0x0);
  if (0xf < bVar5) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_27176809292365749>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTasks\\Classes\\GameplayTask.h"
                       ,0x4b,"ResourceID < MaxResources");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (this->RequiredResources).Flags = (this->RequiredResources).Flags | (ushort)(1 << (bVar5 & 0x1f));
  return;
}

// AddRequiredResourceSet @ 146cef500

void __thiscall
UGameplayTask::AddRequiredResourceSet
          (UGameplayTask *this,
          TArray<TSubclassOf<UGameplayTaskResource>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UGameplayTaskResource *this_00;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  byte bVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [8];
  
  pFVar10 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar10 + (longlong)iVar2 * 8;
  do {
    if (param_1->ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TSubclassOf<UGameplayTaskResource>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar10 == pFVar1) {
      return;
    }
    pUVar9 = *(UClass **)pFVar10;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar9 != (UClass *)0x0) goto LAB_146cef576;
    }
    else if (pUVar9 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
LAB_146cef576:
      pUVar8 = UGameplayTaskResource::StaticClass();
      if (pUVar8 != (UClass *)0x0) {
        iVar3 = (int)pUVar8->_padding_;
        if (((int)pUVar9->_padding_ < iVar3) ||
           ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar3 * 8) !=
            &pUVar8->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          pUVar8 = UGameplayTaskResource::StaticClass();
          if (pUVar8 == (UClass *)0x0) {
LAB_146cef5da:
            pUVar9 = (UClass *)0x0;
          }
          else {
            iVar3 = (int)pUVar8->_padding_;
            if (((int)pUVar9->_padding_ < iVar3) ||
               ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar3 * 8) !=
                &pUVar8->_padding_)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (!bVar6) goto LAB_146cef5da;
          }
          if ((pUVar9->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
            UClass::InternalCreateDefaultObjectWrapper(pUVar9);
          }
          this_00 = (UGameplayTaskResource *)(pUVar9->ClassDefaultObject).field0_0x0.DebugPtr;
          pUVar9 = UGameplayTaskResource::StaticClass();
          lVar4 = this_00->_padding_;
          iVar3 = (int)pUVar9->_padding_;
          if ((*(int *)(lVar4 + 0x38) < iVar3) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
              &pUVar9->_padding_)) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ret->IsA(T::StaticClass())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0x1181,L"");
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          bVar7 = UGameplayTaskResource::GetResourceID(this_00);
          if (0xf < bVar7) {
            bVar6 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_27176809292365749>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTasks\\Classes\\GameplayTask.h"
                               ,0x4b,"ResourceID < MaxResources");
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          (this->RequiredResources).Flags =
               (this->RequiredResources).Flags | (ushort)(1 << (bVar7 & 0x1f));
        }
      }
    }
    pFVar10 = pFVar10 + 8;
  } while( true );
}

// AddRequiredResourceSet @ 146cef6b0

void __thiscall
UGameplayTask::AddRequiredResourceSet(UGameplayTask *this,FGameplayResourceSet param_1)

{
  (this->RequiredResources).Flags = (this->RequiredResources).Flags | param_1.Flags;
  return;
}

// ConvertToTaskOwner @ 146cf0480

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

IGameplayTaskOwnerInterface * __cdecl UGameplayTask::ConvertToTaskOwner(AActor *param_1)

{
  code *pcVar1;
  UClass *pUVar2;
  IGameplayTaskOwnerInterface *pIVar3;
  longlong lVar4;
  UClass *local_res8;
  
  if (param_1 != (AActor *)0x0) {
    pUVar2 = Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister();
    pIVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar2);
    if (pIVar3 != (IGameplayTaskOwnerInterface *)0x0) {
      return pIVar3;
    }
  }
  pcVar1 = *(code **)(param_1->_padding_ + 0x738);
  local_res8 = UGameplayTasksComponent::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  lVar4 = (*pcVar1)(param_1,&local_res8);
  if (lVar4 == 0) {
    return (IGameplayTaskOwnerInterface *)0x0;
  }
  return (IGameplayTaskOwnerInterface *)(lVar4 + 0xc0);
}

// ConvertToTaskOwner @ 146cf0500

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

IGameplayTaskOwnerInterface * __cdecl UGameplayTask::ConvertToTaskOwner(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  IGameplayTaskOwnerInterface *pIVar3;
  UGameplayTasksComponent *pUVar4;
  
  if (param_1 == (UObject *)0x0) {
    return (IGameplayTaskOwnerInterface *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister();
  pIVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar2);
  if (pIVar3 == (IGameplayTaskOwnerInterface *)0x0) {
    pUVar2 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar2->_padding_)) {
      return (IGameplayTaskOwnerInterface *)0x0;
    }
    pUVar4 = AActor::FindComponentByClass<UGameplayTasksComponent>((AActor *)param_1);
    if (pUVar4 == (UGameplayTasksComponent *)0x0) {
      return (IGameplayTaskOwnerInterface *)0x0;
    }
    pIVar3 = (IGameplayTaskOwnerInterface *)&pUVar4->_padding_;
  }
  return pIVar3;
}

// EndTask @ 146cf1400

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UGameplayTask::EndTask(UGameplayTask *this)

{
  UObject *pUVar1;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  if (FVisualLogger::bIsRecording != 0) {
    GetTaskStateName(this,&local_18);
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_28);
    pUVar1 = FWeakObjectPtr::Get(&(this->TasksComponent).WeakPtr);
    FVisualLogger::CategorizedLogfImpl
              (pUVar1,(FName *)&LogGameplayTasks.field_0x4,Verbose,
               L"%s EndTask called, current State: %s");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (this->TaskState != Finished) {
    if (((uint)this->_padding_ >> 0x1e & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146cf14d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 0x2f0))(this,0);
      return;
    }
    this->TaskState = Finished;
  }
  return;
}

// ExternalCancel @ 146cf1710

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UGameplayTask::ExternalCancel(UGameplayTask *this)

{
  UObject *pUVar1;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  if (FVisualLogger::bIsRecording != 0) {
    GetTaskStateName(this,&local_18);
    local_res10 = (FName)this->_padding_;
    ::FName::ToString(&local_res10,&local_28);
    pUVar1 = FWeakObjectPtr::Get(&(this->TasksComponent).WeakPtr);
    FVisualLogger::CategorizedLogfImpl
              (pUVar1,(FName *)&LogGameplayTasks.field_0x4,Verbose,
               L"%s ExternalCancel called, current State: %s");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  EndTask(this);
  return;
}

// ExternalConfirm @ 146cf17e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UGameplayTask::ExternalConfirm(UGameplayTask *this,bool param_1)

{
  UObject *pUVar1;
  FName local_res18;
  FString local_28;
  FString local_18;
  
  if (FVisualLogger::bIsRecording != 0) {
    GetTaskStateName(this,&local_18);
    local_res18 = (FName)this->_padding_;
    ::FName::ToString(&local_res18,&local_28);
    pUVar1 = FWeakObjectPtr::Get(&(this->TasksComponent).WeakPtr);
    FVisualLogger::CategorizedLogfImpl
              (pUVar1,(FName *)&LogGameplayTasks.field_0x4,Verbose,
               L"%s ExternalConfirm called, bEndTask = %s, State : %s");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (param_1) {
    EndTask(this);
    return;
  }
  return;
}

// FGenericGameplayTaskDelegate_DelegateWrapper @ 146cf1910

void __cdecl
UGameplayTask::FGenericGameplayTaskDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// GenerateDebugDescription @ 146cf1e80

FString * __thiscall
UGameplayTask::GenerateDebugDescription(UGameplayTask *this,FString *__return_storage_ptr__)

{
  IGameplayTaskOwnerInterface *pIVar1;
  longlong lVar2;
  FString *pFVar3;
  longlong lVar4;
  FName local_res8;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  lVar4 = 0;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  if (((this->bCaresAboutPriority == 0) && ((this->RequiredResources).Flags == 0)) &&
     ((this->ClaimedResources).Flags == 0)) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  pIVar1 = GetTaskOwner(this);
  if ((pIVar1 == (IGameplayTaskOwnerInterface *)0x0) ||
     (lVar2 = (**(code **)((longlong)*pIVar1 + 8))(pIVar1), lVar2 == 0)) {
    lVar2 = lVar4;
  }
  FGameplayResourceSet::GetDebugDescription(&this->RequiredResources,&local_38);
  if (lVar2 == 0) {
    ::FString::FString(&local_68,L"None");
  }
  else {
    local_res8 = *(FName *)(lVar2 + 0x18);
    ::FName::ToString(&local_res8,&local_68);
  }
  if (this->InstanceName != (FName)0x0) {
    pFVar3 = ::FName::ToString(&this->InstanceName,&local_48);
    if ((pFVar3->Data).ArrayNum == 0) {
      lVar4 = 1;
    }
    else {
      lVar4 = 1;
    }
  }
  local_res8 = (FName)this->_padding_;
  ::FName::ToString(&local_res8,&local_58);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s:%s Pri:%d Owner:%s Res:%s");
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((lVar4 != 0) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAvatarActor @ 146cf2190

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall UGameplayTask::GetAvatarActor(UGameplayTask *this)

{
  IGameplayTaskOwnerInterface *pIVar1;
  code *pcVar2;
  bool bVar3;
  AActor *pAVar4;
  UObject *pUVar5;
  
  if ((this->TaskOwner).InterfaceInstance == (IGameplayTaskOwnerInterface *)0x0) {
LAB_146cf2203:
    pUVar5 = FWeakObjectPtr::Get(&(this->TasksComponent).WeakPtr);
    if (pUVar5 != (UObject *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146cf2228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pAVar4 = (AActor *)
               (**(code **)(*(longlong *)&pUVar5[4].field_0x20 + 0x20))(&pUVar5[4].field_0x20,this);
      return pAVar4;
    }
    return (AActor *)0x0;
  }
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->TaskOwner);
  if (!bVar3) goto LAB_146cf2203;
  if ((this->TaskOwner).InterfaceInstance != (IGameplayTaskOwnerInterface *)0x0) {
    bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->TaskOwner);
    if (bVar3) goto LAB_146cf21eb;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                     ,0x8d,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pAVar4 = (AActor *)(*pcVar2)();
    return pAVar4;
  }
LAB_146cf21eb:
  pIVar1 = (this->TaskOwner).InterfaceInstance;
                    /* WARNING: Could not recover jumptable at 0x000146cf21ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar4 = (AActor *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,this);
  return pAVar4;
}

// GetDebugDescription @ 146cf2420

FString * __thiscall UGameplayTask::GetDebugDescription(UGameplayTask *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  void *local_18 [2];
  
  pFVar1 = &this->DebugDescription;
  if ((this->DebugDescription).Data.ArrayNum < 2) {
    puVar3 = (undefined8 *)(**(code **)(this->_padding_ + 0x308))(this,local_18);
    if (pFVar1 != (FString *)puVar3) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar3;
      *puVar3 = 0;
      (this->DebugDescription).Data.ArrayNum = *(int *)(puVar3 + 1);
      (this->DebugDescription).Data.ArrayMax = *(int *)((longlong)puVar3 + 0xc);
      puVar3[1] = 0;
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  return pFVar1;
}

// GetDebugString @ 146cf24a0

FString * __thiscall
UGameplayTask::GetDebugString(UGameplayTask *this,FString *__return_storage_ptr__)

{
  FName local_res8;
  FString local_28;
  FString local_18;
  
  ::FName::ToString(&this->InstanceName,&local_18);
  local_res8 = (FName)this->_padding_;
  ::FName::ToString(&local_res8,&local_28);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s (%s)");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetGameplayTaskAvatar @ 146cf26c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall UGameplayTask::GetGameplayTaskAvatar(UGameplayTask *this,UGameplayTask *param_1)

{
  IGameplayTaskOwnerInterface **ppIVar1;
  longlong *plVar2;
  code *pcVar3;
  AActor *pAVar4;
  UObject *pUVar5;
  bool bVar6;
  
  if (*(UGameplayTask **)&this->Priority == (UGameplayTask *)0x0) {
    bVar6 = param_1 == (UGameplayTask *)0x0;
  }
  else {
    bVar6 = *(UGameplayTask **)&this->Priority == param_1;
  }
  ppIVar1 = &this[-1].TaskOwner.InterfaceInstance;
  if ((!bVar6) && (param_1 != (UGameplayTask *)ppIVar1)) {
    return (AActor *)0x0;
  }
  if ((this->_padding_ == 0) ||
     (bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_), !bVar6)) {
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->InstanceName);
    if (pUVar5 == (UObject *)0x0) {
      return (AActor *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x000146cf27b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pAVar4 = (AActor *)
             (**(code **)(*(longlong *)&pUVar5[4].field_0x20 + 0x20))(&pUVar5[4].field_0x20,ppIVar1)
    ;
    return pAVar4;
  }
  if (((this->_padding_ == 0) ||
      (bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_), !bVar6)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                         ,0x8d,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pAVar4 = (AActor *)(*pcVar3)();
    return pAVar4;
  }
  plVar2 = (longlong *)this->_padding_;
                    /* WARNING: Could not recover jumptable at 0x000146cf2781. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar4 = (AActor *)(**(code **)(*plVar2 + 0x20))(plVar2,ppIVar1);
  return pAVar4;
}

// GetGameplayTaskDefaultPriority @ 146cf2800

uchar __thiscall UGameplayTask::GetGameplayTaskDefaultPriority(UGameplayTask *this)

{
  return (uchar)this->_padding_;
}

// GetGameplayTaskOwner @ 146cf2840

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall UGameplayTask::GetGameplayTaskOwner(UGameplayTask *this,UGameplayTask *param_1)

{
  IGameplayTaskOwnerInterface **ppIVar1;
  longlong *plVar2;
  code *pcVar3;
  AActor *pAVar4;
  UObject *pUVar5;
  bool bVar6;
  
  if (*(UGameplayTask **)&this->Priority == (UGameplayTask *)0x0) {
    bVar6 = param_1 == (UGameplayTask *)0x0;
  }
  else {
    bVar6 = *(UGameplayTask **)&this->Priority == param_1;
  }
  ppIVar1 = &this[-1].TaskOwner.InterfaceInstance;
  if ((!bVar6) && (param_1 != (UGameplayTask *)ppIVar1)) {
    return (AActor *)0x0;
  }
  if ((this->_padding_ == 0) ||
     (bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_), !bVar6)) {
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->InstanceName);
    if (pUVar5 == (UObject *)0x0) {
      return (AActor *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x000146cf2933. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pAVar4 = (AActor *)
             (**(code **)(*(longlong *)&pUVar5[4].field_0x20 + 0x18))(&pUVar5[4].field_0x20,ppIVar1)
    ;
    return pAVar4;
  }
  if (((this->_padding_ == 0) ||
      (bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_), !bVar6)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                         ,0x8d,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pAVar4 = (AActor *)(*pcVar3)();
    return pAVar4;
  }
  plVar2 = (longlong *)this->_padding_;
                    /* WARNING: Could not recover jumptable at 0x000146cf2901. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar4 = (AActor *)(**(code **)(*plVar2 + 0x18))(plVar2,ppIVar1);
  return pAVar4;
}

// GetGameplayTasksComponent @ 146cf29a0

UGameplayTasksComponent * __thiscall
UGameplayTask::GetGameplayTasksComponent(UGameplayTask *this,UGameplayTask *param_1)

{
  UGameplayTasksComponent *pUVar1;
  bool bVar2;
  
  if (*(UGameplayTask **)&this->Priority == (UGameplayTask *)0x0) {
    bVar2 = param_1 == (UGameplayTask *)0x0;
  }
  else {
    bVar2 = *(UGameplayTask **)&this->Priority == param_1;
  }
  if ((!bVar2) && (param_1 != (UGameplayTask *)&this[-1].TaskOwner.InterfaceInstance)) {
    return (UGameplayTasksComponent *)0x0;
  }
  pUVar1 = (UGameplayTasksComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->InstanceName);
  return pUVar1;
}

// GetOwnerActor @ 146cf2c70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall UGameplayTask::GetOwnerActor(UGameplayTask *this)

{
  IGameplayTaskOwnerInterface *pIVar1;
  code *pcVar2;
  bool bVar3;
  AActor *pAVar4;
  UObject *pUVar5;
  
  if ((this->TaskOwner).InterfaceInstance == (IGameplayTaskOwnerInterface *)0x0) {
LAB_146cf2ce3:
    pUVar5 = FWeakObjectPtr::Get(&(this->TasksComponent).WeakPtr);
    if (pUVar5 != (UObject *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146cf2d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pAVar4 = (AActor *)
               (**(code **)(*(longlong *)&pUVar5[4].field_0x20 + 0x18))(&pUVar5[4].field_0x20,this);
      return pAVar4;
    }
    return (AActor *)0x0;
  }
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->TaskOwner);
  if (!bVar3) goto LAB_146cf2ce3;
  if ((this->TaskOwner).InterfaceInstance != (IGameplayTaskOwnerInterface *)0x0) {
    bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->TaskOwner);
    if (bVar3) goto LAB_146cf2ccb;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                     ,0x8d,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pAVar4 = (AActor *)(*pcVar2)();
    return pAVar4;
  }
LAB_146cf2ccb:
  pIVar1 = (this->TaskOwner).InterfaceInstance;
                    /* WARNING: Could not recover jumptable at 0x000146cf2cdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar4 = (AActor *)(**(code **)((longlong)*pIVar1 + 0x18))(pIVar1,this);
  return pAVar4;
}

// GetPrivateStaticClass @ 146cf2d40

UClass * __cdecl UGameplayTask::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayTask.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTasks",L"GameplayTask",
               &Z_Registration_Info_UClass_UGameplayTask.InnerSingleton,
               StaticRegisterNativesUGameplayTask,0x78,8,CLASS_Intrinsic|CLASS_Config|CLASS_Abstract
               ,CASTCLASS_None,L"Game",InternalConstructor<UGameplayTask>,
               InternalVTableHelperCtorCaller<UGameplayTask>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayTask.InnerSingleton;
}

// GetTaskOwner @ 146cf34a0

IGameplayTaskOwnerInterface * __thiscall UGameplayTask::GetTaskOwner(UGameplayTask *this)

{
  code *pcVar1;
  bool bVar2;
  IGameplayTaskOwnerInterface *pIVar3;
  
  if ((this->TaskOwner).InterfaceInstance == (IGameplayTaskOwnerInterface *)0x0) {
    return (IGameplayTaskOwnerInterface *)0x0;
  }
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->TaskOwner);
  if (bVar2) {
    if ((((this->TaskOwner).InterfaceInstance == (IGameplayTaskOwnerInterface *)0x0) ||
        (bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->TaskOwner), !bVar2)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                           ,0x84,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IGameplayTaskOwnerInterface *)(*pcVar1)();
      return pIVar3;
    }
    return (this->TaskOwner).InterfaceInstance;
  }
  return (IGameplayTaskOwnerInterface *)0x0;
}

// GetTaskStateName @ 146cf3510

FString * __thiscall
UGameplayTask::GetTaskStateName(UGameplayTask *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  UPackage *pUVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (Z_Registration_Info_UEnum_EGameplayTaskState.OuterSingleton == (UEnum *)0x0) {
        pUVar4 = Z_Construct_UPackage__Script_GameplayTasks();
        Z_Registration_Info_UEnum_EGameplayTaskState.OuterSingleton =
             GetStaticEnum(Z_Construct_UEnum_GameplayTasks_EGameplayTaskState,(UObject *)pUVar4,
                           L"EGameplayTaskState");
      }
      Enum = Z_Registration_Info_UEnum_EGameplayTaskState.OuterSingleton;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (Enum == (UEnum *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Enum",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTasks\\Private\\GameplayTask.cpp"
                       ,0x1a2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  UEnum::GetNameStringByValue(Enum,__return_storage_ptr__,(ulonglong)this->TaskState);
  return __return_storage_ptr__;
}

// GetWorld @ 146cf3aa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UGameplayTask::GetWorld(UGameplayTask *this)

{
  UActorComponent *this_00;
  UWorld *pUVar1;
  
  this_00 = (UActorComponent *)FWeakObjectPtr::Get(&(this->TasksComponent).WeakPtr);
  pUVar1 = (UWorld *)0x0;
  if ((this_00 != (UActorComponent *)0x0) &&
     (pUVar1 = this_00->WorldPrivate, pUVar1 == (UWorld *)0x0)) {
    pUVar1 = UActorComponent::GetWorld_Uncached(this_00);
    return pUVar1;
  }
  return pUVar1;
}

// InitSimulatedTask @ 146cf3cc0

void __thiscall
UGameplayTask::InitSimulatedTask(UGameplayTask *this,UGameplayTasksComponent *param_1)

{
  UGameplayTasksComponent *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UGameplayTasksComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->TasksComponent).WeakPtr,(FObjectPtr)local_res8);
  this->bIsSimulating = 1;
  return;
}

// InitTask @ 146cf3d10

void __thiscall
UGameplayTask::InitTask(UGameplayTask *this,IGameplayTaskOwnerInterface *param_1,uchar param_2)

{
  bool bVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  IGameplayTaskOwnerInterface *pIVar4;
  uint uVar5;
  UObject *local_res8;
  FWeakObjectPtr local_18;
  undefined8 uStack_10;
  
  uVar5 = 0;
  this->Priority = param_2;
  local_18.ObjectIndex = 0;
  local_18.ObjectSerialNumber = 0;
  uStack_10 = (IGameplayTaskOwnerInterface *)0x0;
  if (param_1 != (IGameplayTaskOwnerInterface *)0x0) {
    local_res8 = (UObject *)(**(code **)((longlong)*param_1 + 8))(param_1);
    if (local_res8 != (UObject *)0x0) goto LAB_146cf3d50;
  }
  local_res8 = (UObject *)0x0;
LAB_146cf3d50:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  FWeakObjectPtr::operator=(&local_18,(FObjectPtr)&local_res8);
  bVar1 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_18,(void *)0x0);
  pIVar4 = uStack_10;
  if (!bVar1) {
    pIVar4 = param_1;
  }
  uStack_10._0_4_ = SUB84(pIVar4,0);
  uStack_10._4_4_ = (undefined4)((ulonglong)pIVar4 >> 0x20);
  (this->TaskOwner).ObjectInstance.WeakPtr.ObjectIndex = local_18.ObjectIndex;
  (this->TaskOwner).ObjectInstance.WeakPtr.ObjectSerialNumber = local_18.ObjectSerialNumber;
  *(undefined4 *)&(this->TaskOwner).InterfaceInstance = (undefined4)uStack_10;
  *(undefined4 *)((longlong)&(this->TaskOwner).InterfaceInstance + 4) = uStack_10._4_4_;
  this->TaskState = AwaitingActivation;
  if (this->bClaimRequiredResources != 0) {
    (this->ClaimedResources).Flags =
         (this->ClaimedResources).Flags | (this->RequiredResources).Flags;
  }
  uStack_10 = pIVar4;
  (**(code **)((longlong)*param_1 + 0x30))(param_1,this);
  pUVar2 = (UObject *)(**(code **)((longlong)*param_1 + 0x10))(param_1,this);
  local_res8 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  FWeakObjectPtr::operator=(&(this->TasksComponent).WeakPtr,(FObjectPtr)&local_res8);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->TaskOwner);
  if (pUVar3 == pUVar2) {
    uVar5 = 0x20;
  }
  *(uint *)&this->field_0x3c = uVar5 | *(uint *)&this->field_0x3c & 0xffffffdf;
  if ((pUVar2 != (UObject *)0x0) && (uVar5 == 0)) {
    (**(code **)(*(longlong *)&pUVar2[4].field_0x20 + 0x30))(&pUVar2[4].field_0x20,this);
  }
  return;
}

// IsSupportedForNetworking @ 146cf3f00

bool __thiscall UGameplayTask::IsSupportedForNetworking(UGameplayTask *this)

{
  return this->bSimulatedTask;
}

// IsWaitingOnAvatar @ 146cf3f10

bool __thiscall UGameplayTask::IsWaitingOnAvatar(UGameplayTask *this)

{
  return false;
}

// IsWaitingOnRemotePlayerdata @ 146cf3f20

bool __thiscall UGameplayTask::IsWaitingOnRemotePlayerdata(UGameplayTask *this)

{
  return false;
}

// OnDestroy @ 146cf4520

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UGameplayTask::OnDestroy(UGameplayTask *this,bool param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  UObject *pUVar5;
  FString *pFVar6;
  FUObjectItem *pFVar7;
  uint uVar8;
  uint local_res8 [2];
  FName local_res18;
  FScriptContainerElement *local_58;
  int local_50;
  int local_4c;
  FString local_48;
  UGameplayTask *local_38;
  FScriptContainerElement **local_30;
  FString local_28;
  
  local_res8[0] = 0;
  if ((this == (UGameplayTask *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Test",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                         ,0x760,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((uint)this->_padding_ >> 0x1e & 1) != 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    bVar4 = `UGameplayTask::OnDestroy'::__l3::<lambda_1>::operator()(local_res8);
    if (!bVar4) goto LAB_146cf4664;
  }
  if (((this->TaskOwner).InterfaceInstance == (IGameplayTaskOwnerInterface *)0x0) ||
     (bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->TaskOwner), !bVar4)) {
    pFVar6 = ::FString::FString(&local_28,L"Invalid GameplayTask Owner");
    bVar3 = false;
    bVar4 = true;
  }
  else {
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->TaskOwner);
    local_res18.ComparisonIndex.Value = *(uint *)&pUVar5->field_0x18;
    local_res18.Number = *(uint *)&pUVar5->field_0x1c;
    ::FName::ToString(&local_res18,&local_48);
    pFVar6 = &local_48;
    bVar3 = true;
    bVar4 = false;
  }
  local_58 = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50 = (pFVar6->Data).ArrayNum;
  local_4c = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (this->TaskState == Finished) {
    local_30 = &local_58;
    local_38 = this;
    `UGameplayTask::OnDestroy'::__l5::<lambda_2>::operator()(&local_38);
  }
  if (local_58 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58);
  }
LAB_146cf4664:
  this->TaskState = Finished;
  pUVar5 = FWeakObjectPtr::Get(&(this->TasksComponent).WeakPtr);
  if (pUVar5 != (UObject *)0x0) {
    (**(code **)(*(longlong *)&pUVar5[4].field_0x20 + 0x40))(&pUVar5[4].field_0x20,this);
  }
  pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
  if ((((uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsRooted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                         ,0xb8,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_MirroredGarbage);
  pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
  do {
    lVar1 = (pFVar7->field0_0x0).FlagsAndRefCount;
    uVar8 = (uint)((ulonglong)lVar1 >> 0x20);
    if ((uVar8 >> 0x15 & 1) != 0) break;
    if (((ulonglong)pFVar7 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                );
    }
    LOCK();
    bVar4 = lVar1 == (pFVar7->field0_0x0).FlagsAndRefCount;
    if (bVar4) {
      (pFVar7->field0_0x0).FlagsAndRefCount =
           (longlong)(int)uVar8 << 0x20 | (longlong)(int)lVar1 | 0x20000000000000;
    }
    UNLOCK();
  } while (!bVar4);
  pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
  FUObjectItem::ClearRootFlags(pFVar7,Async);
  return;
}

// OnGameplayTaskDeactivated @ 146cf4c10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UGameplayTask::OnGameplayTaskDeactivated(UGameplayTask *this,UGameplayTask *param_1)

{
  UObject *pUVar1;
  bool bVar2;
  FName local_res8;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (*(UGameplayTask **)&this->Priority == (UGameplayTask *)0x0) {
    bVar2 = param_1 == (UGameplayTask *)0x0;
  }
  else {
    bVar2 = *(UGameplayTask **)&this->Priority == param_1;
  }
  if (bVar2) {
    if (FVisualLogger::bIsRecording != 0) {
      GetTaskStateName(param_1,&local_28);
      local_res8 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res8,&local_38);
      local_res8 = (FName)this[-1].DebugDescription.Data.AllocatorInstance.Data;
      ::FName::ToString(&local_res8,&local_48);
      pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->InstanceName);
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
    if (param_1->TaskState == Finished) {
      this->Priority = '\0';
      this->TaskState = Uninitialized;
      this->ResourceOverlapPolicy = StartOnTop;
      *(undefined5 *)&this->field_0x3b = 0;
    }
  }
  return;
}

// OnGameplayTaskInitialized @ 146cf53b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UGameplayTask::OnGameplayTaskInitialized(UGameplayTask *this,UGameplayTask *param_1)

{
  UObject *pUVar1;
  FName local_res8;
  FString local_38;
  FString local_28;
  
  if (FVisualLogger::bIsRecording != 0) {
    local_res8 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res8,&local_28);
    local_res8 = (FName)this[-1].DebugDescription.Data.AllocatorInstance.Data;
    ::FName::ToString(&local_res8,&local_38);
    pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->InstanceName);
    FVisualLogger::CategorizedLogfImpl
              (pUVar1,(FName *)&LogGameplayTasks.field_0x4,Verbose,L"%s> Child task initialized: %s"
              );
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if (*(longlong *)&this->Priority != 0) {
    if (FVisualLogger::bIsRecording != 0) {
      local_res8 = *(FName *)(*(longlong *)&this->Priority + 0x18);
      ::FName::ToString(&local_res8,&local_28);
      pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->InstanceName);
      FVisualLogger::CategorizedLogfImpl
                (pUVar1,(FName *)&LogGameplayTasks.field_0x4,Verbose,
                 L">> terminating previous child task: %s");
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    EndTask(*(UGameplayTask **)&this->Priority);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UGameplayTask *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  *(UGameplayTask **)&this->Priority = param_1;
  return;
}

// Pause @ 146cf5be0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UGameplayTask::Pause(UGameplayTask *this)

{
  UObject *pUVar1;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  if (FVisualLogger::bIsRecording != 0) {
    GetTaskStateName(this,&local_18);
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_28);
    pUVar1 = FWeakObjectPtr::Get(&(this->TasksComponent).WeakPtr);
    FVisualLogger::CategorizedLogfImpl
              (pUVar1,(FName *)&LogGameplayTasks.field_0x4,Verbose,
               L"%s Pause called, current State: %s");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  this->TaskState = Paused;
  pUVar1 = FWeakObjectPtr::Get(&(this->TasksComponent).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x000146cf5cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)&pUVar1[4].field_0x20 + 0x40))(&pUVar1[4].field_0x20,this);
  return;
}

// PauseInTaskQueue @ 146cf5cd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UGameplayTask::PauseInTaskQueue(UGameplayTask *this)

{
  EGameplayTaskState EVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  FName local_res8;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  EVar1 = this->TaskState;
  if (EVar1 == Uninitialized) {
    if (FVisualLogger::bIsRecording == 0) {
      return;
    }
    local_res10 = (FName)this->_padding_;
    ::FName::ToString(&local_res10,&local_18);
    pUVar4 = FWeakObjectPtr::Get(&(this->TasksComponent).WeakPtr);
    FVisualLogger::CategorizedLogfImpl
              (pUVar4,(FName *)&LogGameplayTasks.field_0x4,Error,
               L"UGameplayTask::PauseInTaskQueue Task %s passed for pausing withouth having InitTask called on it!"
              );
    local_28.Data.AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
  }
  else {
    if (EVar1 == AwaitingActivation) {
      return;
    }
    if (EVar1 == Paused) {
      return;
    }
    if (EVar1 == Active) {
                    /* WARNING: Could not recover jumptable at 0x000146cf5db3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 0x2f8))();
      return;
    }
    if (EVar1 != Finished) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTasks\\Private\\GameplayTask.cpp"
                         ,0x187,L"");
      if (!bVar3) {
        return;
      }
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (FVisualLogger::bIsRecording == 0) {
      return;
    }
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_28);
    pUVar4 = FWeakObjectPtr::Get(&(this->TasksComponent).WeakPtr);
    FVisualLogger::CategorizedLogfImpl
              (pUVar4,(FName *)&LogGameplayTasks.field_0x4,Log,
               L"UGameplayTask::PauseInTaskQueue Task %s being pause while already marked as Finished"
              );
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// PerformActivation @ 146cf5e40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UGameplayTask::PerformActivation(UGameplayTask *this)

{
  UObject *pUVar1;
  FName local_res8;
  FString local_18;
  
  if (this->TaskState == Active) {
    if (FVisualLogger::bIsRecording != 0) {
      local_res8 = (FName)this->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      pUVar1 = FWeakObjectPtr::Get(&(this->TasksComponent).WeakPtr);
      FVisualLogger::CategorizedLogfImpl
                (pUVar1,(FName *)&LogGameplayTasks.field_0x4,Warning,
                 L"%s PerformActivation called while TaskState is already Active. Bailing out.");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  else {
    this->TaskState = Active;
    (**(code **)(this->_padding_ + 0x2b0))();
    if (this->TaskState != Finished) {
      pUVar1 = FWeakObjectPtr::Get(&(this->TasksComponent).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x000146cf5f01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)&pUVar1[4].field_0x20 + 0x38))(&pUVar1[4].field_0x20,this);
      return;
    }
  }
  return;
}

// ReadyForActivation @ 146cf6830

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UGameplayTask::ReadyForActivation(UGameplayTask *this)

{
  int *piVar1;
  TArray<FGameplayTaskEventData,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UGameplayTasksComponent *this_00;
  FName local_res8;
  FScriptContainerElement local_28;
  undefined7 uStack_27;
  UGameplayTask *pUStack_20;
  FString local_18;
  
  this_00 = (UGameplayTasksComponent *)FWeakObjectPtr::Get(&(this->TasksComponent).WeakPtr);
  if (this_00 == (UGameplayTasksComponent *)0x0) {
    EndTask(this);
  }
  else {
    if (((this->bCaresAboutPriority == 0) && ((this->RequiredResources).Flags == 0)) &&
       ((this->ClaimedResources).Flags == 0)) {
      PerformActivation(this);
      return;
    }
    if (FVisualLogger::bIsRecording != 0) {
      local_res8 = (FName)this->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this_00,(FName *)&LogGameplayTasks.field_0x4,Log,
                 L"AddTaskReadyForActivation %s");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    if (((this->bCaresAboutPriority == 0) && ((this->RequiredResources).Flags == 0)) &&
       (((this->ClaimedResources).Flags == 0 &&
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
    local_28 = (FScriptContainerElement)0x0;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    pUStack_20 = this;
    if (((pFVar3 <= &local_28) &&
        (&local_28 < pFVar3 + (longlong)(this_00->TaskEvents).ArrayMax * 0x10)) &&
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
    *(ulonglong *)pFVar3 = CONCAT71(uStack_27,local_28);
    *(UGameplayTask **)(pFVar3 + 8) = pUStack_20;
    if ((((this_00->TaskEvents).ArrayNum == 1) && (this_00->bInEventProcessingInProgress == 0)) &&
       (this_00->EventLockCounter == 0)) {
      UGameplayTasksComponent::ProcessTaskEvents(this_00);
      return;
    }
  }
  return;
}

// RegisterReplicationFragments @ 146cf6c00

void __thiscall
UGameplayTask::RegisterReplicationFragments
          (UGameplayTask *this,FFragmentRegistrationContext *param_1,
          EFragmentRegistrationFlags param_2)

{
  UE::Net::FReplicationFragmentUtil::CreateAndRegisterFragmentsForObject
            ((UObject *)this,param_1,param_2,
             (TArray<UE::Net::FReplicationFragment_*,TSizedDefaultAllocator<32>_> *)0x0);
  return;
}

// Resume @ 146cf7530

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UGameplayTask::Resume(UGameplayTask *this)

{
  bool bVar1;
  UObject *pUVar2;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  if (FVisualLogger::bIsRecording != 0) {
    GetTaskStateName(this,&local_18);
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_28);
    pUVar2 = FWeakObjectPtr::Get(&(this->TasksComponent).WeakPtr);
    FVisualLogger::CategorizedLogfImpl
              (pUVar2,(FName *)&LogGameplayTasks.field_0x4,Verbose,
               L"%s Resume called, current State: %s");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  this->TaskState = Active;
  if ((1 < (byte)LogGameplayTasks._0_1_) &&
     (bVar1 = FWeakObjectPtr::IsValid(&(this->TasksComponent).WeakPtr), !bVar1)) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_28);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGameplayTasks);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  bVar1 = FWeakObjectPtr::IsValid(&(this->TasksComponent).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->TasksComponent).WeakPtr);
    (**(code **)(*(longlong *)&pUVar2[4].field_0x20 + 0x38))(&pUVar2[4].field_0x20,this);
  }
  return;
}

// StaticRegisterNativesUGameplayTask @ 146cf7c10

void __cdecl UGameplayTask::StaticRegisterNativesUGameplayTask(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UGameplayTask_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TaskOwnerEnded @ 146cf7d80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UGameplayTask::TaskOwnerEnded(UGameplayTask *this)

{
  UObject *pUVar1;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  if (FVisualLogger::bIsRecording != 0) {
    GetTaskStateName(this,&local_18);
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_28);
    pUVar1 = FWeakObjectPtr::Get(&(this->TasksComponent).WeakPtr);
    FVisualLogger::CategorizedLogfImpl
              (pUVar1,(FName *)&LogGameplayTasks.field_0x4,Verbose,
               L"%s TaskOwnerEnded called, current State: %s");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (this->TaskState != Finished) {
    this->bOwnerFinished = 1;
    if (((uint)this->_padding_ >> 0x1e & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146cf7e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 0x2f0))(this,1);
      return;
    }
    this->TaskState = Finished;
  }
  return;
}

// TickTask @ 146cf83a0

void __thiscall UGameplayTask::TickTask(UGameplayTask *this,float param_1)

{
  return;
}

// _getUObject @ 146cf9130

UObject * __thiscall UGameplayTask::_getUObject(UGameplayTask *this)

{
  return (UObject *)&this[-1].TaskOwner.InterfaceInstance;
}

// execEndTask @ 146cf9890

void __cdecl UGameplayTask::execEndTask(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EndTask((UGameplayTask *)param_1);
  return;
}

// execReadyForActivation @ 146cf9c50

void __cdecl UGameplayTask::execReadyForActivation(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ReadyForActivation((UGameplayTask *)param_1);
  return;
}

// operator() @ 1504fb6b0

bool __thiscall `UGameplayTask::OnDestroy'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2144379305767993552>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2144379305767993552>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fb6f0

bool __thiscall `UGameplayTask::OnDestroy'::__l5::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10;
  FString local_18;
  
  bVar4 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2144379305767993555>);
  if (bVar2) {
    local_res10 = *(FName *)(*(longlong *)this + 0x18);
    ::FName::ToString(&local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2144379305767993555>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504fb7a1;
    }
  }
  bVar2 = false;
LAB_1504fb7a1:
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

