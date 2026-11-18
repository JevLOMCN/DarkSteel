// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 17

// GetBuffer @ 14ea4b1b0

void * __thiscall FImgMediaTextureSample::GetBuffer(FImgMediaTextureSample *this)

{
  return (this->Frame).Data.Object;
}

// GetChromaticAdapationMethod @ 14ea4b4e0

EChromaticAdaptationMethod __thiscall
FImgMediaTextureSample::GetChromaticAdapationMethod(FImgMediaTextureSample *this)

{
  FNativeMediaSourceColorSettings *pFVar1;
  
  pFVar1 = (this->SourceColorSettings).Object;
  if (pFVar1 != (FNativeMediaSourceColorSettings *)0x0) {
    return (EChromaticAdaptationMethod)pFVar1->ChromaticAdaptationMethod;
  }
  return Bradford;
}

// GetDim @ 14ea4ba20

TIntPoint<int> __thiscall FImgMediaTextureSample::GetDim(FImgMediaTextureSample *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TIntPoint<int>_u_0 in_RDX;
  
  lpCriticalSection = &(this->Frame).InfoCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    *(TIntPoint<int>_u_0 *)in_RDX = (this->Frame).Info.Dim.field0_0x0;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return (TIntPoint<int>)in_RDX;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetDuration @ 14ea4baa0

FTimespan __thiscall FImgMediaTextureSample::GetDuration(FImgMediaTextureSample *this)

{
  long64 *in_RDX;
  
  *in_RDX = (this->Duration).Ticks;
  return (FTimespan)(long64)in_RDX;
}

// GetEncodingType @ 14ea4bac0

EEncoding __thiscall FImgMediaTextureSample::GetEncodingType(FImgMediaTextureSample *this)

{
  FNativeMediaSourceColorSettings *pFVar1;
  char cVar2;
  atomic<UE::Color::EEncoding> aVar3;
  
  pFVar1 = (this->SourceColorSettings).Object;
  if ((pFVar1 == (FNativeMediaSourceColorSettings *)0x0) ||
     (aVar3 = pFVar1->EncodingOverride, aVar3 == (atomic<UE::Color::EEncoding>)0x0)) {
    cVar2 = (**(code **)(this->_padding_ + 0x80))();
    aVar3 = (atomic<UE::Color::EEncoding>)((cVar2 != '\0') + Linear);
  }
  return (EEncoding)aVar3;
}

// GetFormat @ 14ea4bb00

EMediaTextureSampleFormat __thiscall FImgMediaTextureSample::GetFormat(FImgMediaTextureSample *this)

{
  return (EMediaTextureSampleFormat)(this->Frame).Format;
}

// GetMediaTextureSampleConverter @ 14ea4d530

IMediaTextureSampleConverter * __thiscall
FImgMediaTextureSample::GetMediaTextureSampleConverter(FImgMediaTextureSample *this)

{
  return (this->Frame).SampleConverter.Object;
}

// GetNumMips @ 14ea4d8b0

uchar __thiscall FImgMediaTextureSample::GetNumMips(FImgMediaTextureSample *this)

{
  return this->NumMipMaps;
}

// GetOutputDim @ 14ea4dd20

TIntPoint<int> __thiscall FImgMediaTextureSample::GetOutputDim(FImgMediaTextureSample *this)

{
  TIntPoint<int>_u_0 in_RDX;
  
  *(TIntPoint<int>_u_0 *)in_RDX = (this->OutputDim).field0_0x0;
  return (TIntPoint<int>)in_RDX;
}

// GetSourceColorSpace @ 14ea4e990

FColorSpace * __thiscall FImgMediaTextureSample::GetSourceColorSpace(FImgMediaTextureSample *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FNativeMediaSourceColorSettings *pFVar1;
  FColorSpace *pFVar2;
  
  pFVar2 = UE::Color::FColorSpace::GetWorking();
  pFVar1 = (this->SourceColorSettings).Object;
  if (pFVar1 != (FNativeMediaSourceColorSettings *)0x0) {
    lpCriticalSection = &pFVar1->ColorSpaceCriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((pFVar1->ColorSpaceOverride).bIsSet != false) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return &(pFVar1->ColorSpaceOverride).TypedValue;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return pFVar2;
}

// GetStride @ 14ea4ec00

uint __thiscall FImgMediaTextureSample::GetStride(FImgMediaTextureSample *this)

{
  return (uint)(this->Frame).Stride;
}

// GetTexture @ 14ea4ed30

FRHITexture * __thiscall FImgMediaTextureSample::GetTexture(FImgMediaTextureSample *this)

{
  return (FRHITexture *)0x0;
}

// GetTilingDescription @ 14ea4ed60

FMediaTextureTilingDescription * __thiscall
FImgMediaTextureSample::GetTilingDescription
          (FImgMediaTextureSample *this,FMediaTextureTilingDescription *__return_storage_ptr__)

{
  int iVar1;
  TIntPoint<int>_u_0 TVar2;
  
  iVar1 = (this->TilingDesc).TileBorderSize;
  TVar2 = (this->TilingDesc).TileSize.field0_0x0;
  (__return_storage_ptr__->TileNum).field0_0x0 = (this->TilingDesc).TileNum.field0_0x0;
  (__return_storage_ptr__->TileSize).field0_0x0 = TVar2;
  __return_storage_ptr__->TileBorderSize = iVar1;
  return __return_storage_ptr__;
}

// GetTime @ 14ea4eda0

FMediaTimeStamp * __thiscall
FImgMediaTextureSample::GetTime
          (FImgMediaTextureSample *this,FMediaTimeStamp *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (this->Time).SequenceIndex;
  iVar2 = (this->Time).LoopIndex;
  (__return_storage_ptr__->Time).Ticks = (this->Time).Time.Ticks;
  __return_storage_ptr__->SequenceIndex = iVar1;
  __return_storage_ptr__->LoopIndex = iVar2;
  return __return_storage_ptr__;
}

// Initialize @ 14ea51650

void __thiscall
FImgMediaTextureSample::Initialize
          (FImgMediaTextureSample *this,FImgMediaFrame *param_1,TIntPoint<int> *param_2,
          FMediaTimeStamp *param_3,FTimespan param_4,uchar param_5,
          FMediaTextureTilingDescription *param_6,
          TSharedPtr<FNativeMediaSourceColorSettings,1> *param_7)

{
  FImgMediaFrame *this_00;
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FNativeMediaSourceColorSettings *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  long64 lVar5;
  TIntPoint<int>_u_0 TVar6;
  int iVar7;
  
  this_00 = &this->Frame;
  (this->Duration).Ticks = param_4.Ticks;
  if (this_00 != param_1) {
    FImgMediaFrame::~FImgMediaFrame(this_00);
    FImgMediaFrame::FImgMediaFrame(this_00,param_1);
  }
  lVar5 = (param_3->Time).Ticks;
  iVar1 = param_3->SequenceIndex;
  iVar7 = param_3->LoopIndex;
  (this->OutputDim).field0_0x0 = param_2->field0_0x0;
  this->NumMipMaps = param_5;
  (this->Time).Time.Ticks = lVar5;
  (this->Time).SequenceIndex = iVar1;
  (this->Time).LoopIndex = iVar7;
  TVar6 = (param_6->TileSize).field0_0x0;
  iVar1 = param_6->TileBorderSize;
  (this->TilingDesc).TileNum.field0_0x0 = (param_6->TileNum).field0_0x0;
  (this->TilingDesc).TileSize.field0_0x0 = TVar6;
  (this->TilingDesc).TileBorderSize = iVar1;
  pTVar2 = (param_7->SharedReferenceCount).ReferenceController;
  pFVar3 = param_7->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->SourceColorSettings).SharedReferenceCount.ReferenceController;
  (this->SourceColorSettings).Object = pFVar3;
  (this->SourceColorSettings).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (((this_00->Data).Object == (void *)0x0) &&
     ((this->Frame).SampleConverter.Object == (IMediaTextureSampleConverter *)0x0)) {
    this->NumMipMaps = '\x01';
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_7->SharedReferenceCount).ReferenceController);
  return;
}

// IsCacheable @ 14ea519d0

bool __thiscall FImgMediaTextureSample::IsCacheable(FImgMediaTextureSample *this)

{
  return true;
}

// IsOutputSrgb @ 14ea51c20

bool __thiscall FImgMediaTextureSample::IsOutputSrgb(FImgMediaTextureSample *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<UE::Color::EEncoding> aVar1;
  bool bVar2;
  FNativeMediaSourceColorSettings *pFVar3;
  
  pFVar3 = (this->SourceColorSettings).Object;
  if ((pFVar3 != (FNativeMediaSourceColorSettings *)0x0) &&
     (aVar1 = pFVar3->EncodingOverride, aVar1 != (atomic<UE::Color::EEncoding>)0x0)) {
    return aVar1 == (atomic<UE::Color::EEncoding>)0x2;
  }
  lpCriticalSection = &(this->Frame).InfoCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    bVar2 = (this->Frame).Info.Srgb;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

