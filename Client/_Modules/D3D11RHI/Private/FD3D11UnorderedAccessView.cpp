// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 4

// FD3D11UnorderedAccessView @ 14596ca20

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FD3D11UnorderedAccessView * __thiscall
FD3D11UnorderedAccessView::FD3D11UnorderedAccessView
          (FD3D11UnorderedAccessView *this,FRHICommandListBase *param_1,
          FRHIViewableResource *param_2,FRHIViewDesc *param_3)

{
  longlong *plVar1;
  char cVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  FD3D11UnorderedAccessView *pFVar6;
  FD3D11ViewableResource *pFVar7;
  FRHICommandBase *pFVar8;
  FD3D11View *pFVar9;
  
  FRHIResource::FRHIResource((FRHIResource *)this,RRT_UnorderedAccessView);
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
      pFVar6 = (FD3D11UnorderedAccessView *)(*pcVar3)();
      return pFVar6;
    }
  }
  this->_padding_ = (longlong)&___7FRHIUnorderedAccessView__6B_;
  cVar2 = (char)this->_padding_;
  if ((cVar2 == '\0') || (cVar2 == '\x02')) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ViewDesc.IsUAV()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xce3,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FD3D11UnorderedAccessView *)(*pcVar3)();
      return pFVar6;
    }
  }
  this->_padding_ = (longlong)&_vftable__for__FRHIUnorderedAccessView__;
  this->_padding_ = (longlong)&_vftable__for__FD3D11View__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->View).Reference = (ID3D11UnorderedAccessView *)0x0;
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->PersistentState).bImmediate == '\0'))
     && (param_1->bExecuting == false)) {
    pFVar8 = FMemStackBase::Alloc(&param_1->MemManager,0x20,8);
    param_1->NumCommands = param_1->NumCommands + 1;
    *param_1->CommandLink = pFVar8;
    param_1->CommandLink = &pFVar8->Next;
    pFVar8->Next = (FRHICommandBase *)0x0;
    pFVar8->_padding_ =
         (longlong)
         &TRHILambdaCommand<FRHICommandListBase,`FD3D11UnorderedAccessView::FD3D11UnorderedAccessView'::`2'::<lambda_1>_>
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
    UpdateView((FD3D11UnorderedAccessView *)&this->_padding_);
  }
  return this;
}

// GetBaseResource @ 145981740

FD3D11ViewableResource * __thiscall
FD3D11UnorderedAccessView::GetBaseResource(FD3D11UnorderedAccessView *this)

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

// UpdateView @ 14599f1d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FD3D11UnorderedAccessView::UpdateView(FD3D11UnorderedAccessView *this)

