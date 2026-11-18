// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 4

// operator= @ 14d592370

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraDirectorEvaluationResult * __thiscall
UE::Cameras::FCameraDirectorEvaluationResult::operator=
          (FCameraDirectorEvaluationResult *this,FCameraDirectorEvaluationResult *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> FVar3;
  ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> FVar4;
  
  if (this != param_1) {
    FVar3 = (this->Requests).AllocatorInstance.SecondaryData;
    FVar4 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)this;
    if (FVar3 != (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
      FVar4 = FVar3;
    }
    DestructItems<UE::Cameras::FCameraRigActivationDeactivationRequest,int>
              ((FCameraRigActivationDeactivationRequest *)FVar4,(this->Requests).ArrayNum);
    FVar3 = (param_1->Requests).AllocatorInstance.SecondaryData;
    piVar1 = &(this->Requests).ArrayMax;
    iVar2 = (param_1->Requests).ArrayNum;
    if (FVar3 != (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
      param_1 = (FCameraDirectorEvaluationResult *)FVar3;
    }
    (this->Requests).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 4;
      return this;
    }
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>_>
              (0x38,8,iVar2,*piVar1,
               (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> *)this,iVar2,
               piVar1);
    FVar3 = (this->Requests).AllocatorInstance.SecondaryData;
    FVar4 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)this;
    if (FVar3 != (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
      FVar4 = FVar3;
    }
    ConstructItems<UE::Cameras::FCameraRigActivationDeactivationRequest,UE::Cameras::FCameraRigActivationDeactivationRequest,int>
              ((void *)FVar4,(FCameraRigActivationDeactivationRequest *)param_1,iVar2);
  }
  return this;
}

// Add @ 14d597430

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDirectorEvaluationResult::Add
          (FCameraDirectorEvaluationResult *this,
          TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *param_1,
          TObjectPtr<UCameraRigAsset_const_> param_2)

{
  int *piVar1;
  UObject *pUVar2;
  TReferenceControllerBase<1> *pTVar3;
  ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> FVar8;
  undefined8 *puVar9;
  FCameraEvaluationContext *local_58;
  TReferenceControllerBase<1> *local_50;
  UObject *local_48;
  UObject *local_40;
  undefined4 local_38;
  undefined1 local_34;
  UObject *local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  pUVar2 = *(UObject **)param_2.field0_0x0;
  if ((GC::GIsIncrementalReachabilityPending) && (pUVar2 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar2);
  }
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  local_58 = param_1->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_50 = pTVar3;
  local_48 = pUVar2;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar2);
  }
  local_34 = 2;
  local_40 = (UObject *)0x0;
  local_38 = 0;
  local_30 = (UObject *)0x0;
  local_28 = 0;
  local_24 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FVar4 = (this->Requests).AllocatorInstance.SecondaryData;
  FVar8 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)this;
  if (FVar4 != (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
    FVar8 = FVar4;
  }
  if ((ulonglong)FVar8 <= &local_58) {
    FVar8 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)this;
    if (FVar4 != (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
      FVar8 = FVar4;
    }
    if ((&local_58 <
         (FCameraEvaluationContext **)((longlong)(this->Requests).ArrayMax * 0x38 + (longlong)FVar8)
        ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->Requests).ArrayNum;
  piVar1 = &(this->Requests).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>_>
                      (0x838,(ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> *
                             )this,piVar1);
  }
  (this->Requests).ArrayNum = iVar7 + 1;
  FVar4 = (this->Requests).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
    this = (FCameraDirectorEvaluationResult *)FVar4;
  }
  puVar9 = (undefined8 *)((longlong)iVar7 * 0x38 + (longlong)this);
  *puVar9 = local_58;
  puVar9[1] = local_50;
  local_50 = (TReferenceControllerBase<1> *)0x0;
  local_58 = (FCameraEvaluationContext *)0x0;
  puVar9[2] = local_48;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UObject *)0x0)) {
    GC::MarkAsReachable(local_48);
  }
  puVar9[3] = local_40;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_40 != (UObject *)0x0)) {
    GC::MarkAsReachable(local_40);
  }
  *(undefined4 *)(puVar9 + 4) = local_38;
  *(undefined1 *)((longlong)puVar9 + 0x24) = local_34;
  puVar9[5] = local_30;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_30 != (UObject *)0x0)) {
    GC::MarkAsReachable(local_30);
  }
  *(undefined4 *)(puVar9 + 6) = local_28;
  *(undefined1 *)((longlong)puVar9 + 0x34) = local_24;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Add @ 14d597670

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDirectorEvaluationResult::Add
          (FCameraDirectorEvaluationResult *this,
          TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *param_1,
          TObjectPtr<UCameraRigProxyAsset_const_> param_2)

