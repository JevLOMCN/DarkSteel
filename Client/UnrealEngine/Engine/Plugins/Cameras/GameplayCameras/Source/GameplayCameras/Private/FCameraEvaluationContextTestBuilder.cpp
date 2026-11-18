// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 2

// FCameraEvaluationContextTestBuilder @ 14d655420

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FCameraEvaluationContextTestBuilder * __thiscall
UE::Cameras::Test::FCameraEvaluationContextTestBuilder::FCameraEvaluationContextTestBuilder
          (FCameraEvaluationContextTestBuilder *this,UObject *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  UCameraAsset *pUVar6;
  TReferenceControllerBase<1> *pTVar7;
  FCameraEvaluationContextTestBuilder *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  FCameraEvaluationContext *pFVar10;
  FNamedObjectRegistry *pFVar11;
  FCameraEvaluationContext *local_58;
  FSharedReferencer<1> local_50;
  FNamedObjectRegistry *local_48;
  FSharedReferencer<1> local_40;
  TObjectPtr<UObject>_u_0 local_38;
  UCameraAsset *local_30;
  undefined8 local_28;
  
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = (longlong)&___7FCameraEvaluationContextTestBuilder_Test_Cameras_UE__6B_;
  this->_padding_ = 0;
  (this->EvaluationContext).Object = (FCameraEvaluationContext *)0x0;
  (this->EvaluationContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->NamedObjectRegistry).Object = (FNamedObjectRegistry *)0x0;
  (this->NamedObjectRegistry).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (param_1 == (UObject *)0x0) {
    param_1 = (UObject *)GetTransientPackage();
  }
  pUVar6 = NewObject<UCameraAsset>(param_1);
  this->CameraAsset = pUVar6;
  local_28 = 0;
  if ((GC::GIsIncrementalReachabilityPending != false) && ((UPackage *)param_1 != (UPackage *)0x0))
  {
    GC::MarkAsReachable(param_1);
  }
  pUVar6 = this->CameraAsset;
  local_38.DebugPtr = param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UCameraAsset *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar6);
  }
  local_30 = pUVar6;
  pTVar7 = ::operator_new(0xb00);
  pFVar11 = (FNamedObjectRegistry *)&DAT_00000010;
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar10 = (FCameraEvaluationContext *)&DAT_00000010;
    pTVar7 = pTVar9;
LAB_14d65554a:
    if (((*(longlong *)&pFVar10->field_0x10 == 0) || (*(longlong *)&pFVar10->field_0x18 == 0)) ||
       (*(int *)(*(longlong *)&pFVar10->field_0x18 + 8) < 1)) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(FCameraEvaluationContext **)&pFVar10->field_0x10 = pFVar10;
      if (pTVar7 != *(TReferenceControllerBase<1> **)&pFVar10->field_0x18) {
        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar3 = *(longlong **)&pFVar10->field_0x18;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
        *(TReferenceControllerBase<1> **)&pFVar10->field_0x18 = pTVar7;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    }
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFCameraEvaluationContext_Cameras_UE___00_SharedPointerInternals__6B_
    ;
    FCameraEvaluationContext::FCameraEvaluationContext
              ((FCameraEvaluationContext *)(pTVar7 + 1),
               (FCameraEvaluationContextInitializeParams *)&local_38.ObjectPtr);
    pFVar10 = (FCameraEvaluationContext *)(pTVar7 + 1);
    if (pFVar10 != (FCameraEvaluationContext *)0x0) goto LAB_14d65554a;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FCameraEvaluationContextTestBuilder *)(*pcVar4)();
      return pFVar8;
    }
  }
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58 = pFVar10;
  local_50.ReferenceController = pTVar7;
  if (&this->EvaluationContext != (TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> *)&local_58)
  {
    (this->EvaluationContext).Object = pFVar10;
    local_58 = (FCameraEvaluationContext *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->EvaluationContext).SharedReferenceCount,&local_50);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  this->_padding_ = (longlong)(this->EvaluationContext).Object;
  pTVar7 = ::operator_new(0x70);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pFVar11 = (FNamedObjectRegistry *)(pTVar7 + 1);
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFNamedObjectRegistry_Test_Cameras_UE___00_SharedPointerInternals__6B_
    ;
    pTVar7[3]._padding_ = 0;
    pTVar7[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[1]._padding_ = 0;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[2]._padding_ = 0;
    pTVar7[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[4]._padding_ = 0;
    pTVar7[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[4].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar7[5]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar7[5]._padding_ + 4) = 0;
    pTVar7[6]._padding_ = 0;
    pTVar9 = pTVar7;
    if (pFVar11 == (FNamedObjectRegistry *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FCameraEvaluationContextTestBuilder *)(*pcVar4)();
        return pFVar8;
      }
      goto LAB_14d65570b;
    }
  }
  if (((pFVar11->_padding_ == 0) || (pFVar11->_padding_ == 0)) ||
     (*(int *)(pFVar11->_padding_ + 8) < 1)) {
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar11->_padding_ = (longlong)pFVar11;
    if (pTVar9 != (TReferenceControllerBase<1> *)pFVar11->_padding_) {
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pFVar11->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      pFVar11->_padding_ = (longlong)pTVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
LAB_14d65570b:
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48 = pFVar11;
  local_40.ReferenceController = pTVar9;
  if (&this->NamedObjectRegistry !=
      (TSharedPtr<UE::Cameras::Test::FNamedObjectRegistry,1> *)&local_48) {
    (this->NamedObjectRegistry).Object = pFVar11;
    local_48 = (FNamedObjectRegistry *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->NamedObjectRegistry).SharedReferenceCount,&local_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return this;
}

// GetNamedObjectRegistry @ 14d6600c0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TSharedPtr<UE::Cameras::Test::FNamedObjectRegistry,1> * __thiscall
UE::Cameras::Test::FCameraEvaluationContextTestBuilder::GetNamedObjectRegistry
          (FCameraEvaluationContextTestBuilder *this,
          TSharedPtr<UE::Cameras::Test::FNamedObjectRegistry,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->NamedObjectRegistry).Object;
  pTVar1 = (this->NamedObjectRegistry).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

