// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosSolverEngine
// Functions: 2

// Call @ 14630db80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`AChaosSolverActor::BeginPlay'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  ::Chaos::FPBDRigidsSolver::ApplyConfig
            (*(FPBDRigidsSolver **)param_1,(FChaosSolverConfiguration *)((longlong)param_1 + 8));
  return;
}

// Call @ 14630dba0

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`AChaosSolverActor::EndPlay'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  return;
}

