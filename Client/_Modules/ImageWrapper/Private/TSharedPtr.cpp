// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 6

// ~TSharedPtr<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,1> @ 142669c70

void __thiscall
TSharedPtr<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,1>::
~TSharedPtr<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,1>
          (TSharedPtr<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedPtr<FBmpImageWrapper,1> @ 142669c90

void __thiscall
TSharedPtr<FBmpImageWrapper,1>::~TSharedPtr<FBmpImageWrapper,1>
          (TSharedPtr<FBmpImageWrapper,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedPtr<FImageWrapperBase,1> @ 142669cb0

void __thiscall
TSharedPtr<FImageWrapperBase,1>::~TSharedPtr<FImageWrapperBase,1>
          (TSharedPtr<FImageWrapperBase,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedPtr<FPngImageWrapper,1> @ 142669cd0

void __thiscall
TSharedPtr<FPngImageWrapper,1>::~TSharedPtr<FPngImageWrapper,1>
          (TSharedPtr<FPngImageWrapper,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedPtr<IImageWrapper,1> @ 142669cf0

void __thiscall
TSharedPtr<IImageWrapper,1>::~TSharedPtr<IImageWrapper,1>(TSharedPtr<IImageWrapper,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// operator-> @ 14266b0a0

FImageWrapperBase * __thiscall
TSharedPtr<FImageWrapperBase,1>::operator->(TSharedPtr<FImageWrapperBase,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FImageWrapperBase *pFVar3;
  
  if (this->Object != (FImageWrapperBase *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FImageWrapperBase *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

