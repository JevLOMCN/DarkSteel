// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 5

// FD3D12ViewRange @ 145a90980

FD3D12ViewRange * __thiscall
FD3D12ViewRange::FD3D12ViewRange(FD3D12ViewRange *this,D3D12_CONSTANT_BUFFER_VIEW_DESC *param_1)

{
  (this->Array).First = 0;
  (this->Array).Num = 1;
  (this->Plane).First = '\0';
  (this->Plane).Num = '\x01';
  (this->Mip).First = '\0';
  (this->Mip).Num = '\x01';
  return this;
}

// FD3D12ViewRange @ 145a909a0

FD3D12ViewRange * __thiscall
FD3D12ViewRange::FD3D12ViewRange(FD3D12ViewRange *this,D3D12_DEPTH_STENCIL_VIEW_DESC *param_1)

{
  DXGI_FORMAT DVar1;
  D3D12_DSV_DIMENSION DVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  uchar uVar6;
  uchar uVar7;
  bool bVar8;
  DXGI_FORMAT DVar9;
  FD3D12ViewRange *pFVar10;
  char cVar11;
  TRHIRange<unsigned_short> local_res8;
  
  (this->Array).First = 0;
  (this->Array).Num = 0;
  (this->Plane).First = '\0';
  (this->Plane).Num = '\0';
  (this->Mip).First = '\0';
  (this->Mip).Num = '\0';
  DVar1 = param_1->Format;
  DVar9 = UE::DXGIUtilities::FindDepthStencilParentDXGIFormat(DVar1);
  if (DVar9 == DXGI_FORMAT_R32G8X24_TYPELESS) {
    if (DVar1 == DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS) {
LAB_145a90a33:
      uVar6 = '\0';
    }
    else {
      if (DVar1 != DXGI_FORMAT_X32_TYPELESS_G8X24_UINT) goto LAB_145a90a21;
LAB_145a90a13:
      uVar6 = '\x01';
    }
  }
  else {
    if (DVar9 == DXGI_FORMAT_R24G8_TYPELESS) {
      if (DVar1 == DXGI_FORMAT_R24_UNORM_X8_TYPELESS) goto LAB_145a90a33;
      if (DVar1 == DXGI_FORMAT_X24_TYPELESS_G8_UINT) goto LAB_145a90a13;
    }
    else if (DVar9 == DXGI_FORMAT_NV12) {
      if (DVar1 == DXGI_FORMAT_R8G8_UNORM) {
LAB_145a909f2:
        uVar7 = '\x01';
        cVar11 = '\x01';
        goto LAB_145a90a37;
      }
      if (DVar1 == DXGI_FORMAT_R8_UNORM) {
        uVar7 = '\0';
        cVar11 = '\x01';
        goto LAB_145a90a37;
      }
    }
    else if (DVar9 == DXGI_FORMAT_P010) {
      if (DVar1 == DXGI_FORMAT_R16G16_UNORM) goto LAB_145a909f2;
      if (DVar1 == DXGI_FORMAT_R16_UNORM) {
        uVar7 = '\0';
        cVar11 = '\x01';
        goto LAB_145a90a37;
      }
    }
LAB_145a90a21:
    uVar7 = '\0';
    uVar6 = '\0';
    if ((DVar9 != DXGI_FORMAT_R32G8X24_TYPELESS) && (DVar9 != DXGI_FORMAT_R24G8_TYPELESS)) {
      cVar11 = '\x01';
      goto LAB_145a90a37;
    }
  }
  uVar7 = uVar6;
  cVar11 = '\x02';
LAB_145a90a37:
  (this->Plane).First = uVar7;
  (this->Plane).Num = cVar11 - uVar7;
  DVar2 = param_1->ViewDimension;
  if (DVar2 == D3D12_DSV_DIMENSION_UNKNOWN) {
    (this->Mip).First = '\0';
    (this->Mip).Num = '\0';
    (this->Plane).First = '\0';
    (this->Plane).Num = '\0';
    local_res8.First = 0;
    local_res8.Num = 0;
  }
  else if (DVar2 == D3D12_DSV_DIMENSION_TEXTURE2D) {
    uVar3 = (param_1->field3_0xc).Texture1DArray.MipSlice;
    if (((0xfe < uVar3) || (0xfe < uVar3 + 1)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFirst < TNumericLimits<TType>::Max() && InNum < TNumericLimits<TType>::Max() && (InFirst + InNum) < TNumericLimits<TType>::Max()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xa43,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FD3D12ViewRange *)(*pcVar5)();
      return pFVar10;
    }
    (this->Mip).First = (uchar)uVar3;
    (this->Mip).Num = '\x01';
    local_res8.First = 0;
    local_res8.Num = 1;
  }
  else if (DVar2 == D3D12_DSV_DIMENSION_TEXTURE2DARRAY) {
    uVar3 = (param_1->field3_0xc).Texture1DArray.MipSlice;
    if (((0xfe < uVar3) || (0xfe < uVar3 + 1)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFirst < TNumericLimits<TType>::Max() && InNum < TNumericLimits<TType>::Max() && (InFirst + InNum) < TNumericLimits<TType>::Max()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xa43,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FD3D12ViewRange *)(*pcVar5)();
      return pFVar10;
    }
    (this->Mip).First = (uchar)uVar3;
    (this->Mip).Num = '\x01';
    uVar3 = (param_1->field3_0xc).Texture1DArray.FirstArraySlice;
    uVar4 = (param_1->field3_0xc).Texture1DArray.ArraySize;
    local_res8.Num = (ushort)uVar4;
    local_res8.First = (ushort)uVar3;
    if ((((0xfffe < uVar3) || (0xfffe < uVar4)) || (0xfffe < uVar4 + uVar3)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFirst < TNumericLimits<TType>::Max() && InNum < TNumericLimits<TType>::Max() && (InFirst + InNum) < TNumericLimits<TType>::Max()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xa43,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FD3D12ViewRange *)(*pcVar5)();
      return pFVar10;
    }
  }
  else if (DVar2 == D3D12_DSV_DIMENSION_TEXTURE2DMS) {
    (this->Mip).First = '\0';
    (this->Mip).Num = '\x01';
    local_res8.First = 0;
    local_res8.Num = 1;
  }
  else {
    if (DVar2 != D3D12_DSV_DIMENSION_TEXTURE2DMSARRAY) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.cpp"
                         ,0x8a,L"");
      if (!bVar8) {
        return this;
      }
      pcVar5 = (code *)swi(3);
      pFVar10 = (FD3D12ViewRange *)(*pcVar5)();
      return pFVar10;
    }
    (this->Mip).First = '\0';
    (this->Mip).Num = '\x01';
    uVar3 = (param_1->field3_0xc).Texture1DArray.MipSlice;
    uVar4 = (param_1->field3_0xc).Texture1DArray.FirstArraySlice;
    local_res8.Num = (ushort)uVar4;
    local_res8.First = (ushort)uVar3;
    if ((((0xfffe < uVar3) || (0xfffe < uVar4)) || (0xfffe < uVar4 + uVar3)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFirst < TNumericLimits<TType>::Max() && InNum < TNumericLimits<TType>::Max() && (InFirst + InNum) < TNumericLimits<TType>::Max()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xa43,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FD3D12ViewRange *)(*pcVar5)();
      return pFVar10;
    }
  }
  this->Array = local_res8;
  return this;
}

