// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UniversalObjectLocator
// Functions: 3

// FParseStringResult @ 144345a40

FParseStringResult * __thiscall
UE::UniversalObjectLocator::FParseStringResult::FParseStringResult
          (FParseStringResult *this,FParseStringResult *param_1)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  (this->ErrorMessage).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_1->ErrorMessage).TextData.Reference;
  (this->ErrorMessage).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->ErrorMessage).Flags = (param_1->ErrorMessage).Flags;
  this->NumCharsParsed = param_1->NumCharsParsed;
  this->bSuccess = param_1->bSuccess;
  return this;
}

// Failure @ 144347970

FParseStringResult * __thiscall
UE::UniversalObjectLocator::FParseStringResult::Failure(FParseStringResult *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  bool bVar3;
  undefined1 local_res8 [8];
  
  bVar3 = FText::IsEmpty(param_1);
  if (!bVar3) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->ErrorMessage).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->ErrorMessage).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->ErrorMessage).Flags = param_1->Flags;
  }
  this->bSuccess = false;
  return this;
}

// Progress @ 144349360

TStringView<wchar_t> * __thiscall
UE::UniversalObjectLocator::FParseStringResult::Progress
          (FParseStringResult *this,TStringView<wchar_t> *__return_storage_ptr__,
          TStringView<wchar_t> *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  TStringView<wchar_t> *pTVar5;
  int iVar6;
  
  if (param_1->Size < param_2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumToProgress <= CurrentString.Len()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocatorStringParams.cpp"
                       ,0xb,L"Attempting to progress past the end of the current string!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TStringView<wchar_t> *)(*pcVar2)();
      return pTVar5;
    }
  }
  this->NumCharsParsed = this->NumCharsParsed + param_2;
  iVar1 = param_1->Size;
  iVar3 = iVar1;
  if (iVar1 - param_2 < iVar1) {
    iVar3 = iVar1 - param_2;
  }
  iVar6 = 0;
  if (0 < iVar3) {
    iVar6 = iVar3;
  }
  __return_storage_ptr__->Size = iVar6;
  __return_storage_ptr__->DataPtr = param_1->DataPtr + ((longlong)iVar1 - (longlong)iVar6);
  return __return_storage_ptr__;
}

