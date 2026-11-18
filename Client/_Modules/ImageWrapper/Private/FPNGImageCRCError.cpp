// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 3

// FPNGImageCRCError @ 142664d30

FPNGImageCRCError * __thiscall
FPNGImageCRCError::FPNGImageCRCError(FPNGImageCRCError *this,FPNGImageCRCError *param_1)

{
  ::FString::FString(&this->ErrorText,&param_1->ErrorText);
  return this;
}

// FPNGImageCRCError @ 142664d50

FPNGImageCRCError * __thiscall
FPNGImageCRCError::FPNGImageCRCError(FPNGImageCRCError *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  
  (this->ErrorText).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ErrorText).Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ErrorText).Data.ArrayNum = (param_1->Data).ArrayNum;
  (this->ErrorText).Data.ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// ~FPNGImageCRCError @ 14266a2f0

void __thiscall FPNGImageCRCError::~FPNGImageCRCError(FPNGImageCRCError *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ErrorText).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

