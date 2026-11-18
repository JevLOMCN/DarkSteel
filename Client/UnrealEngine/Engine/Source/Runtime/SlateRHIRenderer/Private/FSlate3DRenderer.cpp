// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 9

// FSlate3DRenderer @ 145fe5a70

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FSlate3DRenderer * __thiscall
FSlate3DRenderer::FSlate3DRenderer
          (FSlate3DRenderer *this,TSharedRef<FSlateFontServices,1> *param_1,
          TSharedRef<FSlateRHIResourceManager,1> *param_2,bool param_3)

{
  TSharedPtr<FSlateRHIRenderingPolicy,1> *this_00;
  TUniquePtr<FSlateElementBatcher,TDefaultDelete<FSlateElementBatcher>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FSlateRHIRenderingPolicy *pFVar5;
  FSlate3DRenderer *pFVar6;
  FSlateElementBatcher *pFVar7;
  FSlateElementBatcher *this_01;
  TRawPtrProxy<FSlateRHIRenderingPolicy> local_res8;
  undefined8 local_58;
  TSharedRef<FSlateRHIResourceManager,1> local_50;
  TSharedRef<FSlateFontServices,1> local_40;
  TSharedRef<FSlateRenderingPolicy,1> local_30;
  
  this_01 = (FSlateElementBatcher *)0x0;
  this->_padding_ = (longlong)&_vftable__for__ISlate3DRenderer__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__FDeferredCleanupInterface__;
  this->_padding_ = 0;
  FSlateDrawBuffer::FSlateDrawBuffer(this->DrawBuffers);
  FSlateDrawBuffer::FSlateDrawBuffer(this->DrawBuffers + 1);
  FSlateDrawBuffer::FSlateDrawBuffer(this->DrawBuffers + 2);
  FSlateDrawBuffer::FSlateDrawBuffer(this->DrawBuffers + 3);
  (this->SlateFontServices).Object = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SlateFontServices).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->ResourceManager).Object = param_2->Object;
  pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
  (this->ResourceManager).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = &this->RenderTargetPolicy;
  (this->ElementBatcher).Ptr = (FSlateElementBatcher *)0x0;
  this_00->Object = (FSlateRHIRenderingPolicy *)0x0;
  (this->RenderTargetPolicy).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bRenderTargetWasCleared = false;
  this->bAllowColorDeficiencyCorrection = true;
  this->bGammaCorrection = param_3;
  pFVar5 = ::operator_new(0x30);
  local_res8.Object = (FSlateRHIRenderingPolicy *)this_01;
  if (pFVar5 != (FSlateRHIRenderingPolicy *)0x0) {
    local_50.Object = (this->ResourceManager).Object;
    local_50.SharedReferenceCount.ReferenceController =
         (this->ResourceManager).SharedReferenceCount.ReferenceController;
    if (local_50.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_50.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_50.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_40.Object = (this->SlateFontServices).Object;
    local_40.SharedReferenceCount.ReferenceController =
         (this->SlateFontServices).SharedReferenceCount.ReferenceController;
    if (local_40.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_40.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_40.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_res8.Object =
         FSlateRHIRenderingPolicy::FSlateRHIRenderingPolicy(pFVar5,&local_40,&local_50);
  }
  TSharedPtr<FSlateRHIRenderingPolicy,1>::operator=<FSlateRHIRenderingPolicy>(this_00,&local_res8);
  if ((this_00->Object == (FSlateRHIRenderingPolicy *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FSlate3DRenderer *)(*pcVar3)();
    return pFVar6;
  }
  pFVar5 = this_00->Object;
  pTVar2 = (this->RenderTargetPolicy).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar5 == (FSlateRHIRenderingPolicy *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FSlate3DRenderer *)(*pcVar3)();
    return pFVar6;
  }
  pFVar7 = ::operator_new(0x58);
  if (pFVar7 != (FSlateElementBatcher *)0x0) {
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_30.Object = (FSlateRenderingPolicy *)pFVar5;
    local_30.SharedReferenceCount.ReferenceController = pTVar2;
    this_01 = FSlateElementBatcher::FSlateElementBatcher(pFVar7,&local_30);
  }
  pTVar1 = &this->ElementBatcher;
  if (pTVar1 == (TUniquePtr<FSlateElementBatcher,TDefaultDelete<FSlateElementBatcher>_> *)&local_58)
  {
    if (this_01 == (FSlateElementBatcher *)0x0) goto LAB_145fe5ca0;
    FSlateElementBatcher::~FSlateElementBatcher(this_01);
  }
  else {
    pFVar7 = pTVar1->Ptr;
    pTVar1->Ptr = this_01;
    if (pFVar7 == (FSlateElementBatcher *)0x0) goto LAB_145fe5ca0;
    FSlateElementBatcher::~FSlateElementBatcher(pFVar7);
    this_01 = pFVar7;
  }
  ::operator_delete(this_01,0x58);
LAB_145fe5ca0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// AcquireDrawBuffer @ 145fef210

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FSlateDrawBuffer * __thiscall FSlate3DRenderer::AcquireDrawBuffer(FSlate3DRenderer *this)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  FSlateDrawBuffer *this_00;
  
  bVar1 = this->FreeBufferIndex + 1 & 3;
  this->FreeBufferIndex = bVar1;
  this_00 = this->DrawBuffers + bVar1;
  bVar2 = FSlateDrawBuffer::Lock(this_00);
  while (!bVar2) {
    FlushRenderingCommands();
    if (4 < (byte)LogSlate._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
    uVar3 = (this->FreeBufferIndex + 1) % 3;
    this->FreeBufferIndex = (uchar)uVar3;
    this_00 = this->DrawBuffers + uVar3;
    bVar2 = FSlateDrawBuffer::Lock(this_00);
  }
  FSlateDrawBuffer::ClearBuffer(this_00);
  return this_00;
}

// Cleanup @ 145ff7180

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlate3DRenderer::Cleanup(FSlate3DRenderer *this)

{
  FDeferredCleanupInterface *pFVar1;
  
  pFVar1 = (FDeferredCleanupInterface *)&this->_padding_;
  if (this == (FSlate3DRenderer *)0x0) {
    pFVar1 = (FDeferredCleanupInterface *)0x0;
  }
  BeginCleanup(pFVar1);
  return;
}

// DrawWindowToTarget_RenderThread @ 146000390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSlate3DRenderer::DrawWindowToTarget_RenderThread
          (FSlate3DRenderer *this,FRDGBuilder *param_1,FRenderThreadUpdateContext *param_2)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  FSlateDrawBuffer *pFVar5;
  FRHITexture *pFVar6;
  FSlateWindowElementList *pFVar7;
  code *pcVar8;
  FRDGBuffer *pFVar9;
  FRDGBuffer *pFVar10;
  bool bVar11;
  bool bVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ERenderTargetLoadAction EVar25;
  FSlateWindowElementList *pFVar26;
  FSlate3DRenderer *pFVar27;
  bool bVar28;
  bool bVar29;
  int iVar30;
  uint uVar31;
  FName *pFVar32;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FSlate3DRenderer::DrawWindowToTarget_RenderThread(FRDGBuilder_&,FRenderThreadUpdateContext_const_&)_::_2_::FStat_Stat_Slate_WidgetRendererRenderThread>
  FVar33;
  FRDGScope *this_00;
  undefined8 *puVar34;
  TRefCountPtr<IPooledRenderTarget> TVar35;
  FSlateElementsBuffers *pFVar36;
  longlong lVar37;
  int iVar38;
  FName FVar39;
  uint uVar40;
  FScriptContainerElement *pFVar41;
  FScriptContainerElement *pFVar42;
  undefined1 auStackY_6e8 [32];
  ERenderTargetLoadAction local_688;
  undefined1 local_686 [6];
  ForElementType<FSlateElementsBuffers> local_680;
  undefined8 local_678;
  FSlateWindowElementList *local_670;
  FName local_668;
  FRDGTexture *local_660;
  FColor_u_0 local_658 [2];
  FRenderThreadUpdateContext *local_650;
  FName local_648;
  undefined4 local_640;
  undefined4 uStack_63c;
  FRDGTexture *local_638;
  FSlate3DRenderer *local_630;
  FName local_628;
  undefined1 local_618 [24];
  FRDGScope *local_600;
  char local_5f8;
  ForElementType<EPixelFormat> local_5e8;
  int iStack_5e0;
  int iStack_5dc;
  undefined1 local_5d8 [192];
  FName local_518;
  FName local_510;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20>_const_*,std::tuple<>_> local_508;
  TArrayView<FSlateRenderBatch_const_,int> local_4f8;
  undefined4 uStack_4dc;
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  FSlateElementsBuffers local_4c8;
  undefined1 local_4b8 [24];
  float local_4a0;
  int local_49c;
  undefined4 local_498;
  FSlateWindowElementList *local_494;
  undefined4 local_48c;
  undefined4 local_488;
  undefined2 local_484;
  void *local_478;
  undefined4 local_470;
  undefined4 local_46c;
  TMatrix<double> local_468;
  TMatrix<double> local_3e8;
  TMatrix<double> local_368;
  TMatrix<double> local_2e8;
  TMatrix<double> local_268;
  TMatrix<double> local_1e8;
  TMatrix<double> local_168;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_6e8;
  lVar37 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_650 = param_2;
  local_630 = this;
  if ((*(int *)(lVar37 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_Stat_Slate_WidgetRendererRenderThread ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FSlate3DRenderer::DrawWindowToTarget_RenderThread(FRDGBuilder_&,FRenderThreadUpdateContext_const_&)_::_2_::FStat_Stat_Slate_WidgetRendererRenderThread>
         )0x0) {
      pFVar32 = ::FName::FName(&local_518,"Stat_Slate_WidgetRendererRenderThread");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_Stat_Slate_WidgetRendererRenderThread,
                 *pFVar32,L"Stat_Slate_WidgetRendererRenderThread","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar33 = StatPtr_Stat_Slate_WidgetRendererRenderThread;
  if (StatPtr_Stat_Slate_WidgetRendererRenderThread ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FSlate3DRenderer::DrawWindowToTarget_RenderThread(FRDGBuilder_&,FRenderThreadUpdateContext_const_&)_::_2_::FStat_Stat_Slate_WidgetRendererRenderThread>
       )0x0) {
    pFVar32 = ::FName::FName(&local_510,"Stat_Slate_WidgetRendererRenderThread");
    FVar33 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FSlate3DRenderer::DrawWindowToTarget_RenderThread(FRDGBuilder_&,FRenderThreadUpdateContext_const_&)_::_2_::FStat_Stat_Slate_WidgetRendererRenderThread>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_Stat_Slate_WidgetRendererRenderThread,*pFVar32,
                          L"Stat_Slate_WidgetRendererRenderThread","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar39 = *(FName *)FVar33;
  bVar11 = false;
  bVar12 = false;
  local_628.ComparisonIndex.Value = 0;
  local_628.Number = 0;
  bVar28 = false;
  bVar29 = false;
  if ((FVar39.ComparisonIndex.Value.Value != 0) || (FVar39.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_658[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_658[0]._s_0,(char *)*(FName *)((longlong)FVar33 + 0x10));
      bVar11 = false;
      bVar12 = true;
      bVar28 = false;
      bVar29 = true;
      if (-1 < CpuChannel->Enabled) {
        local_648.ComparisonIndex.Value = FVar39.ComparisonIndex.Value.Value;
        local_648.Number = FVar39.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_648,(wchar_t *)*(FName *)((longlong)FVar33 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\Slate3DRenderer.cpp"
                   ,0x75);
        bVar11 = true;
        bVar12 = true;
        bVar28 = true;
        bVar29 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_668 = FVar39;
      FThreadStats::AddMessage(FVar39,CycleScopeStart);
      bVar28 = true;
      goto LAB_146000530;
    }
  }
  bVar12 = bVar29;
  bVar11 = bVar28;
  bVar28 = false;
  local_668 = local_628;
LAB_146000530:
  cVar4 = *(char *)((longlong)&param_1->_padding_ + 6);
  local_5f8 = '\0';
  if ((cVar4 != '\0') && ((cVar4 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if ((*(int *)(lVar37 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Desc._padding_._0_4_ = 0x76;
      local_4d8 = 0x54bee060;
      uStack_4d4 = 1;
      ::Desc._padding_._0_4_ = 0x54bee060;
      ::Desc._padding_._4_4_ = uStack_4dc;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_ = (longlong)u_SlateRenderToTa;
      ::Desc._padding_ = (longlong)u_SlateRenderToTa;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FSlate3DRenderer::DrawWindowToTarget_RenderThread'::__l7::Desc::operator()<>'::__l3
             ::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_508._Myfirst._Val = &::Desc;
    local_618._16_8_ = param_1;
    this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)this_00;
    local_600 = this_00;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20>_const_*,std::tuple<>_>_>
              (&(this_00->Impl).Impl,(FRDGScopeState *)param_1,&local_508);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
    }
    local_5f8 = '\x01';
  }
  if ((param_2->RenderTarget == (FRenderTarget *)0x0) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context.RenderTarget",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\Slate3DRenderer.cpp"
                          ,0x78,L""), bVar29)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar5 = param_2->WindowDrawBuffer;
  puVar34 = (undefined8 *)(**(code **)(param_2->RenderTarget->_padding_ + 0x10))();
  pFVar6 = (FRHITexture *)*puVar34;
  local_660 = FRDGBuilder::FindExternalTexture(param_1,pFVar6);
  if (local_660 == (FRDGTexture *)0x0) {
    TVar35 = CreateRenderTarget((FRHITexture *)local_618,(wchar_t *)pFVar6);
    local_660 = FRDGBuilder::RegisterExternalTexture
                          (param_1,(TRefCountPtr<IPooledRenderTarget> *)TVar35.Reference,None);
    if ((longlong *)local_618._0_8_ != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_618._0_8_ + 0x38))();
    }
  }
  local_670 = *(FSlateWindowElementList **)&(local_660->Desc).field_0x24;
  local_678._0_4_ = 0;
  uVar40 = (pFVar5->WindowElementLists).ArrayNum;
  local_638 = (FRDGTexture *)0x0;
  local_688 = 0;
  local_680.Data = (FSlateElementsBuffers *)0x0;
  local_678 = 0;
  local_618._8_8_ = local_670;
  if ((int)uVar40 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar40);
  }
  if (0 < (int)uVar40) {
    UE::Core::Private::ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FSlateElementsBuffers>_>
              (0x10,8,uVar40,&local_680,0,(int *)((longlong)&local_678 + 4));
  }
  iVar38 = (pFVar5->WindowElementLists).ArrayNum;
  pFVar42 = (pFVar5->WindowElementLists).AllocatorInstance.Data;
  pFVar41 = pFVar42 + (longlong)iVar38 * 0x10;
  iVar30 = (int)local_678;
  while( true ) {
    if ((pFVar5->WindowElementLists).ArrayNum != iVar38) {
      local_686[0] = 0;
      `TCheckedPointerIterator<TSharedRef<FSlateWindowElementList,1>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_686);
    }
    FVar39 = local_668;
    pFVar7 = local_670;
    if (pFVar42 == pFVar41) break;
    pFVar7 = *(FSlateWindowElementList **)pFVar42;
    FSlateWindowElementList::FinishMergeRenderBatches(pFVar7);
    pFVar36 = BuildSlateElementsBuffers(&local_4c8,param_1,&pFVar7->BatchData);
    pFVar9 = pFVar36->VertexBuffer;
    pFVar10 = pFVar36->IndexBuffer;
    if (iVar30 == local_678._4_4_) {
      iVar30 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FSlateElementsBuffers>_>
                         (0x810,&local_680,(int *)((longlong)&local_678 + 4));
    }
    lVar37 = (longlong)iVar30;
    iVar30 = iVar30 + 1;
    local_678 = CONCAT44(local_678._4_4_,iVar30);
    local_680.Data[lVar37].VertexBuffer = pFVar9;
    local_680.Data[lVar37].IndexBuffer = pFVar10;
    bVar29 = FSlateBatchData::IsStencilClippingRequired(&pFVar7->BatchData);
    local_688 = local_688 | bVar29;
    pFVar42 = pFVar42 + 0x10;
  }
  if (local_688 != 0) {
    local_46c = 1;
    uStack_63c = (undefined4)((ulonglong)local_670 >> 0x20);
    local_4a0 = FClearValueBinding::DepthZero.Value.Color[3];
    local_4b8._0_8_ = 0x200004;
    local_49c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    local_498 = 0;
    local_494 = local_670;
    local_478 = (void *)0x0;
    local_470 = 0;
    local_4b8._8_8_ = FClearValueBinding::DepthZero._0_8_;
    local_4b8._16_8_ = FClearValueBinding::DepthZero.Value._4_8_;
    local_48c = 0x10001;
    local_488 = 0xb000101;
    local_484 = 0xff00;
    local_640 = (int)local_670;
    local_638 = FRDGBuilder::CreateTexture
                          (param_1,(FRDGTextureDesc *)local_4b8,L"SlateStencilTexture",None);
    if (local_478 != (void *)0x0) {
      FMemory::Free(local_478);
    }
  }
  dVar24 = _UNK_15076b868;
  dVar23 = ___xmm_3ff0000000000000bff0000000000000;
  dVar22 = _UNK_15076b7e8;
  dVar21 = ___xmm_3ff00000000000003fe0000000000000;
  dVar20 = _UNK_15076ad48;
  dVar19 = ___xmm_0000000000000000bf747ae147ae147b;
  dVar18 = _UNK_150689518;
  dVar17 = ___xmm_00000000000000003ff0000000000000;
  fVar16 = __real_c0000000;
  fVar15 = __real_40000000;
  dVar14 = _UNK_15061cbc8;
  dVar13 = ___xmm_3ff00000000000000000000000000000;
  iVar38 = (pFVar5->WindowElementLists).ArrayNum;
  uVar40 = 0;
  local_688 = (local_650->bClearTarget != false) + ELoad;
  if (0 < iVar38) {
    lVar37 = 0;
    do {
      EVar25 = local_688;
      uVar31 = 0;
      if ((int)uVar40 < iVar38) {
        uVar31 = ~uVar40 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_670 = *(FSlateWindowElementList **)
                   ((pFVar5->WindowElementLists).AllocatorInstance.Data + lVar37);
      FSlateWindowElementList::FinishMergeRenderBatches(local_670);
      if ((local_670->BatchData).RenderBatches.ArrayNum != 0) {
        local_468.M[0][1] = 0.0;
        local_3e8.M[0][2] = 0.0;
        local_3e8.M[0][3] = 0.0;
        local_3e8.M[1][2] = 0.0;
        local_3e8.M[1][3] = 0.0;
        local_468.M[1][0] = 0.0;
        local_3e8.M[2][0] = 0.0;
        local_3e8.M[2][1] = 0.0;
        local_3e8.M[0][0] = dVar17;
        local_3e8.M[0][1] = dVar18;
        fVar2 = *(float *)&local_650->WindowDrawBuffer->ViewOffset;
        fVar3 = *(float *)&(local_650->WindowDrawBuffer->ViewOffset).field_0x4;
        local_3e8.M[3][0] = (double)fVar2;
        local_3e8.M[3][1] = (double)fVar3;
        local_468.M[0][0] = (double)(fVar15 / (float)((ulonglong)pFVar7 & 0xffffffff));
        local_468.M[0][2] = 0.0;
        local_468.M[0][3] = 0.0;
        local_3e8.M[1][0] = dVar13;
        local_3e8.M[1][1] = dVar14;
        local_3e8.M[2][2] = dVar17;
        local_3e8.M[2][3] = dVar18;
        local_468.M[1][1] = (double)(fVar16 / (float)((ulonglong)local_618._8_8_ >> 0x20));
        local_3e8.M[3][2] = dVar13;
        local_3e8.M[3][3] = dVar14;
        local_468.M[2][0] = 0.0;
        local_468.M[2][1] = 0.0;
        local_368.M[0][2] = 0.0;
        local_368.M[0][3] = 0.0;
        local_368.M[1][2] = 0.0;
        local_368.M[1][3] = 0.0;
        local_368.M[3][0] = 0.0;
        local_368.M[3][1] = 0.0;
        local_2e8.M[0][2] = 0.0;
        local_2e8.M[0][3] = 0.0;
        local_2e8.M[1][2] = 0.0;
        local_2e8.M[1][3] = 0.0;
        local_2e8.M[3][0] = 0.0;
        local_2e8.M[3][1] = 0.0;
        local_468.M[1][2] = 0.0;
        local_468.M[1][3] = 0.0;
        local_468.M[2][2] = dVar19;
        local_468.M[2][3] = dVar20;
        local_468.M[3][0] = dVar23;
        local_468.M[3][1] = dVar24;
        local_468.M[3][2] = dVar21;
        local_468.M[3][3] = dVar22;
        local_368.M[0][0] = dVar17;
        local_368.M[0][1] = dVar18;
        local_368.M[1][0] = dVar13;
        local_368.M[1][1] = dVar14;
        local_368.M[2][0] = 0.0;
        local_368.M[2][1] = 0.0;
        local_368.M[2][2] = dVar17;
        local_368.M[2][3] = dVar18;
        local_368.M[3][2] = dVar13;
        local_368.M[3][3] = dVar14;
        local_2e8.M[0][0] = dVar17;
        local_2e8.M[0][1] = dVar18;
        local_2e8.M[1][0] = dVar13;
        local_2e8.M[1][1] = dVar14;
        local_2e8.M[2][0] = 0.0;
        local_2e8.M[2][1] = 0.0;
        local_2e8.M[2][2] = dVar17;
        local_2e8.M[2][3] = dVar18;
        local_2e8.M[3][2] = dVar13;
        local_2e8.M[3][3] = dVar14;
        VectorMatrixMultiply(&local_1e8,&local_468,&local_368);
        VectorMatrixMultiply(&local_168,&local_1e8,&local_2e8);
        VectorMatrixMultiply(&local_268,&local_3e8,&local_168);
        local_5d8._0_8_ = local_638;
        local_5d8._8_8_ = local_660;
        local_5d8._16_8_ = (FRDGTexture *)0x0;
        local_688 = ELoad;
        local_5d8[0x18] = EVar25;
        uVar31 = 0;
        if ((int)uVar40 < iVar30) {
          uVar31 = ~uVar40 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar26 = local_670;
        local_5d8._48_4_ = (undefined4)local_268.M[0][0];
        local_5d8._52_4_ = (undefined4)local_268.M[0][1];
        local_5d8._120_8_ = (TIntPoint<int>_u_0)0x0;
        local_5d8._128_8_ = (TIntPoint<int>_u_0)0x0;
        local_5d8._168_4_ = ENoneBound;
        iVar38 = (local_670->BatchData).RenderBatches.ArrayNum;
        local_5d8[0xac] = 0;
        local_5d8._176_4_ = 1.0;
        local_5d8._180_2_ = 0;
        local_5d8[0xb7] = 1;
        plVar1 = (longlong *)((longlong)&(local_680.Data)->VertexBuffer + lVar37);
        local_5d8._32_8_ = *plVar1;
        local_5d8._40_8_ = plVar1[1];
        local_5d8._136_8_ = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
        local_5d8._64_4_ = (undefined4)local_268.M[1][0];
        local_5d8._68_4_ = (undefined4)local_268.M[1][1];
        local_5d8._56_4_ = (undefined4)local_268.M[0][2];
        local_5d8._60_4_ = (undefined4)local_268.M[0][3];
        local_5d8._80_4_ = (undefined4)local_268.M[2][0];
        local_5d8._84_4_ = (undefined4)local_268.M[2][1];
        local_5d8._72_4_ = (undefined4)local_268.M[1][2];
        local_5d8._76_4_ = (undefined4)local_268.M[1][3];
        local_5d8._88_4_ = (undefined4)local_268.M[2][2];
        local_5d8._92_4_ = (undefined4)local_268.M[2][3];
        local_5d8._96_4_ = (undefined4)local_268.M[3][0];
        local_5d8._100_4_ = (undefined4)local_268.M[3][1];
        local_5d8._104_4_ = (undefined4)local_268.M[3][2];
        local_5d8._108_4_ = (undefined4)local_268.M[3][3];
        local_5d8._152_8_ = local_650->WorldTimeSeconds;
        local_5d8._164_4_ = local_650->DeltaTimeSeconds;
        local_5d8._144_8_ = local_650->RealTimeSeconds;
        local_5d8._160_4_ = local_650->DeltaRealTimeSeconds;
        local_5d8[0xb6] = local_630->bGammaCorrection;
        local_670 = (FSlateWindowElementList *)
                    CONCAT44(local_670._4_4_,(local_670->BatchData).FirstRenderBatchIndex);
        local_5e8 = (ForElementType<EPixelFormat>)
                    (pFVar26->BatchData).RenderBatches.AllocatorInstance.Data;
        local_5d8._112_4_ = fVar2;
        local_5d8._116_4_ = fVar3;
        if ((iVar38 < 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar29)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar27 = local_630;
        iStack_5e0 = iVar38;
        if (((local_630->RenderTargetPolicy).Object == (FSlateRHIRenderingPolicy *)0x0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar29)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_4f8._12_4_ = iStack_5dc;
        local_4f8.ArrayNum = iStack_5e0;
        local_4f8.DataPtr = (FSlateRenderBatch *)local_5e8;
        AddSlateDrawElementsPass
                  (param_1,(pFVar27->RenderTargetPolicy).Object,
                   (FSlateDrawElementsPassInputs *)local_5d8,&local_4f8,(int)local_670);
      }
      iVar38 = (pFVar5->WindowElementLists).ArrayNum;
      uVar40 = uVar40 + 1;
      lVar37 = lVar37 + 0x10;
      FVar39 = local_668;
    } while ((int)uVar40 < iVar38);
  }
  if (local_688 == EClear) {
    AddClearRenderTargetPass(param_1,local_660);
  }
  if (local_5f8 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>
              ((TRDGEventScopeGuard<FRDGScope_RHI> *)(local_618 + 0x10));
  }
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar28) {
    FThreadStats::AddMessage(FVar39,CycleScopeEnd);
  }
  return;
}

// DrawWindow_GameThread @ 146000fa0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlate3DRenderer::DrawWindow_GameThread(FSlate3DRenderer *this,FSlateDrawBuffer *param_1)

{
  FSlateFontServices *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSlateFontCache *this_00;
  FSlateWindowElementList *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FDeprecateSlateVector2D FVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\Slate3DRenderer.cpp"
                         ,0x55,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar1 = (this->SlateFontServices).Object;
  pTVar2 = (pFVar1->GameThreadFontCache).SharedReferenceCount.ReferenceController;
  this_00 = (pFVar1->GameThreadFontCache).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar9 = (param_1->WindowElementLists).ArrayNum;
  uVar11 = 0;
  if (0 < iVar9) {
    lVar10 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar11 < iVar9) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = *(FSlateWindowElementList **)
                ((param_1->WindowElementLists).AllocatorInstance.Data + lVar10);
      bVar6 = IsInGameThread();
      if (((!bVar6) && (bVar6 = IsInSlateThread(), !bVar6)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread() || IsInSlateThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Rendering\\DrawElements.h"
                             ,0xec,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((((pFVar3->WeakPaintWindow).Object != (SWindow *)0x0) &&
          (pTVar4 = (pFVar3->WeakPaintWindow).WeakReferenceCount.ReferenceController,
          pTVar4 != (TReferenceControllerBase<1> *)0x0)) &&
         ((0 < (int)pTVar4->SharedReferenceCount && (pFVar3->RawPaintWindow != (SWindow *)0x0)))) {
        FVar8 = SWindow::GetSizeInScreen(pFVar3->RawPaintWindow);
        if ((0.0 < *(float *)FVar8) && (0.0 < *(float *)((longlong)FVar8 + 4))) {
          FSlateElementBatcher::AddElements((this->ElementBatcher).Ptr,pFVar3);
          FSlateFontCache::UpdateCache(this_00);
          FSlateElementBatcher::ResetBatches((this->ElementBatcher).Ptr);
        }
      }
      iVar9 = (param_1->WindowElementLists).ArrayNum;
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 0x10;
    } while ((int)uVar11 < iVar9);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// ReleaseDrawBuffer @ 1460208e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlate3DRenderer::ReleaseDrawBuffer(FSlate3DRenderer *this,FSlateDrawBuffer *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [16];
  code *local_88 [2];
  undefined **local_78;
  FSlateDrawBuffer *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FSlateDrawBuffer *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  uVar5 = 0;
  do {
    if (this->DrawBuffers + uVar5 == param_1) goto LAB_146020939;
    uVar6 = (int)uVar5 + 1;
    uVar5 = (ulonglong)uVar6;
  } while ((int)uVar6 < 4);
  local_98[0] = 0;
  `FSlate3DRenderer::ReleaseDrawBuffer'::__l2::<lambda_1>::operator()(local_98);
LAB_146020939:
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FSlate3DRenderer::ReleaseDrawBuffer'::`2'::<lambda_2>,1,0>::
              _vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FSlate3DRenderer::ReleaseDrawBuffer'::__l2::<lambda_2>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = param_1;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FSlate3DRenderer::ReleaseDrawBuffer_::__l2::TSTR_SlateReleaseDrawBufferCommand76>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FSlate3DRenderer::ReleaseDrawBuffer'::__l2::TSTR_SlateReleaseDrawBufferCommand76>
             ::Get();
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
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// SetApplyColorDeficiencyCorrection @ 1460244d0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlate3DRenderer::SetApplyColorDeficiencyCorrection(FSlate3DRenderer *this,bool param_1)

{
  this->bAllowColorDeficiencyCorrection = param_1;
  return;
}

// SetUseGammaCorrection @ 146025b20

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlate3DRenderer::SetUseGammaCorrection(FSlate3DRenderer *this,bool param_1)

{
  this->bGammaCorrection = param_1;
  return;
}

// operator() @ 1504e03d0

bool __thiscall `FSlate3DRenderer::ReleaseDrawBuffer'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3170376490894229577>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3170376490894229577>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