// FD3D12ViewRange @ 145a90c60

FD3D12ViewRange * __thiscall
FD3D12ViewRange::FD3D12ViewRange(FD3D12ViewRange *this,D3D12_RENDER_TARGET_VIEW_DESC *param_1)

{
  DXGI_FORMAT DVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  uchar uVar5;
  uchar uVar6;
  bool bVar7;
  DXGI_FORMAT DVar8;
  FD3D12ViewRange *pFVar9;
  char cVar10;
  TRHIRange<unsigned_short> local_res8;
  
  (this->Array).First = 0;
  (this->Array).Num = 0;
  (this->Plane).First = '\0';
  (this->Plane).Num = '\0';
  (this->Mip).First = '\0';
  (this->Mip).Num = '\0';
  DVar1 = param_1->Format;
  DVar8 = UE::DXGIUtilities::FindDepthStencilParentDXGIFormat(DVar1);
  if (DVar8 == DXGI_FORMAT_R32G8X24_TYPELESS) {
    if (DVar1 == DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS) {
LAB_145a90cf3:
      uVar5 = '\0';
    }
    else {
      if (DVar1 != DXGI_FORMAT_X32_TYPELESS_G8X24_UINT) goto LAB_145a90ce1;
LAB_145a90cd3:
      uVar5 = '\x01';
    }
LAB_145a90cf5:
    uVar6 = uVar5;
    cVar10 = '\x02';
  }
  else if (DVar8 == DXGI_FORMAT_R24G8_TYPELESS) {
    if (DVar1 == DXGI_FORMAT_R24_UNORM_X8_TYPELESS) goto LAB_145a90cf3;
    if (DVar1 == DXGI_FORMAT_X24_TYPELESS_G8_UINT) goto LAB_145a90cd3;
LAB_145a90ce1:
    uVar6 = '\0';
    uVar5 = '\0';
    if ((DVar8 == DXGI_FORMAT_R32G8X24_TYPELESS) || (DVar8 == DXGI_FORMAT_R24G8_TYPELESS))
    goto LAB_145a90cf5;
    cVar10 = '\x01';
  }
  else {
    if (DVar8 != DXGI_FORMAT_NV12) {
      if (DVar8 == DXGI_FORMAT_P010) {
        if (DVar1 == DXGI_FORMAT_R16G16_UNORM) goto LAB_145a90cb2;
        if (DVar1 == DXGI_FORMAT_R16_UNORM) {
          uVar6 = '\0';
          cVar10 = '\x01';
          goto LAB_145a90cf7;
        }
      }
      goto LAB_145a90ce1;
    }
    if (DVar1 == DXGI_FORMAT_R8G8_UNORM) {
LAB_145a90cb2:
      uVar6 = '\x01';
      cVar10 = '\x01';
    }
    else {
      if (DVar1 != DXGI_FORMAT_R8_UNORM) goto LAB_145a90ce1;
      uVar6 = '\0';
      cVar10 = '\x01';
    }
  }
LAB_145a90cf7:
  (this->Plane).First = uVar6;
  (this->Plane).Num = cVar10 - uVar6;
  switch(param_1->ViewDimension) {
  case D3D12_RTV_DIMENSION_UNKNOWN:
    (this->Mip).First = '\0';
    (this->Mip).Num = '\0';
    (this->Plane).First = '\0';
    (this->Plane).Num = '\0';
    (this->Array).First = 0;
    (this->Array).Num = 0;
    break;
  default:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.cpp"
                       ,0x1a,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FD3D12ViewRange *)(*pcVar4)();
      return pFVar9;
    }
    break;
  case D3D12_RTV_DIMENSION_TEXTURE2D:
    uVar3 = (param_1->field2_0x8).Texture1DArray.MipSlice;
    if (((0xfe < uVar3) || (0xfe < uVar3 + 1)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFirst < TNumericLimits<TType>::Max() && InNum < TNumericLimits<TType>::Max() && (InFirst + InNum) < TNumericLimits<TType>::Max()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xa43,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FD3D12ViewRange *)(*pcVar4)();
      return pFVar9;
    }
    (this->Mip).First = (uchar)uVar3;
    (this->Mip).Num = '\x01';
    uVar3 = (param_1->field2_0x8).Texture1DArray.FirstArraySlice;
    if (((0xfe < uVar3) || (0xfe < uVar3 + 1)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFirst < TNumericLimits<TType>::Max() && InNum < TNumericLimits<TType>::Max() && (InFirst + InNum) < TNumericLimits<TType>::Max()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xa43,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FD3D12ViewRange *)(*pcVar4)();
      return pFVar9;
    }
    (this->Plane).First = (uchar)uVar3;
    (this->Plane).Num = '\x01';
    (this->Array).First = 0;
    (this->Array).Num = 1;
    break;
  case D3D12_RTV_DIMENSION_TEXTURE2DARRAY:
    uVar3 = (param_1->field2_0x8).Texture1DArray.MipSlice;
    if (((0xfe < uVar3) || (0xfe < uVar3 + 1)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFirst < TNumericLimits<TType>::Max() && InNum < TNumericLimits<TType>::Max() && (InFirst + InNum) < TNumericLimits<TType>::Max()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xa43,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FD3D12ViewRange *)(*pcVar4)();
      return pFVar9;
    }
    (this->Mip).First = (uchar)uVar3;
    (this->Mip).Num = '\x01';
    uVar3 = (param_1->field2_0x8).Texture2DArray.PlaneSlice;
    if (((0xfe < uVar3) || (0xfe < uVar3 + 1)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFirst < TNumericLimits<TType>::Max() && InNum < TNumericLimits<TType>::Max() && (InFirst + InNum) < TNumericLimits<TType>::Max()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xa43,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FD3D12ViewRange *)(*pcVar4)();
      return pFVar9;
    }
    (this->Plane).First = (uchar)uVar3;
    (this->Plane).Num = '\x01';
    uVar3 = (param_1->field2_0x8).Texture1DArray.FirstArraySlice;
    uVar2 = (param_1->field2_0x8).Buffer.NumElements;
    local_res8.Num = (ushort)uVar2;
    local_res8.First = (ushort)uVar3;
    if ((((0xfffe < uVar3) || (0xfffe < uVar2)) || (0xfffe < uVar2 + uVar3)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFirst < TNumericLimits<TType>::Max() && InNum < TNumericLimits<TType>::Max() && (InFirst + InNum) < TNumericLimits<TType>::Max()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xa43,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FD3D12ViewRange *)(*pcVar4)();
      return pFVar9;
    }
    goto LAB_145a90ed9;
  case D3D12_RTV_DIMENSION_TEXTURE2DMS:
    (this->Mip).First = '\0';
    (this->Mip).Num = '\x01';
    (this->Array).First = 0;
    (this->Array).Num = 1;
    break;
  case D3D12_RTV_DIMENSION_TEXTURE2DMSARRAY:
    (this->Mip).First = '\0';
    (this->Mip).Num = '\x01';
    uVar3 = (param_1->field2_0x8).Texture1DArray.MipSlice;
    uVar2 = (param_1->field2_0x8).Texture1DArray.FirstArraySlice;
    local_res8.Num = (ushort)uVar2;
    local_res8.First = (ushort)uVar3;
    if ((((0xfffe < uVar3) || (0xfffe < uVar2)) || (0xfffe < uVar2 + uVar3)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFirst < TNumericLimits<TType>::Max() && InNum < TNumericLimits<TType>::Max() && (InFirst + InNum) < TNumericLimits<TType>::Max()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xa43,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FD3D12ViewRange *)(*pcVar4)();
      return pFVar9;
    }
