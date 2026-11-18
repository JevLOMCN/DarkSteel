// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 16

// FD3D12LegacyBarriersForContext @ 1459ee670

FD3D12LegacyBarriersForContext * __thiscall
FD3D12LegacyBarriersForContext::FD3D12LegacyBarriersForContext(FD3D12LegacyBarriersForContext *this)

{
  FD3D12LegacyBarriersBatcher *pFVar1;
  
  this->_padding_ = (longlong)&___7FD3D12LegacyBarriersForContext__6B_;
  pFVar1 = ::operator_new(0x10);
  if (pFVar1 != (FD3D12LegacyBarriersBatcher *)0x0) {
    (pFVar1->Barriers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Barriers).ArrayNum = 0;
    (pFVar1->Barriers).ArrayMax = 0;
    (this->Batcher).Ptr = pFVar1;
    return this;
  }
  (this->Batcher).Ptr = (FD3D12LegacyBarriersBatcher *)0x0;
  return this;
}

// ~FD3D12LegacyBarriersForContext @ 1459f8450

void __thiscall
FD3D12LegacyBarriersForContext::~FD3D12LegacyBarriersForContext
          (FD3D12LegacyBarriersForContext *this)

{
  FD3D12LegacyBarriersBatcher *pFVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FD3D12LegacyBarriersForContext__6B_;
  pFVar1 = (this->Batcher).Ptr;
  if (pFVar1 != (FD3D12LegacyBarriersBatcher *)0x0) {
    pFVar2 = (pFVar1->Barriers).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x10);
    return;
  }
  return;
}

// operator() @ 1459fab90

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "D3D12_RESOURCE_STATES": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
`FD3D12LegacyBarriersForContext::HandleResourceDiscardTransitions'::__l6::<lambda_1>::operator()
          (void *this,FRHITransitionInfo *param_1,FD3D12Resource *param_2,FD3D12Texture *param_3,
          FD3D12Texture *param_4)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  ED3D12QueueType EVar3;
  longlong *plVar4;
  FD3D12ContextCommon *pFVar5;
  ForAnyElementType *pFVar6;
  code *pcVar7;
  longlong lVar8;
  FD3D12Resource *pFVar9;
  bool bVar10;
  int iVar11;
  byte *pbVar12;
  FScriptContainerElement *pFVar13;
  bool local_res8 [8];
  D3D12_RESOURCE_STATES local_res10 [2];
  FD3D12Resource *local_res18;
  D3D12_RESOURCE_STATES local_88 [4];
  <lambda_1> local_78;
  
  plVar4 = *(longlong **)this;
  local_res18 = param_2;
  if (plVar4[0x31] == 0) {
    (**(code **)(*plVar4 + 8))();
  }
  EVar3 = *(ED3D12QueueType *)(plVar4[0x31] + 8);
  lVar8 = (local_res18->Desc)._padding_;
  if (((lVar8 & 1) == 0) || (EVar3 != Direct)) {
    if (((lVar8 & 2) == 0) || (EVar3 != Direct)) {
      local_88[0] = D3D12_RESOURCE_STATE_COMMON;
      if ((lVar8 & 4) != 0) {
        local_88[0] = D3D12_RESOURCE_STATE_UNORDERED_ACCESS;
      }
    }
    else {
      local_88[0] = D3D12_RESOURCE_STATE_DEPTH_WRITE;
    }
  }
  else {
    local_88[0] = D3D12_RESOURCE_STATE_RENDER_TARGET;
  }
  local_res10[0] = local_88[0];
  if (**(ED3D12Access **)((longlong)this + 8) != Discard) {
    local_88[0] = GetD3D12ResourceState
                            (**(ED3D12Access **)((longlong)this + 8) & ~Discard,EVar3,
                             &local_res18->Desc,param_3);
  }
  local_res8[0] = local_88[0] != local_res10[0];
  if (((local_res8[0]) &&
      ((((*(char *)(*(longlong *)((longlong)this + 8) + 8) != '\x02' ||
         (param_3 == (FD3D12Texture *)0x0)) ||
        (pbVar12 = (byte *)(**(code **)(param_3->_padding_ + 0x20))(param_3), (*pbVar12 & 5) == 0))
       || (EVar3 != Direct)))) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_6222266924424756048>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12LegacyBarriers.cpp"
                          ,0x4b0,
                          "IsImpossibleAsyncDiscardTransition(ResourceState.SrcPipelines, Texture) && QueueType == ED3D12QueueType::Direct"
                         ), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar9 = local_res18;
  if (((((short)param_1->_padding_ == -1) && (*(short *)((longlong)&param_1->_padding_ + 2) == -1))
      && (*(short *)((longlong)&param_1->_padding_ + 4) == -1)) ||
     (local_res18->SubresourceCount == 1)) {
    pFVar5 = *(FD3D12ContextCommon **)this;
    if (local_res8[0] == false) {
      if ((local_res18 == (FD3D12Resource *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Resource",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                              ,0x1a5,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (pFVar5->CommandList == (FD3D12CommandList *)0x0) {
        (**(code **)(pFVar5->_padding_ + 8))(pFVar5);
      }
      FD3D12CommandList::UpdateResidency(pFVar5->CommandList,pFVar9);
    }
    else {
      FD3D12LegacyBarriersForContext::TransitionResource
                (*(FD3D12LegacyBarriersForContext **)((longlong)this + 0x10),pFVar5,local_res18,
                 local_88[0],local_res10[0],0xffffffff);
    }
    pFVar6 = *(ForAnyElementType **)((longlong)this + 0x18);
    piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
    iVar11 = *(int *)&pFVar6[1].Data;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,pFVar6,piVar1);
    }
    *(int *)&pFVar6[1].Data = iVar11 + 1;
    FVar2 = (FScriptContainerElement)param_1->Flags;
    pFVar13 = pFVar6->Data + (longlong)iVar11 * 0x10;
    *(FD3D12Resource **)pFVar13 = local_res18;
    pFVar13[8] = FVar2;
    *(undefined4 *)(pFVar13 + 0xc) = 0xffffffff;
  }
  else {
    local_78.bTransition = local_res8;
    local_78.__this = *(FD3D12LegacyBarriersForContext **)((longlong)this + 0x10);
    local_78.Context = *(FD3D12CommandContext **)this;
    local_78.Resource = &local_res18;
    local_78.StateBefore = local_88;
    local_78.StateAfter = local_res10;
    local_78.ResourcesToDiscard =
         *(TArray<FD3D12LegacyBarriersForContext::FD3D12DiscardResource,TSizedDefaultAllocator<32>_>
           **)((longlong)this + 0x18);
    local_78.DiscardTexture = &param_4;
    local_78.Info = param_1;
    EnumerateSubresources<__FD3D12LegacyBarriersForContext::HandleResourceDiscardTransitions_::__l6::<lambda_1>::operator()_::__l18::<lambda_1>_>
              (local_res18,param_1,param_4,&local_78);
  }
  return;
}

// operator() @ 1459fae00

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "D3D12_RESOURCE_STATES": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
`FD3D12LegacyBarriersForContext::HandleResourceTransitions'::__l6::<lambda_1>::operator()
          (void *this,FRHITransitionInfo *param_1,FD3D12Resource *param_2,FD3D12Texture *param_3,
          FD3D12Texture *param_4)

