// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 42

// FCanvas @ 148905b10

FCanvas * __thiscall
FCanvas::FCanvas(FCanvas *this,FRenderTarget *param_1,FHitProxyConsumer *param_2,FGameTime *param_3,
                Type param_4,float param_5)

{
  double dVar1;
  float fVar2;
  
  (this->WordWrapper).Object = (FCanvasWordWrapper *)0x0;
  (this->WordWrapper).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->DepthSortKeyStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DepthSortKeyStack).ArrayNum = 0;
  (this->DepthSortKeyStack).ArrayMax = 0;
  (this->TransformStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransformStack).ArrayNum = 0;
  (this->TransformStack).ArrayMax = 0;
  (this->ViewRect).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->ViewRect).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->ScissorRect).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->ScissorRect).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->CurrentHitProxy).Reference = (HHitProxy *)0x0;
  this->Scene = (FSceneInterface *)0x0;
  this->bRenderTargetDirty = false;
  this->RenderTarget = param_1;
  this->HitProxyConsumer = param_2;
  this->AllowedModes = 0xffffffff;
  dVar1 = param_3->WorldTimeSeconds;
  (this->Time).RealTimeSeconds = param_3->RealTimeSeconds;
  (this->Time).WorldTimeSeconds = dVar1;
  fVar2 = param_3->DeltaWorldTimeSeconds;
  (this->Time).DeltaRealTimeSeconds = param_3->DeltaRealTimeSeconds;
  (this->Time).DeltaWorldTimeSeconds = fVar2;
  (this->SortedElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SortedElements).ArrayNum = 0;
  (this->SortedElements).ArrayMax = 0;
  *(undefined8 *)&this->SortedElementLookupMap = 0;
  *(undefined8 *)&(this->SortedElementLookupMap).field_0x8 = 0;
  *(undefined8 *)&(this->SortedElementLookupMap).field_0x20 = 0;
  this->bUseInternalTexture = false;
  this->bWriteDestinationAlpha = false;
  this->DrawMode = CDM_DeferDrawing;
  this->DPIScale = param_5;
  this->FeatureLevel = param_4;
  *(undefined4 *)&(this->SortedElementLookupMap).field_0x28 = 0;
  *(undefined4 *)&(this->SortedElementLookupMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SortedElementLookupMap).field_0x34 = 0;
  *(undefined4 *)&(this->SortedElementLookupMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SortedElementLookupMap).field_0x40 = 0;
  *(undefined4 *)&(this->SortedElementLookupMap).field_0x48 = 0;
  Construct(this);
  return this;
}

// FCanvas @ 148905c10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FCanvas * __thiscall
FCanvas::FCanvas(FCanvas *this,FRenderTarget *param_1,FHitProxyConsumer *param_2,UWorld *param_3,
                Type param_4,ECanvasDrawMode param_5,float param_6)

{
  float fVar1;
  float fVar2;
  double dVar3;
  FSceneInterface *pFVar4;
  
  pFVar4 = (FSceneInterface *)0x0;
  (this->WordWrapper).Object = (FCanvasWordWrapper *)0x0;
  (this->WordWrapper).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->DepthSortKeyStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DepthSortKeyStack).ArrayNum = 0;
  (this->DepthSortKeyStack).ArrayMax = 0;
  (this->TransformStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransformStack).ArrayNum = 0;
  (this->TransformStack).ArrayMax = 0;
  (this->ViewRect).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->ViewRect).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->ScissorRect).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->ScissorRect).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  this->RenderTarget = param_1;
  this->HitProxyConsumer = param_2;
  (this->CurrentHitProxy).Reference = (HHitProxy *)0x0;
  if (param_3 != (UWorld *)0x0) {
    pFVar4 = param_3->Scene;
  }
  this->Scene = pFVar4;
  this->FeatureLevel = param_4;
  this->bRenderTargetDirty = false;
  this->bUseInternalTexture = false;
  this->bWriteDestinationAlpha = false;
  (this->SortedElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SortedElements).ArrayNum = 0;
  (this->SortedElements).ArrayMax = 0;
  *(undefined8 *)&this->SortedElementLookupMap = 0;
  *(undefined8 *)&(this->SortedElementLookupMap).field_0x8 = 0;
  *(undefined8 *)&(this->SortedElementLookupMap).field_0x20 = 0;
  this->DrawMode = param_5;
  this->DPIScale = param_6;
  this->AllowedModes = 0xffffffff;
  (this->Time).RealTimeSeconds = 0.0;
  (this->Time).WorldTimeSeconds = 0.0;
  (this->Time).DeltaRealTimeSeconds = 0.0;
  (this->Time).DeltaWorldTimeSeconds = 0.0;
  *(undefined4 *)&(this->SortedElementLookupMap).field_0x28 = 0;
  *(undefined4 *)&(this->SortedElementLookupMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SortedElementLookupMap).field_0x34 = 0;
  *(undefined4 *)&(this->SortedElementLookupMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SortedElementLookupMap).field_0x40 = 0;
  *(undefined4 *)&(this->SortedElementLookupMap).field_0x48 = 0;
  Construct(this);
  if (param_3 != (UWorld *)0x0) {
    dVar3 = param_3->TimeSeconds;
    fVar1 = param_3->DeltaRealTimeSeconds;
    fVar2 = param_3->DeltaTimeSeconds;
    (this->Time).RealTimeSeconds = param_3->RealTimeSeconds;
    (this->Time).WorldTimeSeconds = dVar3;
    (this->Time).DeltaRealTimeSeconds = fVar1;
    (this->Time).DeltaWorldTimeSeconds = fVar2;
  }
  return this;
}

// ~FCanvas @ 14890da10

void __thiscall FCanvas::~FCanvas(FCanvas *this)

{
  longlong *plVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  HHitProxy *pHVar4;
  
  ClearBatchesToRender(this);
  *(undefined4 *)&(this->SortedElementLookupMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SortedElementLookupMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SortedElementLookupMap);
  DestructItems<FCanvas::FCanvasSortElement,int>
            ((FCanvasSortElement *)(this->SortedElements).AllocatorInstance.Data,
             (this->SortedElements).ArrayNum);
  pFVar3 = (this->SortedElements).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pHVar4 = (this->CurrentHitProxy).Reference;
  if (pHVar4 != (HHitProxy *)0x0) {
    plVar1 = &pHVar4->_padding_;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      (**(code **)pHVar4->_padding_)(pHVar4,1);
    }
  }
  pFVar3 = (this->TransformStack).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->DepthSortKeyStack).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WordWrapper).SharedReferenceCount.ReferenceController);
  return;
}

// operator() @ 1489104c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall `FCanvas::Clear'::__l2::<lambda_1>::operator()(void *this,FRHICommandList *param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  atomic<unsigned_int> aVar4;
  FRHIBreadcrumbAllocator *pFVar5;
  FRHIBreadcrumbNode *pFVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  FRHITransitionInfo_u_8 *pFVar10;
  int *piVar11;
  undefined1 auStackY_208 [32];
  undefined1 local_1c8 [16];
  TArrayView<FRHITransitionInfo_const_,int> local_1b8;
  FRHITransitionInfo local_1a8;
  FRHIBreadcrumbScope local_178;
  undefined8 local_168;
  wchar_t *pwStack_160;
  undefined1 local_158 [16];
  FRHIRenderPassInfo local_148;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_178.Node._0_4_ = 0x430;
      local_178.RHICmdList = (FRHIComputeCommandList *)0x151bdf930;
      ::Desc._padding_ = CONCAT44(local_178.Node._4_4_,0x430);
      local_168 = 0;
      pwStack_160 = L"CanvasClear";
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_ = 0;
      ::Desc._padding_ = (longlong)u_CanvasClear;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FCanvas::Clear'::__l2::Desc::operator()'::__l7::<lambda_1>::operator()<>'::__l2::
             _dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar5 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pFVar6 = FMemStackBase::Alloc(&pFVar5->Inner,0x50,8);
  pFVar6->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar6->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar6->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar6->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar6->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar6->Data = (FRHIBreadcrumbData *)&::Desc;
  pFVar6->Allocator = pFVar5;
  pFVar6->TraceCpuSpecId = 0;
  pFVar6->TraceCpuMetadataId = 0;
  LOCK();
  UNLOCK();
  uVar3 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar6->ID = uVar3;
  pFVar6->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar6->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar6->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar6[1]._padding_ = (longlong)&::Desc;
  if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
    bVar2 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
    if (bVar2) {
      EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
      if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        aVar4 = (atomic<unsigned_int>)
                FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)::Desc._padding_,(char *)::Desc._padding_,
                           (uint)::Desc._padding_);
        LOCK();
        ::Desc.TraceCpuSpecId = aVar4;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    }
  }
  pFVar6->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_178,(FRHIComputeCommandList *)param_1,pFVar6);
  local_168 = CONCAT71(local_168._1_7_,1);
  if (*(longlong **)((longlong)this + 0x10) == (longlong *)0x0) {
    ``FCanvas::Clear'::__l2::<lambda_1>::operator()'::__l19::<lambda_2>::operator()(local_1c8);
  }
  else {
    plVar7 = (longlong *)(**(code **)(**(longlong **)((longlong)this + 0x10) + 0x10))();
    if (*plVar7 != 0) {
      puVar8 = (undefined8 *)(**(code **)(**(longlong **)((longlong)this + 0x10) + 0x10))();
      lVar9 = (**(code **)(*(longlong *)*puVar8 + 0x20))();
      if ((((*(int *)(lVar9 + 8) == 1) && (*(float *)(lVar9 + 0xc) == *(float *)this)) &&
          (*(float *)(lVar9 + 0x10) == *(float *)((longlong)this + 4))) &&
         ((*(float *)(lVar9 + 0x14) == *(float *)((longlong)this + 8) &&
          (*(float *)(lVar9 + 0x18) == *(float *)((longlong)this + 0xc))))) {
        puVar8 = (undefined8 *)(**(code **)(**(longlong **)((longlong)this + 0x10) + 0x10))();
        FRHIRenderPassInfo::FRHIRenderPassInfo
                  (&local_148,(FRHITexture *)*puVar8,Clear_Store,(FRHITexture *)0x0,'\0',-1);
        pFVar10 = (FRHITransitionInfo_u_8 *)
                  (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x10))();
        local_1b8.ArrayNum = 1;
        local_1a8.field1_0x8 = *pFVar10;
        local_1a8._padding_._4_2_ = 0xffff;
        local_1b8.DataPtr = &local_1a8;
        local_1a8._padding_._0_4_ = 0xffffffff;
        local_1a8.Type = Texture;
        local_1a8.AccessBefore = None;
        local_1a8.AccessAfter = RTV;
        local_1a8.Flags = None;
        local_1a8.CommitInfo.bIsSet = false;
        FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_1b8,None);
        FRHICommandList::BeginRenderPass(param_1,&local_148,L"ClearCanvas");
        FRHICommandList::EndRenderPass(param_1);
        if (local_148.ShadingRateTexture.Reference != (FRHITexture *)0x0) {
          FRHIResource::Release((FRHIResource *)local_148.ShadingRateTexture.Reference);
        }
        goto LAB_1489108e1;
      }
    }
    plVar7 = (longlong *)(**(code **)(**(longlong **)((longlong)this + 0x10) + 0x10))();
    if (*plVar7 != 0) {
      puVar8 = (undefined8 *)(**(code **)(**(longlong **)((longlong)this + 0x10) + 0x10))();
      FRHIRenderPassInfo::FRHIRenderPassInfo
                (&local_148,(FRHITexture *)*puVar8,DontLoad_Store,(FRHITexture *)0x0,'\0',-1);
      pFVar10 = (FRHITransitionInfo_u_8 *)
                (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x10))();
      local_1b8.ArrayNum = 1;
      local_1a8.field1_0x8 = *pFVar10;
      local_1a8._padding_._4_2_ = 0xffff;
      local_1b8.DataPtr = &local_1a8;
      local_1a8._padding_._0_4_ = 0xffffffff;
      local_1a8.Type = Texture;
      local_1a8.AccessBefore = None;
      local_1a8.AccessAfter = RTV;
      local_1a8.Flags = None;
      local_1a8.CommitInfo.bIsSet = false;
      FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_1b8,None);
      FRHICommandList::BeginRenderPass(param_1,&local_148,L"ClearCanvas");
      lVar9 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x28))
                        (*(longlong **)((longlong)this + 0x10),local_158);
      iVar1 = *(int *)(lVar9 + 4);
      piVar11 = (int *)(**(code **)(**(longlong **)((longlong)this + 0x10) + 0x28))
                                 (*(longlong **)((longlong)this + 0x10),&local_1b8);
      FRHICommandList::SetViewport(param_1,0.0,0.0,0.0,(float)*piVar11,(float)iVar1,__real_3f800000)
      ;
      DrawClearQuadMRT(param_1,true,1,this,false,0.0,false,0);
      FRHICommandList::EndRenderPass(param_1);
      if (local_148.ShadingRateTexture.Reference != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)local_148.ShadingRateTexture.Reference);
      }
    }
  }
LAB_1489108e1:
  FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_178);
  return;
}

// AddTileRenderItem @ 148917bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCanvas::AddTileRenderItem
          (FCanvas *this,float param_1,float param_2,float param_3,float param_4,float param_5,
          float param_6,float param_7,float param_8,FMaterialRenderProxy *param_9,
          FHitProxyId param_10,bool param_11,FColor param_12)

{
  int *piVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_Canvas_AddTileRenderTime> FVar12;
  FCanvasSortElement *pFVar13;
  FCanvasTileRendererItem *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_Canvas_NumBatchesCreated> FVar15;
  FThreadStats *pFVar16;
  FThreadStatsPool *pFVar17;
  uint uVar18;
  FName FVar19;
  FTransformEntry *pFVar20;
  FCanvasTileRendererItem *local_c0;
  FColor_u_0 local_b8 [2];
  FName local_b0;
  FName local_a8;
  FName local_98;
  LARGE_INTEGER local_90;
  FStatMessage local_88;
  FStatMessage local_78;
  FName local_68;
  FName local_60 [7];
  
  FVar12 = StatPtr_STAT_Canvas_AddTileRenderTime;
  if (StatPtr_STAT_Canvas_AddTileRenderTime ==
      (FThreadSafeStaticStat<FStat_STAT_Canvas_AddTileRenderTime>)0x0) {
    pFVar11 = ::FName::FName(&local_68,"STAT_Canvas_AddTileRenderTime");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Canvas_AddTileRenderTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Canvas_AddTileRenderTime,*pFVar11
                        ,L"Add Material Tile Time","STATGROUP_Canvas","STATCAT_Advanced",L"Canvas",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar12;
  bVar5 = false;
  bVar7 = false;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  if ((FVar19.ComparisonIndex.Value.Value == 0) && (FVar19.Number == 0)) {
LAB_148917d2b:
    bVar6 = false;
    FVar19 = local_a8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_b8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_b8[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b0.ComparisonIndex.Value = FVar19.ComparisonIndex.Value.Value;
        local_b0.Number = FVar19.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_b0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\Canvas.cpp"
                   ,0x2c0);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148917d2b;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar6 = true;
  }
  iVar9 = TopDepthSortKey(this);
  pFVar13 = GetSortElement(this,iVar9);
  iVar9 = (this->TransformStack).ArrayNum;
  uVar18 = iVar9 - 1;
  uVar10 = 0;
  if ((int)uVar18 < iVar9) {
    uVar10 = ~uVar18 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar9 = (pFVar13->RenderBatchArray).ArrayNum;
  pFVar20 = (FTransformEntry *)
            ((this->TransformStack).AllocatorInstance.Data +
            (longlong)((this->TransformStack).ArrayNum + -1) * 0x90);
  if (0 < iVar9) {
    uVar10 = 0;
    if ((int)(iVar9 - 1U) < iVar9) {
      uVar10 = ~(iVar9 - 1U) >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar14 = (FCanvasTileRendererItem *)
              (**(code **)(**(longlong **)
                             ((pFVar13->RenderBatchArray).AllocatorInstance.Data +
                             (longlong)(pFVar13->RenderBatchArray).ArrayNum * 8 + -8) + 0x20))();
    if ((pFVar14 != (FCanvasTileRendererItem *)0x0) &&
       (bVar8 = FCanvasTileRendererItem::IsMatch(pFVar14,param_9,pFVar20), bVar8))
    goto LAB_148918054;
  }
  if (FThreadStats::bPrimaryEnable != false) {
    FVar15 = StatPtr_STAT_Canvas_NumBatchesCreated;
    if (StatPtr_STAT_Canvas_NumBatchesCreated ==
        (FThreadSafeStaticStat<FStat_STAT_Canvas_NumBatchesCreated>)0x0) {
      pFVar11 = ::FName::FName(local_60,"STAT_Canvas_NumBatchesCreated");
      FVar15 = (FThreadSafeStaticStat<FStat_STAT_Canvas_NumBatchesCreated>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Canvas_NumBatchesCreated,
                          *pFVar11,L"Num Batches Created","STATGROUP_Canvas","STATCAT_Advanced",
                          L"Canvas",true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar15;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar16 == (FThreadStats *)0x0) {
        pFVar17 = FThreadStatsPool::Get();
        pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
      }
      local_88.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
      local_88.StatData.Pad[0] = '\x01';
      local_88.StatData.Pad[1] = '\0';
      local_88.StatData.Pad[2] = '\0';
      local_88.StatData.Pad[3] = '\0';
      local_88.StatData.Pad[4] = '\0';
      local_88.StatData.Pad[5] = '\0';
      local_88.StatData.Pad[6] = '\0';
      local_88.StatData.Pad[7] = '\0';
      local_98 = FVar2;
      local_88.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar16,&local_88);
      FStatsTrace::Add(&local_98,1);
      if (pFVar16->ScopeCount == 0) {
        FThreadStats::Flush(pFVar16,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar16,false,false);
      }
    }
  }
  pFVar14 = ::operator_new(0x20);
  if (pFVar14 == (FCanvasTileRendererItem *)0x0) {
    pFVar14 = (FCanvasTileRendererItem *)0x0;
  }
  else {
    pFVar14 = FCanvasTileRendererItem::FCanvasTileRendererItem
                        (pFVar14,this->FeatureLevel,param_9,pFVar20,param_11);
  }
  pFVar3 = (pFVar13->RenderBatchArray).AllocatorInstance.Data;
  local_c0 = pFVar14;
  if (((pFVar3 <= (FScriptContainerElement *)&local_c0) &&
      ((FScriptContainerElement *)&local_c0 <
       pFVar3 + (longlong)(pFVar13->RenderBatchArray).ArrayMax * 8)) &&
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
  iVar9 = (pFVar13->RenderBatchArray).ArrayNum;
  piVar1 = &(pFVar13->RenderBatchArray).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(pFVar13->RenderBatchArray).AllocatorInstance,piVar1);
  }
  (pFVar13->RenderBatchArray).ArrayNum = iVar9 + 1;
  *(FCanvasTileRendererItem **)
   ((pFVar13->RenderBatchArray).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_c0;
LAB_148918054:
  FCanvasTileRendererItem::AddTile
            (pFVar14,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
             param_12);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar6) && (FVar19 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar16 == (FThreadStats *)0x0) {
      pFVar17 = FThreadStatsPool::Get();
      pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
    }
    if (pFVar16->bWaitForExplicitFlush < pFVar16->ScopeCount) {
      local_78.NameAndInfo.Index = FVar19.ComparisonIndex.Value;
      local_78.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_90);
      local_78.StatData.Pad[4] = '\0';
      local_78.StatData.Pad[5] = '\0';
      local_78.StatData.Pad[6] = '\0';
      local_78.StatData.Pad[7] = '\0';
      local_78.StatData.Pad[0] = local_90.s.LowPart._0_1_;
      local_78.StatData.Pad[1] = local_90.s.LowPart._1_1_;
      local_78.StatData.Pad[2] = local_90.s.LowPart._2_1_;
      local_78.StatData.Pad[3] = local_90.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar16,&local_78);
      piVar1 = &pFVar16->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar16,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar16,false,false);
      }
    }
  }
  return;
}

