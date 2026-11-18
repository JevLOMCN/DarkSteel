// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WindowsMoviePlayer
// Functions: 16

// FMediaFoundationMovieStreamer @ 14f1282d0

FMediaFoundationMovieStreamer * __thiscall
FMediaFoundationMovieStreamer::FMediaFoundationMovieStreamer(FMediaFoundationMovieStreamer *this)

{
  FMovieViewport *pFVar1;
  FMovieViewport *pFVar2;
  TRawPtrProxy<FMovieViewport> local_res8;
  
  pFVar2 = (FMovieViewport *)0x0;
  *(undefined8 *)&(this->OnCurrentMovieClipFinishedDelegate).field_0x18 = 2;
  *(undefined8 *)&this->OnCurrentMovieClipFinishedDelegate = 0;
  this->_padding_ = (longlong)&___7FMediaFoundationMovieStreamer__6B_;
  *(undefined8 *)&(this->OnCurrentMovieClipFinishedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnCurrentMovieClipFinishedDelegate).field_0x10 = 0;
  (this->StoredMoviePaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StoredMoviePaths).ArrayNum = 0;
  (this->StoredMoviePaths).ArrayMax = 0;
  (this->TextureData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureData).ArrayNum = 0;
  (this->TextureData).ArrayMax = 0;
  (this->MovieViewport).Object = (FMovieViewport *)0x0;
  (this->MovieViewport).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Texture).Object = (FSlateTexture2DRHIRef *)0x0;
  (this->Texture).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->TextureFreeList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureFreeList).ArrayNum = 0;
  (this->TextureFreeList).ArrayMax = 0;
  (this->InputTarget).Reference = (FRHITexture *)0x0;
  this->VideoPlayer = (FVideoPlayer *)0x0;
  this->SampleGrabberCallback = (FSampleGrabberCallback *)0x0;
  this->bUseSound = true;
  pFVar1 = ::operator_new(0x30);
  if (pFVar1 != (FMovieViewport *)0x0) {
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FMovieViewport__6B_;
    pFVar1->_padding_ = 0;
    (pFVar1->SlateTexture).Object = (FSlateTexture2DRHIRef *)0x0;
    (pFVar1->SlateTexture).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (pFVar1->DefaultSize).field0_0x0 = (TIntPoint<int>_u_0)0x0;
    pFVar2 = pFVar1;
  }
  local_res8.Object = pFVar2;
  TSharedPtr<FMovieViewport,1>::operator=<FMovieViewport>(&this->MovieViewport,&local_res8);
  (this->PlaybackType).Value = '\0';
  return this;
}

// ~FMediaFoundationMovieStreamer @ 14f1283f0

void __thiscall
FMediaFoundationMovieStreamer::~FMediaFoundationMovieStreamer(FMediaFoundationMovieStreamer *this)

{
  int *piVar1;
  FRHITexture *this_00;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&___7FMediaFoundationMovieStreamer__6B_;
  CloseMovie(this);
  CleanupRenderingResources(this);
  FlushRenderingCommands();
  DestructItems<TSharedPtr<FSlateTexture2DRHIRef,1>,int>
            ((TSharedPtr<FSlateTexture2DRHIRef,1> *)(this->TextureFreeList).AllocatorInstance.Data,
             (this->TextureFreeList).ArrayNum);
  piVar1 = &(this->TextureFreeList).ArrayMax;
  (this->TextureFreeList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->TextureFreeList).AllocatorInstance,0,piVar1);
  }
  this_00 = (this->InputTarget).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  DestructItems<TSharedPtr<FSlateTexture2DRHIRef,1>,int>
            ((TSharedPtr<FSlateTexture2DRHIRef,1> *)(this->TextureFreeList).AllocatorInstance.Data,
             (this->TextureFreeList).ArrayNum);
  pFVar2 = (this->TextureFreeList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Texture).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MovieViewport).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->TextureData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FString,int>
            ((FString *)(this->StoredMoviePaths).AllocatorInstance.Data,
             (this->StoredMoviePaths).ArrayNum);
  pFVar2 = (this->StoredMoviePaths).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnCurrentMovieClipFinishedDelegate).field_0x8,
             *(int *)&(this->OnCurrentMovieClipFinishedDelegate).field_0x10);
  pvVar3 = *(void **)&(this->OnCurrentMovieClipFinishedDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCurrentMovieClipFinishedDelegate);
  this->_padding_ = (longlong)&___7IMovieStreamer__6B_;
  return;
}

// Cleanup @ 14f1293e0

void __thiscall FMediaFoundationMovieStreamer::Cleanup(FMediaFoundationMovieStreamer *this)

