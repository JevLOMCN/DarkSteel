// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 9

// GetTypeID @ 14d5abbc0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraObjectTypeID * __thiscall
UE::Cameras::FCameraShakeService::GetTypeID(FCameraShakeService *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d5b47a0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FCameraShakeService::IsKindOf(FCameraShakeService *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FCameraShakeService>)param_1->ID != PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraEvaluationService>)param_1->ID !=
      FCameraEvaluationService::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnInitialize @ 14d6458e0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraShakeService::OnInitialize
          (FCameraShakeService *this,FCameraEvaluationServiceInitializeParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  FCameraEvaluationService::SetEvaluationServiceFlags((FCameraEvaluationService *)this,None);
  if (this->Evaluator != (FCameraSystemEvaluator *)0x0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6255406376684618240>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Services\\CameraShakeService.cpp"
                       ,0x200,"Evaluator == nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->Evaluator = param_1->Evaluator;
  return;
}

// OnTeardown @ 14d645950

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraShakeService::OnTeardown
          (FCameraShakeService *this,FCameraEvaluationServiceTeardownParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Evaluator != (FCameraSystemEvaluator *)0x0) {
    this->Evaluator = (FCameraSystemEvaluator *)0x0;
    return;
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<6255406376684618246>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Services\\CameraShakeService.cpp"
                     ,0x206,"Evaluator != nullptr");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->Evaluator = (FCameraSystemEvaluator *)0x0;
  return;
}

// EnsureShakeContextCreated @ 14d65f070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraShakeService::EnsureShakeContextCreated(FCameraShakeService *this)

