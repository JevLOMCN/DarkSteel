// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 10

// ~FBlueprintCameraDirectorEvaluator @ 14d590d70

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FBlueprintCameraDirectorEvaluator::~FBlueprintCameraDirectorEvaluator
          (FBlueprintCameraDirectorEvaluator *this)

{
  int *piVar1;
  int iVar2;
  UBlueprintCameraDirectorEvaluator *pUVar3;
  longlong *plVar4;
  
  pUVar3 = (this->EvaluatorBlueprint).field0_0x0.DebugPtr;
  if (pUVar3 != (UBlueprintCameraDirectorEvaluator *)0x0) {
    pUVar3->OwningDirectorEvaluator = (FCameraDirectorEvaluator *)0x0;
  }
  this->_padding_ = (longlong)&___7FCameraDirectorEvaluator_Cameras_UE__6B_;
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014d590dab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// GetTypeID @ 14d5abb00

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraObjectTypeID * __thiscall
UE::Cameras::FBlueprintCameraDirectorEvaluator::GetTypeID(FBlueprintCameraDirectorEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d5b4620

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FBlueprintCameraDirectorEvaluator::IsKindOf
          (FBlueprintCameraDirectorEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FBlueprintCameraDirectorEvaluator>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraDirectorEvaluator>)param_1->ID !=
      FCameraDirectorEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnActivate @ 14d5b7110

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Cameras::FBlueprintCameraDirectorEvaluator::OnActivate
          (FBlueprintCameraDirectorEvaluator *this,FCameraDirectorActivateParams *param_1,
          FCameraDirectorEvaluationResult *param_2)

{
  UBlueprintCameraDirectorEvaluator *this_00;
  FCameraEvaluationContext *pFVar1;
  UObject *pUVar2;
  UFunction *pUVar3;
  UObject *local_18;
  UObject *local_10;
  
  this_00 = (this->EvaluatorBlueprint).field0_0x0.DebugPtr;
  this->OwningEvaluator = param_1->Evaluator;
  if (this_00 != (UBlueprintCameraDirectorEvaluator *)0x0) {
    FCameraDirectorEvaluationResult::Reset(&this_00->EvaluationResult);
    pFVar1 = (this_00->EvaluationContext).Object;
    pUVar2 = (UObject *)0x0;
    if (pFVar1 != (FCameraEvaluationContext *)0x0) {
      pUVar2 = FWeakObjectPtr::Get(&(pFVar1->WeakOwner).WeakPtr);
    }
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar2);
    }
    local_18 = pUVar2;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar2);
    }
    local_10 = pUVar2;
    pUVar3 = UObject::FindFunctionChecked
                       ((UObject *)this_00,
                        NAME_UBlueprintCameraDirectorEvaluator_ActivateCameraDirector);
    (**(code **)(this_00->_padding_ + 0x260))(this_00,pUVar3,&local_18);
    FCameraDirectorEvaluationResult::operator=
              (param_2,&((this->EvaluatorBlueprint).field0_0x0.DebugPtr)->EvaluationResult);
    return;
  }
  if (1 < (byte)LogCameraSystem._0_1_) {
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
  }
  return;
}

