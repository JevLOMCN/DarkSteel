// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 1

// FPinConnectionResponse @ 14dcaea70

FPinConnectionResponse * __thiscall
FPinConnectionResponse::FPinConnectionResponse
          (FPinConnectionResponse *this,ECanCreateConnectionResponse param_1,FText *param_2)

{
  ITextData *pIVar1;
  
  FText::FText(&this->Message,param_2);
  this->bIsFatal = false;
  (this->Response).Value = (uchar)param_1;
  pIVar1 = (param_2->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return this;
}

