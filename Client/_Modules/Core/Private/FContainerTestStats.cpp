// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// Add @ 1415a8770

int __thiscall _anon_0E4C616A::FContainerTestStats::Add(FContainerTestStats *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (0x40 < (int)((longlong)this->End + (-4 - (longlong)this) >> 2)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num() < 65",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\ContainersTest.cpp"
                       ,0x50,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = this->NextId;
  this->NextId = iVar3 + 1;
  *this->End = iVar3;
  this->End = this->End + 1;
  return iVar3;
}