{
  short sVar1;
  ED3D12QueueType EVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  ushort uVar6;
  D3D12_RESOURCE_STATES DVar7;
  D3D12_RESOURCE_STATES DVar8;
  byte *pbVar9;
  uint uVar10;
  
  if ((param_2->bRequiresResourceStateTracking) &&
     ((((*(int *)(*(longlong *)this + 4) != 0x40000 || (*(char *)(*(longlong *)this + 9) != '\x02'))
       || (param_3 == (FD3D12Texture *)0x0)) ||
      (pbVar9 = (byte *)(**(code **)(param_3->_padding_ + 0x20))(param_3), (*pbVar9 & 5) == 0)))) {
    EVar2 = **(ED3D12QueueType **)((longlong)this + 8);
    if ((**(ED3D12Access **)this >> 0x12 & 1) == 0) {
      DVar7 = GetD3D12ResourceState(**(ED3D12Access **)this,EVar2,&param_2->Desc,param_3);
    }
    else {
      lVar4 = (param_2->Desc)._padding_;
      if (((lVar4 & 1) == 0) || (EVar2 != Direct)) {
        if (((lVar4 & 2) == 0) || (EVar2 != Direct)) {
          DVar7 = D3D12_RESOURCE_STATE_COMMON;
          if ((lVar4 & 4) != 0) {
            DVar7 = D3D12_RESOURCE_STATE_UNORDERED_ACCESS;
          }
        }
        else {
          DVar7 = D3D12_RESOURCE_STATE_DEPTH_WRITE;
        }
      }
      else {
        DVar7 = D3D12_RESOURCE_STATE_RENDER_TARGET;
      }
    }
    if (((**(int **)this != 2) && (DVar7 == D3D12_RESOURCE_STATE_COMMON)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StateBefore != D3D12_RESOURCE_STATE_COMMON",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12LegacyBarriers.cpp"
                           ,0x585,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    DVar8 = GetD3D12ResourceState
                      (*(ED3D12Access *)(*(longlong *)this + 4),
                       **(ED3D12QueueType **)((longlong)this + 8),&param_2->Desc,param_3);
    sVar1 = (short)param_1->_padding_;
    if ((((sVar1 == -1) && (*(short *)((longlong)&param_1->_padding_ + 2) == -1)) &&
        (*(short *)((longlong)&param_1->_padding_ + 4) == -1)) || (param_2->SubresourceCount == 1))
    {
      FD3D12LegacyBarriersForContext::TransitionResource
                (*(FD3D12LegacyBarriersForContext **)((longlong)this + 0x10),
                 *(FD3D12ContextCommon **)((longlong)this + 0x18),param_2,DVar7,DVar8,0xffffffff);
    }
    else {
      if ((sVar1 == -1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Info.MipIndex != FRHISubresourceRange::kAllSubresources",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12LegacyBarriers.cpp"
                             ,0x592,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((*(short *)((longlong)&param_1->_padding_ + 2) == -1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Info.ArraySlice != FRHISubresourceRange::kAllSubresources",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12LegacyBarriers.cpp"
                             ,0x593,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((*(short *)((longlong)&param_1->_padding_ + 4) == -1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Info.PlaneSlice != FRHISubresourceRange::kAllSubresources",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12LegacyBarriers.cpp"
                             ,0x594,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((int)(param_2->Desc)._padding_ == 4) {
        uVar6 = 1;
      }
      else {
        uVar6 = *(ushort *)((longlong)&(param_2->Desc)._padding_ + 4);
      }
      uVar10 = ((uint)*(ushort *)((longlong)&param_1->_padding_ + 2) +
               (uint)*(ushort *)((longlong)&param_1->_padding_ + 4) * (uint)uVar6) *
               (uint)*(ushort *)((longlong)&(param_2->Desc)._padding_ + 6) +
               (uint)(ushort)param_1->_padding_;
      if ((param_2->SubresourceCount <= uVar10) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Subresource < Resource->GetSubresourceCount()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12LegacyBarriers.cpp"
                             ,0x596,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FD3D12LegacyBarriersForContext::TransitionResource
                (*(FD3D12LegacyBarriersForContext **)((longlong)this + 0x10),
                 *(FD3D12ContextCommon **)((longlong)this + 0x18),param_2,DVar7,DVar8,uVar10);
    }
  }
  return;
}

// AddBarrier @ 1459fe130

/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "D3D12_RESOURCE_STATES": Some values do not have unique names */

void __thiscall
FD3D12LegacyBarriersForContext::AddBarrier
          (FD3D12LegacyBarriersForContext *this,FD3D12ContextCommon *param_1,FD3D12Resource *param_2
          ,ED3D12Access param_3,ED3D12Access param_4,uint param_5)

{
  ED3D12QueueType EVar1;
  code *pcVar2;
  bool bVar3;
  D3D12_RESOURCE_STATES DVar4;
  D3D12_RESOURCE_STATES DVar5;
  
  if (param_2 == (FD3D12Resource *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("pResource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12LegacyBarriers.cpp"
                       ,0x68d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_1->CommandList == (FD3D12CommandList *)0x0) {
    (**(code **)(param_1->_padding_ + 8))(param_1);
  }
  EVar1 = param_1->CommandList->QueueType;
  DVar4 = GetD3D12ResourceState(param_3,EVar1,&param_2->Desc,(FD3D12Texture *)0x0);
  DVar5 = GetD3D12ResourceState(param_4,EVar1,&param_2->Desc,(FD3D12Texture *)0x0);
  TransitionResource(this,param_1,param_2,DVar4,DVar5,param_5);
  return;
}

// AddGlobalBarrier @ 1459fee20

/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12LegacyBarriersForContext::AddGlobalBarrier
          (FD3D12LegacyBarriersForContext *this,FD3D12ContextCommon *param_1,ED3D12Access param_2,
          ED3D12Access param_3)

{
  if (((param_2 & (BVHWrite|BVHRead|UAVMask)) == param_2) &&
     ((param_3 & (BVHWrite|BVHRead|UAVMask)) == param_3)) {
    FD3D12LegacyBarriersBatcher::AddUAV((this->Batcher).Ptr,param_1);
    return;
  }
  FD3D12LegacyBarriersBatcher::AddAliasingBarrier
            ((this->Batcher).Ptr,param_1,(ID3D12Resource *)0x0,(ID3D12Resource *)0x0);
  return;
}

// BeginTransitions @ 145a04490

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FD3D12LegacyBarriersForContext::BeginTransitions
          (FD3D12LegacyBarriersForContext *this,FD3D12CommandContext *param_1,
          TArrayView<FRHITransition_const_*,int> *param_2)

{
  FRHITransition **ppFVar1;
  ERHIPipeline EVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  FRHITransition **ppFVar9;
  FRHITransition **ppFVar10;
  uint uVar11;
  FD3D12LegacyBarriersTransitionData *pFVar12;
  ulong64 uVar13;
  bool bVar14;
  bool local_res10 [8];
  uint local_res18;
  TArrayView<FRHITransition_const_*,int> local_38;
  
  cVar4 = (**(code **)(*(longlong *)&param_1->field_0x1c0 + 8))();
  ppFVar10 = param_2->DataPtr;
  ppFVar1 = ppFVar10 + param_2->ArrayNum;
  ppFVar9 = ppFVar10;
  uVar13 = GRHITransitionPrivateData_AlignInBytes;
  if (ppFVar10 == ppFVar1) {
    local_38.DataPtr = param_2->DataPtr;
    local_38.ArrayNum = param_2->ArrayNum;
    local_38._12_4_ = *(undefined4 *)&param_2->field_0xc;
    HandleDiscardResources(this,param_1,&local_38,true);
  }
  else {
    do {
      pFVar12 = (FD3D12LegacyBarriersTransitionData *)
                ((ulonglong)(&(*ppFVar9)->field_0x8f + uVar13) & ~(uVar13 - 1));
      if (pFVar12->bAsyncToAllPipelines == false) {
        EVar2 = pFVar12->DstPipelines;
        if ((pFVar12->SrcPipelines & All) != All) {
          if ((pFVar12->SrcPipelines == EVar2) || (EVar2 == Graphics)) {
            bVar14 = (EVar2 & All) == All;
            goto LAB_145a0452d;
          }
          goto LAB_145a0452f;
        }
      }
      else {
        bVar14 = cVar4 == '\x02';
LAB_145a0452d:
        if (bVar14) {
LAB_145a0452f:
          HandleTransientAliasing(this,param_1,pFVar12);
          uVar13 = GRHITransitionPrivateData_AlignInBytes;
        }
      }
      ppFVar9 = ppFVar9 + 1;
    } while (ppFVar9 != ppFVar1);
    local_38.DataPtr = param_2->DataPtr;
    local_38.ArrayNum = param_2->ArrayNum;
    local_38._12_4_ = *(undefined4 *)&param_2->field_0xc;
    HandleDiscardResources(this,param_1,&local_38,true);
    local_res10[0] = false;
    ppFVar9 = ppFVar10;
    do {
      pFVar12 = (FD3D12LegacyBarriersTransitionData *)
                ((ulonglong)(&(*ppFVar9)->field_0x8f + GRHITransitionPrivateData_AlignInBytes) &
                ~(GRHITransitionPrivateData_AlignInBytes - 1));
      if (pFVar12->bAsyncToAllPipelines == false) {
        EVar2 = pFVar12->DstPipelines;
        if ((pFVar12->SrcPipelines & All) != All) {
          if ((pFVar12->SrcPipelines == EVar2) || (EVar2 == Graphics)) {
            bVar14 = (EVar2 & All) == All;
            goto LAB_145a045c1;
          }
          goto LAB_145a045c3;
        }
      }
      else {
        bVar14 = cVar4 == '\x02';
LAB_145a045c1:
        if (bVar14) {
LAB_145a045c3:
          HandleResourceTransitions(this,param_1,pFVar12,local_res10);
        }
      }
      ppFVar9 = ppFVar9 + 1;
    } while (ppFVar9 != ppFVar1);
    if (local_res10[0] != false) {
      FD3D12StateCache::FlushComputeShaderCache(&param_1->StateCache,true);
    }
    do {
      uVar7 = (ulonglong)(&(*ppFVar10)->field_0x8f + GRHITransitionPrivateData_AlignInBytes) &
              ~(GRHITransitionPrivateData_AlignInBytes - 1);
      if (*(char *)(uVar7 + 0x248) != '\0') {
        local_res18 = 0;
        bVar14 = *(int *)&param_1->field_0x2f8 != 0;
        if (bVar14) {
          for (; (*(uint *)&param_1->field_0x2f8 >> local_res18 & 1) == 0;
              local_res18 = local_res18 + 1) {
          }
        }
        uVar11 = 0x20;
        if (bVar14) {
          uVar11 = local_res18;
        }
        uVar5 = 0;
        if ((int)uVar11 < *(int *)(uVar7 + 0x240)) {
          uVar5 = ~uVar11 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar8 = uVar7 + 0x1b8;
        if (*(longlong *)(uVar7 + 0x238) != 0) {
          lVar8 = *(longlong *)(uVar7 + 0x238);
        }
        lVar8 = (longlong)(int)uVar11 * 0x10 + lVar8;
        if ((cVar4 == '\x01') || (cVar4 != '\x02')) {
          lVar6 = 0;
        }
        else {
          lVar6 = 8;
        }
        if (*(longlong *)(lVar6 + lVar8) != 0) {
          if ((cVar4 == '\x01') || (cVar4 != '\x02')) {
            lVar6 = 0;
          }
          else {
            lVar6 = 8;
          }
          FD3D12ContextCommon::SignalSyncPoint
                    ((FD3D12ContextCommon *)param_1,*(FD3D12SyncPoint **)(lVar6 + lVar8));
        }
      }
      ppFVar10 = ppFVar10 + 1;
    } while (ppFVar10 != ppFVar1);
  }
  return;
}

// EndTransitions @ 145a14b60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FD3D12LegacyBarriersForContext::EndTransitions
          (FD3D12LegacyBarriersForContext *this,FD3D12CommandContext *param_1,
          TArrayView<FRHITransition_const_*,int> *param_2)

{
  FRHITransition **ppFVar1;
  ERHIPipeline EVar2;
  int iVar3;
  FD3D12SyncPoint *pFVar4;
  code *pcVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  byte bVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong64 *puVar15;
  FRHITransition **ppFVar16;
  FRHITransition **ppFVar17;
  uint uVar18;
  FD3D12LegacyBarriersTransitionData *pFVar19;
  bool bVar20;
  bool local_res10 [8];
  TArrayView<FRHITransition_const_*,int> *local_res18;
  undefined1 local_res20 [8];
  TArrayView<FRHITransition_const_*,int> local_58;
  
  local_res18 = param_2;
  bVar6 = (**(code **)(*(longlong *)&param_1->field_0x1c0 + 8))();
  ppFVar17 = param_2->DataPtr;
  ppFVar1 = ppFVar17 + param_2->ArrayNum;
  for (; ppFVar17 != ppFVar1; ppFVar17 = ppFVar17 + 1) {
    pbVar13 = (byte *)((ulonglong)
                       (&(*ppFVar17)->field_0x8f + GRHITransitionPrivateData_AlignInBytes) &
                      ~(GRHITransitionPrivateData_AlignInBytes - 1));
    if (pbVar13[0x249] == 0) {
      if (pbVar13[0x248] != 0) {
        uVar8 = 0;
        bVar20 = *(int *)&param_1->field_0x2f8 != 0;
        if (bVar20) {
          for (; (*(uint *)&param_1->field_0x2f8 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
          }
        }
        uVar18 = 0x20;
        if (bVar20) {
          uVar18 = uVar8;
        }
        uVar8 = 0;
        if ((int)uVar18 < *(int *)(pbVar13 + 0x240)) {
          uVar8 = ~uVar18 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        bVar12 = *pbVar13;
        pbVar14 = pbVar13 + 0x1b8;
        if (*(byte **)(pbVar13 + 0x238) != (byte *)0x0) {
          pbVar14 = *(byte **)(pbVar13 + 0x238);
        }
        for (; bVar12 != 0; bVar12 = bVar12 & ~(~bVar12 + 1)) {
          bVar7 = ~bVar12 + 1 & bVar12;
          if (bVar7 != bVar6) {
            if ((bVar7 == 1) || (bVar7 != 2)) {
              lVar9 = 0;
            }
            else {
              lVar9 = 8;
            }
            if (*(longlong *)(pbVar14 + lVar9 + (longlong)(int)uVar18 * 0x10) != 0) {
              if ((bVar7 == 1) || (bVar7 != 2)) {
                lVar9 = 0;
              }
              else {
                lVar9 = 8;
              }
              FD3D12ContextCommon::WaitSyncPoint
                        ((FD3D12ContextCommon *)param_1,
                         *(FD3D12SyncPoint **)(pbVar14 + lVar9 + (longlong)(int)uVar18 * 0x10));
            }
          }
        }
      }
    }
    else {
      uVar8 = 0;
      bVar20 = *(int *)&param_1->field_0x2f8 != 0;
      if (bVar20) {
        for (; (*(uint *)&param_1->field_0x2f8 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
        }
      }
      uVar18 = 0x20;
      if (bVar20) {
        uVar18 = uVar8;
      }
      uVar8 = 0;
      if ((int)uVar18 < *(int *)(pbVar13 + 0x240)) {
        uVar8 = ~uVar18 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pbVar14 = pbVar13 + 0x1b8;
      if (*(byte **)(pbVar13 + 0x238) != (byte *)0x0) {
        pbVar14 = *(byte **)(pbVar13 + 0x238);
      }
      if (bVar6 == 1) {
        FD3D12ContextCommon::WaitSyncPoint
                  ((FD3D12ContextCommon *)param_1,
                   *(FD3D12SyncPoint **)(pbVar14 + (longlong)(int)uVar18 * 0x10 + 8));
      }
    }
    param_2 = local_res18;
  }
  ppFVar17 = param_2->DataPtr;
  ppFVar1 = ppFVar17 + param_2->ArrayNum;
  for (; ppFVar17 != ppFVar1; ppFVar17 = ppFVar17 + 1) {
    uVar11 = (ulonglong)(&(*ppFVar17)->field_0x8f + GRHITransitionPrivateData_AlignInBytes) &
             ~(GRHITransitionPrivateData_AlignInBytes - 1);
    lVar9 = uVar11 + 8;
    iVar3 = *(int *)(uVar11 + 0xd0);
    if (*(longlong *)(uVar11 + 200) != 0) {
      lVar9 = *(longlong *)(uVar11 + 200);
    }
    puVar15 = (ulong64 *)(lVar9 + 0x20);
    while( true ) {
      if (*(int *)(uVar11 + 0xd0) != iVar3) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FRHITransitionInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (puVar15 + -4 == (ulong64 *)((longlong)iVar3 * 0x30 + lVar9)) break;
      if ((char)puVar15[1] == '\0') {
LAB_145a14e77:
        puVar15 = puVar15 + 6;
      }
      else {
        if ((char)puVar15[-2] != '\x02') {
          bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("!\"Enclosing block should never be called\"",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12LegacyBarriers.cpp"
                              ,0x482,L"");
          if (bVar20) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          goto LAB_145a14e77;
        }
        uVar8 = 0;
        bVar20 = *(int *)&param_1->field_0x2f8 != 0;
        if (bVar20) {
          for (; (*(uint *)&param_1->field_0x2f8 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
          }
        }
        if (puVar15[-3] == 0) {
          FD3D12ContextCommon::SetReservedBufferCommitSize
                    ((FD3D12ContextCommon *)param_1,(FD3D12Buffer *)0x0,*puVar15);
          puVar15 = puVar15 + 6;
        }
        else {
          uVar10 = 0x20;
          if (bVar20) {
            uVar10 = (ulonglong)uVar8;
          }
          FD3D12ContextCommon::SetReservedBufferCommitSize
                    ((FD3D12ContextCommon *)param_1,
                     *(FD3D12Buffer **)(puVar15[-3] + 0x1b0 + uVar10 * 8),*puVar15);
          puVar15 = puVar15 + 6;
        }
      }
    }
    param_2 = local_res18;
  }
  ppFVar17 = param_2->DataPtr;
  ppFVar1 = ppFVar17 + param_2->ArrayNum;
  ppFVar16 = ppFVar17;
  if (ppFVar17 == ppFVar1) {
    local_58.DataPtr = param_2->DataPtr;
    local_58.ArrayNum = param_2->ArrayNum;
    local_58._12_4_ = *(undefined4 *)&param_2->field_0xc;
    HandleDiscardResources(this,param_1,&local_58,false);
  }
  else {
    do {
      pFVar19 = (FD3D12LegacyBarriersTransitionData *)
                ((ulonglong)(&(*ppFVar16)->field_0x8f + GRHITransitionPrivateData_AlignInBytes) &
                ~(GRHITransitionPrivateData_AlignInBytes - 1));
      if (pFVar19->bAsyncToAllPipelines == false) {
        EVar2 = pFVar19->DstPipelines;
        if (((pFVar19->SrcPipelines & All) == All) ||
           (((pFVar19->SrcPipelines == EVar2 || (EVar2 == Graphics)) && ((EVar2 & All) != All))))
        goto LAB_145a14f0c;
      }
      else if (bVar6 == 1) {
LAB_145a14f0c:
        HandleTransientAliasing(this,param_1,pFVar19);
      }
      ppFVar16 = ppFVar16 + 1;
    } while (ppFVar16 != ppFVar1);
    local_58.DataPtr = local_res18->DataPtr;
    local_58.ArrayNum = local_res18->ArrayNum;
    local_58._12_4_ = *(undefined4 *)&local_res18->field_0xc;
    HandleDiscardResources(this,param_1,&local_58,false);
    local_res10[0] = false;
    ppFVar16 = ppFVar17;
    do {
      pFVar19 = (FD3D12LegacyBarriersTransitionData *)
                ((ulonglong)(&(*ppFVar16)->field_0x8f + GRHITransitionPrivateData_AlignInBytes) &
                ~(GRHITransitionPrivateData_AlignInBytes - 1));
      if (pFVar19->bAsyncToAllPipelines == false) {
        EVar2 = pFVar19->DstPipelines;
        if (((pFVar19->SrcPipelines & All) == All) ||
           (((pFVar19->SrcPipelines == EVar2 || (EVar2 == Graphics)) && ((EVar2 & All) != All))))
        goto LAB_145a14fb5;
      }
      else if (bVar6 == 1) {
LAB_145a14fb5:
        HandleResourceTransitions(this,param_1,pFVar19,local_res10);
      }
      ppFVar16 = ppFVar16 + 1;
    } while (ppFVar16 != ppFVar1);
    if (local_res10[0] != false) {
      FD3D12StateCache::FlushComputeShaderCache(&param_1->StateCache,true);
    }
    do {
      uVar11 = (ulonglong)(&(*ppFVar17)->field_0x8f + GRHITransitionPrivateData_AlignInBytes) &
               ~(GRHITransitionPrivateData_AlignInBytes - 1);
      if ((*(char *)(uVar11 + 0x249) != '\0') && (bVar6 == 2)) {
        uVar8 = 0;
        bVar20 = *(int *)&param_1->field_0x2f8 != 0;
        if (bVar20) {
          for (; (*(uint *)&param_1->field_0x2f8 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
          }
        }
        uVar18 = 0x20;
        if (bVar20) {
          uVar18 = uVar8;
        }
        uVar8 = 0;
        if ((int)uVar18 < *(int *)(uVar11 + 0x240)) {
          uVar8 = ~uVar18 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar9 = uVar11 + 0x1b8;
        if (*(longlong *)(uVar11 + 0x238) != 0) {
          lVar9 = *(longlong *)(uVar11 + 0x238);
        }
        pFVar4 = *(FD3D12SyncPoint **)(lVar9 + 8 + (longlong)(int)uVar18 * 0x10);
        if (pFVar4 != (FD3D12SyncPoint *)0x0) {
          FD3D12ContextCommon::SignalSyncPoint((FD3D12ContextCommon *)param_1,pFVar4);
        }
      }
      ppFVar17 = ppFVar17 + 1;
    } while (ppFVar17 != ppFVar1);
  }
  return;
}

// FlushIntoCommandList @ 145a16d40

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12LegacyBarriersForContext::FlushIntoCommandList
          (FD3D12LegacyBarriersForContext *this,FD3D12CommandList *param_1,
          FD3D12QueryAllocator *param_2)

{
  FD3D12LegacyBarriersBatcher::FlushIntoCommandList((this->Batcher).Ptr,param_1,param_2);
  return;
}

// GetNumPendingBarriers @ 145a19c30

int __thiscall
FD3D12LegacyBarriersForContext::GetNumPendingBarriers(FD3D12LegacyBarriersForContext *this)

{
  return (((this->Batcher).Ptr)->Barriers).ArrayNum;
}

// HandleDiscardResources @ 145a1bf80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FD3D12LegacyBarriersForContext::HandleDiscardResources
          (FD3D12LegacyBarriersForContext *this,FD3D12CommandContext *param_1,
          TArrayView<FRHITransition_const_*,int> *param_2,bool param_3)

{
  int *piVar1;
  FRHITransition **ppFVar2;
  ERHIPipeline EVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  bool bVar7;
  ForAnyElementType FVar8;
  FRHITransition **ppFVar9;
  FScriptContainerElement *pFVar10;
  FD3D12LegacyBarriersTransitionData *pFVar11;
  undefined4 *puVar12;
  ulong64 uVar13;
  undefined1 local_res18 [16];
  TArray<FD3D12LegacyBarriersForContext::FD3D12DiscardResource,TSizedDefaultAllocator<32>_> local_58
  ;
  undefined4 local_48 [2];
  undefined8 local_40;
  int local_38;
  undefined4 local_34;
  
  ppFVar9 = param_2->DataPtr;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  ppFVar2 = ppFVar9 + param_2->ArrayNum;
  uVar13 = GRHITransitionPrivateData_AlignInBytes;
  for (; ppFVar9 != ppFVar2; ppFVar9 = ppFVar9 + 1) {
    pFVar11 = (FD3D12LegacyBarriersTransitionData *)
              ((ulonglong)(&(*ppFVar9)->field_0x8f + uVar13) & ~(uVar13 - 1));
    EVar3 = pFVar11->DstPipelines;
    if (((pFVar11->SrcPipelines & All) == All) ||
       (((pFVar11->SrcPipelines == EVar3 || (EVar3 == Graphics)) && ((EVar3 & All) != All)))) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7 == param_3) {
      HandleResourceDiscardTransitions(this,param_1,pFVar11,&local_58);
      uVar13 = GRHITransitionPrivateData_AlignInBytes;
    }
  }
  if (GD3D12AllowDiscardResources != 0) {
    if (local_58.ArrayNum != 0) {
      if (*(longlong *)&param_1->field_0x188 == 0) {
        (**(code **)(*(longlong *)param_1 + 8))(param_1);
      }
      FD3D12LegacyBarriersBatcher::FlushIntoCommandList
                ((this->Batcher).Ptr,*(FD3D12CommandList **)&param_1->field_0x188,
                 (FD3D12QueryAllocator *)&param_1->field_0x38);
    }
    iVar6 = local_58.ArrayNum;
    pFVar10 = local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 0x10;
    FVar8.Data = local_58.AllocatorInstance.Data;
    while( true ) {
      if (local_58.ArrayNum != iVar6) {
        `TCheckedPointerIterator<FD3D12LegacyBarriersForContext::FD3D12DiscardResource,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (FVar8.Data == pFVar10) break;
      if ((GD3D12DisableDiscardOfDepthResources == 0) ||
         ((*(byte *)(*(longlong *)FVar8.Data + 0xab) & 4) == 0)) {
        iVar4 = *(int *)(FVar8.Data + 0xc);
        if (iVar4 == -1) {
          if (*(longlong *)&param_1->field_0x188 == 0) {
            (**(code **)(*(longlong *)param_1 + 8))(param_1);
          }
          puVar12 = (undefined4 *)0x0;
        }
        else {
          local_48[0] = 0;
          local_40 = 0;
          local_34 = 1;
          local_38 = iVar4;
          if (*(longlong *)&param_1->field_0x188 == 0) {
            (**(code **)(*(longlong *)param_1 + 8))(param_1);
          }
          puVar12 = local_48;
        }
        plVar5 = *(longlong **)(*(longlong *)&param_1->field_0x188 + 0x28);
        piVar1 = (int *)(*(longlong *)&param_1->field_0x188 + 0x168);
        *piVar1 = *piVar1 + 1;
        (**(code **)(*plVar5 + 0x198))
                  (plVar5,*(undefined8 *)(*(longlong *)FVar8.Data + 0x20),puVar12);
      }
      FVar8.Data = FVar8.Data + 0x10;
    }
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// HandleReservedResourceCommits @ 145a1c280

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
FD3D12LegacyBarriersForContext::HandleReservedResourceCommits
          (FD3D12CommandContext *param_1,FD3D12LegacyBarriersTransitionData *param_2)

{
  int iVar1;
  code *pcVar2;
  ulonglong uVar3;
  FRHITransitionInfo *pFVar4;
  TOptional<FRHICommitResourceInfo> *pTVar5;
  bool bVar6;
  undefined1 local_res10 [8];
  uint local_res18;
  
  pFVar4 = (param_2->TransitionInfos).AllocatorInstance.SecondaryData.Data;
  iVar1 = (param_2->TransitionInfos).ArrayNum;
  if (pFVar4 == (FRHITransitionInfo *)0x0) {
    pFVar4 = (FRHITransitionInfo *)&param_2->TransitionInfos;
  }
  pTVar5 = &pFVar4->CommitInfo;
LAB_145a1c2c0:
  do {
    if ((param_2->TransitionInfos).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FRHITransitionInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if ((FRHITransitionInfo *)(pTVar5 + -2) == pFVar4 + iVar1) {
      return;
    }
    if (pTVar5->bIsSet != false) {
      if (*(EType *)(pTVar5 + -1) == Buffer) {
        local_res18 = 0;
        bVar6 = *(int *)&param_1->field_0x2f8 != 0;
        if (bVar6) {
          for (; (*(uint *)&param_1->field_0x2f8 >> local_res18 & 1) == 0;
              local_res18 = local_res18 + 1) {
          }
        }
        if ((((FRHITransitionInfo *)(pTVar5 + -2))->field1_0x8).Resource == (FRHIResource *)0x0) {
          FD3D12ContextCommon::SetReservedBufferCommitSize
                    ((FD3D12ContextCommon *)param_1,(FD3D12Buffer *)0x0,
                     (pTVar5->TypedValue).SizeInBytes);
          pTVar5 = pTVar5 + 3;
        }
        else {
          uVar3 = 0x20;
          if (bVar6) {
            uVar3 = (ulonglong)local_res18;
          }
          FD3D12ContextCommon::SetReservedBufferCommitSize
                    ((FD3D12ContextCommon *)param_1,
                     (FD3D12Buffer *)
                     (&(((FRHITransitionInfo *)(pTVar5 + -2))->field1_0x8).Resource[0x12]._padding_)
                     [uVar3],(pTVar5->TypedValue).SizeInBytes);
          pTVar5 = pTVar5 + 3;
        }
        goto LAB_145a1c2c0;
      }
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12LegacyBarriers.cpp"
                         ,0x482,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pTVar5 = pTVar5 + 3;
  } while( true );
}

// HandleResourceDiscardTransitions @ 145a1c390

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FD3D12LegacyBarriersForContext::HandleResourceDiscardTransitions
          (FD3D12LegacyBarriersForContext *this,FD3D12CommandContext *param_1,
          FD3D12LegacyBarriersTransitionData *param_2,
          TArray<FD3D12LegacyBarriersForContext::FD3D12DiscardResource,TSizedDefaultAllocator<32>_>
          *param_3)

{
  ERHIPipeline EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FRHIViewableResource *pFVar5;
  FRHITransitionInfo *pFVar6;
  FRHITransitionInfo *pFVar7;
  undefined1 local_res18 [8];
  ERHIAccess local_68;
  ERHIAccess local_64;
  ERHIPipeline local_60;
  ERHIPipeline local_5f;
  tuple<FD3D12Resource_*,FD3D12Texture_*> local_58;
  FD3D12CommandContext *local_48;
  ERHIAccess *local_40;
  FD3D12LegacyBarriersForContext *local_38;
  TArray<FD3D12LegacyBarriersForContext::FD3D12DiscardResource,TSizedDefaultAllocator<32>_>
  *local_30;
  
  pFVar6 = (param_2->TransitionInfos).AllocatorInstance.SecondaryData.Data;
  iVar2 = (param_2->TransitionInfos).ArrayNum;
  if (pFVar6 == (FRHITransitionInfo *)0x0) {
    pFVar6 = (FRHITransitionInfo *)&param_2->TransitionInfos;
  }
  pFVar7 = pFVar6 + iVar2;
  while( true ) {
    if ((param_2->TransitionInfos).ArrayNum != iVar2) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FRHITransitionInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar6 == pFVar7) break;
    local_68 = pFVar6->AccessBefore;
    local_64 = pFVar6->AccessAfter;
    local_60 = param_2->SrcPipelines;
    local_5f = param_2->DstPipelines;
    pFVar5 = GetViewableResource(pFVar6);
    if (pFVar5 != (FRHIViewableResource *)0x0) {
      if ((local_68 == None) ||
         ((local_68 == Discard && (GRHIGlobals.NeedsTransientDiscardStateTracking != false)))) {
        EVar1 = (pFVar5->TrackedAccess).Pipelines;
        local_60 = Graphics;
        if (EVar1 != None) {
          local_60 = EVar1;
        }
        local_68 = (pFVar5->TrackedAccess).Access;
      }
      if (local_64 == None) {
        local_64 = (pFVar5->TrackedAccess).Access;
      }
      if (local_68 == None) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("AccessBefore != ERHIAccess::Unknown",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Internal\\RHICoreTransitions.h"
                           ,0x20,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (local_64 == None) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("AccessAfter != ERHIAccess::Unknown",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Internal\\RHICoreTransitions.h"
                           ,0x21,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    if ((local_68 & Discard) != None) {
      local_40 = &local_68;
      local_48 = param_1;
      local_38 = this;
      local_30 = param_3;
      GetResourceAndTexture(&local_58,param_1,pFVar6);
      if (local_58._Myfirst._Val != (FD3D12Resource *)0x0) {
        `FD3D12LegacyBarriersForContext::HandleResourceDiscardTransitions'::__l6::<lambda_1>::
        operator()(&local_48,pFVar6,local_58._Myfirst._Val,(FD3D12Texture *)local_58._padding_,
                   (FD3D12Texture *)0x0);
      }
    }
    pFVar6 = pFVar6 + 1;
  }
  return;
}

// HandleResourceTransitions @ 145a1c560

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FD3D12LegacyBarriersForContext::HandleResourceTransitions
          (FD3D12LegacyBarriersForContext *this,FD3D12CommandContext *param_1,
          FD3D12LegacyBarriersTransitionData *param_2,bool *param_3)

{
  ERHIPipeline EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FRHIViewableResource *pFVar5;
  byte bVar6;
  FRHITransitionInfo *pFVar7;
  FRHITransitionInfo *pFVar8;
  undefined1 local_res18 [16];
  int local_88 [2];
  ERHIAccess local_80;
  ERHIAccess local_7c;
  ERHIPipeline local_78;
  ERHIPipeline local_77;
  tuple<FD3D12Resource_*,FD3D12Texture_*> local_70;
  ERHIAccess *local_58;
  int *local_50;
  FD3D12LegacyBarriersForContext *local_48;
  FD3D12CommandContext *local_40;
  
  pFVar7 = (param_2->TransitionInfos).AllocatorInstance.SecondaryData.Data;
  iVar2 = (param_2->TransitionInfos).ArrayNum;
  if (pFVar7 == (FRHITransitionInfo *)0x0) {
    pFVar7 = (FRHITransitionInfo *)&param_2->TransitionInfos;
  }
  pFVar8 = pFVar7 + iVar2;
  do {
    if ((param_2->TransitionInfos).ArrayNum != iVar2) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FRHITransitionInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar7 == pFVar8) {
      return;
    }
    if ((pFVar7->field1_0x8).Resource != (FRHIResource *)0x0) {
      local_80 = pFVar7->AccessBefore;
      local_7c = pFVar7->AccessAfter;
      local_78 = param_2->SrcPipelines;
      local_77 = param_2->DstPipelines;
      pFVar5 = GetViewableResource(pFVar7);
      if (pFVar5 != (FRHIViewableResource *)0x0) {
        if ((local_80 == None) ||
           ((local_80 == Discard && (GRHIGlobals.NeedsTransientDiscardStateTracking != false)))) {
          EVar1 = (pFVar5->TrackedAccess).Pipelines;
          local_78 = Graphics;
          if (EVar1 != None) {
            local_78 = EVar1;
          }
          local_80 = (pFVar5->TrackedAccess).Access;
        }
        if (local_7c == None) {
          local_7c = (pFVar5->TrackedAccess).Access;
        }
        if ((local_80 == None) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("AccessBefore != ERHIAccess::Unknown",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Internal\\RHICoreTransitions.h"
                               ,0x20,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((local_7c == None) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("AccessAfter != ERHIAccess::Unknown",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Internal\\RHICoreTransitions.h"
                               ,0x21,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (((local_80 & UAVMask) == None) || ((local_7c & UAVMask) == None)) {
        bVar6 = 0;
      }
      else {
        bVar6 = 1;
      }
      *param_3 = (bool)(*param_3 | bVar6);
      if (local_80 != local_7c) {
        if (*(longlong *)&param_1->field_0x188 == 0) {
          (**(code **)(*(longlong *)param_1 + 8))(param_1);
        }
        local_88[0] = *(int *)(*(longlong *)&param_1->field_0x188 + 8);
        if (((param_2->bAsyncToAllPipelines != false) && (local_7c == SRVMask)) &&
           (local_88[0] == 0)) {
          local_80 = SRVCompute;
        }
        local_58 = &local_80;
        local_50 = local_88;
        local_48 = this;
        local_40 = param_1;
        GetResourceAndTexture(&local_70,param_1,pFVar7);
        if (local_70._Myfirst._Val != (FD3D12Resource *)0x0) {
          `FD3D12LegacyBarriersForContext::HandleResourceTransitions'::__l6::<lambda_1>::operator()
                    (&local_58,pFVar7,local_70._Myfirst._Val,(FD3D12Texture *)local_70._padding_,
                     (FD3D12Texture *)0x0);
        }
      }
    }
    pFVar7 = pFVar7 + 1;
  } while( true );
}

// HandleTransientAliasing @ 145a1c780

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FD3D12LegacyBarriersForContext::HandleTransientAliasing
          (FD3D12LegacyBarriersForContext *this,FD3D12CommandContext *param_1,
          FD3D12LegacyBarriersTransitionData *param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  FRHITransientAliasingInfo *pFVar8;
  FRHITransientAliasingInfo *pFVar9;
  undefined1 local_res18 [8];
  uint local_res20;
  
  pFVar8 = (param_2->AliasingInfos).AllocatorInstance.SecondaryData.Data;
  iVar1 = (param_2->AliasingInfos).ArrayNum;
  if (pFVar8 == (FRHITransientAliasingInfo *)0x0) {
    pFVar8 = (FRHITransientAliasingInfo *)&param_2->AliasingInfos;
  }
  pFVar9 = pFVar8 + iVar1;
  do {
    while( true ) {
      if ((param_2->AliasingInfos).ArrayNum != iVar1) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FRHITransientAliasingInfo_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar8 == pFVar9) {
        return;
      }
      if (pFVar8->Type == Texture) break;
      if (pFVar8->Type == Buffer) {
        local_res20 = 0;
        bVar4 = *(int *)&param_1->field_0x2f8 != 0;
        if (bVar4) {
          for (; (*(uint *)&param_1->field_0x2f8 >> local_res20 & 1) == 0;
              local_res20 = local_res20 + 1) {
          }
        }
        lVar7 = 0;
        if ((pFVar8->field0_0x0).Resource == (FRHIResource *)0x0) {
LAB_145a1c85e:
          if ((GNumExplicitGPUsForRendering < 2) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Buffer || GNumExplicitGPUsForRendering > 1",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12LegacyBarriers.cpp"
                                 ,0x527,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else {
          uVar5 = 0x20;
          if (bVar4) {
            uVar5 = (ulonglong)local_res20;
          }
          lVar7 = (&(pFVar8->field0_0x0).Resource[0x12]._padding_)[uVar5];
          if (lVar7 == 0) goto LAB_145a1c85e;
        }
        lVar6 = lVar7 + 0xe8;
        if (lVar7 == 0) {
          lVar6 = 0;
        }
LAB_145a1c8de:
        if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 0x58), pFVar8->Action == Acquire)) {
          bVar4 = -1 < CpuChannel->Enabled;
          if (bVar4) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId1345,"D3D12RHI::AcquireTransient",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12LegacyBarriers.cpp"
                       ,0x541);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1345);
          }
          FD3D12LegacyBarriersBatcher::AddAliasingBarrier
                    ((this->Batcher).Ptr,(FD3D12ContextCommon *)param_1,(ID3D12Resource *)0x0,
                     *(ID3D12Resource **)(lVar6 + 0x20));
          if (bVar4) {
            FCpuProfilerTrace::OutputEndEvent();
          }
        }
        goto LAB_145a1c94d;
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12LegacyBarriers.cpp"
                         ,0x534,L"");
      if (bVar4) goto code_r0x000145a1c984;
      pFVar8 = pFVar8 + 1;
    }
    uVar2 = 0;
    bVar4 = *(int *)&param_1->field_0x2f8 != 0;
    if (bVar4) {
      for (; (*(uint *)&param_1->field_0x2f8 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    uVar5 = 0x20;
    if (bVar4) {
      uVar5 = (ulonglong)uVar2;
    }
    if ((((pFVar8->field0_0x0).Resource != (FRHIResource *)0x0) &&
        (lVar6 = (**(code **)(((pFVar8->field0_0x0).Resource)->_padding_ + 0x48))(), lVar6 != 0)) &&
       (lVar6 = *(longlong *)(lVar6 + 0x200 + uVar5 * 8), lVar6 != 0)) {
      lVar6 = lVar6 + 0x138;
      goto LAB_145a1c8de;
    }
    if ((GNumExplicitGPUsForRendering < 2) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Texture || GNumExplicitGPUsForRendering > 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12LegacyBarriers.cpp"
                           ,0x52f,L""), bVar4)) {
code_r0x000145a1c984:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
LAB_145a1c94d:
    pFVar8 = pFVar8 + 1;
  } while( true );
}

// TransitionResource @ 145a33c20

/* WARNING: Enum "D3D12_RESOURCE_STATES": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12LegacyBarriersForContext::TransitionResource
          (FD3D12LegacyBarriersForContext *this,FD3D12ContextCommon *param_1,FD3D12Resource *param_2
          ,D3D12_RESOURCE_STATES param_3,D3D12_RESOURCE_STATES param_4,uint param_5)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  wchar_t *pwVar4;
  int iVar5;
  FName local_res10;
  FString local_38;
  FString local_28;
  
  if ((param_2 == (FD3D12Resource *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InResource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12LegacyBarriers.cpp"
                         ,0x5b8,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((((param_4 & D3D12_RESOURCE_STATE_ALL_SHADER_RESOURCE) != D3D12_RESOURCE_STATE_COMMON) &&
      (((param_2->Desc)._padding_ & 8) != 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!((InAfterState & (D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE | D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE)) && (InResource->GetDesc().Flags & D3D12_RESOURCE_FLAG_DENY_SHADER_RESOURCE))"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12LegacyBarriers.cpp"
                         ,0x5ba,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_3 == ~D3D12_RESOURCE_STATE_RESERVED_INTERNAL_80000000) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InBeforeState != D3D12_RESOURCE_STATES(-1 ^ (1 << 31))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12LegacyBarriers.cpp"
                         ,0x5bb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_4 == ~D3D12_RESOURCE_STATE_RESERVED_INTERNAL_80000000) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InAfterState != D3D12_RESOURCE_STATES(-1 ^ (1 << 31))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12LegacyBarriers.cpp"
                         ,0x5bc,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  lVar2 = (param_2->Desc)._padding_;
  if (((param_4 & D3D12_RESOURCE_STATE_RENDER_TARGET) == D3D12_RESOURCE_STATE_COMMON) ||
     ((lVar2 & 1) != 0)) {
    if (((param_4 & (D3D12_RESOURCE_STATE_DEPTH_READ|D3D12_RESOURCE_STATE_DEPTH_WRITE)) !=
         D3D12_RESOURCE_STATE_COMMON) && ((lVar2 & 2) == 0)) {
      pwVar4 = 
      L"D3D12_RESOURCE_STATE_DEPTH_WRITE or D3D12_RESOURCE_STATE_DEPTH_READ requires D3D12_RESOURCE_FLAG_ALLOW_DEPTH_STENCIL.\n"
      ;
      iVar5 = 0x76;
      goto LAB_145a33d96;
    }
    if (((param_4 & D3D12_RESOURCE_STATE_UNORDERED_ACCESS) != D3D12_RESOURCE_STATE_COMMON) &&
       ((lVar2 & 4) == 0)) {
      pwVar4 = 
      L"D3D12_RESOURCE_STATE_UNORDERED_ACCESS requires D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS.\n"
      ;
      iVar5 = 0x5b;
      goto LAB_145a33d96;
    }
    if (((param_4 & D3D12_RESOURCE_STATE_ALL_SHADER_RESOURCE) != D3D12_RESOURCE_STATE_COMMON) &&
       ((lVar2 & 8) != 0)) {
      pwVar4 = 
      L"D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE or D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE cannot be used with D3D12_RESOURCE_FLAG_DENY_SHADER_RESOURCE.\n"
      ;
      iVar5 = 0x9b;
      goto LAB_145a33d96;
    }
  }
  else {
    pwVar4 = 
    L"D3D12_RESOURCE_STATE_RENDER_TARGET requires D3D12_RESOURCE_FLAG_ALLOW_RENDER_TARGET.\n";
    iVar5 = 0x55;
LAB_145a33d96:
    ::FString::AppendChars(&local_38,pwVar4,iVar5);
    if (1 < (byte)LogRHI._0_1_) {
      local_res10 = param_2->DebugName;
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  if (param_1->CommandList == (FD3D12CommandList *)0x0) {
    (**(code **)(param_1->_padding_ + 8))(param_1);
  }
  FD3D12CommandList::UpdateResidency(param_1->CommandList,param_2);
  if (param_3 == D3D12_RESOURCE_STATE_RAYTRACING_ACCELERATION_STRUCTURE) {
    if (param_4 == D3D12_RESOURCE_STATE_RAYTRACING_ACCELERATION_STRUCTURE) {
      FD3D12LegacyBarriersBatcher::AddUAV((this->Batcher).Ptr,param_1);
      goto LAB_145a33f0d;
    }
LAB_145a33e54:
    if (param_4 ==
        ~(D3D12_RESOURCE_STATE_RESERVED_INTERNAL_80000000|
         D3D12_RESOURCE_STATE_VERTEX_AND_CONSTANT_BUFFER)) goto LAB_145a33e5c;
  }
  else {
    if (param_3 !=
        ~(D3D12_RESOURCE_STATE_RESERVED_INTERNAL_80000000|
         D3D12_RESOURCE_STATE_VERTEX_AND_CONSTANT_BUFFER)) goto LAB_145a33e54;
LAB_145a33e5c:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Before != D3D12_RESOURCE_STATES(-2 ^ (1 << 31)) && After != D3D12_RESOURCE_STATES(-2 ^ (1 << 31))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12LegacyBarriers.cpp"
                       ,0x5a2,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (((param_3 == ~D3D12_RESOURCE_STATE_RESERVED_INTERNAL_80000000) ||
      (param_4 == ~D3D12_RESOURCE_STATE_RESERVED_INTERNAL_80000000)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Before != D3D12_RESOURCE_STATES(-1 ^ (1 << 31)) && After != D3D12_RESOURCE_STATES(-1 ^ (1 << 31))"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12LegacyBarriers.cpp"
                         ,0x5a3,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_4 == D3D12_RESOURCE_STATE_COMMON) {
    if ((param_3 == D3D12_RESOURCE_STATE_COMMON) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Before != D3D12_RESOURCE_STATE_COMMON",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12LegacyBarriers.cpp"
                           ,0x5aa,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_3 == param_4) goto LAB_145a33f0d;
  FD3D12LegacyBarriersBatcher::AddTransition
            ((this->Batcher).Ptr,param_1,param_2,param_3,param_4,param_5);
LAB_145a33f0d:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

