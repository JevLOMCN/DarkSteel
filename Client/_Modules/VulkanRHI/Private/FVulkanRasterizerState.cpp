// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 2

// FVulkanRasterizerState @ 145b91b20

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */

FVulkanRasterizerState * __thiscall
FVulkanRasterizerState::FVulkanRasterizerState
          (FVulkanRasterizerState *this,FRasterizerStateInitializerRHI *param_1)

{
  float fVar1;
  uchar uVar2;
  code *pcVar3;
  TEnumAsByte<ERasterizerCullMode> TVar4;
  undefined2 uVar5;
  float fVar6;
  ERasterizerDepthClipMode EVar7;
  undefined2 uVar8;
  bool bVar9;
  VkPolygonMode VVar10;
  VkPolygonMode VVar11;
  FVulkanRasterizerState *pFVar12;
  
  FRHIResource::FRHIResource((FRHIResource *)this,RRT_RasterizerState);
  this->_padding_ = (longlong)&___7FVulkanRasterizerState__6B_;
  TVar4.Value = (param_1->CullMode).Value;
  uVar5 = *(undefined2 *)&param_1->field_0x2;
  fVar1 = param_1->DepthBias;
  fVar6 = param_1->SlopeScaleDepthBias;
  EVar7 = param_1->DepthClipMode;
  bVar9 = param_1->bAllowMSAA;
  uVar8 = *(undefined2 *)&param_1->field_0xe;
  (this->Initializer).FillMode = (TEnumAsByte<ERasterizerFillMode>)(param_1->FillMode).Value;
  (this->Initializer).CullMode = (TEnumAsByte<ERasterizerCullMode>)TVar4.Value;
  *(undefined2 *)&(this->Initializer).field_0x2 = uVar5;
  (this->Initializer).DepthBias = fVar1;
  (this->Initializer).SlopeScaleDepthBias = fVar6;
  (this->Initializer).DepthClipMode = EVar7;
  (this->Initializer).bAllowMSAA = bVar9;
  *(undefined2 *)&(this->Initializer).field_0xe = uVar8;
  (this->RasterizerState).sType = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO;
  *(undefined8 *)&(this->RasterizerState).field_0x4 = 0;
  *(undefined8 *)((longlong)&(this->RasterizerState).pNext + 4) = 0;
  (this->RasterizerState).depthClampEnable = 0;
  (this->RasterizerState).rasterizerDiscardEnable = 0;
  (this->RasterizerState).polygonMode = VK_POLYGON_MODE_FILL;
  (this->RasterizerState).cullMode = 0;
  (this->RasterizerState).depthBiasEnable = 0;
  (this->RasterizerState).depthBiasConstantFactor = 0.0;
  (this->RasterizerState).depthBiasClamp = 0.0;
  (this->RasterizerState).depthBiasSlopeFactor = 0.0;
  *(undefined8 *)&(this->RasterizerState).lineWidth = 0x3f800000;
  (this->RasterizerState).frontFace = VK_FRONT_FACE_CLOCKWISE;
  uVar2 = (this->Initializer).FillMode.Value;
  VVar10 = VK_POLYGON_MODE_FILL;
  if (uVar2 == '\0') {
    VVar11 = VK_POLYGON_MODE_POINT;
  }
  else if (uVar2 == '\x01') {
    VVar11 = VK_POLYGON_MODE_LINE;
  }
  else {
    VVar11 = VVar10;
    if (uVar2 != '\x02') {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanState.cpp"
                         ,0xb1,L"Unknown ERasterizerFillMode %d");
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        pFVar12 = (FVulkanRasterizerState *)(*pcVar3)();
        return pFVar12;
      }
      VVar11 = VK_POLYGON_MODE_MAX_ENUM;
    }
  }
  uVar2 = (this->Initializer).CullMode.Value;
  (this->RasterizerState).polygonMode = VVar11;
  VVar11 = VVar10;
  if (uVar2 != '\0') {
    if (uVar2 == '\x01') {
      VVar11 = VK_POLYGON_MODE_LINE;
    }
    else {
      VVar11 = VK_POLYGON_MODE_POINT;
      if ((uVar2 != '\x02') &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanState.cpp"
                             ,0xbf,L"Unknown ERasterizerCullMode %d"), VVar11 = VVar10, bVar9)) {
        pcVar3 = (code *)swi(3);
        pFVar12 = (FVulkanRasterizerState *)(*pcVar3)();
        return pFVar12;
      }
    }
  }
  fVar1 = (this->Initializer).DepthBias;
  (this->RasterizerState).cullMode = VVar11;
  (this->RasterizerState).depthClampEnable = (uint)(param_1->DepthClipMode == DepthClamp);
  (this->RasterizerState).depthBiasSlopeFactor = (this->Initializer).SlopeScaleDepthBias;
  (this->RasterizerState).depthBiasConstantFactor = fVar1;
  (this->RasterizerState).depthBiasEnable = (uint)(fVar1 != 0.0);
  return this;
}

// GetInitializer @ 145babea0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */

bool __thiscall
FVulkanRasterizerState::GetInitializer
          (FVulkanRasterizerState *this,FRasterizerStateInitializerRHI *param_1)

{
  TEnumAsByte<ERasterizerCullMode> TVar1;
  undefined2 uVar2;
  float fVar3;
  float fVar4;
  ERasterizerDepthClipMode EVar5;
  bool bVar6;
  undefined2 uVar7;
  
  TVar1.Value = (this->Initializer).CullMode.Value;
  uVar2 = *(undefined2 *)&(this->Initializer).field_0x2;
  fVar3 = (this->Initializer).DepthBias;
  fVar4 = (this->Initializer).SlopeScaleDepthBias;
  EVar5 = (this->Initializer).DepthClipMode;
  bVar6 = (this->Initializer).bAllowMSAA;
  uVar7 = *(undefined2 *)&(this->Initializer).field_0xe;
  param_1->FillMode = (TEnumAsByte<ERasterizerFillMode>)(this->Initializer).FillMode.Value;
  param_1->CullMode = (TEnumAsByte<ERasterizerCullMode>)TVar1.Value;
  *(undefined2 *)&param_1->field_0x2 = uVar2;
  param_1->DepthBias = fVar3;
  param_1->SlopeScaleDepthBias = fVar4;
  param_1->DepthClipMode = EVar5;
  param_1->bAllowMSAA = bVar6;
  *(undefined2 *)&param_1->field_0xe = uVar7;
  return true;
}

