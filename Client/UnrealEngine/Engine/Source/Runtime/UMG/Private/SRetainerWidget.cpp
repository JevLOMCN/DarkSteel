// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 29

// SRetainerWidget @ 146a55ef0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

SRetainerWidget * __thiscall SRetainerWidget::SRetainerWidget(SRetainerWidget *this)

{
  EWidgetUpdateFlags EVar1;
  FHittestGrid *pFVar2;
  code *pcVar3;
  bool bVar4;
  FArguments *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  SRetainerWidget *pSVar7;
  FRetainerWidgetRenderingResources *pFVar8;
  FSlateApplicationBase *pFVar9;
  FRetainerWidgetRenderingResources *pFVar10;
  EWidgetUpdateFlags EVar11;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  undefined1 local_258 [16];
  TReferenceControllerBase<1> *local_248;
  FArguments local_238;
  
  SCompoundWidget::SCompoundWidget((SCompoundWidget *)this);
  FSlateInvalidationRoot::FSlateInvalidationRoot((FSlateInvalidationRoot *)&this->field_0x2a8);
  *(undefined ***)this = &_vftable__for__SCompoundWidget__;
  *(undefined ***)&this->field_0x2a8 = &_vftable__for__FSlateInvalidationRoot__;
  FSlateBrush::FSlateBrush(&this->SurfaceBrush);
  (this->PreviousRenderSize).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::NoneValue.field0_0x0;
  FGeometry::FGeometry(&this->PreviousAllottedGeometry);
  (this->PreviousClipRectSize).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::NoneValue.field0_0x0;
  pFVar10 = (FRetainerWidgetRenderingResources *)0x0;
  (this->PreviousClippingState).bIsSet = false;
  (this->PreviousColorAndOpacity).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::Transparent.field0_0x0;
  (this->MyWidget).Object = (SWidget *)0x0;
  (this->MyWidget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->LastIncomingLayerId = 0;
  pFVar5 = SVirtualWindow::FArguments::FArguments(&local_238);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SVirtualWindow,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVirtualWindow,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SVirtualWindow,RequiredArgs::T0RequiredArgs> *)(local_258 + 8),
             "SVirtualWindow",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Slate\\SRetainerWidget.cpp"
             ,0x75,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  TSlateDecl<SVirtualWindow,RequiredArgs::T0RequiredArgs>::operator<<=
            ((TSlateDecl<SVirtualWindow,RequiredArgs::T0RequiredArgs> *)(local_258 + 8),
             &this->VirtualWindow,pFVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_248);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_238);
  pTVar6 = ::operator_new(0x108);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    (this->HittestGrid).Object = (FHittestGrid *)0x10;
    (this->HittestGrid).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFHittestGrid___00_SharedPointerInternals__6B_;
    FHittestGrid::FHittestGrid((FHittestGrid *)(pTVar6 + 1));
    (this->HittestGrid).SharedReferenceCount.ReferenceController = pTVar6;
    (this->HittestGrid).Object = (FHittestGrid *)(pTVar6 + 1);
    if (((FHittestGrid *)(pTVar6 + 1) == (FHittestGrid *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pSVar7 = (SRetainerWidget *)(*pcVar3)();
      return pSVar7;
    }
  }
  (this->OuterWorld).WeakPtr = (FWeakObjectPtr)0x0;
  pFVar8 = ::operator_new(0x30);
  if (pFVar8 != (FRetainerWidgetRenderingResources *)0x0) {
    pFVar8->_padding_ = (longlong)&___7FDeferredCleanupInterface__6B_;
    *(undefined2 *)&pFVar8->_padding_ = 0;
    pFVar8->_padding_ = (longlong)&___7FGCObject__6B_;
    FGCObject::RegisterGCObject((FGCObject *)&pFVar8->_padding_);
    pFVar8->WidgetRenderer = (FWidgetRenderer *)0x0;
    pFVar8->_padding_ =
         (longlong)&FRetainerWidgetRenderingResources::_vftable__for__FDeferredCleanupInterface__;
    pFVar8->_padding_ = (longlong)&FRetainerWidgetRenderingResources::_vftable__for__FGCObject__;
    (pFVar8->RenderTarget).field0_0x0.DebugPtr = (UTextureRenderTarget2D *)0x0;
    (pFVar8->DynamicEffect).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
    pFVar10 = pFVar8;
  }
  this->RenderingResources = pFVar10;
  (this->MyStatId).StatIdPtr = &TStatId::TStatId_NAME_None;
  FSlateBrush::FSlateBrush(&this->DynamicBrush);
  (this->DynamicEffectTextureParameter).ComparisonIndex = 0;
  (this->DynamicEffectTextureParameter).Number = 0;
  pFVar9 = FSlateApplicationBase::Get();
  TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
  AddRaw<SRetainerWidget>
            ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
             &pFVar9->OnGlobalInvalidationToggledEvent,(SRetainerWidget *)local_258,
             (pmf_689737b3 *)this);
  if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnRetainerModeChangedDelegate,
               this);
  }
  pFVar2 = (this->HittestGrid).Object;
  this->field_0x31 = this->field_0x31 | 0x80;
  *(FHittestGrid **)&this->field_0x300 = pFVar2;
  *(SRetainerWidget **)&this->field_0x2f8 = this;
  EVar1 = this->field_0x38;
  EVar11 = EVar1 & ~NeedsTick;
  this->field_0x38 = EVar11;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->field_0x18,(SWidget *)this,EVar1,EVar11);
  return this;
}

// ~SRetainerWidget @ 146a584a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall SRetainerWidget::~SRetainerWidget(SRetainerWidget *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FScriptContainerElement *pFVar2;
  FSlateApplicationBase *pFVar3;
  SRetainerWidget *local_res8;
  
  *(undefined ***)this = &_vftable__for__SCompoundWidget__;
  *(undefined ***)&this->field_0x2a8 = &_vftable__for__FSlateInvalidationRoot__;
  if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
    pFVar3 = FSlateApplicationBase::Get();
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pFVar3->OnGlobalInvalidationToggledEvent,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnRetainerModeChangedDelegate,
               this);
  }
  BeginCleanup((FDeferredCleanupInterface *)this->RenderingResources);
  local_res8 = this;
  TArray<SRetainerWidget_*,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>::Remove
            (&Shared_WaitingToRender,&local_res8);
  pTVar1 = (this->DynamicBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->DynamicBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HittestGrid).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VirtualWindow).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyWidget).SharedReferenceCount.ReferenceController);
  if (((this->PreviousClippingState).bIsSet != false) &&
     (pFVar2 = (this->PreviousClippingState).TypedValue.StencilQuads.AllocatorInstance.Data,
     pFVar2 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar2);
  }
  pTVar1 = (this->SurfaceBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->SurfaceBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FSlateInvalidationRoot::~FSlateInvalidationRoot((FSlateInvalidationRoot *)&this->field_0x2a8);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// Advanced_AsInvalidationRoot @ 146a5de40

FSlateInvalidationRoot * __thiscall
SRetainerWidget::Advanced_AsInvalidationRoot(SRetainerWidget *this)

{
  SRetainerWidget *pSVar1;
  SRetainerWidget *pSVar2;
  
  pSVar2 = (SRetainerWidget *)0x0;
  if (this->bEnableRetainedRendering != false) {
    pSVar2 = this;
  }
  pSVar1 = (SRetainerWidget *)&pSVar2->field_0x2a8;
  if (pSVar2 == (SRetainerWidget *)0x0) {
    pSVar1 = (SRetainerWidget *)0x0;
  }
  return (FSlateInvalidationRoot *)pSVar1;
}

// Advanced_IsInvalidationRoot @ 146a5de70

bool __thiscall SRetainerWidget::Advanced_IsInvalidationRoot(SRetainerWidget *this)

{
  return this->bEnableRetainedRendering;
}

// ComputeDesiredSize @ 146a61c90

TVector2<double> * __thiscall
SRetainerWidget::ComputeDesiredSize
          (SRetainerWidget *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  TVector2<double> *pTVar4;
  FDeprecateSlateVector2D FVar5;
  
  if (this->bEnableRetainedRendering == false) {
    SCompoundWidget::ComputeDesiredSize((SCompoundWidget *)this,__return_storage_ptr__,param_1);
    return __return_storage_ptr__;
  }
  if ((this->MyWidget).Object == (SWidget *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVector2<double> *)(*pcVar2)();
      return pTVar4;
    }
  }
  FVar5 = SWidget::GetDesiredSize((this->MyWidget).Object);
  uVar1 = *(undefined8 *)FVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(float)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(float)((ulonglong)uVar1 >> 0x20);
  return __return_storage_ptr__;
}

// Construct @ 146a62330

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SRetainerWidget::Construct(SRetainerWidget *this,FArguments *param_1)

