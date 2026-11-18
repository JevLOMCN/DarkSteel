// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InstallBundleManager
// Functions: 1

// DestroyObject @ 148bc7d40

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FInstallManagerBundleReport,1>::DestroyObject
          (TIntrusiveReferenceController<FInstallManagerBundleReport,1> *this)

{
  void *pvVar1;
  
  DestructItems<FInstallBundleSourceReport,int>
            (*(FInstallBundleSourceReport **)((this->ObjectStorage).Pad + 0x30),
             *(int *)((this->ObjectStorage).Pad + 0x38));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x30);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)&this->ObjectStorage);
  return;
}

