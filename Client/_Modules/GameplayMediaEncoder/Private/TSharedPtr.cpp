// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayMediaEncoder
// Functions: 2

// operator= @ 148d20580

TSharedPtr<AVEncoder::FVideoEncoderInput,1> * __thiscall
TSharedPtr<AVEncoder::FVideoEncoderInput,1>::operator=
          (TSharedPtr<AVEncoder::FVideoEncoderInput,1> *this,
          TSharedPtr<AVEncoder::FVideoEncoderInput,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (FVideoEncoderInput *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator-> @ 148d205c0

FVideoEncoderInputFrame * __thiscall
TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>::operator->
          (TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FVideoEncoderInputFrame *pFVar3;
  
  if (this->Object != (FVideoEncoderInputFrame *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FVideoEncoderInputFrame *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