LAB_145a90ed9:
    this->Array = local_res8;
    break;
  case D3D12_RTV_DIMENSION_TEXTURE3D:
    uVar3 = (param_1->field2_0x8).Texture1DArray.MipSlice;
    if (((0xfe < uVar3) || (0xfe < uVar3 + 1)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFirst < TNumericLimits<TType>::Max() && InNum < TNumericLimits<TType>::Max() && (InFirst + InNum) < TNumericLimits<TType>::Max()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xa43,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FD3D12ViewRange *)(*pcVar4)();
      return pFVar9;
    }
    (this->Mip).First = (uchar)uVar3;
    (this->Mip).Num = '\x01';
    (this->Array).First = 0;
    (this->Array).Num = 1;
  }
  return this;
}

// FD3D12ViewRange @ 145a91040

FD3D12ViewRange * __thiscall
FD3D12ViewRange::FD3D12ViewRange(FD3D12ViewRange *this,D3D12_SHADER_RESOURCE_VIEW_DESC *param_1)

{
  DXGI_FORMAT DVar1;
  D3D12_BUFFER_SRV_FLAGS DVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  uchar uVar6;
  uchar uVar7;
  bool bVar8;
  DXGI_FORMAT DVar9;
  FD3D12ViewRange *pFVar10;
  char cVar11;
  TRHIRange<unsigned_short> local_res8;
  
  (this->Array).First = 0;
  (this->Array).Num = 0;
  (this->Plane).First = '\0';
  (this->Plane).Num = '\0';
  (this->Mip).First = '\0';
  (this->Mip).Num = '\0';
  DVar1 = param_1->Format;
  DVar9 = UE::DXGIUtilities::FindDepthStencilParentDXGIFormat(DVar1);
  if (DVar9 == DXGI_FORMAT_R32G8X24_TYPELESS) {
    if (DVar1 == DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS) {
LAB_145a910d3:
      uVar6 = '\0';
    }
    else {
      if (DVar1 != DXGI_FORMAT_X32_TYPELESS_G8X24_UINT) goto LAB_145a910c1;
LAB_145a910b3:
      uVar6 = '\x01';
    }
LAB_145a910d5:
    uVar7 = uVar6;
    cVar11 = '\x02';
  }
  else if (DVar9 == DXGI_FORMAT_R24G8_TYPELESS) {
    if (DVar1 == DXGI_FORMAT_R24_UNORM_X8_TYPELESS) goto LAB_145a910d3;
    if (DVar1 == DXGI_FORMAT_X24_TYPELESS_G8_UINT) goto LAB_145a910b3;
LAB_145a910c1:
    uVar7 = '\0';
    uVar6 = '\0';
    if ((DVar9 == DXGI_FORMAT_R32G8X24_TYPELESS) || (DVar9 == DXGI_FORMAT_R24G8_TYPELESS))
    goto LAB_145a910d5;
    cVar11 = '\x01';
  }
  else {
    if (DVar9 != DXGI_FORMAT_NV12) {
      if (DVar9 == DXGI_FORMAT_P010) {
        if (DVar1 == DXGI_FORMAT_R16G16_UNORM) goto LAB_145a91092;
        if (DVar1 == DXGI_FORMAT_R16_UNORM) {
          uVar7 = '\0';
          cVar11 = '\x01';
          goto LAB_145a910d7;
        }
      }
      goto LAB_145a910c1;
    }
    if (DVar1 == DXGI_FORMAT_R8G8_UNORM) {
LAB_145a91092:
      uVar7 = '\x01';
      cVar11 = '\x01';
    }
    else {
      if (DVar1 != DXGI_FORMAT_R8_UNORM) goto LAB_145a910c1;
      uVar7 = '\0';
      cVar11 = '\x01';
    }
  }
LAB_145a910d7:
  (this->Plane).First = uVar7;
  (this->Plane).Num = cVar11 - uVar7;
  switch(param_1->ViewDimension) {
  case D3D12_SRV_DIMENSION_UNKNOWN:
    (this->Mip).First = '\0';
    (this->Mip).Num = '\0';
    (this->Plane).First = '\0';
    (this->Plane).Num = '\0';
    (this->Array).First = 0;
    (this->Array).Num = 0;
    break;
  case D3D12_SRV_DIMENSION_BUFFER:
  case D3D12_SRV_DIMENSION_TEXTURE2DMS:
  case D3D12_SRV_DIMENSION_RAYTRACING_ACCELERATION_STRUCTURE:
    (this->Mip).First = '\0';
    (this->Mip).Num = '\x01';
    (this->Array).First = 0;
    (this->Array).Num = 1;
    break;
  default:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.cpp"
                       ,0x47,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FD3D12ViewRange *)(*pcVar5)();
      return pFVar10;
    }
    break;
  case D3D12_SRV_DIMENSION_TEXTURE2D:
    uVar3 = (param_1->field3_0x10).Texture1D.MostDetailedMip;
    uVar4 = (param_1->field3_0x10).Texture1D.MipLevels;
    if ((((0xfe < uVar3) || (0xfe < uVar4)) || (0xfe < uVar4 + uVar3)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFirst < TNumericLimits<TType>::Max() && InNum < TNumericLimits<TType>::Max() && (InFirst + InNum) < TNumericLimits<TType>::Max()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xa43,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FD3D12ViewRange *)(*pcVar5)();
      return pFVar10;
    }
    (this->Mip).First = (uchar)uVar3;
    (this->Mip).Num = (uchar)uVar4;
    uVar3 = (param_1->field3_0x10).Buffer.NumElements;
    if (((0xfe < uVar3) || (0xfe < uVar3 + 1)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFirst < TNumericLimits<TType>::Max() && InNum < TNumericLimits<TType>::Max() && (InFirst + InNum) < TNumericLimits<TType>::Max()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xa43,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FD3D12ViewRange *)(*pcVar5)();
      return pFVar10;
    }
    (this->Plane).First = (uchar)uVar3;
    (this->Plane).Num = '\x01';
    (this->Array).First = 0;
    (this->Array).Num = 1;
    break;
  case D3D12_SRV_DIMENSION_TEXTURE2DARRAY:
    uVar3 = (param_1->field3_0x10).Texture1D.MostDetailedMip;
    uVar4 = (param_1->field3_0x10).Texture1D.MipLevels;
    if ((((0xfe < uVar3) || (0xfe < uVar4)) || (0xfe < uVar4 + uVar3)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFirst < TNumericLimits<TType>::Max() && InNum < TNumericLimits<TType>::Max() && (InFirst + InNum) < TNumericLimits<TType>::Max()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xa43,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FD3D12ViewRange *)(*pcVar5)();
      return pFVar10;
    }
    (this->Mip).First = (uchar)uVar3;
    (this->Mip).Num = (uchar)uVar4;
    DVar2 = (param_1->field3_0x10).Buffer.Flags;
    if (((0xfe < DVar2) || (0xfe < DVar2 + D3D12_BUFFER_SRV_FLAG_RAW)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFirst < TNumericLimits<TType>::Max() && InNum < TNumericLimits<TType>::Max() && (InFirst + InNum) < TNumericLimits<TType>::Max()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xa43,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FD3D12ViewRange *)(*pcVar5)();
      return pFVar10;
    }
    (this->Plane).First = (uchar)DVar2;
    (this->Plane).Num = '\x01';
    uVar3 = (param_1->field3_0x10).Buffer.NumElements;
    uVar4 = (param_1->field3_0x10).Buffer.StructureByteStride;
    local_res8.Num = (ushort)uVar4;
    local_res8.First = (ushort)uVar3;
    if ((((0xfffe < uVar3) || (0xfffe < uVar4)) || (0xfffe < uVar4 + uVar3)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFirst < TNumericLimits<TType>::Max() && InNum < TNumericLimits<TType>::Max() && (InFirst + InNum) < TNumericLimits<TType>::Max()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xa43,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FD3D12ViewRange *)(*pcVar5)();
      return pFVar10;
    }
    goto LAB_145a914ec;
  case D3D12_SRV_DIMENSION_TEXTURE2DMSARRAY:
    (this->Mip).First = '\0';
    (this->Mip).Num = '\x01';
    uVar3 = (param_1->field3_0x10).Texture1D.MostDetailedMip;
    uVar4 = (param_1->field3_0x10).Texture1D.MipLevels;
    local_res8.Num = (ushort)uVar4;
    local_res8.First = (ushort)uVar3;
    if ((((0xfffe < uVar3) || (0xfffe < uVar4)) || (0xfffe < uVar4 + uVar3)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFirst < TNumericLimits<TType>::Max() && InNum < TNumericLimits<TType>::Max() && (InFirst + InNum) < TNumericLimits<TType>::Max()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xa43,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FD3D12ViewRange *)(*pcVar5)();
      return pFVar10;
    }
    goto LAB_145a914ec;
  case D3D12_SRV_DIMENSION_TEXTURE3D:
    uVar3 = (param_1->field3_0x10).Texture1D.MostDetailedMip;
    uVar4 = (param_1->field3_0x10).Texture1D.MipLevels;
    if ((((0xfe < uVar3) || (0xfe < uVar4)) || (0xfe < uVar4 + uVar3)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFirst < TNumericLimits<TType>::Max() && InNum < TNumericLimits<TType>::Max() && (InFirst + InNum) < TNumericLimits<TType>::Max()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xa43,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FD3D12ViewRange *)(*pcVar5)();
      return pFVar10;
    }
    (this->Mip).First = (uchar)uVar3;
    (this->Mip).Num = (uchar)uVar4;
    (this->Array).First = 0;
    (this->Array).Num = 1;
    break;
  case D3D12_SRV_DIMENSION_TEXTURECUBE:
    uVar3 = (param_1->field3_0x10).Texture1D.MostDetailedMip;
    uVar4 = (param_1->field3_0x10).Texture1D.MipLevels;
    if ((((0xfe < uVar3) || (0xfe < uVar4)) || (0xfe < uVar4 + uVar3)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFirst < TNumericLimits<TType>::Max() && InNum < TNumericLimits<TType>::Max() && (InFirst + InNum) < TNumericLimits<TType>::Max()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xa43,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FD3D12ViewRange *)(*pcVar5)();
      return pFVar10;
    }
    (this->Mip).First = (uchar)uVar3;
    (this->Mip).Num = (uchar)uVar4;
    (this->Array).First = 0;
    (this->Array).Num = 6;
    break;
  case D3D12_SRV_DIMENSION_TEXTURECUBEARRAY:
    uVar3 = (param_1->field3_0x10).Texture1D.MostDetailedMip;
    uVar4 = (param_1->field3_0x10).Texture1D.MipLevels;
    if ((((0xfe < uVar3) || (0xfe < uVar4)) || (0xfe < uVar4 + uVar3)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFirst < TNumericLimits<TType>::Max() && InNum < TNumericLimits<TType>::Max() && (InFirst + InNum) < TNumericLimits<TType>::Max()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xa43,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FD3D12ViewRange *)(*pcVar5)();
      return pFVar10;
    }
    (this->Mip).First = (uchar)uVar3;
    (this->Mip).Num = (uchar)uVar4;
    uVar3 = (param_1->field3_0x10).Buffer.NumElements;
    uVar4 = (param_1->field3_0x10).Buffer.StructureByteStride * 6;
    local_res8.Num = (ushort)uVar4;
    local_res8.First = (ushort)uVar3;
    if ((((0xfffe < uVar3) || (0xfffe < uVar4)) || (0xfffe < uVar3 + uVar4)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFirst < TNumericLimits<TType>::Max() && InNum < TNumericLimits<TType>::Max() && (InFirst + InNum) < TNumericLimits<TType>::Max()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xa43,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FD3D12ViewRange *)(*pcVar5)();
      return pFVar10;
    }