{
  int *piVar1;
  int iVar2;
  FName FVar3;
  FRootCameraNodeEvaluator *this_00;
  code *pcVar4;
  FCameraNodeEvaluator *pFVar5;
  bool bVar6;
  char cVar7;
  TObjectPtr<URootCameraNode>_u_0 TVar8;
  FName *pFVar9;
  UPackage *pUVar10;
  UCameraRigAsset *pUVar11;
  UClass *pUVar12;
  UCameraNode *pUVar13;
  longlong *plVar14;
  FWeakObjectPtr FVar15;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_148;
  TObjectPtr<URootCameraNode>_u_0 local_140;
  undefined8 local_138;
  undefined1 local_130 [32];
  FSharedReferencer<1> local_110;
  TObjectPtr<UCameraRigAsset>_u_0 TStack_108;
  undefined8 local_100;
  undefined1 local_f8;
  undefined4 local_f4;
  undefined1 local_f0;
  FCameraRigEvaluationInfo local_e8;
  FName local_b8 [2];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if ((this->ShakeContext).Object != (FCameraEvaluationContext *)0x0) goto LAB_14d65f216;
  TVar8.DebugPtr = ::operator_new(0xb00);
  if ((FCameraShakeServiceCameraNodeEvaluator *)TVar8.DebugPtr ==
      (FCameraShakeServiceCameraNodeEvaluator *)0x0) {
    FVar15.ObjectIndex = 0x10;
    FVar15.ObjectSerialNumber = 0;
    TVar8.DebugPtr = (URootCameraNode *)0x0;
LAB_14d65f127:
    if (((*(longlong *)((longlong)FVar15 + 0x10) == 0) ||
        (*(longlong *)((longlong)FVar15 + 0x18) == 0)) ||
       (*(int *)(*(longlong *)((longlong)FVar15 + 0x18) + 8) < 1)) {
      if ((FCameraShakeServiceCameraNodeEvaluator *)TVar8.DebugPtr !=
          (FCameraShakeServiceCameraNodeEvaluator *)0x0) {
        LOCK();
        *(int *)&(TVar8.DebugPtr)->field_0x8 = (int)*(longlong *)&(TVar8.DebugPtr)->field_0x8 + 1;
        UNLOCK();
      }
      *(FWeakObjectPtr *)((longlong)FVar15 + 0x10) = FVar15;
      if ((FCameraShakeServiceCameraNodeEvaluator *)TVar8.DebugPtr !=
          *(FCameraShakeServiceCameraNodeEvaluator **)((longlong)FVar15 + 0x18)) {
        if ((FCameraShakeServiceCameraNodeEvaluator *)TVar8.DebugPtr !=
            (FCameraShakeServiceCameraNodeEvaluator *)0x0) {
          LOCK();
          *(int *)&(TVar8.DebugPtr)->field_0xc = *(int *)&(TVar8.DebugPtr)->field_0xc + 1;
          UNLOCK();
        }
        plVar14 = *(longlong **)((longlong)FVar15 + 0x18);
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
          }
        }
        ((TObjectPtr<URootCameraNode>_u_0 *)((longlong)FVar15 + 0x18))->DebugPtr =
             (URootCameraNode *)TVar8;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)TVar8.DebugPtr);
    }
  }
  else {
    *(undefined4 *)&(TVar8.DebugPtr)->field_0x8 = 1;
    *(undefined4 *)&(TVar8.DebugPtr)->field_0xc = 1;
    *(undefined ***)TVar8.DebugPtr =
         &
         ___7__TIntrusiveReferenceController_VFCameraEvaluationContext_Cameras_UE___00_SharedPointerInternals__6B_
    ;
    FCameraEvaluationContext::FCameraEvaluationContext
              ((FCameraEvaluationContext *)&(TVar8.DebugPtr)->field_0x10);
    FVar15 = (FWeakObjectPtr)&(TVar8.DebugPtr)->field_0x10;
    if (FVar15 != (FWeakObjectPtr)0x0) goto LAB_14d65f127;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((FCameraShakeServiceCameraNodeEvaluator *)TVar8.DebugPtr !=
      (FCameraShakeServiceCameraNodeEvaluator *)0x0) {
    LOCK();
    *(int *)&(TVar8.DebugPtr)->field_0x8 = (int)*(longlong *)&(TVar8.DebugPtr)->field_0x8 + 1;
    UNLOCK();
  }
  local_148 = FVar15;
  local_140 = TVar8;
  if (&this->ShakeContext != (TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> *)&local_148) {
    (this->ShakeContext).Object = (FCameraEvaluationContext *)FVar15;
    local_148.ObjectIndex = 0;
    local_148.ObjectSerialNumber = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ShakeContext).SharedReferenceCount,
               (FSharedReferencer<1> *)&local_140.ObjectPtr);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_140.DebugPtr);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)TVar8.DebugPtr);
  if (((this->ShakeContext).Object == (FCameraEvaluationContext *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (((this->ShakeContext).Object)->InitialResult).bIsValid = true;
LAB_14d65f216:
  if ((this->ShakeContainerRig).field0_0x0.DebugPtr == (UCameraRigAsset *)0x0) {
    pFVar9 = ::FName::FName(local_b8,L"CameraShakeContainerRig");
    FVar3 = *pFVar9;
    pUVar10 = GetTransientPackage();
    pUVar11 = NewObject<UCameraRigAsset>
                        ((UObject *)pUVar10,FVar3,RF_Transient,(UObject *)0x0,false,
                         (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UCameraRigAsset *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar11);
    }
    (this->ShakeContainerRig).field0_0x0.DebugPtr = pUVar11;
    local_138 = 0;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar11,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar12 = UCameraShakeServiceCameraNode::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar12);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._16_4_ = 0;
    local_a8._20_4_ = 0;
    local_a8._24_4_ = RF_Transient;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = pUVar11;
    pUVar13 = (UCameraNode *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar14 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar14 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar14 + 0x10))();
    }
    pUVar11 = (this->ShakeContainerRig).field0_0x0.DebugPtr;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UCameraNode *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar13);
    }
    (pUVar11->RootNode).field0_0x0.DebugPtr = pUVar13;
    UCameraRigAsset::BuildCameraRig((this->ShakeContainerRig).field0_0x0.DebugPtr);
  }
  if (this->ShakeEvaluator == (FCameraShakeServiceCameraNodeEvaluator *)0x0) {
    local_130._24_8_ = (this->ShakeContext).Object;
    this_00 = this->Evaluator->RootEvaluator;
    local_130._16_8_ = (this->ShakeContext).SharedReferenceCount.ReferenceController;
    local_100 = 0;
    local_f8 = 2;
    local_f4 = 0;
    local_f0 = 0;
    local_110.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    TStack_108 = (TObjectPtr<UCameraRigAsset>_u_0)0x0;
    if ((UCameraRigAsset *)local_130._16_8_ != (UCameraRigAsset *)0x0) {
      LOCK();
      *(atomic<int> *)&((UCameraRigAsset *)local_130._16_8_)->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&((UCameraRigAsset *)local_130._16_8_)->_padding_ + 1)
      ;
      UNLOCK();
    }
    local_130._8_8_ = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_110,(FSharedReferencer<1> *)(local_130 + 0x10));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_130._16_8_);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar11 = (this->ShakeContainerRig).field0_0x0.DebugPtr, pUVar11 != (UCameraRigAsset *)0x0))
    {
      GC::MarkAsReachable((UObject *)pUVar11);
    }
    TStack_108 = (this->ShakeContainerRig).field0_0x0;
    local_f8 = 4;
    FRootCameraNodeEvaluator::ActivateCameraRig(this_00,(FActivateCameraRigParams *)local_130);
    local_e8.InstanceID.Value = 0xffffffff;
    local_e8.InstanceID.Layer = None;
    local_e8.RootEvaluator = (FCameraNodeEvaluator *)0x0;
    local_e8.EvaluationContext.Object = (FCameraEvaluationContext *)0x0;
    local_e8.EvaluationContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_e8.CameraRig.field0_0x0.DebugPtr = (TObjectPtr<UCameraRigAsset_const_>_u_0)0x0;
    local_e8.LastResult = (FCameraNodeEvaluationResult *)0x0;
    FRootCameraNodeEvaluator::GetCameraRigInfo
              (this_00,(FCameraRigInstanceID)local_130._0_8_,&local_e8);
    pFVar5 = local_e8.RootEvaluator;
    if ((FCameraShakeServiceCameraNodeEvaluator *)local_e8.RootEvaluator !=
        (FCameraShakeServiceCameraNodeEvaluator *)0x0) {
      cVar7 = (**(code **)((local_e8.RootEvaluator)->_padding_ + 8))(local_e8.RootEvaluator);
      TVar8.DebugPtr = (URootCameraNode *)0x0;
      if (cVar7 != '\0') {
        TVar8 = (TObjectPtr<URootCameraNode>_u_0)pFVar5;
      }
      this->ShakeEvaluator = (FCameraShakeServiceCameraNodeEvaluator *)TVar8;
    }
    if ((this->ShakeEvaluator == (FCameraShakeServiceCameraNodeEvaluator *)0x0) &&
       (bVar6 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6255406376684618325>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Services\\CameraShakeService.cpp"
                           ,0x255,"ShakeEvaluator"), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e8.EvaluationContext.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_110.ReferenceController);
  }
  return;
}

