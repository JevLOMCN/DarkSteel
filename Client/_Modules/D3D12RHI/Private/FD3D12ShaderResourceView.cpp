// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 7

// FD3D12ShaderResourceView @ 145a46280

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12ShaderResourceView * __thiscall
FD3D12ShaderResourceView::FD3D12ShaderResourceView
          (FD3D12ShaderResourceView *this,FD3D12Device *param_1,FD3D12ShaderResourceView *param_2,
          ERHIDescriptorType param_3,FD3D12RayTracingScene *param_4)

{
  FD3D12View::FD3D12View((FD3D12View *)this,param_1,param_3,Standard,(FD3D12View *)param_2);
  this->_padding_ = (longlong)&___7FD3D12ShaderResourceView__6B_;
  this->OffsetInBytes = 0;
  this->StrideInBytes = 0;
  this->Flags = None;
  this->RayTracingScene = param_4;
  return this;
}

// CreateView @ 145a60480

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12ShaderResourceView::CreateView
          (FD3D12ShaderResourceView *this,FResourceInfo *param_1,
          D3D12_SHADER_RESOURCE_VIEW_DESC *param_2,EFlags param_3)

{
  longlong lVar1;
  FD3D12ViewRange local_res8;
  
  UpdateResourceInfo(this,param_1,param_2,param_3);
  lVar1 = *(longlong *)&param_2->Shader4ComponentMapping;
  this->_padding_ = *(longlong *)param_2;
  this->_padding_ = lVar1;
  lVar1 = *(longlong *)((longlong)&param_2->field3_0x10 + 8);
  this->_padding_ = (param_2->field3_0x10).Buffer.FirstElement;
  this->_padding_ = lVar1;
  this->_padding_ = *(longlong *)((longlong)&param_2->field3_0x10 + 0x10);
  FD3D12ViewRange::FD3D12ViewRange(&local_res8,param_2);
  *(FD3D12ViewRange *)((longlong)&this->_padding_ + 4) = local_res8;
  FD3D12View::CreateView((FD3D12View *)this,param_1,0);
  return;
}

// ResourceRenamed @ 145a7c350

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12ShaderResourceView::ResourceRenamed
          (FD3D12ShaderResourceView *this,FD3D12ContextArray *param_1,
          FD3D12BaseShaderResource *param_2,FD3D12ResourceLocation *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  FD3D12ViewRange local_res8;
  FD3D12BaseShaderResource *local_28;
  FD3D12ResourceLocation *local_20;
  FD3D12Resource *local_18;
  
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12SRV.cpp"
                       ,0x3a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  if (iVar1 == 1) {
    uVar4 = (this->OffsetInBytes + param_3->OffsetFromBaseOfResource) /
            (ulonglong)this->StrideInBytes;
  }
  else {
    if (iVar1 != 0xb) goto LAB_145a7c3d1;
    uVar4 = this->OffsetInBytes + param_3->OffsetFromBaseOfResource;
  }
  this->_padding_ = uVar4;
LAB_145a7c3d1:
  if (((FD3D12BaseShaderResource *)this->_padding_ != param_2) ||
     ((FD3D12ResourceLocation *)this->_padding_ != param_3)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ResourceInfo.BaseResource == InRenamedResource && ResourceInfo.ResourceLocation == InNewResourceLocation"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                       ,0x146,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_2 == (FD3D12BaseShaderResource *)0x0) {
    local_18 = (FD3D12Resource *)0x0;
    local_20 = (FD3D12ResourceLocation *)0x0;
  }
  else {
    local_20 = &param_2->ResourceLocation;
    local_18 = (param_2->ResourceLocation).UnderlyingResource;
  }
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  local_28 = param_2;
  FD3D12ViewRange::FD3D12ViewRange(&local_res8,(D3D12_SHADER_RESOURCE_VIEW_DESC *)&this->_padding_);
  *(FD3D12ViewRange *)((longlong)&this->_padding_ + 4) = local_res8;
  FD3D12View::UpdateView((FD3D12View *)this,param_1,&local_28,0);
  return;
}