LAB_145a914ec:
    this->Array = local_res8;
  }
  return this;
}

// FD3D12ViewRange @ 145a91570

FD3D12ViewRange * __thiscall
FD3D12ViewRange::FD3D12ViewRange(FD3D12ViewRange *this,D3D12_UNORDERED_ACCESS_VIEW_DESC *param_1)

{
  DXGI_FORMAT DVar1;
  D3D12_UAV_DIMENSION DVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  uchar uVar6;
  uchar uVar7;
  bool bVar8;
  TRHIRange<unsigned_char> TVar9;
  DXGI_FORMAT DVar10;
  FD3D12ViewRange *pFVar11;
  char cVar12;
  TRHIRange<unsigned_short> local_res8;
  
  (this->Array).First = 0;
  (this->Array).Num = 0;
  (this->Plane).First = '\0';
  (this->Plane).Num = '\0';
  (this->Mip).First = '\0';
  (this->Mip).Num = '\0';
  DVar1 = param_1->Format;
  DVar10 = UE::DXGIUtilities::FindDepthStencilParentDXGIFormat(DVar1);
  if (DVar10 == DXGI_FORMAT_R32G8X24_TYPELESS) {
    if (DVar1 == DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS) {
LAB_145a91603:
      uVar6 = '\0';
    }
    else {
      if (DVar1 != DXGI_FORMAT_X32_TYPELESS_G8X24_UINT) goto LAB_145a915f1;
LAB_145a915e3:
      uVar6 = '\x01';
    }
LAB_145a91605:
    uVar7 = uVar6;
    cVar12 = '\x02';
  }
  else if (DVar10 == DXGI_FORMAT_R24G8_TYPELESS) {
    if (DVar1 == DXGI_FORMAT_R24_UNORM_X8_TYPELESS) goto LAB_145a91603;
    if (DVar1 == DXGI_FORMAT_X24_TYPELESS_G8_UINT) goto LAB_145a915e3;
LAB_145a915f1:
    uVar7 = '\0';
    uVar6 = '\0';
    if ((DVar10 == DXGI_FORMAT_R32G8X24_TYPELESS) || (DVar10 == DXGI_FORMAT_R24G8_TYPELESS))
    goto LAB_145a91605;
    cVar12 = '\x01';
  }
  else {
    if (DVar10 != DXGI_FORMAT_NV12) {
      if (DVar10 == DXGI_FORMAT_P010) {
        if (DVar1 == DXGI_FORMAT_R16G16_UNORM) goto LAB_145a915c2;
        if (DVar1 == DXGI_FORMAT_R16_UNORM) {
          uVar7 = '\0';
          cVar12 = '\x01';
          goto LAB_145a91607;
        }
      }
      goto LAB_145a915f1;
    }
    if (DVar1 == DXGI_FORMAT_R8G8_UNORM) {
LAB_145a915c2:
      uVar7 = '\x01';
      cVar12 = '\x01';
    }
    else {
      if (DVar1 != DXGI_FORMAT_R8_UNORM) goto LAB_145a915f1;
      uVar7 = '\0';
      cVar12 = '\x01';
    }
  }
LAB_145a91607:
  (this->Plane).First = uVar7;
  (this->Plane).Num = cVar12 - uVar7;
  DVar2 = param_1->ViewDimension;
  if (DVar2 == D3D12_UAV_DIMENSION_UNKNOWN) {
    TVar9.First = '\0';
    TVar9.Num = '\0';
    (this->Mip).First = '\0';
    (this->Mip).Num = '\0';
    local_res8.First = 0;
    local_res8.Num = 0;
  }
  else {
    if (DVar2 == D3D12_UAV_DIMENSION_BUFFER) {
      (this->Mip).First = '\0';
      (this->Mip).Num = '\x01';
      local_res8.First = 0;
      local_res8.Num = 1;
      goto LAB_145a9188c;
    }
    if (DVar2 != D3D12_UAV_DIMENSION_TEXTURE2D) {
      if (DVar2 == D3D12_UAV_DIMENSION_TEXTURE2DARRAY) {
        uVar3 = (param_1->field2_0x8).Texture1DArray.MipSlice;
        if (((0xfe < uVar3) || (0xfe < uVar3 + 1)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InFirst < TNumericLimits<TType>::Max() && InNum < TNumericLimits<TType>::Max() && (InFirst + InNum) < TNumericLimits<TType>::Max()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                               ,0xa43,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          pFVar11 = (FD3D12ViewRange *)(*pcVar5)();
          return pFVar11;
        }
        (this->Mip).First = (uchar)uVar3;
        (this->Mip).Num = '\x01';
        uVar3 = (param_1->field2_0x8).Buffer.StructureByteStride;
        if (((0xfe < uVar3) || (0xfe < uVar3 + 1)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InFirst < TNumericLimits<TType>::Max() && InNum < TNumericLimits<TType>::Max() && (InFirst + InNum) < TNumericLimits<TType>::Max()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                               ,0xa43,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          pFVar11 = (FD3D12ViewRange *)(*pcVar5)();
          return pFVar11;
        }
        (this->Plane).First = (uchar)uVar3;
        (this->Plane).Num = '\x01';
        uVar3 = (param_1->field2_0x8).Texture1DArray.FirstArraySlice;
        uVar4 = (param_1->field2_0x8).Buffer.NumElements;
        local_res8.Num = (ushort)uVar4;
        local_res8.First = (ushort)uVar3;
        if ((((0xfffe < uVar3) || (0xfffe < uVar4)) || (0xfffe < uVar4 + uVar3)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InFirst < TNumericLimits<TType>::Max() && InNum < TNumericLimits<TType>::Max() && (InFirst + InNum) < TNumericLimits<TType>::Max()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                               ,0xa43,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          pFVar11 = (FD3D12ViewRange *)(*pcVar5)();
          return pFVar11;
        }
      }
      else {
        if (DVar2 != D3D12_UAV_DIMENSION_TEXTURE3D) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.cpp"
                             ,0xb0,L"");
          if (!bVar8) {
            return this;
          }
          pcVar5 = (code *)swi(3);
          pFVar11 = (FD3D12ViewRange *)(*pcVar5)();
          return pFVar11;
        }
        uVar3 = (param_1->field2_0x8).Texture1DArray.MipSlice;
        if (((0xfe < uVar3) || (0xfe < uVar3 + 1)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InFirst < TNumericLimits<TType>::Max() && InNum < TNumericLimits<TType>::Max() && (InFirst + InNum) < TNumericLimits<TType>::Max()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                               ,0xa43,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          pFVar11 = (FD3D12ViewRange *)(*pcVar5)();
          return pFVar11;
        }
        (this->Mip).First = (uchar)uVar3;
        (this->Mip).Num = '\x01';
        local_res8.First = 0;
        local_res8.Num = 1;
      }
      goto LAB_145a9188c;
    }
    uVar3 = (param_1->field2_0x8).Texture1DArray.MipSlice;
    if (((0xfe < uVar3) || (0xfe < uVar3 + 1)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFirst < TNumericLimits<TType>::Max() && InNum < TNumericLimits<TType>::Max() && (InFirst + InNum) < TNumericLimits<TType>::Max()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xa43,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pFVar11 = (FD3D12ViewRange *)(*pcVar5)();
      return pFVar11;
    }
    (this->Mip).First = (uchar)uVar3;
    (this->Mip).Num = '\x01';
    uVar3 = (param_1->field2_0x8).Texture1DArray.FirstArraySlice;
    local_res8.First = CONCAT11('\x01',(uchar)uVar3);
    TVar9 = (TRHIRange<unsigned_char>)local_res8.First;
    if (((0xfe < uVar3) || (0xfe < uVar3 + 1)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFirst < TNumericLimits<TType>::Max() && InNum < TNumericLimits<TType>::Max() && (InFirst + InNum) < TNumericLimits<TType>::Max()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xa43,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pFVar11 = (FD3D12ViewRange *)(*pcVar5)();
      return pFVar11;
    }
    local_res8.First = 0;
    local_res8.Num = 1;
  }
  this->Plane = TVar9;
LAB_145a9188c:
  this->Array = local_res8;
  return this;
}

