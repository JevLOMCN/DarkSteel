// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FLogScopedVerbosityOverride @ 1417a3500

/* WARNING: Enum "Type": Some values do not have unique names */

FLogScopedVerbosityOverride * __thiscall
FLogScopedVerbosityOverride::FLogScopedVerbosityOverride
          (FLogScopedVerbosityOverride *this,FLogCategoryBase *param_1,Type param_2)

{
  code *pcVar1;
  bool bVar2;
  FLogScopedVerbosityOverride *pFVar3;
  
  this->SavedCategory = param_1;
  if (param_1 == (FLogCategoryBase *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SavedCategory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\LogScopedVerbosityOverride.cpp"
                       ,0xb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FLogScopedVerbosityOverride *)(*pcVar1)();
      return pFVar3;
    }
  }
  this->SavedVerbosity = this->SavedCategory->Verbosity;
  FLogCategoryBase::SetVerbosity(this->SavedCategory,param_2);
  return this;
}

// ~FLogScopedVerbosityOverride @ 1417a7760

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLogScopedVerbosityOverride::~FLogScopedVerbosityOverride(FLogScopedVerbosityOverride *this)

{
  FLogCategoryBase::SetVerbosity(this->SavedCategory,this->SavedVerbosity);
  return;
}

