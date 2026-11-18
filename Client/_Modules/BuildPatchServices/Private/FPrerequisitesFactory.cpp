// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// Create @ 1432c9c50

IPrerequisites * __cdecl
BuildPatchServices::FPrerequisitesFactory::Create
          (IMachineConfig *param_1,IInstallerAnalytics *param_2,IInstallerError *param_3,
          IFileSystem *param_4,IPlatform *param_5)

{
  IPrerequisites *pIVar1;
  
  pIVar1 = ::operator_new(0x30);
  if (pIVar1 != (IPrerequisites *)0x0) {
    pIVar1[1] = (IPrerequisites)param_1;
    *pIVar1 = (IPrerequisites)&___7FPrerequisites_BuildPatchServices__6B_;
    pIVar1[5] = (IPrerequisites)param_5;
    pIVar1[2] = (IPrerequisites)param_2;
    pIVar1[3] = (IPrerequisites)param_3;
    pIVar1[4] = (IPrerequisites)param_4;
  }
  return pIVar1;
}

