// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// Create @ 143248000

IHttpManager * __cdecl BuildPatchServices::FHttpManagerFactory::Create(void)

{
  IHttpManager *pIVar1;
  IHttpManager IVar2;
  
  pIVar1 = ::operator_new(0x10);
  if (pIVar1 != (IHttpManager *)0x0) {
    *pIVar1 = (IHttpManager)&___7FHttpManager_BuildPatchServices__6B_;
    IVar2 = (IHttpManager)FHttpModule::Get();
    pIVar1[1] = IVar2;
    return pIVar1;
  }
  return (IHttpManager *)0x0;
}

