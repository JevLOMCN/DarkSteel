// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// SetGraphicsPipelineState @ 145cbf050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandList::SetGraphicsPipelineState
          (FRHICommandList *this,FGraphicsPipelineState *param_1,FBoundShaderStateInput *param_2,
          uint param_3,bool param_4)

{
  FRHIVertexShader *pFVar1;
  FRHIMeshShader *pFVar2;
  FRHIGeometryShader *pFVar3;
  FRHIGraphicsPipelineState *pFVar4;
  IRHICommandContext *pIVar5;
  undefined8 *puVar6;
  
  pFVar1 = param_2->VertexShaderRHI;
  *(FRHIVertexDeclaration **)&this->field_0x2a8 = param_2->VertexDeclarationRHI;
  *(FRHIVertexShader **)&this->field_0x2b0 = pFVar1;
  pFVar2 = param_2->MeshShaderRHI;
  *(FRHIPixelShader **)&this->field_0x2b8 = param_2->PixelShaderRHI;
  *(FRHIMeshShader **)&this->field_0x2c0 = pFVar2;
  pFVar3 = param_2->GeometryShaderRHI;
  *(FRHIAmplificationShader **)&this->field_0x2c8 = param_2->AmplificationShaderRHI;
  *(FRHIGeometryShader **)&this->field_0x2d0 = pFVar3;
  *(FRHIWorkGraphShader **)&this->field_0x2d8 = param_2->WorkGraphMeshShaderRHI;
  if ((GRHICommandList.bLatchedBypass != false) && ((this->field_0x29b & 0x20) != 0)) {
    pFVar4 = ExecuteSetGraphicsPipelineState(param_1);
    pIVar5 = FRHICommandListBase::GetContext((FRHICommandListBase *)this);
                    /* WARNING: Could not recover jumptable at 0x000145cbf0e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pIVar5->_padding_ + 0x1b8))(pIVar5,pFVar4,param_3,param_4);
    return;
  }
  puVar6 = FMemStackBase::Alloc((FMemStackBase *)this,0x20,8);
  *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
  **(undefined8 **)&this->field_0x30 = puVar6;
  *(undefined8 **)&this->field_0x30 = puVar6 + 1;
  puVar6[1] = 0;
  *puVar6 = &___7FRHICommandSetGraphicsPipelineState__6B_;
  puVar6[2] = param_1;
  *(uint *)(puVar6 + 3) = param_3;
  *(bool *)((longlong)puVar6 + 0x1c) = param_4;
  return;
}