// OnAddChildEvaluationContext @ 14d5b7960

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FBlueprintCameraDirectorEvaluator::OnAddChildEvaluationContext
          (FBlueprintCameraDirectorEvaluator *this,FChildContextManulationParams *param_1,
          FChildContextManulationResult *param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  if ((this->EvaluatorBlueprint).field0_0x0.DebugPtr != (UBlueprintCameraDirectorEvaluator *)0x0) {
    if ((param_1->ChildContext).Object == (FCameraEvaluationContext *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pUVar3 = FWeakObjectPtr::Get(&(((param_1->ChildContext).Object)->WeakOwner).WeakPtr);
    bVar2 = UBlueprintCameraDirectorEvaluator::NativeAddChildEvaluationContext
                      ((this->EvaluatorBlueprint).field0_0x0.DebugPtr,pUVar3);
    if (bVar2) {
      param_2->Result = Success;
    }
  }
  return;
}

// OnAddReferencedObjects @ 14d5b7b90

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FBlueprintCameraDirectorEvaluator::OnAddReferencedObjects
          (FBlueprintCameraDirectorEvaluator *this,FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014d5b7ba3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->EvaluatorBlueprint,0,0);
  return;
}

// OnDeactivate @ 14d5b8eb0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FBlueprintCameraDirectorEvaluator::OnDeactivate
          (FBlueprintCameraDirectorEvaluator *this,FCameraDirectorDeactivateParams *param_1,
          FCameraDirectorEvaluationResult *param_2)

{
  UBlueprintCameraDirectorEvaluator *this_00;
  FCameraEvaluationContext *pFVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  UObject *pUVar5;
  UObject *pUVar6;
  UFunction *pUVar7;
  UObject *pUVar8;
  UObject *pUVar9;
  bool bVar10;
  UObject *local_18;
  UObject *local_10;
  
  pUVar9 = (UObject *)this->_padding_;
  pUVar6 = (UObject *)0x0;
  pUVar8 = pUVar9;
  pUVar5 = pUVar6;
  if (pUVar9 != (UObject *)0x0) {
    aVar3 = *(atomic<int> *)&pUVar9->field_0x8;
    do {
      pUVar8 = pUVar6;
      pUVar5 = (UObject *)0x0;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14d5b8f05;
      LOCK();
      aVar4 = *(atomic<int> *)&pUVar9->field_0x8;
      bVar10 = aVar3 == aVar4;
      if (bVar10) {
        *(atomic<int> *)&pUVar9->field_0x8 = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar10);
    pUVar5 = (UObject *)this->_padding_;
    pUVar8 = pUVar9;
    if (pUVar5 != (UObject *)0x0) goto LAB_14d5b8f2b;
  }
LAB_14d5b8f05:
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  pUVar9 = pUVar8;
  if (bVar10) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14d5b8f2b:
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar5->field_0x20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pUVar9);
  if ((((this->EvaluatorBlueprint).field0_0x0.DebugPtr != (UBlueprintCameraDirectorEvaluator *)0x0)
      && (pUVar5 != (UObject *)0x0)) && ((*(uint *)&pUVar5->field_0x8 & 0x18000) == 0)) {
    this_00 = (this->EvaluatorBlueprint).field0_0x0.DebugPtr;
    FCameraDirectorEvaluationResult::Reset(&this_00->EvaluationResult);
    pFVar1 = (this_00->EvaluationContext).Object;
    if (pFVar1 != (FCameraEvaluationContext *)0x0) {
      pUVar6 = FWeakObjectPtr::Get(&(pFVar1->WeakOwner).WeakPtr);
    }
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar6);
    }
    local_18 = pUVar6;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar6);
    }
    local_10 = pUVar6;
    pUVar7 = UObject::FindFunctionChecked
                       ((UObject *)this_00,
                        NAME_UBlueprintCameraDirectorEvaluator_DeactivateCameraDirector);
    (**(code **)(this_00->_padding_ + 0x260))(this_00,pUVar7,&local_18);
    FCameraDirectorEvaluationResult::operator=
              (param_2,&((this->EvaluatorBlueprint).field0_0x0.DebugPtr)->EvaluationResult);
  }
  this->OwningEvaluator = (FCameraSystemEvaluator *)0x0;
  return;
}

// OnInitialize @ 14d5c2040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Cameras::FBlueprintCameraDirectorEvaluator::OnInitialize
          (FBlueprintCameraDirectorEvaluator *this,FCameraDirectorInitializeParams *param_1)

