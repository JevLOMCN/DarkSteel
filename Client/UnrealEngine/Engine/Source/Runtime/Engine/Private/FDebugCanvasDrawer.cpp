// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// FDebugCanvasDrawer @ 148691680

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FDebugCanvasDrawer * __thiscall FDebugCanvasDrawer::FDebugCanvasDrawer(FDebugCanvasDrawer *this)

{
  bool bVar1;
  FSlateCanvasRenderTarget *this_00;
  FEngineFontServices *this_01;
  TMulticastDelegate<void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy> *this_02;
  FSlateCanvasRenderTarget *pFVar2;
  
  this->_padding_ = (longlong)&___7ICustomSlateElement__6B_;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  pFVar2 = (FSlateCanvasRenderTarget *)0x0;
  this->_padding_ = (longlong)&_vftable__for__ICustomSlateElement__;
  (this->GameThreadCanvas).Object = (FCanvas *)0x0;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  (this->GameThreadCanvas).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->RenderThreadCanvas).Object = (FCanvas *)0x0;
  (this->RenderThreadCanvas).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this_00 = ::operator_new(0x28);
  if (this_00 != (FSlateCanvasRenderTarget *)0x0) {
    FRenderTarget::FRenderTarget((FRenderTarget *)this_00);
    this_00->RDGTexture = (FRDGTexture *)0x0;
    this_00->_padding_ = (longlong)&___7FSlateCanvasRenderTarget__6B_;
    (this_00->ViewRect).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
    (this_00->ViewRect).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
    pFVar2 = this_00;
  }
  this->RenderTarget = pFVar2;
  (this->LayerTexture).field0_0x0.DebugPtr = (UTextureRenderTarget2D *)0x0;
  this->LayerResource = (FTextureRenderTargetResource *)0x0;
  this->LayerID = 0xffffffff;
  bVar1 = FEngineFontServices::IsInitialized();
  if (bVar1) {
    this_01 = FEngineFontServices::Get();
    this_02 = FEngineFontServices::OnReleaseResources(this_01);
    TMulticastDelegateRegistration<void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
    ::AddRaw<FDebugCanvasDrawer>
              ((TMulticastDelegateRegistration<void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
                *)this_02,(FDebugCanvasDrawer *)&stack0x00000008,(pmf_cf5e6fd9 *)this);
  }
  return this;
}

// ~FDebugCanvasDrawer @ 148699f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FDebugCanvasDrawer::~FDebugCanvasDrawer(FDebugCanvasDrawer *this)