{
  longlong lVar1;
  FRHITexture *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FRenderResource *pFVar5;
  uint uVar6;
  FRenderResource *pFVar7;
  FRenderResource *pFVar8;
  
  pFVar7 = (FRenderResource *)0x0;
  pFVar5 = pFVar7;
  pFVar8 = pFVar7;
  if (0 < (this->TextureFreeList).ArrayNum) {
    do {
      uVar6 = (uint)pFVar5;
      uVar4 = 0;
      if ((int)uVar6 < (this->TextureFreeList).ArrayNum) {
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
      lVar1 = *(longlong *)
               ((longlong)&pFVar8->_padding_ +
               (longlong)(this->TextureFreeList).AllocatorInstance.Data);
      pFVar5 = (FRenderResource *)(lVar1 + 0x28);
      if (lVar1 == 0) {
        pFVar5 = pFVar7;
      }
      BeginReleaseResource(pFVar5,(FRenderCommandPipe *)0x0);
      pFVar5 = (FRenderResource *)(ulonglong)(uVar6 + 1);
      pFVar8 = (FRenderResource *)&pFVar8->ResourceName;
    } while ((int)(uVar6 + 1) < (this->TextureFreeList).ArrayNum);
  }
  this_00 = (this->InputTarget).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    (this->InputTarget).Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  return;
}

// CleanupRenderingResources @ 14f1293f0

void __thiscall
FMediaFoundationMovieStreamer::CleanupRenderingResources(FMediaFoundationMovieStreamer *this)

{
  longlong lVar1;
  FRHITexture *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FRenderResource *pFVar5;
  uint uVar6;
  FRenderResource *pFVar7;
  FRenderResource *pFVar8;
  
  pFVar7 = (FRenderResource *)0x0;
  pFVar5 = pFVar7;
  pFVar8 = pFVar7;
  if (0 < (this->TextureFreeList).ArrayNum) {
    do {
      uVar6 = (uint)pFVar5;
      uVar4 = 0;
      if ((int)uVar6 < (this->TextureFreeList).ArrayNum) {
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
      lVar1 = *(longlong *)
               ((longlong)&pFVar8->_padding_ +
               (longlong)(this->TextureFreeList).AllocatorInstance.Data);
      pFVar5 = (FRenderResource *)(lVar1 + 0x28);
      if (lVar1 == 0) {
        pFVar5 = pFVar7;
      }
      BeginReleaseResource(pFVar5,(FRenderCommandPipe *)0x0);
      pFVar5 = (FRenderResource *)(ulonglong)(uVar6 + 1);
      pFVar8 = (FRenderResource *)&pFVar8->ResourceName;
    } while ((int)(uVar6 + 1) < (this->TextureFreeList).ArrayNum);
  }
  this_00 = (this->InputTarget).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    (this->InputTarget).Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  return;
}

// CloseMovie @ 14f129540

void __thiscall FMediaFoundationMovieStreamer::CloseMovie(FMediaFoundationMovieStreamer *this)

{
  TSharedPtr<FSlateTexture2DRHIRef,1> *pTVar1;
  int *piVar2;
  atomic<int> *paVar3;
  atomic<int> aVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  FMovieViewport *pFVar7;
  code *pcVar8;
  FWeakReferencer<1> *pFVar9;
  bool bVar10;
  char cVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  longlong lVar17;
  undefined8 local_78;
  FSharedReferencer<1> FStack_70;
  void *local_68 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  FDestructionSentinel local_48;
  
  (**(code **)(this->_padding_ + 0x30))(this,local_68);
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
            (**(code **)(this->_padding_ + 0x58))(this);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_48);
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
  bVar12 = false;
  uVar16 = (this_00->InvocationList).ArrayNum - 1;
  if (-1 < (int)uVar16) {
    lVar17 = (longlong)(int)uVar16 << 4;
    bVar12 = false;
    do {
      uVar13 = 0;
      if ((int)uVar16 < (this_00->InvocationList).ArrayNum) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar15 = (this_00->InvocationList).AllocatorInstance.Data;
      if (((*(int *)(pFVar15 + lVar17 + 8) == 0) ||
          (plVar5 = *(longlong **)(pFVar15 + lVar17), plVar5 == (longlong *)0x0)) ||
         (cVar11 = (**(code **)(*plVar5 + 0x68))(), cVar11 == '\0')) {
        bVar12 = true;
      }
      lVar17 = lVar17 + -0x10;
      uVar16 = uVar16 - 1;
    } while (-1 < (int)uVar16);
  }
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
  if (bVar12) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,false);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (local_68[0] != (void *)0x0) {
    FMemory::Free(local_68[0]);
  }
  pTVar1 = &this->Texture;
  if ((this->Texture).Object != (FSlateTexture2DRHIRef *)0x0) {
    pFVar15 = (this->TextureFreeList).AllocatorInstance.Data;
    if (((pFVar15 <= pTVar1) &&
        (pTVar1 < pFVar15 + (longlong)(this->TextureFreeList).ArrayMax * 0x10)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar14 = (this->TextureFreeList).ArrayNum;
    piVar2 = &(this->TextureFreeList).ArrayMax;
    if (iVar14 == *piVar2) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&(this->TextureFreeList).AllocatorInstance,piVar2);
    }
    (this->TextureFreeList).ArrayNum = iVar14 + 1;
    pFVar15 = (this->TextureFreeList).AllocatorInstance.Data + (longlong)iVar14 * 0x10;
    *(FSlateTexture2DRHIRef **)pFVar15 = pTVar1->Object;
    pTVar6 = (this->Texture).SharedReferenceCount.ReferenceController;
    *(TReferenceControllerBase<1> **)(pFVar15 + 8) = pTVar6;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((this->MovieViewport).Object == (FMovieViewport *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar7 = (this->MovieViewport).Object;
    local_58 = *(undefined4 *)&(pFVar7->SlateTexture).Object;
    uStack_54 = *(undefined4 *)((longlong)&(pFVar7->SlateTexture).Object + 4);
    pFVar9 = &(pFVar7->SlateTexture).WeakReferenceCount;
    uStack_50 = *(undefined4 *)&pFVar9->ReferenceController;
    uStack_4c = *(undefined4 *)
                 ((longlong)&(pFVar7->SlateTexture).WeakReferenceCount.ReferenceController + 4);
    pTVar6 = pFVar9->ReferenceController;
    (pFVar7->SlateTexture).Object = (FSlateTexture2DRHIRef *)0x0;
    (pFVar7->SlateTexture).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar3 = &pTVar6->WeakReferenceCount;
      aVar4 = *paVar3;
      *paVar3 = (atomic<int>)((int)*paVar3 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
      }
    }
    local_78 = 0;
    FStack_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<FSlateTexture2DRHIRef,1> *)&local_78) {
      pTVar1->Object = (FSlateTexture2DRHIRef *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Texture).SharedReferenceCount,&FStack_70);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_70.ReferenceController);
  }
  if (this->VideoPlayer != (FVideoPlayer *)0x0) {
    FVideoPlayer::Shutdown(this->VideoPlayer);
    (**(code **)(this->VideoPlayer->_padding_ + 0x10))();
    this->VideoPlayer = (FVideoPlayer *)0x0;
  }
  if (this->SampleGrabberCallback != (FSampleGrabberCallback *)0x0) {
    (**(code **)(this->SampleGrabberCallback->_padding_ + 0x10))();
    this->SampleGrabberCallback = (FSampleGrabberCallback *)0x0;
  }
  return;
}

// ConvertSample @ 14f129840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FMediaFoundationMovieStreamer::ConvertSample
          (FMediaFoundationMovieStreamer *this,FRHICommandList *param_1)

