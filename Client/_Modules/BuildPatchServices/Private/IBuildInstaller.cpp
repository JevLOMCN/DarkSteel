// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 3

// ~IBuildInstaller @ 1431bf7d0

void __thiscall IBuildInstaller::~IBuildInstaller(IBuildInstaller *this)

{
  *this = (IBuildInstaller)&___7IBuildInstaller__6B_;
  return;
}

// GetDebugText @ 1431deab0

void __thiscall
IBuildInstaller::GetDebugText
          (IBuildInstaller *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// GetInitialDownloadSize @ 1431e0bc0

long64 __thiscall IBuildInstaller::GetInitialDownloadSize(IBuildInstaller *this)

{
  long64 lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001431e0bc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (**(code **)((longlong)*this + 0x70))();
  return lVar1;
}

