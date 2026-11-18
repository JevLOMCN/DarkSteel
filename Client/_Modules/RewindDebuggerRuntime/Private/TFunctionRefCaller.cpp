// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RewindDebuggerRuntime
// Functions: 1

// Call @ 14cd8c040

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(IRewindDebuggerRuntimeExtension_*),void,IRewindDebuggerRuntimeExtension_*>
::Call(void *param_1,IRewindDebuggerRuntimeExtension **param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014cd8c046. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(*param_2);
  return;
}

