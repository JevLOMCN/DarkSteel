// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 2

// HandleSingleElement @ 147229e80

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Mass::ObserverManager::FDeprecationHelper::HandleSingleElement
          (TNotNull<FMassObserverManager_*> param_1,UScriptStruct *param_2,
          FMassArchetypeEntityCollection *param_3,FMassObserversMap *param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UPackage *pUVar4;
  FMassObserversMap *pFVar5;
  EMassObservedOperation EVar6;
  
  if (param_2 == (UScriptStruct *)0x0) {
LAB_147229f69:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsFragment || UE::Mass::IsA<FMassTag>(&ElementType)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassObserverManager.cpp"
                       ,0x68,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if (Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMassFragment,(UObject *)pUVar4,L"MassFragment"
                          );
      if (Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton != (UScriptStruct *)0x0)
      goto LAB_147229edc;
    }
    else {
LAB_147229edc:
      iVar1 = (int)(Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton)->_padding_;
      if (((int)param_2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_2->_padding_ + (longlong)iVar1 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton)->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pFVar5 = ((param_1.Val)->EntityManager->ObserverManager).FragmentObservers;
        goto LAB_147229f9c;
      }
    }
    if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMassTag,(UObject *)pUVar4,L"MassTag");
      if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton == (UScriptStruct *)0x0)
      goto LAB_147229f69;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton)->_padding_;
    if (((int)param_2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(param_2->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton)->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_147229f69;
  }
  pFVar5 = ((param_1.Val)->EntityManager->ObserverManager).TagObservers;
LAB_147229f9c:
  if (param_4 == pFVar5) {
    EVar6 = AddElement;
  }
  else {
    EVar6 = MAX;
    if (param_4 == pFVar5 + 1) {
      EVar6 = RemoveElement;
    }
  }
  HandleSingleElement(param_1,param_2,param_3,EVar6);
  return;
}

// HandleSingleElement @ 147229ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Mass::ObserverManager::FDeprecationHelper::HandleSingleElement
          (TNotNull<FMassObserverManager_*> param_1,UScriptStruct *param_2,
          FMassArchetypeEntityCollection *param_3,EMassObservedOperation param_4)

{
  int iVar1;
  FMassCommandBuffer *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  FMassCommandBuffer *pFVar5;
  bool bVar6;
  bool bVar7;
  UPackage *pUVar8;
  TSharedRef<FMassEntityManager,1> *pTVar9;
  longlong lVar10;
  undefined1 auStackY_688 [32];
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_658;
  UScriptStruct *local_648;
  TSharedRef<FMassEntityManager,1> local_640;
  FMassObserverExecutionContext local_630;
  FProcessingContext local_608;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_688;
  if (param_2 == (UScriptStruct *)0x0) {
LAB_14722a099:
    if (param_2 != (UScriptStruct *)0x0) goto LAB_14722a0a1;
  }
  else {
    if (Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton != (UScriptStruct *)0x0) {
LAB_14722a069:
      iVar1 = (int)(Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton)->_padding_;
      if (((int)param_2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_2->_padding_ + (longlong)iVar1 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton)->_padding_)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        bVar7 = true;
        goto LAB_14722a11e;
      }
      goto LAB_14722a099;
    }
    pUVar8 = Z_Construct_UPackage__Script_MassEntity();
    Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMassFragment,(UObject *)pUVar8,L"MassFragment");
    if (Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton != (UScriptStruct *)0x0)
    goto LAB_14722a069;
