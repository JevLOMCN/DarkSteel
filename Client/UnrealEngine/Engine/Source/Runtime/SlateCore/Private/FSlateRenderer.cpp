// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 36

// FSlateRenderer @ 1424eb060

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FSlateRenderer * __thiscall
FSlateRenderer::FSlateRenderer(FSlateRenderer *this,TSharedRef<FSlateFontServices,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FSlateRenderer *pFVar4;
  
  this->_padding_ = (longlong)&___7FSlateRenderer__6B_;
  (this->SlateFontServices).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SlateFontServices).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(undefined8 *)&(this->SlateWindowRendered).field_0x18 = 2;
  *(undefined8 *)&this->SlateWindowRendered = 0;
  *(undefined8 *)&(this->SlateWindowRendered).field_0x8 = 0;
  *(undefined8 *)&(this->SlateWindowRendered).field_0x10 = 0;
  *(undefined8 *)&this->OnSlateWindowDestroyedDelegate = 0;
  *(undefined8 *)&(this->OnSlateWindowDestroyedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnSlateWindowDestroyedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->PreResizeBackBufferDelegate = 0;
  *(undefined8 *)&(this->PreResizeBackBufferDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->PreResizeBackBufferDelegate).field_0x10 = 0;
  *(undefined8 *)&this->PostResizeBackBufferDelegate = 0;
  *(undefined8 *)&(this->PostResizeBackBufferDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->PostResizeBackBufferDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnSlateWindowDestroyedDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->PreResizeBackBufferDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->PostResizeBackBufferDelegate).field_0x18 = 2;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->OnBackBufferReadyToPresentDelegate,4000);
  *(undefined8 *)&(this->OnBackBufferReadyToPresentDelegate).field_0x28 = 0;
  *(undefined8 *)&(this->OnBackBufferReadyToPresentDelegate).field_0x30 = 0;
  *(undefined8 *)&(this->OnBackBufferReadyToPresentDelegate).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->OnAddBackBufferReadyToPresentPassDelegate,4000);
  *(undefined8 *)&(this->OnAddBackBufferReadyToPresentPassDelegate).field_0x28 = 0;
  *(undefined8 *)&(this->OnAddBackBufferReadyToPresentPassDelegate).field_0x30 = 0;
  *(undefined8 *)&(this->OnAddBackBufferReadyToPresentPassDelegate).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ResourceCriticalSection,4000);
  if ((this->SlateFontServices).Object == (FSlateFontServices *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FSlateRenderer *)(*pcVar2)();
      return pFVar4;
    }
  }
  TMulticastDelegateRegistration<void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>::
  AddRaw<FSlateRenderer>
            ((TMulticastDelegateRegistration<void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
              *)&((this->SlateFontServices).Object)->OnReleaseResourcesDelegate,
             (FSlateRenderer *)&stack0x00000008,(pmf_483de2f3)this);
  return this;
}

// ~FSlateRenderer @ 1424ecae0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateRenderer::~FSlateRenderer(FSlateRenderer *this)

{
  FSlateFontServices *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FSlateRenderer__6B_;
  pFVar1 = (this->SlateFontServices).Object;
  if (pFVar1 != (FSlateFontServices *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pFVar1->OnReleaseResourcesDelegate,this);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ResourceCriticalSection);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnAddBackBufferReadyToPresentPassDelegate).field_0x28,
             *(int *)&(this->OnAddBackBufferReadyToPresentPassDelegate).field_0x30);
  pvVar2 = *(void **)&(this->OnAddBackBufferReadyToPresentPassDelegate).field_0x28;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->OnAddBackBufferReadyToPresentPassDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnBackBufferReadyToPresentDelegate).field_0x28,
             *(int *)&(this->OnBackBufferReadyToPresentDelegate).field_0x30);
  pvVar2 = *(void **)&(this->OnBackBufferReadyToPresentDelegate).field_0x28;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->OnBackBufferReadyToPresentDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PostResizeBackBufferDelegate).field_0x8,
             *(int *)&(this->PostResizeBackBufferDelegate).field_0x10);
  pvVar2 = *(void **)&(this->PostResizeBackBufferDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PostResizeBackBufferDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PreResizeBackBufferDelegate).field_0x8,
             *(int *)&(this->PreResizeBackBufferDelegate).field_0x10);
  pvVar2 = *(void **)&(this->PreResizeBackBufferDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PreResizeBackBufferDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSlateWindowDestroyedDelegate).field_0x8,
             *(int *)&(this->OnSlateWindowDestroyedDelegate).field_0x10);
  pvVar2 = *(void **)&(this->OnSlateWindowDestroyedDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSlateWindowDestroyedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->SlateWindowRendered).field_0x8,*(int *)&(this->SlateWindowRendered).field_0x10
            );
  pvVar2 = *(void **)&(this->SlateWindowRendered).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->SlateWindowRendered);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SlateFontServices).SharedReferenceCount.ReferenceController);
  return;
}

