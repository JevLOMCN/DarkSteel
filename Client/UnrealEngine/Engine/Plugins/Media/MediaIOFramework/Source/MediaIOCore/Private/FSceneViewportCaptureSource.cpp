// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 11

// GetCaptureType @ 14d7a9660

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

ECaptureType __thiscall
UE::MediaCapture::Private::FSceneViewportCaptureSource::GetCaptureType
          (FSceneViewportCaptureSource *this)

{
  return *(char *)((longlong)&this->_padding_ + 4) == '\x05';
}

// GetSceneViewport @ 14d7adad0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TSharedPtr<FSceneViewport,1> * __thiscall
UE::MediaCapture::Private::FSceneViewportCaptureSource::GetSceneViewport
          (FSceneViewportCaptureSource *this,TSharedPtr<FSceneViewport,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  bool bVar4;
  
  __return_storage_ptr__->Object = (FSceneViewport *)0x0;
  pTVar1 = (this->WeakViewport).WeakReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar4 = aVar2 == aVar3;
      if (bVar4) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar4);
  }
  if ((__return_storage_ptr__->SharedReferenceCount).ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (this->WeakViewport).Object;
  }
  return __return_storage_ptr__;
}

// GetSize @ 14d7adbf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TIntPoint<int> __thiscall
UE::MediaCapture::Private::FSceneViewportCaptureSource::GetSize(FSceneViewportCaptureSource *this)

{
  FSceneViewport *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TIntPoint<int>_u_0 in_RDX;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = (this->WeakViewport).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d7adc23;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    pFVar1 = (this->WeakViewport).Object;
    if (pFVar1 != (FSceneViewport *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x10))();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return (TIntPoint<int>)in_RDX;
    }
  }
LAB_14d7adc23:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined8 *)in_RDX = 0;
  return (TIntPoint<int>)in_RDX;
}

// GetSourceTextureForInput_RenderThread @ 14d7ade10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRefCountPtr<FRHITexture> __thiscall
UE::MediaCapture::Private::FSceneViewportCaptureSource::GetSourceTextureForInput_RenderThread
          (FSceneViewportCaptureSource *this)

{
  FSceneViewport *pFVar1;
  FRHIResource *this_00;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FRHITexture *in_RDX;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FRHIResource *local_18;
  
  in_RDX->_padding_ = 0;
  pTVar4 = (this->WeakViewport).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d7ade50;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    pFVar1 = (this->WeakViewport).Object;
    if ((pFVar1 != (FSceneViewport *)0x0) && (pFVar1->_padding_ != 0)) {
      (**(code **)(GDynamicRHI->_padding_ + 0x298))(GDynamicRHI,&stack0xffffffffffffffe8);
      if (in_RDX != (FRHITexture *)&stack0xffffffffffffffe8) {
        this_00 = (FRHIResource *)in_RDX->_padding_;
        in_RDX->_padding_ = (longlong)local_18;
        local_18 = (FRHIResource *)0x0;
        if (this_00 == (FRHIResource *)0x0) goto LAB_14d7ade50;
        FRHIResource::Release(this_00);
      }
      if (local_18 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_18);
      }
    }
  }
LAB_14d7ade50:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TRefCountPtr<FRHITexture>)in_RDX;
}

// GetSourceType @ 14d7adf00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

EMediaCaptureSourceType __thiscall
UE::MediaCapture::Private::FSceneViewportCaptureSource::GetSourceType
          (FSceneViewportCaptureSource *this)

{
  return SCENE_VIEWPORT;
}

// IsValid @ 14d7b1ac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
UE::MediaCapture::Private::FSceneViewportCaptureSource::IsValid(FSceneViewportCaptureSource *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->WeakViewport).Object != (FSceneViewport *)0x0) &&
      (pTVar1 = (this->WeakViewport).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// PostInitialize @ 14d7b6060

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
UE::MediaCapture::Private::FSceneViewportCaptureSource::PostInitialize
          (FSceneViewportCaptureSource *this)

{
  atomic<int> aVar1;
  undefined1 uVar2;
  atomic<int> aVar3;
  UObject *pUVar4;
  bool bVar5;
  FSceneViewport *local_18;
  TReferenceControllerBase<1> *local_10;
  
  local_10 = (this->WeakViewport).WeakReferenceCount.ReferenceController;
  local_18 = (FSceneViewport *)0x0;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = local_10->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        local_10 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d7b60bd;
      }
      LOCK();
      aVar3 = local_10->SharedReferenceCount;
      bVar5 = aVar1 == aVar3;
      if (bVar5) {
        local_10->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar3 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar3;
    } while (!bVar5);
    if (local_10 != (TReferenceControllerBase<1> *)0x0) {
      local_18 = (this->WeakViewport).Object;
    }
  }
