// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// As<Chaos::Softs::FFleshThreadingProxy> @ 143a25770

FFleshThreadingProxy * __thiscall
Chaos::Softs::FThreadingProxy::As<Chaos::Softs::FFleshThreadingProxy>(FThreadingProxy *this)

{
  bool bVar1;
  FFleshThreadingProxy *pFVar2;
  FName local_res8 [4];
  
  ::FName::FName(local_res8,"Flesh");
  if ((local_res8[0].ComparisonIndex.Value != (this->TypeName).ComparisonIndex.Value) ||
     (bVar1 = true, local_res8[0].Number != (this->TypeName).Number)) {
    bVar1 = false;
  }
  pFVar2 = (FFleshThreadingProxy *)0x0;
  if (bVar1) {
    pFVar2 = (FFleshThreadingProxy *)this;
  }
  return pFVar2;
}

