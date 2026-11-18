// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 10

// FTracker @ 145cd1b80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FTracker * __thiscall RHIValidation::FTracker::FTracker(FTracker *this,ERHIPipeline param_1)

{
  int *piVar1;
  
  this->Pipeline = param_1;
  (this->CurrentList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &this->UAVTrackers[0].UAVs.ArrayMax;
  (this->CurrentList).ArrayNum = 0;
  (this->CurrentList).ArrayMax = 0;
  this->UAVTrackers[0].UAVs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->UAVTrackers[0].UAVs.ArrayNum = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,8,(ForAnyElementType *)this->UAVTrackers,0,piVar1);
  piVar1 = &this->UAVTrackers[1].UAVs.ArrayMax;
  this->UAVTrackers[1].UAVs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->UAVTrackers[1].UAVs.ArrayNum = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,8,(ForAnyElementType *)(this->UAVTrackers + 1),0,piVar1);
  return this;
}

// AddOp @ 145cd4700

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall RHIValidation::FTracker::AddOp(FTracker *this,FOperation *param_1)

{
  int *piVar1;
  FOperation *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FResource *pFVar5;
  undefined8 uVar6;
  FState FVar7;
  bool bVar8;
  int iVar9;
  FOpQueueState *pFVar10;
  longlong lVar11;
  
  if ((GRHICommandList.bLatchedBypass) && ((this->CurrentList).ArrayNum == 0)) {
    pFVar10 = GetQueue(this->Pipeline);
    bVar8 = FOperation::Replay(param_1,pFVar10);
    if (bVar8) {
      return;
    }
  }
  pFVar2 = (FOperation *)(this->CurrentList).AllocatorInstance.Data;
  if (((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->CurrentList).ArrayMax)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar9 = (this->CurrentList).ArrayNum;
  piVar1 = &(this->CurrentList).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x848,&(this->CurrentList).AllocatorInstance,piVar1);
  }
  lVar11 = (longlong)iVar9;
  (this->CurrentList).ArrayNum = iVar9 + 1;
  pFVar5 = (param_1->field1_0x8).Data_BeginTransition.Identity.Resource;
  pFVar3 = (this->CurrentList).AllocatorInstance.Data;
  *(undefined8 *)(pFVar3 + lVar11 * 0x48) = *(undefined8 *)param_1;
  *(FResource **)(pFVar3 + lVar11 * 0x48 + 8) = pFVar5;
  uVar6 = *(undefined8 *)
           &(param_1->field1_0x8).Data_BeginTransition.Identity.SubresourceRange.ArraySlice;
  *(undefined8 *)(pFVar3 + lVar11 * 0x48 + 0x10) =
       *(undefined8 *)&(param_1->field1_0x8).Data_BeginTransition.Identity.SubresourceRange;
  *(undefined8 *)(pFVar3 + lVar11 * 0x48 + 0x10 + 8) = uVar6;
  FVar7 = (param_1->field1_0x8).Data_BeginTransition.PreviousState;
  *(undefined8 *)(pFVar3 + lVar11 * 0x48 + 0x20) =
       *(undefined8 *)
        &(param_1->field1_0x8).Data_BeginTransition.Identity.SubresourceRange.PlaneIndex;
  *(FState *)(pFVar3 + lVar11 * 0x48 + 0x20 + 8) = FVar7;
  FVar7 = *(FState *)((longlong)&param_1->field1_0x8 + 0x30);
  *(FState *)(pFVar3 + lVar11 * 0x48 + 0x30) = (param_1->field1_0x8).Data_BeginTransition.NextState;
  ((FState *)(pFVar3 + lVar11 * 0x48 + 0x30))[1] = FVar7;
  *(void **)(pFVar3 + lVar11 * 0x48 + 0x40) =
       (param_1->field1_0x8).Data_BeginTransition.CreateBacktrace;
  return;
}

