// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// FLogScopedCategoryAndVerbosityOverride @ 1417a3450

/* WARNING: Enum "Type": Some values do not have unique names */

FLogScopedCategoryAndVerbosityOverride * __thiscall
FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
          (FLogScopedCategoryAndVerbosityOverride *this,FName param_1,Type param_2)

{
  uint uVar1;
  Type *pTVar2;
  Type *lpTlsValue;
  
  lpTlsValue = (Type *)0x0;
  (this->Backup).Verbosity = Log;
  (this->Backup).Category.ComparisonIndex = 0;
  (this->Backup).Category.Number = 0;
  uVar1 = GetOverrideTLSID();
  pTVar2 = TlsGetValue(uVar1);
  if (pTVar2 == (Type *)0x0) {
    pTVar2 = ::operator_new(0xc);
    if (pTVar2 != (Type *)0x0) {
      *pTVar2 = Log;
      pTVar2[4] = NoLogging;
      pTVar2[5] = NoLogging;
      pTVar2[6] = NoLogging;
      pTVar2[7] = NoLogging;
      pTVar2[8] = NoLogging;
      pTVar2[9] = NoLogging;
      pTVar2[10] = NoLogging;
      pTVar2[0xb] = NoLogging;
      lpTlsValue = pTVar2;
    }
    uVar1 = GetOverrideTLSID();
    TlsSetValue(uVar1,lpTlsValue);
    pTVar2 = lpTlsValue;
  }
  (this->Backup).Verbosity = *pTVar2;
  (this->Backup).Category = *(FName *)(pTVar2 + 4);
  *pTVar2 = param_2;
  *(FName *)(pTVar2 + 4) = param_1;
  return this;
}

// ~FLogScopedCategoryAndVerbosityOverride @ 1417a76e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLogScopedCategoryAndVerbosityOverride::~FLogScopedCategoryAndVerbosityOverride
          (FLogScopedCategoryAndVerbosityOverride *this)

{
  uint uVar1;
  Type *lpTlsValue;
  
  uVar1 = GetOverrideTLSID();
  lpTlsValue = TlsGetValue(uVar1);
  if (lpTlsValue == (Type *)0x0) {
    lpTlsValue = ::operator_new(0xc);
    if (lpTlsValue == (Type *)0x0) {
      lpTlsValue = (Type *)0x0;
    }
    else {
      *lpTlsValue = Log;
      lpTlsValue[4] = NoLogging;
      lpTlsValue[5] = NoLogging;
      lpTlsValue[6] = NoLogging;
      lpTlsValue[7] = NoLogging;
      lpTlsValue[8] = NoLogging;
      lpTlsValue[9] = NoLogging;
      lpTlsValue[10] = NoLogging;
      lpTlsValue[0xb] = NoLogging;
    }
    uVar1 = GetOverrideTLSID();
    TlsSetValue(uVar1,lpTlsValue);
  }
  *lpTlsValue = (this->Backup).Verbosity;
  *(FName *)(lpTlsValue + 4) = (this->Backup).Category;
  return;
}

// GetTLSCurrent @ 1417d8220

/* WARNING: Enum "Type": Some values do not have unique names */

FOverride * __cdecl FLogScopedCategoryAndVerbosityOverride::GetTLSCurrent(void)

{
  uint uVar1;
  FOverride *lpTlsValue;
  
  uVar1 = GetOverrideTLSID();
  lpTlsValue = TlsGetValue(uVar1);
  if (lpTlsValue == (FOverride *)0x0) {
    lpTlsValue = ::operator_new(0xc);
    if (lpTlsValue == (FOverride *)0x0) {
      lpTlsValue = (FOverride *)0x0;
    }
    else {
      lpTlsValue->Verbosity = Log;
      (lpTlsValue->Category).ComparisonIndex = 0;
      (lpTlsValue->Category).Number = 0;
    }
    uVar1 = GetOverrideTLSID();
    TlsSetValue(uVar1,lpTlsValue);
  }
  return lpTlsValue;
}

