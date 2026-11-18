// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 9

// FAudioSpectrogramViewport @ 14d8b24c0

FAudioSpectrogramViewport * __thiscall
FAudioSpectrogramViewport::FAudioSpectrogramViewport(FAudioSpectrogramViewport *this)

{
  (this->RenderParams).ColorMap = BlackToWhite;
  (this->RenderParams).FrequencyAxisScale = Logarithmic;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAudioSpectrogramViewport__6B_;
  this->_padding_ = 0;
  (this->RenderParams).NumRows = 0;
  (this->RenderParams).NumPixelsPerRow = 0;
  (this->RenderParams).ViewMinFrequency = 0.0;
  (this->RenderParams).ViewMaxFrequency = 0.0;
  (this->RenderParams).ColorMapMinSoundLevel = 0.0;
  (this->RenderParams).ColorMapMaxSoundLevel = 0.0;
  (this->RenderParams).FrequencyAxisPixelBucketMode = Average;
  (this->History).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->History).IndexMask = 0xffffffff;
  (this->History).Front = 0;
  (this->History).AfterBack = 0;
  this->UpdatableTexture = (FSlateUpdatableTexture *)0x0;
  this->UpdatableTexturePixelFormat = PF_Unknown;
  return this;
}

// ~FAudioSpectrogramViewport @ 14d8be940

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAudioSpectrogramViewport::~FAudioSpectrogramViewport(FAudioSpectrogramViewport *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  FSlateApplication *pFVar5;
  
  this->_padding_ = (longlong)&___7FAudioSpectrogramViewport__6B_;
  if (this->UpdatableTexture != (FSlateUpdatableTexture *)0x0) {
    if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
      pFVar5 = FSlateApplication::Get();
      plVar3 = *(longlong **)&pFVar5->field_0x60;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x130))(plVar3,this->UpdatableTexture);
      }
    }
    this->UpdatableTexture = (FSlateUpdatableTexture *)0x0;
    this->UpdatableTexturePixelFormat = PF_Unknown;
  }
  TRingBuffer<FAudioSpectrogramViewport::FHistoryFrameData,TSizedDefaultAllocator<32>_>::
  DestructRange(&this->History,(this->History).Front,(this->History).AfterBack);
  (this->History).Front = 0;
  (this->History).AfterBack = 0;
  TRingBuffer<FAudioSpectrogramViewport::FHistoryFrameData,TSizedDefaultAllocator<32>_>::Reallocate
            (&this->History,0);
  pFVar4 = (this->History).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7ISlateViewport__6B_;
  return;
}

// AddFrame @ 14d8da0c0

void __thiscall
FAudioSpectrogramViewport::AddFrame
          (FAudioSpectrogramViewport *this,FAudioSpectrogramFrameData *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (this->RenderParams).NumRows;
  if (iVar1 != 0) {
    if ((this->History).AfterBack - (this->History).Front == iVar1) {
      TRingBuffer<FAudioSpectrogramViewport::FHistoryFrameData,TSizedDefaultAllocator<32>_>::
      PopFront(&this->History,1);
    }
    uVar2 = TRingBuffer<FAudioSpectrogramViewport::FHistoryFrameData,TSizedDefaultAllocator<32>_>::
            NormalizeCapacity(&this->History,((this->History).AfterBack - (this->History).Front) + 1
                             );
    if ((this->History).IndexMask + 1 < uVar2) {
      TRingBuffer<FAudioSpectrogramViewport::FHistoryFrameData,TSizedDefaultAllocator<32>_>::
      Reallocate(&this->History,uVar2);
    }
    uVar2 = (this->History).AfterBack;
    (this->History).AfterBack = uVar2 + 1;
    FHistoryFrameData::FHistoryFrameData
              ((FHistoryFrameData *)
               ((this->History).AllocatorInstance.Data +
               (ulonglong)(uVar2 & (this->History).IndexMask) * 0x38),param_1,
               (this->RenderParams).FrequencyAxisPixelBucketMode);
    UpdateTextureData(this,false);
  }
  return;
}

// AllowScaling @ 14d8da530

bool __thiscall FAudioSpectrogramViewport::AllowScaling(FAudioSpectrogramViewport *this)

{
  return true;
}

// GetSize @ 14d935a10

