// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PacketHandler
// Functions: 1

// operator-> @ 14463dba0

HandlerComponent * __thiscall
TSharedPtr<HandlerComponent,1>::operator->(TSharedPtr<HandlerComponent,1> *this)

{
  code *pcVar1;
  bool bVar2;
  HandlerComponent *pHVar3;
  
  if (this->Object != (HandlerComponent *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pHVar3 = (HandlerComponent *)(*pcVar1)();
    return pHVar3;
  }
  return this->Object;
}

