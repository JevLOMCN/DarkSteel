// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 30

// FCameraEvaluationContext @ 14d542e60

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FCameraEvaluationContext * __thiscall
UE::Cameras::FCameraEvaluationContext::FCameraEvaluationContext
          (FCameraEvaluationContext *this,FCameraEvaluationContextInitializeParams *param_1)

{
  UObject *pUVar1;
  UCameraAsset *pUVar2;
  APlayerController *pAVar3;
  FWeakObjectPtr local_res8;
  APlayerController *local_res18 [2];
  
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined ***)this = &___7FCameraEvaluationContext_Cameras_UE__6B_;
  (this->WeakOwner).WeakPtr = (FWeakObjectPtr)0x0;
  (this->WeakPlayerController).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CameraAsset).field0_0x0.DebugPtr = (UCameraAsset *)0x0;
  FCameraNodeEvaluationResult::FCameraNodeEvaluationResult(&this->InitialResult);
  (this->OverrideViewportSize).bIsSet = false;
  (this->DirectorEvaluatorStorage).Evaluator.Object = (FCameraDirectorEvaluator *)0x0;
  (this->DirectorEvaluatorStorage).Evaluator.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->WeakParent).Object = (FCameraEvaluationContext *)0x0;
  (this->WeakParent).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->ChildrenContexts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildrenContexts).ArrayNum = 0;
  (this->ChildrenContexts).ArrayMax = 0;
  *(undefined8 *)&this->ConditionalResults = 0;
  *(undefined8 *)&(this->ConditionalResults).field_0x8 = 0;
  *(undefined8 *)&(this->ConditionalResults).field_0x20 = 0;
  this->DirectorEvaluator = (FCameraDirectorEvaluator *)0x0;
  this->CameraSystemEvaluator = (FCameraSystemEvaluator *)0x0;
  *(undefined4 *)&(this->ConditionalResults).field_0x28 = 0;
  *(undefined4 *)&(this->ConditionalResults).field_0x2c = 0x80;
  *(undefined4 *)&(this->ConditionalResults).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConditionalResults).field_0x34 = 0;
  *(undefined8 *)&(this->ConditionalResults).field_0x40 = 0;
  *(undefined4 *)&(this->ConditionalResults).field_0x48 = 0;
  this->bInitialized = false;
  this->bActivated = false;
  pUVar1 = (param_1->Owner).field0_0x0.DebugPtr;
  if (GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar1 != (UObject *)0x0) {
      GC::MarkAsReachable(pUVar1);
    }
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = (APlayerController *)pUVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  (this->WeakOwner).WeakPtr = local_res8;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (param_1->CameraAsset).field0_0x0.DebugPtr, pUVar2 != (UCameraAsset *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->CameraAsset).field0_0x0 = (param_1->CameraAsset).field0_0x0;
  pAVar3 = (param_1->PlayerController).field0_0x0.DebugPtr;
  if (GC::GIsIncrementalReachabilityPending != false) {
    if (pAVar3 != (APlayerController *)0x0) {
      GC::MarkAsReachable((UObject *)pAVar3);
    }
    if ((GC::GIsIncrementalReachabilityPending != false) && (pAVar3 != (APlayerController *)0x0)) {
      GC::MarkAsReachable((UObject *)pAVar3);
    }
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = pAVar3;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pAVar3 != (APlayerController *)0x0)) {
    GC::MarkAsReachable((UObject *)pAVar3);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  pUVar2 = (this->CameraAsset).field0_0x0.DebugPtr;
  (this->WeakPlayerController).WeakPtr = local_res8;
  if (pUVar2 != (UCameraAsset *)0x0) {
    FCameraVariableTable::Initialize
              (&(this->InitialResult).VariableTable,&(pUVar2->AllocationInfo).VariableTableInfo);
    FCameraContextDataTable::Initialize
              (&(this->InitialResult).ContextDataTable,
               &(pUVar2->AllocationInfo).ContextDataTableInfo);
  }
  this->bInitialized = true;
  return this;
}

// FCameraEvaluationContext @ 14d543070

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraEvaluationContext * __thiscall
UE::Cameras::FCameraEvaluationContext::FCameraEvaluationContext(FCameraEvaluationContext *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined ***)this = &___7FCameraEvaluationContext_Cameras_UE__6B_;
  (this->WeakOwner).WeakPtr = (FWeakObjectPtr)0x0;
  (this->WeakPlayerController).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CameraAsset).field0_0x0.DebugPtr = (UCameraAsset *)0x0;
  FCameraNodeEvaluationResult::FCameraNodeEvaluationResult(&this->InitialResult);
  (this->OverrideViewportSize).bIsSet = false;
  (this->DirectorEvaluatorStorage).Evaluator.Object = (FCameraDirectorEvaluator *)0x0;
  (this->DirectorEvaluatorStorage).Evaluator.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->WeakParent).Object = (FCameraEvaluationContext *)0x0;
  (this->WeakParent).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->ChildrenContexts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildrenContexts).ArrayNum = 0;
  (this->ChildrenContexts).ArrayMax = 0;
  *(undefined8 *)&this->ConditionalResults = 0;
  *(undefined8 *)&(this->ConditionalResults).field_0x8 = 0;
  *(undefined8 *)&(this->ConditionalResults).field_0x20 = 0;
  this->DirectorEvaluator = (FCameraDirectorEvaluator *)0x0;
  this->CameraSystemEvaluator = (FCameraSystemEvaluator *)0x0;
  *(undefined4 *)&(this->ConditionalResults).field_0x28 = 0;
  *(undefined4 *)&(this->ConditionalResults).field_0x2c = 0x80;
  *(undefined4 *)&(this->ConditionalResults).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConditionalResults).field_0x34 = 0;
  *(undefined8 *)&(this->ConditionalResults).field_0x40 = 0;
  *(undefined4 *)&(this->ConditionalResults).field_0x48 = 0;
  this->bInitialized = false;
  this->bActivated = false;
  return this;
}

