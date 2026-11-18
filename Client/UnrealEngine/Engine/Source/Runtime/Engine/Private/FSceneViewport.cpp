// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 110

// FSceneViewport @ 148692460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FSceneViewport * __thiscall
FSceneViewport::FSceneViewport
          (FSceneViewport *this,FViewportClient *param_1,TSharedPtr<SViewport,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  bool bVar2;
  FDebugCanvasDrawer *pFVar3;
  FSlateRenderTargetRHI *pFVar4;
  FEngineFontServices *this_00;
  TMulticastDelegate<void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy> *this_01;
  FSlateRenderTargetRHI *pFVar5;
  FSlateRenderTargetRHI *pFVar6;
  FSlateApplication *pFVar7;
  longlong local_res8;
  
  this->_padding_ = (longlong)&___7FViewportFrame__6B_;
  FViewport::FViewport((FViewport *)&this->_padding_,param_1);
  this->_padding_ = (longlong)&_vftable__for__FViewportFrame__;
  this->_padding_ = (longlong)&_vftable__for__FRenderTarget__;
  this->_padding_ = (longlong)&_vftable__for__FRenderResource__;
  this->_padding_ = (longlong)&_vftable__for__ISlateViewport__;
  FReply::FReply(&this->CurrentReplyState,false);
  pFVar6 = (FSlateRenderTargetRHI *)0x0;
  *(undefined8 *)&this->KeyStateMap = 0;
  *(undefined8 *)&(this->KeyStateMap).field_0x8 = 0;
  *(undefined8 *)&(this->KeyStateMap).field_0x20 = 0;
  *(undefined4 *)&(this->KeyStateMap).field_0x28 = 0;
  *(undefined4 *)&(this->KeyStateMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->KeyStateMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->KeyStateMap).field_0x34 = 0;
  *(undefined8 *)&(this->KeyStateMap).field_0x40 = 0;
  *(undefined4 *)&(this->KeyStateMap).field_0x48 = 0;
  (this->CachedCursorPos).field0_0x0 = (TIntPoint<int>_u_0)0xffffffffffffffff;
  FGeometry::FGeometry(&this->CachedGeometry);
  (this->PreCaptureCursorPos).field0_0x0 = (TIntPoint<int>_u_0)0xffffffffffffffff;
  (this->SoftwareCursorPosition).field0_0x0._s_0.X = 0.0;
  (this->SoftwareCursorPosition).field0_0x0._s_0.Y = 0.0;
  this->bIsSoftwareCursorVisible = false;
  pFVar3 = ::operator_new(0x58);
  if (pFVar3 == (FDebugCanvasDrawer *)0x0) {
    pFVar3 = (FDebugCanvasDrawer *)0x0;
  }
  else {
    pFVar3->_padding_ = (longlong)&___7ICustomSlateElement__6B_;
    *(undefined2 *)&pFVar3->_padding_ = 0;
    pFVar3->_padding_ = (longlong)&___7FGCObject__6B_;
    FGCObject::RegisterGCObject((FGCObject *)&pFVar3->_padding_);
    pFVar3->_padding_ = (longlong)&FDebugCanvasDrawer::_vftable__for__ICustomSlateElement__;
    pFVar3->_padding_ = (longlong)&FDebugCanvasDrawer::_vftable__for__FGCObject__;
    (pFVar3->GameThreadCanvas).Object = (FCanvas *)0x0;
    (pFVar3->GameThreadCanvas).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (pFVar3->RenderThreadCanvas).Object = (FCanvas *)0x0;
    (pFVar3->RenderThreadCanvas).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar4 = ::operator_new(0x28);
    pFVar5 = pFVar6;
    if (pFVar4 != (FSlateRenderTargetRHI *)0x0) {
      FRenderTarget::FRenderTarget((FRenderTarget *)pFVar4);
      pFVar4->_padding_ = 0;
      pFVar4->_padding_ = (longlong)&___7FSlateCanvasRenderTarget__6B_;
      pFVar4->_padding_ = 0;
      pFVar4->_padding_ = 0;
      pFVar5 = pFVar4;
    }
    pFVar3->RenderTarget = (FSlateCanvasRenderTarget *)pFVar5;
    (pFVar3->LayerTexture).field0_0x0.DebugPtr = (UTextureRenderTarget2D *)0x0;
    pFVar3->LayerResource = (FTextureRenderTargetResource *)0x0;
    pFVar3->LayerID = 0xffffffff;
    bVar2 = FEngineFontServices::IsInitialized();
    if (bVar2) {
      this_00 = FEngineFontServices::Get();
      this_01 = FEngineFontServices::OnReleaseResources(this_00);
      TMulticastDelegateRegistration<void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
      ::AddRaw<FDebugCanvasDrawer>
                ((TMulticastDelegateRegistration<void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
                  *)this_01,(FDebugCanvasDrawer *)&local_res8,(pmf_cf5e6fd9 *)pFVar3);
    }
  }
  (this->DebugCanvasDrawer).Object = pFVar3;
  pFVar4 = ::operator_new(0x18);
  bVar2 = true;
  pFVar5 = pFVar6;
  if (pFVar4 != (FSlateRenderTargetRHI *)0x0) {
    *(undefined4 *)&((TRefCountPtr<FRHITexture> *)&pFVar4->_padding_)->Reference = 1;
    pFVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFDebugCanvasDrawer__U__DefaultDeleter_VFDebugCanvasDrawer___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&((TRefCountPtr<FRHITexture> *)&pFVar4->_padding_)->Reference + 4) = 1
    ;
    pFVar4->_padding_ = (longlong)pFVar3;
    pFVar5 = pFVar4;
  }
  (this->DebugCanvasDrawer).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)pFVar5;
  (this->ViewportWidget).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->ViewportWidget).WeakReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  (this->DebugCanvas).Object = (SDebugCanvas *)0x0;
  (this->DebugCanvas).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->NumMouseSamplesX = 0;
  this->NumMouseSamplesY = 0;
  (this->MouseDelta).field0_0x0 = (TIntPoint<int>_u_0)0x0;
  this->bIsCursorVisible = true;
  this->bShouldCaptureMouseOnActivate = true;
  this->bRequiresVsync = false;
  if (param_2->Object != (SViewport *)0x0) {
    bVar2 = param_2->Object->bRenderDirectlyToWindow == false;
  }
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x10;
  this->bUseSeparateRenderTarget = bVar2;
  *(undefined8 *)&this->OnSceneViewportResizeDel = 0;
  *(undefined8 *)&(this->OnSceneViewportResizeDel).field_0x8 = 0;
  *(undefined4 *)&(this->OnSceneViewportResizeDel).field_0x10 = 0;
  (this->MousePosBeforeHiddenDueToCapture).field0_0x0 = (TIntPoint<int>_u_0)0xffffffffffffffff;
  (this->RTTSize).field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->BufferedSlateHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BufferedSlateHandles).ArrayNum = 0;
  (this->BufferedSlateHandles).ArrayMax = 0;
  (this->BufferedRenderTargetsRHI).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BufferedRenderTargetsRHI).ArrayNum = 0;
  (this->BufferedRenderTargetsRHI).ArrayMax = 0;
  (this->BufferedShaderResourceTexturesRHI).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BufferedShaderResourceTexturesRHI).ArrayNum = 0;
  (this->BufferedShaderResourceTexturesRHI).ArrayMax = 0;
  (this->RenderTargetTextureRenderThreadRHI).Reference = (FRHITexture *)0x0;
  (this->ViewportGammaOverride).bIsSet = false;
  this->bForceSeparateRenderTarget = false;
  this->bIsResizing = false;
  this->bForceViewportSize = false;
  this->bPlayInEditorIsSimulate = false;
  this->bCursorHiddenDueToCapture = false;
  this->bHDRViewport = false;
  this->SceneTargetFormat = PF_A2B10G10R10;
  this->CurrentBufferedTargetIndex = 0;
  this->NextBufferedTargetIndex = 0;
  this->NumTouches = 0;
  this->DisplayColorGamut = sRGB_D65;
  this->DisplayOutputFormat = SDR_sRGB;
  *(FName *)((longlong)&this->_padding_ + 4) = NAME_SceneViewport;
  pFVar5 = ::operator_new(0x40);
  if (pFVar5 != (FSlateRenderTargetRHI *)0x0) {
    local_res8 = 0;
    pFVar6 = FSlateRenderTargetRHI::FSlateRenderTargetRHI(pFVar5,(FRHITexture *)&local_res8,0,0);
  }
  this->RenderThreadSlateTexture = pFVar6;
  if (param_1 != (FViewportClient *)0x0) {
    bVar2 = (bool)(**(code **)((longlong)*param_1 + 0x1a0))(param_1);
    this->bShouldCaptureMouseOnActivate = bVar2;
  }
  if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
    pFVar7 = FSlateApplication::Get();
    TMulticastDelegateRegistration<void___cdecl(void_*),FDefaultDelegateUserPolicy>::
    AddRaw<FSceneViewport>
              ((TMulticastDelegateRegistration<void___cdecl(void_*),FDefaultDelegateUserPolicy> *)
               (*(longlong *)&pFVar7->field_0x60 + 0x38),(FSceneViewport *)&local_res8,
               (pmf_1ac5a07e *)this);
    pFVar7 = FSlateApplication::Get();
    TMulticastDelegateRegistration<void___cdecl(void_*),FDefaultDelegateUserPolicy>::
    AddRaw<FSceneViewport>
              ((TMulticastDelegateRegistration<void___cdecl(void_*),FDefaultDelegateUserPolicy> *)
               (*(longlong *)&pFVar7->field_0x60 + 0x58),(FSceneViewport *)&local_res8,
               (pmf_1ac5a07e *)this);
    pFVar7 = FSlateApplication::Get();
    TMulticastDelegateRegistration<void___cdecl(void_*),FDefaultDelegateUserPolicy>::
    AddRaw<FSceneViewport>
              ((TMulticastDelegateRegistration<void___cdecl(void_*),FDefaultDelegateUserPolicy> *)
               (*(longlong *)&pFVar7->field_0x60 + 0x78),(FSceneViewport *)&local_res8,
               (pmf_1ac5a07e *)this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FSceneViewport @ 14869a2e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FSceneViewport::~FSceneViewport(FSceneViewport *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FRHITexture *this_00;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  void *pvVar5;
  FSlateApplication *pFVar6;
  
  this->_padding_ = (longlong)&_vftable__for__FViewportFrame__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__FRenderTarget__;
  this->_padding_ = (longlong)&_vftable__for__FRenderResource__;
  this->_padding_ = (longlong)&_vftable__for__ISlateViewport__;
  UpdateViewportRHI((FSceneViewport *)&this->_padding_,true,0,0,Windowed,PF_Unknown);
  FlushRenderingCommands();
  if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
    pFVar6 = FSlateApplication::Get();
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               (*(longlong *)&pFVar6->field_0x60 + 0x38),this);
    pFVar6 = FSlateApplication::Get();
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               (*(longlong *)&pFVar6->field_0x60 + 0x58),this);
    pFVar6 = FSlateApplication::Get();
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               (*(longlong *)&pFVar6->field_0x60 + 0x78),this);
  }
  this_00 = (this->RenderTargetTextureRenderThreadRHI).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  DestructItems<TRefCountPtr<FRHITexture>,int>
            ((TRefCountPtr<FRHITexture> *)
             (this->BufferedShaderResourceTexturesRHI).AllocatorInstance.Data,
             (this->BufferedShaderResourceTexturesRHI).ArrayNum);
  pFVar3 = (this->BufferedShaderResourceTexturesRHI).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<TRefCountPtr<FRHITexture>,int>
            ((TRefCountPtr<FRHITexture> *)(this->BufferedRenderTargetsRHI).AllocatorInstance.Data,
             (this->BufferedRenderTargetsRHI).ArrayNum);
  pFVar3 = (this->BufferedRenderTargetsRHI).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->BufferedSlateHandles).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSceneViewportResizeDel);
  pTVar4 = (this->DebugCanvas).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  pTVar4 = (this->ViewportWidget).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DebugCanvasDrawer).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->KeyStateMap).field_0x48 = 0;
  pvVar5 = *(void **)&(this->KeyStateMap).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FKey,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKey,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKey,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KeyStateMap);
  FReply::~FReply(&this->CurrentReplyState);
  this->_padding_ = (longlong)&___7ISlateViewport__6B_;
  FViewport::~FViewport((FViewport *)&this->_padding_);
  return;
}

// operator() @ 14869f460

void __thiscall
`FSceneViewport::UpdateViewportRHI'::__l40::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  iVar5 = *(int *)((longlong)this + 8);
  uVar6 = 0;
  if (0 < iVar5) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)(lVar7 + *(longlong *)this);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,1);
      }
      iVar5 = *(int *)((longlong)this + 8);
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < iVar5);
  }
  plVar1 = *(longlong **)((longlong)this + 0x10);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014869f511. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,1);
  return;
}

// AcquireFocusAndCapture @ 1486a3e90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FReply * __thiscall
FSceneViewport::AcquireFocusAndCapture
          (FSceneViewport *this,FReply *__return_storage_ptr__,TIntPoint<int> param_1,
          EFocusCause param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  UGameInstance *this_00;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  atomic<int> aVar7;
  Type TVar8;
  FReply *pFVar9;
  UWorld *this_01;
  APlayerController *pAVar10;
  FSlateApplication *pFVar11;
  FDeprecateSlateVector2D FVar12;
  TSharedRef<SWidget,1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  SViewport *pSVar15;
  bool bVar16;
  TIntPoint<int>_u_0 local_res8;
  int iStackX_1c;
  SWindow *local_1d8;
  TReferenceControllerBase<1> *local_1d0;
  TSharedRef<SWidget,1> local_1c8;
  TSharedRef<SWidget,1> local_1b8;
  SViewport *local_1a8;
  TReferenceControllerBase<1> *local_1a0;
  TSharedRef<SWidget,1> local_198;
  TSharedRef<SWidget,1> local_188;
  FDisplayMetrics local_178;
  FReply local_f8;
  
  this->bShouldCaptureMouseOnActivate = false;
  FReply::FReply(&local_f8,true);
  local_f8.bPreventThrottling = 1;
  FReply::FReply(__return_storage_ptr__,&local_f8);
  FReply::~FReply(&local_f8);
  pTVar14 = (this->ViewportWidget).WeakReferenceCount.ReferenceController;
  pSVar15 = (SViewport *)0x0;
  if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
LAB_1486a3f39:
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar16) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FReply *)(*pcVar4)();
      return pFVar9;
    }
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar16) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FReply *)(*pcVar4)();
      return pFVar9;
    }
  }
  else {
    aVar2 = pTVar14->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar14 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1486a3f39;
      }
      LOCK();
      aVar7 = pTVar14->SharedReferenceCount;
      bVar16 = aVar2 == aVar7;
      if (bVar16) {
        pTVar14->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar7 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar7;
    } while (!bVar16);
    pSVar15 = (this->ViewportWidget).Object;
    if (pSVar15 == (SViewport *)0x0) goto LAB_1486a3f39;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1c8.Object = (SWidget *)pSVar15;
  local_1c8.SharedReferenceCount.ReferenceController = pTVar14;
  FReply::SetUserFocus(__return_storage_ptr__,&local_1c8,param_2,false);
  this_01 = (UWorld *)(**(code **)(*(longlong *)this->_padding_ + 0x30))();
  if ((((this_01 == (UWorld *)0x0) || (bVar16 = UWorld::IsGameWorld(this_01), !bVar16)) ||
      (this_00 = (this_01->OwningGameInstance).field0_0x0.DebugPtr, this_00 == (UGameInstance *)0x0)
      ) || ((pAVar10 = UGameInstance::GetFirstLocalPlayerController(this_00,(UWorld *)0x0),
            pAVar10 == (APlayerController *)0x0 &&
            (bVar16 = UWorld::IsPlayInEditor(this_01), !bVar16)))) {
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar13 = &local_188;
    local_188.Object = (SWidget *)pSVar15;
    local_188.SharedReferenceCount.ReferenceController = pTVar14;
  }
  else {
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
    }
    (__return_storage_ptr__->MouseCaptor).Object = (SWidget *)pSVar15;
    if (pTVar14 != (__return_storage_ptr__->MouseCaptor).WeakReferenceCount.ReferenceController) {
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->WeakReferenceCount = (atomic<int>)((int)pTVar14->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar3 = (__return_storage_ptr__->MouseCaptor).WeakReferenceCount.ReferenceController;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar3->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar3->_padding_ + 8))();
        }
      }
      (__return_storage_ptr__->MouseCaptor).WeakReferenceCount.ReferenceController = pTVar14;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    cVar5 = (**(code **)(*(longlong *)this->_padding_ + 0x1a8))();
    if (cVar5 != '\0') {
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_1b8.Object = (SWidget *)pSVar15;
      local_1b8.SharedReferenceCount.ReferenceController = pTVar14;
      FReply::LockMouseToWidget(__return_storage_ptr__,&local_1b8);
    }
    pAVar10 = UGameInstance::GetFirstLocalPlayerController
                        ((this_01->OwningGameInstance).field0_0x0.DebugPtr,(UWorld *)0x0);
    if ((pAVar10 == (APlayerController *)0x0) ||
       (cVar5 = (**(code **)(pAVar10->_padding_ + 0xf08))(pAVar10), cVar5 == '\0')) {
      bVar16 = false;
    }
    else {
      bVar16 = true;
    }
    cVar5 = (**(code **)(*(longlong *)this->_padding_ + 0x1b8))();
    if ((cVar5 != '\0') && (bVar16)) {
      this->bCursorHiddenDueToCapture = true;
      (this->MousePosBeforeHiddenDueToCapture).field0_0x0._s_0 =
           (TIntPoint<int>_u_0_s_0)param_1.field0_0x0;
      pFVar11 = FSlateApplication::Get();
      pcVar4 = *(code **)(*(longlong *)pFVar11 + 0x28);
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_1a8 = pSVar15;
      local_1a0 = pTVar14;
      (*pcVar4)(pFVar11,&local_1d8,&local_1a8);
      pFVar11 = FSlateApplication::Get();
      bVar6 = FSlateApplication::GetTransformFullscreenMouseInput(pFVar11);
      if ((bVar6) && (local_1d8 != (SWindow *)0x0)) {
        if ((local_1d8 == (SWindow *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar9 = (FReply *)(*pcVar4)();
          return pFVar9;
        }
        TVar8 = SWindow::GetWindowMode(local_1d8);
        if (TVar8 == Fullscreen) {
          local_178.MonitorInfo.ArrayNum = 0;
          local_178.MonitorInfo.ArrayMax = 0;
          local_178.PrimaryDisplayWorkAreaRect.Left = 0;
          local_178.PrimaryDisplayWorkAreaRect.Top = 0;
          local_178.MonitorInfo.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_178.PrimaryDisplayWorkAreaRect.Right = 0;
          local_178.PrimaryDisplayWorkAreaRect.Bottom = 0;
          local_178.VirtualDisplayRect.Left = 0;
          local_178.VirtualDisplayRect.Top = 0;
          local_178.VirtualDisplayRect.Right = 0;
          local_178.VirtualDisplayRect.Bottom = 0;
          local_178.TitleSafePaddingSize.field0_0x0._s_0.X = 0.0;
          local_178.TitleSafePaddingSize.field0_0x0._s_0.Y = 0.0;
          local_178.TitleSafePaddingSize.field0_0x0._s_0.Z = 0.0;
          local_178.TitleSafePaddingSize.field0_0x0._s_0.W = 0.0;
          local_178.ActionSafePaddingSize.field0_0x0._s_0.X = 0.0;
          local_178.ActionSafePaddingSize.field0_0x0._s_0.Y = 0.0;
          local_178.ActionSafePaddingSize.field0_0x0._s_0.Z = 0.0;
          local_178.ActionSafePaddingSize.field0_0x0._s_0.W = 0.0;
          pFVar11 = FSlateApplication::Get();
          FSlateApplicationBase::GetCachedDisplayMetrics
                    ((FSlateApplicationBase *)pFVar11,&local_178);
          if ((local_1d8 == (SWindow *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            pFVar9 = (FReply *)(*pcVar4)();
            return pFVar9;
          }
          FVar12 = SWindow::GetSizeInScreen(local_1d8);
          iStackX_1c = param_1.field0_0x0._4_4_;
          local_res8._s_0.Y =
               (int)(((float)local_178.PrimaryDisplayHeight / *(float *)((longlong)FVar12 + 4)) *
                    (float)iStackX_1c);
          local_res8._s_0.X =
               (int)(((float)local_178.PrimaryDisplayWidth / *(float *)FVar12) *
                    (float)param_1.field0_0x0._0_4_);
          (this->MousePosBeforeHiddenDueToCapture).field0_0x0 = local_res8;
          DestructItems<FMonitorInfo,int>
                    ((FMonitorInfo *)local_178.MonitorInfo.AllocatorInstance.Data,
                     local_178.MonitorInfo.ArrayNum);
          if ((FMonitorInfo *)local_178.MonitorInfo.AllocatorInstance.Data != (FMonitorInfo *)0x0) {
            FMemory::Free(local_178.MonitorInfo.AllocatorInstance.Data);
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1d0)
      ;
    }
    if ((this->bCursorHiddenDueToCapture == false) && (bVar16)) goto LAB_1486a42c2;
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar13 = &local_198;
    local_198.Object = (SWidget *)pSVar15;
    local_198.SharedReferenceCount.ReferenceController = pTVar14;
  }
  FReply::UseHighPrecisionMouseMovement(__return_storage_ptr__,pTVar13);
LAB_1486a42c2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  return __return_storage_ptr__;
}

// ApplyModifierKeys @ 1486a61d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FSceneViewport::ApplyModifierKeys(FSceneViewport *this,FModifierKeysState *param_1,ulong64 param_2)

{
  longlong *plVar1;
  code *pcVar2;
  float fVar3;
  int *piVar4;
  IPlatformInputDeviceMapper *pIVar5;
  FViewport *pFVar6;
  FViewport *pFVar7;
  FViewport *pFVar8;
  FInputDeviceId local_res8 [2];
  FInputKeyEventArgs local_88;
  
  if (this->_padding_ != 0) {
    pFVar8 = (FViewport *)&this->_padding_;
    piVar4 = (int *)(**(code **)(this->_padding_ + 0x28))(pFVar8,local_res8);
    if ((*piVar4 != UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X) ||
       (piVar4[1] != UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y)) {
      pIVar5 = IPlatformInputDeviceMapper::Get();
      (**(code **)(pIVar5->_padding_ + 0x58))(pIVar5,local_res8);
      fVar3 = __real_3f800000;
      pFVar7 = (FViewport *)0x0;
      if (param_1->bIsLeftAltDown != 0) {
        plVar1 = (longlong *)this->_padding_;
        pFVar6 = pFVar8;
        if (this == (FSceneViewport *)0x0) {
          pFVar6 = pFVar7;
        }
        pcVar2 = *(code **)(*plVar1 + 0x40);
        FInputKeyEventArgs::FInputKeyEventArgs
                  (&local_88,pFVar6,local_res8[0],&EKeys::LeftAlt,IE_Pressed,__real_3f800000,false,
                   param_2);
        (*pcVar2)(plVar1,&local_88);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88.Key.KeyDetails.SharedReferenceCount.ReferenceController);
      }
      if (param_1->bIsRightAltDown != 0) {
        plVar1 = (longlong *)this->_padding_;
        pFVar6 = pFVar8;
        if (this == (FSceneViewport *)0x0) {
          pFVar6 = pFVar7;
        }
        pcVar2 = *(code **)(*plVar1 + 0x40);
        FInputKeyEventArgs::FInputKeyEventArgs
                  (&local_88,pFVar6,local_res8[0],&EKeys::RightAlt,IE_Pressed,fVar3,false,param_2);
        (*pcVar2)(plVar1,&local_88);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88.Key.KeyDetails.SharedReferenceCount.ReferenceController);
      }
      if (param_1->bIsLeftControlDown != 0) {
        plVar1 = (longlong *)this->_padding_;
        pFVar6 = pFVar8;
        if (this == (FSceneViewport *)0x0) {
          pFVar6 = pFVar7;
        }
        pcVar2 = *(code **)(*plVar1 + 0x40);
        FInputKeyEventArgs::FInputKeyEventArgs
                  (&local_88,pFVar6,local_res8[0],&EKeys::LeftControl,IE_Pressed,fVar3,false,param_2
                  );
        (*pcVar2)(plVar1,&local_88);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88.Key.KeyDetails.SharedReferenceCount.ReferenceController);
      }
      if (param_1->bIsRightControlDown != 0) {
        plVar1 = (longlong *)this->_padding_;
        pFVar6 = pFVar8;
        if (this == (FSceneViewport *)0x0) {
          pFVar6 = pFVar7;
        }
        pcVar2 = *(code **)(*plVar1 + 0x40);
        FInputKeyEventArgs::FInputKeyEventArgs
                  (&local_88,pFVar6,local_res8[0],&EKeys::RightControl,IE_Pressed,fVar3,false,
                   param_2);
        (*pcVar2)(plVar1,&local_88);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88.Key.KeyDetails.SharedReferenceCount.ReferenceController);
      }
      if (param_1->bIsLeftShiftDown != 0) {
        plVar1 = (longlong *)this->_padding_;
        pFVar6 = pFVar8;
        if (this == (FSceneViewport *)0x0) {
          pFVar6 = pFVar7;
        }
        pcVar2 = *(code **)(*plVar1 + 0x40);
        FInputKeyEventArgs::FInputKeyEventArgs
                  (&local_88,pFVar6,local_res8[0],&EKeys::LeftShift,IE_Pressed,fVar3,false,param_2);
        (*pcVar2)(plVar1,&local_88);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88.Key.KeyDetails.SharedReferenceCount.ReferenceController);
      }
      if (param_1->bIsRightShiftDown != 0) {
        plVar1 = (longlong *)this->_padding_;
        if (this == (FSceneViewport *)0x0) {
          pFVar8 = pFVar7;
        }
        pcVar2 = *(code **)(*plVar1 + 0x40);
        FInputKeyEventArgs::FInputKeyEventArgs
                  (&local_88,pFVar8,local_res8[0],&EKeys::RightShift,IE_Pressed,fVar3,false,param_2)
        ;
        (*pcVar2)(plVar1,&local_88);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88.Key.KeyDetails.SharedReferenceCount.ReferenceController);
      }
    }
  }
  return;
}

// BeginRenderFrame @ 1486a6d30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FSceneViewport::BeginRenderFrame(FSceneViewport *this,FRHICommandListImmediate *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  FRHIResource *this_00;
  FRHITexture *this_01;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  FRHIResource *local_res8;
  FRHIResource *local_58 [2];
  TArrayView<FRHITransitionInfo_const_,int> local_48;
  FRHITransitionInfo local_38;
  
  bVar5 = IsInRenderingThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SceneViewport.cpp"
                         ,0x784,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  cVar6 = (**(code **)(this->_padding_ + 0x38))();
  if (cVar6 != '\0') {
    local_48.ArrayNum = 1;
    local_38._padding_._0_4_ = 0xffffffff;
    local_38._padding_._4_2_ = 0xffff;
    local_38.field1_0x8 =
         *(FRHITransitionInfo_u_8 *)&(this->BufferedShaderResourceTexturesRHI).ArrayNum;
    local_48.DataPtr = &local_38;
    local_38.Type = Texture;
    local_38.AccessBefore = None;
    local_38.AccessAfter = RTV;
    local_38.Flags = None;
    local_38.CommitInfo.bIsSet = false;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_48,None);
    return;
  }
  if (this->_padding_ == 0) {
    return;
  }
  (**(code **)(GDynamicRHI->_padding_ + 0x298))(GDynamicRHI,local_58);
  piVar1 = &(this->BufferedShaderResourceTexturesRHI).ArrayNum;
  if ((FRHIResource **)piVar1 != local_58) {
    this_00 = *(FRHIResource **)piVar1;
    *(FRHIResource **)piVar1 = local_58[0];
    local_58[0] = (FRHIResource *)0x0;
    if (this_00 == (FRHIResource *)0x0) goto LAB_1486a6e6b;
    FRHIResource::Release(this_00);
  }
  if (local_58[0] != (FRHIResource *)0x0) {
    FRHIResource::Release(local_58[0]);
  }
LAB_1486a6e6b:
  this_01 = (this->RenderTargetTextureRenderThreadRHI).Reference;
  lVar7 = (**(code **)(**(longlong **)piVar1 + 0x20))();
  uVar2 = *(uint *)(lVar7 + 0x28);
  lVar7 = (**(code **)(**(longlong **)piVar1 + 0x20))();
  local_res8 = *(FRHIResource **)piVar1;
  uVar3 = *(uint *)(lVar7 + 0x24);
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(local_res8);
  }
  FSlateRenderTargetRHI::SetRHIRef
            ((FSlateRenderTargetRHI *)this_01,(FRHITexture *)&local_res8,uVar3,uVar2);
  return;
}

// CaptureMouse @ 1486a8330

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FSceneViewport::CaptureMouse(FSceneViewport *this,bool param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  SViewport *pSVar4;
  SViewport *pSVar5;
  SViewport *pSVar6;
  bool bVar7;
  TSharedRef<SWidget,1> local_18;
  
  if (!param_1) {
    FReply::ReleaseMouseCapture((FReply *)&this->_padding_);
    return;
  }
  pSVar5 = (this->ViewportWidget).Object;
  pSVar6 = (SViewport *)0x0;
  pSVar4 = pSVar5;
  if (pSVar5 != (SViewport *)0x0) {
    iVar2 = (int)pSVar5->_padding_;
    do {
      pSVar4 = pSVar6;
      if (iVar2 == 0) goto LAB_1486a8385;
      LOCK();
      iVar3 = (int)pSVar5->_padding_;
      bVar7 = iVar2 == iVar3;
      if (bVar7) {
        *(int *)&pSVar5->_padding_ = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar7);
    pSVar6 = (SViewport *)(this->DebugCanvasDrawer).SharedReferenceCount.ReferenceController;
    pSVar4 = pSVar5;
    if (pSVar6 != (SViewport *)0x0) goto LAB_1486a83d6;
  }
LAB_1486a8385:
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x416,L"");
  if (bVar7) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x26c,L"");
  pSVar5 = pSVar4;
  if (bVar7) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_1486a83d6:
  if (pSVar5 != (SViewport *)0x0) {
    LOCK();
    *(int *)&pSVar5->_padding_ = (int)pSVar5->_padding_ + 1;
    UNLOCK();
  }
  local_18.Object = (SWidget *)pSVar6;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pSVar5;
  FReply::UseHighPrecisionMouseMovement((FReply *)&this->_padding_,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// DeferInvalidateHitProxy @ 1486af750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FSceneViewport::DeferInvalidateHitProxy(FSceneViewport *this)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 != (longlong *)0x0) {
    if (this == (FSceneViewport *)&DAT_00000008) {
      this = (FSceneViewport *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x0001486af76f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,this);
    return;
  }
  return;
}

// Destroy @ 1486afd50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FSceneViewport::Destroy(FSceneViewport *this)

{
  this->_padding_ = 0;
  (**(code **)(this->_padding_ + 0x1e8))(this,1,0,0,2,0);
  return;
}

// EndRenderFrame @ 1486b22e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FSceneViewport::EndRenderFrame
          (FSceneViewport *this,FRHICommandListImmediate *param_1,bool param_2,bool param_3)

{
  uint uVar1;
  FRHIResource *pFVar2;
  FRHITexture *pFVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  TArrayView<FRHITransitionInfo_const_,int> local_48;
  FRHITransitionInfo local_38;
  
  bVar5 = IsInRenderingThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SceneViewport.cpp"
                       ,0x793,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  cVar6 = (**(code **)(this->_padding_ + 0x38))();
  if (cVar6 == '\0') {
    uVar8 = (ulonglong)GMaxRHIShaderPlatform;
    if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar8].bContainsValidPlatformInfo == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,199,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar8].Language == LANGUAGE_Vulkan) {
      if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar8].bContainsValidPlatformInfo == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0xe2,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar8].MaxFeatureLevel == ES3_1) &&
         (FGenericDataDrivenShaderPlatformInfo::Infos[GMaxRHIShaderPlatform].
          bContainsValidPlatformInfo == 0)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0xf4,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    pFVar2 = *(FRHIResource **)&(this->BufferedShaderResourceTexturesRHI).ArrayNum;
    if (pFVar2 != (FRHIResource *)0x0) {
      (this->BufferedShaderResourceTexturesRHI).ArrayNum = 0;
      (this->BufferedShaderResourceTexturesRHI).ArrayMax = 0;
      FRHIResource::Release(pFVar2);
    }
    pFVar3 = (this->RenderTargetTextureRenderThreadRHI).Reference;
    bVar5 = IsInRenderingThread();
    if (!bVar5) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SlateTextures.cpp"
                         ,0x126,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar2 = (FRHIResource *)pFVar3->_padding_;
    if (pFVar2 != (FRHIResource *)0x0) {
      pFVar3->_padding_ = 0;
      FRHIResource::Release(pFVar2);
    }
    pFVar3->_padding_ = 0;
  }
  else {
    uVar1 = *(uint *)&this->RenderThreadSlateTexture;
    uVar7 = 0;
    if ((int)uVar1 < *(int *)&(this->BufferedSlateHandles).AllocatorInstance.Data) {
      uVar7 = ~uVar1 >> 0x1f;
    }
    if (uVar7 == 0) {
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
    if (*(longlong *)
         (*(longlong *)((longlong)&(this->RTTSize).field0_0x0 + 4) + (longlong)(int)uVar1 * 8) != 0)
    {
      local_48.ArrayNum = 1;
      local_38._padding_._0_4_ = 0xffffffff;
      local_38._padding_._4_2_ = 0xffff;
      local_38.field1_0x8 =
           *(FRHITransitionInfo_u_8 *)&(this->BufferedShaderResourceTexturesRHI).ArrayNum;
      local_48.DataPtr = &local_38;
      local_38.Type = Texture;
      local_38.AccessBefore = None;
      local_38.AccessAfter = SRVMask;
      local_38.Flags = None;
      local_38.CommitInfo.bIsSet = false;
      FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_48,None);
    }
  }
  return;
}

// EnqueueBeginRenderFrame @ 1486b2560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FSceneViewport::EnqueueBeginRenderFrame(FSceneViewport *this,bool param_1)

{
  undefined4 uVar1;
  uint uVar2;
  FRHIResource *pFVar3;
  FRHIResource *pFVar4;
  FDebugCanvasDrawer *this_00;
  longlong *plVar5;
  SViewport *pSVar6;
  code *pcVar7;
  longlong lVar8;
  UEngine *pUVar9;
  bool bVar10;
  char cVar11;
  char cVar12;
  undefined1 uVar13;
  int iVar14;
  int iVar15;
  SViewport *pSVar16;
  UWorld *pUVar17;
  FSlateApplication *pFVar18;
  TSharedRef<SViewport,1> *pTVar19;
  undefined8 *puVar20;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar21;
  uint uVar22;
  undefined ***pppuVar23;
  ulonglong uVar24;
  SViewport *pSVar25;
  SViewport *pSVar26;
  bool bVar27;
  undefined1 auStack_128 [32];
  longlong local_108;
  ulonglong local_100;
  TSharedPtr<SViewport,1> local_f8;
  longlong local_e8;
  TReferenceControllerBase<1> *local_e0;
  SViewport *local_d8;
  TReferenceControllerBase<1> *local_d0;
  TSharedRef<SViewport,1> local_c8;
  code *local_b8 [2];
  undefined **local_a8;
  bool *pbStack_a0;
  FRHIResource *local_98;
  undefined ***local_90;
  undefined1 local_88 [16];
  undefined **local_78;
  bool *pbStack_70;
  FRHIResource *local_68;
  undefined ***local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  bVar10 = IsInGameThread();
  if ((!bVar10) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SceneViewport.cpp"
                          ,0x734,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pSVar26 = (SViewport *)0x0;
  if (((GEngine->StereoRenderingDevice).Object == (IStereoRendering *)0x0) ||
     (cVar11 = (**(code **)(this->_padding_ + 0x1d8))(), pUVar9 = GEngine, cVar11 == '\0')) {
    bVar10 = false;
    bVar27 = false;
    pSVar16 = pSVar26;
  }
  else {
    if (((GEngine->StereoRenderingDevice).Object == (IStereoRendering *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    cVar11 = (**(code **)((longlong)*(pUVar9->StereoRenderingDevice).Object + 8))();
    pUVar9 = GEngine;
    bVar27 = cVar11 != '\0';
    if (((GEngine->StereoRenderingDevice).Object == (IStereoRendering *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pSVar16 = (SViewport *)(**(code **)((longlong)*(pUVar9->StereoRenderingDevice).Object + 0x80))()
    ;
    bVar10 = true;
  }
  iVar14 = *(int *)((longlong)&this->RenderThreadSlateTexture + 4);
  *(int *)&this->RenderThreadSlateTexture = iVar14;
  *(int *)((longlong)&this->RenderThreadSlateTexture + 4) =
       (iVar14 + 1) % *(int *)&(this->BufferedSlateHandles).AllocatorInstance.Data;
  if (!bVar10) goto LAB_1486b2732;
  if (pSVar16 == (SViewport *)0x0) {
    cVar11 = '\0';
  }
  else {
    cVar11 = (**(code **)pSVar16->_padding_)(pSVar16);
  }
  if (cVar11 == *(char *)((longlong)&(this->MouseDelta).field0_0x0 + 4)) {
    if (cVar11 == '\0') goto LAB_1486b2732;
    cVar12 = (**(code **)(pSVar16->_padding_ + 0x18))(pSVar16,this);
    if (cVar12 != '\0') goto LAB_1486b26d7;
  }
  else {
LAB_1486b26d7:
    uVar1 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    lVar8 = this->_padding_;
    local_100 = local_100 & 0xffffffffffffff00;
    pcVar7 = *(code **)(this->_padding_ + 0x1e8);
    local_108 = CONCAT44(local_108._4_4_,*(undefined4 *)((longlong)&this->_padding_ + 4));
    *(char *)((longlong)&(this->MouseDelta).field0_0x0 + 4) = cVar11;
    (*pcVar7)(this,0,(int)lVar8,uVar1);
    if (cVar11 == '\0') goto LAB_1486b2732;
  }
  iVar14 = (**(code **)(pSVar16->_padding_ + 0x50))(pSVar16);
  if (iVar14 < 0) {
    iVar14 = *(int *)&this->RenderThreadSlateTexture;
  }
  *(int *)&this->RenderThreadSlateTexture = iVar14;
  (**(code **)(pSVar16->_padding_ + 0x58))(pSVar16);
LAB_1486b2732:
  uVar2 = *(uint *)&this->RenderThreadSlateTexture;
  iVar14 = *(int *)&(this->BufferedRenderTargetsRHI).AllocatorInstance.Data;
  uVar22 = 0;
  if ((int)uVar2 < iVar14) {
    uVar22 = ~uVar2 >> 0x1f;
  }
  if ((uVar22 == 0) &&
     (local_108 = (longlong)(int)uVar2, local_100 = (longlong)iVar14,
     bVar10 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(longlong *)(*(longlong *)&(this->BufferedSlateHandles).ArrayNum + (longlong)(int)uVar2 * 8)
      != 0) {
    uVar2 = *(uint *)&this->RenderThreadSlateTexture;
    iVar14 = *(int *)&(this->BufferedRenderTargetsRHI).AllocatorInstance.Data;
    uVar22 = 0;
    if ((int)uVar2 < iVar14) {
      uVar22 = ~uVar2 >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (local_108 = (longlong)(int)uVar2, local_100 = (longlong)iVar14,
       bVar10 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar3 = *(FRHIResource **)
              (*(longlong *)&(this->BufferedSlateHandles).ArrayNum + (longlong)(int)uVar2 * 8);
    pFVar4 = (FRHIResource *)this->_padding_;
    if (pFVar4 != pFVar3) {
      this->_padding_ = (longlong)pFVar3;
      if (pFVar3 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(pFVar3);
      }
      if (pFVar4 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar4);
      }
    }
  }
  if ((*(longlong *)&this->bIsSoftwareCursorVisible == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this_00 = *(FDebugCanvasDrawer **)&this->bIsSoftwareCursorVisible;
  pUVar17 = (UWorld *)(**(code **)(*(longlong *)this->_padding_ + 0x30))();
  FDebugCanvasDrawer::InitDebugCanvas(this_00,(FViewportClient *)this->_padding_,pUVar17);
  if ((this->_padding_ == 0) &&
     ((cVar11 = (**(code **)(this->_padding_ + 0x38))(), cVar11 == '\0' || (bVar27)))) {
    pFVar18 = FSlateApplication::Get();
    plVar5 = *(longlong **)&pFVar18->field_0x60;
    if (((this->DebugCanvasDrawer).SharedReferenceCount.ReferenceController !=
         (TReferenceControllerBase<1> *)0x0) &&
       ((pSVar6 = (this->ViewportWidget).Object, pSVar6 != (SViewport *)0x0 &&
        (0 < (int)pSVar6->_padding_)))) {
      pFVar18 = FSlateApplication::Get();
      local_f8.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)(this->ViewportWidget).Object;
      local_f8.Object = (SViewport *)0x0;
      pcVar7 = *(code **)(*(longlong *)pFVar18 + 0x28);
      if ((SViewport *)local_f8.SharedReferenceCount.ReferenceController != (SViewport *)0x0) {
        iVar14 = (int)((SViewport *)local_f8.SharedReferenceCount.ReferenceController)->_padding_;
        do {
          if (iVar14 == 0) {
            local_f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            goto LAB_1486b2917;
          }
          LOCK();
          iVar15 = (int)((SViewport *)local_f8.SharedReferenceCount.ReferenceController)->_padding_;
          bVar10 = iVar14 == iVar15;
          if (bVar10) {
            *(int *)&((SViewport *)local_f8.SharedReferenceCount.ReferenceController)->_padding_ =
                 iVar14 + 1;
            iVar15 = iVar14;
          }
          UNLOCK();
          iVar14 = iVar15;
        } while (!bVar10);
        local_f8.Object =
             (SViewport *)(this->DebugCanvasDrawer).SharedReferenceCount.ReferenceController;
      }
LAB_1486b2917:
      pTVar19 = TSharedPtr<SViewport,1>::ToSharedRef(&local_f8,&local_c8);
      local_d8 = pTVar19->Object;
      local_d0 = (pTVar19->SharedReferenceCount).ReferenceController;
      if (local_d0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_d0->SharedReferenceCount = (atomic<int>)((int)local_d0->SharedReferenceCount + 1);
        UNLOCK();
      }
      (*pcVar7)(pFVar18,&local_e8,&local_d8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_f8.SharedReferenceCount.ReferenceController);
      if (local_e8 != 0) {
        pcVar7 = *(code **)(*plVar5 + 0xb8);
        if ((local_e8 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        puVar20 = (undefined8 *)(*pcVar7)(plVar5,local_e8);
        if (puVar20 != (undefined8 *)0x0) {
          pFVar3 = (FRHIResource *)*puVar20;
          pFVar4 = (FRHIResource *)this->_padding_;
          if (pFVar4 != pFVar3) {
            this->_padding_ = (longlong)pFVar3;
            if (pFVar3 != (FRHIResource *)0x0) {
              FRHIResource::AddRef(pFVar3);
            }
            if (pFVar4 != (FRHIResource *)0x0) {
              FRHIResource::Release(pFVar4);
            }
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e0);
    }
  }
  pFVar3 = (FRHIResource *)this->_padding_;
  if (pFVar3 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(pFVar3);
  }
  local_90 = (undefined ***)0x0;
  local_a8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FSceneViewport::EnqueueBeginRenderFrame'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_b8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FSceneViewport::EnqueueBeginRenderFrame'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pbStack_a0 = &this[-1].ViewportGammaOverride.bIsSet;
  local_98 = pFVar3;
  this_01 = FRenderCommandList::GetInstanceTLS();
  if (this_01 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FSceneViewport::EnqueueBeginRenderFrame_::__l2::TSTR_SetRenderThreadViewportTarget1908>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
  }
  else {
    this_02 = FRenderCommandList::GetRenderThread(this_01);
    local_88._0_8_ = local_b8[0];
    local_60 = local_90;
    local_78 = local_a8;
    pbStack_70 = pbStack_a0;
    local_68 = local_98;
    local_b8[0] = (code *)0x0;
    local_58 = 2;
    pFVar21 = (FRenderCommandTag *)
              TRenderCommandTag<`FSceneViewport::EnqueueBeginRenderFrame'::__l2::TSTR_SetRenderThreadViewportTarget1908>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_88,pFVar21);
    uVar24 = (ulonglong)local_58;
    if ((2 < uVar24) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar24] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_88._0_8_ != (code *)0x0) {
        pppuVar23 = (undefined ***)(local_88 + 0x10);
        if (local_60 != (undefined ***)0x0) {
          pppuVar23 = local_60;
        }
        (*(code *)(*pppuVar23)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar24])(local_88);
    }
  }
  if (local_b8[0] != (code *)0x0) {
    pppuVar23 = &local_a8;
    if (local_90 != (undefined ***)0x0) {
      pppuVar23 = local_90;
    }
    (*(code *)(*pppuVar23)[2])();
  }
  FViewport::EnqueueBeginRenderFrame((FViewport *)this,param_1);
  if ((pSVar16 != (SViewport *)0x0) && (param_1)) {
    pSVar6 = (this->ViewportWidget).Object;
    pcVar7 = *(code **)(pSVar16->_padding_ + 8);
    pSVar25 = pSVar6;
    if (pSVar6 != (SViewport *)0x0) {
      iVar14 = (int)pSVar6->_padding_;
      do {
        pSVar25 = pSVar26;
        if (iVar14 == 0) goto LAB_1486b2b63;
        LOCK();
        iVar15 = (int)pSVar6->_padding_;
        bVar10 = iVar14 == iVar15;
        if (bVar10) {
          *(int *)&pSVar6->_padding_ = iVar14 + 1;
          iVar15 = iVar14;
        }
        UNLOCK();
        iVar14 = iVar15;
      } while (!bVar10);
      pSVar26 = (SViewport *)(this->DebugCanvasDrawer).SharedReferenceCount.ReferenceController;
      pSVar25 = pSVar6;
    }
LAB_1486b2b63:
    uVar13 = (**(code **)(this->_padding_ + 0x38))();
    (*pcVar7)(pSVar16,uVar13,this,pSVar26);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar25);
  }
  return;
}