// IsCameraShakePlaying @ 14d662c20

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FCameraShakeService::IsCameraShakePlaying
          (FCameraShakeService *this,FCameraShakeInstanceID param_1)

{
  FCameraShakeServiceCameraNodeEvaluator *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar1 = this->ShakeEvaluator;
  if (pFVar1 == (FCameraShakeServiceCameraNodeEvaluator *)0x0) {
    return false;
  }
  pFVar2 = (pFVar1->Entries).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)(pFVar1->Entries).ArrayNum * 0xb50;
  for (; pFVar2 != pFVar3; pFVar2 = pFVar2 + 0xb50) {
    if (*(uint *)pFVar2 == param_1.Value) goto LAB_14d662c51;
  }
  pFVar2 = (FScriptContainerElement *)0x0;
LAB_14d662c51:
  return pFVar2 != (FScriptContainerElement *)0x0;
}

// RequestCameraShakeThisFrame @ 14d671230

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraShakeService::RequestCameraShakeThisFrame
          (FCameraShakeService *this,FStartCameraShakeParams *param_1)

{
  int iVar1;
  FCameraShakeServiceCameraNodeEvaluator *this_00;
  code *pcVar2;
  bool bVar3;
  FShakeEntry *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  EnsureShakeContextCreated(this);
  this_00 = this->ShakeEvaluator;
  if (this_00 == (FCameraShakeServiceCameraNodeEvaluator *)0x0) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6255406376684618284>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Services\\CameraShakeService.cpp"
                       ,0x22c,"ShakeEvaluator");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_1->CameraShake != (UCameraShakeAsset *)0x0) {
    pFVar5 = (this_00->Entries).AllocatorInstance.Data;
    iVar1 = (this_00->Entries).ArrayNum;
    pFVar6 = pFVar5 + (longlong)iVar1 * 0xb50;
    while( true ) {
      if ((this_00->Entries).ArrayNum != iVar1) {
        `TCheckedPointerIterator<UE::Cameras::FCameraShakeServiceCameraNodeEvaluator::FShakeEntry,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar5 == pFVar6) {
        pFVar4 = FCameraShakeServiceCameraNodeEvaluator::AddCameraShake(this_00,param_1);
        if (pFVar4 == (FShakeEntry *)0x0) {
          return;
        }
        pFVar4->NumRequests = '\x01';
        pFVar4->bPersistentRequest = false;
        return;
      }
      if (*(UCameraShakeAsset **)(pFVar5 + 0x18) == (UCameraShakeAsset *)0x0) {
        bVar3 = param_1->CameraShake == (UCameraShakeAsset *)0x0;
      }
      else {
        bVar3 = *(UCameraShakeAsset **)(pFVar5 + 0x18) == param_1->CameraShake;
      }
      if ((bVar3) && (pFVar5[0xb41] == (FScriptContainerElement)0x0)) break;
      pFVar5 = pFVar5 + 0xb50;
    }
    pFVar5[0xb40] = (FScriptContainerElement)((char)pFVar5[0xb40] + '\x01');
  }
  return;
}

// StartCameraShake @ 14d6722b0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraShakeInstanceID __thiscall
UE::Cameras::FCameraShakeService::StartCameraShake
          (FCameraShakeService *this,FStartCameraShakeParams *param_1)

{
  int iVar1;
  FCameraShakeServiceCameraNodeEvaluator *this_00;
  code *pcVar2;
  bool bVar3;
  FCameraShakeInstanceID FVar4;
  uint uVar5;
  FShakeEntry *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FStartCameraShakeParams *in_R8;
  undefined1 local_res8 [8];
  FCameraNodeShakeRestartParams local_res20 [8];
  
  EnsureShakeContextCreated(this);
  this_00 = this->ShakeEvaluator;
  FVar4.Value = (uint)param_1;
  if (this_00 == (FCameraShakeServiceCameraNodeEvaluator *)0x0) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6255406376684618254>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Services\\CameraShakeService.cpp"
                       ,0x20e,"ShakeEvaluator");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (FCameraShakeInstanceID)uVar5;
    }
    *(undefined4 *)&param_1->CameraShake = 0xffffffff;
    return (FCameraShakeInstanceID)FVar4.Value;
  }
  if (in_R8->CameraShake == (UCameraShakeAsset *)0x0) {
    *(undefined4 *)&param_1->CameraShake = 0xffffffff;
    return (FCameraShakeInstanceID)FVar4.Value;
  }
  if (in_R8->CameraShake->bIsSingleInstance != false) {
    iVar1 = (this_00->Entries).ArrayNum;
    pFVar7 = (this_00->Entries).AllocatorInstance.Data;
    pFVar8 = pFVar7 + (longlong)iVar1 * 0xb50;
    while( true ) {
      if ((this_00->Entries).ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UE::Cameras::FCameraShakeServiceCameraNodeEvaluator::FShakeEntry,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar7 == pFVar8) goto LAB_14d6723cf;
      if (*(UCameraShakeAsset **)(pFVar7 + 0x18) == (UCameraShakeAsset *)0x0) {
        bVar3 = in_R8->CameraShake == (UCameraShakeAsset *)0x0;
      }
      else {
        bVar3 = *(UCameraShakeAsset **)(pFVar7 + 0x18) == in_R8->CameraShake;
      }
      if (bVar3) break;
      pFVar7 = pFVar7 + 0xb50;
    }
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      if (*(FShakeCameraNodeEvaluator **)(pFVar7 + 0x48) != (FShakeCameraNodeEvaluator *)0x0) {
        FShakeCameraNodeEvaluator::RestartShake
                  (*(FShakeCameraNodeEvaluator **)(pFVar7 + 0x48),local_res20);
        uVar5 = *(uint *)pFVar7;
        goto LAB_14d6723fd;
      }
      bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6255406376684617856>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Services\\CameraShakeService.cpp"
                         ,0x80,"ExistingEntry->RootEvaluator");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (FCameraShakeInstanceID)uVar5;
      }
    }
  }
LAB_14d6723cf:
  pFVar6 = FCameraShakeServiceCameraNodeEvaluator::AddCameraShake(this_00,in_R8);
  if (pFVar6 == (FShakeEntry *)0x0) {
    uVar5 = 0xffffffff;
  }
  else {
    pFVar6->bPersistentRequest = true;
    uVar5 = (pFVar6->EntryID).Value;
  }
LAB_14d6723fd:
  *(uint *)&param_1->CameraShake = uVar5;
  return (FCameraShakeInstanceID)FVar4.Value;
}

// StopCameraShake @ 14d673520

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FCameraShakeService::StopCameraShake
          (FCameraShakeService *this,FCameraShakeInstanceID param_1,bool param_2)

{
  int iVar1;
  FCameraShakeServiceCameraNodeEvaluator *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  
  this_00 = this->ShakeEvaluator;
  if (this_00 == (FCameraShakeServiceCameraNodeEvaluator *)0x0) {
    return false;
  }
  pFVar2 = (this_00->Entries).AllocatorInstance.Data;
  iVar1 = (this_00->Entries).ArrayNum;
  pFVar8 = pFVar2;
  while( true ) {
    if (pFVar8 == pFVar2 + (longlong)iVar1 * 0xb50) {
      return false;
    }
    if (*(uint *)pFVar8 == param_1.Value) break;
    pFVar8 = pFVar8 + 0xb50;
  }
  uVar4 = (uint)(((longlong)pFVar8 - (longlong)pFVar2) / 0xb50);
  if (uVar4 == 0xffffffff) {
    return false;
  }
  if (!param_2) {
    uVar7 = 0;
    if ((int)uVar4 < iVar1) {
      uVar7 = ~uVar4 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    bVar5 = FCameraShakeServiceCameraNodeEvaluator::InitializeEntryBlendOut
                      (this_00,(FShakeEntry *)
                               ((this_00->Entries).AllocatorInstance.Data +
                               (longlong)(int)uVar4 * 0xb50));
    if (bVar5) {
      return true;
    }
  }
  FCameraShakeServiceCameraNodeEvaluator::PopEntry(this_00,uVar4);
  return true;
}