// ~FCameraEvaluationContext @ 14d5445f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraEvaluationContext::~FCameraEvaluationContext(FCameraEvaluationContext *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  void *pvVar5;
  FScriptContainerElement *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong *plVar8;
  
  *(undefined4 *)&(this->ConditionalResults).field_0x48 = 0;
  *(undefined ***)this = &___7FCameraEvaluationContext_Cameras_UE__6B_;
  pvVar5 = *(void **)&(this->ConditionalResults).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_ECameraEvaluationDataCondition,UE::Cameras::FCameraNodeEvaluationResult>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_ECameraEvaluationDataCondition,UE::Cameras::FCameraNodeEvaluationResult>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ConditionalResults);
  DestructItems<TSharedPtr<UE::Cameras::FCameraEvaluationContext,1>,int>
            ((TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> *)
             (this->ChildrenContexts).AllocatorInstance.Data,(this->ChildrenContexts).ArrayNum);
  pFVar6 = (this->ChildrenContexts).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pTVar7 = (this->WeakParent).WeakReferenceCount.ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar7->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DirectorEvaluatorStorage).Evaluator.SharedReferenceCount.ReferenceController);
  FCameraNodeEvaluationResult::~FCameraNodeEvaluationResult(&this->InitialResult);
  plVar8 = *(longlong **)&this->field_0x18;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar8 + 8))(plVar8,1);
    }
  }
  return;
}

// Activate @ 14d5460a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraEvaluationContext::Activate
          (FCameraEvaluationContext *this,FCameraEvaluationContextActivateParams *param_1)

{
  FCameraDirectorEvaluator *pFVar1;
  bool bVar2;
  ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> FVar3;
  undefined1 auStack_138 [32];
  undefined1 local_118 [8];
  FCameraSystemEvaluator *local_110;
  FCameraDirectorEvaluationResult local_108;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  if ((this->bInitialized == false) &&
     (bVar2 = `UE::Cameras::FCameraEvaluationContext::Activate'::__l3::<lambda_1>::operator()
                        (local_118), !bVar2)) {
    return;
  }
  if ((this->bActivated != false) &&
     (bVar2 = `UE::Cameras::FCameraEvaluationContext::Activate'::__l6::<lambda_2>::operator()
                        (local_118), !bVar2)) {
    return;
  }
  (**(code **)(*(longlong *)this + 0x18))(this);
  AutoCreateDirectorEvaluator(this);
  pFVar1 = this->DirectorEvaluator;
  this->CameraSystemEvaluator = param_1->Evaluator;
  this->bActivated = true;
  if (pFVar1 != (FCameraDirectorEvaluator *)0x0) {
    local_110 = param_1->Evaluator;
    local_108.Requests.AllocatorInstance.SecondaryData =
         (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0;
    local_108.Requests.ArrayNum = 0;
    local_108.Requests.ArrayMax = 4;
    pFVar1->Evaluator = local_110;
    (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1,&local_110,&local_108);
    ExecuteSetupAndTeardownRequests(this,&local_108);
    FVar3 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)&local_108;
    if (local_108.Requests.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
      FVar3 = local_108.Requests.AllocatorInstance.SecondaryData;
    }
    DestructItems<UE::Cameras::FCameraRigActivationDeactivationRequest,int>
              ((FCameraRigActivationDeactivationRequest *)FVar3,local_108.Requests.ArrayNum);
    if (local_108.Requests.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
      FMemory::Free((void *)local_108.Requests.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// AddChildContext @ 14d5466c0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FCameraEvaluationContext::AddChildContext
          (FCameraEvaluationContext *this,
          TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FCameraEvaluationContext *pFVar2;
  FCameraDirectorEvaluator *pFVar3;
  FCameraEvaluationContext *pFVar4;
  code *pcVar5;
  atomic<int> aVar6;
  undefined1 uVar7;
  atomic<int> aVar8;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> local_38;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> local_28;
  
  if (this->DirectorEvaluator == (FCameraDirectorEvaluator *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return false;
  }
  pTVar9 = TSharedFromThis<UE::Cameras::FCameraEvaluationContext,1>::AsShared
                     ((TSharedFromThis<UE::Cameras::FCameraEvaluationContext,1> *)&this->field_0x10,
                      &local_28);
  pTVar1 = (pTVar9->SharedReferenceCount).ReferenceController;
  pFVar2 = pTVar9->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  pFVar3 = this->DirectorEvaluator;
  pTVar10 = (pFVar3->WeakOwnerContext).WeakReferenceCount.ReferenceController;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar6 = pTVar10->SharedReferenceCount;
    do {
      if (aVar6 == (atomic<int>)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d546744;
      }
      LOCK();
      aVar8 = pTVar10->SharedReferenceCount;
      bVar11 = aVar6 == aVar8;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar8 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar8;
    } while (!bVar11);
    pFVar4 = (pFVar3->WeakOwnerContext).Object;
    if ((pFVar4 != (FCameraEvaluationContext *)0x0) && (pFVar4 == pFVar2)) goto LAB_14d546771;
  }
LAB_14d546744:
  bVar11 = Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<_2892438673154899598>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraEvaluationContext.cpp"
                      ,0x172,"DirectorEvaluator->GetEvaluationContext() == SharedThis(this)");
  if (bVar11) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
LAB_14d546771:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_38.Object = param_1->Object;
  pFVar3 = this->DirectorEvaluator;
  local_38.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar11 = FCameraDirectorEvaluator::AddChildEvaluationContext(pFVar3,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar11;
}

// AddReferencedObjects @ 14d547850

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraEvaluationContext::AddReferencedObjects
          (FCameraEvaluationContext *this,FReferenceCollector *param_1)

{
  int iVar1;
  FCameraDirectorEvaluator *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FCameraEvaluationContext *this_00;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->CameraAsset,0,0);
  (**(code **)(*(longlong *)this + 0x28))(this,param_1);
  pFVar2 = this->DirectorEvaluator;
  if (pFVar2 != (FCameraDirectorEvaluator *)0x0) {
    (**(code **)(param_1->_padding_ + 0x88))(param_1,&pFVar2->PrivateCameraDirector,0,0);
    (**(code **)(pFVar2->_padding_ + 0x48))(pFVar2,param_1);
  }
  iVar1 = (this->ChildrenContexts).ArrayNum;
  pFVar6 = (this->ChildrenContexts).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->ChildrenContexts).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<UE::Cameras::FCameraEvaluationContext,1>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    pTVar3 = *(TReferenceControllerBase<1> **)(pFVar6 + 8);
    this_00 = *(FCameraEvaluationContext **)pFVar6;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 == (FCameraEvaluationContext *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    AddReferencedObjects(this_00,param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pFVar6 = pFVar6 + 0x10;
  }
  return;
}

// AutoCreateDirectorEvaluator @ 14d5492a0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraEvaluationContext::AutoCreateDirectorEvaluator(FCameraEvaluationContext *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  UCameraAsset *pUVar3;
  UCameraDirector *pUVar4;
  TReferenceControllerBase<1> *pTVar5;
  FCameraEvaluationContext *pFVar6;
  FSharedReferencer<1> FVar7;
  FCameraDirectorEvaluator *pFVar8;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *pTVar9;
  FCameraDirectorEvaluatorStorage *local_res8;
  FCameraEvaluationContext *local_28;
  FSharedReferencer<1> local_20;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> local_18;
  
  if (this->DirectorEvaluator == (FCameraDirectorEvaluator *)0x0) {
    pUVar3 = (this->CameraAsset).field0_0x0.DebugPtr;
    if (pUVar3 == (UCameraAsset *)0x0) {
      if (1 < (byte)LogCameraSystem._0_1_) {
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
        return;
      }
    }
    else {
      pUVar4 = (pUVar3->CameraDirector).field0_0x0.DebugPtr;
      if (pUVar4 == (UCameraDirector *)0x0) {
        if (1 < (byte)LogCameraSystem._0_1_) {
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
          return;
        }
      }
      else {
        local_res8 = &this->DirectorEvaluatorStorage;
        pFVar8 = (FCameraDirectorEvaluator *)
                 (**(code **)(pUVar4->_padding_ + 0x2b0))(pUVar4,&local_res8);
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable((UObject *)pUVar4);
        }
        (pFVar8->PrivateCameraDirector).field0_0x0.DebugPtr = pUVar4;
        this->DirectorEvaluator = pFVar8;
        local_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pTVar9 = TSharedFromThis<UE::Cameras::FCameraEvaluationContext,1>::AsShared
                           ((TSharedFromThis<UE::Cameras::FCameraEvaluationContext,1> *)
                            &this->field_0x10,&local_18);
        pTVar5 = (pTVar9->SharedReferenceCount).ReferenceController;
        pFVar6 = pTVar9->Object;
        if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_18.SharedReferenceCount.ReferenceController);
        }
        else {
          LOCK();
          pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
          UNLOCK();
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_18.SharedReferenceCount.ReferenceController);
          LOCK();
          pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_18.Object = (FCameraEvaluationContext *)0x0;
        local_28 = pFVar6;
        local_18.SharedReferenceCount.ReferenceController = pTVar5;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_20,&local_18.SharedReferenceCount);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
        FVar7.ReferenceController = local_20.ReferenceController;
        pFVar8 = this->DirectorEvaluator;
        (pFVar8->WeakOwnerContext).Object = local_28;
        if (local_20.ReferenceController !=
            (pFVar8->WeakOwnerContext).WeakReferenceCount.ReferenceController) {
          if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_20.ReferenceController)->WeakReferenceCount =
                 (atomic<int>)((int)(local_20.ReferenceController)->WeakReferenceCount + 1);
            UNLOCK();
          }
          pTVar5 = (pFVar8->WeakOwnerContext).WeakReferenceCount.ReferenceController;
          if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar1 = &pTVar5->WeakReferenceCount;
            aVar2 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar2 == (atomic<int>)0x1) {
              (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
            }
          }
          (pFVar8->WeakOwnerContext).WeakReferenceCount.ReferenceController =
               FVar7.ReferenceController;
        }
        (**(code **)(pFVar8->_padding_ + 0x18))(pFVar8,&local_28);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_20.ReferenceController);
      }
    }
  }
  return;
}

