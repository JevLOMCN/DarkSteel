// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 4

// FImgMediaFrame @ 14ea380a0

FImgMediaFrame * __thiscall
FImgMediaFrame::FImgMediaFrame(FImgMediaFrame *this,FImgMediaFrame *param_1)

{
  FImgMediaMipTiles *lpCriticalSection;
  FImgMediaMipTiles *lpCriticalSection_00;
  FWindowsRecursiveMutex *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  IMediaTextureSampleConverter *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  (this->Data).Object = (param_1->Data).Object;
  pTVar2 = (param_1->Data).SharedReferenceCount.ReferenceController;
  (this->Data).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  lpCriticalSection = &this->MipTilesPresent;
  lpCriticalSection_00 = &param_1->MipTilesPresent;
  this->Format = param_1->Format;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)lpCriticalSection,4000);
  *(undefined8 *)&(this->MipTilesPresent).MipTiles = 0;
  *(undefined8 *)&(this->MipTilesPresent).MipTiles.field_0x8 = 0;
  *(undefined8 *)&(this->MipTilesPresent).MipTiles.field_0x20 = 0;
  *(undefined4 *)&(this->MipTilesPresent).MipTiles.field_0x28 = 0;
  *(undefined4 *)&(this->MipTilesPresent).MipTiles.field_0x2c = 0x80;
  *(undefined4 *)&(this->MipTilesPresent).MipTiles.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MipTilesPresent).MipTiles.field_0x34 = 0;
  *(undefined8 *)&(this->MipTilesPresent).MipTiles.field_0x40 = 0;
  *(undefined4 *)&(this->MipTilesPresent).MipTiles.field_0x48 = 0;
  if (lpCriticalSection_00 != (FImgMediaMipTiles *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
    if (lpCriticalSection != (FImgMediaMipTiles *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
                   *)&(this->MipTilesPresent).MipTiles,
                  (TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
                   *)&(param_1->MipTilesPresent).MipTiles);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      this->NumTilesRead = param_1->NumTilesRead;
      this->Stride = param_1->Stride;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->InfoCriticalSection,4000);
      (this->Info).CompressionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->Info).CompressionName.Data.ArrayNum = 0;
      (this->Info).CompressionName.Data.ArrayMax = 0;
      (this->Info).Dim.field0_0x0 = (TIntPoint<int>_u_0)0x0;
      (this->Info).FormatName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->Info).FormatName.Data.ArrayNum = 0;
      (this->Info).FormatName.Data.ArrayMax = 0;
      (this->Info).FrameRate.Numerator = 0;
      (this->Info).FrameRate.Denominator = 0;
      *(undefined8 *)&(this->Info).Srgb = 0;
      (this->Info).UncompressedSize = 0;
      (this->Info).NumChannels = 0;
      *(undefined8 *)&(this->Info).bHasTiles = 0;
      *(undefined8 *)((longlong)&(this->Info).NumTiles.field0_0x0 + 4) = 0;
      *(undefined8 *)((longlong)&(this->Info).TileDimensions.field0_0x0 + 4) = 0;
      *(undefined8 *)&(this->Info).NumMipLevels = 0;
      (this->Info).FrameRate.Numerator = 60000;
      (this->Info).FrameRate.Denominator = 1;
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)&this->SampleConverterCriticalSection,4000);
      pFVar1 = &param_1->SampleConverterCriticalSection;
      (this->SampleConverter).Object = (IMediaTextureSampleConverter *)0x0;
      (this->SampleConverter).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
        pTVar2 = (param_1->SampleConverter).SharedReferenceCount.ReferenceController;
        pIVar3 = (param_1->SampleConverter).Object;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar4 = (this->SampleConverter).SharedReferenceCount.ReferenceController;
        (this->SampleConverter).Object = pIVar3;
        (this->SampleConverter).SharedReferenceCount.ReferenceController = pTVar2;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
        pFVar1 = &param_1->InfoCriticalSection;
        if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
          FImgMediaFrameInfo::operator=(&this->Info,&param_1->Info);
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
          return this;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// FImgMediaFrame @ 14ea382a0

FImgMediaFrame * __thiscall FImgMediaFrame::FImgMediaFrame(FImgMediaFrame *this)

{
  (this->Data).Object = (void *)0x0;
  (this->Data).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->Format = (atomic<EMediaTextureSampleFormat>)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->MipTilesPresent,4000);
  *(undefined8 *)&(this->MipTilesPresent).MipTiles = 0;
  *(undefined8 *)&(this->MipTilesPresent).MipTiles.field_0x8 = 0;
  *(undefined8 *)&(this->MipTilesPresent).MipTiles.field_0x20 = 0;
  *(undefined4 *)&(this->MipTilesPresent).MipTiles.field_0x28 = 0;
  *(undefined4 *)&(this->MipTilesPresent).MipTiles.field_0x2c = 0x80;
  *(undefined4 *)&(this->MipTilesPresent).MipTiles.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MipTilesPresent).MipTiles.field_0x34 = 0;
  *(undefined8 *)&(this->MipTilesPresent).MipTiles.field_0x40 = 0;
  *(undefined4 *)&(this->MipTilesPresent).MipTiles.field_0x48 = 0;
  this->NumTilesRead = (atomic<int>)0x0;
  this->Stride = (atomic<unsigned_int>)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->InfoCriticalSection,4000);
  (this->Info).CompressionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Info).CompressionName.Data.ArrayNum = 0;
  (this->Info).CompressionName.Data.ArrayMax = 0;
  (this->Info).FormatName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Info).FormatName.Data.ArrayNum = 0;
  (this->Info).FormatName.Data.ArrayMax = 0;
  (this->Info).FrameRate.Numerator = 60000;
  (this->Info).FrameRate.Denominator = 1;
  (this->Info).Srgb = false;
  (this->Info).UncompressedSize = 0;
  (this->Info).NumChannels = 0;
  (this->Info).bHasTiles = false;
  (this->Info).TileBorder = 0;
  (this->Info).NumMipLevels = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->SampleConverterCriticalSection,4000);
  (this->SampleConverter).Object = (IMediaTextureSampleConverter *)0x0;
  (this->SampleConverter).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~FImgMediaFrame @ 14ea3a820

void __thiscall FImgMediaFrame::~FImgMediaFrame(FImgMediaFrame *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SampleConverter).SharedReferenceCount.ReferenceController);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SampleConverterCriticalSection);
  pFVar1 = (this->Info).FormatName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Info).CompressionName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->InfoCriticalSection);
  *(undefined4 *)&(this->MipTilesPresent).MipTiles.field_0x48 = 0;
  pvVar2 = *(void **)&(this->MipTilesPresent).MipTiles.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FImgMediaTileSelection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FImgMediaTileSelection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FImgMediaTileSelection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->MipTilesPresent).MipTiles);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->MipTilesPresent);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Data).SharedReferenceCount.ReferenceController);
  return;
}

// SetInfo @ 14ea5bc90

void __thiscall FImgMediaFrame::SetInfo(FImgMediaFrame *this,FImgMediaFrameInfo *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  
  lpCriticalSection = &this->InfoCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FImgMediaFrameInfo::operator=(&this->Info,param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar1 = (param_1->FormatName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->CompressionName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

