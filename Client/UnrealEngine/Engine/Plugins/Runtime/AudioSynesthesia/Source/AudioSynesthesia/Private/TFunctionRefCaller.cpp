// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesia
// Functions: 1

// Call @ 14d8201c0

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOnsetNRTSettings::GetSettings'::__l2::<lambda_1>,int,float>::Call
          (void *param_1,float *param_2)

{
  int iVar1;
  
  iVar1 = (int)ROUND((*param_2 + *param_2) * *(float *)param_1 + __real_3f000000) >> 1;
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  return iVar1;
}

