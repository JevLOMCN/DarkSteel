// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 2

// FVulkanBlendState @ 145b90d90

FVulkanBlendState * __thiscall
FVulkanBlendState::FVulkanBlendState(FVulkanBlendState *this,FBlendStateInitializerRHI *param_1)

{
  uchar uVar1;
  code *pcVar2;
  undefined8 uVar3;
  FBlendStateInitializerRHI *pFVar4;
  bool bVar5;
  VkBlendOp VVar6;
  VkBlendFactor VVar7;
  uint uVar8;
  FVulkanBlendState *pFVar9;
  FRenderTarget *pFVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  
  FRHIResource::FRHIResource((FRHIResource *)this,RRT_BlendState);
  uVar11 = 0;
  this->_padding_ = (longlong)&___7FVulkanBlendState__6B_;
  (this->Initializer).RenderTargets.Elements[0].ColorBlendOp = '\0';
  (this->Initializer).RenderTargets.Elements[0].ColorSrcBlend = '\x01';
  (this->Initializer).RenderTargets.Elements[0].ColorDestBlend = '\0';
  (this->Initializer).RenderTargets.Elements[0].AlphaBlendOp = '\0';
  *(undefined4 *)&(this->Initializer).RenderTargets.Elements[0].AlphaSrcBlend = 0xf0001;
  lVar13 = 0x28;
  pFVar4 = &this->Initializer;
  (pFVar4->RenderTargets).Elements[1].ColorSrcBlend = '\x01';
  (pFVar4->RenderTargets).Elements[1].ColorDestBlend = '\0';
  (pFVar4->RenderTargets).Elements[1].AlphaBlendOp = '\0';
  (pFVar4->RenderTargets).Elements[1].AlphaSrcBlend = '\x01';
  *(undefined4 *)&(this->Initializer).RenderTargets.Elements[1].AlphaDestBlend = 0x1000f00;
  pFVar4 = &this->Initializer;
  (pFVar4->RenderTargets).Elements[2].ColorDestBlend = '\0';
  (pFVar4->RenderTargets).Elements[2].AlphaBlendOp = '\0';
  (pFVar4->RenderTargets).Elements[2].AlphaSrcBlend = '\x01';
  (pFVar4->RenderTargets).Elements[2].AlphaDestBlend = '\0';
  *(undefined4 *)&(this->Initializer).RenderTargets.Elements[2].ColorWriteMask = 0x1000f;
  pFVar4 = &this->Initializer;
  (pFVar4->RenderTargets).Elements[3].AlphaBlendOp = '\0';
  (pFVar4->RenderTargets).Elements[3].AlphaSrcBlend = '\x01';
  (pFVar4->RenderTargets).Elements[3].AlphaDestBlend = '\0';
  (pFVar4->RenderTargets).Elements[3].ColorWriteMask = '\x0f';
  pFVar4 = &this->Initializer;
  (pFVar4->RenderTargets).Elements[4].ColorBlendOp = '\0';
  (pFVar4->RenderTargets).Elements[4].ColorSrcBlend = '\x01';
  (pFVar4->RenderTargets).Elements[4].ColorDestBlend = '\0';
  (pFVar4->RenderTargets).Elements[4].AlphaBlendOp = '\0';
  *(undefined4 *)&(this->Initializer).RenderTargets.Elements[4].AlphaSrcBlend = 0xf0001;
  pFVar4 = &this->Initializer;
  (pFVar4->RenderTargets).Elements[5].ColorSrcBlend = '\x01';
  (pFVar4->RenderTargets).Elements[5].ColorDestBlend = '\0';
  (pFVar4->RenderTargets).Elements[5].AlphaBlendOp = '\0';
  (pFVar4->RenderTargets).Elements[5].AlphaSrcBlend = '\x01';
  *(undefined4 *)&(this->Initializer).RenderTargets.Elements[5].AlphaDestBlend = 0x1000f00;
  pFVar4 = &this->Initializer;
  (pFVar4->RenderTargets).Elements[6].ColorDestBlend = '\0';
  (pFVar4->RenderTargets).Elements[6].AlphaBlendOp = '\0';
  (pFVar4->RenderTargets).Elements[6].AlphaSrcBlend = '\x01';
  (pFVar4->RenderTargets).Elements[6].AlphaDestBlend = '\0';
  *(undefined4 *)&(this->Initializer).RenderTargets.Elements[6].ColorWriteMask = 0x1000f;
  pFVar4 = &this->Initializer;
  (pFVar4->RenderTargets).Elements[7].AlphaBlendOp = '\0';
  (pFVar4->RenderTargets).Elements[7].AlphaSrcBlend = '\x01';
  (pFVar4->RenderTargets).Elements[7].AlphaDestBlend = '\0';
  (pFVar4->RenderTargets).Elements[7].ColorWriteMask = '\x0f';
  uVar3 = *(undefined8 *)&(param_1->RenderTargets).Elements[1].ColorSrcBlend;
  *(undefined8 *)(this->Initializer).RenderTargets.Elements =
       *(undefined8 *)(param_1->RenderTargets).Elements;
  *(undefined8 *)&(this->Initializer).RenderTargets.Elements[1].ColorSrcBlend = uVar3;
  uVar3 = *(undefined8 *)&(param_1->RenderTargets).Elements[3].AlphaBlendOp;
  *(undefined8 *)&(this->Initializer).RenderTargets.Elements[2].ColorDestBlend =
       *(undefined8 *)&(param_1->RenderTargets).Elements[2].ColorDestBlend;
  *(undefined8 *)&(this->Initializer).RenderTargets.Elements[3].AlphaBlendOp = uVar3;
  uVar3 = *(undefined8 *)&(param_1->RenderTargets).Elements[5].AlphaDestBlend;
  *(undefined8 *)&(this->Initializer).RenderTargets.Elements[4].AlphaSrcBlend =
       *(undefined8 *)&(param_1->RenderTargets).Elements[4].AlphaSrcBlend;
  *(undefined8 *)&(this->Initializer).RenderTargets.Elements[5].AlphaDestBlend = uVar3;
  *(undefined8 *)&(this->Initializer).RenderTargets.Elements[6].ColorWriteMask =
       *(undefined8 *)&(param_1->RenderTargets).Elements[6].ColorWriteMask;
  bVar5 = param_1->bUseAlphaToCoverage;
  (this->Initializer).bUseIndependentRenderTargetBlendStates =
       param_1->bUseIndependentRenderTargetBlendStates;
  (this->Initializer).bUseAlphaToCoverage = bVar5;
  lVar12 = 0;
  do {
    pFVar10 = (this->Initializer).RenderTargets.Elements + lVar12;
    this->BlendStates[lVar12].blendEnable = 0;
    this->BlendStates[lVar12].srcColorBlendFactor = VK_BLEND_FACTOR_ZERO;
    this->BlendStates[lVar12].dstColorBlendFactor = VK_BLEND_FACTOR_ZERO;
    this->BlendStates[lVar12].colorBlendOp = VK_BLEND_OP_ADD;
    this->BlendStates[lVar12].srcAlphaBlendFactor = VK_BLEND_FACTOR_ZERO;
    this->BlendStates[lVar12].dstAlphaBlendFactor = VK_BLEND_FACTOR_ZERO;
    this->BlendStates[lVar12].alphaBlendOp = VK_BLEND_OP_ADD;
    this->BlendStates[lVar12].colorWriteMask = 0;
    uVar1 = (pFVar10->ColorBlendOp).Value;
    if (uVar1 == '\0') {
      VVar6 = VK_BLEND_OP_ADD;
    }
    else if (uVar1 == '\x01') {
      VVar6 = VK_BLEND_OP_SUBTRACT;
    }
    else if (uVar1 == '\x02') {
      VVar6 = VK_BLEND_OP_MIN;
    }
    else if (uVar1 == '\x03') {
      VVar6 = VK_BLEND_OP_MAX;
    }
    else if (uVar1 == '\x04') {
      VVar6 = VK_BLEND_OP_REVERSE_SUBTRACT;
    }
    else {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanState.cpp"
                         ,0x5c,L"Unknown EBlendOperation %d");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pFVar9 = (FVulkanBlendState *)(*pcVar2)();
        return pFVar9;
      }
      VVar6 = VK_BLEND_OP_MAX_ENUM;
    }
    this->BlendStates[lVar12].colorBlendOp = VVar6;
    uVar1 = (pFVar10->AlphaBlendOp).Value;
    if (uVar1 == '\0') {
      VVar6 = VK_BLEND_OP_ADD;
    }
    else if (uVar1 == '\x01') {
      VVar6 = VK_BLEND_OP_SUBTRACT;
    }
    else if (uVar1 == '\x02') {
      VVar6 = VK_BLEND_OP_MIN;
    }
    else if (uVar1 == '\x03') {
      VVar6 = VK_BLEND_OP_MAX;
    }
    else if (uVar1 == '\x04') {
      VVar6 = VK_BLEND_OP_REVERSE_SUBTRACT;
    }
    else {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanState.cpp"
                         ,0x5c,L"Unknown EBlendOperation %d");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pFVar9 = (FVulkanBlendState *)(*pcVar2)();
        return pFVar9;
      }
      VVar6 = VK_BLEND_OP_MAX_ENUM;
    }
    this->BlendStates[lVar12].alphaBlendOp = VVar6;
    switch((pFVar10->ColorDestBlend).Value) {
    case '\0':
      VVar7 = VK_BLEND_FACTOR_ZERO;
      break;
    case '\x01':
      VVar7 = VK_BLEND_FACTOR_ONE;
      break;
    case '\x02':
      VVar7 = VK_BLEND_FACTOR_SRC_COLOR;
      break;
    case '\x03':
      VVar7 = VK_BLEND_FACTOR_ONE_MINUS_SRC_COLOR;
      break;
    case '\x04':
      VVar7 = VK_BLEND_FACTOR_SRC_ALPHA;
      break;
    case '\x05':
      VVar7 = VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
      break;
    case '\x06':
      VVar7 = VK_BLEND_FACTOR_DST_ALPHA;
      break;
    case '\a':
      VVar7 = VK_BLEND_FACTOR_ONE_MINUS_DST_ALPHA;
      break;
    case '\b':
      VVar7 = VK_BLEND_FACTOR_DST_COLOR;
      break;
    case '\t':
      VVar7 = VK_BLEND_FACTOR_ONE_MINUS_DST_COLOR;
      break;
    case '\n':
      VVar7 = VK_BLEND_FACTOR_CONSTANT_COLOR;
      break;
    case '\v':
      VVar7 = VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR;
      break;
    case '\f':
      VVar7 = VK_BLEND_FACTOR_SRC1_COLOR;
      break;
    case '\r':
      VVar7 = VK_BLEND_FACTOR_ONE_MINUS_SRC1_COLOR;
      break;
    case '\x0e':
      VVar7 = VK_BLEND_FACTOR_SRC1_ALPHA;
      break;
    case '\x0f':
      VVar7 = VK_BLEND_FACTOR_ONE_MINUS_SRC1_ALPHA;
      break;
    default:
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanState.cpp"
                         ,0x78,L"Unknown EBlendFactor %d");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pFVar9 = (FVulkanBlendState *)(*pcVar2)();
        return pFVar9;
      }
      VVar7 = VK_BLEND_FACTOR_MAX_ENUM;
    }
    this->BlendStates[lVar12].dstColorBlendFactor = VVar7;
    switch((pFVar10->AlphaDestBlend).Value) {
    case '\0':
      VVar7 = VK_BLEND_FACTOR_ZERO;
      break;
    case '\x01':
      VVar7 = VK_BLEND_FACTOR_ONE;
      break;
    case '\x02':
      VVar7 = VK_BLEND_FACTOR_SRC_COLOR;
      break;
    case '\x03':
      VVar7 = VK_BLEND_FACTOR_ONE_MINUS_SRC_COLOR;
      break;
    case '\x04':
      VVar7 = VK_BLEND_FACTOR_SRC_ALPHA;
      break;
    case '\x05':
      VVar7 = VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
      break;
    case '\x06':
      VVar7 = VK_BLEND_FACTOR_DST_ALPHA;
      break;
    case '\a':
      VVar7 = VK_BLEND_FACTOR_ONE_MINUS_DST_ALPHA;
      break;
    case '\b':
      VVar7 = VK_BLEND_FACTOR_DST_COLOR;
      break;
    case '\t':
      VVar7 = VK_BLEND_FACTOR_ONE_MINUS_DST_COLOR;
      break;
    case '\n':
      VVar7 = VK_BLEND_FACTOR_CONSTANT_COLOR;
      break;
    case '\v':
      VVar7 = VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR;
      break;
    case '\f':
      VVar7 = VK_BLEND_FACTOR_SRC1_COLOR;
      break;
    case '\r':
      VVar7 = VK_BLEND_FACTOR_ONE_MINUS_SRC1_COLOR;
      break;
    case '\x0e':
      VVar7 = VK_BLEND_FACTOR_SRC1_ALPHA;
      break;
    case '\x0f':
      VVar7 = VK_BLEND_FACTOR_ONE_MINUS_SRC1_ALPHA;
      break;
    default:
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanState.cpp"
                         ,0x78,L"Unknown EBlendFactor %d");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pFVar9 = (FVulkanBlendState *)(*pcVar2)();
        return pFVar9;
      }
      VVar7 = VK_BLEND_FACTOR_MAX_ENUM;
    }
    this->BlendStates[lVar12].dstAlphaBlendFactor = VVar7;
    switch((pFVar10->ColorSrcBlend).Value) {
    case '\0':
      VVar7 = VK_BLEND_FACTOR_ZERO;
      break;
    case '\x01':
      VVar7 = VK_BLEND_FACTOR_ONE;
      break;
    case '\x02':
      VVar7 = VK_BLEND_FACTOR_SRC_COLOR;
      break;
    case '\x03':
      VVar7 = VK_BLEND_FACTOR_ONE_MINUS_SRC_COLOR;
      break;
    case '\x04':
      VVar7 = VK_BLEND_FACTOR_SRC_ALPHA;
      break;
    case '\x05':
      VVar7 = VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
      break;
    case '\x06':
      VVar7 = VK_BLEND_FACTOR_DST_ALPHA;
      break;
    case '\a':
      VVar7 = VK_BLEND_FACTOR_ONE_MINUS_DST_ALPHA;
      break;
    case '\b':
      VVar7 = VK_BLEND_FACTOR_DST_COLOR;
      break;
    case '\t':
      VVar7 = VK_BLEND_FACTOR_ONE_MINUS_DST_COLOR;
      break;
    case '\n':
      VVar7 = VK_BLEND_FACTOR_CONSTANT_COLOR;
      break;
    case '\v':
      VVar7 = VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR;
      break;
    case '\f':
      VVar7 = VK_BLEND_FACTOR_SRC1_COLOR;
      break;
    case '\r':
      VVar7 = VK_BLEND_FACTOR_ONE_MINUS_SRC1_COLOR;
      break;
    case '\x0e':
      VVar7 = VK_BLEND_FACTOR_SRC1_ALPHA;
      break;
    case '\x0f':
      VVar7 = VK_BLEND_FACTOR_ONE_MINUS_SRC1_ALPHA;
      break;
    default:
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanState.cpp"
                         ,0x78,L"Unknown EBlendFactor %d");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pFVar9 = (FVulkanBlendState *)(*pcVar2)();
        return pFVar9;
      }
      VVar7 = VK_BLEND_FACTOR_MAX_ENUM;
    }
    this->BlendStates[lVar12].srcColorBlendFactor = VVar7;
    switch((pFVar10->AlphaSrcBlend).Value) {
    case '\0':
      VVar7 = VK_BLEND_FACTOR_ZERO;
      break;
    case '\x01':
      VVar7 = VK_BLEND_FACTOR_ONE;
      break;
    case '\x02':
      VVar7 = VK_BLEND_FACTOR_SRC_COLOR;
      break;
    case '\x03':
      VVar7 = VK_BLEND_FACTOR_ONE_MINUS_SRC_COLOR;
      break;
    case '\x04':
      VVar7 = VK_BLEND_FACTOR_SRC_ALPHA;
      break;
    case '\x05':
      VVar7 = VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
      break;
    case '\x06':
      VVar7 = VK_BLEND_FACTOR_DST_ALPHA;
      break;
    case '\a':
      VVar7 = VK_BLEND_FACTOR_ONE_MINUS_DST_ALPHA;
      break;
    case '\b':
      VVar7 = VK_BLEND_FACTOR_DST_COLOR;
      break;
    case '\t':
      VVar7 = VK_BLEND_FACTOR_ONE_MINUS_DST_COLOR;
      break;
    case '\n':
      VVar7 = VK_BLEND_FACTOR_CONSTANT_COLOR;
      break;
    case '\v':
      VVar7 = VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR;
      break;
    case '\f':
      VVar7 = VK_BLEND_FACTOR_SRC1_COLOR;
      break;
    case '\r':
      VVar7 = VK_BLEND_FACTOR_ONE_MINUS_SRC1_COLOR;
      break;
    case '\x0e':
      VVar7 = VK_BLEND_FACTOR_SRC1_ALPHA;
      break;
    case '\x0f':
      VVar7 = VK_BLEND_FACTOR_ONE_MINUS_SRC1_ALPHA;
      break;
    default:
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanState.cpp"
                         ,0x78,L"Unknown EBlendFactor %d");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pFVar9 = (FVulkanBlendState *)(*pcVar2)();
        return pFVar9;
      }
      VVar7 = VK_BLEND_FACTOR_MAX_ENUM;
    }
    this->BlendStates[lVar12].srcAlphaBlendFactor = VVar7;
    if ((((*(char *)((longlong)this->BlendStates + lVar13 * 7 + -0x18) == '\0') &&
         ((pFVar10->ColorDestBlend).Value == '\0')) && ((pFVar10->ColorSrcBlend).Value == '\x01'))
       && ((((pFVar10->AlphaBlendOp).Value == '\0' && ((pFVar10->AlphaDestBlend).Value == '\0')) &&
           ((pFVar10->AlphaSrcBlend).Value == '\x01')))) {
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
    }
    this->BlendStates[lVar12].blendEnable = uVar8;
    uVar11 = uVar11 + 1;
    uVar8 = (pFVar10->ColorWriteMask).Value & 1;
    this->BlendStates[lVar12].colorWriteMask = uVar8;
    uVar8 = (pFVar10->ColorWriteMask).Value & 2 | uVar8;
    this->BlendStates[lVar12].colorWriteMask = uVar8;
    uVar8 = (pFVar10->ColorWriteMask).Value & 4 | uVar8;
    this->BlendStates[lVar12].colorWriteMask = uVar8;
    lVar13 = lVar13 + 1;
    this->BlendStates[lVar12].colorWriteMask = (pFVar10->ColorWriteMask).Value & 8 | uVar8;
    lVar12 = lVar12 + 1;
  } while (uVar11 < 8);
  return this;
}

