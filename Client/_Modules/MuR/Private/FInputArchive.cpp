// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 3

// ~FInputArchive @ 14aa93b40

void __thiscall UE::Mutable::Private::FInputArchive::~FInputArchive(FInputArchive *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FInputArchive_Private_Mutable_UE__6B_;
  DestructItems<TSharedPtr<void,1>,int>
            ((TSharedPtr<void,1> *)(this->History).AllocatorInstance.Data,(this->History).ArrayNum);
  pFVar1 = (this->History).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// FInputArchive @ 14ab5ea00

FInputArchive * __thiscall
UE::Mutable::Private::FInputArchive::FInputArchive(FInputArchive *this,FInputStream *param_1)

{
  this->Stream = param_1;
  this->_padding_ = (longlong)&___7FInputArchive_Private_Mutable_UE__6B_;
  (this->History).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->History).ArrayNum = 0;
  (this->History).ArrayMax = 0;
  return this;
}

// NewImageProxy @ 14ab81c90

Ptr<UE::Mutable::Private::TResourceProxy<UE::Mutable::Private::FImage>_> __thiscall
UE::Mutable::Private::FInputArchive::NewImageProxy(FInputArchive *this)

{
  TResourceProxy<UE::Mutable::Private::FImage> *in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return (Ptr<UE::Mutable::Private::TResourceProxy<UE::Mutable::Private::FImage>_>)in_RDX;
}