// EnqueueEndRenderFrame @ 1486b2bc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FSceneViewport::EnqueueEndRenderFrame(FSceneViewport *this,bool param_1,bool param_2)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  SDebugCanvas *pSVar5;
  SDebugCanvas *pSVar6;
  SDebugCanvas *this_00;
  
  FViewport::EnqueueEndRenderFrame((FViewport *)this,param_1,param_2);
  if ((*(longlong *)&this->bIsSoftwareCursorVisible == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(longlong *)(*(longlong *)&this->bIsSoftwareCursorVisible + 0x18) == 0) {
    return;
  }
  if ((*(longlong *)&this->bIsSoftwareCursorVisible == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar3 = FCanvas::HasBatchesToRender
                    (*(FCanvas **)(*(longlong *)&this->bIsSoftwareCursorVisible + 0x18));
  if (!bVar3) {
    return;
  }
  if ((this->ViewportWidget).WeakReferenceCount.ReferenceController ==
      (TReferenceControllerBase<1> *)0x0) {
    return;
  }
  pSVar6 = (this->DebugCanvas).Object;
  if (pSVar6 == (SDebugCanvas *)0x0) {
    return;
  }
  if ((int)pSVar6->_padding_ < 1) {
    return;
  }
  pSVar6 = (this->DebugCanvas).Object;
  this_00 = (SDebugCanvas *)0x0;
  pSVar5 = pSVar6;
  if (pSVar6 != (SDebugCanvas *)0x0) {
    iVar2 = (int)pSVar6->_padding_;
    do {
      pSVar5 = this_00;
      if (iVar2 == 0) goto LAB_1486b2cb1;
      LOCK();
      iVar4 = (int)pSVar6->_padding_;
      bVar3 = iVar2 == iVar4;
      if (bVar3) {
        *(int *)&pSVar6->_padding_ = iVar2 + 1;
        iVar4 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar4;
    } while (!bVar3);
    this_00 = (SDebugCanvas *)(this->ViewportWidget).WeakReferenceCount.ReferenceController;
    pSVar5 = pSVar6;
    if (this_00 != (SDebugCanvas *)0x0) goto LAB_1486b2cd7;
  }
LAB_1486b2cb1:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pSVar6 = pSVar5;
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_1486b2cd7:
  SWidget::Invalidate((SWidget *)this_00,Paint);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar6);
  return;
}

// FindWindow @ 1486b7b30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TSharedPtr<SWindow,1> * __thiscall
FSceneViewport::FindWindow(FSceneViewport *this,TSharedPtr<SWindow,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FSlateApplication *pFVar4;
  TSharedPtr<SWindow,1> *pTVar5;
  SViewport *pSVar6;
  code *pcVar7;
  SViewport *pSVar8;
  bool bVar9;
  SViewport *local_18;
  SViewport *local_10;
  
  if ((((this->ViewportWidget).Object == (SViewport *)0x0) ||
      (pTVar1 = (this->ViewportWidget).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
    __return_storage_ptr__->Object = (SWindow *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  pSVar8 = (SViewport *)0x0;
  pSVar6 = (SViewport *)(this->ViewportWidget).WeakReferenceCount.ReferenceController;
  if (pSVar6 != (SViewport *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar6->_padding_;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pFVar4 = FSlateApplication::Get();
        pcVar7 = *(code **)(*(longlong *)pFVar4 + 0x28);
        pSVar6 = pSVar8;
        goto LAB_1486b7bcd;
      }
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar6->_padding_;
      bVar9 = aVar2 == aVar3;
      if (bVar9) {
        *(atomic<int> *)&pSVar6->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar9);
    pSVar8 = (this->ViewportWidget).Object;
  }
  pFVar4 = FSlateApplication::Get();
  pcVar7 = *(code **)(*(longlong *)pFVar4 + 0x28);
  if (pSVar8 == (SViewport *)0x0) {
LAB_1486b7bcd:
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pTVar5 = (TSharedPtr<SWindow,1> *)(*pcVar7)();
      return pTVar5;
    }
  }
  if (pSVar6 != (SViewport *)0x0) {
    LOCK();
    *(int *)&pSVar6->_padding_ = (int)pSVar6->_padding_ + 1;
    UNLOCK();
  }
  if ((pSVar8 == (SViewport *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar5 = (TSharedPtr<SWindow,1> *)(*pcVar7)();
    return pTVar5;
  }
  if (pSVar6 != (SViewport *)0x0) {
    LOCK();
    *(int *)&pSVar6->_padding_ = (int)pSVar6->_padding_ + 1;
    UNLOCK();
  }
  local_18 = pSVar8;
  local_10 = pSVar6;
  (*pcVar7)(pFVar4,__return_storage_ptr__,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar6);
  return __return_storage_ptr__;
}

// GetDebugCanvas @ 1486bd420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FCanvas * __thiscall FSceneViewport::GetDebugCanvas(FSceneViewport *this)

{
  code *pcVar1;
  bool bVar2;
  FCanvas *pFVar3;
  
  if (*(longlong *)&this->bIsSoftwareCursorVisible != 0) {
    return *(FCanvas **)(*(longlong *)&this->bIsSoftwareCursorVisible + 0x18);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FCanvas *)(*pcVar1)();
    return pFVar3;
  }
  return *(FCanvas **)(*(longlong *)&this->bIsSoftwareCursorVisible + 0x18);
}

// GetDisplayColorGamut @ 1486bd960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

EDisplayColorGamut __thiscall FSceneViewport::GetDisplayColorGamut(FSceneViewport *this)

{
  return this->NextBufferedTargetIndex;
}

// GetDisplayGamma @ 1486bd970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

float __thiscall FSceneViewport::GetDisplayGamma(FSceneViewport *this)

{
  float fVar1;
  
  if ((char)this->DisplayOutputFormat != SDR_sRGB) {
    return (float)this->DisplayColorGamut;
  }
  fVar1 = FRenderTarget::GetDisplayGamma((FRenderTarget *)this);
  return fVar1;
}

// GetDisplayOutputFormat @ 1486bd9d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

EDisplayOutputFormat __thiscall FSceneViewport::GetDisplayOutputFormat(FSceneViewport *this)

{
  return this->NumTouches;
}

// GetFriendlyName @ 1486bea10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FString * __thiscall
FSceneViewport::GetFriendlyName(FSceneViewport *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FSlateSceneViewport");
  return __return_storage_ptr__;
}

// GetMousePos @ 1486c1ce0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FSceneViewport::GetMousePos(FSceneViewport *this,TIntPoint<int> *param_1,bool param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (param_2) {
    param_1->field0_0x0 = *(TIntPoint<int>_u_0 *)&(this->KeyStateMap).field_0x48;
    return;
  }
  fVar5 = __real_3f800000 / *(float *)&(this->CachedGeometry).Size;
  fVar4 = (float)*(int *)&(this->KeyStateMap).field_0x4c * fVar5;
  fVar5 = (float)*(int *)&(this->KeyStateMap).field_0x48 * fVar5;
  fVar1 = (this->CachedGeometry).Position.field0_0x0._s_0.Y;
  fVar2 = (this->CachedGeometry).AccumulatedRenderTransform.M.M[0][1];
  fVar3 = (this->CachedGeometry).AccumulatedRenderTransform.M.M[1][1];
  (param_1->field0_0x0)._s_0.X =
       (int)(fVar4 * (this->CachedGeometry).AccumulatedRenderTransform.M.M[0][0] +
             fVar5 * (this->CachedGeometry).Position.field0_0x0._s_0.X +
            (this->CachedGeometry).AccumulatedRenderTransform.M.M[1][0]);
  (param_1->field0_0x0)._s_0.Y = (int)(fVar5 * fVar1 + fVar4 * fVar2 + fVar3);
  return;
}

// GetMouseX @ 1486c1db0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

int __thiscall FSceneViewport::GetMouseX(FSceneViewport *this)

{
  return *(int *)&(this->KeyStateMap).field_0x48;
}

// GetMouseY @ 1486c1dc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

int __thiscall FSceneViewport::GetMouseY(FSceneViewport *this)

{
  return *(int *)&(this->KeyStateMap).field_0x4c;
}

// GetRenderTargetTexture @ 1486c62a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRefCountPtr<FRHITexture> * __thiscall FSceneViewport::GetRenderTargetTexture(FSceneViewport *this)

{
  bool bVar1;
  
  bVar1 = IsInRenderingThread();
  if (bVar1) {
    this = (FSceneViewport *)&this->BufferedShaderResourceTexturesRHI;
  }
  return (TRefCountPtr<FRHITexture> *)&this->_padding_;
}

// GetRenderTargetTextureSizeXY @ 1486c6350

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TIntPoint<int> __thiscall FSceneViewport::GetRenderTargetTextureSizeXY(FSceneViewport *this)

{
  TIntPoint<int>_u_0 *pTVar1;
  TIntPoint<int>_u_0 in_RDX;
  undefined1 local_res8 [32];
  
  pTVar1 = &(this->MousePosBeforeHiddenDueToCapture).field0_0x0;
  if ((((TIntPoint<int> *)pTVar1)->field0_0x0)._s_0.X == 0) {
    pTVar1 = (TIntPoint<int>_u_0 *)(**(code **)(this->_padding_ + 0x28))(this,local_res8);
  }
  *(TIntPoint<int>_u_0 *)in_RDX = *pTVar1;
  return (TIntPoint<int>)in_RDX;
}

// GetSceneHDREnabled @ 1486c72c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall FSceneViewport::GetSceneHDREnabled(FSceneViewport *this)

{
  return (bool)(this->OnSceneViewportResizeDel).field_0x12;
}

// GetSceneTargetFormat @ 1486c72d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

EPixelFormat __thiscall FSceneViewport::GetSceneTargetFormat(FSceneViewport *this)

{
  return *(EPixelFormat *)((longlong)&(this->CachedCursorPos).field0_0x0 + 4);
}

// GetSize @ 1486c73f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TIntPoint<int> __thiscall FSceneViewport::GetSize(FSceneViewport *this)

{
  TIntPoint<int>_u_0 in_RDX;
  
  (*(code *)(this[-1].ViewportWidget.Object)->_padding_)();
  return (TIntPoint<int>)in_RDX;
}

// GetSoftwareCursorPosition @ 1486c7bd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TVector2<double> * __thiscall
FSceneViewport::GetSoftwareCursorPosition
          (FSceneViewport *this,TVector2<double> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = (this->CurrentReplyState).NavigationDestination.WeakReferenceCount.ReferenceController;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)(this->CurrentReplyState).NavigationDestination.Object;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)pTVar1;
  return __return_storage_ptr__;
}

// GetViewport @ 1486c97f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FViewport * __thiscall FSceneViewport::GetViewport(FSceneViewport *this)

{
  FViewport *pFVar1;
  
  pFVar1 = (FViewport *)&this->_padding_;
  if (this == (FSceneViewport *)0x0) {
    pFVar1 = (FViewport *)0x0;
  }
  return pFVar1;
}

// GetViewportDynamicRange @ 1486c9810

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

ESlateViewportDynamicRange __thiscall FSceneViewport::GetViewportDynamicRange(FSceneViewport *this)

{
  return (this->KeyStateMap).field_0x42 != '\0';
}

// GetViewportFrame @ 1486c9830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FViewportFrame * __thiscall FSceneViewport::GetViewportFrame(FSceneViewport *this)

{
  return (FViewportFrame *)&this[-1].ViewportGammaOverride.bIsSet;
}

// GetViewportRenderTargetTexture @ 1486c9840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FSlateShaderResource * __thiscall
FSceneViewport::GetViewportRenderTargetTexture(FSceneViewport *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FSlateShaderResource *pFVar4;
  uint uVar5;
  
  bVar3 = IsInRenderingThread();
  if (bVar3) {
    return (FSlateShaderResource *)(this->PreCaptureCursorPos).field0_0x0;
  }
  pFVar4 = (FSlateShaderResource *)0x0;
  if ((this->CachedGeometry).Scale != 0.0) {
    uVar1 = *(uint *)&(this->SoftwareCursorPosition).field0_0x0;
    uVar5 = 0;
    if ((int)uVar1 < (int)(this->CachedGeometry).Scale) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FSlateShaderResource *)(*pcVar2)();
        return pFVar4;
      }
    }
    pFVar4 = *(FSlateShaderResource **)
              ((longlong)(this->CachedGeometry).Size + (longlong)(int)uVar1 * 8);
  }
  return pFVar4;
}

// GetWidget @ 1486c9ad0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TWeakPtr<SWidget,1> * __thiscall
FSceneViewport::GetWidget(FSceneViewport *this,TWeakPtr<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  
  pTVar1 = (this->CurrentReplyState).DragDropContent.SharedReferenceCount.ReferenceController;
  pSVar2 = (SWidget *)(this->CurrentReplyState).DragDropContent.Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar1;
  __return_storage_ptr__->Object = pSVar2;
  return __return_storage_ptr__;
}

// GetWindow @ 1486c9bc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall FSceneViewport::GetWindow(FSceneViewport *this)

{
  return (void *)0x0;
}