TIntPoint<int> __thiscall FAudioSpectrogramViewport::GetSize(FAudioSpectrogramViewport *this)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  TIntPoint<int>_u_0 in_RDX;
  
  plVar3 = (longlong *)(**(code **)(this->_padding_ + 0x18))();
  if (plVar3 != (longlong *)0x0) {
    iVar1 = (**(code **)(*plVar3 + 8))(plVar3);
    uVar2 = (**(code **)*plVar3)(plVar3);
    *(undefined4 *)in_RDX = uVar2;
    *(int *)((longlong)in_RDX + 4) = iVar1;
    return (TIntPoint<int>)in_RDX;
  }
  *(TIntPoint<int>_u_0 *)in_RDX =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  return (TIntPoint<int>)in_RDX;
}

// GetViewportRenderTargetTexture @ 14d938460

FSlateShaderResource * __thiscall
FAudioSpectrogramViewport::GetViewportRenderTargetTexture(FAudioSpectrogramViewport *this)

{
  FSlateShaderResource *pFVar1;
  
  if (this->UpdatableTexture != (FSlateUpdatableTexture *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d93846c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar1 = (FSlateShaderResource *)(**(code **)((longlong)*this->UpdatableTexture + 8))();
    return pFVar1;
  }
  return (FSlateShaderResource *)0x0;
}

// RequiresVsync @ 14d964520

bool __thiscall FAudioSpectrogramViewport::RequiresVsync(FAudioSpectrogramViewport *this)

{
  return false;
}

// SetRenderParams @ 14d96bdb0

void __thiscall
FAudioSpectrogramViewport::SetRenderParams
          (FAudioSpectrogramViewport *this,FAudioSpectrogramViewportRenderParams *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  EAudioSpectrogramFrequencyAxisScale EVar4;
  EAudioSpectrogramFrequencyAxisPixelBucketMode EVar5;
  undefined1 uVar6;
  int iVar7;
  
  if (((((((this->RenderParams).NumRows == param_1->NumRows) &&
         ((this->RenderParams).NumPixelsPerRow == param_1->NumPixelsPerRow)) &&
        (param_1->ViewMinFrequency == (this->RenderParams).ViewMinFrequency)) &&
       ((param_1->ViewMaxFrequency == (this->RenderParams).ViewMaxFrequency &&
        (param_1->ColorMapMinSoundLevel == (this->RenderParams).ColorMapMinSoundLevel)))) &&
      ((param_1->ColorMapMaxSoundLevel == (this->RenderParams).ColorMapMaxSoundLevel &&
       (((this->RenderParams).ColorMap == param_1->ColorMap &&
        ((this->RenderParams).FrequencyAxisScale == param_1->FrequencyAxisScale)))))) &&
     ((this->RenderParams).FrequencyAxisPixelBucketMode == param_1->FrequencyAxisPixelBucketMode)) {
    return;
  }
  iVar1 = param_1->NumPixelsPerRow;
  fVar2 = param_1->ViewMinFrequency;
  fVar3 = param_1->ViewMaxFrequency;
  (this->RenderParams).NumRows = param_1->NumRows;
  (this->RenderParams).NumPixelsPerRow = iVar1;
  (this->RenderParams).ViewMinFrequency = fVar2;
  (this->RenderParams).ViewMaxFrequency = fVar3;
  fVar2 = param_1->ColorMapMaxSoundLevel;
  (this->RenderParams).ColorMapMinSoundLevel = param_1->ColorMapMinSoundLevel;
  (this->RenderParams).ColorMapMaxSoundLevel = fVar2;
  EVar4 = param_1->FrequencyAxisScale;
  EVar5 = param_1->FrequencyAxisPixelBucketMode;
  uVar6 = param_1->field_0x1b;
  (this->RenderParams).ColorMap = param_1->ColorMap;
  (this->RenderParams).FrequencyAxisScale = EVar4;
  (this->RenderParams).FrequencyAxisPixelBucketMode = EVar5;
  (this->RenderParams).field_0x1b = uVar6;
  iVar1 = (this->RenderParams).NumRows;
  iVar7 = (this->History).AfterBack - (this->History).Front;
  if (iVar1 < iVar7) {
    TRingBuffer<FAudioSpectrogramViewport::FHistoryFrameData,TSizedDefaultAllocator<32>_>::PopFront
              (&this->History,iVar7 - iVar1);
  }
  UpdateTextureData(this,true);
  return;
}

// UpdateTextureData @ 14d97aa60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAudioSpectrogramViewport::UpdateTextureData(FAudioSpectrogramViewport *this,bool param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  FScriptContainerElement *_Src;
  code *pcVar5;
  EPixelFormat EVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FSlateApplication *pFVar10;
  FSlateUpdatableTexture *pFVar11;
  FSlateTextureData *pFVar12;
  FSlateTextureData *pFVar13;
  FHistoryFrameData *this_00;
  int iVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  ulonglong local_60;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_58;
  
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId199,"FAudioSpectrogramViewport::UpdateTextureData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSpectrogramViewport.cpp"
               ,199);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId199);
  }
  uVar1 = (this->RenderParams).NumRows;
  uVar2 = (this->RenderParams).NumPixelsPerRow;
  if (this->UpdatableTexture == (FSlateUpdatableTexture *)0x0) {
    pFVar10 = FSlateApplication::Get();
    plVar4 = *(longlong **)&pFVar10->field_0x60;
    if (plVar4 != (longlong *)0x0) {
      pFVar11 = (FSlateUpdatableTexture *)(**(code **)(*plVar4 + 0x120))(plVar4,uVar2,uVar1);
      this->UpdatableTexture = pFVar11;
      EVar6 = (**(code **)(*plVar4 + 0x1a8))(plVar4);
      this->UpdatableTexturePixelFormat = EVar6;
    }
    if (this->UpdatableTexture == (FSlateUpdatableTexture *)0x0) goto LAB_14d97ae5f;
  }
  pFVar13 = (FSlateTextureData *)0x0;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  if ((this->UpdatableTexturePixelFormat == PF_Unknown) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("UpdatableTexturePixelFormat != PF_Unknown",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSpectrogramViewport.cpp"
                         ,0xdd,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = GPixelFormats[this->UpdatableTexturePixelFormat].BlockBytes;
  iVar14 = uVar3 * uVar2;
  iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar14 * uVar1,&local_58.AllocatorInstance,&local_58.ArrayNum,
                     &local_58.ArrayMax);
  memset(local_58.AllocatorInstance.Data + iVar8,0,(longlong)(int)(iVar14 * uVar1));
  if ((uVar3 == 4) && (this->UpdatableTexturePixelFormat == PF_B8G8R8A8)) {
    if (((int)uVar1 < (int)((this->History).AfterBack - (this->History).Front)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("History.Num() <= Height",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSpectrogramViewport.cpp"
                           ,0xe7,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = ((this->History).Front - (this->History).AfterBack) + uVar1;
    if (iVar8 < (int)uVar1) {
      uVar16 = iVar8 * iVar14;
      local_60 = (ulonglong)(uVar1 - iVar8);
      pFVar12 = pFVar13;
      do {
        uVar15 = (uint)pFVar12;
        uVar9 = 0;
        if ((int)uVar15 < (int)((this->History).AfterBack - (this->History).Front)) {
          uVar9 = ~uVar15 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < Num())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                               ,0x3e3,
                               L"RingBuffer index out of bounds: %i from a RingBuffer of size %i"),
           bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        this_00 = (FHistoryFrameData *)
                  ((this->History).AllocatorInstance.Data +
                  (ulonglong)((this->History).Front + uVar15 & (this->History).IndexMask) * 0x38);
        uVar9 = (this_00->CachedPixels).ArrayNum;
        if (((int)uVar9 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((uVar9 != uVar2) || (param_1)) {
          FHistoryFrameData::UpdateCachedPixels(this_00,&this->RenderParams);
        }
        _Src = (this_00->CachedPixels).AllocatorInstance.Data;
        uVar9 = (this_00->CachedPixels).ArrayNum;
        if (((int)uVar9 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((uVar9 != uVar2) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedPixels.Num() == Width",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSpectrogramViewport.cpp"
                               ,0xf5,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar9 = 0;
        if ((int)uVar16 < local_58.ArrayNum) {
          uVar9 = ~uVar16 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        memcpy(local_58.AllocatorInstance.Data + (int)uVar16,_Src,(longlong)iVar14);
        pFVar12 = (FSlateTextureData *)(ulonglong)(uVar15 + 1);
        uVar16 = uVar16 + iVar14;
        local_60 = local_60 - 1;
      } while (local_60 != 0);
    }
  }
  else {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2421021207320067868>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSpectrogramViewport.cpp"
                       ,0xe4,
                       "BytesPerPixel == sizeof(FColor) && UpdatableTexturePixelFormat == PF_B8G8R8A8"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar12 = ::operator_new(0x20);
  if (pFVar12 != (FSlateTextureData *)0x0) {
    pFVar13 = FSlateTextureData::FSlateTextureData(pFVar12,uVar2,uVar1,uVar3,&local_58);
  }
  (**(code **)((longlong)*this->UpdatableTexture + 0x40))(this->UpdatableTexture,pFVar13);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
LAB_14d97ae5f:
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