LAB_14722a0a1:
    bVar7 = false;
    if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar8 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMassTag,(UObject *)pUVar8,L"MassTag");
      if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton == (UScriptStruct *)0x0)
      goto LAB_14722a0f8;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton)->_padding_;
    if (((int)param_2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(param_2->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton)->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_14722a11e;
  }
LAB_14722a0f8:
  bVar7 = false;
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("bIsFragment || UE::Mass::IsA<FMassTag>(&ElementType)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassObserverManager.cpp"
                     ,0x75,L"");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14722a11e:
  local_648 = param_2;
  pTVar9 = TSharedFromThis<FMassEntityManager,1>::AsShared
                     ((TSharedFromThis<FMassEntityManager,1> *)
                      &(param_1.Val)->EntityManager->_padding_,&local_640);
  local_608.EntityManager.Object = pTVar9->Object;
  local_608.EntityManager.SharedReferenceCount.ReferenceController =
       (pTVar9->SharedReferenceCount).ReferenceController;
  if (local_608.EntityManager.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_608.EntityManager.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_608.EntityManager.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_608.DeltaSeconds = 0.0;
  FInstancedStruct::FInstancedStruct(&local_608.AuxData);
  local_608.CommandBuffer.Object = (FMassCommandBuffer *)0x0;
  local_608.CommandBuffer.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_608.bFlushCommandBuffer = true;
  local_608.ExecutionContextPtr = (FMassExecutionContext *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_640.SharedReferenceCount.ReferenceController._4_4_,
                      local_640.SharedReferenceCount.ReferenceController._0_4_));
  local_630.TypesInOperation.DataPtr = &local_648;
  local_630.TypesInOperation._12_4_ = local_640.SharedReferenceCount.ReferenceController._4_4_;
  local_658.ArrayNum = 1;
  local_630.TypesInOperation.ArrayNum = 1;
  lVar10 = 0x128;
  if (!bVar7) {
    lVar10 = 0x268;
  }
  local_630.CurrentTypeIndex = -1;
  local_658.DataPtr = param_3;
  local_630.Operation = param_4;
  FMassObserverManager::HandleElementsImpl
            (&local_608,&local_658,&local_630,
             (FMassObserversMap *)
             ((longlong)(param_1.Val)->ObservedFragments +
             lVar10 + (ulonglong)param_4 * 0x50 + -0x28));
  if (local_608.ExecutionContextPtr != (FMassExecutionContext *)0x0) {
    pFVar2 = ((local_608.ExecutionContextPtr)->DeferredCommandBuffer).Object;
    pTVar3 = ((local_608.ExecutionContextPtr)->DeferredCommandBuffer).SharedReferenceCount.
             ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if ((pFVar2 == (FMassCommandBuffer *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ExecutionContextPtr->GetSharedDeferredCommandBuffer()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessingContext.cpp"
                           ,0xd,
                           L"A valid execution context without a valid command buffer is unexpected"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar5 = local_608.CommandBuffer.Object;
    pTVar3 = ((local_608.ExecutionContextPtr)->DeferredCommandBuffer).SharedReferenceCount.
             ReferenceController;
    pFVar2 = ((local_608.ExecutionContextPtr)->DeferredCommandBuffer).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if ((pFVar2 != pFVar5) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ExecutionContextPtr->GetSharedDeferredCommandBuffer() == CommandBuffer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessingContext.cpp"
                           ,0x10,
                           L"Hosted Execution Context\'s command buffer is not the same as FProcessingContext\'s command buffer. This is not supposed to happen. Make sure FProcessingContext.CommandBuffer never gets assigned after FMassExecutionContext\'s creation"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((local_608.CommandBuffer.Object == (FMassCommandBuffer *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((local_608.CommandBuffer.Object)->bIsFlushing != false) &&
       (bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6613007514118127634>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessingContext.cpp"
                           ,0x12,"!CommandBuffer->IsFlushing()"), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (local_608.bFlushCommandBuffer == false) {
      FMassEntityManager::AppendCommands(local_608.EntityManager.Object,&local_608.CommandBuffer);
    }
    else {
      FMassEntityManager::FlushCommands(local_608.EntityManager.Object,&local_608.CommandBuffer);
    }
    FMassExecutionContext::~FMassExecutionContext(local_608.ExecutionContextPtr);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_608.CommandBuffer.SharedReferenceCount.ReferenceController);
  FInstancedStruct::Reset(&local_608.AuxData);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_608.EntityManager.SharedReferenceCount.ReferenceController);
  return;
}

