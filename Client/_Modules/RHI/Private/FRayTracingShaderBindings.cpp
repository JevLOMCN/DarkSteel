// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// FRayTracingShaderBindings @ 145c889e0

FRayTracingShaderBindings * __thiscall
FRayTracingShaderBindings::FRayTracingShaderBindings
          (FRayTracingShaderBindings *this,FRayTracingShaderBindings *param_1)

{
  int *piVar1;
  TArray<FRHIShaderParameterResource,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  FRHITexture *pFVar4;
  FRHIShaderResourceView *pFVar5;
  FRHIUniformBuffer *pFVar6;
  FRHISamplerState *pFVar7;
  FRHIUnorderedAccessView *pFVar8;
  FRayTracingShaderBindings *pFVar9;
  FRHIShaderResourceView **ppFVar10;
  FRHISamplerState **ppFVar11;
  longlong lVar12;
  FRHIShaderResourceView **ppFVar13;
  FRHISamplerState **ppFVar14;
  FRayTracingShaderBindings *pFVar15;
  longlong lVar16;
  
  lVar16 = 4;
  lVar12 = 4;
  pFVar9 = this;
  pFVar15 = param_1;
  do {
    pFVar4 = pFVar15->Textures[1];
    pFVar9->Textures[0] = pFVar15->Textures[0];
    pFVar9->Textures[1] = pFVar4;
    pFVar4 = pFVar15->Textures[3];
    pFVar9->Textures[2] = pFVar15->Textures[2];
    pFVar9->Textures[3] = pFVar4;
    pFVar4 = pFVar15->Textures[5];
    pFVar9->Textures[4] = pFVar15->Textures[4];
    pFVar9->Textures[5] = pFVar4;
    pFVar4 = pFVar15->Textures[7];
    pFVar9->Textures[6] = pFVar15->Textures[6];
    pFVar9->Textures[7] = pFVar4;
    pFVar4 = pFVar15->Textures[9];
    pFVar9->Textures[8] = pFVar15->Textures[8];
    pFVar9->Textures[9] = pFVar4;
    pFVar4 = pFVar15->Textures[0xb];
    pFVar9->Textures[10] = pFVar15->Textures[10];
    pFVar9->Textures[0xb] = pFVar4;
    pFVar4 = pFVar15->Textures[0xd];
    pFVar9->Textures[0xc] = pFVar15->Textures[0xc];
    pFVar9->Textures[0xd] = pFVar4;
    pFVar4 = pFVar15->Textures[0xf];
    pFVar9->Textures[0xe] = pFVar15->Textures[0xe];
    pFVar9->Textures[0xf] = pFVar4;
    lVar12 = lVar12 + -1;
    pFVar9 = (FRayTracingShaderBindings *)(pFVar9->Textures + 0x10);
    pFVar15 = (FRayTracingShaderBindings *)(pFVar15->Textures + 0x10);
  } while (lVar12 != 0);
  ppFVar10 = param_1->SRVs;
  ppFVar13 = this->SRVs;
  do {
    pFVar5 = ppFVar10[1];
    *ppFVar13 = *ppFVar10;
    ppFVar13[1] = pFVar5;
    pFVar5 = ppFVar10[3];
    ppFVar13[2] = ppFVar10[2];
    ppFVar13[3] = pFVar5;
    pFVar5 = ppFVar10[5];
    ppFVar13[4] = ppFVar10[4];
    ppFVar13[5] = pFVar5;
    pFVar5 = ppFVar10[7];
    ppFVar13[6] = ppFVar10[6];
    ppFVar13[7] = pFVar5;
    pFVar5 = ppFVar10[9];
    ppFVar13[8] = ppFVar10[8];
    ppFVar13[9] = pFVar5;
    pFVar5 = ppFVar10[0xb];
    ppFVar13[10] = ppFVar10[10];
    ppFVar13[0xb] = pFVar5;
    pFVar5 = ppFVar10[0xd];
    ppFVar13[0xc] = ppFVar10[0xc];
    ppFVar13[0xd] = pFVar5;
    pFVar5 = ppFVar10[0xf];
    ppFVar13[0xe] = ppFVar10[0xe];
    ppFVar13[0xf] = pFVar5;
    lVar16 = lVar16 + -1;
    ppFVar10 = ppFVar10 + 0x10;
    ppFVar13 = ppFVar13 + 0x10;
  } while (lVar16 != 0);
  pFVar6 = param_1->UniformBuffers[1];
  lVar12 = 2;
  this->UniformBuffers[0] = param_1->UniformBuffers[0];
  this->UniformBuffers[1] = pFVar6;
  pFVar6 = param_1->UniformBuffers[3];
  this->UniformBuffers[2] = param_1->UniformBuffers[2];
  this->UniformBuffers[3] = pFVar6;
  pFVar6 = param_1->UniformBuffers[5];
  this->UniformBuffers[4] = param_1->UniformBuffers[4];
  this->UniformBuffers[5] = pFVar6;
  pFVar6 = param_1->UniformBuffers[7];
  this->UniformBuffers[6] = param_1->UniformBuffers[6];
  this->UniformBuffers[7] = pFVar6;
  pFVar6 = param_1->UniformBuffers[9];
  this->UniformBuffers[8] = param_1->UniformBuffers[8];
  this->UniformBuffers[9] = pFVar6;
  pFVar6 = param_1->UniformBuffers[0xb];
  this->UniformBuffers[10] = param_1->UniformBuffers[10];
  this->UniformBuffers[0xb] = pFVar6;
  pFVar6 = param_1->UniformBuffers[0xd];
  this->UniformBuffers[0xc] = param_1->UniformBuffers[0xc];
  this->UniformBuffers[0xd] = pFVar6;
  pFVar6 = param_1->UniformBuffers[0xf];
  this->UniformBuffers[0xe] = param_1->UniformBuffers[0xe];
  this->UniformBuffers[0xf] = pFVar6;
  ppFVar11 = this->Samplers;
  ppFVar14 = param_1->Samplers;
  do {
    pFVar7 = ppFVar14[1];
    *ppFVar11 = *ppFVar14;
    ppFVar11[1] = pFVar7;
    pFVar7 = ppFVar14[3];
    ppFVar11[2] = ppFVar14[2];
    ppFVar11[3] = pFVar7;
    pFVar7 = ppFVar14[5];
    ppFVar11[4] = ppFVar14[4];
    ppFVar11[5] = pFVar7;
    pFVar7 = ppFVar14[7];
    ppFVar11[6] = ppFVar14[6];
    ppFVar11[7] = pFVar7;
    pFVar7 = ppFVar14[9];
    ppFVar11[8] = ppFVar14[8];
    ppFVar11[9] = pFVar7;
    pFVar7 = ppFVar14[0xb];
    ppFVar11[10] = ppFVar14[10];
    ppFVar11[0xb] = pFVar7;
    pFVar7 = ppFVar14[0xd];
    ppFVar11[0xc] = ppFVar14[0xc];
    ppFVar11[0xd] = pFVar7;
    pFVar7 = ppFVar14[0xf];
    ppFVar11[0xe] = ppFVar14[0xe];
    ppFVar11[0xf] = pFVar7;
    lVar12 = lVar12 + -1;
    ppFVar11 = ppFVar11 + 0x10;
    ppFVar14 = ppFVar14 + 0x10;
  } while (lVar12 != 0);
  pFVar8 = param_1->UAVs[1];
  pTVar2 = &this->BindlessParameters;
  piVar1 = &(this->BindlessParameters).ArrayMax;
  this->UAVs[0] = param_1->UAVs[0];
  this->UAVs[1] = pFVar8;
  pFVar8 = param_1->UAVs[3];
  this->UAVs[2] = param_1->UAVs[2];
  this->UAVs[3] = pFVar8;
  pFVar8 = param_1->UAVs[5];
  this->UAVs[4] = param_1->UAVs[4];
  this->UAVs[5] = pFVar8;
  pFVar8 = param_1->UAVs[7];
  this->UAVs[6] = param_1->UAVs[6];
  this->UAVs[7] = pFVar8;
  pFVar8 = param_1->UAVs[9];
  this->UAVs[8] = param_1->UAVs[8];
  this->UAVs[9] = pFVar8;
  pFVar8 = param_1->UAVs[0xb];
  this->UAVs[10] = param_1->UAVs[10];
  this->UAVs[0xb] = pFVar8;
  pFVar8 = param_1->UAVs[0xd];
  this->UAVs[0xc] = param_1->UAVs[0xc];
  this->UAVs[0xd] = pFVar8;
  pFVar8 = param_1->UAVs[0xf];
  this->UAVs[0xe] = param_1->UAVs[0xe];
  this->UAVs[0xf] = pFVar8;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->BindlessParameters).ArrayNum;
  _Src = (param_1->BindlessParameters).AllocatorInstance.Data;
  (this->BindlessParameters).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 << 4);
  }
  return this;
}