{
  longlong lVar1;
  UCameraAsset *this_00;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  UClass *pUVar7;
  char *pcVar8;
  FCameraEvaluationContext *pFVar9;
  UObject *pUVar10;
  UClass *pUVar11;
  UBlueprintCameraDirectorEvaluator *pUVar12;
  atomic<unsigned_char> *paVar13;
  longlong *plVar14;
  int iVar15;
  undefined1 auStackY_118 [32];
  FString local_d0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  if (this->_padding_ != 0) {
    pUVar7 = UBlueprintCameraDirector::StaticClass();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar7);
    if ((bVar6) && (lVar1 = this->_padding_, lVar1 != 0)) {
      if (((param_1->OwnerContext).Object == (FCameraEvaluationContext *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_00 = (((param_1->OwnerContext).Object)->CameraAsset).field0_0x0.DebugPtr;
      if (this_00 != (UCameraAsset *)0x0) {
        lVar2 = *(longlong *)(lVar1 + 0x40);
        if ((lVar2 != 0) &&
           (pUVar7 = UBlueprintCameraDirectorEvaluator::StaticClass(), pUVar7 != (UClass *)0x0)) {
          iVar15 = (int)pUVar7->_padding_;
          if ((*(int *)(lVar2 + 0x38) < iVar15) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar15 * 8) !=
              &pUVar7->_padding_)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if ((bVar6) && (*(longlong *)(lVar1 + 0x40) != 0)) {
            pFVar9 = TSharedPtr<UE::Cameras::FCameraEvaluationContext,1>::operator->
                               (&param_1->OwnerContext);
            pUVar10 = FWeakObjectPtr::Get(&(pFVar9->WeakOwner).WeakPtr);
            lVar2 = *(longlong *)(lVar1 + 0x40);
            pUVar7 = (UClass *)0x0;
            if ((lVar2 != 0) &&
               (pUVar11 = UBlueprintCameraDirectorEvaluator::StaticClass(), pUVar11 != (UClass *)0x0
               )) {
              iVar15 = (int)pUVar11->_padding_;
              if ((*(int *)(lVar2 + 0x38) < iVar15) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar15 * 8)
                  != &pUVar11->_padding_)) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              if (bVar6) {
                pUVar7 = *(UClass **)(lVar1 + 0x40);
              }
            }
            FObjectInitializer::AssertIfInConstructor
                      (pUVar10,
                       L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                      );
            pUVar11 = UBlueprintCameraDirectorEvaluator::StaticClass();
            CheckIsClassChildOf_Internal(pUVar11,pUVar7);
            FStaticConstructObjectParameters::FStaticConstructObjectParameters
                      ((FStaticConstructObjectParameters *)local_b8,pUVar7);
            local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
            local_b8._56_8_ = (UPackage *)0x0;
            local_b8._16_4_ = 0;
            local_b8._20_4_ = 0;
            local_b8._24_4_ = RF_NoFlags;
            local_b8._40_8_ = (UObject *)0x0;
            local_b8[0x20] = false;
            local_b8._8_8_ = pUVar10;
            pUVar12 = (UBlueprintCameraDirectorEvaluator *)
                      StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
            if (local_b8._64_8_ != 0) {
              plVar14 = (longlong *)(local_b8 + 0x50);
              if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
                plVar14 = (longlong *)local_b8._104_8_;
              }
              (**(code **)(*plVar14 + 0x10))();
            }
            if ((GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar12 != (UBlueprintCameraDirectorEvaluator *)0x0)) {
              GC::MarkAsReachable((UObject *)pUVar12);
            }
            (this->EvaluatorBlueprint).field0_0x0.DebugPtr = pUVar12;
            if (((pUVar12->OwningDirectorEvaluator != (FCameraDirectorEvaluator *)0x0) ||
                (this == (FBlueprintCameraDirectorEvaluator *)0x0)) &&
               (bVar6 = Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<5449172154014761338>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Directors\\BlueprintCameraDirector.cpp"
                                   ,0x17a,
                                   "OwningDirectorEvaluator == nullptr && InOwningDirectorEvaluator != nullptr"
                                  ), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pUVar12->OwningDirectorEvaluator = (FCameraDirectorEvaluator *)this;
            pTVar3 = (param_1->OwnerContext).SharedReferenceCount.ReferenceController;
            pFVar9 = (param_1->OwnerContext).Object;
            if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
              UNLOCK();
            }
            pTVar5 = (pUVar12->EvaluationContext).SharedReferenceCount.ReferenceController;
            (pUVar12->EvaluationContext).Object = pFVar9;
            (pUVar12->EvaluationContext).SharedReferenceCount.ReferenceController = pTVar3;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar5);
            return;
          }
        }
        if ((byte)LogCameraSystem._0_1_ < 2) {
          return;
        }
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_d0,(UObject *)0x0);
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
        if (local_d0.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        return;
      }
      pcVar8 = "CameraAsset";
      iVar15 = 0x49;
      paVar13 = &bGEnsureHasExecuted<5449172154014761033>;
      goto LAB_14d5c233f;
    }
  }
  pcVar8 = "Blueprint";
  iVar15 = 0x43;
  paVar13 = &bGEnsureHasExecuted<5449172154014761027>;
