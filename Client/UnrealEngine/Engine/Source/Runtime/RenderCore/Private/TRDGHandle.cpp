// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// operator> @ 145d91c30

bool __thiscall
TRDGHandle<FRDGPass,unsigned_int>::operator>
          (TRDGHandle<FRDGPass,unsigned_int> *this,TRDGHandle<FRDGPass,unsigned_int> param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Index == 0xffffffff) || (param_1.Index == 0xffffffff)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid() && Other.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphDefinitions.h"
                       ,0x16f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return param_1.Index < this->Index;
}