// AddWidgetRendererUpdate @ 142501400

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateRenderer::AddWidgetRendererUpdate
          (FSlateRenderer *this,FRenderThreadUpdateContext *param_1,bool param_2)

{
  return;
}

// AreShadersInitialized @ 142501d90

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall FSlateRenderer::AreShadersInitialized(FSlateRenderer *this)

{
  return true;
}

// BeginFrame @ 142501e60

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateRenderer::BeginFrame(FSlateRenderer *this)

{
  return;
}

// CanRenderResource @ 142503910

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall FSlateRenderer::CanRenderResource(FSlateRenderer *this,UObject *param_1)

{
  return true;
}

// CopyWindowsToVirtualScreenBuffer @ 142505a70

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateRenderer::CopyWindowsToVirtualScreenBuffer
          (FSlateRenderer *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// DestroyCachedFastPathElementData @ 142507580

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateRenderer::DestroyCachedFastPathElementData
          (FSlateRenderer *this,FSlateCachedElementData *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<FSlateCachedElementList_*> FVar4;
  void *pvVar5;
  code *pcVar6;
  bool bVar7;
  
  if (param_1 != (FSlateCachedElementData *)0x0) {
    DestructItems<FSlateCachedClipState,int>
              ((FSlateCachedClipState *)(param_1->CachedClipStates).AllocatorInstance.Data,
               (param_1->CachedClipStates).ArrayNum);
    pFVar3 = (param_1->CachedClipStates).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    FVar4 = (param_1->ListsWithNewData).AllocatorInstance.SecondaryData;
    if (FVar4 != (ForElementType<FSlateCachedElementList_*>)0x0) {
      FMemory::Free((void *)FVar4);
    }
    DestructItems<TSharedPtr<FSlateCachedElementList,1>,int>
              ((TSharedPtr<FSlateCachedElementList,1> *)
               (param_1->CachedElementLists).AllocatorInstance.Data,
               (param_1->CachedElementLists).ArrayNum);
    pFVar3 = (param_1->CachedElementLists).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    puVar1 = &(param_1->CachedBatches).field_0xc;
    *(undefined4 *)&(param_1->CachedBatches).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x90,0x10,0,(ForAnyElementType *)param_1,0,(int *)puVar1);
    }
    *(undefined4 *)&(param_1->CachedBatches).field_0x34 = 0;
    *(undefined4 *)&(param_1->CachedBatches).field_0x30 = 0xffffffff;
    iVar2 = *(int *)&(param_1->CachedBatches).field_0x2c;
    *(undefined4 *)&(param_1->CachedBatches).field_0x28 = 0;
    if ((iVar2 < 0) || (0x80 < iVar2)) {
      *(undefined4 *)&(param_1->CachedBatches).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(param_1->CachedBatches).field_0x10,0);
    }
    pvVar5 = *(void **)&(param_1->CachedBatches).field_0x20;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    if (*(void **)&param_1->CachedBatches != (void *)0x0) {
      FMemory::Free(*(void **)&param_1->CachedBatches);
    }
    ::operator_delete(param_1,0x1f8);
    return;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("ElementData",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\SlateRenderer.cpp"
                     ,0xcc,L"");
  if (bVar7) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  return;
}