{
  TRefCountPtr<FRHITexture> *pTVar1;
  int iVar2;
  EMediaTextureSampleFormat EVar3;
  FRHITexture *pFVar4;
  FVideoPlayer *pFVar5;
  FShaderMapResource *this_00;
  code *pcVar6;
  float fVar7;
  FShader *this_01;
  undefined8 uVar8;
  bool bVar9;
  byte bVar10;
  longlong lVar11;
  byte *pbVar12;
  TRefCountPtr<FRHITexture> TVar13;
  FGlobalShaderMap *this_02;
  FShaderType *pFVar14;
  FName FVar15;
  atomic<FRHIShader_*> aVar16;
  FRHIPixelShader *pFVar17;
  FRHIBatchedShaderParameters *pFVar18;
  IRHICommandContext *pIVar19;
  undefined8 *puVar20;
  float fVar21;
  undefined1 auStackY_508 [32];
  TIntPoint<int>_u_0 local_4c8;
  int local_4c0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_4b8;
  undefined1 local_4a8 [32];
  TShaderRefBase<FBMPConvertPS,FShaderMapPointerTable> local_488;
  FRHICommandBase **local_478;
  IRHICommandContext *local_470;
  uint local_468;
  uint local_464;
  undefined1 local_460 [8];
  undefined1 local_458 [16];
  undefined1 local_448;
  undefined4 local_444;
  undefined4 local_440;
  undefined1 local_43c;
  undefined1 local_430;
  undefined1 local_428 [16];
  undefined1 local_418;
  undefined4 local_414;
  undefined4 local_410;
  undefined1 local_40c;
  undefined1 local_400;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_3f8;
  TShaderRefBase<FYUY2ConvertPS,FShaderMapPointerTable> local_3e8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_3d8;
  undefined1 local_3c8 [8];
  undefined1 local_3c0 [8];
  undefined1 local_3b8 [16];
  TArrayView<FRHITransitionInfo_const_,int> local_3a8;
  TIndexedPtrBase<FShaderType,FShaderType_*>_u_0 local_398 [2];
  FString local_388;
  FString local_378;
  undefined1 local_368 [16];
  undefined1 local_358 [200];
  undefined8 local_290;
  undefined4 local_288;
  FRHITexture *local_280;
  FRHITextureDesc local_278;
  wchar_t *local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined1 local_208 [16];
  undefined1 local_1f8 [224];
  undefined1 local_118 [8];
  TRefCountPtr<FRHITexture> local_110;
  EVRSRateCombiner local_108;
  undefined1 local_104 [76];
  void *local_b8;
  wchar_t *local_a8;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint uStack_94;
  uint local_90;
  uint uStack_8c;
  FPerCategory local_88 [3];
  
  local_88[0]._16_8_ = __security_cookie.value ^ (ulonglong)auStackY_508;
  pTVar1 = &this->InputTarget;
  pFVar4 = pTVar1->Reference;
  aVar16 = (atomic<FRHIShader_*>)0x0;
  pFVar5 = this->VideoPlayer;
  if (pFVar4 == (FRHITexture *)0x0) {
LAB_14f1298f1:
    local_278.ClearValue.Value._4_8_ = 0;
    local_278.ClearValue._0_8_ = 1;
    local_278.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
    local_278.ClearValue.Value.Color[3] = 0.0;
    local_228 = L"FMediaFoundationMovieStreamer";
    local_278.Extent.field0_0x0 = (pFVar5->VideoTrackFormat).BufferDim.field0_0x0;
    local_278.ExtData = 0;
    local_278.Depth = 1;
    local_278.ArraySize = 1;
    local_278.NumMips = '\x01';
    local_278.NumSamples = '\x01';
    local_278.Dimension = Texture2D;
    local_278.Format = PF_B8G8R8A8;
    local_278.UAVFormat = PF_Unknown;
    local_278.FastVRAMPercentage = 0xff;
    local_278.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
    local_278.AliasableFormats.ArrayNum = 0;
    local_278.AliasableFormats.ArrayMax = 1;
    local_220 = (FRHITexture *)&DAT_00000070;
    local_218._0_4_ = 0;
    local_218._4_4_ = 0;
    local_210._0_4_ = 0;
    local_210._4_4_ = 0;
    local_208._0_4_ = 0;
    local_208._4_4_ = 0;
    local_278.Flags = ShaderResource|RenderTargetable;
    FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)(local_104 + 0xc),&local_278);
    local_a8 = local_228;
    local_a0 = (uint)local_220;
    local_9c = local_220._4_4_;
    local_98 = (uint)local_218;
    uStack_94 = local_218._4_4_;
    local_90 = (uint)local_210;
    uStack_8c = local_210._4_4_;
    local_88[0].Draws = local_208._0_4_;
    local_88[0].Triangles = local_208._4_4_;
    if (local_278.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_278.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    TVar13 = FRHICommandListBase::CreateTexture
                       ((FRHICommandListBase *)param_1,(FRHITextureCreateDesc *)local_460);
    if ((FRHITexture *)pTVar1 != TVar13.Reference) {
      pFVar4 = pTVar1->Reference;
      pTVar1->Reference = (FRHITexture *)(TVar13.Reference)->_padding_;
      (TVar13.Reference)->_padding_ = 0;
      if (pFVar4 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar4);
      }
    }
    if (local_460 != (undefined1  [8])0x0) {
      FRHIResource::Release((FRHIResource *)local_460);
    }
    if (local_b8 != (void *)0x0) {
      FMemory::Free(local_b8);
    }
  }
  else {
    lVar11 = (**(code **)(pFVar4->_padding_ + 0x20))(pFVar4);
    iVar2 = *(int *)(lVar11 + 0x28);
    lVar11 = (**(code **)(pFVar4->_padding_ + 0x20))(pFVar4);
    if ((((*(int *)(lVar11 + 0x24) != (pFVar5->VideoTrackFormat).BufferDim.field0_0x0._s_0.X) ||
         (iVar2 != (pFVar5->VideoTrackFormat).BufferDim.field0_0x0._s_0.Y)) ||
        (lVar11 = (**(code **)(pTVar1->Reference->_padding_ + 0x20))(),
        *(char *)(lVar11 + 0x33) != '\x02')) ||
       (pbVar12 = (byte *)(**(code **)(pTVar1->Reference->_padding_ + 0x20))(),
       (*pbVar12 & 0x10) != 0)) goto LAB_14f1298f1;
  }
  local_468 = (pFVar5->VideoTrackFormat).BufferDim.field0_0x0._s_0.X;
  local_464 = (pFVar5->VideoTrackFormat).BufferDim.field0_0x0._s_0.Y;
  local_478 = (FRHICommandBase **)0x0;
  local_470 = (IRHICommandContext *)0x0;
  FRHICommandListBase::UpdateTexture2D
            ((FRHICommandListBase *)param_1,pTVar1->Reference,0,(FUpdateTextureRegion2D *)&local_478
             ,(pFVar5->VideoTrackFormat).BufferStride,
             (uchar *)(this->TextureData).AllocatorInstance.Data);
  local_4c8 = (pFVar5->VideoTrackFormat).OutputDim.field0_0x0;
  pFVar4 = (FRHITexture *)((this->Texture).Object)->_padding_;
  if (pFVar4 != (FRHITexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar4);
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  local_4b8.ShaderMap._0_4_ = 1;
  local_458._4_2_ = 0xffff;
  local_4b8.ShaderContent = (FShader *)(local_460 + 8);
  local_458._0_4_ = 0xffffffff;
  local_3a8._12_4_ = local_4b8.ShaderMap._4_4_;
  local_3a8.ArrayNum = 1;
  local_448 = 1;
  local_444._0_1_ = false;
  local_444._1_1_ = false;
  local_444._2_1_ = false;
  local_444._3_1_ = false;
  local_440._0_1_ = false;
  local_440._1_1_ = true;
  local_440._2_1_ = None;
  local_440._3_1_ = None;
  local_43c = 0;
  local_430 = 0;
  local_458._8_8_ = pFVar4;
  local_3a8.DataPtr = (FRHITransitionInfo *)local_4b8.ShaderContent;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_3a8,None);
  local_1f8._24_8_ = (FRHITexture *)0x0;
  local_1f8._48_8_ = (FRHITexture *)0x0;
  local_1f8._56_8_ = (FRHITexture *)0x0;
  local_1f8._96_8_ = (FRHITexture *)0x0;
  local_1f8._104_8_ = (FRHITexture *)0x0;
  local_1f8._144_8_ = (FRHITexture *)0x0;
  local_1f8._152_8_ = (FRHITexture *)0x0;
  local_1f8._192_8_ = (FRHITexture *)0x0;
  local_1f8._200_8_ = (FRHITexture *)0x0;
  local_1f8._32_8_ = (FRHITexture *)0x0;
  local_1f8._40_4_ = -1;
  local_1f8[0x2c] = '\0';
  local_1f8[0x2d] = DontLoad_DontStore;
  local_1f8._64_4_ = -1;
  local_1f8[0x44] = '\0';
  local_1f8[0x45] = DontLoad_DontStore;
  local_1f8._72_8_ = (FRHITexture *)0x0;
  local_1f8._80_8_ = (FRHITexture *)0x0;
  local_1f8._88_4_ = -1;
  local_1f8._92_2_ = 0;
  local_1f8._112_4_ = -1;
  local_1f8[0x74] = '\0';
  local_1f8[0x75] = DontLoad_DontStore;
  local_1f8._120_8_ = (FRHITexture *)0x0;
  local_1f8._128_8_ = (FRHITexture *)0x0;
  local_1f8._136_4_ = -1;
  local_1f8[0x8c] = '\0';
  local_1f8[0x8d] = DontLoad_DontStore;
  local_1f8._160_4_ = -1;
  local_1f8[0xa4] = '\0';
  local_1f8[0xa5] = DontLoad_DontStore;
  local_1f8._168_8_ = (FRHITexture *)0x0;
  local_1f8._176_8_ = (FRHITexture *)0x0;
  local_1f8._184_4_ = -1;
  local_1f8[0xbc] = '\0';
  local_1f8[0xbd] = DontLoad_DontStore;
  local_1f8[0xd0] = DontLoad_DontStore;
  local_1f8._212_4_ = DepthNop;
  local_1f8._216_8_ = (void *)0xffffffffffffffff;
  local_118._0_4_ = 0xffffffff;
  local_118._4_4_ = 0xffffffff;
  local_110.Reference = (FRHITexture *)0x0;
  local_108 = VRSRB_Passthrough;
  local_104._0_4_ = 0;
  local_104._4_4_ = 0;
  local_104[8] = false;
  local_104[9] = '\0';
  local_104[10] = None;
  if ((pFVar4 == (FRHITexture *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ColorRT",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0x14b0,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_1f8._8_8_ = (FRHITexture *)0x0;
  local_1f8._16_4_ = -1;
  local_1f8[0x14] = '\0';
  local_1f8[0x15] = Load_Store;
  local_1f8._0_8_ = pFVar4;
  FRHICommandList::BeginRenderPass
            (param_1,(FRHIRenderPassInfo *)local_1f8,L"WindowsMovieConvertSample");
  local_358._100_8_ = 0;
  local_358._0_8_ = (FRHIVertexDeclaration *)0x0;
  local_358._8_8_ = (FRHIVertexShader *)0x0;
  local_358._16_8_ = (FRHIPixelShader *)0x0;
  local_358._24_8_ = (FRHIMeshShader *)0x0;
  local_358._32_8_ = (FRHIAmplificationShader *)0x0;
  local_358._40_8_ = (FRHIGeometryShader *)0x0;
  local_358._48_8_ = (FRHIWorkGraphShader *)0x0;
  local_358._56_8_ = (FRHIBlendState *)0x0;
  local_358._64_8_ = (FRHIBreadcrumbAllocator *)0x0;
  local_358._72_8_ = (FRHIDepthStencilState *)0x0;
  local_358._80_8_ = (FActivatePipelineCommand *)0x0;
  local_358._88_8_ = (FActivatePipelineCommand *)0x0;
  local_358._112_8_ = None;
  local_358._120_8_ = (FRHITexture *)0x0;
  local_358._128_8_ = None;
  local_358._136_8_ = None;
  local_358._144_8_ = (FRHITexture *)0x0;
  local_358._152_8_ = None;
  local_358._160_8_ = None;
  local_358._168_8_ = (FRHITexture *)0x0;
  local_358[0x6c] = '\0';
  local_358[0x6d] = '\0';
  local_358[0x6e] = '\0';
  local_358[0x6f] = '\0';
  local_358[0xb0] = PF_Unknown;
  local_358._184_8_ = None;
  local_358._192_8_ = (FRHITexture *)0x0;
  local_290._0_4_ = 0;
  local_290._4_4_ = 0;
  local_288._0_1_ = ELoad;
  local_288._1_1_ = ENoAction;
  local_288._2_2_ = 0;
  local_280 = (FRHITexture *)0x0;
  FRHICommandList::ApplyCachedRenderTargets(param_1,(FGraphicsPipelineStateInitializer *)local_358);
  fVar7 = __real_3f800000;
  fVar21 = 0.0;
  FRHICommandList::SetViewport
            (param_1,0.0,0.0,0.0,(float)local_4c8._s_0.X,(float)local_4c8._s_0.Y,__real_3f800000);
  local_358._72_8_ =
       TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  local_358._64_8_ =
       TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
       ::StaticResource.StateRHI.Reference;
  local_358._56_8_ =
       TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  local_358._96_4_ = PT_TriangleStrip;
  this_02 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar14 = (FShaderType *)FMediaShadersVS::GetStaticType();
  FGlobalShaderMap::GetShader(this_02,&local_4b8,pFVar14,0);
  if (local_4b8.ShaderContent == (FShader *)0x0) {
    FVar15 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_3c8);
    ::FName::ToString((FName *)FVar15,(FString *)local_398);
    FMediaShadersVS::GetStaticType();
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_398[0].Ptr != (FShaderType *)0x0) {
      FMemory::Free(local_398[0].Ptr);
    }
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FMediaShadersVS::GetStaticType();
  this_01 = local_4b8.ShaderContent;
  local_4a8._8_8_ = CONCAT44(local_4b8.ShaderMap._4_4_,local_4b8.ShaderMap._0_4_);
  local_358._0_8_ = GMediaVertexDeclaration._32_8_;
  if (local_4b8.ShaderContent != (FShader *)0x0) {
    this_00 = *(FShaderMapResource **)(local_4a8._8_8_ + 8);
    if ((this_00 == (FShaderMapResource *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    aVar16 = (this_00->RHIShaders).Ptr[this_01->ResourceIndex];
    if ((aVar16 == (atomic<FRHIShader_*>)0x0) &&
       (aVar16 = (atomic<FRHIShader_*>)
                 FShaderMapResource::CreateShaderOrCrash(this_00,this_01->ResourceIndex,true),
       uVar8 = local_4a8._8_8_, aVar16 == (atomic<FRHIShader_*>)0x0)) {
      if (4 < (byte)LogShaders._0_1_) {
        local_4c0 = this_01->ResourceIndex;
        if ((*(longlong *)(local_4a8._8_8_ + 0x18) == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FShader::GetType(this_01,*(FShaderMapPointerTable **)(uVar8 + 0x18));
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)
                   &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FMediaShadersVS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      aVar16 = (atomic<FRHIShader_*>)0x0;
    }
  }
  EVar3 = (pFVar5->VideoTrackFormat).SampleFormat;
  local_358._8_8_ = aVar16;
  if (EVar3 == CharBMP) {
    pFVar14 = (FShaderType *)FBMPConvertPS::GetStaticType();
    FGlobalShaderMap::GetShader(this_02,&local_3d8,pFVar14,0);
    if (local_3d8.ShaderContent == (FShader *)0x0) {
      FVar15 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_3b8);
      ::FName::ToString((FName *)FVar15,&local_378);
      FBMPConvertPS::GetStaticType();
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_378.Data.AllocatorInstance.Data);
      }
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    FBMPConvertPS::GetStaticType();
    local_488.ShaderContent = (FBMPConvertPS *)local_3d8.ShaderContent;
    local_488.ShaderMap = local_3d8.ShaderMap;
    local_358._16_8_ =
         TShaderRefBase<FBMPConvertPS,FShaderMapPointerTable>::GetPixelShader(&local_488,true);
    SetGraphicsPipelineState
              (param_1,(FGraphicsPipelineStateInitializer *)local_358,0,CheckApply,true);
    pFVar17 = TShaderRefBase<FBMPConvertPS,FShaderMapPointerTable>::GetPixelShader(&local_488,true);
    pFVar18 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
    local_4a8._24_8_ = pTVar1->Reference;
    if ((FRHITexture *)local_4a8._24_8_ != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_4a8._24_8_);
    }
    FBMPConvertPS::SetParameters
              ((FBMPConvertPS *)local_3d8.ShaderContent,pFVar18,(FRHITexture *)(local_4a8 + 0x18),
               (TIntPoint<int> *)&local_4c8._s_0,false);
  }
  else {
    if (EVar3 != CharYUY2) goto LAB_14f12a355;
    pFVar14 = (FShaderType *)FYUY2ConvertPS::GetStaticType();
    FGlobalShaderMap::GetShader(this_02,&local_3f8,pFVar14,0);
    if ((FName)local_3f8.ShaderContent == (FName)0x0) {
      FVar15 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_3c0);
      ::FName::ToString((FName *)FVar15,&local_388);
      FYUY2ConvertPS::GetStaticType();
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_388.Data.AllocatorInstance.Data);
      }
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    FYUY2ConvertPS::GetStaticType();
    local_3e8.ShaderContent = (FYUY2ConvertPS *)local_3f8.ShaderContent;
    local_3e8.ShaderMap = local_3f8.ShaderMap;
    local_358._16_8_ =
         TShaderRefBase<FYUY2ConvertPS,FShaderMapPointerTable>::GetPixelShader(&local_3e8,true);
    SetGraphicsPipelineState
              (param_1,(FGraphicsPipelineStateInitializer *)local_358,0,CheckApply,true);
    pFVar17 = TShaderRefBase<FYUY2ConvertPS,FShaderMapPointerTable>::GetPixelShader(&local_3e8,true)
    ;
    pFVar18 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
    local_4a8._16_8_ = pTVar1->Reference;
    if ((FRHITexture *)local_4a8._16_8_ != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_4a8._16_8_);
    }
    FYUY2ConvertPS::SetParameters
              ((FYUY2ConvertPS *)local_3f8.ShaderContent,pFVar18,(FRHITexture *)(local_4a8 + 0x10),
               (TIntPoint<int> *)&local_4c8._s_0,&MediaShaders::YuvToRgbRec709Scaled,
               &MediaShaders::YUVOffset8bits,false,None);
  }
  FRHICommandList::SetBatchedShaderParameters(param_1,(FRHIGraphicsShader *)pFVar17,pFVar18);
  CreateTempMediaVertexBuffer((FRHICommandListBase *)local_4a8,fVar21,0.0,fVar7,0.0);
  uVar8 = local_4a8._0_8_;
  if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
    puVar20 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x28,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar20;
    *(undefined8 **)&param_1->field_0x30 = puVar20 + 1;
    puVar20[1] = 0;
    *puVar20 = &___7FRHICommandSetStreamSource__6B_;
    *(undefined4 *)(puVar20 + 2) = 0;
    puVar20[3] = uVar8;
    *(undefined4 *)(puVar20 + 4) = 0;
  }
  else {
    pIVar19 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
    (**(code **)(pIVar19->_padding_ + 0x198))(pIVar19,0,uVar8,0);
  }
  FRHICommandList::SetViewport
            (param_1,0.0,0.0,0.0,(float)local_4c8._s_0.X,(float)local_4c8._s_0.Y,fVar7);
  if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
    puVar20 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar20;
    *(undefined8 **)&param_1->field_0x30 = puVar20 + 1;
    puVar20[1] = 0;
    *puVar20 = &___7FRHICommandDrawPrimitive__6B_;
    *(undefined4 *)(puVar20 + 2) = 0;
    *(undefined4 *)((longlong)puVar20 + 0x14) = 2;
    *(undefined4 *)(puVar20 + 3) = 1;
  }
  else {
    pIVar19 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
    (**(code **)(pIVar19->_padding_ + 0x1e0))(pIVar19,0,2,1);
  }
  if ((FRHIResource *)local_4a8._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_4a8._0_8_);
  }
