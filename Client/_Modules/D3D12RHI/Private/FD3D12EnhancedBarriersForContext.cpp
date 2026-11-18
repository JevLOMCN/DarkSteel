// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 11

// FD3D12EnhancedBarriersForContext @ 1459ee090

FD3D12EnhancedBarriersForContext * __thiscall
FD3D12EnhancedBarriersForContext::FD3D12EnhancedBarriersForContext
          (FD3D12EnhancedBarriersForContext *this)

{
  FD3D12EnhancedBarriersBatcher *pFVar1;
  
  this->_padding_ = (longlong)&___7FD3D12EnhancedBarriersForContext__6B_;
  pFVar1 = ::operator_new(0x40);
  if (pFVar1 != (FD3D12EnhancedBarriersBatcher *)0x0) {
    (pFVar1->BarrierGroups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->BarrierGroups).ArrayNum = 0;
    (pFVar1->BarrierGroups).ArrayMax = 0;
    (pFVar1->TextureBarriers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->TextureBarriers).ArrayNum = 0;
    (pFVar1->TextureBarriers).ArrayMax = 0;
    (pFVar1->BufferBarriers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->BufferBarriers).ArrayNum = 0;
    (pFVar1->BufferBarriers).ArrayMax = 0;
    (pFVar1->GlobalBarriers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->GlobalBarriers).ArrayNum = 0;
    (pFVar1->GlobalBarriers).ArrayMax = 0;
    (this->Batcher).Ptr = pFVar1;
    return this;
  }
  (this->Batcher).Ptr = (FD3D12EnhancedBarriersBatcher *)0x0;
  return this;
}

// ~FD3D12EnhancedBarriersForContext @ 1459f77b0

void __thiscall
FD3D12EnhancedBarriersForContext::~FD3D12EnhancedBarriersForContext
          (FD3D12EnhancedBarriersForContext *this)

{
  FD3D12EnhancedBarriersBatcher *pFVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FD3D12EnhancedBarriersForContext__6B_;
  pFVar1 = (this->Batcher).Ptr;
  if (pFVar1 != (FD3D12EnhancedBarriersBatcher *)0x0) {
    pFVar2 = (pFVar1->GlobalBarriers).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->BufferBarriers).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->TextureBarriers).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->BarrierGroups).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x40);
    return;
  }
  return;
}

// AddBarrier @ 1459fdfc0

/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "D3D12_BARRIER_SYNC": Some values do not have unique names */
/* WARNING: Enum "D3D12_BARRIER_ACCESS": Some values do not have unique names */
/* WARNING: Enum "D3D12_BARRIER_LAYOUT": Some values do not have unique names */

void __thiscall
FD3D12EnhancedBarriersForContext::AddBarrier
          (FD3D12EnhancedBarriersForContext *this,FD3D12ContextCommon *param_1,
          FD3D12Resource *param_2,ED3D12Access param_3,ED3D12Access param_4,uint param_5)