// HandleNavigation @ 1486ca510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
FSceneViewport::HandleNavigation(FSceneViewport *this,uint param_1,TSharedPtr<SWidget,1> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined1 uVar3;
  SWidget *local_18;
  TReferenceControllerBase<1> *local_10;
  
  plVar1 = *(longlong **)&this[-1].OnSceneViewportResizeDel;
  if (plVar1 != (longlong *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x1c8);
    local_18 = param_2->Object;
    local_10 = (param_2->SharedReferenceCount).ReferenceController;
    if (local_10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = (*pcVar2)(plVar1,param_1,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
    return (bool)uVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return false;
}

// HasFixedSize @ 1486cb2d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall FSceneViewport::HasFixedSize(FSceneViewport *this)

{
  return this->bForceViewportSize;
}

// HasFocus @ 1486cb2e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall FSceneViewport::HasFocus(FSceneViewport *this)

{
  SViewport *pSVar1;
  int iVar2;
  int iVar3;
  FSlateApplication *pFVar4;
  longlong *plVar5;
  SViewport *pSVar6;
  SViewport *pSVar7;
  bool bVar8;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pSVar1 = (this->ViewportWidget).Object;
  pSVar6 = (SViewport *)0x0;
  pSVar7 = pSVar1;
  if (pSVar1 != (SViewport *)0x0) {
    iVar2 = (int)pSVar1->_padding_;
    do {
      pSVar7 = pSVar6;
      if (iVar2 == 0) goto LAB_1486cb313;
      LOCK();
      iVar3 = (int)pSVar1->_padding_;
      bVar8 = iVar2 == iVar3;
      if (bVar8) {
        *(int *)&pSVar1->_padding_ = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar8);
    pSVar6 = (SViewport *)(this->DebugCanvasDrawer).SharedReferenceCount.ReferenceController;
    pSVar7 = pSVar1;
  }
LAB_1486cb313:
  pFVar4 = FSlateApplication::Get();
  plVar5 = (longlong *)(**(code **)(*(longlong *)pFVar4 + 0x170))(pFVar4,local_18,0);
  pSVar1 = (SViewport *)*plVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar7);
  return pSVar1 == pSVar6;
}

// HasMouseCapture @ 1486cb3a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall FSceneViewport::HasMouseCapture(FSceneViewport *this)

{
  code *pcVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  SViewport *pSVar5;
  SViewport *pSVar6;
  SViewport *this_00;
  SViewport *pSVar7;
  bool bVar8;
  uint uStackX_c;
  
  pSVar7 = (SViewport *)0x0;
  if ((((this->DebugCanvasDrawer).SharedReferenceCount.ReferenceController ==
        (TReferenceControllerBase<1> *)0x0) ||
      (pSVar6 = (this->ViewportWidget).Object, pSVar6 == (SViewport *)0x0)) ||
     ((int)pSVar6->_padding_ < 1)) {
    pSVar6 = (SViewport *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pSVar6 = (this->ViewportWidget).Object;
    pSVar5 = pSVar6;
    this_00 = pSVar7;
    if (pSVar6 == (SViewport *)0x0) {
LAB_1486cb401:
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      pSVar6 = pSVar5;
      if (bVar8) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    else {
      iVar2 = (int)pSVar6->_padding_;
      do {
        pSVar5 = pSVar7;
        this_00 = (SViewport *)0x0;
        if (iVar2 == 0) goto LAB_1486cb401;
        LOCK();
        iVar4 = (int)pSVar6->_padding_;
        bVar8 = iVar2 == iVar4;
        if (bVar8) {
          *(int *)&pSVar6->_padding_ = iVar2 + 1;
          iVar4 = iVar2;
        }
        UNLOCK();
        iVar2 = iVar4;
      } while (!bVar8);
      this_00 = (SViewport *)(this->DebugCanvasDrawer).SharedReferenceCount.ReferenceController;
      pSVar5 = pSVar6;
      if (this_00 == (SViewport *)0x0) goto LAB_1486cb401;
    }
    pSVar7 = (SViewport *)&DAT_00000001;
    bVar8 = SWidget::HasMouseCapture((SWidget *)this_00);
    if (bVar8) {
      bVar8 = true;
      goto LAB_1486cb454;
    }
  }
  bVar8 = false;
LAB_1486cb454:
  if (pSVar7 != (SViewport *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar6);
  }
  return bVar8;
}

// InitRHI @ 1486cc890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FSceneViewport::InitRHI(FSceneViewport *this,FRHICommandListBase *param_1)

{
  ForAnyElementType *pFVar1;
  bool *pbVar2;
  int *piVar3;
  void *_Dst;
  FRHIResource *pFVar4;
  FScriptContainerElement *pFVar5;
  FRHITexture *pFVar6;
  FSlateRenderTargetRHI *this_00;
  longlong lVar7;
  FRHIResource *this_01;
  code *pcVar8;
  FRHITexture *pFVar9;
  bool bVar10;
  EPixelFormat EVar11;
  char cVar12;
  Type TVar13;
  int iVar14;
  int iVar15;
  IStereoRenderTargetManager *pIVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  IConsoleManager *pIVar19;
  longlong *plVar20;
  TConsoleVariableData<int> *pTVar21;
  uint uVar22;
  int *piVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar30;
  longlong lVar31;
  undefined1 auStackY_2e8 [32];
  char local_288;
  uint local_284;
  uint local_280;
  uint local_27c;
  FRHITexture *local_278;
  FRHITexture *local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  ulonglong local_250;
  TRefCountPtr<FRHITexture> *local_248;
  undefined8 local_240;
  undefined8 *local_238;
  undefined8 local_230;
  undefined8 local_228;
  TRefCountPtr<FRHITexture> *local_220;
  undefined8 local_218;
  FRHITexture *local_210;
  longlong local_208;
  undefined8 local_200;
  uint local_1f8;
  uint uStack_1f4;
  IStereoRenderTargetManager *local_1f0;
  FRHICommandListBase *local_1e8;
  FRHITexture *local_1e0;
  FRHITextureDesc local_1d8;
  wchar_t *local_188;
  undefined8 local_180;
  FResourceBulkDataInterface *local_178;
  FName local_170;
  FName local_168;
  undefined1 local_158 [48];
  longlong local_128;
  longlong local_118 [3];
  longlong *local_100;
  FRHICommandListBase *local_f8;
  FRHITexture *local_f0;
  FRHITextureCreateDesc local_c8;
  ulonglong local_48;
  ulonglong uVar29;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  local_1e8 = param_1;
  if ((this->_padding_ & 1) != 0) {
    FViewport::FHitProxyMap::Init
              ((FHitProxyMap *)&this->_padding_,(uint)this->_padding_,
               *(uint *)((longlong)&this->_padding_ + 4));
  }
  uVar25 = (ulonglong)_tls_index;
  pTVar21 = (TConsoleVariableData<int> *)0x0;
  *(undefined8 *)&(this->OnSceneViewportResizeDel).field_0xc = 0;
  local_27c = (uint)this->_padding_;
  local_280 = *(uint *)((longlong)&this->_padding_ + 4);
  local_200 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar25 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar19 = IConsoleManager::Get();
    plVar20 = (longlong *)
              (**(code **)((longlong)*pIVar19 + 0xc0))(pIVar19,L"r.DefaultBackBufferPixelFormat",1);
    if (plVar20 != (longlong *)0x0) {
      pTVar21 = (TConsoleVariableData<int> *)(**(code **)(*plVar20 + 0x68))(plVar20);
    }
    CVarDefaultBackBufferPixelFormat = pTVar21;
    _Init_thread_footer(&::_TSS0);
  }
  pTVar21 = CVarDefaultBackBufferPixelFormat;
  bVar10 = IsInParallelRenderingThread();
  if ((!bVar10) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  TVar13 = EDefaultBackBufferPixelFormat::FromInt(pTVar21->ShadowedValue[1]);
  EVar11 = EDefaultBackBufferPixelFormat::Convert2PixelFormat(TVar13);
  (this->OnSceneViewportResizeDel).field_0x14 = EVar11;
  EVar11 = RHIPreferredPixelFormatHint(EVar11);
  (this->OnSceneViewportResizeDel).field_0x14 = EVar11;
  if ((this->OnSceneViewportResizeDel).field_0x2 != '\0') {
    (this->OnSceneViewportResizeDel).field_0x14 = GRHIGlobals.HDRDisplayOutputFormat;
  }
  cVar12 = (**(code **)(this->_padding_ + 0x38))();
  if (cVar12 == '\0') {
    iVar14 = (this->MousePosBeforeHiddenDueToCapture).field0_0x0._s_0.Y;
    if (((iVar14 != *(int *)&(this->BufferedSlateHandles).AllocatorInstance.Data) ||
        (iVar14 != *(int *)&(this->BufferedRenderTargetsRHI).AllocatorInstance.Data)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("BufferedSlateHandles.Num() == BufferedRenderTargetsRHI.Num() && BufferedSlateHandles.Num() == BufferedShaderResourceTexturesRHI.Num()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SceneViewport.cpp"
                            ,0x888,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((this->MousePosBeforeHiddenDueToCapture).field0_0x0._s_0.Y == 0) {
      pbVar2 = &this->bPlayInEditorIsSimulate;
      local_230 = 0;
      if (((*(undefined8 **)pbVar2 <= &local_230) &&
          (&local_230 < *(undefined8 **)pbVar2 + (this->RTTSize).field0_0x0._s_0.X)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar14 = (this->MousePosBeforeHiddenDueToCapture).field0_0x0._s_0.Y;
      if (iVar14 == (this->RTTSize).field0_0x0._s_0.X) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)pbVar2,(int *)&this->RTTSize);
      }
      (this->MousePosBeforeHiddenDueToCapture).field0_0x0._s_0.Y = iVar14 + 1;
      pFVar1 = (ForAnyElementType *)((longlong)&(this->RTTSize).field0_0x0 + 4);
      local_258 = 0;
      *(undefined8 *)(*(longlong *)pbVar2 + (longlong)iVar14 * 8) = local_230;
      if (((pFVar1->Data <= (FScriptContainerElement *)&local_258) &&
          ((FScriptContainerElement *)&local_258 <
           pFVar1->Data +
           (longlong)*(int *)((longlong)&(this->BufferedSlateHandles).AllocatorInstance.Data + 4) *
           8)) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar14 = *(int *)&(this->BufferedSlateHandles).AllocatorInstance.Data;
      piVar3 = (int *)((longlong)&(this->BufferedSlateHandles).AllocatorInstance.Data + 4);
      if (iVar14 == *piVar3) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,pFVar1,piVar3);
      }
      *(int *)&(this->BufferedSlateHandles).AllocatorInstance.Data = iVar14 + 1;
      pFVar5 = pFVar1->Data;
      piVar3 = &(this->BufferedSlateHandles).ArrayNum;
      local_228 = 0;
      *(undefined8 *)(pFVar5 + (longlong)iVar14 * 8) = 0;
      *(undefined8 *)(pFVar5 + (longlong)iVar14 * 8) = local_258;
      local_258 = 0;
      if (((*(undefined8 **)piVar3 <= &local_228) &&
          (&local_228 <
           *(undefined8 **)piVar3 +
           *(int *)((longlong)&(this->BufferedRenderTargetsRHI).AllocatorInstance.Data + 4))) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar14 = *(int *)&(this->BufferedRenderTargetsRHI).AllocatorInstance.Data;
      piVar23 = (int *)((longlong)&(this->BufferedRenderTargetsRHI).AllocatorInstance.Data + 4);
      if (iVar14 == *piVar23) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)piVar3,piVar23);
      }
      *(int *)&(this->BufferedRenderTargetsRHI).AllocatorInstance.Data = iVar14 + 1;
      lVar31 = *(longlong *)piVar3;
      *(undefined8 *)(lVar31 + (longlong)iVar14 * 8) = 0;
      *(undefined8 *)(lVar31 + (longlong)iVar14 * 8) = local_228;
    }
    pFVar4 = *(FRHIResource **)&this[-1].ViewportGammaOverride.bIsSet;
    if (pFVar4 != (FRHIResource *)0x0) {
      *(undefined8 *)&this[-1].ViewportGammaOverride.bIsSet = 0;
      FRHIResource::Release(pFVar4);
    }
    (this->BufferedShaderResourceTexturesRHI).ArrayNum = 0;
    (this->BufferedShaderResourceTexturesRHI).ArrayMax = 0;
  }
  else {
    local_284 = 1;
    local_248 = (TRefCountPtr<FRHITexture> *)0x0;
    local_240 = 0;
    local_220 = (TRefCountPtr<FRHITexture> *)0x0;
    local_218 = 0;
    local_288 = '\0';
    bVar10 = (bool)(**(code **)(*(longlong *)&this[-1].DisplayOutputFormat + 0x1d8))
                             (&this[-1].DisplayOutputFormat);
    pIVar16 = RetrieveStereoRenderTargetManager(bVar10);
    local_1f0 = pIVar16;
    if (pIVar16 != (IStereoRenderTargetManager *)0x0) {
      (**(code **)((longlong)*pIVar16 + 0x10))
                (pIVar16,&this[-1].DisplayOutputFormat,&local_27c,&local_280);
      local_284 = (**(code **)((longlong)*pIVar16 + 0x30))(pIVar16);
      local_288 = (**(code **)((longlong)*pIVar16 + 0x40))
                            (pIVar16,local_27c,local_280,(this->OnSceneViewportResizeDel).field_0x14
                            );
      if (local_288 != '\0') {
        if (((uint)local_240 != (int)local_218) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("BufferedRTRHI.Num() == BufferedSRVRHI.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SceneViewport.cpp"
                                ,0x832,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_284 = (uint)local_240;
      }
    }
    uVar25 = 0;
    iVar14 = (this->MousePosBeforeHiddenDueToCapture).field0_0x0._s_0.Y;
    if (((iVar14 != *(int *)&(this->BufferedSlateHandles).AllocatorInstance.Data) ||
        (iVar14 != *(int *)&(this->BufferedRenderTargetsRHI).AllocatorInstance.Data)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("BufferedSlateHandles.Num() == BufferedRenderTargetsRHI.Num() && BufferedSlateHandles.Num() == BufferedShaderResourceTexturesRHI.Num()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SceneViewport.cpp"
                            ,0x837,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar14 = (this->MousePosBeforeHiddenDueToCapture).field0_0x0._s_0.Y;
    uVar26 = uVar25;
    uVar29 = uVar25;
    if (0 < iVar14) {
      do {
        puVar18 = (undefined8 *)0x0;
        uVar27 = (uint)uVar29;
        uVar30 = ~uVar27 >> 0x1f;
        uVar22 = 0;
        if ((int)uVar27 < iVar14) {
          uVar22 = uVar30;
        }
        if ((uVar22 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (*(longlong *)(*(longlong *)&this->bPlayInEditorIsSimulate + uVar26) == 0) {
          puVar17 = ::operator_new(0x40);
          if (puVar17 != (undefined8 *)0x0) {
            *(undefined1 *)(puVar17 + 1) = 0x21;
            *puVar17 = &___7__TSlateTexture_V__TRefCountPtr_VFRHITexture______6B_;
            puVar17[2] = 0;
            FRenderResource::FRenderResource((FRenderResource *)(puVar17 + 3));
            *puVar17 = &FSlateRenderTargetRHI::
                        _vftable__for__TSlateTexture<TRefCountPtr<FRHITexture>_>__;
            puVar17[3] = &FSlateRenderTargetRHI::_vftable__for__FRenderResource__;
            puVar17[7] = 0;
            puVar18 = puVar17;
          }
          uVar22 = 0;
          if ((int)uVar27 < (this->MousePosBeforeHiddenDueToCapture).field0_0x0._s_0.Y) {
            uVar22 = uVar30;
          }
          if ((uVar22 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          *(undefined8 **)(*(longlong *)&this->bPlayInEditorIsSimulate + uVar25 * 8) = puVar18;
        }
        uVar22 = 0;
        if ((int)uVar27 < *(int *)&(this->BufferedSlateHandles).AllocatorInstance.Data) {
          uVar22 = uVar30;
        }
        if ((uVar22 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar31 = *(longlong *)((longlong)&(this->RTTSize).field0_0x0 + 4);
        pFVar4 = *(FRHIResource **)(lVar31 + uVar25 * 8);
        if (pFVar4 != (FRHIResource *)0x0) {
          *(undefined8 *)(lVar31 + uVar25 * 8) = 0;
          FRHIResource::Release(pFVar4);
        }
        uVar22 = 0;
        if ((int)uVar27 < *(int *)&(this->BufferedRenderTargetsRHI).AllocatorInstance.Data) {
          uVar22 = uVar30;
        }
        if ((uVar22 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar31 = *(longlong *)&(this->BufferedSlateHandles).ArrayNum;
        pFVar4 = *(FRHIResource **)(lVar31 + uVar25 * 8);
        if (pFVar4 != (FRHIResource *)0x0) {
          *(undefined8 *)(lVar31 + uVar25 * 8) = 0;
          FRHIResource::Release(pFVar4);
        }
        iVar14 = (this->MousePosBeforeHiddenDueToCapture).field0_0x0._s_0.Y;
        uVar25 = uVar25 + 1;
        uVar26 = uVar26 + 8;
        uVar29 = (ulonglong)(uVar27 + 1);
      } while ((int)(uVar27 + 1) < iVar14);
    }
    uVar25 = (ulonglong)(int)local_284;
    if (iVar14 < (int)local_284) {
      pFVar1 = (ForAnyElementType *)((longlong)&(this->RTTSize).field0_0x0 + 4);
      pbVar2 = &this->bPlayInEditorIsSimulate;
      local_250 = (ulonglong)(local_284 - iVar14);
      piVar3 = &(this->BufferedSlateHandles).ArrayNum;
      do {
        puVar18 = ::operator_new(0x40);
        if (puVar18 == (undefined8 *)0x0) {
          puVar18 = (undefined8 *)0x0;
        }
        else {
          *(undefined1 *)(puVar18 + 1) = 0x21;
          *puVar18 = &___7__TSlateTexture_V__TRefCountPtr_VFRHITexture______6B_;
          puVar18[2] = 0;
          FRenderResource::FRenderResource((FRenderResource *)(puVar18 + 3));
          *puVar18 = &FSlateRenderTargetRHI::
                      _vftable__for__TSlateTexture<TRefCountPtr<FRHITexture>_>__;
          puVar18[3] = &FSlateRenderTargetRHI::_vftable__for__FRenderResource__;
          puVar18[7] = 0;
        }
        piVar23 = (int *)((longlong)&(this->BufferedSlateHandles).AllocatorInstance.Data + 4);
        local_238 = puVar18;
        if (((*(undefined8 ***)pbVar2 <= &local_238) &&
            (&local_238 < *(undefined8 ***)pbVar2 + (this->RTTSize).field0_0x0._s_0.X)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar14 = (this->MousePosBeforeHiddenDueToCapture).field0_0x0._s_0.Y;
        if (iVar14 == (this->RTTSize).field0_0x0._s_0.X) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)pbVar2,(int *)&this->RTTSize);
        }
        (this->MousePosBeforeHiddenDueToCapture).field0_0x0._s_0.Y = iVar14 + 1;
        local_268 = 0;
        *(undefined8 **)(*(longlong *)pbVar2 + (longlong)iVar14 * 8) = local_238;
        if (((pFVar1->Data <= (FScriptContainerElement *)&local_268) &&
            ((FScriptContainerElement *)&local_268 < pFVar1->Data + (longlong)*piVar23 * 8)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar14 = *(int *)&(this->BufferedSlateHandles).AllocatorInstance.Data;
        if (iVar14 == *piVar23) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,pFVar1,piVar23);
        }
        *(int *)&(this->BufferedSlateHandles).AllocatorInstance.Data = iVar14 + 1;
        pFVar5 = pFVar1->Data;
        local_260 = 0;
        *(undefined8 *)(pFVar5 + (longlong)iVar14 * 8) = 0;
        *(undefined8 *)(pFVar5 + (longlong)iVar14 * 8) = local_268;
        local_268 = 0;
        if (((*(undefined8 **)piVar3 <= &local_260) &&
            (&local_260 <
             *(undefined8 **)piVar3 +
             *(int *)((longlong)&(this->BufferedRenderTargetsRHI).AllocatorInstance.Data + 4))) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar14 = *(int *)&(this->BufferedRenderTargetsRHI).AllocatorInstance.Data;
        if (iVar14 == *(int *)((longlong)&(this->BufferedRenderTargetsRHI).AllocatorInstance.Data +
                              4)) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)piVar3,
                              (int *)((longlong)
                                      &(this->BufferedRenderTargetsRHI).AllocatorInstance.Data + 4))
          ;
        }
        local_250 = local_250 - 1;
        *(int *)&(this->BufferedRenderTargetsRHI).AllocatorInstance.Data = iVar14 + 1;
        lVar31 = *(longlong *)piVar3;
        *(undefined8 *)(lVar31 + (longlong)iVar14 * 8) = 0;
        *(undefined8 *)(lVar31 + (longlong)iVar14 * 8) = local_260;
        local_260 = 0;
      } while (local_250 != 0);
      uVar25 = (ulonglong)local_284;
      local_250 = 0;
    }
    else if ((int)local_284 < iVar14) {
      pbVar2 = &this->bPlayInEditorIsSimulate;
      iVar14 = (this->MousePosBeforeHiddenDueToCapture).field0_0x0._s_0.Y;
      if (iVar14 < (int)local_284) {
        iVar15 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,8,local_284 - iVar14,(ForAnyElementType *)pbVar2,
                            &(this->MousePosBeforeHiddenDueToCapture).field0_0x0._s_0.Y,
                            (int *)&this->RTTSize);
        memset((void *)(*(longlong *)pbVar2 + (longlong)iVar15 * 8),0,
               (longlong)(int)(local_284 - iVar14) << 3);
      }
      else {
        if ((int)local_284 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)local_284);
        }
        if ((int)local_284 < iVar14) {
          uVar22 = iVar14 - local_284;
          if (((int)(uVar22 | local_284) < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (uVar22 != 0) {
            _Dst = (void *)(*(longlong *)pbVar2 + uVar25 * 8);
            iVar14 = ((this->MousePosBeforeHiddenDueToCapture).field0_0x0._s_0.Y - uVar22) -
                     local_284;
            if (iVar14 != 0) {
              memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar22 * 8),
                      (longlong)iVar14 << 3);
            }
            iVar14 = (this->MousePosBeforeHiddenDueToCapture).field0_0x0._s_0.Y - uVar22;
            (this->MousePosBeforeHiddenDueToCapture).field0_0x0._s_0.Y = iVar14;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,(ForAnyElementType *)pbVar2,iVar14,(int *)&this->RTTSize);
          }
        }
      }
      TArray<TRefCountPtr<FRHITexture>,TSizedDefaultAllocator<32>_>::SetNum
                ((TArray<TRefCountPtr<FRHITexture>,TSizedDefaultAllocator<32>_> *)
                 ((longlong)&(this->RTTSize).field0_0x0 + 4),local_284,Default);
      TArray<TRefCountPtr<FRHITexture>,TSizedDefaultAllocator<32>_>::SetNum
                ((TArray<TRefCountPtr<FRHITexture>,TSizedDefaultAllocator<32>_> *)
                 &(this->BufferedSlateHandles).ArrayNum,local_284,Default);
    }
    iVar14 = (this->MousePosBeforeHiddenDueToCapture).field0_0x0._s_0.Y;
    if (((iVar14 != *(int *)&(this->BufferedSlateHandles).AllocatorInstance.Data) ||
        (iVar14 != *(int *)&(this->BufferedRenderTargetsRHI).AllocatorInstance.Data)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("BufferedSlateHandles.Num() == BufferedRenderTargetsRHI.Num() && BufferedSlateHandles.Num() == BufferedShaderResourceTexturesRHI.Num()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SceneViewport.cpp"
                            ,0x854,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar26 = 0;
    local_208 = (longlong)(int)uVar25;
    local_270 = (FRHITexture *)0x0;
    local_278 = (FRHITexture *)0x0;
    if (0 < (int)uVar25) {
      local_250 = 0;
      uVar25 = uVar26;
      do {
        uVar29 = local_250;
        uVar27 = (uint)uVar25;
        uVar22 = 0;
        if (local_288 == '\0') {
          if ((local_1f0 == (IStereoRenderTargetManager *)0x0) ||
             (cVar12 = (**(code **)((longlong)*local_1f0 + 0x38))
                                 (local_1f0,uVar25,local_27c,local_280), cVar12 == '\0')) {
            local_1d8.ClearValue._0_8_ = 1;
            local_1d8.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
            local_1d8.ClearValue.Value._4_8_ = 0;
            local_1f8 = local_27c;
            uStack_1f4 = local_280;
            local_1d8.Extent.field0_0x0._s_0.Y = local_280;
            local_1d8.Extent.field0_0x0._s_0.X = local_27c;
            local_1d8.Format = (this->OnSceneViewportResizeDel).field_0x14;
            local_1d8.ClearValue.Value.Color[3] = 0.0;
            local_1d8.ExtData = 0;
            local_1d8.Depth = 1;
            local_1d8.ArraySize = 1;
            local_1d8.NumMips = '\x01';
            local_1d8.NumSamples = '\x01';
            local_1d8.Dimension = Texture2D;
            local_1d8.UAVFormat = PF_Unknown;
            local_1d8.FastVRAMPercentage = 0xff;
            local_1d8.AliasableFormats.AllocatorInstance.SecondaryData =
                 (ForElementType<EPixelFormat>)0x0;
            local_1d8.AliasableFormats.ArrayNum = 0;
            local_1d8.AliasableFormats.ArrayMax = 1;
            local_188 = L"BufferedRT";
            local_180 = 0x70;
            local_178 = (FResourceBulkDataInterface *)0x0;
            local_170.ComparisonIndex.Value = 0;
            local_170.Number = 0;
            local_168.ComparisonIndex.Value = 0;
            local_168.Number = 0;
            local_1d8.Flags = ShaderResource|RenderTargetable;
            FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)&local_c8,&local_1d8);
            local_c8.DebugName = local_188;
            local_c8.InitialState = (ERHIAccess)local_180;
            local_c8.InitAction = local_180._4_4_;
            local_c8.BulkData = local_178;
            local_c8.ClassName = local_170;
            local_c8.OwnerName = local_168;
            if (local_1d8.AliasableFormats.AllocatorInstance.SecondaryData !=
                (ForElementType<EPixelFormat>)0x0) {
              FMemory::Free((void *)local_1d8.AliasableFormats.AllocatorInstance.SecondaryData);
            }
            FRHICommandListBase::CreateTextureInitializer
                      (local_1e8,(FRHITextureInitializer *)local_158,&local_c8);
            FRHITextureInitializer::Finalize((FRHITextureInitializer *)local_158);
            if ((local_f8 != (FRHICommandListBase *)0x0) && (local_f0 != (FRHITexture *)0x0)) {
              FRHITextureInitializer::RemovePendingTextureUpload
                        ((FRHITextureInitializer *)local_158);
            }
            if (local_128 != 0) {
              plVar20 = local_118;
              if (local_100 != (longlong *)0x0) {
                plVar20 = local_100;
              }
              (**(code **)(*plVar20 + 0x10))();
            }
            if (local_158._0_8_ != 0) {
              plVar20 = (longlong *)(local_158 + 0x10);
              if ((longlong *)local_158._40_8_ != (longlong *)0x0) {
                plVar20 = (longlong *)local_158._40_8_;
              }
              (**(code **)(*plVar20 + 0x10))();
            }
            pFVar6 = local_278;
            local_278 = local_210;
            local_210 = (FRHITexture *)0x0;
            if (pFVar6 != (FRHITexture *)0x0) {
              FRHIResource::Release((FRHIResource *)pFVar6);
            }
            pFVar6 = local_270;
            if (local_270 != local_278) {
              local_270 = local_278;
              if (local_278 != (FRHITexture *)0x0) {
                FRHIResource::AddRef((FRHIResource *)local_278);
              }
              if (pFVar6 != (FRHITexture *)0x0) {
                FRHIResource::Release((FRHIResource *)pFVar6);
              }
            }
            if (local_210 != (FRHITexture *)0x0) {
              FRHIResource::Release((FRHIResource *)local_210);
            }
            if ((void *)local_c8._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_c8._padding_);
            }
          }
        }
        else {
          uVar30 = uVar22;
          if ((int)uVar27 < (int)(uint)local_240) {
            uVar30 = ~uVar27 >> 0x1f;
          }
          if ((uVar30 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar9 = local_270;
          pFVar6 = *(FRHITexture **)((longlong)&local_248->Reference + uVar29);
          if (local_270 != pFVar6) {
            local_270 = pFVar6;
            if (pFVar6 != (FRHITexture *)0x0) {
              FRHIResource::AddRef((FRHIResource *)pFVar6);
            }
            if (pFVar9 != (FRHITexture *)0x0) {
              FRHIResource::Release((FRHIResource *)pFVar9);
            }
          }
          uVar30 = uVar22;
          if ((int)uVar27 < (int)local_218) {
            uVar30 = ~uVar27 >> 0x1f;
          }
          if ((uVar30 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar9 = local_278;
          pFVar6 = local_220[uVar26].Reference;
          if (local_278 != pFVar6) {
            local_278 = pFVar6;
            if (pFVar6 != (FRHITexture *)0x0) {
              FRHIResource::AddRef((FRHIResource *)pFVar6);
            }
            if (pFVar9 != (FRHITexture *)0x0) {
              FRHIResource::Release((FRHIResource *)pFVar9);
            }
          }
        }
        uVar28 = ~uVar27 >> 0x1f;
        uVar30 = uVar22;
        if ((int)uVar27 < *(int *)&(this->BufferedSlateHandles).AllocatorInstance.Data) {
          uVar30 = uVar28;
        }
        if ((uVar30 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar31 = *(longlong *)((longlong)&(this->RTTSize).field0_0x0 + 4);
        pFVar6 = *(FRHITexture **)(lVar31 + uVar26 * 8);
        if (pFVar6 != local_270) {
          *(FRHITexture **)(lVar31 + uVar26 * 8) = local_270;
          if (local_270 != (FRHITexture *)0x0) {
            FRHIResource::AddRef((FRHIResource *)local_270);
          }
          if (pFVar6 != (FRHITexture *)0x0) {
            FRHIResource::Release((FRHIResource *)pFVar6);
          }
        }
        uVar30 = uVar22;
        if ((int)uVar27 < *(int *)&(this->BufferedRenderTargetsRHI).AllocatorInstance.Data) {
          uVar30 = uVar28;
        }
        if ((uVar30 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar31 = *(longlong *)&(this->BufferedSlateHandles).ArrayNum;
        pFVar6 = *(FRHITexture **)(lVar31 + uVar26 * 8);
        if (pFVar6 != local_278) {
          *(FRHITexture **)(lVar31 + uVar26 * 8) = local_278;
          if (local_278 != (FRHITexture *)0x0) {
            FRHIResource::AddRef((FRHIResource *)local_278);
          }
          if (pFVar6 != (FRHITexture *)0x0) {
            FRHIResource::Release((FRHIResource *)pFVar6);
          }
        }
        uVar30 = uVar22;
        if ((int)uVar27 < (this->MousePosBeforeHiddenDueToCapture).field0_0x0._s_0.Y) {
          uVar30 = uVar28;
        }
        if ((uVar30 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (*(longlong *)(*(longlong *)&this->bPlayInEditorIsSimulate + uVar26 * 8) != 0) {
          if ((int)uVar27 < (this->MousePosBeforeHiddenDueToCapture).field0_0x0._s_0.Y) {
            uVar22 = uVar28;
          }
          if ((uVar22 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar30 = local_27c;
          uVar22 = local_280;
          local_1e0 = local_278;
          this_00 = *(FSlateRenderTargetRHI **)
                     (*(longlong *)&this->bPlayInEditorIsSimulate + uVar26 * 8);
          if (local_278 != (FRHITexture *)0x0) {
            FRHIResource::AddRef((FRHIResource *)local_278);
          }
          FSlateRenderTargetRHI::SetRHIRef(this_00,(FRHITexture *)&local_1e0,uVar30,uVar22);
        }
        local_250 = local_250 + 8;
        uVar25 = (ulonglong)(uVar27 + 1);
        uVar26 = uVar26 + 1;
      } while ((longlong)uVar26 < local_208);
      uVar25 = (ulonglong)local_284;
    }
    iVar14 = (this->MousePosBeforeHiddenDueToCapture).field0_0x0._s_0.Y;
    uVar22 = 0;
    if ((int)uVar25 < iVar14) {
      lVar24 = (longlong)(int)uVar25;
      lVar31 = lVar24 * 8;
      do {
        uVar28 = (uint)uVar25;
        uVar30 = ~uVar28 >> 0x1f;
        uVar27 = uVar22;
        if ((int)uVar28 < iVar14) {
          uVar27 = uVar30;
        }
        if ((uVar27 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (*(longlong *)(lVar31 + *(longlong *)&this->bPlayInEditorIsSimulate) != 0) {
          uVar27 = uVar22;
          if ((int)uVar28 < (this->MousePosBeforeHiddenDueToCapture).field0_0x0._s_0.Y) {
            uVar27 = uVar30;
          }
          if ((uVar27 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar7 = *(longlong *)(*(longlong *)&this->bPlayInEditorIsSimulate + lVar24 * 8);
          bVar10 = IsInRenderingThread();
          if ((!bVar10) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsInRenderingThread()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SlateTextures.cpp"
                                  ,0x126,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar4 = *(FRHIResource **)(lVar7 + 0x10);
          if (pFVar4 != (FRHIResource *)0x0) {
            *(undefined8 *)(lVar7 + 0x10) = 0;
            FRHIResource::Release(pFVar4);
          }
          *(undefined8 *)(lVar7 + 0x38) = 0;
        }
        uVar27 = uVar22;
        if ((int)uVar28 < *(int *)&(this->BufferedSlateHandles).AllocatorInstance.Data) {
          uVar27 = uVar30;
        }
        if ((uVar27 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar7 = *(longlong *)((longlong)&(this->RTTSize).field0_0x0 + 4);
        pFVar4 = *(FRHIResource **)(lVar7 + lVar24 * 8);
        if (pFVar4 != (FRHIResource *)0x0) {
          *(undefined8 *)(lVar7 + lVar24 * 8) = 0;
          FRHIResource::Release(pFVar4);
        }
        uVar27 = uVar22;
        if ((int)uVar28 < *(int *)&(this->BufferedRenderTargetsRHI).AllocatorInstance.Data) {
          uVar27 = uVar30;
        }
        if ((uVar27 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar7 = *(longlong *)&(this->BufferedSlateHandles).ArrayNum;
        pFVar4 = *(FRHIResource **)(lVar7 + lVar24 * 8);
        if (pFVar4 != (FRHIResource *)0x0) {
          *(undefined8 *)(lVar7 + lVar24 * 8) = 0;
          FRHIResource::Release(pFVar4);
        }
        iVar14 = (this->MousePosBeforeHiddenDueToCapture).field0_0x0._s_0.Y;
        uVar25 = (ulonglong)(uVar28 + 1);
        lVar24 = lVar24 + 1;
        lVar31 = lVar31 + 8;
      } while ((int)(uVar28 + 1) < iVar14);
    }
    (this->BufferedShaderResourceTexturesRHI).ArrayNum = 0;
    (this->BufferedShaderResourceTexturesRHI).ArrayMax = (int)(1 % (longlong)iVar14);
    if ((*(int *)&(this->BufferedRenderTargetsRHI).AllocatorInstance.Data < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar4 = *(FRHIResource **)&this[-1].ViewportGammaOverride.bIsSet;
    this_01 = (FRHIResource *)**(undefined8 **)&(this->BufferedSlateHandles).ArrayNum;
    if (pFVar4 != this_01) {
      *(FRHIResource **)&this[-1].ViewportGammaOverride.bIsSet = this_01;
      if (this_01 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(this_01);
      }
      if (pFVar4 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar4);
      }
    }
    if (local_278 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)local_278);
    }
    if (local_270 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)local_270);
    }
    DestructItems<TRefCountPtr<FRHITexture>,int>(local_220,(int)local_218);
    if (local_220 != (TRefCountPtr<FRHITexture> *)0x0) {
      FMemory::Free(local_220);
    }
    DestructItems<TRefCountPtr<FRHITexture>,int>(local_248,(uint)local_240);
    if (local_248 != (TRefCountPtr<FRHITexture> *)0x0) {
      FMemory::Free(local_248);
    }
  }
  return;
}

// InvalidateDisplay @ 1486d0e10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FSceneViewport::InvalidateDisplay(FSceneViewport *this)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 != (longlong *)0x0) {
    if (this == (FSceneViewport *)&DAT_00000008) {
      this = (FSceneViewport *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x0001486d0e2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1,this);
    return;
  }
  return;
}

// IsCurrentlyGameViewport @ 1486d0f20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FSceneViewport::IsCurrentlyGameViewport(FSceneViewport *this)

{
  UGameViewportClient *pUVar1;
  bool bVar2;
  
  pUVar1 = (GEngine->GameViewport).field0_0x0.DebugPtr;
  if (pUVar1 == (UGameViewportClient *)0x0) {
    bVar2 = (undefined1 *)this->_padding_ == (undefined1 *)0x0;
  }
  else {
    bVar2 = &pUVar1->_padding_ == (longlong *)this->_padding_;
  }
  if ((!bVar2) && (((uint)this->_padding_ >> 3 & 1) == 0)) {
    return false;
  }
  return true;
}

// IsCursorVisible @ 1486d0f70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall FSceneViewport::IsCursorVisible(FSceneViewport *this)

{
  return (bool)*(undefined1 *)&(this->MouseDelta).field0_0x0;
}

// IsForegroundWindow @ 1486d1080

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall FSceneViewport::IsForegroundWindow(FSceneViewport *this)

{
  code *pcVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  FSlateApplication *pFVar5;
  TSharedPtr<FGenericWindow,1> *pTVar6;
  SViewport *pSVar7;
  SViewport *pSVar8;
  SViewport *pSVar9;
  bool bVar10;
  SWindow *local_48;
  TReferenceControllerBase<1> *local_40;
  SViewport *local_38;
  SViewport *local_30;
  TSharedPtr<FGenericWindow,1> local_28;
  
  uVar3 = 0;
  if ((this->DebugCanvasDrawer).SharedReferenceCount.ReferenceController ==
      (TReferenceControllerBase<1> *)0x0) {
    return false;
  }
  pSVar8 = (this->ViewportWidget).Object;
  if (pSVar8 == (SViewport *)0x0) {
    return false;
  }
  if ((int)pSVar8->_padding_ < 1) {
    return false;
  }
  pFVar5 = FSlateApplication::Get();
  pSVar8 = (this->ViewportWidget).Object;
  pSVar9 = (SViewport *)0x0;
  pcVar1 = *(code **)(*(longlong *)pFVar5 + 0x28);
  pSVar7 = pSVar8;
  if (pSVar8 != (SViewport *)0x0) {
    iVar2 = (int)pSVar8->_padding_;
    do {
      pSVar7 = pSVar9;
      if (iVar2 == 0) goto LAB_1486d1105;
      LOCK();
      iVar4 = (int)pSVar8->_padding_;
      bVar10 = iVar2 == iVar4;
      if (bVar10) {
        *(int *)&pSVar8->_padding_ = iVar2 + 1;
        iVar4 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar4;
    } while (!bVar10);
    pSVar9 = (SViewport *)(this->DebugCanvasDrawer).SharedReferenceCount.ReferenceController;
    pSVar7 = pSVar8;
    if (pSVar9 != (SViewport *)0x0) goto LAB_1486d1156;
  }
LAB_1486d1105:
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x416,L"");
  if (bVar10) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x26c,L"");
  pSVar8 = pSVar7;
  if (bVar10) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
LAB_1486d1156:
  if (pSVar8 != (SViewport *)0x0) {
    LOCK();
    *(int *)&pSVar8->_padding_ = (int)pSVar8->_padding_ + 1;
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30 = pSVar8;
  (*pcVar1)(pFVar5,&local_48,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (local_48 != (SWindow *)0x0) {
    if ((local_48 == (SWindow *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    pTVar6 = SWindow::GetNativeWindow(local_48,&local_28);
    if ((pTVar6->Object == (FGenericWindow *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    uVar3 = (**(code **)(pTVar6->Object->_padding_ + 200))();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  return (bool)uVar3;
}

// IsSoftwareCursorVisible @ 1486d1fb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall FSceneViewport::IsSoftwareCursorVisible(FSceneViewport *this)

{
  return (bool)*(undefined1 *)((longlong)&(this->SoftwareCursorPosition).field0_0x0 + 8);
}

// IsSoftwareCursorVisible`adjustor{208}' @ 1486d1fc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* [thunk]:public: virtual bool __cdecl FSceneViewport::IsSoftwareCursorVisible`adjustor{208}'
   (void)const __ptr64 */

bool __thiscall FSceneViewport::IsSoftwareCursorVisible_adjustor_208__(FSceneViewport *this)

{
  bool bVar1;
  
  bVar1 = IsSoftwareCursorVisible((FSceneViewport *)&this[-1].ViewportWidget);
  return bVar1;
}

// IsStereoRenderingAllowed @ 1486d1fe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall FSceneViewport::IsStereoRenderingAllowed(FSceneViewport *this)

{
  code *pcVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  SViewport *pSVar5;
  SViewport *pSVar6;
  SViewport *pSVar7;
  bool bVar8;
  
  if ((((this->DebugCanvasDrawer).SharedReferenceCount.ReferenceController ==
        (TReferenceControllerBase<1> *)0x0) ||
      (pSVar7 = (this->ViewportWidget).Object, pSVar7 == (SViewport *)0x0)) ||
     ((int)pSVar7->_padding_ < 1)) {
    return false;
  }
  pSVar5 = (SViewport *)0x0;
  pSVar7 = (this->ViewportWidget).Object;
  pSVar6 = pSVar7;
  if (pSVar7 != (SViewport *)0x0) {
    iVar2 = (int)pSVar7->_padding_;
    do {
      pSVar6 = pSVar5;
      if (iVar2 == 0) goto LAB_1486d2041;
      LOCK();
      iVar4 = (int)pSVar7->_padding_;
      bVar8 = iVar2 == iVar4;
      if (bVar8) {
        *(int *)&pSVar7->_padding_ = iVar2 + 1;
        iVar4 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar4;
    } while (!bVar8);
    pSVar5 = (SViewport *)(this->DebugCanvasDrawer).SharedReferenceCount.ReferenceController;
    pSVar6 = pSVar7;
    if (pSVar5 != (SViewport *)0x0) goto LAB_1486d2067;
  }
LAB_1486d2041:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pSVar7 = pSVar6;
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
LAB_1486d2067:
  bVar8 = pSVar5->bEnableStereoRendering;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar7);
  return bVar8;
}

// IsStereoscopic3D @ 1486d20b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FSceneViewport::IsStereoscopic3D(FSceneViewport *this)

{
  bool bVar1;
  FViewport *pFVar2;
  
  pFVar2 = (FViewport *)&this[-1].ViewportWidget;
  if (this == (FSceneViewport *)&DAT_000000d8) {
    pFVar2 = (FViewport *)0x0;
  }
  bVar1 = UEngine::IsStereoscopic3D(GEngine,pFVar2);
  return bVar1;
}

// KeyState @ 1486d25e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall FSceneViewport::KeyState(FSceneViewport *this,FKey *param_1)

{
  TTuple<FKey,bool> *pTVar1;
  undefined1 uVar2;
  
  pTVar1 = TSet<TTuple<FKey,bool>,TDefaultMapHashableKeyFuncs<FKey,bool,0>,FDefaultSetAllocator>::
           Find((TSet<TTuple<FKey,bool>,TDefaultMapHashableKeyFuncs<FKey,bool,0>,FDefaultSetAllocator>
                 *)&(this->CurrentReplyState).FocusChangeReason,param_1);
  if (pTVar1 == (TTuple<FKey,bool> *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = pTVar1->field_0x18;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return (bool)uVar2;
}

// LockMouseToViewport @ 1486d2ee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FSceneViewport::LockMouseToViewport(FSceneViewport *this,bool param_1)

{
  int *piVar1;
  uint *puVar2;
  FWeakReferencer<1> *pFVar3;
  int iVar4;
  SWidget *pSVar5;
  code *pcVar6;
  int iVar7;
  SViewport *pSVar8;
  SViewport *pSVar9;
  SViewport *pSVar10;
  bool bVar11;
  TSharedRef<SWidget,1> local_28;
  undefined8 local_18 [2];
  
  if (!param_1) {
    puVar2 = (uint *)((longlong)
                      &(this->CurrentReplyState).DragDropContent.SharedReferenceCount.
                       ReferenceController + 4);
    *puVar2 = *puVar2 | 0x10;
    pFVar3 = &(this->CurrentReplyState).FocusRecipient.WeakReferenceCount;
    if (pFVar3 != (FWeakReferencer<1> *)local_18) {
      pSVar5 = (this->CurrentReplyState).MouseLockWidget.Object;
      pFVar3->ReferenceController = (TReferenceControllerBase<1> *)0x0;
      (this->CurrentReplyState).MouseLockWidget.Object = (SWidget *)0x0;
      if (pSVar5 != (SWidget *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)&pSVar5->_padding_ + 4);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(pSVar5->_padding_ + 8))(pSVar5,1);
        }
      }
    }
    return;
  }
  pSVar10 = (SViewport *)0x0;
  pSVar9 = (this->ViewportWidget).Object;
  pSVar8 = pSVar9;
  if (pSVar9 != (SViewport *)0x0) {
    iVar4 = (int)pSVar9->_padding_;
    do {
      pSVar8 = pSVar10;
      if (iVar4 == 0) goto LAB_1486d2f35;
      LOCK();
      iVar7 = (int)pSVar9->_padding_;
      bVar11 = iVar4 == iVar7;
      if (bVar11) {
        *(int *)&pSVar9->_padding_ = iVar4 + 1;
        iVar7 = iVar4;
      }
      UNLOCK();
      iVar4 = iVar7;
    } while (!bVar11);
    pSVar10 = (SViewport *)(this->DebugCanvasDrawer).SharedReferenceCount.ReferenceController;
    pSVar8 = pSVar9;
    if (pSVar10 != (SViewport *)0x0) goto LAB_1486d2f86;
  }
LAB_1486d2f35:
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x416,L"");
  if (bVar11) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x26c,L"");
  pSVar9 = pSVar8;
  if (bVar11) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_1486d2f86:
  if (pSVar9 != (SViewport *)0x0) {
    LOCK();
    *(int *)&pSVar9->_padding_ = (int)pSVar9->_padding_ + 1;
    UNLOCK();
  }
  local_28.Object = (SWidget *)pSVar10;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pSVar9;
  FReply::LockMouseToWidget((FReply *)&this->_padding_,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// MoveWindow @ 1486d3150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FSceneViewport::MoveWindow(FSceneViewport *this,int param_1,int param_2,int param_3,int param_4)

{
  return;
}

// OnAnalogValueChanged @ 1486d3c20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FReply * __thiscall
FSceneViewport::OnAnalogValueChanged
          (FSceneViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FAnalogInputEvent *param_2)

{
  bool bVar1;
  char cVar2;
  FViewport *pFVar3;
  float fVar4;
  float fVar5;
  bool local_res8 [8];
  FKey local_158;
  FInputKeyEventArgs local_138;
  FReply local_e8;
  
  FReply::FReply(&local_e8,true);
  FReply::operator=((FReply *)&this->_padding_,&local_e8);
  FReply::~FReply(&local_e8);
  local_158.KeyName = (FName)param_2->_padding_;
  local_158.KeyDetails.Object = (FKeyDetails *)param_2->_padding_;
  local_158.KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)param_2->_padding_;
  if (local_158.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_158.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_158.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  bVar1 = FKey::IsValid(&local_158);
  if (bVar1) {
    local_res8[0] = true;
    TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_>::
    Emplace<FKey_const_&,bool>
              ((TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_> *
               )&this->_padding_,&local_158,local_res8);
    if (*(longlong *)&this[-1].OnSceneViewportResizeDel != 0) {
      fVar4 = param_2->AnalogValue;
      fVar5 = (float)(double)FApp::DeltaTime;
      if (local_158.KeyName == EKeys::Gamepad_RightY.KeyName) {
        fVar4 = (float)((uint)fVar4 ^ __xmm_80000000800000008000000080000000);
      }
      pFVar3 = (FViewport *)&this[-1].ViewportWidget;
      if (this == (FSceneViewport *)&DAT_000000d8) {
        pFVar3 = (FViewport *)0x0;
      }
      FInputKeyEventArgs::FInputKeyEventArgs
                (&local_138,pFVar3,(FInputDeviceId)(int)param_2->_padding_,&local_158,IE_Axis,fVar4,
                 false,param_2->_padding_);
      local_138.NumSamples = 1;
      local_138.DeltaTime = fVar5;
      cVar2 = (**(code **)(**(longlong **)&this[-1].OnSceneViewportResizeDel + 0x48))();
      if (cVar2 == '\0') {
        FReply::FReply(&local_e8,false);
        FReply::operator=((FReply *)&this->_padding_,&local_e8);
        FReply::~FReply(&local_e8);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_138.Key.KeyDetails.SharedReferenceCount.ReferenceController);
    }
  }
  else {
    FReply::FReply(&local_e8,false);
    FReply::operator=((FReply *)&this->_padding_,&local_e8);
    FReply::~FReply(&local_e8);
  }
  FReply::FReply(__return_storage_ptr__,(FReply *)&this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.KeyDetails.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// OnCursorQuery @ 1486d3df0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FCursorReply * __thiscall
FSceneViewport::OnCursorQuery
          (FSceneViewport *this,FCursorReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  UGameViewportClient *pUVar1;
  SWindow *pSVar2;
  atomic<int> aVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  Type TVar6;
  atomic<int> aVar7;
  int *piVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  undefined1 local_res8 [8];
  char local_68 [8];
  longlong local_60;
  TReferenceControllerBase<1> *local_58;
  SWindow *local_50;
  TReferenceControllerBase<1> *local_48;
  SWidget *local_40;
  TReferenceControllerBase<1> *local_38;
  Type local_30;
  
  if ((this->KeyStateMap).field_0x41 != '\0') {
    *(undefined1 *)&__return_storage_ptr__->_padding_ = 1;
    __return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->_padding_ = 0;
    (__return_storage_ptr__->CursorWindow).Object = (SWindow *)0x0;
    (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->CursorWidget).Object = (SWidget *)0x0;
    (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->MouseCursor = None;
    return __return_storage_ptr__;
  }
  TVar6 = Default;
  if (*(longlong *)&this[-1].OnSceneViewportResizeDel != 0) {
    pTVar10 = (TReferenceControllerBase<1> *)&this[-1].ViewportWidget;
    piVar8 = (int *)(*(code *)((TWeakPtr<SViewport,1> *)pTVar10)->Object->_padding_)
                              (pTVar10,local_res8);
    if ((*piVar8 != UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X) ||
       (TVar6 = Default, piVar8[1] != UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y)) {
      uVar4 = (*(code *)((TWeakPtr<SViewport,1> *)pTVar10)->Object->_padding_)(pTVar10);
      uVar5 = (*(code *)((TWeakPtr<SViewport,1> *)pTVar10)->Object->_padding_)(pTVar10);
      if (this == (FSceneViewport *)&DAT_000000d8) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
      }
      TVar6 = (**(code **)(**(longlong **)&this[-1].OnSceneViewportResizeDel + 200))
                        (*(longlong **)&this[-1].OnSceneViewportResizeDel,pTVar10,uVar4,uVar5);
    }
  }
  if (((GEngine != (UEngine *)0x0) &&
      (pUVar1 = (GEngine->GameViewport).field0_0x0.DebugPtr, pUVar1 != (UGameViewportClient *)0x0))
     && (TVar6 != None)) {
    pTVar10 = (pUVar1->Window).WeakReferenceCount.ReferenceController;
    pTVar9 = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar10->SharedReferenceCount;
      do {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        if (aVar3 == (atomic<int>)0x0) goto LAB_1486d3f31;
        LOCK();
        aVar7 = pTVar10->SharedReferenceCount;
        bVar11 = aVar3 == aVar7;
        if (bVar11) {
          pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar7 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar7;
      } while (!bVar11);
      pSVar2 = (pUVar1->Window).Object;
      pTVar9 = pTVar10;
      if (pSVar2 != (SWindow *)0x0) {
        (**(code **)(pSVar2->_padding_ + 0x90))(pSVar2,local_68,param_1,param_2);
        if (local_68[0] != '\0') {
          *(char *)&__return_storage_ptr__->_padding_ = local_68[0];
          __return_storage_ptr__->_padding_ = local_60;
          __return_storage_ptr__->_padding_ = (longlong)local_58;
          (__return_storage_ptr__->CursorWindow).Object = local_50;
          (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController = local_48
          ;
          (__return_storage_ptr__->CursorWidget).Object = local_40;
          (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController = local_38
          ;
          __return_storage_ptr__->MouseCursor = local_30;
          local_58 = (TReferenceControllerBase<1> *)0x0;
          local_60 = 0;
          local_48 = (TReferenceControllerBase<1> *)0x0;
          local_50 = (SWindow *)0x0;
          local_38 = (TReferenceControllerBase<1> *)0x0;
          local_40 = (SWidget *)0x0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_48);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_58);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar10);
          return __return_storage_ptr__;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_38);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58);
      }
    }
LAB_1486d3f31:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 1;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  (__return_storage_ptr__->CursorWindow).Object = (SWindow *)0x0;
  (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->CursorWidget).Object = (SWidget *)0x0;
  (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->MouseCursor = TVar6;
  return __return_storage_ptr__;
}

// OnDrawViewport @ 1486d4060

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FSceneViewport::OnDrawViewport
          (FSceneViewport *this,FGeometry *param_1,FSlateRect *param_2,
          FSlateWindowElementList *param_3,int param_4,FWidgetStyle *param_5,bool param_6)

{
  code *pcVar1;
  atomic<int> aVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  atomic<int> aVar7;
  Type TVar8;
  TSharedPtr<FGenericWindow,1> *pTVar9;
  void *pvVar10;
  FDeprecateSlateVector2D FVar11;
  FDeprecateSlateVector2D FVar12;
  IStereoRenderTargetManager *pIVar13;
  uint *puVar14;
  FSlateApplication *pFVar15;
  TReferenceControllerBase<1> *pTVar16;
  FDragDropOperation *pFVar17;
  SWindow *this_00;
  FDragDropOperation *pFVar18;
  FDragDropOperation *pFVar19;
  uint uVar20;
  FDragDropOperation *pFVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  double dVar25;
  float fVar26;
  undefined8 local_res8;
  FGeometry *local_res10;
  EDisplayOutputFormat local_f4;
  float local_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  SWindow *local_e0;
  TReferenceControllerBase<1> *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  code *local_b8;
  TVector2<double>_u_0 local_a8;
  FDragDropOperation *local_98;
  TReferenceControllerBase<1> *local_90;
  undefined1 local_70 [8];
  TVector2<double>_u_0 local_68;
  TSharedPtr<FGenericWindow,1> local_58 [2];
  
  if ((this->KeyStateMap).field_0x22 != '\0') {
    return;
  }
  local_res8._4_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
  local_res8._0_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
  fVar23 = local_res8._4_4_ * (param_1->AccumulatedRenderTransform).M.M[1][0] +
           (float)local_res8 * (param_1->AccumulatedRenderTransform).M.M[0][0] +
           (param_1->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
  fVar26 = (float)local_res8 * (param_1->AccumulatedRenderTransform).M.M[0][1] +
           local_res8._4_4_ * (param_1->AccumulatedRenderTransform).M.M[1][1] +
           (param_1->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
  local_res8 = CONCAT44(fVar26,fVar23);
  local_d0 = local_res8;
  local_res8._0_4_ = SUB84(param_1->Size,0);
  local_f0 = param_1->Scale * (float)local_res8;
  local_res8._4_4_ = SUB84(param_1->Size,4);
  fStack_ec = param_1->Scale * local_res8._4_4_;
  local_c8 = CONCAT44(fStack_ec,local_f0);
  fVar24 = fVar26 + fStack_ec;
  local_res8 = CONCAT44(fVar24,fVar23 + local_f0);
  local_c0 = local_res8;
  dVar25 = (double)(fVar23 + local_f0);
  uVar20 = (int)((longlong)ROUND(dVar25 + dVar25 + __real_3fe0000000000000) >> 1) -
           (int)((longlong)ROUND((double)fVar23 + (double)fVar23 + __real_3fe0000000000000) >> 1);
  uVar22 = (int)((longlong)ROUND(fVar24 + fVar24 + __real_3f000000) >> 1) -
           (int)((longlong)ROUND((double)fVar26 + (double)fVar26 + __real_3fe0000000000000) >> 1);
  local_res10 = param_1;
  bVar4 = IsHDREnabled();
  bVar5 = IsInGameThread();
  if (((!bVar5) && (bVar5 = IsInSlateThread(), !bVar5)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() || IsInSlateThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Rendering\\DrawElements.h"
                         ,0xec,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((((param_3->WeakPaintWindow).Object == (SWindow *)0x0) ||
      (pTVar16 = (param_3->WeakPaintWindow).WeakReferenceCount.ReferenceController,
      pTVar16 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar16->SharedReferenceCount < 1)) {
    this_00 = (SWindow *)0x0;
    cVar6 = (this->KeyStateMap).field_0x42;
LAB_1486d43a5:
    bVar4 = bVar4 != (bool)cVar6;
  }
  else {
    cVar6 = (this->KeyStateMap).field_0x42;
    this_00 = param_3->RawPaintWindow;
    if (this_00 == (SWindow *)0x0) goto LAB_1486d43a5;
    bVar4 = (bool)(*(code *)(this[-1].ViewportWidget.Object)->_padding_)(&this[-1].ViewportWidget);
    pTVar9 = SWindow::GetNativeWindow(this_00,local_58);
    if ((pTVar9->Object == (FGenericWindow *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pvVar10 = (void *)(**(code **)(pTVar9->Object->_padding_ + 0xc0))();
    FVar11 = SWindow::GetSizeInScreen(this_00);
    FVar12 = SWindow::GetPositionInScreen(this_00);
    fVar23 = *(float *)((longlong)FVar12 + 4) + *(float *)((longlong)FVar11 + 4);
    _local_e8 = CONCAT44(fVar23,*(float *)FVar11 + *(float *)FVar12);
    local_a8._s_0.X = (double)(*(float *)FVar11 + *(float *)FVar12);
    local_a8._s_0.Y = (double)fVar23;
    FVar11 = SWindow::GetPositionInScreen(this_00);
    dVar25 = (double)(float)((ulonglong)*(undefined8 *)FVar11 >> 0x20);
    local_68._8_4_ = SUB84(dVar25,0);
    local_68._s_0.X = (double)(float)*(undefined8 *)FVar11;
    local_68._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
    pIVar13 = RetrieveStereoRenderTargetManager(bVar4);
    if ((pIVar13 == (IStereoRenderTargetManager *)0x0) ||
       (cVar6 = (**(code **)((longlong)*pIVar13 + 0x70))(pIVar13,&local_f4,&local_f0,&local_res8),
       cVar6 == '\0')) {
      HDRGetMetaData(&local_f4,(EDisplayColorGamut *)&local_f0,(bool *)&local_res8,
                     (TVector2<double> *)&local_68._s_0,(TVector2<double> *)&local_a8._s_0,pvVar10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58[0].SharedReferenceCount.ReferenceController);
    bVar4 = (bool)(this->KeyStateMap).field_0x42 != local_res8._0_1_ ||
            (*(EDisplayOutputFormat *)&this->bIsSoftwareCursorVisible != local_f4 ||
            *(float *)((longlong)&(this->SoftwareCursorPosition).field0_0x0 + 0xc) != local_f0);
  }
  puVar14 = (uint *)(*(code *)(this[-1].ViewportWidget.Object)->_padding_)
                              (&this[-1].ViewportWidget,local_70);
  if (((*puVar14 == uVar20) && (puVar14[1] == uVar22)) && (!bVar4)) {
    return;
  }
  pFVar15 = FSlateApplication::Get();
  pTVar16 = (this->CurrentReplyState).DragDropContent.SharedReferenceCount.ReferenceController;
  pFVar19 = (FDragDropOperation *)0x0;
  local_b8 = *(code **)(*(longlong *)pFVar15 + 0x28);
  if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
LAB_1486d4414:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    aVar2 = pTVar16->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar16 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1486d4414;
      }
      LOCK();
      aVar7 = pTVar16->SharedReferenceCount;
      bVar4 = aVar2 == aVar7;
      if (bVar4) {
        pTVar16->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar7 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar7;
    } while (!bVar4);
    pFVar19 = (this->CurrentReplyState).DragDropContent.Object;
    if (pFVar19 == (FDragDropOperation *)0x0) goto LAB_1486d4414;
  }
  if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98 = pFVar19;
  local_90 = pTVar16;
  (*local_b8)(pFVar15,&local_e0,&local_98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (local_e0 == (SWindow *)0x0) goto LAB_1486d461e;
  if ((this_00 != local_e0) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3367330647273111119>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SceneViewport.cpp"
                         ,0x1b1,"PaintWindow == Window.Get()"), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((local_e0 == (SWindow *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(float *)&local_e0->ViewportSize != 0.0) goto LAB_1486d461e;
  pFVar19 = (FDragDropOperation *)
            (this->CurrentReplyState).DragDropContent.SharedReferenceCount.ReferenceController;
  pFVar21 = (FDragDropOperation *)0x0;
  pFVar17 = pFVar21;
  pFVar18 = pFVar19;
  if (pFVar19 == (FDragDropOperation *)0x0) {
LAB_1486d4555:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    pFVar19 = pFVar18;
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    aVar2 = *(atomic<int> *)&pFVar19->_padding_;
    do {
      pFVar17 = (FDragDropOperation *)0x0;
      pFVar18 = pFVar21;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1486d4555;
      LOCK();
      aVar7 = *(atomic<int> *)&pFVar19->_padding_;
      bVar4 = aVar2 == aVar7;
      if (bVar4) {
        *(atomic<int> *)&pFVar19->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar7 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar7;
    } while (!bVar4);
    pFVar17 = (this->CurrentReplyState).DragDropContent.Object;
    pFVar18 = pFVar19;
    if (pFVar17 == (FDragDropOperation *)0x0) goto LAB_1486d4555;
  }
  lVar3 = pFVar17[0xc]._padding_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar19);
  if ((char)lVar3 != '\0') {
    fVar23 = (local_res10->AbsolutePosition).field0_0x0._s_0.X;
    if (fVar23 <= 0.0) {
      fVar23 = 0.0;
    }
    *(int *)&this[-1].RenderThreadSlateTexture = (int)(longlong)fVar23;
    fVar23 = (local_res10->AbsolutePosition).field0_0x0._s_0.Y;
    if (fVar23 <= 0.0) {
      fVar23 = 0.0;
    }
    *(int *)((longlong)&this[-1].RenderThreadSlateTexture + 4) = (int)(longlong)fVar23;
  }
  pcVar1 = *(code **)&this[-1].DebugCanvasDrawer.SharedReferenceCount.ReferenceController[1].
                      SharedReferenceCount;
  if ((local_e0 == (SWindow *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  TVar8 = SWindow::GetWindowMode(local_e0);
  pFVar19 = (FDragDropOperation *)(ulonglong)uVar22;
  if ((int)uVar22 < 0) {
    pFVar19 = pFVar21;
  }
  pFVar17 = (FDragDropOperation *)(ulonglong)uVar20;
  if ((int)uVar20 < 0) {
    pFVar17 = pFVar21;
  }
  (*pcVar1)(&this[-1].DebugCanvasDrawer.SharedReferenceCount,pFVar17,pFVar19,TVar8);
LAB_1486d461e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d8);
  return;
}

// OnFinishedPointerInput @ 1486d4690

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FSceneViewport::OnFinishedPointerInput(FSceneViewport *this)

{
  ProcessAccumulatedPointerInput((FSceneViewport *)&this[-1].DebugCanvasDrawer.SharedReferenceCount)
  ;
  return;
}

// OnFocusLost @ 1486d46b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FSceneViewport::OnFocusLost(FSceneViewport *this,FFocusEvent *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  uint uVar6;
  FSlateApplication *this_00;
  TWeakPtr<SViewport,1> *pTVar7;
  
  uVar2 = param_1->UserIndex;
  this_00 = FSlateApplication::Get();
  uVar6 = FSlateApplication::GetUserIndexForKeyboard(this_00);
  if ((uVar2 == uVar6) && (param_1->bLostFocusByChild == false)) {
    plVar4 = &this->_padding_;
    (this->KeyStateMap).field_0x1d = 0;
    (this->KeyStateMap).field_0x41 = 0;
    bVar5 = 1 < *(int *)&(this->CurrentReplyState).EventHandler.Object;
    if (!bVar5) {
      TSet<TTuple<FKey,bool>,TDefaultMapHashableKeyFuncs<FKey,bool,0>,FDefaultSetAllocator>::
      UnhashElements((TSet<TTuple<FKey,bool>,TDefaultMapHashableKeyFuncs<FKey,bool,0>,FDefaultSetAllocator>
                      *)plVar4);
    }
    TSparseArray<TSparseSetElement<TTuple<FKey,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FKey,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)plVar4,0,(int)this->_padding_);
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)plVar4,0,piVar1);
    }
    *(undefined4 *)&(this->CurrentReplyState)._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&(this->CurrentReplyState)._padding_ + 4) = 0;
    iVar3 = *(int *)((longlong)&(this->CurrentReplyState)._padding_ + 4);
    *(undefined4 *)&(this->CurrentReplyState)._padding_ = 0;
    if ((iVar3 < 0) || (0x80 < iVar3)) {
      *(undefined4 *)((longlong)&(this->CurrentReplyState)._padding_ + 4) = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_,0);
    }
    if (bVar5) {
      *(undefined4 *)&(this->CurrentReplyState).EventHandler.Object = 1;
      TSet<TTuple<FKey,bool>,TDefaultMapHashableKeyFuncs<FKey,bool,0>,FDefaultSetAllocator>::Rehash
                ((TSet<TTuple<FKey,bool>,TDefaultMapHashableKeyFuncs<FKey,bool,0>,FDefaultSetAllocator>
                  *)plVar4);
    }
    plVar4 = *(longlong **)&this[-1].OnSceneViewportResizeDel;
    if (plVar4 != (longlong *)0x0) {
      pTVar7 = &this[-1].ViewportWidget;
      if (this == (FSceneViewport *)&DAT_000000d8) {
        pTVar7 = (TWeakPtr<SViewport,1> *)0x0;
      }
      (**(code **)(*plVar4 + 0xe0))(plVar4,pTVar7);
    }
  }
  return;
}

// OnFocusReceived @ 1486d47e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FReply * __thiscall
FSceneViewport::OnFocusReceived
          (FSceneViewport *this,FReply *__return_storage_ptr__,FFocusEvent *param_1)

{
  uint uVar1;
  longlong *plVar2;
  UGameViewportClient *pUVar3;
  code *pcVar4;
  int iVar5;
  EVisibility EVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  FSlateApplication *pFVar10;
  FReply *pFVar11;
  undefined8 *puVar12;
  ForElementType<FArrangedWidget> FVar13;
  SWidget *pSVar14;
  SWidget *pSVar15;
  SWidget *pSVar16;
  TIntPoint<int> TVar17;
  bool bVar18;
  undefined1 auStack_298 [32];
  byte local_278;
  bool local_274;
  bool local_273;
  bool local_272;
  bool local_271;
  bool local_270;
  bool local_26f;
  bool local_26e;
  bool local_26d [5];
  undefined1 local_268 [8];
  TSharedRef<SWidget_const_,1> local_260;
  FReply local_250;
  FWidgetPath local_198;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_298;
  FReply::FReply(&local_250,true);
  FReply::operator=((FReply *)&this->_padding_,&local_250);
  FReply::~FReply(&local_250);
  uVar1 = param_1->UserIndex;
  pFVar10 = FSlateApplication::Get();
  uVar8 = FSlateApplication::GetUserIndexForKeyboard(pFVar10);
  if (uVar1 != uVar8) {
LAB_1486d4bb2:
    FReply::FReply(__return_storage_ptr__,(FReply *)&this->_padding_);
    return __return_storage_ptr__;
  }
  plVar2 = *(longlong **)&this[-1].OnSceneViewportResizeDel;
  pSVar16 = (SWidget *)0x0;
  if (plVar2 != (longlong *)0x0) {
    pSVar14 = (SWidget *)&this[-1].ViewportWidget;
    if (this == (FSceneViewport *)&DAT_000000d8) {
      pSVar14 = pSVar16;
    }
    (**(code **)(*plVar2 + 0xe8))(plVar2,pSVar14);
  }
  pFVar10 = FSlateApplication::Get();
  FSlateApplication::GetModifierKeys(pFVar10);
  plVar2 = &this->_padding_;
  local_274 = (bool)(local_278 >> 4 & 1);
  TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_>::
  Emplace<FKey_const_&,bool>
            ((TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_> *)
             plVar2,&EKeys::LeftAlt,&local_274);
  local_273 = (bool)(local_278 >> 5 & 1);
  TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_>::
  Emplace<FKey_const_&,bool>
            ((TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_> *)
             plVar2,&EKeys::RightAlt,&local_273);
  local_272 = (bool)(local_278 >> 2 & 1);
  TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_>::
  Emplace<FKey_const_&,bool>
            ((TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_> *)
             plVar2,&EKeys::LeftControl,&local_272);
  local_271 = (bool)(local_278 >> 3 & 1);
  TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_>::
  Emplace<FKey_const_&,bool>
            ((TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_> *)
             plVar2,&EKeys::RightControl,&local_271);
  local_270 = (bool)(local_278 & 1);
  TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_>::
  Emplace<FKey_const_&,bool>
            ((TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_> *)
             plVar2,&EKeys::LeftShift,&local_270);
  local_26f = (bool)(local_278 >> 1 & 1);
  TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_>::
  Emplace<FKey_const_&,bool>
            ((TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_> *)
             plVar2,&EKeys::RightShift,&local_26f);
  local_26e = (bool)(local_278 >> 6 & 1);
  TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_>::
  Emplace<FKey_const_&,bool>
            ((TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_> *)
             plVar2,&EKeys::LeftCommand,&local_26e);
  local_26d[0] = (bool)(local_278 >> 7);
  TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_>::
  Emplace<FKey_const_&,bool>
            ((TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_> *)
             plVar2,&EKeys::RightCommand,local_26d);
  pUVar3 = (GEngine->GameViewport).field0_0x0.DebugPtr;
  if (pUVar3 == (UGameViewportClient *)0x0) {
    bVar18 = *(undefined1 **)&this[-1].OnSceneViewportResizeDel == (undefined1 *)0x0;
  }
  else {
    bVar18 = &pUVar3->_padding_ == (longlong *)*(undefined1 **)&this[-1].OnSceneViewportResizeDel;
  }
  if ((!bVar18) && ((this[-1].DisplayOutputFormat >> 3 & 1) == 0)) goto LAB_1486d4bb2;
  pFVar10 = FSlateApplication::Get();
  if ((*(longlong **)&this[-1].OnSceneViewportResizeDel == (longlong *)0x0) ||
     ((cVar7 = (**(code **)(**(longlong **)&this[-1].OnSceneViewportResizeDel + 0x198))(),
      cVar7 != '\x01' &&
      (cVar7 = (**(code **)(**(longlong **)&this[-1].OnSceneViewportResizeDel + 0x198))(),
      cVar7 != '\x02')))) {
    bVar18 = false;
  }
  else {
    bVar18 = true;
  }
  cVar7 = (**(code **)(*(longlong *)pFVar10 + 8))(pFVar10);
  if (((cVar7 == '\0') || (!bVar18)) ||
     (cVar7 = (**(code **)(**(longlong **)&this[-1].OnSceneViewportResizeDel + 400))(),
     cVar7 != '\0')) goto LAB_1486d4bb2;
  pSVar14 = (SWidget *)
            (this->CurrentReplyState).DragDropContent.SharedReferenceCount.ReferenceController;
  pSVar15 = pSVar14;
  if (pSVar14 != (SWidget *)0x0) {
    iVar5 = *(int *)&((FWeakReferencer<1> *)&pSVar14->_padding_)->ReferenceController;
    do {
      pSVar15 = pSVar16;
      if (iVar5 == 0) goto LAB_1486d4a75;
      LOCK();
      iVar9 = *(int *)&((FWeakReferencer<1> *)&pSVar14->_padding_)->ReferenceController;
      bVar18 = iVar5 == iVar9;
      if (bVar18) {
        *(int *)&((FWeakReferencer<1> *)&pSVar14->_padding_)->ReferenceController = iVar5 + 1;
        iVar9 = iVar5;
      }
      UNLOCK();
      iVar5 = iVar9;
    } while (!bVar18);
    pSVar16 = (SWidget *)(this->CurrentReplyState).DragDropContent.Object;
    pSVar15 = pSVar14;
    if (pSVar16 != (SWidget *)0x0) goto LAB_1486d4ac6;
  }
LAB_1486d4a75:
  bVar18 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x416,L"");
  if (bVar18) {
    pcVar4 = (code *)swi(3);
    pFVar11 = (FReply *)(*pcVar4)();
    return pFVar11;
  }
  bVar18 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x26c,L"");
  pSVar14 = pSVar15;
  if (bVar18) {
    pcVar4 = (code *)swi(3);
    pFVar11 = (FReply *)(*pcVar4)();
    return pFVar11;
  }
LAB_1486d4ac6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FWidgetPath::FWidgetPath(&local_198);
  EVar6 = EVisibility::Visible;
  if (pSVar14 != (SWidget *)0x0) {
    LOCK();
    *(int *)&pSVar14->_padding_ = (int)pSVar14->_padding_ + 1;
    UNLOCK();
  }
  local_260.Object = pSVar16;
  local_260.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pSVar14;
  FSlateApplication::GeneratePathToWidgetUnchecked(pFVar10,&local_260,&local_198,EVar6);
  puVar12 = (undefined8 *)
            (*(code *)(this[-1].ViewportWidget.Object)->_padding_)
                      (&this[-1].ViewportWidget,local_268);
  TVar17.field0_0x0._s_0.Y = (int)((ulonglong)*puVar12 >> 0x20) / 2;
  TVar17.field0_0x0._s_0.X = (int)*puVar12 / 2;
  AcquireFocusAndCapture
            ((FSceneViewport *)&this[-1].DebugCanvasDrawer.SharedReferenceCount,
             __return_storage_ptr__,TVar17,Mouse);
  if (local_198.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.VirtualPointerPositions.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.TopLevelWindow.SharedReferenceCount.ReferenceController);
  FVar13 = (ForElementType<FArrangedWidget>)&local_198.Widgets.Array;
  if (local_198.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FVar13 = local_198.Widgets.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar13,local_198.Widgets.Array.ArrayNum);
  if (local_198.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_198.Widgets.Array.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar14);
  return __return_storage_ptr__;
}

// OnKeyChar @ 1486d4bf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FReply * __thiscall
FSceneViewport::OnKeyChar
          (FSceneViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FCharacterEvent *param_2)

{
  char cVar1;
  int *piVar2;
  TWeakPtr<SViewport,1> *pTVar3;
  FReply local_d8;
  
  FReply::FReply(&local_d8,true);
  FReply::operator=((FReply *)&this->_padding_,&local_d8);
  FReply::~FReply(&local_d8);
  if (*(longlong *)&this[-1].OnSceneViewportResizeDel != 0) {
    pTVar3 = &this[-1].ViewportWidget;
    piVar2 = (int *)(*(code *)pTVar3->Object->_padding_)(pTVar3);
    if ((*piVar2 != UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X) ||
       (piVar2[1] != UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y)) {
      if (this == (FSceneViewport *)&DAT_000000d8) {
        pTVar3 = (TWeakPtr<SViewport,1> *)0x0;
      }
      cVar1 = (**(code **)(**(longlong **)&this[-1].OnSceneViewportResizeDel + 0x58))
                        (*(longlong **)&this[-1].OnSceneViewportResizeDel,pTVar3,
                         *(undefined4 *)((longlong)&param_2->_padding_ + 4),param_2->Character);
      if (cVar1 == '\0') {
        FReply::FReply(&local_d8,false);
        FReply::operator=((FReply *)&this->_padding_,&local_d8);
        FReply::~FReply(&local_d8);
      }
    }
  }
  FReply::FReply(__return_storage_ptr__,(FReply *)&this->_padding_);
  return __return_storage_ptr__;
}

// OnKeyDown @ 1486d4d00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FReply * __thiscall
FSceneViewport::OnKeyDown
          (FSceneViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2
          )

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int *piVar5;
  FViewport *pFVar6;
  bool local_res8 [8];
  FKey local_148;
  FReply local_130;
  FInputKeyEventArgs local_78;
  
  FReply::FReply(&local_130,true);
  FReply::operator=((FReply *)&this->_padding_,&local_130);
  FReply::~FReply(&local_130);
  local_148.KeyName = (param_2->Key).KeyName;
  local_148.KeyDetails.Object = (param_2->Key).KeyDetails.Object;
  local_148.KeyDetails.SharedReferenceCount.ReferenceController =
       (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  if (local_148.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  bVar3 = FKey::IsValid(&local_148);
  if (bVar3) {
    local_res8[0] = true;
    TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_>::
    Emplace<FKey_const_&,bool>
              ((TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_> *
               )&this->_padding_,&local_148,local_res8);
    if (*(longlong *)&this[-1].OnSceneViewportResizeDel == 0) goto LAB_1486d4e9e;
    pFVar6 = (FViewport *)&this[-1].ViewportWidget;
    piVar5 = (int *)(*(code *)((TWeakPtr<SViewport,1> *)pFVar6)->Object->_padding_)
                              (pFVar6,local_res8);
    if ((*piVar5 == UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X) &&
       (piVar5[1] == UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y)) goto LAB_1486d4e9e;
    plVar1 = *(longlong **)&this[-1].OnSceneViewportResizeDel;
    pcVar2 = *(code **)(*plVar1 + 0x40);
    if (this == (FSceneViewport *)&DAT_000000d8) {
      pFVar6 = (FViewport *)0x0;
    }
    FInputKeyEventArgs::FInputKeyEventArgs
              (&local_78,pFVar6,(FInputDeviceId)(int)param_2->_padding_,&local_148,
               -(uint)(*(char *)((longlong)&param_2->_padding_ + 2) != '\0') & IE_Repeat,
               __real_3f800000,false,param_2->_padding_);
    cVar4 = (*pcVar2)(plVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.Key.KeyDetails.SharedReferenceCount.ReferenceController);
    if (cVar4 != '\0') goto LAB_1486d4e9e;
  }
  FReply::FReply(&local_130,false);
  FReply::operator=((FReply *)&this->_padding_,&local_130);
  FReply::~FReply(&local_130);
LAB_1486d4e9e:
  FReply::FReply(__return_storage_ptr__,(FReply *)&this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.KeyDetails.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// OnKeyUp @ 1486d4ee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FReply * __thiscall
FSceneViewport::OnKeyUp
          (FSceneViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2
          )

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int *piVar5;
  FViewport *pFVar6;
  bool local_res8 [8];
  FKey local_148;
  FReply local_130;
  FInputKeyEventArgs local_78;
  
  FReply::FReply(&local_130,true);
  FReply::operator=((FReply *)&this->_padding_,&local_130);
  FReply::~FReply(&local_130);
  local_148.KeyName = (param_2->Key).KeyName;
  local_148.KeyDetails.Object = (param_2->Key).KeyDetails.Object;
  local_148.KeyDetails.SharedReferenceCount.ReferenceController =
       (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  if (local_148.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  bVar3 = FKey::IsValid(&local_148);
  if (bVar3) {
    local_res8[0] = false;
    TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_>::
    Emplace<FKey_const_&,bool>
              ((TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_> *
               )&this->_padding_,&local_148,local_res8);
    if (*(longlong *)&this[-1].OnSceneViewportResizeDel == 0) goto LAB_1486d5073;
    pFVar6 = (FViewport *)&this[-1].ViewportWidget;
    piVar5 = (int *)(*(code *)((TWeakPtr<SViewport,1> *)pFVar6)->Object->_padding_)
                              (pFVar6,local_res8);
    if ((*piVar5 == UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X) &&
       (piVar5[1] == UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y)) goto LAB_1486d5073;
    plVar1 = *(longlong **)&this[-1].OnSceneViewportResizeDel;
    pcVar2 = *(code **)(*plVar1 + 0x40);
    if (this == (FSceneViewport *)&DAT_000000d8) {
      pFVar6 = (FViewport *)0x0;
    }
    FInputKeyEventArgs::FInputKeyEventArgs
              (&local_78,pFVar6,(FInputDeviceId)(int)param_2->_padding_,&local_148,IE_Released,
               __real_3f800000,false,param_2->_padding_);
    cVar4 = (*pcVar2)(plVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.Key.KeyDetails.SharedReferenceCount.ReferenceController);
    if (cVar4 != '\0') goto LAB_1486d5073;
  }
  FReply::FReply(&local_130,false);
  FReply::operator=((FReply *)&this->_padding_,&local_130);
  FReply::~FReply(&local_130);
LAB_1486d5073:
  FReply::FReply(__return_storage_ptr__,(FReply *)&this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.KeyDetails.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// OnMapCursor @ 1486d50b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TOptional<TSharedRef<SWidget,1>_> * __thiscall
FSceneViewport::OnMapCursor
          (FSceneViewport *this,TOptional<TSharedRef<SWidget,1>_> *__return_storage_ptr__,
          FCursorReply *param_1)

{
  int *piVar1;
  TWeakPtr<SViewport,1> *pTVar2;
  
  if (*(longlong *)&this[-1].OnSceneViewportResizeDel != 0) {
    pTVar2 = &this[-1].ViewportWidget;
    piVar1 = (int *)(*(code *)pTVar2->Object->_padding_)(pTVar2);
    if ((*piVar1 != UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X) ||
       (piVar1[1] != UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y)) {
      if (this == (FSceneViewport *)&DAT_000000d8) {
        pTVar2 = (TWeakPtr<SViewport,1> *)0x0;
      }
      (**(code **)(**(longlong **)&this[-1].OnSceneViewportResizeDel + 0xd0))
                (*(longlong **)&this[-1].OnSceneViewportResizeDel,__return_storage_ptr__,pTVar2,
                 param_1);
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->field0_0x0).TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->field0_0x0).TypedValue.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// OnMotionDetected @ 1486d5160

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FReply * __thiscall
FSceneViewport::OnMotionDetected
          (FSceneViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FMotionEvent *param_2)

{
  longlong *plVar1;
  char cVar2;
  TWeakPtr<SViewport,1> *pTVar3;
  FReply local_c8;
  
  FReply::FReply(&local_c8,true);
  FReply::operator=((FReply *)&this->_padding_,&local_c8);
  FReply::~FReply(&local_c8);
  plVar1 = *(longlong **)&this[-1].OnSceneViewportResizeDel;
  if (plVar1 != (longlong *)0x0) {
    pTVar3 = &this[-1].ViewportWidget;
    if (this == (FSceneViewport *)&DAT_000000d8) {
      pTVar3 = (TWeakPtr<SViewport,1> *)0x0;
    }
    cVar2 = (**(code **)(*plVar1 + 0x80))
                      (plVar1,pTVar3,(int)param_2->_padding_,&param_2->Tilt,&param_2->RotationRate,
                       &param_2->Gravity,&param_2->Acceleration,param_2->_padding_);
    if (cVar2 == '\0') {
      FReply::FReply(&local_c8,false);
      FReply::operator=((FReply *)&this->_padding_,&local_c8);
      FReply::~FReply(&local_c8);
    }
  }
  FReply::FReply(__return_storage_ptr__,(FReply *)&this->_padding_);
  return __return_storage_ptr__;
}

// OnMouseButtonDoubleClick @ 1486d5270

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FReply * __thiscall
FSceneViewport::OnMouseButtonDoubleClick
          (FSceneViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  longlong *this_00;
  FSharedReferencer<1> *this_01;
  bool bVar1;
  longlong *plVar2;
  ulong64 uVar3;
  code *pcVar4;
  char cVar5;
  int *piVar6;
  FViewport *pFVar7;
  bool local_res8 [8];
  FKey local_148;
  FReply local_130;
  FInputKeyEventArgs local_78;
  
  FReply::FReply(&local_130,true);
  this_00 = &this->_padding_;
  FReply::operator=((FReply *)this_00,&local_130);
  FReply::~FReply(&local_130);
  local_148.KeyName = (param_2->EffectingButton).KeyName;
  local_148.KeyDetails.Object = (param_2->EffectingButton).KeyDetails.Object;
  local_148.KeyDetails.SharedReferenceCount.ReferenceController =
       (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  local_res8[0] = true;
  if (local_148.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_>::
  Emplace<FKey,bool>((TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_>
                      *)&this->_padding_,&local_148,local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.KeyDetails.SharedReferenceCount.ReferenceController);
  FGeometry::operator=((FGeometry *)&(this->CurrentReplyState).MouseCaptor,param_1);
  this_01 = &this[-1].DebugCanvasDrawer.SharedReferenceCount;
  UpdateCachedCursorPos((FSceneViewport *)this_01,param_1,param_2);
  if (*(longlong *)&this[-1].OnSceneViewportResizeDel != 0) {
    pFVar7 = (FViewport *)&this[-1].ViewportWidget;
    piVar6 = (int *)(*(code *)((TWeakPtr<SViewport,1> *)pFVar7)->Object->_padding_)
                              (pFVar7,local_res8);
    if ((*piVar6 != UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X) ||
       (piVar6[1] != UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y)) {
      plVar2 = *(longlong **)&this[-1].OnSceneViewportResizeDel;
      uVar3 = param_2->_padding_;
      bVar1 = param_2->bIsTouchEvent;
      pcVar4 = *(code **)(*plVar2 + 0x40);
      local_148.KeyName = (param_2->EffectingButton).KeyName;
      local_148.KeyDetails.Object = (param_2->EffectingButton).KeyDetails.Object;
      local_148.KeyDetails.SharedReferenceCount.ReferenceController =
           (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
      if (local_148.KeyDetails.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_148.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_148.KeyDetails.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      if (this_01 == (FSharedReferencer<1> *)0x0) {
        pFVar7 = (FViewport *)0x0;
      }
      FInputKeyEventArgs::FInputKeyEventArgs
                (&local_78,pFVar7,(FInputDeviceId)(int)param_2->_padding_,&local_148,IE_DoubleClick,
                 __real_3f800000,bVar1,uVar3);
      cVar5 = (*pcVar4)(plVar2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.Key.KeyDetails.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_148.KeyDetails.SharedReferenceCount.ReferenceController);
      if (cVar5 == '\0') {
        FReply::FReply(&local_130,false);
        FReply::operator=((FReply *)this_00,&local_130);
        FReply::~FReply(&local_130);
      }
    }
  }
  FReply::FReply(__return_storage_ptr__,(FReply *)this_00);
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 1486d5470

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FReply * __thiscall
FSceneViewport::OnMouseButtonDown
          (FSceneViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  uint *puVar1;
  FName FVar2;
  UGameViewportClient *pUVar3;
  longlong *plVar4;
  code *pcVar5;
  ulong64 uVar6;
  TIntPoint<int> TVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  char cVar11;
  int *piVar12;
  FSlateApplication *pFVar13;
  FReply *pFVar14;
  FViewport *pFVar15;
  bool bVar16;
  int local_res8;
  int iStackX_c;
  FReply *local_res10;
  FKey local_158;
  FReply local_140;
  FInputKeyEventArgs local_88;
  
  local_res8 = 0;
  bVar16 = false;
  local_res10 = __return_storage_ptr__;
  FReply::FReply(&local_140,true);
  local_140.bPreventThrottling = 1;
  FReply::operator=((FReply *)&this->_padding_,&local_140);
  FReply::~FReply(&local_140);
  local_158.KeyName = (param_2->EffectingButton).KeyName;
  local_158.KeyDetails.Object = (param_2->EffectingButton).KeyDetails.Object;
  local_158.KeyDetails.SharedReferenceCount.ReferenceController =
       (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  local_res8 = CONCAT31(local_res8._1_3_,1);
  if (local_158.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_158.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_158.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_>::
  Emplace<FKey,bool>((TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_>
                      *)&this->_padding_,&local_158,(bool *)&local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.KeyDetails.SharedReferenceCount.ReferenceController);
  UpdateModifierKeys((FSceneViewport *)&this[-1].DebugCanvasDrawer.SharedReferenceCount,param_2);
  FGeometry::operator=((FGeometry *)&(this->CurrentReplyState).MouseCaptor,param_1);
  UpdateCachedCursorPos
            ((FSceneViewport *)&this[-1].DebugCanvasDrawer.SharedReferenceCount,param_1,param_2);
  if (*(longlong *)&this[-1].OnSceneViewportResizeDel == 0) goto LAB_1486d585d;
  pFVar15 = (FViewport *)&this[-1].ViewportWidget;
  piVar12 = (int *)(*(code *)((TWeakPtr<SViewport,1> *)pFVar15)->Object->_padding_)
                             (pFVar15,&local_res8);
  if ((*piVar12 == UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X) &&
     (piVar12[1] == UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y)) goto LAB_1486d585d;
  cVar10 = (*(code *)((TWeakPtr<SViewport,1> *)pFVar15)->Object->_padding_)(pFVar15);
  if (cVar10 == '\0') {
    pFVar13 = FSlateApplication::Get();
    FSlateApplication::GetModifierKeys(pFVar13);
    ApplyModifierKeys((FSceneViewport *)&this[-1].DebugCanvasDrawer.SharedReferenceCount,
                      (FModifierKeysState *)&local_res8,param_2->_padding_);
  }
  cVar10 = (**(code **)(**(longlong **)&this[-1].OnSceneViewportResizeDel + 0x198))();
  pFVar14 = local_res10;
  if (cVar10 == '\x03') {
LAB_1486d5625:
    bVar8 = true;
  }
  else {
    cVar10 = (**(code **)(**(longlong **)&this[-1].OnSceneViewportResizeDel + 0x198))();
    if (cVar10 == '\x04') {
      pFVar14 = (FReply *)
                (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
      FVar2 = (param_2->EffectingButton).KeyName;
      if (pFVar14 != (FReply *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar14->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pFVar14->_padding_ + 1);
        UNLOCK();
      }
      bVar16 = true;
      if (FVar2 == EKeys::RightMouseButton.KeyName) goto LAB_1486d5625;
      bVar8 = false;
    }
    else {
      bVar8 = false;
      pFVar14 = local_res10;
    }
  }
  if (bVar16) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar14);
  }
  pUVar3 = (GEngine->GameViewport).field0_0x0.DebugPtr;
  if (pUVar3 == (UGameViewportClient *)0x0) {
    bVar16 = *(undefined1 **)&this[-1].OnSceneViewportResizeDel == (undefined1 *)0x0;
  }
  else {
    bVar16 = &pUVar3->_padding_ == (longlong *)*(undefined1 **)&this[-1].OnSceneViewportResizeDel;
  }
  if ((((bVar16) || ((this[-1].DisplayOutputFormat >> 3 & 1) != 0)) &&
      (cVar10 = (*(code *)((TWeakPtr<SViewport,1> *)pFVar15)->Object->_padding_)(pFVar15),
      cVar10 == '\0')) &&
     (cVar10 = (**(code **)(**(longlong **)&this[-1].OnSceneViewportResizeDel + 0x198))(),
     cVar10 != '\x02')) {
    bVar16 = false;
  }
  else {
    bVar16 = true;
  }
  pFVar13 = FSlateApplication::Get();
  cVar10 = (**(code **)(*(longlong *)pFVar13 + 0xc0))(pFVar13);
  if ((bVar8) || (bVar16)) {
    local_158.KeyName = (param_2->EffectingButton).KeyName;
    plVar4 = *(longlong **)&this[-1].OnSceneViewportResizeDel;
    bVar16 = param_2->bIsTouchEvent;
    local_158.KeyDetails.Object = (param_2->EffectingButton).KeyDetails.Object;
    local_158.KeyDetails.SharedReferenceCount.ReferenceController =
         (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    pcVar5 = *(code **)(*plVar4 + 0x40);
    uVar6 = param_2->_padding_;
    if (local_158.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_158.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_158.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this == (FSceneViewport *)&DAT_000000d8) {
      pFVar15 = (FViewport *)0x0;
    }
    FInputKeyEventArgs::FInputKeyEventArgs
              (&local_88,pFVar15,(FInputDeviceId)(int)param_2->_padding_,&local_158,IE_Pressed,
               __real_3f800000,bVar16,uVar6);
    cVar11 = (*pcVar5)(plVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.Key.KeyDetails.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.KeyDetails.SharedReferenceCount.ReferenceController);
    if (cVar11 == '\0') {
      FReply::FReply(&local_140,false);
      FReply::operator=((FReply *)&this->_padding_,&local_140);
      FReply::~FReply(&local_140);
    }
  }
  if (cVar10 == '\0') {
    pFVar13 = FSlateApplication::Get();
    cVar10 = (**(code **)(*(longlong *)pFVar13 + 0xc0))(pFVar13);
    if (cVar10 == '\0') goto LAB_1486d57af;
    bVar16 = true;
  }
  else {
LAB_1486d57af:
    bVar16 = false;
  }
  cVar10 = (**(code **)(**(longlong **)&this[-1].OnSceneViewportResizeDel + 0x198))();
  if ((cVar10 == '\x01') ||
     (cVar10 = (**(code **)(**(longlong **)&this[-1].OnSceneViewportResizeDel + 0x198))(),
     cVar10 == '\x02')) {
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  pFVar13 = FSlateApplication::Get();
  cVar10 = (**(code **)(*(longlong *)pFVar13 + 8))(pFVar13);
  if ((((cVar10 != '\0') &&
       (cVar10 = (**(code **)(**(longlong **)&this[-1].OnSceneViewportResizeDel + 400))(),
       cVar10 == '\0')) && (!bVar16)) && ((bVar9 || (bVar8)))) {
    local_res8 = (int)*(float *)&param_2->ScreenSpacePosition;
    iStackX_c = (int)*(float *)&(param_2->ScreenSpacePosition).field_0x4;
    TVar7.field0_0x0._s_0.Y = iStackX_c;
    TVar7.field0_0x0._s_0.X = local_res8;
    pFVar14 = AcquireFocusAndCapture
                        ((FSceneViewport *)&this[-1].DebugCanvasDrawer.SharedReferenceCount,
                         &local_140,TVar7,Mouse);
    FReply::operator=((FReply *)&this->_padding_,pFVar14);
    FReply::~FReply(&local_140);
  }
LAB_1486d585d:
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 | 0x40;
  FReply::FReply(local_res10,(FReply *)&this->_padding_);
  return local_res10;
}

// OnMouseButtonUp @ 1486d58a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FReply * __thiscall
FSceneViewport::OnMouseButtonUp
          (FSceneViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FSharedReferencer<1> *this_00;
  longlong *plVar1;
  ulong64 uVar2;
  code *pcVar3;
  FName FVar4;
  UGameViewportClient *pUVar5;
  char cVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  FViewport *pFVar12;
  FReply *pFVar13;
  FViewport *pFVar14;
  bool bVar15;
  bool bVar16;
  code *local_res8;
  FReply *local_res10;
  FKey local_158;
  FReply local_140;
  FInputKeyEventArgs local_88;
  
  pFVar14 = (FViewport *)0x0;
  local_res8 = (code *)((ulonglong)local_res8 & 0xffffffff00000000);
  local_res10 = __return_storage_ptr__;
  FReply::FReply(&local_140,true);
  FReply::operator=((FReply *)&this->_padding_,&local_140);
  FReply::~FReply(&local_140);
  local_158.KeyName = (param_2->EffectingButton).KeyName;
  local_158.KeyDetails.Object = (param_2->EffectingButton).KeyDetails.Object;
  local_158.KeyDetails.SharedReferenceCount.ReferenceController =
       (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  local_res8 = (code *)((ulonglong)local_res8 & 0xffffffffffffff00);
  if (local_158.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_158.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_158.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_>::
  Emplace<FKey,bool>((TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_>
                      *)&this->_padding_,&local_158,(bool *)&local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.KeyDetails.SharedReferenceCount.ReferenceController);
  this_00 = &this[-1].DebugCanvasDrawer.SharedReferenceCount;
  UpdateModifierKeys((FSceneViewport *)this_00,param_2);
  FGeometry::operator=((FGeometry *)&(this->CurrentReplyState).MouseCaptor,param_1);
  UpdateCachedCursorPos((FSceneViewport *)this_00,param_1,param_2);
  bVar7 = true;
  if ((*(longlong *)&this[-1].OnSceneViewportResizeDel == 0) ||
     ((piVar11 = (int *)(*(code *)(this[-1].ViewportWidget.Object)->_padding_)
                                  (&this[-1].ViewportWidget,&local_res8),
      *piVar11 == UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X &&
      (__return_storage_ptr__ = local_res10,
      piVar11[1] == UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y)))) {
    bVar15 = true;
    goto LAB_1486d5bde;
  }
  plVar1 = *(longlong **)&this[-1].OnSceneViewportResizeDel;
  uVar2 = param_2->_padding_;
  bVar7 = param_2->bIsTouchEvent;
  local_res8 = *(code **)(*plVar1 + 0x40);
  local_158.KeyName = (param_2->EffectingButton).KeyName;
  local_158.KeyDetails.Object = (param_2->EffectingButton).KeyDetails.Object;
  local_158.KeyDetails.SharedReferenceCount.ReferenceController =
       (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (local_158.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_158.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_158.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  pFVar12 = (FViewport *)&this[-1].ViewportWidget;
  if (this_00 == (FSharedReferencer<1> *)0x0) {
    pFVar12 = pFVar14;
  }
  FInputKeyEventArgs::FInputKeyEventArgs
            (&local_88,pFVar12,(FInputDeviceId)(int)param_2->_padding_,&local_158,IE_Released,
             __real_3f800000,bVar7,uVar2);
  cVar6 = (*local_res8)(plVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.KeyDetails.SharedReferenceCount.ReferenceController);
  if (cVar6 == '\0') {
    FReply::FReply(&local_140,false);
    FReply::operator=((FReply *)&this->_padding_,&local_140);
    FReply::~FReply(&local_140);
  }
  plVar1 = *(longlong **)&this[-1].OnSceneViewportResizeDel;
  pcVar3 = *(code **)(*plVar1 + 200);
  uVar8 = (*(code *)(this[-1].ViewportWidget.Object)->_padding_)();
  uVar9 = (*(code *)(this[-1].ViewportWidget.Object)->_padding_)(&this[-1].ViewportWidget);
  iVar10 = (*pcVar3)(plVar1,pFVar12,uVar9,uVar8);
  bVar15 = iVar10 != 0;
  if (iVar10 == 0) {
    cVar6 = (**(code **)(**(longlong **)&this[-1].OnSceneViewportResizeDel + 0x198))();
    if (cVar6 == '\x03') {
      bVar7 = true;
      if (5 < (byte)LogViewport._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogViewport);
        __return_storage_ptr__ = local_res10;
        goto LAB_1486d5bde;
      }
    }
    else {
      cVar6 = (**(code **)(**(longlong **)&this[-1].OnSceneViewportResizeDel + 0x198))();
      pFVar13 = local_res10;
      if (cVar6 == '\x04') {
        pFVar13 = (FReply *)
                  (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
        FVar4 = (param_2->EffectingButton).KeyName;
        if (pFVar13 != (FReply *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar13->_padding_ =
               (atomic<int>)((int)*(atomic<int> *)&pFVar13->_padding_ + 1);
          UNLOCK();
        }
        pFVar14 = (FViewport *)&DAT_00000001;
        if (FVar4 != EKeys::RightMouseButton.KeyName) goto LAB_1486d5b91;
        bVar7 = true;
      }
      else {
LAB_1486d5b91:
        bVar7 = false;
      }
      if (pFVar14 != (FViewport *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar13);
      }
      if (!bVar7) {
        bVar7 = false;
        __return_storage_ptr__ = local_res10;
        goto LAB_1486d5bde;
      }
      if (5 < (byte)LogViewport._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogViewport);
      }
    }
  }
  else {
    bVar7 = true;
    if (5 < (byte)LogViewport._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogViewport);
      __return_storage_ptr__ = local_res10;
      goto LAB_1486d5bde;
    }
  }
  bVar7 = true;
  __return_storage_ptr__ = local_res10;
LAB_1486d5bde:
  pUVar5 = (GEngine->GameViewport).field0_0x0.DebugPtr;
  if (pUVar5 == (UGameViewportClient *)0x0) {
    bVar16 = *(undefined1 **)&this[-1].OnSceneViewportResizeDel == (undefined1 *)0x0;
  }
  else {
    bVar16 = &pUVar5->_padding_ == (longlong *)*(undefined1 **)&this[-1].OnSceneViewportResizeDel;
  }
  if (((!bVar16) && ((this[-1].DisplayOutputFormat >> 3 & 1) == 0)) || (bVar7)) {
    local_158.KeyName = EKeys::RightMouseButton.KeyName;
    local_158.KeyDetails.Object = EKeys::RightMouseButton.KeyDetails.Object;
    local_158.KeyDetails.SharedReferenceCount.ReferenceController =
         EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController;
    if (EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
      SharedReferenceCount =
           (atomic<int>)
           ((int)(EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = FPointerEvent::IsMouseButtonDown(param_2,&local_158);
    if (!bVar7) {
      local_158.KeyName = EKeys::LeftMouseButton.KeyName;
      local_158.KeyDetails.Object = EKeys::LeftMouseButton.KeyDetails.Object;
      local_158.KeyDetails.SharedReferenceCount.ReferenceController =
           EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController;
      if (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
        SharedReferenceCount =
             (atomic<int>)
             ((int)(EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar7 = FPointerEvent::IsMouseButtonDown(param_2,&local_158);
      if (!bVar7) {
        if ((this->KeyStateMap).field_0x41 != '\0') {
          (this->KeyStateMap).field_0x41 = 0;
          FReply::SetMousePos((FReply *)&this->_padding_,
                              (TIntPoint<int> *)&(this->KeyStateMap).field_0x44);
          local_res10 = (FReply *)0xffffffffffffffff;
          *(undefined8 *)&(this->KeyStateMap).field_0x44 = 0xffffffffffffffff;
        }
        FReply::ReleaseMouseCapture((FReply *)&this->_padding_);
        if ((bVar15) &&
           (cVar6 = (**(code **)(**(longlong **)&this[-1].OnSceneViewportResizeDel + 0x1b0))(),
           cVar6 == '\0')) {
          FReply::ReleaseMouseLock((FReply *)&this->_padding_);
        }
      }
    }
  }
  FReply::FReply(__return_storage_ptr__,(FReply *)&this->_padding_);
  return __return_storage_ptr__;
}

// OnMouseEnter @ 1486d5d40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FSceneViewport::OnMouseEnter(FSceneViewport *this,FGeometry *param_1,FPointerEvent *param_2)

{
  FSharedReferencer<1> *this_00;
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar2;
  undefined4 uVar3;
  TWeakPtr<SViewport,1> *pTVar4;
  
  this_00 = &this[-1].DebugCanvasDrawer.SharedReferenceCount;
  UpdateCachedCursorPos((FSceneViewport *)this_00,param_1,param_2);
  plVar1 = *(longlong **)&this[-1].OnSceneViewportResizeDel;
  pTVar4 = &this[-1].ViewportWidget;
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0xa0);
  uVar2 = (*(code *)pTVar4->Object->_padding_)(pTVar4);
  uVar3 = (*(code *)pTVar4->Object->_padding_)(pTVar4);
  if (this_00 == (FSharedReferencer<1> *)0x0) {
    pTVar4 = (TWeakPtr<SViewport,1> *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001486d5dd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,pTVar4,uVar3,uVar2);
  return;
}

// OnMouseLeave @ 1486d5de0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FSceneViewport::OnMouseLeave(FSceneViewport *this,FPointerEvent *param_1)

{
  longlong *plVar1;
  UGameViewportClient *pUVar2;
  TWeakPtr<SViewport,1> *pTVar3;
  bool bVar4;
  
  plVar1 = *(longlong **)&this[-1].OnSceneViewportResizeDel;
  if (plVar1 != (longlong *)0x0) {
    pTVar3 = &this[-1].ViewportWidget;
    if (this == (FSceneViewport *)&DAT_000000d8) {
      pTVar3 = (TWeakPtr<SViewport,1> *)0x0;
    }
    (**(code **)(*plVar1 + 0xa8))(plVar1,pTVar3);
    pUVar2 = (GEngine->GameViewport).field0_0x0.DebugPtr;
    if (pUVar2 == (UGameViewportClient *)0x0) {
      bVar4 = *(undefined1 **)&this[-1].OnSceneViewportResizeDel == (undefined1 *)0x0;
    }
    else {
      bVar4 = &pUVar2->_padding_ == (longlong *)*(undefined1 **)&this[-1].OnSceneViewportResizeDel;
    }
    if ((bVar4) || ((this[-1].DisplayOutputFormat >> 3 & 1) != 0)) {
      (this->CurrentReplyState).EventHandler.WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0xffffffffffffffff;
    }
  }
  return;
}

// OnMouseMove @ 1486d5e70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FReply * __thiscall
FSceneViewport::OnMouseMove
          (FSceneViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  atomic<int> aVar8;
  atomic<int> aVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  FReply *pFVar12;
  int *piVar13;
  FSlateApplication *pFVar14;
  SWidget *pSVar15;
  SWidget *pSVar16;
  SWidget *this_00;
  SWidget *pSVar17;
  TWeakPtr<SViewport,1> *pTVar18;
  bool bVar19;
  undefined4 local_res8;
  undefined4 uStackX_c;
  double local_108;
  double local_100;
  FReply local_f8;
  
  pSVar17 = (SWidget *)0x0;
  local_res8 = 0;
  FReply::FReply(&local_f8,true);
  FReply::operator=((FReply *)&this->_padding_,&local_f8);
  FReply::~FReply(&local_f8);
  FGeometry::operator=((FGeometry *)&(this->CurrentReplyState).MouseCaptor,param_1);
  UpdateCachedCursorPos
            ((FSceneViewport *)&this[-1].DebugCanvasDrawer.SharedReferenceCount,param_1,param_2);
  if ((((this->CurrentReplyState).DragDropContent.Object == (FDragDropOperation *)0x0) ||
      (pTVar4 = (this->CurrentReplyState).DragDropContent.SharedReferenceCount.ReferenceController,
      pTVar4 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar4->SharedReferenceCount < 1)) {
    pSVar16 = (SWidget *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    pSVar16 = (SWidget *)
              (this->CurrentReplyState).DragDropContent.SharedReferenceCount.ReferenceController;
    pSVar15 = pSVar16;
    this_00 = pSVar17;
    if (pSVar16 == (SWidget *)0x0) {
LAB_1486d5f31:
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      pSVar16 = pSVar15;
      if (bVar19) {
        pcVar7 = (code *)swi(3);
        pFVar12 = (FReply *)(*pcVar7)();
        return pFVar12;
      }
    }
    else {
      aVar8 = *(atomic<int> *)&pSVar16->_padding_;
      do {
        pSVar15 = pSVar17;
        this_00 = (SWidget *)0x0;
        if (aVar8 == (atomic<int>)0x0) goto LAB_1486d5f31;
        LOCK();
        aVar9 = *(atomic<int> *)&pSVar16->_padding_;
        bVar19 = aVar8 == aVar9;
        if (bVar19) {
          *(atomic<int> *)&pSVar16->_padding_ = (atomic<int>)((int)aVar8 + 1);
          aVar9 = aVar8;
        }
        UNLOCK();
        aVar8 = aVar9;
      } while (!bVar19);
      this_00 = (SWidget *)(this->CurrentReplyState).DragDropContent.Object;
      pSVar15 = pSVar16;
      if (this_00 == (SWidget *)0x0) goto LAB_1486d5f31;
    }
    pSVar17 = (SWidget *)&DAT_00000001;
    bVar19 = SWidget::HasMouseCapture(this_00);
    if (bVar19) {
      bVar19 = true;
      goto LAB_1486d5f87;
    }
  }
  bVar19 = false;
LAB_1486d5f87:
  if (pSVar17 != (SWidget *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar16);
  }
  if (*(longlong *)&this[-1].OnSceneViewportResizeDel != 0) {
    pTVar18 = &this[-1].ViewportWidget;
    piVar13 = (int *)(*(code *)pTVar18->Object->_padding_)(pTVar18,&local_res8);
    if ((*piVar13 != UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X) ||
       (piVar13[1] != UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y)) {
      plVar5 = *(longlong **)&this[-1].OnSceneViewportResizeDel;
      lVar6 = *plVar5;
      uVar10 = (*(code *)pTVar18->Object->_padding_)(pTVar18);
      if (bVar19) {
        uVar11 = (*(code *)pTVar18->Object->_padding_)(pTVar18);
        if (this == (FSceneViewport *)&DAT_000000d8) {
          pTVar18 = (TWeakPtr<SViewport,1> *)0x0;
        }
        (**(code **)(lVar6 + 0xb8))(plVar5,pTVar18,uVar11,uVar10);
        fVar2 = *(float *)&param_2->CursorDelta;
        fVar3 = *(float *)&(param_2->CursorDelta).field_0x4;
        puVar1 = &(this->KeyStateMap).field_0x8;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        puVar1 = &(this->KeyStateMap).field_0xc;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        *(int *)&(this->KeyStateMap).field_0x14 =
             (int)((float)*(int *)&(this->KeyStateMap).field_0x14 + fVar2);
        *(int *)&(this->KeyStateMap).field_0x18 =
             (int)((float)*(int *)&(this->KeyStateMap).field_0x18 - fVar3);
      }
      else {
        uVar11 = (*(code *)pTVar18->Object->_padding_)(pTVar18);
        if (this == (FSceneViewport *)&DAT_000000d8) {
          pTVar18 = (TWeakPtr<SViewport,1> *)0x0;
        }
        (**(code **)(lVar6 + 0xb0))(plVar5,pTVar18,uVar11,uVar10);
      }
      if ((this->KeyStateMap).field_0x41 != '\0') {
        local_108 = (double)*(int *)&(this->KeyStateMap).field_0x44;
        local_100 = (double)*(int *)&(this->KeyStateMap).field_0x48;
        pFVar14 = FSlateApplication::Get();
        (**(code **)(*(longlong *)&pFVar14->field_0x198 + 0x1d0))(&pFVar14->field_0x198,&local_108);
      }
    }
  }
  FReply::FReply(__return_storage_ptr__,(FReply *)&this->_padding_);
  return __return_storage_ptr__;
}

// OnMouseWheel @ 1486d6140

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FReply * __thiscall
FSceneViewport::OnMouseWheel
          (FSceneViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FSharedReferencer<1> *this_00;
  longlong *plVar1;
  code *pcVar2;
  float fVar3;
  atomic<double> aVar4;
  int *piVar5;
  FInputKeyEventArgs *pFVar6;
  FKey *pFVar7;
  FViewport *pFVar8;
  undefined1 local_res8 [8];
  FKey local_158;
  FInputKeyEventArgs local_140;
  FReply local_f8;
  
  FReply::FReply(&local_f8,true);
  FReply::operator=((FReply *)&this->_padding_,&local_f8);
  FReply::~FReply(&local_f8);
  FGeometry::operator=((FGeometry *)&(this->CurrentReplyState).MouseCaptor,param_1);
  this_00 = &this[-1].DebugCanvasDrawer.SharedReferenceCount;
  UpdateCachedCursorPos((FSceneViewport *)this_00,param_1,param_2);
  if (*(longlong *)&this[-1].OnSceneViewportResizeDel != 0) {
    pFVar8 = (FViewport *)&this[-1].ViewportWidget;
    piVar5 = (int *)(*(code *)((TWeakPtr<SViewport,1> *)pFVar8)->Object->_padding_)
                              (pFVar8,local_res8);
    if ((*piVar5 != UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X) ||
       (piVar5[1] != UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y)) {
      pFVar7 = &EKeys::MouseScrollUp;
      if (*(float *)&(param_2->WheelOrGestureDelta).field_0x4 < 0.0) {
        pFVar7 = &EKeys::MouseScrollDown;
      }
      local_158.KeyName = pFVar7->KeyName;
      local_158.KeyDetails.Object = (pFVar7->KeyDetails).Object;
      local_158.KeyDetails.SharedReferenceCount.ReferenceController =
           (pFVar7->KeyDetails).SharedReferenceCount.ReferenceController;
      if (local_158.KeyDetails.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_158.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_158.KeyDetails.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      fVar3 = __real_3f800000;
      plVar1 = *(longlong **)&this[-1].OnSceneViewportResizeDel;
      if (this_00 == (FSharedReferencer<1> *)0x0) {
        pFVar8 = (FViewport *)0x0;
      }
      pcVar2 = *(code **)(*plVar1 + 0x40);
      pFVar6 = FInputKeyEventArgs::FInputKeyEventArgs
                         (&local_140,pFVar8,(FInputDeviceId)(int)param_2->_padding_,&local_158,
                          IE_Pressed,__real_3f800000,param_2->bIsTouchEvent,param_2->_padding_);
      (*pcVar2)(plVar1,pFVar6);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_140.Key.KeyDetails.SharedReferenceCount.ReferenceController);
      plVar1 = *(longlong **)&this[-1].OnSceneViewportResizeDel;
      pcVar2 = *(code **)(*plVar1 + 0x40);
      pFVar6 = FInputKeyEventArgs::FInputKeyEventArgs
                         (&local_140,pFVar8,(FInputDeviceId)(int)param_2->_padding_,&local_158,
                          IE_Released,fVar3,param_2->bIsTouchEvent,param_2->_padding_);
      (*pcVar2)(plVar1,pFVar6);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_140.Key.KeyDetails.SharedReferenceCount.ReferenceController);
      aVar4 = FApp::DeltaTime;
      plVar1 = *(longlong **)&this[-1].OnSceneViewportResizeDel;
      pcVar2 = *(code **)(*plVar1 + 0x48);
      FInputKeyEventArgs::FInputKeyEventArgs
                (&local_140,pFVar8,(FInputDeviceId)(int)param_2->_padding_,&EKeys::MouseWheelAxis,
                 IE_Axis,*(float *)&(param_2->WheelOrGestureDelta).field_0x4,false,
                 param_2->_padding_);
      local_140.NumSamples = 1;
      local_140.DeltaTime = (float)(double)aVar4;
      (*pcVar2)(plVar1,&local_140);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_140.Key.KeyDetails.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.KeyDetails.SharedReferenceCount.ReferenceController);
    }
  }
  FReply::FReply(__return_storage_ptr__,(FReply *)&this->_padding_);
  return __return_storage_ptr__;
}

// OnPlayWorldViewportSwapped @ 1486d6920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FSceneViewport::OnPlayWorldViewportSwapped(FSceneViewport *this,FSceneViewport *param_1)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong *plVar5;
  FString *pFVar6;
  bool bVar7;
  int *piVar8;
  int *piVar9;
  longlong lVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar13;
  uint in_stack_ffffffffffffffa0;
  ForAnyElementType local_48;
  int local_40;
  int local_3c [3];
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  piVar8 = (int *)(**(code **)(this->_padding_ + 0x28))(&this->_padding_,local_res8);
  piVar9 = (int *)(**(code **)(param_1->_padding_ + 0x28))(&param_1->_padding_,local_res10);
  if ((*piVar8 != *piVar9) || (piVar8[1] != piVar9[1])) {
    pcVar3 = *(code **)(this->_padding_ + 0x1e8);
    lVar10 = (**(code **)(param_1->_padding_ + 0x28))(&param_1->_padding_,local_res18);
    uVar1 = *(undefined4 *)(lVar10 + 4);
    puVar11 = (undefined4 *)
              (**(code **)(param_1->_padding_ + 0x28))(&param_1->_padding_,local_res20);
    (*pcVar3)(&this->_padding_,0,*puVar11,uVar1,CONCAT44(uVar13,2),
              in_stack_ffffffffffffffa0 & 0xffffff00);
    FViewport::Invalidate((FViewport *)&this->_padding_);
  }
  plVar4 = (longlong *)this->_padding_;
  plVar5 = (longlong *)param_1->_padding_;
  if ((plVar4 == (longlong *)0x0) || (plVar5 == (longlong *)0x0)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("ClientA && ClientB",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SceneViewport.cpp"
                       ,0x7d9,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  puVar12 = (undefined8 *)(**(code **)(*plVar4 + 0x170))(plVar4);
  lVar10 = (**(code **)(*plVar5 + 0x170))(plVar5);
  if ((puVar12 != (undefined8 *)0x0) && (lVar10 != 0)) {
    iVar2 = *(int *)(puVar12 + 1);
    pFVar6 = (FString *)*puVar12;
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = iVar2;
    if (iVar2 == 0) {
      local_3c[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar2,0,&local_48,iVar2,local_3c);
      ConstructItems<FString,FString,int>(local_48.Data,pFVar6,iVar2);
    }
    (**(code **)(*plVar4 + 0x178))(plVar4,lVar10);
    (**(code **)(*plVar5 + 0x178))(plVar5,&local_48);
    DestructItems<FString,int>((FString *)local_48.Data,local_40);
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  return;
}

// OnPostResizeWindowBackbuffer @ 1486d6c40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FSceneViewport::OnPostResizeWindowBackbuffer(FSceneViewport *this,void *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong *plVar2;
  FRHIResource *this_00;
  FRHIResource *this_01;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  char cVar6;
  atomic<int> aVar7;
  FSlateApplication *pFVar8;
  undefined8 *puVar9;
  SViewport *pSVar10;
  SViewport *pSVar11;
  SViewport *pSVar12;
  longlong local_38;
  TReferenceControllerBase<1> *local_30;
  SViewport *local_28;
  SViewport *local_20;
  
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SceneViewport.cpp"
                         ,0x7f7,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  cVar6 = (**(code **)(this->_padding_ + 0x38))();
  if (cVar6 != '\0') {
    return;
  }
  if (this->_padding_ != 0) {
    return;
  }
  if ((this->ViewportWidget).Object == (SViewport *)0x0) {
    return;
  }
  pTVar1 = (this->ViewportWidget).WeakReferenceCount.ReferenceController;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    return;
  }
  if ((int)pTVar1->SharedReferenceCount < 1) {
    return;
  }
  pFVar8 = FSlateApplication::Get();
  plVar2 = *(longlong **)&pFVar8->field_0x60;
  pFVar8 = FSlateApplication::Get();
  pSVar11 = (SViewport *)(this->ViewportWidget).WeakReferenceCount.ReferenceController;
  pSVar12 = (SViewport *)0x0;
  pcVar3 = *(code **)(*(longlong *)pFVar8 + 0x28);
  pSVar10 = pSVar11;
  if (pSVar11 != (SViewport *)0x0) {
    aVar4 = *(atomic<int> *)&pSVar11->_padding_;
    do {
      pSVar10 = pSVar12;
      if (aVar4 == (atomic<int>)0x0) goto LAB_1486d6d25;
      LOCK();
      aVar7 = *(atomic<int> *)&pSVar11->_padding_;
      bVar5 = aVar4 == aVar7;
      if (bVar5) {
        *(atomic<int> *)&pSVar11->_padding_ = (atomic<int>)((int)aVar4 + 1);
        aVar7 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar7;
    } while (!bVar5);
    pSVar12 = (this->ViewportWidget).Object;
    pSVar10 = pSVar11;
    if (pSVar12 != (SViewport *)0x0) goto LAB_1486d6d76;
  }
LAB_1486d6d25:
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x416,L"");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x26c,L"");
  pSVar11 = pSVar10;
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_1486d6d76:
  if (pSVar11 != (SViewport *)0x0) {
    LOCK();
    *(int *)&pSVar11->_padding_ = (int)pSVar11->_padding_ + 1;
    UNLOCK();
  }
  local_28 = pSVar12;
  local_20 = pSVar11;
  (*pcVar3)(pFVar8,&local_38,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar11);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (local_38 != 0) {
    pcVar3 = *(code **)(*plVar2 + 0xb8);
    if ((local_38 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puVar9 = (undefined8 *)(*pcVar3)(plVar2,local_38);
    if (puVar9 != (undefined8 *)0x0) {
      this_00 = (FRHIResource *)*puVar9;
      this_01 = (FRHIResource *)this->_padding_;
      if (this_01 != this_00) {
        this->_padding_ = (longlong)this_00;
        if (this_00 != (FRHIResource *)0x0) {
          FRHIResource::AddRef(this_00);
        }
        if (this_01 != (FRHIResource *)0x0) {
          FRHIResource::Release(this_01);
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  return;
}

// OnPreResizeWindowBackbuffer @ 1486d6e70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FSceneViewport::OnPreResizeWindowBackbuffer(FSceneViewport *this,void *param_1)

{
  FRHIResource *this_00;
  FRHIResource *this_01;
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SceneViewport.cpp"
                       ,0x7e7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = *(FRHIResource **)param_1;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(this_00);
  }
  this_01 = (FRHIResource *)this->_padding_;
  if ((this_01 == this_00) && (this_01 != (FRHIResource *)0x0)) {
    this->_padding_ = 0;
    FRHIResource::Release(this_01);
  }
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  return;
}

// OnQueryPopupMethod @ 1486d6e80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FPopupMethodReply * __thiscall
FSceneViewport::OnQueryPopupMethod(FSceneViewport *this,FPopupMethodReply *__return_storage_ptr__)

{
  if (*(longlong **)&this[-1].OnSceneViewportResizeDel != (longlong *)0x0) {
    (**(code **)(**(longlong **)&this[-1].OnSceneViewportResizeDel + 0x1c0))();
    return __return_storage_ptr__;
  }
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->PopupMethod = CreateNewWindow;
  __return_storage_ptr__->ShouldThrottle = Yes;
  return __return_storage_ptr__;
}

// OnQueryShowFocus @ 1486d6ed0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TOptional<bool> __thiscall
FSceneViewport::OnQueryShowFocus(FSceneViewport *this,EFocusCause param_1)

{
  TOptional<bool> TVar1;
  undefined7 in_register_00000011;
  
  TVar1 = SUB82(CONCAT71(in_register_00000011,param_1),0);
  if (*(longlong **)&this[-1].OnSceneViewportResizeDel != (longlong *)0x0) {
    (**(code **)(**(longlong **)&this[-1].OnSceneViewportResizeDel + 0xd8))();
    return TVar1;
  }
  *(undefined1 *)(CONCAT71(in_register_00000011,param_1) + 1) = 0;
  return TVar1;
}

// OnRequestWindowClose @ 1486d6f10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FReply * __thiscall
FSceneViewport::OnRequestWindowClose(FSceneViewport *this,FReply *__return_storage_ptr__)

{
  char cVar1;
  FReply *this_00;
  FReply local_178;
  FReply local_c0;
  
  if (*(longlong **)&this[-1].OnSceneViewportResizeDel != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)&this[-1].OnSceneViewportResizeDel + 0x110))();
    if (cVar1 == '\0') {
      FReply::FReply(&local_178,true);
      FReply::FReply(__return_storage_ptr__,&local_178);
      this_00 = &local_178;
      goto LAB_1486d6f7f;
    }
  }
  FReply::FReply(&local_c0,false);
  FReply::FReply(__return_storage_ptr__,&local_c0);
  this_00 = &local_c0;
LAB_1486d6f7f:
  FReply::~FReply(this_00);
  return __return_storage_ptr__;
}

// OnTouchEnded @ 1486d7070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FReply * __thiscall
FSceneViewport::OnTouchEnded
          (FSceneViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FSharedReferencer<1> *this_00;
  longlong *plVar1;
  char cVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  double local_e8;
  double local_e0;
  FReply local_d8;
  
  FReply::FReply(&local_d8,true);
  FReply::operator=((FReply *)&this->_padding_,&local_d8);
  FReply::~FReply(&local_d8);
  FGeometry::operator=((FGeometry *)&(this->CurrentReplyState).MouseCaptor,param_1);
  this_00 = &this[-1].DebugCanvasDrawer.SharedReferenceCount;
  iVar3 = *(int *)((longlong)&(this->SoftwareCursorPosition).field0_0x0 + 8) + -1;
  *(int *)((longlong)&(this->SoftwareCursorPosition).field0_0x0 + 8) = iVar3;
  if (iVar3 < 1) {
    UpdateCachedCursorPos((FSceneViewport *)this_00,param_1,param_2);
    pTVar4 = (this->CurrentReplyState).EventHandler.WeakReferenceCount.ReferenceController;
    (this->CurrentReplyState).EventHandler.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0xffffffffffffffff;
  }
  else {
    UpdateCachedCursorPos((FSceneViewport *)this_00,param_1,param_2);
    pTVar4 = (this->CurrentReplyState).EventHandler.WeakReferenceCount.ReferenceController;
  }
  plVar1 = *(longlong **)&this[-1].OnSceneViewportResizeDel;
  if (plVar1 != (longlong *)0x0) {
    local_e8 = (double)(int)pTVar4;
    local_e0 = (double)(int)((ulonglong)pTVar4 >> 0x20);
    cVar2 = (**(code **)(*plVar1 + 0x60))
                      (plVar1,local_e0,(int)param_2->_padding_,param_2->PointerIndex,5,&local_e8,0,
                       param_2->TouchpadIndex,param_2->_padding_);
    if (cVar2 == '\0') {
      FReply::FReply(&local_d8,false);
      FReply::operator=((FReply *)&this->_padding_,&local_d8);
      FReply::~FReply(&local_d8);
    }
    cVar2 = (**(code **)(**(longlong **)&this[-1].OnSceneViewportResizeDel + 0x198))();
    if (cVar2 == '\x03') {
      FReply::ReleaseMouseCapture((FReply *)&this->_padding_);
    }
  }
  FReply::FReply(__return_storage_ptr__,(FReply *)&this->_padding_);
  return __return_storage_ptr__;
}

// OnTouchFirstMove @ 1486d7220

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FReply * __thiscall
FSceneViewport::OnTouchFirstMove
          (FSceneViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  longlong *plVar1;
  char cVar2;
  TTransform2<float> *pTVar3;
  float fVar4;
  float fVar5;
  undefined8 local_138;
  double local_130;
  float local_128;
  float fStack_124;
  TTransform2<float> local_120;
  FReply local_108;
  
  FReply::FReply(&local_108,true);
  FReply::operator=((FReply *)&this->_padding_,&local_108);
  FReply::~FReply(&local_108);
  UpdateCachedCursorPos
            ((FSceneViewport *)&this[-1].DebugCanvasDrawer.SharedReferenceCount,param_1,param_2);
  FGeometry::operator=((FGeometry *)&(this->CurrentReplyState).MouseCaptor,param_1);
  plVar1 = *(longlong **)&this[-1].OnSceneViewportResizeDel;
  if (plVar1 != (longlong *)0x0) {
    fVar5 = param_1->Scale;
    pTVar3 = Inverse<TTransform2<float>_>(&local_120,&param_1->AccumulatedRenderTransform);
    local_138._4_4_ = SUB84(param_2->ScreenSpacePosition,4);
    local_138._0_4_ = SUB84(param_2->ScreenSpacePosition,0);
    fVar4 = fVar5 * (local_138._4_4_ * (pTVar3->M).M[1][0] + (float)local_138 * (pTVar3->M).M[0][0]
                    + (pTVar3->Trans).field0_0x0._s_0.X);
    fVar5 = fVar5 * ((float)local_138 * (pTVar3->M).M[0][1] + local_138._4_4_ * (pTVar3->M).M[1][1]
                    + (pTVar3->Trans).field0_0x0._s_0.Y);
    _local_128 = CONCAT44(fVar5,fVar4);
    local_138 = (double)fVar4;
    local_130 = (double)fVar5;
    cVar2 = (**(code **)(*plVar1 + 0x60))
                      (plVar1,local_130,(int)param_2->_padding_,param_2->PointerIndex,4,&local_138,
                       param_2->Force,param_2->TouchpadIndex,param_2->_padding_);
    if (cVar2 == '\0') {
      FReply::FReply(&local_108,false);
      FReply::operator=((FReply *)&this->_padding_,&local_108);
      FReply::~FReply(&local_108);
    }
  }
  FReply::FReply(__return_storage_ptr__,(FReply *)&this->_padding_);
  return __return_storage_ptr__;
}

// OnTouchForceChanged @ 1486d7410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FReply * __thiscall
FSceneViewport::OnTouchForceChanged
          (FSceneViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  longlong *plVar1;
  char cVar2;
  TTransform2<float> *pTVar3;
  float fVar4;
  float fVar5;
  undefined8 local_138;
  double local_130;
  float local_128;
  float fStack_124;
  TTransform2<float> local_120;
  FReply local_108;
  
  FReply::FReply(&local_108,true);
  FReply::operator=((FReply *)&this->_padding_,&local_108);
  FReply::~FReply(&local_108);
  UpdateCachedCursorPos
            ((FSceneViewport *)&this[-1].DebugCanvasDrawer.SharedReferenceCount,param_1,param_2);
  FGeometry::operator=((FGeometry *)&(this->CurrentReplyState).MouseCaptor,param_1);
  plVar1 = *(longlong **)&this[-1].OnSceneViewportResizeDel;
  if (plVar1 != (longlong *)0x0) {
    fVar5 = param_1->Scale;
    pTVar3 = Inverse<TTransform2<float>_>(&local_120,&param_1->AccumulatedRenderTransform);
    local_138._4_4_ = SUB84(param_2->ScreenSpacePosition,4);
    local_138._0_4_ = SUB84(param_2->ScreenSpacePosition,0);
    fVar4 = fVar5 * (local_138._4_4_ * (pTVar3->M).M[1][0] + (float)local_138 * (pTVar3->M).M[0][0]
                    + (pTVar3->Trans).field0_0x0._s_0.X);
    fVar5 = fVar5 * ((float)local_138 * (pTVar3->M).M[0][1] + local_138._4_4_ * (pTVar3->M).M[1][1]
                    + (pTVar3->Trans).field0_0x0._s_0.Y);
    _local_128 = CONCAT44(fVar5,fVar4);
    local_138 = (double)fVar4;
    local_130 = (double)fVar5;
    cVar2 = (**(code **)(*plVar1 + 0x60))
                      (plVar1,local_130,(int)param_2->_padding_,param_2->PointerIndex,3,&local_138,
                       param_2->Force,param_2->TouchpadIndex,param_2->_padding_);
    if (cVar2 == '\0') {
      FReply::FReply(&local_108,false);
      FReply::operator=((FReply *)&this->_padding_,&local_108);
      FReply::~FReply(&local_108);
    }
  }
  FReply::FReply(__return_storage_ptr__,(FReply *)&this->_padding_);
  return __return_storage_ptr__;
}

// OnTouchGesture @ 1486d7600

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FReply * __thiscall
FSceneViewport::OnTouchGesture
          (FSceneViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  atomic<int> aVar1;
  FSharedReferencer<1> FVar2;
  char cVar3;
  atomic<int> aVar4;
  FSlateApplication *this_00;
  bool bVar5;
  TSharedPtr<SWidget,1> local_e8;
  FReply local_d8;
  
  FReply::FReply(&local_d8,true);
  FReply::operator=((FReply *)&this->_padding_,&local_d8);
  FReply::~FReply(&local_d8);
  FGeometry::operator=((FGeometry *)&(this->CurrentReplyState).MouseCaptor,param_1);
  UpdateCachedCursorPos
            ((FSceneViewport *)&this[-1].DebugCanvasDrawer.SharedReferenceCount,param_1,param_2);
  if (*(longlong *)&this[-1].OnSceneViewportResizeDel != 0) {
    if (param_2->GestureType != LongPress) {
      this_00 = FSlateApplication::Get();
      local_e8.SharedReferenceCount.ReferenceController =
           (this->CurrentReplyState).DragDropContent.SharedReferenceCount.ReferenceController;
      if (local_e8.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
        local_e8.Object = (SWidget *)0x0;
      }
      else {
        aVar1 = (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        do {
          if (aVar1 == (atomic<int>)0x0) {
            local_e8.Object = (SWidget *)0x0;
            local_e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            goto LAB_1486d76ed;
          }
          LOCK();
          aVar4 = (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
          bVar5 = aVar1 == aVar4;
          if (bVar5) {
            (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)aVar1 + 1);
            aVar4 = aVar1;
          }
          UNLOCK();
          aVar1 = aVar4;
        } while (!bVar5);
        local_e8.Object = (SWidget *)(this->CurrentReplyState).DragDropContent.Object;
        LOCK();
        (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
LAB_1486d76ed:
      FVar2.ReferenceController = local_e8.SharedReferenceCount.ReferenceController;
      FSlateApplication::SetKeyboardFocus(this_00,&local_e8,SetDirectly);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar2.ReferenceController);
    }
    local_e8.Object = (SWidget *)(double)*(float *)&param_2->WheelOrGestureDelta;
    local_e8.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)(double)*(float *)&(param_2->WheelOrGestureDelta).field_0x4;
    cVar3 = (**(code **)(**(longlong **)&this[-1].OnSceneViewportResizeDel + 0x70))
                      (*(longlong **)&this[-1].OnSceneViewportResizeDel,
                       local_e8.SharedReferenceCount.ReferenceController,(int)param_2->_padding_,
                       param_2->GestureType,&local_e8,param_2->bIsDirectionInvertedFromDevice,
                       param_2->_padding_);
    if (cVar3 == '\0') {
      FReply::FReply(&local_d8,false);
      FReply::operator=((FReply *)&this->_padding_,&local_d8);
      FReply::~FReply(&local_d8);
    }
  }
  FReply::FReply(__return_storage_ptr__,(FReply *)&this->_padding_);
  return __return_storage_ptr__;
}

// OnTouchMoved @ 1486d77d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FReply * __thiscall
FSceneViewport::OnTouchMoved
          (FSceneViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FSharedReferencer<1> *this_00;
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  char cVar3;
  TWeakPtr<SViewport,1> *pTVar4;
  double local_e8;
  double local_e0;
  FReply local_d8;
  
  FReply::FReply(&local_d8,true);
  FReply::operator=((FReply *)&this->_padding_,&local_d8);
  FReply::~FReply(&local_d8);
  FGeometry::operator=((FGeometry *)&(this->CurrentReplyState).MouseCaptor,param_1);
  this_00 = &this[-1].DebugCanvasDrawer.SharedReferenceCount;
  UpdateCachedCursorPos((FSceneViewport *)this_00,param_1,param_2);
  plVar1 = *(longlong **)&this[-1].OnSceneViewportResizeDel;
  if (plVar1 != (longlong *)0x0) {
    pTVar2 = (this->CurrentReplyState).EventHandler.WeakReferenceCount.ReferenceController;
    local_e8 = (double)(int)pTVar2;
    local_e0 = (double)(int)((ulonglong)pTVar2 >> 0x20);
    pTVar4 = &this[-1].ViewportWidget;
    if (this_00 == (FSharedReferencer<1> *)0x0) {
      pTVar4 = (TWeakPtr<SViewport,1> *)0x0;
    }
    cVar3 = (**(code **)(*plVar1 + 0x60))
                      (plVar1,pTVar4,(int)param_2->_padding_,param_2->PointerIndex,1,&local_e8,
                       param_2->Force,param_2->TouchpadIndex,param_2->_padding_);
    if (cVar3 == '\0') {
      FReply::FReply(&local_d8,false);
      FReply::operator=((FReply *)&this->_padding_,&local_d8);
      FReply::~FReply(&local_d8);
    }
  }
  FReply::FReply(__return_storage_ptr__,(FReply *)&this->_padding_);
  return __return_storage_ptr__;
}

// OnTouchStarted @ 1486d7930

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FReply * __thiscall
FSceneViewport::OnTouchStarted
          (FSceneViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FSharedReferencer<1> *this_00;
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  TIntPoint<int> TVar3;
  char cVar4;
  FReply *pFVar5;
  TWeakPtr<SViewport,1> *pTVar6;
  double local_e8;
  double local_e0;
  FReply local_d8;
  
  FReply::FReply(&local_d8,true);
  local_d8.bPreventThrottling = 1;
  FReply::operator=((FReply *)&this->_padding_,&local_d8);
  FReply::~FReply(&local_d8);
  this_00 = &this[-1].DebugCanvasDrawer.SharedReferenceCount;
  *(int *)((longlong)&(this->SoftwareCursorPosition).field0_0x0 + 8) =
       *(int *)((longlong)&(this->SoftwareCursorPosition).field0_0x0 + 8) + 1;
  FGeometry::operator=((FGeometry *)&(this->CurrentReplyState).MouseCaptor,param_1);
  UpdateCachedCursorPos((FSceneViewport *)this_00,param_1,param_2);
  plVar1 = *(longlong **)&this[-1].OnSceneViewportResizeDel;
  if (plVar1 != (longlong *)0x0) {
    pTVar2 = (this->CurrentReplyState).EventHandler.WeakReferenceCount.ReferenceController;
    local_e8 = (double)(int)pTVar2;
    pTVar6 = &this[-1].ViewportWidget;
    if (this_00 == (FSharedReferencer<1> *)0x0) {
      pTVar6 = (TWeakPtr<SViewport,1> *)0x0;
    }
    local_e0 = (double)(int)((ulonglong)pTVar2 >> 0x20);
    cVar4 = (**(code **)(*plVar1 + 0x60))
                      (plVar1,pTVar6,(int)param_2->_padding_,param_2->PointerIndex,0,&local_e8,
                       param_2->Force,param_2->TouchpadIndex,param_2->_padding_);
    if (cVar4 == '\0') {
      FReply::FReply(&local_d8,false);
      pFVar5 = &local_d8;
    }
    else {
      cVar4 = (**(code **)(**(longlong **)&this[-1].OnSceneViewportResizeDel + 0x198))();
      if (cVar4 != '\x03') goto LAB_1486d7aaa;
      TVar3.field0_0x0._s_0.Y = (int)*(float *)&(param_2->ScreenSpacePosition).field_0x4;
      TVar3.field0_0x0._s_0.X = (int)*(float *)&param_2->ScreenSpacePosition;
      pFVar5 = AcquireFocusAndCapture((FSceneViewport *)this_00,&local_d8,TVar3,Mouse);
    }
    FReply::operator=((FReply *)&this->_padding_,pFVar5);
    FReply::~FReply(&local_d8);
  }
LAB_1486d7aaa:
  FReply::FReply(__return_storage_ptr__,(FReply *)&this->_padding_);
  return __return_storage_ptr__;
}

// OnViewportActivated @ 1486d7ae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FReply * __thiscall
FSceneViewport::OnViewportActivated
          (FSceneViewport *this,FReply *__return_storage_ptr__,FWindowActivateEvent *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  TIntPoint<int> TVar3;
  undefined1 local_res8 [8];
  
  if (*(longlong **)&this[-1].OnSceneViewportResizeDel != (longlong *)0x0) {
    (**(code **)(**(longlong **)&this[-1].OnSceneViewportResizeDel + 0xf8))();
    cVar1 = (**(code **)(**(longlong **)&this[-1].OnSceneViewportResizeDel + 0x108))();
    if ((param_1->ActivationType == EA_Activate) &&
       (((this->KeyStateMap).field_0x1d != '\0' || (cVar1 != '\0')))) {
      puVar2 = (undefined8 *)
               (*(code *)(this[-1].ViewportWidget.Object)->_padding_)
                         (&this[-1].ViewportWidget,local_res8);
      TVar3.field0_0x0._s_0.Y = (int)((ulonglong)*puVar2 >> 0x20) / 2;
      TVar3.field0_0x0._s_0.X = (int)*puVar2 / 2;
      AcquireFocusAndCapture
                ((FSceneViewport *)&this[-1].DebugCanvasDrawer.SharedReferenceCount,
                 __return_storage_ptr__,TVar3,WindowActivate);
      return __return_storage_ptr__;
    }
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnViewportClosed @ 1486d7bc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FSceneViewport::OnViewportClosed(FSceneViewport *this)

{
  longlong *plVar1;
  TWeakPtr<SViewport,1> *pTVar2;
  
  plVar1 = *(longlong **)&this[-1].OnSceneViewportResizeDel;
  if (plVar1 != (longlong *)0x0) {
    pTVar2 = &this[-1].ViewportWidget;
    if (this == (FSceneViewport *)&DAT_000000d8) {
      pTVar2 = (TWeakPtr<SViewport,1> *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x0001486d7be9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x118))(plVar1,pTVar2);
    return;
  }
  return;
}

// OnViewportDeactivated @ 1486d7c00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FSceneViewport::OnViewportDeactivated(FSceneViewport *this,FWindowActivateEvent *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  undefined1 uVar6;
  TWeakPtr<SViewport,1> *pTVar7;
  
  if ((this->KeyStateMap).field_0x1d == '\0') {
    cVar5 = (*(code *)(this[-1].ViewportWidget.Object)->_padding_)();
    uVar6 = 0;
    if (cVar5 == '\0') goto LAB_1486d7c3f;
  }
  uVar6 = 1;
LAB_1486d7c3f:
  plVar3 = &this->_padding_;
  (this->KeyStateMap).field_0x1d = uVar6;
  bVar4 = 1 < *(int *)&(this->CurrentReplyState).EventHandler.Object;
  if (!bVar4) {
    TSet<TTuple<FKey,bool>,TDefaultMapHashableKeyFuncs<FKey,bool,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<FKey,bool>,TDefaultMapHashableKeyFuncs<FKey,bool,0>,FDefaultSetAllocator>
                    *)plVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FKey,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FKey,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)plVar3,0,(int)this->_padding_);
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)plVar3,0,piVar1);
  }
  *(undefined4 *)&(this->CurrentReplyState)._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->CurrentReplyState)._padding_ + 4) = 0;
  iVar2 = *(int *)((longlong)&(this->CurrentReplyState)._padding_ + 4);
  *(undefined4 *)&(this->CurrentReplyState)._padding_ = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)((longlong)&(this->CurrentReplyState)._padding_ + 4) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->CurrentReplyState).EventHandler.Object = 1;
    TSet<TTuple<FKey,bool>,TDefaultMapHashableKeyFuncs<FKey,bool,0>,FDefaultSetAllocator>::Rehash
              ((TSet<TTuple<FKey,bool>,TDefaultMapHashableKeyFuncs<FKey,bool,0>,FDefaultSetAllocator>
                *)plVar3);
  }
  plVar3 = *(longlong **)&this[-1].OnSceneViewportResizeDel;
  if (plVar3 != (longlong *)0x0) {
    pTVar7 = &this[-1].ViewportWidget;
    if (this == (FSceneViewport *)&DAT_000000d8) {
      pTVar7 = (TWeakPtr<SViewport,1> *)0x0;
    }
    (**(code **)(*plVar3 + 0x100))(plVar3,pTVar7,param_1);
  }
  return;
}

// OnWindowBackBufferResourceDestroyed @ 1486d7db0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FSceneViewport::OnWindowBackBufferResourceDestroyed(FSceneViewport *this,void *param_1)

{
  FRHIResource *this_00;
  FRHIResource *this_01;
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SceneViewport.cpp"
                       ,0x7e7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = *(FRHIResource **)param_1;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(this_00);
  }
  this_01 = (FRHIResource *)this->_padding_;
  if ((this_01 == this_00) && (this_01 != (FRHIResource *)0x0)) {
    this->_padding_ = 0;
    FRHIResource::Release(this_01);
  }
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  return;
}

// PaintDebugCanvas @ 1486d8350

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FSceneViewport::PaintDebugCanvas
          (FSceneViewport *this,FGeometry *param_1,FSlateWindowElementList *param_2,int param_3)

{
  FDebugCanvasDrawer *pFVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float local_res8;
  float fStack_34;
  TIntRect<int>_u_0 local_30;
  TSharedPtr<ICustomSlateElement,1> local_20;
  
  if ((this->DebugCanvasDrawer).Object == (FDebugCanvasDrawer *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->DebugCanvasDrawer).Object;
  if ((pFVar1->GameThreadCanvas).Object != (FCanvas *)0x0) {
    if (pFVar1 == (FDebugCanvasDrawer *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    bVar3 = FCanvas::HasBatchesToRender
                      ((((this->DebugCanvasDrawer).Object)->GameThreadCanvas).Object);
    if (bVar3) {
      fVar4 = (param_1->AbsolutePosition).field0_0x0._s_0.X;
      if (fVar4 <= 0.0) {
        fVar4 = 0.0;
      }
      fVar5 = (param_1->AbsolutePosition).field0_0x0._s_0.Y;
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      local_30._0_4_ = (int)ROUND(fVar4 + fVar4 + __real_3f000000) >> 1;
      fStack_34 = SUB84(param_1->Size,4);
      local_30._4_4_ = (int)ROUND(fVar5 + fVar5 + __real_3f000000) >> 1;
      local_res8 = SUB84(param_1->Size,0);
      fVar5 = param_1->Scale * fStack_34 + fVar5;
      fVar4 = param_1->Scale * local_res8 + fVar4;
      local_30._8_4_ = (int)ROUND(fVar4 + fVar4 + __real_3f000000) >> 1;
      local_30._12_4_ = (int)ROUND(fVar5 + fVar5 + __real_3f000000) >> 1;
      if ((this->DebugCanvasDrawer).Object == (FDebugCanvasDrawer *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      FDebugCanvasDrawer::BeginRenderingCanvas
                ((this->DebugCanvasDrawer).Object,(TIntRect<int> *)&local_30._s_0);
      local_20.Object = (ICustomSlateElement *)(this->DebugCanvasDrawer).Object;
      local_20.SharedReferenceCount.ReferenceController =
           (this->DebugCanvasDrawer).SharedReferenceCount.ReferenceController;
      if (local_20.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_20.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_20.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FSlateDrawElement::MakeCustom(param_2,param_3,&local_20);
    }
  }
  return;
}

// ProcessAccumulatedPointerInput @ 1486e20d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FSceneViewport::ProcessAccumulatedPointerInput(FSceneViewport *this)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong *plVar2;
  UGameInstance *this_00;
  code *pcVar3;
  byte bVar4;
  atomic<int> aVar5;
  char cVar6;
  bool bVar7;
  atomic<int> aVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  IPlatformInputDeviceMapper *pIVar12;
  UWorld *this_01;
  APlayerController *pAVar13;
  SViewport *pSVar14;
  SViewport *this_02;
  SViewport *pSVar15;
  SViewport *pSVar16;
  longlong *plVar17;
  bool bVar18;
  float fVar19;
  FInputDeviceId local_res8;
  uint uStackX_c;
  FInputKeyEventArgs local_d8;
  FInputKeyEventArgs local_88;
  
  pSVar16 = (SViewport *)0x0;
  local_res8.InternalId = 0;
  if (this->_padding_ == 0) {
    return;
  }
  if ((((this->ViewportWidget).Object == (SViewport *)0x0) ||
      (pTVar1 = (this->ViewportWidget).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
    pSVar14 = (SViewport *)((ulonglong)uStackX_c << 0x20);
    pSVar15 = pSVar16;
  }
  else {
    pSVar14 = (SViewport *)(this->ViewportWidget).WeakReferenceCount.ReferenceController;
    pSVar15 = pSVar14;
    this_02 = pSVar16;
    if (pSVar14 == (SViewport *)0x0) {
LAB_1486e2154:
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      pSVar14 = pSVar15;
      if (bVar18) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      aVar5 = *(atomic<int> *)&pSVar14->_padding_;
      do {
        pSVar15 = pSVar16;
        this_02 = (SViewport *)0x0;
        if (aVar5 == (atomic<int>)0x0) goto LAB_1486e2154;
        LOCK();
        aVar8 = *(atomic<int> *)&pSVar14->_padding_;
        bVar18 = aVar5 == aVar8;
        if (bVar18) {
          *(atomic<int> *)&pSVar14->_padding_ = (atomic<int>)((int)aVar5 + 1);
          aVar8 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar8;
      } while (!bVar18);
      this_02 = (this->ViewportWidget).Object;
      pSVar15 = pSVar14;
      if (this_02 == (SViewport *)0x0) goto LAB_1486e2154;
    }
    pSVar15 = (SViewport *)&DAT_00000001;
    bVar18 = SWidget::HasMouseCapture((SWidget *)this_02);
    if (bVar18) {
      bVar18 = true;
      goto LAB_1486e21aa;
    }
  }
  bVar18 = false;
LAB_1486e21aa:
  if (pSVar15 != (SViewport *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar14);
  }
  plVar17 = &this->_padding_;
  pSVar14 = (SViewport *)plVar17;
  if (this == (FSceneViewport *)0x0) {
    pSVar14 = pSVar16;
  }
  (**(code **)(*(longlong *)this->_padding_ + 0xc0))((longlong *)this->_padding_,pSVar14);
  if ((0 < this->NumMouseSamplesX) || (0 < this->NumMouseSamplesY)) {
    fVar19 = (float)(double)FApp::DeltaTime;
    pIVar12 = IPlatformInputDeviceMapper::Get();
    (**(code **)(pIVar12->_padding_ + 0x58))(pIVar12,&local_res8);
    iVar11 = this->NumMouseSamplesX;
    FInputKeyEventArgs::FInputKeyEventArgs
              (&local_88,(FViewport *)plVar17,local_res8,&EKeys::MouseX,IE_Axis,
               (float)(this->MouseDelta).field0_0x0._s_0.X,false,0);
    local_88.DeltaTime = fVar19;
    local_88.NumSamples = iVar11;
    (**(code **)(*(longlong *)this->_padding_ + 0x48))((longlong *)this->_padding_,&local_88);
    iVar11 = this->NumMouseSamplesY;
    FInputKeyEventArgs::FInputKeyEventArgs
              (&local_d8,(FViewport *)plVar17,local_res8,&EKeys::MouseY,IE_Axis,
               (float)(this->MouseDelta).field0_0x0._s_0.Y,false,0);
    local_d8.DeltaTime = fVar19;
    local_d8.NumSamples = iVar11;
    (**(code **)(*(longlong *)this->_padding_ + 0x48))((longlong *)this->_padding_,&local_d8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d8.Key.KeyDetails.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  }
  plVar17 = &this->_padding_;
  if ((this->bCursorHiddenDueToCapture != false) &&
     ((((cVar6 = (**(code **)(*(longlong *)this->_padding_ + 0x198))(), cVar6 == '\0' ||
        (cVar6 == '\x03')) || (cVar6 == '\x04')) && (!bVar18)))) {
    plVar2 = (longlong *)this->_padding_;
    pcVar3 = *(code **)(*plVar2 + 200);
    uVar9 = (**(code **)(*plVar17 + 0x108))(plVar17);
    uVar10 = (**(code **)(*plVar17 + 0x100))(plVar17);
    iVar11 = (*pcVar3)(plVar2,pSVar14,uVar10,uVar9);
    bVar18 = iVar11 != 0;
    this_01 = (UWorld *)(**(code **)(*(longlong *)this->_padding_ + 0x30))();
    if (((this_01 != (UWorld *)0x0) && (bVar7 = UWorld::IsGameWorld(this_01), bVar7)) &&
       (this_00 = (this_01->OwningGameInstance).field0_0x0.DebugPtr, this_00 != (UGameInstance *)0x0
       )) {
      pAVar13 = UGameInstance::GetFirstLocalPlayerController(this_00,(UWorld *)0x0);
      if ((pAVar13 == (APlayerController *)0x0) ||
         (cVar6 = (**(code **)(pAVar13->_padding_ + 0xf08))(pAVar13), cVar6 == '\0')) {
        bVar4 = 0;
      }
      else {
        bVar4 = 1;
      }
      bVar18 = (bool)(bVar18 & bVar4);
    }
    if (bVar18) {
      this->bCursorHiddenDueToCapture = false;
      FReply::SetMousePos(&this->CurrentReplyState,&this->MousePosBeforeHiddenDueToCapture);
      (this->MousePosBeforeHiddenDueToCapture).field0_0x0 = (TIntPoint<int>_u_0)0xffffffffffffffff;
    }
  }
  (this->MouseDelta).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  this->NumMouseSamplesX = 0;
  this->NumMouseSamplesY = 0;
  return;
}

// ProcessInput @ 1486e2e70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FSceneViewport::ProcessInput(FSceneViewport *this,float param_1)

{
  return;
}

// ReleaseRHI @ 1486e6350

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FSceneViewport::ReleaseRHI(FSceneViewport *this)

{
  FRHIResource *this_00;
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  FViewport::ReleaseRHI((FViewport *)this);
  this_00 = (FRHIResource *)this->_padding_;
  if (this_00 != (FRHIResource *)0x0) {
    this->_padding_ = 0;
    FRHIResource::Release(this_00);
  }
  iVar6 = (this->MousePosBeforeHiddenDueToCapture).field0_0x0._s_0.Y;
  uVar7 = 0;
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(longlong *)(lVar8 + *(longlong *)&this->bPlayInEditorIsSimulate) != 0) {
        uVar5 = 0;
        if ((int)uVar7 < (this->MousePosBeforeHiddenDueToCapture).field0_0x0._s_0.Y) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar1 = *(longlong *)(lVar8 + *(longlong *)&this->bPlayInEditorIsSimulate);
        (**(code **)(*(longlong *)(lVar1 + 0x18) + 0x10))(lVar1 + 0x18);
      }
      iVar6 = (this->MousePosBeforeHiddenDueToCapture).field0_0x0._s_0.Y;
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < iVar6);
  }
  pFVar2 = (this->BufferedShaderResourceTexturesRHI).AllocatorInstance.Data;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001486e6494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(pFVar2 + 0x18) + 0x10))(pFVar2 + 0x18);
  return;
}

// RequiresVsync @ 1486e9b80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall FSceneViewport::RequiresVsync(FSceneViewport *this)

{
  return (bool)(this->KeyStateMap).field_0x1e;
}

// ResizeFrame @ 1486ea720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSceneViewport::ResizeFrame(FSceneViewport *this,uint param_1,uint param_2,Type param_3)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  FSlateRenderer *pFVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  FDeprecateVector2DParameter FVar9;
  FDeprecateVector2DParameter FVar10;
  FDeprecateVector2DParameter FVar11;
  FDeprecateVector2DParameter FVar12;
  TOptional<float> TVar13;
  bool bVar14;
  atomic<int> aVar15;
  SWindow *pSVar16;
  double dVar17;
  char cVar18;
  bool bVar19;
  atomic<int> aVar20;
  Type TVar21;
  Type TVar22;
  uint uVar23;
  FSlateApplication *pFVar24;
  TSharedRef<SViewport,1> *pTVar25;
  FDeprecateSlateVector2D FVar26;
  IXRTrackingSystem *pIVar27;
  longlong lVar28;
  longlong *plVar29;
  FDeprecateSlateVector2D *pFVar30;
  double *pdVar31;
  FSlateApplicationBase *pFVar32;
  TSharedRef<SWindow,1> *pTVar33;
  wchar_t *pwVar34;
  int iVar35;
  uint uVar36;
  bool bVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  TSharedPtr<SWindow,1> local_2a8;
  Type local_298;
  double local_290;
  double local_288;
  float local_278;
  float fStack_274;
  FSlateRect local_270;
  float local_260;
  float fStack_25c;
  float local_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float local_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  float local_230;
  float fStack_22c;
  undefined8 local_228;
  double local_220;
  TSharedPtr<SViewport,1> local_218;
  undefined1 local_208 [16];
  FSlateRect local_1f8;
  double local_1e8;
  double dStack_1e0;
  void *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  char local_1a8;
  undefined1 local_19c;
  double local_198;
  double dStack_190;
  SViewport *local_188;
  TReferenceControllerBase<1> *local_180;
  FDisplayMetrics local_178;
  undefined1 local_f0 [8];
  TSharedRef<SViewport,1> local_e8;
  TSharedRef<SWindow,1> local_d8;
  TSharedRef<SWindow,1> local_c8 [10];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar34 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar34,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if ((PRIVATE_GIsRunningCommandlet != false) && (PRIVATE_GAllowCommandletRendering == false)) {
    return;
  }
  if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline !=
      false) {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  pFVar24 = FSlateApplication::Get();
  local_218.SharedReferenceCount.ReferenceController =
       (this->ViewportWidget).WeakReferenceCount.ReferenceController;
  local_218.Object = (SViewport *)0x0;
  pcVar4 = *(code **)(*(longlong *)pFVar24 + 0x28);
  if (local_218.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    aVar15 = (local_218.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar15 == (atomic<int>)0x0) {
        local_218.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1486ea806;
      }
      LOCK();
      aVar20 = (local_218.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      bVar37 = aVar15 == aVar20;
      if (bVar37) {
        (local_218.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)aVar15 + 1);
        aVar20 = aVar15;
      }
      UNLOCK();
      aVar15 = aVar20;
    } while (!bVar37);
    local_218.Object = (this->ViewportWidget).Object;
  }
LAB_1486ea806:
  pTVar25 = TSharedPtr<SViewport,1>::ToSharedRef(&local_218,&local_e8);
  local_188 = pTVar25->Object;
  local_180 = (pTVar25->SharedReferenceCount).ReferenceController;
  if (local_180 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_180->SharedReferenceCount = (atomic<int>)((int)local_180->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar4)(pFVar24,&local_2a8,&local_188);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_218.SharedReferenceCount.ReferenceController);
  if (local_2a8.Object == (SWindow *)0x0) goto LAB_1486eb2fd;
  TVar21 = GetWindowModeType(param_3);
  if ((local_2a8.Object == (SWindow *)0x0) &&
     (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar37)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar26 = SWindow::GetPositionInScreen(local_2a8.Object);
  fVar2 = *(float *)FVar26;
  fVar3 = *(float *)((longlong)FVar26 + 4);
  if ((local_2a8.Object == (SWindow *)0x0) &&
     (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar37)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar26 = SWindow::GetClientSizeInScreen(local_2a8.Object);
  fVar6 = (float)*(undefined8 *)FVar26;
  dVar39 = (double)fVar6;
  fVar7 = (float)((ulonglong)*(undefined8 *)FVar26 >> 0x20);
  dVar40 = (double)fVar7;
  local_208._8_4_ = SUB84(dVar40,0);
  local_208._0_8_ = dVar39;
  local_208._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
  if ((local_2a8.Object == (SWindow *)0x0) &&
     (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar37)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  TVar22 = SWindow::GetWindowMode(local_2a8.Object);
  local_298 = TVar22;
  if (TVar21 != TVar22) {
    if ((local_2a8.Object == (SWindow *)0x0) &&
       (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar37)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    SWindow::SetWindowMode(local_2a8.Object,TVar21);
    *(Type *)((longlong)&this->_padding_ + 4) = TVar21;
  }
  dVar41 = (double)param_1;
  bVar19 = false;
  dVar38 = (double)param_2;
  local_290 = dVar41;
  local_288 = dVar38;
  pFVar24 = FSlateApplication::Get();
  bVar37 = true;
  if (pFVar24->bRenderOffScreen == false) {
    pFVar24 = FSlateApplication::Get();
    local_1f8.Right = fVar6 + fVar2;
    local_1f8.Bottom = fVar7 + fVar3;
    local_1f8.Left = fVar2;
    local_1f8.Top = fVar3;
    FSlateApplication::GetWorkArea(pFVar24,&local_270,&local_1f8);
    if (TVar21 == Windowed) {
      if (((TVar22 != Windowed) || (dVar41 != dVar39)) ||
         (dVar42 = local_220, dVar43 = local_220, dVar38 != dVar40)) {
        _local_278 = CONCAT44(local_270.Bottom - local_270.Top,local_270.Right - local_270.Left);
        dVar43 = (double)(local_270.Right - local_270.Left);
        dVar42 = (double)local_270.Left;
        dVar8 = (double)(local_270.Bottom - local_270.Top);
        if (dVar41 < dVar43) {
          dVar43 = (dVar43 - dVar41) * __real_3fe0000000000000;
          if (dVar43 <= 0.0) {
            dVar43 = 0.0;
          }
          dVar42 = dVar43 + dVar42;
        }
        dVar43 = (double)local_270.Top;
        bVar19 = bVar37;
        if (dVar38 < dVar8) {
          dVar43 = (dVar8 - dVar38) * __real_3fe0000000000000;
          if (dVar43 <= 0.0) {
            dVar43 = 0.0;
          }
          dVar43 = (double)local_270.Top + dVar43;
        }
      }
    }
    else {
      local_178.MonitorInfo.ArrayNum = 0;
      local_178.MonitorInfo.ArrayMax = 0;
      local_178.PrimaryDisplayWorkAreaRect.Left = 0;
      local_178.PrimaryDisplayWorkAreaRect.Top = 0;
      local_178.PrimaryDisplayWorkAreaRect.Right = 0;
      local_178.PrimaryDisplayWorkAreaRect.Bottom = 0;
      local_178.VirtualDisplayRect.Left = 0;
      local_178.VirtualDisplayRect.Top = 0;
      local_178.TitleSafePaddingSize.field0_0x0._s_0.X = 0.0;
      local_178.TitleSafePaddingSize.field0_0x0._s_0.Y = 0.0;
      local_178.TitleSafePaddingSize.field0_0x0._s_0.Z = 0.0;
      local_178.TitleSafePaddingSize.field0_0x0._s_0.W = 0.0;
      local_178.ActionSafePaddingSize.field0_0x0._s_0.X = 0.0;
      local_178.ActionSafePaddingSize.field0_0x0._s_0.Y = 0.0;
      local_178.ActionSafePaddingSize.field0_0x0._s_0.Z = 0.0;
      local_178.ActionSafePaddingSize.field0_0x0._s_0.W = 0.0;
      local_178.MonitorInfo.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_178.VirtualDisplayRect.Right = 0;
      local_178.VirtualDisplayRect.Bottom = 0;
      pFVar24 = FSlateApplication::Get();
      FSlateApplicationBase::GetCachedDisplayMetrics((FSlateApplicationBase *)pFVar24,&local_178);
      uVar36 = 1;
      iVar35 = local_178.MonitorInfo.ArrayNum;
      if (local_178.MonitorInfo.ArrayNum < 1) {
        dVar43 = 0.0;
        dVar42 = 0.0;
        dVar8 = 0.0;
        dVar17 = 0.0;
        if (TVar21 == WindowedFullscreen) goto LAB_1486ead50;
      }
      else {
        iVar44 = *(int *)(local_178.MonitorInfo.AllocatorInstance.Data + 0x30);
        iVar45 = *(int *)(local_178.MonitorInfo.AllocatorInstance.Data + 0x34);
        iVar46 = *(int *)(local_178.MonitorInfo.AllocatorInstance.Data + 0x38);
        iVar47 = *(int *)(local_178.MonitorInfo.AllocatorInstance.Data + 0x3c);
        if (1 < local_178.MonitorInfo.ArrayNum) {
          lVar28 = 0x58;
          do {
            uVar23 = 0;
            if ((int)uVar36 < iVar35) {
              uVar23 = ~uVar36 >> 0x1f;
            }
            if (uVar23 == 0) {
              bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar19) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar35 = local_178.MonitorInfo.ArrayNum;
            }
            fStack_25c = local_270.Top;
            local_260 = local_270.Left;
            if ((local_270.Left ==
                 (float)*(int *)(local_178.MonitorInfo.AllocatorInstance.Data + lVar28 + 0x40)) &&
               (local_270.Top ==
                (float)*(int *)(local_178.MonitorInfo.AllocatorInstance.Data + lVar28 + 0x44))) {
              uVar23 = 0;
              if ((int)uVar36 < iVar35) {
                uVar23 = ~uVar36 >> 0x1f;
              }
              if (uVar23 == 0) {
                bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar19) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                iVar35 = local_178.MonitorInfo.ArrayNum;
              }
              pFVar1 = local_178.MonitorInfo.AllocatorInstance.Data + lVar28 + 0x30;
              iVar44 = *(int *)pFVar1;
              iVar45 = *(int *)(pFVar1 + 4);
              iVar46 = *(int *)(pFVar1 + 8);
              iVar47 = *(int *)(pFVar1 + 0xc);
            }
            uVar36 = uVar36 + 1;
            lVar28 = lVar28 + 0x58;
          } while ((int)uVar36 < iVar35);
          dVar40 = (double)local_208._8_8_;
          dVar39 = (double)local_208._0_8_;
          dVar41 = local_290;
          dVar38 = local_288;
        }
        dVar42 = (double)iVar44;
        dVar43 = (double)iVar45;
        if (TVar21 == WindowedFullscreen) {
          local_178.PrimaryDisplayWidth = iVar46 - iVar44;
          local_178.PrimaryDisplayHeight = iVar47 - iVar45;
          dVar8 = dVar42;
          dVar17 = dVar43;
LAB_1486ead50:
          dVar43 = dVar17;
          dVar42 = dVar8;
          dVar38 = (double)local_178.PrimaryDisplayHeight;
          dVar41 = (double)local_178.PrimaryDisplayWidth;
          local_290 = dVar41;
          local_288 = dVar38;
        }
      }
      DestructItems<FMonitorInfo,int>
                ((FMonitorInfo *)local_178.MonitorInfo.AllocatorInstance.Data,iVar35);
      bVar19 = true;
      if ((FMonitorInfo *)local_178.MonitorInfo.AllocatorInstance.Data != (FMonitorInfo *)0x0) {
        FMemory::Free(local_178.MonitorInfo.AllocatorInstance.Data);
      }
    }
    local_1d8 = (void *)0x0;
    local_1d0 = 0;
    local_1c8 = 0;
    local_1c0 = 0;
    uStack_1b8 = 0;
    local_1b0 = 0;
    local_1a8 = '\0';
    if ((GEngine->XRSystem).Object != (IXRTrackingSystem *)0x0) {
      pIVar27 = TSharedPtr<IXRTrackingSystem,1>::operator->(&GEngine->XRSystem);
      lVar28 = (**(code **)((longlong)*pIVar27 + 0x118))(pIVar27);
      if (lVar28 != 0) {
        pIVar27 = TSharedPtr<IXRTrackingSystem,1>::operator->(&GEngine->XRSystem);
        plVar29 = (longlong *)(**(code **)((longlong)*pIVar27 + 0x118))(pIVar27);
        cVar18 = (**(code **)(*plVar29 + 0x68))(plVar29,&local_1d8);
        if (cVar18 != '\0') {
          if (((0 < (int)local_1c0) || (0 < local_1c0._4_4_)) ||
             ((local_1a8 != '\0' && ((0 < (int)uStack_1b8 || (0 < uStack_1b8._4_4_)))))) {
            dVar41 = (double)(int)uStack_1b8;
            dVar38 = (double)uStack_1b8._4_4_;
            dVar42 = (double)(int)local_1c0;
            dVar43 = (double)local_1c0._4_4_;
            local_290 = dVar41;
            local_288 = dVar38;
            bVar19 = bVar37;
          }
        }
      }
    }
    bVar37 = bVar19;
    if (local_1d8 != (void *)0x0) {
      FMemory::Free(local_1d8);
    }
  }
  else {
    dVar43 = 0.0;
    dVar42 = 0.0;
  }
  TVar22 = local_298;
  if ((dVar41 == dVar39) && (dVar38 == dVar40)) {
    bVar19 = false;
  }
  else {
    bVar19 = true;
  }
  if (bVar37) {
    bVar14 = true;
    if ((bVar37) && ((dVar42 != (double)fVar2 || (bVar14 = false, dVar43 != (double)fVar3)))) {
      bVar14 = true;
    }
    if (!bVar14) goto LAB_1486eaecc;
    bVar14 = true;
  }
  else {
LAB_1486eaecc:
    bVar14 = false;
  }
  if (((bVar19) || (bVar14)) || (TVar21 != local_298)) {
    if ((this->CurrentReplyState).bShouldReleaseMouseLock != 0) {
      (**(code **)(this->_padding_ + 0xb8))(&this->_padding_,0);
    }
    if (TVar21 == TVar22) {
      if (bVar19) {
        if (bVar14) goto LAB_1486eb014;
        if ((local_2a8.Object == (SWindow *)0x0) &&
           (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar37)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_250 = (float)dVar41;
        fStack_24c = (float)dVar38;
        FVar9._4_4_ = fStack_24c;
        FVar9._0_4_ = local_250;
        SWindow::Resize(local_2a8.Object,FVar9);
      }
      else {
        if ((local_2a8.Object == (SWindow *)0x0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar19)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pSVar16 = local_2a8.Object;
        if ((!bVar37) &&
           (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar37)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_248 = (float)dVar42;
        fStack_244 = (float)dVar43;
        FVar10._4_4_ = fStack_244;
        FVar10._0_4_ = local_248;
        SWindow::MoveWindowTo(pSVar16,FVar10);
      }
    }
    else {
LAB_1486eb014:
      if ((local_2a8.Object == (SWindow *)0x0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar19)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pSVar16 = local_2a8.Object;
      local_240 = (float)dVar41;
      fStack_23c = (float)dVar38;
      if ((!bVar37) &&
         (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar37)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar11._4_4_ = fStack_23c;
      FVar11._0_4_ = local_240;
      local_238 = (float)dVar42;
      fStack_234 = (float)dVar43;
      FVar12._4_4_ = fStack_234;
      FVar12._0_4_ = local_238;
      SWindow::ReshapeWindow(pSVar16,FVar12,FVar11);
    }
  }
  if ((local_2a8.Object == (SWindow *)0x0) &&
     (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar37)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_19c = 0;
  local_230 = (float)(uint)this->_padding_;
  fStack_22c = (float)*(uint *)((longlong)&this->_padding_ + 4);
  TVar13._4_4_ = fStack_22c;
  TVar13.TypedValue = local_230;
  FVar26 = SWindow::GetWindowSizeFromClientSize
                     (local_2a8.Object,(FDeprecateVector2DParameter)local_f0,TVar13);
  dVar39 = (double)(float)*(undefined8 *)FVar26;
  dVar40 = (double)(float)((ulonglong)*(undefined8 *)FVar26 >> 0x20);
  local_198 = dVar39;
  dStack_190 = dVar40;
  if ((local_2a8.Object == (SWindow *)0x0) &&
     (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar37)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar30 = &(local_2a8.Object)->ViewportSize;
  if (*(float *)pFVar30 == 0.0) {
    pFVar30 = &(local_2a8.Object)->Size;
  }
  local_228 = *pFVar30;
  FVar26 = local_228;
  fVar2 = (float)local_228;
  fVar3 = local_228._4_4_;
  dVar41 = (double)(float)local_228;
  dVar38 = (double)local_228._4_4_;
  local_1e8 = dVar41;
  dStack_1e0 = dVar38;
  local_228 = FVar26;
  if ((local_2a8.Object == (SWindow *)0x0) &&
     (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar37)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar37 = !(local_2a8.Object)->bIsMirrorWindow;
  pdVar31 = (double *)local_208;
  if (bVar37) {
    pdVar31 = &local_198;
  }
  dVar42 = *pdVar31;
  dVar43 = pdVar31[1];
  pdVar31 = &local_290;
  if (bVar37) {
    pdVar31 = &local_1e8;
  }
  dVar8 = *pdVar31;
  dVar17 = pdVar31[1];
  if (((dVar41 != dVar39) || (dVar38 != dVar40)) || (TVar21 != TVar22)) {
    pFVar32 = FSlateApplicationBase::Get();
    pFVar5 = (pFVar32->Renderer).Object;
    pcVar4 = *(code **)(pFVar5->_padding_ + 0x40);
    pTVar33 = TSharedPtr<SWindow,1>::ToSharedRef(&local_2a8,&local_d8);
    (*pcVar4)(pFVar5,pTVar33,(longlong)dVar8,(longlong)dVar17);
    (**(code **)(this->_padding_ + 0x18))(this,(longlong)fVar2,(longlong)fVar3,TVar21);
  }
  if ((dVar8 != dVar42) || (dVar17 != dVar43)) {
    pFVar32 = FSlateApplicationBase::Get();
    pFVar5 = (pFVar32->Renderer).Object;
    pcVar4 = *(code **)(pFVar5->_padding_ + 0x40);
    pTVar33 = TSharedPtr<SWindow,1>::ToSharedRef(&local_2a8,local_c8);
    (*pcVar4)(pFVar5,pTVar33,(longlong)dVar8,(longlong)dVar17);
  }
  UCanvas::UpdateAllCanvasSafeZoneData();
LAB_1486eb2fd:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a8.SharedReferenceCount.ReferenceController);
  return;
}

// ResizeViewport @ 1486eb570

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FSceneViewport::ResizeViewport(FSceneViewport *this,uint param_1,uint param_2,Type param_3)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  float fVar10;
  ulonglong in_stack_ffffffffffffff70;
  double local_88;
  double local_80;
  FDestructionSentinel local_78;
  FReadAccessScope local_60 [2];
  
  if ((param_1 != 0) && (uVar8 = (ulonglong)param_1, param_2 != 0)) {
    if (((uint)GRHIGlobals.MaxTextureDimensions.Value < param_1) ||
       ((uint)GRHIGlobals.MaxTextureDimensions.Value < param_2)) {
      fVar10 = (float)uVar8;
      if (param_2 < param_1) {
        uVar8 = (ulonglong)(uint)GRHIGlobals.MaxTextureDimensions.Value;
        param_2 = (uint)(longlong)
                        ((float)(uint)GRHIGlobals.MaxTextureDimensions.Value /
                        (fVar10 / (float)param_2));
      }
      else {
        uVar8 = (ulonglong)
                ((float)(uint)GRHIGlobals.MaxTextureDimensions.Value * (fVar10 / (float)param_2));
        param_2 = GRHIGlobals.MaxTextureDimensions.Value;
      }
    }
    if (5 < (byte)LogViewport._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogViewport);
    }
    this->bIsResizing = true;
    (**(code **)(this->_padding_ + 0x1e8))
              (&this->_padding_,0,uVar8 & 0xffffffff,param_2,param_3,
               in_stack_ffffffffffffff70 & 0xffffffffffffff00);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FCoreDelegates::OnSafeFrameChangedEvent,(FWriteAccessScope *)&local_78);
    bVar4 = false;
    FCoreDelegates::OnSafeFrameChangedEvent._28_4_ =
         FCoreDelegates::OnSafeFrameChangedEvent._28_4_ + 1;
    plVar9 = (longlong *)0x0;
    uVar6 = FCoreDelegates::OnSafeFrameChangedEvent._16_4_ - 1;
    if (-1 < (int)uVar6) {
      lVar7 = (longlong)(int)uVar6 << 4;
      bVar4 = false;
      do {
        uVar5 = 0;
        if ((int)uVar6 < (int)FCoreDelegates::OnSafeFrameChangedEvent._16_4_) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (((*(int *)(lVar7 + 8 + FCoreDelegates::OnSafeFrameChangedEvent._8_8_) == 0) ||
            (*(longlong **)(lVar7 + FCoreDelegates::OnSafeFrameChangedEvent._8_8_) ==
             (longlong *)0x0)) ||
           (cVar3 = (**(code **)(**(longlong **)
                                   (lVar7 + FCoreDelegates::OnSafeFrameChangedEvent._8_8_) + 0x68))
                              (), cVar3 == '\0')) {
          bVar4 = true;
        }
        lVar7 = lVar7 + -0x10;
        uVar6 = uVar6 - 1;
      } while (-1 < (int)uVar6);
    }
    FCoreDelegates::OnSafeFrameChangedEvent._28_4_ =
         FCoreDelegates::OnSafeFrameChangedEvent._28_4_ + -1;
    if (bVar4) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &FCoreDelegates::OnSafeFrameChangedEvent,false);
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (this->_padding_ != 0) {
      FViewport::Invalidate((FViewport *)&this->_padding_);
      lVar7 = (**(code **)(*(longlong *)this->_padding_ + 0x30))();
      if (lVar7 != 0) {
        FViewport::Draw((FViewport *)&this->_padding_,true);
      }
    }
    bVar4 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSceneViewportResizeDel)
    ;
    if (bVar4) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnSceneViewportResizeDel,local_60);
      if (*(int *)&(this->OnSceneViewportResizeDel).field_0x10 != 0) {
        plVar9 = *(longlong **)&(this->OnSceneViewportResizeDel).field_0x8;
      }
      local_88 = (double)(uVar8 & 0xffffffff);
      local_80 = (double)param_2;
      (**(code **)(*plVar9 + 0x60))(plVar9,&local_88);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (local_60);
    }
    this->bIsResizing = false;
  }
  return;
}

// SetDebugCanvas @ 1486ee1c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FSceneViewport::SetDebugCanvas(FSceneViewport *this,TSharedPtr<SDebugCanvas,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  (this->DebugCanvas).Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->DebugCanvas).WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->DebugCanvas).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (this->DebugCanvas).WeakReferenceCount.ReferenceController = pTVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetFixedViewportSize @ 1486ee490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FSceneViewport::SetFixedViewportSize(FSceneViewport *this,uint param_1,uint param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  Type TVar5;
  FSlateApplication *pFVar6;
  TSharedRef<SViewport,1> *pTVar7;
  SViewport *pSVar8;
  SViewport *pSVar9;
  SViewport *pSVar10;
  bool bVar11;
  TSharedPtr<SViewport,1> local_88;
  SWindow *local_78;
  TReferenceControllerBase<1> *local_70;
  SWidget *local_68;
  TReferenceControllerBase<1> *local_60;
  SViewport *local_58;
  TReferenceControllerBase<1> *local_50;
  SViewport *local_48;
  SViewport *local_40;
  TSharedRef<SViewport,1> local_38;
  
  if ((this->ViewportWidget).Object == (SViewport *)0x0) {
    return;
  }
  pTVar1 = (this->ViewportWidget).WeakReferenceCount.ReferenceController;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    return;
  }
  if ((int)pTVar1->SharedReferenceCount < 1) {
    return;
  }
  if ((param_1 != 0) && (param_2 != 0)) {
    this->bForceViewportSize = true;
    pFVar6 = FSlateApplication::Get();
    local_88.SharedReferenceCount.ReferenceController =
         (this->ViewportWidget).WeakReferenceCount.ReferenceController;
    local_88.Object = (SViewport *)0x0;
    pcVar2 = *(code **)(*(longlong *)pFVar6 + 0x28);
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          local_88.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          goto LAB_1486ee546;
        }
        LOCK();
        aVar4 = (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        bVar11 = aVar3 == aVar4;
        if (bVar11) {
          (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)aVar3 + 1);
          aVar4 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar4;
      } while (!bVar11);
      local_88.Object = (this->ViewportWidget).Object;
    }
LAB_1486ee546:
    pTVar7 = TSharedPtr<SViewport,1>::ToSharedRef(&local_88,&local_38);
    local_58 = pTVar7->Object;
    local_50 = (pTVar7->SharedReferenceCount).ReferenceController;
    if (local_50 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_50->SharedReferenceCount = (atomic<int>)((int)local_50->SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar2)(pFVar6,&local_78,&local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
    local_60 = local_70;
    if (local_78 != (SWindow *)0x0) {
      pcVar2 = *(code **)(this->_padding_ + 0x18);
      if ((local_78 == (SWindow *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      TVar5 = SWindow::GetWindowMode(local_78);
      (*pcVar2)(this,param_1,param_2,TVar5);
      local_60 = local_70;
    }
    goto LAB_1486ee70c;
  }
  this->bForceViewportSize = false;
  pFVar6 = FSlateApplication::Get();
  pSVar9 = (SViewport *)(this->ViewportWidget).WeakReferenceCount.ReferenceController;
  pSVar10 = (SViewport *)0x0;
  pcVar2 = *(code **)(*(longlong *)pFVar6 + 0x28);
  pSVar8 = pSVar9;
  if (pSVar9 == (SViewport *)0x0) {
LAB_1486ee645:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    pSVar9 = pSVar8;
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    aVar3 = *(atomic<int> *)&pSVar9->_padding_;
    do {
      pSVar8 = pSVar10;
      if (aVar3 == (atomic<int>)0x0) goto LAB_1486ee645;
      LOCK();
      aVar4 = *(atomic<int> *)&pSVar9->_padding_;
      bVar11 = aVar3 == aVar4;
      if (bVar11) {
        *(atomic<int> *)&pSVar9->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar11);
    pSVar10 = (this->ViewportWidget).Object;
    pSVar8 = pSVar9;
    if (pSVar10 == (SViewport *)0x0) goto LAB_1486ee645;
  }
  if (pSVar9 != (SViewport *)0x0) {
    LOCK();
    *(int *)&pSVar9->_padding_ = (int)pSVar9->_padding_ + 1;
    UNLOCK();
  }
  local_48 = pSVar10;
  local_40 = pSVar9;
  (*pcVar2)(pFVar6,&local_68,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (local_68 != (SWidget *)0x0) {
    if ((local_68 == (SWidget *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    SWidget::Invalidate(local_68,PaintAndVolatility);
  }
LAB_1486ee70c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
  return;
}

// SetMouse @ 1486ee960

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FSceneViewport::SetMouse(FSceneViewport *this,int param_1,int param_2)

{
  TIntPoint<int>_u_0_s_0 TVar1;
  undefined8 *puVar2;
  FSlateApplication *pFVar3;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined8 local_res8;
  undefined8 local_18;
  undefined8 local_10;
  
  puVar2 = (undefined8 *)(**(code **)(this->_padding_ + 0x28))(this,&local_res8);
  TVar1 = (this->CachedCursorPos).field0_0x0._s_0;
  local_res8._0_4_ = (float)TVar1.X;
  local_res8._0_4_ = ((float)param_1 / (float)(int)*puVar2) * (float)local_res8;
  fVar6 = (float)local_res8 * (this->CachedGeometry).Position.field0_0x0._s_0.Y;
  auVar4 = ZEXT416((uint)fVar6);
  local_res8._4_4_ = (float)TVar1.Y;
  fVar5 = ((float)param_2 / (float)(int)((ulonglong)*puVar2 >> 0x20)) * local_res8._4_4_;
  local_res8._4_4_ =
       fVar5 * (this->CachedGeometry).AccumulatedRenderTransform.M.M[0][1] + fVar6 +
       (this->CachedGeometry).AccumulatedRenderTransform.M.M[1][1];
  local_res8._0_4_ =
       fVar5 * (this->CachedGeometry).AccumulatedRenderTransform.M.M[0][0] +
       (float)local_res8 * (this->CachedGeometry).Position.field0_0x0._s_0.X +
       (this->CachedGeometry).AccumulatedRenderTransform.M.M[1][0];
  pFVar3 = FSlateApplication::Get();
  auVar7._0_8_ = (double)local_res8._4_4_ + __real_3fe0000000000000;
  auVar7._8_8_ = 0;
  auVar7 = roundpd(auVar4,auVar7,1);
  local_10 = auVar7._0_8_;
  auVar4._0_8_ = (double)(float)local_res8 + __real_3fe0000000000000;
  auVar4._8_8_ = 0;
  auVar7 = roundpd(extraout_XMM0,auVar4,1);
  local_18 = auVar7._0_8_;
  (**(code **)(*(longlong *)&pFVar3->field_0x198 + 0x1d0))(&pFVar3->field_0x198,&local_18);
  local_res8 = CONCAT44(param_2,param_1);
  *(undefined8 *)&(this->KeyStateMap).field_0x48 = local_res8;
  return;
}

// SetPreCaptureMousePosFromSlateCursor @ 1486ef090

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FSceneViewport::SetPreCaptureMousePosFromSlateCursor(FSceneViewport *this)

{
  FSlateApplication *pFVar1;
  float *pfVar2;
  undefined1 local_res10 [24];
  
  pFVar1 = FSlateApplication::Get();
  pfVar2 = (float *)(**(code **)(*(longlong *)pFVar1 + 0x68))(pFVar1,local_res10);
  *(ulonglong *)((longlong)&(this->CachedGeometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4)
       = CONCAT44((int)ROUND(pfVar2[1] + pfVar2[1] + __real_3f000000) >> 1,
                  (int)ROUND(*pfVar2 + *pfVar2 + __real_3f000000) >> 1);
  return;
}

// SetRenderTargetTextureRenderThread @ 1486ef280

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FSceneViewport::SetRenderTargetTextureRenderThread
          (FSceneViewport *this,TRefCountPtr<FRHITexture> *param_1)

{
  uint uVar1;
  uint uVar2;
  FRHITexture *this_00;
  FRHITexture *this_01;
  FSlateRenderTargetRHI *this_02;
  FRHIResource *this_03;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  FRHITexture *local_res8;
  
  bVar4 = IsInRenderingThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SceneViewport.cpp"
                       ,0x6c6,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_00 = param_1->Reference;
  this_01 = (this->RenderTargetTextureRenderThreadRHI).Reference;
  if (this_01 != this_00) {
    (this->RenderTargetTextureRenderThreadRHI).Reference = this_00;
    if (this_00 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    if (this_01 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  this_02 = this->RenderThreadSlateTexture;
  if (param_1->Reference != (FRHITexture *)0x0) {
    lVar5 = (**(code **)(param_1->Reference->_padding_ + 0x20))();
    uVar1 = *(uint *)(lVar5 + 0x28);
    lVar5 = (**(code **)(param_1->Reference->_padding_ + 0x20))();
    local_res8 = (this->RenderTargetTextureRenderThreadRHI).Reference;
    uVar2 = *(uint *)(lVar5 + 0x24);
    if (local_res8 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_res8);
    }
    FSlateRenderTargetRHI::SetRHIRef(this_02,(FRHITexture *)&local_res8,uVar2,uVar1);
    return;
  }
  bVar4 = IsInRenderingThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SlateTextures.cpp"
                       ,0x126,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_03 = (FRHIResource *)this_02->_padding_;
  if (this_03 != (FRHIResource *)0x0) {
    this_02->_padding_ = 0;
    FRHIResource::Release(this_03);
  }
  this_02->Width = 0;
  this_02->Height = 0;
  return;
}

// SetRequiresVsync @ 1486ef530

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FSceneViewport::SetRequiresVsync(FSceneViewport *this,bool param_1)

{
  *(bool *)((longlong)&(this->MouseDelta).field0_0x0 + 2) = param_1;
  return;
}

// SetSoftwareCursorPosition @ 1486efa50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FSceneViewport::SetSoftwareCursorPosition(FSceneViewport *this,TVector2<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->PreCaptureCursorPos).field0_0x0 = (TIntPoint<int>_u_0)(param_1->field0_0x0)._s_0.X;
  (this->SoftwareCursorPosition).field0_0x0._s_0.X = dVar1;
  return;
}

// SetUserFocus @ 1486f0620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall FSceneViewport::SetUserFocus(FSceneViewport *this,bool param_1)

{
  code *pcVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  SViewport *pSVar5;
  SViewport *pSVar6;
  SViewport *pSVar7;
  bool bVar8;
  TSharedRef<SWidget,1> local_18;
  
  if (!param_1) {
    FReply::ClearUserFocus((FReply *)&this->_padding_,SetDirectly,true);
    return param_1;
  }
  pSVar6 = (this->ViewportWidget).Object;
  pSVar7 = (SViewport *)0x0;
  pSVar5 = pSVar6;
  if (pSVar6 != (SViewport *)0x0) {
    iVar2 = (int)pSVar6->_padding_;
    do {
      pSVar5 = pSVar7;
      if (iVar2 == 0) goto LAB_1486f0675;
      LOCK();
      iVar4 = (int)pSVar6->_padding_;
      bVar8 = iVar2 == iVar4;
      if (bVar8) {
        *(int *)&pSVar6->_padding_ = iVar2 + 1;
        iVar4 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar4;
    } while (!bVar8);
    pSVar7 = (SViewport *)(this->DebugCanvasDrawer).SharedReferenceCount.ReferenceController;
    pSVar5 = pSVar6;
    if (pSVar7 != (SViewport *)0x0) goto LAB_1486f06c6;
  }
LAB_1486f0675:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x416,L"");
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x26c,L"");
  pSVar6 = pSVar5;
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
LAB_1486f06c6:
  if (pSVar6 != (SViewport *)0x0) {
    LOCK();
    *(int *)&pSVar6->_padding_ = (int)pSVar6->_padding_ + 1;
    UNLOCK();
  }
  local_18.Object = (SWidget *)pSVar7;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pSVar6;
  FReply::SetUserFocus((FReply *)&this->_padding_,&local_18,SetDirectly,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return param_1;
}

// SetViewportSize @ 1486f0750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSceneViewport::SetViewportSize(FSceneViewport *this,uint param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  FSlateRenderer *pFVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  undefined4 uVar7;
  FSlateApplication *pFVar8;
  FDeprecateSlateVector2D FVar9;
  FSlateApplicationBase *pFVar10;
  FDeprecateSlateVector2D *pFVar11;
  SViewport *pSVar12;
  SViewport *pSVar13;
  SViewport *pSVar14;
  bool bVar15;
  FDeprecateSlateVector2D local_res8;
  SWindow *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  SViewport *local_68;
  SViewport *local_60;
  SWindow *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  
  pFVar8 = FSlateApplication::Get();
  pSVar13 = (SViewport *)(this->ViewportWidget).WeakReferenceCount.ReferenceController;
  pSVar14 = (SViewport *)0x0;
  pcVar3 = *(code **)(*(longlong *)pFVar8 + 0x28);
  pSVar12 = pSVar13;
  if (pSVar13 != (SViewport *)0x0) {
    aVar5 = *(atomic<int> *)&pSVar13->_padding_;
    do {
      pSVar12 = pSVar14;
      if (aVar5 == (atomic<int>)0x0) goto LAB_1486f07b5;
      LOCK();
      aVar6 = *(atomic<int> *)&pSVar13->_padding_;
      bVar15 = aVar5 == aVar6;
      if (bVar15) {
        *(atomic<int> *)&pSVar13->_padding_ = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar15);
    pSVar14 = (this->ViewportWidget).Object;
    pSVar12 = pSVar13;
    if (pSVar14 != (SViewport *)0x0) goto LAB_1486f0806;
  }
LAB_1486f07b5:
  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x416,L"");
  if (bVar15) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x26c,L"");
  pSVar13 = pSVar12;
  if (bVar15) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_1486f0806:
  if (pSVar13 != (SViewport *)0x0) {
    LOCK();
    *(int *)&pSVar13->_padding_ = (int)pSVar13->_padding_ + 1;
    UNLOCK();
  }
  local_68 = pSVar14;
  local_60 = pSVar13;
  (*pcVar3)(pFVar8,&local_78,&local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar13);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (local_78 != (SWindow *)0x0) {
    if ((local_78 == (SWindow *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(float *)&local_78->ViewportSize = (float)param_1;
    *(float *)&(local_78->ViewportSize).field_0x4 = (float)param_2;
    if ((local_78 == (SWindow *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (local_78->bIsMirrorWindow) {
      FVar9 = SWindow::GetSizeInScreen(local_78);
    }
    else {
      pFVar11 = &local_78->ViewportSize;
      if (*(float *)pFVar11 == 0.0) {
        pFVar11 = &local_78->Size;
      }
      local_res8 = *pFVar11;
      FVar9 = (FDeprecateSlateVector2D)&local_res8;
    }
    fVar1 = *(float *)FVar9;
    fVar2 = *(float *)((longlong)FVar9 + 4);
    pFVar10 = FSlateApplicationBase::Get();
    pFVar4 = (pFVar10->Renderer).Object;
    pcVar3 = *(code **)(pFVar4->_padding_ + 0x40);
    if ((local_78 == (SWindow *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar15)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_58 = local_78;
    pTStack_50 = pTStack_70;
    if (pTStack_70 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_70->SharedReferenceCount = (atomic<int>)((int)pTStack_70->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_78 == (SWindow *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar15)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (*pcVar3)(pFVar4,&local_58,(longlong)fVar1,(longlong)fVar2);
    pcVar3 = *(code **)(this->_padding_ + 0x18);
    if ((local_78 == (SWindow *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((local_78->NativeWindow).Object == (FGenericWindow *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar7 = (**(code **)(((local_78->NativeWindow).Object)->_padding_ + 0x68))();
    (*pcVar3)(this,param_1,param_2,uVar7);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  return;
}

// ShowCursor @ 1486f1040

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FSceneViewport::ShowCursor(FSceneViewport *this,bool param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  TIntPoint<int>_u_0 *pTVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  TIntPoint<int>_u_0 local_res20;
  
  cVar1 = *(char *)&(this->MouseDelta).field0_0x0;
  if (param_1) {
    if (cVar1 == '\0') {
      if (*(char *)((longlong)&(this->SoftwareCursorPosition).field0_0x0 + 8) == '\0') {
        pTVar5 = (TIntPoint<int>_u_0 *)
                 ((longlong)&(this->CachedGeometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4)
        ;
      }
      else {
        iVar2 = *(int *)((longlong)&this->_padding_ + 4);
        iVar4 = (int)this->_padding_;
        dVar7 = __real_3ff0000000000000 / (double)*(float *)&(this->CachedGeometry).Size;
        iVar3 = (int)(dVar7 * (double)(this->PreCaptureCursorPos).field0_0x0);
        if (iVar3 < iVar4) {
          iVar4 = iVar3;
        }
        iVar3 = (int)(dVar7 * (this->SoftwareCursorPosition).field0_0x0._s_0.X);
        if (iVar3 < iVar2) {
          iVar2 = iVar3;
        }
        iVar3 = 0;
        if (0 < iVar4) {
          iVar3 = iVar4;
        }
        iVar4 = 0;
        if (0 < iVar2) {
          iVar4 = iVar2;
        }
        pTVar5 = &local_res20;
        fVar6 = (float)iVar4 * (this->CachedGeometry).AccumulatedRenderTransform.M.M[0][0] +
                (float)iVar3 * (this->CachedGeometry).Position.field0_0x0._s_0.X +
                (this->CachedGeometry).AccumulatedRenderTransform.M.M[1][0];
        fVar8 = (float)iVar4 * (this->CachedGeometry).AccumulatedRenderTransform.M.M[0][1] +
                (float)iVar3 * (this->CachedGeometry).Position.field0_0x0._s_0.Y +
                (this->CachedGeometry).AccumulatedRenderTransform.M.M[1][1];
        local_res20._s_0.X = (int)ROUND(fVar6 + fVar6 + __real_3f000000) >> 1;
        local_res20._s_0.Y = (int)ROUND(fVar8 + fVar8 + __real_3f000000) >> 1;
      }
      FReply::SetMousePos((FReply *)&this->_padding_,(TIntPoint<int> *)&pTVar5->_s_0);
      (**(code **)(this->_padding_ + 0x170))(this);
      *(undefined1 *)&(this->MouseDelta).field0_0x0 = 1;
      return;
    }
  }
  else if (cVar1 != '\0') {
    (**(code **)(this->_padding_ + 0x170))();
    *(undefined1 *)&(this->MouseDelta).field0_0x0 = 0;
  }
  return;
}

// ShowSoftwareCursor @ 1486f1320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FSceneViewport::ShowSoftwareCursor(FSceneViewport *this,bool param_1)

{
  *(bool *)((longlong)&(this->SoftwareCursorPosition).field0_0x0 + 8) = param_1;
  return;
}

// SwapStatCommands @ 1486f23d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FSceneViewport::SwapStatCommands(FSceneViewport *this,FSceneViewport *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  FString *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  plVar2 = (longlong *)this->_padding_;
  plVar3 = (longlong *)param_1->_padding_;
  if ((plVar2 == (longlong *)0x0) || (plVar3 == (longlong *)0x0)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ClientA && ClientB",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SceneViewport.cpp"
                       ,0x7d9,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  puVar7 = (undefined8 *)(**(code **)(*plVar2 + 0x170))(plVar2);
  lVar8 = (**(code **)(*plVar3 + 0x170))(plVar3);
  if ((puVar7 != (undefined8 *)0x0) && (lVar8 != 0)) {
    iVar1 = *(int *)(puVar7 + 1);
    pFVar4 = (FString *)*puVar7;
    local_18.Data = (FScriptContainerElement *)0x0;
    local_10 = iVar1;
    if (iVar1 == 0) {
      local_c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar1,0,&local_18,iVar1,&local_c);
      ConstructItems<FString,FString,int>(local_18.Data,pFVar4,iVar1);
    }
    (**(code **)(*plVar2 + 0x178))(plVar2,lVar8);
    (**(code **)(*plVar3 + 0x178))(plVar3,&local_18);
    DestructItems<FString,int>((FString *)local_18.Data,local_10);
    if (local_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data);
    }
  }
  return;
}

// Tick @ 1486f25f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FSceneViewport::Tick(FSceneViewport *this,FGeometry *param_1,double param_2,float param_3)

{
  FRHITexture *pFVar1;
  longlong *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar3;
  FSlateApplication *pFVar4;
  
  FGeometry::operator=((FGeometry *)&(this->CurrentReplyState).MouseCaptor,param_1);
  (*(code *)(this[-1].ViewportWidget.Object)->_padding_)(&this[-1].ViewportWidget,param_3);
  pFVar1 = this[-1].RenderTargetTextureRenderThreadRHI.Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x48))(pFVar1,param_3);
  }
  if (*(longlong **)&this[-1].OnSceneViewportResizeDel != (longlong *)0x0) {
    lVar3 = (**(code **)(**(longlong **)&this[-1].OnSceneViewportResizeDel + 0x30))();
    if (lVar3 != 0) {
      lVar3 = (**(code **)(**(longlong **)&this[-1].OnSceneViewportResizeDel + 0x30))();
      if (*(longlong *)(lVar3 + 600) != 0) {
        pFVar4 = FSlateApplication::Get();
        plVar2 = *(longlong **)&pFVar4->field_0x60;
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x168);
        lVar3 = (**(code **)(**(longlong **)&this[-1].OnSceneViewportResizeDel + 0x30))();
                    /* WARNING: Could not recover jumptable at 0x0001486f26ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(plVar2,*(undefined8 *)(lVar3 + 600));
        return;
      }
    }
  }
  pFVar4 = FSlateApplication::Get();
                    /* WARNING: Could not recover jumptable at 0x0001486f26c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&pFVar4->field_0x60 + 0x168))(*(longlong **)&pFVar4->field_0x60,0);
  return;
}

// UpdateCachedCursorPos @ 1486f5260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FSceneViewport::UpdateCachedCursorPos
          (FSceneViewport *this,FGeometry *param_1,FPointerEvent *param_2)

{
  code *pcVar1;
  TIntPoint<int>_u_0 TVar2;
  bool bVar3;
  IPlatformInputDeviceMapper *pIVar4;
  TTransform2<float> *pTVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  float local_48;
  float fStack_44;
  int local_40;
  int local_3c;
  TTransform2<float> local_30;
  
  pIVar4 = IPlatformInputDeviceMapper::Get();
  (**(code **)(pIVar4->_padding_ + 0x68))(pIVar4,&local_40,(int)param_2->_padding_);
  if (local_40 == FSlateApplicationBase::SlateAppPrimaryPlatformUser.InternalId) {
    pTVar5 = Inverse<TTransform2<float>_>(&local_30,&param_1->AccumulatedRenderTransform);
    fStack_44 = SUB84(param_2->ScreenSpacePosition,4);
    local_48 = SUB84(param_2->ScreenSpacePosition,0);
    dVar10 = (double)(this->CachedGeometry).Scale;
    dVar11 = (double)(fStack_44 * (pTVar5->M).M[1][0] + local_48 * (pTVar5->M).M[0][0] +
                     (pTVar5->Trans).field0_0x0._s_0.X) * dVar10;
    dVar10 = (double)(local_48 * (pTVar5->M).M[0][1] + fStack_44 * (pTVar5->M).M[1][1] +
                     (pTVar5->Trans).field0_0x0._s_0.Y) * dVar10;
    if (__real_41dfffffffc00000 <= dVar11) {
      dVar11 = __real_41dfffffffc00000;
    }
    if (__real_41dfffffffc00000 <= dVar10) {
      dVar10 = __real_41dfffffffc00000;
    }
    if (dVar11 <= __real_c1e0000000000000) {
      dVar11 = __real_c1e0000000000000;
    }
    if (dVar10 <= __real_c1e0000000000000) {
      dVar10 = __real_c1e0000000000000;
    }
    lVar9 = (longlong)ROUND(dVar11 + dVar11 + __real_3fe0000000000000) >> 1;
    iVar8 = (int)lVar9;
    lVar7 = (longlong)ROUND(dVar10 + dVar10 + __real_3fe0000000000000) >> 1;
    if (lVar9 != iVar8) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar6 = (int)lVar7;
    local_3c = iVar8;
    if (lVar7 != iVar6) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    TVar2._s_0.Y = iVar6;
    TVar2._s_0.X = local_3c;
    (this->CachedCursorPos).field0_0x0 = TVar2;
  }
  return;
}

// UpdateCachedGeometry @ 1486f5400

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FSceneViewport::UpdateCachedGeometry(FSceneViewport *this,FGeometry *param_1)

{
  FGeometry::operator=(&this->CachedGeometry,param_1);
  return;
}

// UpdateModifierKeys @ 1486f5a90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FSceneViewport::UpdateModifierKeys(FSceneViewport *this,FPointerEvent *param_1)

{
  TMap<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_> *this_00;
  bool local_res8 [8];
  
  this_00 = &this->KeyStateMap;
  local_res8[0] = (bool)((byte)param_1->_padding_ >> 4 & 1);
  TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_>::
  Emplace<FKey_const_&,bool>
            ((TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_> *)
             this_00,&EKeys::LeftAlt,local_res8);
  local_res8[0] = (bool)((byte)param_1->_padding_ >> 5 & 1);
  TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_>::
  Emplace<FKey_const_&,bool>
            ((TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_> *)
             this_00,&EKeys::RightAlt,local_res8);
  local_res8[0] = (bool)((byte)param_1->_padding_ >> 2 & 1);
  TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_>::
  Emplace<FKey_const_&,bool>
            ((TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_> *)
             this_00,&EKeys::LeftControl,local_res8);
  local_res8[0] = (bool)((byte)param_1->_padding_ >> 3 & 1);
  TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_>::
  Emplace<FKey_const_&,bool>
            ((TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_> *)
             this_00,&EKeys::RightControl,local_res8);
  local_res8[0] = (bool)((byte)param_1->_padding_ & 1);
  TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_>::
  Emplace<FKey_const_&,bool>
            ((TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_> *)
             this_00,&EKeys::LeftShift,local_res8);
  local_res8[0] = (bool)((byte)param_1->_padding_ >> 1 & 1);
  TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_>::
  Emplace<FKey_const_&,bool>
            ((TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_> *)
             this_00,&EKeys::RightShift,local_res8);
  local_res8[0] = (bool)((byte)param_1->_padding_ >> 6 & 1);
  TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_>::
  Emplace<FKey_const_&,bool>
            ((TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_> *)
             this_00,&EKeys::LeftCommand,local_res8);
  local_res8[0] = (bool)((byte)param_1->_padding_ >> 7);
  TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_>::
  Emplace<FKey_const_&,bool>
            ((TMapBase<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_> *)
             this_00,&EKeys::RightCommand,local_res8);
  return;
}

// UpdateViewportRHI @ 1486f6f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FSceneViewport::UpdateViewportRHI
          (FSceneViewport *this,bool param_1,uint param_2,uint param_3,Type param_4,
          EPixelFormat param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  FRHIResource *this_00;
  FRHIResource *this_01;
  FRHITexture *pFVar4;
  code *pcVar5;
  TIntPoint<int>_u_0 TVar6;
  int iVar7;
  atomic<int> aVar8;
  bool bVar9;
  char cVar10;
  bool bVar11;
  atomic<int> aVar12;
  int iVar13;
  uint uVar14;
  IStereoRenderTargetManager *pIVar15;
  TSharedPtr<FGenericWindow,1> *this_02;
  FGenericWindow *pFVar16;
  SViewport *pSVar17;
  FDeprecateSlateVector2D FVar18;
  FDeprecateSlateVector2D FVar19;
  FSlateApplication *pFVar20;
  undefined8 *puVar21;
  FRenderCommandList *this_03;
  FCommandList *this_04;
  FRenderCommandTag *pFVar22;
  SViewport *pSVar23;
  FRenderResource *pFVar24;
  code **ppcVar25;
  uint uVar26;
  SViewport *pSVar27;
  ulonglong uVar28;
  SViewport *pSVar29;
  TReferenceControllerBase<1> *pTVar30;
  longlong lVar31;
  float fVar32;
  undefined1 auStackY_1f8 [32];
  undefined4 local_1c8;
  undefined4 local_1c4;
  float local_1c0;
  float fStack_1bc;
  SWindow *local_1b8;
  TReferenceControllerBase<1> *local_1b0;
  uint local_1a8;
  uint local_1a4;
  FRenderCommandFence local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  longlong local_188;
  TReferenceControllerBase<1> *pTStack_180;
  TVector2<double>_u_0 local_178;
  SViewport *local_168;
  SViewport *local_160;
  TVector2<double>_u_0 local_150;
  SViewport *local_140;
  SViewport *local_138;
  TReferenceControllerBase<1> *local_130;
  SViewport *local_128;
  longlong local_118;
  TReferenceControllerBase<1> *pTStack_110;
  FDestructionSentinel local_108 [2];
  TSharedPtr<FGenericWindow,1> local_d8;
  undefined1 local_c8 [8];
  TReferenceControllerBase<1> *local_c0;
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  undefined1 local_88 [40];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_1a8 = param_3;
  local_1a4 = param_2;
  bVar9 = IsInGameThread();
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SceneViewport.cpp"
                         ,0x6d5,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (*(FDebugCanvasDrawer **)&this->bIsSoftwareCursorVisible != (FDebugCanvasDrawer *)0x0) {
    FDebugCanvasDrawer::ReleaseInternalTexture
              (*(FDebugCanvasDrawer **)&this->bIsSoftwareCursorVisible);
  }
  pSVar17 = (SViewport *)0x0;
  pSVar23 = (SViewport *)&this->_padding_;
  if (this == (FSceneViewport *)&DAT_00000008) {
    pSVar23 = pSVar17;
  }
  BeginReleaseResource((FRenderResource *)pSVar23,(FRenderCommandPipe *)0x0);
  FlushRenderingCommands();
  *(Type *)((longlong)&this->_padding_ + 4) = param_4;
  *(uint *)&this->_padding_ = param_2;
  *(uint *)((longlong)&this->_padding_ + 4) = param_3;
  if (param_1) {
    pFVar4 = (this->RenderTargetTextureRenderThreadRHI).Reference;
    (this->RenderTargetTextureRenderThreadRHI).Reference = (FRHITexture *)0x0;
    pcVar5 = *(code **)((longlong)&(this->RTTSize).field0_0x0 + 4);
    *(undefined8 *)((longlong)&(this->RTTSize).field0_0x0 + 4) = 0;
    uVar1 = *(undefined4 *)&(this->BufferedSlateHandles).AllocatorInstance.Data;
    uVar2 = *(undefined4 *)((longlong)&(this->BufferedSlateHandles).AllocatorInstance.Data + 4);
    (this->BufferedSlateHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8[0] = (code *)0x0;
    local_90 = FMemory::Malloc(0x20,8);
    local_90[1] = pcVar5;
    *local_90 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FSceneViewport::UpdateViewportRHI'::`40'::<lambda_1>,1,1>
                         ::_vftable_;
    *(undefined4 *)(local_90 + 2) = uVar1;
    *(undefined4 *)((longlong)local_90 + 0x14) = uVar2;
    local_90[3] = (code *)pFVar4;
    if (local_90 != (code **)&DAT_fffffffffffffff8) {
      local_b8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FSceneViewport::UpdateViewportRHI'::__l40::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_03 = FRenderCommandList::GetInstanceTLS();
    if (this_03 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FSceneViewport::UpdateViewportRHI_::__l40::TSTR_DeleteSlateRenderTarget1828>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
    }
    else {
      this_04 = FRenderCommandList::GetRenderThread(this_03);
      local_88._0_8_ = local_b8[0];
      local_60 = local_90;
      local_90 = (code **)0x0;
      local_88._16_8_ = local_a8[0];
      local_88._24_8_ = local_a8[1];
      local_88._32_8_ = local_a8[2];
      local_b8[0] = (code *)0x0;
      local_58 = 2;
      pFVar22 = (FRenderCommandTag *)
                TRenderCommandTag<`FSceneViewport::UpdateViewportRHI'::__l40::TSTR_DeleteSlateRenderTarget1828>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_04,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_88,pFVar22);
      uVar28 = (ulonglong)local_58;
      if ((2 < uVar28) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar28] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_88._0_8_ != (code *)0x0) {
          ppcVar25 = (code **)(local_88 + 0x10);
          if (local_60 != (code **)0x0) {
            ppcVar25 = local_60;
          }
          (**(code **)(*ppcVar25 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar28])(local_88);
      }
    }
    if (local_b8[0] == (code *)0x0) {
      return;
    }
    ppcVar25 = local_b8 + 2;
    if (local_90 != (code **)0x0) {
      ppcVar25 = local_90;
    }
    (**(code **)(*ppcVar25 + 0x10))();
    return;
  }
  pSVar23 = (this->ViewportWidget).Object;
  pSVar29 = pSVar23;
  if (pSVar23 == (SViewport *)0x0) {
LAB_1486f7005:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar29);
    local_150._s_0.X = 0.0;
    local_150._s_0.Y = 0.0;
    local_178._s_0.X = 0.0;
    local_178._s_0.Y = 0.0;
    pSVar27 = pSVar17;
    pSVar23 = pSVar29;
  }
  else {
    aVar8 = *(atomic<int> *)&pSVar23->_padding_;
    do {
      pSVar29 = pSVar17;
      if (aVar8 == (atomic<int>)0x0) goto LAB_1486f7005;
      LOCK();
      aVar12 = *(atomic<int> *)&pSVar23->_padding_;
      bVar9 = aVar8 == aVar12;
      if (bVar9) {
        *(atomic<int> *)&pSVar23->_padding_ = (atomic<int>)((int)aVar8 + 1);
        aVar12 = aVar8;
      }
      UNLOCK();
      aVar8 = aVar12;
    } while (!bVar9);
    pSVar27 = (SViewport *)(this->DebugCanvasDrawer).SharedReferenceCount.ReferenceController;
    LOCK();
    *(atomic<int> *)&pSVar23->_padding_ =
         (atomic<int>)((int)*(atomic<int> *)&pSVar23->_padding_ + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar23);
    local_150._s_0.X = 0.0;
    local_150._s_0.Y = 0.0;
    local_178._s_0.X = 0.0;
    local_178._s_0.Y = 0.0;
    if (pSVar27 != (SViewport *)0x0) {
      pFVar20 = FSlateApplication::Get();
      pcVar5 = *(code **)(*(longlong *)pFVar20 + 0x28);
      LOCK();
      *(atomic<int> *)&pSVar23->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar23->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar23->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar23->_padding_ + 1);
      UNLOCK();
      local_140 = pSVar27;
      local_138 = pSVar23;
      (*pcVar5)(pFVar20,&local_1b8,&local_140);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar23);
      if (local_1b8 != (SWindow *)0x0) {
        if ((local_1b8 == (SWindow *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        this_02 = SWindow::GetNativeWindow(local_1b8,&local_d8);
        pFVar16 = TSharedPtr<FGenericWindow,1>::operator->(this_02);
        pSVar17 = (SViewport *)(**(code **)(pFVar16->_padding_ + 0xc0))(pFVar16);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d8.SharedReferenceCount.ReferenceController);
        if ((local_1b8 == (SWindow *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar18 = SWindow::GetPositionInScreen(local_1b8);
        local_150._s_0.X = (double)(float)*(undefined8 *)FVar18;
        local_150._s_0.Y = (double)(float)((ulonglong)*(undefined8 *)FVar18 >> 0x20);
        if ((local_1b8 == (SWindow *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar18 = SWindow::GetSizeInScreen(local_1b8);
        if ((local_1b8 == (SWindow *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar19 = SWindow::GetPositionInScreen(local_1b8);
        fVar32 = *(float *)((longlong)FVar19 + 4) + *(float *)((longlong)FVar18 + 4);
        _local_1c0 = CONCAT44(fVar32,*(float *)FVar18 + *(float *)FVar19);
        local_178._s_0.X = (double)(*(float *)FVar18 + *(float *)FVar19);
        local_178._s_0.Y = (double)fVar32;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1b0)
      ;
    }
  }
  bVar9 = (bool)(**(code **)(this->_padding_ + 0x1d8))(this);
  pIVar15 = RetrieveStereoRenderTargetManager(bVar9);
  if ((pIVar15 == (IStereoRenderTargetManager *)0x0) ||
     (cVar10 = (**(code **)((longlong)*pIVar15 + 0x70))
                         (pIVar15,&this->NumTouches,&this->NextBufferedTargetIndex,
                          &(this->OnSceneViewportResizeDel).field_0x12), cVar10 == '\0')) {
    HDRGetMetaData((EDisplayOutputFormat *)&this->NumTouches,
                   (EDisplayColorGamut *)&this->NextBufferedTargetIndex,
                   (bool *)&(this->OnSceneViewportResizeDel).field_0x12,
                   (TVector2<double> *)&local_150._s_0,(TVector2<double> *)&local_178._s_0,pSVar17);
  }
  if (this == (FSceneViewport *)&DAT_00000008) {
    pFVar24 = (FRenderResource *)0x0;
  }
  else {
    pFVar24 = (FRenderResource *)&this->_padding_;
  }
  BeginInitResource(pFVar24,(FRenderCommandPipe *)0x0);
  FRenderCommandFence::FRenderCommandFence(&local_1a0);
  FRenderCommandFence::BeginFence(&local_1a0,RenderThread);
  FRenderCommandFence::Wait(&local_1a0,false);
  pFVar20 = FSlateApplication::Get();
  plVar3 = *(longlong **)&pFVar20->field_0x60;
  if (pSVar27 != (SViewport *)0x0) {
    pFVar20 = FSlateApplication::Get();
    pcVar5 = *(code **)(*(longlong *)pFVar20 + 0x28);
    if (pSVar23 != (SViewport *)0x0) {
      LOCK();
      *(int *)&pSVar23->_padding_ = (int)pSVar23->_padding_ + 1;
      UNLOCK();
      LOCK();
      *(int *)&pSVar23->_padding_ = (int)pSVar23->_padding_ + 1;
      UNLOCK();
    }
    local_168 = pSVar27;
    local_160 = pSVar23;
    (*pcVar5)(pFVar20,local_c8,&local_168);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar23);
    cVar10 = (**(code **)(this->_padding_ + 0x38))();
    if (cVar10 != '\0') {
      local_1c8 = (undefined4)this->_padding_;
      local_1c4 = *(undefined4 *)((longlong)&this->_padding_ + 4);
      bVar9 = (bool)(**(code **)(this->_padding_ + 0x1d8))(this);
      pIVar15 = RetrieveStereoRenderTargetManager(bVar9);
      if (pIVar15 != (IStereoRenderTargetManager *)0x0) {
        (**(code **)((longlong)*pIVar15 + 0x10))(pIVar15,this,&local_1c8,&local_1c4);
      }
      local_198 = local_1c8;
      uStack_194 = local_1c4;
      TVar6._s_0.Y = local_1c4;
      TVar6._s_0.X = local_1c8;
      (this->MousePosBeforeHiddenDueToCapture).field0_0x0 = TVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c0);
  }
  cVar10 = (**(code **)(this->_padding_ + 0x38))();
  if (cVar10 != '\0') goto LAB_1486f7556;
  pFVar20 = FSlateApplication::Get();
  pSVar17 = (this->ViewportWidget).Object;
  pTVar30 = (TReferenceControllerBase<1> *)0x0;
  pcVar5 = *(code **)(*(longlong *)pFVar20 + 0x28);
  if (pSVar17 == (SViewport *)0x0) {
LAB_1486f73c6:
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    iVar7 = (int)pSVar17->_padding_;
    do {
      if (iVar7 == 0) {
        pSVar17 = (SViewport *)0x0;
        goto LAB_1486f73c6;
      }
      LOCK();
      iVar13 = (int)pSVar17->_padding_;
      bVar9 = iVar7 == iVar13;
      if (bVar9) {
        *(int *)&pSVar17->_padding_ = iVar7 + 1;
        iVar13 = iVar7;
      }
      UNLOCK();
      iVar7 = iVar13;
    } while (!bVar9);
    pTVar30 = (this->DebugCanvasDrawer).SharedReferenceCount.ReferenceController;
    if (pTVar30 == (TReferenceControllerBase<1> *)0x0) goto LAB_1486f73c6;
  }
  if (pSVar17 != (SViewport *)0x0) {
    LOCK();
    *(int *)&pSVar17->_padding_ = (int)pSVar17->_padding_ + 1;
    UNLOCK();
  }
  local_130 = pTVar30;
  local_128 = pSVar17;
  (*pcVar5)(pFVar20,&local_188,&local_130);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar17);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pcVar5 = *(code **)(*plVar3 + 0xb8);
  if ((local_188 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar21 = (undefined8 *)(*pcVar5)(plVar3,local_188);
  if (puVar21 != (undefined8 *)0x0) {
    this_00 = (FRHIResource *)*puVar21;
    this_01 = (FRHIResource *)this->_padding_;
    if (this_01 != this_00) {
      this->_padding_ = (longlong)this_00;
      if (this_00 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(this_00);
      }
      if (this_01 != (FRHIResource *)0x0) {
        FRHIResource::Release(this_01);
      }
    }
  }
  pcVar5 = *(code **)(*plVar3 + 0x40);
  if ((local_188 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_118 = local_188;
  pTStack_110 = pTStack_180;
  if (pTStack_180 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_180->SharedReferenceCount = (atomic<int>)((int)pTStack_180->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_188 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  (*pcVar5)(plVar3,&local_118,local_1a4,local_1a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_180);
LAB_1486f7556:
  if (this == (FSceneViewport *)&DAT_00000008) {
    this = (FSceneViewport *)0x0;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FViewport::ViewportResizedEvent,(FWriteAccessScope *)local_108);
  bVar9 = false;
  FViewport::ViewportResizedEvent._28_4_ = FViewport::ViewportResizedEvent._28_4_ + 1;
  uVar26 = FViewport::ViewportResizedEvent._16_4_ - 1;
  if (-1 < (int)uVar26) {
    lVar31 = (longlong)(int)uVar26 << 4;
    bVar9 = false;
    do {
      uVar14 = 0;
      if ((int)uVar26 < (int)FViewport::ViewportResizedEvent._16_4_) {
        uVar14 = ~uVar26 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (((*(int *)(lVar31 + 8 + FViewport::ViewportResizedEvent._8_8_) == 0) ||
          (plVar3 = *(longlong **)(lVar31 + FViewport::ViewportResizedEvent._8_8_),
          plVar3 == (longlong *)0x0)) ||
         (cVar10 = (**(code **)(*plVar3 + 0x68))(plVar3,this,0), cVar10 == '\0')) {
        bVar9 = true;
      }
      lVar31 = lVar31 + -0x10;
      uVar26 = uVar26 - 1;
    } while (-1 < (int)uVar26);
  }
  FViewport::ViewportResizedEvent._28_4_ = FViewport::ViewportResizedEvent._28_4_ + -1;
  if (bVar9) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FViewport::ViewportResizedEvent,false);
  }
  if (local_108[0].bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108[0].Accessor,local_108);
  }
  FRenderCommandFence::~FRenderCommandFence(&local_1a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar23);
  return;
}

// UseSeparateRenderTarget @ 1486f7e40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall FSceneViewport::UseSeparateRenderTarget(FSceneViewport *this)

{
  if (((this->KeyStateMap).field_0x1f == '\0') && ((this->KeyStateMap).field_0x20 == '\0')) {
    return false;
  }
  return true;
}

// ViewportToVirtualDesktopPixel @ 1486f7e60

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TIntPoint<int> __thiscall
FSceneViewport::ViewportToVirtualDesktopPixel(FSceneViewport *this,TVector2<double> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double *in_R8;
  float fVar4;
  float fVar5;
  double dVar6;
  
  fVar4 = (float)((double)(uint)this->_padding_ * *in_R8);
  fVar5 = (float)((double)*(uint *)((longlong)&this->_padding_ + 4) * in_R8[1]);
  dVar6 = __real_3ff0000000000000 / (double)*(float *)&(this->CachedGeometry).Size;
  fVar1 = (this->CachedGeometry).Position.field0_0x0._s_0.Y;
  fVar2 = (this->CachedGeometry).AccumulatedRenderTransform.M.M[0][1];
  fVar3 = (this->CachedGeometry).AccumulatedRenderTransform.M.M[1][1];
  *(int *)&param_1->field0_0x0 =
       (int)(longlong)
            ((double)(fVar5 * (this->CachedGeometry).AccumulatedRenderTransform.M.M[0][0] +
                      fVar4 * (this->CachedGeometry).Position.field0_0x0._s_0.X +
                     (this->CachedGeometry).AccumulatedRenderTransform.M.M[1][0]) * dVar6);
  *(int *)((longlong)&param_1->field0_0x0 + 4) =
       (int)(longlong)((double)(fVar4 * fVar1 + fVar5 * fVar2 + fVar3) * dVar6);
  return (TIntPoint<int>)(TIntPoint<int>_u_0)param_1;
}

// VirtualDesktopPixelToViewport @ 1486f7f30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TVector2<double> * __thiscall
FSceneViewport::VirtualDesktopPixelToViewport
          (FSceneViewport *this,TVector2<double> *__return_storage_ptr__,TIntPoint<int> param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  TTransform2<float> *pTVar5;
  double dVar6;
  TTransform2<float> local_20;
  
  pTVar5 = Inverse<TTransform2<float>_>
                     (&local_20,(TTransform2<float> *)&(this->CachedGeometry).Position);
  fVar1 = (pTVar5->M).M[0][1];
  fVar2 = (pTVar5->M).M[1][1];
  fVar3 = (pTVar5->Trans).field0_0x0._s_0.Y;
  uVar4 = *(uint *)((longlong)&this->_padding_ + 4);
  dVar6 = (double)*(float *)&(this->CachedGeometry).Size;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       ((double)((float)param_1.field0_0x0._4_4_ * (pTVar5->M).M[1][0] +
                 (float)param_1.field0_0x0._0_4_ * (pTVar5->M).M[0][0] +
                (pTVar5->Trans).field0_0x0._s_0.X) / (double)(uint)this->_padding_) * dVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       dVar6 * ((double)((float)param_1.field0_0x0._0_4_ * fVar1 +
                         (float)param_1.field0_0x0._4_4_ * fVar2 + fVar3) / (double)uVar4);
  return __return_storage_ptr__;
}