// AddTriangleRenderItem @ 1489183c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCanvas::AddTriangleRenderItem
          (FCanvas *this,FCanvasUVTri *param_1,FMaterialRenderProxy *param_2,FHitProxyId param_3,
          bool param_4)

{
  int *piVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_Canvas_AddTriangleRenderTime> FVar12;
  FCanvasSortElement *pFVar13;
  FCanvasTriangleRendererItem *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_Canvas_NumBatchesCreated> FVar15;
  FThreadStats *pFVar16;
  FThreadStatsPool *pFVar17;
  uint uVar18;
  FName FVar19;
  FNameEntryId FVar20;
  FTransformEntry *pFVar21;
  FCanvasTriangleRendererItem *local_b0;
  FColor_u_0 local_a8 [2];
  FName local_a0;
  uint local_98;
  uint uStack_94;
  FName local_90;
  FName local_80;
  LARGE_INTEGER local_78;
  FStatMessage local_70;
  FStatMessage local_60;
  FName local_50;
  FName local_48 [2];
  
  FVar12 = StatPtr_STAT_Canvas_AddTriangleRenderTime;
  if (StatPtr_STAT_Canvas_AddTriangleRenderTime ==
      (FThreadSafeStaticStat<FStat_STAT_Canvas_AddTriangleRenderTime>)0x0) {
    pFVar11 = ::FName::FName(&local_50,"STAT_Canvas_AddTriangleRenderTime");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Canvas_AddTriangleRenderTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Canvas_AddTriangleRenderTime,
                        *pFVar11,L"Add Material Triangle Time","STATGROUP_Canvas","STATCAT_Advanced"
                        ,L"Canvas",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar12;
  bVar5 = false;
  bVar7 = false;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  if ((FVar19.ComparisonIndex.Value.Value == 0) && (FVar19.Number == 0)) {
LAB_148918508:
    bVar6 = false;
    FVar19 = local_90;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_a8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_a8[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a0.ComparisonIndex.Value = FVar19.ComparisonIndex.Value.Value;
        local_a0.Number = FVar19.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\Canvas.cpp"
                   ,0x2de);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148918508;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar6 = true;
  }
  iVar9 = TopDepthSortKey(this);
  pFVar13 = GetSortElement(this,iVar9);
  iVar9 = (this->TransformStack).ArrayNum;
  uVar18 = iVar9 - 1;
  uVar10 = 0;
  if ((int)uVar18 < iVar9) {
    uVar10 = ~uVar18 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar9 = (pFVar13->RenderBatchArray).ArrayNum;
  pFVar21 = (FTransformEntry *)
            ((this->TransformStack).AllocatorInstance.Data +
            (longlong)((this->TransformStack).ArrayNum + -1) * 0x90);
  if (0 < iVar9) {
    uVar10 = 0;
    if ((int)(iVar9 - 1U) < iVar9) {
      uVar10 = ~(iVar9 - 1U) >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar14 = (FCanvasTriangleRendererItem *)
              (**(code **)(**(longlong **)
                             ((pFVar13->RenderBatchArray).AllocatorInstance.Data +
                             (longlong)(pFVar13->RenderBatchArray).ArrayNum * 8 + -8) + 0x28))();
    if ((pFVar14 != (FCanvasTriangleRendererItem *)0x0) &&
       (bVar8 = FCanvasTriangleRendererItem::IsMatch(pFVar14,param_2,pFVar21), bVar8))
    goto LAB_148918834;
  }
  if (FThreadStats::bPrimaryEnable != false) {
    FVar15 = StatPtr_STAT_Canvas_NumBatchesCreated;
    if (StatPtr_STAT_Canvas_NumBatchesCreated ==
        (FThreadSafeStaticStat<FStat_STAT_Canvas_NumBatchesCreated>)0x0) {
      pFVar11 = ::FName::FName(local_48,"STAT_Canvas_NumBatchesCreated");
      FVar15 = (FThreadSafeStaticStat<FStat_STAT_Canvas_NumBatchesCreated>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Canvas_NumBatchesCreated,
                          *pFVar11,L"Num Batches Created","STATGROUP_Canvas","STATCAT_Advanced",
                          L"Canvas",true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar15;
    FVar20 = FVar2.ComparisonIndex.Value;
    uVar10 = FVar2.Number;
    local_98 = FVar20.Value;
    uStack_94 = uVar10;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar16 == (FThreadStats *)0x0) {
        pFVar17 = FThreadStatsPool::Get();
        pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
      }
      local_70.NameAndInfo.Number = uVar10 & 0xffffafff | 0xa000;
      local_70.StatData.Pad[0] = '\x01';
      local_70.StatData.Pad[1] = '\0';
      local_70.StatData.Pad[2] = '\0';
      local_70.StatData.Pad[3] = '\0';
      local_70.StatData.Pad[4] = '\0';
      local_70.StatData.Pad[5] = '\0';
      local_70.StatData.Pad[6] = '\0';
      local_70.StatData.Pad[7] = '\0';
      local_80 = FVar2;
      local_70.NameAndInfo.Index.Value = FVar20.Value;
      FThreadStats::AddStatMessage(pFVar16,&local_70);
      FStatsTrace::Add(&local_80,1);
      if (pFVar16->ScopeCount == 0) {
        FThreadStats::Flush(pFVar16,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar16,false,false);
      }
    }
  }
  pFVar14 = ::operator_new(0x20);
  if (pFVar14 == (FCanvasTriangleRendererItem *)0x0) {
    pFVar14 = (FCanvasTriangleRendererItem *)0x0;
  }
  else {
    pFVar14 = FCanvasTriangleRendererItem::FCanvasTriangleRendererItem
                        (pFVar14,this->FeatureLevel,param_2,pFVar21,param_4);
  }
  pFVar3 = (pFVar13->RenderBatchArray).AllocatorInstance.Data;
  local_b0 = pFVar14;
  if (((pFVar3 <= (FScriptContainerElement *)&local_b0) &&
      ((FScriptContainerElement *)&local_b0 <
       pFVar3 + (longlong)(pFVar13->RenderBatchArray).ArrayMax * 8)) &&
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
  iVar9 = (pFVar13->RenderBatchArray).ArrayNum;
  piVar1 = &(pFVar13->RenderBatchArray).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(pFVar13->RenderBatchArray).AllocatorInstance,piVar1);
  }
  (pFVar13->RenderBatchArray).ArrayNum = iVar9 + 1;
  *(FCanvasTriangleRendererItem **)
   ((pFVar13->RenderBatchArray).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_b0;
LAB_148918834:
  FCanvasTriangleRendererItem::AddTriangle(pFVar14,param_1,param_3);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar6) && (FVar19 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar16 == (FThreadStats *)0x0) {
      pFVar17 = FThreadStatsPool::Get();
      pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
    }
    if (pFVar16->bWaitForExplicitFlush < pFVar16->ScopeCount) {
      local_60.NameAndInfo.Index = FVar19.ComparisonIndex.Value;
      local_60.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_78);
      local_60.StatData.Pad[4] = '\0';
      local_60.StatData.Pad[5] = '\0';
      local_60.StatData.Pad[6] = '\0';
      local_60.StatData.Pad[7] = '\0';
      local_60.StatData.Pad[0] = local_78.s.LowPart._0_1_;
      local_60.StatData.Pad[1] = local_78.s.LowPart._1_1_;
      local_60.StatData.Pad[2] = local_78.s.LowPart._2_1_;
      local_60.StatData.Pad[3] = local_78.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar16,&local_60);
      piVar1 = &pFVar16->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar16,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar16,false,false);
      }
    }
  }
  return;
}

// BlendToSimpleElementBlend @ 1489195e0

/* WARNING: Enum "EBlendMode": Some values do not have unique names */

ESimpleElementBlendMode __cdecl FCanvas::BlendToSimpleElementBlend(EBlendMode param_1)

{
  switch(param_1) {
  case BLEND_Opaque:
    return SE_BLEND_Opaque;
  case BLEND_Masked:
    return SE_BLEND_Masked;
  default:
    return SE_BLEND_AlphaBlend;
  case BLEND_Additive:
    return SE_BLEND_Additive;
  case BLEND_ColoredTransmittanceOnly:
    return SE_BLEND_Modulate;
  case BLEND_AlphaComposite:
    return SE_BLEND_AlphaComposite;
  case BLEND_AlphaHoldout:
    return SE_BLEND_AlphaHoldout;
  }
}

// CalcBaseTransform2D @ 14891b640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMatrix<double> * __cdecl
FCanvas::CalcBaseTransform2D(TMatrix<double> *__return_storage_ptr__,uint param_1,uint param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_358 [32];
  TMatrix<double> local_338;
  TMatrix<double> local_2b8;
  TMatrix<double> local_238;
  TMatrix<double> local_1b8;
  TMatrix<double> local_138;
  TMatrix<double> local_b8;
  ulonglong local_38;
  
  dVar5 = _UNK_150689518;
  dVar4 = ___xmm_00000000000000003ff0000000000000;
  dVar3 = _UNK_15061cbc8;
  dVar2 = ___xmm_3ff00000000000000000000000000000;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_358;
  local_2b8.M[0][2] = 0.0;
  local_2b8.M[0][3] = 0.0;
  local_2b8.M[1][2] = 0.0;
  local_2b8.M[1][3] = 0.0;
  local_2b8.M[3][0] = 0.0;
  local_2b8.M[3][1] = 0.0;
  local_2b8.M[2][0] = 0.0;
  local_2b8.M[2][1] = 0.0;
  local_2b8.M[0][0] = ___xmm_00000000000000003ff0000000000000;
  local_2b8.M[0][1] = _UNK_150689518;
  local_2b8.M[1][0] = ___xmm_3ff00000000000000000000000000000;
  local_2b8.M[1][1] = _UNK_15061cbc8;
  local_2b8.M[2][2] = ___xmm_00000000000000003ff0000000000000;
  local_2b8.M[2][3] = _UNK_150689518;
  local_2b8.M[3][2] = ___xmm_3ff00000000000000000000000000000;
  local_2b8.M[3][3] = _UNK_15061cbc8;
  local_338.M[2][2] = ___xmm_00000000000000003ff0000000000000;
  local_338.M[2][3] = _UNK_150689518;
  fVar1 = (float)param_1;
  if ((float)param_1 <= __real_3f800000) {
    fVar1 = __real_3f800000;
  }
  local_338.M[3][2] = ___xmm_3ff00000000000000000000000000000;
  local_338.M[3][3] = _UNK_15061cbc8;
  local_338.M[0][0] = (double)(__real_40000000 / (float)((longlong)fVar1 & 0xffffffff));
  local_338.M[0][1] = 0.0;
  local_338.M[0][2] = 0.0;
  local_338.M[0][3] = 0.0;
  local_338.M[1][0] = 0.0;
  fVar1 = (float)param_2;
  if ((float)param_2 <= __real_3f800000) {
    fVar1 = __real_3f800000;
  }
  local_338.M[1][1] = (double)(__real_c0000000 / (float)((longlong)fVar1 & 0xffffffff));
  local_338.M[1][2] = 0.0;
  local_338.M[1][3] = 0.0;
  local_338.M[2][0] = 0.0;
  local_338.M[2][1] = 0.0;
  local_338.M[3][0] = ___xmm_3ff0000000000000bff0000000000000;
  local_338.M[3][1] = _UNK_15076b868;
  VectorMatrixMultiply(&local_138,&local_2b8,&local_338);
  local_238.M[0][0] = dVar4;
  local_238.M[0][1] = dVar5;
  local_238.M[0][2] = 0.0;
  local_238.M[0][3] = 0.0;
  local_238.M[1][2] = 0.0;
  local_238.M[1][3] = 0.0;
  local_238.M[2][0] = 0.0;
  local_238.M[2][1] = 0.0;
  local_238.M[3][0] = 0.0;
  local_238.M[3][1] = 0.0;
  local_1b8.M[0][2] = 0.0;
  local_1b8.M[0][3] = 0.0;
  local_1b8.M[1][2] = 0.0;
  local_1b8.M[1][3] = 0.0;
  local_1b8.M[2][0] = 0.0;
  local_1b8.M[2][1] = 0.0;
  local_1b8.M[3][0] = 0.0;
  local_1b8.M[3][1] = 0.0;
  local_238.M[1][0] = dVar2;
  local_238.M[1][1] = dVar3;
  local_238.M[2][2] = dVar4;
  local_238.M[2][3] = dVar5;
  local_238.M[3][2] = dVar2;
  local_238.M[3][3] = dVar3;
  local_1b8.M[0][0] = dVar4;
  local_1b8.M[0][1] = dVar5;
  local_1b8.M[1][0] = dVar2;
  local_1b8.M[1][1] = dVar3;
  local_1b8.M[2][2] = dVar4;
  local_1b8.M[2][3] = dVar5;
  local_1b8.M[3][2] = dVar2;
  local_1b8.M[3][3] = dVar3;
  VectorMatrixMultiply(&local_b8,&local_138,&local_238);
  VectorMatrixMultiply(__return_storage_ptr__,&local_b8,&local_1b8);
  return __return_storage_ptr__;
}

// CalcBaseTransform3D @ 14891b830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMatrix<double> * __cdecl
FCanvas::CalcBaseTransform3D
          (TMatrix<double> *__return_storage_ptr__,uint param_1,uint param_2,float param_3,
          float param_4)

{
  undefined1 auStackY_168 [32];
  TMatrix<double> local_138;
  TMatrix<double> local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  CalcViewMatrix(&local_b8,param_1,param_2,param_3);
  CalcProjectionMatrix(&local_138,param_1,param_2,param_3,param_4);
  VectorMatrixMultiply(__return_storage_ptr__,&local_b8,&local_138);
  return __return_storage_ptr__;
}

// CalcProjectionMatrix @ 14891bbe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMatrix<double> * __cdecl
FCanvas::CalcProjectionMatrix
          (TMatrix<double> *__return_storage_ptr__,uint param_1,uint param_2,float param_3,
          float param_4)