// BeginBreadcrumbGPU @ 145cd5a30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
RHIValidation::FTracker::BeginBreadcrumbGPU(FTracker *this,FRHIBreadcrumbNode *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uStack_94;
  FOperation local_50;
  
  if ((param_1 == (FRHIBreadcrumbNode *)0x0) || (param_1 == FRHIBreadcrumbNode::Sentinel)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Breadcrumb && Breadcrumb != FRHIBreadcrumbNode::Sentinel",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidationCommon.h"
                       ,0x354,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_50._4_4_ = uStack_94;
  local_50.Type = BeginBreadcrumbGPU;
  local_50.field1_0x8.Data_BreadcrumbRange.Range.First = param_1;
  AddOp(this,&local_50);
  return;
}

// EndBreadcrumbGPU @ 145cda850

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
RHIValidation::FTracker::EndBreadcrumbGPU(FTracker *this,FRHIBreadcrumbNode *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uStack_94;
  FOperation local_50;
  
  if ((param_1 == (FRHIBreadcrumbNode *)0x0) || (param_1 == FRHIBreadcrumbNode::Sentinel)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Breadcrumb && Breadcrumb != FRHIBreadcrumbNode::Sentinel",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidationCommon.h"
                       ,0x35e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_50._4_4_ = uStack_94;
  local_50.Type = EndBreadcrumbGPU;
  local_50.field1_0x8.Data_BreadcrumbRange.Range.First = param_1;
  AddOp(this,&local_50);
  return;
}

// GetQueue @ 145cdd410

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FOpQueueState * __cdecl RHIValidation::FTracker::GetQueue(ERHIPipeline param_1)

{
  code *pcVar1;
  bool bVar2;
  FOpQueueState *pFVar3;
  
  if (param_1 != Graphics) {
    if (param_1 == AsyncCompute) {
      return OpQueues + 1;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                       ,0xbe7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FOpQueueState *)(*pcVar1)();
      return pFVar3;
    }
  }
  return OpQueues;
}

// Rename @ 145cef860

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
RHIValidation::FTracker::Rename(FTracker *this,FResource *param_1,wchar_t *param_2,wchar_t *param_3)

{
  undefined4 uStack_94;
  FState local_88;
  wchar_t *pwStack_80;
  undefined8 local_78;
  FState FStack_70;
  FState local_68;
  undefined8 uStack_60;
  void *local_58;
  FOperation local_50;
  
  LOCK();
  (param_1->NumOpRefs).Counter = (param_1->NumOpRefs).Counter + 1;
  UNLOCK();
  FOperation::AllocStringCopy((wchar_t **)&local_88,param_2);
  local_50._4_4_ = uStack_94;
  local_50.Type = Rename;
  local_50.field1_0x8.Data_SetTrackedAccess.State = local_88;
  local_50.field1_0x8._24_8_ = local_78;
  local_50.field1_0x8.Data_BeginTransition.PreviousState = FStack_70;
  local_50.field1_0x8.Data_BeginTransition.CreateBacktrace = local_58;
  local_50.field1_0x8.Data_BeginTransition.NextState = local_68;
  local_50.field1_0x8._48_8_ = uStack_60;
  pwStack_80 = param_3;
  local_50.field1_0x8.Data_BeginTransition.Identity.Resource = param_1;
  local_50.field1_0x8.Data_Rename.Suffix = param_3;
  AddOp(this,&local_50);
  return;
}

// ResetAllUAVState @ 145cf0bb0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall RHIValidation::FTracker::ResetAllUAVState(FTracker *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = this->UAVTrackers[0].UAVs.ArrayNum;
  piVar1 = &this->UAVTrackers[0].UAVs.ArrayNum;
  if (iVar2 < 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,-iVar2,(ForAnyElementType *)this->UAVTrackers,piVar1,
                       &this->UAVTrackers[0].UAVs.ArrayMax);
    memset(this->UAVTrackers[0].UAVs.AllocatorInstance.Data + (longlong)iVar3 * 8,0,
           (longlong)-iVar2 << 3);
  }
  else if (0 < iVar2) {
    *piVar1 = *piVar1 - iVar2;
  }
  iVar2 = this->UAVTrackers[1].UAVs.ArrayNum;
  piVar1 = &this->UAVTrackers[1].UAVs.ArrayNum;
  if (iVar2 < 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,-iVar2,(ForAnyElementType *)(this->UAVTrackers + 1),piVar1,
                       &this->UAVTrackers[1].UAVs.ArrayMax);
    memset(this->UAVTrackers[1].UAVs.AllocatorInstance.Data + (longlong)iVar3 * 8,0,
           (longlong)-iVar2 << 3);
    return;
  }
  if (0 < iVar2) {
    *piVar1 = *piVar1 - iVar2;
  }
  return;
}