LAB_14f12a355:
  if (((param_1->field_0x29b & 2) == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInsideRenderPass()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x10c5,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((param_1->field_0x29b & 4) != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsInsideComputePass()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x10c6,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar10 = param_1->field_0x29b;
  if ((bVar10 & 8) != 0) {
    (**(code **)(GDynamicRHI->_padding_ + 0x270))(GDynamicRHI,param_1);
    bVar10 = param_1->field_0x29b & 0xf7;
    param_1->field_0x29b = bVar10;
  }
  if ((GRHICommandList.bLatchedBypass == false) || ((bVar10 & 0x20) == 0)) {
    puVar20 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x10,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar20;
    *(undefined8 **)&param_1->field_0x30 = puVar20 + 1;
    puVar20[1] = 0;
    *puVar20 = &___7FRHICommandEndRenderPass__6B_;
  }
  else {
    pIVar19 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
    (**(code **)(pIVar19->_padding_ + 0x250))(pIVar19);
  }
  param_1->field_0x29b = param_1->field_0x29b & 0xfd;
  local_488.ShaderMap = (FShaderMapBase *)CONCAT44(local_488.ShaderMap._4_4_,1);
  local_428._4_2_ = 0xffff;
  local_488.ShaderContent = (FBMPConvertPS *)local_428;
  *(undefined2 *)&param_1->field_0x298 = 0;
  local_368._8_8_ = local_488.ShaderMap;
  local_428._0_4_ = -1;
  local_418 = 1;
  local_414 = 0;
  local_410 = 0x60;
  local_40c = 0;
  local_400 = 0;
  local_428._8_8_ = pFVar4;
  local_368._0_8_ = local_488.ShaderContent;
  FRHIComputeCommandList::Transition
            ((FRHIComputeCommandList *)param_1,
             (TArrayView<FRHITransitionInfo_const_,int> *)local_368,None);
  if (local_110.Reference != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)local_110.Reference);
  }
  return;
}