// UpdateDescriptor @ 145a81600

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12ShaderResourceView::UpdateDescriptor(FD3D12ShaderResourceView *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  ID3D12Device *pIVar4;
  undefined8 uVar5;
  
  if (*(int *)((longlong)&this->_padding_ + 4) == 0xb) {
    uVar5 = 0;
  }
  else {
    if (this->_padding_ == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar5 = *(undefined8 *)(this->_padding_ + 0x20);
  }
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar4 = FD3D12Device::GetDevice((FD3D12Device *)this->_padding_);
  (**(code **)((longlong)*pIVar4 + 0x90))(pIVar4,uVar5,&this->_padding_,this->_padding_);
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *piVar1 = *piVar1 + 1;
  return;
}

// UpdateMinLODClamp @ 145a816c0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12ShaderResourceView::UpdateMinLODClamp
          (FD3D12ShaderResourceView *this,FD3D12ContextArray *param_1,float param_2)

{
  float *pfVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12SRV.cpp"
                         ,0x51,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar2 = *(int *)((longlong)&this->_padding_ + 4);
  if (iVar2 == 4) {
    lVar5 = 0x74;
  }
  else if (iVar2 == 5) {
    lVar5 = 0x7c;
  }
  else if ((iVar2 == 8) || (iVar2 == 9)) {
    lVar5 = 0x70;
  }
  else {
    if (iVar2 != 10) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12SRV.cpp"
                         ,0x57,L"");
      if (!bVar4) {
        return;
      }
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar5 = 0x78;
  }
  pfVar1 = (float *)((longlong)&this->_padding_ + lVar5);
  if ((pfVar1 != (float *)0x0) && (param_2 != *pfVar1)) {
    *pfVar1 = param_2;
    (**(code **)(this->_padding_ + 0x10))(this);
    FD3D12View::UpdateBindlessSlot((FD3D12View *)this,param_1);
  }
  return;
}

// UpdateResourceInfo @ 145a81d30

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12ShaderResourceView::UpdateResourceInfo
          (FD3D12ShaderResourceView *this,FResourceInfo *param_1,
          D3D12_SHADER_RESOURCE_VIEW_DESC *param_2,EFlags param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  
  this->Flags = param_3;
  this->OffsetInBytes = 0;
  this->StrideInBytes = 0;
  if (param_2->ViewDimension == D3D12_SRV_DIMENSION_BUFFER) {
    if (param_2->Format == DXGI_FORMAT_UNKNOWN) {
      uVar3 = (param_2->field3_0x10).Buffer.StructureByteStride;
    }
    else {
      uVar3 = UE::DXGIUtilities::GetFormatSizeInBytes(param_2->Format);
    }
    this->StrideInBytes = uVar3;
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("StrideInBytes > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12SRV.cpp"
                         ,0x1e,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar4 = (ulonglong)this->StrideInBytes * (param_2->field3_0x10).Buffer.FirstElement -
            param_1->ResourceLocation->OffsetFromBaseOfResource;
    this->OffsetInBytes = uVar4;
    if (uVar4 % (ulonglong)this->StrideInBytes != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(OffsetInBytes % StrideInBytes) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12SRV.cpp"
                         ,0x21,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  else if (param_2->ViewDimension == D3D12_SRV_DIMENSION_RAYTRACING_ACCELERATION_STRUCTURE) {
    this->OffsetInBytes =
         (param_2->field3_0x10).Buffer.FirstElement - param_1->ResourceLocation->GPUVirtualAddress;
    this->StrideInBytes = 1;
  }
  return;
}

// UpdateView @ 145a83260

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12ShaderResourceView::UpdateView
          (FD3D12ShaderResourceView *this,FD3D12ContextArray *param_1,FResourceInfo *param_2,
          D3D12_SHADER_RESOURCE_VIEW_DESC *param_3,EFlags param_4)

{
  longlong lVar1;
  FD3D12ViewRange local_res8;
  
  UpdateResourceInfo(this,param_2,param_3,param_4);
  lVar1 = *(longlong *)&param_3->Shader4ComponentMapping;
  this->_padding_ = *(longlong *)param_3;
  this->_padding_ = lVar1;
  lVar1 = *(longlong *)((longlong)&param_3->field3_0x10 + 8);
  this->_padding_ = (param_3->field3_0x10).Buffer.FirstElement;
  this->_padding_ = lVar1;
  this->_padding_ = *(longlong *)((longlong)&param_3->field3_0x10 + 0x10);
  FD3D12ViewRange::FD3D12ViewRange(&local_res8,param_3);
  *(FD3D12ViewRange *)((longlong)&this->_padding_ + 4) = local_res8;
  FD3D12View::UpdateView((FD3D12View *)this,param_1,param_2,0);
  return;
}