// Deactivate @ 14d551ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraEvaluationContext::Deactivate
          (FCameraEvaluationContext *this,FCameraEvaluationContextDeactivateParams *param_1)

{
  FCameraDirectorEvaluator *pFVar1;
  bool bVar2;
  ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> FVar3;
  undefined1 auStack_138 [32];
  undefined1 local_118 [8];
  FCameraDirectorEvaluationResult local_110;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_138;
  if ((this->bActivated == false) &&
     (bVar2 = `UE::Cameras::FCameraEvaluationContext::Deactivate'::__l3::<lambda_1>::operator()
                        (local_118), !bVar2)) {
    return;
  }
  pFVar1 = this->DirectorEvaluator;
  if (pFVar1 != (FCameraDirectorEvaluator *)0x0) {
    local_110.Requests.AllocatorInstance.SecondaryData =
         (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0;
    local_110.Requests.ArrayNum = 0;
    local_110.Requests.ArrayMax = 4;
    (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,local_118,&local_110);
    pFVar1->Evaluator = (FCameraSystemEvaluator *)0x0;
    ExecuteSetupAndTeardownRequests(this,&local_110);
    FVar3 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)&local_110;
    if (local_110.Requests.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
      FVar3 = local_110.Requests.AllocatorInstance.SecondaryData;
    }
    DestructItems<UE::Cameras::FCameraRigActivationDeactivationRequest,int>
              ((FCameraRigActivationDeactivationRequest *)FVar3,local_110.Requests.ArrayNum);
    if (local_110.Requests.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
      FMemory::Free((void *)local_110.Requests.AllocatorInstance.SecondaryData);
    }
  }
  (**(code **)(*(longlong *)this + 0x20))(this,param_1);
  this->CameraSystemEvaluator = (FCameraSystemEvaluator *)0x0;
  this->bActivated = false;
  return;
}

// ExecuteSetupAndTeardownRequests @ 14d553720

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraEvaluationContext::ExecuteSetupAndTeardownRequests
          (FCameraEvaluationContext *this,FCameraDirectorEvaluationResult *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> FVar3;
  FRootCameraNodeEvaluator *this_00;
  UCameraDirector *pUVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  UCameraRigAsset *pUVar8;
  uchar *puVar9;
  undefined1 local_res8 [8];
  FName local_res18;
  FCameraRigProxyResolveParams local_res20;
  FString local_48;
  
  if (this->CameraSystemEvaluator == (FCameraSystemEvaluator *)0x0) {
    bVar6 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2892438673154899641>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraEvaluationContext.cpp"
                       ,0x147,"CameraSystemEvaluator");
    if (!bVar6) {
      return;
    }
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar3 = (param_1->Requests).AllocatorInstance.SecondaryData;
  piVar1 = &(param_1->Requests).ArrayNum;
  iVar2 = *piVar1;
  this_00 = this->CameraSystemEvaluator->RootEvaluator;
  if (FVar3 != (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
    param_1 = (FCameraDirectorEvaluationResult *)FVar3;
  }
  puVar9 = (uchar *)((longlong)param_1 + 0x10);
  do {
    while( true ) {
      if (*piVar1 != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UE::Cameras::FCameraRigActivationDeactivationRequest,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> *)(puVar9 + -0x10)
          == (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> *)
             ((longlong)iVar2 * 0x38 + (longlong)param_1)) {
        return;
      }
      if (puVar9[0x14] != '\x02') break;
      lVar7 = *(longlong *)puVar9;
      if (lVar7 == 0) {
        lVar7 = *(longlong *)(puVar9 + 8);
      }
      if ((byte)LogCameraSystem._0_1_ < 2) goto LAB_14d553926;
      if (lVar7 == 0) {
        ::FString::FString(&local_48,L"None");
      }
      else {
        local_res18 = *(FName *)(lVar7 + 0x18);
        ::FName::ToString(&local_res18,&local_48);
      }
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
      if (local_48.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
      goto LAB_14d553926;
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
      puVar9 = puVar9 + 0x38;
    }
    pUVar4 = (this->DirectorEvaluator->PrivateCameraDirector).field0_0x0.DebugPtr;
    if ((*(longlong *)puVar9 == 0) &&
       (*(UCameraRigProxyAsset **)(puVar9 + 8) != (UCameraRigProxyAsset *)0x0)) {
      if (pUVar4 == (UCameraDirector *)0x0) {
        bVar6 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<648644704279199764>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraDirectorEvaluator.cpp"
                           ,0x14,"InDirector");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        local_res20.CameraRigProxy = *(UCameraRigProxyAsset **)(puVar9 + 8);
        pUVar8 = FCameraRigProxyRedirectTable::ResolveProxy
                           (&pUVar4->CameraRigProxyRedirectTable,&local_res20);
        if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UCameraRigAsset *)0x0))
        {
          GC::MarkAsReachable((UObject *)pUVar8);
        }
        *(UCameraRigAsset **)puVar9 = pUVar8;
      }
    }
    if ((*(longlong *)
          ((ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> *)(puVar9 + -0x10))
          ->InlineData != 0) && (*(longlong *)puVar9 != 0)) {
      FRootCameraNodeEvaluator::ExecuteCameraDirectorRequest
                (this_00,(FCameraRigActivationDeactivationRequest *)(puVar9 + -0x10));
    }
LAB_14d553926:
    puVar9 = puVar9 + 0x38;
  } while( true );
}

// GetCameraSystemEvaluator @ 14d5565d0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TSharedPtr<UE::Cameras::FCameraSystemEvaluator,1> * __thiscall
UE::Cameras::FCameraEvaluationContext::GetCameraSystemEvaluator
          (FCameraEvaluationContext *this,
          TSharedPtr<UE::Cameras::FCameraSystemEvaluator,1> *__return_storage_ptr__)

{
  FCameraSystemEvaluator *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  TSharedPtr<UE::Cameras::FCameraSystemEvaluator,1> *pTVar5;
  FCameraSystemEvaluator *pFVar6;
  FCameraSystemEvaluator *pFVar7;
  FCameraSystemEvaluator *pFVar8;
  bool bVar9;
  
  pFVar8 = (FCameraSystemEvaluator *)0x0;
  pFVar1 = this->CameraSystemEvaluator;
  if (pFVar1 == (FCameraSystemEvaluator *)0x0) {
    __return_storage_ptr__->Object = (FCameraSystemEvaluator *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  pFVar7 = (FCameraSystemEvaluator *)pFVar1->_padding_;
  pFVar6 = pFVar7;
  if (pFVar7 != (FCameraSystemEvaluator *)0x0) {
    iVar3 = (int)pFVar7->_padding_;
    do {
      pFVar6 = pFVar8;
      if (iVar3 == 0) goto LAB_14d556625;
      LOCK();
      iVar4 = (int)pFVar7->_padding_;
      bVar9 = iVar3 == iVar4;
      if (bVar9) {
        *(int *)&pFVar7->_padding_ = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar4;
    } while (!bVar9);
    pFVar8 = (FCameraSystemEvaluator *)pFVar1->_padding_;
    pFVar6 = pFVar7;
    if (pFVar8 == pFVar1) goto LAB_14d55664b;
  }
LAB_14d556625:
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("SharedThis.Get() == this",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x67f,L"");
  pFVar7 = pFVar6;
  if (bVar9) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedPtr<UE::Cameras::FCameraSystemEvaluator,1> *)(*pcVar2)();
    return pTVar5;
  }
LAB_14d55664b:
  if (pFVar8 == (FCameraSystemEvaluator *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedPtr<UE::Cameras::FCameraSystemEvaluator,1> *)(*pcVar2)();
      return pTVar5;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedPtr<UE::Cameras::FCameraSystemEvaluator,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  __return_storage_ptr__->Object = pFVar8;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar7;
  if (pFVar7 != (FCameraSystemEvaluator *)0x0) {
    LOCK();
    *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar7);
  return __return_storage_ptr__;
}

// GetOrAddConditionalResult @ 14d5580f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraNodeEvaluationResult * __thiscall
UE::Cameras::FCameraEvaluationContext::GetOrAddConditionalResult
          (FCameraEvaluationContext *this,ECameraEvaluationDataCondition param_1)

{
  UCameraAsset *pUVar1;
  FCameraNodeEvaluationResult *pFVar2;
  longlong lVar3;
  TKeyInitializer<ECameraEvaluationDataCondition_const_&> local_res8;
  ECameraEvaluationDataCondition local_res10 [8];
  ECameraEvaluationDataCondition *local_res18 [2];
  
  local_res10[0] = param_1;
  pFVar2 = TMapBase<enum_ECameraEvaluationDataCondition,UE::Cameras::FCameraNodeEvaluationResult,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ECameraEvaluationDataCondition,UE::Cameras::FCameraNodeEvaluationResult,0>_>
           ::Find(&this->ConditionalResults,param_1);
  if (pFVar2 == (FCameraNodeEvaluationResult *)0x0) {
    local_res18[0] = local_res10;
    TSet<TTuple<enum_ECameraEvaluationDataCondition,UE::Cameras::FCameraNodeEvaluationResult>,TDefaultMapHashableKeyFuncs<enum_ECameraEvaluationDataCondition,UE::Cameras::FCameraNodeEvaluationResult,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<enum_ECameraEvaluationDataCondition_const_&>_>
              (&this->ConditionalResults,&local_res8,(bool *)local_res18);
    pUVar1 = (this->CameraAsset).field0_0x0.DebugPtr;
    lVar3 = (longlong)(int)local_res8.Key * 0xa20 + *(longlong *)&this->ConditionalResults;
    if (pUVar1 != (UCameraAsset *)0x0) {
      FCameraVariableTable::Initialize
                ((FCameraVariableTable *)(lVar3 + 0x98),&(pUVar1->AllocationInfo).VariableTableInfo)
      ;
      FCameraContextDataTable::Initialize
                ((FCameraContextDataTable *)(lVar3 + 0x108),
                 &(pUVar1->AllocationInfo).ContextDataTableInfo);
    }
    pFVar2 = (FCameraNodeEvaluationResult *)(lVar3 + 0x10);
  }
  return pFVar2;
}

// GetTypeID @ 14d558d20

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraObjectTypeID * __thiscall
UE::Cameras::FCameraEvaluationContext::GetTypeID(FCameraEvaluationContext *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// GetViewportSize @ 14d558d70

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TIntPoint<int> __thiscall
UE::Cameras::FCameraEvaluationContext::GetViewportSize(FCameraEvaluationContext *this)

{
  APlayerController *this_00;
  TIntPoint<int>_u_0 in_RDX;
  int local_res8 [4];
  int local_res18 [4];
  
  if ((this->OverrideViewportSize).bIsSet != false) {
    *(TIntPoint<int>_u_0 *)in_RDX = (this->OverrideViewportSize).TypedValue.field0_0x0;
    return (TIntPoint<int>)in_RDX;
  }
  this_00 = (APlayerController *)FWeakObjectPtr::Get(&(this->WeakPlayerController).WeakPtr);
  if (this_00 != (APlayerController *)0x0) {
    local_res8[0] = 0;
    local_res18[0] = 0;
    APlayerController::GetViewportSize(this_00,local_res8,local_res18);
    *(int *)in_RDX = local_res8[0];
    *(int *)((longlong)in_RDX + 4) = local_res18[0];
    return (TIntPoint<int>)in_RDX;
  }
  *(undefined8 *)in_RDX = 0;
  return (TIntPoint<int>)in_RDX;
}

// GetWorld @ 14d558df0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UE::Cameras::FCameraEvaluationContext::GetWorld(FCameraEvaluationContext *this)

{
  UObject *pUVar1;
  UWorld *pUVar2;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->WeakOwner).WeakPtr);
  if (pUVar1 != (UObject *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d558e13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar2 = (UWorld *)
             (**(code **)(*(longlong *)pUVar1 + 0x180))
                       (pUVar1,*(code **)(*(longlong *)pUVar1 + 0x180));
    return pUVar2;
  }
  return (UWorld *)0x0;
}

// Initialize @ 14d5594d0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraEvaluationContext::Initialize
          (FCameraEvaluationContext *this,FCameraEvaluationContextInitializeParams *param_1)

{
  UObject *pUVar1;
  UCameraAsset *pUVar2;
  APlayerController *pAVar3;
  bool bVar4;
  FWeakObjectPtr local_res8;
  APlayerController *local_res18 [2];
  
  if ((this->bInitialized != false) &&
     (bVar4 = `UE::Cameras::FCameraEvaluationContext::Initialize'::__l3::<lambda_1>::operator()
                        (&local_res8), !bVar4)) {
    return;
  }
  pUVar1 = (param_1->Owner).field0_0x0.DebugPtr;
  if (GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar1 != (UObject *)0x0) {
      GC::MarkAsReachable(pUVar1);
    }
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = (APlayerController *)pUVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  (this->WeakOwner).WeakPtr = local_res8;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (param_1->CameraAsset).field0_0x0.DebugPtr, pUVar2 != (UCameraAsset *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->CameraAsset).field0_0x0 = (param_1->CameraAsset).field0_0x0;
  pAVar3 = (param_1->PlayerController).field0_0x0.DebugPtr;
  if (GC::GIsIncrementalReachabilityPending != false) {
    if (pAVar3 != (APlayerController *)0x0) {
      GC::MarkAsReachable((UObject *)pAVar3);
    }
    if ((GC::GIsIncrementalReachabilityPending != false) && (pAVar3 != (APlayerController *)0x0)) {
      GC::MarkAsReachable((UObject *)pAVar3);
    }
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = pAVar3;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pAVar3 != (APlayerController *)0x0)) {
    GC::MarkAsReachable((UObject *)pAVar3);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  pUVar2 = (this->CameraAsset).field0_0x0.DebugPtr;
  (this->WeakPlayerController).WeakPtr = local_res8;
  if (pUVar2 != (UCameraAsset *)0x0) {
    FCameraVariableTable::Initialize
              (&(this->InitialResult).VariableTable,&(pUVar2->AllocationInfo).VariableTableInfo);
    FCameraContextDataTable::Initialize
              (&(this->InitialResult).ContextDataTable,
               &(pUVar2->AllocationInfo).ContextDataTableInfo);
  }
  this->bInitialized = true;
  return;
}

