// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// InternalLogNANDiagnosticMessage @ 14187a570

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEAsserts_Private::InternalLogNANDiagnosticMessage(wchar_t *param_1)

{
  ulong64 *puVar1;
  undefined1 local_res10 [24];
  undefined1 auStack_2058 [32];
  undefined8 local_2038;
  undefined1 *local_2030;
  undefined1 local_2028 [8192];
  ulonglong local_28;
  undefined8 uStack_18;
  
  uStack_18 = 0x14187a590;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2058;
  puVar1 = __local_stdio_printf_options();
  local_2038 = 0;
  local_2030 = local_res10;
  __stdio_common_vswprintf(*puVar1,local_2028,0x1000,param_1);
  if (1 < (byte)LogCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
  }
  return;
}

