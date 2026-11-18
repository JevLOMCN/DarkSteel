// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// Create @ 1432c9530

IInstallerAnalytics * __cdecl
BuildPatchServices::FInstallerAnalyticsFactory::Create(IAnalyticsProvider *param_1)

{
  FInstallerAnalytics *pFVar1;
  IInstallerAnalytics *pIVar2;
  
  if (param_1 == (IAnalyticsProvider *)0x0) {
    pIVar2 = ::operator_new(8);
    if (pIVar2 != (IInstallerAnalytics *)0x0) {
      *pIVar2 = (IInstallerAnalytics)&___7FNullInstallerAnalytics_BuildPatchServices__6B_;
      return pIVar2;
    }
  }
  else {
    pFVar1 = ::operator_new(0x68);
    if (pFVar1 != (FInstallerAnalytics *)0x0) {
      pFVar1 = FInstallerAnalytics::FInstallerAnalytics(pFVar1,param_1);
      return (IInstallerAnalytics *)pFVar1;
    }
  }
  return (IInstallerAnalytics *)0x0;
}

