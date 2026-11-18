// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 5

// FD3D12UnorderedAccessView_RHI @ 145a90150

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

FD3D12UnorderedAccessView_RHI * __thiscall
FD3D12UnorderedAccessView_RHI::FD3D12UnorderedAccessView_RHI
          (FD3D12UnorderedAccessView_RHI *this,FD3D12Device *param_1,FRHIViewableResource *param_2,
          FRHIViewDesc *param_3,FD3D12UnorderedAccessView_RHI *param_4)

{
  EViewType EVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  FD3D12UnorderedAccessView_RHI *pFVar5;
  FD3D12UnorderedAccessView *pFVar6;
  ERHIDescriptorType EVar7;
  
  FRHIResource::FRHIResource((FRHIResource *)this,RRT_UnorderedAccessView);
  *(undefined ***)this = &___7FRHIView__6B_;
  *(FRHIViewableResource **)&this->field_0x18 = param_2;
  if (param_2 != (FRHIViewableResource *)0x0) {
    FRHIResource::AddRef((FRHIResource *)param_2);
  }
  uVar3 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  *(undefined8 *)&this->field_0x20 = *(undefined8 *)&param_3->field0_0x0;
  *(undefined8 *)&this->field_0x28 = uVar3;
  if (param_2 == (FRHIViewableResource *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InResource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xcae,L"Cannot create a view of a nullptr resource.");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FD3D12UnorderedAccessView_RHI *)(*pcVar2)();
      return pFVar5;
    }
  }
  *(undefined ***)this = &___7FRHIUnorderedAccessView__6B_;
  if ((this->field_0x20 == '\0') || (this->field_0x20 == '\x02')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ViewDesc.IsUAV()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xce3,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FD3D12UnorderedAccessView_RHI *)(*pcVar2)();
      return pFVar5;
    }
  }
  EVar1 = (param_3->field0_0x0).Common.ViewType;
  if (EVar1 != BufferSRV) {
    if (EVar1 == BufferUAV) {
      EVar7 = BufferUAV;
      goto LAB_145a90228;
    }
    if (EVar1 == TextureSRV) {
      EVar7 = TextureSRV;
      goto LAB_145a90228;
    }
    if (EVar1 == TextureUAV) {
      EVar7 = TextureUAV;
      goto LAB_145a90228;
    }
  }
  EVar7 = BufferSRV;
LAB_145a90228:
  pFVar6 = (FD3D12UnorderedAccessView *)&param_4->field_0x30;
  if (param_4 == (FD3D12UnorderedAccessView_RHI *)0x0) {
    pFVar6 = (FD3D12UnorderedAccessView *)0x0;
  }
  FD3D12UnorderedAccessView::FD3D12UnorderedAccessView
            ((FD3D12UnorderedAccessView *)&this->field_0x30,param_1,pFVar6,EVar7);
  *(undefined4 *)&this->field_0xc8 = 1;
  *(undefined8 *)&this->field_0xd0 = 0;
  *(undefined8 *)&this->field_0xd8 = 0;
  *(undefined8 *)&this->field_0xe0 = 0;
  *(undefined8 *)&this->field_0xe8 = 0;
  *(undefined8 *)&this->field_0xf0 = 0;
  *(undefined8 *)&this->field_0xf8 = 0;
  *(undefined8 *)&this->field_0x100 = 0;
  *(undefined8 *)&this->field_0x108 = 0;
  *(undefined ***)this = &_vftable__for__FRHIUnorderedAccessView__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__FD3D12UnorderedAccessView__;
  return this;
}

// CreateView @ 145aa0590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12UnorderedAccessView_RHI::CreateView(FD3D12UnorderedAccessView_RHI *this)