LAB_14d5c233f:
  bVar6 = Assert::Private::ExecCheckImplInternal
                    (paVar13,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Directors\\BlueprintCameraDirector.cpp"
                     ,iVar15,pcVar8);
  if (!bVar6) {
    return;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// OnRemoveChildEvaluationContext @ 14d5c2400

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FBlueprintCameraDirectorEvaluator::OnRemoveChildEvaluationContext
          (FBlueprintCameraDirectorEvaluator *this,FChildContextManulationParams *param_1,
          FChildContextManulationResult *param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  if ((this->EvaluatorBlueprint).field0_0x0.DebugPtr != (UBlueprintCameraDirectorEvaluator *)0x0) {
    if ((param_1->ChildContext).Object == (FCameraEvaluationContext *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pUVar3 = FWeakObjectPtr::Get(&(((param_1->ChildContext).Object)->WeakOwner).WeakPtr);
    bVar2 = UBlueprintCameraDirectorEvaluator::NativeRemoveChildEvaluationContext
                      ((this->EvaluatorBlueprint).field0_0x0.DebugPtr,pUVar3);
    if (bVar2) {
      param_2->Result = Success;
    }
  }
  return;
}

// OnRun @ 14d5c26b0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FBlueprintCameraDirectorEvaluator::OnRun
          (FBlueprintCameraDirectorEvaluator *this,FCameraDirectorEvaluationParams *param_1,
          FCameraDirectorEvaluationResult *param_2)

{
  float fVar1;
  UBlueprintCameraDirectorEvaluator *this_00;
  FCameraEvaluationContext *pFVar2;
  UObject *pUVar3;
  UFunction *pUVar4;
  float local_38 [2];
  UObject *local_30;
  float local_28;
  UObject *local_20;
  
  this_00 = (this->EvaluatorBlueprint).field0_0x0.DebugPtr;
  if (this_00 != (UBlueprintCameraDirectorEvaluator *)0x0) {
    FCameraDirectorEvaluationResult::Reset(&this_00->EvaluationResult);
    pFVar2 = (this_00->EvaluationContext).Object;
    pUVar3 = (UObject *)0x0;
    if (pFVar2 != (FCameraEvaluationContext *)0x0) {
      pUVar3 = FWeakObjectPtr::Get(&(pFVar2->WeakOwner).WeakPtr);
    }
    fVar1 = param_1->DeltaTime;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar3);
    }
    local_38[0] = param_1->DeltaTime;
    local_30 = pUVar3;
    local_28 = fVar1;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar3);
    }
    local_20 = pUVar3;
    pUVar4 = UObject::FindFunctionChecked
                       ((UObject *)this_00,NAME_UBlueprintCameraDirectorEvaluator_RunCameraDirector)
    ;
    (**(code **)(this_00->_padding_ + 0x260))(this_00,pUVar4,local_38);
    FCameraDirectorEvaluationResult::operator=
              (param_2,&((this->EvaluatorBlueprint).field0_0x0.DebugPtr)->EvaluationResult);
  }
  return;
}

