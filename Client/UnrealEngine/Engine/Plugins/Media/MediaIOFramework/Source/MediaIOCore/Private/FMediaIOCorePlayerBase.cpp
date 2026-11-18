// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 95

// <lambda_1> @ 14d789170

<lambda_1> * __thiscall
`FMediaIOCorePlayerBase::UnregisterSampleBuffers'::__l2::<lambda_1>::<lambda_1>
          (void *this,<lambda_1> *param_1)

{
  undefined8 *puVar1;
  TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator> *pTVar2;
  undefined1 *_Src;
  
  puVar1 = (undefined8 *)((longlong)this + 0x10);
  *(ITextureTransfer **)this = (param_1->TextureTransfer).Object;
  pTVar2 = &param_1->BuffersToUnregister;
  *(TReferenceControllerBase<1> **)((longlong)this + 8) =
       (param_1->TextureTransfer).SharedReferenceCount.ReferenceController;
  (param_1->TextureTransfer).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->TextureTransfer).Object = (ITextureTransfer *)0x0;
  *puVar1 = 0;
  *(undefined8 *)((longlong)this + 0x18) = 0;
  *(undefined8 *)((longlong)this + 0x30) = 0;
  *(undefined4 *)((longlong)this + 0x38) = 0;
  *(undefined4 *)((longlong)this + 0x3c) = 0x80;
  *(undefined4 *)((longlong)this + 0x40) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x44) = 0;
  *(undefined8 *)((longlong)this + 0x50) = 0;
  *(undefined4 *)((longlong)this + 0x58) = 0;
  if ((TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator> *)puVar1 != pTVar2) {
    *puVar1 = *(undefined8 *)&pTVar2->Elements;
    *(undefined8 *)&pTVar2->Elements = 0;
    *(undefined4 *)((longlong)this + 0x18) =
         *(undefined4 *)&(param_1->BuffersToUnregister).Elements.field_0x8;
    _Src = &(param_1->BuffersToUnregister).Elements.field_0x10;
    *(undefined4 *)((longlong)this + 0x1c) =
         *(undefined4 *)&(param_1->BuffersToUnregister).Elements.field_0xc;
    *(undefined8 *)&(param_1->BuffersToUnregister).Elements.field_0x8 = 0;
    if ((undefined1 *)((longlong)this + 0x20) != _Src) {
      if (*(longlong *)&(param_1->BuffersToUnregister).Elements.field_0x20 == 0) {
        memmove((undefined1 *)((longlong)this + 0x20),_Src,0x10);
      }
      if (*(void **)((longlong)this + 0x30) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)this + 0x30));
      }
      *(undefined8 *)((longlong)this + 0x30) =
           *(undefined8 *)&(param_1->BuffersToUnregister).Elements.field_0x20;
      *(undefined8 *)&(param_1->BuffersToUnregister).Elements.field_0x20 = 0;
      *(undefined4 *)((longlong)this + 0x38) =
           *(undefined4 *)&(param_1->BuffersToUnregister).Elements.field_0x28;
      *(undefined4 *)((longlong)this + 0x3c) =
           *(undefined4 *)&(param_1->BuffersToUnregister).Elements.field_0x2c;
      *(undefined8 *)&(param_1->BuffersToUnregister).Elements.field_0x28 = 0;
    }
    *(undefined4 *)((longlong)this + 0x40) =
         *(undefined4 *)&(param_1->BuffersToUnregister).Elements.field_0x30;
    *(undefined4 *)((longlong)this + 0x44) =
         *(undefined4 *)&(param_1->BuffersToUnregister).Elements.field_0x34;
    *(undefined4 *)&(param_1->BuffersToUnregister).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->BuffersToUnregister).Elements.field_0x34 = 0;
  }
  if ((param_1->BuffersToUnregister).Hash.SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)((longlong)this + 0x48) =
         *(undefined4 *)(param_1->BuffersToUnregister).Hash.InlineData;
  }
  if (*(void **)((longlong)this + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x50));
  }
  *(ForElementType<FSetElementId> *)((longlong)this + 0x50) =
       (param_1->BuffersToUnregister).Hash.SecondaryData;
  (param_1->BuffersToUnregister).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(int *)((longlong)this + 0x58) = (param_1->BuffersToUnregister).HashSize;
  (param_1->BuffersToUnregister).HashSize = 0;
  return this;
}

// FMediaIOCorePlayerBase @ 14d78a090

FMediaIOCorePlayerBase * __thiscall
FMediaIOCorePlayerBase::FMediaIOCorePlayerBase
          (FMediaIOCorePlayerBase *this,IMediaEventSink *param_1)

{
  TSharedPtr<UE::GPUTextureTransfer::ITextureTransfer,1> *pTVar1;
  FMediaIOCoreSamples *this_00;
  FJITRMediaTextureSamples *pFVar2;
  FGPUTextureTransferModule *this_01;
  TSharedPtr<UE::GPUTextureTransfer::ITextureTransfer,1> *pTVar3;
  FJITRMediaTextureSamples *pFVar4;
  TSharedPtr<UE::GPUTextureTransfer::ITextureTransfer,1> local_18;
  
  pFVar4 = (FJITRMediaTextureSamples *)0x0;
  (this->VideoTrackFormat).FrameRates.LowerBound.Type.Value = '\x02';
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IMediaPlayer__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IMediaCache__;
  this->_padding_ = (longlong)&_vftable__for__IMediaControls__;
  this->_padding_ = (longlong)&_vftable__for__IMediaTracks__;
  this->_padding_ = (longlong)&_vftable__for__IMediaView__;
  this->_padding_ = (longlong)&_vftable__for__ITimedDataInput__;
  (this->OpenUrl).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OpenUrl).Data.ArrayNum = 0;
  (this->OpenUrl).Data.ArrayMax = 0;
  (this->VideoTrackFormat).FrameRates.LowerBound.Value = 0.0;
  (this->VideoTrackFormat).FrameRates.UpperBound.Type.Value = '\x02';
  (this->VideoTrackFormat).FrameRates.UpperBound.Value = 0.0;
  (this->VideoTrackFormat).TypeName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VideoTrackFormat).TypeName.Data.ArrayNum = 0;
  (this->VideoTrackFormat).TypeName.Data.ArrayMax = 0;
  (this->AudioTrackFormat).TypeName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioTrackFormat).TypeName.Data.ArrayNum = 0;
  (this->AudioTrackFormat).TypeName.Data.ArrayMax = 0;
  (this->CurrentTime).Ticks = 0;
  this->CurrentState = Closed;
  this->EventSink = param_1;
  (this->VideoFrameRate).Numerator = 0x1e;
  (this->VideoFrameRate).Denominator = 1;
  this_00 = ::operator_new(0x300);
  pFVar2 = pFVar4;
  if (this_00 != (FMediaIOCoreSamples *)0x0) {
    pFVar2 = (FJITRMediaTextureSamples *)FMediaIOCoreSamples::FMediaIOCoreSamples(this_00);
  }
  (this->Samples).Ptr = (FMediaIOCoreSamples *)pFVar2;
  pTVar1 = &this->GPUTextureTransfer;
  pTVar1->Object = (ITextureTransfer *)0x0;
  (this->GPUTextureTransfer).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->EvaluationType = PlatformTime;
  this->bWarnedIncompatibleFrameRate = false;
  this->bAutoDetect = false;
  this->FrameDelay = 0;
  this->TimeDelay = 0.0;
  (this->PreviousFrameTimespan).Ticks = 0;
  (this->Channels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Channels).ArrayNum = 0;
  (this->Channels).ArrayMax = 0;
  (this->BaseSettings).FrameRate.Numerator = 0x18;
  (this->BaseSettings).FrameRate.Denominator = 1;
  (this->BaseSettings).EvaluationType = PlatformTime;
  (this->BaseSettings).BufferSize = 8;
  (this->BaseSettings).PlayerTimeOffset = 0.0;
  (this->BaseSettings).AbsoluteMaxBufferSize = 0x20;
  (this->OCIOSettings).Object = (FOpenColorIOColorConversionSettings *)0x0;
  (this->OCIOSettings).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  this->bFramelock = false;
  this->LastEngineRTFrameThatUpdatedJustInTime = 0xffffffffffffffff;
  this->bOverrideSourceEncoding = true;
  this->OverrideSourceEncoding = TSE_Linear;
  this->bOverrideSourceColorSpace = true;
  this->OverrideSourceColorSpace = TCS_None;
  *(undefined8 *)&(this->RegisteredBuffers).Elements = 0;
  *(undefined8 *)&(this->RegisteredBuffers).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredBuffers).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredBuffers).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredBuffers).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredBuffers).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RegisteredBuffers).Elements.field_0x34 = 0;
  (this->RegisteredBuffers).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->RegisteredBuffers).HashSize = 0;
  *(undefined8 *)&(this->RegisteredTextures).Elements = 0;
  *(undefined8 *)&(this->RegisteredTextures).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredTextures).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredTextures).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredTextures).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredTextures).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RegisteredTextures).Elements.field_0x34 = 0;
  (this->RegisteredTextures).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->RegisteredTextures).HashSize = 0;
  (this->Textures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Textures).ArrayNum = 0;
  (this->Textures).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->TexturesCriticalSection,4000);
  (this->Deinterlacer).Object = (FDeinterlacer *)0x0;
  (this->Deinterlacer).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  this->bJustInTimeRender = false;
  pFVar2 = ::operator_new(0x310);
  if (pFVar2 != (FJITRMediaTextureSamples *)0x0) {
    memset(pFVar2,0,0x310);
    FMediaIOCoreSamples::FMediaIOCoreSamples((FMediaIOCoreSamples *)pFVar2);
    pFVar2->_padding_ = (longlong)&___7FJITRMediaTextureSamples_FMediaIOCorePlayerBase__6B_;
    (pFVar2->ProxySample).Object = (FMediaIOCoreTextureSampleBase *)0x0;
    (pFVar2->ProxySample).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar4 = pFVar2;
  }
  (this->JITRSamples).Ptr = pFVar4;
  this_01 = FGPUTextureTransferModule::Get();
  pTVar3 = FGPUTextureTransferModule::GetTextureTransfer(this_01,&local_18);
  if (pTVar1 != pTVar3) {
    pTVar1->Object = pTVar3->Object;
    pTVar3->Object = (ITextureTransfer *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->GPUTextureTransfer).SharedReferenceCount,&pTVar3->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// ~FMediaIOCorePlayerBase @ 14d78c8a0

void __thiscall FMediaIOCorePlayerBase::~FMediaIOCorePlayerBase(FMediaIOCorePlayerBase *this)

{
  int *piVar1;
  int iVar2;
  FJITRMediaTextureSamples *pFVar3;
  FScriptContainerElement *pFVar4;
  ForElementType<FSetElementId> FVar5;
  FMediaIOCoreSamples *pFVar6;
  longlong *plVar7;
  
  this->_padding_ = (longlong)&_vftable__for__IMediaPlayer__;
  this->_padding_ = (longlong)&_vftable__for__IMediaCache__;
  this->_padding_ = (longlong)&_vftable__for__IMediaControls__;
  this->_padding_ = (longlong)&_vftable__for__IMediaTracks__;
  this->_padding_ = (longlong)&_vftable__for__IMediaView__;
  this->_padding_ = (longlong)&_vftable__for__ITimedDataInput__;
  pFVar3 = (this->JITRSamples).Ptr;
  if (pFVar3 != (FJITRMediaTextureSamples *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x148))(pFVar3,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Deinterlacer).SharedReferenceCount.ReferenceController);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->TexturesCriticalSection);
  DestructItems<TRefCountPtr<FRHITexture>,int>
            ((TRefCountPtr<FRHITexture> *)(this->Textures).AllocatorInstance.Data,
             (this->Textures).ArrayNum);
  pFVar4 = (this->Textures).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  (this->RegisteredTextures).HashSize = 0;
  FVar5 = (this->RegisteredTextures).Hash.SecondaryData;
  if (FVar5 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  TSparseArray<TSparseSetElement<TRefCountPtr<FRHITexture>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TRefCountPtr<FRHITexture>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->RegisteredTextures).Elements);
  (this->RegisteredBuffers).HashSize = 0;
  FVar5 = (this->RegisteredBuffers).Hash.SecondaryData;
  if (FVar5 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  TSparseArray<TSparseSetElement<void_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<void_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->RegisteredBuffers).Elements);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GPUTextureTransfer).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OCIOSettings).SharedReferenceCount.ReferenceController);
  pFVar4 = (this->Channels).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar6 = (this->Samples).Ptr;
  if (pFVar6 != (FMediaIOCoreSamples *)0x0) {
    (**(code **)(pFVar6->_padding_ + 0x148))(pFVar6,1);
  }
  pFVar4 = (this->AudioTrackFormat).TypeName.Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->VideoTrackFormat).TypeName.Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->OpenUrl).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  plVar7 = (longlong *)this->_padding_;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar7 + 8))(plVar7,1);
    }
  }
  this->_padding_ = (longlong)&___7ITimedDataInput__6B_;
  this->_padding_ = (longlong)&___7IMediaView__6B_;
  this->_padding_ = (longlong)&___7IMediaTracks__6B_;
  this->_padding_ = (longlong)&___7IMediaControls__6B_;
  this->_padding_ = (longlong)&___7IMediaCache__6B_;
  this->_padding_ = (longlong)&___7IMediaPlayer__6B_;
  return;
}

// operator() @ 14d78e9b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FMediaIOCorePlayerBase::ExecuteGPUTransfer'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  TSharedPtr<FMediaIOCoreTextureSampleBase,1> *this_00;
  longlong *plVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  atomic<int> aVar5;
  longlong lVar6;
  FMediaIOCoreTextureSampleBase *pFVar7;
  ITextureTransfer *pIVar8;
  undefined8 uVar9;
  TSharedRef<FMediaIOCoreTextureSampleBase,1> *pTVar10;
  FScriptContainerElement *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  TSharedRef<FMediaIOCoreTextureSampleBase,1> local_28;
  
  this_00 = (TSharedPtr<FMediaIOCoreTextureSampleBase,1> *)((longlong)this + 0x10);
  if (*(longlong *)((longlong)this + 0x10) == 0) {
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
  lVar6 = (**(code **)(this_00->Object->_padding_ + 0x48))();
  if (lVar6 != 0) {
    pTVar12 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar12->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          pTVar12 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14d78ea30;
        }
        LOCK();
        aVar5 = pTVar12->SharedReferenceCount;
        bVar4 = aVar3 == aVar5;
        if (bVar4) {
          pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar5 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar5;
      } while (!bVar4);
      plVar1 = *(longlong **)this;
      if ((plVar1 != (longlong *)0x0) && (plVar1[0x27] != 0)) {
        pFVar7 = TSharedPtr<FMediaIOCoreTextureSampleBase,1>::operator->(this_00);
        pFVar11 = pFVar7->ExternalBuffer;
        if (pFVar11 == (FScriptContainerElement *)0x0) {
          pFVar11 = (pFVar7->Buffer).AllocatorInstance.Data;
        }
        if (5 < (byte)LogMediaIOCore._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
        }
        pIVar8 = TSharedPtr<UE::GPUTextureTransfer::ITextureTransfer,1>::operator->
                           ((TSharedPtr<UE::GPUTextureTransfer::ITextureTransfer,1> *)
                            (plVar1 + 0x27));
        pcVar2 = *(code **)((longlong)*pIVar8 + 0x60);
        pFVar7 = TSharedPtr<FMediaIOCoreTextureSampleBase,1>::operator->(this_00);
        uVar9 = (**(code **)(pFVar7->_padding_ + 0x48))(pFVar7);
        (*pcVar2)(pIVar8,pFVar11,uVar9,1);
        pIVar8 = TSharedPtr<UE::GPUTextureTransfer::ITextureTransfer,1>::operator->
                           ((TSharedPtr<UE::GPUTextureTransfer::ITextureTransfer,1> *)
                            (plVar1 + 0x27));
        pcVar2 = *(code **)((longlong)*pIVar8 + 0x50);
        pFVar7 = TSharedPtr<FMediaIOCoreTextureSampleBase,1>::operator->(this_00);
        pFVar11 = pFVar7->ExternalBuffer;
        if (pFVar11 == (FScriptContainerElement *)0x0) {
          pFVar11 = (pFVar7->Buffer).AllocatorInstance.Data;
        }
        (*pcVar2)(pIVar8,pFVar11,1);
        pcVar2 = *(code **)(*plVar1 + 0x118);
        pTVar10 = TSharedPtr<FMediaIOCoreTextureSampleBase,1>::ToSharedRef(this_00,&local_28);
        (*pcVar2)(plVar1,pTVar10);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_28.SharedReferenceCount.ReferenceController);
        pIVar8 = TSharedPtr<UE::GPUTextureTransfer::ITextureTransfer,1>::operator->
                           ((TSharedPtr<UE::GPUTextureTransfer::ITextureTransfer,1> *)
                            (plVar1 + 0x27));
        pcVar2 = *(code **)((longlong)*pIVar8 + 0x58);
        pFVar7 = TSharedPtr<FMediaIOCoreTextureSampleBase,1>::operator->(this_00);
        pFVar11 = pFVar7->ExternalBuffer;
        if (pFVar11 == (FScriptContainerElement *)0x0) {
          pFVar11 = (pFVar7->Buffer).AllocatorInstance.Data;
        }
        (*pcVar2)(pIVar8,pFVar11);
      }
    }
LAB_14d78ea30:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
  return;
}

// operator() @ 14d78f480

void __thiscall
`FMediaIOCorePlayerBase::UnregisterSampleBuffers'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  int iVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (*(longlong *)this != 0) {
    iVar3 = *(int *)((longlong)this + 0x38);
    iVar12 = 0;
    iVar14 = 0;
    uVar7 = 1;
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x20);
    iVar8 = 0;
    if (iVar3 != 0) {
      pTVar13 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x30);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x30) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar13 = pTVar1;
      }
      uVar11 = *(uint *)(pTVar13->AllocatorInstance).InlineData;
      while (uVar11 == 0) {
        lVar9 = (longlong)iVar12;
        iVar14 = iVar14 + 0x20;
        iVar12 = iVar12 + 1;
        iVar8 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14d78f53d;
        uVar11 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar9 * 4 + 4);
      }
      uVar7 = -uVar11 & uVar11;
      uVar2 = (ulonglong)uVar7 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = (int)lVar9 + -1 + iVar14;
      if (iVar3 < iVar8) {
        iVar8 = iVar3;
      }
    }
LAB_14d78f53d:
    uVar11 = *(uint *)((longlong)this + 0x38);
    uVar10 = uVar11 & 0xffffffe0;
    TStack_60._padding_ = CONCAT44(uVar7,iVar12);
    TStack_60.CurrentBitIndex = iVar8;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar11 >> 5;
    TStack_60._28_4_ = iVar8;
    TStack_60.BaseBitIndex = iVar14;
    uStack_40 = CONCAT44(uStack_6c,*(int *)((longlong)this + 0x18) - *(int *)((longlong)this + 0x44)
                        );
    TStack_60.Array = pTVar1;
    if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar7 = *(uint *)((longlong)this + 0x38);
    if (uVar11 != uVar7) {
      pTVar13 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x30);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x30) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar13 = pTVar1;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) &
               *(uint *)((pTVar13->AllocatorInstance).InlineData + (longlong)iVar12 * 4);
      while (uVar11 == 0) {
        lVar9 = (longlong)iVar12;
        uVar10 = uVar10 + 0x20;
        iVar12 = iVar12 + 1;
        uVar11 = uVar7;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_14d78f650;
        uVar11 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar9 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar11 = (int)lVar9 + -1 + uVar10;
      if ((int)uVar7 < (int)uVar11) {
        uVar11 = uVar7;
      }
    }
LAB_14d78f650:
    while( true ) {
      if (*(int *)((longlong)this + 0x18) - *(int *)((longlong)this + 0x44) != (int)uStack_40) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<void_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_60.CurrentBitIndex == uVar11) && (TStack_60.Array == pTVar1)) break;
      uVar4 = *(undefined8 *)
               (*(longlong *)((longlong)this + 0x10) + (longlong)TStack_60.CurrentBitIndex * 0x10);
      if ((*(longlong *)this == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (**(code **)(**(longlong **)this + 0x28))(*(longlong **)this,uVar4);
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  return;
}

// operator() @ 14d78f710

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FMediaIOCorePlayerBase::UnregisterTextures'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  int iVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (*(longlong *)this != 0) {
    iVar3 = *(int *)((longlong)this + 0x38);
    iVar12 = 0;
    iVar14 = 0;
    uVar6 = 1;
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x20);
    iVar7 = 0;
    if (iVar3 != 0) {
      pTVar13 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x30);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x30) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar13 = pTVar1;
      }
      uVar11 = *(uint *)(pTVar13->AllocatorInstance).InlineData;
      while (uVar11 == 0) {
        lVar8 = (longlong)iVar12;
        iVar14 = iVar14 + 0x20;
        iVar12 = iVar12 + 1;
        iVar7 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14d78f7cd;
        uVar11 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar8 * 4 + 4);
      }
      uVar6 = -uVar11 & uVar11;
      uVar2 = (ulonglong)uVar6 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = iVar14 + -1 + (int)lVar8;
      if (iVar3 < iVar7) {
        iVar7 = iVar3;
      }
    }
LAB_14d78f7cd:
    uVar11 = *(uint *)((longlong)this + 0x38);
    uVar10 = uVar11 & 0xffffffe0;
    TStack_60._padding_ = CONCAT44(uVar6,iVar12);
    TStack_60.CurrentBitIndex = iVar7;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar11 >> 5;
    TStack_60._28_4_ = iVar7;
    TStack_60.BaseBitIndex = iVar14;
    uStack_40 = CONCAT44(uStack_6c,*(int *)((longlong)this + 0x18) - *(int *)((longlong)this + 0x44)
                        );
    TStack_60.Array = pTVar1;
    if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar6 = *(uint *)((longlong)this + 0x38);
    if (uVar11 != uVar6) {
      pTVar13 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x30);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x30) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar13 = pTVar1;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) &
               *(uint *)((pTVar13->AllocatorInstance).InlineData + (longlong)iVar12 * 4);
      while (uVar11 == 0) {
        lVar8 = (longlong)iVar12;
        uVar10 = uVar10 + 0x20;
        iVar12 = iVar12 + 1;
        uVar11 = uVar6;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_14d78f8e0;
        uVar11 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar8 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      uVar11 = (int)lVar8 + -1 + uVar10;
      if ((int)uVar6 < (int)uVar11) {
        uVar11 = uVar6;
      }
    }
