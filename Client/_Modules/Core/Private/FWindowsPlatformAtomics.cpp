// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// HandleAtomicsFailure @ 141ab0c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FWindowsPlatformAtomics::HandleAtomicsFailure(wchar_t *param_1)

{
  ulong64 *puVar1;
  undefined1 local_res10 [24];
  undefined1 auStack_858 [32];
  undefined8 local_838;
  undefined1 *local_830;
  undefined1 local_828 [2048];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_858;
  puVar1 = __local_stdio_printf_options();
  local_838 = 0;
  local_830 = local_res10;
  __stdio_common_vswprintf(*puVar1,local_828,0x400,param_1);
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
  return;
}

