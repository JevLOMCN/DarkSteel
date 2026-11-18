// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 4

// FInternalError @ 14ad3abf0

FInternalError * __thiscall
Metasound::FInternalError::FInternalError(FInternalError *this,FString *param_1,int param_2)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res18 [16];
  FText local_28;
  
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_28,L"MetasoundBuildError",L"InternalError",L"Internal error.");
  this->_padding_ = (longlong)&___7FBuildErrorBase_Metasound__6B_;
  this->_padding_ = (longlong)ErrorType;
  this->_padding_ = 0;
  pIVar1 = (pFVar2->TextData).Reference;
  this->_padding_ = (longlong)pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
  }
  *(uint *)&this->_padding_ = pFVar2->Flags;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  this->_padding_ = (longlong)&___7FInternalError_Metasound__6B_;
  ::FString::FString(&this->FileName,param_1);
  this->LineNumber = param_2;
  return this;
}

// ~FInternalError @ 14ad3dd10

void __thiscall Metasound::FInternalError::~FInternalError(FInternalError *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->FileName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FBuildErrorBase::~FBuildErrorBase((FBuildErrorBase *)this);
  return;
}

// GetFileName @ 14ad55d20

FString * __thiscall Metasound::FInternalError::GetFileName(FInternalError *this)

{
  return &this->FileName;
}

// GetLineNumber @ 14ad56000

int __thiscall Metasound::FInternalError::GetLineNumber(FInternalError *this)

{
  return this->LineNumber;
}

