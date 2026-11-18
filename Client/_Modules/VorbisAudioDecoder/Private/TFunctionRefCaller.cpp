// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VorbisAudioDecoder
// Functions: 1

// Call @ 146bc7d60

ICompressedAudioInfo * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<FVorbisAudioInfo_*_(__cdecl*)(void),ICompressedAudioInfo_*>::Call(void *param_1)

{
  ICompressedAudioInfo *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000146bc7d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = (ICompressedAudioInfo *)(**(code **)param_1)();
  return pIVar1;
}