LAB_14d78f8e0:
    while( true ) {
      if (*(int *)((longlong)this + 0x18) - *(int *)((longlong)this + 0x44) != (int)uStack_40) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TRefCountPtr<FRHITexture>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_60.CurrentBitIndex == uVar11) && (TStack_60.Array == pTVar1)) break;
      puVar9 = (undefined8 *)
               ((longlong)TStack_60.CurrentBitIndex * 0x10 + *(longlong *)((longlong)this + 0x10));
      if (5 < (byte)LogMediaIOCore._0_1_) {
        (**(code **)(*(longlong *)*puVar9 + 0x38))();
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
      }
      if ((*(longlong *)this == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (**(code **)(**(longlong **)this + 0x38))(*(longlong **)this,*puVar9);
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  return;
}

// operator() @ 14d78fd40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FMediaIOCorePlayerBase::RegisterSampleBuffer'::__l5::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong local_38;
  int local_30;
  undefined4 local_2c;
  int local_28;
  undefined1 local_24;
  
  if ((*(longlong *)((longlong)this + 8) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar6 = *(longlong *)((longlong)this + 8);
  if ((*(longlong *)(lVar6 + 0xc0) == 0) && (*(longlong *)(lVar6 + 0xb0) == 0)) {
    if (1 < (byte)LogMediaIOCore._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
      return;
    }
  }
  else {
    if ((lVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar6 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x48))();
    if (lVar6 == 0) {
      if (1 < (byte)LogMediaIOCore._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
        return;
      }
    }
    else {
      if ((*(longlong *)((longlong)this + 8) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar7 = (longlong *)(**(code **)(**(longlong **)((longlong)this + 8) + 0x48))();
      lVar6 = (**(code **)(*plVar7 + 0x20))(plVar7);
      iVar2 = *(int *)(lVar6 + 0x24);
      if ((*(longlong *)((longlong)this + 8) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar7 = (longlong *)(**(code **)(**(longlong **)((longlong)this + 8) + 0x48))();
      lVar6 = (**(code **)(*plVar7 + 0x20))(plVar7);
      uVar3 = *(undefined4 *)(lVar6 + 0x28);
      if ((*(longlong *)((longlong)this + 8) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar7 = (longlong *)(**(code **)(**(longlong **)((longlong)this + 8) + 0x48))();
      lVar6 = (**(code **)(*plVar7 + 0x20))(plVar7);
      cVar1 = *(char *)(lVar6 + 0x33);
      iVar8 = 0x10;
      if (cVar1 != '0') {
        iVar8 = 4;
      }
      if (5 < (byte)LogMediaIOCore._0_1_) {
        TSharedPtr<FMediaIOCoreTextureSampleBase,1>::operator->
                  ((TSharedPtr<FMediaIOCoreTextureSampleBase,1> *)((longlong)this + 8));
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
      }
      if ((*(longlong *)((longlong)this + 8) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_38 = *(longlong *)(*(longlong *)((longlong)this + 8) + 0xc0);
      if (local_38 == 0) {
        local_38 = *(longlong *)(*(longlong *)((longlong)this + 8) + 0xb0);
      }
      lVar6 = *(longlong *)this;
      local_24 = cVar1 != '\x02';
      local_30 = iVar2;
      local_2c = uVar3;
      local_28 = iVar8 * iVar2;
      if ((*(longlong *)(lVar6 + 0x138) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar7 = *(longlong **)(lVar6 + 0x138);
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_38);
    }
  }
  return;
}

// operator() @ 14d790410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FMediaIOCorePlayerBase::CreateAndRegisterTextures'::__l2::<lambda_2>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  ulonglong uVar1;
  undefined4 uVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  FRHIResource *this_00;
  char cVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  ELLMTag EVar12;
  uint uVar13;
  LPCRITICAL_SECTION lpCriticalSection;
  EPixelFormat EVar14;
  ForAnyElementType *pFVar15;
  uint uVar16;
  undefined1 auStackY_328 [32];
  byte local_2d8;
  FRHIResource *local_2d0;
  FLLMScope local_2c8 [2];
  FRHIResource *local_2c0;
  uint local_2b8;
  undefined4 uStack_2b4;
  FRHICommandListImmediate *local_2b0;
  FMemScope local_2a8;
  undefined4 local_2a0;
  undefined1 local_29c [4];
  FString local_298;
  FRHIResource *local_288;
  undefined8 local_280;
  uint local_278;
  undefined4 local_274;
  undefined1 local_270;
  uint local_26c;
  undefined8 local_268;
  FRHITextureDesc local_258;
  FScriptContainerElement *local_208;
  int local_200;
  undefined4 local_1fc;
  longlong local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  FRHITextureDesc local_1d8;
  FScriptContainerElement *local_188;
  undefined8 local_180;
  longlong local_178;
  undefined8 local_170;
  undefined8 local_168;
  FRHITextureDesc local_158;
  FScriptContainerElement *local_108;
  ERHIAccess local_100;
  undefined4 local_fc;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_d8 [48];
  longlong local_a8;
  longlong local_98 [3];
  longlong *local_80;
  FRHICommandListBase *local_78;
  FRHITexture *local_70;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_328;
  local_2b0 = param_1;
  if ((*(longlong **)this)[0x27] == 0) {
    if ((byte)LogMediaIOCore._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
    return;
  }
  cVar7 = (**(code **)(**(longlong **)this + 0x128))();
  uVar9 = (**(code **)(**(longlong **)this + 0x108))();
  lVar3 = *(longlong *)this;
  if (cVar7 != '\0') {
    uVar9 = 1;
  }
  if ((uint)(*(int *)(lVar3 + 0x1a0) - *(int *)(lVar3 + 0x1cc)) < uVar9) {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar9);
    }
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)(lVar3 + 0x198),uVar9);
    if (uVar9 < 4) {
      iVar10 = 1;
    }
    else {
      uVar1 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar5 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      local_2a0 = (undefined4)lVar5;
      iVar10 = 1 << ((byte)lVar5 & 0x1f);
    }
    if ((*(int *)(lVar3 + 0x1e0) == 0) || (*(int *)(lVar3 + 0x1e0) < iVar10)) {
      *(int *)(lVar3 + 0x1e0) = iVar10;
      TSet<TRefCountPtr<FRHITexture>,DefaultKeyFuncs<TRefCountPtr<FRHITexture>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TRefCountPtr<FRHITexture>,DefaultKeyFuncs<TRefCountPtr<FRHITexture>,0>,FDefaultSetAllocator>
                *)(lVar3 + 0x198));
      lVar3 = *(longlong *)this;
      goto LAB_14d790521;
    }
  }
  lVar3 = *(longlong *)this;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
LAB_14d790521:
  if (*(int *)(lVar3 + 500) < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar9,(ForAnyElementType *)(lVar3 + 0x1e8),*(int *)(lVar3 + 0x1f0),
               (int *)(lVar3 + 500));
  }
  local_2d8 = 0;
  if (uVar9 != 0) {
    do {
      local_2d0 = (FRHIResource *)0x0;
      ::FString::PrintfImpl(&local_298,L"FMediaIOCorePlayerTexture %d");
      plVar11 = *(longlong **)this;
      EVar14 = PF_Unknown;
      uVar13 = *(uint *)(plVar11 + 10);
      uVar2 = *(undefined4 *)((longlong)plVar11 + 0x54);
      cVar7 = (**(code **)(*plVar11 + 0x110))();
      if (cVar7 == '\0') {
        uVar13 = uVar13 >> 1;
        EVar14 = PF_B8G8R8A8;
        uVar16 = uVar13 * 4;
      }
      else if (cVar7 == '\x01') {
        EVar14 = PF_A2B10G10R10;
        uVar16 = uVar13 / 6;
        uVar13 = uVar16 * 4;
        uVar16 = uVar16 << 4;
      }
      else {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\Player\\MediaIOCorePlayerBase.cpp"
                           ,0x308,L"Format not supported");
        uVar16 = uVar13;
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar10 = (**(code **)(GDynamicRHI->_padding_ + 0x28))();
      local_188 = (FScriptContainerElement *)L"";
      if (local_298.Data.ArrayNum != 0) {
        local_188 = local_298.Data.AllocatorInstance.Data;
      }
      local_258.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
      local_1d8.ExtData = 0;
      local_1d8.Dimension = Texture2D;
      local_1d8.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0
      ;
      local_1d8.AliasableFormats.ArrayNum = 0;
      local_178 = 0;
      local_170 = 0;
      local_168 = 0;
      local_258.Flags = None;
      local_258.ClearValue.Value._4_8_ = 0;
      local_258.ClearValue.Value.Color[3] = 0.0;
      local_258.ExtData = 0;
      local_258.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0
      ;
      local_258.AliasableFormats.ArrayNum = 0;
      local_1d8.Extent.field0_0x0._s_0.Y = uVar2;
      local_1d8.Extent.field0_0x0._s_0.X = uVar13;
      local_1d8.ClearValue.Value.Color[3] = FClearValueBinding::White.Value.Color[3];
      local_1d8.Flags = External|ShaderResource|RenderTargetable;
      if (iVar10 != 4) {
        local_1d8.Flags = Shared|ShaderResource|RenderTargetable;
      }
      local_1d8.Depth = 1;
      local_1d8.ArraySize = 1;
      local_1d8.NumMips = '\x01';
      local_1d8.NumSamples = '\x01';
      local_1d8.UAVFormat = PF_Unknown;
      local_1d8.FastVRAMPercentage = 0xff;
      local_1d8.AliasableFormats.ArrayMax = 1;
      local_180 = 0x70;
      local_1d8.ClearValue._0_8_ = FClearValueBinding::White._0_8_;
      local_1d8.ClearValue.Value._4_8_ = FClearValueBinding::White.Value._4_8_;
      local_258.ClearValue._0_8_ = 1;
      local_258.Extent.field0_0x0._s_0.X = 1;
      local_258.Extent.field0_0x0._s_0.Y = 1;
      local_258.Depth = 1;
      local_258.ArraySize = 1;
      local_258.NumMips = '\x01';
      local_258.NumSamples = '\x01';
      local_258.Dimension = Texture2D;
      local_258.Format = PF_Unknown;
      local_258.UAVFormat = PF_Unknown;
      local_258.FastVRAMPercentage = 0xff;
      local_258.AliasableFormats.ArrayMax = 1;
      local_2b8 = uVar13;
      uStack_2b4 = uVar2;
      local_1d8.GPUMask.GPUMask = local_258.GPUMask.GPUMask;
      local_1d8.Format = EVar14;
      FRHITextureDesc::operator=(&local_258,&local_1d8);
      local_208 = local_188;
      local_200 = (int)local_180;
      local_1fc = local_180._4_4_;
      local_1f8 = local_178;
      local_1f0 = local_170;
      local_1e8 = local_168;
      if (local_1d8.AliasableFormats.AllocatorInstance.SecondaryData !=
          (ForElementType<EPixelFormat>)0x0) {
        FMemory::Free((void *)local_1d8.AliasableFormats.AllocatorInstance.SecondaryData);
      }
      EVar12 = Textures;
      if ((local_258.Flags & (DepthStencilTargetable|RenderTargetable)) != None) {
        EVar12 = RenderTargets;
      }
      FLLMScope::FLLMScope(local_2c8,EVar12,false,None,Default,true);
      EVar12 = Textures;
      if ((local_258.Flags & (DepthStencilTargetable|RenderTargetable)) != None) {
        EVar12 = RenderTargets;
      }
      FMemScope::FMemScope(&local_2a8,EVar12,true);
      if (local_200 == 0) {
        local_158.ClearValue._0_8_ = 1;
        local_158.Extent.field0_0x0._s_0.X = 1;
        local_158.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
        local_158.Extent.field0_0x0._s_0.Y = 1;
        local_158.AliasableFormats.ArrayMax = 1;
        local_158.Flags = None;
        local_158.ClearValue.Value._4_8_ = 0;
        local_158.ClearValue.Value.Color[3] = 0.0;
        local_158.ExtData = 0;
        local_158.Depth = 1;
        local_158.ArraySize = 1;
        local_158.NumMips = '\x01';
        local_158.NumSamples = '\x01';
        local_158.Dimension = Texture2D;
        local_158.Format = PF_Unknown;
        local_158.UAVFormat = PF_Unknown;
        local_158.FastVRAMPercentage = 0xff;
        local_158.AliasableFormats.AllocatorInstance.SecondaryData =
             (ForElementType<EPixelFormat>)0x0;
        local_158.AliasableFormats.ArrayNum = 0;
        FRHITextureDesc::operator=(&local_158,&local_258);
        local_108 = local_208;
        local_100 = local_200;
        local_fc = local_1fc;
        local_f0 = local_1f0;
        local_f8 = local_1f8;
        local_e8 = local_1e8;
        local_100 = RHIGetDefaultResourceState(local_258.Flags,local_1f8 != 0);
        (**(code **)(GDynamicRHI->_padding_ + 0x198))(GDynamicRHI,local_d8,local_2b0,&local_158);
        if (local_158.AliasableFormats.AllocatorInstance.SecondaryData !=
            (ForElementType<EPixelFormat>)0x0) {
          FMemory::Free((void *)local_158.AliasableFormats.AllocatorInstance.SecondaryData);
        }
        FMemScope::~FMemScope(&local_2a8);
        FLLMScope::~FLLMScope(local_2c8);
      }
      else {
        (**(code **)(GDynamicRHI->_padding_ + 0x198))(GDynamicRHI,local_d8,local_2b0,&local_258);
        FMemScope::~FMemScope(&local_2a8);
        FLLMScope::~FLLMScope(local_2c8);
      }
      FRHITextureInitializer::Finalize((FRHITextureInitializer *)local_d8);
      if ((local_78 != (FRHICommandListBase *)0x0) && (local_70 != (FRHITexture *)0x0)) {
        FRHITextureInitializer::RemovePendingTextureUpload((FRHITextureInitializer *)local_d8);
      }
      if (local_a8 != 0) {
        plVar11 = local_98;
        if (local_80 != (longlong *)0x0) {
          plVar11 = local_80;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      if (local_d8._0_8_ != 0) {
        plVar11 = (longlong *)(local_d8 + 0x10);
        if ((longlong *)local_d8._40_8_ != (longlong *)0x0) {
          plVar11 = (longlong *)local_d8._40_8_;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      this_00 = local_2d0;
      local_2d0 = local_2c0;
      local_2c0 = (FRHIResource *)0x0;
      if ((this_00 != (FRHIResource *)0x0) &&
         (FRHIResource::Release(this_00), local_2c0 != (FRHIResource *)0x0)) {
        FRHIResource::Release(local_2c0);
      }
      if (5 < (byte)LogMediaIOCore._0_1_) {
        (**(code **)(local_2d0->_padding_ + 0x38))(local_2d0);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
      }
      local_270 = cVar7 != '\0';
      lVar3 = *(longlong *)this;
      local_268 = 0;
      local_280 = 0;
      local_288 = local_2d0;
      local_278 = uVar13;
      local_274 = uVar2;
      local_26c = uVar16;
      if ((*(longlong *)(lVar3 + 0x138) == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      plVar11 = *(longlong **)(lVar3 + 0x138);
      (**(code **)(*plVar11 + 0x30))(plVar11,&local_288);
      TSet<TRefCountPtr<FRHITexture>,DefaultKeyFuncs<TRefCountPtr<FRHITexture>,0>,FDefaultSetAllocator>
      ::Emplace<TRefCountPtr<FRHITexture>_const_&>
                ((TSet<TRefCountPtr<FRHITexture>,DefaultKeyFuncs<TRefCountPtr<FRHITexture>,0>,FDefaultSetAllocator>
                  *)(*(longlong *)this + 0x198),(TRefCountPtr<FRHITexture> *)local_29c,
                 (bool *)&local_2d0);
      lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)this + 0x1f8);
      if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection(lpCriticalSection);
      lVar3 = *(longlong *)this;
      pFVar15 = (ForAnyElementType *)(lVar3 + 0x1e8);
      if (((pFVar15->Data <= (FScriptContainerElement *)&local_2d0) &&
          ((FScriptContainerElement *)&local_2d0 <
           pFVar15->Data + (longlong)*(int *)(lVar3 + 500) * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = *(int *)(lVar3 + 0x1f0);
      if (iVar10 == *(int *)(lVar3 + 500)) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,pFVar15,(int *)(lVar3 + 500));
      }
      *(int *)(lVar3 + 0x1f0) = iVar10 + 1;
      pFVar4 = pFVar15->Data;
      *(undefined8 *)(pFVar4 + (longlong)iVar10 * 8) = 0;
      *(FRHIResource **)(pFVar4 + (longlong)iVar10 * 8) = local_2d0;
      if (local_2d0 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(local_2d0);
      }
      LeaveCriticalSection(lpCriticalSection);
      if (local_258.AliasableFormats.AllocatorInstance.SecondaryData !=
          (ForElementType<EPixelFormat>)0x0) {
        FMemory::Free((void *)local_258.AliasableFormats.AllocatorInstance.SecondaryData);
      }
      if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_298.Data.AllocatorInstance.Data);
      }
      if (local_2d0 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_2d0);
      }
      local_2d8 = local_2d8 + 1;
    } while (local_2d8 < uVar9);
  }
  return;
}

// operator() @ 14d790c20

void __thiscall
`FMediaIOCorePlayerBase::PreGPUTransfer'::__l9::<lambda_2>::operator()
          (void *this,TRefCountPtr<FRHITexture> param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  int iVar6;
  uint uVar7;
  ForAnyElementType *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  longlong lVar10;
  bool bVar11;
  FRHIResource *local_18 [2];
  
  pTVar9 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar9->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d790c60;
      }
      LOCK();
      aVar5 = pTVar9->SharedReferenceCount;
      bVar11 = aVar4 == aVar5;
      if (bVar11) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar11);
    lVar1 = *(longlong *)this;
    if (lVar1 != 0) {
      local_18[0] = (FRHIResource *)(param_1.Reference)->_padding_;
      if (local_18[0] != (FRHIResource *)0x0) {
        FRHIResource::AddRef(local_18[0]);
      }
      lpCriticalSection = (LPCRITICAL_SECTION)(lVar1 + 0x1f8);
      if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection(lpCriticalSection);
      if ((local_18[0] != (FRHIResource *)0x0) &&
         (uVar7 = ((uint)((ulonglong)local_18[0] >> 0x14) & 0xffff ^
                  (uint)((ulonglong)local_18[0] >> 4)) * -0x7a143595,
         uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb,
         *(int *)(lVar1 + 0x1a0) != *(int *)(lVar1 + 0x1cc))) {
        lVar10 = *(longlong *)(lVar1 + 0x1d8);
        if (*(longlong *)(lVar1 + 0x1d8) == 0) {
          lVar10 = lVar1 + 0x1d0;
        }
        iVar6 = *(int *)(lVar10 + (ulonglong)
                                  (*(int *)(lVar1 + 0x1e0) - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
        if (iVar6 != -1) {
          do {
            if (*(FRHIResource **)(*(longlong *)(lVar1 + 0x198) + (longlong)iVar6 * 0x10) ==
                local_18[0]) {
              pFVar8 = (ForAnyElementType *)(lVar1 + 0x1e8);
              if (((pFVar8->Data <= (FScriptContainerElement *)local_18) &&
                  ((FScriptContainerElement *)local_18 <
                   pFVar8->Data + (longlong)*(int *)(lVar1 + 500) * 8)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar11)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar6 = *(int *)(lVar1 + 0x1f0);
              if (iVar6 == *(int *)(lVar1 + 500)) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,pFVar8,(int *)(lVar1 + 500));
              }
              *(int *)(lVar1 + 0x1f0) = iVar6 + 1;
              pFVar2 = pFVar8->Data;
              *(undefined8 *)(pFVar2 + (longlong)iVar6 * 8) = 0;
              *(FRHIResource **)(pFVar2 + (longlong)iVar6 * 8) = local_18[0];
              if (local_18[0] != (FRHIResource *)0x0) {
                FRHIResource::AddRef(local_18[0]);
              }
              break;
            }
            iVar6 = *(int *)(*(longlong *)(lVar1 + 0x198) + 8 + (longlong)iVar6 * 0x10);
          } while (iVar6 != -1);
        }
      }
      LeaveCriticalSection(lpCriticalSection);
      if (local_18[0] != (FRHIResource *)0x0) {
        FRHIResource::Release(local_18[0]);
      }
    }
  }
LAB_14d790c60:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  if ((FRHIResource *)(param_1.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_1.Reference)->_padding_);
  }
  return;
}

// AcquireJITRProxySampleInitialized @ 14d793cc0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FMediaIOCoreTextureSampleBase,1> * __thiscall
FMediaIOCorePlayerBase::AcquireJITRProxySampleInitialized
          (FMediaIOCorePlayerBase *this,
          TSharedPtr<FMediaIOCoreTextureSampleBase,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FOpenColorIOColorConversionSettings *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  code *pcVar5;
  atomic<int> aVar6;
  FMediaIOCoreTextureSampleBase *this_00;
  bool bVar7;
  char cVar8;
  atomic<int> aVar9;
  TSharedRef<FMediaIOCorePlayerBase,1> *pTVar10;
  FTimecode *pFVar11;
  longlong **pplVar12;
  TSharedPtr<FMediaIOCoreTextureSampleBase,1> *pTVar13;
  undefined1 *puVar14;
  FMediaIOCoreTextureSampleBase *local_118;
  TReferenceControllerBase<1> *local_110;
  int local_108;
  int local_104;
  long64 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  undefined8 local_e0;
  FMediaIOCorePlayerBase *local_d8;
  FSharedReferencer<1> local_d0;
  longlong *local_c8;
  FSharedReferencer<1> local_c0;
  FFrameRate local_b8;
  undefined8 local_a8;
  FSharedReferencer<1> local_a0;
  TSharedRef<FMediaIOCorePlayerBase,1> local_98;
  undefined1 local_88 [8];
  TReferenceControllerBase<1> *local_80;
  FOpenColorIOColorConversionSettings *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  code *local_68 [2];
  undefined **local_58;
  longlong local_50;
  TReferenceControllerBase<1> *local_48;
  undefined8 local_40;
  FTimecode local_38;
  
  local_108 = (this->VideoTrackFormat).Dim.field0_0x0._s_0.X;
  local_104 = (this->VideoTrackFormat).Dim.field0_0x0._s_0.Y;
  local_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e0 = 0;
  local_e8 = local_e8 & 0xffffff0000000000;
  local_d0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_c8 = (longlong *)0x0;
  local_c0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_b8.Numerator = 60000;
  local_b8.Denominator = 1;
  pTVar10 = TSharedFromThis<FMediaIOCorePlayerBase,1>::AsShared
                      ((TSharedFromThis<FMediaIOCorePlayerBase,1> *)&this->_padding_,&local_98);
  local_a0.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
  local_d8 = pTVar10->Object;
  if (local_a0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_a0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a8 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_d0,&local_a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  pFVar11 = FApp::GetTimecode(&local_38);
  local_f8._0_4_ = pFVar11->Hours;
  local_f8._4_4_ = pFVar11->Minutes;
  uStack_f0._0_4_ = pFVar11->Seconds;
  uStack_f0._4_4_ = pFVar11->Frames;
  local_e8._0_4_ = pFVar11->Subframe;
  local_e8._4_1_ = pFVar11->bDropFrameFormat;
  local_e8._5_3_ = *(undefined3 *)&pFVar11->field_0x15;
  local_100 = (this->CurrentTime).Ticks;
  local_e0 = (**(code **)(this->_padding_ + 0x28))();
  pplVar12 = (longlong **)(**(code **)(this->_padding_ + 0x140))(this,local_88);
  if (&local_c8 != pplVar12) {
    local_c8 = *pplVar12;
    *pplVar12 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_c0,(FSharedReferencer<1> *)(pplVar12 + 1));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
  local_b8 = this->VideoFrameRate;
  if ((local_c8 == (longlong *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Args.Converter.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\Player\\MediaIOCorePlayerBase.cpp"
                         ,0x4b8,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar13 = (TSharedPtr<FMediaIOCoreTextureSampleBase,1> *)(*pcVar5)();
    return pTVar13;
  }
  (**(code **)(this->_padding_ + 0x130))(this,&local_118);
  if (local_118 == (FMediaIOCoreTextureSampleBase *)0x0) {
LAB_14d793e38:
    __return_storage_ptr__->Object = (FMediaIOCoreTextureSampleBase *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_110);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d0.ReferenceController);
    return __return_storage_ptr__;
  }
  if ((local_c8 == (longlong *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar13 = (TSharedPtr<FMediaIOCoreTextureSampleBase,1> *)(*pcVar5)();
    return pTVar13;
  }
  (**(code **)(*local_c8 + 0x18))(local_c8,&local_118);
  if ((local_118 == (FMediaIOCoreTextureSampleBase *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar13 = (TSharedPtr<FMediaIOCoreTextureSampleBase,1> *)(*pcVar5)();
    return pTVar13;
  }
  cVar8 = (**(code **)(local_118->_padding_ + 0x148))(local_118,&local_108);
  if (cVar8 == '\0') goto LAB_14d793e38;
  if ((local_118 == (FMediaIOCoreTextureSampleBase *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar13 = (TSharedPtr<FMediaIOCoreTextureSampleBase,1> *)(*pcVar5)();
    return pTVar13;
  }
  this_00 = local_118;
  pTVar1 = (this->OCIOSettings).SharedReferenceCount.ReferenceController;
  pFVar2 = (this->OCIOSettings).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78 = (local_118->ColorConversionSettings).Object;
  pTStack_70 = (local_118->ColorConversionSettings).SharedReferenceCount.ReferenceController;
  (local_118->ColorConversionSettings).Object = pFVar2;
  (local_118->ColorConversionSettings).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  bVar7 = IsInGameThread();
  if (bVar7) {
    FMediaIOCoreTextureSampleBase::CacheColorCoversionSettings_GameThread(this_00);
    goto LAB_14d794038;
  }
  pTVar3 = (TReferenceControllerBase<1> *)this_00->_padding_;
  lVar4 = this_00->_padding_;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
LAB_14d793fd5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
LAB_14d793fda:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result.Pin().Get() == this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x6c3,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedPtr<FMediaIOCoreTextureSampleBase,1> *)(*pcVar5)();
      return pTVar13;
    }
  }
  else {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
    aVar6 = pTVar3->SharedReferenceCount;
    do {
      if (aVar6 == (atomic<int>)0x0) goto LAB_14d793fd5;
      LOCK();
      aVar9 = pTVar3->SharedReferenceCount;
      bVar7 = aVar6 == aVar9;
      if (bVar7) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar9 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar9;
    } while (!bVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    puVar14 = (undefined1 *)(lVar4 + 0x18);
    if (lVar4 == 0) {
      puVar14 = (undefined1 *)0x0;
    }
    if ((longlong *)puVar14 != &this_00->_padding_) goto LAB_14d793fda;
  }
  local_40 = 0;
  local_58 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FMediaIOCoreTextureSampleBase::SetColorConversionSettings'::`7'::<lambda_1>,1,0>
              ::_vftable_;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FMediaIOCoreTextureSampleBase::SetColorConversionSettings'::__l7::<lambda_1>,void>
                ::Call;
  local_50 = lVar4;
  local_48 = pTVar3;
  AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_68);
LAB_14d794038:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  __return_storage_ptr__->Object = local_118;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = local_110;
  local_110 = (TReferenceControllerBase<1> *)0x0;
  local_118 = (FMediaIOCoreTextureSampleBase *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d0.ReferenceController);
  return __return_storage_ptr__;
}

// AddAudioSample @ 14d794520

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMediaIOCorePlayerBase::AddAudioSample
          (FMediaIOCorePlayerBase *this,TSharedRef<FMediaIOCoreAudioSampleBase,1> *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  TArray<TSharedPtr<IMediaAudioSample,1>,TSizedDefaultAllocator<32>_> *this_00;
  TReferenceControllerBase<1> *pTVar1;
  FMediaIOCoreAudioSampleBase *pFVar2;
  FScriptContainerElement *pFVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  
  cVar4 = (**(code **)(this->_padding_ + 0x128))();
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  lVar6 = 0x238;
  if (cVar4 == '\0') {
    lVar6 = 0xc0;
  }
  lVar6 = *(longlong *)((longlong)&this->_padding_ + lVar6);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar6 + 0x100);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
    this_00 = (TArray<TSharedPtr<IMediaAudioSample,1>,TSizedDefaultAllocator<32>_> *)(lVar6 + 0x128)
    ;
    if (*(int *)(lVar6 + 0xe4) < *(int *)(lVar6 + 0x130) + 1) {
      LOCK();
      *(int *)(lVar6 + 0xd0) = *(int *)(lVar6 + 0xd0) + 1;
      UNLOCK();
      TArray<TSharedPtr<IMediaAudioSample,1>,TSizedDefaultAllocator<32>_>::RemoveAt
                (this_00,*(int *)(lVar6 + 0x130) + -1,Default);
    }
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,1,(ForAnyElementType *)this_00,(int *)(lVar6 + 0x130),
                       (int *)(lVar6 + 0x134));
    pFVar3 = (this_00->AllocatorInstance).Data;
    memmove(pFVar3 + 0x10,pFVar3,(longlong)iVar5 << 4);
    pFVar3 = (this_00->AllocatorInstance).Data;
    *(FMediaIOCoreAudioSampleBase **)pFVar3 = pFVar2;
    *(TReferenceControllerBase<1> **)(pFVar3 + 8) = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    LeaveCriticalSection(lpCriticalSection);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// AddCaptionSample @ 14d794650

void __thiscall
FMediaIOCorePlayerBase::AddCaptionSample
          (FMediaIOCorePlayerBase *this,TSharedRef<FMediaIOCoreCaptionSampleBase,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  char cVar2;
  longlong lVar3;
  TSharedRef<IMediaOverlaySample,1> local_18;
  
  cVar2 = (**(code **)(this->_padding_ + 0x128))();
  local_18.Object = (IMediaOverlaySample *)param_1->Object;
  lVar3 = 0x238;
  if (cVar2 == '\0') {
    lVar3 = 0xc0;
  }
  lVar3 = *(longlong *)((longlong)&this->_padding_ + lVar3);
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar1;
  FMediaIOCoreSampleContainer<IMediaOverlaySample>::AddSample
            ((FMediaIOCoreSampleContainer<IMediaOverlaySample> *)(lVar3 + 0x268),&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// AddChannel @ 14d7946d0

void __thiscall
FMediaIOCorePlayerBase::AddChannel(FMediaIOCorePlayerBase *this,ITimedDataInputChannel *param_1)

{
  ITimedDataInputChannel *local_res10 [3];
  
  local_res10[0] = param_1;
  TArray<ITimedDataInputChannel_*,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<ITimedDataInputChannel_*_const_&>
            ((TArray<ITimedDataInputChannel_*,TSizedDefaultAllocator<32>_> *)&this->VideoFrameRate,
             local_res10);
  return;
}

// AddMetadataSample @ 14d7963b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMediaIOCorePlayerBase::AddMetadataSample
          (FMediaIOCorePlayerBase *this,TSharedRef<FMediaIOCoreBinarySampleBase,1> *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  TArray<TSharedPtr<IMediaBinarySample,1>,TSizedDefaultAllocator<32>_> *this_00;
  TReferenceControllerBase<1> *pTVar1;
  FMediaIOCoreBinarySampleBase *pFVar2;
  FScriptContainerElement *pFVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  
  cVar4 = (**(code **)(this->_padding_ + 0x128))();
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  lVar6 = 0x238;
  if (cVar4 == '\0') {
    lVar6 = 0xc0;
  }
  lVar6 = *(longlong *)((longlong)&this->_padding_ + lVar6);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar6 + 0x198);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
    this_00 = (TArray<TSharedPtr<IMediaBinarySample,1>,TSizedDefaultAllocator<32>_> *)
              (lVar6 + 0x1c0);
    if (*(int *)(lVar6 + 0x17c) < *(int *)(lVar6 + 0x1c8) + 1) {
      LOCK();
      *(int *)(lVar6 + 0x168) = *(int *)(lVar6 + 0x168) + 1;
      UNLOCK();
      TArray<TSharedPtr<IMediaBinarySample,1>,TSizedDefaultAllocator<32>_>::RemoveAt
                (this_00,*(int *)(lVar6 + 0x1c8) + -1,Default);
    }
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,1,(ForAnyElementType *)this_00,(int *)(lVar6 + 0x1c8),
                       (int *)(lVar6 + 0x1cc));
    pFVar3 = (this_00->AllocatorInstance).Data;
    memmove(pFVar3 + 0x10,pFVar3,(longlong)iVar5 << 4);
    pFVar3 = (this_00->AllocatorInstance).Data;
    *(FMediaIOCoreBinarySampleBase **)pFVar3 = pFVar2;
    *(TReferenceControllerBase<1> **)(pFVar3 + 8) = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    LeaveCriticalSection(lpCriticalSection);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// AddSubtitleSample @ 14d796880

void __thiscall
FMediaIOCorePlayerBase::AddSubtitleSample
          (FMediaIOCorePlayerBase *this,TSharedRef<FMediaIOCoreSubtitleSampleBase,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  char cVar2;
  longlong lVar3;
  TSharedRef<IMediaOverlaySample,1> local_18;
  
  cVar2 = (**(code **)(this->_padding_ + 0x128))();
  local_18.Object = (IMediaOverlaySample *)param_1->Object;
  lVar3 = 0x238;
  if (cVar2 == '\0') {
    lVar3 = 0xc0;
  }
  lVar3 = *(longlong *)((longlong)&this->_padding_ + lVar3);
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar1;
  FMediaIOCoreSampleContainer<IMediaOverlaySample>::AddSample
            ((FMediaIOCoreSampleContainer<IMediaOverlaySample> *)(lVar3 + 0x1d0),&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// AddVideoSample @ 14d796c00

void __thiscall
FMediaIOCorePlayerBase::AddVideoSample
          (FMediaIOCorePlayerBase *this,TSharedRef<FMediaIOCoreTextureSampleBase,1> *param_1)

{
  FMediaIOCoreSamples *this_00;
  char cVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedPtr<FMediaIOCoreTextureSampleBase,1> local_28;
  TSharedPtr<FMediaIOCoreTextureSampleBase,1> local_18;
  
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  local_28.Object = param_1->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.SharedReferenceCount.ReferenceController = pTVar2;
  ::FString::FString((FString *)&local_18,L"MIO in");
  LogBookmark(this,(FString *)&local_18,(TSharedRef<IMediaTextureSample,1> *)&local_28);
  if (local_18.Object != (FMediaIOCoreTextureSampleBase *)0x0) {
    FMemory::Free(local_18.Object);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  cVar1 = (**(code **)(this->_padding_ + 0x128))(this);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(this->_padding_ + 0x120))(this);
    if ((cVar1 != '\0') && (param_1->Object->bIsAwaitingForGPUTransfer != (atomic<bool>)0x0)) {
      local_28.Object = param_1->Object;
      local_28.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      PreGPUTransfer(this,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      local_18.Object = param_1->Object;
      pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_18.SharedReferenceCount.ReferenceController = pTVar2;
      ExecuteGPUTransfer(this,&local_18);
      goto LAB_14d796d1d;
    }
  }
  local_18.Object = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  this_00 = (this->Samples).Ptr;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar2;
  FMediaIOCoreSamples::AddVideo(this_00,(TSharedRef<IMediaTextureSample,1> *)&local_18);
LAB_14d796d1d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// AddVideoSampleAfterGPUTransfer_RenderThread @ 14d796d40

void __thiscall
FMediaIOCorePlayerBase::AddVideoSampleAfterGPUTransfer_RenderThread
          (FMediaIOCorePlayerBase *this,TSharedRef<FMediaIOCoreTextureSampleBase,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FMediaIOCoreSamples *this_00;
  char cVar2;
  TSharedRef<IMediaTextureSample,1> local_28;
  TSharedRef<IMediaTextureSample,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  local_28.Object = (IMediaTextureSample *)param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.SharedReferenceCount.ReferenceController = pTVar1;
  ::FString::FString((FString *)&local_18,L"MIO Tex Copy");
  LogBookmark(this,(FString *)&local_18,&local_28);
  if (local_18.Object != (IMediaTextureSample *)0x0) {
    FMemory::Free(local_18.Object);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  cVar2 = (**(code **)(this->_padding_ + 0x128))(this);
  if (cVar2 == '\0') {
    pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
    local_18.Object = (IMediaTextureSample *)param_1->Object;
    this_00 = (this->Samples).Ptr;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.SharedReferenceCount.ReferenceController = pTVar1;
    FMediaIOCoreSamples::AddVideo(this_00,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  return;
}

// CanControl @ 14d79acc0

bool __thiscall
FMediaIOCorePlayerBase::CanControl(FMediaIOCorePlayerBase *this,EMediaControl param_1)

{
  return false;
}

// CanUseGPUTextureTransfer @ 14d79acd0

bool __thiscall FMediaIOCorePlayerBase::CanUseGPUTextureTransfer(FMediaIOCorePlayerBase *this)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  longlong lVar3;
  
  pTVar1 = MediaIOCorePlayerDetail::CVarEnableGPUDirectInput.Ref;
  if ((this->GPUTextureTransfer).Object == (ITextureTransfer *)0x0) {
    return false;
  }
  bVar2 = IsInParallelGameThread();
  if ((bVar2) || (bVar2 = IsInGameThread(), bVar2)) {
    lVar3 = 0;
  }
  else {
    lVar3 = 4;
  }
  if (*(int *)((longlong)pTVar1->ShadowedValue + lVar3) == 0) {
    return false;
  }
  return true;
}

// Close @ 14d79d1d0

void __thiscall FMediaIOCorePlayerBase::Close(FMediaIOCorePlayerBase *this)

{
  FMediaIOCoreSamples *pFVar1;
  FName FVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FName *pFVar7;
  FModuleManager *this_00;
  IModuleInterface *pIVar8;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  longlong *plVar9;
  uint uVar10;
  longlong *plVar11;
  uint uVar12;
  FName local_res8;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  
  if (this->CurrentState != Closed) {
    local_28 = 0;
    FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->Deinterlacer != (TSharedPtr<UE::MediaIOCore::FDeinterlacer,1> *)&local_28) {
      (this->Deinterlacer).Object = (FDeinterlacer *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Deinterlacer).SharedReferenceCount,&FStack_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
    pFVar1 = (this->Samples).Ptr;
    this->CurrentState = Closed;
    (this->CurrentTime).Ticks = 0;
    (this->AudioTrackFormat).NumChannels = 0;
    (this->AudioTrackFormat).SampleRate = 0;
    (**(code **)(pFVar1->_padding_ + 0x50))();
    (**(code **)(((this->JITRSamples).Ptr)->_padding_ + 0x50))();
    UnregisterSampleBuffers(this);
    UnregisterTextures(this);
    (**(code **)*this->EventSink)(this->EventSink,10);
    (**(code **)*this->EventSink)(this->EventSink,2);
  }
  pFVar7 = ::FName::FName(&local_res8,L"TimeManagement");
  FVar2 = *pFVar7;
  this_00 = FModuleManager::Get();
  pIVar8 = FModuleManager::LoadModuleChecked(this_00,FVar2);
  this_01 = (TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
            (**(code **)((longlong)*pIVar8 + 0x40))(pIVar8);
  plVar9 = &this->_padding_;
  if (this == (FMediaIOCorePlayerBase *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  plVar3 = *(longlong **)(this_01 + 1);
  plVar11 = plVar3;
  if (plVar3 != plVar3 + *(int *)&this_01[1].field_0x8) {
    while ((longlong *)*plVar11 != plVar9) {
      plVar11 = plVar11 + 1;
      if (plVar11 == plVar3 + *(int *)&this_01[1].field_0x8) {
        return;
      }
    }
    uVar10 = (uint)((longlong)plVar11 - (longlong)plVar3 >> 3);
    if (uVar10 != 0xffffffff) {
      uVar12 = 0;
      if ((int)(uVar10 + 1) <= *(int *)&this_01[1].field_0x8) {
        uVar12 = ~uVar10 >> 0x1f;
      }
      if (uVar12 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&this_01[1].field_0x8 + ~uVar10;
      if (1 < iVar6) {
        iVar6 = 1;
      }
      if (iVar6 != 0) {
        memmove((void *)(*(longlong *)(this_01 + 1) + (longlong)(int)uVar10 * 8),
                (void *)(*(longlong *)(this_01 + 1) +
                        (longlong)(*(int *)&this_01[1].field_0x8 - iVar6) * 8),(longlong)iVar6 << 3)
        ;
      }
      *(int *)&this_01[1].field_0x8 = *(int *)&this_01[1].field_0x8 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,(ForAnyElementType *)(this_01 + 1),*(int *)&this_01[1].field_0x8,
                 (int *)&this_01[1].field_0xc);
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast(this_01);
    }
  }
  return;
}

// CreateAndRegisterTextures @ 14d79dcb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMediaIOCorePlayerBase::CreateAndRegisterTextures(FMediaIOCorePlayerBase *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_e8 [32];
  FRenderCommandFence local_c8 [2];
  code *local_b8 [2];
  undefined **local_a8;
  FMediaIOCorePlayerBase *local_a0;
  undefined8 local_90;
  code *local_88 [2];
  undefined **local_78;
  FMediaIOCorePlayerBase *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FMediaIOCorePlayerBase *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  bVar2 = IsInGameThread();
  if (bVar2) {
    UnregisterTextures(this);
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FMediaIOCorePlayerBase::CreateAndRegisterTextures'::`2'::<lambda_2>,1,0>
                ::_vftable_;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FMediaIOCorePlayerBase::CreateAndRegisterTextures'::__l2::<lambda_2>,void,FRHICommandListImmediate_&>
                  ::Call;
    pFStack_70 = this;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FMediaIOCorePlayerBase::CreateAndRegisterTextures_::__l2::TSTR_MediaIOCorePlayerCreateTextures732>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
               TRenderCommandTag<`FMediaIOCorePlayerBase::CreateAndRegisterTextures'::__l2::TSTR_MediaIOCorePlayerCreateTextures732>
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
    FRenderCommandFence::FRenderCommandFence(local_c8);
    FRenderCommandFence::BeginFence(local_c8,RenderThread);
    FRenderCommandFence::Wait(local_c8,false);
    FRenderCommandFence::~FRenderCommandFence(local_c8);
  }
  else {
    local_90 = 0;
    local_a8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FMediaIOCorePlayerBase::CreateAndRegisterTextures'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_b8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FMediaIOCorePlayerBase::CreateAndRegisterTextures'::__l5::<lambda_1>,void>
                  ::Call;
    local_a0 = this;
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_b8);
  }
  return;
}

// CreateTextureSampleConverter @ 14d7a1790

TSharedPtr<FMediaIOCoreTextureSampleConverter,1> * __thiscall
FMediaIOCorePlayerBase::CreateTextureSampleConverter
          (FMediaIOCorePlayerBase *this,
          TSharedPtr<FMediaIOCoreTextureSampleConverter,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<FMediaIOCoreTextureSampleConverter,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  pTVar3 = ::operator_new(0x28);
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FMediaIOCoreTextureSampleConverter *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFMediaIOCoreTextureSampleConverter___00_SharedPointerInternals__6B_
    ;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[1]._padding_ = (longlong)&___7FMediaIOCoreTextureSampleConverter__6B_;
    if ((FMediaIOCoreTextureSampleConverter *)(pTVar3 + 1) ==
        (FMediaIOCoreTextureSampleConverter *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<FMediaIOCoreTextureSampleConverter,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (FMediaIOCoreTextureSampleConverter *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    pTVar5 = pTVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return __return_storage_ptr__;
}

// Deinterlace @ 14d7a2d00

TArray<TSharedRef<FMediaIOCoreTextureSampleBase,1>,TSizedDefaultAllocator<32>_> * __thiscall
FMediaIOCorePlayerBase::Deinterlace
          (FMediaIOCorePlayerBase *this,
          TArray<TSharedRef<FMediaIOCoreTextureSampleBase,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FVideoFrame *param_1)

{
  FDeinterlacer *pFVar1;
  
  pFVar1 = (this->Deinterlacer).Object;
  if (pFVar1 != (FDeinterlacer *)0x0) {
    (**(code **)(pFVar1->_padding_ + 8))();
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// ExecuteGPUTransfer @ 14d7a6160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMediaIOCorePlayerBase::ExecuteGPUTransfer
          (FMediaIOCorePlayerBase *this,TSharedPtr<FMediaIOCoreTextureSampleBase,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FMediaIOCorePlayerBase *pFVar2;
  FMediaIOCoreTextureSampleBase *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<FMediaIOCorePlayerBase,1> *pTVar7;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar8;
  code **ppcVar9;
  atomic<int> *paVar10;
  ulonglong uVar11;
  undefined1 auStack_c8 [32];
  TSharedRef<FMediaIOCorePlayerBase,1> local_a8;
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  undefined1 local_68 [40];
  code **local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pTVar7 = TSharedFromThis<FMediaIOCorePlayerBase,1>::AsShared
                     ((TSharedFromThis<FMediaIOCorePlayerBase,1> *)&this->_padding_,&local_a8);
  pTVar1 = (pTVar7->SharedReferenceCount).ReferenceController;
  pFVar2 = pTVar7->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  pFVar3 = param_1->Object;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    paVar10 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar10 = &pTVar4->SharedReferenceCount;
    LOCK();
    *paVar10 = (atomic<int>)((int)*paVar10 + 1);
    UNLOCK();
  }
  local_98[0] = (code *)0x0;
  local_70 = FMemory::Malloc(0x28,8);
  local_70[1] = (code *)pFVar2;
  *local_70 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FMediaIOCorePlayerBase::ExecuteGPUTransfer'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  local_70[2] = (code *)pTVar1;
  local_70[3] = (code *)pFVar3;
  local_70[4] = (code *)pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar10 = (atomic<int>)((int)*paVar10 + 1);
    UNLOCK();
  }
  if (local_70 != (code **)&DAT_fffffffffffffff8) {
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FMediaIOCorePlayerBase::ExecuteGPUTransfer'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FMediaIOCorePlayerBase::ExecuteGPUTransfer_::__l2::TSTR_StartGPUTextureTransferCopy912>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_68._0_8_ = local_98[0];
    local_40 = local_70;
    local_70 = (code **)0x0;
    local_68._16_8_ = local_88[0];
    local_68._24_8_ = local_88[1];
    local_68._32_8_ = local_88[2];
    local_98[0] = (code *)0x0;
    local_38 = 2;
    pFVar8 = (FRenderCommandTag *)
             TRenderCommandTag<`FMediaIOCorePlayerBase::ExecuteGPUTransfer'::__l2::TSTR_StartGPUTextureTransferCopy912>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_68,pFVar8);
    uVar11 = (ulonglong)local_38;
    if (2 < uVar11) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar11] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_68._0_8_ != (code *)0x0) {
        ppcVar9 = (code **)(local_68 + 0x10);
        if (local_40 != (code **)0x0) {
          ppcVar9 = local_40;
        }
        (**(code **)(*ppcVar9 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar11])(local_68);
    }
  }
  if (local_98[0] != (code *)0x0) {
    ppcVar9 = local_98 + 2;
    if (local_70 != (code **)0x0) {
      ppcVar9 = local_70;
    }
    (**(code **)(*ppcVar9 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  return;
}

// GetApplicationSeconds @ 14d7a9040

double __cdecl FMediaIOCorePlayerBase::GetApplicationSeconds(void)

{
  return MediaIOCorePlayerDetail::HighPerformanceClockDelta + (double)FApp::CurrentTime;
}

// GetAudioTrackFormat @ 14d7a9150

bool __thiscall
FMediaIOCorePlayerBase::GetAudioTrackFormat
          (FMediaIOCorePlayerBase *this,int param_1,int param_2,FMediaAudioTrackFormat *param_3)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = (*(code *)this[-1].Deinterlacer.SharedReferenceCount.ReferenceController[0xf]._padding_)
                    (&this[-1].Deinterlacer.SharedReferenceCount);
  if (((cVar1 == '\0') || (param_1 != 0)) || (param_2 != 0)) {
    bVar2 = false;
  }
  else {
    param_3->BitsPerSample = (uint)(this->VideoTrackFormat).FrameRates.UpperBound.Value;
    param_3->NumChannels = *(uint *)&(this->VideoTrackFormat).field_0x1c;
    param_3->SampleRate = *(uint *)&(this->VideoTrackFormat).TypeName.Data.AllocatorInstance.Data;
    ::FString::operator=
              (&param_3->TypeName,(FString *)&(this->VideoTrackFormat).TypeName.Data.ArrayNum);
    bVar2 = true;
  }
  return bVar2;
}

// GetCache @ 14d7a9570

IMediaCache * __thiscall FMediaIOCorePlayerBase::GetCache(FMediaIOCorePlayerBase *this)

{
  return (IMediaCache *)&this->_padding_;
}

// GetChannels @ 14d7a96d0

TArray<ITimedDataInputChannel_*,TSizedDefaultAllocator<32>_> * __thiscall
FMediaIOCorePlayerBase::GetChannels
          (FMediaIOCorePlayerBase *this,
          TArray<ITimedDataInputChannel_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FFrameRate _Src;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = *(int *)&(this->Samples).Ptr;
  _Src = this->VideoFrameRate;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,(void *)_Src,(longlong)iVar1 << 3);
  return __return_storage_ptr__;
}

// GetColorFormat @ 14d7a9840

EMediaIOCoreColorFormat __thiscall
FMediaIOCorePlayerBase::GetColorFormat(FMediaIOCorePlayerBase *this)

{
  return YUV8;
}

// GetControls @ 14d7a9890

IMediaControls * __thiscall FMediaIOCorePlayerBase::GetControls(FMediaIOCorePlayerBase *this)

{
  return (IMediaControls *)&this->_padding_;
}

// GetDisplayName @ 14d7aa240

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
FMediaIOCorePlayerBase::GetDisplayName(FMediaIOCorePlayerBase *this,FText *__return_storage_ptr__)

{
  code *pcVar1;
  FName *pFVar2;
  IModuleInterface *pIVar3;
  undefined8 uVar4;
  longlong *plVar5;
  FString *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  FName local_res18;
  FText local_68;
  void *local_58 [2];
  undefined1 local_48 [16];
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  FModuleManager::Get();
  pFVar2 = ::FName::FName(&local_res18,"Media");
  pIVar3 = FModuleManager::GetModulePtr_Internal(*pFVar2);
  if (pIVar3 == (IModuleInterface *)0x0) {
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"MediaIOCorePlayerBase",L"InvalidMediaModule",
               L"NoMediaModule");
  }
  else {
    pcVar1 = *(code **)((longlong)*pIVar3 + 0x70);
    uVar4 = (**(code **)((longlong)this[-1].TexturesCriticalSection.CriticalSection.Opaque3[2] +
                        0x20))(this[-1].TexturesCriticalSection.CriticalSection.Opaque3 + 2,local_48
                              );
    plVar5 = (longlong *)(*pcVar1)(pIVar3,uVar4);
    if (plVar5 == (longlong *)0x0) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"MediaIOCorePlayerBase",L"InvalidPlayerFactory",
                 L"NoPlayerFactory");
    }
    else {
      pFVar6 = (FString *)
               (**(code **)((longlong)this[-1].TexturesCriticalSection.CriticalSection.Opaque3[2] +
                           0x40))(this[-1].TexturesCriticalSection.CriticalSection.Opaque3 + 2,
                                  local_58);
      pFVar7 = FText::FromString(&local_38,pFVar6);
      pFVar2 = (FName *)(**(code **)(*plVar5 + 0x18))(plVar5,&local_res18);
      pFVar8 = FText::FromName(&local_28,pFVar2);
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_68,L"MediaIOCorePlayerBase",L"PlayerDisplayName",L"{0} - {1}");
      pFVar10 = FTextFormat::FTextFormat(&local_18,pFVar9,Default);
      FText::Format<FText,FText>(__return_storage_ptr__,pFVar10,pFVar8,pFVar7);
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      if (local_58[0] != (void *)0x0) {
        FMemory::Free(local_58[0]);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetDuration @ 14d7aa490

FTimespan __thiscall FMediaIOCorePlayerBase::GetDuration(FMediaIOCorePlayerBase *this)

{
  undefined8 uVar1;
  undefined8 *in_RDX;
  
  uVar1 = 0x7fffffffffffffff;
  if (*(int *)&(this->AudioTrackFormat).TypeName.Data.AllocatorInstance.Data != 3) {
    uVar1 = 0;
  }
  *in_RDX = uVar1;
  return (FTimespan)(long64)in_RDX;
}

// GetEvaluationOffsetInSeconds @ 14d7aa540

double __thiscall FMediaIOCorePlayerBase::GetEvaluationOffsetInSeconds(FMediaIOCorePlayerBase *this)

{
  undefined1 uVar1;
  code *pcVar2;
  bool bVar3;
  double dVar4;
  
  uVar1 = (undefined1)this->CurrentState;
  if (uVar1 != Closed) {
    if (uVar1 == Error) {
      return (double)(this->CurrentTime).Ticks;
    }
    if (uVar1 == Paused) {
      dVar4 = ITimedDataInput::ConvertFrameOffsetInSecondOffset
                        ((double)*(int *)&this->field_0xa4,
                         (FFrameRate)(this->AudioTrackFormat).TypeName.Data.AllocatorInstance.Data);
      return dVar4;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\Player\\MediaIOCorePlayerBase.cpp"
                       ,0x40d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      dVar4 = (double)(*pcVar2)();
      return dVar4;
    }
  }
  return 0.0;
}

// GetEvaluationType @ 14d7aa5c0

ETimedDataInputEvaluationType __thiscall
FMediaIOCorePlayerBase::GetEvaluationType(FMediaIOCorePlayerBase *this)

{
  undefined1 uVar1;
  code *pcVar2;
  bool bVar3;
  ETimedDataInputEvaluationType EVar4;
  
  uVar1 = (undefined1)this->CurrentState;
  if (uVar1 != Closed) {
    if (uVar1 == Error) {
      return PlatformTime;
    }
    if (uVar1 == Paused) {
      return Timecode;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\Player\\MediaIOCorePlayerBase.cpp"
                       ,0x3d9,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  return None;
}

// GetFrameRate @ 14d7aa9a0

FFrameRate __thiscall FMediaIOCorePlayerBase::GetFrameRate(FMediaIOCorePlayerBase *this)

{
  FFrameRate in_RDX;
  
  *(FScriptContainerElement **)in_RDX =
       (this->AudioTrackFormat).TypeName.Data.AllocatorInstance.Data;
  return in_RDX;
}

// GetInfo @ 14d7aaf00

FString * __thiscall
FMediaIOCorePlayerBase::GetInfo(FMediaIOCorePlayerBase *this,FString *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar3 = 0;
  iVar1 = 0;
  if ((this->AudioTrackFormat).NumChannels != 0) {
    ::FString::PrintfImpl(&local_18,L"Stream\n");
    iVar2 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar2 = iVar1;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_18,L"    Type: Audio\n");
    iVar2 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar2 = iVar1;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_18,L"    Channels: %i\n");
    iVar2 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar2 = iVar3;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_18,L"    Sample Rate: %i Hz\n");
    iVar2 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar2 = iVar3;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_18,L"    Bits Per Sample: 32\n");
    iVar2 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar2 = iVar3;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (((this->VideoTrackFormat).Dim.field0_0x0._s_0.X !=
       UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X) ||
     ((this->VideoTrackFormat).Dim.field0_0x0._s_0.Y !=
      UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y)) {
    if (1 < (__return_storage_ptr__->Data).ArrayNum) {
      ::FString::AppendChars(__return_storage_ptr__,L"\n",1);
    }
    ::FString::PrintfImpl(&local_18,L"Stream\n");
    iVar2 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar2 = iVar3;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_18,L"    Type: Video\n");
    iVar2 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar2 = iVar3;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_18,L"    Dimensions: %i x %i\n");
    iVar2 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar2 = iVar3;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_18,L"    Frame Rate: %g fps\n");
    iVar3 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar3 = iVar1;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar3);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetNumTrackFormats @ 14d7ac2e0

int __thiscall
FMediaIOCorePlayerBase::GetNumTrackFormats
          (FMediaIOCorePlayerBase *this,EMediaTrackType param_1,int param_2)

{
  return 1;
}

// GetNumTracks @ 14d7ac2f0

int __thiscall
FMediaIOCorePlayerBase::GetNumTracks(FMediaIOCorePlayerBase *this,EMediaTrackType param_1)

{
  return 1;
}

// GetNumVideoFrameBuffers @ 14d7ac300

uint __thiscall FMediaIOCorePlayerBase::GetNumVideoFrameBuffers(FMediaIOCorePlayerBase *this)

{
  return 1;
}

// GetPlatformSeconds @ 14d7acb60

double __cdecl FMediaIOCorePlayerBase::GetPlatformSeconds(void)

{
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  return (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000 + MediaIOCorePlayerDetail::HighPerformanceClockDelta;
}

// GetRate @ 14d7ad530

float __thiscall FMediaIOCorePlayerBase::GetRate(FMediaIOCorePlayerBase *this)

{
  if (*(int *)&(this->AudioTrackFormat).TypeName.Data.AllocatorInstance.Data == 3) {
    return __real_3f800000;
  }
  return 0.0;
}

// GetSampleCount @ 14d7ad7f0

int __thiscall
FMediaIOCorePlayerBase::GetSampleCount(FMediaIOCorePlayerBase *this,EMediaCacheState param_1)

{
  int iVar1;
  
  if ((param_1 == Loaded) && (this->VideoFrameRate != (FFrameRate)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014d7ad804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(*(longlong *)this->VideoFrameRate + 0x118))();
    return iVar1;
  }
  return 0;
}

// GetSamples @ 14d7ada00

FMediaIOCoreSamples * __thiscall FMediaIOCorePlayerBase::GetSamples(FMediaIOCorePlayerBase *this)

{
  return (this->Samples).Ptr;
}

// GetSamples @ 14d7ada10

IMediaSamples * __thiscall FMediaIOCorePlayerBase::GetSamples(FMediaIOCorePlayerBase *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x128))();
  if (cVar1 != '\0') {
    return (IMediaSamples *)(this->JITRSamples).Ptr;
  }
  return (IMediaSamples *)(this->Samples).Ptr;
}

// GetSamples_Internal @ 14d7ada50

FMediaIOCoreSamples * __thiscall
FMediaIOCorePlayerBase::GetSamples_Internal(FMediaIOCorePlayerBase *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x128))();
  if (cVar1 != '\0') {
    return (FMediaIOCoreSamples *)(this->JITRSamples).Ptr;
  }
  return (this->Samples).Ptr;
}

// GetSelectedTrack @ 14d7adb20

int __thiscall
FMediaIOCorePlayerBase::GetSelectedTrack(FMediaIOCorePlayerBase *this,EMediaTrackType param_1)

{
  if (param_1 != Audio) {
    return -(uint)(param_1 != Video);
  }
  return 0;
}

// GetState @ 14d7ae000

EMediaState __thiscall FMediaIOCorePlayerBase::GetState(FMediaIOCorePlayerBase *this)

{
  return *(EMediaState *)&(this->AudioTrackFormat).TypeName.Data.AllocatorInstance.Data;
}

// GetStats @ 14d7ae230

FString * __thiscall
FMediaIOCorePlayerBase::GetStats(FMediaIOCorePlayerBase *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetStatus @ 14d7ae250

EMediaStatus __thiscall FMediaIOCorePlayerBase::GetStatus(FMediaIOCorePlayerBase *this)

{
  EMediaStatus EVar1;
  
  EVar1 = None;
  if (*(int *)&(this->AudioTrackFormat).TypeName.Data.AllocatorInstance.Data == 4) {
    EVar1 = Connecting;
  }
  return EVar1;
}

// GetSupportedRates @ 14d7ae3d0

TRangeSet<float> * __thiscall
FMediaIOCorePlayerBase::GetSupportedRates
          (FMediaIOCorePlayerBase *this,TRangeSet<float> *__return_storage_ptr__,
          EMediaRateThinning param_1)

{
  TRange<float> local_18;
  
  local_18.LowerBound.Type.Value = '\x01';
  local_18.LowerBound.Value = 1.0;
  local_18.UpperBound.Type.Value = '\x01';
  local_18.UpperBound.Value = 1.0;
  (__return_storage_ptr__->Ranges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Ranges).ArrayNum = 0;
  (__return_storage_ptr__->Ranges).ArrayMax = 0;
  TRangeSet<float>::Add(__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

// GetTime @ 14d7ae670

FTimespan __thiscall FMediaIOCorePlayerBase::GetTime(FMediaIOCorePlayerBase *this)

{
  undefined8 *in_RDX;
  
  *in_RDX = *(undefined8 *)&(this->AudioTrackFormat).TypeName.Data.ArrayNum;
  return (FTimespan)(long64)in_RDX;
}

// GetTrackDisplayName @ 14d7ae780

FText * __thiscall
FMediaIOCorePlayerBase::GetTrackDisplayName
          (FMediaIOCorePlayerBase *this,FText *__return_storage_ptr__,EMediaTrackType param_1,
          int param_2)

{
  ITextData *pIVar1;
  char cVar2;
  FText *pFVar3;
  undefined1 local_res8 [8];
  
  cVar2 = (*(code *)this[-1].Deinterlacer.SharedReferenceCount.ReferenceController[0xf]._padding_)
                    (&this[-1].Deinterlacer.SharedReferenceCount);
  if ((cVar2 == '\0') || (param_2 != 0)) {
    pFVar3 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (pFVar3->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    __return_storage_ptr__->Flags = pFVar3->Flags;
    return __return_storage_ptr__;
  }
  if (param_1 == Audio) {
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"MediaIOCorePlayerBase",L"DefaultAudioTrackName",
               L"Audio Track");
    return __return_storage_ptr__;
  }
  if (param_1 != Video) {
    pFVar3 = FText::GetEmpty();
    FText::FText(__return_storage_ptr__,pFVar3);
    return __return_storage_ptr__;
  }
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"MediaIOCorePlayerBase",L"DefaultVideoTrackName",L"Video Track"
            );
  return __return_storage_ptr__;
}

// GetTrackFormat @ 14d7ae890

int __thiscall
FMediaIOCorePlayerBase::GetTrackFormat
          (FMediaIOCorePlayerBase *this,EMediaTrackType param_1,int param_2)

{
  return -(uint)(param_1 != Video);
}

// GetTrackLanguage @ 14d7ae8a0

FString * __thiscall
FMediaIOCorePlayerBase::GetTrackLanguage
          (FMediaIOCorePlayerBase *this,FString *__return_storage_ptr__,EMediaTrackType param_1,
          int param_2)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetTrackName @ 14d7ae8c0

FString * __thiscall
FMediaIOCorePlayerBase::GetTrackName
          (FMediaIOCorePlayerBase *this,FString *__return_storage_ptr__,EMediaTrackType param_1,
          int param_2)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetTracks @ 14d7ae8e0

IMediaTracks * __thiscall FMediaIOCorePlayerBase::GetTracks(FMediaIOCorePlayerBase *this)

{
  return (IMediaTracks *)&this->_padding_;
}

// GetUrl @ 14d7aeb20

FString * __thiscall
FMediaIOCorePlayerBase::GetUrl(FMediaIOCorePlayerBase *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->OpenUrl);
  return __return_storage_ptr__;
}

// GetVideoTrackFormat @ 14d7aec00

bool __thiscall
FMediaIOCorePlayerBase::GetVideoTrackFormat
          (FMediaIOCorePlayerBase *this,int param_1,int param_2,FMediaVideoTrackFormat *param_3)

{
  TRangeBound<float> TVar1;
  char cVar2;
  bool bVar3;
  
  cVar2 = (*(code *)this[-1].Deinterlacer.SharedReferenceCount.ReferenceController[0xf]._padding_)
                    (&this[-1].Deinterlacer.SharedReferenceCount);
  if (((cVar2 == '\0') || (param_1 != 0)) || (param_2 != 0)) {
    bVar3 = false;
  }
  else {
    (param_3->Dim).field0_0x0 = (TIntPoint<int>_u_0)this->_padding_;
    param_3->FrameRate = *(float *)&(this->OpenUrl).Data.AllocatorInstance.Data;
    TVar1 = *(TRangeBound<float> *)&(this->OpenUrl).Data.ArrayMax;
    (param_3->FrameRates).LowerBound =
         *(TRangeBound<float> *)((longlong)&(this->OpenUrl).Data.AllocatorInstance.Data + 4);
    (param_3->FrameRates).UpperBound = TVar1;
    ::FString::operator=(&param_3->TypeName,(FString *)&(this->VideoTrackFormat).FrameRate);
    bVar3 = true;
  }
  return bVar3;
}

// GetView @ 14d7aec80

IMediaView * __thiscall FMediaIOCorePlayerBase::GetView(FMediaIOCorePlayerBase *this)

{
  return (IMediaView *)&this->_padding_;
}

// HasTextureAvailableForGPUTransfer @ 14d7aeff0

bool __thiscall
FMediaIOCorePlayerBase::HasTextureAvailableForGPUTransfer(FMediaIOCorePlayerBase *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  
  lpCriticalSection = &this->TexturesCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = (this->Textures).ArrayNum;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return iVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsDataBufferSizeControlledByInput @ 14d7b1680

bool __thiscall
FMediaIOCorePlayerBase::IsDataBufferSizeControlledByInput(FMediaIOCorePlayerBase *this)

{
  return false;
}

// IsJustInTimeRenderingEnabled @ 14d7b16a0

bool __thiscall FMediaIOCorePlayerBase::IsJustInTimeRenderingEnabled(FMediaIOCorePlayerBase *this)

{
  return this->bJustInTimeRender;
}

// IsLooping @ 14d7b16b0

bool __thiscall FMediaIOCorePlayerBase::IsLooping(FMediaIOCorePlayerBase *this)

{
  return false;
}

// IsTimecodeLogEnabled @ 14d7b1980

bool __cdecl FMediaIOCorePlayerBase::IsTimecodeLogEnabled(void)

{
  return MediaIOCorePlayerDetail::bLogTimecode;
}

// JustInTimeSampleRender_RenderThread @ 14d7b1b00

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMediaIOCorePlayerBase::JustInTimeSampleRender_RenderThread
          (FMediaIOCorePlayerBase *this,FRHICommandListImmediate *param_1,
          TRefCountPtr<FRHITexture> *param_2,TSharedPtr<FMediaIOCoreTextureSampleBase,1> *param_3)

{
  code *pcVar1;
  FSharedReferencer<1> FVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  FMediaIOCoreTextureSampleBase *pFVar7;
  TSharedPtr<FMediaIOCoreTextureSampleBase,1> local_c8;
  TSharedRef<IMediaTextureSample,1> local_b8;
  FString local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  undefined8 local_80;
  double local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined1 uStack_54;
  undefined1 local_50 [16];
  undefined1 local_40 [40];
  
  pFVar7 = param_3->Object;
  if (pFVar7 == (FMediaIOCoreTextureSampleBase *)0x0) {
    if (2 < (byte)LogMediaIOCore._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
      return false;
    }
  }
  else if (this->LastEngineRTFrameThatUpdatedJustInTime != GFrameCounterRenderThread) {
    local_98 = 0;
    uStack_90 = 0;
    local_88 = local_88 & 0xffffff0000000000;
    local_70 = 0;
    puVar5 = (undefined8 *)(**(code **)(pFVar7->_padding_ + 0x68))(pFVar7,local_40);
    local_58 = 0;
    local_68 = 0;
    uStack_60 = 0;
    uStack_54 = 0;
    puVar6 = &local_68;
    if (*(char *)(puVar5 + 3) != '\0') {
      puVar6 = puVar5;
    }
    local_98 = *puVar6;
    uStack_90 = puVar6[1];
    local_88 = puVar6[2];
    if ((param_3->Object == (FMediaIOCoreTextureSampleBase *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    puVar6 = (undefined8 *)
             (**(code **)(param_3->Object->_padding_ + 0x60))(param_3->Object,local_50);
    local_80 = *puVar6;
    if ((param_3->Object == (FMediaIOCoreTextureSampleBase *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    local_78 = param_3->Object->EvaluationOffsetInSeconds;
    (**(code **)(this->_padding_ + 0x148))(this,&local_c8,&local_98);
    if (local_c8.Object == (FMediaIOCoreTextureSampleBase *)0x0) {
      if (2 < (byte)LogMediaIOCore._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
      }
      bVar3 = false;
    }
    else {
      if ((local_c8.Object == (FMediaIOCoreTextureSampleBase *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      FVar2.ReferenceController = local_c8.SharedReferenceCount.ReferenceController;
      if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_c8.Object == (FMediaIOCoreTextureSampleBase *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      local_b8.SharedReferenceCount.ReferenceController = FVar2.ReferenceController;
      if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar2.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar2.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      ::FString::FString(&local_a8,L"JITR out");
      LogBookmark(this,&local_a8,&local_b8);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar2.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar2.ReferenceController);
      pFVar7 = TSharedPtr<FMediaIOCoreTextureSampleBase,1>::operator->(param_3);
      (**(code **)(pFVar7->_padding_ + 0x150))(pFVar7,&local_c8);
      TransferTexture_RenderThread(this,param_1,&local_c8,param_3);
      bVar3 = true;
      this->LastEngineRTFrameThatUpdatedJustInTime = GFrameCounterRenderThread;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.SharedReferenceCount.ReferenceController);
    return bVar3;
  }
  return false;
}

// LogBookmark @ 14d7b2120

void __thiscall
FMediaIOCorePlayerBase::LogBookmark
          (FMediaIOCorePlayerBase *this,FString *param_1,TSharedRef<IMediaTextureSample,1> *param_2)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  bool *pbVar6;
  longlong lVar7;
  int iVar8;
  wchar_t *pwVar9;
  FFrameRate local_res20;
  undefined1 local_38 [16];
  FTimecode local_28;
  char local_10;
  
  pTVar1 = MediaIOCorePlayerDetail::CVarMediaIOJITRInsights.Ref;
  bVar2 = IsInParallelGameThread();
  if ((bVar2) || (bVar2 = IsInGameThread(), bVar2)) {
    lVar4 = 0;
  }
  else {
    lVar4 = 1;
  }
  if (pTVar1->ShadowedValue[lVar4] != false) {
    (**(code **)((longlong)*param_2->Object + 0x68))(param_2->Object,&local_28);
    if (local_10 == '\0') {
      plVar5 = (longlong *)
               (**(code **)((longlong)*param_2->Object + 0x60))(param_2->Object,local_38);
      lVar4 = *plVar5;
      lVar7 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar4),8) + lVar4;
      iVar8 = (int)((lVar4 + ((lVar7 >> 0x17) - (lVar7 >> 0x3f)) * -10000000) / 10000);
      if (BookmarkChannel->Enabled < 0) {
        return;
      }
      if (__BookmarkPoint1397 == false) {
        FMiscTrace::OutputBookmarkSpec
                  (&__BookmarkPoint1397,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\Player\\MediaIOCorePlayerBase.cpp"
                   ,0x575,L"%s [%d]");
        __BookmarkPoint1397 = true;
      }
      if ((param_1->Data).ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      uVar3 = CallstackTrace_GetCurrentId();
      pbVar6 = &__BookmarkPoint1397;
    }
    else {
      FTimecode::ToFrameNumber(&local_28,&local_res20);
      if (BookmarkChannel->Enabled < 0) {
        return;
      }
      if (__BookmarkPoint1392 == false) {
        FMiscTrace::OutputBookmarkSpec
                  (&__BookmarkPoint1392,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\Player\\MediaIOCorePlayerBase.cpp"
                   ,0x570,L"%s [%d]");
        __BookmarkPoint1392 = true;
      }
      iVar8 = local_res20.Numerator % 100;
      if ((param_1->Data).ArrayNum == 0) {
        pwVar9 = L"";
        uVar3 = CallstackTrace_GetCurrentId();
        pbVar6 = &__BookmarkPoint1392;
      }
      else {
        pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
        uVar3 = CallstackTrace_GetCurrentId();
        pbVar6 = &__BookmarkPoint1392;
      }
    }
    FMiscTrace::OutputBookmark<wchar_t_const_*,int>(uVar3,pbVar6,pwVar9,iVar8);
  }
  return;
}

// NotifyVideoFormatDetected @ 14d7b23f0

void __thiscall FMediaIOCorePlayerBase::NotifyVideoFormatDetected(FMediaIOCorePlayerBase *this)

{
  char cVar1;
  
  if (this->bAutoDetect != false) {
    cVar1 = (**(code **)(this->_padding_ + 0x120))();
    if (cVar1 != '\0') {
      CreateAndRegisterTextures(this);
      return;
    }
  }
  return;
}

// OnSampleDestroyed @ 14d7b4d90

void __thiscall
FMediaIOCorePlayerBase::OnSampleDestroyed
          (FMediaIOCorePlayerBase *this,TRefCountPtr<FRHITexture> param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  ulonglong uVar2;
  longlong lVar3;
  FRHITexture *pFVar4;
  FScriptContainerElement *pFVar5;
  FRHIResource *this_00;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  TArray<TRefCountPtr<FRHITexture>,TSizedDefaultAllocator<32>_> *pTVar11;
  
  lpCriticalSection = &this->TexturesCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar2 = (param_1.Reference)->_padding_;
  if ((uVar2 != 0) &&
     (uVar9 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595,
     uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb,
     *(int *)&(this->RegisteredTextures).Elements.field_0x8 !=
     *(int *)&(this->RegisteredTextures).Elements.field_0x34)) {
    FVar10 = (this->RegisteredTextures).Hash.SecondaryData;
    if (FVar10 == (ForElementType<FSetElementId>)0x0) {
      FVar10 = (ForElementType<FSetElementId>)&(this->RegisteredTextures).Hash;
    }
    iVar8 = *(int *)((longlong)FVar10 +
                    (ulonglong)((this->RegisteredTextures).HashSize - 1U & (uVar9 >> 0x10 ^ uVar9))
                    * 4);
    if (iVar8 != -1) {
      lVar3 = *(longlong *)&(this->RegisteredTextures).Elements;
      do {
        if (*(ulonglong *)(lVar3 + (longlong)iVar8 * 0x10) == uVar2) {
          pTVar11 = &this->Textures;
          pFVar4 = (FRHITexture *)(pTVar11->AllocatorInstance).Data;
          if (((pFVar4 <= param_1.Reference) &&
              (param_1.Reference < (FRHITexture *)(&pFVar4->_padding_ + (this->Textures).ArrayMax)))
             && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar8 = (this->Textures).ArrayNum;
          piVar1 = &(this->Textures).ArrayMax;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&pTVar11->AllocatorInstance,piVar1);
          }
          (this->Textures).ArrayNum = iVar8 + 1;
          pFVar5 = (pTVar11->AllocatorInstance).Data;
          *(undefined8 *)(pFVar5 + (longlong)iVar8 * 8) = 0;
          this_00 = (FRHIResource *)(param_1.Reference)->_padding_;
          *(FRHIResource **)(pFVar5 + (longlong)iVar8 * 8) = this_00;
          if (this_00 != (FRHIResource *)0x0) {
            FRHIResource::AddRef(this_00);
          }
          break;
        }
        iVar8 = *(int *)(lVar3 + 8 + (longlong)iVar8 * 0x10);
      } while (iVar8 != -1);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((FRHIResource *)(param_1.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_1.Reference)->_padding_);
  }
  return;
}

// Open @ 14d7b4f30

bool __thiscall
FMediaIOCorePlayerBase::Open
          (FMediaIOCorePlayerBase *this,TSharedRef<FArchive,1> *param_1,FString *param_2,
          IMediaOptions *param_3)

{
  return false;
}

// Open @ 14d7b4f40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FMediaIOCorePlayerBase::Open(FMediaIOCorePlayerBase *this,FString *param_1,IMediaOptions *param_2)

{
  FName FVar1;
  longlong **pplVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  char cVar7;
  ETextureSourceEncoding EVar8;
  ETextureColorSpace EVar9;
  int iVar10;
  FName *pFVar11;
  FModuleManager *this_00;
  IModuleInterface *pIVar12;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  undefined8 *puVar13;
  UObject *pUVar14;
  UClass *pUVar15;
  TDelegate<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy>
  *pTVar16;
  longlong **pplVar17;
  UObject *pUVar18;
  FDeinterlacer *pFVar19;
  FName local_res8;
  longlong *local_148;
  undefined8 *local_140;
  FSharedReferencer<1> aFStack_138 [2];
  code *local_128;
  int iStack_120;
  uint uStack_11c;
  undefined1 local_118 [8];
  ForAnyElementType local_110;
  int local_108;
  code *local_f8;
  ulonglong uStack_f0;
  FSoftObjectPath local_e8;
  FString local_c8;
  FDestructionSentinel local_b8;
  TStringView<wchar_t> local_98;
  void *local_88 [2];
  code *local_78;
  longlong lStack_70;
  undefined1 local_68 [8];
  TReferenceControllerBase<1> *local_60;
  TDelegateBase<FNotThreadSafeDelegateMode> local_58;
  TDelegate<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy>
  local_40;
  
  (**(code **)this->_padding_)();
  this->CurrentState = Error;
  pFVar11 = ::FName::FName(&local_res8,L"TimeManagement");
  FVar1 = *pFVar11;
  this_00 = FModuleManager::Get();
  pIVar12 = FModuleManager::LoadModuleChecked(this_00,FVar1);
  this_01 = (TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
            (**(code **)((longlong)*pIVar12 + 0x40))(pIVar12);
  local_148 = &this->_padding_;
  if (local_148 != (longlong *)0x0) {
    pplVar2 = *(longlong ***)(this_01 + 1);
    for (pplVar17 = pplVar2; pplVar17 != pplVar2 + *(int *)&this_01[1].field_0x8;
        pplVar17 = pplVar17 + 1) {
      if (*pplVar17 == local_148) goto LAB_14d7b508a;
    }
    if (((pplVar2 <= &local_148) && (&local_148 < pplVar2 + *(int *)&this_01[1].field_0xc)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    iVar10 = *(int *)&this_01[1].field_0x8;
    if (iVar10 == *(int *)&this_01[1].field_0xc) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)(this_01 + 1),(int *)&this_01[1].field_0xc);
    }
    *(int *)&this_01[1].field_0x8 = iVar10 + 1;
    *(longlong **)(*(longlong *)(this_01 + 1) + (longlong)iVar10 * 8) = local_148;
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast(this_01);
  }
LAB_14d7b508a:
  ::FString::operator=(&this->OpenUrl,param_1);
  cVar6 = (**(code **)(this->_padding_ + 0xf8))(this,param_2);
  if ((this->bAutoDetect == false) &&
     (cVar7 = (**(code **)(this->_padding_ + 0x120))(this), cVar7 != '\0')) {
    CreateAndRegisterTextures(this);
  }
  uVar5 = (**(code **)((longlong)*param_2 + 0x20))
                    (param_2,&UE::CaptureCardMediaSource::InterlaceFieldOrder,0);
  ::FString::FString(&local_c8,L"");
  puVar13 = (undefined8 *)
            (**(code **)((longlong)*param_2 + 0x18))
                      (param_2,local_88,&UE::CaptureCardMediaSource::Deinterlacer,&local_c8);
  pUVar18 = (UObject *)0x0;
  local_e8.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_e8.AssetPath.PackageName.Number = 0;
  local_e8.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_e8.AssetPath.AssetName.Number = 0;
  local_e8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.SubPathString.Data.ArrayNum = 0;
  local_e8.SubPathString.Data.ArrayMax = 0;
  local_128 = (code *)*puVar13;
  iStack_120 = *(int *)(puVar13 + 1) + -1;
  if (*(int *)(puVar13 + 1) == 0) {
    iStack_120 = 0;
  }
  local_98._12_4_ = uStack_11c;
  local_98.Size = iStack_120;
  local_98.DataPtr = (wchar_t *)local_128;
  FSoftObjectPath::SetPath(&local_e8,&local_98);
  if (local_88[0] != (void *)0x0) {
    FMemory::Free(local_88[0]);
  }
  pUVar14 = FSoftObjectPath::ResolveObject(&local_e8);
  if (pUVar14 != (UObject *)0x0) {
    pUVar15 = UVideoDeinterlacer::StaticClass();
    iVar10 = (int)pUVar15->_padding_;
    if ((*(int *)(*(longlong *)&pUVar14->field_0x10 + 0x38) < iVar10) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar14->field_0x10 + 0x30) + (longlong)iVar10 * 8) !=
        &pUVar15->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar15 = UVideoDeinterlacer::StaticClass();
      iVar10 = (int)pUVar15->_padding_;
      if ((*(int *)(*(longlong *)&pUVar14->field_0x10 + 0x38) < iVar10) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar14->field_0x10 + 0x30) + (longlong)iVar10 * 8) !=
          &pUVar15->_padding_)) {
        pUVar14 = pUVar18;
      }
      iStack_120 = 0;
      pcVar3 = *(code **)(*(longlong *)pUVar14 + 0x2b0);
      local_128 = _vcall__304__flat______;
      lStack_70 = (ulonglong)uStack_11c << 0x20;
      local_78 = _vcall__304__flat______;
      pTVar16 = TDelegate<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy>
                ::CreateSP<FMediaIOCorePlayerBase>(&local_40,this,(pmf_07ae9cc9 *)&local_78);
      puVar13 = (undefined8 *)(*pcVar3)(pUVar14,local_68,pTVar16,uVar5);
      if (&this->Deinterlacer != (TSharedPtr<UE::MediaIOCore::FDeinterlacer,1> *)puVar13) {
        (this->Deinterlacer).Object = (FDeinterlacer *)*puVar13;
        *puVar13 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->Deinterlacer).SharedReferenceCount,(FSharedReferencer<1> *)(puVar13 + 1))
        ;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
      goto LAB_14d7b53d0;
    }
  }
  uStack_f0 = uStack_f0 & 0xffffffff00000000;
  local_f8 = _vcall__304__flat______;
  pTVar16 = TDelegate<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy>
            ::CreateSP<FMediaIOCorePlayerBase>
                      ((TDelegate<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy>
                        *)local_118,this,(pmf_07ae9cc9 *)&local_f8);
  pUVar14 = ::operator_new(0x38);
  if (pUVar14 == (UObject *)0x0) {
    local_140 = ___xmm_00000000000000000000000000000010;
    pFVar19 = (FDeinterlacer *)&DAT_00000010;
    aFStack_138[0].ReferenceController = (TReferenceControllerBase<1> *)_UNK_150651568;
  }
  else {
    *(undefined4 *)&pUVar14->field_0x8 = 1;
    *(undefined4 *)&pUVar14->field_0xc = 1;
    *(undefined ***)pUVar14 =
         &
         ___7__TIntrusiveReferenceController_VFDeinterlacer_MediaIOCore_UE___00_SharedPointerInternals__6B_
    ;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              (&local_58,(TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar16);
    *(undefined ***)&pUVar14->field_0x10 = &___7FDeinterlacer_MediaIOCore_UE__6B_;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pUVar14->field_0x18,&local_58);
    pUVar14[1].field_0x8 = uVar5;
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_58)
    ;
    pFVar19 = (FDeinterlacer *)&pUVar14->field_0x10;
    if ((pFVar19 == (FDeinterlacer *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    LOCK();
    *(int *)&pUVar14->field_0x8 = *(int *)&pUVar14->field_0x8 + 1;
    UNLOCK();
    aFStack_138[0].ReferenceController = (TReferenceControllerBase<1> *)pUVar14;
    pUVar18 = pUVar14;
    local_140 = (undefined8 *)pFVar19;
  }
  if (&this->Deinterlacer != (TSharedPtr<UE::MediaIOCore::FDeinterlacer,1> *)&local_140) {
    (this->Deinterlacer).Object = pFVar19;
    local_140 = (undefined8 *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Deinterlacer).SharedReferenceCount,aFStack_138);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_138[0].ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pUVar18);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
             (FWriteAccessScope *)&local_b8);
  if ((local_108 != 0) && (local_110.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_110.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_110,0,0,0x10);
    local_108 = 0;
  }
  if (local_b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
  }
  if (local_110.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_118);
LAB_14d7b53d0:
  bVar4 = (bool)(**(code **)((longlong)*param_2 + 0x30))
                          (param_2,&UE::CaptureCardMediaSource::OverrideSourceEncoding,1);
  this->bOverrideSourceEncoding = bVar4;
  EVar8 = (**(code **)((longlong)*param_2 + 0x20))
                    (param_2,&UE::CaptureCardMediaSource::SourceEncoding,1);
  this->OverrideSourceEncoding = EVar8;
  bVar4 = (bool)(**(code **)((longlong)*param_2 + 0x30))
                          (param_2,&UE::CaptureCardMediaSource::OverrideSourceColorSpace,1);
  this->bOverrideSourceColorSpace = bVar4;
  EVar9 = (**(code **)((longlong)*param_2 + 0x20))
                    (param_2,&UE::CaptureCardMediaSource::SourceColorSpace,0);
  this->OverrideSourceColorSpace = EVar9;
  if (cVar6 != '\0') {
    this->CurrentState = Preparing;
    (**(code **)*this->EventSink)(this->EventSink,3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (local_e8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  return (bool)cVar6;
}

// PickSampleToRenderForLatest_RenderThread @ 14d7b54e0

TSharedPtr<FMediaIOCoreTextureSampleBase,1> * __thiscall
FMediaIOCorePlayerBase::PickSampleToRenderForLatest_RenderThread
          (FMediaIOCorePlayerBase *this,
          TSharedPtr<FMediaIOCoreTextureSampleBase,1> *__return_storage_ptr__,FFrameInfo *param_1)

{
  FSharedReferencer<1> FVar1;
  FMediaIOCoreTextureSampleBase *pFVar2;
  TArray<TSharedPtr<IMediaTextureSample,1>,TSizedDefaultAllocator<32>_> local_18;
  
  FMediaIOCoreSamples::GetVideoSamples((this->Samples).Ptr,&local_18);
  if (local_18.ArrayNum < 1) {
    __return_storage_ptr__->Object = (FMediaIOCoreTextureSampleBase *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    FVar1.ReferenceController =
         *(TReferenceControllerBase<1> **)(local_18.AllocatorInstance.Data + 8);
    pFVar2 = *(FMediaIOCoreTextureSampleBase **)local_18.AllocatorInstance.Data;
    if (FVar1.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar1.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar1.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    __return_storage_ptr__->Object = pFVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar1.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  DestructItems<TSharedPtr<IMediaTextureSample,1>,int>
            ((TSharedPtr<IMediaTextureSample,1> *)local_18.AllocatorInstance.Data,local_18.ArrayNum)
  ;
  if ((TSharedPtr<IMediaTextureSample,1> *)local_18.AllocatorInstance.Data !=
      (TSharedPtr<IMediaTextureSample,1> *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// PickSampleToRenderForTimeSynchronized_RenderThread @ 14d7b5570

TSharedPtr<FMediaIOCoreTextureSampleBase,1> * __thiscall
FMediaIOCorePlayerBase::PickSampleToRenderForTimeSynchronized_RenderThread
          (FMediaIOCorePlayerBase *this,
          TSharedPtr<FMediaIOCoreTextureSampleBase,1> *__return_storage_ptr__,FFrameInfo *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  ForAnyElementType FVar4;
  ulonglong uVar5;
  bool bVar6;
  uint uVar7;
  TSharedPtr<FMediaIOCoreTextureSampleBase,1> *pTVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 in_XMM0 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  FFrameRate local_res8;
  TArray<TSharedPtr<IMediaTextureSample,1>,TSizedDefaultAllocator<32>_> local_48;
  undefined1 local_38 [16];
  ulonglong uVar14;
  
  if ((this->EvaluationType == Timecode) &&
     (((((param_1->RequestedTimecode).Hours != 0 || ((param_1->RequestedTimecode).Minutes != 0)) ||
       ((param_1->RequestedTimecode).Seconds != 0)) ||
      (((param_1->RequestedTimecode).Frames != 0 ||
       (in_XMM0 = ZEXT816(0), (param_1->RequestedTimecode).Subframe != 0.0)))))) {
    FTimecode::ToFrameNumber(&param_1->RequestedTimecode,&local_res8);
    auVar18._0_8_ = (double)(this->VideoFrameRate).Numerator;
    auVar18._8_8_ = 0;
    auVar19._8_8_ = 0;
    auVar19._0_8_ =
         ((double)(this->VideoFrameRate).Denominator / auVar18._0_8_) * (double)local_res8.Numerator
         * __real_416312d000000000 + __real_3fe0000000000000;
    in_XMM0 = roundpd(auVar18,auVar19,1);
    lVar12 = (longlong)in_XMM0._0_8_;
  }
  else {
    lVar12 = (param_1->SampleTimespan).Ticks;
  }
  uVar15 = 0xffffffff;
  uVar7 = 0xffffffff;
  lVar16 = 0x7fffffffffffffff;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_1->EvaluationOffset * __real_416312d000000000 + __real_3fe0000000000000;
  auVar19 = roundpd(in_XMM0,auVar3,1);
  FMediaIOCoreSamples::GetVideoSamples((this->Samples).Ptr,&local_48);
  uVar17 = 0;
  if (local_48.ArrayNum == 0) {
    __return_storage_ptr__->Object = (FMediaIOCoreTextureSampleBase *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    goto LAB_14d7b57e4;
  }
  uVar5 = uVar17;
  if (local_48.ArrayNum < 1) {
LAB_14d7b5778:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pTVar8 = (TSharedPtr<FMediaIOCoreTextureSampleBase,1> *)(*pcVar2)();
      return pTVar8;
    }
  }
  else {
    do {
      uVar14 = uVar5;
      uVar13 = (uint)uVar14;
      uVar7 = 0;
      if ((int)uVar13 < local_48.ArrayNum) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TSharedPtr<FMediaIOCoreTextureSampleBase,1> *)(*pcVar2)();
        return pTVar8;
      }
      FVar4.Data = local_48.AllocatorInstance.Data;
      if ((*(longlong *)(local_48.AllocatorInstance.Data + uVar17) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TSharedPtr<FMediaIOCoreTextureSampleBase,1> *)(*pcVar2)();
        return pTVar8;
      }
      plVar9 = (longlong *)
               (**(code **)(**(longlong **)(FVar4.Data + uVar17) + 0x60))
                         (*(longlong **)(FVar4.Data + uVar17),local_38);
      lVar11 = *plVar9 - (lVar12 - (longlong)auVar19._0_8_);
      lVar10 = -lVar11;
      if (lVar10 < 0) {
        lVar10 = lVar11;
      }
      uVar7 = (uint)uVar15;
      if (lVar16 < lVar10) break;
      uVar17 = uVar17 + 0x10;
      uVar5 = (ulonglong)(uVar13 + 1);
      uVar15 = uVar14;
      lVar16 = lVar10;
      uVar7 = uVar13;
    } while ((int)(uVar13 + 1) < local_48.ArrayNum);
    uVar13 = 0;
    if ((int)uVar7 < local_48.ArrayNum) {
      uVar13 = ~uVar7 >> 0x1f;
    }
    if (uVar13 == 0) goto LAB_14d7b5778;
  }
  __return_storage_ptr__->Object =
       *(FMediaIOCoreTextureSampleBase **)
        &local_48.AllocatorInstance.Data[(longlong)(int)uVar7 * 0x10].field_0x0;
  pTVar1 = *(TReferenceControllerBase<1> **)
            (local_48.AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10 + 8);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
LAB_14d7b57e4:
  DestructItems<TSharedPtr<IMediaTextureSample,1>,int>
            ((TSharedPtr<IMediaTextureSample,1> *)local_48.AllocatorInstance.Data,local_48.ArrayNum)
  ;
  if ((TSharedPtr<IMediaTextureSample,1> *)local_48.AllocatorInstance.Data !=
      (TSharedPtr<IMediaTextureSample,1> *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// PickSampleToRenderFramelocked_RenderThread @ 14d7b5820

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FMediaIOCoreTextureSampleBase,1> * __thiscall
FMediaIOCorePlayerBase::PickSampleToRenderFramelocked_RenderThread
          (FMediaIOCorePlayerBase *this,
          TSharedPtr<FMediaIOCoreTextureSampleBase,1> *__return_storage_ptr__,FFrameInfo *param_1)

{
  uint uVar1;
  int iVar2;
  FMediaIOCoreSamples *pFVar3;
  TSharedPtr<IMediaTextureSample,1> *pTVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  FMediaIOCoreTextureSampleBase *pFVar9;
  bool bVar10;
  uint uVar11;
  TSharedPtr<FMediaIOCoreTextureSampleBase,1> *pTVar12;
  longlong lVar13;
  FSharedReferencer<1> FVar14;
  LPCRITICAL_SECTION lpCriticalSection;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar18;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  ForAnyElementType local_a8;
  int local_a0;
  int local_9c;
  FMediaIOCoreTextureSampleBase *local_98;
  FSharedReferencer<1> FStack_90;
  undefined8 local_88;
  FSharedReferencer<1> local_80;
  undefined8 local_78;
  FSharedReferencer<1> local_70 [7];
  ulonglong uVar17;
  
  uVar1 = this->FrameDelay;
  local_98 = (FMediaIOCoreTextureSampleBase *)0x0;
  FStack_90.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  QueryPerformanceCounter(&local_res8);
  fVar8 = __real_3a83126f;
  dVar7 = __real_3ff0000000000000;
  pFVar3 = (this->Samples).Ptr;
  lVar18 = GFrameCounterRenderThread - 1;
  lpCriticalSection = (LPCRITICAL_SECTION)&(pFVar3->VideoSamples).CriticalSection;
  dVar6 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    do {
      EnterCriticalSection(lpCriticalSection);
      local_a8.Data = (FScriptContainerElement *)0x0;
      iVar2 = (pFVar3->VideoSamples).Samples.ArrayNum;
      pTVar4 = (TSharedPtr<IMediaTextureSample,1> *)
               (pFVar3->VideoSamples).Samples.AllocatorInstance.Data;
      local_a0 = iVar2;
      if (iVar2 == 0) {
        local_9c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar2,0,&local_a8,iVar2,&local_9c);
        ConstructItems<TSharedPtr<IMediaTextureSample,1>,TSharedPtr<IMediaTextureSample,1>,int>
                  (local_a8.Data,pTVar4,iVar2);
      }
      if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
        LeaveCriticalSection(lpCriticalSection);
      }
      uVar15 = 0;
      uVar17 = 0;
      if (0 < local_a0) {
        do {
          uVar16 = (uint)uVar17;
          uVar11 = 0;
          if ((int)uVar16 < local_a0) {
            uVar11 = ~uVar16 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            pTVar12 = (TSharedPtr<FMediaIOCoreTextureSampleBase,1> *)(*pcVar5)();
            return pTVar12;
          }
          local_80.ReferenceController =
               *(TReferenceControllerBase<1> **)(local_a8.Data + uVar15 + 8);
          local_98 = *(FMediaIOCoreTextureSampleBase **)(local_a8.Data + uVar15);
          if (local_80.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_80.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_80.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_88 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_90,&local_80);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_80.ReferenceController);
          pFVar9 = local_98;
          if ((local_98 == (FMediaIOCoreTextureSampleBase *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar5 = (code *)swi(3);
            pTVar12 = (TSharedPtr<FMediaIOCoreTextureSampleBase,1> *)(*pcVar5)();
            return pTVar12;
          }
          lVar13 = (**(code **)(pFVar9->_padding_ + 0x168))(pFVar9);
          if (lVar13 == lVar18 + (ulonglong)uVar1) {
            __return_storage_ptr__->Object = pFVar9;
            (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
                 FStack_90.ReferenceController;
            DestructItems<TSharedPtr<IMediaTextureSample,1>,int>
                      ((TSharedPtr<IMediaTextureSample,1> *)local_a8.Data,local_a0);
            if ((TSharedPtr<IMediaTextureSample,1> *)local_a8.Data !=
                (TSharedPtr<IMediaTextureSample,1> *)0x0) {
              FMemory::Free(local_a8.Data);
            }
            FVar14.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14d7b5acc;
          }
          uVar15 = uVar15 + 0x10;
          uVar17 = (ulonglong)(uVar16 + 1);
        } while ((int)(uVar16 + 1) < local_a0);
      }
      local_70[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_98 = (FMediaIOCoreTextureSampleBase *)0x0;
      local_78 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_90,local_70);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_70[0].ReferenceController);
      FWindowsPlatformProcess::SleepNoStats(fVar8);
      QueryPerformanceCounter(&local_res20);
      if (dVar7 < (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar6) {
        DestructItems<TSharedPtr<IMediaTextureSample,1>,int>
                  ((TSharedPtr<IMediaTextureSample,1> *)local_a8.Data,local_a0);
        if ((TSharedPtr<IMediaTextureSample,1> *)local_a8.Data !=
            (TSharedPtr<IMediaTextureSample,1> *)0x0) {
          FMemory::Free(local_a8.Data);
        }
        if (2 < (byte)LogMediaIOCore._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
        }
        __return_storage_ptr__->Object = (FMediaIOCoreTextureSampleBase *)0x0;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        FVar14.ReferenceController = FStack_90.ReferenceController;
LAB_14d7b5acc:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar14.ReferenceController);
        return __return_storage_ptr__;
      }
      DestructItems<TSharedPtr<IMediaTextureSample,1>,int>
                ((TSharedPtr<IMediaTextureSample,1> *)local_a8.Data,local_a0);
      if ((TSharedPtr<IMediaTextureSample,1> *)local_a8.Data !=
          (TSharedPtr<IMediaTextureSample,1> *)0x0) {
        FMemory::Free(local_a8.Data);
      }
      pFVar3 = (this->Samples).Ptr;
      lpCriticalSection = (LPCRITICAL_SECTION)&(pFVar3->VideoSamples).CriticalSection;
    } while (lpCriticalSection != (LPCRITICAL_SECTION)0x0);
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// PickSampleToRender_RenderThread @ 14d7b5b50

TSharedPtr<FMediaIOCoreTextureSampleBase,1> * __thiscall
FMediaIOCorePlayerBase::PickSampleToRender_RenderThread
          (FMediaIOCorePlayerBase *this,
          TSharedPtr<FMediaIOCoreTextureSampleBase,1> *__return_storage_ptr__,FFrameInfo *param_1)

{
  EMediaIOSampleEvaluationType EVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<FMediaIOCoreTextureSampleBase,1> *pTVar4;
  undefined8 *puVar5;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  EVar1 = this->EvaluationType;
  if (EVar1 != Latest) {
    if (EVar1 == PlatformTime) {
      (**(code **)(this->_padding_ + 0x158))(this);
      return __return_storage_ptr__;
    }
    if (EVar1 == Timecode) {
      if (this->bFramelock != false) {
        puVar5 = (undefined8 *)(**(code **)(this->_padding_ + 0x160))(this,local_28);
        __return_storage_ptr__->Object = (FMediaIOCoreTextureSampleBase *)*puVar5;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)puVar5[1];
        puVar5[1] = 0;
        *puVar5 = 0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_20);
        return __return_storage_ptr__;
      }
      puVar5 = (undefined8 *)(**(code **)(this->_padding_ + 0x158))(this,local_18);
      __return_storage_ptr__->Object = (FMediaIOCoreTextureSampleBase *)*puVar5;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)puVar5[1];
      puVar5[1] = 0;
      *puVar5 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
      return __return_storage_ptr__;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\Player\\MediaIOCorePlayerBase.cpp"
                       ,0x4e2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<FMediaIOCoreTextureSampleBase,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  (**(code **)(this->_padding_ + 0x150))(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// PreGPUTransfer @ 14d7b6890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMediaIOCorePlayerBase::PreGPUTransfer
          (FMediaIOCorePlayerBase *this,TSharedPtr<FMediaIOCoreTextureSampleBase,1> *param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<TRefCountPtr<FRHITexture>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FMediaIOCoreTextureSampleBase *pFVar4;
  code *pcVar5;
  FFunctionStorage *pFVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  TSharedRef<FMediaIOCorePlayerBase,1> *pTVar10;
  uint uVar11;
  longlong lVar12;
  FRHITexture *this_00;
  FFunctionStorage *pFVar13;
  undefined ***pppuVar14;
  ForElementType<FSetElementId> FVar15;
  FRHITexture *this_01;
  TRefCountPtr<FRHITexture> *pTVar16;
  undefined1 auStackY_108 [32];
  undefined1 local_d8 [16];
  code *local_c8;
  undefined **local_b8;
  FMediaIOCorePlayerBase *local_b0;
  TReferenceControllerBase<1> *local_a8;
  undefined ***local_a0;
  longlong local_98;
  TSharedRef<FMediaIOCorePlayerBase,1> local_90;
  code *local_78;
  undefined8 uStack_70;
  FFunctionStorage local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  this_01 = (FRHITexture *)0x0;
  lpCriticalSection = &this->TexturesCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->Textures).ArrayNum == 0) {
    `FMediaIOCorePlayerBase::PreGPUTransfer'::__l3::<lambda_1>::operator()(local_d8);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  else {
    pTVar2 = &this->Textures;
    if (((this->Textures).ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar12 = (longlong)(this->Textures).ArrayNum;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    this_01 = *(FRHITexture **)(pFVar3 + lVar12 * 8 + -8);
    *(undefined8 *)(pFVar3 + lVar12 * 8 + -8) = 0;
    iVar9 = (this->Textures).ArrayNum;
    pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8;
    if (*(FRHIResource **)(pFVar3 + -8) != (FRHIResource *)0x0) {
      FRHIResource::Release(*(FRHIResource **)(pFVar3 + -8));
    }
    iVar9 = (this->Textures).ArrayNum - iVar9;
    if (iVar9 != 0) {
      memmove(pFVar3 + -8,pFVar3,(longlong)iVar9 << 3);
    }
    piVar1 = &(this->Textures).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&pTVar2->AllocatorInstance,(this->Textures).ArrayNum,&(this->Textures).ArrayMax);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this_01 != (FRHITexture *)0x0) &&
       (uVar11 = ((uint)((ulonglong)this_01 >> 0x14) & 0xffff ^ (uint)((ulonglong)this_01 >> 4)) *
                 -0x7a143595, uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb,
       *(int *)&(this->RegisteredTextures).Elements.field_0x8 !=
       *(int *)&(this->RegisteredTextures).Elements.field_0x34)) {
      FVar15 = (this->RegisteredTextures).Hash.SecondaryData;
      if (FVar15 == (ForElementType<FSetElementId>)0x0) {
        FVar15 = (ForElementType<FSetElementId>)&(this->RegisteredTextures).Hash;
      }
      iVar9 = *(int *)((longlong)FVar15 +
                      (ulonglong)
                      ((this->RegisteredTextures).HashSize - 1U & (uVar11 >> 0x10 ^ uVar11)) * 4);
      if (iVar9 != -1) {
        lVar12 = *(longlong *)&(this->RegisteredTextures).Elements;
        do {
          if (*(FRHITexture **)(lVar12 + (longlong)iVar9 * 0x10) == this_01) {
            if ((param_1->Object == (FMediaIOCoreTextureSampleBase *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar4 = param_1->Object;
            FRHIResource::AddRef((FRHIResource *)this_01);
            pTVar16 = &pFVar4->Texture;
            this_00 = this_01;
            if (pTVar16 == (TRefCountPtr<FRHITexture> *)&local_98) {
LAB_14d7b6b1d:
              FRHIResource::Release((FRHIResource *)this_00);
            }
            else {
              this_00 = pTVar16->Reference;
              pTVar16->Reference = this_01;
              if (this_00 != (FRHITexture *)0x0) goto LAB_14d7b6b1d;
            }
            if ((param_1->Object == (FMediaIOCoreTextureSampleBase *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar4 = param_1->Object;
            pTVar10 = TSharedFromThis<FMediaIOCorePlayerBase,1>::AsShared
                                ((TSharedFromThis<FMediaIOCorePlayerBase,1> *)&this->_padding_,
                                 &local_90);
            local_a8 = (pTVar10->SharedReferenceCount).ReferenceController;
            local_b0 = pTVar10->Object;
            if (local_a8 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              local_a8->WeakReferenceCount = (atomic<int>)((int)local_a8->WeakReferenceCount + 1);
              UNLOCK();
            }
            local_b8 = &UE::Core::Private::Function::
                        TFunction_OwnedObject<`FMediaIOCorePlayerBase::PreGPUTransfer'::`9'::<lambda_2>,0,0>
                        ::_vftable_;
            local_c8 = UE::Core::Private::Function::
                       TFunctionRefCaller<`FMediaIOCorePlayerBase::PreGPUTransfer'::__l9::<lambda_2>,void,TRefCountPtr<FRHITexture>_>
                       ::Call;
            local_78 = UE::Core::Private::Function::
                       TFunctionRefCaller<`FMediaIOCorePlayerBase::PreGPUTransfer'::__l9::<lambda_2>,void,TRefCountPtr<FRHITexture>_>
                       ::Call;
            local_a0 = (undefined ***)0x0;
            local_68.HeapAllocation = (void *)0x0;
            UE::Core::Private::Function::
            TFunction_OwnedObject<`FMediaIOCorePlayerBase::PreGPUTransfer'::__l9::<lambda_2>,0,0>::
            CloneToEmptyStorage(&local_b8,&local_68);
            lVar12 = *(longlong *)&pFVar4->DestructionCallback;
            uVar7 = *(undefined8 *)&(pFVar4->DestructionCallback).field_0x8;
            pFVar6 = *(FFunctionStorage **)&(pFVar4->DestructionCallback).field_0x28;
            *(code **)&pFVar4->DestructionCallback = local_78;
            *(undefined8 *)&(pFVar4->DestructionCallback).field_0x8 = uStack_70;
            (pFVar4->DestructionCallback).field_0x10 = local_68.InlineAllocation[0];
            (pFVar4->DestructionCallback).field_0x11 = local_68.InlineAllocation[1];
            (pFVar4->DestructionCallback).field_0x12 = local_68.InlineAllocation[2];
            (pFVar4->DestructionCallback).field_0x13 = local_68.InlineAllocation[3];
            (pFVar4->DestructionCallback).field_0x14 = local_68.InlineAllocation[4];
            (pFVar4->DestructionCallback).field_0x15 = local_68.InlineAllocation[5];
            (pFVar4->DestructionCallback).field_0x16 = local_68.InlineAllocation[6];
            (pFVar4->DestructionCallback).field_0x17 = local_68.InlineAllocation[7];
            (pFVar4->DestructionCallback).field_0x18 = local_68.InlineAllocation[8];
            (pFVar4->DestructionCallback).field_0x19 = local_68.InlineAllocation[9];
            (pFVar4->DestructionCallback).field_0x1a = local_68.InlineAllocation[10];
            (pFVar4->DestructionCallback).field_0x1b = local_68.InlineAllocation[0xb];
            (pFVar4->DestructionCallback).field_0x1c = local_68.InlineAllocation[0xc];
            (pFVar4->DestructionCallback).field_0x1d = local_68.InlineAllocation[0xd];
            (pFVar4->DestructionCallback).field_0x1e = local_68.InlineAllocation[0xe];
            (pFVar4->DestructionCallback).field_0x1f = local_68.InlineAllocation[0xf];
            (pFVar4->DestructionCallback).field_0x20 = local_68.InlineAllocation[0x10];
            (pFVar4->DestructionCallback).field_0x21 = local_68.InlineAllocation[0x11];
            (pFVar4->DestructionCallback).field_0x22 = local_68.InlineAllocation[0x12];
            (pFVar4->DestructionCallback).field_0x23 = local_68.InlineAllocation[0x13];
            (pFVar4->DestructionCallback).field_0x24 = local_68.InlineAllocation[0x14];
            (pFVar4->DestructionCallback).field_0x25 = local_68.InlineAllocation[0x15];
            (pFVar4->DestructionCallback).field_0x26 = local_68.InlineAllocation[0x16];
            (pFVar4->DestructionCallback).field_0x27 = local_68.InlineAllocation[0x17];
            *(undefined4 *)&(pFVar4->DestructionCallback).field_0x28 = local_68.HeapAllocation._0_4_
            ;
            *(undefined4 *)&(pFVar4->DestructionCallback).field_0x2c = local_68.HeapAllocation._4_4_
            ;
            local_78 = (code *)lVar12;
            uStack_70 = uVar7;
            local_68.InlineAllocation[0] = (pFVar4->DestructionCallback).field_0x10;
            local_68.InlineAllocation[1] = (pFVar4->DestructionCallback).field_0x11;
            local_68.InlineAllocation[2] = (pFVar4->DestructionCallback).field_0x12;
            local_68.InlineAllocation[3] = (pFVar4->DestructionCallback).field_0x13;
            local_68.InlineAllocation[4] = (pFVar4->DestructionCallback).field_0x14;
            local_68.InlineAllocation[5] = (pFVar4->DestructionCallback).field_0x15;
            local_68.InlineAllocation[6] = (pFVar4->DestructionCallback).field_0x16;
            local_68.InlineAllocation[7] = (pFVar4->DestructionCallback).field_0x17;
            local_68.InlineAllocation[8] = (pFVar4->DestructionCallback).field_0x18;
            local_68.InlineAllocation[9] = (pFVar4->DestructionCallback).field_0x19;
            local_68.InlineAllocation[10] = (pFVar4->DestructionCallback).field_0x1a;
            local_68.InlineAllocation[0xb] = (pFVar4->DestructionCallback).field_0x1b;
            local_68.InlineAllocation[0xc] = (pFVar4->DestructionCallback).field_0x1c;
            local_68.InlineAllocation[0xd] = (pFVar4->DestructionCallback).field_0x1d;
            local_68.InlineAllocation[0xe] = (pFVar4->DestructionCallback).field_0x1e;
            local_68.InlineAllocation[0xf] = (pFVar4->DestructionCallback).field_0x1f;
            local_68.InlineAllocation[0x10] = (pFVar4->DestructionCallback).field_0x20;
            local_68.InlineAllocation[0x11] = (pFVar4->DestructionCallback).field_0x21;
            local_68.InlineAllocation[0x12] = (pFVar4->DestructionCallback).field_0x22;
            local_68.InlineAllocation[0x13] = (pFVar4->DestructionCallback).field_0x23;
            local_68.InlineAllocation[0x14] = (pFVar4->DestructionCallback).field_0x24;
            local_68.InlineAllocation[0x15] = (pFVar4->DestructionCallback).field_0x25;
            local_68.InlineAllocation[0x16] = (pFVar4->DestructionCallback).field_0x26;
            local_68.InlineAllocation[0x17] = (pFVar4->DestructionCallback).field_0x27;
            local_68.HeapAllocation = pFVar6;
            if (lVar12 != 0) {
              pFVar13 = &local_68;
              if (pFVar6 != (FFunctionStorage *)0x0) {
                pFVar13 = pFVar6;
              }
              (**(code **)(*(longlong *)pFVar13->InlineAllocation + 0x10))();
            }
            if (local_c8 != (code *)0x0) {
              pppuVar14 = &local_b8;
              if (local_a0 != (undefined ***)0x0) {
                pppuVar14 = local_a0;
              }
              (*(code *)(*pppuVar14)[2])();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_90.SharedReferenceCount.ReferenceController);
            RegisterSampleBuffer(this,param_1);
            goto LAB_14d7b692e;
          }
          iVar9 = *(int *)(lVar12 + 8 + (longlong)iVar9 * 0x10);
        } while (iVar9 != -1);
      }
    }
  }
  if (3 < (byte)LogMediaIOCore._0_1_) {
    if (this_01 != (FRHITexture *)0x0) {
      (**(code **)(this_01->_padding_ + 0x38))(this_01);
    }
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
  }
  if (this_01 != (FRHITexture *)0x0) {
LAB_14d7b692e:
    FRHIResource::Release((FRHIResource *)this_01);
  }
  return;
}

// PreGPUTransferJITR @ 14d7b6c70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMediaIOCorePlayerBase::PreGPUTransferJITR
          (FMediaIOCorePlayerBase *this,TSharedPtr<FMediaIOCoreTextureSampleBase,1> *param_1,
          TSharedPtr<FMediaIOCoreTextureSampleBase,1> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  FMediaIOCoreTextureSampleBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  FRHITexture *this_00;
  ForElementType<FSetElementId> FVar8;
  FRHITexture *this_01;
  TRefCountPtr<FRHITexture> *pTVar9;
  undefined1 local_res8 [8];
  longlong local_28 [2];
  
  lpCriticalSection = &this->TexturesCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->Textures).ArrayNum == 0) {
    local_res8[0] = 0;
    `FMediaIOCorePlayerBase::PreGPUTransferJITR'::__l3::<lambda_1>::operator()(local_res8);
  }
  if (((this->Textures).ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_01 = *(FRHITexture **)(this->Textures).AllocatorInstance.Data;
  if (this_01 == (FRHITexture *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this_01 = (FRHITexture *)0x0;
  }
  else {
    FRHIResource::AddRef((FRHIResource *)this_01);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar7 = ((uint)((ulonglong)this_01 >> 0x14) & 0xffff ^ (uint)((ulonglong)this_01 >> 4)) *
            -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    if (*(int *)&(this->RegisteredTextures).Elements.field_0x8 !=
        *(int *)&(this->RegisteredTextures).Elements.field_0x34) {
      FVar8 = (this->RegisteredTextures).Hash.SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&(this->RegisteredTextures).Hash;
      }
      iVar5 = *(int *)((longlong)FVar8 +
                      (ulonglong)
                      ((this->RegisteredTextures).HashSize - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
      if (iVar5 != -1) {
        lVar1 = *(longlong *)&(this->RegisteredTextures).Elements;
        do {
          if (*(FRHITexture **)(lVar1 + (longlong)iVar5 * 0x10) == this_01) {
            if ((param_2->Object == (FMediaIOCoreTextureSampleBase *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar2 = param_2->Object;
            FRHIResource::AddRef((FRHIResource *)this_01);
            pTVar9 = &pFVar2->Texture;
            this_00 = this_01;
            if (pTVar9 == (TRefCountPtr<FRHITexture> *)local_28) {
LAB_14d7b6e0d:
              FRHIResource::Release((FRHIResource *)this_00);
            }
            else {
              this_00 = pTVar9->Reference;
              pTVar9->Reference = this_01;
              if (this_00 != (FRHITexture *)0x0) goto LAB_14d7b6e0d;
            }
            if ((param_2->Object == (FMediaIOCoreTextureSampleBase *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar2 = param_2->Object;
            if ((param_1->Object == (FMediaIOCoreTextureSampleBase *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar6 = param_1->Object->ExternalBuffer;
            if (pFVar6 == (FScriptContainerElement *)0x0) {
              pFVar6 = (param_1->Object->Buffer).AllocatorInstance.Data;
            }
            pFVar2->ExternalBuffer = pFVar6;
            RegisterSampleBuffer(this,param_2);
            goto LAB_14d7b6ed6;
          }
          iVar5 = *(int *)(lVar1 + 8 + (longlong)iVar5 * 0x10);
        } while (iVar5 != -1);
      }
    }
  }
  if (3 < (byte)LogMediaIOCore._0_1_) {
    if (this_01 != (FRHITexture *)0x0) {
      (**(code **)(this_01->_padding_ + 0x38))(this_01);
    }
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
  }
  if (this_01 != (FRHITexture *)0x0) {
LAB_14d7b6ed6:
    FRHIResource::Release((FRHIResource *)this_01);
  }
  return;
}

// QueryCacheState @ 14d7b8f30

bool __thiscall
FMediaIOCorePlayerBase::QueryCacheState
          (FMediaIOCorePlayerBase *this,EMediaCacheState param_1,TRangeSet<FTimespan> *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  FFrameRate FVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 local_68 [16];
  TEnumAsByte<ERangeBoundTypes::Type> local_58;
  undefined7 uStack_57;
  longlong lStack_50;
  TEnumAsByte<ERangeBoundTypes::Type> local_48;
  undefined7 uStack_47;
  longlong lStack_40;
  TRange<FTimespan> local_38;
  
  if (this->VideoFrameRate != (FFrameRate)0x0) {
    iVar6 = (**(code **)(*(longlong *)this->VideoFrameRate + 0x118))();
    if (0 < iVar6) {
      bVar4 = false;
      if (param_1 == Loaded) {
        FVar1 = this->VideoFrameRate;
        lpCriticalSection = (LPCRITICAL_SECTION)((longlong)FVar1 + 0x68);
        auVar11._0_8_ = (double)*(int *)&this->EventSink;
        auVar11._8_8_ = 0;
        auVar12._0_8_ =
             ((double)*(int *)((longlong)&this->EventSink + 4) / auVar11._0_8_) *
             __real_416312d000000000 + __real_3fe0000000000000;
        auVar12._8_8_ = 0;
        auVar11 = roundpd(auVar11,auVar12,1);
        if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection(lpCriticalSection);
        iVar6 = *(int *)((longlong)FVar1 + 0x98);
        lVar9 = 0;
        if (0 < iVar6) {
          uVar10 = iVar6 - 1;
          uVar7 = 0;
          if ((int)uVar10 < iVar6) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if (uVar7 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
          }
          pTVar2 = *(TReferenceControllerBase<1> **)
                    (*(longlong *)((longlong)FVar1 + 0x90) + 8 + (longlong)(int)uVar10 * 0x10);
          plVar8 = *(longlong **)
                    (*(longlong *)((longlong)FVar1 + 0x90) + (longlong)(int)uVar10 * 0x10);
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (plVar8 != (longlong *)0x0) {
            plVar8 = (longlong *)(**(code **)(*plVar8 + 0x60))(plVar8,local_68);
            lVar9 = *plVar8;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar2);
        }
        LeaveCriticalSection(lpCriticalSection);
        local_58.Value = '\x01';
        local_48.Value = '\0';
        lStack_50 = lVar9;
        iVar6 = (**(code **)(*(longlong *)this->VideoFrameRate + 0x118))();
        local_38.LowerBound._1_7_ = uStack_57;
        local_38.LowerBound.Type.Value = local_58.Value;
        local_38.LowerBound.Value.Ticks = lStack_50;
        lStack_40 = (longlong)((double)iVar6 * (double)(longlong)auVar11._0_8_) + lVar9;
        local_38.UpperBound._1_7_ = uStack_47;
        local_38.UpperBound.Type.Value = local_48.Value;
        local_38.UpperBound.Value.Ticks = lStack_40;
        TRangeSet<FTimespan>::Add(param_2,&local_38);
        bVar4 = true;
      }
      return bVar4;
    }
  }
  return false;
}

// ReadMediaOptions @ 14d7b9210

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FMediaIOCorePlayerBase::ReadMediaOptions(FMediaIOCorePlayerBase *this,IMediaOptions *param_1)

{
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  float fVar5;
  FFrameRate FVar6;
  TIntPoint<int>_u_0 TVar7;
  TConsoleVariableData<int> *pTVar8;
  char cVar9;
  bool bVar10;
  EMediaIOSampleEvaluationType EVar11;
  ETimedDataInputEvaluationType EVar12;
  undefined1 uVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  FString *pFVar18;
  undefined8 *puVar19;
  longlong *plVar20;
  TReferenceControllerBase<1> *pTVar21;
  FOpenColorIOColorConversionSettings *pFVar22;
  TReferenceControllerBase<1> *pTVar23;
  double dVar24;
  FOpenColorIOColorConversionSettings *local_88;
  FSharedReferencer<1> FStack_80;
  undefined4 local_78;
  float fStack_74;
  undefined4 uStack_70;
  float fStack_6c;
  undefined8 local_68;
  TReferenceControllerBase<1> *pTStack_60;
  void *local_58 [2];
  FString local_48;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  
  cVar9 = (**(code **)((longlong)*param_1 + 0x30))
                    (param_1,&TimeSynchronizableMedia::UseTimeSynchronizatioOption,0);
  iVar14 = (**(code **)((longlong)*param_1 + 0x20))(param_1,&TimeSynchronizableMedia::FrameDelay,0);
  this->FrameDelay = iVar14;
  dVar24 = (double)(**(code **)((longlong)*param_1 + 0x28))
                             (param_1,&TimeSynchronizableMedia::TimeDelay,0);
  this->TimeDelay = dVar24;
  bVar10 = (bool)(**(code **)((longlong)*param_1 + 0x30))
                           (param_1,&TimeSynchronizableMedia::AutoDetect,0);
  this->bAutoDetect = bVar10;
  EVar11 = (**(code **)((longlong)*param_1 + 0x20))
                     (param_1,&UE::CaptureCardMediaSource::EvaluationType,1);
  this->EvaluationType = EVar11;
  bVar10 = (bool)(**(code **)((longlong)*param_1 + 0x30))
                           (param_1,&UE::CaptureCardMediaSource::RenderJIT,1);
  this->bJustInTimeRender = bVar10;
  bVar10 = (bool)(**(code **)((longlong)*param_1 + 0x30))
                           (param_1,&UE::CaptureCardMediaSource::Framelock,0);
  this->bFramelock = bVar10;
  iVar14 = (**(code **)((longlong)*param_1 + 0x20))
                     (param_1,&FMediaIOCoreMediaOption::FrameRateNumerator,0x1e);
  iVar15 = (**(code **)((longlong)*param_1 + 0x20))
                     (param_1,&FMediaIOCoreMediaOption::FrameRateDenominator,1);
  FVar6.Denominator = iVar15;
  FVar6.Numerator = iVar14;
  this->VideoFrameRate = FVar6;
  uVar16 = (**(code **)((longlong)*param_1 + 0x20))
                     (param_1,&FMediaIOCoreMediaOption::ResolutionWidth,0x780);
  uVar17 = (**(code **)((longlong)*param_1 + 0x20))
                     (param_1,&FMediaIOCoreMediaOption::ResolutionHeight,0x438);
  TVar7._s_0.Y = uVar17;
  TVar7._s_0.X = uVar16;
  (this->VideoTrackFormat).Dim.field0_0x0 = TVar7;
  fVar5 = (float)(this->VideoFrameRate).Numerator;
  fStack_74 = fVar5 / (float)(this->VideoFrameRate).Denominator;
  local_78 = CONCAT31(local_78._1_3_,1);
  uStack_70 = CONCAT31(uStack_70._1_3_,1);
  *(undefined4 *)&(this->VideoTrackFormat).FrameRates.LowerBound = local_78;
  (this->VideoTrackFormat).FrameRates.LowerBound.Value = fStack_74;
  *(undefined4 *)&(this->VideoTrackFormat).FrameRates.UpperBound = uStack_70;
  (this->VideoTrackFormat).FrameRates.UpperBound.Value = fStack_74;
  (this->VideoTrackFormat).FrameRate = fVar5 / (float)(this->VideoFrameRate).Denominator;
  pcVar1 = *(code **)((longlong)*param_1 + 0x18);
  fStack_6c = fStack_74;
  pFVar18 = ::FString::FString(&local_48,L"1080p30");
  puVar19 = (undefined8 *)
            (*pcVar1)(param_1,local_58,&FMediaIOCoreMediaOption::VideoModeName,pFVar18);
  pFVar18 = &(this->VideoTrackFormat).TypeName;
  pTVar23 = (TReferenceControllerBase<1> *)0x0;
  if (pFVar18 != (FString *)puVar19) {
    pFVar2 = (pFVar18->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar18->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar19;
    *puVar19 = 0;
    (this->VideoTrackFormat).TypeName.Data.ArrayNum = *(int *)(puVar19 + 1);
    (this->VideoTrackFormat).TypeName.Data.ArrayMax = *(int *)((longlong)puVar19 + 0xc);
    puVar19[1] = 0;
  }
  if (local_58[0] != (void *)0x0) {
    FMemory::Free(local_58[0]);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar9 == '\0') {
    if (this->EvaluationType == Timecode) {
      this->EvaluationType = PlatformTime;
    }
    this->bFramelock = false;
  }
  EVar12 = (**(code **)(this->_padding_ + 0x18))(&this->_padding_);
  dVar24 = MediaIOCorePlayerDetail::HighPerformanceClockDelta;
  (this->BaseSettings).EvaluationType = EVar12;
  (this->BaseSettings).FrameRate = this->VideoFrameRate;
  (this->BaseSettings).PlayerTimeOffset = dVar24;
  pTVar8 = MediaIOCorePlayerDetail::CVarMediaIOMaxBufferSize.Ref;
  bVar10 = IsInParallelGameThread();
  if (!bVar10) {
    bVar10 = IsInGameThread();
    if (!bVar10) {
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0");
      if (bVar10) {
        pcVar1 = (code *)swi(3);
        uVar13 = (*pcVar1)();
        return (bool)uVar13;
      }
    }
  }
  (this->BaseSettings).AbsoluteMaxBufferSize = pTVar8->ShadowedValue[0];
  local_68 = 0;
  pTStack_60 = (TReferenceControllerBase<1> *)0x0;
  plVar20 = (longlong *)
            (**(code **)((longlong)*param_1 + 8))
                      (param_1,local_38,&UE::CaptureCardMediaSource::OpenColorIOSettings,&local_68);
  pTVar3 = (TReferenceControllerBase<1> *)plVar20[1];
  lVar4 = *plVar20;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (lVar4 != 0) {
    pTVar21 = ::operator_new(0xb0);
    if (pTVar21 == (TReferenceControllerBase<1> *)0x0) {
      local_88 = ___xmm_00000000000000000000000000000010;
      pFVar22 = (FOpenColorIOColorConversionSettings *)&DAT_00000010;
      FStack_80.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar21->SharedReferenceCount = (atomic<int>)0x1;
      pTVar21->WeakReferenceCount = (atomic<int>)0x1;
      pTVar21->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFOpenColorIOColorConversionSettings___00_SharedPointerInternals__6B_
      ;
      FOpenColorIOColorConversionSettings::FOpenColorIOColorConversionSettings
                ((FOpenColorIOColorConversionSettings *)(pTVar21 + 1),
                 (FOpenColorIOColorConversionSettings *)(lVar4 + 0x18));
      pFVar22 = (FOpenColorIOColorConversionSettings *)(pTVar21 + 1);
      if (pFVar22 == (FOpenColorIOColorConversionSettings *)0x0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L"");
        if (bVar10) {
          pcVar1 = (code *)swi(3);
          uVar13 = (*pcVar1)();
          return (bool)uVar13;
        }
      }
      LOCK();
      pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
      UNLOCK();
      FStack_80.ReferenceController = pTVar21;
      pTVar23 = pTVar21;
      local_88 = pFVar22;
    }
    if (&this->OCIOSettings != (TSharedPtr<FOpenColorIOColorConversionSettings,1> *)&local_88) {
      (this->OCIOSettings).Object = pFVar22;
      local_88 = (FOpenColorIOColorConversionSettings *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->OCIOSettings).SharedReferenceCount,&FStack_80);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_80.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return true;
}

// RegisterSampleBuffer @ 14d7b9cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMediaIOCorePlayerBase::RegisterSampleBuffer
          (FMediaIOCorePlayerBase *this,TSharedPtr<FMediaIOCoreTextureSampleBase,1> *param_1)

{
  FMediaIOCoreTextureSampleBase *pFVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar7;
  uint uVar8;
  code **ppcVar9;
  ForElementType<FSetElementId> FVar10;
  atomic<int> *paVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auStack_c8 [32];
  void *local_a8;
  FScriptContainerElement *local_a0;
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  undefined1 local_68 [40];
  code **local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((param_1->Object == (FMediaIOCoreTextureSampleBase *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar1 = param_1->Object;
  pFVar13 = pFVar1->ExternalBuffer;
  if (pFVar13 == (FScriptContainerElement *)0x0) {
    pFVar13 = (pFVar1->Buffer).AllocatorInstance.Data;
  }
  uVar8 = ((uint)((ulonglong)pFVar13 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar13 >> 4)) *
          -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  if (*(int *)&(this->RegisteredBuffers).Elements.field_0x8 !=
      *(int *)&(this->RegisteredBuffers).Elements.field_0x34) {
    FVar10 = (this->RegisteredBuffers).Hash.SecondaryData;
    if (FVar10 == (ForElementType<FSetElementId>)0x0) {
      FVar10 = (ForElementType<FSetElementId>)&(this->RegisteredBuffers).Hash;
    }
    iVar6 = *(int *)((longlong)FVar10 +
                    (ulonglong)((this->RegisteredBuffers).HashSize - 1U & (uVar8 >> 0x10 ^ uVar8)) *
                    4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&(this->RegisteredBuffers).Elements;
      do {
        if (*(FScriptContainerElement **)(lVar2 + (longlong)iVar6 * 0x10) == pFVar13) {
          if ((byte)LogMediaIOCore._0_1_ < 7) {
            return;
          }
          if ((pFVar1 == (FMediaIOCoreTextureSampleBase *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
          return;
        }
        iVar6 = *(int *)(lVar2 + 8 + (longlong)iVar6 * 0x10);
      } while (iVar6 != -1);
    }
  }
  if ((pFVar1 == (FMediaIOCoreTextureSampleBase *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_a0 = param_1->Object->ExternalBuffer;
  if (local_a0 == (FScriptContainerElement *)0x0) {
    local_a0 = (param_1->Object->Buffer).AllocatorInstance.Data;
  }
  TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>::Emplace<void_*>
            (&this->RegisteredBuffers,&local_a8,(bool *)&local_a0);
  pFVar1 = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    paVar11 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar11 = &pTVar3->SharedReferenceCount;
    LOCK();
    *paVar11 = (atomic<int>)((int)*paVar11 + 1);
    UNLOCK();
  }
  local_98[0] = (code *)0x0;
  local_70 = FMemory::Malloc(0x20,8);
  local_70[2] = (code *)pFVar1;
  *local_70 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FMediaIOCorePlayerBase::RegisterSampleBuffer'::`5'::<lambda_1>,1,1>
                       ::_vftable_;
  local_70[1] = (code *)this;
  local_70[3] = (code *)pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar11 = (atomic<int>)((int)*paVar11 + 1);
    UNLOCK();
  }
  if (local_70 + 1 != (code **)0x0) {
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FMediaIOCorePlayerBase::RegisterSampleBuffer'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FMediaIOCorePlayerBase::RegisterSampleBuffer_::__l5::TSTR_RegisterSampleBuffers660>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_68._0_8_ = local_98[0];
    local_40 = local_70;
    local_70 = (code **)0x0;
    local_68._16_8_ = local_88[0];
    local_68._24_8_ = local_88[1];
    local_68._32_8_ = local_88[2];
    local_98[0] = (code *)0x0;
    local_38 = 2;
    pFVar7 = (FRenderCommandTag *)
             TRenderCommandTag<`FMediaIOCorePlayerBase::RegisterSampleBuffer'::__l5::TSTR_RegisterSampleBuffers660>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_68,pFVar7);
    uVar12 = (ulonglong)local_38;
    if ((2 < uVar12) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar12] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_68._0_8_ != (code *)0x0) {
        ppcVar9 = (code **)(local_68 + 0x10);
        if (local_40 != (code **)0x0) {
          ppcVar9 = local_40;
        }
        (**(code **)(*ppcVar9 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar12])(local_68);
    }
  }
  if (local_98[0] != (code *)0x0) {
    ppcVar9 = local_98 + 2;
    if (local_70 != (code **)0x0) {
      ppcVar9 = local_70;
    }
    (**(code **)(*ppcVar9 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// RemoveChannel @ 14d7ba7f0

void __thiscall
FMediaIOCorePlayerBase::RemoveChannel(FMediaIOCorePlayerBase *this,ITimedDataInputChannel *param_1)

{
  int iVar1;
  FFrameRate FVar2;
  code *pcVar3;
  bool bVar4;
  ITimedDataInputChannel *pIVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ITimedDataInputChannel *local_res10;
  
  local_res10 = param_1;
  if ((((ulonglong)this->VideoFrameRate <= &local_res10) &&
      (&local_res10 <
       (ITimedDataInputChannel **)
       ((longlong)this->VideoFrameRate + (longlong)*(int *)((longlong)&(this->Samples).Ptr + 4) * 8)
      )) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = *(int *)&(this->Samples).Ptr;
  if (iVar1 != 0) {
    iVar9 = 0;
    FVar2 = this->VideoFrameRate;
    bVar4 = *(ITimedDataInputChannel **)FVar2 != local_res10;
    lVar6 = 0;
    pIVar5 = local_res10;
    iVar7 = 0;
    do {
      iVar8 = iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar8 = iVar8 + 1;
        if (iVar1 <= lVar6) break;
      } while (bVar4 == (*(ITimedDataInputChannel **)((longlong)FVar2 + lVar6 * 8) != pIVar5));
      if (bVar4 != false) {
        if (iVar9 != iVar7) {
          memmove((longlong *)((longlong)FVar2 + (longlong)iVar9 * 8),
                  (longlong *)((longlong)FVar2 + (longlong)iVar7 * 8),(longlong)(iVar8 - iVar7) << 3
                 );
          pIVar5 = local_res10;
        }
        iVar9 = iVar9 + (iVar8 - iVar7);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar7 = iVar8;
    } while (lVar6 < iVar1);
    *(int *)&(this->Samples).Ptr = iVar9;
  }
  return;
}

// Seek @ 14d7bb840

bool __thiscall FMediaIOCorePlayerBase::Seek(FMediaIOCorePlayerBase *this,FTimespan *param_1)

{
  return false;
}

// SelectTrack @ 14d7bb860

bool __thiscall
FMediaIOCorePlayerBase::SelectTrack
          (FMediaIOCorePlayerBase *this,EMediaTrackType param_1,int param_2)

{
  char cVar1;
  
  cVar1 = (*(code *)this[-1].Deinterlacer.SharedReferenceCount.ReferenceController[0xf]._padding_)
                    (&this[-1].Deinterlacer.SharedReferenceCount);
  if (((cVar1 != '\0') && (param_2 == 0)) && ((param_1 == Audio || (param_1 == Video)))) {
    return true;
  }
  return false;
}

// SetEvaluationOffsetInSeconds @ 14d7bc5c0

void __thiscall
FMediaIOCorePlayerBase::SetEvaluationOffsetInSeconds(FMediaIOCorePlayerBase *this,double param_1)

{
  undefined1 uVar1;
  code *pcVar2;
  bool bVar3;
  double dVar4;
  
  uVar1 = (undefined1)this->CurrentState;
  if (uVar1 != Closed) {
    if (uVar1 == Error) {
      (this->CurrentTime).Ticks = (long64)param_1;
    }
    else {
      if (uVar1 == Paused) {
        dVar4 = ITimedDataInput::ConvertSecondOffsetInFrameOffset
                          (param_1,(FFrameRate)
                                   (this->AudioTrackFormat).TypeName.Data.AllocatorInstance.Data);
        *(int *)&this->field_0xa4 =
             -(int)((longlong)ROUND(__real_bfe0000000000000 - (dVar4 + dVar4)) >> 1);
        return;
      }
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\Player\\MediaIOCorePlayerBase.cpp"
                         ,0x426,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

// SetEvaluationType @ 14d7bc660

void __thiscall
FMediaIOCorePlayerBase::SetEvaluationType
          (FMediaIOCorePlayerBase *this,ETimedDataInputEvaluationType param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (param_1 == None) {
    bVar2 = (char)this->CurrentState == Closed;
    *(undefined1 *)&this->CurrentState = Closed;
  }
  else if (param_1 == Timecode) {
    bVar2 = (char)this->CurrentState == Paused;
    *(undefined1 *)&this->CurrentState = Paused;
  }
  else {
    if (param_1 != PlatformTime) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\Player\\MediaIOCorePlayerBase.cpp"
                         ,0x3f4,L"");
      if (!bVar2) {
        return;
      }
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar2 = (char)this->CurrentState == Error;
    *(undefined1 *)&this->CurrentState = Error;
  }
  if (bVar2) {
    return;
  }
  uVar3 = (**(code **)(this->_padding_ + 0x18))(this);
  *(undefined1 *)&this->TimeDelay = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00014d7bc6f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)this[-1].TexturesCriticalSection.CriticalSection.Opaque3[2] + 0x100))();
  return;
}

// SetLooping @ 14d7bc7d0

bool __thiscall FMediaIOCorePlayerBase::SetLooping(FMediaIOCorePlayerBase *this,bool param_1)

{
  return false;
}

// SetRate @ 14d7bd130

bool __thiscall FMediaIOCorePlayerBase::SetRate(FMediaIOCorePlayerBase *this,float param_1)

{
  return (float)((uint)(param_1 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
         __real_322bcc77;
}

// SetTrackFormat @ 14d7bd300

bool __thiscall
FMediaIOCorePlayerBase::SetTrackFormat
          (FMediaIOCorePlayerBase *this,EMediaTrackType param_1,int param_2,int param_3)

{
  return false;
}

// SupportsSubFrames @ 14d7bec50

bool __thiscall FMediaIOCorePlayerBase::SupportsSubFrames(FMediaIOCorePlayerBase *this)

{
  return false;
}

// TickFetch @ 14d7bf9d0

void __thiscall
FMediaIOCorePlayerBase::TickFetch(FMediaIOCorePlayerBase *this,FTimespan param_1,FTimespan param_2)

{
  FJITRMediaTextureSamples *pFVar1;
  FMediaIOCoreSamples *pFVar2;
  FTimespan FVar3;
  char cVar4;
  undefined8 *puVar5;
  long64 *plVar6;
  TSharedPtr<FMediaIOCoreTextureSampleBase,1> *pTVar7;
  undefined1 local_res8 [8];
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  if (this->CurrentState == Playing) {
    cVar4 = (**(code **)(this->_padding_ + 0x128))();
    if (cVar4 != '\0') {
      puVar5 = (undefined8 *)(**(code **)(this->_padding_ + 0x138))(this,local_18);
      pFVar1 = (this->JITRSamples).Ptr;
      pTVar7 = &pFVar1->ProxySample;
      if (pTVar7 != (TSharedPtr<FMediaIOCoreTextureSampleBase,1> *)puVar5) {
        pTVar7->Object = (FMediaIOCoreTextureSampleBase *)*puVar5;
        *puVar5 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(pFVar1->ProxySample).SharedReferenceCount,(FSharedReferencer<1> *)(puVar5 + 1))
        ;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    }
  }
  pFVar2 = (this->Samples).Ptr;
  plVar6 = (long64 *)(**(code **)(this->_padding_ + 0x30))(&this->_padding_,local_res8);
  FVar3.Ticks = *plVar6;
  FMediaIOCoreSampleContainer<IMediaTextureSample>::CacheState(&pFVar2->VideoSamples,FVar3);
  FMediaIOCoreSampleContainer<IMediaAudioSample>::CacheState(&pFVar2->AudioSamples,FVar3);
  FMediaIOCoreSampleContainer<IMediaBinarySample>::CacheState(&pFVar2->MetadataSamples,FVar3);
  FMediaIOCoreSampleContainer<IMediaOverlaySample>::CacheState(&pFVar2->SubtitleSamples,FVar3);
  FMediaIOCoreSampleContainer<IMediaOverlaySample>::CacheState(&pFVar2->CaptionSamples,FVar3);
  return;
}

// TickTimeManagement @ 14d7bfad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMediaIOCorePlayerBase::TickTimeManagement(FMediaIOCorePlayerBase *this)

{
  int iVar1;
  undefined1 auVar2 [16];
  FQualifiedFrameTime FVar3;
  bool bVar4;
  longlong lVar5;
  FFrameRate FVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  FFrameRate local_res8;
  FFrameTime local_28;
  int iStack_1c;
  
  FVar3 = FApp::CurrentFrameTime.TypedValue;
  if (this->EvaluationType == Timecode) {
    if (FApp::CurrentFrameTime.bIsSet) {
      iVar1 = FApp::CurrentFrameTime.TypedValue.Rate.Numerator;
      FVar6 = FApp::CurrentFrameTime.TypedValue.Rate;
      iStack_1c = FApp::CurrentFrameTime.TypedValue.Rate.Denominator;
      if (this->bWarnedIncompatibleFrameRate == false) {
        lVar7 = (longlong)(this->VideoFrameRate).Denominator * (longlong)iVar1;
        lVar5 = (longlong)iStack_1c * (longlong)(this->VideoFrameRate).Numerator;
        if ((((lVar7 - lVar5 != 0 && lVar5 <= lVar7) || (lVar5 % lVar7 != 0)) &&
            (bVar4 = FFrameRate::IsMultipleOf(&this->VideoFrameRate,FVar6), !bVar4)) &&
           (this->bWarnedIncompatibleFrameRate = true, 2 < (byte)LogMediaIOCore._0_1_)) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
        }
      }
      local_28 = FVar3.Time;
      if (this->FrameDelay != 0) {
        FFrameRate::TransformTime((FFrameTime)&local_res8,(FFrameRate)local_28,FVar6);
        local_res8.Numerator = local_res8.Numerator - this->FrameDelay;
        local_28 = FFrameRate::TransformTime
                             ((FFrameTime)&local_res8,local_res8,this->VideoFrameRate);
        local_28 = *(FFrameTime *)local_28;
      }
      local_res8.Denominator = (int)local_28.SubFrame;
      auVar8._0_8_ = (double)(float)local_res8.Denominator;
      auVar8._8_8_ = 0;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = (((double)((longlong)iStack_1c * (longlong)local_28.FrameNumber.Value.Value) +
                      (double)iStack_1c * auVar8._0_8_) / (double)iVar1) * __real_416312d000000000 +
                     __real_3fe0000000000000;
      auVar9 = roundpd(auVar8,auVar2,1);
      (this->CurrentTime).Ticks = (longlong)auVar9._0_8_;
      return;
    }
    if (2 < (byte)LogMediaIOCore._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
      return;
    }
  }
  else {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = FApp::CurrentTime;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = ((MediaIOCorePlayerDetail::HighPerformanceClockDelta + (double)FApp::CurrentTime)
                   - this->TimeDelay) * __real_416312d000000000 + __real_3fe0000000000000;
    auVar9 = roundpd(auVar10,auVar9,1);
    (this->CurrentTime).Ticks = (longlong)auVar9._0_8_;
  }
  return;
}

// TransferTexture_RenderThread @ 14d7c1490

void __thiscall
FMediaIOCorePlayerBase::TransferTexture_RenderThread
          (FMediaIOCorePlayerBase *this,FRHICommandListImmediate *param_1,
          TSharedPtr<FMediaIOCoreTextureSampleBase,1> *param_2,
          TSharedPtr<FMediaIOCoreTextureSampleBase,1> *param_3)

{
  atomic<bool> aVar1;
  FMediaIOCoreTextureSampleBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  atomic<unsigned_int> aVar7;
  FRHIBreadcrumbAllocator *pFVar8;
  FRHIBreadcrumbNode *pFVar9;
  FScriptContainerElement *pFVar10;
  FRHIBreadcrumbScope local_58;
  undefined1 local_48;
  char *local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  TGPUStat<TRHIGPUStatNameProvider_STAT_MediaIOPlayer_JITR_TransferTexture> *local_30;
  wchar_t *pwStack_28;
  
  if (param_2->Object == (FMediaIOCoreTextureSampleBase *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  aVar1 = param_2->Object->bIsAwaitingForGPUTransfer;
  cVar5 = (**(code **)(this->_padding_ + 0x120))(this);
  if ((cVar5 == '\0') || (aVar1 == (atomic<bool>)0x0)) {
    if (param_3->Object == (FMediaIOCoreTextureSampleBase *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = param_3->Object;
    if (param_2->Object == (FMediaIOCoreTextureSampleBase *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar10 = param_2->Object->ExternalBuffer;
    if (pFVar10 == (FScriptContainerElement *)0x0) {
      pFVar10 = (param_2->Object->Buffer).AllocatorInstance.Data;
    }
    pFVar2->ExternalBuffer = pFVar10;
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        uStack_38 = 0x554;
        local_40 = 
        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\Player\\MediaIOCorePlayerBase.cpp"
        ;
        local_30 = &GPUStat_STAT_MediaIOPlayer_JITR_TransferTexture;
        pwStack_28 = L"JITR_TransferTexture";
        ::Desc._padding_._0_4_ = 0x52be07c0;
        ::Desc._padding_._4_4_ = 1;
        ::Desc._padding_._0_4_ = 0x554;
        ::Desc._padding_._4_4_ = uStack_34;
        ::Desc._padding_._0_4_ = 0x54d91820;
        ::Desc._padding_._4_4_ = 1;
        ::Desc._padding_._0_4_ = 0x52bd4500;
        ::Desc._padding_._4_4_ = 1;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(``FMediaIOCorePlayerBase::TransferTexture_RenderThread'::__l10::<lambda_1>::
               operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    pFVar8 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
    pFVar9 = FMemStackBase::Alloc(&pFVar8->Inner,0x50,8);
    pFVar9->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar9->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar9->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar9->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar9->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar9->Data = (FRHIBreadcrumbData *)&::Desc;
    pFVar9->Allocator = pFVar8;
    pFVar9->TraceCpuSpecId = 0;
    pFVar9->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar6 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar9->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar9->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar9->ID = uVar6;
    pFVar9->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar9[1]._padding_ = (longlong)&::Desc;
    if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar4) {
        EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
        if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar7 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)
                             CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                             (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                             (uint)::Desc._padding_);
          LOCK();
          ::Desc.TraceCpuSpecId = aVar7;
          UNLOCK();
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
      }
    }
    pFVar9->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
    FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_58,(FRHIComputeCommandList *)param_1,pFVar9);
    local_48 = 1;
    PreGPUTransferJITR(this,param_2,param_3);
    ExecuteGPUTransfer(this,param_3);
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_58);
  }
  return;
}

// UnregisterSampleBuffers @ 14d7c22e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FMediaIOCorePlayerBase::UnregisterSampleBuffers(FMediaIOCorePlayerBase *this)

{
  TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator> *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar4;
  code **ppcVar5;
  ulonglong uVar6;
  undefined1 auStackY_118 [32];
  undefined1 local_e8 [16];
  undefined1 local_d8 [32];
  void *local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  ForElementType<FSetElementId> local_98;
  int local_90;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  undefined1 local_58 [40];
  code **local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_e8._0_8_ = (this->GPUTextureTransfer).Object;
  local_e8._8_8_ = (this->GPUTextureTransfer).SharedReferenceCount.ReferenceController;
  if ((TReferenceControllerBase<1> *)local_e8._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_e8._8_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_e8._8_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_ac = 0x80;
  this_00 = &this->RegisteredBuffers;
  local_d8._0_8_ = (FScriptContainerElement *)0x0;
  local_d8._8_8_ = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = (ForElementType<FSetElementId>)0x0;
  local_90 = 0;
  TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>::operator=
            ((TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator> *)local_d8,this_00);
  local_88[0] = (code *)0x0;
  local_60 = FMemory::Malloc(0x68,8);
  ppcVar5 = local_60 + 1;
  *local_60 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FMediaIOCorePlayerBase::UnregisterSampleBuffers'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  `FMediaIOCorePlayerBase::UnregisterSampleBuffers'::__l2::<lambda_1>::<lambda_1>
            (ppcVar5,(<lambda_1> *)local_e8);
  if (ppcVar5 != (code **)0x0) {
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FMediaIOCorePlayerBase::UnregisterSampleBuffers'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_01 = FRenderCommandList::GetInstanceTLS();
  if (this_01 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FMediaIOCorePlayerBase::UnregisterSampleBuffers_::__l2::TSTR_UnregisterSampleBuffers702>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_02 = FRenderCommandList::GetRenderThread(this_01);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_60 = (code **)0x0;
    local_58._16_8_ = local_78[0];
    local_58._24_8_ = local_78[1];
    local_58._32_8_ = local_78[2];
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar4 = (FRenderCommandTag *)
             TRenderCommandTag<`FMediaIOCorePlayerBase::UnregisterSampleBuffers'::__l2::TSTR_UnregisterSampleBuffers702>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar4);
    uVar6 = (ulonglong)local_28;
    if (2 < uVar6) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        ppcVar5 = (code **)(local_58 + 0x10);
        if (local_30 != (code **)0x0) {
          ppcVar5 = local_30;
        }
        (**(code **)(*ppcVar5 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    ppcVar5 = local_88 + 2;
    if (local_60 != (code **)0x0) {
      ppcVar5 = local_60;
    }
    (**(code **)(*ppcVar5 + 0x10))();
  }
  local_90 = 0;
  if (local_98 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98);
  }
  iVar1 = SUB84(local_d8._8_8_,4);
  local_d8._8_8_ = local_d8._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_d8,0,(int *)(local_d8 + 0xc));
  }
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_b0 = 0;
  if (0x80 < local_ac) {
    local_ac = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10),0);
  }
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d8._0_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_e8._8_8_);
  if (*(int *)&(this->RegisteredBuffers).Elements.field_0x8 !=
      *(int *)&(this->RegisteredBuffers).Elements.field_0x34) {
    TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>::UnhashElements(this_00);
    iVar1 = *(int *)&(this->RegisteredBuffers).Elements.field_0xc;
    *(undefined4 *)&(this->RegisteredBuffers).Elements.field_0x8 = 0;
    if (iVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)this_00,0,
                 (int *)&(this->RegisteredBuffers).Elements.field_0xc);
    }
    *(undefined4 *)&(this->RegisteredBuffers).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->RegisteredBuffers).Elements.field_0x34 = 0;
    *(undefined4 *)&(this->RegisteredBuffers).Elements.field_0x28 = 0;
  }
  return;
}

// UnregisterTextures @ 14d7c25b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FMediaIOCorePlayerBase::UnregisterTextures(FMediaIOCorePlayerBase *this)

{
  int *piVar1;
  TSet<TRefCountPtr<FRHITexture>,DefaultKeyFuncs<TRefCountPtr<FRHITexture>,0>,FDefaultSetAllocator>
  *this_00;
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar2;
  ITextureTransfer *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar8;
  code **ppcVar9;
  ulonglong uVar10;
  undefined1 auStackY_128 [32];
  undefined1 local_e8 [32];
  void *local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  undefined1 local_68 [40];
  code **local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_128;
  pIVar3 = (this->GPUTextureTransfer).Object;
  pTVar4 = (this->GPUTextureTransfer).SharedReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_bc = 0x80;
  this_00 = &this->RegisteredTextures;
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._8_8_ = 0;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = (ForElementType<FSetElementId>)0x0;
  local_a0 = 0;
  TSet<TRefCountPtr<FRHITexture>,DefaultKeyFuncs<TRefCountPtr<FRHITexture>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TRefCountPtr<FRHITexture>,DefaultKeyFuncs<TRefCountPtr<FRHITexture>,0>,FDefaultSetAllocator>
               *)local_e8,this_00);
  local_98[0] = (code *)0x0;
  local_70 = FMemory::Malloc(0x68,8);
  *local_70 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FMediaIOCorePlayerBase::UnregisterTextures'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  ppcVar9 = local_70 + 1;
  *ppcVar9 = (code *)pIVar3;
  local_70[2] = (code *)pTVar4;
  TSet<TRefCountPtr<FRHITexture>,DefaultKeyFuncs<TRefCountPtr<FRHITexture>,0>,FDefaultSetAllocator>
  ::
  TSet<TRefCountPtr<FRHITexture>,DefaultKeyFuncs<TRefCountPtr<FRHITexture>,0>,FDefaultSetAllocator>
            ((TSet<TRefCountPtr<FRHITexture>,DefaultKeyFuncs<TRefCountPtr<FRHITexture>,0>,FDefaultSetAllocator>
              *)(local_70 + 3),
             (TSet<TRefCountPtr<FRHITexture>,DefaultKeyFuncs<TRefCountPtr<FRHITexture>,0>,FDefaultSetAllocator>
              *)local_e8);
  if (ppcVar9 != (code **)0x0) {
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FMediaIOCorePlayerBase::UnregisterTextures'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_01 = FRenderCommandList::GetInstanceTLS();
  if (this_01 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FMediaIOCorePlayerBase::UnregisterTextures_::__l2::TSTR_UnregisterSampleBuffers822>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
  }
  else {
    this_02 = FRenderCommandList::GetRenderThread(this_01);
    local_68._0_8_ = local_98[0];
    local_40 = local_70;
    local_70 = (code **)0x0;
    local_68._16_8_ = local_88[0];
    local_68._24_8_ = local_88[1];
    local_68._32_8_ = local_88[2];
    local_98[0] = (code *)0x0;
    local_38 = 2;
    pFVar8 = (FRenderCommandTag *)
             TRenderCommandTag<`FMediaIOCorePlayerBase::UnregisterTextures'::__l2::TSTR_UnregisterSampleBuffers822>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_68,pFVar8);
    uVar10 = (ulonglong)local_38;
    if (2 < uVar10) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar10] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_68._0_8_ != (code *)0x0) {
        ppcVar9 = (code **)(local_68 + 0x10);
        if (local_40 != (code **)0x0) {
          ppcVar9 = local_40;
        }
        (**(code **)(*ppcVar9 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar10])(local_68);
    }
  }
  if (local_98[0] != (code *)0x0) {
    ppcVar9 = local_98 + 2;
    if (local_70 != (code **)0x0) {
      ppcVar9 = local_70;
    }
    (**(code **)(*ppcVar9 + 0x10))();
  }
  local_a0 = 0;
  if (local_a8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8);
  }
  TSparseArray<TSparseSetElement<TRefCountPtr<FRHITexture>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TRefCountPtr<FRHITexture>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_e8,0,local_e8._8_4_);
  iVar2 = SUB84(local_e8._8_8_,4);
  local_e8._8_8_ = local_e8._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
  }
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_c0 = 0;
  if (0x80 < local_bc) {
    local_bc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e8._0_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (*(int *)&(this->RegisteredTextures).Elements.field_0x8 !=
      *(int *)&(this->RegisteredTextures).Elements.field_0x34) {
    TSet<TRefCountPtr<FRHITexture>,DefaultKeyFuncs<TRefCountPtr<FRHITexture>,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
    TSparseArray<TSparseSetElement<TRefCountPtr<FRHITexture>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this_00->Elements,0,*(int *)&(this->RegisteredTextures).Elements.field_0x8);
    iVar2 = *(int *)&(this->RegisteredTextures).Elements.field_0xc;
    *(undefined4 *)&(this->RegisteredTextures).Elements.field_0x8 = 0;
    if (iVar2 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)this_00,0,
                 (int *)&(this->RegisteredTextures).Elements.field_0xc);
    }
    *(undefined4 *)&(this->RegisteredTextures).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->RegisteredTextures).Elements.field_0x34 = 0;
    *(undefined4 *)&(this->RegisteredTextures).Elements.field_0x28 = 0;
  }
  lpCriticalSection = &this->TexturesCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    piVar1 = &(this->Textures).ArrayMax;
    pFVar5 = (this->Textures).AllocatorInstance.Data;
    iVar2 = (this->Textures).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<TRefCountPtr<FRHITexture>,int>((TRefCountPtr<FRHITexture> *)pFVar5,iVar2);
      (this->Textures).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(this->Textures).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<TRefCountPtr<FRHITexture>,int>((TRefCountPtr<FRHITexture> *)pFVar5,iVar2);
      (this->Textures).ArrayNum = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// operator() @ 150586c10

bool __thiscall `FMediaIOCorePlayerBase::PreGPUTransfer'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4783498952378942291>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4783498952378942291>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150586c50

bool __thiscall
`FMediaIOCorePlayerBase::PreGPUTransferJITR'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4783498952378942330>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4783498952378942330>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

