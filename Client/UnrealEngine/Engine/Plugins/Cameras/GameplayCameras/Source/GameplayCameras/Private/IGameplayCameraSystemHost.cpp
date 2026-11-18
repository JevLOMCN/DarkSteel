// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 14

// ~IGameplayCameraSystemHost @ 14d6005f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
IGameplayCameraSystemHost::~IGameplayCameraSystemHost(IGameplayCameraSystemHost *this)

{
  this->_padding_ = (longlong)&___7IGameplayCameraSystemHost__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CameraSystemEvaluator).SharedReferenceCount.ReferenceController);
  return;
}

// ActivateCameraRig @ 14d606680

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
IGameplayCameraSystemHost::ActivateCameraRig
          (IGameplayCameraSystemHost *this,UCameraRigAsset *param_1,
          TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> *param_2,ECameraRigLayer param_3)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  FCameraSystemEvaluator *pFVar4;
  ForAnyElementType FVar5;
  FName local_res10;
  FString local_c8;
  FString local_b8;
  FName local_a8;
  FName local_a0;
  FString local_98;
  FString local_88;
  FString local_78;
  undefined8 local_68;
  FSharedReferencer<1> local_60;
  FCameraEvaluationContext *local_58;
  FSharedReferencer<1> local_50;
  UCameraRigAsset *local_48;
  undefined8 local_40;
  ECameraRigLayer local_38;
  undefined4 local_34;
  undefined1 local_30;
  
  if (param_1 == (UCameraRigAsset *)0x0) {
    lVar3 = (**(code **)(this->_padding_ + 0x10))();
    if (lVar3 == 0) {
      ::FString::FString(&local_c8,L"None");
    }
    else {
      local_res10 = *(FName *)(lVar3 + 0x18);
      ::FName::ToString(&local_res10,&local_c8);
    }
    ::FString::PrintfImpl(&local_98,L"Can\'t activate camera rig on \'%s\': no camera rig given!");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_98.Data.ArrayNum != 0) {
      FVar5.Data = local_98.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar5.Data,Error,(FName)0x0);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  else if (param_2->Object == (FCameraEvaluationContext *)0x0) {
    lVar3 = (**(code **)(this->_padding_ + 0x10))();
    if (lVar3 == 0) {
      ::FString::FString(&local_b8,L"None");
    }
    else {
      local_a8 = *(FName *)(lVar3 + 0x18);
      ::FName::ToString(&local_a8,&local_b8);
    }
    local_a0 = (FName)param_1->_padding_;
    ::FName::ToString(&local_a0,&local_78);
    ::FString::PrintfImpl
              (&local_88,
               L"Can\'t activate camera rig \'%s\' on \'%s\': invalid evaluation context given!");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_88.Data.ArrayNum != 0) {
      FVar5.Data = local_88.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar5.Data,Error,(FName)0x0);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  else {
    EnsureCameraSystemInitialized(this);
    if ((this->CameraSystemEvaluator).Object == (FCameraSystemEvaluator *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3312002148421599145>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\GameFramework\\IGameplayCameraSystemHost.cpp"
                         ,0x57,"CameraSystemEvaluator");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      local_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_40 = 0;
      local_38 = 2;
      local_34 = 0;
      local_30 = 0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_60.ReferenceController = (param_2->SharedReferenceCount).ReferenceController;
      local_58 = param_2->Object;
      if (local_60.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_60.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_60.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_68 = 0;
      local_48 = param_1;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_50,&local_60);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_60.ReferenceController);
      local_38 = param_3;
      pFVar4 = TSharedPtr<UE::Cameras::FCameraSystemEvaluator,1>::operator->
                         (&this->CameraSystemEvaluator);
      UE::Cameras::FRootCameraNodeEvaluator::ActivateCameraRig
                (pFVar4->RootEvaluator,(FActivateCameraRigParams *)&stack0xffffffffffffffd8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_50.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// DebugDraw @ 14d612cd0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
IGameplayCameraSystemHost::DebugDraw
          (IGameplayCameraSystemHost *this,UCanvas *param_1,APlayerController *param_2)

{
  FCameraSystemEvaluator *pFVar1;
  APlayerCameraManager *pAVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  UObject *pUVar6;
  UWorld *pUVar7;
  APlayerCameraManager *this_00;
  UWorld *pUVar8;
  UClass *pUVar9;
  FCameraSystemDebugUpdateParams local_38;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> local_28;
  
  pFVar1 = (this->CameraSystemEvaluator).Object;
  if (pFVar1 == (FCameraSystemEvaluator *)0x0) {
    return;
  }
  pUVar8 = (UWorld *)0x0;
  pUVar6 = FWeakObjectPtr::Get(&(pFVar1->WeakOwner).WeakPtr);
  pUVar7 = pUVar8;
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = (UWorld *)(**(code **)(*(longlong *)pUVar6 + 0x180))(pUVar6);
  }
  if (param_2 == (APlayerController *)0x0) {
    if (((this->CameraSystemEvaluator).Object == (FCameraSystemEvaluator *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UE::Cameras::FCameraEvaluationContextStack::GetActiveContext
              (&((this->CameraSystemEvaluator).Object)->ContextStack,&local_28);
    if (local_28.Object != (FCameraEvaluationContext *)0x0) {
      if ((local_28.Object == (FCameraEvaluationContext *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      param_2 = (APlayerController *)
                FWeakObjectPtr::Get(&((local_28.Object)->WeakPlayerController).WeakPtr);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    if ((param_2 == (APlayerController *)0x0) && (pUVar7 != (UWorld *)0x0)) {
      param_2 = UWorld::GetFirstPlayerController(pUVar7);
    }
  }
  this_00 = (APlayerCameraManager *)(**(code **)(this->_padding_ + 0x10))();
  if (param_2 == (APlayerController *)0x0) {
LAB_14d612e15:
    bVar5 = false;
  }
  else {
    pUVar8 = (UWorld *)(**(code **)(param_2->_padding_ + 0x7e0))(param_2);
    pAVar2 = (param_2->PlayerCameraManager).field0_0x0.DebugPtr;
    if (pAVar2 == (APlayerCameraManager *)0x0) {
      bVar5 = this_00 == (APlayerCameraManager *)0x0;
    }
    else {
      bVar5 = pAVar2 == this_00;
    }
    if (!bVar5) goto LAB_14d612e15;
    bVar5 = true;
  }
  if ((this_00 != (APlayerCameraManager *)0x0) && (pUVar8 != (UWorld *)0x0)) {
    pUVar9 = Z_Construct_UClass_AActor_NoRegister();
    pUVar7 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar9);
    if (pUVar7 == pUVar8) {
      bVar4 = true;
      goto LAB_14d612e3d;
    }
  }
  bVar4 = false;
LAB_14d612e3d:
  if ((((bVar5) || (bVar4)) && (param_2 != (APlayerController *)0x0)) &&
     ((param_2->Player).field0_0x0.DebugPtr != (UPlayer *)0x0)) {
    local_38.bIsDebugCameraEnabled = false;
  }
  else {
    local_38.bIsDebugCameraEnabled = true;
  }
  local_38.bForceDraw = false;
  if ((bVar5) || (local_38.bIsCameraManagerOrViewTarget = false, bVar4)) {
    local_38.bIsCameraManagerOrViewTarget = true;
  }
  local_38.CanvasObject = param_1;
  if (((this->CameraSystemEvaluator).Object == (FCameraSystemEvaluator *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  UE::Cameras::FCameraSystemEvaluator::DebugUpdate((this->CameraSystemEvaluator).Object,&local_38);
  return;
}

// DestroyCameraSystem @ 14d612fa0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall IGameplayCameraSystemHost::DestroyCameraSystem(IGameplayCameraSystemHost *this)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  if ((this->DebugDrawDelegateHandle).ID != 0) {
    UDebugDrawService::Unregister((FDelegateHandle)(this->DebugDrawDelegateHandle).ID);
    (this->DebugDrawDelegateHandle).ID = 0;
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->CameraSystemEvaluator != (TSharedPtr<UE::Cameras::FCameraSystemEvaluator,1> *)&local_18
     ) {
    (this->CameraSystemEvaluator).Object = (FCameraSystemEvaluator *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CameraSystemEvaluator).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// EnsureCameraSystemInitialized @ 14d6157e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
IGameplayCameraSystemHost::EnsureCameraSystemInitialized(IGameplayCameraSystemHost *this)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  TObjectPtr<UObject>_u_0 local_58;
  undefined4 local_50;
  longlong local_48;
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  if ((this->CameraSystemEvaluator).Object == (FCameraSystemEvaluator *)0x0) {
    local_50 = 0;
    local_48 = 0;
    local_20 = (longlong *)0x0;
    local_58.DebugPtr = (UObject *)(**(code **)(this->_padding_ + 0x10))();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_58.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_58.DebugPtr);
    }
    InitializeCameraSystem(this,(FCameraSystemEvaluatorCreateParams *)&local_58.ObjectPtr);
    if (local_48 != 0) {
      plVar1 = local_38;
      if (local_20 != (longlong *)0x0) {
        plVar1 = local_20;
      }
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  return;
}

// FindActiveHost @ 14d616280

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

IGameplayCameraSystemHost * __cdecl
IGameplayCameraSystemHost::FindActiveHost(APlayerController *param_1)

{
  APlayerCameraManager *this;
  code *pcVar1;
  UClass *pUVar2;
  IGameplayCameraSystemHost *pIVar3;
  longlong *plVar4;
  UObjectBaseUtility *this_00;
  UClass *local_res8;
  
  if (param_1 != (APlayerController *)0x0) {
    this = (param_1->PlayerCameraManager).field0_0x0.DebugPtr;
    if (this != (APlayerCameraManager *)0x0) {
      pUVar2 = Z_Construct_UClass_UGameplayCameraSystemHost_NoRegister();
      pIVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar2);
      if (pIVar3 != (IGameplayCameraSystemHost *)0x0) {
        return pIVar3;
      }
    }
    plVar4 = (longlong *)(**(code **)(param_1->_padding_ + 0x7e0))(param_1);
    if (plVar4 != (longlong *)0x0) {
      pcVar1 = *(code **)(*plVar4 + 0x740);
      local_res8 = Z_Construct_UClass_UGameplayCameraSystemHost_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res8);
      }
      this_00 = (UObjectBaseUtility *)(*pcVar1)(plVar4,&local_res8);
      if (this_00 != (UObjectBaseUtility *)0x0) {
        pUVar2 = Z_Construct_UClass_UGameplayCameraSystemHost_NoRegister();
        pIVar3 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar2);
        return pIVar3;
      }
    }
  }
  return (IGameplayCameraSystemHost *)0x0;
}

// GetAsObject @ 14d618750

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UObject * __thiscall IGameplayCameraSystemHost::GetAsObject(IGameplayCameraSystemHost *this)

{
  return (UObject *)0x0;
}

// GetAsScriptInterface @ 14d618780

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TScriptInterface<IGameplayCameraSystemHost> * __thiscall
IGameplayCameraSystemHost::GetAsScriptInterface
          (IGameplayCameraSystemHost *this,
          TScriptInterface<IGameplayCameraSystemHost> *__return_storage_ptr__)

{
  UObject *this_00;
  UClass *pUVar1;
  void *pvVar2;
  
  this_00 = (UObject *)(**(code **)(this->_padding_ + 0x10))();
  pvVar2 = (void *)0x0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (this_00 == (UObject *)0x0)) {
    *(UObject **)__return_storage_ptr__ = this_00;
    if (this_00 == (UObject *)0x0) goto LAB_14d6187d1;
  }
  else {
    UE::GC::MarkAsReachable(this_00);
    *(UObject **)__return_storage_ptr__ = this_00;
  }
  pUVar1 = Z_Construct_UClass_UGameplayCameraSystemHost_NoRegister();
  pvVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar1);
LAB_14d6187d1:
  *(void **)&__return_storage_ptr__->field_0x8 = pvVar2;
  return __return_storage_ptr__;
}

// GetCameraSystemEvaluator @ 14d619b80

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TSharedPtr<UE::Cameras::FCameraSystemEvaluator,1> * __thiscall
IGameplayCameraSystemHost::GetCameraSystemEvaluator
          (IGameplayCameraSystemHost *this,
          TSharedPtr<UE::Cameras::FCameraSystemEvaluator,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->CameraSystemEvaluator).Object;
  pTVar1 = (this->CameraSystemEvaluator).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// InitializeCameraSystem @ 14d61fe00

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
IGameplayCameraSystemHost::InitializeCameraSystem
          (IGameplayCameraSystemHost *this,FCameraSystemEvaluatorCreateParams *param_1)

{
  int *piVar1;
  int iVar2;
  UObject *pUVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  UObject *pUVar7;
  TReferenceControllerBase<1> *pTVar8;
  UWorld *this_00;
  undefined8 *puVar9;
  ulong64 uVar10;
  FDelegateHandle FVar11;
  TReferenceControllerBase<1> *pTVar12;
  FCameraSystemEvaluator *pFVar13;
  wchar_t local_res8 [4];
  FCameraSystemEvaluator *local_88;
  FSharedReferencer<1> local_80;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  if ((this->CameraSystemEvaluator).Object != (FCameraSystemEvaluator *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3312002148421599193>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\GameFramework\\IGameplayCameraSystemHost.cpp"
                       ,0x27,"!CameraSystemEvaluator.IsValid()");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((param_1->Owner).field0_0x0.DebugPtr == (UObject *)0x0) {
LAB_14d61fe7b:
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3312002148421599192>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\GameFramework\\IGameplayCameraSystemHost.cpp"
                       ,0x28,"Params.Owner != nullptr && Params.Owner == GetAsObject()");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    pUVar7 = (UObject *)(**(code **)(this->_padding_ + 0x10))(this);
    pUVar3 = (param_1->Owner).field0_0x0.DebugPtr;
    if (pUVar3 == (UObject *)0x0) {
      bVar6 = pUVar7 == (UObject *)0x0;
    }
    else {
      bVar6 = pUVar3 == pUVar7;
    }
    if (!bVar6) goto LAB_14d61fe7b;
  }
  pTVar8 = ::operator_new(0x1cd0);
  pTVar12 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pFVar13 = (FCameraSystemEvaluator *)&DAT_00000010;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFCameraSystemEvaluator_Cameras_UE___00_SharedPointerInternals__6B_
    ;
    UE::Cameras::FCameraSystemEvaluator::FCameraSystemEvaluator
              ((FCameraSystemEvaluator *)(pTVar8 + 1));
    pFVar13 = (FCameraSystemEvaluator *)(pTVar8 + 1);
    pTVar12 = pTVar8;
    if (pFVar13 == (FCameraSystemEvaluator *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      goto LAB_14d61ff98;
    }
  }
  if (((pFVar13->_padding_ == 0) || (pFVar13->_padding_ == 0)) ||
     (*(int *)(pFVar13->_padding_ + 8) < 1)) {
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar13->_padding_ = (longlong)pFVar13;
    if (pTVar12 != (TReferenceControllerBase<1> *)pFVar13->_padding_) {
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar12->WeakReferenceCount = (atomic<int>)((int)pTVar12->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)pFVar13->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      pFVar13->_padding_ = (longlong)pTVar12;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
LAB_14d61ff98:
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88 = pFVar13;
  local_80.ReferenceController = pTVar12;
  if (&this->CameraSystemEvaluator != (TSharedPtr<UE::Cameras::FCameraSystemEvaluator,1> *)&local_88
     ) {
    (this->CameraSystemEvaluator).Object = pFVar13;
    local_88 = (FCameraSystemEvaluator *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CameraSystemEvaluator).SharedReferenceCount,&local_80);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  if ((this->CameraSystemEvaluator).Object == (FCameraSystemEvaluator *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  UE::Cameras::FCameraSystemEvaluator::Initialize((this->CameraSystemEvaluator).Object,param_1);
  if ((this->DebugDrawDelegateHandle).ID != 0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3312002148421599186>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\GameFramework\\IGameplayCameraSystemHost.cpp"
                       ,0x2e,"!DebugDrawDelegateHandle.IsValid()");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this_00 = (UWorld *)(**(code **)(*(longlong *)(param_1->Owner).field0_0x0.DebugPtr + 0x180))();
  if (this_00 != (UWorld *)0x0) {
    bVar6 = UWorld::IsGameWorld(this_00);
    if (bVar6) {
      local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_70.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_78,(FWriteAccessScope *)&local_48);
      local_30 = &local_70;
      puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar10 = FDelegateHandle::GenerateNewID();
        puVar9[2] = uVar10;
        puVar9[3] = this;
        *puVar9 = &
                  ___7__TBaseRawMethodDelegateInstance__0A_VIGameplayCameraSystemHost____A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar9[4] = DebugDraw;
      }
      if (local_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
      }
      FVar11 = UDebugDrawService::Register
                         (local_res8,
                          (TDelegate<void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
                           *)L"Game");
                    /* WARNING: Load size is inaccurate */
      (this->DebugDrawDelegateHandle).ID = *FVar11.ID;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_78,(FWriteAccessScope *)&local_60);
      if ((local_70.DelegateSize != 0) &&
         (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_70,0,0,0x10);
        local_70.DelegateSize = 0;
      }
      if (local_60.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
      }
      if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_70.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
    }
  }
  return;
}

// InitializeCameraSystem @ 14d6201b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall IGameplayCameraSystemHost::InitializeCameraSystem(IGameplayCameraSystemHost *this)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  TObjectPtr<UObject>_u_0 local_58;
  undefined4 local_50;
  longlong local_48;
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_50 = 0;
  local_48 = 0;
  local_20 = (longlong *)0x0;
  local_58.DebugPtr = (UObject *)(**(code **)(this->_padding_ + 0x10))();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_58.DebugPtr != (UObject *)0x0))
  {
    UE::GC::MarkAsReachable(local_58.DebugPtr);
  }
  InitializeCameraSystem(this,(FCameraSystemEvaluatorCreateParams *)&local_58.ObjectPtr);
  if (local_48 != 0) {
    plVar1 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar1 = local_20;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

// OnAddReferencedObjects @ 14d622bf0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
IGameplayCameraSystemHost::OnAddReferencedObjects
          (IGameplayCameraSystemHost *this,FReferenceCollector *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FCameraEvaluationService *this_00;
  FCameraRigCombinationRegistry *pFVar3;
  FCameraSystemEvaluator *pFVar4;
  code *pcVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 auStackX_8 [8];
  
  pFVar4 = (this->CameraSystemEvaluator).Object;
  if (pFVar4 == (FCameraSystemEvaluator *)0x0) {
    return;
  }
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&pFVar4->RootNode,0,0);
  UE::Cameras::FCameraEvaluationContextStack::AddReferencedObjects(&pFVar4->ContextStack,param_1);
  UE::Cameras::FCameraNodeEvaluationResult::AddReferencedObjects(&pFVar4->RootNodeResult,param_1);
  if (pFVar4->RootEvaluator != (FRootCameraNodeEvaluator *)0x0) {
    UE::Cameras::FCameraNodeEvaluator::AddReferencedObjects
              ((FCameraNodeEvaluator *)pFVar4->RootEvaluator,param_1);
  }
  iVar1 = (pFVar4->EvaluationServices).ArrayNum;
  pFVar7 = (pFVar4->EvaluationServices).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((pFVar4->EvaluationServices).ArrayNum != iVar1) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<UE::Cameras::FCameraEvaluationService,1>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(auStackX_8);
    }
    if (pFVar7 == pFVar8) break;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar7 + 8);
    this_00 = *(FCameraEvaluationService **)pFVar7;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 == (FCameraEvaluationService *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UE::Cameras::FCameraEvaluationService::AddReferencedObjects(this_00,param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar7 = pFVar7 + 0x10;
  }
  pFVar3 = (pFVar4->CameraRigCombinationRegistry).Object;
  if (pFVar3 != (FCameraRigCombinationRegistry *)0x0) {
    (**(code **)(param_1->_padding_ + 0x90))
              (param_1,(pFVar3->CombinedCameraRigs).AllocatorInstance.Data,
               (pFVar3->CombinedCameraRigs).ArrayNum,0,0);
  }
  return;
}

// UpdateCameraSystem @ 14d63b330

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
IGameplayCameraSystemHost::UpdateCameraSystem(IGameplayCameraSystemHost *this,float param_1)

{
  FCameraSystemEvaluator *this_00;
  FCameraSystemEvaluationParams local_res8 [8];
  
  this_00 = (this->CameraSystemEvaluator).Object;
  if (this_00 != (FCameraSystemEvaluator *)0x0) {
    local_res8[0].DeltaTime = param_1;
    UE::Cameras::FCameraSystemEvaluator::Update(this_00,local_res8);
  }
  return;
}

// _getUObject @ 14d63f290

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UObject * __thiscall IGameplayCameraSystemHost::_getUObject(IGameplayCameraSystemHost *this)

{
  return (UObject *)0x0;
}

