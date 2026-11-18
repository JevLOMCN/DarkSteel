// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// <lambda_invoker_cdecl> @ 14160c060

void __cdecl
``FGenericPlatformOutputDevices::GetLog'::__l2::FLogOutputDeviceInitializer::
FLogOutputDeviceInitializer'::__l5::<lambda_1>::<lambda_invoker_cdecl>(wchar_t *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&FGenericPlatformOutputDevices::LogFilenameLock);
  wcsncpy(FGenericPlatformOutputDevices::CachedAbsoluteFilename,param_1,0x3ff);
  FGenericPlatformOutputDevices::CachedAbsoluteFilename[0x3ff] = L'\0';
                    /* WARNING: Could not recover jumptable at 0x00014160c0a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&FGenericPlatformOutputDevices::LogFilenameLock);
  return;
}

