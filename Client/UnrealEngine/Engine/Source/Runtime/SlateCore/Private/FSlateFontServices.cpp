// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 10

// FSlateFontServices @ 1424eadc0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FSlateFontServices * __thiscall
FSlateFontServices::FSlateFontServices
          (FSlateFontServices *this,TSharedRef<FSlateFontCache,1> *param_1,
          TSharedRef<FSlateFontCache,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FSlateFontCache *pFVar2;
  FSharedReferencer<1> FVar3;
  TSharedRef<FSlateFontMeasure,1> *pTVar4;
  FSlateFontMeasure *pFVar5;
  int iVar6;
  int iVar7;
  TSharedRef<FSlateFontMeasure,1> local_48;
  TSharedRef<FSlateFontMeasure,1> local_38;
  
  (this->GameThreadFontCache).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->GameThreadFontCache).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->RenderThreadFontCache).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->RenderThreadFontCache).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSlateFontMeasure::Create(&this->GameThreadFontMeasure,&this->GameThreadFontCache);
  iVar7 = 0;
  if ((this->GameThreadFontCache).Object == (this->RenderThreadFontCache).Object) {
    local_48.SharedReferenceCount.ReferenceController =
         (this->GameThreadFontMeasure).SharedReferenceCount.ReferenceController;
    pFVar5 = (this->GameThreadFontMeasure).Object;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = &local_48;
    iVar6 = iVar7;
    iVar7 = 1;
    local_48.Object = pFVar5;
  }
  else {
    pTVar4 = FSlateFontMeasure::Create(&local_38,&this->RenderThreadFontCache);
    iVar6 = 2;
    pFVar5 = pTVar4->Object;
  }
  FVar3.ReferenceController = local_48.SharedReferenceCount.ReferenceController;
  (this->RenderThreadFontMeasure).Object = pFVar5;
  pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
  (this->RenderThreadFontMeasure).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (iVar6 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (iVar7 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar3.ReferenceController);
  }
  *(undefined8 *)&this->OnReleaseResourcesDelegate = 0;
  *(undefined8 *)&(this->OnReleaseResourcesDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnReleaseResourcesDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnReleaseResourcesDelegate).field_0x18 = 2;
  if (4 < (byte)LogSlate._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  TMulticastDelegateRegistration<void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>::
  AddRaw<FSlateFontServices>
            ((TMulticastDelegateRegistration<void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
              *)&((this->GameThreadFontCache).Object)->OnReleaseResourcesDelegate,
             (FSlateFontServices *)&stack0x00000008,(pmf_719b9969)this);
  pFVar2 = (this->RenderThreadFontCache).Object;
  if ((this->GameThreadFontCache).Object != pFVar2) {
    TMulticastDelegateRegistration<void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
    ::AddRaw<FSlateFontServices>
              ((TMulticastDelegateRegistration<void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
                *)&pFVar2->OnReleaseResourcesDelegate,(FSlateFontServices *)&stack0x00000008,
               (pmf_719b9969)this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FSlateFontServices @ 1424eca50

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateFontServices::~FSlateFontServices(FSlateFontServices *this)

{
  FSlateFontCache *pFVar1;
  void *pvVar2;
  
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &((this->GameThreadFontCache).Object)->OnReleaseResourcesDelegate,this);
  pFVar1 = (this->RenderThreadFontCache).Object;
  if ((this->GameThreadFontCache).Object != pFVar1) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pFVar1->OnReleaseResourcesDelegate,this);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnReleaseResourcesDelegate).field_0x8,
             *(int *)&(this->OnReleaseResourcesDelegate).field_0x10);
  pvVar2 = *(void **)&(this->OnReleaseResourcesDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnReleaseResourcesDelegate);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RenderThreadFontMeasure).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GameThreadFontMeasure).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RenderThreadFontCache).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GameThreadFontCache).SharedReferenceCount.ReferenceController);
  return;
}

// FlushFontCache @ 14250b250

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateFontServices::FlushFontCache(FSlateFontServices *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  ESlateTextureAtlasThreadId EVar3;
  longlong *plVar4;
  longlong lVar5;
  
  EVar3 = GetCurrentSlateTextureAtlasThreadId();
  if (EVar3 == Unknown) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtlasThreadId != ESlateTextureAtlasThreadId::Unknown",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\SlateRenderer.cpp"
                       ,0x4d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (EVar3 == Game) {
    plVar4 = &((this->GameThreadFontCache).Object)->_padding_;
    (**(code **)(*plVar4 + 8))(plVar4,param_1);
    lVar5 = 0x20;
    goto LAB_14250b2a6;
  }
  plVar4 = &((this->RenderThreadFontCache).Object)->_padding_;
  (**(code **)(*plVar4 + 8))(plVar4,param_1);
  lVar5 = 0x30;
LAB_14250b2a6:
  FSlateFontMeasure::FlushCache
            (*(FSlateFontMeasure **)((longlong)&(this->GameThreadFontCache).Object + lVar5));
  return;
}