{
  double dVar1;
  undefined1 auStack_238 [32];
  TMatrix<double> local_218;
  TMatrix<double> local_198;
  TMatrix<double> local_118;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_238;
  dVar1 = tan((double)(param_3 * __real_3c0efa36));
  local_218.M[0][0] = __real_3ff0000000000000 / dVar1;
  local_218.M[2][2] = ___xmm_3ff00000000000000000000000000000;
  local_218.M[2][3] = _UNK_15061cbc8;
  local_218.M[0][1] = 0.0;
  local_218.M[0][2] = 0.0;
  local_218.M[0][3] = 0.0;
  local_218.M[1][0] = 0.0;
  local_218.M[3][3] = 0.0;
  local_218.M[1][2] = 0.0;
  local_218.M[1][3] = 0.0;
  local_218.M[1][1] = (double)param_1 / ((double)param_2 * dVar1);
  local_218.M[3][0] = 0.0;
  local_218.M[3][1] = 0.0;
  local_218.M[2][0] = 0.0;
  local_218.M[2][1] = 0.0;
  local_218.M[3][2] = (double)param_4;
  local_198.M[0][0] = ___xmm_00000000000000003ff0000000000000;
  local_198.M[0][1] = _UNK_150689518;
  local_198.M[2][2] = ___xmm_00000000000000003ff0000000000000;
  local_198.M[2][3] = _UNK_150689518;
  local_118.M[0][0] = ___xmm_00000000000000003ff0000000000000;
  local_118.M[0][1] = _UNK_150689518;
  local_118.M[2][2] = ___xmm_00000000000000003ff0000000000000;
  local_118.M[2][3] = _UNK_150689518;
  local_198.M[0][2] = 0.0;
  local_198.M[0][3] = 0.0;
  local_198.M[1][0] = ___xmm_3ff00000000000000000000000000000;
  local_198.M[1][1] = _UNK_15061cbc8;
  local_198.M[1][2] = 0.0;
  local_198.M[1][3] = 0.0;
  local_198.M[2][0] = 0.0;
  local_198.M[2][1] = 0.0;
  local_198.M[3][0] = 0.0;
  local_198.M[3][1] = 0.0;
  local_198.M[3][2] = ___xmm_3ff00000000000000000000000000000;
  local_198.M[3][3] = _UNK_15061cbc8;
  local_118.M[0][2] = 0.0;
  local_118.M[0][3] = 0.0;
  local_118.M[1][0] = ___xmm_3ff00000000000000000000000000000;
  local_118.M[1][1] = _UNK_15061cbc8;
  local_118.M[1][2] = 0.0;
  local_118.M[1][3] = 0.0;
  local_118.M[2][0] = 0.0;
  local_118.M[2][1] = 0.0;
  local_118.M[3][0] = 0.0;
  local_118.M[3][1] = 0.0;
  local_118.M[3][2] = ___xmm_3ff00000000000000000000000000000;
  local_118.M[3][3] = _UNK_15061cbc8;
  VectorMatrixMultiply(&local_98,&local_218,&local_198);
  VectorMatrixMultiply(__return_storage_ptr__,&local_98,&local_118);
  return __return_storage_ptr__;
}

// CalcViewMatrix @ 14891bd60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMatrix<double> * __cdecl
FCanvas::CalcViewMatrix
          (TMatrix<double> *__return_storage_ptr__,uint param_1,uint param_2,float param_3)

{
  double dVar1;
  double dVar2;
  float fVar3;
  undefined1 auStack_258 [32];
  TMatrix<double> local_238;
  TMatrix<double> local_1b8;
  TMatrix<double> local_138;
  TMatrix<double> local_b8;
  ulonglong local_38;
  
  dVar2 = _UNK_150689518;
  dVar1 = ___xmm_00000000000000003ff0000000000000;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_258;
  local_1b8.M[0][2] = 0.0;
  local_1b8.M[0][3] = 0.0;
  local_1b8.M[1][2] = 0.0;
  local_1b8.M[1][3] = 0.0;
  local_1b8.M[1][0] = ___xmm_3ff00000000000000000000000000000;
  local_1b8.M[1][1] = _UNK_15061cbc8;
  local_1b8.M[3][0] = __xmm_80000000000000008000000000000000;
  local_1b8.M[3][1] = _UNK_15066df78;
  local_1b8.M[0][0] = ___xmm_00000000000000003ff0000000000000;
  local_1b8.M[0][1] = _UNK_150689518;
  local_1b8.M[2][0] = 0.0;
  local_1b8.M[2][1] = 0.0;
  local_1b8.M[2][2] = ___xmm_00000000000000003ff0000000000000;
  local_1b8.M[2][3] = _UNK_150689518;
  fVar3 = tanf(param_3 * __real_3c0efa36);
  local_1b8.M[3][3] = __real_3ff0000000000000;
  local_1b8.M[3][2] = (double)(fVar3 * (float)param_1 * __real_3f000000);
  local_238.M[1][0] = ___xmm_bff00000000000000000000000000000;
  local_238.M[1][1] = _UNK_1508ffb28;
  local_238.M[2][0] = 0.0;
  local_238.M[2][1] = 0.0;
  local_238.M[0][2] = 0.0;
  local_238.M[0][3] = 0.0;
  local_238.M[1][2] = 0.0;
  local_238.M[1][3] = 0.0;
  local_238.M[3][0] = (double)((float)param_1 * __real_bf000000);
  local_238.M[0][0] = dVar1;
  local_238.M[0][1] = dVar2;
  local_238.M[3][1] = (double)((float)param_2 * __real_3f000000);
  local_238.M[2][2] = dVar1;
  local_238.M[2][3] = dVar2;
  local_138.M[0][2] = 0.0;
  local_138.M[0][3] = 0.0;
  local_138.M[1][2] = 0.0;
  local_138.M[1][3] = 0.0;
  local_138.M[3][0] = 0.0;
  local_138.M[3][1] = 0.0;
  local_238.M[3][2] = ___xmm_3ff00000000000000000000000000000;
  local_238.M[3][3] = _UNK_15061cbc8;
  local_138.M[0][0] = dVar1;
  local_138.M[0][1] = dVar2;
  local_138.M[1][0] = ___xmm_3ff00000000000000000000000000000;
  local_138.M[1][1] = _UNK_15061cbc8;
  local_138.M[2][0] = 0.0;
  local_138.M[2][1] = 0.0;
  local_138.M[2][2] = dVar1;
  local_138.M[2][3] = dVar2;
  local_138.M[3][2] = ___xmm_3ff00000000000000000000000000000;
  local_138.M[3][3] = _UNK_15061cbc8;
  VectorMatrixMultiply(&local_b8,&local_138,&local_238);
  VectorMatrixMultiply(__return_storage_ptr__,&local_b8,&local_1b8);
  return __return_storage_ptr__;
}

// Clear @ 14891cdd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FCanvas::Clear(FCanvas *this,FLinearColor *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  code **ppcVar4;
  ulonglong uVar5;
  undefined1 auStack_d8 [32];
  code *local_b8;
  code *pcStack_b0;
  code *local_a8;
  code *pcStack_a0;
  FRenderTarget *local_98;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  undefined1 local_58 [40];
  code **local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8 = *(code **)&param_1->field0_0x0;
  pcStack_b0 = *(code **)((longlong)&param_1->field0_0x0 + 8);
  local_98 = this->RenderTarget;
  local_88[0] = (code *)0x0;
  local_a8 = local_b8;
  pcStack_a0 = pcStack_b0;
  local_60 = FMemory::Malloc(0x20,8);
  *local_60 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FCanvas::Clear'::`2'::<lambda_1>,1,1>::_vftable_;
  local_60[1] = local_b8;
  local_60[2] = pcStack_b0;
  local_60[3] = (code *)local_98;
  if (local_60 + 1 != (code **)0x0) {
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FCanvas::Clear'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FCanvas::Clear_::__l2::TSTR_ClearCommand1069>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_60 = (code **)0x0;
    local_58._16_8_ = local_78[0];
    local_58._24_8_ = local_78[1];
    local_58._32_8_ = local_78[2];
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FCanvas::Clear'::__l2::TSTR_ClearCommand1069>::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        ppcVar4 = (code **)(local_58 + 0x10);
        if (local_30 != (code **)0x0) {
          ppcVar4 = local_30;
        }
        (**(code **)(*ppcVar4 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    ppcVar4 = local_88 + 2;
    if (local_60 != (code **)0x0) {
      ppcVar4 = local_60;
    }
    (**(code **)(*ppcVar4 + 0x10))();
  }
  return;
}

// ClearBatchesToRender @ 14891cff0

void __thiscall FCanvas::ClearBatchesToRender(FCanvas *this)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<FCanvas::FCanvasSortElement,TSizedDefaultAllocator<32>_> *pTVar3;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this_00;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  bool bVar9;
  longlong *plVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res10 [8];
  
  pTVar3 = &this->SortedElements;
  pFVar12 = (pTVar3->AllocatorInstance).Data;
  iVar6 = (this->SortedElements).ArrayNum;
  pFVar11 = pFVar12 + 0x10;
  pFVar4 = pFVar12 + (longlong)iVar6 * 0x18;
  while( true ) {
    if ((this->SortedElements).ArrayNum != iVar6) {
      `TCheckedPointerIterator<FCanvas::FCanvasSortElement,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar12 == pFVar4) break;
    plVar10 = *(longlong **)(pFVar11 + -8);
    iVar7 = *(int *)pFVar11;
    plVar5 = plVar10 + iVar7;
    while( true ) {
      if (*(int *)pFVar11 != iVar7) {
        `TCheckedPointerIterator<FCanvasBaseRenderItem_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (plVar10 == plVar5) break;
      puVar8 = (undefined8 *)*plVar10;
      if (puVar8 != (undefined8 *)0x0) {
        (**(code **)*puVar8)(puVar8,1);
      }
      plVar10 = plVar10 + 1;
    }
    pFVar12 = pFVar12 + 0x18;
    pFVar11 = pFVar11 + 0x18;
  }
  DestructItems<FCanvas::FCanvasSortElement,int>
            ((FCanvasSortElement *)(pTVar3->AllocatorInstance).Data,(this->SortedElements).ArrayNum)
  ;
  piVar1 = &(this->SortedElements).ArrayMax;
  (this->SortedElements).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&pTVar3->AllocatorInstance,0,piVar1);
  }
  this_00 = &this->SortedElementLookupMap;
  bVar9 = 1 < *(int *)&(this->SortedElementLookupMap).field_0x48;
  if (!bVar9) {
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)this_00);
  }
  puVar2 = &(this->SortedElementLookupMap).field_0xc;
  *(undefined4 *)&(this->SortedElementLookupMap).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->SortedElementLookupMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SortedElementLookupMap).field_0x34 = 0;
  iVar6 = *(int *)&(this->SortedElementLookupMap).field_0x2c;
  *(undefined4 *)&(this->SortedElementLookupMap).field_0x28 = 0;
  if ((iVar6 < 0) || (0x80 < iVar6)) {
    *(undefined4 *)&(this->SortedElementLookupMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->SortedElementLookupMap).field_0x10,0)
    ;
  }
  if (bVar9) {
    *(undefined4 *)&(this->SortedElementLookupMap).field_0x48 = 1;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Rehash
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               this_00);
  }
  this->LastElementIndex = -1;
  return;
}

// Construct @ 14891fa30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FCanvas::Construct(FCanvas *this)

{
  int *piVar1;
  FRenderTarget *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  TMatrix<double> *pTVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  float fVar11;
  undefined1 auStack_208 [32];
  undefined4 *local_1e8;
  FScriptContainerElement *local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  undefined4 local_1b8 [2];
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined1 local_1a8 [16];
  TMatrix<double> local_198;
  TMatrix<double> local_118;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_208;
  this->bStereoRendering = false;
  this->bScaledToRenderTarget = false;
  pFVar2 = this->RenderTarget;
  if (pFVar2 == (FRenderTarget *)0x0) {
    local_1b0 = 1;
    puVar7 = (undefined8 *)&local_1b0;
    uStack_1ac = 1;
  }
  else {
    puVar7 = (undefined8 *)(**(code **)(pFVar2->_padding_ + 0x28))(pFVar2,local_1a8);
  }
  fVar11 = __real_3f800000;
  if (this->bStereoRendering == false) {
    fVar11 = this->DPIScale;
  }
  local_198.M[0][0] = (double)fVar11;
  local_198.M[2][0] = 0.0;
  local_198.M[2][1] = 0.0;
  local_198.M[0][1] = 0.0;
  local_198.M[1][0] = 0.0;
  local_198.M[2][3] = 0.0;
  local_198.M[0][2] = 0.0;
  local_198.M[0][3] = 0.0;
  local_198.M[1][2] = 0.0;
  local_198.M[1][3] = 0.0;
  local_198.M[3][0] = 0.0;
  local_198.M[3][1] = 0.0;
  local_198.M[3][2] = ___xmm_3ff00000000000000000000000000000;
  local_198.M[3][3] = _UNK_15061cbc8;
  local_198.M[1][1] = local_198.M[0][0];
  local_198.M[2][2] = local_198.M[0][0];
  pTVar8 = CalcBaseTransform2D(&local_98,(uint)*puVar7,(uint)((ulonglong)*puVar7 >> 0x20));
  VectorMatrixMultiply(&local_118,&local_198,pTVar8);
  iVar5 = (this->TransformStack).ArrayNum;
  piVar1 = &(this->TransformStack).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1090,&(this->TransformStack).AllocatorInstance,piVar1);
  }
  pFVar10 = (this->TransformStack).AllocatorInstance.Data;
  (this->TransformStack).ArrayNum = iVar5 + 1;
  pFVar10 = pFVar10 + (longlong)iVar5 * 0x90;
  *(double *)pFVar10 = local_118.M[0][0];
  *(double *)(pFVar10 + 8) = local_118.M[0][1];
  *(double *)(pFVar10 + 0x10) = local_118.M[0][2];
  *(double *)(pFVar10 + 0x18) = local_118.M[0][3];
  *(double *)(pFVar10 + 0x20) = local_118.M[1][0];
  *(double *)(pFVar10 + 0x28) = local_118.M[1][1];
  *(double *)(pFVar10 + 0x30) = local_118.M[1][2];
  *(double *)(pFVar10 + 0x38) = local_118.M[1][3];
  *(double *)(pFVar10 + 0x40) = local_118.M[2][0];
  *(double *)(pFVar10 + 0x48) = local_118.M[2][1];
  *(double *)(pFVar10 + 0x50) = local_118.M[2][2];
  *(double *)(pFVar10 + 0x58) = local_118.M[2][3];
  *(double *)(pFVar10 + 0x60) = local_118.M[3][0];
  *(double *)(pFVar10 + 0x68) = local_118.M[3][1];
  *(double *)(pFVar10 + 0x70) = local_118.M[3][2];
  *(double *)(pFVar10 + 0x78) = local_118.M[3][3];
  uVar6 = FCrc::MemCrc_DEPRECATED(pFVar10,0x80,0);
  *(uint *)(pFVar10 + 0x80) = uVar6;
  this->AlphaModulate = 1.0;
  this->LastElementIndex = -1;
  pFVar10 = (this->DepthSortKeyStack).AllocatorInstance.Data;
  local_1b8[0] = 0;
  if ((pFVar10 <= (FScriptContainerElement *)local_1b8) &&
     (lVar9 = (longlong)(this->DepthSortKeyStack).ArrayMax,
     (FScriptContainerElement *)local_1b8 < pFVar10 + lVar9 * 4)) {
    local_1d0 = (longlong)(this->DepthSortKeyStack).ArrayNum;
    local_1c8 = 4;
    local_1e8 = local_1b8;
    local_1e0 = pFVar10;
    local_1d8 = lVar9;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->DepthSortKeyStack).ArrayNum;
  piVar1 = &(this->DepthSortKeyStack).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->DepthSortKeyStack).AllocatorInstance,piVar1);
  }
  (this->DepthSortKeyStack).ArrayNum = iVar5 + 1;
  *(undefined4 *)((this->DepthSortKeyStack).AllocatorInstance.Data + (longlong)iVar5 * 4) =
       local_1b8[0];
  return;
}

// CopyTransformStack @ 1489229e0

void __thiscall FCanvas::CopyTransformStack(FCanvas *this,FCanvas *param_1)

{
  TArray<FCanvas::FTransformEntry,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  pTVar1 = &this->TransformStack;
  if (pTVar1 != &param_1->TransformStack) {
    iVar3 = (this->TransformStack).ArrayMax;
    piVar2 = &(this->TransformStack).ArrayMax;
    iVar4 = (param_1->TransformStack).ArrayNum;
    _Src = (param_1->TransformStack).AllocatorInstance.Data;
    (this->TransformStack).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,0x10,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
    if (iVar4 != 0) {
      memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 * 0x90);
    }
  }
  return;
}

// Create @ 148922a80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FCanvas * __cdecl
FCanvas::Create(FRDGBuilder *param_1,FRDGTexture *param_2,FHitProxyConsumer *param_3,
               FGameTime *param_4,Type param_5,float param_6)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FCanvas *pFVar6;
  FRDGCanvasRenderTarget *local_res8;
  FHitProxyConsumer *local_res18 [2];
  undefined8 *local_28 [2];
  
  local_res18[0] = param_3;
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x20,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FCanvas *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    puVar5[2] = 0;
    *puVar5 = &___7__TObject_VFRDGCanvasRenderTarget___FRDGAllocator__6B_;
    puVar5[1] = &___7FRDGCanvasRenderTarget__6B_;
    puVar5[3] = param_2;
  }
  local_28[0] = puVar5;
  if (((undefined8 **)param_1->_padding_ <= local_28) &&
     (local_28 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FCanvas *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  *(int *)&param_1->_padding_ = iVar4 + 1;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar4 * 8) = local_28[0];
  local_res8 = (FRDGCanvasRenderTarget *)(puVar5 + 1);
  pFVar6 = FRDGAllocator::
           Alloc<FCanvas,FRDGCanvasRenderTarget_*,FHitProxyConsumer_*_&,FGameTime_const_&,enum_ERHIFeatureLevel::Type_&,float_&>
                     ((FRDGAllocator *)&param_1->_padding_,&local_res8,local_res18,param_4,&param_5,
                      &param_6);
  return pFVar6;
}

// DrawItem @ 14892e330

void __thiscall FCanvas::DrawItem(FCanvas *this,FCanvasItem *param_1)

{
  (**(code **)(param_1->_padding_ + 0x18))(param_1);
  if (this->DrawMode == CDM_ImmediateDrawing) {
    Flush_GameThread(this,false);
    return;
  }
  return;
}

// DrawItem @ 14892e370

void __thiscall FCanvas::DrawItem(FCanvas *this,FCanvasItem *param_1,TVector2<double> *param_2)

{
  (**(code **)(param_1->_padding_ + 0x10))(param_1);
  if (this->DrawMode == CDM_ImmediateDrawing) {
    Flush_GameThread(this,false);
    return;
  }
  return;
}

// DrawItem @ 14892e3b0

void __thiscall FCanvas::DrawItem(FCanvas *this,FCanvasItem *param_1,float param_2,float param_3)