// ResetUAVState @ 145cf0c80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall RHIValidation::FTracker::ResetUAVState(FTracker *this,EUAVMode param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = this->UAVTrackers[(int)param_1].UAVs.ArrayNum;
  piVar1 = &this->UAVTrackers[(int)param_1].UAVs.ArrayNum;
  if (iVar2 < 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,-iVar2,(ForAnyElementType *)(this->UAVTrackers + (int)param_1),piVar1,
                       &this->UAVTrackers[(int)param_1].UAVs.ArrayMax);
    memset(this->UAVTrackers[(int)param_1].UAVs.AllocatorInstance.Data + (longlong)iVar3 * 8,0,
           (longlong)-iVar2 << 3);
    return;
  }
  if (0 < iVar2) {
    *piVar1 = *piVar1 - iVar2;
  }
  return;
}

// SetTrackedAccess @ 145cf1c80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
RHIValidation::FTracker::SetTrackedAccess
          (FTracker *this,FResource *param_1,ERHIAccess param_2,ERHIPipeline param_3)

{
  undefined2 local_res15;
  undefined1 local_res17;
  undefined4 uStack_94;
  FOperation local_50;
  
  LOCK();
  (param_1->NumOpRefs).Counter = (param_1->NumOpRefs).Counter + 1;
  UNLOCK();
  local_50.field1_0x8._12_1_ = param_3;
  local_50.field1_0x8._8_4_ = param_2;
  local_50.field1_0x8._13_2_ = local_res15;
  local_50.field1_0x8._15_1_ = local_res17;
  local_50._4_4_ = uStack_94;
  local_50.Type = SetTrackedAccess;
  local_50.field1_0x8.Data_BeginTransition.Identity.Resource = param_1;
  AddOp(this,&local_50);
  return;
}

// SubmitValidationOps @ 145cf2a90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
RHIValidation::FTracker::SubmitValidationOps
          (ERHIPipeline param_1,
          TArray<RHIValidation::FOperation,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  FOpQueueState *pFVar6;
  byte bVar7;
  
  if (param_1 != Graphics) {
    if (param_1 == AsyncCompute) {
      pFVar6 = OpQueues + 1;
      goto LAB_145cf2ae8;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                       ,0xbe7,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar6 = OpQueues;
LAB_145cf2ae8:
  iVar5 = (pFVar6->Ops).ArrayNum;
  piVar3 = &(pFVar6->Ops).ArrayMax;
  if (iVar5 == *piVar3) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(pFVar6->Ops).AllocatorInstance,piVar3);
  }
  (pFVar6->Ops).ArrayNum = iVar5 + 1;
  pFVar1 = (pFVar6->Ops).AllocatorInstance.Data + (longlong)iVar5 * 0x18;
  *(undefined8 *)pFVar1 = 0;
  *(FScriptContainerElement **)pFVar1 = (param_2->AllocatorInstance).Data;
  (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar1 + 8) = param_2->ArrayNum;
  *(int *)(pFVar1 + 0xc) = param_2->ArrayMax;
  param_2->ArrayNum = 0;
  param_2->ArrayMax = 0;
  *(undefined4 *)(pFVar1 + 0x10) = 0;
  do {
    bVar7 = 0;
    pFVar6 = OpQueues;
    do {
      bVar4 = FOpQueueState::Execute(pFVar6);
      bVar7 = bVar7 | bVar4;
      pFVar6 = pFVar6 + 1;
    } while (pFVar6 != (FOpQueueState *)&FRHIFrameFlipTrackingRunnable::Singleton);
  } while (bVar7 != 0);
  return;
}

