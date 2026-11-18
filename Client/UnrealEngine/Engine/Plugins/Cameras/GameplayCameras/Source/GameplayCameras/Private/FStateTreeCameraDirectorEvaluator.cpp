// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 9

// ~FStateTreeCameraDirectorEvaluator @ 14d5917d0

void __thiscall
UE::Cameras::FStateTreeCameraDirectorEvaluator::~FStateTreeCameraDirectorEvaluator
          (FStateTreeCameraDirectorEvaluator *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  pFVar3 = (this->EvaluationData).ActiveCameraRigProxies.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->EvaluationData).ActiveCameraRigs.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FStateTreeInstanceData::~FStateTreeInstanceData(&this->StateTreeInstanceData);
  this->_padding_ = (longlong)&___7FCameraDirectorEvaluator_Cameras_UE__6B_;
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014d59182d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// operator() @ 14d5937f0

bool __thiscall
`UE::Cameras::FStateTreeCameraDirectorEvaluator::SetContextRequirements'::__l2::<lambda_1>::
operator()(void *this,FStateTreeExecutionContext *param_1,UStateTree *param_2,
          TArrayView<FStateTreeExternalDataDesc_const_,int> *param_3,
          TArrayView<FStateTreeDataView,int> *param_4)

{
  FStateTreeExternalDataDesc *pFVar1;
  UScriptStruct *pUVar2;
  longlong lVar3;
  FStateTreeDataView *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  UPackage *pUVar9;
  UScriptStruct *pUVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  
  iVar11 = param_3->ArrayNum;
  uVar12 = 0;
  if (0 < iVar11) {
    lVar14 = 0;
    lVar13 = 0;
    pUVar10 = Z_Registration_Info_UScriptStruct_FCameraDirectorStateTreeEvaluationData.
              OuterSingleton;
    do {
      uVar8 = 0;
      if ((int)uVar12 < iVar11) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         pUVar10 = Z_Registration_Info_UScriptStruct_FCameraDirectorStateTreeEvaluationData.
                   OuterSingleton, bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pFVar1 = param_3->DataPtr;
      if (pUVar10 == (UScriptStruct *)0x0) {
        pUVar9 = Z_Construct_UPackage__Script_GameplayCameras();
        pUVar10 = GetStaticStruct(Z_Construct_UScriptStruct_FCameraDirectorStateTreeEvaluationData,
                                  (UObject *)pUVar9,L"CameraDirectorStateTreeEvaluationData");
        Z_Registration_Info_UScriptStruct_FCameraDirectorStateTreeEvaluationData.OuterSingleton =
             pUVar10;
      }
      pUVar2 = *(UScriptStruct **)((longlong)&(pFVar1->Struct).field0_0x0 + lVar13);
      if (pUVar2 == (UScriptStruct *)0x0) {
        bVar6 = pUVar10 == (UScriptStruct *)0x0;
      }
      else {
        bVar6 = pUVar2 == pUVar10;
      }
      if (bVar6) {
        lVar3 = *(longlong *)this;
        if (pUVar10 == (UScriptStruct *)0x0) {
          pUVar9 = Z_Construct_UPackage__Script_GameplayCameras();
          pUVar10 = GetStaticStruct(Z_Construct_UScriptStruct_FCameraDirectorStateTreeEvaluationData
                                    ,(UObject *)pUVar9,L"CameraDirectorStateTreeEvaluationData");
          Z_Registration_Info_UScriptStruct_FCameraDirectorStateTreeEvaluationData.OuterSingleton =
               pUVar10;
        }
        if (((lVar3 + 0x48 != 0) && (pUVar10 == (UScriptStruct *)0x0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("!Memory || (Memory && Struct)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                               ,0x2b,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        uVar8 = 0;
        if ((int)uVar12 < param_4->ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pFVar4 = param_4->DataPtr;
        *(UScriptStruct **)(&pFVar4->field_0x0 + lVar14) = pUVar10;
        *(longlong *)(&pFVar4->field_0x8 + lVar14) = lVar3 + 0x48;
        pUVar10 = Z_Registration_Info_UScriptStruct_FCameraDirectorStateTreeEvaluationData.
                  OuterSingleton;
      }
      iVar11 = param_3->ArrayNum;
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 0x18;
      lVar14 = lVar14 + 0x10;
    } while ((int)uVar12 < iVar11);
  }
  return true;
}

// GetTypeID @ 14d5abc80

FCameraObjectTypeID * __thiscall
UE::Cameras::FStateTreeCameraDirectorEvaluator::GetTypeID(FStateTreeCameraDirectorEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d5b4920

bool __thiscall
UE::Cameras::FStateTreeCameraDirectorEvaluator::IsKindOf
          (FStateTreeCameraDirectorEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FStateTreeCameraDirectorEvaluator>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraDirectorEvaluator>)param_1->ID !=
      FCameraDirectorEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnActivate @ 14d5b7220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Cameras::FStateTreeCameraDirectorEvaluator::OnActivate
          (FStateTreeCameraDirectorEvaluator *this,FCameraDirectorActivateParams *param_1,
          FCameraDirectorEvaluationResult *param_2)

{
  UStateTree *pUVar1;
  code *pcVar2;
  atomic<int> aVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  atomic<int> aVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStackY_2f8 [32];
  undefined1 local_2c8 [8];
  ForAnyElementType local_2c0;
  ulonglong local_2b8;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_2b0;
  FString local_2a0;
  FString local_290;
  FString local_280;
  FString local_270;
  FName local_260;
  FName local_258;
  FName local_250;
  FName local_248;
  FName local_240;
  FName local_238;
  FName local_230;
  FString local_228;
  FString local_218;
  FString local_208;
  FDestructionSentinel local_1f8;
  FStateTreeExecutionContext local_1e0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  if (this->_padding_ == 0) {
LAB_14d5b726f:
    lVar11 = 0;
  }
  else {
    pUVar7 = UStateTreeCameraDirector::StaticClass();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar7);
    if (!bVar5) goto LAB_14d5b726f;
    lVar11 = this->_padding_;
  }
  pUVar1 = *(UStateTree **)(lVar11 + 0x40);
  if (pUVar1 == (UStateTree *)0x0) {
    if ((byte)LogCameraSystem._0_1_ < 2) {
      return;
    }
    if (lVar11 == 0) {
      ::FString::FString(&local_2a0,L"None");
    }
    else {
      local_260 = *(FName *)(lVar11 + 0x18);
      ::FName::ToString(&local_260,&local_2a0);
    }
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
    if (local_2a0.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
    return;
  }
  pTVar9 = (TReferenceControllerBase<1> *)this->_padding_;
  lVar10 = 0;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar9->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d5b7334;
      }
      LOCK();
      aVar6 = pTVar9->SharedReferenceCount;
      bVar5 = aVar3 == aVar6;
      if (bVar5) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar6 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar6;
    } while (!bVar5);
    lVar10 = this->_padding_;
    if (lVar10 != 0) goto LAB_14d5b7356;
  }
LAB_14d5b7334:
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar5) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14d5b7356:
  pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar10 + 0x20));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  if (pUVar8 == (UObject *)0x0) {
    if (1 < (byte)LogCameraSystem._0_1_) {
      if (lVar11 == 0) {
        ::FString::FString(&local_290,L"None");
      }
      else {
        local_258 = *(FName *)(lVar11 + 0x18);
        ::FName::ToString(&local_258,&local_290);
      }
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
      if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_290.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    local_2b8 = 0;
    local_2c8 = (undefined1  [8])0x0;
    local_2c0.Data = (FScriptContainerElement *)0x0;
    FStateTreeExecutionContext::FStateTreeExecutionContext
              (&local_1e0,pUVar8,pUVar1,&this->StateTreeInstanceData,
               (TDelegate<bool___cdecl(FStateTreeExecutionContext_const_&,UStateTree_const_*,TArrayView<FStateTreeExternalDataDesc_const_,int>,TArrayView<FStateTreeDataView,int>),FDefaultDelegateUserPolicy>
                *)local_2c8,No);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2c8,
               (FWriteAccessScope *)&local_1f8);
    if (((int)local_2b8 != 0) && (local_2c0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_2c0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_2c0,0,0,0x10);
      local_2b8 = local_2b8 & 0xffffffff00000000;
    }
    if (local_1f8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1f8.Accessor,&local_1f8);
    }
    if (local_2c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_2c8);
    bVar5 = UStateTree::IsReadyToRun((UStateTree *)local_1e0._padding_);
    if (bVar5) {
      local_2b0.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)this->_padding_;
      if (local_2b0.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0)
      {
        local_2b0.Object = (FCameraEvaluationContext *)0x0;
      }
      else {
        aVar3 = (local_2b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        do {
          if (aVar3 == (atomic<int>)0x0) {
            local_2b0.Object = (FCameraEvaluationContext *)0x0;
            local_2b0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14d5b75c5;
          }
          LOCK();
          aVar6 = (local_2b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
          bVar5 = aVar3 == aVar6;
          if (bVar5) {
            (local_2b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)aVar3 + 1);
            aVar6 = aVar3;
          }
          UNLOCK();
          aVar3 = aVar6;
        } while (!bVar5);
        local_2b0.Object = (FCameraEvaluationContext *)this->_padding_;
        LOCK();
        (local_2b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_2b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
LAB_14d5b75c5:
      FVar4.ReferenceController = local_2b0.SharedReferenceCount.ReferenceController;
      bVar5 = SetContextRequirements(this,&local_2b0,&local_1e0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar4.ReferenceController);
      if (bVar5) {
        FStateTreeReference::ConditionallySyncParameters((FStateTreeReference *)(lVar11 + 0x40));
        FStateTreeExecutionContext::Start(&local_1e0,(FInstancedPropertyBag *)(lVar11 + 0x48),-1);
      }
      else if (1 < (byte)LogCameraSystem._0_1_) {
        local_238.ComparisonIndex.Value = *(uint *)&pUVar1->field_0x18;
        local_238.Number = *(uint *)&pUVar1->field_0x1c;
        ::FName::ToString(&local_238,&local_208);
        if (lVar11 == 0) {
          ::FString::FString(&local_270,L"None");
        }
        else {
          local_230 = *(FName *)(lVar11 + 0x18);
          ::FName::ToString(&local_230,&local_270);
        }
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
        if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_270.Data.AllocatorInstance.Data);
        }
        if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.Data.AllocatorInstance.Data);
        }
      }
    }
    else if (1 < (byte)LogCameraSystem._0_1_) {
      local_250.ComparisonIndex.Value = *(uint *)&pUVar8->field_0x18;
      local_250.Number = *(uint *)&pUVar8->field_0x1c;
      ::FName::ToString(&local_250,&local_218);
      local_248.ComparisonIndex.Value = *(uint *)&pUVar1->field_0x18;
      local_248.Number = *(uint *)&pUVar1->field_0x1c;
      ::FName::ToString(&local_248,&local_228);
      if (lVar11 == 0) {
        ::FString::FString(&local_280,L"None");
      }
      else {
        local_240 = *(FName *)(lVar11 + 0x18);
        ::FName::ToString(&local_240,&local_280);
      }
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
      if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_280.Data.AllocatorInstance.Data);
      }
      if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.Data.AllocatorInstance.Data);
      }
      if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data.AllocatorInstance.Data);
      }
    }
    FStateTreeExecutionContext::~FStateTreeExecutionContext(&local_1e0);
  }
  return;
}

// OnAddReferencedObjects @ 14d5b7bb0

void __thiscall
UE::Cameras::FStateTreeCameraDirectorEvaluator::OnAddReferencedObjects
          (FStateTreeCameraDirectorEvaluator *this,FReferenceCollector *param_1)

{
  FStateTreeInstanceData::AddStructReferencedObjects(&this->StateTreeInstanceData,param_1);
  return;
}

// OnDeactivate @ 14d5b9030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FStateTreeCameraDirectorEvaluator::OnDeactivate
          (FStateTreeCameraDirectorEvaluator *this,FCameraDirectorDeactivateParams *param_1,
          FCameraDirectorEvaluationResult *param_2)

{
  UStateTree *pUVar1;
  code *pcVar2;
  atomic<int> aVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  atomic<int> aVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  undefined1 auStackY_278 [32];
  undefined1 local_248 [8];
  ForAnyElementType local_240;
  ulonglong local_238;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_230;
  FName local_220;
  FName local_218;
  FString local_210;
  FString local_200;
  FDestructionSentinel local_1f0;
  FStateTreeExecutionContext local_1d8;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_278;
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  pTVar12 = pTVar11;
  if (this->_padding_ != 0) {
    pUVar7 = UStateTreeCameraDirector::StaticClass();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar7);
    if (bVar5) {
      pTVar12 = (TReferenceControllerBase<1> *)this->_padding_;
    }
  }
  pTVar10 = (TReferenceControllerBase<1> *)this->_padding_;
  pUVar1 = (UStateTree *)pTVar12[4]._padding_;
  pTVar9 = pTVar10;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar10->SharedReferenceCount;
    do {
      pTVar9 = pTVar11;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14d5b90c5;
      LOCK();
      aVar6 = pTVar10->SharedReferenceCount;
      bVar5 = aVar3 == aVar6;
      if (bVar5) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar6 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar6;
    } while (!bVar5);
    pTVar11 = (TReferenceControllerBase<1> *)this->_padding_;
    pTVar9 = pTVar10;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) goto LAB_14d5b90e7;
  }
LAB_14d5b90c5:
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar10 = pTVar9;
  if (bVar5) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14d5b90e7:
  pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pTVar11 + 2));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if (pUVar8 == (UObject *)0x0) {
    if (1 < (byte)LogCameraSystem._0_1_) {
      local_220.ComparisonIndex.Value = *(uint *)&pTVar12[1].SharedReferenceCount;
      local_220.Number = *(uint *)&pTVar12[1].WeakReferenceCount;
      ::FName::ToString(&local_220,&local_210);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
      if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_210.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (pUVar1 == (UStateTree *)0x0) {
    if (1 < (byte)LogCameraSystem._0_1_) {
      local_218.ComparisonIndex.Value = *(uint *)&pTVar12[1].SharedReferenceCount;
      local_218.Number = *(uint *)&pTVar12[1].WeakReferenceCount;
      ::FName::ToString(&local_218,&local_200);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
      if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    local_238 = 0;
    local_248 = (undefined1  [8])0x0;
    local_240.Data = (FScriptContainerElement *)0x0;
    FStateTreeExecutionContext::FStateTreeExecutionContext
              (&local_1d8,pUVar8,pUVar1,&this->StateTreeInstanceData,
               (TDelegate<bool___cdecl(FStateTreeExecutionContext_const_&,UStateTree_const_*,TArrayView<FStateTreeExternalDataDesc_const_,int>,TArrayView<FStateTreeDataView,int>),FDefaultDelegateUserPolicy>
                *)local_248,No);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_248,
               (FWriteAccessScope *)&local_1f0);
    if (((int)local_238 != 0) && (local_240.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_240.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_240,0,0,0x10);
      local_238 = local_238 & 0xffffffff00000000;
    }
    if (local_1f0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1f0.Accessor,&local_1f0);
    }
    if (local_240.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_240.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_248);
    local_230.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)this->_padding_;
    if (local_230.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_230.Object = (FCameraEvaluationContext *)0x0;
    }
    else {
      aVar3 = (local_230.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          local_230.Object = (FCameraEvaluationContext *)0x0;
          local_230.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14d5b92b5;
        }
        LOCK();
        aVar6 = (local_230.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        bVar5 = aVar3 == aVar6;
        if (bVar5) {
          (local_230.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)aVar3 + 1);
          aVar6 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar6;
      } while (!bVar5);
      local_230.Object = (FCameraEvaluationContext *)this->_padding_;
      LOCK();
      (local_230.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_230.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
LAB_14d5b92b5:
    FVar4.ReferenceController = local_230.SharedReferenceCount.ReferenceController;
    bVar5 = SetContextRequirements(this,&local_230,&local_1d8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar4.ReferenceController);
    if (bVar5) {
      FStateTreeExecutionContext::Stop(&local_1d8,Stopped);
    }
    FStateTreeExecutionContext::~FStateTreeExecutionContext(&local_1d8);
  }
  return;
}

// OnRun @ 14d5c2d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Cameras::FStateTreeCameraDirectorEvaluator::OnRun
          (FStateTreeCameraDirectorEvaluator *this,FCameraDirectorEvaluationParams *param_1,
          FCameraDirectorEvaluationResult *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UStateTree *this_00;
  code *pcVar3;
  atomic<int> aVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  atomic<int> aVar7;
  UClass *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  UObject *pUVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auStackY_2b8 [32];
  undefined1 local_288;
  undefined1 local_287 [7];
  undefined1 local_280 [8];
  ForAnyElementType local_278;
  ulonglong local_270;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_268;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_258;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_248;
  UObject *local_238;
  UObject *local_230;
  FDestructionSentinel local_228;
  FString local_210;
  FString local_200;
  FStateTreeExecutionContext local_1f0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  pTVar12 = (TReferenceControllerBase<1> *)0x0;
  pTVar9 = pTVar12;
  if (this->_padding_ != 0) {
    pUVar8 = UStateTreeCameraDirector::StaticClass();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar8);
    if (bVar6) {
      pTVar9 = (TReferenceControllerBase<1> *)this->_padding_;
    }
  }
  pTVar11 = (TReferenceControllerBase<1> *)this->_padding_;
  this_00 = (UStateTree *)pTVar9[4]._padding_;
  pTVar9 = pTVar11;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar11->SharedReferenceCount;
    do {
      pTVar9 = pTVar12;
      if (aVar4 == (atomic<int>)0x0) goto LAB_14d5c2dc5;
      LOCK();
      aVar7 = pTVar11->SharedReferenceCount;
      bVar6 = aVar4 == aVar7;
      if (bVar6) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar7 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar7;
    } while (!bVar6);
    pTVar12 = (TReferenceControllerBase<1> *)this->_padding_;
    pTVar9 = pTVar11;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) goto LAB_14d5c2deb;
  }
LAB_14d5c2dc5:
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar11 = pTVar9;
  if (bVar6) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14d5c2deb:
  pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pTVar12 + 2));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  if ((this_00 != (UStateTree *)0x0) && (pUVar10 != (UObject *)0x0)) {
    local_270 = 0;
    local_280 = (undefined1  [8])0x0;
    local_278.Data = (FScriptContainerElement *)0x0;
    FStateTreeExecutionContext::FStateTreeExecutionContext
              (&local_1f0,pUVar10,this_00,&this->StateTreeInstanceData,
               (TDelegate<bool___cdecl(FStateTreeExecutionContext_const_&,UStateTree_const_*,TArrayView<FStateTreeExternalDataDesc_const_,int>,TArrayView<FStateTreeDataView,int>),FDefaultDelegateUserPolicy>
                *)local_280,No);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_280,
               (FWriteAccessScope *)&local_228);
    if (((int)local_270 != 0) && (local_278.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_278.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_278,0,0,0x10);
      local_270 = local_270 & 0xffffffff00000000;
    }
    if (local_228.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_228.Accessor,&local_228);
    }
    if (local_278.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_280);
    local_268.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)this->_padding_;
    if (local_268.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_268.Object = (FCameraEvaluationContext *)0x0;
    }
    else {
      aVar4 = (local_268.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar4 == (atomic<int>)0x0) {
          local_268.Object = (FCameraEvaluationContext *)0x0;
          local_268.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14d5c2f0a;
        }
        LOCK();
        aVar7 = (local_268.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        bVar6 = aVar4 == aVar7;
        if (bVar6) {
          (local_268.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)aVar4 + 1);
          aVar7 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar7;
      } while (!bVar6);
      local_268.Object = (FCameraEvaluationContext *)this->_padding_;
      LOCK();
      (local_268.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_268.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
LAB_14d5c2f0a:
    FVar5.ReferenceController = local_268.SharedReferenceCount.ReferenceController;
    bVar6 = SetContextRequirements(this,&local_268,&local_1f0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar5.ReferenceController);
    if (bVar6) {
      FStateTreeExecutionContext::Tick(&local_1f0,param_1->DeltaTime);
      pFVar13 = (this->EvaluationData).ActiveCameraRigs.AllocatorInstance.Data;
      iVar2 = (this->EvaluationData).ActiveCameraRigs.ArrayNum;
      pFVar1 = pFVar13 + (longlong)iVar2 * 8;
      while( true ) {
        if ((this->EvaluationData).ActiveCameraRigs.ArrayNum != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<UCameraRigAsset>,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_288);
        }
        if (pFVar13 == pFVar1) break;
        pUVar10 = *(UObject **)pFVar13;
        if (pUVar10 == (UObject *)0x0) {
          if (1 < (byte)LogCameraSystem._0_1_) {
            UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_210,(UObject *)0x0)
            ;
            Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
            if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_210.Data.AllocatorInstance.Data);
            }
          }
          pFVar13 = pFVar13 + 8;
        }
        else {
          local_238 = pUVar10;
          if (GC::GIsIncrementalReachabilityPending != false) {
            GC::MarkAsReachable(pUVar10);
          }
          local_258.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)this->_padding_;
          if (local_258.SharedReferenceCount.ReferenceController ==
              (TReferenceControllerBase<1> *)0x0) {
            local_258.Object = (FCameraEvaluationContext *)0x0;
          }
          else {
            aVar4 = (local_258.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
            do {
              if (aVar4 == (atomic<int>)0x0) {
                local_258.Object = (FCameraEvaluationContext *)0x0;
                local_258.SharedReferenceCount.ReferenceController =
                     (TReferenceControllerBase<1> *)0x0;
                goto LAB_14d5c2fc8;
              }
              LOCK();
              aVar7 = (local_258.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
              bVar6 = aVar4 == aVar7;
              if (bVar6) {
                (local_258.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)((int)aVar4 + 1);
                aVar7 = aVar4;
              }
              UNLOCK();
              aVar4 = aVar7;
            } while (!bVar6);
            local_258.Object = (FCameraEvaluationContext *)this->_padding_;
            LOCK();
            (local_258.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_258.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
LAB_14d5c2fc8:
          FVar5.ReferenceController = local_258.SharedReferenceCount.ReferenceController;
          FCameraDirectorEvaluationResult::Add
                    (param_2,&local_258,(TObjectPtr<UCameraRigAsset_const_>)&local_238);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar5.ReferenceController);
          pFVar13 = pFVar13 + 8;
        }
      }
      pFVar13 = (this->EvaluationData).ActiveCameraRigProxies.AllocatorInstance.Data;
      iVar2 = (this->EvaluationData).ActiveCameraRigProxies.ArrayNum;
      pFVar1 = pFVar13 + (longlong)iVar2 * 8;
      while( true ) {
        if ((this->EvaluationData).ActiveCameraRigProxies.ArrayNum != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<UCameraRigProxyAsset>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_287);
        }
        if (pFVar13 == pFVar1) break;
        pUVar10 = *(UObject **)pFVar13;
        if (pUVar10 == (UObject *)0x0) {
          if (1 < (byte)LogCameraSystem._0_1_) {
            UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_200,(UObject *)0x0)
            ;
            Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
            if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_200.Data.AllocatorInstance.Data);
            }
          }
          pFVar13 = pFVar13 + 8;
        }
        else {
          local_230 = pUVar10;
          if (GC::GIsIncrementalReachabilityPending != false) {
            GC::MarkAsReachable(pUVar10);
          }
          local_248.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)this->_padding_;
          if (local_248.SharedReferenceCount.ReferenceController ==
              (TReferenceControllerBase<1> *)0x0) {
            local_248.Object = (FCameraEvaluationContext *)0x0;
          }
          else {
            aVar4 = (local_248.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
            do {
              if (aVar4 == (atomic<int>)0x0) {
                local_248.Object = (FCameraEvaluationContext *)0x0;
                local_248.SharedReferenceCount.ReferenceController =
                     (TReferenceControllerBase<1> *)0x0;
                goto LAB_14d5c30cb;
              }
              LOCK();
              aVar7 = (local_248.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
              bVar6 = aVar4 == aVar7;
              if (bVar6) {
                (local_248.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)((int)aVar4 + 1);
                aVar7 = aVar4;
              }
              UNLOCK();
              aVar4 = aVar7;
            } while (!bVar6);
            local_248.Object = (FCameraEvaluationContext *)this->_padding_;
            LOCK();
            (local_248.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_248.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
LAB_14d5c30cb:
          FVar5.ReferenceController = local_248.SharedReferenceCount.ReferenceController;
          FCameraDirectorEvaluationResult::Add
                    (param_2,&local_248,(TObjectPtr<UCameraRigProxyAsset_const_>)&local_230);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar5.ReferenceController);
          pFVar13 = pFVar13 + 8;
        }
      }
    }
    FStateTreeExecutionContext::~FStateTreeExecutionContext(&local_1f0);
  }
  return;
}

// SetContextRequirements @ 14d5ce480

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FStateTreeCameraDirectorEvaluator::SetContextRequirements
          (FStateTreeCameraDirectorEvaluator *this,
          TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *param_1,
          FStateTreeExecutionContext *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  longlong local_88;
  undefined1 local_78 [16];
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  if (param_1->Object == (FCameraEvaluationContext *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78._8_8_ = FWeakObjectPtr::Get(&(param_1->Object->WeakOwner).WeakPtr);
  if ((UObject *)local_78._8_8_ == (UObject *)0x0) {
    local_88 = 0;
  }
  else {
    local_88 = *(longlong *)&((UObject *)local_78._8_8_)->field_0x10;
    if (local_88 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Memory || (Memory && Struct)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                         ,0x24,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
  }
  local_78._0_8_ = local_88;
  FStateTreeExecutionContext::SetContextDataByName
            (param_2,FStateTreeContextDataNames::ContextOwner,(FStateTreeDataView *)local_78);
  iVar1 = (this->EvaluationData).ActiveCameraRigs.ArrayMax;
  (this->EvaluationData).ActiveCameraRigs.ArrayNum = 0;
  if (iVar1 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&this->EvaluationData,0,
               &(this->EvaluationData).ActiveCameraRigs.ArrayMax);
  }
  iVar1 = (this->EvaluationData).ActiveCameraRigProxies.ArrayMax;
  (this->EvaluationData).ActiveCameraRigProxies.ArrayNum = 0;
  if (iVar1 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->EvaluationData).ActiveCameraRigProxies.AllocatorInstance,0,
               &(this->EvaluationData).ActiveCameraRigProxies.ArrayMax);
  }
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar5 = Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEBUFStateTreeExecutionContext__PEBVUStateTree__V__TArrayView___CBUFStateTreeExternalDataDesc__H__V__TArrayView_UFStateTreeDataView__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &TBaseFunctorDelegateInstance<bool___cdecl(FStateTreeExecutionContext_const_&,UStateTree_const_*,TArrayView<FStateTreeExternalDataDesc_const_,int>,TArrayView<FStateTreeDataView,int>),FDefaultDelegateUserPolicy,`UE::Cameras::FStateTreeCameraDirectorEvaluator::SetContextRequirements'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar5[3] = this;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  FStateTreeExecutionContext::SetCollectExternalDataCallback
            (param_2,(TDelegate<bool___cdecl(FStateTreeExecutionContext_const_&,UStateTree_const_*,TArrayView<FStateTreeExternalDataDesc_const_,int>,TArrayView<FStateTreeDataView,int>),FDefaultDelegateUserPolicy>
                      *)local_68);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

