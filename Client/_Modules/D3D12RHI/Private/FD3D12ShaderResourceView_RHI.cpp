// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 5

// FD3D12ShaderResourceView_RHI @ 145a462e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12ShaderResourceView_RHI * __thiscall
FD3D12ShaderResourceView_RHI::FD3D12ShaderResourceView_RHI
          (FD3D12ShaderResourceView_RHI *this,FD3D12Device *param_1,FRHIViewableResource *param_2,
          FRHIViewDesc *param_3,FD3D12ShaderResourceView_RHI *param_4)

{
  EViewType EVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  FD3D12ShaderResourceView_RHI *pFVar5;
  FD3D12View *pFVar6;
  FD3D12View *pFVar7;
  ERHIDescriptorType EVar8;
  
  FRHIResource::FRHIResource((FRHIResource *)this,RRT_ShaderResourceView);
  *(undefined ***)this = &___7FRHIView__6B_;
  *(FRHIViewableResource **)&this->field_0x18 = param_2;
  if (param_2 != (FRHIViewableResource *)0x0) {
    FRHIResource::AddRef((FRHIResource *)param_2);
  }
  uVar3 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  *(undefined8 *)&this->field_0x20 = *(undefined8 *)&param_3->field0_0x0;
  *(undefined8 *)&this->field_0x28 = uVar3;
  if ((param_2 == (FRHIViewableResource *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InResource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0xcae,L"Cannot create a view of a nullptr resource."), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FD3D12ShaderResourceView_RHI *)(*pcVar2)();
    return pFVar5;
  }
  *(undefined ***)this = &___7FRHIShaderResourceView__6B_;
  if (((this->field_0x20 != '\0') && (this->field_0x20 != '\x02')) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ViewDesc.IsSRV()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0xced,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FD3D12ShaderResourceView_RHI *)(*pcVar2)();
    return pFVar5;
  }
  pFVar7 = (FD3D12View *)0x0;
  if (*(char *)((longlong)&param_3->field0_0x0 + 2) == '\x03') {
    pFVar7 = *(FD3D12View **)((longlong)&param_3->field0_0x0 + 8);
  }
  EVar1 = (param_3->field0_0x0).Common.ViewType;
  if (EVar1 != BufferSRV) {
    if (EVar1 == BufferUAV) {
      EVar8 = BufferUAV;
      goto LAB_145a463ce;
    }
    if (EVar1 == TextureSRV) {
      EVar8 = TextureSRV;
      goto LAB_145a463ce;
    }
    if (EVar1 == TextureUAV) {
      EVar8 = TextureUAV;
      goto LAB_145a463ce;
    }
  }
  EVar8 = BufferSRV;
LAB_145a463ce:
  pFVar6 = (FD3D12View *)&param_4->field_0x30;
  if (param_4 == (FD3D12ShaderResourceView_RHI *)0x0) {
    pFVar6 = (FD3D12View *)0x0;
  }
  FD3D12View::FD3D12View((FD3D12View *)&this->field_0x30,param_1,EVar8,Standard,pFVar6);
  *(FD3D12View **)&this->field_0xc0 = pFVar7;
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined4 *)&this->field_0xb8 = 0;
  this->field_0xbc = 0;
  *(undefined4 *)&this->field_0xc8 = 1;
  *(undefined8 *)&this->field_0xd0 = 0;
  *(undefined8 *)&this->field_0xd8 = 0;
  *(undefined8 *)&this->field_0xe0 = 0;
  *(undefined8 *)&this->field_0xe8 = 0;
  *(undefined8 *)&this->field_0xf0 = 0;
  *(undefined8 *)&this->field_0xf8 = 0;
  *(undefined8 *)&this->field_0x100 = 0;
  *(undefined8 *)&this->field_0x108 = 0;
  *(undefined ***)this = &_vftable__for__FRHIShaderResourceView__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__FD3D12ShaderResourceView__;
  return this;
}

// CreateView @ 145a604f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12ShaderResourceView_RHI::CreateView(FD3D12ShaderResourceView_RHI *this)

