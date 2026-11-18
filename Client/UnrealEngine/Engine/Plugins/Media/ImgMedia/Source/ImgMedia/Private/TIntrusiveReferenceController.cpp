// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 11

// DestroyObject @ 14ea2fda0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FImgMediaPlayer,1>::DestroyObject
          (TIntrusiveReferenceController<FImgMediaPlayer,1> *this)

{
  FImgMediaPlayer::~FImgMediaPlayer((FImgMediaPlayer *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ea2fdf0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FImgMediaScheduler,1>::DestroyObject
          (TIntrusiveReferenceController<FImgMediaScheduler,1> *this)

{
  FImgMediaScheduler::~FImgMediaScheduler((FImgMediaScheduler *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ea2fe40

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FImgMediaGlobalCache,1>::DestroyObject
          (TIntrusiveReferenceController<FImgMediaGlobalCache,1> *this)

{
  FImgMediaGlobalCache::~FImgMediaGlobalCache((FImgMediaGlobalCache *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ea46d80

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FImgMediaFrame,1>::DestroyObject
          (TIntrusiveReferenceController<FImgMediaFrame,1> *this)

{
  FImgMediaFrame::~FImgMediaFrame((FImgMediaFrame *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ea46d90

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNativeMediaSourceColorSettings,1>::
DestroyObject(TIntrusiveReferenceController<FNativeMediaSourceColorSettings,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)((this->ObjectStorage).Pad + 0x188));
  *(undefined ***)(this->ObjectStorage).Pad = &___7FDataContainer_IMediaOptions__6B_;
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014ea46dd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 14ea46df0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDdsImgMediaReader,1>::DestroyObject
          (TIntrusiveReferenceController<FDdsImgMediaReader,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)(this->ObjectStorage).Pad = &___7FDdsImgMediaReader__6B_;
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
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
  *(undefined ***)(this->ObjectStorage).Pad = &___7IImgMediaReader__6B_;
  return;
}

// DestroyObject @ 14ea46e40

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FExrImgMediaReaderGpu,1>::DestroyObject
          (TIntrusiveReferenceController<FExrImgMediaReaderGpu,1> *this)

{
  FExrImgMediaReaderGpu::~FExrImgMediaReaderGpu((FExrImgMediaReaderGpu *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ea46e50

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FExrMediaTextureSampleConverter,1>::
DestroyObject(TIntrusiveReferenceController<FExrMediaTextureSampleConverter,1> *this)

{
  FExrMediaTextureSampleConverter::~FExrMediaTextureSampleConverter
            ((FExrMediaTextureSampleConverter *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ea46e60

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FImgMediaLoader,1>::DestroyObject
          (TIntrusiveReferenceController<FImgMediaLoader,1> *this)

{
  FImgMediaLoader::~FImgMediaLoader((FImgMediaLoader *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ea46e70

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FImgMediaMipMapInfo,1>::DestroyObject
          (TIntrusiveReferenceController<FImgMediaMipMapInfo,1> *this)

{
  FImgMediaMipMapInfo::~FImgMediaMipMapInfo((FImgMediaMipMapInfo *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ea46e80

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FImgMediaTextureSample,1>::DestroyObject
          (TIntrusiveReferenceController<FImgMediaTextureSample,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x1a8));
  FImgMediaFrame::~FImgMediaFrame((FImgMediaFrame *)((this->ObjectStorage).Pad + 0x10));
  *(undefined ***)(this->ObjectStorage).Pad = &___7IMediaTextureSample__6B_;
  return;
}

