// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 3

// FD3D11ShaderResourceView @ 14596c600

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FD3D11ShaderResourceView * __thiscall
FD3D11ShaderResourceView::FD3D11ShaderResourceView
          (FD3D11ShaderResourceView *this,FRHICommandListBase *param_1,FRHIViewableResource *param_2
          ,FRHIViewDesc *param_3)

{
  longlong *plVar1;
  char cVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  FD3D11ShaderResourceView *pFVar6;
  FD3D11ViewableResource *pFVar7;
  FRHICommandBase *pFVar8;
  FD3D11View *pFVar9;
  
  FRHIResource::FRHIResource((FRHIResource *)this,RRT_ShaderResourceView);
  this->_padding_ = (longlong)&___7FRHIView__6B_;
  this->_padding_ = (longlong)param_2;
  if (param_2 != (FRHIViewableResource *)0x0) {
    FRHIResource::AddRef((FRHIResource *)param_2);
  }
  lVar4 = *(longlong *)((longlong)&param_3->field0_0x0 + 8);
  this->_padding_ = *(longlong *)&param_3->field0_0x0;
  this->_padding_ = lVar4;
  if (param_2 == (FRHIViewableResource *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InResource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xcae,L"Cannot create a view of a nullptr resource.");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FD3D11ShaderResourceView *)(*pcVar3)();
      return pFVar6;
    }
  }
  this->_padding_ = (longlong)&___7FRHIShaderResourceView__6B_;
  cVar2 = (char)this->_padding_;
  if ((cVar2 != '\0') && (cVar2 != '\x02')) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ViewDesc.IsSRV()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xced,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FD3D11ShaderResourceView *)(*pcVar3)();
      return pFVar6;
    }
  }
  this->_padding_ = (longlong)&_vftable__for__FRHIShaderResourceView__;
  this->_padding_ = (longlong)&_vftable__for__FD3D11View__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->View).Reference = (ID3D11ShaderResourceView *)0x0;
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->PersistentState).bImmediate == '\0'))
     && (param_1->bExecuting == false)) {
    pFVar8 = FMemStackBase::Alloc(&param_1->MemManager,0x20,8);
    param_1->NumCommands = param_1->NumCommands + 1;
    *param_1->CommandLink = pFVar8;
    param_1->CommandLink = &pFVar8->Next;
    pFVar8->Next = (FRHICommandBase *)0x0;
    pFVar8->_padding_ =
         (longlong)
         &TRHILambdaCommand<FRHICommandListBase,`FD3D11ShaderResourceView::FD3D11ShaderResourceView'::`2'::<lambda_1>_>
          ::_vftable_;
    pFVar8[1].Next = (FRHICommandBase *)L"TRHILambdaCommand";
    pFVar8[1]._padding_ = (longlong)this;
  }
  else {
    plVar1 = &this->_padding_;
    pFVar7 = GetBaseResource(this);
    if (pFVar7->LinkedViews != (FD3D11View *)0x0) {
      *(longlong **)&pFVar7->LinkedViews->field_0x10 = plVar1;
    }
    *plVar1 = (longlong)pFVar7->LinkedViews;
    this->_padding_ = (longlong)pFVar7;
    pFVar9 = (FD3D11View *)&this->_padding_;
    if (plVar1 == (longlong *)0x0) {
      pFVar9 = (FD3D11View *)0x0;
    }
    pFVar7->LinkedViews = pFVar9;
    UpdateView((FD3D11ShaderResourceView *)&this->_padding_);
  }
  return this;
}

// GetBaseResource @ 1459816c0

FD3D11ViewableResource * __thiscall
FD3D11ShaderResourceView::GetBaseResource(FD3D11ShaderResourceView *this)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  FD3D11ViewableResource *pFVar5;
  
  cVar1 = (char)this->_padding_;
  if ((cVar1 == '\0') || (cVar1 == '\x01')) {
    pFVar5 = (FD3D11ViewableResource *)(this->_padding_ + 0xe8);
    if (this->_padding_ == 0) {
      pFVar5 = (FD3D11ViewableResource *)0x0;
    }
    return pFVar5;
  }
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    lVar4 = (**(code **)(*(longlong *)this->_padding_ + 0x48))();
    if (lVar4 != 0) {
      return (FD3D11ViewableResource *)(lVar4 + 0x138);
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11RHIPrivate.h"
                       ,0x193,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FD3D11ViewableResource *)(*pcVar2)();
      return pFVar5;
    }
  }
  return (FD3D11ViewableResource *)0x0;
}

// UpdateView @ 14599eea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHITexturePlane": Some values do not have unique names */
/* WARNING: Enum "EDimension": Some values do not have unique names */

void __thiscall FD3D11ShaderResourceView::UpdateView(FD3D11ShaderResourceView *this)

