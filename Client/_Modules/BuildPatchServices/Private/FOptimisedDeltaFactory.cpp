// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// Create @ 1432c9b90

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

IOptimisedDelta * __cdecl
BuildPatchServices::FOptimisedDeltaFactory::Create
          (FOptimisedDeltaConfiguration *param_1,FOptimisedDeltaDependencies *param_2)

{
  code *pcVar1;
  bool bVar2;
  IOptimisedDelta *pIVar3;
  FOptimisedDelta *pFVar4;
  
  if (param_2->DownloadService == (IDownloadService *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Dependencies.DownloadService != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\OptimisedDelta.cpp"
                       ,0x11f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IOptimisedDelta *)(*pcVar1)();
      return pIVar3;
    }
  }
  pFVar4 = ::operator_new(0x110);
  if (pFVar4 != (FOptimisedDelta *)0x0) {
    pFVar4 = FOptimisedDelta::FOptimisedDelta(pFVar4,param_1,param_2);
    return (IOptimisedDelta *)pFVar4;
  }
  return (IOptimisedDelta *)0x0;
}

