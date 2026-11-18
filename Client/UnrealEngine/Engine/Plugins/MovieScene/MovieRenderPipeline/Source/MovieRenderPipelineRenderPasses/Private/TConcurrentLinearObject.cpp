// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 2

// operator_delete @ 14ddcbef0

void __cdecl
TConcurrentLinearObject<TGraphTask<TFunctionGraphTaskImpl<void___cdecl(void),0>_>,FTaskGraphBlockAllocationTag>
::operator_delete(void *param_1)

{
  TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(param_1);
  return;
}

// operator_delete @ 14ddcbf10

void __cdecl
TConcurrentLinearObject<TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>,FTaskGraphBlockAllocationTag>
::operator_delete(void *param_1)

{
  TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(param_1);
  return;
}

