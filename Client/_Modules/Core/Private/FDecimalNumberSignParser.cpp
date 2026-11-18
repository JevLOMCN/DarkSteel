// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// ~FDecimalNumberSignParser @ 1416d85a0

void __thiscall
FastDecimalFormat::Internal::FDecimalNumberSignParser::~FDecimalNumberSignParser
          (FDecimalNumberSignParser *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ASCII_AlwaysSigned).GeneratedPositiveSuffixString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ASCII_AlwaysSigned).GeneratedPositivePrefixString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ASCII_AlwaysSigned).GeneratedNegativeSuffixString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ASCII_AlwaysSigned).GeneratedNegativePrefixString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ASCII_DefaultSigned).GeneratedPositiveSuffixString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ASCII_DefaultSigned).GeneratedPositivePrefixString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ASCII_DefaultSigned).GeneratedNegativeSuffixString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ASCII_DefaultSigned).GeneratedNegativePrefixString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Localized_AlwaysSigned).GeneratedPositiveSuffixString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Localized_AlwaysSigned).GeneratedPositivePrefixString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Localized_AlwaysSigned).GeneratedNegativeSuffixString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Localized_AlwaysSigned).GeneratedNegativePrefixString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Localized_DefaultSigned).GeneratedPositiveSuffixString.Data.AllocatorInstance.Data
  ;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Localized_DefaultSigned).GeneratedPositivePrefixString.Data.AllocatorInstance.Data
  ;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Localized_DefaultSigned).GeneratedNegativeSuffixString.Data.AllocatorInstance.Data
  ;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Localized_DefaultSigned).GeneratedNegativePrefixString.Data.AllocatorInstance.Data
  ;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ParseLeadingSign @ 141707cf0

bool __thiscall
FastDecimalFormat::Internal::FDecimalNumberSignParser::ParseLeadingSign
          (FDecimalNumberSignParser *this,wchar_t **param_1,bool *param_2)

{
  bool bVar1;
  
  bVar1 = ParseSigningStringImpl
                    (param_1,param_2,(this->Localized_DefaultSigned).PositivePrefixStringPtr,false);
  if (!bVar1) {
    bVar1 = ParseSigningStringImpl
                      (param_1,param_2,(this->Localized_DefaultSigned).NegativePrefixStringPtr,true)
    ;
    if (!bVar1) {
      bVar1 = ParseSigningStringImpl
                        (param_1,param_2,(this->Localized_AlwaysSigned).PositivePrefixStringPtr,
                         false);
      if (!bVar1) {
        bVar1 = ParseSigningStringImpl
                          (param_1,param_2,(this->Localized_AlwaysSigned).NegativePrefixStringPtr,
                           true);
        if (!bVar1) {
          bVar1 = ParseSigningStringImpl
                            (param_1,param_2,(this->ASCII_DefaultSigned).PositivePrefixStringPtr,
                             false);
          if (!bVar1) {
            bVar1 = ParseSigningStringImpl
                              (param_1,param_2,(this->ASCII_DefaultSigned).NegativePrefixStringPtr,
                               true);
            if (!bVar1) {
              bVar1 = ParseSigningStringImpl
                                (param_1,param_2,(this->ASCII_AlwaysSigned).PositivePrefixStringPtr,
                                 false);
              if (!bVar1) {
                bVar1 = ParseSigningStringImpl
                                  (param_1,param_2,
                                   (this->ASCII_AlwaysSigned).NegativePrefixStringPtr,true);
                if (!bVar1) {
                  return false;
                }
              }
            }
          }
        }
      }
    }
  }
  return true;
}

// ParseSigningStringImpl @ 141707e00

bool __cdecl
FastDecimalFormat::Internal::FDecimalNumberSignParser::ParseSigningStringImpl
          (wchar_t **param_1,bool *param_2,FString *param_3,bool param_4)

{
  int iVar1;
  int iVar2;
  wchar_t *_Str2;
  
  iVar1 = (param_3->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  if (0 < iVar2) {
    if (iVar1 == 0) {
      _Str2 = L"";
    }
    else {
      _Str2 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
    }
    iVar1 = wcsncmp(*param_1,_Str2,(longlong)iVar2);
    if (iVar1 == 0) {
      *param_2 = (bool)(*param_2 | param_4);
      iVar2 = (param_3->Data).ArrayNum;
      iVar1 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar1 = 0;
      }
      *param_1 = *param_1 + iVar1;
      return true;
    }
  }
  return false;
}

// ParseTrailingSign @ 141707ea0

bool __thiscall
FastDecimalFormat::Internal::FDecimalNumberSignParser::ParseTrailingSign
          (FDecimalNumberSignParser *this,wchar_t **param_1,bool *param_2)

{
  bool bVar1;
  
  bVar1 = ParseSigningStringImpl
                    (param_1,param_2,(this->Localized_DefaultSigned).PositiveSuffixStringPtr,false);
  if (!bVar1) {
    bVar1 = ParseSigningStringImpl
                      (param_1,param_2,(this->Localized_DefaultSigned).NegativeSuffixStringPtr,true)
    ;
    if (!bVar1) {
      bVar1 = ParseSigningStringImpl
                        (param_1,param_2,(this->Localized_AlwaysSigned).PositiveSuffixStringPtr,
                         false);
      if (!bVar1) {
        bVar1 = ParseSigningStringImpl
                          (param_1,param_2,(this->Localized_AlwaysSigned).NegativeSuffixStringPtr,
                           true);
        if (!bVar1) {
          bVar1 = ParseSigningStringImpl
                            (param_1,param_2,(this->ASCII_DefaultSigned).PositiveSuffixStringPtr,
                             false);
          if (!bVar1) {
            bVar1 = ParseSigningStringImpl
                              (param_1,param_2,(this->ASCII_DefaultSigned).NegativeSuffixStringPtr,
                               true);
            if (!bVar1) {
              bVar1 = ParseSigningStringImpl
                                (param_1,param_2,(this->ASCII_AlwaysSigned).PositiveSuffixStringPtr,
                                 false);
              if (!bVar1) {
                bVar1 = ParseSigningStringImpl
                                  (param_1,param_2,
                                   (this->ASCII_AlwaysSigned).NegativeSuffixStringPtr,true);
                if (!bVar1) {
                  return false;
                }
              }
            }
          }
        }
      }
    }
  }
  return true;
}