// IsKindOf @ 14d55a4d0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FCameraEvaluationContext::IsKindOf
          (FCameraEvaluationContext *this,FCameraObjectTypeID *param_1)

{
  return (TCameraObjectTypeID<UE::Cameras::FCameraEvaluationContext>)param_1->ID == PrivateTypeID;
}

// OnActivate @ 14d55aba0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraEvaluationContext::OnActivate
          (FCameraEvaluationContext *this,FCameraEvaluationContextActivateParams *param_1)

{
  return;
}

// OnAddReferencedObjects @ 14d55ad80

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraEvaluationContext::OnAddReferencedObjects
          (FCameraEvaluationContext *this,FReferenceCollector *param_1)

{
  return;
}

// OnDeactivate @ 14d55b590

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraEvaluationContext::OnDeactivate
          (FCameraEvaluationContext *this,FCameraEvaluationContextDeactivateParams *param_1)

{
  return;
}

// OnEndCameraSystemUpdate @ 14d55bb30

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraEvaluationContext::OnEndCameraSystemUpdate(FCameraEvaluationContext *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FCameraDirectorEvaluator *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  FCameraEvaluationContext *this_00;
  code *pcVar7;
  TMap<ECameraEvaluationDataCondition,UE::Cameras::FCameraNodeEvaluationResult,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ECameraEvaluationDataCondition,UE::Cameras::FCameraNodeEvaluationResult,0>_>
  *pTVar8;
  TMap<ECameraEvaluationDataCondition,UE::Cameras::FCameraNodeEvaluationResult,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ECameraEvaluationDataCondition,UE::Cameras::FCameraNodeEvaluationResult,0>_>
  *pTVar9;
  bool bVar10;
  longlong lVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  undefined1 *puVar19;
  uint *puVar20;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_c8;
  undefined1 local_c7 [7];
  TMap<ECameraEvaluationDataCondition,UE::Cameras::FCameraNodeEvaluationResult,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ECameraEvaluationDataCondition,UE::Cameras::FCameraNodeEvaluationResult,0>_>
  *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  int local_90;
  int local_8c;
  TMap<ECameraEvaluationDataCondition,UE::Cameras::FCameraNodeEvaluationResult,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ECameraEvaluationDataCondition,UE::Cameras::FCameraNodeEvaluationResult,0>_>
  *local_88;
  TMap<ECameraEvaluationDataCondition,UE::Cameras::FCameraNodeEvaluationResult,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ECameraEvaluationDataCondition,UE::Cameras::FCameraNodeEvaluationResult,0>_>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  FCameraPose::ClearAllChangedFlags(&(this->InitialResult).CameraPose);
  FCameraVariableTable::AutoResetValues(&(this->InitialResult).VariableTable);
  FCameraVariableTable::ClearAllWrittenThisFrameFlags(&(this->InitialResult).VariableTable);
  FCameraContextDataTable::AutoResetValues(&(this->InitialResult).ContextDataTable);
  iVar3 = (this->InitialResult).ContextDataTable.Entries.ArrayNum;
  pFVar13 = (this->InitialResult).ContextDataTable.Entries.AllocatorInstance.Data;
  pFVar17 = pFVar13 + (longlong)iVar3 * 0x20;
  while( true ) {
    if ((this->InitialResult).ContextDataTable.Entries.ArrayNum != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UE::Cameras::FCameraContextDataTable::FEntry,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar13 == pFVar17) break;
    pFVar13[0x1c] = (FScriptContainerElement)((byte)pFVar13[0x1c] & 0xf7);
    pFVar13 = pFVar13 + 0x20;
  }
  puVar1 = &(this->ConditionalResults).field_0x10;
  iStack_b8 = 0;
  iVar3 = *(int *)&(this->ConditionalResults).field_0x28;
  local_c0 = &this->ConditionalResults;
  local_a0 = 0;
  uStack_b4 = 1;
  iStack_a4 = 0;
  if (iVar3 != 0) {
    puVar20 = *(uint **)&(this->ConditionalResults).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar16 = *puVar20;
    while (uVar16 == 0) {
      lVar11 = (longlong)iStack_b8;
      local_a0 = local_a0 + 0x20;
      iStack_b8 = iStack_b8 + 1;
      iStack_a4 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b8) goto LAB_14d55bc4d;
      uVar16 = puVar20[lVar11 + 1];
    }
    uStack_b4 = -uVar16 & uVar16;
    uVar2 = (ulonglong)uStack_b4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_90 = (int)lVar11;
    iStack_a4 = local_a0 + -1 + local_90;
    if (iVar3 < iStack_a4) {
      iStack_a4 = iVar3;
    }
  }
