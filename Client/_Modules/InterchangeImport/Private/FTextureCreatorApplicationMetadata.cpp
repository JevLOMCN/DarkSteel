// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 2

// ~FTextureCreatorApplicationMetadata @ 14e7097b0

void __thiscall
UE::Interchange::FTextureCreatorApplicationMetadata::~FTextureCreatorApplicationMetadata
          (FTextureCreatorApplicationMetadata *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ApplicationVersion).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ApplicationName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ApplicationVendor).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 14e70a150

FTextureCreatorApplicationMetadata * __thiscall
UE::Interchange::FTextureCreatorApplicationMetadata::operator=
          (FTextureCreatorApplicationMetadata *this,FTextureCreatorApplicationMetadata *param_1)

{
  ::FString::operator=(&this->ApplicationVendor,&param_1->ApplicationVendor);
  ::FString::operator=(&this->ApplicationName,&param_1->ApplicationName);
  ::FString::operator=(&this->ApplicationVersion,&param_1->ApplicationVersion);
  return this;
}