{
  FD3D12Texture *pFVar1;
  FD3D12Buffer *pFVar2;
  FRHIDescriptorHandle FVar3;
  code *pcVar4;
  EFlags EVar5;
  bool bVar6;
  FViewInfo *pFVar7;
  FViewInfo *pFVar8;
  FResourceInfo *pFVar9;
  undefined1 auStack_e8 [32];
  FResourceInfo local_c8;
  FResourceInfo local_b0;
  FD3D12ViewRange local_98;
  FD3D12ViewRange local_90;
  D3D12_UNORDERED_ACCESS_VIEW_DESC local_88;
  D3D12_UNORDERED_ACCESS_VIEW_DESC local_60;
  FViewInfo local_38;
  FViewInfo local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if ((this->field_0x20 == '\0') || (this->field_0x20 == '\x01')) {
    pFVar2 = *(FD3D12Buffer **)&this->field_0x18;
    local_60.field2_0x8._24_8_ = 0;
    local_60.Format = DXGI_FORMAT_UNKNOWN;
    local_60.ViewDimension = D3D12_UAV_DIMENSION_UNKNOWN;
    local_60.field2_0x8.Buffer.FirstElement = 0;
    local_60.field2_0x8._8_8_ = 0;
    local_60.field2_0x8.Buffer.CounterOffsetInBytes = 0;
    pFVar8 = FRHIViewDesc::FBufferUAV::GetViewInfo
                       ((FBufferUAV *)&this->field_0x20,&local_28,(FRHIBuffer *)pFVar2);
    EVar5 = TranslateDesc(&local_60,pFVar2,pFVar8);
    local_b0.ResourceLocation = (FD3D12ResourceLocation *)0x0;
    local_b0.BaseResource = (FD3D12BaseShaderResource *)&pFVar2->_padding_;
    if (pFVar2 == (FD3D12Buffer *)0x0) {
      local_b0.BaseResource = (FD3D12BaseShaderResource *)local_b0.ResourceLocation;
    }
    if (local_b0.BaseResource == (FD3D12BaseShaderResource *)0x0) {
      local_b0.Resource = (FD3D12Resource *)0x0;
    }
    else {
      local_b0.ResourceLocation = &(local_b0.BaseResource)->ResourceLocation;
      local_b0.Resource = ((local_b0.BaseResource)->ResourceLocation).UnderlyingResource;
    }
    FD3D12UnorderedAccessView::UpdateResourceInfo
              ((FD3D12UnorderedAccessView *)&this->field_0x30,&local_b0,&local_60,EVar5);
    *(DXGI_FORMAT *)&this->field_0x88 = local_60.Format;
    *(D3D12_UAV_DIMENSION *)&this->field_0x8c = local_60.ViewDimension;
    *(ulong64 *)&this->field_0x90 = local_60.field2_0x8.Buffer.FirstElement;
    *(undefined8 *)&this->field_0x98 = local_60.field2_0x8._8_8_;
    *(ulong64 *)&this->field_0xa0 = local_60.field2_0x8.Buffer.CounterOffsetInBytes;
    *(undefined8 *)&this->field_0xa8 = local_60.field2_0x8._24_8_;
    FD3D12ViewRange::FD3D12ViewRange(&local_90,&local_60);
    pFVar9 = &local_b0;
    local_98 = local_90;
  }
  else {
    pFVar1 = *(FD3D12Texture **)&this->field_0x18;
    local_88.field2_0x8._24_8_ = 0;
    local_88.Format = DXGI_FORMAT_UNKNOWN;
    local_88.ViewDimension = D3D12_UAV_DIMENSION_UNKNOWN;
    local_88.field2_0x8.Buffer.FirstElement = 0;
    local_88.field2_0x8._8_8_ = 0;
    local_88.field2_0x8.Buffer.CounterOffsetInBytes = 0;
    pFVar7 = FRHIViewDesc::FTextureUAV::GetViewInfo
                       ((FTextureUAV *)&this->field_0x20,&local_38,(FRHITexture *)pFVar1);
    EVar5 = TranslateDesc(&local_88,pFVar1,pFVar7);
    local_c8.ResourceLocation = (FD3D12ResourceLocation *)0x0;
    local_c8.BaseResource = (FD3D12BaseShaderResource *)&pFVar1->_padding_;
    if (pFVar1 == (FD3D12Texture *)0x0) {
      local_c8.BaseResource = (FD3D12BaseShaderResource *)local_c8.ResourceLocation;
    }
    if (local_c8.BaseResource == (FD3D12BaseShaderResource *)0x0) {
      local_c8.Resource = (FD3D12Resource *)0x0;
    }
    else {
      local_c8.ResourceLocation = &(local_c8.BaseResource)->ResourceLocation;
      local_c8.Resource = ((local_c8.BaseResource)->ResourceLocation).UnderlyingResource;
    }
    FD3D12UnorderedAccessView::UpdateResourceInfo
              ((FD3D12UnorderedAccessView *)&this->field_0x30,&local_c8,&local_88,EVar5);
    *(DXGI_FORMAT *)&this->field_0x88 = local_88.Format;
    *(D3D12_UAV_DIMENSION *)&this->field_0x8c = local_88.ViewDimension;
    *(ulong64 *)&this->field_0x90 = local_88.field2_0x8.Buffer.FirstElement;
    *(undefined8 *)&this->field_0x98 = local_88.field2_0x8._8_8_;
    *(ulong64 *)&this->field_0xa0 = local_88.field2_0x8.Buffer.CounterOffsetInBytes;
    *(undefined8 *)&this->field_0xa8 = local_88.field2_0x8._24_8_;
    FD3D12ViewRange::FD3D12ViewRange(&local_98,&local_88);
    pFVar9 = &local_c8;
  }
  *(TRHIRange<unsigned_short> *)&this->field_0x5c = local_98.Array;
  *(TRHIRange<unsigned_char> *)&this->field_0x60 = local_98.Plane;
  *(TRHIRange<unsigned_char> *)&this->field_0x62 = local_98.Mip;
  FD3D12View::UpdateResourceInfo((FD3D12View *)&this->field_0x30,pFVar9,0x20);
  if ((*(int *)&this->field_0x78 != -1) && (this->field_0x7c != '\t')) {
    if (*(longlong *)&this->field_0x38 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FVar3.Index = *(uint *)&this->field_0x78;
    FVar3.Type = this->field_0x7c;
    FVar3._5_3_ = *(undefined3 *)&this->field_0x7d;
    FD3D12BindlessDescriptorManager::InitializeDescriptor
              ((FD3D12BindlessDescriptorManager *)(*(longlong *)&this->field_0x38 + 0x730),FVar3,
               (FD3D12View *)&this->field_0x30);
  }
  return;
}

// GetBindlessHandle @ 145aa8f10

FRHIDescriptorHandle __thiscall
FD3D12UnorderedAccessView_RHI::GetBindlessHandle(FD3D12UnorderedAccessView_RHI *this)

{
  FRHIDescriptorHandle in_RDX;
  
  *(undefined8 *)in_RDX = *(undefined8 *)&this->field_0x78;
  return in_RDX;
}

// ResourceRenamed @ 145ab8240

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12UnorderedAccessView_RHI::ResourceRenamed
          (FD3D12UnorderedAccessView_RHI *this,FD3D12ContextArray *param_1,
          FD3D12BaseShaderResource *param_2,FD3D12ResourceLocation *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000145ab8248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)&this[-1].field_0xe0 + 0x20))(&this[-1].field_0xe0);
  return;
}