{
  longlong *plVar1;
  char cVar2;
  FRHIBuffer *pFVar3;
  longlong *plVar4;
  ID3D11Device *pIVar5;
  code *pcVar6;
  EDimension EVar7;
  bool bVar8;
  DXGI_FORMAT_conflict DVar9;
  uint uVar10;
  int iVar11;
  FRHITexture *pFVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStackY_98 [32];
  FViewInfo local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  FViewInfo local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_98;
  lVar14 = 0;
  local_48 = 0;
  cVar2 = (char)this[-1]._padding_;
  local_58 = 0;
  uStack_50 = 0;
  if ((cVar2 == '\0') || (cVar2 == '\x01')) {
    pFVar3 = (FRHIBuffer *)this[-1]._padding_;
    FRHIViewDesc::FBufferSRV::GetViewInfo((FBufferSRV *)&this[-1]._padding_,&local_40,pFVar3);
    if (local_40._18_1_ != '\0') goto LAB_14599f122;
    lVar14 = pFVar3[1]._padding_;
    DVar9 = UE::DXGIUtilities::FindShaderResourceFormat
                      (GPixelFormats[(byte)local_40._17_1_].PlatformFormat,false);
    local_58 = CONCAT44(local_58._4_4_,DVar9);
    if ((local_40._16_1_ == '\x01') || (local_40._16_1_ == '\x02')) {
      local_58 = CONCAT44(1,DVar9);
    }
    else {
      if (local_40._16_1_ != '\x04') {
        iVar11 = 0x3e;
LAB_14599efa3:
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11SRV.cpp"
                           ,iVar11,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        goto LAB_14599f122;
      }
      local_58 = 0xb00000027;
      local_48 = CONCAT44(local_48._4_4_,1);
    }
    uVar10 = (uint)local_40._0_4_ / (uint)local_40._4_4_;
  }
  else {
    if ((longlong *)this[-1]._padding_ == (longlong *)0x0) {
      pFVar12 = (FRHITexture *)0x0;
    }
    else {
      pFVar12 = (FRHITexture *)(**(code **)(*(longlong *)this[-1]._padding_ + 0x48))();
      if (pFVar12 == (FRHITexture *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11RHIPrivate.h"
                           ,0x193,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
    }
    lVar14 = pFVar12[1]._padding_;
    FRHIViewDesc::FTextureSRV::GetViewInfo((FTextureSRV *)&this[-1]._padding_,&local_68,pFVar12);
    DVar9 = UE::DXGIUtilities::FindShaderResourceFormat
                      (GPixelFormats[(byte)local_68._5_1_].PlatformFormat,local_68.bSRGB);
    local_58 = CONCAT44(local_58._4_4_,DVar9);
    EVar7 = UE::RHICore::AdjustViewInfoDimensionForNarrowing
                      ((FViewInfo *)&local_68,&pFVar12->TextureDesc);
    if (EVar7 == Texture2D) {
      if (1 < (pFVar12->TextureDesc).NumSamples) {
        local_58 = CONCAT44(6,(undefined4)local_58);
        goto LAB_14599f122;
      }
      uVar10 = (uint)local_68.MipRange.First;
      local_40._8_4_ = ZEXT14(local_68.MipRange.Num);
      local_58 = CONCAT44(4,(undefined4)local_58);
    }
    else if (EVar7 == Texture2DArray) {
      uVar10 = (uint)(ushort)local_68._0_2_;
      if ((pFVar12->TextureDesc).NumSamples < 2) {
        local_48 = (ulonglong)CONCAT24(local_68._2_2_,uVar10);
        uVar10 = (uint)local_68.MipRange.First;
        local_40._8_4_ = ZEXT14(local_68.MipRange.Num);
        local_58 = CONCAT44(5,(undefined4)local_58);
      }
      else {
        local_40._8_4_ = ZEXT24((ushort)local_68._2_2_);
        local_58 = CONCAT44(7,(undefined4)local_58);
      }
    }
    else if (EVar7 == NumBits) {
      uVar10 = (uint)local_68.MipRange.First;
      local_40._8_4_ = ZEXT14(local_68.MipRange.Num);
      local_58 = CONCAT44(9,(undefined4)local_58);
    }
    else {
      if (EVar7 == TextureCubeArray) {
        uStack_50 = (ulonglong)CONCAT14(local_68.MipRange.Num,(uint)local_68.MipRange.First);
        local_58 = CONCAT44(10,(undefined4)local_58);
        local_48 = (ulonglong)
                   CONCAT24(local_68._2_2_,
                            ((uint)(ushort)local_68._0_2_ + (uint)(ushort)local_68._0_2_ * 2) * 2);
        goto LAB_14599f122;
      }
      if (EVar7 != Texture3D) {
        iVar11 = 0x83;
        goto LAB_14599efa3;
      }
      uVar10 = (uint)local_68.MipRange.First;
      local_40._8_4_ = ZEXT14(local_68.MipRange.Num);
      local_58 = CONCAT44(8,(undefined4)local_58);
    }
  }
  uStack_50 = CONCAT44(local_40._8_4_,uVar10);
LAB_14599f122:
  plVar4 = (longlong *)this->_padding_;
  plVar1 = &this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    *plVar1 = 0;
    (**(code **)(*plVar4 + 0x10))();
  }
  if (lVar14 != 0) {
    lVar13 = (**(code **)(GDynamicRHI->_padding_ + 0x30))();
    plVar4 = (longlong *)*plVar1;
    pIVar5 = *(ID3D11Device **)(lVar13 + 0x178);
    pcVar6 = *(code **)((longlong)*pIVar5 + 0x38);
    if (plVar4 != (longlong *)0x0) {
      *plVar1 = 0;
      (**(code **)(*plVar4 + 0x10))();
    }
    iVar11 = (*pcVar6)(pIVar5,lVar14,&local_58,plVar1);
    if (iVar11 < 0) {
      VerifyD3D11Result(iVar11,
                        "Device->CreateShaderResourceView(D3DResource, &SRVDesc, View.GetInitReference())"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11SRV.cpp"
                        ,0x8c,pIVar5);
    }
  }
  return;
}

