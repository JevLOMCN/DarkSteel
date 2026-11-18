// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// GetPointerTable @ 145325850

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShaderMapPointerTable * __thiscall FShaderMapBase::GetPointerTable(FShaderMapBase *this)

{
  code *pcVar1;
  bool bVar2;
  FShaderMapPointerTable *pFVar3;
  
  if (this->PointerTable != (FShaderMapPointerTable *)0x0) {
    return this->PointerTable;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("PointerTable",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                     ,0x9b4,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FShaderMapPointerTable *)(*pcVar1)();
    return pFVar3;
  }
  return this->PointerTable;
}

