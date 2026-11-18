// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 2

// FVulkanShaderHashes @ 145b4baa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

FVulkanShaderHashes * __thiscall
FVulkanShaderHashes::FVulkanShaderHashes
          (FVulkanShaderHashes *this,FGraphicsPipelineStateInitializer *param_1)

{
  FRHIVertexShader *pFVar1;
  FRHIPixelShader *pFVar2;
  FRHIMeshShader *pFVar3;
  FRHIAmplificationShader *pFVar4;
  FRHIGeometryShader *pFVar5;
  code *pcVar6;
  FSHAHash *pFVar7;
  bool bVar8;
  undefined4 uVar9;
  uint uVar10;
  FVulkanShaderHashes *pFVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  uVar9 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  this->Stages[0].Hash[0] = '\0';
  this->Stages[0].Hash[1] = '\0';
  this->Stages[0].Hash[2] = '\0';
  this->Stages[0].Hash[3] = '\0';
  this->Stages[0].Hash[4] = '\0';
  this->Stages[0].Hash[5] = '\0';
  this->Stages[0].Hash[6] = '\0';
  this->Stages[0].Hash[7] = '\0';
  this->Stages[0].Hash[8] = '\0';
  this->Stages[0].Hash[9] = '\0';
  this->Stages[0].Hash[10] = '\0';
  this->Stages[0].Hash[0xb] = '\0';
  this->Stages[0].Hash[0xc] = '\0';
  this->Stages[0].Hash[0xd] = '\0';
  this->Stages[0].Hash[0xe] = '\0';
  this->Stages[0].Hash[0xf] = '\0';
  this->Stages[0].Hash[0x10] = '\0';
  this->Stages[0].Hash[0x11] = '\0';
  this->Stages[0].Hash[0x12] = '\0';
  this->Stages[0].Hash[0x13] = '\0';
  this->Stages[1].Hash[0] = '\0';
  this->Stages[1].Hash[1] = '\0';
  this->Stages[1].Hash[2] = '\0';
  this->Stages[1].Hash[3] = '\0';
  this->Stages[1].Hash[4] = '\0';
  this->Stages[1].Hash[5] = '\0';
  this->Stages[1].Hash[6] = '\0';
  this->Stages[1].Hash[7] = '\0';
  pFVar7 = this->Stages;
  pFVar7[1].Hash[8] = '\0';
  pFVar7[1].Hash[9] = '\0';
  pFVar7[1].Hash[10] = '\0';
  pFVar7[1].Hash[0xb] = '\0';
  pFVar7[1].Hash[0xc] = '\0';
  pFVar7[1].Hash[0xd] = '\0';
  pFVar7[1].Hash[0xe] = '\0';
  pFVar7[1].Hash[0xf] = '\0';
  pFVar7 = this->Stages;
  pFVar7[1].Hash[0x10] = '\0';
  pFVar7[1].Hash[0x11] = '\0';
  pFVar7[1].Hash[0x12] = '\0';
  pFVar7[1].Hash[0x13] = '\0';
  this->Stages[2].Hash[0] = '\0';
  this->Stages[2].Hash[1] = '\0';
  this->Stages[2].Hash[2] = '\0';
  this->Stages[2].Hash[3] = '\0';
  this->Stages[2].Hash[4] = '\0';
  this->Stages[2].Hash[5] = '\0';
  this->Stages[2].Hash[6] = '\0';
  this->Stages[2].Hash[7] = '\0';
  pFVar7 = this->Stages;
  pFVar7[2].Hash[8] = '\0';
  pFVar7[2].Hash[9] = '\0';
  pFVar7[2].Hash[10] = '\0';
  pFVar7[2].Hash[0xb] = '\0';
  pFVar7[2].Hash[0xc] = '\0';
  pFVar7[2].Hash[0xd] = '\0';
  pFVar7[2].Hash[0xe] = '\0';
  pFVar7[2].Hash[0xf] = '\0';
  pFVar7 = this->Stages;
  pFVar7[2].Hash[0x10] = '\0';
  pFVar7[2].Hash[0x11] = '\0';
  pFVar7[2].Hash[0x12] = '\0';
  pFVar7[2].Hash[0x13] = '\0';
  this->Stages[3].Hash[0] = '\0';
  this->Stages[3].Hash[1] = '\0';
  this->Stages[3].Hash[2] = '\0';
  this->Stages[3].Hash[3] = '\0';
  this->Stages[3].Hash[4] = '\0';
  this->Stages[3].Hash[5] = '\0';
  this->Stages[3].Hash[6] = '\0';
  this->Stages[3].Hash[7] = '\0';
  pFVar7 = this->Stages;
  pFVar7[3].Hash[8] = '\0';
  pFVar7[3].Hash[9] = '\0';
  pFVar7[3].Hash[10] = '\0';
  pFVar7[3].Hash[0xb] = '\0';
  pFVar7[3].Hash[0xc] = '\0';
  pFVar7[3].Hash[0xd] = '\0';
  pFVar7[3].Hash[0xe] = '\0';
  pFVar7[3].Hash[0xf] = '\0';
  pFVar7 = this->Stages;
  pFVar7[3].Hash[0x10] = '\0';
  pFVar7[3].Hash[0x11] = '\0';
  pFVar7[3].Hash[0x12] = '\0';
  pFVar7[3].Hash[0x13] = '\0';
  this->Stages[4].Hash[0] = '\0';
  this->Stages[4].Hash[1] = '\0';
  this->Stages[4].Hash[2] = '\0';
  this->Stages[4].Hash[3] = '\0';
  this->Stages[4].Hash[4] = '\0';
  this->Stages[4].Hash[5] = '\0';
  this->Stages[4].Hash[6] = '\0';
  this->Stages[4].Hash[7] = '\0';
  pFVar7 = this->Stages;
  pFVar7[4].Hash[8] = '\0';
  pFVar7[4].Hash[9] = '\0';
  pFVar7[4].Hash[10] = '\0';
  pFVar7[4].Hash[0xb] = '\0';
  pFVar7[4].Hash[0xc] = '\0';
  pFVar7[4].Hash[0xd] = '\0';
  pFVar7[4].Hash[0xe] = '\0';
  pFVar7[4].Hash[0xf] = '\0';
  pFVar7 = this->Stages;
  pFVar7[4].Hash[0x10] = '\0';
  pFVar7[4].Hash[0x11] = '\0';
  pFVar7[4].Hash[0x12] = '\0';
  pFVar7[4].Hash[0x13] = '\0';
  this->Stages[5].Hash[0] = '\0';
  this->Stages[5].Hash[1] = '\0';
  this->Stages[5].Hash[2] = '\0';
  this->Stages[5].Hash[3] = '\0';
  this->Stages[5].Hash[4] = '\0';
  this->Stages[5].Hash[5] = '\0';
  this->Stages[5].Hash[6] = '\0';
  this->Stages[5].Hash[7] = '\0';
  pFVar7 = this->Stages;
  pFVar7[5].Hash[8] = '\0';
  pFVar7[5].Hash[9] = '\0';
  pFVar7[5].Hash[10] = '\0';
  pFVar7[5].Hash[0xb] = '\0';
  pFVar7[5].Hash[0xc] = '\0';
  pFVar7[5].Hash[0xd] = '\0';
  pFVar7[5].Hash[0xe] = '\0';
  pFVar7[5].Hash[0xf] = '\0';
  pFVar7 = this->Stages;
  pFVar7[5].Hash[0x10] = '\0';
  pFVar7[5].Hash[0x11] = '\0';
  pFVar7[5].Hash[0x12] = '\0';
  pFVar7[5].Hash[0x13] = '\0';
  pFVar1 = (param_1->BoundShaderState).VertexShaderRHI;
  if (pFVar1 != (FRHIVertexShader *)0x0) {
    if ((pFVar1 == (FRHIVertexShader *)0xfffffffffffffef8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Shader",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                           ,0xbc,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pFVar11 = (FVulkanShaderHashes *)(*pcVar6)();
      return pFVar11;
    }
    uVar12 = *(undefined4 *)&pFVar1[1].field_0x80;
    uVar13 = *(undefined4 *)&pFVar1[1].field_0x84;
    uVar14 = *(undefined4 *)&pFVar1[1].field_0x88;
    uVar15 = *(undefined4 *)&pFVar1[1].field_0x8c;
    uVar9 = *(undefined4 *)&pFVar1[1].field_0x90;
  }
  *(undefined4 *)this->Stages[0].Hash = uVar12;
  *(undefined4 *)(this->Stages[0].Hash + 4) = uVar13;
  *(undefined4 *)(this->Stages[0].Hash + 8) = uVar14;
  *(undefined4 *)(this->Stages[0].Hash + 0xc) = uVar15;
  *(undefined4 *)(this->Stages[0].Hash + 0x10) = uVar9;
  pFVar2 = (param_1->BoundShaderState).PixelShaderRHI;
  if (pFVar2 == (FRHIPixelShader *)0x0) {
    uVar12 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar9 = 0;
  }
  else {
    if ((pFVar2 == (FRHIPixelShader *)0xfffffffffffffef8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Shader",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                           ,0xbc,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pFVar11 = (FVulkanShaderHashes *)(*pcVar6)();
      return pFVar11;
    }
    uVar12 = *(undefined4 *)&pFVar2[1].field_0x80;
    uVar13 = *(undefined4 *)&pFVar2[1].field_0x84;
    uVar14 = *(undefined4 *)&pFVar2[1].field_0x88;
    uVar15 = *(undefined4 *)&pFVar2[1].field_0x8c;
    uVar9 = *(undefined4 *)&pFVar2[1].field_0x90;
  }
  *(undefined4 *)this->Stages[1].Hash = uVar12;
  *(undefined4 *)(this->Stages[1].Hash + 4) = uVar13;
  *(undefined4 *)(this->Stages[1].Hash + 8) = uVar14;
  *(undefined4 *)(this->Stages[1].Hash + 0xc) = uVar15;
  *(undefined4 *)(this->Stages[1].Hash + 0x10) = uVar9;
  pFVar3 = (param_1->BoundShaderState).MeshShaderRHI;
  if (pFVar3 == (FRHIMeshShader *)0x0) {
    uVar12 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar9 = 0;
  }
  else {
    if ((pFVar3 == (FRHIMeshShader *)0xfffffffffffffef8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Shader",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                           ,0xbc,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pFVar11 = (FVulkanShaderHashes *)(*pcVar6)();
      return pFVar11;
    }
    uVar12 = *(undefined4 *)&pFVar3[1].field_0x80;
    uVar13 = *(undefined4 *)&pFVar3[1].field_0x84;
    uVar14 = *(undefined4 *)&pFVar3[1].field_0x88;
    uVar15 = *(undefined4 *)&pFVar3[1].field_0x8c;
    uVar9 = *(undefined4 *)&pFVar3[1].field_0x90;
  }
  *(undefined4 *)this->Stages[3].Hash = uVar12;
  *(undefined4 *)(this->Stages[3].Hash + 4) = uVar13;
  *(undefined4 *)(this->Stages[3].Hash + 8) = uVar14;
  *(undefined4 *)(this->Stages[3].Hash + 0xc) = uVar15;
  *(undefined4 *)(this->Stages[3].Hash + 0x10) = uVar9;
  pFVar4 = (param_1->BoundShaderState).AmplificationShaderRHI;
  if (pFVar4 == (FRHIAmplificationShader *)0x0) {
    uVar12 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar9 = 0;
  }
  else {
    if ((pFVar4 == (FRHIAmplificationShader *)0xfffffffffffffef8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Shader",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                           ,0xbc,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pFVar11 = (FVulkanShaderHashes *)(*pcVar6)();
      return pFVar11;
    }
    uVar12 = *(undefined4 *)&pFVar4[1].field_0x80;
    uVar13 = *(undefined4 *)&pFVar4[1].field_0x84;
    uVar14 = *(undefined4 *)&pFVar4[1].field_0x88;
    uVar15 = *(undefined4 *)&pFVar4[1].field_0x8c;
    uVar9 = *(undefined4 *)&pFVar4[1].field_0x90;
  }
  *(undefined4 *)this->Stages[4].Hash = uVar12;
  *(undefined4 *)(this->Stages[4].Hash + 4) = uVar13;
  *(undefined4 *)(this->Stages[4].Hash + 8) = uVar14;
  *(undefined4 *)(this->Stages[4].Hash + 0xc) = uVar15;
  *(undefined4 *)(this->Stages[4].Hash + 0x10) = uVar9;
  pFVar5 = (param_1->BoundShaderState).GeometryShaderRHI;
  if (pFVar5 == (FRHIGeometryShader *)0x0) {
    uVar12 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar9 = 0;
  }
  else {
    if ((pFVar5 == (FRHIGeometryShader *)0xfffffffffffffef8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Shader",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                           ,0xbc,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pFVar11 = (FVulkanShaderHashes *)(*pcVar6)();
      return pFVar11;
    }
    uVar12 = *(undefined4 *)&pFVar5[1].field_0x80;
    uVar13 = *(undefined4 *)&pFVar5[1].field_0x84;
    uVar14 = *(undefined4 *)&pFVar5[1].field_0x88;
    uVar15 = *(undefined4 *)&pFVar5[1].field_0x8c;
    uVar9 = *(undefined4 *)&pFVar5[1].field_0x90;
  }
  *(undefined4 *)this->Stages[2].Hash = uVar12;
  *(undefined4 *)(this->Stages[2].Hash + 4) = uVar13;
  *(undefined4 *)(this->Stages[2].Hash + 8) = uVar14;
  *(undefined4 *)(this->Stages[2].Hash + 0xc) = uVar15;
  *(undefined4 *)(this->Stages[2].Hash + 0x10) = uVar9;
  uVar10 = (*FCrc::MemCrc32Func)(this->Stages,0x78,0);
  this->Hash = uVar10;
  return this;
}

// FVulkanShaderHashes @ 145b4bd10

FVulkanShaderHashes * __thiscall FVulkanShaderHashes::FVulkanShaderHashes(FVulkanShaderHashes *this)

{
  FSHAHash *pFVar1;
  
  this->Stages[0].Hash[0] = '\0';
  this->Stages[0].Hash[1] = '\0';
  this->Stages[0].Hash[2] = '\0';
  this->Stages[0].Hash[3] = '\0';
  this->Stages[0].Hash[4] = '\0';
  this->Stages[0].Hash[5] = '\0';
  this->Stages[0].Hash[6] = '\0';
  this->Stages[0].Hash[7] = '\0';
  this->Stages[0].Hash[8] = '\0';
  this->Stages[0].Hash[9] = '\0';
  this->Stages[0].Hash[10] = '\0';
  this->Stages[0].Hash[0xb] = '\0';
  this->Stages[0].Hash[0xc] = '\0';
  this->Stages[0].Hash[0xd] = '\0';
  this->Stages[0].Hash[0xe] = '\0';
  this->Stages[0].Hash[0xf] = '\0';
  *(undefined8 *)(this->Stages[0].Hash + 0x10) = 0;
  pFVar1 = this->Stages;
  pFVar1[1].Hash[4] = '\0';
  pFVar1[1].Hash[5] = '\0';
  pFVar1[1].Hash[6] = '\0';
  pFVar1[1].Hash[7] = '\0';
  pFVar1[1].Hash[8] = '\0';
  pFVar1[1].Hash[9] = '\0';
  pFVar1[1].Hash[10] = '\0';
  pFVar1[1].Hash[0xb] = '\0';
  pFVar1 = this->Stages;
  pFVar1[1].Hash[0xc] = '\0';
  pFVar1[1].Hash[0xd] = '\0';
  pFVar1[1].Hash[0xe] = '\0';
  pFVar1[1].Hash[0xf] = '\0';
  pFVar1[1].Hash[0x10] = '\0';
  pFVar1[1].Hash[0x11] = '\0';
  pFVar1[1].Hash[0x12] = '\0';
  pFVar1[1].Hash[0x13] = '\0';
  this->Stages[2].Hash[0] = '\0';
  this->Stages[2].Hash[1] = '\0';
  this->Stages[2].Hash[2] = '\0';
  this->Stages[2].Hash[3] = '\0';
  this->Stages[2].Hash[4] = '\0';
  this->Stages[2].Hash[5] = '\0';
  this->Stages[2].Hash[6] = '\0';
  this->Stages[2].Hash[7] = '\0';
  pFVar1 = this->Stages;
  pFVar1[2].Hash[8] = '\0';
  pFVar1[2].Hash[9] = '\0';
  pFVar1[2].Hash[10] = '\0';
  pFVar1[2].Hash[0xb] = '\0';
  pFVar1[2].Hash[0xc] = '\0';
  pFVar1[2].Hash[0xd] = '\0';
  pFVar1[2].Hash[0xe] = '\0';
  pFVar1[2].Hash[0xf] = '\0';
  *(undefined8 *)(this->Stages[2].Hash + 0x10) = 0;
  pFVar1 = this->Stages;
  pFVar1[3].Hash[4] = '\0';
  pFVar1[3].Hash[5] = '\0';
  pFVar1[3].Hash[6] = '\0';
  pFVar1[3].Hash[7] = '\0';
  pFVar1[3].Hash[8] = '\0';
  pFVar1[3].Hash[9] = '\0';
  pFVar1[3].Hash[10] = '\0';
  pFVar1[3].Hash[0xb] = '\0';
  pFVar1 = this->Stages;
  pFVar1[3].Hash[0xc] = '\0';
  pFVar1[3].Hash[0xd] = '\0';
  pFVar1[3].Hash[0xe] = '\0';
  pFVar1[3].Hash[0xf] = '\0';
  pFVar1[3].Hash[0x10] = '\0';
  pFVar1[3].Hash[0x11] = '\0';
  pFVar1[3].Hash[0x12] = '\0';
  pFVar1[3].Hash[0x13] = '\0';
  this->Stages[4].Hash[0] = '\0';
  this->Stages[4].Hash[1] = '\0';
  this->Stages[4].Hash[2] = '\0';
  this->Stages[4].Hash[3] = '\0';
  this->Stages[4].Hash[4] = '\0';
  this->Stages[4].Hash[5] = '\0';
  this->Stages[4].Hash[6] = '\0';
  this->Stages[4].Hash[7] = '\0';
  pFVar1 = this->Stages;
  pFVar1[4].Hash[8] = '\0';
  pFVar1[4].Hash[9] = '\0';
  pFVar1[4].Hash[10] = '\0';
  pFVar1[4].Hash[0xb] = '\0';
  pFVar1[4].Hash[0xc] = '\0';
  pFVar1[4].Hash[0xd] = '\0';
  pFVar1[4].Hash[0xe] = '\0';
  pFVar1[4].Hash[0xf] = '\0';
  *(undefined8 *)(this->Stages[4].Hash + 0x10) = 0;
  pFVar1 = this->Stages;
  pFVar1[5].Hash[4] = '\0';
  pFVar1[5].Hash[5] = '\0';
  pFVar1[5].Hash[6] = '\0';
  pFVar1[5].Hash[7] = '\0';
  pFVar1[5].Hash[8] = '\0';
  pFVar1[5].Hash[9] = '\0';
  pFVar1[5].Hash[10] = '\0';
  pFVar1[5].Hash[0xb] = '\0';
  pFVar1 = this->Stages;
  pFVar1[5].Hash[0xc] = '\0';
  pFVar1[5].Hash[0xd] = '\0';
  pFVar1[5].Hash[0xe] = '\0';
  pFVar1[5].Hash[0xf] = '\0';
  pFVar1[5].Hash[0x10] = '\0';
  pFVar1[5].Hash[0x11] = '\0';
  pFVar1[5].Hash[0x12] = '\0';
  pFVar1[5].Hash[0x13] = '\0';
  this->Hash = 0;
  return this;
}

