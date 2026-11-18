// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicWind
// Functions: 1

// Call @ 14da4ec30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UDynamicWindSubsystem::UpdateWindParameters'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FDynamicWindParameters::operator=
            ((FDynamicWindParameters *)(*(longlong *)param_1 + 0x160),
             (FDynamicWindParameters *)((longlong)param_1 + 0x10));
  return;
}