{
  TSharedPtr<SWidget,1> *pTVar1;
  EWidgetUpdateFlags EVar2;
  FRetainerWidgetRenderingResources *pFVar3;
  SWidget *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  UObject *pUVar9;
  UTextureRenderTarget2D *pUVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  EWidgetUpdateFlags EVar13;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  FName local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_118;
  FDelegateAllocation local_110;
  SWidget *local_100;
  FSharedReferencer<1> local_f8 [2];
  TStatIdData *local_e8;
  undefined4 uStack_e0;
  uint uStack_dc;
  TAttribute<EVisibility> local_d8;
  FDestructionSentinel local_b8;
  FName *local_a0;
  undefined4 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  FDestructionSentinel local_80;
  FDelegateAllocation *local_68;
  undefined1 local_60 [24];
  code *local_48;
  longlong lStack_40;
  
  local_res20 = param_1->_StatId;
  local_a0 = &local_res20;
  local_res10[0] = 1;
  local_98 = local_res18;
  local_res8[0] = 1;
  local_90 = local_res8;
  local_res18[0] = 2;
  local_88 = local_res10;
  `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_Slate>'::__l2::<lambda_1>::operator()
            (&local_a0);
  (this->MyStatId).StatIdPtr = local_e8;
  pUVar9 = GetTransientPackageAsObject();
  pUVar10 = NewObject<UTextureRenderTarget2D>(pUVar9);
  (pUVar10->ClearColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Transparent.field0_0x0
  ;
  (pUVar10->RenderTargetFormat).Value = '\x03';
  pFVar3 = this->RenderingResources;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  (pFVar3->RenderTarget).field0_0x0.DebugPtr = pUVar10;
  FSlateBrush::SetResourceObject(&this->SurfaceBrush,(UObject *)pUVar10);
  local_d8.Value = (EVisibility)EVisibility::SelfHitTestInvisible.Value.Value;
  local_d8.bIsSet = true;
  local_d8.Getter._16_8_ = 0;
  local_d8.Getter._0_8_ = 0;
  local_d8.Getter._8_8_ = 0;
  SCompoundWidget::SetVisibility((SCompoundWidget *)(this->VirtualWindow).Object,&local_d8);
  SVirtualWindow::SetShouldResolveDeferred((this->VirtualWindow).Object,false);
  UpdateWidgetRenderer(this);
  local_f8[0].ReferenceController =
       (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  local_100 = (param_1->_Content).Widget.Object;
  if (local_f8[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_f8[0].ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_f8[0].ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->MyWidget;
  if (pTVar1 != (TSharedPtr<SWidget,1> *)&local_100) {
    pTVar1->Object = local_100;
    local_100 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyWidget).SharedReferenceCount,local_f8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8[0].ReferenceController);
  this->RenderOnPhase = param_1->_RenderOnPhase;
  this->RenderOnInvalidation = param_1->_RenderOnInvalidation;
  this->Phase = param_1->_Phase;
  this->PhaseCount = param_1->_PhaseCount;
  EVar2 = this->field_0x38;
  this->LastDrawTime = (double)FApp::CurrentTime;
  EVar13 = EVar2 & ~NeedsVolatilePrepass;
  this->LastTickedFrame = 0;
  this->bEnableRetainedRenderingDesire = true;
  this->bEnableRetainedRendering = false;
  this->field_0x38 = EVar13;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->field_0x18,(SWidget *)this,EVar2,EVar13);
  if ((this->bEnableRetainedRenderingDesire == false) || (GEnableRetainedRendering == 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if (this->bEnableRetainedRendering != bVar8) {
    EVar2 = this->field_0x38;
    this->bEnableRetainedRendering = bVar8;
    EVar13 = EVar2 | NeedsVolatilePrepass;
    if (bVar8 == false) {
      EVar13 = EVar2 & ~NeedsVolatilePrepass;
    }
    this->field_0x38 = EVar13;
    FWidgetProxyHandle::UpdateWidgetFlags
              ((FWidgetProxyHandle *)&this->field_0x18,(SWidget *)this,EVar2,EVar13);
    FSlateInvalidationRoot::InvalidateRootChildOrder
              ((FSlateInvalidationRoot *)&this->field_0x2a8,(SWidget *)0x0);
  }
  this->bRenderRequested = true;
  this->bInvalidSizeLogged = false;
  if (pTVar1->Object == (SWidget *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pSVar4 = pTVar1->Object;
  pTVar5 = (this->MyWidget).SharedReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar4 == (SWidget *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FSlotBase::DetatchParentFromContent((FSlotBase *)&this->field_0x238);
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_60._8_8_ = *(undefined8 *)&this->field_0x248;
  local_60._16_8_ = *(undefined8 *)&this->field_0x250;
  *(SWidget **)&this->field_0x248 = pSVar4;
  *(TReferenceControllerBase<1> **)&this->field_0x250 = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_60._16_8_);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)&this->field_0x238);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
    uStack_e0 = 0;
    local_e8 = (TStatIdData *)OnRetainerModeChanged;
    lStack_40 = (ulonglong)uStack_dc << 0x20;
    local_48 = OnRetainerModeChanged;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddRaw<SRetainerWidget>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &OnRetainerModeChangedDelegate,(SRetainerWidget *)local_60,(pmf_250629b5 *)this);
    uVar7 = EnableRetainedRendering._8_8_;
    if (bStaticInit == false) {
      bStaticInit = true;
      local_118.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_110.DelegateSize = 0;
      pcVar6 = *(code **)(*(longlong *)EnableRetainedRendering._8_8_ + 0xe0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_118,(FWriteAccessScope *)&local_80);
      local_68 = &local_110;
      puVar11 = UE::Core::Private::DelegateAllocate(0x20,&local_110);
      if (puVar11 != (undefined8 *)0x0) {
        *puVar11 = &
                   ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar12 = FDelegateHandle::GenerateNewID();
        puVar11[2] = uVar12;
        *puVar11 = &
                   ___7__TBaseStaticDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar11[3] = OnRetainerModeCVarChanged;
      }
      if (local_80.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
      }
      (*pcVar6)(uVar7,&local_118);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_118,(FWriteAccessScope *)&local_b8);
      if ((local_110.DelegateSize != 0) &&
         (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_110.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_110,0,0,0x10);
        local_110.DelegateSize = 0;
      }
      if (local_b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
      }
      if (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_110.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_118.AccessDetector);
    }
  }
  return;
}

// CustomPrepass @ 146a6a800

bool __thiscall SRetainerWidget::CustomPrepass(SRetainerWidget *this,float param_1)

{
  FChildren *pFVar1;
  
  if (this->bEnableRetainedRendering != false) {
    if ((char)this->field_0x30 < '\0') {
      FSlateInvalidationRoot::SetNeedsSlowPath((FSlateInvalidationRoot *)&this->field_0x2a8,true);
    }
    FSlateInvalidationRoot::ProcessInvalidation((FSlateInvalidationRoot *)&this->field_0x2a8);
    if (this->field_0x320 != '\0') {
      pFVar1 = SCompoundWidget::GetChildren((SCompoundWidget *)this);
      SWidget::Prepass_ChildLoop((SWidget *)this,param_1,pFVar1);
    }
    return false;
  }
  return true;
}

// Debug_GetChildrenForReflector @ 146a6a950

FChildren * __thiscall SRetainerWidget::Debug_GetChildrenForReflector(SRetainerWidget *this)

{
  return (FChildren *)&this->field_0x218;
}

// GetChildren @ 146a73b60

FChildren * __thiscall SRetainerWidget::GetChildren(SRetainerWidget *this)

{
  FChildren *pFVar1;
  
  if (this->bEnableRetainedRendering != false) {
    return (FChildren *)&FNoChildren::NoChildrenInstance;
  }
  pFVar1 = SCompoundWidget::GetChildren((SCompoundWidget *)this);
  return pFVar1;
}

// GetEffectMaterial @ 146a75db0

UMaterialInstanceDynamic * __thiscall SRetainerWidget::GetEffectMaterial(SRetainerWidget *this)

{
  return (this->RenderingResources->DynamicEffect).field0_0x0.DebugPtr;
}

// GetRootWidget @ 146a79140

TSharedRef<SWidget,1> * __thiscall
SRetainerWidget::GetRootWidget(SRetainerWidget *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  bool bVar1;
  bool bVar2;
  FChildren *pFVar3;
  SWidget **ppSVar4;
  SWidget *pSVar5;
  SWidget *local_28;
  TReferenceControllerBase<1> *local_20;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pSVar5 = SNullWidget::NullWidget.Object;
  bVar1 = false;
  if (this->field_0x241 == '\0') {
    local_28 = SNullWidget::NullWidget.Object;
    local_20 = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar2 = false;
    ppSVar4 = &local_28;
    bVar1 = true;
  }
  else {
    pFVar3 = SCompoundWidget::GetChildren((SCompoundWidget *)&this[-1].field_0x338);
    ppSVar4 = (SWidget **)(**(code **)(pFVar3->_padding_ + 0x10))(pFVar3,local_18,0);
    bVar2 = true;
    pSVar5 = *ppSVar4;
  }
  __return_storage_ptr__->Object = pSVar5;
  pSVar5 = ppSVar4[1];
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pSVar5;
  if (pSVar5 != (SWidget *)0x0) {
    LOCK();
    *(atomic<int> *)&pSVar5->_padding_ = (atomic<int>)((int)*(atomic<int> *)&pSVar5->_padding_ + 1);
    UNLOCK();
  }
  if (bVar1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  }
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  }
  return __return_storage_ptr__;
}

// IsAnythingVisibleToRender @ 146a7bfc0

bool __thiscall SRetainerWidget::IsAnythingVisibleToRender(SRetainerWidget *this)

{
  SWidget *pSVar1;
  
  pSVar1 = (this->MyWidget).Object;
  if ((pSVar1 != (SWidget *)0x0) && (((byte)pSVar1->VisibilityAttribute & 0x19) != 0)) {
    return true;
  }
  return false;
}

// OnGlobalInvalidationToggled @ 146a83610

void __thiscall SRetainerWidget::OnGlobalInvalidationToggled(SRetainerWidget *this,bool param_1)

{
  FSlateInvalidationRoot::InvalidateRootChildOrder
            ((FSlateInvalidationRoot *)&this->field_0x2a8,(SWidget *)0x0);
  FSlateInvalidationRoot::ClearAllFastPathData((FSlateInvalidationRoot *)&this->field_0x2a8,true);
  return;
}

// OnPaint @ 146a85640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SRetainerWidget::OnPaint
          (SRetainerWidget *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  ESlateColorStylingMode EVar4;
  TStatIdData *pTVar5;
  SWidget *pSVar6;
  FHittestGrid *pFVar7;
  SRetainerWidget *pSVar8;
  UTextureRenderTarget2D *pUVar9;
  UMaterialInstanceDynamic *this_00;
  code *pcVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  FSlateRect *pFVar24;
  FGeometry *pFVar25;
  bool bVar26;
  uint uVar27;
  int iVar28;
  EPaintRetainedContentResult EVar29;
  FName *pFVar30;
  FThreadSafeStaticStat<FStat_STAT_SlateRetainerWidgetPaint> FVar31;
  FSlateColor *this_01;
  FThreadStats *pFVar32;
  FThreadStatsPool *pFVar33;
  TVector2<float>_u_0 TVar34;
  FColor_u_0 FVar35;
  FName FVar36;
  float fVar37;
  float fVar38;
  undefined1 auStackY_278 [32];
  FColor_u_0 local_218;
  uint uStack_214;
  TVector2<float>_u_0 local_210;
  FColor_u_0 local_208 [2];
  FWidgetStyle *local_200;
  FSlateWindowElementList *local_1f8;
  FColor_u_0 local_1f0;
  uint local_1ec;
  FName local_1e8;
  FSlateRect *local_1e0;
  FGeometry *local_1d8;
  FName local_1d0;
  TVector2<float>_u_0 local_1c0;
  FLinearColor_u_0 local_1b0;
  TVector2<float>_u_0 local_1a0;
  TVector2<float>_u_0 local_198;
  LARGE_INTEGER local_190;
  LARGE_INTEGER local_188;
  TSharedRef<FHittestGrid_const_,1> local_180;
  FStatMessage local_170;
  FStatMessage local_160;
  FSlateInvalidationContext local_148;
  FName local_108;
  FPaintArgs local_100;
  TVector2<float>_u_0 local_d0;
  float local_c8;
  undefined8 local_c4;
  FDeprecateSlateVector2D local_bc;
  float local_b4 [2];
  float afStack_ac [2];
  TVector2<float>_u_0 local_a4;
  byte local_9c;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_278;
  pTVar5 = (this->MyStatId).StatIdPtr;
  bVar20 = false;
  bVar23 = false;
  local_1f8 = param_4;
  FVar36 = *(FName *)&pTVar5->Name;
  local_200 = param_6;
  local_1d0.ComparisonIndex.Value = 0;
  local_1d0.Number = 0;
  FVar35.Bits = (uint)FVar36.ComparisonIndex.Value;
  uVar27 = FVar36.Number;
  local_1e0 = param_3;
  local_1d8 = param_2;
  if ((FVar35.Bits == 0) && (uVar27 == 0)) {
LAB_146a8574f:
    bVar21 = false;
    FVar36 = local_1d0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_208[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_208[0]._s_0,(pTVar5->StatDescriptionAnsi).Ptr);
      bVar20 = false;
      bVar23 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1f0.Bits = FVar35.Bits;
        local_1ec = uVar27;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_1f0._s_0,(pTVar5->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Slate\\SRetainerWidget.cpp"
                   ,0x252);
        bVar20 = true;
        bVar23 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146a8574f;
    local_218.Bits = FVar35.Bits;
    uStack_214 = uVar27;
    FThreadStats::AddMessage(FVar36,CycleScopeStart);
    bVar21 = true;
  }
  if (((this->bEnableRetainedRendering == false) ||
      (pSVar6 = (this->MyWidget).Object, pSVar6 == (SWidget *)0x0)) ||
     (((byte)pSVar6->VisibilityAttribute & 0x19) == 0)) {
    iVar28 = SCompoundWidget::OnPaint
                       ((SCompoundWidget *)this,param_1,param_2,param_3,local_1f8,param_5,local_200,
                        param_7);
    goto LAB_146a85ddc;
  }
  FVar31 = StatPtr_STAT_SlateRetainerWidgetPaint;
  if (StatPtr_STAT_SlateRetainerWidgetPaint ==
      (FThreadSafeStaticStat<FStat_STAT_SlateRetainerWidgetPaint>)0x0) {
    pFVar30 = ::FName::FName(&local_108,"STAT_SlateRetainerWidgetPaint");
    FVar31 = (FThreadSafeStaticStat<FStat_STAT_SlateRetainerWidgetPaint>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateRetainerWidgetPaint,*pFVar30
                        ,L"Retainer Widget Paint","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true
                        ,true,ST_int64,true,false,MCR_Invalid);
  }
  TVar34 = *(TVector2<float>_u_0 *)FVar31;
  bVar18 = false;
  bVar22 = false;
  local_1c0 = (TVector2<float>_u_0)0x0;
  if ((TVar34._s_0.X == 0.0) && (TVar34._s_0.Y == 0.0)) {
LAB_146a8589b:
    bVar19 = false;
    TVar34 = local_1c0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_218.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_218._s_0,(char *)*(FName *)((longlong)FVar31 + 0x10));
      bVar18 = false;
      bVar22 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1e8.ComparisonIndex.Value = (uint)TVar34._s_0.X;
        local_1e8.Number = (uint)TVar34._s_0.Y;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1e8,(wchar_t *)*(FName *)((longlong)FVar31 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Slate\\SRetainerWidget.cpp"
                   ,0x25f);
        bVar18 = true;
        bVar22 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146a8589b;
    local_210 = TVar34;
    FThreadStats::AddMessage((FName)TVar34._s_0,CycleScopeStart);
    bVar19 = true;
  }
  pFVar7 = param_1->RootGrid;
  local_210 = (pFVar7->GridWindowOrigin).field0_0x0;
  local_1a0 = (pFVar7->GridSize).field0_0x0;
  local_198 = (pFVar7->GridOrigin).field0_0x0;
  bVar26 = FHittestGrid::SetHittestArea
                     ((this->HittestGrid).Object,(FDeprecateVector2DParameter *)&local_198._s_0,
                      (FDeprecateVector2DParameter *)&local_1a0._s_0,
                      (FDeprecateVector2DParameter *)&local_210._s_0);
  if (bVar26) {
    this->bRenderRequested = true;
    FSlateInvalidationRoot::InvalidateRootChildOrder
              ((FSlateInvalidationRoot *)&this->field_0x2a8,(SWidget *)0x0);
  }
  pFVar7 = (this->HittestGrid).Object;
  pSVar8 = (SRetainerWidget *)pFVar7->Owner;
  if (((pSVar8 != (SRetainerWidget *)0x0) && (pSVar8 != this)) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("Owner == nullptr || Owner == InOwner",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Input\\HittestGrid.h"
                          ,0x41,L""), bVar26)) {
    pcVar10 = (code *)swi(3);
    iVar28 = (*pcVar10)();
    return iVar28;
  }
  pFVar24 = local_1e0;
  pFVar7->Owner = (SWidget *)this;
  pFVar7 = (this->HittestGrid).Object;
  fVar2 = local_1e0->Top;
  fVar37 = local_1e0->Right;
  fVar3 = local_1e0->Bottom;
  (pFVar7->CullingRect).Left = local_1e0->Left;
  (pFVar7->CullingRect).Top = fVar2;
  (pFVar7->CullingRect).Right = fVar37;
  (pFVar7->CullingRect).Bottom = fVar3;
  FPaintArgs::FPaintArgs
            (&local_100,param_1->PaintParentPtr,param_1->RootGrid,(this->HittestGrid).Object,
             (FDeprecateVector2DParameter)(param_1->WindowOffset).field0_0x0._s_0,
             param_1->CurrentTime,param_1->DeltaTime);
  pFVar25 = local_1d8;
  fVar2 = __real_3f800000;
  local_148.ViewOffset = (FDeprecateSlateVector2D)0x0;
  local_148.bAllowFastPathUpdate = true;
  (local_100.CurrentGrid)->CurrentUserIndex = param_1->RootGrid->CurrentUserIndex;
  local_148.WidgetStyle = local_200;
  local_148.WindowElementList = local_1f8;
  local_148.bParentEnabled = param_7;
  local_148.LayoutScaleMultiplier = fVar2;
  if ((this->field_0x31 & 0x40) != 0) {
    local_148.LayoutScaleMultiplier = *(float *)&this->field_0x3c;
  }
  local_148.PaintArgs = &local_100;
  local_148.CullingRect.Left = pFVar24->Left;
  local_148.CullingRect.Top = pFVar24->Top;
  local_148.CullingRect.Right = pFVar24->Right;
  local_148.CullingRect.Bottom = pFVar24->Bottom;
  local_148.IncomingLayerId = param_5;
  EVar29 = PaintRetainedContentImpl(this,&local_148,local_1d8,param_5);
  if ((EVar29 == NotPainted) || (EVar29 - TextureSizeTooBig < 2)) {
    *(undefined4 *)&this->field_0x328 = 0;
    if (EVar29 != TextureSizeTooBig) {
      if (EVar29 != TextureSizeZero) goto LAB_146a85a7e;
      goto LAB_146a85cc1;
    }
    iVar28 = SCompoundWidget::OnPaint
                       ((SCompoundWidget *)this,param_1,pFVar25,local_1e0,local_1f8,param_5,
                        local_200,param_7);
  }
  else {
LAB_146a85a7e:
    pUVar9 = (this->RenderingResources->RenderTarget).field0_0x0.DebugPtr;
    if ((pUVar9 == (UTextureRenderTarget2D *)0x0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("RenderTarget",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Slate\\SRetainerWidget.cpp"
                            ,0x28d,L""), bVar26)) {
      pcVar10 = (code *)swi(3);
      iVar28 = (*pcVar10)();
      return iVar28;
    }
    fVar37 = (float)(**(code **)(pUVar9->_padding_ + 0x368))(pUVar9);
    if ((fVar2 <= fVar37) &&
       (fVar37 = (float)(**(code **)(pUVar9->_padding_ + 0x370))(pUVar9), fVar2 <= fVar37)) {
      fVar11 = *(float *)&this->field_0x280;
      fVar12 = *(float *)&this->field_0x284;
      fVar13 = *(float *)&this->field_0x288;
      fVar14 = *(float *)&this->field_0x28c;
      this_01 = &(this->SurfaceBrush).TintColor;
      EVar4 = (this->SurfaceBrush).TintColor.ColorUseRule;
      fVar2 = ((local_148.WidgetStyle)->ColorAndOpacityTint).field0_0x0._s_0.G;
      fVar37 = ((local_148.WidgetStyle)->ColorAndOpacityTint).field0_0x0._s_0.B;
      fVar3 = ((local_148.WidgetStyle)->ColorAndOpacityTint).field0_0x0._s_0.R;
      fVar38 = ((local_148.WidgetStyle)->ColorAndOpacityTint).field0_0x0._s_0.A;
      if (EVar4 != UseColor_Specified) {
        if (EVar4 == UseColor_ColorTable) {
          this_01 = (FSlateColor *)FSlateColor::GetColorFromTable(this_01);
        }
        else if ((EVar4 == UseColor_Foreground) || (EVar4 != UseColor_Foreground_Subdued)) {
          this_01 = (FSlateColor *)&(local_148.WidgetStyle)->ForegroundColor;
        }
        else {
          this_01 = (FSlateColor *)&(local_148.WidgetStyle)->SubduedForeground;
        }
      }
      fVar15 = (this_01->SpecifiedColor).field0_0x0._s_0.R;
      fVar16 = *(float *)((longlong)&(this_01->SpecifiedColor).field0_0x0 + 4);
      fVar17 = *(float *)((longlong)&(this_01->SpecifiedColor).field0_0x0 + 8);
      this_00 = (this->RenderingResources->DynamicEffect).field0_0x0.DebugPtr;
      fVar38 = fVar14 * fVar38 * *(float *)((longlong)&(this_01->SpecifiedColor).field0_0x0 + 0xc);
      if (this_00 != (UMaterialInstanceDynamic *)0x0) {
        UMaterialInstanceDynamic::SetTextureParameterValue
                  (this_00,this->DynamicEffectTextureParameter,(UTexture *)pUVar9);
      }
      local_d0 = (local_1d8->AbsolutePosition).field0_0x0;
      local_c8 = local_1d8->Scale;
      local_a4 = (local_1d8->AccumulatedRenderTransform).Trans.field0_0x0;
      local_bc = local_1d8->Size;
      local_b4 = (local_1d8->AccumulatedRenderTransform).M.M[0];
      afStack_ac = (local_1d8->AccumulatedRenderTransform).M.M[1];
      local_9c = local_1d8->bHasRenderTransform * '\x02' | local_9c & 0xfc;
      local_c4 = 0;
      local_1b0._s_0.R = fVar11 * fVar3 * fVar15 * fVar38;
      local_1b0._s_0.G = fVar12 * fVar2 * fVar16 * fVar38;
      local_1b0._s_0.B = fVar13 * fVar37 * fVar17 * fVar38;
      local_1b0._s_0.A = fVar38 * fVar38;
      FSlateDrawElement::MakeBox
                (local_148.WindowElementList,local_148.IncomingLayerId,
                 (FPaintGeometry *)&local_d0._s_0,&this->SurfaceBrush,NoGamma|PreMultipliedAlpha,
                 (FLinearColor *)&local_1b0._s_0);
    }
    if ((param_1->bInheritedHittestability != 0) && ((this->field_0x39 & 0x10) != 0)) {
      local_180.Object = (this->HittestGrid).Object;
      pFVar7 = param_1->CurrentGrid;
      local_180.SharedReferenceCount.ReferenceController =
           (this->HittestGrid).SharedReferenceCount.ReferenceController;
      if (local_180.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_180.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_180.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FHittestGrid::AddGrid(pFVar7,&local_180);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_180.SharedReferenceCount.ReferenceController);
    }
LAB_146a85cc1:
    iVar28 = *(int *)&this->field_0x308;
  }
  if (bVar22) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar19) && (TVar34 != (TVector2<float>_u_0)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar32 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar32 == (FThreadStats *)0x0) {
      pFVar33 = FThreadStatsPool::Get();
      pFVar32 = FThreadStatsPool::GetFromPool(pFVar33);
    }
    if (pFVar32->bWaitForExplicitFlush < pFVar32->ScopeCount) {
      local_170.NameAndInfo.Index.Value = (uint)TVar34._s_0.X;
      local_170.NameAndInfo.Number = (uint)TVar34._s_0.Y & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_190);
      local_170.StatData.Pad[4] = '\0';
      local_170.StatData.Pad[5] = '\0';
      local_170.StatData.Pad[6] = '\0';
      local_170.StatData.Pad[7] = '\0';
      local_170.StatData.Pad[0] = local_190.s.LowPart._0_1_;
      local_170.StatData.Pad[1] = local_190.s.LowPart._1_1_;
      local_170.StatData.Pad[2] = local_190.s.LowPart._2_1_;
      local_170.StatData.Pad[3] = local_190.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar32,&local_170);
      piVar1 = &pFVar32->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar32,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar32,false,false);
      }
    }
  }
LAB_146a85ddc:
  if (bVar23) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar21) && (FVar36 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar32 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar32 == (FThreadStats *)0x0) {
      pFVar33 = FThreadStatsPool::Get();
      pFVar32 = FThreadStatsPool::GetFromPool(pFVar33);
    }
    if (pFVar32->bWaitForExplicitFlush < pFVar32->ScopeCount) {
      local_160.NameAndInfo.Index = FVar36.ComparisonIndex.Value;
      local_160.NameAndInfo.Number = FVar36.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_188);
      local_160.StatData.Pad[4] = '\0';
      local_160.StatData.Pad[5] = '\0';
      local_160.StatData.Pad[6] = '\0';
      local_160.StatData.Pad[7] = '\0';
      local_160.StatData.Pad[0] = local_188.s.LowPart._0_1_;
      local_160.StatData.Pad[1] = local_188.s.LowPart._1_1_;
      local_160.StatData.Pad[2] = local_188.s.LowPart._2_1_;
      local_160.StatData.Pad[3] = local_188.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar32,&local_160);
      piVar1 = &pFVar32->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar32,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar32,false,false);
      }
    }
  }
  return iVar28;
}

// OnRetainerModeCVarChanged @ 146a86500

void __cdecl SRetainerWidget::OnRetainerModeCVarChanged(IConsoleVariable *param_1)

{
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&OnRetainerModeChangedDelegate);
  return;
}

// OnRetainerModeChanged @ 146a86520

void __thiscall SRetainerWidget::OnRetainerModeChanged(SRetainerWidget *this)

{
  SWidget *pSVar1;
  FSlateInvalidationRoot *this_00;
  FSlateInvalidationRootHandle local_28;
  undefined8 local_18;
  
  pSVar1 = (this->MyWidget).Object;
  if (pSVar1 != (SWidget *)0x0) {
    SWidget::InvalidateChildRemovedFromTree((SWidget *)this,pSVar1);
  }
  FSlateInvalidationRoot::Advanced_ResetInvalidation
            ((FSlateInvalidationRoot *)&this->field_0x2a8,true);
  local_28.InvalidationRoot = *(FSlateInvalidationRoot **)&this->field_0x18;
  local_28.UniqueId = *(int *)&this->field_0x20;
  local_28._12_4_ = *(undefined4 *)&this->field_0x24;
  local_18 = *(undefined8 *)&this->field_0x28;
  this_00 = FSlateInvalidationRootHandle::GetInvalidationRoot(&local_28);
  if (this_00 != (FSlateInvalidationRoot *)0x0) {
    FSlateInvalidationRoot::Advanced_ResetInvalidation(this_00,true);
  }
  RefreshRenderingMode(this);
  this->bRenderRequested = true;
  return;
}

// OnRootInvalidated @ 146a86590

void __thiscall SRetainerWidget::OnRootInvalidated(SRetainerWidget *this)

{
  this->field_0x244 = 1;
  FSlateInvalidationRoot::InvalidateRootChildOrder((FSlateInvalidationRoot *)this,(SWidget *)0x0);
  return;
}

// PaintRetainedContentImpl @ 146a87820

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EPaintRetainedContentResult __thiscall
SRetainerWidget::PaintRetainedContentImpl
          (SRetainerWidget *this,FSlateInvalidationContext *param_1,FGeometry *param_2,int param_3)

{
  int *piVar1;
  TOptional<FSlateClippingState> *pTVar2;
  FWidgetStyle *pFVar3;
  FScriptContainerElement *pFVar4;
  UTextureRenderTarget2D *this_00;
  FWidgetRenderer *this_01;
  FSlateWindowElementList *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  SWindow *pSVar7;
  code *pcVar8;
  double dVar9;
  FDeprecateVector2DParameter FVar10;
  FSlateInvalidationContext *pFVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  EPaintRetainedContentResult EVar15;
  undefined8 *puVar16;
  UObject *pUVar17;
  FSlateApplication *pFVar18;
  SWidget *pSVar19;
  FTextureRenderTargetResource *pFVar20;
  TIntPoint<int>_u_0 *pTVar21;
  FStaticBasicLogRecord *pFVar22;
  undefined8 uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  ForAnyElementType FVar28;
  char cVar29;
  int iVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  uint uVar35;
  float fVar36;
  double dVar37;
  float local_160;
  float fStack_15c;
  undefined8 local_158;
  undefined8 local_150;
  FSlateInvalidationContext *local_148;
  undefined8 local_140;
  TOptional<FSlateClippingState> local_138;
  undefined1 local_e8 [8];
  TReferenceControllerBase<1> *local_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  TVector2<float>_u_0 local_c8;
  float local_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  undefined8 local_94;
  
  local_148 = param_1;
  if (((this->RenderOnPhase != false) && (this->LastTickedFrame != GFrameCounter)) &&
     (GFrameCounter % (ulonglong)(longlong)this->PhaseCount == (longlong)this->Phase)) {
    this->bRenderRequested = true;
    FSlateInvalidationRoot::InvalidateRootLayout
              ((FSlateInvalidationRoot *)&this->field_0x2a8,(SWidget *)0x0);
  }
  fVar34 = __real_3f000000;
  uVar35 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  local_d8 = (param_2->AccumulatedRenderTransform).M.M[0][0];
  fStack_d4 = (param_2->AccumulatedRenderTransform).M.M[0][1];
  fStack_d0 = (param_2->AccumulatedRenderTransform).M.M[1][0];
  fStack_cc = (param_2->AccumulatedRenderTransform).M.M[1][1];
  local_c8 = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
  local_158._4_4_ = SUB84(param_2->Size,4);
  fStack_15c = SQRT(fStack_cc * fStack_cc + fStack_d0 * fStack_d0) * (float)local_158._4_4_;
  local_158._0_4_ = SUB84(param_2->Size,0);
  local_160 = SQRT(fStack_d4 * fStack_d4 + local_d8 * local_d8) * (float)(undefined4)local_158;
  iVar25 = (int)ROUND(fStack_15c + fStack_15c + __real_3f000000) >> 1;
  iVar27 = (int)ROUND(local_160 + local_160 + __real_3f000000) >> 1;
  local_158._4_4_ = iVar25;
  local_158._0_4_ = iVar27;
  bVar13 = false;
  local_a4 = local_d8;
  fStack_a0 = fStack_d4;
  fStack_9c = fStack_d0;
  fStack_98 = fStack_cc;
  local_94 = local_c8;
  if (this->RenderOnInvalidation == false) {
    if ((iVar27 != (this->PreviousRenderSize).field0_0x0._s_0.X) ||
       (iVar25 != (this->PreviousRenderSize).field0_0x0._s_0.Y)) {
      this->bRenderRequested = true;
      FSlateInvalidationRoot::InvalidateRootLayout
                ((FSlateInvalidationRoot *)&this->field_0x2a8,(SWidget *)0x0);
      (this->PreviousRenderSize).field0_0x0 = local_158;
    }
  }
  else {
    this->bRenderRequested = true;
    fVar36 = (local_148->CullingRect).Bottom - (local_148->CullingRect).Top;
    fVar31 = (local_148->CullingRect).Right - (local_148->CullingRect).Left;
    local_140 = CONCAT44(fVar36,fVar31);
    iVar14 = (int)ROUND(fVar36 + fVar36 + fVar34) >> 1;
    iVar30 = (int)ROUND(fVar31 + fVar31 + fVar34) >> 1;
    local_150._4_4_ = iVar14;
    local_150._0_4_ = iVar30;
    FSlateWindowElementList::GetClippingState(local_148->WindowElementList,&local_138);
    cVar29 = local_138.bIsSet;
    FVar28.Data = local_138.TypedValue.StencilQuads.AllocatorInstance.Data;
    pFVar3 = local_148->WidgetStyle;
    fVar31 = (pFVar3->ColorAndOpacityTint).field0_0x0._s_0.B;
    if (fVar31 <= 0.0) {
      fVar31 = 0.0;
    }
    fVar36 = (pFVar3->ColorAndOpacityTint).field0_0x0._s_0.R;
    if (fVar36 <= 0.0) {
      fVar36 = 0.0;
    }
    if (__real_3f800000 <= fVar31) {
      fVar31 = __real_3f800000;
    }
    if (__real_3f800000 <= fVar36) {
      fVar36 = __real_3f800000;
    }
    fVar32 = (pFVar3->ColorAndOpacityTint).field0_0x0._s_0.G;
    if (fVar32 <= 0.0) {
      fVar32 = 0.0;
    }
    if (__real_3f800000 <= fVar32) {
      fVar32 = __real_3f800000;
    }
    fVar33 = (pFVar3->ColorAndOpacityTint).field0_0x0._s_0.A;
    if (fVar33 <= 0.0) {
      fVar33 = 0.0;
    }
    if (__real_3f800000 <= fVar33) {
      fVar33 = __real_3f800000;
    }
    uVar24 = CONCAT13((char)(int)(fVar33 * __real_437f0000 + fVar34),
                      CONCAT12((char)(int)(fVar36 * __real_437f0000 + fVar34),
                               CONCAT11((char)(int)(fVar32 * __real_437f0000 + fVar34),
                                        (char)(int)(fVar31 * __real_437f0000 + fVar34))));
    if ((((((iVar27 != (this->PreviousRenderSize).field0_0x0._s_0.X) ||
           (iVar25 != (this->PreviousRenderSize).field0_0x0._s_0.Y)) ||
          ((*(float *)&(this->PreviousAllottedGeometry).Size != *(float *)&param_2->Size ||
           (((((*(float *)&(this->PreviousAllottedGeometry).Size.field_0x4 !=
                *(float *)&(param_2->Size).field_0x4 ||
               ((this->PreviousAllottedGeometry).AbsolutePosition.field0_0x0._s_0.X !=
                (param_2->AbsolutePosition).field0_0x0._s_0.X)) ||
              ((this->PreviousAllottedGeometry).AbsolutePosition.field0_0x0._s_0.Y !=
               (param_2->AbsolutePosition).field0_0x0._s_0.Y)) ||
             (((this->PreviousAllottedGeometry).Position.field0_0x0._s_0.X !=
               (param_2->Position).field0_0x0._s_0.X ||
              ((this->PreviousAllottedGeometry).Position.field0_0x0._s_0.Y !=
               (param_2->Position).field0_0x0._s_0.Y)))) ||
            ((this->PreviousAllottedGeometry).Scale != param_2->Scale)))))) ||
         ((__real_38d1b717 <
           (float)((uint)((param_2->AccumulatedRenderTransform).M.M[0][0] -
                         (this->PreviousAllottedGeometry).AccumulatedRenderTransform.M.M[0][0]) &
                  uVar35) ||
          (__real_38d1b717 <
           (float)((uint)((param_2->AccumulatedRenderTransform).M.M[0][1] -
                         (this->PreviousAllottedGeometry).AccumulatedRenderTransform.M.M[0][1]) &
                  uVar35))))) ||
        (__real_38d1b717 <
         (float)((uint)((param_2->AccumulatedRenderTransform).M.M[1][0] -
                       (this->PreviousAllottedGeometry).AccumulatedRenderTransform.M.M[1][0]) &
                uVar35))) ||
       ((((__real_38d1b717 <
           (float)((uint)((param_2->AccumulatedRenderTransform).M.M[1][1] -
                         (this->PreviousAllottedGeometry).AccumulatedRenderTransform.M.M[1][1]) &
                  uVar35) ||
          ((this->PreviousAllottedGeometry).AccumulatedRenderTransform.Trans.field0_0x0._s_0.X !=
           (param_2->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X)) ||
         ((this->PreviousAllottedGeometry).AccumulatedRenderTransform.Trans.field0_0x0._s_0.Y !=
          (param_2->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y)) ||
        ((iVar30 != (this->PreviousClipRectSize).field0_0x0._s_0.X ||
         (iVar14 != (this->PreviousClipRectSize).field0_0x0._s_0.Y)))))) {
LAB_146a87c50:
      (this->PreviousRenderSize).field0_0x0 = local_158;
      FGeometry::operator=(&this->PreviousAllottedGeometry,param_2);
      pTVar2 = &this->PreviousClippingState;
      (this->PreviousClipRectSize).field0_0x0 = local_150;
      if (&local_138 != pTVar2) {
        bVar13 = (this->PreviousClippingState).bIsSet;
        if (local_138.bIsSet == false) {
          if (bVar13 != false) {
            pFVar4 = (pTVar2->TypedValue).StencilQuads.AllocatorInstance.Data;
            if (pFVar4 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar4);
            }
            (this->PreviousClippingState).bIsSet = false;
          }
        }
        else {
          if ((bVar13 != false) &&
             (pFVar4 = (pTVar2->TypedValue).StencilQuads.AllocatorInstance.Data,
             pFVar4 != (FScriptContainerElement *)0x0)) {
            FMemory::Free(pFVar4);
          }
          FVar28.Data = local_138.TypedValue.StencilQuads.AllocatorInstance.Data;
          piVar1 = &(this->PreviousClippingState).TypedValue.StencilQuads.ArrayMax;
          (pTVar2->TypedValue).StencilQuads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (this->PreviousClippingState).TypedValue.StencilQuads.ArrayNum =
               local_138.TypedValue.StencilQuads.ArrayNum;
          if (local_138.TypedValue.StencilQuads.ArrayNum == 0) {
            *piVar1 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x24,4,local_138.TypedValue.StencilQuads.ArrayNum,0,
                       (ForAnyElementType *)pTVar2,local_138.TypedValue.StencilQuads.ArrayNum,piVar1
                      );
            memcpy((pTVar2->TypedValue).StencilQuads.AllocatorInstance.Data,FVar28.Data,
                   (longlong)local_138.TypedValue.StencilQuads.ArrayNum * 0x24);
          }
          (this->PreviousClippingState).TypedValue.ScissorRect.bIsSet =
               local_138.TypedValue.ScissorRect.bIsSet;
          if (local_138.TypedValue.ScissorRect.bIsSet != false) {
            (this->PreviousClippingState).TypedValue.ScissorRect.TypedValue.TopLeft.field0_0x0 =
                 local_138.TypedValue.ScissorRect.TypedValue.TopLeft.field0_0x0;
            (this->PreviousClippingState).TypedValue.ScissorRect.TypedValue.TopRight.field0_0x0 =
                 local_138.TypedValue.ScissorRect.TypedValue.TopRight.field0_0x0;
            (this->PreviousClippingState).TypedValue.ScissorRect.TypedValue.BottomLeft.field0_0x0 =
                 local_138.TypedValue.ScissorRect.TypedValue.BottomLeft.field0_0x0;
            (this->PreviousClippingState).TypedValue.ScissorRect.TypedValue.BottomRight.field0_0x0 =
                 local_138.TypedValue.ScissorRect.TypedValue.BottomRight.field0_0x0;
            *(undefined4 *)
             &(this->PreviousClippingState).TypedValue.ScissorRect.TypedValue.field_0x20 =
                 local_138.TypedValue.ScissorRect.TypedValue._32_4_;
          }
          (this->PreviousClippingState).TypedValue.Flags = local_138.TypedValue.Flags;
          (this->PreviousClippingState).TypedValue.Debugging_StateIndex =
               local_138.TypedValue.Debugging_StateIndex;
          (this->PreviousClippingState).TypedValue.Debugging_StateIndexFromFrame =
               local_138.TypedValue.Debugging_StateIndexFromFrame;
          (this->PreviousClippingState).bIsSet = true;
        }
      }
      FSlateInvalidationRoot::InvalidateRootLayout
                ((FSlateInvalidationRoot *)&this->field_0x2a8,(SWidget *)0x0);
      FVar28.Data = local_138.TypedValue.StencilQuads.AllocatorInstance.Data;
      cVar29 = local_138.bIsSet;
    }
    else {
      if (local_138.bIsSet == (this->PreviousClippingState).bIsSet) {
        if (local_138.bIsSet != false) {
          if ((((local_138.TypedValue.Flags == (this->PreviousClippingState).TypedValue.Flags) &&
               (local_138.TypedValue.ScissorRect.bIsSet ==
                (this->PreviousClippingState).TypedValue.ScissorRect.bIsSet)) &&
              ((local_138.TypedValue.ScissorRect.bIsSet == false ||
               (bVar13 = FSlateClippingZone::operator==
                                   (&local_138.TypedValue.ScissorRect.TypedValue,
                                    &(this->PreviousClippingState).TypedValue.ScissorRect.TypedValue
                                   ), bVar13)))) &&
             (local_138.TypedValue.StencilQuads.ArrayNum ==
              (this->PreviousClippingState).TypedValue.StencilQuads.ArrayNum)) {
            bVar12 = CompareItems<FSlateClippingZone,int>
                               ((FSlateClippingZone *)FVar28.Data,
                                (FSlateClippingZone *)
                                (this->PreviousClippingState).TypedValue.StencilQuads.
                                AllocatorInstance.Data,local_138.TypedValue.StencilQuads.ArrayNum);
            bVar13 = false;
            if (bVar12) goto LAB_146a87c3f;
          }
          goto LAB_146a87c3a;
        }
      }
      else {
LAB_146a87c3a:
        bVar13 = true;
      }
LAB_146a87c3f:
      if (bVar13) goto LAB_146a87c50;
    }
    if ((param_3 != this->LastIncomingLayerId) ||
       (uVar24 != (this->PreviousColorAndOpacity).field0_0x0.Bits)) {
      (this->PreviousColorAndOpacity).field0_0x0.Bits = uVar24;
      this->LastIncomingLayerId = param_3;
      puVar16 = (undefined8 *)
                (**(code **)(*(longlong *)&this->field_0x2a8 + 0x20))(&this->field_0x2a8,local_e8);
      SWidget::Invalidate((SWidget *)*puVar16,Paint);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e0);
      FVar28.Data = local_138.TypedValue.StencilQuads.AllocatorInstance.Data;
      cVar29 = local_138.bIsSet;
    }
    if ((cVar29 != '\0') && ((FSlateClippingZone *)FVar28.Data != (FSlateClippingZone *)0x0)) {
      FMemory::Free(FVar28.Data);
    }
  }
  if (0 < Shared_MaxRetainerWorkPerFrame) {
    if ((Shared_RetainerWorkThisFrame.Value.bIsSet == false) ||
       (iVar25 = Shared_RetainerWorkThisFrame.Value.TypedValue,
       Shared_RetainerWorkThisFrame.FrameSet != GFrameCounter)) {
      iVar25 = 0;
    }
    if (Shared_MaxRetainerWorkPerFrame < iVar25) {
      local_150 = (TIntPoint<int>_u_0)this;
      TArray<SRetainerWidget_*,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>::
      AddUniqueImpl<SRetainerWidget_*>(&Shared_WaitingToRender,(SRetainerWidget **)&local_150);
      return Queued;
    }
  }
  if (this->bRenderRequested == false) {
    return NotPainted;
  }
  pUVar17 = FWeakObjectPtr::Get(&(this->OuterWorld).WeakPtr);
  if (((pUVar17 == (UObject *)0x0) || (*(longlong *)(pUVar17 + 0xf) == 0)) ||
     (bVar13 = IsInGameThread(), !bVar13)) {
    bVar13 = IsInGameThread();
    if (bVar13) {
      pFVar18 = FSlateApplication::Get();
      uVar23 = 0;
      goto LAB_146a87ea1;
    }
  }
  else {
    pFVar18 = FSlateApplication::Get();
    uVar23 = *(undefined8 *)(pUVar17 + 0xf);
LAB_146a87ea1:
    (**(code **)(**(longlong **)&pFVar18->field_0x60 + 0x168))
              (*(longlong **)&pFVar18->field_0x60,uVar23);
  }
  iVar25 = 0;
  if ((Shared_RetainerWorkThisFrame.Value.bIsSet != false) &&
     (Shared_RetainerWorkThisFrame.FrameSet == GFrameCounter)) {
    iVar25 = Shared_RetainerWorkThisFrame.Value.TypedValue;
  }
  Shared_RetainerWorkThisFrame.Value.bIsSet = true;
  Shared_RetainerWorkThisFrame.FrameSet = GFrameCounter;
  Shared_RetainerWorkThisFrame.Value.TypedValue = iVar25 + 1;
  this->LastTickedFrame = GFrameCounter;
  uVar26 = (int)ROUND((float)((uint)local_160 & uVar35) + (float)((uint)local_160 & uVar35) + fVar34
                     ) >> 1;
  uVar24 = (int)ROUND((float)((uint)fStack_15c & uVar35) + (float)((uint)fStack_15c & uVar35) +
                      fVar34) >> 1;
  uVar35 = uVar24;
  if (uVar24 < uVar26) {
    uVar35 = uVar26;
  }
  bVar13 = (uint)GRHIGlobals.MaxTextureDimensions.Value < uVar35;
  if ((uVar26 == 0) || (uVar24 == 0)) {
    bVar12 = true;
  }
  else {
    bVar12 = false;
  }
  if ((!bVar13) && (!bVar12)) {
    this->bInvalidSizeLogged = false;
    if ((uVar26 != 0) && (uVar24 != 0)) {
      dVar37 = (double)(float)local_94;
      this_00 = (this->RenderingResources->RenderTarget).field0_0x0.DebugPtr;
      this_01 = this->RenderingResources->WidgetRenderer;
      dVar9 = (double)local_94._4_4_;
      pSVar19 = TSharedPtr<SWidget,1>::operator->(&this->MyWidget);
      if (((byte)pSVar19->VisibilityAttribute & 0x19) != 0) {
        fVar34 = (float)(**(code **)(this_00->_padding_ + 0x368))(this_00);
        if (((int)fVar34 != uVar26) ||
           (fVar34 = (float)(**(code **)(this_00->_padding_ + 0x370))(this_00),
           (int)fVar34 != uVar24)) {
          pFVar20 = UTextureRenderTarget::GameThread_GetRenderTargetResource
                              ((UTextureRenderTarget *)this_00);
          if ((pFVar20 == (FTextureRenderTargetResource *)0x0) ||
             ((this_00->OverrideFormat).Value != '\x02')) {
            UTextureRenderTarget2D::InitCustomFormat(this_00,uVar26,uVar24,PF_B8G8R8A8,false);
            UTextureRenderTarget2D::UpdateResourceImmediate(this_00,true);
          }
          else {
            UTextureRenderTarget2D::ResizeTarget(this_00,uVar26,uVar24);
          }
        }
        pFVar11 = local_148;
        *(float *)&(this->SurfaceBrush).ImageSize = (float)uVar26;
        uVar35 = (uint)__xmm_80000000000000008000000000000000;
        uVar26 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
        *(float *)&(this->SurfaceBrush).ImageSize.field_0x4 = (float)uVar24;
        (this_01->ViewOffset).field0_0x0._s_0.X =
             (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) ^ uVar26,SUB84(dVar37,0) ^ uVar35);
        (this_01->ViewOffset).field0_0x0._s_0.Y =
             (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) ^ uVar26,SUB84(dVar9,0) ^ uVar35);
        this_01->bPrepassNeeded = false;
        pFVar5 = local_148->WindowElementList;
        bVar13 = IsInGameThread();
        if (((!bVar13) && (bVar13 = IsInSlateThread(), !bVar13)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsInGameThread() || IsInSlateThread()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Rendering\\DrawElements.h"
                                ,0xec,L""), bVar13)) {
          pcVar8 = (code *)swi(3);
          EVar15 = (*pcVar8)();
          return EVar15;
        }
        if ((((pFVar5->WeakPaintWindow).Object != (SWindow *)0x0) &&
            (pTVar6 = (pFVar5->WeakPaintWindow).WeakReferenceCount.ReferenceController,
            pTVar6 != (TReferenceControllerBase<1> *)0x0)) &&
           ((0 < (int)pTVar6->SharedReferenceCount &&
            (pSVar7 = pFVar5->RawPaintWindow, pSVar7 != (SWindow *)0x0)))) {
          pTVar21 = (TIntPoint<int>_u_0 *)&pSVar7->ViewportSize;
          if (*(float *)pTVar21 == 0.0) {
            pTVar21 = (TIntPoint<int>_u_0 *)&pSVar7->Size;
          }
          local_150 = (TIntPoint<int>_u_0)*(TIntPoint<int>_u_0 *)&pTVar21->_s_0;
          if (local_160 <= (float)(undefined4)local_150) {
            local_160 = (float)(undefined4)local_150;
          }
          if (fStack_15c <= (float)local_150._4_4_) {
            fStack_15c = (float)local_150._4_4_;
          }
        }
        FVar10._4_4_ = fStack_15c;
        FVar10._0_4_ = local_160;
        SWindow::Resize((SWindow *)(this->VirtualWindow).Object,FVar10);
        bVar13 = FWidgetRenderer::DrawInvalidationRoot
                           (this_01,&this->VirtualWindow,this_00,
                            (FSlateInvalidationRoot *)&this->field_0x2a8,pFVar11,
                            GDeferRetainedRenderingRenderThread != 0);
        this->bRenderRequested = false;
        local_158 = (TIntPoint<int>_u_0)this;
        TArray<SRetainerWidget_*,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>::Remove
                  (&Shared_WaitingToRender,(SRetainerWidget **)&local_158);
        this->LastDrawTime = (double)FApp::CurrentTime;
        return (uint)bVar13;
      }
    }
    return NotPainted;
  }
  if (this->bInvalidSizeLogged == false) {
    this->bInvalidSizeLogged = true;
    if (bVar13) {
      if ((byte)LogUMG._0_1_ < 3) goto LAB_146a881aa;
      pFVar22 = &::LOG_Static;
    }
    else {
      if ((byte)LogUMG._0_1_ < 3) goto LAB_146a881aa;
      pFVar22 = &::LOG_Static;
    }
    UE::Logging::Private::BasicLog<3>(pFVar22,(FLogCategoryBase *)&LogUMG);
  }
LAB_146a881aa:
  return (bVar13 ^ 1) + TextureSizeTooBig;
}

// PaintSlowPath @ 146a88200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SRetainerWidget::PaintSlowPath(SRetainerWidget *this,FSlateInvalidationContext *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  TVector2<float>_u_0_s_0 TVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  FGeometry *pFVar10;
  undefined1 auStackY_158 [32];
  undefined8 local_118;
  float local_110;
  float fStack_10c;
  TTransform2<float> local_108;
  TTransform2<float> local_f0;
  TTransform2<float> local_d8;
  FDeprecateSlateVector2D local_c0;
  float local_b8;
  float fStack_b4;
  float local_b0;
  TVector2<float>_u_0 local_ac;
  TTransform2<float> local_a4;
  byte local_8c;
  FGeometry local_88;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_158;
  FHittestGrid::Clear(*(FHittestGrid **)&this->field_0x228);
  pFVar10 = SWidget::GetPaintSpaceGeometry((SWidget *)&this[-1].field_0x338);
  local_108.M.M[0][1] = 0.0;
  local_108.M.M[1][0] = 0.0;
  local_d8.Trans.field0_0x0 = (TVector2<float>_u_0)0x0;
  fVar1 = pFVar10->Scale;
  TVar6 = (pFVar10->AbsolutePosition).field0_0x0._s_0;
  fVar2 = (pFVar10->AccumulatedRenderTransform).M.M[0][0];
  fVar3 = (pFVar10->AccumulatedRenderTransform).M.M[0][1];
  fVar4 = (pFVar10->AccumulatedRenderTransform).M.M[1][0];
  fVar5 = (pFVar10->AccumulatedRenderTransform).M.M[1][1];
  local_b8 = 1.0;
  fStack_b4 = 0.0;
  local_108.M.M[1][1] = __real_3f800000 / (fVar1 * fVar1);
  local_b0 = 0.0;
  local_f0.M.M[0][1] = 0.0;
  local_f0.M.M[1][0] = 0.0;
  local_108.Trans.field0_0x0._s_0.X = TVar6.X;
  uVar7 = local_108.Trans.field0_0x0._s_0.X;
  local_108.M.M[0][0] = local_108.M.M[1][1] * fVar1;
  local_108.M.M[1][1] = local_108.M.M[1][1] * fVar1;
  local_108.Trans.field0_0x0._s_0.Y = TVar6.Y;
  uVar8 = local_108.Trans.field0_0x0._s_0.Y;
  local_118._4_4_ =
       local_108.M.M[1][1] * (pFVar10->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y +
       (float)((uint)(local_108.Trans.field0_0x0._s_0.Y * local_108.M.M[1][1]) ^
              __xmm_80000000800000008000000080000000);
  local_118._0_4_ =
       local_108.M.M[0][0] * (pFVar10->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X +
       (float)((uint)(local_108.Trans.field0_0x0._s_0.X * local_108.M.M[0][0]) ^
              __xmm_80000000800000008000000080000000);
  local_108.Trans.field0_0x0 = local_118;
  local_c0 = pFVar10->Size;
  local_ac = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_108.M.M[0][0] = SQRT(fVar3 * fVar3 + fVar2 * fVar2) * local_108.M.M[0][0];
  local_108.M.M[1][1] = SQRT(fVar5 * fVar5 + fVar4 * fVar4) * local_108.M.M[1][1];
  local_d8.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
  local_d8.M.M[0][1] = _UNK_15076b184;
  local_d8.M.M[1][0] = _UNK_15076b188;
  local_d8.M.M[1][1] = _UNK_15076b18c;
  local_f0.M.M[0][0] = fVar1;
  local_f0.M.M[1][1] = fVar1;
  local_f0.Trans.field0_0x0 = (TVector2<float>_u_0)TVar6;
  Concatenate<TTransform2<float>_>(&local_a4,&local_f0,&local_d8);
  local_8c = local_8c & 0xfe;
  fStack_b4 = (float)uVar7;
  local_b0 = (float)uVar8;
  local_118 = (TVector2<float>_u_0)local_c0;
  local_110 = (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
  local_d8.M.M[0][0] = 1.0;
  local_d8.M.M[0][1] = 0.0;
  local_d8.M.M[1] = (float  [2])((ulonglong)local_d8.M.M[1] & 0xffffffff00000000);
  fStack_10c = (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
  local_f0.M.M[0][0] = fVar1;
  local_f0.M.M._4_8_ = TVar6;
  local_b8 = fVar1;
  local_ac._s_0 = TVar6;
  FGeometry::FGeometry
            (&local_88,(FDeprecateVector2DParameter *)&local_118,(FSlateLayoutTransform *)&local_d8,
             &local_108,(FDeprecateVector2DParameter *)&local_110,(FSlateLayoutTransform *)&local_f0
             ,&local_a4);
  iVar9 = SCompoundWidget::OnPaint
                    ((SCompoundWidget *)&this[-1].field_0x338,param_1->PaintArgs,&local_88,
                     &param_1->CullingRect,param_1->WindowElementList,param_1->IncomingLayerId,
                     param_1->WidgetStyle,param_1->bParentEnabled);
  return iVar9;
}

// RefreshRenderingMode @ 146a8d4c0

void __thiscall SRetainerWidget::RefreshRenderingMode(SRetainerWidget *this)

{
  EWidgetUpdateFlags EVar1;
  bool bVar2;
  EWidgetUpdateFlags EVar3;
  
  if ((this->bEnableRetainedRenderingDesire == false) || (GEnableRetainedRendering == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (this->bEnableRetainedRendering != bVar2) {
    EVar1 = this->field_0x38;
    this->bEnableRetainedRendering = bVar2;
    EVar3 = EVar1 | NeedsVolatilePrepass;
    if (bVar2 == false) {
      EVar3 = EVar1 & ~NeedsVolatilePrepass;
    }
    this->field_0x38 = EVar3;
    FWidgetProxyHandle::UpdateWidgetFlags
              ((FWidgetProxyHandle *)&this->field_0x18,(SWidget *)this,EVar1,EVar3);
    FSlateInvalidationRoot::InvalidateRootChildOrder
              ((FSlateInvalidationRoot *)&this->field_0x2a8,(SWidget *)0x0);
    return;
  }
  return;
}

// RequestRender @ 146a90ad0

void __thiscall SRetainerWidget::RequestRender(SRetainerWidget *this)

{
  this->bRenderRequested = true;
  FSlateInvalidationRoot::InvalidateRootChildOrder
            ((FSlateInvalidationRoot *)&this->field_0x2a8,(SWidget *)0x0);
  return;
}

// SetContent @ 146a92c80

void __thiscall SRetainerWidget::SetContent(SRetainerWidget *this,TSharedRef<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWidget *local_18;
  FSharedReferencer<1> local_10;
  
  local_18 = param_1->Object;
  local_10.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MyWidget != (TSharedPtr<SWidget,1> *)&local_18) {
    (this->MyWidget).Object = local_18;
    local_18 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyWidget).SharedReferenceCount,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  FSlotBase::DetatchParentFromContent((FSlotBase *)&this->field_0x238);
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x250;
  *(SWidget **)&this->field_0x248 = pSVar2;
  *(TReferenceControllerBase<1> **)&this->field_0x250 = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)&this->field_0x238);
  return;
}

// SetEffectMaterial @ 146a93600

void __thiscall
SRetainerWidget::SetEffectMaterial(SRetainerWidget *this,UMaterialInterface *param_1)

{
  int iVar1;
  FRetainerWidgetRenderingResources *pFVar2;
  UClass *pUVar3;
  UPackage *pUVar4;
  UMaterialInstanceDynamic *pUVar5;
  
  if (param_1 == (UMaterialInterface *)0x0) {
    (this->RenderingResources->DynamicEffect).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
    pUVar5 = (UMaterialInstanceDynamic *)
             (this->RenderingResources->RenderTarget).field0_0x0.DebugPtr;
  }
  else {
    pUVar3 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pUVar4 = GetTransientPackage();
      param_1 = (UMaterialInterface *)
                UMaterialInstanceDynamic::Create(param_1,(UObject *)pUVar4,(FName)0x0);
    }
    pFVar2 = this->RenderingResources;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UMaterialInstanceDynamic *)param_1 != (UMaterialInstanceDynamic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (pFVar2->DynamicEffect).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)param_1;
    pUVar5 = (this->RenderingResources->DynamicEffect).field0_0x0.DebugPtr;
  }
  FSlateBrush::SetResourceObject(&this->SurfaceBrush,(UObject *)pUVar5);
  UpdateWidgetRenderer(this);
  return;
}

// SetRenderingPhase @ 146a94af0

void __thiscall SRetainerWidget::SetRenderingPhase(SRetainerWidget *this,int param_1,int param_2)

{
  this->Phase = param_1;
  this->PhaseCount = param_2;
  return;
}

// SetRetainedRendering @ 146a94b10

void __thiscall SRetainerWidget::SetRetainedRendering(SRetainerWidget *this,bool param_1)

{
  if (this->bEnableRetainedRenderingDesire != param_1) {
    this->bEnableRetainedRenderingDesire = param_1;
    OnRetainerModeChanged(this);
    return;
  }
  return;
}

// SetTextureParameter @ 146a94c60

void __thiscall SRetainerWidget::SetTextureParameter(SRetainerWidget *this,FName param_1)

{
  this->DynamicEffectTextureParameter = param_1;
  return;
}

// SetWorld @ 146a95be0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall SRetainerWidget::SetWorld(SRetainerWidget *this,UWorld *param_1)

{
  UWorld *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->OuterWorld).WeakPtr,(FObjectPtr)local_res8);
  return;
}

// ShouldBeRenderingOffscreen @ 146a95c80

bool __thiscall SRetainerWidget::ShouldBeRenderingOffscreen(SRetainerWidget *this)

{
  if ((this->bEnableRetainedRenderingDesire != false) && (GEnableRetainedRendering != 0)) {
    return true;
  }
  return false;
}

// UpdateWidgetRenderer @ 146a9c070

void __thiscall SRetainerWidget::UpdateWidgetRenderer(SRetainerWidget *this)

{
  byte bVar1;
  UTextureRenderTarget2D *pUVar2;
  FWidgetRenderer *pFVar3;
  
  if (this->RenderingResources->WidgetRenderer == (FWidgetRenderer *)0x0) {
    pFVar3 = ::operator_new(0x40);
    if (pFVar3 == (FWidgetRenderer *)0x0) {
      pFVar3 = (FWidgetRenderer *)0x0;
    }
    else {
      pFVar3 = FWidgetRenderer::FWidgetRenderer(pFVar3,true,true);
    }
    this->RenderingResources->WidgetRenderer = pFVar3;
  }
  pFVar3 = this->RenderingResources->WidgetRenderer;
  pUVar2 = (this->RenderingResources->RenderTarget).field0_0x0.DebugPtr;
  FWidgetRenderer::SetUseGammaCorrection(pFVar3,true);
  FWidgetRenderer::SetApplyColorDeficiencyCorrection(pFVar3,false);
  pFVar3->bPrepassNeeded = false;
  pFVar3->bClearHitTestGrid = false;
  if ((pUVar2 != (UTextureRenderTarget2D *)0x0) &&
     (bVar1 = *(byte *)((longlong)&pUVar2->_padding_ + 6), (bVar1 & 1) != 0)) {
    *(undefined4 *)&pUVar2->_padding_ = 0x3f800000;
    *(byte *)((longlong)&pUVar2->_padding_ + 6) = bVar1 & 0xfe;
    (**(code **)(pUVar2->_padding_ + 0x328))(pUVar2);
  }
  return;
}

