// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpusAudioDecoder
// Functions: 1

// Call @ 146bca070

ICompressedAudioInfo * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<FOpusAudioInfo_*_(__cdecl*)(void),ICompressedAudioInfo_*>::Call(void *param_1)

{
  ICompressedAudioInfo *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000146bca070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = (ICompressedAudioInfo *)(**(code **)param_1)();
  return pIVar1;
}