// ForceCompletion @ 14f12a540

void __thiscall FMediaFoundationMovieStreamer::ForceCompletion(FMediaFoundationMovieStreamer *this)

{
  TSharedPtr<FSlateTexture2DRHIRef,1> *pTVar1;
  int *piVar2;
  atomic<int> *paVar3;
  atomic<int> aVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  FMovieViewport *pFVar7;
  code *pcVar8;
  FWeakReferencer<1> *pFVar9;
  bool bVar10;
  char cVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  longlong lVar17;
  undefined8 uStack_78;
  FSharedReferencer<1> FStack_70;
  void *apvStack_68 [2];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  FDestructionSentinel FStack_48;
  
  (**(code **)(this->_padding_ + 0x30))(this,apvStack_68);
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
            (**(code **)(this->_padding_ + 0x58))(this);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&FStack_48);
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
  bVar12 = false;
  uVar16 = (this_00->InvocationList).ArrayNum - 1;
  if (-1 < (int)uVar16) {
    lVar17 = (longlong)(int)uVar16 << 4;
    bVar12 = false;
    do {
      uVar13 = 0;
      if ((int)uVar16 < (this_00->InvocationList).ArrayNum) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar15 = (this_00->InvocationList).AllocatorInstance.Data;
      if (((*(int *)(pFVar15 + lVar17 + 8) == 0) ||
          (plVar5 = *(longlong **)(pFVar15 + lVar17), plVar5 == (longlong *)0x0)) ||
         (cVar11 = (**(code **)(*plVar5 + 0x68))(), cVar11 == '\0')) {
        bVar12 = true;
      }
      lVar17 = lVar17 + -0x10;
      uVar16 = uVar16 - 1;
    } while (-1 < (int)uVar16);
  }
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
  if (bVar12) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,false);
  }
  if (FStack_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
  }
  if (apvStack_68[0] != (void *)0x0) {
    FMemory::Free(apvStack_68[0]);
  }
  pTVar1 = &this->Texture;
  if ((this->Texture).Object != (FSlateTexture2DRHIRef *)0x0) {
    pFVar15 = (this->TextureFreeList).AllocatorInstance.Data;
    if (((pFVar15 <= pTVar1) &&
        (pTVar1 < pFVar15 + (longlong)(this->TextureFreeList).ArrayMax * 0x10)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar14 = (this->TextureFreeList).ArrayNum;
    piVar2 = &(this->TextureFreeList).ArrayMax;
    if (iVar14 == *piVar2) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&(this->TextureFreeList).AllocatorInstance,piVar2);
    }
    (this->TextureFreeList).ArrayNum = iVar14 + 1;
    pFVar15 = (this->TextureFreeList).AllocatorInstance.Data + (longlong)iVar14 * 0x10;
    *(FSlateTexture2DRHIRef **)pFVar15 = pTVar1->Object;
    pTVar6 = (this->Texture).SharedReferenceCount.ReferenceController;
    *(TReferenceControllerBase<1> **)(pFVar15 + 8) = pTVar6;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((this->MovieViewport).Object == (FMovieViewport *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar7 = (this->MovieViewport).Object;
    uStack_58 = *(undefined4 *)&(pFVar7->SlateTexture).Object;
    uStack_54 = *(undefined4 *)((longlong)&(pFVar7->SlateTexture).Object + 4);
    pFVar9 = &(pFVar7->SlateTexture).WeakReferenceCount;
    uStack_50 = *(undefined4 *)&pFVar9->ReferenceController;
    uStack_4c = *(undefined4 *)
                 ((longlong)&(pFVar7->SlateTexture).WeakReferenceCount.ReferenceController + 4);
    pTVar6 = pFVar9->ReferenceController;
    (pFVar7->SlateTexture).Object = (FSlateTexture2DRHIRef *)0x0;
    (pFVar7->SlateTexture).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar3 = &pTVar6->WeakReferenceCount;
      aVar4 = *paVar3;
      *paVar3 = (atomic<int>)((int)*paVar3 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
      }
    }
    uStack_78 = 0;
    FStack_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<FSlateTexture2DRHIRef,1> *)&uStack_78) {
      pTVar1->Object = (FSlateTexture2DRHIRef *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Texture).SharedReferenceCount,&FStack_70);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_70.ReferenceController);
  }
  if (this->VideoPlayer != (FVideoPlayer *)0x0) {
    FVideoPlayer::Shutdown(this->VideoPlayer);
    (**(code **)(this->VideoPlayer->_padding_ + 0x10))();
    this->VideoPlayer = (FVideoPlayer *)0x0;
  }
  if (this->SampleGrabberCallback != (FSampleGrabberCallback *)0x0) {
    (**(code **)(this->SampleGrabberCallback->_padding_ + 0x10))();
    this->SampleGrabberCallback = (FSampleGrabberCallback *)0x0;
  }
  return;
}

// GetAspectRatio @ 14f12a8d0

float __thiscall FMediaFoundationMovieStreamer::GetAspectRatio(FMediaFoundationMovieStreamer *this)

{
  int iVar1;
  FMovieViewport *pFVar2;
  FMovieViewport *pFVar3;
  code *pcVar4;
  code *pcVar5;
  bool bVar6;
  int *piVar7;
  longlong lVar8;
  float fVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  if ((this->MovieViewport).Object == (FMovieViewport *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      fVar9 = (float)(*pcVar5)();
      return fVar9;
    }
  }
  pFVar2 = (this->MovieViewport).Object;
  pcVar5 = *(code **)(pFVar2->_padding_ + 0x10);
  if (pFVar2 == (FMovieViewport *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      fVar9 = (float)(*pcVar5)();
      return fVar9;
    }
  }
  pFVar3 = (this->MovieViewport).Object;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x10);
  piVar7 = (int *)(*pcVar5)(pFVar2,local_res8);
  iVar1 = *piVar7;
  lVar8 = (*pcVar4)(pFVar3,local_res10);
  return (float)iVar1 / (float)*(int *)(lVar8 + 4);
}

// GetMovieName @ 14f12a9b0

