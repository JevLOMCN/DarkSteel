// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 7

// FRDGBarrierBatchBegin @ 145d8bc60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGBarrierBatchBegin * __thiscall
FRDGBarrierBatchBegin::FRDGBarrierBatchBegin
          (FRDGBarrierBatchBegin *this,ERHIPipeline param_1,ERHIPipeline param_2,wchar_t *param_3,
          FRDGPass *param_4)

{
  longlong lVar1;
  
  this->Transition = (FRHITransition *)0x0;
  this->SeparateFenceTransition = (FRHITransition *)0x0;
  *(undefined4 *)&this->BarriersToEnd = 0xffffffff;
  (this->BarriersToEnd).field_0x4 = 1;
  *(undefined4 *)&(this->BarriersToEnd).field_0x8 = 0xffffffff;
  (this->BarriersToEnd).field_0xc = 1;
  this->PipelinesToEnd = param_2;
  (this->Transitions).AllocatorInstance.Data = (FRDGTransitionInfo *)0x0;
  (this->Transitions).ArrayNum = 0;
  (this->Transitions).ArrayMax = 0;
  (this->Aliases).AllocatorInstance.Data = (FRHITransientAliasingInfo *)0x0;
  (this->Aliases).ArrayNum = 0;
  (this->Aliases).ArrayMax = 0;
  this->TransitionFlags = AllowDecayPipelines|NoFence;
  this->PipelinesToBegin = param_1;
  this->bTransitionNeeded = false;
  this->bSeparateFenceTransitionNeeded = false;
  *(undefined8 *)&this->DebugPasses = 0;
  *(undefined8 *)&(this->DebugPasses).field_0x8 = 0;
  (this->DebugTransitionResources).AllocatorInstance.Data = (FRDGViewableResource **)0x0;
  (this->DebugTransitionResources).ArrayNum = 0;
  (this->DebugTransitionResources).ArrayMax = 0;
  (this->DebugAliasingResources).AllocatorInstance.Data = (FRDGViewableResource **)0x0;
  (this->DebugAliasingResources).ArrayNum = 0;
  (this->DebugAliasingResources).ArrayMax = 0;
  this->DebugName = param_3;
  if ((param_1 == Graphics) || (lVar1 = 0x50, param_1 != AsyncCompute)) {
    lVar1 = 0x48;
  }
  *(FRDGPass **)((longlong)&this->Transition + lVar1) = param_4;
  return this;
}

// FRDGBarrierBatchBegin @ 145d8bcf0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FRDGBarrierBatchBegin * __thiscall
FRDGBarrierBatchBegin::FRDGBarrierBatchBegin
          (FRDGBarrierBatchBegin *this,ERHIPipeline param_1,ERHIPipeline param_2,wchar_t *param_3,
          TRHIPipelineArray<FRDGPass_*> *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  this->Transition = (FRHITransition *)0x0;
  this->SeparateFenceTransition = (FRHITransition *)0x0;
  *(undefined4 *)&this->BarriersToEnd = 0xffffffff;
  uVar1 = *(undefined8 *)param_4;
  uVar2 = *(undefined8 *)&param_4->field_0x8;
  (this->BarriersToEnd).field_0x4 = 1;
  *(undefined4 *)&(this->BarriersToEnd).field_0x8 = 0xffffffff;
  (this->BarriersToEnd).field_0xc = 1;
  (this->Transitions).AllocatorInstance.Data = (FRDGTransitionInfo *)0x0;
  (this->Transitions).ArrayNum = 0;
  (this->Transitions).ArrayMax = 0;
  (this->Aliases).AllocatorInstance.Data = (FRHITransientAliasingInfo *)0x0;
  (this->Aliases).ArrayNum = 0;
  (this->Aliases).ArrayMax = 0;
  *(undefined8 *)&this->DebugPasses = uVar1;
  *(undefined8 *)&(this->DebugPasses).field_0x8 = uVar2;
  this->TransitionFlags = AllowDecayPipelines|NoFence;
  this->PipelinesToBegin = param_1;
  this->PipelinesToEnd = param_2;
  this->bTransitionNeeded = false;
  this->bSeparateFenceTransitionNeeded = false;
  (this->DebugTransitionResources).AllocatorInstance.Data = (FRDGViewableResource **)0x0;
  (this->DebugTransitionResources).ArrayNum = 0;
  (this->DebugTransitionResources).ArrayMax = 0;
  (this->DebugAliasingResources).AllocatorInstance.Data = (FRDGViewableResource **)0x0;
  (this->DebugAliasingResources).ArrayNum = 0;
  (this->DebugAliasingResources).ArrayMax = 0;
  this->DebugName = param_3;
  return this;
}