{
  (**(code **)(param_1->_padding_ + 8))(param_1);
  if (this->DrawMode == CDM_ImmediateDrawing) {
    Flush_GameThread(this,false);
    return;
  }
  return;
}

// DrawNGon @ 14892f8b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FCanvas::DrawNGon(FCanvas *this,TVector2<double> *param_1,FColor *param_2,int param_3,float param_4)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TVector2<double>_u_0 local_78;
  undefined1 local_68 [52];
  float local_34;
  float local_30;
  float local_2c;
  TArray<FCanvasUVTri,TSizedDefaultAllocator<32>_> local_28;
  FCanvasTriangleItem *local_18;
  FTexture *local_10;
  
  dVar2 = (double)param_4;
  local_68._0_8_ = &___7FCanvasNGonItem__6B_;
  iVar4 = 0xff;
  if (param_3 < 0xff) {
    iVar4 = param_3;
  }
  iVar5 = 3;
  if (3 < iVar4) {
    iVar5 = iVar4;
  }
  local_68._24_8_ = 0;
  local_68[0x20] = 0;
  local_68._40_8_ = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  local_18 = (FCanvasTriangleItem *)0x0;
  local_10 = GWhiteTexture;
  local_78._8_4_ = SUB84(dVar2,0);
  local_78._s_0.X = dVar2;
  local_78._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  local_68._8_8_ = (param_1->field0_0x0)._s_0.X;
  local_68._16_8_ = (param_1->field0_0x0)._s_0.Y;
  local_68._48_4_ = FLinearColor::sRGBToLinearTable[(param_2->field0_0x0)._s_0.R];
  local_34 = FLinearColor::sRGBToLinearTable[(param_2->field0_0x0)._s_0.G];
  local_30 = FLinearColor::sRGBToLinearTable[(param_2->field0_0x0)._s_0.B];
  local_2c = (float)(param_2->field0_0x0)._s_0.A * __real_3b808081;
  if (iVar5 < 3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNumSides >= 3",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\CanvasItem.cpp"
                       ,0x705,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<FCanvasUVTri,TSizedDefaultAllocator<32>_>::SetNum(&local_28,iVar5,Default);
  FCanvasNGonItem::SetupPosition
            ((FCanvasNGonItem *)local_68,param_1,(TVector2<double> *)&local_78._s_0);
  if (*(code **)(local_68._0_8_ + 0x18) == FCanvasNGonItem::Draw) {
    *(undefined4 *)((longlong)&local_18->_padding_ + 4) = local_68._28_4_;
    (**(code **)(local_18->_padding_ + 0x18))();
  }
  else {
    (**(code **)(local_68._0_8_ + 0x18))(local_68);
  }
  if (this->DrawMode == CDM_ImmediateDrawing) {
    Flush_GameThread(this,false);
  }
  local_68._0_8_ = &___7FCanvasNGonItem__6B_;
  if (local_18 != (FCanvasTriangleItem *)0x0) {
    (**(code **)local_18->_padding_)(local_18,1);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// DrawShadowedString @ 14892fbe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FCanvas::DrawShadowedString
          (FCanvas *this,double param_1,double param_2,TStringView<wchar_t> *param_3,UFont *param_4,
          FLinearColor *param_5,FLinearColor *param_6)

{
  TVector2<double>_u_0 local_248;
  FCanvasTextItemBase local_238;
  UFont *local_a0;
  TReferenceControllerBase<1> *local_60;
  char local_38;
  wchar_t *local_30;
  undefined8 uStack_28;
  
  local_248._s_0.X = param_1;
  local_248._s_0.Y = param_2;
  FCanvasTextItemBase::FCanvasTextItemBase(&local_238,(TVector2<double> *)&local_248._s_0,param_5);
  local_a0 = param_4;
  local_38 = '\0';
  local_238._padding_._4_4_ = 2;
  local_238._padding_ = (longlong)&___7FCanvasTextStringViewItem__6B_;
  local_30 = param_3->DataPtr;
  uStack_28 = *(undefined8 *)&param_3->Size;
  if ((param_4 == (UFont *)0x0) || ((param_4->ImportOptions).bUseDistanceFieldAlpha == 0)) {
    local_238.FontRenderInfo._0_4_ = local_238.FontRenderInfo._0_4_ | 2;
    local_238.ShadowOffset.field0_0x0._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
    local_238.ShadowOffset.field0_0x0._s_0.Y = _UNK_150689688;
    local_238.ShadowColor.field0_0x0._0_8_ = *(undefined8 *)&param_6->field0_0x0;
    local_238.ShadowColor.field0_0x0._8_8_ = *(undefined8 *)((longlong)&param_6->field0_0x0 + 8);
  }
  else {
    local_238._padding_._4_4_ = 6;
  }
  FCanvasTextItemBase::Draw(&local_238,this);
  if (this->DrawMode == CDM_ImmediateDrawing) {
    Flush_GameThread(this,false);
  }
  if (local_38 != '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
  }
  return (int)local_238.DrawnSize.field0_0x0._s_0.Y;
}

// DrawShadowedText @ 14892fd00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FCanvas::DrawShadowedText
          (FCanvas *this,double param_1,double param_2,FText *param_3,UFont *param_4,
          FLinearColor *param_5,FLinearColor *param_6)

{
  UFont *pUVar1;
  TVector2<double>_u_0 local_248;
  FCanvasTextItemBase local_238;
  UFont *local_a0;
  TReferenceControllerBase<1> *local_60;
  char local_38;
  ITextData *local_30;
  uint local_28;
  
  local_248._s_0.X = param_1;
  local_248._s_0.Y = param_2;
  FCanvasTextItemBase::FCanvasTextItemBase(&local_238,(TVector2<double> *)&local_248._s_0,param_5);
  pUVar1 = param_4;
  local_30 = (param_3->TextData).Reference;
  local_238._padding_ = (longlong)&___7FCanvasTextItem__6B_;
  local_a0 = param_4;
  local_38 = '\0';
  local_238._padding_._4_4_ = 2;
  if (local_30 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_30 + 8))(local_30,&param_4);
  }
  local_28 = param_3->Flags;
  if ((pUVar1 == (UFont *)0x0) || ((pUVar1->ImportOptions).bUseDistanceFieldAlpha == 0)) {
    local_238.FontRenderInfo._0_4_ = local_238.FontRenderInfo._0_4_ | 2;
    local_238.ShadowOffset.field0_0x0._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
    local_238.ShadowOffset.field0_0x0._s_0.Y = _UNK_150689688;
    local_238.ShadowColor.field0_0x0._s_0.R = (param_6->field0_0x0)._s_0.R;
    local_238.ShadowColor.field0_0x0._s_0.G = (param_6->field0_0x0)._s_0.G;
    local_238.ShadowColor.field0_0x0._s_0.B = (param_6->field0_0x0)._s_0.B;
    local_238.ShadowColor.field0_0x0._s_0.A = (param_6->field0_0x0)._s_0.A;
  }
  else {
    local_238._padding_._4_4_ = 6;
  }
  if (*(code **)(local_238._padding_ + 0x18) == FCanvasTextItemBase::Draw) {
    FCanvasTextItemBase::Draw(&local_238,this);
  }
  else {
    (**(code **)(local_238._padding_ + 0x18))();
  }
  if (this->DrawMode == CDM_ImmediateDrawing) {
    Flush_GameThread(this,false);
  }
  local_238._padding_ = (longlong)&___7FCanvasTextItem__6B_;
  if (local_30 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_30 + 0x10))();
  }
  if (local_38 != '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
  }
  return (int)local_238.DrawnSize.field0_0x0._s_0.Y;
}

// DrawTile @ 148937850

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCanvas::DrawTile(FCanvas *this,double param_1,double param_2,double param_3,double param_4,
                 float param_5,float param_6,float param_7,float param_8,FLinearColor *param_9,
                 FTexture *param_10,ESimpleElementBlendMode param_11)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_Canvas_DrawTextureTileTime> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  uint local_res18;
  uint uStackX_1c;
  FName local_res20;
  FStatMessage local_128;
  FCanvasTileItem local_118;
  
  FVar8 = StatPtr_STAT_Canvas_DrawTextureTileTime;
  if (StatPtr_STAT_Canvas_DrawTextureTileTime ==
      (FThreadSafeStaticStat<FStat_STAT_Canvas_DrawTextureTileTime>)0x0) {
    pFVar7 = ::FName::FName(&local_res20,"STAT_Canvas_DrawTextureTileTime");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_Canvas_DrawTextureTileTime>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Canvas_DrawTextureTileTime,*pFVar7
                       ,L"Draw Texture Tile Time","STATGROUP_Canvas","STATCAT_Advanced",L"Canvas",
                       true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar10.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\Canvas.cpp"
                   ,0x463);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18 = FVar10.Value;
      uStackX_1c = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      goto LAB_1489379b9;
    }
  }
  bVar4 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_1489379b9:
  local_118.Size.field0_0x0._s_0.Y = param_4;
  local_118.Texture = GWhiteTexture;
  if (param_10 != (FTexture *)0x0) {
    local_118.Texture = param_10;
  }
  local_118._padding_ = (longlong)&___7FCanvasTileItem__6B_;
  local_118._padding_._0_4_ = 0;
  local_118._padding_._0_1_ = 0;
  local_118._padding_ = 0;
  local_118.Z = 1.0;
  local_118.MaterialRenderProxy = (FMaterialRenderProxy *)0x0;
  local_118.UV0.field0_0x0._s_0.Y = (double)param_6;
  local_118.UV0.field0_0x0._s_0.X = (double)param_5;
  local_118.UV1.field0_0x0._s_0.Y = (double)param_8;
  local_118.UV1.field0_0x0._s_0.X = (double)param_7;
  local_118.Rotation.Pitch = 0.0;
  local_118.Rotation.Yaw = 0.0;
  local_118.Rotation.Roll = 0.0;
  local_118.PivotPoint.field0_0x0._s_0 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  local_118._padding_ = *(longlong *)&param_9->field0_0x0;
  local_118._padding_ = *(longlong *)((longlong)&param_9->field0_0x0 + 8);
  local_118._padding_ = (longlong)param_1;
  local_118._padding_ = (longlong)param_2;
  local_118.Size.field0_0x0._s_0.X = param_3;
  if (local_118.Texture == (FTexture *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InTexture != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\CanvasItem.cpp"
                       ,0x182,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_118._padding_._4_4_ = param_11;
  if (*(code **)(local_118._padding_ + 0x18) == FCanvasTileItem::Draw) {
    FCanvasTileItem::Draw(&local_118,this);
  }
  else {
    (**(code **)(local_118._padding_ + 0x18))();
  }
  if (this->DrawMode == CDM_ImmediateDrawing) {
    Flush_GameThread(this,false);
  }
  local_118._padding_ = (longlong)&___7FCanvasItem__6B_;
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_128.NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_128.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter((LARGE_INTEGER *)&param_10);
      local_128.StatData.Pad = (uchar  [8])((ulonglong)param_10 & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_128);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// DrawTile @ 148937bf0

void __thiscall
FCanvas::DrawTile(FCanvas *this,double param_1,double param_2,double param_3,double param_4,
                 float param_5,float param_6,float param_7,float param_8,FLinearColor *param_9,
                 FTexture *param_10,bool param_11)

{
  ESimpleElementBlendMode EVar1;
  
  EVar1 = SE_BLEND_Opaque;
  if (param_11) {
    if (this->bUseInternalTexture == false) {
      EVar1 = SE_BLEND_Translucent;
      if (this->bWriteDestinationAlpha != false) {
        EVar1 = SE_BLEND_AlphaBlend;
      }
    }
    else {
      EVar1 = SE_BLEND_TranslucentAlphaOnlyWriteAlpha;
    }
  }
  DrawTile(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
           EVar1);
  return;
}

// Flush_GameThread @ 14894e600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014894ea8e) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff38 : 0x00014894ea92 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FCanvas::Flush_GameThread(FCanvas *this,bool param_1)

{
  int *piVar1;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this_00;
  FSlateFontServices *this_01;
  FScriptContainerElement *pFVar2;
  FRenderTarget *pFVar3;
  TIntPoint<int>_u_0 TVar4;
  TIntPoint<int>_u_0 TVar5;
  TIntPoint<int>_u_0 TVar6;
  TIntPoint<int>_u_0 TVar7;
  undefined8 *puVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_Canvas_FlushTime> FVar18;
  FRenderCommandList *this_02;
  FCommandList *this_03;
  FRenderCommandTag *pFVar19;
  code **ppcVar20;
  longlong *plVar21;
  FName FVar22;
  FName FVar23;
  ulonglong uVar24;
  uint uVar25;
  longlong lVar26;
  uint uVar27;
  longlong lVar28;
  undefined1 auStackY_1a8 [32];
  undefined1 local_147;
  FIdentityFunctor local_146 [6];
  FName local_140;
  uint local_138;
  FColor_u_0 local_134;
  FCanvas *local_130;
  FName local_128;
  FName local_120;
  FName local_118;
  FCanvas *local_110;
  FName local_108;
  TSharedRef<FSlateFontCache,1> local_f0;
  FName local_e0;
  code *local_d8 [2];
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  longlong local_b0;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  uVar27 = 0;
  FVar18 = StatPtr_STAT_Canvas_FlushTime;
  local_110 = this;
  if (StatPtr_STAT_Canvas_FlushTime == (FThreadSafeStaticStat<FStat_STAT_Canvas_FlushTime>)0x0) {
    pFVar17 = ::FName::FName(&local_e0,"STAT_Canvas_FlushTime");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_Canvas_FlushTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Canvas_FlushTime,*pFVar17,
                        L"Flush Time","STATGROUP_Canvas","STATCAT_Advanced",L"Canvas",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar18;
  bVar10 = false;
  bVar11 = false;
  local_108.ComparisonIndex.Value = 0;
  local_108.Number = 0;
  bVar12 = false;
  bVar13 = false;
  if ((FVar23.ComparisonIndex.Value.Value != 0) || (FVar23.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_134.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_134._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar10 = false;
      bVar11 = true;
      bVar12 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_120.ComparisonIndex.Value = FVar23.ComparisonIndex.Value.Value;
        local_120.Number = FVar23.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_120,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\Canvas.cpp"
                   ,0x368);
        bVar10 = true;
        bVar11 = true;
        bVar12 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_140 = FVar23;
      local_118 = FVar23;
      FThreadStats::AddMessage(FVar23,CycleScopeStart);
      bVar12 = true;
      goto LAB_14894e77b;
    }
  }
  bVar11 = bVar13;
  bVar10 = bVar12;
  bVar12 = false;
  local_118 = local_108;
  FVar23 = local_108;
LAB_14894e77b:
  if (((this->AllowedModes & 1) != 0) || (param_1)) {
    if ((this->RenderTarget == (FRenderTarget *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("RenderTarget",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\Canvas.cpp"
                            ,0x370,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if ((this->AllowedModes & 2) == 0) {
      local_147 = 0;
      `FCanvas::Flush_GameThread'::__l15::<lambda_1>::operator()(&local_147);
    }
    if ((this->SortedElements).ArrayNum != 0) {
      if ((FEngineFontServices::Instance != (FEngineFontServices *)0x0) &&
         (this_01 = (FEngineFontServices::Instance->SlateFontServices).Object,
         this_01 != (FSlateFontServices *)0x0)) {
        FSlateFontServices::GetFontCache(this_01,&local_f0);
        FSlateFontCache::UpdateCache(local_f0.Object);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f0.SharedReferenceCount.ReferenceController);
      }
      AlgoImpl::
      IntroSortInternal<FCanvas::FCanvasSortElement,int,FIdentityFunctor,TDereferenceWrapper<FCanvas::FCanvasSortElement,_FCanvas::Flush_GameThread_::__l2::FCompareFCanvasSortElement>_>
                ((FCanvasSortElement *)(this->SortedElements).AllocatorInstance.Data,
                 (this->SortedElements).ArrayNum,local_146[0],
                 (FCompareFCanvasSortElement *)local_146);
      if (0 < (this->SortedElements).ArrayNum) {
        if (GRHIGlobals.UsingNullRHI == false) {
          local_130 = this;
          local_140 = (FName)::operator_new(0x10);
          if (local_140 == (FName)0x0) {
            local_140.ComparisonIndex.Value = 0;
            local_140.Number = 0;
          }
          else {
            *(undefined8 *)local_140 = 0;
            *(undefined8 *)((longlong)local_140 + 8) = 0;
          }
          local_128 = local_140;
          local_138 = 0;
          if (0 < (this->SortedElements).ArrayNum) {
            local_140.ComparisonIndex.Value = 0;
            local_140.Number = 0;
            do {
              uVar27 = local_138;
              FVar23 = local_140;
              lVar28 = 0;
              uVar25 = 0;
              if ((int)local_138 < (this->SortedElements).ArrayNum) {
                uVar25 = ~local_138 >> 0x1f;
              }
              if ((uVar25 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pFVar2 = (this->SortedElements).AllocatorInstance.Data;
              uVar25 = 0;
              FVar22 = FVar23;
              if (0 < *(int *)(pFVar2 + (longlong)FVar23 + 0x10)) {
                do {
                  uVar27 = 0;
                  if ((int)uVar25 < *(int *)(pFVar2 + (longlong)FVar23 + 0x10)) {
                    uVar27 = ~uVar25 >> 0x1f;
                  }
                  if ((uVar27 == 0) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar13)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  plVar21 = *(longlong **)
                             (*(FScriptContainerElement **)&pFVar2[(longlong)FVar23 + 8].field_0x0 +
                             lVar28);
                  if (plVar21 != (longlong *)0x0) {
                    bVar13 = this->bRenderTargetDirty;
                    bVar14 = (**(code **)(*plVar21 + 0x10))(plVar21,this,&local_130);
                    FVar22 = local_128;
                    local_b0 = 0;
                    this->bRenderTargetDirty = (bool)(bVar14 | bVar13);
                    local_c8 = &
                               ___7__TFunction_OwnedObject_V<lambda_1>__1____DeferredDelete_VFCanvasBaseRenderItem___FCanvasRenderThreadScope__QEAAXPEBVFCanvasBaseRenderItem___Z__0A__0A__Function_Private_Core_UE__6B_
                    ;
                    local_d8[0] = UE::Core::Private::Function::
                                  TFunctionRefCaller<`FCanvasRenderThreadScope::DeferredDelete<FCanvasBaseRenderItem>'::__l2::<lambda_1>,void,FCanvasRenderContext_&>
                                  ::Call;
                    uStack_c0 = plVar21;
                    if (((*(code ***)local_128 <= local_d8) &&
                        (local_d8 <
                         *(code ***)local_128 + (longlong)*(int *)((longlong)local_128 + 0xc) * 6))
                       && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x7a5,
                                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                              ), bVar13)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    iVar15 = *(int *)((longlong)FVar22 + 8);
                    if (iVar15 == *(int *)((longlong)FVar22 + 0xc)) {
                      iVar15 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x1030,(ForAnyElementType *)FVar22,
                                          (int *)((longlong)FVar22 + 0xc));
                    }
                    *(int *)((longlong)FVar22 + 8) = iVar15 + 1;
                    plVar21 = (longlong *)((longlong)iVar15 * 0x30 + *(longlong *)FVar22);
                    *plVar21 = (longlong)local_d8[0];
                    plVar21[5] = local_b0;
                    local_b0 = 0;
                    *(undefined4 *)(plVar21 + 2) = (undefined4)local_c8;
                    *(undefined4 *)((longlong)plVar21 + 0x14) = local_c8._4_4_;
                    *(undefined4 *)(plVar21 + 3) = (undefined4)uStack_c0;
                    *(undefined4 *)((longlong)plVar21 + 0x1c) = uStack_c0._4_4_;
                    plVar21[4] = local_b8;
                    if (*plVar21 == 0) {
                      if (local_d8[0] != (code *)0x0) {
                        (*(code *)local_c8[2])();
                      }
                    }
                    else {
                      local_d8[0] = (code *)0x0;
                    }
                  }
                  uVar25 = uVar25 + 1;
                  lVar28 = lVar28 + 8;
                  FVar22 = local_140;
                  uVar27 = local_138;
                } while ((int)uVar25 < *(int *)(pFVar2 + (longlong)FVar23 + 0x10));
              }
              *(undefined4 *)(pFVar2 + (longlong)FVar23 + 0x10) = 0;
              if (*(int *)(pFVar2 + (longlong)FVar23 + 0x14) != 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,0,(ForAnyElementType *)(pFVar2 + (longlong)FVar23 + 8),0,
                           (int *)(pFVar2 + (longlong)FVar23 + 0x14));
              }
              local_138 = uVar27 + 1;
              local_140 = (FName)((longlong)FVar22 + 0x18);
              FVar23 = local_118;
            } while ((int)local_138 < (this->SortedElements).ArrayNum);
          }
          pFVar3 = local_130->RenderTarget;
          TVar4 = (local_130->ViewRect).field0_0x0._s_0.Min.field0_0x0;
          TVar5 = (local_130->ViewRect).field0_0x0._s_0.Max.field0_0x0;
          TVar6 = (local_130->ScissorRect).field0_0x0._s_0.Min.field0_0x0;
          TVar7 = (local_130->ScissorRect).field0_0x0._s_0.Max.field0_0x0;
          bVar13 = local_130->bScaledToRenderTarget;
          local_a8[0] = (code *)0x0;
          local_140 = local_128;
          local_80 = FMemory::Malloc(0x40,8);
          local_80[2] = (code *)pFVar3;
          *local_80 = (code *)&UE::Core::Private::Function::
                               TFunction_OwnedObject<`FCanvasRenderThreadScope::~FCanvasRenderThreadScope'::`2'::<lambda_1>,1,1>
                               ::_vftable_;
          *(FName *)(local_80 + 1) = local_140;
          *(TIntPoint<int>_u_0 *)(local_80 + 3) = TVar4;
          *(TIntPoint<int>_u_0 *)(local_80 + 4) = TVar5;
          *(TIntPoint<int>_u_0 *)(local_80 + 5) = TVar6;
          *(TIntPoint<int>_u_0 *)(local_80 + 6) = TVar7;
          *(bool *)(local_80 + 7) = bVar13;
          if ((FName *)(local_80 + 1) != (FName *)0x0) {
            local_a8[0] = UE::Core::Private::Function::
                          TFunctionRefCaller<`FCanvasRenderThreadScope::~FCanvasRenderThreadScope'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                          ::Call;
          }
          this_02 = FRenderCommandList::GetInstanceTLS();
          if (this_02 == (FRenderCommandList *)0x0) {
            FRenderThreadCommandPipe::
            Enqueue<TRenderCommandTag<_FCanvasRenderThreadScope::~FCanvasRenderThreadScope_::__l2::TSTR_DispatchCanvasRenderCommands601>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                      ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
          }
          else {
            this_03 = FRenderCommandList::GetRenderThread(this_02);
            local_78._0_8_ = local_a8[0];
            local_50 = local_80;
            local_80 = (code **)0x0;
            local_78._16_8_ = local_98[0];
            local_78._24_8_ = local_98[1];
            local_78._32_8_ = local_98[2];
            local_a8[0] = (code *)0x0;
            local_48 = 2;
            pFVar19 = (FRenderCommandTag *)
                      TRenderCommandTag<`FCanvasRenderThreadScope::~FCanvasRenderThreadScope'::__l2::TSTR_DispatchCanvasRenderCommands601>
                      ::Get();
            UE::RenderCommandPipe::FCommandList::Enqueue
                      (this_03,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                                *)local_78,pFVar19);
            uVar24 = (ulonglong)local_48;
            if ((2 < uVar24) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                    ,0xd4,L""), bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar24] ==
                UE::Core::Private::
                TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
                Destruct) {
              if ((code *)local_78._0_8_ != (code *)0x0) {
                ppcVar20 = (code **)(local_78 + 0x10);
                if (local_50 != (code **)0x0) {
                  ppcVar20 = local_50;
                }
                (**(code **)(*ppcVar20 + 0x10))();
              }
            }
            else {
              (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar24])(local_78);
            }
          }
          this = local_110;
          if (local_a8[0] != (code *)0x0) {
            ppcVar20 = local_a8 + 2;
            if (local_80 != (code **)0x0) {
              ppcVar20 = local_80;
            }
            (**(code **)(*ppcVar20 + 0x10))();
            this = local_110;
          }
        }
        else {
          lVar28 = 0;
          do {
            uVar25 = 0;
            if ((int)uVar27 < (this->SortedElements).ArrayNum) {
              uVar25 = ~uVar27 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar2 = (this->SortedElements).AllocatorInstance.Data;
            uVar25 = 0;
            if (0 < *(int *)(pFVar2 + lVar28 + 0x10)) {
              lVar26 = 0;
              do {
                uVar16 = 0;
                if ((int)uVar25 < *(int *)(pFVar2 + lVar28 + 0x10)) {
                  uVar16 = ~uVar25 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                puVar8 = *(undefined8 **)(lVar26 + *(longlong *)(pFVar2 + lVar28 + 8));
                if (puVar8 != (undefined8 *)0x0) {
                  (**(code **)*puVar8)(puVar8,1);
                }
                uVar25 = uVar25 + 1;
                lVar26 = lVar26 + 8;
              } while ((int)uVar25 < *(int *)(pFVar2 + lVar28 + 0x10));
            }
            *(undefined4 *)(pFVar2 + lVar28 + 0x10) = 0;
            if (*(int *)(pFVar2 + lVar28 + 0x14) != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,0,(ForAnyElementType *)(pFVar2 + lVar28 + 8),0,
                         (int *)(pFVar2 + lVar28 + 0x14));
            }
            uVar27 = uVar27 + 1;
            lVar28 = lVar28 + 0x18;
          } while ((int)uVar27 < (this->SortedElements).ArrayNum);
        }
      }
      DestructItems<FCanvas::FCanvasSortElement,int>
                ((FCanvasSortElement *)(this->SortedElements).AllocatorInstance.Data,
                 (this->SortedElements).ArrayNum);
      piVar1 = &(this->SortedElements).ArrayMax;
      (this->SortedElements).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&(this->SortedElements).AllocatorInstance,0,piVar1);
      }
      this_00 = &this->SortedElementLookupMap;
      bVar13 = 1 < *(int *)&(this->SortedElementLookupMap).field_0x48;
      if (!bVar13) {
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
        UnhashElements((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                        *)this_00);
      }
      *(undefined4 *)&(this->SortedElementLookupMap).field_0x8 = 0;
      if (*(int *)&(this->SortedElementLookupMap).field_0xc != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)this_00,0,
                   (int *)&(this->SortedElementLookupMap).field_0xc);
      }
      *(undefined4 *)&(this->SortedElementLookupMap).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->SortedElementLookupMap).field_0x34 = 0;
      iVar15 = *(int *)&(this->SortedElementLookupMap).field_0x2c;
      *(undefined4 *)&(this->SortedElementLookupMap).field_0x28 = 0;
      if ((iVar15 < 0) || (0x80 < iVar15)) {
        *(undefined4 *)&(this->SortedElementLookupMap).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)
                   &(this->SortedElementLookupMap).field_0x10,0);
      }
      if (bVar13) {
        *(undefined4 *)&(this->SortedElementLookupMap).field_0x48 = 1;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Rehash
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)this_00);
      }
      this->LastElementIndex = -1;
    }
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar12) {
    FThreadStats::AddMessage(FVar23,CycleScopeEnd);
  }
  return;
}