FString * __thiscall
FMediaFoundationMovieStreamer::GetMovieName
          (FMediaFoundationMovieStreamer *this,FString *__return_storage_ptr__)

{
  uint uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  void *_Src;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  FString *pFVar8;
  FString local_38;
  FString local_28;
  
  uVar1 = this->MovieIndex;
  if (((int)uVar1 < 0) || ((this->StoredMoviePaths).ArrayNum <= (int)uVar1)) {
    pFVar8 = ::FString::FString(&local_28,L"");
    bVar5 = false;
    bVar6 = true;
  }
  else {
    uVar7 = 0;
    if ((int)uVar1 < (this->StoredMoviePaths).ArrayNum) {
      uVar7 = ~uVar1 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FString *)(*pcVar4)();
        return pFVar8;
      }
    }
    pFVar3 = (this->StoredMoviePaths).AllocatorInstance.Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar2 = *(int *)(pFVar3 + (longlong)(int)uVar1 * 0x10 + 8);
    _Src = *(void **)(pFVar3 + (longlong)(int)uVar1 * 0x10);
    local_38.Data.ArrayNum = iVar2;
    if (iVar2 == 0) {
      local_38.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar2,0,(ForAnyElementType *)&local_38,iVar2,&local_38.Data.ArrayMax);
      memcpy(local_38.Data.AllocatorInstance.Data,_Src,(longlong)iVar2 * 2);
    }
    pFVar8 = &local_38;
    bVar5 = true;
    bVar6 = false;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
  (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar8->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar8->Data).ArrayMax;
  (pFVar8->Data).ArrayNum = 0;
  (pFVar8->Data).ArrayMax = 0;
  if (bVar6) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar5) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetTexture @ 14f12ac40

/* WARNING: Removing unreachable block (ram,0x00014f12ac9a) */

TRefCountPtr<FRHITexture> __thiscall
FMediaFoundationMovieStreamer::GetTexture(FMediaFoundationMovieStreamer *this)

{
  FSlateTexture2DRHIRef *pFVar1;
  FRHIResource *this_00;
  FRHITexture *in_RDX;
  
  pFVar1 = (this->Texture).Object;
  if (pFVar1 == (FSlateTexture2DRHIRef *)0x0) {
    in_RDX->_padding_ = 0;
  }
  else {
    this_00 = (FRHIResource *)pFVar1->_padding_;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_00);
    }
    in_RDX->_padding_ = (longlong)this_00;
  }
  return (TRefCountPtr<FRHITexture>)in_RDX;
}

// GetViewportInterface @ 14f12acc0

TSharedPtr<ISlateViewport,1> * __thiscall
FMediaFoundationMovieStreamer::GetViewportInterface
          (FMediaFoundationMovieStreamer *this,TSharedPtr<ISlateViewport,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (ISlateViewport *)(this->MovieViewport).Object;
  pTVar1 = (this->MovieViewport).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// Init @ 14f12acf0

bool __thiscall
FMediaFoundationMovieStreamer::Init
          (FMediaFoundationMovieStreamer *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TEnumAsByte<EMoviePlaybackType> param_2)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  atomic<int> *paVar3;
  atomic<int> aVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FMovieViewport *pFVar7;
  code *pcVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  undefined1 uVar11;
  
  if (param_1->ArrayNum == 0) {
    return false;
  }
  pTVar1 = &this->StoredMoviePaths;
  this->MovieIndex = 0;
  (this->PlaybackType).Value = param_2.Value;
  if (pTVar1 != param_1) {
    DestructItems<FString,int>
              ((FString *)(pTVar1->AllocatorInstance).Data,(this->StoredMoviePaths).ArrayNum);
    iVar5 = param_1->ArrayNum;
    piVar2 = &(this->StoredMoviePaths).ArrayMax;
    pFVar6 = (param_1->AllocatorInstance).Data;
    (this->StoredMoviePaths).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar5,*piVar2,&pTVar1->AllocatorInstance,iVar5,piVar2);
      ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar6,iVar5);
    }
  }
  if (((this->MovieViewport).Object == (FMovieViewport *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  pFVar7 = (this->MovieViewport).Object;
  pTVar9 = (pFVar7->SlateTexture).WeakReferenceCount.ReferenceController;
  (pFVar7->SlateTexture).Object = (FSlateTexture2DRHIRef *)0x0;
  (pFVar7->SlateTexture).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar3 = &pTVar9->WeakReferenceCount;
    aVar4 = *paVar3;
    *paVar3 = (atomic<int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar9->_padding_ + 8))(pTVar9,1);
    }
  }
  bVar10 = OpenNextMovie(this);
  return bVar10;
}

// IsLastMovieInPlaylist @ 14f12afb0

bool __thiscall
FMediaFoundationMovieStreamer::IsLastMovieInPlaylist(FMediaFoundationMovieStreamer *this)

{
  return this->MovieIndex == (this->StoredMoviePaths).ArrayNum + -1;
}

// OnCurrentMovieClipFinished @ 14f12b0e0

FOnCurrentMovieClipFinished * __thiscall
FMediaFoundationMovieStreamer::OnCurrentMovieClipFinished(FMediaFoundationMovieStreamer *this)

{
  return &this->OnCurrentMovieClipFinishedDelegate;
}

// OpenNextMovie @ 14f12b450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FMediaFoundationMovieStreamer::OpenNextMovie(FMediaFoundationMovieStreamer *this)

