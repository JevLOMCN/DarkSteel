// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 6

// ExecElevatedProcess @ 1431dab60

bool __thiscall
BuildPatchServices::TPlatform<FWindowsPlatformProcess,FWindowsPlatformMisc>::ExecElevatedProcess
          (TPlatform<FWindowsPlatformProcess,FWindowsPlatformMisc> *this,wchar_t *param_1,
          wchar_t *param_2,int *param_3)

{
  bool bVar1;
  
  bVar1 = FWindowsPlatformProcess::ExecElevatedProcess(param_1,param_2,param_3);
  return bVar1;
}

// GetLastError @ 1431e0fb0

uint __thiscall
BuildPatchServices::TPlatform<FWindowsPlatformProcess,FWindowsPlatformMisc>::GetLastError
          (TPlatform<FWindowsPlatformProcess,FWindowsPlatformMisc> *this)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141aaaf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = ::GetLastError();
  return DVar1;
}

// Sleep @ 1431fabc0

void __thiscall
BuildPatchServices::TPlatform<FWindowsPlatformProcess,FWindowsPlatformMisc>::Sleep
          (TPlatform<FWindowsPlatformProcess,FWindowsPlatformMisc> *this,float param_1)

{
  FWindowsPlatformProcess::SleepNoStats(param_1);
  return;
}

// ExecElevatedProcess @ 1432cfa30

bool __thiscall
BuildPatchServices::
TPlatform<BuildPatchServices::FMockPlatformProcess,BuildPatchServices::FMockPlatformMisc>::
ExecElevatedProcess(TPlatform<BuildPatchServices::FMockPlatformProcess,BuildPatchServices::FMockPlatformMisc>
                    *this,wchar_t *param_1,wchar_t *param_2,int *param_3)

{
  *param_3 = 0;
  return true;
}

// GetLastError @ 1432d7090

uint __thiscall
BuildPatchServices::
TPlatform<BuildPatchServices::FMockPlatformProcess,BuildPatchServices::FMockPlatformMisc>::
GetLastError(TPlatform<BuildPatchServices::FMockPlatformProcess,BuildPatchServices::FMockPlatformMisc>
             *this)

{
  return 0;
}

// Sleep @ 1432ee310

void __thiscall
BuildPatchServices::
TPlatform<BuildPatchServices::FMockPlatformProcess,BuildPatchServices::FMockPlatformMisc>::Sleep
          (TPlatform<BuildPatchServices::FMockPlatformProcess,BuildPatchServices::FMockPlatformMisc>
           *this,float param_1)

{
  return;
}