// Flush_RenderThread @ 14894ef10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FCanvas::Flush_RenderThread(FCanvas *this,FRDGBuilder *param_1,bool param_2)

{
  int *piVar1;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this_00;
  char cVar2;
  FSlateFontServices *this_01;
  TIntPoint<int>_u_0 TVar3;
  TIntPoint<int>_u_0 TVar4;
  TIntPoint<int>_u_0 TVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  longlong *plVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  longlong lVar12;
  FRDGBuilder *pFVar13;
  bool bVar14;
  bool bVar15;
  byte bVar16;
  int iVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_Canvas_FlushTime> FVar19;
  FRDGScope *this_02;
  IRendererModule *pIVar20;
  TIntPoint<int>_u_0 *pTVar21;
  undefined8 *puVar22;
  longlong lVar23;
  FName FVar24;
  uint uVar25;
  longlong lVar26;
  char cVar27;
  ulonglong uVar28;
  uint uVar29;
  FIdentityFunctor local_res8;
  undefined1 local_157 [3];
  uint local_154;
  undefined8 *local_150;
  FColor_u_0 local_148 [2];
  FName local_140;
  longlong local_138;
  FName local_130;
  FName local_128;
  TRDGEventScopeGuard<FRDGScope_RHI> local_118;
  char local_108;
  FRDGBuilder *local_f8;
  FRDGTexture *local_f0;
  TIntPoint<int>_u_0 local_e8;
  undefined8 local_e0;
  TIntPoint<int>_u_0 local_d8;
  TIntPoint<int>_u_0 local_d0;
  TSharedRef<FSlateFontCache,1> local_c8;
  FName local_b8;
  undefined1 local_b0 [8];
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<12>_const_*,std::tuple<>_> local_a8;
  undefined8 local_98;
  FRHIDepthStencilState *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  uint uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  
  FVar19 = StatPtr_STAT_Canvas_FlushTime;
  if (StatPtr_STAT_Canvas_FlushTime == (FThreadSafeStaticStat<FStat_STAT_Canvas_FlushTime>)0x0) {
    pFVar18 = ::FName::FName(&local_b8,"STAT_Canvas_FlushTime");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_Canvas_FlushTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Canvas_FlushTime,*pFVar18,
                        L"Flush Time","STATGROUP_Canvas","STATCAT_Advanced",L"Canvas",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  bVar11 = false;
  bVar10 = false;
  local_128.ComparisonIndex.Value = 0;
  local_128.Number = 0;
  FVar24 = *(FName *)FVar19;
  bVar15 = false;
  bVar14 = false;
  if ((FVar24.ComparisonIndex.Value.Value != 0) || (FVar24.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_148[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_148[0]._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar11 = false;
      bVar10 = true;
      bVar15 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_140.ComparisonIndex.Value = FVar24.ComparisonIndex.Value.Value;
        local_140.Number = FVar24.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_140,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\Canvas.cpp"
                   ,0x314);
        bVar11 = true;
        bVar10 = true;
        bVar15 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_130 = FVar24;
      FThreadStats::AddMessage(FVar24,CycleScopeStart);
      bVar14 = true;
      goto LAB_14894f08b;
    }
  }
  bVar11 = bVar15;
  bVar10 = bVar14;
  bVar14 = false;
  local_130 = local_128;
  FVar24 = local_128;
LAB_14894f08b:
  if (((this->AllowedModes & 1) != 0) || (param_2)) {
    if ((this->RenderTarget == (FRenderTarget *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("RenderTarget",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\Canvas.cpp"
                            ,0x31c,L""), bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if ((this->SortedElements).ArrayNum != 0) {
      if ((FEngineFontServices::Instance == (FEngineFontServices *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Instance",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\EngineFontServices.cpp"
                              ,0x31,L""), bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      this_01 = (FEngineFontServices::Instance->SlateFontServices).Object;
      if (this_01 != (FSlateFontServices *)0x0) {
        FSlateFontServices::GetFontCache(this_01,&local_c8);
        FSlateFontCache::UpdateCache(local_c8.Object);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_c8.SharedReferenceCount.ReferenceController);
      }
      local_res8 = SUB81(this,0);
      AlgoImpl::
      IntroSortInternal<FCanvas::FCanvasSortElement,int,FIdentityFunctor,TDereferenceWrapper<FCanvas::FCanvasSortElement,_FCanvas::Flush_RenderThread_::__l2::FCompareFCanvasSortElement>_>
                ((FCanvasSortElement *)(this->SortedElements).AllocatorInstance.Data,
                 (this->SortedElements).ArrayNum,local_res8,(FCompareFCanvasSortElement *)local_157)
      ;
      cVar2 = *(char *)((longlong)&param_1->_padding_ + 6);
      cVar27 = '\0';
      local_108 = '\0';
      if ((cVar2 != '\0') && ((cVar2 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          ::Desc._padding_._0_4_ = 0x332;
          ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
          local_48 = 0;
          uStack_44 = 0;
          ::Desc._12_8_ = ZEXT48(uStack_4c);
          ::Desc._padding_._4_4_ = 0;
          ::Desc._padding_ = (longlong)u_CanvasFlush;
          ::Desc._padding_ = (longlong)u_CanvasFlush;
          InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
          ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
          ::Desc.TraceGpuSpecId = 0;
          ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
          atexit(```FCanvas::Flush_RenderThread'::__l20::Desc::operator()<>'::__l3::<lambda_1>::
                 operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
          _Init_thread_footer(&::_TSS0);
        }
        local_a8._Myfirst._Val = &::Desc;
        local_118.State = (FRDGScopeState *)param_1;
        this_02 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                            ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
        param_1->_padding_ = (longlong)this_02;
        uVar28 = (ulonglong)(this_02->Impl).Impl.TypeIndex;
        local_118.Scope = this_02;
        if ((3 < uVar28) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
          ::__l2::Destructors[uVar28])(&this_02->Impl);
        FRDGScope_RHI::FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<12>_>
                  ((FRDGScope_RHI *)&this_02->Impl,(FRDGScopeState *)param_1,&local_a8);
        (this_02->Impl).Impl.TypeIndex = '\x02';
        if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
          FRDGScope::BeginCPU(this_02,(FRHIComputeCommandList *)param_1->_padding_,false);
          FRDGScope::BeginGPU(this_02,(FRHIComputeCommandList *)param_1->_padding_);
        }
        cVar27 = '\x01';
        local_108 = '\x01';
      }
      pIVar20 = GetRendererModule();
      (**(code **)((longlong)*pIVar20 + 0x90))(pIVar20,param_1->_padding_);
      bVar15 = this->bScaledToRenderTarget;
      TVar3 = (this->ScissorRect).field0_0x0._s_0.Min.field0_0x0;
      TVar4 = (this->ScissorRect).field0_0x0._s_0.Max.field0_0x0;
      TVar5 = (TIntPoint<int>_u_0)*(TIntPoint<int>_u_0 *)&(this->ViewRect).field0_0x0;
      uVar6 = *(undefined8 *)((longlong)&(this->ViewRect).field0_0x0 + 8);
      local_f8 = param_1;
      local_f0 = (FRDGTexture *)
                 (**(code **)(this->RenderTarget->_padding_ + 8))(this->RenderTarget,param_1);
      if ((((int)((ulonglong)uVar6 >> 0x20) - TVar5._s_0.Y) * ((int)uVar6 - TVar5._s_0.X) < 1) ||
         (local_e8 = TVar5, local_e0 = uVar6, bVar15 != false)) {
        local_e0 = *(undefined8 *)&(local_f0->Desc).field_0x24;
        local_e8 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
      }
      local_d8 = TVar3;
      local_d0 = TVar4;
      if (this->bUseInternalTexture != false) {
        AddClearRenderTargetPass(param_1,local_f0);
      }
      local_90 = TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
                 ::StaticResource.StateRHI.Reference;
      local_98 = 0;
      local_88 = 0x11;
      local_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      local_60 = 0;
      if ((*(int *)((longlong)&(this->ViewRect).field0_0x0 + 0xc) -
          *(int *)((longlong)&(this->ViewRect).field0_0x0 + 4)) *
          (*(int *)((longlong)&(this->ViewRect).field0_0x0 + 8) -
          *(int *)&(this->ViewRect).field0_0x0) < 1) {
        pTVar21 = (TIntPoint<int>_u_0 *)
                  (**(code **)(this->RenderTarget->_padding_ + 0x28))(this->RenderTarget,local_b0);
        TVar3 = *pTVar21;
        (this->ViewRect).field0_0x0._s_0.Min.field0_0x0._s_0 =
             (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
        (this->ViewRect).field0_0x0._s_0.Max.field0_0x0 = TVar3;
      }
      local_154 = 0;
      if (0 < (this->SortedElements).ArrayNum) {
        local_138 = 0;
        do {
          lVar12 = local_138;
          uVar25 = local_154;
          uVar29 = 0;
          if ((int)local_154 < (this->SortedElements).ArrayNum) {
            uVar29 = ~local_154 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar7 = (this->SortedElements).AllocatorInstance.Data;
          uVar29 = 0;
          lVar23 = lVar12;
          if (0 < *(int *)(pFVar7 + lVar12 + 0x10)) {
            lVar26 = 0;
            do {
              uVar25 = 0;
              if ((int)uVar29 < *(int *)(pFVar7 + lVar12 + 0x10)) {
                uVar25 = ~uVar29 >> 0x1f;
              }
              if ((uVar25 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              plVar8 = *(longlong **)
                        (*(FScriptContainerElement **)&pFVar7[lVar12 + 8].field_0x0 + lVar26);
              if (plVar8 != (longlong *)0x0) {
                bVar15 = this->bRenderTargetDirty;
                bVar16 = (**(code **)(*plVar8 + 8))(plVar8,&local_f8,&local_98,this);
                pFVar13 = local_f8;
                this->bRenderTargetDirty = (bool)(bVar16 | bVar15);
                if ((this->AllowedModes & 2) != 0) {
                  puVar22 = FMemStackBase::Alloc((FMemStackBase *)&local_f8->_padding_,0x10,0x10);
                  if (puVar22 == (undefined8 *)0x0) {
                    puVar22 = (undefined8 *)0x0;
                    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Object",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                                        ,0x61,L"");
                    if (bVar15) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                  }
                  else {
                    puVar22[1] = plVar8;
                    *puVar22 = &
                               ___7__TObject_UFDeleter__1____DeferredDelete_VFCanvasBaseRenderItem___FCanvasRenderContext__QEAAXPEBVFCanvasBaseRenderItem___Z__FRDGAllocator__6B_
                    ;
                  }
                  local_150 = puVar22;
                  if ((((undefined8 **)pFVar13->_padding_ <= &local_150) &&
                      (&local_150 <
                       (undefined8 **)pFVar13->_padding_ +
                       *(int *)((longlong)&pFVar13->_padding_ + 4))) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar15)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  iVar17 = (int)pFVar13->_padding_;
                  piVar1 = (int *)((longlong)&pFVar13->_padding_ + 4);
                  if (iVar17 == *piVar1) {
                    iVar17 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x808,(ForAnyElementType *)&pFVar13->_padding_,piVar1);
                  }
                  *(int *)&pFVar13->_padding_ = iVar17 + 1;
                  *(undefined8 **)(pFVar13->_padding_ + (longlong)iVar17 * 8) = local_150;
                }
              }
              uVar29 = uVar29 + 1;
              lVar26 = lVar26 + 8;
              lVar23 = local_138;
              uVar25 = local_154;
            } while ((int)uVar29 < *(int *)(pFVar7 + lVar12 + 0x10));
          }
          if ((this->AllowedModes & 2) != 0) {
            *(undefined4 *)(pFVar7 + lVar12 + 0x10) = 0;
            if (*(int *)(pFVar7 + lVar12 + 0x14) != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,0,(ForAnyElementType *)(pFVar7 + lVar12 + 8),0,
                         (int *)(pFVar7 + lVar12 + 0x14));
            }
          }
          local_154 = uVar25 + 1;
          local_138 = lVar23 + 0x18;
          FVar24 = local_130;
          cVar27 = local_108;
        } while ((int)local_154 < (this->SortedElements).ArrayNum);
      }
      if ((this->AllowedModes & 2) != 0) {
        DestructItems<FCanvas::FCanvasSortElement,int>
                  ((FCanvasSortElement *)(this->SortedElements).AllocatorInstance.Data,
                   (this->SortedElements).ArrayNum);
        piVar1 = &(this->SortedElements).ArrayMax;
        (this->SortedElements).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,&(this->SortedElements).AllocatorInstance,0,piVar1);
        }
        this_00 = &this->SortedElementLookupMap;
        bVar15 = 1 < *(int *)&(this->SortedElementLookupMap).field_0x48;
        if (!bVar15) {
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          UnhashElements((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                          *)this_00);
        }
        *(undefined4 *)&(this->SortedElementLookupMap).field_0x8 = 0;
        if (*(int *)&(this->SortedElementLookupMap).field_0xc != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,0,(ForAnyElementType *)this_00,0,
                     (int *)&(this->SortedElementLookupMap).field_0xc);
        }
        *(undefined4 *)&(this->SortedElementLookupMap).field_0x30 = 0xffffffff;
        *(undefined4 *)&(this->SortedElementLookupMap).field_0x34 = 0;
        iVar17 = *(int *)&(this->SortedElementLookupMap).field_0x2c;
        *(undefined4 *)&(this->SortedElementLookupMap).field_0x28 = 0;
        if ((iVar17 < 0) || (0x80 < iVar17)) {
          *(undefined4 *)&(this->SortedElementLookupMap).field_0x2c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)
                     &(this->SortedElementLookupMap).field_0x10,0);
        }
        if (bVar15) {
          *(undefined4 *)&(this->SortedElementLookupMap).field_0x48 = 1;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Rehash
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)this_00);
        }
        this->LastElementIndex = -1;
      }
      if (cVar27 != '\0') {
        TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_118);
      }
    }
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar14) {
    FThreadStats::AddMessage(FVar24,CycleScopeEnd);
  }
  return;
}

// Flush_RenderThread @ 14894f810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */

void __thiscall
FCanvas::Flush_RenderThread(FCanvas *this,FRHICommandListImmediate *param_1,bool param_2)

{
  undefined1 auStackY_838 [32];
  FRDGEventName local_808;
  FRDGBuilder local_7e8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_838;
  if ((((this->AllowedModes & 1) != 0) || (param_2)) && ((this->SortedElements).ArrayNum != 0)) {
    local_808.EventFormat = L"";
    local_808.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_808.FormattedEventName.Data.ArrayNum = 0;
    local_808.FormattedEventName.Data.ArrayMax = 0;
    FRDGBuilder::FRDGBuilder(&local_7e8,param_1,&local_808,None,GMaxRHIShaderPlatform);
    Flush_RenderThread(this,&local_7e8,param_2);
    FRDGBuilder::Execute(&local_7e8);
    FRDGBuilder::~FRDGBuilder(&local_7e8);
  }
  return;
}

// GetBatchedElements @ 148955360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FBatchedElements * __thiscall
FCanvas::GetBatchedElements
          (FCanvas *this,EElementType param_1,FBatchedElementParameters *param_2,FTexture *param_3,
          ESimpleElementBlendMode param_4,FDepthFieldGlowInfo *param_5,bool param_6)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  code *pcVar4;
  undefined8 uVar5;
  double dVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_Canvas_GetBatchElementsTime> FVar13;
  FCanvasSortElement *pFVar14;
  FBatchedElements *pFVar15;
  longlong lVar16;
  undefined8 *puVar17;
  FThreadSafeStaticStat<FStat_STAT_Canvas_NumBatchesCreated> FVar18;
  FThreadStats *pFVar19;
  FThreadStatsPool *pFVar20;
  uint uVar21;
  FName FVar22;
  uint uVar23;
  FNameEntryId FVar24;
  undefined1 auStackY_338 [32];
  FColor_u_0 local_2cc;
  undefined8 *local_2c8;
  FName local_2c0;
  uint local_2b8;
  uint uStack_2b4;
  FTexture *local_2b0;
  FName local_2a8;
  FName local_298;
  LARGE_INTEGER local_290;
  FStatMessage local_288;
  FStatMessage local_278;
  FName local_268;
  FName local_260;
  TMatrix<double> local_258;
  FScriptContainerElement *local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  FScriptContainerElement *pFStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  FScriptContainerElement *pFStack_190;
  double local_188;
  FScriptContainerElement *pFStack_180;
  double local_178;
  double dStack_170;
  FScriptContainerElement *local_168;
  double dStack_160;
  FScriptContainerElement *local_158;
  double dStack_150;
  uint local_148;
  undefined4 uStack_144;
  undefined8 uStack_140;
  TMatrix<double> local_138;
  TMatrix<double> local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_338;
  FVar13 = StatPtr_STAT_Canvas_GetBatchElementsTime;
  local_2b0 = param_3;
  if (StatPtr_STAT_Canvas_GetBatchElementsTime ==
      (FThreadSafeStaticStat<FStat_STAT_Canvas_GetBatchElementsTime>)0x0) {
    pFVar12 = ::FName::FName(&local_268,"STAT_Canvas_GetBatchElementsTime");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_Canvas_GetBatchElementsTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Canvas_GetBatchElementsTime,
                        *pFVar12,L"Get Batched Element Time","STATGROUP_Canvas","STATCAT_Advanced",
                        L"Canvas",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar22 = *(FName *)FVar13;
  bVar7 = false;
  bVar9 = false;
  local_2a8.ComparisonIndex.Value = 0;
  local_2a8.Number = 0;
  if ((FVar22.ComparisonIndex.Value.Value == 0) && (FVar22.Number == 0)) {
LAB_1489554d5:
    bVar8 = false;
    FVar22 = local_2a8;
  }
  else {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_2cc.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2cc._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2c0.ComparisonIndex.Value = FVar22.ComparisonIndex.Value.Value;
        local_2c0.Number = FVar22.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2c0,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\Canvas.cpp"
                   ,0x29c);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1489554d5;
    FThreadStats::AddMessage(FVar22,CycleScopeStart);
    bVar8 = true;
  }
  iVar11 = TopDepthSortKey(this);
  pFVar14 = GetSortElement(this,iVar11);
  iVar11 = (this->TransformStack).ArrayNum;
  uVar23 = iVar11 - 1;
  uVar21 = 0;
  if ((int)uVar23 < iVar11) {
    uVar21 = ~uVar23 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar4 = (code *)swi(3);
    pFVar15 = (FBatchedElements *)(*pcVar4)();
    return pFVar15;
  }
  lVar16 = (longlong)(this->TransformStack).ArrayNum;
  pFVar2 = (this->TransformStack).AllocatorInstance.Data;
  local_258.M[0][0] = *(double *)(pFVar2 + lVar16 * 0x90 + -0x90);
  local_258.M[0][1] = *(double *)(pFVar2 + lVar16 * 0x90 + -0x90 + 8);
  local_258.M[0][2] = *(double *)(pFVar2 + lVar16 * 0x90 + -0x80);
  local_258.M[0][3] = *(double *)(pFVar2 + lVar16 * 0x90 + -0x80 + 8);
  local_258.M[1][0] = *(double *)(pFVar2 + lVar16 * 0x90 + -0x70);
  local_258.M[1][1] = *(double *)(pFVar2 + lVar16 * 0x90 + -0x70 + 8);
  local_258.M[1][2] = *(double *)(pFVar2 + lVar16 * 0x90 + -0x60);
  local_258.M[1][3] = *(double *)(pFVar2 + lVar16 * 0x90 + -0x60 + 8);
  local_258.M[2][0] = *(double *)(pFVar2 + lVar16 * 0x90 + -0x50);
  local_258.M[2][1] = *(double *)(pFVar2 + lVar16 * 0x90 + -0x50 + 8);
  local_258.M[2][2] = *(double *)(pFVar2 + lVar16 * 0x90 + -0x40);
  local_258.M[2][3] = *(double *)(pFVar2 + lVar16 * 0x90 + -0x40 + 8);
  local_258.M[3][0] = *(double *)(pFVar2 + lVar16 * 0x90 + -0x30);
  local_258.M[3][1] = *(double *)(pFVar2 + lVar16 * 0x90 + -0x30 + 8);
  local_258.M[3][2] = *(double *)(pFVar2 + lVar16 * 0x90 + -0x20);
  local_258.M[3][3] = *(double *)(pFVar2 + lVar16 * 0x90 + -0x20 + 8);
  local_1d8 = *(FScriptContainerElement **)(pFVar2 + lVar16 * 0x90 + -0x10);
  uStack_1d0 = *(undefined8 *)(pFVar2 + lVar16 * 0x90 + -0x10 + 8);
  if (((!param_6) && (this->bStereoRendering == false)) && (this->DPIScale != __real_3f800000)) {
    local_138.M[0][0] = (double)(__real_3f800000 / this->DPIScale);
    local_138.M[2][0] = 0.0;
    local_138.M[2][1] = 0.0;
    local_138.M[0][1] = 0.0;
    local_138.M[1][0] = 0.0;
    local_138.M[2][3] = 0.0;
    local_138.M[0][2] = 0.0;
    local_138.M[0][3] = 0.0;
    local_138.M[1][2] = 0.0;
    local_138.M[1][3] = 0.0;
    local_138.M[3][0] = 0.0;
    local_138.M[3][1] = 0.0;
    local_138.M[3][2] = ___xmm_3ff00000000000000000000000000000;
    local_138.M[3][3] = _UNK_15061cbc8;
    local_138.M[1][1] = local_138.M[0][0];
    local_138.M[2][2] = local_138.M[0][0];
    VectorMatrixMultiply(&local_b8,&local_138,&local_258);
    local_1c8 = local_b8.M[0][0];
    pFStack_1c0 = (FScriptContainerElement *)local_b8.M[0][1];
    local_1b8 = local_b8.M[0][2];
    dStack_1b0 = local_b8.M[0][3];
    local_1a8 = local_b8.M[1][0];
    dStack_1a0 = local_b8.M[1][1];
    local_198 = local_b8.M[1][2];
    pFStack_190 = (FScriptContainerElement *)local_b8.M[1][3];
    local_188 = local_b8.M[2][0];
    pFStack_180 = (FScriptContainerElement *)local_b8.M[2][1];
    local_178 = local_b8.M[2][2];
    dStack_170 = local_b8.M[2][3];
    local_168 = (FScriptContainerElement *)local_b8.M[3][0];
    dStack_160 = local_b8.M[3][1];
    local_158 = (FScriptContainerElement *)local_b8.M[3][2];
    dStack_150 = local_b8.M[3][3];
    local_148 = FCrc::MemCrc_DEPRECATED(&local_1c8,0x80,0);
    local_258.M[0][0] = local_1c8;
    local_258.M[0][1] = (double)pFStack_1c0;
    local_258.M[1][0] = local_1a8;
    local_258.M[1][1] = dStack_1a0;
    local_258.M[0][2] = local_1b8;
    local_258.M[0][3] = dStack_1b0;
    local_258.M[2][0] = local_188;
    local_258.M[2][1] = (double)pFStack_180;
    local_258.M[1][2] = local_198;
    local_258.M[1][3] = (double)pFStack_190;
    local_258.M[3][0] = (double)local_168;
    local_258.M[3][1] = dStack_160;
    local_1d8 = (FScriptContainerElement *)CONCAT44(uStack_144,local_148);
    local_258.M[2][2] = local_178;
    local_258.M[2][3] = dStack_170;
    uStack_1d0 = uStack_140;
    local_258.M[3][2] = (double)local_158;
    local_258.M[3][3] = dStack_150;
  }
  iVar11 = (pFVar14->RenderBatchArray).ArrayNum;
  if (0 < iVar11) {
    uVar21 = 0;
    if ((int)(iVar11 - 1U) < iVar11) {
      uVar21 = ~(iVar11 - 1U) >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      pFVar15 = (FBatchedElements *)(*pcVar4)();
      return pFVar15;
    }
    puVar17 = (undefined8 *)
              (**(code **)(**(longlong **)
                             ((pFVar14->RenderBatchArray).AllocatorInstance.Data +
                             (longlong)(pFVar14->RenderBatchArray).ArrayNum * 8 + -8) + 0x18))();
    if ((((puVar17 != (undefined8 *)0x0) &&
         (lVar16 = puVar17[1], *(FBatchedElementParameters **)(lVar16 + 0x98) == param_2)) &&
        ((*(FTexture **)(lVar16 + 0xa0) == local_2b0 &&
         ((((*(ESimpleElementBlendMode *)(lVar16 + 0xa8) == param_4 &&
            (*(EElementType *)(lVar16 + 0xac) == param_1)) &&
           (*(int *)(lVar16 + 0x130) == (int)local_1d8)) &&
          (uVar21 = *(uint *)(lVar16 + 0x140) & 1, param_5->bEnableGlow == uVar21)))))) &&
       ((uVar21 == 0 ||
        (((*(float *)(lVar16 + 0x144) == (param_5->GlowColor).field0_0x0._s_0.R &&
          (*(float *)(lVar16 + 0x148) == (param_5->GlowColor).field0_0x0._s_0.G)) &&
         ((((*(float *)(lVar16 + 0x14c) == (param_5->GlowColor).field0_0x0._s_0.B &&
            ((*(float *)(lVar16 + 0x150) == (param_5->GlowColor).field0_0x0._s_0.A &&
             (*(double *)(lVar16 + 0x158) == (param_5->GlowOuterRadius).field0_0x0._s_0.X)))) &&
           (*(double *)(lVar16 + 0x160) == (param_5->GlowOuterRadius).field0_0x0._s_0.Y)) &&
          ((*(double *)(lVar16 + 0x168) == (param_5->GlowInnerRadius).field0_0x0._s_0.X &&
           (*(double *)(lVar16 + 0x170) == (param_5->GlowInnerRadius).field0_0x0._s_0.Y))))))))))
    goto LAB_148955bb0;
  }
  if (FThreadStats::bPrimaryEnable != false) {
    FVar18 = StatPtr_STAT_Canvas_NumBatchesCreated;
    if (StatPtr_STAT_Canvas_NumBatchesCreated ==
        (FThreadSafeStaticStat<FStat_STAT_Canvas_NumBatchesCreated>)0x0) {
      pFVar12 = ::FName::FName(&local_260,"STAT_Canvas_NumBatchesCreated");
      FVar18 = (FThreadSafeStaticStat<FStat_STAT_Canvas_NumBatchesCreated>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Canvas_NumBatchesCreated,
                          *pFVar12,L"Num Batches Created","STATGROUP_Canvas","STATCAT_Advanced",
                          L"Canvas",true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar3 = *(FName *)FVar18;
    FVar24 = FVar3.ComparisonIndex.Value;
    uVar21 = FVar3.Number;
    local_2b8 = FVar24.Value;
    uStack_2b4 = uVar21;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar19 == (FThreadStats *)0x0) {
        pFVar20 = FThreadStatsPool::Get();
        pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
      }
      local_288.NameAndInfo.Number = uVar21 & 0xffffafff | 0xa000;
      local_288.StatData.Pad[0] = '\x01';
      local_288.StatData.Pad[1] = '\0';
      local_288.StatData.Pad[2] = '\0';
      local_288.StatData.Pad[3] = '\0';
      local_288.StatData.Pad[4] = '\0';
      local_288.StatData.Pad[5] = '\0';
      local_288.StatData.Pad[6] = '\0';
      local_288.StatData.Pad[7] = '\0';
      local_298 = FVar3;
      local_288.NameAndInfo.Index.Value = FVar24.Value;
      FThreadStats::AddStatMessage(pFVar19,&local_288);
      FStatsTrace::Add(&local_298,1);
      if (pFVar19->ScopeCount == 0) {
        FThreadStats::Flush(pFVar19,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar19,false,false);
      }
    }
  }
  puVar17 = ::operator_new(0x10);
  if (puVar17 == (undefined8 *)0x0) {
    puVar17 = (undefined8 *)0x0;
  }
  else {
    *puVar17 = &___7FCanvasBatchedElementRenderItem__6B_;
    pFVar15 = ::operator_new(0x180);
    if (pFVar15 == (FBatchedElements *)0x0) {
      puVar17[1] = 0;
    }
    else {
      FBatchedElements::FBatchedElements(pFVar15);
      pFVar15[1].LineVertices.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
      if (param_2 != (FBatchedElementParameters *)0x0) {
        *(int *)&param_2->field_0x8 = *(int *)&param_2->field_0x8 + 1;
      }
      *(FTexture **)&pFVar15[1].LineVertices.ArrayNum = local_2b0;
      *(ESimpleElementBlendMode *)&pFVar15[1].Points.AllocatorInstance.Data = param_4;
      *(EElementType *)((longlong)&pFVar15[1].Points.AllocatorInstance.Data + 4) = param_1;
      *(double *)&pFVar15[1].Points.ArrayNum = local_258.M[0][0];
      pFVar15[1].WireTris.AllocatorInstance.Data = (FScriptContainerElement *)local_258.M[0][1];
      *(double *)&pFVar15[1].WireTris.ArrayNum = local_258.M[0][2];
      pFVar15[1].WireTriVerts._padding_ = (longlong)local_258.M[0][3];
      pFVar15[1].WireTriVerts._padding_ = (longlong)local_258.M[1][0];
      pFVar15[1].WireTriVerts._padding_ = (longlong)local_258.M[1][1];
      *(double *)&pFVar15[1].WireTriVerts.bNeedsCPUAccess = local_258.M[1][2];
      pFVar15[1].ThickLines.AllocatorInstance.Data = (FScriptContainerElement *)local_258.M[1][3];
      *(double *)&pFVar15[1].ThickLines.ArrayNum = local_258.M[2][0];
      pFVar15[1].Sprites.AllocatorInstance.Data = (FScriptContainerElement *)local_258.M[2][1];
      *(double *)&pFVar15[1].Sprites.ArrayNum = local_258.M[2][2];
      *(double *)&pFVar15[1].MaxMeshIndicesAllowed = local_258.M[2][3];
      pFVar15[1].MeshElements.AllocatorInstance.Data = (FScriptContainerElement *)local_258.M[3][0];
      *(double *)&pFVar15[1].MeshElements.ArrayNum = local_258.M[3][1];
      pFVar15[1].MeshVertices.AllocatorInstance.Data = (FScriptContainerElement *)local_258.M[3][2];
      *(double *)&pFVar15[1].MeshVertices.ArrayNum = local_258.M[3][3];
      pFVar15[2].LineVertices.AllocatorInstance.Data = local_1d8;
      pFVar15[2].LineVertices.ArrayNum = (undefined4)uStack_1d0;
      pFVar15[2].LineVertices.ArrayMax = uStack_1d0._4_4_;
      uVar5 = *(undefined8 *)((longlong)&(param_5->GlowColor).field0_0x0 + 4);
      pFVar15[2].Points.AllocatorInstance.Data = *(FScriptContainerElement **)param_5;
      pFVar15[2].Points.ArrayNum = (int)uVar5;
      pFVar15[2].Points.ArrayMax = (int)((ulonglong)uVar5 >> 0x20);
      dVar6 = (param_5->GlowOuterRadius).field0_0x0._s_0.X;
      pFVar15[2].WireTris.AllocatorInstance.Data =
           *(FScriptContainerElement **)((longlong)&(param_5->GlowColor).field0_0x0 + 0xc);
      *(double *)&pFVar15[2].WireTris.ArrayNum = dVar6;
      dVar6 = (param_5->GlowInnerRadius).field0_0x0._s_0.X;
      pFVar15[2].WireTriVerts._padding_ = (longlong)(param_5->GlowOuterRadius).field0_0x0._s_0.Y;
      pFVar15[2].WireTriVerts._padding_ = (longlong)dVar6;
      pFVar15[2].WireTriVerts._padding_ = (longlong)(param_5->GlowInnerRadius).field0_0x0._s_0.Y;
      puVar17[1] = pFVar15;
    }
  }
  pFVar2 = (pFVar14->RenderBatchArray).AllocatorInstance.Data;
  local_2c8 = puVar17;
  if (((pFVar2 <= (FScriptContainerElement *)&local_2c8) &&
      ((FScriptContainerElement *)&local_2c8 <
       pFVar2 + (longlong)(pFVar14->RenderBatchArray).ArrayMax * 8)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar10)) {
    pcVar4 = (code *)swi(3);
    pFVar15 = (FBatchedElements *)(*pcVar4)();
    return pFVar15;
  }
  iVar11 = (pFVar14->RenderBatchArray).ArrayNum;
  piVar1 = &(pFVar14->RenderBatchArray).ArrayMax;
  if (iVar11 == *piVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&(pFVar14->RenderBatchArray).AllocatorInstance,piVar1);
  }
  (pFVar14->RenderBatchArray).ArrayNum = iVar11 + 1;
  *(undefined8 **)((pFVar14->RenderBatchArray).AllocatorInstance.Data + (longlong)iVar11 * 8) =
       local_2c8;
LAB_148955bb0:
  pFVar15 = (FBatchedElements *)puVar17[1];
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar8) && (FVar22 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar19 == (FThreadStats *)0x0) {
      pFVar20 = FThreadStatsPool::Get();
      pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
    }
    if (pFVar19->bWaitForExplicitFlush < pFVar19->ScopeCount) {
      local_278.NameAndInfo.Index = FVar22.ComparisonIndex.Value;
      local_278.NameAndInfo.Number = FVar22.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_290);
      local_278.StatData.Pad[4] = '\0';
      local_278.StatData.Pad[5] = '\0';
      local_278.StatData.Pad[6] = '\0';
      local_278.StatData.Pad[7] = '\0';
      local_278.StatData.Pad[0] = local_290.s.LowPart._0_1_;
      local_278.StatData.Pad[1] = local_290.s.LowPart._1_1_;
      local_278.StatData.Pad[2] = local_290.s.LowPart._2_1_;
      local_278.StatData.Pad[3] = local_290.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar19,&local_278);
      piVar1 = &pFVar19->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar19,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar19,false,false);
      }
    }
  }
  return pFVar15;
}

// GetShaderPlatform @ 14895cdd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

EShaderPlatform __thiscall FCanvas::GetShaderPlatform(FCanvas *this)

{
  return GRHIGlobals.ShaderPlatformForFeatureLevel[(int)this->FeatureLevel];
}

// GetSortElement @ 14895ce50

FCanvasSortElement * __thiscall FCanvas::GetSortElement(FCanvas *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  FCanvasSortElement *pFVar8;
  longlong lVar9;
  uint *puVar10;
  uint *puVar11;
  undefined1 *puVar12;
  uint local_res8 [2];
  uint local_res10 [2];
  TPairInitializer<int_const_&,int_const_&> local_res18;
  uint *local_38;
  uint *local_30;
  
  uVar6 = this->LastElementIndex;
  local_res10[0] = param_1;
  if ((-1 < (int)uVar6) && ((int)uVar6 < (this->SortedElements).ArrayNum)) {
    uVar5 = 0;
    if ((int)uVar6 < (this->SortedElements).ArrayNum) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FCanvasSortElement *)(*pcVar3)();
      return pFVar8;
    }
    pFVar2 = (this->SortedElements).AllocatorInstance.Data;
    if (*(uint *)(pFVar2 + (longlong)(int)uVar6 * 0x18) == local_res10[0]) {
      return (FCanvasSortElement *)(pFVar2 + (longlong)(int)uVar6 * 0x18);
    }
  }
  if (*(int *)&(this->SortedElementLookupMap).field_0x8 !=
      *(int *)&(this->SortedElementLookupMap).field_0x34) {
    puVar12 = *(undefined1 **)&(this->SortedElementLookupMap).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->SortedElementLookupMap).field_0x38;
    }
    uVar6 = *(uint *)(puVar12 +
                     (ulonglong)
                     (*(int *)&(this->SortedElementLookupMap).field_0x48 - 1U & local_res10[0]) * 4)
    ;
    if (uVar6 != 0xffffffff) {
      do {
        puVar11 = (uint *)((longlong)(int)uVar6 * 0x10 +
                          *(longlong *)&(this->SortedElementLookupMap).field_0x0);
        if (*puVar11 == local_res10[0]) {
          puVar10 = puVar11 + 1;
          if (puVar11 == (uint *)0x0) {
            puVar10 = (uint *)0x0;
          }
          if (puVar10 != (uint *)0x0) {
            local_res8[0] = *puVar10;
            goto LAB_14895cfcf;
          }
          break;
        }
        uVar6 = puVar11[2];
      } while (uVar6 != 0xffffffff);
    }
  }
  piVar1 = &(this->SortedElements).ArrayNum;
  iVar7 = *piVar1;
  if (iVar7 == (this->SortedElements).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->SortedElements).AllocatorInstance,
                       &(this->SortedElements).ArrayMax);
  }
  lVar9 = (longlong)iVar7;
  *piVar1 = iVar7 + 1;
  pFVar2 = (this->SortedElements).AllocatorInstance.Data;
  *(uint *)(pFVar2 + lVar9 * 0x18) = local_res10[0];
  *(undefined8 *)(pFVar2 + lVar9 * 0x18 + 8) = 0;
  *(undefined8 *)(pFVar2 + lVar9 * 0x18 + 0x10) = 0;
  local_res8[0] = (this->SortedElements).ArrayNum - 1;
  local_38 = local_res10;
  local_30 = local_res8;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,int_const_&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &this->SortedElementLookupMap,&local_res18,(bool *)&local_38);
LAB_14895cfcf:
  uVar6 = local_res8[0];
  this->LastElementIndex = local_res8[0];
  uVar5 = 0;
  if ((int)local_res8[0] < (this->SortedElements).ArrayNum) {
    uVar5 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FCanvasSortElement *)(*pcVar3)();
    return pFVar8;
  }
  return (FCanvasSortElement *)
         ((this->SortedElements).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x18);
}

// HasBatchesToRender @ 1489607a0

bool __thiscall FCanvas::HasBatchesToRender(FCanvas *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar7 = 0;
  if (0 < (this->SortedElements).ArrayNum) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (this->SortedElements).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar1 = (this->SortedElements).AllocatorInstance.Data;
      uVar6 = 0;
      if (0 < *(int *)(pFVar1 + lVar9 + 0x10)) {
        lVar8 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar6 < *(int *)(pFVar1 + lVar9 + 0x10)) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          if (*(longlong *)(lVar8 + *(longlong *)(pFVar1 + lVar9 + 8)) != 0) {
            return true;
          }
          uVar6 = uVar6 + 1;
          lVar8 = lVar8 + 8;
        } while ((int)uVar6 < *(int *)(pFVar1 + lVar9 + 0x10));
      }
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 0x18;
    } while ((int)uVar7 < (this->SortedElements).ArrayNum);
  }
  return false;
}

// PopTransform @ 14896f370

void __thiscall FCanvas::PopTransform(FCanvas *this)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *_Dst;
  
  if ((this->TransformStack).ArrayNum < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar3 = (this->TransformStack).ArrayNum;
  uVar1 = iVar3 - 1;
  iVar3 = ~uVar1 + iVar3;
  _Dst = (this->TransformStack).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x90;
  if (iVar3 != 0) {
    memmove(_Dst,_Dst + 0x90,(longlong)iVar3 * 0x90);
  }
  piVar2 = &(this->TransformStack).ArrayNum;
  *piVar2 = *piVar2 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x90,0x10,&(this->TransformStack).AllocatorInstance,(this->TransformStack).ArrayNum,
             &(this->TransformStack).ArrayMax);
  return;
}

// PushAbsoluteTransform @ 1489745a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FCanvas::PushAbsoluteTransform(FCanvas *this,TMatrix<double> *param_1)

{
  TArray<FCanvas::FTransformEntry,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  undefined1 auStack_208 [32];
  double *local_1e8;
  FScriptContainerElement *local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  uint local_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_208;
  pTVar1 = &this->TransformStack;
  if ((this->TransformStack).ArrayNum < 1) {
    local_128 = param_1->M[0][0];
    dStack_120 = param_1->M[0][1];
    local_118 = param_1->M[0][2];
    dStack_110 = param_1->M[0][3];
    local_108 = param_1->M[1][0];
    dStack_100 = param_1->M[1][1];
    local_f8 = param_1->M[1][2];
    dStack_f0 = param_1->M[1][3];
    local_e8 = param_1->M[2][0];
    dStack_e0 = param_1->M[2][1];
    local_d8 = param_1->M[2][2];
    dStack_d0 = param_1->M[2][3];
    local_c8 = param_1->M[3][0];
    dStack_c0 = param_1->M[3][1];
    local_b8 = param_1->M[3][2];
    dStack_b0 = param_1->M[3][3];
    local_a8 = FCrc::MemCrc_DEPRECATED(&local_128,0x80,0);
    pFVar6 = (pTVar1->AllocatorInstance).Data;
    if ((pFVar6 <= (FScriptContainerElement *)&local_128) &&
       (lVar7 = (longlong)(this->TransformStack).ArrayMax,
       (FScriptContainerElement *)&local_128 < pFVar6 + lVar7 * 0x90)) {
      local_1d0 = (longlong)(this->TransformStack).ArrayNum;
      local_1c8 = 0x90;
      local_1e8 = &local_128;
      local_1e0 = pFVar6;
      local_1d8 = lVar7;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->TransformStack).ArrayNum;
    piVar2 = &(this->TransformStack).ArrayMax;
    if (iVar5 == *piVar2) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1090,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->TransformStack).ArrayNum = iVar5 + 1;
    lVar7 = (longlong)iVar5;
    pFVar6 = (pTVar1->AllocatorInstance).Data;
    *(double *)(pFVar6 + lVar7 * 0x90) = local_128;
    *(double *)(pFVar6 + lVar7 * 0x90 + 8) = dStack_120;
    *(double *)(pFVar6 + lVar7 * 0x90 + 0x10) = local_118;
    *(double *)(pFVar6 + lVar7 * 0x90 + 0x10 + 8) = dStack_110;
    *(double *)(pFVar6 + lVar7 * 0x90 + 0x20) = local_108;
    *(double *)(pFVar6 + lVar7 * 0x90 + 0x20 + 8) = dStack_100;
    *(double *)(pFVar6 + lVar7 * 0x90 + 0x30) = local_f8;
    *(double *)(pFVar6 + lVar7 * 0x90 + 0x30 + 8) = dStack_f0;
    *(double *)(pFVar6 + lVar7 * 0x90 + 0x40) = local_e8;
    *(double *)(pFVar6 + lVar7 * 0x90 + 0x40 + 8) = dStack_e0;
    *(double *)(pFVar6 + lVar7 * 0x90 + 0x50) = local_d8;
    *(double *)(pFVar6 + lVar7 * 0x90 + 0x50 + 8) = dStack_d0;
    *(double *)(pFVar6 + lVar7 * 0x90 + 0x60) = local_c8;
    *(double *)(pFVar6 + lVar7 * 0x90 + 0x60 + 8) = dStack_c0;
    *(double *)(pFVar6 + lVar7 * 0x90 + 0x70) = local_b8;
    *(double *)(pFVar6 + lVar7 * 0x90 + 0x70 + 8) = dStack_b0;
    local_138 = local_a8;
    uStack_134 = uStack_a4;
    uStack_130 = uStack_a0;
    uStack_12c = uStack_9c;
  }
  else {
    VectorMatrixMultiply(&local_98,param_1,(TMatrix<double> *)(pTVar1->AllocatorInstance).Data);
    local_1b8 = local_98.M[0][0];
    dStack_1b0 = local_98.M[0][1];
    local_1a8 = local_98.M[0][2];
    dStack_1a0 = local_98.M[0][3];
    local_198 = local_98.M[1][0];
    dStack_190 = local_98.M[1][1];
    local_188 = local_98.M[1][2];
    dStack_180 = local_98.M[1][3];
    local_178 = local_98.M[2][0];
    dStack_170 = local_98.M[2][1];
    local_168 = local_98.M[2][2];
    dStack_160 = local_98.M[2][3];
    local_158 = local_98.M[3][0];
    dStack_150 = local_98.M[3][1];
    local_148 = local_98.M[3][2];
    dStack_140 = local_98.M[3][3];
    local_138 = FCrc::MemCrc_DEPRECATED(&local_1b8,0x80,0);
    pFVar6 = (pTVar1->AllocatorInstance).Data;
    if ((pFVar6 <= (FScriptContainerElement *)&local_1b8) &&
       (lVar7 = (longlong)(this->TransformStack).ArrayMax,
       (FScriptContainerElement *)&local_1b8 < pFVar6 + lVar7 * 0x90)) {
      local_1d0 = (longlong)(this->TransformStack).ArrayNum;
      local_1c8 = 0x90;
      local_1e8 = &local_1b8;
      local_1e0 = pFVar6;
      local_1d8 = lVar7;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->TransformStack).ArrayNum;
    piVar2 = &(this->TransformStack).ArrayMax;
    if (iVar5 == *piVar2) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1090,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->TransformStack).ArrayNum = iVar5 + 1;
    lVar7 = (longlong)iVar5;
    pFVar6 = (pTVar1->AllocatorInstance).Data;
    *(double *)(pFVar6 + lVar7 * 0x90) = local_1b8;
    *(double *)(pFVar6 + lVar7 * 0x90 + 8) = dStack_1b0;
    *(double *)(pFVar6 + lVar7 * 0x90 + 0x10) = local_1a8;
    *(double *)(pFVar6 + lVar7 * 0x90 + 0x10 + 8) = dStack_1a0;
    *(double *)(pFVar6 + lVar7 * 0x90 + 0x20) = local_198;
    *(double *)(pFVar6 + lVar7 * 0x90 + 0x20 + 8) = dStack_190;
    *(double *)(pFVar6 + lVar7 * 0x90 + 0x30) = local_188;
    *(double *)(pFVar6 + lVar7 * 0x90 + 0x30 + 8) = dStack_180;
    *(double *)(pFVar6 + lVar7 * 0x90 + 0x40) = local_178;
    *(double *)(pFVar6 + lVar7 * 0x90 + 0x40 + 8) = dStack_170;
    *(double *)(pFVar6 + lVar7 * 0x90 + 0x50) = local_168;
    *(double *)(pFVar6 + lVar7 * 0x90 + 0x50 + 8) = dStack_160;
    *(double *)(pFVar6 + lVar7 * 0x90 + 0x60) = local_158;
    *(double *)(pFVar6 + lVar7 * 0x90 + 0x60 + 8) = dStack_150;
    *(double *)(pFVar6 + lVar7 * 0x90 + 0x70) = local_148;
    *(double *)(pFVar6 + lVar7 * 0x90 + 0x70 + 8) = dStack_140;
  }
  pFVar6 = pFVar6 + lVar7 * 0x90 + 0x80;
  *(uint *)pFVar6 = local_138;
  *(uint *)(pFVar6 + 4) = uStack_134;
  *(uint *)(pFVar6 + 8) = uStack_130;
  *(uint *)(pFVar6 + 0xc) = uStack_12c;
  return;
}

// PushRelativeTransform @ 1489748b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FCanvas::PushRelativeTransform(FCanvas *this,TMatrix<double> *param_1)

{
  TArray<FCanvas::FTransformEntry,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_188 [32];
  double *local_168;
  FScriptContainerElement *local_160;
  longlong local_158;
  longlong local_150;
  undefined8 local_148;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  uint local_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_188;
  pTVar1 = &this->TransformStack;
  iVar7 = (this->TransformStack).ArrayNum;
  uVar9 = iVar7 - 1;
  uVar6 = 0;
  if ((int)uVar9 < iVar7) {
    uVar6 = ~uVar9 >> 0x1f;
  }
  if (uVar6 == 0) {
    local_168 = (double *)(longlong)(int)uVar9;
    local_160 = (FScriptContainerElement *)(longlong)iVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  VectorMatrixMultiply
            (&local_a8,param_1,
             (TMatrix<double> *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x90));
  local_138 = local_a8.M[0][0];
  dStack_130 = local_a8.M[0][1];
  local_128 = local_a8.M[0][2];
  dStack_120 = local_a8.M[0][3];
  local_118 = local_a8.M[1][0];
  dStack_110 = local_a8.M[1][1];
  local_108 = local_a8.M[1][2];
  dStack_100 = local_a8.M[1][3];
  local_f8 = local_a8.M[2][0];
  dStack_f0 = local_a8.M[2][1];
  local_e8 = local_a8.M[2][2];
  dStack_e0 = local_a8.M[2][3];
  local_d8 = local_a8.M[3][0];
  dStack_d0 = local_a8.M[3][1];
  local_c8 = local_a8.M[3][2];
  dStack_c0 = local_a8.M[3][3];
  local_b8 = FCrc::MemCrc_DEPRECATED(&local_138,0x80,0);
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_138) &&
     (lVar8 = (longlong)(this->TransformStack).ArrayMax,
     (FScriptContainerElement *)&local_138 < pFVar3 + lVar8 * 0x90)) {
    local_150 = (longlong)(this->TransformStack).ArrayNum;
    local_148 = 0x90;
    local_168 = &local_138;
    local_160 = pFVar3;
    local_158 = lVar8;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->TransformStack).ArrayNum;
  piVar2 = &(this->TransformStack).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1090,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->TransformStack).ArrayNum = iVar7 + 1;
  lVar8 = (longlong)iVar7;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  *(double *)(pFVar3 + lVar8 * 0x90) = local_138;
  *(double *)(pFVar3 + lVar8 * 0x90 + 8) = dStack_130;
  *(double *)(pFVar3 + lVar8 * 0x90 + 0x10) = local_128;
  *(double *)(pFVar3 + lVar8 * 0x90 + 0x10 + 8) = dStack_120;
  *(double *)(pFVar3 + lVar8 * 0x90 + 0x20) = local_118;
  *(double *)(pFVar3 + lVar8 * 0x90 + 0x20 + 8) = dStack_110;
  *(double *)(pFVar3 + lVar8 * 0x90 + 0x30) = local_108;
  *(double *)(pFVar3 + lVar8 * 0x90 + 0x30 + 8) = dStack_100;
  *(double *)(pFVar3 + lVar8 * 0x90 + 0x40) = local_f8;
  *(double *)(pFVar3 + lVar8 * 0x90 + 0x40 + 8) = dStack_f0;
  *(double *)(pFVar3 + lVar8 * 0x90 + 0x50) = local_e8;
  *(double *)(pFVar3 + lVar8 * 0x90 + 0x50 + 8) = dStack_e0;
  *(double *)(pFVar3 + lVar8 * 0x90 + 0x60) = local_d8;
  *(double *)(pFVar3 + lVar8 * 0x90 + 0x60 + 8) = dStack_d0;
  *(double *)(pFVar3 + lVar8 * 0x90 + 0x70) = local_c8;
  *(double *)(pFVar3 + lVar8 * 0x90 + 0x70 + 8) = dStack_c0;
  *(ulonglong *)(pFVar3 + lVar8 * 0x90 + 0x80) = CONCAT44(uStack_b4,local_b8);
  *(undefined8 *)(pFVar3 + lVar8 * 0x90 + 0x80 + 8) = uStack_b0;
  return;
}

// SetBaseTransform @ 14897ddb0

void __thiscall FCanvas::SetBaseTransform(FCanvas *this,TMatrix<double> *param_1)

{
  TArray<FCanvas::FTransformEntry,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  double dVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  pTVar1 = &this->TransformStack;
  iVar5 = (this->TransformStack).ArrayNum;
  if (0 < iVar5) {
    pFVar6 = (pTVar1->AllocatorInstance).Data;
    dVar3 = param_1->M[0][1];
    *(double *)pFVar6 = param_1->M[0][0];
    *(double *)(pFVar6 + 8) = dVar3;
    dVar3 = param_1->M[0][3];
    *(double *)(pFVar6 + 0x10) = param_1->M[0][2];
    *(double *)(pFVar6 + 0x18) = dVar3;
    dVar3 = param_1->M[1][1];
    *(double *)(pFVar6 + 0x20) = param_1->M[1][0];
    *(double *)(pFVar6 + 0x28) = dVar3;
    dVar3 = param_1->M[1][3];
    *(double *)(pFVar6 + 0x30) = param_1->M[1][2];
    *(double *)(pFVar6 + 0x38) = dVar3;
    dVar3 = param_1->M[2][1];
    *(double *)(pFVar6 + 0x40) = param_1->M[2][0];
    *(double *)(pFVar6 + 0x48) = dVar3;
    dVar3 = param_1->M[2][3];
    *(double *)(pFVar6 + 0x50) = param_1->M[2][2];
    *(double *)(pFVar6 + 0x58) = dVar3;
    dVar3 = param_1->M[3][1];
    *(double *)(pFVar6 + 0x60) = param_1->M[3][0];
    *(double *)(pFVar6 + 0x68) = dVar3;
    dVar3 = param_1->M[3][3];
    *(double *)(pFVar6 + 0x70) = param_1->M[3][2];
    *(double *)(pFVar6 + 0x78) = dVar3;
    uVar4 = FCrc::MemCrc_DEPRECATED(pFVar6,0x80,0);
    *(uint *)(pFVar6 + 0x80) = uVar4;
    return;
  }
  piVar2 = &(this->TransformStack).ArrayMax;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1090,&pTVar1->AllocatorInstance,piVar2);
    (this->TransformStack).ArrayNum = iVar5;
  }
  (this->TransformStack).ArrayNum = iVar5 + 1;
  dVar3 = param_1->M[0][1];
  pFVar6 = (pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x90;
  *(double *)pFVar6 = param_1->M[0][0];
  *(double *)(pFVar6 + 8) = dVar3;
  dVar3 = param_1->M[0][3];
  *(double *)(pFVar6 + 0x10) = param_1->M[0][2];
  *(double *)(pFVar6 + 0x18) = dVar3;
  dVar3 = param_1->M[1][1];
  *(double *)(pFVar6 + 0x20) = param_1->M[1][0];
  *(double *)(pFVar6 + 0x28) = dVar3;
  dVar3 = param_1->M[1][3];
  *(double *)(pFVar6 + 0x30) = param_1->M[1][2];
  *(double *)(pFVar6 + 0x38) = dVar3;
  dVar3 = param_1->M[2][1];
  *(double *)(pFVar6 + 0x40) = param_1->M[2][0];
  *(double *)(pFVar6 + 0x48) = dVar3;
  dVar3 = param_1->M[2][3];
  *(double *)(pFVar6 + 0x50) = param_1->M[2][2];
  *(double *)(pFVar6 + 0x58) = dVar3;
  dVar3 = param_1->M[3][1];
  *(double *)(pFVar6 + 0x60) = param_1->M[3][0];
  *(double *)(pFVar6 + 0x68) = dVar3;
  dVar3 = param_1->M[3][3];
  *(double *)(pFVar6 + 0x70) = param_1->M[3][2];
  *(double *)(pFVar6 + 0x78) = dVar3;
  uVar4 = FCrc::MemCrc_DEPRECATED(pFVar6,0x80,0);
  *(uint *)(pFVar6 + 0x80) = uVar4;
  return;
}

// SetHitProxy @ 14897f070

void __thiscall FCanvas::SetHitProxy(FCanvas *this,HHitProxy *param_1)

{
  longlong *plVar1;
  HHitProxy *pHVar2;
  FHitProxyConsumer *pFVar3;
  
  pHVar2 = (this->CurrentHitProxy).Reference;
  if (pHVar2 != param_1) {
    (this->CurrentHitProxy).Reference = param_1;
    if (param_1 != (HHitProxy *)0x0) {
      *(int *)&param_1->_padding_ = (int)param_1->_padding_ + 1;
    }
    if (pHVar2 != (HHitProxy *)0x0) {
      plVar1 = &pHVar2->_padding_;
      *(int *)plVar1 = (int)*plVar1 + -1;
      if ((int)*plVar1 == 0) {
        (**(code **)pHVar2->_padding_)(pHVar2,1);
      }
    }
  }
  pFVar3 = this->HitProxyConsumer;
  if ((pFVar3 != (FHitProxyConsumer *)0x0) && (param_1 != (HHitProxy *)0x0)) {
    (**(code **)*pFVar3)(pFVar3,param_1);
  }
  return;
}

// SetRenderTargetRect @ 14897f8b0

void __thiscall FCanvas::SetRenderTargetRect(FCanvas *this,TIntRect<int> *param_1)

{
  (this->ViewRect).field0_0x0._s_0.Min.field0_0x0 = (param_1->field0_0x0)._s_0.Min.field0_0x0;
  (this->ViewRect).field0_0x0._s_0.Max.field0_0x0 = (param_1->field0_0x0)._s_0.Max.field0_0x0;
  return;
}

// SetRenderTargetScissorRect @ 14897f8d0

void __thiscall FCanvas::SetRenderTargetScissorRect(FCanvas *this,TIntRect<int> *param_1)

{
  (this->ScissorRect).field0_0x0._s_0.Min.field0_0x0 = (param_1->field0_0x0)._s_0.Min.field0_0x0;
  (this->ScissorRect).field0_0x0._s_0.Max.field0_0x0 = (param_1->field0_0x0)._s_0.Max.field0_0x0;
  return;
}

// SetRenderTarget_GameThread @ 14897f8f0

void __thiscall FCanvas::SetRenderTarget_GameThread(FCanvas *this,FRenderTarget *param_1)

{
  if (this->RenderTarget != param_1) {
    if (this->RenderTarget != (FRenderTarget *)0x0) {
      Flush_GameThread(this,false);
    }
    this->RenderTarget = param_1;
  }
  return;
}

// TopDepthSortKey @ 1489847e0

int __thiscall FCanvas::TopDepthSortKey(FCanvas *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = (this->DepthSortKeyStack).ArrayNum;
  uVar5 = iVar4 - 1;
  uVar3 = 0;
  if ((int)uVar5 < iVar4) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return *(int *)((this->DepthSortKeyStack).AllocatorInstance.Data +
                 (longlong)(this->DepthSortKeyStack).ArrayNum * 4 + -4);
}

// WrapString @ 14898c460

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCanvas::WrapString(FCanvas *this,FTextSizingParameters *param_1,float param_2,
                   TStringView<wchar_t> *param_3,
                   TArray<FWrappedStringElement,TSizedDefaultAllocator<32>_> *param_4,
                   TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> *param_5)

{
  TSharedPtr<FCanvasWordWrapper,1> *this_00;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  FCanvasWordWrapper *pFVar8;
  TSharedRef<IBreakIterator,1> *pTVar9;
  TRawPtrProxy<FCanvasWordWrapper> local_res8;
  TSharedRef<IBreakIterator,1> local_38;
  TSharedRef<IBreakIterator,1> local_28;
  TStringView<wchar_t> local_18;
  
  this_00 = &this->WordWrapper;
  if ((this->WordWrapper).Object == (FCanvasWordWrapper *)0x0) {
    pFVar8 = ::operator_new(0x20);
    if (pFVar8 == (FCanvasWordWrapper *)0x0) {
      pFVar8 = (FCanvasWordWrapper *)0x0;
    }
    else {
      pTVar9 = FBreakIterator::CreateCharacterBoundaryIterator(&local_38);
      (pFVar8->GraphemeBreakIterator).Object = pTVar9->Object;
      pTVar1 = (pTVar9->SharedReferenceCount).ReferenceController;
      (pFVar8->GraphemeBreakIterator).SharedReferenceCount.ReferenceController = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      pTVar9 = FBreakIterator::CreateLineBreakIterator(&local_28);
      (pFVar8->LineBreakIterator).Object = pTVar9->Object;
      pTVar1 = (pTVar9->SharedReferenceCount).ReferenceController;
      (pFVar8->LineBreakIterator).SharedReferenceCount.ReferenceController = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
    }
    local_res8.Object = pFVar8;
    TSharedPtr<FCanvasWordWrapper,1>::operator=<FCanvasWordWrapper>(this_00,&local_res8);
  }
  uVar3 = *(undefined4 *)&param_3->DataPtr;
  uVar4 = *(undefined4 *)((longlong)&param_3->DataPtr + 4);
  iVar5 = param_3->Size;
  uVar6 = *(undefined4 *)&param_3->field_0xc;
  if ((this_00->Object == (FCanvasWordWrapper *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_1->DrawFont).field0_0x0.DebugPtr == (UFont *)0x0) {
    if (2 < (byte)LogCanvas._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCanvas);
    }
    return;
  }
  local_18.DataPtr._0_4_ = uVar3;
  local_18.DataPtr._4_4_ = uVar4;
  local_18.Size = iVar5;
  local_18._12_4_ = uVar6;
  FCanvasWordWrapper::Execute(this_00->Object,&local_18,param_1,param_4,param_5);
  return;
}

// operator() @ 150533f40

bool __thiscall `FCanvas::Flush_GameThread'::__l15::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3367566608481385612>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3367566608481385612>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

