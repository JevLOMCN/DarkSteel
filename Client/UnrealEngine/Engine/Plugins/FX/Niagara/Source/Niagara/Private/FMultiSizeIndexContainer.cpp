// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// GetIndexBuffer @ 149235fd0

FRawStaticIndexBuffer16or32Interface * __thiscall
FMultiSizeIndexContainer::GetIndexBuffer(FMultiSizeIndexContainer *this)

{
  code *pcVar1;
  bool bVar2;
  FRawStaticIndexBuffer16or32Interface *pFVar3;
  
  if (this->IndexBuffer != (FRawStaticIndexBuffer16or32Interface *)0x0) {
    return this->IndexBuffer;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IndexBuffer != 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                     ,0x56,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FRawStaticIndexBuffer16or32Interface *)(*pcVar1)();
    return pFVar3;
  }
  return this->IndexBuffer;
}

