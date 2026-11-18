// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 12

// DestroyObject @ 1426069c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPngImageWrapper,1>::DestroyObject
          (TIntrusiveReferenceController<FPngImageWrapper,1> *this)

{
  FPngImageWrapper::~FPngImageWrapper((FPngImageWrapper *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142606a80

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FJpegImageWrapper,1>::DestroyObject
          (TIntrusiveReferenceController<FJpegImageWrapper,1> *this)

{
  FJpegImageWrapper::~FJpegImageWrapper((FJpegImageWrapper *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142606ad0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FUEJpegImageWrapper,1>::DestroyObject
          (TIntrusiveReferenceController<FUEJpegImageWrapper,1> *this)

{
  void *pvVar1;
  
  *(undefined ***)(this->ObjectStorage).Pad = &___7FUEJpegImageWrapper__6B_;
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x58);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x28);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7IImageWrapper__6B_;
  return;
}

// DestroyObject @ 142606b70

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FBmpImageWrapper,1>::DestroyObject
          (TIntrusiveReferenceController<FBmpImageWrapper,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x58);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x28);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7IImageWrapper__6B_;
  return;
}

// DestroyObject @ 142606c00

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FIcoImageWrapper,1>::DestroyObject
          (TIntrusiveReferenceController<FIcoImageWrapper,1> *this)

{
  void *pvVar1;
  
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x70));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x58);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x28);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7IImageWrapper__6B_;
  return;
}

// DestroyObject @ 142606ca0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FExrImageWrapper,1>::DestroyObject
          (TIntrusiveReferenceController<FExrImageWrapper,1> *this)

{
  FExrImageWrapper::~FExrImageWrapper((FExrImageWrapper *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142606cf0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FIcnsImageWrapper,1>::DestroyObject
          (TIntrusiveReferenceController<FIcnsImageWrapper,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x58);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x28);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7IImageWrapper__6B_;
  return;
}

// DestroyObject @ 142606d80

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FTgaImageWrapper,1>::DestroyObject
          (TIntrusiveReferenceController<FTgaImageWrapper,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x58);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x28);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7IImageWrapper__6B_;
  return;
}

// DestroyObject @ 142606e10

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FHdrImageWrapper,1>::DestroyObject
          (TIntrusiveReferenceController<FHdrImageWrapper,1> *this)

{
  longlong *plVar1;
  void *pvVar2;
  
  plVar1 = *(longlong **)((this->ObjectStorage).Pad + 0x68);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  pvVar2 = *(void **)((this->ObjectStorage).Pad + 0x40);
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)((this->ObjectStorage).Pad + 0x28);
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7IImageWrapper__6B_;
  return;
}

// DestroyObject @ 142606ea0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::ImageWrapper::Private::FTiffImageWrapper,1>::DestroyObject
          (TIntrusiveReferenceController<UE::ImageWrapper::Private::FTiffImageWrapper,1> *this)

{
  UE::ImageWrapper::Private::FTiffImageWrapper::~FTiffImageWrapper
            ((FTiffImageWrapper *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142606ef0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDdsImageWrapper,1>::DestroyObject
          (TIntrusiveReferenceController<FDdsImageWrapper,1> *this)

{
  FDdsImageWrapper::~FDdsImageWrapper((FDdsImageWrapper *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142689f60

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,1>::DestroyObject
          (TIntrusiveReferenceController<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  return;
}

