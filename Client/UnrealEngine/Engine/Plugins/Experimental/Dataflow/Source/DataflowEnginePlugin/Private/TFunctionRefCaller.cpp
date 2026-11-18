// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEnginePlugin
// Functions: 2

// Call @ 14dab1700

FContextCacheElementBase * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<UE::Dataflow::FContextCacheElementBase_*_(__cdecl*)(FArchive_&,UE::Dataflow::FContextCacheElementBase_*),UE::Dataflow::FContextCacheElementBase_*,FArchive_&,UE::Dataflow::FContextCacheElementBase_*>
::Call(void *param_1,FArchive *param_2,FContextCacheElementBase **param_3)

{
  FContextCacheElementBase *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014dab170c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FContextCacheElementBase *)(**(code **)param_1)(param_2,*param_3);
  return pFVar1;
}

// Call @ 14dab1720

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDataflowEngineSceneProxy::CreateMeshRenderThreadResources'::__l12::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `FDataflowEngineSceneProxy::CreateMeshRenderThreadResources'::__l12::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