{
  atomic<int> *paVar1;
  FSlateCanvasRenderTarget *pFVar2;
  FCanvas *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FEngineFontServices *this_00;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_01;
  FRenderCommandList *this_02;
  FCommandList *this_03;
  FRenderCommandTag *pFVar7;
  undefined ***pppuVar8;
  ulonglong uVar9;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  FSharedReferencer<1> FStack_c0;
  undefined8 local_b8;
  FSharedReferencer<1> FStack_b0;
  code *local_a8 [2];
  undefined **local_98;
  FCanvas *pFStack_90;
  TReferenceControllerBase<1> *local_88;
  undefined ***local_80;
  code *local_78 [2];
  undefined **local_68;
  FCanvas *pFStack_60;
  TReferenceControllerBase<1> *local_58;
  undefined ***local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  this->_padding_ = (longlong)&_vftable__for__ICustomSlateElement__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  bVar6 = FEngineFontServices::IsInitialized();
  if (bVar6) {
    this_00 = FEngineFontServices::Get();
    this_01 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
              FEngineFontServices::OnReleaseResources(this_00);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(this_01,this);
  }
  pFVar2 = this->RenderTarget;
  if (pFVar2 != (FSlateCanvasRenderTarget *)0x0) {
    (**(code **)pFVar2->_padding_)(pFVar2,1);
  }
  ReleaseInternalTexture(this);
  pFVar3 = (this->GameThreadCanvas).Object;
  if ((pFVar3 != (FCanvas *)0x0) && ((this->RenderThreadCanvas).Object != pFVar3)) {
    local_c8 = 0;
    FStack_c0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->GameThreadCanvas != (TSharedPtr<FCanvas,1> *)&local_c8) {
      (this->GameThreadCanvas).Object = (FCanvas *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->GameThreadCanvas).SharedReferenceCount,&FStack_c0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_c0.ReferenceController);
  }
  pFVar3 = (this->RenderThreadCanvas).Object;
  if (pFVar3 != (FCanvas *)0x0) {
    pTVar4 = (this->RenderThreadCanvas).SharedReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      paVar1 = &pTVar4->SharedReferenceCount;
      LOCK();
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
      LOCK();
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
    }
    local_80 = (undefined ***)0x0;
    local_98 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FDebugCanvasDrawer::~FDebugCanvasDrawer'::`11'::<lambda_1>,1,0>
                ::_vftable_;
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FDebugCanvasDrawer::~FDebugCanvasDrawer'::__l11::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    pFStack_90 = pFVar3;
    local_88 = pTVar4;
    this_02 = FRenderCommandList::GetInstanceTLS();
    if (this_02 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FDebugCanvasDrawer::~FDebugCanvasDrawer_::__l11::TSTR_DeleteDebugRenderThreadCanvas161>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
    }
    else {
      this_03 = FRenderCommandList::GetRenderThread(this_02);
      local_78[0] = local_a8[0];
      local_50 = local_80;
      local_68 = local_98;
      pFStack_60 = pFStack_90;
      local_58 = local_88;
      local_a8[0] = (code *)0x0;
      local_48 = 2;
      pFVar7 = (FRenderCommandTag *)
               TRenderCommandTag<`FDebugCanvasDrawer::~FDebugCanvasDrawer'::__l11::TSTR_DeleteDebugRenderThreadCanvas161>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_03,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_78,pFVar7);
      uVar9 = (ulonglong)local_48;
      if ((2 < uVar9) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar9] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if (local_78[0] != (code *)0x0) {
          pppuVar8 = (undefined ***)(local_78 + 2);
          if (local_50 != (undefined ***)0x0) {
            pppuVar8 = local_50;
          }
          (*(code *)(*pppuVar8)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar9])();
      }
    }
    if (local_a8[0] != (code *)0x0) {
      pppuVar8 = &local_98;
      if (local_80 != (undefined ***)0x0) {
        pppuVar8 = local_80;
      }
      (*(code *)(*pppuVar8)[2])();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_b8 = 0;
    FStack_b0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->RenderThreadCanvas != (TSharedPtr<FCanvas,1> *)&local_b8) {
      (this->RenderThreadCanvas).Object = (FCanvas *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->RenderThreadCanvas).SharedReferenceCount,&FStack_b0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_b0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RenderThreadCanvas).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GameThreadCanvas).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ = (longlong)&___7ICustomSlateElement__6B_;
  return;
}

// operator() @ 14869eb40

void __thiscall
`FDebugCanvasDrawer::BeginRenderingCanvas'::__l5::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FSharedReferencer<1> FVar7;
  undefined8 uVar8;
  longlong lVar9;
  FSharedReferencer<1> local_50;
  undefined8 local_48;
  FSharedReferencer<1> FStack_40;
  undefined8 local_38;
  FSharedReferencer<1> local_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  local_50.ReferenceController = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  lVar9 = *(longlong *)((longlong)this + 8);
  if (local_50.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_50.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_50.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  lVar2 = *(longlong *)this;
  bVar6 = IsInRenderingThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\DebugCanvas.cpp"
                         ,0x138,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar7.ReferenceController = *(TReferenceControllerBase<1> **)(lVar2 + 0x30);
  lVar2 = *(longlong *)(lVar2 + 0x28);
  if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar7.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((lVar2 != 0) && (lVar9 != 0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar7.ReferenceController);
    lVar2 = *(longlong *)this;
    bVar6 = IsInRenderingThread();
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\DebugCanvas.cpp"
                           ,0x13e,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    puVar1 = (undefined8 *)(lVar2 + 0x28);
    local_48 = 0;
    FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FVar7.ReferenceController = FStack_40.ReferenceController;
    if (puVar1 != &local_48) {
      *puVar1 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)(lVar2 + 0x30),&FStack_40);
      FVar7.ReferenceController = FStack_40.ReferenceController;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  if (lVar9 == 0) {
    lVar9 = *(longlong *)this;
    bVar6 = IsInRenderingThread();
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\DebugCanvas.cpp"
                           ,0x138,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_30.ReferenceController = *(TReferenceControllerBase<1> **)(lVar9 + 0x30);
    lVar9 = *(longlong *)(lVar9 + 0x28);
    if (local_30.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_30.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_30.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_50,&local_30);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_30.ReferenceController);
  }
  lVar2 = *(longlong *)this;
  uVar3 = *(undefined8 *)((longlong)this + 0x18);
  bVar6 = IsInRenderingThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\DebugCanvas.cpp"
                         ,0x144,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((lVar9 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar4 = *(longlong *)(lVar2 + 0x38);
  if (*(char *)(lVar9 + 0xa1) == '\0') {
    *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)((longlong)this + 0x20);
    uVar8 = *(undefined8 *)((longlong)this + 0x28);
  }
  else {
    uVar8 = *(undefined8 *)(lVar9 + 0xa4);
    *(undefined8 *)(lVar4 + 0x18) = 0;
  }
  *(undefined8 *)(lVar4 + 0x20) = uVar8;
  if (local_50.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_50.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_50.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = *(undefined8 *)(lVar2 + 0x28);
  pTStack_20 = *(TReferenceControllerBase<1> **)(lVar2 + 0x30);
  *(longlong *)(lVar2 + 0x28) = lVar9;
  *(TReferenceControllerBase<1> **)(lVar2 + 0x30) = local_50.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.ReferenceController);
  return;
}

// AddReferencedObjects @ 1486a5d90

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FDebugCanvasDrawer::AddReferencedObjects(FDebugCanvasDrawer *this,FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001486a5da3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->RenderTarget,0,0);
  return;
}

