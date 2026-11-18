// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// ~FMeshEdgesViewFamilyData @ 144ef0d20

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall FMeshEdgesViewFamilyData::~FMeshEdgesViewFamilyData(FMeshEdgesViewFamilyData *this)

{
  FRenderTargetTexture *pFVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7FMeshEdgesViewFamilyData__6B_;
  pFVar1 = (this->WireframeColor).Ptr;
  if (pFVar1 != (FRenderTargetTexture *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x20))();
  }
  pFVar1 = (this->WireframeDepth).Ptr;
  if (pFVar1 != (FRenderTargetTexture *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x20))();
  }
  if (*(longlong *)&(this->ViewFamilySettings).OnBeforeWireframeRender != 0) {
    plVar2 = *(longlong **)&(this->ViewFamilySettings).OnBeforeWireframeRender.field_0x28;
    plVar4 = (longlong *)&(this->ViewFamilySettings).OnBeforeWireframeRender.field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar4 = plVar2;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  pFVar3 = (this->ViewSettings).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ViewRects).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar1 = (this->WireframeDepth).Ptr;
  if (pFVar1 != (FRenderTargetTexture *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  pFVar1 = (this->WireframeColor).Ptr;
  if (pFVar1 != (FRenderTargetTexture *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  this->_padding_ = (longlong)&___7ISceneViewFamilyExtention__6B_;
  return;
}

// CreateRenderTargets @ 144f010e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FMeshEdgesViewFamilyData::CreateRenderTargets
          (FMeshEdgesViewFamilyData *this,Type param_1,TIntPoint<int> param_2)

{
  TUniquePtr<FRenderTargetTexture,TDefaultDelete<FRenderTargetTexture>_> *pTVar1;
  uint uVar2;
  FRenderTargetTexture *pFVar3;
  FRenderTargetTexture *pFVar4;
  FRenderTargetTexture *pFVar5;
  undefined8 *puVar6;
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8 [32];
  uint local_198;
  TIntPoint<int>_u_0 local_194;
  undefined4 local_18c;
  uchar local_188;
  uchar local_187;
  undefined4 local_186;
  ForElementType<EPixelFormat> local_178;
  int local_170;
  int local_16c;
  wchar_t *local_168;
  undefined8 local_160;
  FResourceBulkDataInterface *local_158;
  FName local_150;
  FName local_148;
  FRHITextureDesc local_138;
  wchar_t *local_e8;
  ERHIAccess local_e0;
  ERHITextureInitAction local_dc;
  FResourceBulkDataInterface *local_d8;
  FName local_d0;
  FName local_c8;
  FRHITextureDesc local_b8;
  wchar_t *local_68;
  ERHIAccess local_60;
  ERHITextureInitAction local_5c;
  FResourceBulkDataInterface *local_58;
  FName local_50;
  FName local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  uVar2 = FSceneTexturesConfig::GetEditorPrimitiveNumSamples(param_1);
  pFVar5 = (FRenderTargetTexture *)0x0;
  local_198 = 0;
  local_18c._0_2_ = 1;
  local_18c._2_2_ = 1;
  local_188 = '\x01';
  local_168 = L"MeshEdgesRenderTarget";
  local_1b8._28_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_186._0_1_ = Texture2D;
  local_186._1_1_ = PF_B8G8R8A8;
  local_186._2_1_ = PF_Unknown;
  local_186._3_1_ = 0xff;
  local_178 = (ForElementType<EPixelFormat>)0x0;
  local_170 = 0;
  local_16c = 1;
  local_160._0_4_ = SRVMask;
  local_160._4_4_ = Default;
  local_158 = (FResourceBulkDataInterface *)0x0;
  local_150.ComparisonIndex.Value = 0;
  local_150.Number = 0;
  local_148.ComparisonIndex.Value = 0;
  local_148.Number = 0;
  local_1b8._8_8_ = FClearValueBinding::Transparent._0_8_;
  local_1b8._16_8_ = FClearValueBinding::Transparent.Value._4_8_;
  local_1b8._24_4_ = FClearValueBinding::Transparent.Value.Color[3];
  local_1b8._0_8_ = ShaderResource|RenderTargetable;
  local_194 = param_2.field0_0x0;
  local_187 = (uchar)uVar2;
  FRHITextureDesc::FRHITextureDesc(&local_b8,(FRHITextureDesc *)local_1b8);
  local_68 = local_168;
  local_60 = (ERHIAccess)local_160;
  local_5c = local_160._4_4_;
  local_58 = local_158;
  local_50 = local_150;
  local_48 = local_148;
  if (local_178 != (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_178);
  }
  local_198 = 0;
  local_1b8._28_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_18c._0_2_ = 1;
  local_18c._2_2_ = 1;
  local_168 = L"MeshEdgesDepthRenderTarget";
  local_1b8._24_4_ = FClearValueBinding::DepthFar.Value.Color[3];
  local_188 = '\x01';
  local_186._0_1_ = Texture2D;
  local_186._1_1_ = PF_DepthStencil;
  local_186._2_1_ = PF_Unknown;
  local_186._3_1_ = 0xff;
  local_178 = (ForElementType<EPixelFormat>)0x0;
  local_170 = 0;
  local_16c = 1;
  local_160._0_4_ = SRVMask;
  local_160._4_4_ = Default;
  local_158 = (FResourceBulkDataInterface *)0x0;
  local_150.ComparisonIndex.Value = 0;
  local_150.Number = 0;
  local_148.ComparisonIndex.Value = 0;
  local_148.Number = 0;
  local_1b8._8_8_ = FClearValueBinding::DepthFar._0_8_;
  local_1b8._16_8_ = FClearValueBinding::DepthFar.Value._4_8_;
  local_1b8._0_8_ = ShaderResource|DepthStencilTargetable;
  local_194 = param_2.field0_0x0;
  local_187 = (uchar)uVar2;
  FRHITextureDesc::FRHITextureDesc(&local_138,(FRHITextureDesc *)local_1b8);
  local_e8 = local_168;
  local_e0 = (ERHIAccess)local_160;
  local_dc = local_160._4_4_;
  local_d8 = local_158;
  local_d0 = local_150;
  local_c8 = local_148;
  if (local_178 != (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_178);
  }
  pFVar3 = ::operator_new(0xe0);
  pFVar4 = pFVar5;
  if (pFVar3 != (FRenderTargetTexture *)0x0) {
    FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)local_1b8,&local_b8);
    local_168 = local_68;
    local_160._4_4_ = local_5c;
    local_160._0_4_ = local_60;
    local_150 = local_50;
    local_158 = local_58;
    local_148 = local_48;
    pFVar4 = FRenderTargetTexture::FRenderTargetTexture(pFVar3,(FRHITextureCreateDesc *)local_1b8);
  }
  pTVar1 = &this->WireframeColor;
  if (pTVar1 == (TUniquePtr<FRenderTargetTexture,TDefaultDelete<FRenderTargetTexture>_> *)&local_1c8
     ) {
    if (pFVar4 != (FRenderTargetTexture *)0x0) {
      puVar6 = (undefined8 *)pFVar4->_padding_;
      goto LAB_144f01364;
    }
  }
  else {
    pFVar3 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar4;
    if (pFVar3 != (FRenderTargetTexture *)0x0) {
      puVar6 = (undefined8 *)pFVar3->_padding_;
      pFVar4 = pFVar3;
LAB_144f01364:
      (*(code *)*puVar6)(pFVar4,1);
    }
  }
  pFVar4 = ::operator_new(0xe0);
  if (pFVar4 != (FRenderTargetTexture *)0x0) {
    FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)local_1b8,&local_138);
    local_168 = local_e8;
    local_160._4_4_ = local_dc;
    local_160._0_4_ = local_e0;
    local_150 = local_d0;
    local_158 = local_d8;
    local_148 = local_c8;
    pFVar5 = FRenderTargetTexture::FRenderTargetTexture(pFVar4,(FRHITextureCreateDesc *)local_1b8);
  }
  pTVar1 = &this->WireframeDepth;
  if (pTVar1 == (TUniquePtr<FRenderTargetTexture,TDefaultDelete<FRenderTargetTexture>_> *)&local_1c0
     ) {
    if (pFVar5 == (FRenderTargetTexture *)0x0) goto LAB_144f013f3;
    puVar6 = (undefined8 *)pFVar5->_padding_;
  }
  else {
    pFVar4 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar5;
    if (pFVar4 == (FRenderTargetTexture *)0x0) goto LAB_144f013f3;
    puVar6 = (undefined8 *)pFVar4->_padding_;
    pFVar5 = pFVar4;
  }
  (*(code *)*puVar6)(pFVar5,1);
LAB_144f013f3:
  if (local_138.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_138.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  if (local_b8.AliasableFormats.AllocatorInstance.SecondaryData != (ForElementType<EPixelFormat>)0x0
     ) {
    FMemory::Free((void *)local_b8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  return;
}

// GetSubclassIdentifier @ 144f19c20

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

wchar_t * __thiscall FMeshEdgesViewFamilyData::GetSubclassIdentifier(FMeshEdgesViewFamilyData *this)

{
  return L"FMeshEdgesViewFamilyData";
}