// GetInitializer @ 145babe30

bool __thiscall
FVulkanBlendState::GetInitializer(FVulkanBlendState *this,FBlendStateInitializerRHI *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  
  uVar1 = *(undefined8 *)&(this->Initializer).RenderTargets.Elements[1].ColorSrcBlend;
  *(undefined8 *)(param_1->RenderTargets).Elements =
       *(undefined8 *)(this->Initializer).RenderTargets.Elements;
  *(undefined8 *)&(param_1->RenderTargets).Elements[1].ColorSrcBlend = uVar1;
  uVar1 = *(undefined8 *)&(this->Initializer).RenderTargets.Elements[3].AlphaBlendOp;
  *(undefined8 *)&(param_1->RenderTargets).Elements[2].ColorDestBlend =
       *(undefined8 *)&(this->Initializer).RenderTargets.Elements[2].ColorDestBlend;
  *(undefined8 *)&(param_1->RenderTargets).Elements[3].AlphaBlendOp = uVar1;
  uVar1 = *(undefined8 *)&(this->Initializer).RenderTargets.Elements[5].AlphaDestBlend;
  *(undefined8 *)&(param_1->RenderTargets).Elements[4].AlphaSrcBlend =
       *(undefined8 *)&(this->Initializer).RenderTargets.Elements[4].AlphaSrcBlend;
  *(undefined8 *)&(param_1->RenderTargets).Elements[5].AlphaDestBlend = uVar1;
  *(undefined8 *)&(param_1->RenderTargets).Elements[6].ColorWriteMask =
       *(undefined8 *)&(this->Initializer).RenderTargets.Elements[6].ColorWriteMask;
  bVar2 = (this->Initializer).bUseAlphaToCoverage;
  param_1->bUseIndependentRenderTargetBlendStates =
       (this->Initializer).bUseIndependentRenderTargetBlendStates;
  param_1->bUseAlphaToCoverage = bVar2;
  return true;
}