// BeginRenderingCanvas @ 1486a6ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FDebugCanvasDrawer::BeginRenderingCanvas(FDebugCanvasDrawer *this,TIntRect<int> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UTextureRenderTarget2D *this_00;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  bool bVar5;
  FTextureRenderTargetResource *pFVar6;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar7;
  code **ppcVar8;
  atomic<int> *paVar9;
  ulonglong uVar10;
  undefined1 auStack_f8 [32];
  FCanvas *local_d8;
  undefined8 local_d0;
  FSharedReferencer<1> aFStack_c8 [2];
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if ((0 < *(int *)((longlong)&param_1->field0_0x0 + 8) - *(int *)&param_1->field0_0x0) &&
     (0 < *(int *)((longlong)&param_1->field0_0x0 + 0xc) -
          *(int *)((longlong)&param_1->field0_0x0 + 4))) {
    this->bCanvasRenderedLastFrame = true;
    pTVar1 = (this->GameThreadCanvas).SharedReferenceCount.ReferenceController;
    local_d8 = (this->GameThreadCanvas).Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      paVar9 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar9 = &pTVar1->SharedReferenceCount;
      LOCK();
      *paVar9 = (atomic<int>)((int)*paVar9 + 1);
      UNLOCK();
    }
    this_00 = (this->LayerTexture).field0_0x0.DebugPtr;
    pFVar6 = (FTextureRenderTargetResource *)0x0;
    if (this_00 != (UTextureRenderTarget2D *)0x0) {
      UTextureRenderTarget2D::ResizeTarget
                (this_00,*(int *)((longlong)&param_1->field0_0x0 + 8) - *(int *)&param_1->field0_0x0
                 ,*(int *)((longlong)&param_1->field0_0x0 + 0xc) -
                  *(int *)((longlong)&param_1->field0_0x0 + 4));
      pFVar6 = UTextureRenderTarget::GameThread_GetRenderTargetResource
                         ((UTextureRenderTarget *)(this->LayerTexture).field0_0x0.DebugPtr);
    }
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar9 = (atomic<int>)((int)*paVar9 + 1);
      UNLOCK();
    }
    TVar2 = (param_1->field0_0x0)._s_0.Min.field0_0x0;
    TVar3 = (param_1->field0_0x0)._s_0.Max.field0_0x0;
    local_b8[0] = (code *)0x0;
    local_90 = FMemory::Malloc(0x38,8);
    local_90[1] = (code *)this;
    local_90[3] = (code *)pTVar1;
    *local_90 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FDebugCanvasDrawer::BeginRenderingCanvas'::`5'::<lambda_1>,1,1>
                         ::_vftable_;
    local_90[2] = (code *)local_d8;
    local_90[4] = (code *)pFVar6;
    *(TIntPoint<int>_u_0 *)(local_90 + 5) = TVar2;
    *(TIntPoint<int>_u_0 *)(local_90 + 6) = TVar3;
    if (local_90 != (code **)&DAT_fffffffffffffff8) {
      local_b8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FDebugCanvasDrawer::BeginRenderingCanvas'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_01 = FRenderCommandList::GetInstanceTLS();
    if (this_01 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FDebugCanvasDrawer::BeginRenderingCanvas_::__l5::TSTR_BeginRenderingDebugCanvas189>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
    }
    else {
      this_02 = FRenderCommandList::GetRenderThread(this_01);
      local_88[0] = local_b8[0];
      local_60 = local_90;
      local_90 = (code **)0x0;
      local_78[0] = local_a8[0];
      local_78[1] = local_a8[1];
      local_78[2] = local_a8[2];
      local_b8[0] = (code *)0x0;
      local_58 = 2;
      pFVar7 = (FRenderCommandTag *)
               TRenderCommandTag<`FDebugCanvasDrawer::BeginRenderingCanvas'::__l5::TSTR_BeginRenderingDebugCanvas189>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_88,pFVar7);
      uVar10 = (ulonglong)local_58;
      if (2 < uVar10) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar10] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if (local_88[0] != (code *)0x0) {
          ppcVar8 = local_88 + 2;
          if (local_60 != (code **)0x0) {
            ppcVar8 = local_60;
          }
          (**(code **)(*ppcVar8 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar10])();
      }
    }
    if (local_b8[0] != (code *)0x0) {
      ppcVar8 = local_b8 + 2;
      if (local_90 != (code **)0x0) {
        ppcVar8 = local_90;
      }
      (**(code **)(*ppcVar8 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_d0 = 0;
    aFStack_c8[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->GameThreadCanvas != (TSharedPtr<FCanvas,1> *)&local_d0) {
      (this->GameThreadCanvas).Object = (FCanvas *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->GameThreadCanvas).SharedReferenceCount,aFStack_c8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (aFStack_c8[0].ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  return;
}

// DeleteRenderThreadCanvas @ 1486af780

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FDebugCanvasDrawer::DeleteRenderThreadCanvas(FDebugCanvasDrawer *this)

{
  code *pcVar1;
  bool bVar2;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\DebugCanvas.cpp"
                       ,0x13e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->RenderThreadCanvas != (TSharedPtr<FCanvas,1> *)&local_18) {
    (this->RenderThreadCanvas).Object = (FCanvas *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->RenderThreadCanvas).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// Draw_RenderThread @ 1486b0910

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDebugCanvasDrawer::Draw_RenderThread
          (FDebugCanvasDrawer *this,FRDGBuilder *param_1,FDrawPassInputs *param_2)

{
  TSharedPtr<FCanvas,1> *pTVar1;
  char cVar2;
  FCanvas *pFVar3;
  FTextureRenderTargetResource *pFVar4;
  FRHITexture *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  FRDGScope *this_00;
  longlong *plVar9;
  undefined8 *puVar10;
  FRDGTexture *pFVar11;
  TRefCountPtr<IPooledRenderTarget> TVar12;
  ulonglong uVar13;
  longlong *local_res8;
  TIntRect<int>_u_0 local_88;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<16>_const_*,std::tuple<>_> local_78;
  TRDGEventScopeGuard<FRDGScope_RHI> local_68;
  char local_58;
  uint uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  
  local_58 = '\0';
  cVar2 = *(char *)((longlong)&param_1->_padding_ + 6);
  if ((cVar2 != '\0') && ((cVar2 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_40 = 0;
      uStack_3c = 0;
      ::Desc._12_8_ = ZEXT48(uStack_44);
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_ = (longlong)u_DrawDebugCanvas;
      ::Desc._padding_ = (longlong)u_DrawDebugCanvas;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._0_4_ = 0x111;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FDebugCanvasDrawer::Draw_RenderThread'::__l7::Desc::operator()<>'::__l3::<lambda_1>
             ::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_78._Myfirst._Val = &::Desc;
    local_68.State = (FRDGScopeState *)param_1;
    this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)this_00;
    uVar13 = (ulonglong)(this_00->Impl).Impl.TypeIndex;
    local_68.Scope = this_00;
    if ((3 < uVar13) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
      ::__l2::Destructors[uVar13])(&this_00->Impl);
    FRDGScope_RHI::FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<16>_>
              ((FRDGScope_RHI *)&this_00->Impl,(FRDGScopeState *)param_1,&local_78);
    (this_00->Impl).Impl.TypeIndex = '\x02';
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
    }
    local_58 = '\x01';
  }
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId274,"DrawDebugCanvas",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\DebugCanvas.cpp"
               ,0x112);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId274);
  }
  pFVar3 = (this->RenderThreadCanvas).Object;
  if (pFVar3 != (FCanvas *)0x0) {
    pFVar11 = param_2->OutputTexture;
    if (pFVar3->bUseInternalTexture != false) {
      pFVar4 = this->LayerResource;
      if ((pFVar4 == (FTextureRenderTargetResource *)0x0) ||
         (plVar9 = (longlong *)(**(code **)(pFVar4->_padding_ + 0x10))(&pFVar4->_padding_),
         *plVar9 == 0)) {
        if (2 < (byte)LogProfilingDebugging._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    (&::LOG_Static,(FLogCategoryBase *)&LogProfilingDebugging);
        }
      }
      else {
        puVar10 = (undefined8 *)(**(code **)(this->LayerResource->_padding_ + 0x10))();
        pFVar5 = (FRHITexture *)*puVar10;
        pFVar11 = FRDGBuilder::FindExternalTexture(param_1,pFVar5);
        if (pFVar11 == (FRDGTexture *)0x0) {
          TVar12 = CreateRenderTarget((FRHITexture *)&local_res8,(wchar_t *)pFVar5);
          pFVar11 = FRDGBuilder::RegisterExternalTexture
                              (param_1,(TRefCountPtr<IPooledRenderTarget> *)TVar12.Reference,None);
          if (local_res8 != (longlong *)0x0) {
            (**(code **)(*local_res8 + 0x38))();
          }
        }
        AddClearRenderTargetPass(param_1,pFVar11);
      }
    }
    this->RenderTarget->RDGTexture = pFVar11;
    pTVar1 = &this->RenderThreadCanvas;
    if ((pTVar1->Object == (FCanvas *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar3 = (this->RenderThreadCanvas).Object;
    if (pFVar3->bUseInternalTexture == false) {
      if ((pFVar3 == (FCanvas *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FCanvas::SetRenderTargetRect((this->RenderThreadCanvas).Object,&this->RenderTarget->ViewRect);
    }
    else {
      if ((pFVar3 == (FCanvas *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_88._s_0.Min.field0_0x0 =
           (TIntPoint<int>)(TIntPoint<int>)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
      local_88._s_0.Max.field0_0x0 = (TIntPoint<int>)*(undefined8 *)&(pFVar11->Desc).field_0x24;
      FCanvas::SetRenderTargetRect
                ((this->RenderThreadCanvas).Object,(TIntRect<int> *)&local_88._s_0);
    }
    if ((pTVar1->Object == (FCanvas *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FCanvas::Flush_RenderThread(pTVar1->Object,param_1,true);
    this->RenderTarget->RDGTexture = (FRDGTexture *)0x0;
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (local_58 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_68);
  }
  return;
}

// GetGameThreadDebugCanvas @ 1486bea60

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FCanvas * __thiscall FDebugCanvasDrawer::GetGameThreadDebugCanvas(FDebugCanvasDrawer *this)

{
  return (this->GameThreadCanvas).Object;
}

// GetReferencerName @ 1486c61e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FString * __thiscall
FDebugCanvasDrawer::GetReferencerName(FDebugCanvasDrawer *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FDebugCanvasDrawer");
  return __return_storage_ptr__;
}

// GetRenderThreadCanvas @ 1486c6390

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TSharedPtr<FCanvas,1> * __thiscall
FDebugCanvasDrawer::GetRenderThreadCanvas
          (FDebugCanvasDrawer *this,TSharedPtr<FCanvas,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<FCanvas,1> *pTVar4;
  
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\DebugCanvas.cpp"
                       ,0x138,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<FCanvas,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = (this->RenderThreadCanvas).Object;
  pTVar1 = (this->RenderThreadCanvas).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// HandleReleaseFontResources @ 1486ca5b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FDebugCanvasDrawer::HandleReleaseFontResources(FDebugCanvasDrawer *this,FSlateFontCache *param_1)

{
  FCanvas *this_00;
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FDebugCanvasDrawer *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FDebugCanvasDrawer *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\DebugCanvas.cpp"
                       ,0x6f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->RenderThreadCanvas).Object != (FCanvas *)0x0) {
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FDebugCanvasDrawer::HandleReleaseFontResources'::`12'::<lambda_1>,1,0>
                ::_vftable_;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FDebugCanvasDrawer::HandleReleaseFontResources'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    pFStack_70 = this;
    this_01 = FRenderCommandList::GetInstanceTLS();
    if (this_01 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FDebugCanvasDrawer::HandleReleaseFontResources_::__l12::TSTR_FlushFontResourcesCommand117>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_02 = FRenderCommandList::GetRenderThread(this_01);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`FDebugCanvasDrawer::HandleReleaseFontResources'::__l12::TSTR_FlushFontResourcesCommand117>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
    FlushRenderingCommands();
  }
  this_00 = (this->GameThreadCanvas).Object;
  if (this_00 != (FCanvas *)0x0) {
    FCanvas::ClearBatchesToRender(this_00);
  }
  return;
}

// InitDebugCanvas @ 1486cc3b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FDebugCanvasDrawer::InitDebugCanvas
          (FDebugCanvasDrawer *this,FViewportClient *param_1,UWorld *param_2)

{
  TSharedPtr<FCanvas,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  IStereoRendering *pIVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  UTextureRenderTarget2D *pUVar11;
  longlong *plVar12;
  TReferenceControllerBase<1> *pTVar13;
  Type TVar14;
  FCanvas *pFVar15;
  float fVar16;
  undefined1 auStackY_218 [32];
  FCanvas *local_1d8;
  FSharedReferencer<1> FStack_1d0;
  undefined1 local_1c8 [128];
  undefined1 local_148 [192];
  FRHIResource *local_88;
  FRHIResource *local_78;
  uint local_70;
  longlong *local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_218;
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  pTVar7 = pTVar13;
  if ((((GEngine != (UEngine *)0x0) &&
       (bVar3 = UEngine::IsStereoscopic3D(GEngine,(FViewport *)0x0), bVar3)) &&
      (GEngine != (UEngine *)0x0)) &&
     ((GEngine->StereoRenderingDevice).Object != (IStereoRendering *)0x0)) {
    pIVar6 = TSharedPtr<IStereoRendering,1>::operator->(&GEngine->StereoRenderingDevice);
    pTVar7 = (TReferenceControllerBase<1> *)(**(code **)((longlong)*pIVar6 + 0x88))(pIVar6);
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      bVar3 = true;
      FSlateApplication::Get();
      fVar16 = __real_3f800000;
      goto LAB_1486cc45e;
    }
  }
  bVar3 = false;
  FSlateApplication::Get();
  fVar16 = (float)(**(code **)((longlong)*param_1 + 0x1d8))(param_1);
LAB_1486cc45e:
  TVar14 = GMaxRHIFeatureLevel;
  if (param_2 != (UWorld *)0x0) {
    TVar14 = (uint)(param_2->FeatureLevel).Value;
  }
  pTVar8 = ::operator_new(0x130);
  uVar5 = 0;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    local_1d8 = ___xmm_00000000000000000000000000000010;
    pFVar15 = (FCanvas *)&DAT_00000010;
    FStack_1d0.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_VFCanvas___00_SharedPointerInternals__6B_;
    FCanvas::FCanvas((FCanvas *)(pTVar8 + 1),(FRenderTarget *)this->RenderTarget,
                     (FHitProxyConsumer *)0x0,param_2,TVar14,CDM_DeferDrawing,fVar16);
    pFVar15 = (FCanvas *)(pTVar8 + 1);
    if ((pFVar15 == (FCanvas *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    FStack_1d0.ReferenceController = pTVar8;
    pTVar13 = pTVar8;
    local_1d8 = pFVar15;
  }
  pTVar1 = &this->GameThreadCanvas;
  if (pTVar1 != (TSharedPtr<FCanvas,1> *)&local_1d8) {
    pTVar1->Object = pFVar15;
    local_1d8 = (FCanvas *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->GameThreadCanvas).SharedReferenceCount,&FStack_1d0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1d0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  if ((pTVar1->Object == (FCanvas *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar1->Object->AllowedModes = 2;
  if (pTVar1->Object != (FCanvas *)0x0) {
    pTVar1->Object->bUseInternalTexture = bVar3;
    if (bVar3 == false) {
      ReleaseInternalTexture(this);
    }
    else {
      pUVar11 = (this->LayerTexture).field0_0x0.DebugPtr;
      if (((pUVar11 == (UTextureRenderTarget2D *)0x0) ||
          (((uint)pUVar11->_padding_ >> 0x1e & 1) != 0)) &&
         (this->bCanvasRenderedLastFrame != false)) {
        pUVar9 = GetTransientPackageAsObject();
        FObjectInitializer::AssertIfInConstructor
                  (pUVar9,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar10 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_1c8,pUVar10);
        local_1c8._8_8_ = pUVar9;
        pUVar11 = (UTextureRenderTarget2D *)
                  StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
        if (local_1c8._64_8_ != 0) {
          plVar12 = (longlong *)(local_1c8 + 0x50);
          if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
            plVar12 = (longlong *)local_1c8._104_8_;
          }
          (**(code **)(*plVar12 + 0x10))();
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar11 != (UTextureRenderTarget2D *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar11);
        }
        (this->LayerTexture).field0_0x0.DebugPtr = pUVar11;
        (pUVar11->ClearColor).field0_0x0._s_0 =
             (FLinearColor_u_0_s_0)FLinearColor::Transparent.field0_0x0;
      }
      if ((pTVar7 != (TReferenceControllerBase<1> *)0x0) &&
         ((this->bCanvasRenderedLastFrame != false || (this->LayerID != 0xffffffff)))) {
        (**(code **)(pTVar7->_padding_ + 0x80))
                  (pTVar7,local_148,(this->LayerTexture).field0_0x0.DebugPtr);
        bVar3 = this->bCanvasRenderedLastFrame;
        if (bVar3 == false) {
          uVar5 = 0x20;
        }
        local_70 = local_70 | uVar5 | 0x40;
        if (this->LayerID == 0xffffffff) {
          if (bVar3 != false) {
            uVar5 = (**(code **)(pTVar7->_padding_ + 8))(pTVar7,local_148);
            this->LayerID = uVar5;
          }
        }
        else {
          (**(code **)(pTVar7->_padding_ + 0x48))(pTVar7,this->LayerID,local_148);
        }
        if (local_68 != (longlong *)0x0) {
          (**(code **)(*local_68 + 0x10))(local_68,1);
        }
        if (local_78 != (FRHIResource *)0x0) {
          FRHIResource::Release(local_78);
        }
        if (local_88 != (FRHIResource *)0x0) {
          FRHIResource::Release(local_88);
        }
      }
    }
    this->bCanvasRenderedLastFrame = false;
  }
  return;
}

// ReleaseInternalTexture @ 1486e61f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FDebugCanvasDrawer::ReleaseInternalTexture(FDebugCanvasDrawer *this)

{
  UTextureRenderTarget2D *pUVar1;
  IStereoRendering *pIVar2;
  code *pcVar3;
  UEngine *pUVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  
  bVar5 = IsInGameThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\DebugCanvas.cpp"
                       ,0x5c,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar1 = (this->LayerTexture).field0_0x0.DebugPtr;
  if ((pUVar1 != (UTextureRenderTarget2D *)0x0) && (((uint)pUVar1->_padding_ >> 0x1e & 1) == 0)) {
    UTexture::ReleaseResource((UTexture *)(this->LayerTexture).field0_0x0.DebugPtr);
    (this->LayerTexture).field0_0x0.DebugPtr = (UTextureRenderTarget2D *)0x0;
  }
  if ((this->LayerID != 0xffffffff) &&
     (pIVar2 = (GEngine->StereoRenderingDevice).Object, pIVar2 != (IStereoRendering *)0x0)) {
    lVar6 = (**(code **)((longlong)*pIVar2 + 0x88))();
    pUVar4 = GEngine;
    if (lVar6 != 0) {
      if ((GEngine->StereoRenderingDevice).Object == (IStereoRendering *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      plVar7 = (longlong *)(**(code **)((longlong)*(pUVar4->StereoRenderingDevice).Object + 0x88))()
      ;
      (**(code **)(*plVar7 + 0x10))(plVar7,this->LayerID);
      this->LayerID = 0xffffffff;
    }
  }
  return;
}

// SetRenderThreadCanvas @ 1486ef3c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FDebugCanvasDrawer::SetRenderThreadCanvas
          (FDebugCanvasDrawer *this,TIntRect<int> *param_1,TSharedPtr<FCanvas,1> *param_2,
          FTextureRenderTargetResource *param_3)

{
  FSlateCanvasRenderTarget *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FCanvas *pFVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  TIntPoint<int>_u_0 TVar7;
  
  bVar6 = IsInRenderingThread();
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\DebugCanvas.cpp"
                       ,0x144,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_2->Object == (FCanvas *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar1 = this->RenderTarget;
  if (param_2->Object->bUseInternalTexture == false) {
    (pFVar1->ViewRect).field0_0x0._s_0.Min.field0_0x0 = (param_1->field0_0x0)._s_0.Min.field0_0x0;
    TVar7 = (param_1->field0_0x0)._s_0.Max.field0_0x0;
  }
  else {
    if (param_2->Object == (FCanvas *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    TVar7 = (param_2->Object->ParentSize).field0_0x0;
    (pFVar1->ViewRect).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  }
  (pFVar1->ViewRect).field0_0x0._s_0.Max.field0_0x0 = TVar7;
  pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
  pFVar3 = param_2->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (this->RenderThreadCanvas).SharedReferenceCount.ReferenceController;
  (this->RenderThreadCanvas).Object = pFVar3;
  (this->RenderThreadCanvas).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  this->LayerResource = param_3;
  return;
}