{
  int *piVar1;
  UObject *pUVar2;
  TReferenceControllerBase<1> *pTVar3;
  ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> FVar8;
  undefined8 *puVar9;
  FCameraEvaluationContext *local_58;
  TReferenceControllerBase<1> *local_50;
  UObject *local_48;
  UObject *local_40;
  undefined4 local_38;
  undefined1 local_34;
  UObject *local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  pUVar2 = *(UObject **)param_2.field0_0x0;
  if ((GC::GIsIncrementalReachabilityPending) && (pUVar2 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar2);
  }
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  local_58 = param_1->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48 = (UObject *)0x0;
  local_50 = pTVar3;
  local_40 = pUVar2;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar2);
  }
  local_38 = 0;
  local_34 = 2;
  local_30 = (UObject *)0x0;
  local_28 = 0;
  local_24 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FVar4 = (this->Requests).AllocatorInstance.SecondaryData;
  FVar8 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)this;
  if (FVar4 != (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
    FVar8 = FVar4;
  }
  if ((ulonglong)FVar8 <= &local_58) {
    FVar8 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)this;
    if (FVar4 != (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
      FVar8 = FVar4;
    }
    if ((&local_58 <
         (FCameraEvaluationContext **)((longlong)(this->Requests).ArrayMax * 0x38 + (longlong)FVar8)
        ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->Requests).ArrayNum;
  piVar1 = &(this->Requests).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>_>
                      (0x838,(ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> *
                             )this,piVar1);
  }
  (this->Requests).ArrayNum = iVar7 + 1;
  FVar4 = (this->Requests).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
    this = (FCameraDirectorEvaluationResult *)FVar4;
  }
  puVar9 = (undefined8 *)((longlong)iVar7 * 0x38 + (longlong)this);
  *puVar9 = local_58;
  puVar9[1] = local_50;
  local_50 = (TReferenceControllerBase<1> *)0x0;
  local_58 = (FCameraEvaluationContext *)0x0;
  puVar9[2] = local_48;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UObject *)0x0)) {
    GC::MarkAsReachable(local_48);
  }
  puVar9[3] = local_40;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_40 != (UObject *)0x0)) {
    GC::MarkAsReachable(local_40);
  }
  *(undefined4 *)(puVar9 + 4) = local_38;
  *(undefined1 *)((longlong)puVar9 + 0x24) = local_34;
  puVar9[5] = local_30;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_30 != (UObject *)0x0)) {
    GC::MarkAsReachable(local_30);
  }
  *(undefined4 *)(puVar9 + 6) = local_28;
  *(undefined1 *)((longlong)puVar9 + 0x34) = local_24;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Reset @ 14d5cbc00

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDirectorEvaluationResult::Reset(FCameraDirectorEvaluationResult *this)

{
  int *piVar1;
  int *piVar2;
  ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> FVar3;
  ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> FVar4;
  
  FVar3 = (this->Requests).AllocatorInstance.SecondaryData;
  piVar1 = &(this->Requests).ArrayMax;
  piVar2 = &(this->Requests).ArrayNum;
  if (-1 < *piVar1) {
    if (FVar3 != (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
      this = (FCameraDirectorEvaluationResult *)FVar3;
    }
    DestructItems<UE::Cameras::FCameraRigActivationDeactivationRequest,int>
              ((FCameraRigActivationDeactivationRequest *)this,*piVar2);
    *piVar2 = 0;
    return;
  }
  FVar4 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)this;
  if (FVar3 != (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
    FVar4 = FVar3;
  }
  DestructItems<UE::Cameras::FCameraRigActivationDeactivationRequest,int>
            ((FCameraRigActivationDeactivationRequest *)FVar4,*piVar2);
  *piVar2 = 0;
  if (*piVar1 != 0) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>_>
              (0x38,8,0,(ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> *)this
               ,0,piVar1);
  }
  return;
}

