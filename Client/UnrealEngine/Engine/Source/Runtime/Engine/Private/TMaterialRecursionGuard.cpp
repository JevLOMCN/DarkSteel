// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// Set @ 147f4fcc0

void __thiscall
TMaterialRecursionGuard<UMaterialInterface>::Set
          (TMaterialRecursionGuard<UMaterialInterface> *this,UMaterialInterface *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Value == (UMaterialInterface *)0x0) {
    this->Value = param_1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Value == nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialRecursionGuard.h"
                     ,0x15,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->Value = param_1;
  return;
}

// Set @ 148b04710

void __thiscall
TMaterialRecursionGuard<UMaterialFunctionInterface>::Set
          (TMaterialRecursionGuard<UMaterialFunctionInterface> *this,
          UMaterialFunctionInterface *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Value == (UMaterialFunctionInterface *)0x0) {
    this->Value = param_1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Value == nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialRecursionGuard.h"
                     ,0x15,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->Value = param_1;
  return;
}

