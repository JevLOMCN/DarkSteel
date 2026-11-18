// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsCore
// Functions: 1

// Call @ 1441a7250

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FChaosScene::SetDebugDrawScene'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  ::Chaos::FPBDRigidsSolver::SetDebugDrawScene
            (*(FPBDRigidsSolver **)(*(longlong *)param_1 + 0x40),
             (TSharedPtr<ChaosDD::Private::FChaosDDScene,1> *)(*(longlong *)param_1 + 0xb0));
  return;
}