LAB_14d7b60bd:
  if (local_18 == (FSceneViewport *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    return false;
  }
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  uVar2 = (**(code **)(*(longlong *)pUVar4 + 0x2d0))(pUVar4,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return (bool)uVar2;
}

// ResetSourceBufferSize @ 14d7bb170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
UE::MediaCapture::Private::FSceneViewportCaptureSource::ResetSourceBufferSize
          (FSceneViewportCaptureSource *this,bool param_1)

{
  FSceneViewport *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  UMediaCapture *this_01;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = (this->WeakViewport).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d7bb1b0;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    this_00 = (this->WeakViewport).Object;
    if ((this_00 != (FSceneViewport *)0x0) &&
       (bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_), bVar4)) {
      this_01 = (UMediaCapture *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      if (this_01->bViewportHasFixedViewportSize != false) {
        if (param_1) {
          UMediaCapture::WaitForPendingTasks(this_01);
        }
        FSceneViewport::SetFixedViewportSize(this_00,0,0);
        this_01->bViewportHasFixedViewportSize = false;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
  }
LAB_14d7bb1b0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// ResizeSourceBuffer @ 14d7bb290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
UE::MediaCapture::Private::FSceneViewportCaptureSource::ResizeSourceBuffer
          (FSceneViewportCaptureSource *this,TIntPoint<int> param_1)

{
  FSceneViewport *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  UObject *pUVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  uint uStackX_14;
  
  pTVar4 = (this->WeakViewport).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d7bb2d2;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    this_00 = (this->WeakViewport).Object;
    if ((this_00 != (FSceneViewport *)0x0) &&
       (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_), bVar5)) {
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      uStackX_14 = param_1.field0_0x0._4_4_;
      FSceneViewport::SetFixedViewportSize(this_00,param_1.field0_0x0._0_4_,uStackX_14);
      pUVar3[0xe].field_0xb = 1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
LAB_14d7bb2d2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// UpdateSourceImpl @ 14d7c2e00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
UE::MediaCapture::Private::FSceneViewportCaptureSource::UpdateSourceImpl
          (FSceneViewportCaptureSource *this)

{
  atomic<int> aVar1;
  bool bVar2;
  undefined1 uVar3;
  atomic<int> aVar4;
  UObject *pUVar5;
  FSceneViewport *local_18;
  TReferenceControllerBase<1> *local_10;
  
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar2) {
    local_10 = (this->WeakViewport).WeakReferenceCount.ReferenceController;
    local_18 = (FSceneViewport *)0x0;
    if (local_10 != (TReferenceControllerBase<1> *)0x0) {
      aVar1 = local_10->SharedReferenceCount;
      do {
        if (aVar1 == (atomic<int>)0x0) {
          local_10 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14d7c2e6d;
        }
        LOCK();
        aVar4 = local_10->SharedReferenceCount;
        bVar2 = aVar1 == aVar4;
        if (bVar2) {
          local_10->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
          aVar4 = aVar1;
        }
        UNLOCK();
        aVar1 = aVar4;
      } while (!bVar2);
      if (local_10 != (TReferenceControllerBase<1> *)0x0) {
        local_18 = (this->WeakViewport).Object;
      }
    }
LAB_14d7c2e6d:
    if (local_18 != (FSceneViewport *)0x0) {
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      uVar3 = (**(code **)(*(longlong *)pUVar5 + 0x2e8))(pUVar5,&local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
      return (bool)uVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  }
  return false;
}

// ValidateSource @ 14d7c3ac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
UE::MediaCapture::Private::FSceneViewportCaptureSource::ValidateSource
          (FSceneViewportCaptureSource *this,TIntPoint<int> *param_1,EPixelFormat param_2,
          bool param_3)

{
  FSceneViewport *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  bool bVar3;
  undefined1 uVar4;
  EPixelFormat EVar5;
  atomic<int> aVar6;
  Type TVar7;
  int iVar8;
  UObject *pUVar9;
  TSet<EPixelFormat,DefaultKeyFuncs<EPixelFormat,0>,FDefaultSetAllocator> *pTVar10;
  IConsoleManager *pIVar11;
  longlong *plVar12;
  TConsoleVariableData<int> *pTVar13;
  ForElementType<FSetElementId> FVar14;
  TReferenceControllerBase<1> *pTVar15;
  bool bVar16;
  TIntPoint<int>_u_0 local_res8;
  
  pTVar15 = (this->WeakViewport).WeakReferenceCount.ReferenceController;
  bVar3 = false;
  if (pTVar15 == (TReferenceControllerBase<1> *)0x0) goto LAB_14d7c3b12;
  aVar2 = pTVar15->SharedReferenceCount;
  do {
    if (aVar2 == (atomic<int>)0x0) {
      pTVar15 = (TReferenceControllerBase<1> *)0x0;
      goto LAB_14d7c3b12;
    }
    LOCK();
    aVar6 = pTVar15->SharedReferenceCount;
    bVar16 = aVar2 == aVar6;
    if (bVar16) {
      pTVar15->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
      aVar6 = aVar2;
    }
    UNLOCK();
    aVar2 = aVar6;
  } while (!bVar16);
  this_00 = (this->WeakViewport).Object;
  if (this_00 == (FSceneViewport *)0x0) goto LAB_14d7c3b12;
  (**(code **)(this_00->_padding_ + 0x1e0))(&this_00->_padding_,&local_res8);
  if (((char)this->_padding_ == '\x02') ||
     (bVar3 = ValidateSize((TIntPoint<int>)local_res8,param_1,
                           (FMediaCaptureOptions *)&this->_padding_,param_3), bVar3)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pIVar11 = IConsoleManager::Get();
      plVar12 = (longlong *)(**(code **)((longlong)*pIVar11 + 0xc0))(pIVar11);
      pTVar13 = (TConsoleVariableData<int> *)0x0;
      if (plVar12 != (longlong *)0x0) {
        pTVar13 = (TConsoleVariableData<int> *)(**(code **)(*plVar12 + 0x68))(plVar12);
      }
      CVarDefaultBackBufferPixelFormat = pTVar13;
      _Init_thread_footer(&::_TSS0);
    }
    pTVar13 = CVarDefaultBackBufferPixelFormat;
    bVar3 = IsInParallelGameThread();
    if (((!bVar3) && (bVar3 = IsInGameThread(), !bVar3)) &&
       (bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0"), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    TVar7 = EDefaultBackBufferPixelFormat::FromInt(pTVar13->ShadowedValue[0]);
    EVar5 = EDefaultBackBufferPixelFormat::Convert2PixelFormat(TVar7);
    if (param_2 == EVar5) {
LAB_14d7c3d28:
      bVar3 = true;
      goto LAB_14d7c3b12;
    }
    pTVar10 = UMediaCapture::GetSupportedRgbaSwizzleFormats();
    if (*(int *)&(pTVar10->Elements).field_0x8 != *(int *)&(pTVar10->Elements).field_0x34) {
      FVar14 = (pTVar10->Hash).SecondaryData;
      if (FVar14 == (ForElementType<FSetElementId>)0x0) {
        FVar14 = (ForElementType<FSetElementId>)&pTVar10->Hash;
      }
      iVar8 = *(int *)((longlong)FVar14 +
                      ((ulonglong)(pTVar10->HashSize - 1) & (ulonglong)EVar5) * 4);
      if (iVar8 != -1) {
        do {
          if (*(EPixelFormat *)(*(longlong *)&pTVar10->Elements + (longlong)iVar8 * 0xc) == EVar5) {
            if ((iVar8 != -1) && (*(char *)((longlong)&this->_padding_ + 2) != '\0')) {
              if (2 < (byte)LogMediaIOCore._0_1_) {
                GetPixelFormatString(param_2);
                GetPixelFormatString(EVar5);
                Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
              }
              goto LAB_14d7c3d28;
            }
            break;
          }
          iVar8 = *(int *)(*(longlong *)&pTVar10->Elements + 4 + (longlong)iVar8 * 0xc);
        } while (iVar8 != -1);
      }
    }
    if (1 < (byte)LogMediaIOCore._0_1_) {
      GetPixelFormatString(param_2);
      GetPixelFormatString(EVar5);
      pTVar10 = UMediaCapture::GetSupportedRgbaSwizzleFormats();
      if (*(int *)&(pTVar10->Elements).field_0x8 != *(int *)&(pTVar10->Elements).field_0x34) {
        FVar14 = (pTVar10->Hash).SecondaryData;
        if (FVar14 == (ForElementType<FSetElementId>)0x0) {
          FVar14 = (ForElementType<FSetElementId>)&pTVar10->Hash;
        }
        iVar8 = *(int *)((longlong)FVar14 +
                        ((ulonglong)(pTVar10->HashSize - 1) & (ulonglong)EVar5) * 4);
        if (iVar8 != -1) {
          do {
            if (*(EPixelFormat *)(*(longlong *)&pTVar10->Elements + (longlong)iVar8 * 0xc) == EVar5)
            break;
            iVar8 = *(int *)(*(longlong *)&pTVar10->Elements + 4 + (longlong)iVar8 * 0xc);
          } while (iVar8 != -1);
        }
      }
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
    }
    pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) goto LAB_14d7c3d93;
  }
  else {
    pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
LAB_14d7c3d93:
    LOCK();
    pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar3 = false;
  if (pUVar9[0xe].field_0xb != '\0') {
    FSceneViewport::SetFixedViewportSize(this_00,0,0);
    pUVar9[0xe].field_0xb = 0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
LAB_14d7c3b12:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  return bVar3;
}