// FlushGameThreadFontCache @ 14250b2e0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateFontServices::FlushGameThreadFontCache(FSlateFontServices *this,FString *param_1)

{
  (**(code **)(((this->GameThreadFontCache).Object)->_padding_ + 8))();
  FSlateFontMeasure::FlushCache((this->GameThreadFontMeasure).Object);
  return;
}

// FlushRenderThreadFontCache @ 14250b310

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateFontServices::FlushRenderThreadFontCache(FSlateFontServices *this,FString *param_1)

{
  (**(code **)(((this->RenderThreadFontCache).Object)->_padding_ + 8))();
  FSlateFontMeasure::FlushCache((this->RenderThreadFontMeasure).Object);
  return;
}

// GetFontCache @ 14250d5e0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedRef<FSlateFontCache,1> * __thiscall
FSlateFontServices::GetFontCache
          (FSlateFontServices *this,TSharedRef<FSlateFontCache,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  ESlateTextureAtlasThreadId EVar3;
  TSharedRef<FSlateFontCache,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  EVar3 = GetCurrentSlateTextureAtlasThreadId();
  if (EVar3 == Unknown) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtlasThreadId != ESlateTextureAtlasThreadId::Unknown",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\SlateRenderer.cpp"
                       ,0x2d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedRef<FSlateFontCache,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  if (EVar3 == Game) {
    __return_storage_ptr__->Object = (this->GameThreadFontCache).Object;
    pTVar5 = (this->GameThreadFontCache).SharedReferenceCount.ReferenceController;
  }
  else {
    __return_storage_ptr__->Object = (this->RenderThreadFontCache).Object;
    pTVar5 = (this->RenderThreadFontCache).SharedReferenceCount.ReferenceController;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetFontMeasureService @ 14250d700

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedRef<FSlateFontMeasure,1> * __thiscall
FSlateFontServices::GetFontMeasureService
          (FSlateFontServices *this,TSharedRef<FSlateFontMeasure,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  ESlateTextureAtlasThreadId EVar3;
  TSharedRef<FSlateFontMeasure,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  EVar3 = GetCurrentSlateTextureAtlasThreadId();
  if (EVar3 == Unknown) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtlasThreadId != ESlateTextureAtlasThreadId::Unknown",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\SlateRenderer.cpp"
                       ,0x3d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedRef<FSlateFontMeasure,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  if (EVar3 == Game) {
    __return_storage_ptr__->Object = (this->GameThreadFontMeasure).Object;
    pTVar5 = (this->GameThreadFontMeasure).SharedReferenceCount.ReferenceController;
  }
  else {
    __return_storage_ptr__->Object = (this->RenderThreadFontMeasure).Object;
    pTVar5 = (this->RenderThreadFontMeasure).SharedReferenceCount.ReferenceController;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// HandleFontCacheReleaseResources @ 1425101f0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateFontServices::HandleFontCacheReleaseResources
          (FSlateFontServices *this,FSlateFontCache *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnReleaseResourcesDelegate,(FWriteAccessScope *)&local_38);
  puVar1 = &(this->OnReleaseResourcesDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->OnReleaseResourcesDelegate).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->OnReleaseResourcesDelegate).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnReleaseResourcesDelegate).field_0x8;
      if (((*(int *)(lVar10 + 8 + lVar2) == 0) ||
          (plVar3 = *(longlong **)(lVar10 + lVar2), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->OnReleaseResourcesDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnReleaseResourcesDelegate,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// OnReleaseResources @ 1425179a0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TMulticastDelegate<void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy> * __thiscall
FSlateFontServices::OnReleaseResources(FSlateFontServices *this)

{
  return &this->OnReleaseResourcesDelegate;
}

// ReleaseResources @ 14251b070

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateFontServices::ReleaseResources(FSlateFontServices *this)

{
  FSlateFontCache *this_00;
  
  FSlateFontCache::ReleaseResources((this->GameThreadFontCache).Object);
  this_00 = (this->RenderThreadFontCache).Object;
  if ((this->GameThreadFontCache).Object != this_00) {
    FSlateFontCache::ReleaseResources(this_00);
    return;
  }
  return;
}