LAB_14d55bc4d:
  uVar16 = *(uint *)&(this->ConditionalResults).field_0x28;
  iStack_98 = *(int *)&(this->ConditionalResults).field_0x8 -
              *(int *)&(this->ConditionalResults).field_0x34;
  uVar14 = uVar16 & 0xffffffe0;
  TStack_78._padding_ = CONCAT44(uStack_b4,iStack_b8);
  uStack_a8 = 0xffffffff;
  TStack_78.CurrentBitIndex = iStack_a4;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar16 >> 5;
  TStack_78._28_4_ = iStack_a4;
  TStack_78.BaseBitIndex = local_a0;
  uStack_58 = CONCAT44(uStack_94,iStack_98);
  local_b0 = puVar1;
  iStack_9c = iStack_a4;
  local_88 = local_c0;
  local_80 = local_c0;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar8 = local_88;
  uVar4 = *(uint *)&(this->ConditionalResults).field_0x28;
  if (uVar16 != uVar4) {
    puVar19 = *(undefined1 **)&(this->ConditionalResults).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar12 * 4);
    while (uVar16 == 0) {
      lVar11 = (longlong)iVar12;
      uVar14 = uVar14 + 0x20;
      iVar12 = iVar12 + 1;
      uVar16 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14d55bd60;
      uVar16 = *(uint *)(puVar19 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_8c = (int)lVar11;
    uVar16 = local_8c + -1 + uVar14;
    if ((int)uVar4 < (int)uVar16) {
      uVar16 = uVar4;
    }
  }
LAB_14d55bd60:
  while( true ) {
    pTVar9 = local_80;
    if (*(int *)&local_80->field_0x8 - *(int *)&local_80->field_0x34 != (int)uStack_58) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<enum_ECameraEvaluationDataCondition,UE::Cameras::FCameraNodeEvaluationResult>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_78.CurrentBitIndex == uVar16) &&
        (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == pTVar8))
    break;
    lVar18 = (longlong)TStack_78.CurrentBitIndex * 0xa20 + *(longlong *)pTVar9;
    FCameraPose::ClearAllChangedFlags((FCameraPose *)(lVar18 + 0x10));
    FCameraVariableTable::AutoResetValues((FCameraVariableTable *)(lVar18 + 0x98));
    FCameraVariableTable::ClearAllWrittenThisFrameFlags((FCameraVariableTable *)(lVar18 + 0x98));
    iVar3 = *(int *)(lVar18 + 0x110);
    lVar11 = *(longlong *)(lVar18 + 0x108);
    lVar15 = (longlong)iVar3 * 0x20 + lVar11;
    while( true ) {
      if (*(int *)(lVar18 + 0x110) != iVar3) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<UE::Cameras::FCameraContextDataTable::FEntry,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res20);
      }
      if (lVar11 == lVar15) break;
      if ((*(byte *)(lVar11 + 0x1c) & 2) != 0) {
        *(byte *)(lVar11 + 0x1c) = *(byte *)(lVar11 + 0x1c) & 0xf3;
      }
      lVar11 = lVar11 + 0x20;
    }
    iVar3 = *(int *)(lVar18 + 0x110);
    lVar11 = *(longlong *)(lVar18 + 0x108);
    lVar15 = (longlong)iVar3 * 0x20 + lVar11;
    while( true ) {
      if (*(int *)(lVar18 + 0x110) != iVar3) {
        local_c8 = 0;
        `TCheckedPointerIterator<UE::Cameras::FCameraContextDataTable::FEntry,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_c8);
      }
      if (lVar11 == lVar15) break;
      *(byte *)(lVar11 + 0x1c) = *(byte *)(lVar11 + 0x1c) & 0xf7;
      lVar11 = lVar11 + 0x20;
    }
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  }
  pFVar5 = this->DirectorEvaluator;
  if (pFVar5 != (FCameraDirectorEvaluator *)0x0) {
    (pFVar5->NextActivationTransitionOverride).field0_0x0.DebugPtr = (UCameraRigTransition *)0x0;
    pFVar5->bNextActivationForce = false;
  }
  iVar3 = (this->ChildrenContexts).ArrayNum;
  pFVar13 = (this->ChildrenContexts).AllocatorInstance.Data;
  pFVar17 = pFVar13 + (longlong)iVar3 * 0x10;
  while( true ) {
    if ((this->ChildrenContexts).ArrayNum != iVar3) {
      local_c7[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<UE::Cameras::FCameraEvaluationContext,1>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_c7);
    }
    if (pFVar13 == pFVar17) {
      return;
    }
    pTVar6 = *(TReferenceControllerBase<1> **)(pFVar13 + 8);
    this_00 = *(FCameraEvaluationContext **)pFVar13;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((this_00 == (FCameraEvaluationContext *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) break;
    OnEndCameraSystemUpdate(this_00);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    pFVar13 = pFVar13 + 0x10;
  }
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

// RegisterChildContext @ 14d55eec0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FCameraEvaluationContext::RegisterChildContext
          (FCameraEvaluationContext *this,
          TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  TArray<TSharedPtr<UE::Cameras::FCameraEvaluationContext,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  FCameraEvaluationContext *pFVar6;
  FCameraEvaluationContext *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  code *pcVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *pTVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res10 [8];
  FCameraEvaluationContext *local_38;
  TReferenceControllerBase<1> *local_30;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> local_28;
  
  if ((((param_1->Object->WeakParent).Object != (FCameraEvaluationContext *)0x0) &&
      (pTVar5 = (param_1->Object->WeakParent).WeakReferenceCount.ReferenceController,
      pTVar5 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar5->SharedReferenceCount)) {
    local_res10[0] = 0;
    bVar10 = `UE::Cameras::FCameraEvaluationContext::RegisterChildContext'::__l3::<lambda_1>::
             operator()(local_res10);
    if (!bVar10) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return false;
    }
  }
  pTVar13 = TSharedFromThis<UE::Cameras::FCameraEvaluationContext,1>::AsShared
                      ((TSharedFromThis<UE::Cameras::FCameraEvaluationContext,1> *)&this->field_0x10
                       ,&local_28);
  pTVar5 = (pTVar13->SharedReferenceCount).ReferenceController;
  pFVar6 = pTVar13->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  pFVar7 = param_1->Object;
  (pFVar7->WeakParent).Object = pFVar6;
  if (pTVar5 != (pFVar7->WeakParent).WeakReferenceCount.ReferenceController) {
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar8 = (pFVar7->WeakParent).WeakReferenceCount.ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar8->WeakReferenceCount;
      aVar4 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)(pTVar8->_padding_ + 8))(pTVar8,1);
      }
    }
    (pFVar7->WeakParent).WeakReferenceCount.ReferenceController = pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  local_38 = param_1->Object;
  pTVar3 = &this->ChildrenContexts;
  local_30 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar14 = (pTVar3->AllocatorInstance).Data;
  if ((pFVar14 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 <
      pFVar14 + (longlong)(this->ChildrenContexts).ArrayMax * 0x10)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      uVar11 = (*pcVar9)();
      return (bool)uVar11;
    }
  }
  iVar12 = (this->ChildrenContexts).ArrayNum;
  piVar2 = &(this->ChildrenContexts).ArrayMax;
  if (iVar12 == *piVar2) {
    iVar12 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar3->AllocatorInstance,piVar2);
  }
  (this->ChildrenContexts).ArrayNum = iVar12 + 1;
  pFVar14 = (pTVar3->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
  *(FCameraEvaluationContext **)pFVar14 = local_38;
  *(TReferenceControllerBase<1> **)(pFVar14 + 8) = local_30;
  local_30 = (TReferenceControllerBase<1> *)0x0;
  local_38 = (FCameraEvaluationContext *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// RemoveChildContext @ 14d560c80

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FCameraEvaluationContext::RemoveChildContext
          (FCameraEvaluationContext *this,
          TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FCameraEvaluationContext *pFVar2;
  FCameraDirectorEvaluator *pFVar3;
  FCameraEvaluationContext *pFVar4;
  code *pcVar5;
  atomic<int> aVar6;
  undefined1 uVar7;
  atomic<int> aVar8;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> local_38;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> local_28;
  
  if (this->DirectorEvaluator == (FCameraDirectorEvaluator *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return false;
  }
  pTVar9 = TSharedFromThis<UE::Cameras::FCameraEvaluationContext,1>::AsShared
                     ((TSharedFromThis<UE::Cameras::FCameraEvaluationContext,1> *)&this->field_0x10,
                      &local_28);
  pTVar1 = (pTVar9->SharedReferenceCount).ReferenceController;
  pFVar2 = pTVar9->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  pFVar3 = this->DirectorEvaluator;
  pTVar10 = (pFVar3->WeakOwnerContext).WeakReferenceCount.ReferenceController;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar6 = pTVar10->SharedReferenceCount;
    do {
      if (aVar6 == (atomic<int>)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d560d04;
      }
      LOCK();
      aVar8 = pTVar10->SharedReferenceCount;
      bVar11 = aVar6 == aVar8;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar8 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar8;
    } while (!bVar11);
    pFVar4 = (pFVar3->WeakOwnerContext).Object;
    if ((pFVar4 != (FCameraEvaluationContext *)0x0) && (pFVar4 == pFVar2)) goto LAB_14d560d31;
  }
LAB_14d560d04:
  bVar11 = Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<_2892438673154899587>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraEvaluationContext.cpp"
                      ,0x17d,"DirectorEvaluator->GetEvaluationContext() == SharedThis(this)");
  if (bVar11) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
LAB_14d560d31:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_38.Object = param_1->Object;
  pFVar3 = this->DirectorEvaluator;
  local_38.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar11 = FCameraDirectorEvaluator::RemoveChildEvaluationContext(pFVar3,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar11;
}

// UnregisterChildContext @ 14d569f60

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FCameraEvaluationContext::UnregisterChildContext
          (FCameraEvaluationContext *this,
          TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  FCameraEvaluationContext *pFVar5;
  FCameraEvaluationContext *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined1 uVar9;
  atomic<int> aVar10;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  FCameraEvaluationContext *pFVar18;
  longlong lVar19;
  int iVar20;
  bool bVar21;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FCameraEvaluationContext *local_78;
  TReferenceControllerBase<1> *local_70;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> local_68;
  undefined8 local_58 [3];
  
  pTVar11 = TSharedFromThis<UE::Cameras::FCameraEvaluationContext,1>::AsShared
                      ((TSharedFromThis<UE::Cameras::FCameraEvaluationContext,1> *)&this->field_0x10
                       ,&local_68);
  pTVar4 = (pTVar11->SharedReferenceCount).ReferenceController;
  pFVar5 = pTVar11->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  pFVar6 = param_1->Object;
  pFVar18 = (FCameraEvaluationContext *)0x0;
  pTVar12 = (pFVar6->WeakParent).WeakReferenceCount.ReferenceController;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar12->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar12 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d569fd0;
      }
      LOCK();
      aVar10 = pTVar12->SharedReferenceCount;
      bVar21 = aVar2 == aVar10;
      if (bVar21) {
        pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar10 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar10;
    } while (!bVar21);
    pFVar18 = (pFVar6->WeakParent).Object;
  }
LAB_14d569fd0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  if (pFVar5 != pFVar18) {
    local_res18[0] = 0;
    bVar21 = `UE::Cameras::FCameraEvaluationContext::UnregisterChildContext'::__l3::<lambda_1>::
             operator()(local_res18);
    if (!bVar21) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return false;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pFVar5 = param_1->Object;
  if (&pFVar5->WeakParent != (TWeakPtr<UE::Cameras::FCameraEvaluationContext,1> *)local_58) {
    pTVar4 = (pFVar5->WeakParent).WeakReferenceCount.ReferenceController;
    (pFVar5->WeakParent).Object = (FCameraEvaluationContext *)0x0;
    (pFVar5->WeakParent).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
  }
  local_78 = param_1->Object;
  local_70 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_70 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_70->SharedReferenceCount = (atomic<int>)((int)local_70->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar7 = (this->ChildrenContexts).AllocatorInstance.Data;
  if (((pFVar7 <= (FScriptContainerElement *)&local_78) &&
      ((FScriptContainerElement *)&local_78 <
       pFVar7 + (longlong)(this->ChildrenContexts).ArrayMax * 0x10)) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar21)) {
    pcVar8 = (code *)swi(3);
    uVar9 = (*pcVar8)();
    return (bool)uVar9;
  }
  iVar3 = (this->ChildrenContexts).ArrayNum;
  lVar19 = (longlong)iVar3;
  if (iVar3 == 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
  }
  else {
    iVar20 = 0;
    pFVar7 = (this->ChildrenContexts).AllocatorInstance.Data;
    bVar21 = *(FCameraEvaluationContext **)pFVar7 != local_78;
    lVar14 = 0;
    iVar16 = 0;
    do {
      lVar14 = lVar14 + 1;
      iVar17 = iVar16 + 1;
      if (lVar14 < lVar19) {
        pFVar13 = pFVar7 + lVar14 * 0x10;
        do {
          if (bVar21 != (*(FCameraEvaluationContext **)pFVar13 != local_78)) break;
          iVar17 = iVar17 + 1;
          lVar14 = lVar14 + 1;
          pFVar13 = pFVar13 + 0x10;
        } while (lVar14 < lVar19);
      }
      iVar15 = iVar17 - iVar16;
      if (bVar21 == false) {
        DestructItems<TSharedPtr<UE::Cameras::FCameraEvaluationContext,1>,int>
                  ((TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> *)
                   (pFVar7 + (longlong)iVar16 * 0x10),iVar15);
      }
      else {
        if (iVar20 != iVar16) {
          memmove(pFVar7 + (longlong)iVar20 * 0x10,pFVar7 + (longlong)iVar16 * 0x10,
                  (longlong)iVar15 << 4);
        }
        iVar20 = iVar20 + iVar15;
      }
      bVar21 = (bool)(bVar21 ^ 1);
      iVar16 = iVar17;
    } while (lVar14 < lVar19);
    (this->ChildrenContexts).ArrayNum = iVar20;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
    if (iVar3 - iVar20 == 1) goto LAB_14d56a221;
  }
  `UE::Cameras::FCameraEvaluationContext::UnregisterChildContext'::__l2::<lambda_2>::operator()
            (local_res20);
LAB_14d56a221:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// operator() @ 150580c50

bool __thiscall
`UE::Cameras::FCameraEvaluationContext::Activate'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2892438673154899701>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2892438673154899701>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150580cd0

bool __thiscall
`UE::Cameras::FCameraEvaluationContext::Deactivate'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2892438673154899667>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2892438673154899667>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150580d50

bool __thiscall
`UE::Cameras::FCameraEvaluationContext::Initialize'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2892438673154899889>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2892438673154899889>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150580dd0

bool __thiscall
`UE::Cameras::FCameraEvaluationContext::RegisterChildContext'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2892438673154899578>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2892438673154899578>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150580e50

bool __thiscall
`UE::Cameras::FCameraEvaluationContext::UnregisterChildContext'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2892438673154899566>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2892438673154899566>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150580f90

bool __thiscall
`UE::Cameras::FCameraEvaluationContext::UnregisterChildContext'::__l2::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2892438673154899559>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2892438673154899559>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150580fd0

bool __thiscall
`UE::Cameras::FCameraEvaluationContext::Activate'::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2892438673154899697>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2892438673154899697>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