{
  EFlags EVar1;
  FViewInfo *pFVar2;
  FViewInfo *pFVar3;
  FD3D12Texture *pFVar4;
  undefined1 auStack_88 [32];
  FResourceInfo local_68;
  D3D12_SHADER_RESOURCE_VIEW_DESC local_50;
  FViewInfo local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  if ((this->field_0x20 == '\0') || (this->field_0x20 == '\x01')) {
    pFVar4 = *(FD3D12Texture **)&this->field_0x18;
    local_50.field3_0x10._16_8_ = 0;
    local_50.Format = DXGI_FORMAT_UNKNOWN;
    local_50.ViewDimension = D3D12_SRV_DIMENSION_UNKNOWN;
    local_50.Shader4ComponentMapping = 0;
    local_50._12_4_ = 0;
    local_50.field3_0x10.Buffer.FirstElement = 0;
    local_50.field3_0x10._8_8_ = 0;
    pFVar3 = FRHIViewDesc::FBufferSRV::GetViewInfo
                       ((FBufferSRV *)&this->field_0x20,&local_28,(FRHIBuffer *)pFVar4);
    EVar1 = TranslateDesc(&local_50,(FD3D12Buffer *)pFVar4,pFVar3);
    local_68.BaseResource = (FD3D12BaseShaderResource *)&pFVar4->_padding_;
  }
  else {
    pFVar4 = *(FD3D12Texture **)&this->field_0x18;
    local_50.field3_0x10._16_8_ = 0;
    local_50.Format = DXGI_FORMAT_UNKNOWN;
    local_50.ViewDimension = D3D12_SRV_DIMENSION_UNKNOWN;
    local_50.Shader4ComponentMapping = 0;
    local_50._12_4_ = 0;
    local_50.field3_0x10.Buffer.FirstElement = 0;
    local_50.field3_0x10._8_8_ = 0;
    pFVar2 = FRHIViewDesc::FTextureSRV::GetViewInfo
                       ((FTextureSRV *)&this->field_0x20,(FViewInfo *)&local_28,
                        (FRHITexture *)pFVar4);
    EVar1 = TranslateDesc(&local_50,pFVar4,pFVar2);
    local_68.BaseResource = (FD3D12BaseShaderResource *)&pFVar4->_padding_;
  }
  local_68.ResourceLocation = (FD3D12ResourceLocation *)0x0;
  if (pFVar4 == (FD3D12Texture *)0x0) {
    local_68.BaseResource = (FD3D12BaseShaderResource *)local_68.ResourceLocation;
  }
  if (local_68.BaseResource == (FD3D12BaseShaderResource *)0x0) {
    local_68.Resource = (FD3D12Resource *)0x0;
  }
  else {
    local_68.ResourceLocation = &(local_68.BaseResource)->ResourceLocation;
    local_68.Resource = ((local_68.BaseResource)->ResourceLocation).UnderlyingResource;
  }
  FD3D12ShaderResourceView::UpdateResourceInfo
            ((FD3D12ShaderResourceView *)&this->field_0x30,&local_68,&local_50,EVar1);
  *(DXGI_FORMAT *)&this->field_0x88 = local_50.Format;
  *(D3D12_SRV_DIMENSION *)&this->field_0x8c = local_50.ViewDimension;
  *(uint *)&this->field_0x90 = local_50.Shader4ComponentMapping;
  *(undefined4 *)&this->field_0x94 = local_50._12_4_;
  *(ulong64 *)&this->field_0x98 = local_50.field3_0x10.Buffer.FirstElement;
  *(undefined8 *)&this->field_0xa0 = local_50.field3_0x10._8_8_;
  *(undefined8 *)&this->field_0xa8 = local_50.field3_0x10._16_8_;
  FD3D12ViewRange::FD3D12ViewRange((FD3D12ViewRange *)&local_28,&local_50);
  *(undefined8 *)&this->field_0x5c = local_28._0_8_;
  FD3D12View::CreateView((FD3D12View *)&this->field_0x30,&local_68,0);
  return;
}

// GetBindlessHandle @ 145a68ce0

FRHIDescriptorHandle __thiscall
FD3D12ShaderResourceView_RHI::GetBindlessHandle(FD3D12ShaderResourceView_RHI *this)

{
  FRHIDescriptorHandle in_RDX;
  
  *(undefined8 *)in_RDX = *(undefined8 *)&this->field_0x78;
  return in_RDX;
}

// ResourceRenamed @ 145a7c490

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12ShaderResourceView_RHI::ResourceRenamed
          (FD3D12ShaderResourceView_RHI *this,FD3D12ContextArray *param_1,
          FD3D12BaseShaderResource *param_2,FD3D12ResourceLocation *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000145a7c498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)&this[-1].field_0xe0 + 0x20))(&this[-1].field_0xe0);
  return;
}

