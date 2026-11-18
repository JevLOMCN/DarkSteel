// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// Convert<wchar_t,wchar_t> @ 145e76d40

wchar_t * __cdecl
FGenericPlatformString::Convert<wchar_t,wchar_t>
          (wchar_t *param_1,int param_2,wchar_t *param_3,int param_4)

{
  void *pvVar1;
  
  if (param_2 < param_4) {
    return (wchar_t *)0x0;
  }
  pvVar1 = Memcpy(param_1,param_3,(longlong)param_4 * 2);
  return (wchar_t *)((longlong)pvVar1 + (longlong)param_4 * 2);
}

