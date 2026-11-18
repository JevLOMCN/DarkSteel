// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 1

// operator() @ 1494c6650

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FComputeShaderUtils::AddPass<FComputeKernelShader>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FComputeKernelShader,FShaderMapPointerTable> *this_00;
  int iVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FRHIComputeShader *pFVar4;
  IRHIComputeContext *pIVar5;
  undefined8 *puVar6;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(ulonglong *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FComputeKernelShader,FShaderMapPointerTable> *)((longlong)this + 0x10);
  iVar1 = *(int *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = iVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar4 = (FRHIComputeShader *)
           TShaderRefBase<FComputeKernelShader,FShaderMapPointerTable>::GetRHIShaderBase
                     (this_00,SF_Compute,true);
  SetComputePipelineState(param_2,pFVar4);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar4,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  if ((GRHICommandList.bLatchedBypass == false) || ((param_2->field_0x29b & 0x20) == 0)) {
    puVar6 = FMemStackBase::Alloc((FMemStackBase *)param_2,0x20,8);
    *(int *)&param_2->field_0x60 = *(int *)&param_2->field_0x60 + 1;
    **(undefined8 **)&param_2->field_0x30 = puVar6;
    *(undefined8 **)&param_2->field_0x30 = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &___7FRHICommandDispatchComputeShader__6B_;
    *(int *)(puVar6 + 2) = local_38._s_0.X;
    *(int *)((longlong)puVar6 + 0x14) = local_38._s_0.Y;
    *(int *)(puVar6 + 3) = iVar1;
  }
  else {
    pIVar5 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_2);
    (**(code **)(pIVar5->_padding_ + 0x18))
              (pIVar5,local_38._0_8_ & 0xffffffff,local_38._s_0.Y,iVar1);
  }
  pFVar4 = (FRHIComputeShader *)
           TShaderRefBase<FComputeKernelShader,FShaderMapPointerTable>::GetRHIShaderBase
                     (this_00,SF_Compute,true);
  UnsetShaderUAVs<FRHIComputeCommandList,FComputeKernelShader>(param_2,this_00,pFVar4);
  return;
}