// DestroyCachedFastPathRenderingData @ 1425076b0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateRenderer::DestroyCachedFastPathRenderingData
          (FSlateRenderer *this,FSlateCachedFastPathRenderingData *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 != (FSlateCachedFastPathRenderingData *)0x0) {
    FSlateCachedFastPathRenderingData::_scalar_deleting_destructor_(param_1,1);
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("FastPathRenderingData",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\SlateRenderer.cpp"
                     ,0xc6,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// EndFrame @ 142508650

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateRenderer::EndFrame(FSlateRenderer *this)

{
  return;
}

// FlushCommands @ 14250b240

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateRenderer::FlushCommands(FSlateRenderer *this)

{
  return;
}

// GenerateDynamicImageResource @ 14250b9a0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TIntPoint<int> __thiscall
FSlateRenderer::GenerateDynamicImageResource(FSlateRenderer *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  TIntPoint<int> TVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Rendering\\SlateRenderer.h"
                     ,0x140,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar1)();
    return (TIntPoint<int>)TVar3.field0_0x0;
  }
  *(undefined8 *)param_1 = 0;
  return (TIntPoint<int>)param_1;
}

// GenerateDynamicImageResource @ 14250b9f0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
FSlateRenderer::GenerateDynamicImageResource
          (FSlateRenderer *this,FName param_1,uint param_2,uint param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  return false;
}

// GenerateDynamicImageResource @ 14250ba00

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
FSlateRenderer::GenerateDynamicImageResource
          (FSlateRenderer *this,FName param_1,TSharedRef<FSlateTextureData,1> *param_2)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return false;
}

// GetDrawBuffer @ 14250d570

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FSlateDrawBuffer * __thiscall FSlateRenderer::GetDrawBuffer(FSlateRenderer *this)

{
  FSlateDrawBuffer *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014250d573. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FSlateDrawBuffer *)(**(code **)(this->_padding_ + 0x10))();
  return pFVar1;
}

// GetFontAtlasProvider @ 14250d580

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

ISlateAtlasProvider * __thiscall FSlateRenderer::GetFontAtlasProvider(FSlateRenderer *this)

{
  FSlateFontServices *pFVar1;
  FSlateFontCache *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  ISlateAtlasProvider *pIVar6;
  
  if ((this->SlateFontServices).Object == (FSlateFontServices *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pIVar6 = (ISlateAtlasProvider *)(*pcVar4)();
      return pIVar6;
    }
  }
  pFVar1 = (this->SlateFontServices).Object;
  pFVar2 = (pFVar1->GameThreadFontCache).Object;
  pTVar3 = (pFVar1->GameThreadFontCache).SharedReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return (ISlateAtlasProvider *)pFVar2;
}

// GetResourceHandle @ 14250eca0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FSlateResourceHandle * __thiscall
FSlateRenderer::GetResourceHandle
          (FSlateRenderer *this,FSlateResourceHandle *__return_storage_ptr__,FSlateBrush *param_1)

{
  (**(code **)(this->_padding_ + 0x88))();
  return __return_storage_ptr__;
}

// GetSlateRecommendedColorFormat @ 14250f8c0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

EPixelFormat __thiscall FSlateRenderer::GetSlateRecommendedColorFormat(FSlateRenderer *this)

{
  return PF_B8G8R8A8;
}

// GetTextureAtlasProvider @ 14250f980

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

ISlateAtlasProvider * __thiscall FSlateRenderer::GetTextureAtlasProvider(FSlateRenderer *this)

{
  return (ISlateAtlasProvider *)0x0;
}

// GetViewportResource @ 14250fae0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall FSlateRenderer::GetViewportResource(FSlateRenderer *this,SWindow *param_1)

{
  return (void *)0x0;
}

// HandleFontCacheReleaseResources @ 142510320

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateRenderer::HandleFontCacheReleaseResources(FSlateRenderer *this,FSlateFontCache *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142510323. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xc0))();
  return;
}

// HasLostDevice @ 1425103c0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall FSlateRenderer::HasLostDevice(FSlateRenderer *this)