{
  int *piVar1;
  TSharedPtr<FSlateTexture2DRHIRef,1> *this_00;
  FVideoPlayer *pFVar2;
  IMFMediaSession *pIVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  FString *pFVar11;
  FSlateTexture2DRHIRef *pFVar12;
  FSlateTexture2DRHIRef *pFVar13;
  FRenderCommandList *pFVar14;
  FCommandList *pFVar15;
  FRenderCommandTag *pFVar16;
  FSlateTexture2DRHIRef *pFVar17;
  undefined ***pppuVar18;
  longlong lVar19;
  undefined ***pppuVar20;
  ulonglong uVar21;
  FSharedReferencer<1> FVar22;
  FScriptContainerElement *pFVar23;
  undefined1 auStackY_1d8 [32];
  undefined1 local_198 [8];
  TSharedPtr<FSlateTexture2DRHIRef,1> local_190;
  FSlateTexture2DRHIRef *local_180;
  TRawPtrProxy<FSlateTexture2DRHIRef> local_178;
  FString local_170;
  undefined1 local_160 [16];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  FString local_138;
  TSharedPtr<FSlateTextureData,1> local_128;
  code *local_118 [2];
  undefined **local_108;
  FSlateTexture2DRHIRef *pFStack_100;
  undefined8 local_f8;
  undefined ***local_f0;
  code *local_e8 [2];
  undefined **local_d8;
  FSlateTexture2DRHIRef *pFStack_d0;
  undefined8 local_c8;
  undefined ***local_c0;
  undefined1 local_b8 [16];
  undefined **local_a8;
  FSlateTexture2DRHIRef *pFStack_a0;
  undefined8 local_98;
  undefined ***local_90;
  byte local_88;
  undefined1 local_78 [16];
  undefined **local_68;
  FSlateTexture2DRHIRef *pFStack_60;
  undefined8 local_58;
  undefined ***local_50;
  byte local_48;
  ulonglong local_38;
  
  pppuVar20 = &local_d8;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  iVar9 = (this->StoredMoviePaths).ArrayNum;
  if (((iVar9 < 1) || (iVar9 <= this->MovieIndex)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StoredMoviePaths.Num() > 0 && MovieIndex < StoredMoviePaths.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WindowsMoviePlayer\\Source\\WindowsMoviePlayer\\Private\\WindowsMovieStreamer.cpp"
                         ,0x101,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  uVar10 = this->MovieIndex;
  pFVar13 = (FSlateTexture2DRHIRef *)0x0;
  uVar8 = 0;
  if ((int)uVar10 < (this->StoredMoviePaths).ArrayNum) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  pFVar23 = (this->StoredMoviePaths).AllocatorInstance.Data;
  pFVar11 = FPaths::ProjectContentDir(&local_138);
  ::FString::ConcatFC(&local_170,pFVar11,L"Movies/");
  ::FString::ConcatFF((FString *)local_160,&local_170,
                      (FString *)(pFVar23 + (longlong)(int)uVar10 * 0x10));
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  pFVar12 = ::operator_new(0x18);
  pFVar17 = pFVar13;
  if (pFVar12 != (FSlateTexture2DRHIRef *)0x0) {
    *(undefined4 *)&pFVar12->_padding_ = 1;
    pFVar12->_padding_ = (longlong)&___7FSampleGrabberCallback__6B_;
    pFVar12->_padding_ = (longlong)&this->TextureData;
    *(undefined4 *)((longlong)&pFVar12->_padding_ + 4) = 0;
    pFVar17 = pFVar12;
  }
  this->SampleGrabberCallback = (FSampleGrabberCallback *)pFVar17;
  pFVar12 = ::operator_new(0x58);
  pFVar17 = pFVar13;
  if (pFVar12 != (FSlateTexture2DRHIRef *)0x0) {
    *(undefined4 *)&pFVar12->_padding_ = 1;
    pFVar12->_padding_ = (longlong)&___7FVideoPlayer__6B_;
    pFVar12->_padding_ = 0;
    pFVar12->_padding_ = 0;
    *(undefined4 *)&pFVar12->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar12->_padding_ + 4) = 0;
    pFVar12->_padding_ = 0;
    pFVar12->_padding_ = 0;
    pFVar12->_padding_ = 0;
    pFVar12->_padding_ = 0;
    pFVar12->Width = 0;
    pFVar12->Height = 0;
    *(undefined1 *)&pFVar12->TexCreateFlags = None;
    pFVar17 = pFVar12;
  }
  this->VideoPlayer = (FVideoPlayer *)pFVar17;
  FVideoPlayer::OpenFile
            ((FVideoPlayer *)pFVar17,(FString *)local_198,(FSampleGrabberCallback *)local_160,
             SUB81(this->SampleGrabberCallback,0));
  uVar5._4_4_ = local_198._4_4_;
  uVar5._0_4_ = local_198._0_4_;
  if ((local_198._0_4_ == UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X) &&
     (local_198._4_4_ == UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y)) {
    bVar6 = false;
    goto LAB_14f12baa7;
  }
  piVar1 = &(this->TextureData).ArrayMax;
  (this->TextureData).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->TextureData).AllocatorInstance,0,piVar1);
  }
  if ((this->TextureFreeList).ArrayNum < 1) {
    pFVar17 = ::operator_new(0x70);
    if (pFVar17 != (FSlateTexture2DRHIRef *)0x0) {
      local_128.Object = (FSlateTextureData *)0x0;
      local_128.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar13 = FSlateTexture2DRHIRef::FSlateTexture2DRHIRef
                          (pFVar17,local_198._0_4_,local_198._4_4_,PF_B8G8R8A8,&local_128,
                           RenderTargetable,true);
    }
    local_178.Object = pFVar13;
    TSharedPtr<FSlateTexture2DRHIRef,1>::operator=<FSlateTexture2DRHIRef>(&this->Texture,&local_178)
    ;
    local_c0 = (undefined ***)0x0;
    local_d8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FMediaFoundationMovieStreamer::OpenNextMovie'::`20'::<lambda_2>,1,0>
                ::_vftable_;
    pFStack_d0 = (this->Texture).Object;
    local_e8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FMediaFoundationMovieStreamer::OpenNextMovie'::__l20::<lambda_2>,void,FRHICommandListImmediate_&>
                  ::Call;
    pFVar14 = FRenderCommandList::GetInstanceTLS();
    if (pFVar14 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FMediaFoundationMovieStreamer::OpenNextMovie_::__l20::TSTR_InitMovieTexture289>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_e8);
    }
    else {
      pFVar15 = FRenderCommandList::GetRenderThread(pFVar14);
      local_78._0_8_ = local_e8[0];
      local_50 = local_c0;
      local_68 = local_d8;
      pFStack_60 = pFStack_d0;
      local_58 = local_c8;
      local_e8[0] = (code *)0x0;
      local_48 = 2;
      pFVar16 = (FRenderCommandTag *)
                TRenderCommandTag<`FMediaFoundationMovieStreamer::OpenNextMovie'::__l20::TSTR_InitMovieTexture289>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar15,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_78,pFVar16);
      uVar21 = (ulonglong)local_48;
      if ((2 < uVar21) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar21] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_78._0_8_ != (code *)0x0) {
          pppuVar18 = (undefined ***)(local_78 + 0x10);
          if (local_50 != (undefined ***)0x0) {
            pppuVar18 = local_50;
          }
          (*(code *)(*pppuVar18)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar21])(local_78);
      }
    }
    pppuVar18 = local_c0;
    if (local_e8[0] != (code *)0x0) goto LAB_14f12ba06;
  }
  else {
    pFVar23 = (this->TextureFreeList).AllocatorInstance.Data;
    lVar19 = (longlong)(this->TextureFreeList).ArrayNum;
    local_190.Object = *(FSlateTexture2DRHIRef **)(pFVar23 + lVar19 * 0x10 + -0x10);
    FVar22.ReferenceController = *(TReferenceControllerBase<1> **)(pFVar23 + lVar19 * 0x10 + -8);
    *(undefined8 *)(pFVar23 + lVar19 * 0x10 + -8) = 0;
    *(undefined8 *)(pFVar23 + lVar19 * 0x10 + -0x10) = 0;
    iVar9 = (this->TextureFreeList).ArrayNum;
    pFVar23 = (this->TextureFreeList).AllocatorInstance.Data + (longlong)iVar9 * 0x10;
    local_190.SharedReferenceCount.ReferenceController = FVar22.ReferenceController;
    local_180 = local_190.Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)(pFVar23 + -8));
    iVar9 = (this->TextureFreeList).ArrayNum - iVar9;
    if (iVar9 != 0) {
      memmove(pFVar23 + -0x10,pFVar23,(longlong)iVar9 << 4);
    }
    piVar1 = &(this->TextureFreeList).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&(this->TextureFreeList).AllocatorInstance,(this->TextureFreeList).ArrayNum,
               &(this->TextureFreeList).ArrayMax);
    this_00 = &this->Texture;
    if (this_00 != &local_190) {
      this_00->Object = local_180;
      local_190.Object = (FSlateTexture2DRHIRef *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Texture).SharedReferenceCount,&local_190.SharedReferenceCount);
      FVar22.ReferenceController = local_190.SharedReferenceCount.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar22.ReferenceController);
    if ((this_00->Object == (FSlateTexture2DRHIRef *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    uVar10 = (**(code **)this_00->Object->_padding_)();
    if (uVar10 == local_198._0_4_) {
      pFVar13 = TSharedPtr<FSlateTexture2DRHIRef,1>::operator->(this_00);
      uVar10 = (**(code **)(pFVar13->_padding_ + 8))(pFVar13);
      if (uVar10 == local_198._4_4_) goto LAB_14f12ba13;
    }
    local_f0 = (undefined ***)0x0;
    local_108 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FMediaFoundationMovieStreamer::OpenNextMovie'::`18'::<lambda_1>,1,0>
                 ::_vftable_;
    pFStack_100 = (this->Texture).Object;
    local_118[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FMediaFoundationMovieStreamer::OpenNextMovie'::__l18::<lambda_1>,void,FRHICommandListImmediate_&>
                   ::Call;
    local_f8 = uVar5;
    pFVar14 = FRenderCommandList::GetInstanceTLS();
    if (pFVar14 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FMediaFoundationMovieStreamer::OpenNextMovie_::__l18::TSTR_UpdateMovieTexture276>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_118);
    }
    else {
      pFVar15 = FRenderCommandList::GetRenderThread(pFVar14);
      local_b8._0_8_ = local_118[0];
      local_90 = local_f0;
      local_a8 = local_108;
      pFStack_a0 = pFStack_100;
      local_98 = local_f8;
      local_118[0] = (code *)0x0;
      local_88 = 2;
      pFVar16 = (FRenderCommandTag *)
                TRenderCommandTag<`FMediaFoundationMovieStreamer::OpenNextMovie'::__l18::TSTR_UpdateMovieTexture276>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar15,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_b8,pFVar16);
      uVar21 = (ulonglong)local_88;
      if ((2 < uVar21) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar21] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_b8._0_8_ != (code *)0x0) {
          pppuVar20 = (undefined ***)(local_b8 + 0x10);
          if (local_90 != (undefined ***)0x0) {
            pppuVar20 = local_90;
          }
          (*(code *)(*pppuVar20)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar21])(local_b8);
      }
    }
    if (local_118[0] != (code *)0x0) {
      pppuVar20 = &local_108;
      pppuVar18 = local_f0;
LAB_14f12ba06:
      if (pppuVar18 != (undefined ***)0x0) {
        pppuVar20 = pppuVar18;
      }
      (*(code *)(*pppuVar20)[2])();
    }
  }
LAB_14f12ba13:
  pFVar2 = this->VideoPlayer;
  if ((pFVar2->MediaSession == (IMFMediaSession *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("MediaSession != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WindowsMoviePlayer\\Source\\WindowsMoviePlayer\\Private\\WindowsMovieStreamer.cpp"
                         ,0x1fa,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  pIVar3 = pFVar2->MediaSession;
  local_140 = 0;
  local_150 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0;
  uStack_148 = 0;
  iVar9 = (**(code **)((longlong)*pIVar3 + 0x48))(pIVar3,&GUID_NULL,&local_150);
  if ((iVar9 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(((HRESULT)(HResult)) >= 0)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WindowsMoviePlayer\\Source\\WindowsMoviePlayer\\Private\\WindowsMovieStreamer.cpp"
                         ,0x200,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  PropVariantClear((PROPVARIANT *)&local_150);
  bVar6 = true;
LAB_14f12baa7:
  if ((FScriptContainerElement *)local_160._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_160._0_8_);
  }
  return bVar6;
}

// Tick @ 14f12bf00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
FMediaFoundationMovieStreamer::Tick
          (FMediaFoundationMovieStreamer *this,FRHICommandListBase *param_1,float param_2)

{
  uchar uVar1;
  FSlateTexture2DRHIRef *pFVar2;
  FVideoPlayer *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  FRHICommandListImmediate *pFVar9;
  longlong lVar10;
  FMovieViewport *pFVar11;
  TWeakPtr<FSlateTexture2DRHIRef,1> *pTVar12;
  FLLMScope local_res8 [2];
  FLLMScope local_res20 [2];
  FLLMScope local_d8 [2];
  FMemScope local_d0;
  FMemScope local_c8;
  FMemScope local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined2 local_9c;
  longlong local_98 [2];
  undefined4 local_88;
  undefined4 local_80;
  undefined2 local_7c;
  TWeakPtr<FSlateTexture2DRHIRef,1> local_78;
  TWeakPtr<FSlateTexture2DRHIRef,1> local_68;
  TWeakPtr<FSlateTexture2DRHIRef,1> local_58;
  void *local_48 [4];
  
  pFVar2 = (this->Texture).Object;
  if (pFVar2 != (FSlateTexture2DRHIRef *)0x0) {
    if ((int)pFVar2->_padding_ == -1) {
      (**(code **)(pFVar2->_padding_ + 0x18))();
    }
    if ((this->SampleGrabberCallback->VideoSampleReady).Counter != 0) {
      pFVar3 = this->VideoPlayer;
      if ((((pFVar3->VideoTrackFormat).SampleFormat == CharBGRA) &&
          ((pFVar3->VideoTrackFormat).BufferDim.field0_0x0._s_0.X ==
           (pFVar3->VideoTrackFormat).OutputDim.field0_0x0._s_0.X)) &&
         ((pFVar3->VideoTrackFormat).BufferDim.field0_0x0._s_0.Y ==
          (pFVar3->VideoTrackFormat).OutputDim.field0_0x0._s_0.Y)) {
        pFVar9 = FRHICommandListBase::GetAsImmediate(param_1);
        lVar10 = pFVar2->_padding_;
        FLLMScope::FLLMScope(local_res20,Textures,false,None,Default,true);
        FMemScope::FMemScope(&local_c8,Textures,true);
        local_b0 = 0;
        local_a0 = 1;
        local_a8 = 0;
        local_9c = 0x100;
        local_b8 = lVar10;
        FLLMScope::FLLMScope(local_res8,Textures,false,None,Default,true);
        FMemScope::FMemScope(&local_d0,Textures,true);
        (**(code **)(GDynamicRHI->_padding_ + 0x1e0))(GDynamicRHI,local_48,pFVar9);
        FMemScope::~FMemScope(&local_d0);
        FLLMScope::~FLLMScope(local_res8);
        FMemScope::~FMemScope(&local_c8);
        FLLMScope::~FLLMScope(local_res20);
        memcpy(local_48[0],(this->TextureData).AllocatorInstance.Data,
               (longlong)(this->TextureData).ArrayNum);
        pFVar9 = FRHICommandListBase::GetAsImmediate(param_1);
        local_98[0] = pFVar2->_padding_;
        local_98[1] = 0;
        local_80 = 3;
        local_88 = 0;
        local_7c = 0x100;
        FLLMScope::FLLMScope(local_d8,Textures,false,None,Default,true);
        FMemScope::FMemScope(&local_c0,Textures,true);
        (**(code **)(GDynamicRHI->_padding_ + 0x1e8))(GDynamicRHI,pFVar9,local_98);
        FMemScope::~FMemScope(&local_c0);
        FLLMScope::~FLLMScope(local_d8);
      }
      else {
        if (((param_1->PersistentState).bImmediate == '\0') &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsImmediate()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                               ,0x17,L"This operation expects the immediate command list."), bVar5))
        {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        ConvertSample(this,(FRHICommandList *)param_1);
      }
      if (((this->MovieViewport).Object == (FMovieViewport *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      lVar10 = (**(code **)(((this->MovieViewport).Object)->_padding_ + 0x18))();
      if (lVar10 == 0) {
        pFVar11 = TSharedPtr<FMovieViewport,1>::operator->(&this->MovieViewport);
        local_78.Object = (this->Texture).Object;
        local_78.WeakReferenceCount.ReferenceController =
             (this->Texture).SharedReferenceCount.ReferenceController;
        if (local_78.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
               (atomic<int>)
               ((int)(local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
          UNLOCK();
        }
        FMovieViewport::SetTexture(pFVar11,&local_78);
      }
      LOCK();
      (this->SampleGrabberCallback->VideoSampleReady).Counter = 0;
      UNLOCK();
    }
  }
  if ((this->VideoPlayer->MovieIsFinished).Counter != 0) {
    if ((this->VideoPlayer->bFailedToCreateMediaSink != false) && (this->bUseSound != false)) {
      this->MovieIndex = this->MovieIndex + -1;
      this->bUseSound = false;
    }
    CloseMovie(this);
    iVar8 = (this->StoredMoviePaths).ArrayNum;
    iVar7 = this->MovieIndex + 1;
    if (iVar7 < iVar8) {
      this->MovieIndex = iVar7;
      bVar5 = OpenNextMovie(this);
      if (!bVar5) {
        return false;
      }
      pFVar11 = TSharedPtr<FMovieViewport,1>::operator->(&this->MovieViewport);
      local_68.Object = (this->Texture).Object;
      local_68.WeakReferenceCount.ReferenceController =
           (this->Texture).SharedReferenceCount.ReferenceController;
      if (local_68.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_68.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
             (atomic<int>)
             ((int)(local_68.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar12 = &local_68;
    }
    else {
      uVar1 = (this->PlaybackType).Value;
      if (uVar1 == '\0') {
        return true;
      }
      iVar8 = iVar8 + -1;
      if (uVar1 != '\x02') {
        iVar8 = 0;
      }
      this->MovieIndex = iVar8;
      bVar5 = OpenNextMovie(this);
      if (!bVar5) {
        return false;
      }
      pFVar11 = TSharedPtr<FMovieViewport,1>::operator->(&this->MovieViewport);
      local_58.Object = (this->Texture).Object;
      local_58.WeakReferenceCount.ReferenceController =
           (this->Texture).SharedReferenceCount.ReferenceController;
      if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
             (atomic<int>)
             ((int)(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar12 = &local_58;
    }
    FMovieViewport::SetTexture(pFVar11,pTVar12);
  }
  return false;
}