// UpdateView @ 145abbf50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12UnorderedAccessView_RHI::UpdateView
          (FD3D12UnorderedAccessView_RHI *this,FD3D12ContextArray *param_1)

{
  FD3D12Texture *pFVar1;
  FD3D12Buffer *pFVar2;
  FRHIDescriptorHandle FVar3;
  code *pcVar4;
  EFlags EVar5;
  bool bVar6;
  FViewInfo *pFVar7;
  FViewInfo *pFVar8;
  FResourceInfo *pFVar9;
  undefined1 auStack_f8 [32];
  FResourceInfo local_d8;
  FResourceInfo local_c0;
  FD3D12ViewRange local_a8;
  FD3D12ViewRange local_a0;
  D3D12_UNORDERED_ACCESS_VIEW_DESC local_98;
  D3D12_UNORDERED_ACCESS_VIEW_DESC local_70;
  FViewInfo local_48;
  FViewInfo local_38;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if ((this->field_0x20 == '\0') || (this->field_0x20 == '\x01')) {
    pFVar2 = *(FD3D12Buffer **)&this->field_0x18;
    local_70.field2_0x8._24_8_ = 0;
    local_70.Format = DXGI_FORMAT_UNKNOWN;
    local_70.ViewDimension = D3D12_UAV_DIMENSION_UNKNOWN;
    local_70.field2_0x8.Buffer.FirstElement = 0;
    local_70.field2_0x8._8_8_ = 0;
    local_70.field2_0x8.Buffer.CounterOffsetInBytes = 0;
    pFVar8 = FRHIViewDesc::FBufferUAV::GetViewInfo
                       ((FBufferUAV *)&this->field_0x20,&local_38,(FRHIBuffer *)pFVar2);
    EVar5 = TranslateDesc(&local_70,pFVar2,pFVar8);
    local_c0.ResourceLocation = (FD3D12ResourceLocation *)0x0;
    local_c0.BaseResource = (FD3D12BaseShaderResource *)&pFVar2->_padding_;
    if (pFVar2 == (FD3D12Buffer *)0x0) {
      local_c0.BaseResource = (FD3D12BaseShaderResource *)local_c0.ResourceLocation;
    }
    if (local_c0.BaseResource == (FD3D12BaseShaderResource *)0x0) {
      local_c0.Resource = (FD3D12Resource *)0x0;
    }
    else {
      local_c0.ResourceLocation = &(local_c0.BaseResource)->ResourceLocation;
      local_c0.Resource = ((local_c0.BaseResource)->ResourceLocation).UnderlyingResource;
    }
    FD3D12UnorderedAccessView::UpdateResourceInfo
              ((FD3D12UnorderedAccessView *)&this->field_0x30,&local_c0,&local_70,EVar5);
    *(DXGI_FORMAT *)&this->field_0x88 = local_70.Format;
    *(D3D12_UAV_DIMENSION *)&this->field_0x8c = local_70.ViewDimension;
    *(ulong64 *)&this->field_0x90 = local_70.field2_0x8.Buffer.FirstElement;
    *(undefined8 *)&this->field_0x98 = local_70.field2_0x8._8_8_;
    *(ulong64 *)&this->field_0xa0 = local_70.field2_0x8.Buffer.CounterOffsetInBytes;
    *(undefined8 *)&this->field_0xa8 = local_70.field2_0x8._24_8_;
    FD3D12ViewRange::FD3D12ViewRange(&local_a0,&local_70);
    pFVar9 = &local_c0;
    local_a8 = local_a0;
  }
  else {
    pFVar1 = *(FD3D12Texture **)&this->field_0x18;
    local_98.field2_0x8._24_8_ = 0;
    local_98.Format = DXGI_FORMAT_UNKNOWN;
    local_98.ViewDimension = D3D12_UAV_DIMENSION_UNKNOWN;
    local_98.field2_0x8.Buffer.FirstElement = 0;
    local_98.field2_0x8._8_8_ = 0;
    local_98.field2_0x8.Buffer.CounterOffsetInBytes = 0;
    pFVar7 = FRHIViewDesc::FTextureUAV::GetViewInfo
                       ((FTextureUAV *)&this->field_0x20,&local_48,(FRHITexture *)pFVar1);
    EVar5 = TranslateDesc(&local_98,pFVar1,pFVar7);
    local_d8.ResourceLocation = (FD3D12ResourceLocation *)0x0;
    local_d8.BaseResource = (FD3D12BaseShaderResource *)&pFVar1->_padding_;
    if (pFVar1 == (FD3D12Texture *)0x0) {
      local_d8.BaseResource = (FD3D12BaseShaderResource *)local_d8.ResourceLocation;
    }
    if (local_d8.BaseResource == (FD3D12BaseShaderResource *)0x0) {
      local_d8.Resource = (FD3D12Resource *)0x0;
    }
    else {
      local_d8.ResourceLocation = &(local_d8.BaseResource)->ResourceLocation;
      local_d8.Resource = ((local_d8.BaseResource)->ResourceLocation).UnderlyingResource;
    }
    FD3D12UnorderedAccessView::UpdateResourceInfo
              ((FD3D12UnorderedAccessView *)&this->field_0x30,&local_d8,&local_98,EVar5);
    *(DXGI_FORMAT *)&this->field_0x88 = local_98.Format;
    *(D3D12_UAV_DIMENSION *)&this->field_0x8c = local_98.ViewDimension;
    *(ulong64 *)&this->field_0x90 = local_98.field2_0x8.Buffer.FirstElement;
    *(undefined8 *)&this->field_0x98 = local_98.field2_0x8._8_8_;
    *(ulong64 *)&this->field_0xa0 = local_98.field2_0x8.Buffer.CounterOffsetInBytes;
    *(undefined8 *)&this->field_0xa8 = local_98.field2_0x8._24_8_;
    FD3D12ViewRange::FD3D12ViewRange(&local_a8,&local_98);
    pFVar9 = &local_d8;
  }
  *(TRHIRange<unsigned_short> *)&this->field_0x5c = local_a8.Array;
  *(TRHIRange<unsigned_char> *)&this->field_0x60 = local_a8.Plane;
  *(TRHIRange<unsigned_char> *)&this->field_0x62 = local_a8.Mip;
  FD3D12View::UpdateResourceInfo((FD3D12View *)&this->field_0x30,pFVar9,0x20);
  if ((*(int *)&this->field_0x78 != -1) && (this->field_0x7c != '\t')) {
    if (*(longlong *)&this->field_0x38 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FVar3.Index = *(uint *)&this->field_0x78;
    FVar3.Type = this->field_0x7c;
    FVar3._5_3_ = *(undefined3 *)&this->field_0x7d;
    FD3D12BindlessDescriptorManager::UpdateDescriptor
              ((FD3D12BindlessDescriptorManager *)(*(longlong *)&this->field_0x38 + 0x730),param_1,
               FVar3,(FD3D12View *)&this->field_0x30);
  }
  return;
}