// AddAlias @ 145d9a200

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FRDGBarrierBatchBegin::AddAlias
          (FRDGBarrierBatchBegin *this,FRDGViewableResource *param_1,
          FRHITransientAliasingInfo *param_2)

{
  int *piVar1;
  FRHITransientAliasingInfo_u_0 *pFVar2;
  FRHITransientAliasingInfo *pFVar3;
  FRDGViewableResource **ppFVar4;
  code *pcVar5;
  FRHITransientAliasingInfo_u_0 FVar6;
  undefined8 uVar7;
  TArrayView<FRHITransientAliasingOverlap_const_,int> *pTVar8;
  undefined4 uVar9;
  bool bVar10;
  int iVar11;
  FRDGViewableResource *local_res10;
  
  pFVar3 = (this->Aliases).AllocatorInstance.Data;
  local_res10 = param_1;
  if ((pFVar3 <= param_2) && (param_2 < pFVar3 + (this->Aliases).ArrayMax)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar11 = (this->Aliases).ArrayNum;
  piVar1 = &(this->Aliases).ArrayMax;
  if (iVar11 == *piVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRHITransientAliasingInfo>_>
                       (0x820,&(this->Aliases).AllocatorInstance,piVar1);
  }
  (this->Aliases).ArrayNum = iVar11 + 1;
  FVar6 = (FRHITransientAliasingInfo_u_0)(param_2->Overlaps).DataPtr;
  pFVar3 = (this->Aliases).AllocatorInstance.Data;
  pFVar2 = &pFVar3[iVar11].field0_0x0;
  *pFVar2 = param_2->field0_0x0;
  pFVar2[1] = FVar6;
  uVar9 = *(undefined4 *)&(param_2->Overlaps).field_0xc;
  uVar7 = *(undefined8 *)&param_2->Type;
  pTVar8 = &pFVar3[iVar11].Overlaps;
  pTVar8->ArrayNum = (param_2->Overlaps).ArrayNum;
  *(undefined4 *)&pTVar8->field_0xc = uVar9;
  pTVar8[1].DataPtr = uVar7;
  this->bTransitionNeeded = true;
  GRDGStatAliasingCount = GRDGStatAliasingCount + 1;
  ppFVar4 = (this->DebugAliasingResources).AllocatorInstance.Data;
  if ((ppFVar4 <= &local_res10) &&
     (&local_res10 < ppFVar4 + (this->DebugAliasingResources).ArrayMax)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar11 = (this->DebugAliasingResources).ArrayNum;
  piVar1 = &(this->DebugAliasingResources).ArrayMax;
  if (iVar11 == *piVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGViewableResource_*>_>
                       (0x808,&(this->DebugAliasingResources).AllocatorInstance,piVar1);
  }
  (this->DebugAliasingResources).ArrayNum = iVar11 + 1;
  (this->DebugAliasingResources).AllocatorInstance.Data[iVar11] = local_res10;
  return;
}

// AddTransition @ 145d9fdb0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FRDGBarrierBatchBegin::AddTransition
          (FRDGBarrierBatchBegin *this,FRDGViewableResource *param_1,FRDGTransitionInfo *param_2)

{
  int *piVar1;
  FRDGTransitionInfo *pFVar2;
  FRDGViewableResource **ppFVar3;
  code *pcVar4;
  undefined8 uVar5;
  FRDGTransitionInfo_u_8 FVar6;
  bool bVar7;
  int iVar8;
  FRDGViewableResource *local_28 [2];
  
  pFVar2 = (this->Transitions).AllocatorInstance.Data;
  local_28[0] = param_1;
  if ((pFVar2 <= param_2) && (param_2 < pFVar2 + (this->Transitions).ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar8 = (this->Transitions).ArrayNum;
  piVar1 = &(this->Transitions).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGTransitionInfo>_>
                      (0x810,&(this->Transitions).AllocatorInstance,piVar1);
  }
  uVar5 = *(undefined8 *)param_2;
  FVar6 = param_2->field5_0x8;
  (this->Transitions).ArrayNum = iVar8 + 1;
  pFVar2 = (this->Transitions).AllocatorInstance.Data + iVar8;
  *(undefined8 *)pFVar2 = uVar5;
  pFVar2->field5_0x8 = FVar6;
  this->bTransitionNeeded = true;
  GRDGStatTransitionCount = GRDGStatTransitionCount + 1;
  ppFVar3 = (this->DebugTransitionResources).AllocatorInstance.Data;
  if ((ppFVar3 <= local_28) && (local_28 < ppFVar3 + (this->DebugTransitionResources).ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar8 = (this->DebugTransitionResources).ArrayNum;
  piVar1 = &(this->DebugTransitionResources).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGViewableResource_*>_>
                      (0x808,&(this->DebugTransitionResources).AllocatorInstance,piVar1);
  }
  (this->DebugTransitionResources).ArrayNum = iVar8 + 1;
  (this->DebugTransitionResources).AllocatorInstance.Data[iVar8] = local_28[0];
  return;
}

// CreateTransition @ 145daacb0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRDGBarrierBatchBegin::CreateTransition
          (FRDGBarrierBatchBegin *this,TArrayView<FRHITransitionInfo_const_,int> *param_1)

{
  int iVar1;
  FRHITransientAliasingInfo *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHITransition *pFVar5;
  undefined4 uStack_7c;
  uint uStack_6c;
  uint uStack_5c;
  FRHITransitionCreateInfo local_58;
  FRHITransitionCreateInfo local_30;
  
  if ((this->bTransitionNeeded == false) || (this->Transition != (FRHITransition *)0x0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bTransitionNeeded && !Transition",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphPass.cpp"
                       ,0xff,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->Aliases).AllocatorInstance.Data;
  iVar1 = (this->Aliases).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_58.SrcPipelines = this->PipelinesToBegin;
  local_58.TransitionInfos.DataPtr = param_1->DataPtr;
  local_58.TransitionInfos.ArrayNum = param_1->ArrayNum;
  local_58.TransitionInfos._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_58.DstPipelines = this->PipelinesToEnd;
  local_58.Flags = this->TransitionFlags;
  local_58.AliasingInfos._12_4_ = uStack_7c;
  local_58.AliasingInfos.ArrayNum = iVar1;
  local_58.AliasingInfos.DataPtr = pFVar2;
  pFVar5 = RHICreateTransition(&local_58);
  this->Transition = pFVar5;
  if (this->bSeparateFenceTransitionNeeded != false) {
    local_30.SrcPipelines = this->PipelinesToBegin;
    local_30.AliasingInfos._8_8_ = (ulonglong)uStack_5c << 0x20;
    local_30.TransitionInfos._8_8_ = (ulonglong)uStack_6c << 0x20;
    local_30.DstPipelines = this->PipelinesToEnd;
    local_30.Flags = None;
    local_30.TransitionInfos.DataPtr = (FRHITransitionInfo *)0x0;
    local_30.AliasingInfos.DataPtr = (FRHITransientAliasingInfo *)0x0;
    pFVar5 = RHICreateTransition(&local_30);
    this->SeparateFenceTransition = pFVar5;
  }
  return;
}

// Submit @ 145dd0010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FRDGBarrierBatchBegin::Submit
          (FRDGBarrierBatchBegin *this,FRHIComputeCommandList *param_1,ERHIPipeline param_2)

{
  code *pcVar1;
  uint uVar2;
  ForElementType<FRHITransition_const_*> FVar3;
  FRHITransition *pFVar4;
  bool bVar5;
  undefined1 auStack_a8 [32];
  ForElementType<FRHITransition_const_*> local_88;
  uint uStack_80;
  undefined4 uStack_7c;
  TArrayView<FRHITransition_const_*,int> local_78;
  ForElementType<FRHITransition_const_*> local_68;
  uint local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_1c = 8;
  local_68.SecondaryData = (ForElementType<FRHITransition_const_*>)0x0;
  bVar5 = this->SeparateFenceTransition != (FRHITransition *)0x0;
  if (bVar5) {
    local_68.InlineData._0_8_ = this->SeparateFenceTransition;
  }
  local_20 = (uint)bVar5;
  uVar2 = (uint)bVar5;
  pFVar4 = this->Transition;
  if (pFVar4 != (FRHITransition *)0x0) {
    if (uVar2 == 8) {
      uVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransition_const_*>_>
                        (0x808,&local_68,&local_1c);
      pFVar4 = this->Transition;
    }
    local_20 = uVar2 + 1;
    FVar3 = (ForElementType<FRHITransition_const_*>)&local_68;
    if (local_68.SecondaryData != (ForElementType<FRHITransition_const_*>)0x0) {
      FVar3 = local_68.SecondaryData;
    }
    *(FRHITransition **)((longlong)FVar3 + (longlong)(int)uVar2 * 8) = pFVar4;
  }
  uVar2 = local_20;
  GRDGStatTransitionBatchCount = GRDGStatTransitionBatchCount + 1;
  if (local_20 != 0) {
    local_88 = (ForElementType<FRHITransition_const_*>)&local_68;
    if (local_68.SecondaryData != (ForElementType<FRHITransition_const_*>)0x0) {
      local_88 = local_68.SecondaryData;
    }
    if ((int)local_20 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_78._12_4_ = uStack_7c;
    local_78.ArrayNum = uVar2;
    local_78.DataPtr = (FRHITransition **)local_88;
    uStack_80 = uVar2;
    FRHIComputeCommandList::BeginTransitions(param_1,&local_78);
  }
  if (local_68.SecondaryData != (ForElementType<FRHITransition_const_*>)0x0) {
    FMemory::Free((void *)local_68.SecondaryData);
  }
  return;
}

// Submit @ 145dd0170

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FRDGBarrierBatchBegin::Submit
          (FRDGBarrierBatchBegin *this,FRHIComputeCommandList *param_1,ERHIPipeline param_2,
          TArray<FRHITransition_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *param_3)

{
  ForElementType<FRHITransition_const_*> FVar1;
  int iVar2;
  ForElementType<FRHITransition_const_*> FVar3;
  
  if (this->SeparateFenceTransition != (FRHITransition *)0x0) {
    iVar2 = param_3->ArrayNum;
    if (iVar2 == param_3->ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransition_const_*>_>
                        (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar2 + 1;
    FVar1 = (param_3->AllocatorInstance).SecondaryData;
    FVar3 = (ForElementType<FRHITransition_const_*>)param_3;
    if (FVar1 != (ForElementType<FRHITransition_const_*>)0x0) {
      FVar3 = FVar1;
    }
    *(FRHITransition **)((longlong)FVar3 + (longlong)iVar2 * 8) = this->SeparateFenceTransition;
  }
  if (this->Transition != (FRHITransition *)0x0) {
    iVar2 = param_3->ArrayNum;
    if (iVar2 == param_3->ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransition_const_*>_>
                        (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar2 + 1;
    FVar1 = (param_3->AllocatorInstance).SecondaryData;
    if (FVar1 != (ForElementType<FRHITransition_const_*>)0x0) {
      param_3 = (TArray<FRHITransition_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar1;
    }
    *(FRHITransition **)((longlong)param_3 + (longlong)iVar2 * 8) = this->Transition;
  }
  GRDGStatTransitionBatchCount = GRDGStatTransitionBatchCount + 1;
  return;
}

