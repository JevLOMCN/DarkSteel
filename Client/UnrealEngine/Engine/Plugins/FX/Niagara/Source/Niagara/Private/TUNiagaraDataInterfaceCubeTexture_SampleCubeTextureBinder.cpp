// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// operator() @ 1490bbf90

void __thiscall
`TUNiagaraDataInterfaceCubeTexture_SampleCubeTextureBinder::Bind'::__l2::<lambda_1>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  FNDIOutputParam<UE::Math::TVector4<float>_> local_b8;
  FUserPtrHandler<FNDICubeTextureInstanceData_GameThread> local_78;
  int local_68 [4];
  FNDIInputParam<UE::Math::TVector<float>_> local_58;
  
  VectorVM::FUserPtrHandler<FNDICubeTextureInstanceData_GameThread>::
  FUserPtrHandler<FNDICubeTextureInstanceData_GameThread>(&local_78,param_1);
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&local_58,param_1);
  FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_68);
  FNDIOutputParam<UE::Math::TVector4<float>_>::FNDIOutputParam<UE::Math::TVector4<float>_>
            (&local_b8,param_1);
  iVar1 = 0;
  if (0 < param_1->NumInstances) {
    do {
      iVar1 = iVar1 + 1;
      *local_b8.X.Register = 1.0;
      *local_b8.Y.Register = 0.0;
      *local_b8.Z.Register = 1.0;
      *local_b8.W.Register = 1.0;
      local_b8.X.Register = local_b8.X.Register + local_b8.X.AdvanceOffset;
      local_b8.Y.Register = local_b8.Y.Register + local_b8.Y.AdvanceOffset;
      local_b8.Z.Register = local_b8.Z.Register + local_b8.Z.AdvanceOffset;
      local_b8.W.Register = local_b8.W.Register + local_b8.W.AdvanceOffset;
    } while (iVar1 < param_1->NumInstances);
  }
  return;
}