{
  return false;
}

// InvalidateAllViewports @ 142510e80

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateRenderer::InvalidateAllViewports(FSlateRenderer *this)

{
  return;
}

// IsViewportFullscreen @ 142511a70

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSlateRenderer::IsViewportFullscreen(FSlateRenderer *this,SWindow *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  TSharedPtr<FGenericWindow_const_,1> *pTVar7;
  FGenericWindow *pFVar8;
  TSharedPtr<FGenericWindow_const_,1> local_28;
  TSharedPtr<FGenericWindow_const_,1> local_18;
  
  bVar2 = false;
  pTVar7 = SWindow::GetNativeWindow(param_1,&local_28);
  if ((pTVar7->Object == (FGenericWindow *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  cVar5 = (**(code **)(pTVar7->Object->_padding_ + 0xd0))();
  if (cVar5 == '\0') {
LAB_142511b4e:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  else {
    if (((param_1->NativeWindow).Object == (FGenericWindow *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    iVar6 = (**(code **)(((param_1->NativeWindow).Object)->_padding_ + 0x68))();
    if (iVar6 != 0) goto LAB_142511b4e;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    bVar2 = true;
    pTVar7 = SWindow::GetNativeWindow(param_1,&local_18);
    pFVar8 = TSharedPtr<FGenericWindow_const_,1>::operator->(pTVar7);
    cVar5 = (**(code **)(pFVar8->_padding_ + 200))(pFVar8);
    if (cVar5 != '\0') {
      bVar3 = true;
      goto LAB_142511b5e;
    }
  }
  bVar3 = false;
  if (!bVar2) {
    return false;
  }
LAB_142511b5e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return bVar3;
}

// LoadStyleResources @ 142511bb0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateRenderer::LoadStyleResources(FSlateRenderer *this,ISlateStyle *param_1)

{
  return;
}

// MapVirtualScreenBuffer @ 142515e10

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateRenderer::MapVirtualScreenBuffer(FSlateRenderer *this,FMappedTextureBuffer *param_1)

{
  return;
}

// OnVirtualDesktopSizeChanged @ 1425179b0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateRenderer::OnVirtualDesktopSizeChanged(FSlateRenderer *this,FDisplayMetrics *param_1)

{
  return;
}

// OnWindowFinishReshaped @ 1425179c0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateRenderer::OnWindowFinishReshaped(FSlateRenderer *this,TSharedPtr<SWindow,1> *param_1)

{
  return;
}

// PrepareToTakeHDRScreenshot @ 142519b40

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateRenderer::PrepareToTakeHDRScreenshot
          (FSlateRenderer *this,TIntRect<int> *param_1,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_2,SWindow *param_3)

{
  return;
}

// PrepareToTakeScreenshot @ 142519b50

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateRenderer::PrepareToTakeScreenshot
          (FSlateRenderer *this,TIntRect<int> *param_1,
          TArray<FColor,TSizedDefaultAllocator<32>_> *param_2,SWindow *param_3)

{
  return;
}

// ReleaseAccessedResources @ 14251b060

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateRenderer::ReleaseAccessedResources(FSlateRenderer *this,bool param_1)

{
  return;
}

// ReloadTextureResources @ 14251b110

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateRenderer::ReloadTextureResources(FSlateRenderer *this)

{
  return;
}

// SetColorVisionDeficiencyType @ 14251f270

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateRenderer::SetColorVisionDeficiencyType
          (FSlateRenderer *this,EColorVisionDeficiency param_1,int param_2,bool param_3,bool param_4
          )

{
  return;
}

// SetWindowRenderTarget @ 14251f7e0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateRenderer::SetWindowRenderTarget
          (FSlateRenderer *this,SWindow *param_1,IViewportRenderTargetProvider *param_2)

{
  return;
}

// Sync @ 142520090

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateRenderer::Sync(FSlateRenderer *this)

{
  return;
}

// UnmapVirtualScreenBuffer @ 1425238d0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateRenderer::UnmapVirtualScreenBuffer(FSlateRenderer *this)

{
  return;
}

