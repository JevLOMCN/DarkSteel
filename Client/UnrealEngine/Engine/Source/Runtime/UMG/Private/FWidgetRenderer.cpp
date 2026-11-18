// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 19

// FWidgetRenderer @ 146a55ba0

FWidgetRenderer * __thiscall
FWidgetRenderer::FWidgetRenderer(FWidgetRenderer *this,bool param_1,bool param_2)

{
  TSharedPtr<ISlate3DRenderer,1> *pTVar1;
  FName FVar2;
  void *pvVar3;
  FName *pFVar4;
  FModuleManager *this_00;
  IModuleInterface *pIVar5;
  undefined8 *puVar6;
  wchar_t *pwVar7;
  FName local_res8;
  ISlate3DRenderer *local_38;
  FSharedReferencer<1> local_30;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  
  this->bPrepassNeeded = true;
  this->bClearHitTestGrid = true;
  (this->DeferredPaints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar1 = &this->Renderer;
  (this->DeferredPaints).ArrayNum = 0;
  (this->DeferredPaints).ArrayMax = 0;
  this->_padding_ = (longlong)&___7FWidgetRenderer__6B_;
  pvVar3 = ThreadLocalStoragePointer;
  pTVar1->Object = (ISlate3DRenderer *)0x0;
  (this->Renderer).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bUseGammaSpace = param_1;
  (this->ViewOffset).field0_0x0._s_0.X = 0.0;
  (this->ViewOffset).field0_0x0._s_0.Y = 0.0;
  this->bClearTarget = param_2;
  if (*(int *)(*(longlong *)((longlong)pvVar3 + (ulonglong)_tls_index * 8) + 0x9d4c) <
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
  {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1) {
      pwVar7 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar7,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    FModuleManager::Get();
    pFVar4 = ::FName::FName(&local_res8,"SlateRHIRenderer");
    FVar2 = *pFVar4;
    this_00 = FModuleManager::Get();
    pIVar5 = FModuleManager::LoadModuleChecked(this_00,FVar2);
    puVar6 = (undefined8 *)
             (**(code **)((longlong)*pIVar5 + 0x48))(pIVar5,local_28,this->bUseGammaSpace);
    local_30.ReferenceController = (TReferenceControllerBase<1> *)puVar6[1];
    local_38 = (ISlate3DRenderer *)*puVar6;
    if (local_30.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_30.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_30.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TSharedPtr<ISlate3DRenderer,1> *)&local_38) {
      pTVar1->Object = local_38;
      local_38 = (ISlate3DRenderer *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Renderer).SharedReferenceCount,&local_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_30.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  }
  return this;
}

// ~FWidgetRenderer @ 146a58290

void __thiscall FWidgetRenderer::~FWidgetRenderer(FWidgetRenderer *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FWidgetRenderer__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Renderer).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<FSlateWindowElementList::FDeferredPaint,1>,int>
            ((TSharedPtr<FSlateWindowElementList::FDeferredPaint,1> *)
             (this->DeferredPaints).AllocatorInstance.Data,(this->DeferredPaints).ArrayNum);
  pFVar1 = (this->DeferredPaints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FDeferredCleanupInterface__6B_;
  return;
}

// CreateTargetFor @ 146a69e70

/* WARNING: Enum "Type": Some values do not have unique names */

UTextureRenderTarget2D * __cdecl
FWidgetRenderer::CreateTargetFor(TVector2<double> *param_1,TextureFilter param_2,bool param_3)

{
  byte *pbVar1;
  FLinearColor FVar2;
  EPixelFormat EVar3;
  FSlateApplication *pFVar4;
  UObject *pUVar5;
  UTextureRenderTarget2D *this;
  wchar_t *pwVar6;
  double dVar7;
  double dVar8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
  {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1) {
      pwVar6 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar6,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    pFVar4 = FSlateApplication::Get();
    EVar3 = (**(code **)(**(longlong **)&pFVar4->field_0x60 + 0x1a8))();
    pUVar5 = GetTransientPackageAsObject();
    this = NewObject<UTextureRenderTarget2D>(pUVar5);
    dVar7 = (param_1->field0_0x0)._s_0.Y;
    dVar8 = (param_1->field0_0x0)._s_0.X;
    *(char *)((longlong)&this->_padding_ + 1) = (char)param_2;
    FVar2 = FLinearColor::Transparent;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 6);
    *pbVar1 = *pbVar1 & 0xfe;
    dVar7 = (dVar7 + dVar7) - __real_3fe0000000000000;
    dVar8 = (dVar8 + dVar8) - __real_3fe0000000000000;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 6);
    *pbVar1 = *pbVar1 | !param_3;
    (this->ClearColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
    *(undefined4 *)&this->_padding_ = 0x3f800000;
    UTextureRenderTarget2D::InitCustomFormat
              (this,(int)ROUND(dVar8) >> 1,(int)ROUND(dVar7) >> 1,EVar3,!param_3);
    UTextureRenderTarget2D::UpdateResourceImmediate(this,true);
    return this;
  }
  return (UTextureRenderTarget2D *)0x0;
}

// DrawInvalidationRoot @ 146a6ba50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FWidgetRenderer::DrawInvalidationRoot
          (FWidgetRenderer *this,TSharedRef<SVirtualWindow,1> *param_1,
          UTextureRenderTarget2D *param_2,FSlateInvalidationRoot *param_3,
          FSlateInvalidationContext *param_4,bool param_5)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  ISlate3DRenderer *pIVar4;
  TSharedPtr<FSlateWindowElementList::FDeferredPaint,1> *pTVar5;
  ISlate3DRenderer *pIVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  FSlateApplication *pFVar10;
  FSlateDrawBuffer *pFVar11;
  FSlateWindowElementList *pFVar12;
  FTextureRenderTargetResource *pFVar13;
  FDeferredPaint *pFVar14;
  wchar_t *pwVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  undefined1 auStackY_218 [32];
  char local_1d7;
  undefined1 local_1d6 [6];
  TArray<TSharedPtr<FSlateWindowElementList::FDeferredPaint,1>,TSizedDefaultAllocator<32>_>
  local_1d0;
  FSlateDrawBuffer *local_1c0;
  LARGE_INTEGER local_1b8;
  LPCRITICAL_SECTION local_1b0;
  FSlateInvalidationResult local_1a8;
  TSharedRef<SWindow,1> local_198;
  FSlateDrawBuffer *local_188;
  double local_180;
  float local_178;
  double local_170;
  float local_168;
  longlong *local_160;
  ISlate3DRenderer *local_158;
  undefined1 local_150;
  undefined1 local_148 [20];
  float fStack_134;
  FPaintArgs *pFStack_130;
  FWidgetStyle *local_128;
  FSlateWindowElementList *pFStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  FDeferredPaint local_108;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_1d7 = '\0';
  pFVar10 = FSlateApplication::Get();
  local_1b0 = (LPCRITICAL_SECTION)(**(code **)(**(longlong **)&pFVar10->field_0x60 + 0x160))();
  if (local_1b0 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_1b0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar15 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar15,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    if (this->bPrepassNeeded != false) {
      SWindow::ProcessWindowInvalidation((SWindow *)param_1->Object);
      SWidget::SlatePrepass((SWidget *)param_1->Object,param_4->LayoutScaleMultiplier);
    }
    local_148._0_4_ = (param_4->CullingRect).Left;
    local_148._4_4_ = (param_4->CullingRect).Top;
    local_148._8_4_ = (param_4->CullingRect).Right;
    local_148._12_4_ = (param_4->CullingRect).Bottom;
    pFStack_130 = param_4->PaintArgs;
    local_128 = param_4->WidgetStyle;
    pFStack_120 = param_4->WindowElementList;
    local_118._0_4_ = param_4->LayoutScaleMultiplier;
    local_118._4_4_ = param_4->IncomingLayerId;
    uStack_110._0_1_ = param_4->bParentEnabled;
    uStack_110._1_1_ = param_4->bAllowFastPathUpdate;
    uStack_110._2_6_ = *(undefined6 *)&param_4->field_0x3a;
    fStack_134 = (float)(this->ViewOffset).field0_0x0._s_0.Y;
    local_148._16_4_ = (float)(this->ViewOffset).field0_0x0._s_0.X;
    if (((this->Renderer).Object == (ISlate3DRenderer *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    pIVar4 = (this->Renderer).Object;
    pFVar11 = (FSlateDrawBuffer *)(**(code **)(*(longlong *)pIVar4 + 0x20))(pIVar4);
    local_198.Object = (SWindow *)param_1->Object;
    local_198.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_198.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1c0 = pFVar11;
    pFVar12 = FSlateDrawBuffer::AddWindowElementList(pFVar11,&local_198);
    pFStack_120 = pFVar12;
    FSlateInvalidationRoot::PaintInvalidationRoot
              (param_3,&local_1a8,(FSlateInvalidationContext *)local_148);
    if (local_1a8.bRepaintedWidgets == false) {
      FSlateWindowElementList::ResetElementList(pFVar12);
    }
    else {
      iVar3 = (pFVar12->DeferredPaintList).ArrayNum;
      pTVar5 = (TSharedPtr<FSlateWindowElementList::FDeferredPaint,1> *)
               (pFVar12->DeferredPaintList).AllocatorInstance.Data;
      local_1d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1d0.ArrayNum = iVar3;
      if (iVar3 == 0) {
        local_1d0.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar3,0,&local_1d0.AllocatorInstance,iVar3,&local_1d0.ArrayMax);
        ConstructItems<TSharedPtr<FSlateWindowElementList::FDeferredPaint,1>,TSharedPtr<FSlateWindowElementList::FDeferredPaint,1>,int>
                  (local_1d0.AllocatorInstance.Data,pTVar5,iVar3);
      }
      TArray<TSharedPtr<FSlateWindowElementList::FDeferredPaint,1>,TSizedDefaultAllocator<32>_>::
      operator=(&this->DeferredPaints,&local_1d0);
      DestructItems<TSharedPtr<FSlateWindowElementList::FDeferredPaint,1>,int>
                ((TSharedPtr<FSlateWindowElementList::FDeferredPaint,1> *)
                 local_1d0.AllocatorInstance.Data,local_1d0.ArrayNum);
      if ((TSharedPtr<FSlateWindowElementList::FDeferredPaint,1> *)local_1d0.AllocatorInstance.Data
          != (TSharedPtr<FSlateWindowElementList::FDeferredPaint,1> *)0x0) {
        FMemory::Free(local_1d0.AllocatorInstance.Data);
      }
      if (((this->Renderer).Object == (ISlate3DRenderer *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      pFVar11 = local_1c0;
      pIVar6 = (this->Renderer).Object;
      (**(code **)(*(longlong *)pIVar6 + 0x30))(pIVar6,local_1c0);
      pFVar11->ViewOffset = local_1a8.ViewOffset;
      local_188 = pFVar11;
      local_180 = (double)FApp::CurrentTime - GStartTime;
      local_178 = (float)(double)FApp::DeltaTime;
      QueryPerformanceCounter(&local_1b8);
      local_170 = ((double)local_1b8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                  __real_4170000000000000) - GStartTime;
      local_168 = (float)(double)FApp::DeltaTime;
      pFVar13 = UTextureRenderTarget::GameThread_GetRenderTargetResource
                          ((UTextureRenderTarget *)param_2);
      if (pFVar13 == (FTextureRenderTargetResource *)0x0) {
        local_160 = (longlong *)0x0;
      }
      else {
        local_160 = &pFVar13->_padding_;
      }
      local_158 = (this->Renderer).Object;
      local_150 = this->bClearTarget;
      local_1d7 = local_1a8.bRepaintedWidgets;
      pFVar10 = FSlateApplication::Get();
      (**(code **)(**(longlong **)&pFVar10->field_0x60 + 0x1a0))
                (*(longlong **)&pFVar10->field_0x60,&local_188,param_5);
      iVar3 = (this->DeferredPaints).ArrayNum;
      pFVar16 = (this->DeferredPaints).AllocatorInstance.Data;
      pFVar17 = pFVar16 + (longlong)iVar3 * 0x10;
      while( true ) {
        if ((this->DeferredPaints).ArrayNum != iVar3) {
          local_1d6[0] = 0;
          `TCheckedPointerIterator<TSharedPtr<FSlateWindowElementList::FDeferredPaint,1>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_1d6);
        }
        pFVar11 = local_1c0;
        if (pFVar16 == pFVar17) break;
        pFVar12 = param_4->WindowElementList;
        if ((*(longlong *)pFVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        pFVar14 = FSlateWindowElementList::FDeferredPaint::Copy
                            (*(FDeferredPaint **)pFVar16,&local_108,param_4->PaintArgs);
        FSlateWindowElementList::QueueDeferredPainting(pFVar12,pFVar14);
        if (local_108.WidgetToPaintPtr.WeakReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &(local_108.WidgetToPaintPtr.WeakReferenceCount.ReferenceController)->
                    WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)((local_108.WidgetToPaintPtr.WeakReferenceCount.ReferenceController)->
                         _padding_ + 8))
                      (local_108.WidgetToPaintPtr.WeakReferenceCount.ReferenceController,1);
          }
        }
        pFVar16 = pFVar16 + 0x10;
      }
    }
    if (!param_5) {
      (**(code **)(*(longlong *)pIVar4 + 0x28))(pIVar4,pFVar11);
    }
  }
  LeaveCriticalSection(local_1b0);
  return (bool)local_1d7;
}

// DrawInvalidationRoot @ 146a6bf00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FWidgetRenderer::DrawInvalidationRoot
          (FWidgetRenderer *this,TSharedRef<SVirtualWindow,1> *param_1,
          UTextureRenderTarget2D *param_2,FPaintArgs *param_3,float param_4,
          TVector2<double> *param_5,bool param_6)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  FHittestGrid *this_00;
  ISlate3DRenderer *pIVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  FDeprecateSlateVector2D FVar8;
  char cVar9;
  bool bVar10;
  undefined1 uVar11;
  FSlateApplication *pFVar12;
  FSlateDrawBuffer *this_01;
  FSlateWindowElementList *this_02;
  FSlateRect *pFVar13;
  TArray<TSharedPtr<FSlateWindowElementList::FDeferredPaint,1>,TSizedDefaultAllocator<32>_> *pTVar14
  ;
  ISlate3DRenderer *pIVar15;
  FTextureRenderTargetResource *pFVar16;
  FDeferredPaint *pFVar17;
  wchar_t *pwVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  undefined1 auStackY_398 [32];
  char local_367;
  undefined8 local_360;
  undefined1 local_358 [8];
  undefined1 local_350 [12];
  bool local_344;
  undefined1 local_340 [8];
  int local_338;
  undefined8 local_330;
  float local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  float local_31c;
  undefined8 local_318;
  float local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  float local_304;
  FSlateRect local_300;
  TVector2<float>_u_0 local_2f0;
  float local_2e8;
  float local_2e4;
  float local_2e0;
  float local_2dc;
  TVector2<float>_u_0 local_2d8;
  float local_2d0;
  float local_2cc;
  float local_2c8;
  float local_2c4;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  float local_294;
  TVector2<float>_u_0 local_290;
  LARGE_INTEGER local_288;
  FDeprecateVector2DParameter local_280;
  FPaintArgs *local_278;
  UTextureRenderTarget2D *local_270;
  LPCRITICAL_SECTION local_268;
  undefined8 local_25c;
  undefined8 local_250;
  undefined8 local_244;
  FSlateInvalidationContext local_238;
  FSlateRect local_1f8;
  TSharedRef<SWindow,1> local_1e8;
  FSlateDrawBuffer *local_1d8;
  double local_1d0;
  float local_1c8;
  double local_1c0;
  float local_1b8;
  longlong *local_1b0;
  ISlate3DRenderer *local_1a8;
  undefined1 local_1a0;
  FSlateRect local_198;
  TTransform2<float> local_188;
  FDeprecateSlateVector2D local_170;
  float local_168;
  undefined4 uStack_164;
  undefined4 local_160;
  TVector2<float>_u_0 local_15c;
  TTransform2<float> local_154;
  byte local_13c;
  TTransform2<float> local_138;
  FDeferredPaint local_118;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_398;
  local_278 = param_3;
  local_270 = param_2;
  cVar9 = (**(code **)(param_1->Object->_padding_ + 0x210))();
  if (cVar9 == '\0') {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_8511328590174879380>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Slate\\WidgetRenderer.cpp"
                        ,0x16c,"bIsInvalidationRoot");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (bool)uVar11;
    }
    local_367 = '\0';
  }
  else {
    local_367 = '\0';
    pFVar12 = FSlateApplication::Get();
    local_268 = (LPCRITICAL_SECTION)(**(code **)(**(longlong **)&pFVar12->field_0x60 + 0x160))();
    if (local_268 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(local_268);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__),
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       == -1)) {
      pwVar18 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar18,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
    if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
       (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
        false)) {
      if (this->bPrepassNeeded != false) {
        SWindow::ProcessWindowInvalidation((SWindow *)param_1->Object);
        SWidget::SlatePrepass((SWidget *)param_1->Object,param_4);
      }
      local_25c = 0;
      local_138.Trans.field0_0x0 = (TVector2<float>_u_0)0x0;
      local_168 = 1.0;
      uStack_164 = 0;
      local_160 = 0;
      local_188.M.M[0][1] = 0.0;
      local_188.M.M[1][0] = 0.0;
      local_188.Trans.field0_0x0 = (TVector2<float>_u_0)0x0;
      local_188.M.M[0][0] = param_4;
      local_188.M.M[1][1] = param_4;
      local_138.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
      local_138.M.M[0][1] = _UNK_15076b184;
      local_138.M.M[1][0] = _UNK_15076b188;
      local_138.M.M[1][1] = _UNK_15076b18c;
      local_350._4_4_ = (float)((double)(__real_3f800000 / param_4) * (param_5->field0_0x0)._s_0.Y);
      local_350._0_4_ = (float)((double)(__real_3f800000 / param_4) * (param_5->field0_0x0)._s_0.X);
      local_170 = (FDeprecateSlateVector2D)local_350._0_8_;
      local_15c = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      Concatenate<TTransform2<float>_>(&local_154,&local_188,&local_138);
      FVar8 = local_170;
      local_13c = local_13c & 0xfe;
      this_00 = param_3->CurrentGrid;
      local_290 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      uStack_324 = 0;
      uStack_320 = 0;
      local_250 = 0;
      local_15c = (TVector2<float>_u_0)0x0;
      local_340._0_4_ = local_170._0_4_;
      uVar6 = local_340._0_4_;
      local_328 = (float)local_340._0_4_;
      local_340._4_4_ = local_170._4_4_;
      uVar7 = local_340._4_4_;
      local_31c = (float)local_340._4_4_;
      local_360 = (ulonglong)(uint)local_340._4_4_ << 0x20;
      local_350._0_8_ = (ulonglong)local_170 & 0xffffffff;
      local_330 = 0;
      local_340 = (undefined1  [8])0x0;
      uStack_164 = 0;
      local_160 = 0;
      local_2f0._s_0.X = param_4 * 0.0 + 0.0;
      local_168 = param_4;
      local_2f0._s_0.Y = param_4 * 0.0 + 0.0;
      local_2e8 = (float)uVar6 * param_4;
      local_2e4 = param_4 * 0.0;
      local_2e0 = param_4 * 0.0;
      local_2dc = (float)uVar7 * param_4;
      FSlateRotatedRect::ToBoundingRect((FSlateRotatedRect *)&local_2f0._s_0,&local_300);
      uStack_30c = 0;
      uStack_308 = 0;
      local_244 = 0;
      local_318 = 0;
      local_360._4_4_ = local_300.Bottom - local_300.Top;
      local_360._0_4_ = local_300.Right - local_300.Left;
      local_288 = local_360;
      local_310 = (float)uVar6;
      local_304 = (float)uVar7;
      local_350._0_8_ = (ulonglong)(uint)uVar7 << 0x20;
      local_340 = (undefined1  [8])((ulonglong)FVar8 & 0xffffffff);
      local_360 = 0;
      local_2d8._s_0.X = param_4 * 0.0 + 0.0;
      local_2d8._s_0.Y = param_4 * 0.0 + 0.0;
      local_2d0 = (float)uVar6 * param_4;
      local_2cc = param_4 * 0.0;
      local_2c8 = param_4 * 0.0;
      local_2c4 = (float)uVar7 * param_4;
      FSlateRotatedRect::ToBoundingRect((FSlateRotatedRect *)&local_2d8._s_0,&local_1f8);
      local_360._4_4_ = local_1f8.Top;
      local_360._0_4_ = local_1f8.Left;
      FHittestGrid::SetHittestArea
                (this_00,&local_280,(FDeprecateVector2DParameter *)&local_288.s,
                 (FDeprecateVector2DParameter *)&local_290._s_0);
      if (((this->Renderer).Object == (ISlate3DRenderer *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      pIVar4 = (this->Renderer).Object;
      this_01 = (FSlateDrawBuffer *)(**(code **)(*(longlong *)pIVar4 + 0x20))(pIVar4);
      local_1e8.Object = (SWindow *)param_1->Object;
      local_1e8.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_1e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      this_02 = FSlateDrawBuffer::AddWindowElementList(this_01,&local_1e8);
      local_238.WidgetStyle = (FWidgetStyle *)&local_2c0;
      local_2a0 = FWidgetStyle::SubdueAmount * FLinearColor::White.field0_0x0._s_0.R;
      local_2c0 = FLinearColor::White.field0_0x0._s_0.R;
      local_298 = FWidgetStyle::SubdueAmount * FLinearColor::White.field0_0x0._s_0.B;
      local_238.ViewOffset = (FDeprecateSlateVector2D)0x0;
      local_2b0 = FLinearColor::White.field0_0x0._s_0.R;
      local_29c = FWidgetStyle::SubdueAmount * FLinearColor::White.field0_0x0._s_0.G;
      local_294 = FWidgetStyle::SubdueAmount * FLinearColor::White.field0_0x0._s_0.A;
      local_238.bParentEnabled = true;
      local_238.bAllowFastPathUpdate = true;
      local_238.CullingRect.Left = ___xmm_bf800000bf800000bf800000bf800000;
      local_238.CullingRect.Top = _UNK_15076c664;
      local_238.CullingRect.Right = _UNK_15076c668;
      local_238.CullingRect.Bottom = _UNK_15076c66c;
      local_2bc = FLinearColor::White.field0_0x0._s_0.G;
      local_2b8 = FLinearColor::White.field0_0x0._s_0.B;
      local_2b4 = FLinearColor::White.field0_0x0._s_0.A;
      local_2ac = FLinearColor::White.field0_0x0._s_0.G;
      local_2a8 = FLinearColor::White.field0_0x0._s_0.B;
      local_2a4 = FLinearColor::White.field0_0x0._s_0.A;
      local_238.LayoutScaleMultiplier = param_4;
      local_238.PaintArgs = local_278;
      local_238.IncomingLayerId = 0;
      local_238.WindowElementList = this_02;
      pFVar13 = SWindow::GetClippingRectangleInWindow((SWindow *)param_1->Object,&local_198);
      local_238.CullingRect.Left = pFVar13->Left;
      local_238.CullingRect.Top = pFVar13->Top;
      local_238.CullingRect.Right = pFVar13->Right;
      local_238.CullingRect.Bottom = pFVar13->Bottom;
      FSlateInvalidationRoot::PaintInvalidationRoot
                ((FSlateInvalidationRoot *)&param_1->Object->_padding_,
                 (FSlateInvalidationResult *)local_350,&local_238);
      if (local_344 == false) {
        FSlateWindowElementList::ResetElementList(this_02);
      }
      else {
        pTVar14 = FSlateWindowElementList::GetDeferredPaintList
                            (this_02,(TArray<TSharedPtr<FSlateWindowElementList::FDeferredPaint,1>,TSizedDefaultAllocator<32>_>
                                      *)local_340);
        TArray<TSharedPtr<FSlateWindowElementList::FDeferredPaint,1>,TSizedDefaultAllocator<32>_>::
        operator=(&this->DeferredPaints,pTVar14);
        DestructItems<TSharedPtr<FSlateWindowElementList::FDeferredPaint,1>,int>
                  ((TSharedPtr<FSlateWindowElementList::FDeferredPaint,1> *)local_340,local_338);
        if (local_340 != (undefined1  [8])0x0) {
          FMemory::Free((void *)local_340);
        }
        pIVar15 = TSharedPtr<ISlate3DRenderer,1>::operator->(&this->Renderer);
        (**(code **)(*(longlong *)pIVar15 + 0x30))(pIVar15,this_01);
        this_01->ViewOffset = (FDeprecateSlateVector2D)local_350._0_8_;
        local_1d0 = (double)FApp::CurrentTime - GStartTime;
        local_1c8 = (float)(double)FApp::DeltaTime;
        local_1d8 = this_01;
        QueryPerformanceCounter((LARGE_INTEGER *)&local_360);
        local_1c0 = ((double)local_360 * FGenericPlatformTime::SecondsPerCycle +
                    __real_4170000000000000) - GStartTime;
        local_1b8 = (float)(double)FApp::DeltaTime;
        pFVar16 = UTextureRenderTarget::GameThread_GetRenderTargetResource
                            ((UTextureRenderTarget *)local_270);
        if (pFVar16 == (FTextureRenderTargetResource *)0x0) {
          local_1b0 = (longlong *)0x0;
        }
        else {
          local_1b0 = &pFVar16->_padding_;
        }
        local_1a8 = (this->Renderer).Object;
        local_1a0 = this->bClearTarget;
        local_367 = local_344;
        pFVar12 = FSlateApplication::Get();
        (**(code **)(**(longlong **)&pFVar12->field_0x60 + 0x1a0))
                  (*(longlong **)&pFVar12->field_0x60,&local_1d8,param_6);
        iVar3 = (this->DeferredPaints).ArrayNum;
        pFVar19 = (this->DeferredPaints).AllocatorInstance.Data;
        pFVar20 = pFVar19 + (longlong)iVar3 * 0x10;
        while( true ) {
          if ((this->DeferredPaints).ArrayNum != iVar3) {
            local_358[0] = 0;
            `TCheckedPointerIterator<TSharedPtr<FSlateWindowElementList::FDeferredPaint,1>,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_358);
          }
          if (pFVar19 == pFVar20) break;
          if ((*(longlong *)pFVar19 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar5 = (code *)swi(3);
            uVar11 = (*pcVar5)();
            return (bool)uVar11;
          }
          pFVar17 = FSlateWindowElementList::FDeferredPaint::Copy
                              (*(FDeferredPaint **)pFVar19,&local_118,local_238.PaintArgs);
          FSlateWindowElementList::QueueDeferredPainting(local_238.WindowElementList,pFVar17);
          if (local_118.WidgetToPaintPtr.WeakReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar1 = &(local_118.WidgetToPaintPtr.WeakReferenceCount.ReferenceController)->
                      WeakReferenceCount;
            aVar2 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar2 == (atomic<int>)0x1) {
              (**(code **)((local_118.WidgetToPaintPtr.WeakReferenceCount.ReferenceController)->
                           _padding_ + 8))
                        (local_118.WidgetToPaintPtr.WeakReferenceCount.ReferenceController,1);
            }
          }
          pFVar19 = pFVar19 + 0x10;
        }
      }
      if (!param_6) {
        (**(code **)(*(longlong *)pIVar4 + 0x28))(pIVar4,this_01);
      }
    }
    LeaveCriticalSection(local_268);
  }
  return (bool)local_367;
}

// DrawWidget @ 146a6d4a0

/* WARNING: Enum "Type": Some values do not have unique names */

UTextureRenderTarget2D * __thiscall
FWidgetRenderer::DrawWidget
          (FWidgetRenderer *this,TSharedRef<SWidget,1> *param_1,TVector2<double> *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  double dVar3;
  FLinearColor FVar4;
  EPixelFormat EVar5;
  FSlateApplication *pFVar6;
  UObject *pUVar7;
  UTextureRenderTarget2D *pUVar8;
  FTextureRenderTargetResource *pFVar9;
  wchar_t *pwVar10;
  UTextureRenderTarget2D *pUVar11;
  UTextureRenderTarget2D *pUVar12;
  bool bVar13;
  double dVar14;
  TVector2<double>_u_0 local_38 [2];
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar2 + 0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar10 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar10,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    bVar13 = this->bUseGammaSpace;
    dVar3 = (param_2->field0_0x0)._s_0.X;
    dVar14 = (param_2->field0_0x0)._s_0.Y;
    if ((*(int *)(lVar2 + 0x9d4c) <
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__),
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       == -1)) {
      pwVar10 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar10,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
    pUVar12 = (UTextureRenderTarget2D *)0x0;
    pUVar8 = pUVar12;
    if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
       (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
        false)) {
      bVar13 = bVar13 == false;
      pFVar6 = FSlateApplication::Get();
      EVar5 = (**(code **)(**(longlong **)&pFVar6->field_0x60 + 0x1a8))();
      pUVar7 = GetTransientPackageAsObject();
      pUVar8 = NewObject<UTextureRenderTarget2D>(pUVar7);
      dVar14 = dVar14 * __real_4000000000000000;
      *(undefined1 *)((longlong)&pUVar8->_padding_ + 1) = 1;
      FVar4 = FLinearColor::Transparent;
      dVar3 = dVar3 * __real_4000000000000000;
      pbVar1 = (byte *)((longlong)&pUVar8->_padding_ + 6);
      *pbVar1 = *pbVar1 & 0xfe;
      dVar14 = dVar14 - __real_3fe0000000000000;
      dVar3 = dVar3 - __real_3fe0000000000000;
      pbVar1 = (byte *)((longlong)&pUVar8->_padding_ + 6);
      *pbVar1 = *pbVar1 | bVar13;
      (pUVar8->ClearColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar4.field0_0x0;
      *(undefined4 *)&pUVar8->_padding_ = 0x3f800000;
      UTextureRenderTarget2D::InitCustomFormat
                (pUVar8,(int)ROUND(dVar3) >> 1,(int)ROUND(dVar14) >> 1,EVar5,bVar13);
      UTextureRenderTarget2D::UpdateResourceImmediate(pUVar8,true);
    }
    pFVar9 = UTextureRenderTarget::GameThread_GetRenderTargetResource
                       ((UTextureRenderTarget *)pUVar8);
    local_38[0]._0_8_ = (param_2->field0_0x0)._s_0.X;
    local_38[0]._8_8_ = (param_2->field0_0x0)._s_0.Y;
    pUVar11 = (UTextureRenderTarget2D *)&pFVar9->_padding_;
    if (pFVar9 == (FTextureRenderTargetResource *)0x0) {
      pUVar11 = pUVar12;
    }
    DrawWidget(this,(FRenderTarget *)pUVar11,param_1,__real_3f800000,
               (TVector2<double> *)&local_38[0]._s_0,0.0,false);
  }
  else {
    pUVar8 = (UTextureRenderTarget2D *)0x0;
  }
  return pUVar8;
}

// DrawWidget @ 146a6d720

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWidgetRenderer::DrawWidget
          (FWidgetRenderer *this,FRenderTarget *param_1,TSharedRef<SWidget,1> *param_2,float param_3
          ,TVector2<double> *param_4,float param_5,bool param_6)

{
  SWidget *pSVar1;
  SWidget *pSVar2;
  double dVar3;
  FDeprecateVector2DParameter FVar4;
  int iVar5;
  TVector2<double> *pTVar6;
  int iVar7;
  FArguments *pFVar8;
  FHittestGrid *this_00;
  SWidget *this_01;
  SWidget *pSVar9;
  SWidget *pSVar10;
  bool bVar11;
  T0RequiredArgs local_res18 [16];
  TVector2<double>_u_0 local_288;
  TSharedRef<SVirtualWindow,1> local_278;
  TSlateDecl<SVirtualWindow,RequiredArgs::T0RequiredArgs> local_268;
  FArguments local_250;
  
  pFVar8 = SVirtualWindow::FArguments::FArguments(&local_250);
  pTVar6 = param_4;
  dVar3 = (param_4->field0_0x0)._s_0.Y;
  (pFVar8->_Size).field0_0x0._s_0.X = (param_4->field0_0x0)._s_0.X;
  (pFVar8->_Size).field0_0x0._s_0.Y = dVar3;
  FLLMScope::FLLMScope
            ((FLLMScope *)&param_4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_278.Object = (SVirtualWindow *)LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_288._s_0,(FName *)&local_278,true);
  TSlateDecl<SVirtualWindow,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVirtualWindow,RequiredArgs::T0RequiredArgs>
            (&local_268,"SVirtualWindow",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Slate\\WidgetRenderer.cpp"
             ,0x78,local_res18);
  FMemScope::~FMemScope((FMemScope *)&local_288._s_0);
  FLLMScope::~FLLMScope((FLLMScope *)&param_4);
  TSlateDecl<SVirtualWindow,RequiredArgs::T0RequiredArgs>::operator<<=(&local_268,&local_278,pFVar8)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_268._Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_250);
  this_00 = ::operator_new(0xf8);
  pSVar10 = (SWidget *)0x0;
  this_01 = pSVar10;
  if (this_00 != (FHittestGrid *)0x0) {
    this_01 = (SWidget *)FHittestGrid::FHittestGrid(this_00);
  }
  pSVar1 = param_2->Object;
  pSVar2 = (SWidget *)(pSVar1->ParentWidgetPtr).WeakReferenceCount.ReferenceController;
  pSVar9 = pSVar2;
  if (pSVar2 != (SWidget *)0x0) {
    iVar5 = (int)pSVar2->_padding_;
    do {
      pSVar9 = pSVar10;
      if (iVar5 == 0) goto LAB_146a6d865;
      LOCK();
      iVar7 = (int)pSVar2->_padding_;
      bVar11 = iVar5 == iVar7;
      if (bVar11) {
        *(int *)&pSVar2->_padding_ = iVar5 + 1;
        iVar7 = iVar5;
      }
      UNLOCK();
      iVar5 = iVar7;
    } while (!bVar11);
    pSVar10 = (pSVar1->ParentWidgetPtr).Object;
    pSVar9 = pSVar2;
  }
LAB_146a6d865:
  local_288._s_0.X = (double)param_2->Object;
  local_288._s_0.Y = (double)(param_2->SharedReferenceCount).ReferenceController;
  if ((TReferenceControllerBase<1> *)local_288._s_0.Y != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_288._s_0.Y)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_288._s_0.Y)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SWindow::SetContent((SWindow *)local_278.Object,(TSharedRef<SWidget,1> *)&local_288._s_0);
  param_4._0_4_ = (float)(pTVar6->field0_0x0)._s_0.X;
  param_4._4_4_ = (float)(pTVar6->field0_0x0)._s_0.Y;
  FVar4._4_4_ = param_4._4_4_;
  FVar4._0_4_ = param_4._0_4_;
  SWindow::Resize((SWindow *)local_278.Object,FVar4);
  if (local_278.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_288._s_0.X = (pTVar6->field0_0x0)._s_0.X;
  local_288._s_0.Y = (pTVar6->field0_0x0)._s_0.Y;
  DrawWindow(this,param_1,(FHittestGrid *)this_01,(TSharedRef<SWindow,1> *)&local_278,param_3,
             (TVector2<double> *)&local_288._s_0,param_5,param_6);
  if (pSVar10 != (SWidget *)0x0) {
    pSVar1 = param_2->Object;
    if (pSVar9 != (SWidget *)0x0) {
      LOCK();
      *(int *)&pSVar9->_padding_ = (int)pSVar9->_padding_ + 1;
      UNLOCK();
    }
    local_288._0_8_ = pSVar10;
    local_288._8_8_ = pSVar9;
    SWidget::AssignParentWidget(pSVar1,(TSharedPtr<SWidget,1> *)&local_288._s_0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar9);
  if (this_01 != (SWidget *)0x0) {
    FHittestGrid::~FHittestGrid((FHittestGrid *)this_01);
    ::operator_delete(this_01,0xf8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_278.SharedReferenceCount.ReferenceController);
  return;
}

// DrawWidget @ 146a6d9b0

void __thiscall
FWidgetRenderer::DrawWidget
          (FWidgetRenderer *this,FRenderTarget *param_1,TSharedRef<SWidget,1> *param_2,
          TVector2<double> *param_3,float param_4,bool param_5)

{
  TVector2<double>_u_0 local_18;
  
  local_18._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_18._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  DrawWidget(this,param_1,param_2,__real_3f800000,(TVector2<double> *)&local_18._s_0,param_4,param_5
            );
  return;
}

// DrawWidget @ 146a6da00

void __thiscall
FWidgetRenderer::DrawWidget
          (FWidgetRenderer *this,UTextureRenderTarget2D *param_1,TSharedRef<SWidget,1> *param_2,
          float param_3,TVector2<double> *param_4,float param_5,bool param_6)

{
  FTextureRenderTargetResource *pFVar1;
  FRenderTarget *pFVar2;
  TVector2<double>_u_0 local_28 [2];
  
  pFVar1 = UTextureRenderTarget::GameThread_GetRenderTargetResource((UTextureRenderTarget *)param_1)
  ;
  local_28[0]._0_8_ = (param_4->field0_0x0)._s_0.X;
  local_28[0]._8_8_ = (param_4->field0_0x0)._s_0.Y;
  pFVar2 = (FRenderTarget *)&pFVar1->_padding_;
  if (pFVar1 == (FTextureRenderTargetResource *)0x0) {
    pFVar2 = (FRenderTarget *)0x0;
  }
  DrawWidget(this,pFVar2,param_2,param_3,(TVector2<double> *)&local_28[0]._s_0,param_5,param_6);
  return;
}

// DrawWidget @ 146a6da90

void __thiscall
FWidgetRenderer::DrawWidget
          (FWidgetRenderer *this,UTextureRenderTarget2D *param_1,TSharedRef<SWidget,1> *param_2,
          TVector2<double> *param_3,float param_4,bool param_5)

{
  FTextureRenderTargetResource *pFVar1;
  FRenderTarget *pFVar2;
  TVector2<double>_u_0 local_18;
  
  pFVar1 = UTextureRenderTarget::GameThread_GetRenderTargetResource((UTextureRenderTarget *)param_1)
  ;
  local_18._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_18._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  pFVar2 = (FRenderTarget *)&pFVar1->_padding_;
  if (pFVar1 == (FTextureRenderTargetResource *)0x0) {
    pFVar2 = (FRenderTarget *)0x0;
  }
  DrawWidget(this,pFVar2,param_2,__real_3f800000,(TVector2<double> *)&local_18._s_0,param_4,param_5)
  ;
  return;
}

// DrawWindow @ 146a6e0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWidgetRenderer::DrawWindow
          (FWidgetRenderer *this,FPaintArgs *param_1,FRenderTarget *param_2,
          TSharedRef<SWindow,1> *param_3,FGeometry *param_4,FSlateRect *param_5,float param_6,
          bool param_7)

{
  TArray<TSharedPtr<FSlateWindowElementList::FDeferredPaint,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  ISlate3DRenderer *pIVar2;
  TSharedPtr<FSlateWindowElementList::FDeferredPaint,1> *pTVar3;
  FScriptContainerElement *pFVar4;
  ISlate3DRenderer *pIVar5;
  code *pcVar6;
  bool bVar7;
  FSlateApplication *pFVar8;
  FSlateDrawBuffer *this_00;
  FSlateWindowElementList *pFVar9;
  wchar_t *pwVar10;
  int iVar11;
  undefined1 auStackY_178 [32];
  undefined8 local_134;
  ForAnyElementType local_128;
  undefined8 local_120;
  FLinearColor_u_0 local_118;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  TVector2<float>_u_0 local_e8;
  FDeprecateVector2DParameter local_e0;
  FGeometry *local_d8;
  FPaintArgs *local_d0;
  LARGE_INTEGER local_c8;
  FRenderTarget *local_c0;
  longlong *local_b8;
  LPCRITICAL_SECTION local_b0;
  TSharedRef<SWindow,1> local_a8;
  FSlateDrawBuffer *local_98;
  double local_90;
  float local_88;
  double local_80;
  float local_78;
  FRenderTarget *local_70;
  ISlate3DRenderer *local_68;
  undefined1 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_d8 = param_4;
  local_d0 = param_1;
  local_c0 = param_2;
  pFVar8 = FSlateApplication::Get();
  local_b8 = *(longlong **)&pFVar8->field_0x60;
  local_b0 = (LPCRITICAL_SECTION)(**(code **)(*local_b8 + 0x160))();
  if (local_b0 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_b0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar10 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar10,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    if (this->bPrepassNeeded != false) {
      SWidget::SlatePrepass((SWidget *)param_3->Object,param_4->Scale);
    }
    local_e8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_134._4_4_ = param_5->Bottom - param_5->Top;
    local_134._0_4_ = param_5->Right - param_5->Left;
    local_e0 = local_134;
    local_134 = *(FDeprecateVector2DParameter *)param_5;
    FHittestGrid::SetHittestArea
              (param_1->CurrentGrid,(FDeprecateVector2DParameter *)&local_134,&local_e0,
               (FDeprecateVector2DParameter *)&local_e8._s_0);
    if (this->bClearHitTestGrid != false) {
      FHittestGrid::Clear(param_1->CurrentGrid);
    }
    if (((this->Renderer).Object == (ISlate3DRenderer *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pIVar2 = (this->Renderer).Object;
    this_00 = (FSlateDrawBuffer *)(**(code **)(*(longlong *)pIVar2 + 0x20))(pIVar2);
    local_a8.Object = param_3->Object;
    local_a8.SharedReferenceCount.ReferenceController =
         (param_3->SharedReferenceCount).ReferenceController;
    if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar9 = FSlateDrawBuffer::AddWindowElementList(this_00,&local_a8);
    local_f8 = FWidgetStyle::SubdueAmount * FLinearColor::White.field0_0x0._s_0.R;
    local_118._s_0.R = FLinearColor::White.field0_0x0._s_0.R;
    local_108 = FLinearColor::White.field0_0x0._s_0.R;
    local_f0 = FWidgetStyle::SubdueAmount * FLinearColor::White.field0_0x0._s_0.B;
    local_f4 = FWidgetStyle::SubdueAmount * FLinearColor::White.field0_0x0._s_0.G;
    local_ec = FWidgetStyle::SubdueAmount * FLinearColor::White.field0_0x0._s_0.A;
    local_118._s_0.G = FLinearColor::White.field0_0x0._s_0.G;
    local_118._s_0.B = FLinearColor::White.field0_0x0._s_0.B;
    local_118._s_0.A = FLinearColor::White.field0_0x0._s_0.A;
    local_104 = FLinearColor::White.field0_0x0._s_0.G;
    local_100 = FLinearColor::White.field0_0x0._s_0.B;
    local_fc = FLinearColor::White.field0_0x0._s_0.A;
    SWidget::Paint((SWidget *)param_3->Object,local_d0,local_d8,param_5,pFVar9,0,
                   (FWidgetStyle *)&local_118._s_0,
                   (bool)*(TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                           *)((longlong)&param_3->Object->_padding_ + 2));
    iVar11 = (pFVar9->DeferredPaintList).ArrayNum;
    pTVar3 = (TSharedPtr<FSlateWindowElementList::FDeferredPaint,1> *)
             (pFVar9->DeferredPaintList).AllocatorInstance.Data;
    local_128.Data = (FScriptContainerElement *)0x0;
    local_120 = CONCAT44(local_120._4_4_,iVar11);
    if (iVar11 == 0) {
      local_120 = 0;
      local_120._0_4_ = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar11,0,&local_128,iVar11,(int *)((longlong)&local_120 + 4));
      ConstructItems<TSharedPtr<FSlateWindowElementList::FDeferredPaint,1>,TSharedPtr<FSlateWindowElementList::FDeferredPaint,1>,int>
                (local_128.Data,pTVar3,iVar11);
    }
    pTVar1 = &this->DeferredPaints;
    iVar11 = (int)local_120;
    if (pTVar1 != (TArray<TSharedPtr<FSlateWindowElementList::FDeferredPaint,1>,TSizedDefaultAllocator<32>_>
                   *)&local_128) {
      DestructItems<TSharedPtr<FSlateWindowElementList::FDeferredPaint,1>,int>
                ((TSharedPtr<FSlateWindowElementList::FDeferredPaint,1> *)
                 (pTVar1->AllocatorInstance).Data,(this->DeferredPaints).ArrayNum);
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pTVar1->AllocatorInstance).Data = local_128.Data;
      (this->DeferredPaints).ArrayNum = (int)local_120;
      (this->DeferredPaints).ArrayMax = local_120._4_4_;
      local_120 = 0;
      local_128.Data = (FScriptContainerElement *)0x0;
      iVar11 = 0;
    }
    DestructItems<TSharedPtr<FSlateWindowElementList::FDeferredPaint,1>,int>
              ((TSharedPtr<FSlateWindowElementList::FDeferredPaint,1> *)local_128.Data,iVar11);
    if ((TSharedPtr<FSlateWindowElementList::FDeferredPaint,1> *)local_128.Data !=
        (TSharedPtr<FSlateWindowElementList::FDeferredPaint,1> *)0x0) {
      FMemory::Free(local_128.Data);
    }
    if (((this->Renderer).Object == (ISlate3DRenderer *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pIVar5 = (this->Renderer).Object;
    (**(code **)(*(longlong *)pIVar5 + 0x30))(pIVar5,this_00);
    *(float *)&this_00->ViewOffset = (float)(this->ViewOffset).field0_0x0._s_0.X;
    *(float *)&(this_00->ViewOffset).field_0x4 = (float)(this->ViewOffset).field0_0x0._s_0.Y;
    local_90 = (double)FApp::CurrentTime - GStartTime;
    local_88 = (float)(double)FApp::DeltaTime;
    local_98 = this_00;
    QueryPerformanceCounter(&local_c8);
    local_80 = ((double)local_c8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
               __real_4170000000000000) - GStartTime;
    local_70 = local_c0;
    local_68 = (this->Renderer).Object;
    local_60 = this->bClearTarget;
    local_78 = (float)(double)FApp::DeltaTime;
    (**(code **)(*local_b8 + 0x1a0))(local_b8,&local_98,param_7);
    if (!param_7) {
      (**(code **)(*(longlong *)pIVar2 + 0x28))(pIVar2,this_00);
    }
  }
  LeaveCriticalSection(local_b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// DrawWindow @ 146a6e5e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWidgetRenderer::DrawWindow
          (FWidgetRenderer *this,FPaintArgs *param_1,UTextureRenderTarget2D *param_2,
          TSharedRef<SWindow,1> *param_3,FGeometry *param_4,FSlateRect *param_5,float param_6,
          bool param_7)

{
  FTextureRenderTargetResource *pFVar1;
  FRenderTarget *pFVar2;
  TSharedRef<SWindow,1> local_68;
  FSlateRect local_58;
  FGeometry local_48;
  
  local_68.Object = param_3->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar1 = UTextureRenderTarget::GameThread_GetRenderTargetResource((UTextureRenderTarget *)param_2)
  ;
  local_58.Left = param_5->Left;
  local_58.Top = param_5->Top;
  local_58.Right = param_5->Right;
  local_58.Bottom = param_5->Bottom;
  local_48.Size = param_4->Size;
  local_48._8_8_ = *(undefined8 *)&param_4->Scale;
  local_48._16_8_ = *(undefined8 *)((longlong)&(param_4->AbsolutePosition).field0_0x0 + 4);
  local_48._24_8_ = *(undefined8 *)((longlong)&(param_4->Position).field0_0x0 + 4);
  local_48.AccumulatedRenderTransform.M.M._4_8_ =
       *(undefined8 *)((param_4->AccumulatedRenderTransform).M.M[0] + 1);
  local_48.AccumulatedRenderTransform._12_8_ =
       *(undefined8 *)((param_4->AccumulatedRenderTransform).M.M[1] + 1);
  local_48._48_8_ =
       *(undefined8 *)((longlong)&(param_4->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
  pFVar2 = (FRenderTarget *)&pFVar1->_padding_;
  if (pFVar1 == (FTextureRenderTargetResource *)0x0) {
    pFVar2 = (FRenderTarget *)0x0;
  }
  DrawWindow(this,param_1,pFVar2,&local_68,&local_48,&local_58,param_6,param_7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// DrawWindow @ 146a6e6d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWidgetRenderer::DrawWindow
          (FWidgetRenderer *this,FRenderTarget *param_1,FHittestGrid *param_2,
          TSharedRef<SWindow,1> *param_3,float param_4,TVector2<double> *param_5,float param_6,
          bool param_7)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 local_118;
  TVector2<float>_u_0 local_110;
  float fStack_108;
  float local_104;
  float fStack_100;
  float fStack_fc;
  FSlateRect local_f8;
  FSlateRect local_e8;
  TTransform2<float> local_d8;
  FDeprecateSlateVector2D local_c0;
  float fStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  TTransform2<float> TStack_a4;
  uint uStack_8c;
  FGeometry local_88;
  
  local_e8.Top = 0.0;
  local_e8.Right = 0.0;
  local_d8.Trans.field0_0x0 = (TVector2<float>_u_0)0x0;
  fStack_b8 = 1.0;
  uStack_b4 = 0;
  local_b0 = 0;
  local_110._s_0.Y = 0.0;
  fStack_108 = 0.0;
  fStack_100 = 0.0;
  fStack_fc = 0.0;
  local_110._s_0.X = param_4;
  local_104 = param_4;
  local_d8.M.M[0][0] = (float)___xmm_3f80000000000000000000003f800000;
  local_d8.M.M[0][1] = (float)((ulonglong)___xmm_3f80000000000000000000003f800000 >> 0x20);
  local_d8.M.M[1][0] = (float)_UNK_15076b188;
  local_d8.M.M[1][1] = (float)((ulonglong)_UNK_15076b188 >> 0x20);
  local_118._4_4_ = (float)((double)(__real_3f800000 / param_4) * (param_5->field0_0x0)._s_0.Y);
  local_118._0_4_ = (float)((double)(__real_3f800000 / param_4) * (param_5->field0_0x0)._s_0.X);
  local_c0 = local_118;
  uStack_ac = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
  uStack_a8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
  Concatenate<TTransform2<float>_>(&TStack_a4,(TTransform2<float> *)&local_110._s_0,&local_d8);
  uStack_8c = uStack_8c & 0xfffffffe;
  local_d8.M.M[0][1] = 0.0;
  local_d8.M.M[1][0] = 0.0;
  local_f8.Left = local_c0._0_4_;
  local_f8.Top = local_c0._4_4_;
  uStack_b4 = 0;
  local_b0 = 0;
  local_e8.Left = 0.0;
  local_e8.Top = local_f8.Top;
  uVar2._0_4_ = 0.0;
  uVar2._4_4_ = 0.0;
  uStack_ac = 0;
  uStack_a8 = 0;
  local_110._s_0.X = param_4 * 0.0 + 0.0;
  fStack_b8 = param_4;
  local_110._s_0.Y = param_4 * 0.0 + 0.0;
  fStack_108 = local_f8.Left * param_4;
  local_104 = param_4 * 0.0;
  fStack_100 = param_4 * 0.0;
  fStack_fc = local_f8.Top * param_4;
  local_f8._0_8_ = uVar2;
  FSlateRotatedRect::ToBoundingRect((FSlateRotatedRect *)&local_110._s_0,&local_e8);
  local_f8.Top = local_e8.Top;
  local_f8.Left = local_e8.Left;
  local_f8.Bottom = local_e8.Bottom;
  local_f8.Right = local_e8.Right;
  local_d8.M.M[0][0] = SUB84(param_3->Object,0);
  local_d8.M.M[0][1] = (float)((ulonglong)param_3->Object >> 0x20);
  pTVar1 = (param_3->SharedReferenceCount).ReferenceController;
  local_d8.M.M[1][0] = SUB84(pTVar1,0);
  local_d8.M.M[1][1] = (float)((ulonglong)pTVar1 >> 0x20);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88.Position.field0_0x0._0_4_ = uStack_ac;
  local_88.AbsolutePosition.field0_0x0._s_0.Y = (float)local_b0;
  local_88.AccumulatedRenderTransform.M.M[0][0] = TStack_a4.M.M[0][0];
  local_88.Position.field0_0x0._s_0.Y = (float)uStack_a8;
  local_88.AbsolutePosition.field0_0x0._0_4_ = uStack_b4;
  local_88.Scale = fStack_b8;
  local_88._52_4_ = uStack_8c;
  local_88.AccumulatedRenderTransform.Trans.field0_0x0._s_0.Y = TStack_a4.Trans.field0_0x0._s_0.Y;
  local_88.Size = local_c0;
  local_88.AccumulatedRenderTransform.M.M[0][1] = TStack_a4.M.M[0][1];
  local_88.AccumulatedRenderTransform.M.M[1][0] = TStack_a4.M.M[1][0];
  local_88.AccumulatedRenderTransform._12_8_ = TStack_a4._12_8_;
  DrawWindow(this,param_1,param_2,(TSharedRef<SWindow,1> *)&local_d8,&local_88,&local_f8,param_6,
             param_7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// DrawWindow @ 146a6e960

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWidgetRenderer::DrawWindow
          (FWidgetRenderer *this,FRenderTarget *param_1,FHittestGrid *param_2,
          TSharedRef<SWindow,1> *param_3,FGeometry *param_4,FSlateRect *param_5,float param_6,
          bool param_7)

{
  FDeprecateVector2DParameter FVar1;
  TSharedRef<SWindow,1> local_a8;
  FSlateRect local_98;
  FGeometry local_88;
  FPaintArgs local_48;
  
  FVar1._4_4_ = (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
  FVar1._0_4_ = (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
  FPaintArgs::FPaintArgs(&local_48,(SWidget *)0x0,param_2,FVar1,(double)FApp::CurrentTime,param_6);
  local_a8.Object = param_3->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.Left = param_5->Left;
  local_98.Top = param_5->Top;
  local_98.Right = param_5->Right;
  local_98.Bottom = param_5->Bottom;
  local_88.Size = param_4->Size;
  local_88._8_8_ = *(undefined8 *)&param_4->Scale;
  local_88._16_8_ = *(undefined8 *)((longlong)&(param_4->AbsolutePosition).field0_0x0 + 4);
  local_88._24_8_ = *(undefined8 *)((longlong)&(param_4->Position).field0_0x0 + 4);
  local_88.AccumulatedRenderTransform.M.M._4_8_ =
       *(undefined8 *)((param_4->AccumulatedRenderTransform).M.M[0] + 1);
  local_88.AccumulatedRenderTransform._12_8_ =
       *(undefined8 *)((param_4->AccumulatedRenderTransform).M.M[1] + 1);
  local_88._48_8_ =
       *(undefined8 *)((longlong)&(param_4->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
  DrawWindow(this,&local_48,param_1,&local_a8,&local_88,&local_98,param_6,param_7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// DrawWindow @ 146a6eaa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWidgetRenderer::DrawWindow
          (FWidgetRenderer *this,UTextureRenderTarget2D *param_1,FHittestGrid *param_2,
          TSharedRef<SWindow,1> *param_3,float param_4,TVector2<double> *param_5,float param_6,
          bool param_7)

{
  FTextureRenderTargetResource *pFVar1;
  FRenderTarget *pFVar2;
  TSharedRef<SWindow,1> local_28;
  TVector2<double>_u_0 local_18;
  
  local_28.Object = param_3->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar1 = UTextureRenderTarget::GameThread_GetRenderTargetResource((UTextureRenderTarget *)param_1)
  ;
  local_18._s_0.X = (param_5->field0_0x0)._s_0.X;
  local_18._s_0.Y = (param_5->field0_0x0)._s_0.Y;
  pFVar2 = (FRenderTarget *)&pFVar1->_padding_;
  if (pFVar1 == (FTextureRenderTargetResource *)0x0) {
    pFVar2 = (FRenderTarget *)0x0;
  }
  DrawWindow(this,pFVar2,param_2,&local_28,param_4,(TVector2<double> *)&local_18._s_0,param_6,
             param_7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// DrawWindow @ 146a6eb60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWidgetRenderer::DrawWindow
          (FWidgetRenderer *this,UTextureRenderTarget2D *param_1,FHittestGrid *param_2,
          TSharedRef<SWindow,1> *param_3,FGeometry *param_4,FSlateRect *param_5,float param_6,
          bool param_7)

{
  FTextureRenderTargetResource *pFVar1;
  FRenderTarget *pFVar2;
  TSharedRef<SWindow,1> local_68;
  FSlateRect local_58;
  FGeometry local_48;
  
  local_68.Object = param_3->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar1 = UTextureRenderTarget::GameThread_GetRenderTargetResource((UTextureRenderTarget *)param_1)
  ;
  local_58.Left = param_5->Left;
  local_58.Top = param_5->Top;
  local_58.Right = param_5->Right;
  local_58.Bottom = param_5->Bottom;
  local_48.Size = param_4->Size;
  local_48._8_8_ = *(undefined8 *)&param_4->Scale;
  local_48._16_8_ = *(undefined8 *)((longlong)&(param_4->AbsolutePosition).field0_0x0 + 4);
  local_48._24_8_ = *(undefined8 *)((longlong)&(param_4->Position).field0_0x0 + 4);
  local_48.AccumulatedRenderTransform.M.M._4_8_ =
       *(undefined8 *)((param_4->AccumulatedRenderTransform).M.M[0] + 1);
  local_48.AccumulatedRenderTransform._12_8_ =
       *(undefined8 *)((param_4->AccumulatedRenderTransform).M.M[1] + 1);
  local_48._48_8_ =
       *(undefined8 *)((longlong)&(param_4->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
  pFVar2 = (FRenderTarget *)&pFVar1->_padding_;
  if (pFVar1 == (FTextureRenderTargetResource *)0x0) {
    pFVar2 = (FRenderTarget *)0x0;
  }
  DrawWindow(this,pFVar2,param_2,&local_68,&local_48,&local_58,param_6,param_7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// GetSlateRenderer @ 146a79300

ISlate3DRenderer * __thiscall FWidgetRenderer::GetSlateRenderer(FWidgetRenderer *this)

{
  return (this->Renderer).Object;
}

// SetApplyColorDeficiencyCorrection @ 146a92790

void __thiscall
FWidgetRenderer::SetApplyColorDeficiencyCorrection(FWidgetRenderer *this,bool param_1)

{
  ISlate3DRenderer *pIVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
  {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1) {
      pwVar4 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar4,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    if ((this->Renderer).Object == (ISlate3DRenderer *)0x0) {
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
    pIVar1 = (this->Renderer).Object;
    (**(code **)(*(longlong *)pIVar1 + 0x10))(pIVar1,param_1);
  }
  return;
}

// SetUseGammaCorrection @ 146a94d10

void __thiscall FWidgetRenderer::SetUseGammaCorrection(FWidgetRenderer *this,bool param_1)

{
  ISlate3DRenderer *pIVar1;
  code *pcVar2;
  void *pvVar3;
  bool bVar4;
  wchar_t *pwVar5;
  ulonglong uVar6;
  
  pvVar3 = ThreadLocalStoragePointer;
  uVar6 = (ulonglong)_tls_index;
  this->bUseGammaSpace = param_1;
  if (*(int *)(*(longlong *)((longlong)pvVar3 + uVar6 * 8) + 0x9d4c) <
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
  {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1) {
      pwVar5 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar5,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    if ((this->Renderer).Object == (ISlate3DRenderer *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pIVar1 = (this->Renderer).Object;
    (**(code **)(*(longlong *)pIVar1 + 8))(pIVar1,param_1);
  }
  return;
}