{
  code *pcVar1;
  bool bVar2;
  ERHIPipeline EVar3;
  D3D12_BARRIER_SYNC DVar4;
  D3D12_BARRIER_SYNC DVar5;
  D3D12_BARRIER_ACCESS DVar6;
  D3D12_BARRIER_ACCESS DVar7;
  D3D12_BARRIER_LAYOUT DVar8;
  D3D12_BARRIER_LAYOUT DVar9;
  
  if (param_2 == (FD3D12Resource *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("pResource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                       ,0xaec,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EVar3 = FD3D12ContextCommon::GetRHIPipeline(param_1);
  DVar4 = GetEBSync(param_3,EVar3);
  DVar5 = GetEBSync(param_4,EVar3);
  DVar6 = GetEBAccess(param_3,EVar3);
  DVar7 = GetEBAccess(param_4,EVar3);
  if ((int)(param_2->Desc)._padding_ == 1) {
    FD3D12EnhancedBarriersBatcher::AddBufferBarrier
              ((this->Batcher).Ptr,param_1,param_2,DVar4,DVar5,DVar6,DVar7);
  }
  else {
    if ((param_2->bRequiresResourceStateTracking) || (param_2->InitialD3D12Access != Common)) {
      DVar8 = GetEBLayout(param_3,EVar3,(FD3D12Texture *)0x0);
      DVar9 = GetEBLayout(param_4,EVar3,(FD3D12Texture *)0x0);
    }
    else {
      DVar8 = D3D12_BARRIER_LAYOUT_COMMON;
      DVar9 = D3D12_BARRIER_LAYOUT_COMMON;
    }
    FD3D12EnhancedBarriersBatcher::AddTextureBarrier
              ((this->Batcher).Ptr,param_1,param_2,DVar4,DVar5,DVar6,DVar7,DVar8,DVar9,param_5,false
              );
  }
  return;
}

// AddBarriersForTransitionData @ 1459fe200

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
/* WARNING: Enum "D3D12_BARRIER_SYNC": Some values do not have unique names */
/* WARNING: Enum "D3D12_BARRIER_ACCESS": Some values do not have unique names */
/* WARNING: Enum "D3D12_BARRIER_LAYOUT": Some values do not have unique names */

bool __thiscall
FD3D12EnhancedBarriersForContext::AddBarriersForTransitionData
          (FD3D12EnhancedBarriersForContext *this,FD3D12CommandContext *param_1,
          FD3D12EnhancedBarriersTransitionData *param_2,VARangeCollection *param_3,
          EProcessEarlyTransitions param_4,EBarrierPhase param_5)

{
  short sVar1;
  code *pcVar2;
  ERHIAccess EVar3;
  ERHIAccess EVar4;
  ERHIPipeline EVar5;
  FD3D12Texture *pFVar6;
  D3D12_BARRIER_LAYOUT DVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  ERHIPipeline EVar11;
  ushort uVar12;
  D3D12_BARRIER_SYNC DVar13;
  D3D12_BARRIER_SYNC DVar14;
  D3D12_BARRIER_ACCESS DVar15;
  D3D12_BARRIER_ACCESS DVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  FD3D12BarrierValues *pFVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  ulonglong uVar22;
  FRHITransitionInfo *pFVar23;
  D3D12_BARRIER_ACCESS DVar24;
  FRHITransitionInfo *pFVar25;
  D3D12_BARRIER_SYNC DVar26;
  bool local_c7;
  undefined1 local_c6 [2];
  D3D12_BARRIER_LAYOUT local_c4;
  D3D12_BARRIER_LAYOUT local_c0;
  FResourceState local_b8;
  D3D12_BARRIER_SYNC local_a8;
  FRHITransitionInfo *local_a0;
  FD3D12Resource *local_98;
  longlong local_90;
  FD3D12Texture *local_88;
  uint local_7c;
  FRHITransitionInfo *local_78;
  undefined8 local_70;
  FD3D12BarrierValues local_60 [2];
  
  pFVar25 = (param_2->TransitionInfos).AllocatorInstance.SecondaryData.Data;
  local_c7 = false;
  local_7c = (param_2->TransitionInfos).ArrayNum;
  uVar22 = (ulonglong)(int)local_7c;
  if (pFVar25 == (FRHITransitionInfo *)0x0) {
    pFVar25 = (FRHITransitionInfo *)&param_2->TransitionInfos;
  }
  pFVar23 = pFVar25 + uVar22;
  local_78 = pFVar23;
  do {
    local_a0 = pFVar25;
    if ((param_2->TransitionInfos).ArrayNum != (int)uVar22) {
      local_c6[0] = 0;
      `TCheckedPointerIterator<FRHITransitionInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_c6);
    }
    if (pFVar25 == pFVar23) {
      return local_c7;
    }
    if ((pFVar25->field1_0x8).Resource != (FRHIResource *)0x0) {
      GetResourceBufferAndTexture
                ((TTuple<FD3D12Resource_const_*,FD3D12Buffer_const_*,FD3D12Texture_const_*> *)
                 &local_98,param_1,pFVar25);
      if (local_98 == (FD3D12Resource *)0x0) {
        if ((pFVar25->Type != BVH) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Resource || Info.Type == FRHITransitionInfo::EType::BVH",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                               ,0xb99,L""), bVar8)) {
          pcVar2 = (code *)swi(3);
          uVar10 = (*pcVar2)();
          return (bool)uVar10;
        }
      }
      else if (local_98->bRequiresResourceStateTracking) {
        UE::RHICore::FResourceState::FResourceState
                  (&local_b8,(IRHIComputeContext *)&param_1->field_0x1c0,param_2->SrcPipelines,
                   param_2->DstPipelines,pFVar25);
        pFVar6 = local_88;
        bVar8 = ProcessTransitionInfoDuringBegin(&local_b8,local_88);
        lVar17 = local_90;
        EVar4 = local_b8.AccessAfter;
        if ((param_5 != Begin) || (bVar8)) {
          if ((local_b8.AccessBefore == Discard) || (local_b8.AccessAfter != Discard)) {
            bVar9 = false;
          }
          else {
            if (local_90 == 0) {
              if (pFVar6 == (FD3D12Texture *)0x0) {
                bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InBuffer || InTexture",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                                   ,0xb3f,L"");
                if (bVar9) {
                  pcVar2 = (code *)swi(3);
                  uVar10 = (*pcVar2)();
                  return (bool)uVar10;
                }
                goto LAB_1459fe35d;
              }
LAB_1459fe3da:
              uVar22 = pFVar6->_padding_;
              if (pFVar6 == (FD3D12Texture *)0x0) goto LAB_1459fe364;
              lVar17 = pFVar6->_padding_;
            }
            else {
              if (pFVar6 != (FD3D12Texture *)0x0) goto LAB_1459fe3da;
LAB_1459fe35d:
              uVar22 = *(ulonglong *)(lVar17 + 0x188);
LAB_1459fe364:
              lVar17 = *(longlong *)(lVar17 + 0x198);
            }
            if ((lVar17 + uVar22 < uVar22) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InVARange.IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                                   ,0x9ce,L""), bVar9)) {
              pcVar2 = (code *)swi(3);
              uVar10 = (*pcVar2)();
              return (bool)uVar10;
            }
            pFVar18 = (param_3->VARanges).AllocatorInstance.Data;
            pFVar21 = pFVar18 + (longlong)(param_3->VARanges).ArrayNum * 0x10;
            for (; pFVar18 != pFVar21; pFVar18 = pFVar18 + 0x10) {
              if ((uVar22 <= *(ulonglong *)(pFVar18 + 8)) &&
                 (*(ulonglong *)pFVar18 <= lVar17 + uVar22)) goto LAB_1459fe3ca;
            }
            pFVar18 = (FScriptContainerElement *)0x0;
LAB_1459fe3ca:
            bVar9 = pFVar18 != (FScriptContainerElement *)0x0;
          }
          EVar11 = local_b8.SrcPipelines;
          EVar3 = local_b8.AccessBefore;
          pFVar23 = local_78;
          if (bVar9 == (bool)param_4) {
            DVar13 = GetEBSync(local_b8.AccessBefore,local_b8.SrcPipelines);
            EVar5 = local_b8.DstPipelines;
            DVar14 = GetEBSync(EVar4,local_b8.DstPipelines);
            DVar15 = GetEBAccess(EVar3,EVar11);
            DVar16 = GetEBAccess(local_b8.AccessAfter,EVar5);
            if (pFVar6 == (FD3D12Texture *)0x0) {
              local_c0 = D3D12_BARRIER_LAYOUT_UNDEFINED;
              local_c4 = D3D12_BARRIER_LAYOUT_UNDEFINED;
            }
            else {
              local_c0 = GetEBLayout(local_b8.AccessBefore,EVar11,pFVar6);
              local_c4 = GetEBLayout(local_b8.AccessAfter,EVar5,pFVar6);
            }
            if ((!bVar8) ||
               ((bVar9 = AccessIsCompatibleWithQueue(DVar16,EVar11), bVar9 &&
                (bVar9 = LayoutIsCompatibleWithQueue(local_c4,EVar11), bVar9)))) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            if ((param_5 == Begin) || (!bVar8)) {
              DVar26 = DVar13;
              DVar24 = DVar15;
              DVar7 = local_c0;
              if (bVar9) goto LAB_1459fe4d8;
            }
            else {
              pFVar23 = local_78;
              pFVar25 = local_a0;
              if (!bVar9) goto LAB_1459fe4c4;
LAB_1459fe4d8:
              pFVar19 = ChooseIntermediateBarrierValues
                                  (local_60,DVar13,DVar14,DVar15,DVar16,local_c0,local_c4,EVar11,
                                   EVar5);
              local_70._0_4_ = pFVar19->Sync;
              local_70._4_4_ = pFVar19->Access;
              DVar26 = (undefined4)local_70;
              DVar24 = local_70._4_4_;
              DVar7 = pFVar19->Layout;
              if (param_5 == Begin) {
                DVar26 = DVar13;
                DVar14 = (undefined4)local_70;
                DVar24 = DVar15;
                DVar16 = local_70._4_4_;
                local_c4 = pFVar19->Layout;
                DVar7 = local_c0;
              }
            }
            local_c0 = DVar7;
            EVar11 = (**(code **)(*(longlong *)&param_1->field_0x1c0 + 8))();
            local_a8 = FilterToQueueCompatibleSync(DVar26,EVar11);
            DVar14 = FilterToQueueCompatibleSync(DVar14,EVar11);
            if (EVar11 == Graphics) {
              DVar24 = DVar24 & (D3D12_BARRIER_ACCESS_NO_ACCESS|
                                 D3D12_BARRIER_ACCESS_SHADING_RATE_SOURCE|
                                 D3D12_BARRIER_ACCESS_RAYTRACING_ACCELERATION_STRUCTURE_WRITE|
                                 D3D12_BARRIER_ACCESS_RAYTRACING_ACCELERATION_STRUCTURE_READ|
                                 D3D12_BARRIER_ACCESS_RESOLVE_SOURCE|
                                 D3D12_BARRIER_ACCESS_RESOLVE_DEST|D3D12_BARRIER_ACCESS_COPY_SOURCE|
                                 D3D12_BARRIER_ACCESS_COPY_DEST|
                                 D3D12_BARRIER_ACCESS_INDIRECT_ARGUMENT|
                                 D3D12_BARRIER_ACCESS_STREAM_OUTPUT|
                                 D3D12_BARRIER_ACCESS_SHADER_RESOURCE|
                                 D3D12_BARRIER_ACCESS_DEPTH_STENCIL_READ|
                                 D3D12_BARRIER_ACCESS_DEPTH_STENCIL_WRITE|
                                 D3D12_BARRIER_ACCESS_UNORDERED_ACCESS|
                                 D3D12_BARRIER_ACCESS_RENDER_TARGET|
                                 D3D12_BARRIER_ACCESS_INDEX_BUFFER|
                                 D3D12_BARRIER_ACCESS_CONSTANT_BUFFER|
                                D3D12_BARRIER_ACCESS_VERTEX_BUFFER);
LAB_1459fe605:
              DVar16 = DVar16 & (D3D12_BARRIER_ACCESS_NO_ACCESS|
                                 D3D12_BARRIER_ACCESS_SHADING_RATE_SOURCE|
                                 D3D12_BARRIER_ACCESS_RAYTRACING_ACCELERATION_STRUCTURE_WRITE|
                                 D3D12_BARRIER_ACCESS_RAYTRACING_ACCELERATION_STRUCTURE_READ|
                                 D3D12_BARRIER_ACCESS_RESOLVE_SOURCE|
                                 D3D12_BARRIER_ACCESS_RESOLVE_DEST|D3D12_BARRIER_ACCESS_COPY_SOURCE|
                                 D3D12_BARRIER_ACCESS_COPY_DEST|
                                 D3D12_BARRIER_ACCESS_INDIRECT_ARGUMENT|
                                 D3D12_BARRIER_ACCESS_STREAM_OUTPUT|
                                 D3D12_BARRIER_ACCESS_SHADER_RESOURCE|
                                 D3D12_BARRIER_ACCESS_DEPTH_STENCIL_READ|
                                 D3D12_BARRIER_ACCESS_DEPTH_STENCIL_WRITE|
                                 D3D12_BARRIER_ACCESS_UNORDERED_ACCESS|
                                 D3D12_BARRIER_ACCESS_RENDER_TARGET|
                                 D3D12_BARRIER_ACCESS_INDEX_BUFFER|
                                 D3D12_BARRIER_ACCESS_CONSTANT_BUFFER|
                                D3D12_BARRIER_ACCESS_VERTEX_BUFFER);
            }
            else if ((EVar11 == AsyncCompute) || (EVar11 == All)) {
              DVar24 = DVar24 & (D3D12_BARRIER_ACCESS_NO_ACCESS|
                                 D3D12_BARRIER_ACCESS_SHADING_RATE_SOURCE|
                                 D3D12_BARRIER_ACCESS_RAYTRACING_ACCELERATION_STRUCTURE_WRITE|
                                 D3D12_BARRIER_ACCESS_RAYTRACING_ACCELERATION_STRUCTURE_READ|
                                 D3D12_BARRIER_ACCESS_RESOLVE_SOURCE|
                                 D3D12_BARRIER_ACCESS_COPY_SOURCE|D3D12_BARRIER_ACCESS_COPY_DEST|
                                 D3D12_BARRIER_ACCESS_INDIRECT_ARGUMENT|
                                 D3D12_BARRIER_ACCESS_SHADER_RESOURCE|
                                 D3D12_BARRIER_ACCESS_DEPTH_STENCIL_READ|
                                 D3D12_BARRIER_ACCESS_UNORDERED_ACCESS|
                                D3D12_BARRIER_ACCESS_CONSTANT_BUFFER);
LAB_1459fe5f7:
              DVar16 = DVar16 & (D3D12_BARRIER_ACCESS_NO_ACCESS|
                                 D3D12_BARRIER_ACCESS_SHADING_RATE_SOURCE|
                                 D3D12_BARRIER_ACCESS_RAYTRACING_ACCELERATION_STRUCTURE_WRITE|
                                 D3D12_BARRIER_ACCESS_RAYTRACING_ACCELERATION_STRUCTURE_READ|
                                 D3D12_BARRIER_ACCESS_RESOLVE_SOURCE|
                                 D3D12_BARRIER_ACCESS_COPY_SOURCE|D3D12_BARRIER_ACCESS_COPY_DEST|
                                 D3D12_BARRIER_ACCESS_INDIRECT_ARGUMENT|
                                 D3D12_BARRIER_ACCESS_SHADER_RESOURCE|
                                 D3D12_BARRIER_ACCESS_DEPTH_STENCIL_READ|
                                 D3D12_BARRIER_ACCESS_UNORDERED_ACCESS|
                                D3D12_BARRIER_ACCESS_CONSTANT_BUFFER);
            }
            else {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("!\"Enclosing block should never be called\"",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                                 ,0x39f,L"");
              if (bVar8) {
                pcVar2 = (code *)swi(3);
                uVar10 = (*pcVar2)();
                return (bool)uVar10;
              }
              DVar24 = D3D12_BARRIER_ACCESS_COMMON;
              if (EVar11 == Graphics) goto LAB_1459fe605;
              if ((EVar11 == AsyncCompute) || (EVar11 == All)) goto LAB_1459fe5f7;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("!\"Enclosing block should never be called\"",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                                 ,0x39f,L"");
              DVar16 = DVar24;
              if (bVar8) {
                pcVar2 = (code *)swi(3);
                uVar10 = (*pcVar2)();
                return (bool)uVar10;
              }
            }
            DVar13 = local_a8;
            if (((local_b8.AccessBefore != Present) && (local_a8 == D3D12_BARRIER_SYNC_NONE)) &&
               (DVar24 != D3D12_BARRIER_ACCESS_NO_ACCESS)) {
              DVar13 = GetAccessCompatibleSync(DVar24);
              DVar13 = FilterToQueueCompatibleSync(DVar13,EVar11);
            }
            if (((local_b8.AccessAfter != Present) && (DVar14 == D3D12_BARRIER_SYNC_NONE)) &&
               (DVar16 != D3D12_BARRIER_ACCESS_NO_ACCESS)) {
              DVar14 = GetAccessCompatibleSync(DVar16);
              DVar14 = FilterToQueueCompatibleSync(DVar14,EVar11);
              if (((DVar14 == D3D12_BARRIER_SYNC_NONE) && (DVar16 != D3D12_BARRIER_ACCESS_NO_ACCESS)
                  ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("!(ResourceState.AccessAfter != ERHIAccess::Present && SyncAfter == D3D12_BARRIER_SYNC_NONE && AccessAfter != D3D12_BARRIER_ACCESS_NO_ACCESS)"
                                           ,
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                                           ,0xc34,L""), bVar8)) {
                pcVar2 = (code *)swi(3);
                uVar10 = (*pcVar2)();
                return (bool)uVar10;
              }
            }
            pFVar25 = local_a0;
            if (pFVar6 == (FD3D12Texture *)0x0) {
              FD3D12EnhancedBarriersBatcher::AddBufferBarrier
                        ((this->Batcher).Ptr,(FD3D12ContextCommon *)param_1,local_98,DVar13,DVar14,
                         DVar24,DVar16);
              local_c7 = true;
              pFVar23 = local_78;
              pFVar25 = local_a0;
            }
            else {
              sVar1 = (short)local_a0->_padding_;
              if ((((sVar1 == -1) && (*(short *)((longlong)&local_a0->_padding_ + 2) == -1)) &&
                  (*(short *)((longlong)&local_a0->_padding_ + 4) == -1)) ||
                 (local_98->SubresourceCount == 1)) {
                uVar20 = 0xffffffff;
              }
              else {
                if ((sVar1 == -1) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Info.MipIndex != FRHISubresourceRange::kAllSubresources",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                                       ,0xc3f,L""), bVar8)) {
                  pcVar2 = (code *)swi(3);
                  uVar10 = (*pcVar2)();
                  return (bool)uVar10;
                }
                if ((*(short *)((longlong)&pFVar25->_padding_ + 2) == -1) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Info.ArraySlice != FRHISubresourceRange::kAllSubresources",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                                       ,0xc40,L""), bVar8)) {
                  pcVar2 = (code *)swi(3);
                  uVar10 = (*pcVar2)();
                  return (bool)uVar10;
                }
                if ((*(short *)((longlong)&pFVar25->_padding_ + 4) == -1) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Info.PlaneSlice != FRHISubresourceRange::kAllSubresources",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                                       ,0xc41,L""), bVar8)) {
                  pcVar2 = (code *)swi(3);
                  uVar10 = (*pcVar2)();
                  return (bool)uVar10;
                }
                if ((int)(local_98->Desc)._padding_ == 4) {
                  uVar12 = 1;
                }
                else {
                  uVar12 = *(ushort *)((longlong)&(local_98->Desc)._padding_ + 4);
                }
                uVar20 = ((uint)uVar12 * (uint)*(ushort *)((longlong)&pFVar25->_padding_ + 4) +
                         (uint)*(ushort *)((longlong)&pFVar25->_padding_ + 2)) *
                         (uint)*(ushort *)((longlong)&(local_98->Desc)._padding_ + 6) +
                         (uint)(ushort)pFVar25->_padding_;
              }
              if ((((local_c0 != D3D12_BARRIER_LAYOUT_UNDEFINED) ||
                   (local_c4 == D3D12_BARRIER_LAYOUT_UNDEFINED)) ||
                  ((GD3D12DisableDiscardOfDepthResources != 0 && (local_98->bDepthStencil)))) ||
                 (GD3D12AllowDiscardResources == 0)) {
                bVar8 = false;
              }
              else {
                bVar8 = true;
              }
              FD3D12EnhancedBarriersBatcher::AddTextureBarrier
                        ((this->Batcher).Ptr,(FD3D12ContextCommon *)param_1,local_98,DVar13,DVar14,
                         DVar24,DVar16,local_c0,local_c4,uVar20,bVar8);
              local_c7 = true;
              pFVar23 = local_78;
            }
          }
        }
      }
    }
LAB_1459fe4c4:
    uVar22 = (ulonglong)local_7c;
    pFVar25 = pFVar25 + 1;
  } while( true );
}

// AddBarriersForTransitions @ 1459fe8c0

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
FD3D12EnhancedBarriersForContext::AddBarriersForTransitions
          (FD3D12EnhancedBarriersForContext *this,FD3D12CommandContext *param_1,
          TArrayView<FRHITransition_const_*,int> *param_2,EBarrierPhase param_3)

{
  FRHITransition **ppFVar1;
  bool bVar2;
  ulong64 uVar3;
  FRHITransition **ppFVar4;
  FRHITransition **ppFVar5;
  FD3D12EnhancedBarriersTransitionData *pFVar6;
  byte bVar7;
  VARangeCollection local_38;
  TArrayView<FRHITransition_const_*,int> local_28;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  BuildVARangeTable(&local_38,param_1,&local_28);
  ppFVar5 = param_2->DataPtr;
  bVar7 = 0;
  ppFVar1 = ppFVar5 + param_2->ArrayNum;
  uVar3 = GRHITransitionPrivateData_AlignInBytes;
  ppFVar4 = ppFVar5;
  if (ppFVar5 != ppFVar1) {
    do {
      pFVar6 = (FD3D12EnhancedBarriersTransitionData *)
               ((ulonglong)(&(*ppFVar4)->field_0x8f + uVar3) & ~(uVar3 - 1));
      if ((param_3 != Begin) ||
         ((pFVar6->DstPipelines & pFVar6->SrcPipelines) != pFVar6->DstPipelines)) {
        bVar2 = AddBarriersForTransitionData(this,param_1,pFVar6,&local_38,Yes,param_3);
        bVar7 = bVar7 | bVar2;
        uVar3 = GRHITransitionPrivateData_AlignInBytes;
      }
      ppFVar4 = ppFVar4 + 1;
    } while (ppFVar4 != ppFVar1);
    if (bVar7 == 0) {
      if (ppFVar5 == ppFVar1) goto LAB_1459fea05;
    }
    else {
      if (*(longlong *)&param_1->field_0x188 == 0) {
        (**(code **)(*(longlong *)param_1 + 8))(param_1);
      }
      FD3D12EnhancedBarriersBatcher::FlushIntoCommandList
                ((this->Batcher).Ptr,*(FD3D12CommandList **)&param_1->field_0x188,
                 (FD3D12QueryAllocator *)&param_1->field_0x38);
      uVar3 = GRHITransitionPrivateData_AlignInBytes;
    }
    do {
      pFVar6 = (FD3D12EnhancedBarriersTransitionData *)
               ((ulonglong)(&(*ppFVar5)->field_0x8f + uVar3) & ~(uVar3 - 1));
      if ((param_3 != Begin) ||
         ((pFVar6->SrcPipelines & pFVar6->DstPipelines) != pFVar6->DstPipelines)) {
        AddBarriersForTransitionData(this,param_1,pFVar6,&local_38,No,param_3);
        uVar3 = GRHITransitionPrivateData_AlignInBytes;
      }
      ppFVar5 = ppFVar5 + 1;
    } while (ppFVar5 != ppFVar1);
  }
LAB_1459fea05:
  if (local_38.VARanges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.VARanges.AllocatorInstance.Data);
  }
  return;
}

// AddGlobalBarrier @ 1459fed40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "D3D12_BARRIER_ACCESS": Some values do not have unique names */
/* WARNING: Enum "D3D12_BARRIER_SYNC": Some values do not have unique names */

void __thiscall
FD3D12EnhancedBarriersForContext::AddGlobalBarrier
          (FD3D12EnhancedBarriersForContext *this,FD3D12ContextCommon *param_1,ED3D12Access param_2,
          ED3D12Access param_3)

{
  FD3D12EnhancedBarriersBatcher *this_00;
  ERHIPipeline EVar1;
  D3D12_BARRIER_ACCESS DVar2;
  D3D12_BARRIER_ACCESS DVar3;
  D3D12_BARRIER_SYNC DVar4;
  undefined1 auStack_88 [32];
  TArrayView<D3D12_GLOBAL_BARRIER_const_,int> local_68;
  D3D12_GLOBAL_BARRIER local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_88;
  EVar1 = FD3D12ContextCommon::GetRHIPipeline(param_1);
  this_00 = (this->Batcher).Ptr;
  DVar2 = GetEBAccess(param_3,EVar1);
  DVar3 = GetEBAccess(param_2,EVar1);
  DVar4 = GetEBSync(param_3,EVar1);
  local_58.SyncBefore = GetEBSync(param_2,EVar1);
  if (((local_58.SyncBefore != DVar4) || (DVar3 != DVar2)) ||
     (((local_58.SyncBefore &
       (D3D12_BARRIER_SYNC_COPY_RAYTRACING_ACCELERATION_STRUCTURE|
        D3D12_BARRIER_SYNC_BUILD_RAYTRACING_ACCELERATION_STRUCTURE|
        D3D12_BARRIER_SYNC_CLEAR_UNORDERED_ACCESS_VIEW|
        D3D12_BARRIER_SYNC_EMIT_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO|
        D3D12_BARRIER_SYNC_ALL_SHADING|D3D12_BARRIER_SYNC_RAYTRACING|
        D3D12_BARRIER_SYNC_COMPUTE_SHADING|D3D12_BARRIER_SYNC_PIXEL_SHADING|
        D3D12_BARRIER_SYNC_VERTEX_SHADING|D3D12_BARRIER_SYNC_DRAW|D3D12_BARRIER_SYNC_ALL)) !=
       D3D12_BARRIER_SYNC_NONE &&
      ((DVar3 == D3D12_BARRIER_ACCESS_COMMON ||
       ((DVar3 & (D3D12_BARRIER_ACCESS_RAYTRACING_ACCELERATION_STRUCTURE_WRITE|
                 D3D12_BARRIER_ACCESS_UNORDERED_ACCESS)) != D3D12_BARRIER_ACCESS_COMMON)))))) {
    local_68.DataPtr = &local_58;
    local_68.ArrayNum = 1;
    local_58.SyncAfter = DVar4;
    local_58.AccessBefore = DVar3;
    local_58.AccessAfter = DVar2;
    FD3D12EnhancedBarriersBatcher::AddBarriers<D3D12_GLOBAL_BARRIER_const_>
              (this_00,param_1,&local_68,false);
  }
  return;
}

// BeginTransitions @ 145a04200

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
FD3D12EnhancedBarriersForContext::BeginTransitions
          (FD3D12EnhancedBarriersForContext *this,FD3D12CommandContext *param_1,
          TArrayView<FRHITransition_const_*,int> *param_2)

{
  FRHITransition **ppFVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  ulong64 uVar7;
  ulonglong uVar8;
  FRHITransition **ppFVar9;
  uint uVar10;
  FRHITransition **ppFVar11;
  FD3D12EnhancedBarriersTransitionData *pFVar12;
  longlong lVar13;
  byte bVar14;
  VARangeCollection local_58;
  TArrayView<FRHITransition_const_*,int> local_48;
  FRHITransition **local_38;
  undefined8 uStack_30;
  
  local_48.DataPtr = param_2->DataPtr;
  local_48.ArrayNum = param_2->ArrayNum;
  local_48._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_38 = local_48.DataPtr;
  uStack_30 = local_48._8_8_;
  BuildVARangeTable(&local_58,param_1,&local_48);
  ppFVar9 = param_2->DataPtr;
  bVar14 = 0;
  ppFVar1 = ppFVar9 + (int)*(undefined8 *)&param_2->ArrayNum;
  uVar7 = GRHITransitionPrivateData_AlignInBytes;
  ppFVar11 = ppFVar9;
  if (ppFVar9 != ppFVar1) {
    do {
      pFVar12 = (FD3D12EnhancedBarriersTransitionData *)
                ((ulonglong)(&(*ppFVar11)->field_0x8f + uVar7) & ~(uVar7 - 1));
      if ((pFVar12->SrcPipelines & pFVar12->DstPipelines) != pFVar12->DstPipelines) {
        bVar3 = AddBarriersForTransitionData(this,param_1,pFVar12,&local_58,Yes,Begin);
        bVar14 = bVar14 | bVar3;
        uVar7 = GRHITransitionPrivateData_AlignInBytes;
      }
      ppFVar11 = ppFVar11 + 1;
    } while (ppFVar11 != ppFVar1);
    if (bVar14 != 0) {
      if (*(longlong *)&param_1->field_0x188 == 0) {
        (**(code **)(*(longlong *)param_1 + 8))(param_1);
      }
      FD3D12EnhancedBarriersBatcher::FlushIntoCommandList
                ((this->Batcher).Ptr,*(FD3D12CommandList **)&param_1->field_0x188,
                 (FD3D12QueryAllocator *)&param_1->field_0x38);
      uVar7 = GRHITransitionPrivateData_AlignInBytes;
    }
    for (; ppFVar9 != ppFVar1; ppFVar9 = ppFVar9 + 1) {
      pFVar12 = (FD3D12EnhancedBarriersTransitionData *)
                ((ulonglong)(&(*ppFVar9)->field_0x8f + uVar7) & ~(uVar7 - 1));
      if ((pFVar12->DstPipelines & pFVar12->SrcPipelines) != pFVar12->DstPipelines) {
        AddBarriersForTransitionData(this,param_1,pFVar12,&local_58,No,Begin);
        uVar7 = GRHITransitionPrivateData_AlignInBytes;
      }
    }
  }
  if (local_58.VARanges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.VARanges.AllocatorInstance.Data);
  }
  cVar4 = (**(code **)(*(longlong *)&param_1->field_0x1c0 + 8))();
  ppFVar9 = param_2->DataPtr;
  ppFVar1 = ppFVar9 + param_2->ArrayNum;
  do {
    if (ppFVar9 == ppFVar1) {
      return;
    }
    uVar8 = (ulonglong)(&(*ppFVar9)->field_0x8f + GRHITransitionPrivateData_AlignInBytes) &
            ~(GRHITransitionPrivateData_AlignInBytes - 1);
    if (*(int *)(uVar8 + 0x160) != 0) {
      uVar5 = 0;
      bVar3 = *(int *)&param_1->field_0x2f8 != 0;
      if (bVar3) {
        for (; (*(uint *)&param_1->field_0x2f8 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
      uVar10 = 0x20;
      if (bVar3) {
        uVar10 = uVar5;
      }
      uVar5 = 0;
      if ((int)uVar10 < *(int *)(uVar8 + 0x160)) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar13 = uVar8 + 0xd8;
      if (*(longlong *)(uVar8 + 0x158) != 0) {
        lVar13 = *(longlong *)(uVar8 + 0x158);
      }
      lVar13 = (longlong)(int)uVar10 * 0x10 + lVar13;
      if ((cVar4 == '\x01') || (cVar4 != '\x02')) {
        lVar6 = 0;
      }
      else {
        lVar6 = 8;
      }
      if (*(longlong *)(lVar6 + lVar13) != 0) {
        if ((cVar4 == '\x01') || (cVar4 != '\x02')) {
          lVar6 = 0;
        }
        else {
          lVar6 = 8;
        }
        FD3D12ContextCommon::SignalSyncPoint
                  ((FD3D12ContextCommon *)param_1,*(FD3D12SyncPoint **)(lVar6 + lVar13));
      }
    }
    ppFVar9 = ppFVar9 + 1;
  } while( true );
}

// EndTransitions @ 145a147a0

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
FD3D12EnhancedBarriersForContext::EndTransitions
          (FD3D12EnhancedBarriersForContext *this,FD3D12CommandContext *param_1,
          TArrayView<FRHITransition_const_*,int> *param_2)

{
  FRHITransition **ppFVar1;
  int iVar2;
  code *pcVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  byte bVar10;
  byte *pbVar11;
  ulong64 *puVar12;
  byte *pbVar13;
  uint uVar14;
  FRHITransition **ppFVar15;
  FRHITransition **ppFVar16;
  bool bVar17;
  undefined1 local_res10 [8];
  TArrayView<FRHITransition_const_*,int> *local_res18;
  uint local_res20;
  VARangeCollection local_70;
  TArrayView<FRHITransition_const_*,int> local_58;
  
  local_res18 = param_2;
  bVar4 = (**(code **)(*(longlong *)&param_1->field_0x1c0 + 8))();
  ppFVar16 = param_2->DataPtr;
  ppFVar1 = ppFVar16 + param_2->ArrayNum;
  for (; ppFVar16 != ppFVar1; ppFVar16 = ppFVar16 + 1) {
    pbVar11 = (byte *)((ulonglong)
                       (&(*ppFVar16)->field_0x8f + GRHITransitionPrivateData_AlignInBytes) &
                      ~(GRHITransitionPrivateData_AlignInBytes - 1));
    if (*(int *)(pbVar11 + 0x160) != 0) {
      local_res20 = 0;
      bVar17 = *(int *)&param_1->field_0x2f8 != 0;
      if (bVar17) {
        for (; (*(uint *)&param_1->field_0x2f8 >> local_res20 & 1) == 0;
            local_res20 = local_res20 + 1) {
        }
      }
      uVar14 = 0x20;
      if (bVar17) {
        uVar14 = local_res20;
      }
      uVar6 = 0;
      if ((int)uVar14 < *(int *)(pbVar11 + 0x160)) {
        uVar6 = ~uVar14 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar10 = *pbVar11;
      pbVar13 = pbVar11 + 0xd8;
      if (*(byte **)(pbVar11 + 0x158) != (byte *)0x0) {
        pbVar13 = *(byte **)(pbVar11 + 0x158);
      }
      for (; bVar10 != 0; bVar10 = bVar10 & ~(~bVar10 + 1)) {
        bVar5 = ~bVar10 + 1 & bVar10;
        if (bVar5 != bVar4) {
          if ((bVar5 == 1) || (bVar5 != 2)) {
            lVar8 = 0;
          }
          else {
            lVar8 = 8;
          }
          if (*(longlong *)(pbVar13 + lVar8 + (longlong)(int)uVar14 * 0x10) != 0) {
            if ((bVar5 == 1) || (bVar5 != 2)) {
              lVar8 = 0;
            }
            else {
              lVar8 = 8;
            }
            FD3D12ContextCommon::WaitSyncPoint
                      ((FD3D12ContextCommon *)param_1,
                       *(FD3D12SyncPoint **)(pbVar13 + lVar8 + (longlong)(int)uVar14 * 0x10));
          }
        }
      }
    }
    param_2 = local_res18;
  }
  ppFVar16 = param_2->DataPtr;
  ppFVar1 = ppFVar16 + param_2->ArrayNum;
  do {
    if (ppFVar16 == ppFVar1) {
      local_58.DataPtr = param_2->DataPtr;
      local_58.ArrayNum = param_2->ArrayNum;
      local_58._12_4_ = *(undefined4 *)&param_2->field_0xc;
      BuildVARangeTable(&local_70,param_1,&local_58);
      ppFVar16 = param_2->DataPtr;
      bVar4 = 0;
      ppFVar1 = ppFVar16 + (int)*(undefined8 *)&param_2->ArrayNum;
      ppFVar15 = ppFVar16;
      if (ppFVar16 != ppFVar1) {
        do {
          bVar17 = AddBarriersForTransitionData
                             (this,param_1,
                              (FD3D12EnhancedBarriersTransitionData *)
                              ((ulonglong)
                               (&(*ppFVar15)->field_0x8f + GRHITransitionPrivateData_AlignInBytes) &
                              ~(GRHITransitionPrivateData_AlignInBytes - 1)),&local_70,Yes,End);
          bVar4 = bVar4 | bVar17;
          ppFVar15 = ppFVar15 + 1;
        } while (ppFVar15 != ppFVar1);
        if (bVar4 != 0) {
          if (*(longlong *)&param_1->field_0x188 == 0) {
            (**(code **)(*(longlong *)param_1 + 8))(param_1);
          }
          FD3D12EnhancedBarriersBatcher::FlushIntoCommandList
                    ((this->Batcher).Ptr,*(FD3D12CommandList **)&param_1->field_0x188,
                     (FD3D12QueryAllocator *)&param_1->field_0x38);
        }
        for (; ppFVar16 != ppFVar1; ppFVar16 = ppFVar16 + 1) {
          AddBarriersForTransitionData
                    (this,param_1,
                     (FD3D12EnhancedBarriersTransitionData *)
                     ((ulonglong)(&(*ppFVar16)->field_0x8f + GRHITransitionPrivateData_AlignInBytes)
                     & ~(GRHITransitionPrivateData_AlignInBytes - 1)),&local_70,No,End);
        }
      }
      if (local_70.VARanges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.VARanges.AllocatorInstance.Data);
      }
      return;
    }
    uVar9 = (ulonglong)(&(*ppFVar16)->field_0x8f + GRHITransitionPrivateData_AlignInBytes) &
            ~(GRHITransitionPrivateData_AlignInBytes - 1);
    lVar8 = uVar9 + 8;
    iVar2 = *(int *)(uVar9 + 0xd0);
    if (*(longlong *)(uVar9 + 200) != 0) {
      lVar8 = *(longlong *)(uVar9 + 200);
    }
    puVar12 = (ulong64 *)(lVar8 + 0x20);
    while( true ) {
      if (*(int *)(uVar9 + 0xd0) != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FRHITransitionInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (puVar12 + -4 == (ulong64 *)((longlong)iVar2 * 0x30 + lVar8)) break;
      if ((char)puVar12[1] == '\0') {
LAB_145a14a16:
        puVar12 = puVar12 + 6;
      }
      else {
        if ((char)puVar12[-2] != '\x02') {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("!\"Enclosing block should never be called\"",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                              ,0xc81,L"");
          if (bVar17) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          goto LAB_145a14a16;
        }
        uVar14 = 0;
        bVar17 = *(int *)&param_1->field_0x2f8 != 0;
        if (bVar17) {
          for (; (*(uint *)&param_1->field_0x2f8 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
          }
        }
        if (puVar12[-3] == 0) {
          FD3D12ContextCommon::SetReservedBufferCommitSize
                    ((FD3D12ContextCommon *)param_1,(FD3D12Buffer *)0x0,*puVar12);
          puVar12 = puVar12 + 6;
        }
        else {
          uVar7 = 0x20;
          if (bVar17) {
            uVar7 = (ulonglong)uVar14;
          }
          FD3D12ContextCommon::SetReservedBufferCommitSize
                    ((FD3D12ContextCommon *)param_1,
                     *(FD3D12Buffer **)(puVar12[-3] + 0x1b0 + uVar7 * 8),*puVar12);
          puVar12 = puVar12 + 6;
        }
      }
    }
    ppFVar16 = ppFVar16 + 1;
    param_2 = local_res18;
  } while( true );
}

// FlushIntoCommandList @ 145a16a10

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12EnhancedBarriersForContext::FlushIntoCommandList
          (FD3D12EnhancedBarriersForContext *this,FD3D12CommandList *param_1,
          FD3D12QueryAllocator *param_2)

{
  FD3D12EnhancedBarriersBatcher::FlushIntoCommandList((this->Batcher).Ptr,param_1,param_2);
  return;
}

// GetNumPendingBarriers @ 145a19c20

int __thiscall
FD3D12EnhancedBarriersForContext::GetNumPendingBarriers(FD3D12EnhancedBarriersForContext *this)

{
  return (((this->Batcher).Ptr)->BarrierGroups).ArrayNum;
}

// HandleReservedResourceCommits @ 145a1c170

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
FD3D12EnhancedBarriersForContext::HandleReservedResourceCommits
          (FD3D12CommandContext *param_1,FD3D12EnhancedBarriersTransitionData *param_2)

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
LAB_145a1c1b0:
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
        goto LAB_145a1c1b0;
      }
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                         ,0xc81,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pTVar5 = pTVar5 + 3;
  } while( true );
}