{
  longlong *plVar1;
  char cVar2;
  FRHIBuffer *pFVar3;
  longlong *plVar4;
  ID3D11Device *pIVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  FRHITexture *pFVar11;
  longlong lVar12;
  byte bVar13;
  longlong lVar14;
  undefined1 auStackY_98 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  FViewInfo local_50;
  undefined1 local_40 [8];
  FViewInfo local_38;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_98;
  lVar14 = 0;
  local_58 = 0;
  cVar2 = (char)this[-1]._padding_;
  local_68 = 0;
  uStack_60 = 0;
  if ((cVar2 == '\0') || (cVar2 == '\x01')) {
    pFVar3 = (FRHIBuffer *)this[-1]._padding_;
    FRHIViewDesc::FBufferUAV::GetViewInfo((FBufferUAV *)&this[-1]._padding_,&local_38,pFVar3);
    if (local_38._padding_._2_1_ != '\0') goto LAB_14599f470;
    lVar14 = pFVar3[1]._padding_;
    uVar9 = GPixelFormats[local_38._padding_._1_1_].PlatformFormat;
    if (uVar9 == 0x13) {
      uVar8 = 0x15;
    }
    else if (uVar9 == 0x1b) {
      uVar8 = 0x1c;
    }
    else {
      uVar8 = 0x57;
      if (uVar9 != 0x5a) {
        uVar8 = uVar9;
      }
    }
    local_68 = CONCAT44(1,uVar8);
    uStack_60 = CONCAT44((undefined4)local_38._padding_,
                         (uint)local_38._padding_ / local_38._padding_._4_4_);
    local_58 = -(uint)(local_38.bAtomicCounter != false) & 4 |
               -(uint)(local_38.bAppendBuffer != false) & 2 | local_58;
    if (((char)local_38._padding_ == '\x01') || ((char)local_38._padding_ == '\x02'))
    goto LAB_14599f470;
    if ((char)local_38._padding_ == '\x04') {
      local_68 = 0x100000027;
      local_58 = local_58 | 1;
      goto LAB_14599f470;
    }
    iVar10 = 0x39;
  }
  else {
    if ((longlong *)this[-1]._padding_ == (longlong *)0x0) {
      pFVar11 = (FRHITexture *)0x0;
    }
    else {
      pFVar11 = (FRHITexture *)(**(code **)(*(longlong *)this[-1]._padding_ + 0x48))();
      if ((pFVar11 == (FRHITexture *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11RHIPrivate.h"
                             ,0x193,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    lVar14 = pFVar11[1]._padding_;
    FRHIViewDesc::FTextureUAV::GetViewInfo((FTextureUAV *)&this[-1]._padding_,&local_50,pFVar11);
    uVar9 = GPixelFormats[(byte)local_50._5_1_].PlatformFormat;
    if (uVar9 == 0x13) {
      uVar8 = 0x15;
    }
    else if (uVar9 == 0x1b) {
      uVar8 = 0x1c;
    }
    else {
      uVar8 = 0x57;
      if (uVar9 != 0x5a) {
        uVar8 = uVar9;
      }
    }
    bVar13 = local_50._6_1_ & 7;
    local_68 = CONCAT44(local_68._4_4_,uVar8);
    if (bVar13 == 1) {
      uStack_60 = CONCAT44(uStack_60._4_4_,(uint)local_50.MipLevel);
      local_68 = CONCAT44(4,uVar8);
      if (local_50._0_2_ != 0) {
        `FD3D11UnorderedAccessView::UpdateView'::__l21::<lambda_1>::operator()(local_40);
      }
      goto LAB_14599f470;
    }
    if (bVar13 == 2) {
      uStack_60 = (ulonglong)CONCAT24(local_50._0_2_,(uint)local_50.MipLevel);
      local_68 = CONCAT44(5,uVar8);
      local_58 = (uint)(ushort)local_50._2_2_;
      goto LAB_14599f470;
    }
    if ((bVar13 == 3) || (bVar13 == 4)) {
      local_68 = CONCAT44(5,uVar8);
      uStack_60 = CONCAT44(((uint)(ushort)local_50._0_2_ + (uint)(ushort)local_50._0_2_ * 2) * 2,
                           (uint)local_50.MipLevel);
      local_58 = ((uint)(ushort)local_50._2_2_ + (uint)(ushort)local_50._2_2_ * 2) * 2;
      goto LAB_14599f470;
    }
    if (bVar13 == 5) {
      local_68 = CONCAT44(8,uVar8);
      uVar9 = (uint)((pFVar11->TextureDesc).Depth >> (local_50.MipLevel & 0x1f));
      uStack_60 = (ulonglong)local_50.MipLevel;
      local_58 = 1;
      if (1 < uVar9) {
        local_58 = uVar9;
      }
      goto LAB_14599f470;
    }
    iVar10 = 0x67;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11UAV.cpp"
                     ,iVar10,L"");
  if (bVar7) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_14599f470:
  plVar4 = (longlong *)this->_padding_;
  plVar1 = &this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    *plVar1 = 0;
    (**(code **)(*plVar4 + 0x10))();
  }
  if (lVar14 != 0) {
    lVar12 = (**(code **)(GDynamicRHI->_padding_ + 0x30))();
    plVar4 = (longlong *)*plVar1;
    pIVar5 = *(ID3D11Device **)(lVar12 + 0x178);
    pcVar6 = *(code **)((longlong)*pIVar5 + 0x40);
    if (plVar4 != (longlong *)0x0) {
      *plVar1 = 0;
      (**(code **)(*plVar4 + 0x10))();
    }
    iVar10 = (*pcVar6)(pIVar5,lVar14,&local_68,plVar1);
    if (iVar10 < 0) {
      VerifyD3D11Result(iVar10,
                        "Device->CreateUnorderedAccessView(D3DResource, &UAVDesc, View.GetInitReference())"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11UAV.cpp"
                        ,0x70,pIVar5);
    }
  }
  return;
}

// operator() @ 1504d4e00

bool __thiscall `FD3D11UnorderedAccessView::UpdateView'::__l21::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_1487661682174984115>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1487661682174984115>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