// UpdateView @ 145a832f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12ShaderResourceView_RHI::UpdateView
          (FD3D12ShaderResourceView_RHI *this,FD3D12ContextArray *param_1)

{
  EFlags EVar1;
  FViewInfo *pFVar2;
  FViewInfo *pFVar3;
  FD3D12Texture *pFVar4;
  undefined1 auStack_98 [32];
  FResourceInfo local_78;
  D3D12_SHADER_RESOURCE_VIEW_DESC local_60;
  FViewInfo local_38;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_98;
  if ((this->field_0x20 == '\0') || (this->field_0x20 == '\x01')) {
    pFVar4 = *(FD3D12Texture **)&this->field_0x18;
    local_60.field3_0x10._16_8_ = 0;
    local_60.Format = DXGI_FORMAT_UNKNOWN;
    local_60.ViewDimension = D3D12_SRV_DIMENSION_UNKNOWN;
    local_60.Shader4ComponentMapping = 0;
    local_60._12_4_ = 0;
    local_60.field3_0x10.Buffer.FirstElement = 0;
    local_60.field3_0x10._8_8_ = 0;
    pFVar3 = FRHIViewDesc::FBufferSRV::GetViewInfo
                       ((FBufferSRV *)&this->field_0x20,&local_38,(FRHIBuffer *)pFVar4);
    EVar1 = TranslateDesc(&local_60,(FD3D12Buffer *)pFVar4,pFVar3);
    local_78.BaseResource = (FD3D12BaseShaderResource *)&pFVar4->_padding_;
  }
  else {
    pFVar4 = *(FD3D12Texture **)&this->field_0x18;
    local_60.field3_0x10._16_8_ = 0;
    local_60.Format = DXGI_FORMAT_UNKNOWN;
    local_60.ViewDimension = D3D12_SRV_DIMENSION_UNKNOWN;
    local_60.Shader4ComponentMapping = 0;
    local_60._12_4_ = 0;
    local_60.field3_0x10.Buffer.FirstElement = 0;
    local_60.field3_0x10._8_8_ = 0;
    pFVar2 = FRHIViewDesc::FTextureSRV::GetViewInfo
                       ((FTextureSRV *)&this->field_0x20,(FViewInfo *)&local_38,
                        (FRHITexture *)pFVar4);
    EVar1 = TranslateDesc(&local_60,pFVar4,pFVar2);
    local_78.BaseResource = (FD3D12BaseShaderResource *)&pFVar4->_padding_;
  }
  local_78.ResourceLocation = (FD3D12ResourceLocation *)0x0;
  if (pFVar4 == (FD3D12Texture *)0x0) {
    local_78.BaseResource = (FD3D12BaseShaderResource *)local_78.ResourceLocation;
  }
  if (local_78.BaseResource == (FD3D12BaseShaderResource *)0x0) {
    local_78.Resource = (FD3D12Resource *)0x0;
  }
  else {
    local_78.ResourceLocation = &(local_78.BaseResource)->ResourceLocation;
    local_78.Resource = ((local_78.BaseResource)->ResourceLocation).UnderlyingResource;
  }
  FD3D12ShaderResourceView::UpdateResourceInfo
            ((FD3D12ShaderResourceView *)&this->field_0x30,&local_78,&local_60,EVar1);
  *(DXGI_FORMAT *)&this->field_0x88 = local_60.Format;
  *(D3D12_SRV_DIMENSION *)&this->field_0x8c = local_60.ViewDimension;
  *(uint *)&this->field_0x90 = local_60.Shader4ComponentMapping;
  *(undefined4 *)&this->field_0x94 = local_60._12_4_;
  *(ulong64 *)&this->field_0x98 = local_60.field3_0x10.Buffer.FirstElement;
  *(undefined8 *)&this->field_0xa0 = local_60.field3_0x10._8_8_;
  *(undefined8 *)&this->field_0xa8 = local_60.field3_0x10._16_8_;
  FD3D12ViewRange::FD3D12ViewRange((FD3D12ViewRange *)&local_38,&local_60);
  *(undefined8 *)&this->field_0x5c = local_38._0_8_;
  FD3D12View::UpdateView((FD3D12View *)&this->field_0x30,param_1,&local_78,0);
  return;
}

