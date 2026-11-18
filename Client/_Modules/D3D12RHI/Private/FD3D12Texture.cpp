// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 27

// ~FD3D12Texture @ 145a48910

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FD3D12Texture::~FD3D12Texture(FD3D12Texture *this)

{
  longlong *this_00;
  char cVar1;
  longlong lVar2;
  ulong64 uVar3;
  FRHITexture *this_01;
  void *pvVar4;
  uint uVar5;
  code *pcVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_> FVar9;
  bool bVar10;
  
  this->_padding_ = (longlong)&_vftable__for__FRHIViewableResource__;
  this->_padding_ = (longlong)&_vftable__for__RHIValidation__FTextureResource__;
  this_00 = &this->_padding_;
  this->_padding_ = (longlong)&___7FD3D12Texture__6B_;
  uVar5 = 0;
  bVar10 = (int)*this_00 != 0;
  if (bVar10) {
    for (; ((uint)*this_00 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
    }
  }
  uVar7 = 0x20;
  if (bVar10) {
    uVar7 = (ulonglong)uVar5;
  }
  lVar2 = *(longlong *)((this->RenderTargetViews).AllocatorInstance.InlineData + uVar7 * 8 + -0x58);
  puVar8 = (undefined1 *)(lVar2 + 0x1f8);
  if (lVar2 == 0) {
    puVar8 = (undefined1 *)0x0;
  }
  if (((((longlong *)puVar8 == this_00) && (lVar2 = this->_padding_, lVar2 != 0)) &&
      (((ulonglong)this->_padding_ >> 0x13 & 1) == 0)) &&
     (*(char *)((longlong)&this->_padding_ + 2) == '\0')) {
    uVar3 = this->_padding_;
    if (((uVar3 == 0) && (((ulonglong)this->_padding_ >> 0x17 & 1) == 0)) &&
       ((cVar1 = (char)this->_padding_, cVar1 != '\x05' &&
        ((cVar1 != '\a' &&
         (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_1941583375391260500>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                              ,0xac,
                              "TextureSize > 0 || EnumHasAnyFlags(TextureDesc.Flags, ETextureCreateFlags::Virtual) || Texture.ResourceLocation.IsAliased()"
                             ), bVar10)))))) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FD3D12TextureStats::UpdateD3D12TextureStats
              (this,(FD3D12ResourceDesc *)(lVar2 + 0x50),(FRHITextureDesc *)&this->_padding_,uVar3,
               false,false);
  }
  this_01 = (this->AliasingSourceTexture).Reference;
  if (this_01 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  ::operator_delete((this->FirstSubresourceFootprint).Ptr,0x20);
  *(undefined4 *)&(this->LockedMap).field_0x48 = 0;
  pvVar4 = *(void **)&(this->LockedMap).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LockedMap);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (this->DepthStencilViews[3].SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (this->DepthStencilViews[2].SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (this->DepthStencilViews[1].SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (this->DepthStencilViews[0].SharedReferenceCount.ReferenceController);
  FVar9 = (this->RenderTargetViews).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_>)0x0) {
    FVar9 = (ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_>)&this->RenderTargetViews;
  }
  DestructItems<TSharedPtr<FD3D12RenderTargetView,1>,int>
            ((TSharedPtr<FD3D12RenderTargetView,1> *)FVar9,(this->RenderTargetViews).ArrayNum);
  FVar9 = (this->RenderTargetViews).AllocatorInstance.SecondaryData;
  if (FVar9 != (ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_>)0x0) {
    FMemory::Free((void *)FVar9);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ShaderResourceView).SharedReferenceCount.ReferenceController);
  FD3D12LinkedAdapterObject<FD3D12Texture>::~FD3D12LinkedAdapterObject<FD3D12Texture>
            ((FD3D12LinkedAdapterObject<FD3D12Texture> *)this_00);
  FD3D12BaseShaderResource::~FD3D12BaseShaderResource((FD3D12BaseShaderResource *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FTextureResource_RHIValidation__6B_;
  RHIValidation::FResource::~FResource((FResource *)&this->_padding_);
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

// operator() @ 145a4bca0

/* WARNING: Removing unreachable block (ram,0x000145a4bcbc) */
/* WARNING: Removing unreachable block (ram,0x000145a4bd14) */
/* WARNING: Removing unreachable block (ram,0x000145a4bcd0) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
`FD3D12Texture::UpdateTexture2D'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  ERHIPipeline EVar1;
  uint uVar2;
  undefined4 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong *plVar7;
  FD3D12CommandContext *pFVar8;
  uint *puVar9;
  FD3D12Texture *this_00;
  ulonglong uVar10;
  uint uVar11;
  FD3D12Texture *pFVar12;
  
  this_00 = (FD3D12Texture *)0x0;
  uVar10 = 0;
  puVar9 = (uint *)(*(longlong *)this + 0x1f8);
  pFVar12 = this_00;
  if (puVar9 != (uint *)0x0) {
    uVar2 = *puVar9;
    uVar11 = 0;
    if (uVar2 != 0) {
      for (; (uVar2 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
      }
    }
    uVar6 = 0x20;
    if (uVar2 != 0) {
      uVar6 = uVar11;
    }
    uVar10 = (ulonglong)uVar6;
    pFVar12 = (FD3D12Texture *)(ulonglong)uVar2;
    this_00 = *(FD3D12Texture **)(*(longlong *)this + 0x200 + (ulonglong)uVar6 * 8);
  }
  if (this_00 != (FD3D12Texture *)0x0) {
    do {
      if ((this_00->_padding_ == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Parent != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                             ,0x59,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      EVar1 = param_1->ActivePipelines;
      uVar3 = *(undefined4 *)(this_00->_padding_ + 8);
      if (((EVar1 == None) || ((EVar1 & EVar1 - Graphics) != None)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSingleRHIPipeline(ActivePipelines)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0x2b7,
                             L"Exactly one pipeline must be active to call GetComputeContext(). Current pipeline mask is \'0x%02x\'."
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((param_1->ComputeContext == (IRHIComputeContext *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ComputeContext",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0x2b8,
                             L"There is no active compute context on this command list. There may be a missing call to SwitchPipeline()."
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar7 = (longlong *)(**(code **)(param_1->ComputeContext->_padding_ + 0x148))();
      pFVar8 = (FD3D12CommandContext *)(**(code **)(*plVar7 + 0x290))(plVar7,uVar3);
      FD3D12Texture::UpdateTexture
                (this_00,pFVar8,*(uint *)((longlong)this + 0x38),*(uint *)((longlong)this + 0x3c),
                 *(uint *)((longlong)this + 0x40),0,
                 (D3D12_TEXTURE_COPY_LOCATION *)((longlong)this + 8));
      uVar11 = (uint)pFVar12 & ~(1 << ((byte)uVar10 & 0x1f));
      pFVar12 = (FD3D12Texture *)(ulonglong)uVar11;
      uVar2 = 0;
      if (uVar11 != 0) {
        for (; (uVar11 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
        }
      }
      if (uVar11 == 0) {
        return;
      }
      uVar10 = (ulonglong)uVar2;
      this_00 = *(FD3D12Texture **)
                 ((this_00->RenderTargetViews).AllocatorInstance.InlineData + uVar10 * 8 + -0x58);
    } while (this_00 != (FD3D12Texture *)0x0);
  }
  return;
}

// operator() @ 145a4be80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x000145a4c050) */
/* WARNING: Removing unreachable block (ram,0x000145a4c0ac) */
/* WARNING: Removing unreachable block (ram,0x000145a4c063) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
`FD3D12Texture::UploadInitialData'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  char cVar1;
  ERHIPipeline EVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  ED3D12Access EVar5;
  longlong lVar6;
  FD3D12Device *this_00;
  undefined8 uVar7;
  code *pcVar8;
  uint uVar9;
  FRHICommandListBase *pFVar10;
  bool bVar11;
  ushort uVar12;
  longlong lVar13;
  undefined4 *puVar14;
  ID3D12Device *pIVar15;
  longlong *plVar16;
  FD3D12CommandContext *this_01;
  ulonglong uVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint uVar21;
  FD3D12Resource *pFVar23;
  undefined1 auStack_158 [80];
  uint local_108;
  uint local_104;
  uint local_100 [2];
  undefined4 *local_f8;
  longlong local_f0;
  uint local_e8;
  uint uStack_e4;
  undefined4 local_e0;
  uint local_dc;
  undefined4 local_d8;
  uint local_d4;
  undefined8 local_d0;
  FRHICommandListBase *local_c8;
  longlong local_c0;
  FD3D12Resource *local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  D3D12_TEXTURE_COPY_LOCATION local_68;
  ulonglong local_38;
  ulonglong uVar22;
  
  puVar20 = auStack_158;
  local_38 = __security_cookie.value ^ (ulonglong)&local_108;
  local_c8 = param_1;
  lVar13 = (**(code **)(**(longlong **)this + 0x20))();
  cVar1 = *(char *)(lVar13 + 0x32);
  if ((cVar1 == '\x01') || (uVar12 = 1, cVar1 == '\x04')) {
    uVar12 = *(ushort *)(lVar13 + 0x2e);
  }
  if (cVar1 == '\x03' || cVar1 == '\x04') {
    uVar12 = uVar12 * 6;
  }
  uVar21 = (uint)*(byte *)(lVar13 + 0x30) * (uint)uVar12;
  uVar22 = (ulonglong)uVar21;
  local_b0 = uVar22 * 0x2c;
  local_108 = uVar21;
  if (local_b0 < 0x1000) {
    if (local_b0 == 0) {
      puVar14 = (undefined4 *)0x0;
      puVar20 = auStack_158;
    }
    else {
      uVar17 = local_b0 + 0x1e;
      if (uVar17 <= local_b0 + 0xf) {
        uVar17 = 0xffffffffffffff0;
      }
      puVar20 = auStack_158 + -(uVar17 & 0xfffffffffffffff0);
      puVar14 = (undefined4 *)((longlong)local_100 + -(uVar17 & 0xfffffffffffffff0));
    }
  }
  else {
    puVar14 = FMemory::Malloc(local_b0,0);
  }
  local_f8 = puVar14;
  if (puVar14 == (undefined4 *)0x0) {
    *(undefined8 *)(puVar20 + -8) = 0x145a4bf99;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Footprints",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                        ,0x8b7,L"");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  lVar13 = *(longlong *)this;
  local_d0 = 0;
  lVar6 = *(longlong *)(lVar13 + 400);
  if (*(longlong *)(lVar13 + 0x140) == 0) {
    *(undefined8 *)(puVar20 + -8) = 0x145a4bfe6;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Parent != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                        ,0x59,L"");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  this_00 = *(FD3D12Device **)(lVar13 + 0x140);
  *(undefined8 *)(puVar20 + -8) = 0x145a4bff8;
  pIVar15 = FD3D12Device::GetDevice(this_00);
  pcVar8 = *(code **)((longlong)*pIVar15 + 0x130);
  *(undefined8 **)(puVar20 + 0x40) = &local_d0;
  uVar7 = *(undefined8 *)((longlong)this + 0x68);
  *(undefined4 **)(puVar20 + 0x38) = puVar14 + uVar22 * 8 + uVar22;
  *(undefined4 **)(puVar20 + 0x30) = puVar14 + uVar22 * 8;
  *(undefined4 **)(puVar20 + 0x28) = puVar14;
  *(undefined8 *)(puVar20 + 0x20) = uVar7;
  *(undefined8 *)(puVar20 + -8) = 0x145a4c038;
  (*pcVar8)(pIVar15,lVar6 + 0x50,0);
  local_104 = 0;
  local_f0 = 0;
  local_98 = *(undefined8 *)(*(longlong *)((longlong)this + 0x18) + 0x20);
  local_90 = 1;
  local_e0 = 0;
  local_100[0] = 0x20;
  puVar18 = (uint *)(*(longlong *)this + 0x1f8);
  if (puVar18 != (uint *)0x0) {
    local_104 = *puVar18;
    local_dc = 0;
    if (local_104 != 0) {
      for (; (local_104 >> local_dc & 1) == 0; local_dc = local_dc + 1) {
      }
    }
    local_100[0] = 0x20;
    if (local_104 != 0) {
      local_100[0] = local_dc;
    }
    local_a8 = CONCAT44(local_100[0],local_104);
    local_f0 = *(longlong *)(*(longlong *)this + 0x200 + (ulonglong)local_100[0] * 8);
    local_e8 = local_104;
    uStack_e4 = local_100[0];
  }
  local_d8 = 0;
  for (lVar13 = local_f0; local_f0 = lVar13, lVar13 != 0;
      lVar13 = *(longlong *)(lVar13 + 0x200 + (ulonglong)local_d4 * 8)) {
    if (*(longlong *)(lVar13 + 0x140) == 0) {
      *(undefined8 *)(puVar20 + -8) = 0x145a4c0ea;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parent != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x59,L"");
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pFVar10 = local_c8;
    pFVar23 = *(FD3D12Resource **)(lVar13 + 400);
    EVar2 = local_c8->ActivePipelines;
    uVar4 = *(undefined4 *)(*(longlong *)(lVar13 + 0x140) + 8);
    local_b8 = pFVar23;
    if ((EVar2 == None) || (((uint)EVar2 & EVar2 - 1) != 0)) {
      *(uint *)(puVar20 + 0x20) = (uint)EVar2;
      *(undefined8 *)(puVar20 + -8) = 0x145a4c13d;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSingleRHIPipeline(ActivePipelines)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                          ,0x2b7,
                          L"Exactly one pipeline must be active to call GetComputeContext(). Current pipeline mask is \'0x%02x\'."
                         );
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    if (pFVar10->ComputeContext == (IRHIComputeContext *)0x0) {
      *(undefined8 *)(puVar20 + -8) = 0x145a4c16a;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ComputeContext",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                          ,0x2b8,
                          L"There is no active compute context on this command list. There may be a missing call to SwitchPipeline()."
                         );
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pcVar8 = *(code **)(pFVar10->ComputeContext->_padding_ + 0x148);
    *(undefined8 *)(puVar20 + -8) = 0x145a4c17d;
    plVar16 = (longlong *)(*pcVar8)();
    pcVar8 = *(code **)(*plVar16 + 0x290);
    *(undefined8 *)(puVar20 + -8) = 0x145a4c18f;
    this_01 = (FD3D12CommandContext *)(*pcVar8)(plVar16,uVar4);
    uVar9 = local_108;
    uVar19 = 0;
    local_68.pResource = (pFVar23->Resource).Reference;
    local_68.Type = D3D12_TEXTURE_COPY_TYPE_SUBRESOURCE_INDEX;
    bVar11 = uVar21 != 0;
    puVar14 = local_f8;
    uVar21 = 0;
    if (bVar11) {
      do {
        local_88 = *puVar14;
        uStack_84 = puVar14[1];
        uStack_80 = puVar14[2];
        uStack_7c = puVar14[3];
        local_78 = puVar14[4];
        uStack_74 = puVar14[5];
        uStack_70 = puVar14[6];
        uStack_6c = puVar14[7];
        local_c0 = (*(longlong **)this)[3];
        pcVar8 = *(code **)(**(longlong **)this + 0x20);
        local_68.field2_0x10.SubresourceIndex = uVar19;
        *(undefined8 *)(puVar20 + -8) = 0x145a4c1ee;
        lVar13 = (*pcVar8)();
        uVar3 = *(undefined1 *)(lVar13 + 0x33);
        pcVar8 = *(code **)(**(longlong **)this + 0x20);
        *(undefined8 *)(puVar20 + -8) = 0x145a4c1fc;
        lVar13 = (*pcVar8)();
        *(longlong **)(puVar20 + 0x48) = &local_c0;
        puVar20[0x40] = uVar3;
        uVar3 = *(undefined1 *)(lVar13 + 0x33);
        *(undefined8 *)(puVar20 + 0x38) = 0;
        *(undefined8 **)(puVar20 + 0x30) = &local_98;
        puVar20[0x28] = uVar3;
        *(undefined4 *)(puVar20 + 0x20) = 0;
        *(undefined8 *)(puVar20 + -8) = 0x145a4c238;
        FD3D12CommandContext::CopyTextureRegionChecked
                  (this_01,&local_68,0,0,*(int *)(puVar20 + 0x20),puVar20[0x28],
                   *(D3D12_TEXTURE_COPY_LOCATION **)(puVar20 + 0x30),*(D3D12_BOX **)(puVar20 + 0x38)
                   ,puVar20[0x40],*(FName **)(puVar20 + 0x48));
        uVar19 = uVar19 + 1;
        puVar14 = puVar14 + 8;
        lVar13 = local_f0;
        pFVar23 = local_b8;
        uVar21 = local_108;
      } while (uVar19 < uVar9);
    }
    EVar5 = *(ED3D12Access *)((longlong)this + 0x80);
    *(undefined4 *)(puVar20 + 0x20) = 0xffffffff;
    *(undefined8 *)(puVar20 + -8) = 0x145a4c274;
    FD3D12ContextCommon::AddBarrier
              ((FD3D12ContextCommon *)this_01,pFVar23,CopyDest,EVar5,*(uint *)(puVar20 + 0x20));
    *(undefined8 *)(puVar20 + -8) = 0x145a4c27c;
    FD3D12ContextCommon::ConditionalSplitCommandList((FD3D12ContextCommon *)this_01);
    if (*(char *)(lVar13 + 0x1f1) == '\x02') {
      if ((*(uint *)(lVar13 + 0x1ac) & 0x100000) == 0) {
        *(undefined8 *)(puVar20 + -8) = 0x145a4c2b1;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Locked == 1",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Public\\RHIPoolAllocator.h"
                            ,0x50,L"");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      *(uint *)(lVar13 + 0x1ac) = *(uint *)(lVar13 + 0x1ac) & 0xffefffff;
    }
    if ((!pFVar23->bRequiresResourceStateTracking) &&
       (pFVar23->DefaultD3D12Access != *(ED3D12Access *)((longlong)this + 0x80))) {
      *(undefined8 *)(puVar20 + -8) = 0x145a4c2fc;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Resource->RequiresResourceStateTracking() || (Resource->GetDefaultAccess() == InDestinationD3D12Access)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                          ,0x8e3,L"");
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    local_104 = local_104 & ~(1 << ((byte)local_100[0] & 0x1f));
    local_d4 = 0;
    if (local_104 != 0) {
      for (; (local_104 >> local_d4 & 1) == 0; local_d4 = local_d4 + 1) {
      }
    }
    local_100[0] = 0x20;
    puVar14 = local_f8;
    if (local_104 == 0) break;
    local_100[0] = local_d4;
  }
  if (0xfff < local_b0) {
    *(undefined8 *)(puVar20 + -8) = 0x145a4c35b;
    FMemory::Free(puVar14);
  }
  *(undefined8 *)(puVar20 + -8) = 0x145a4c36a;
  return;
}

// operator() @ 145a4d0d0

/* WARNING: Removing unreachable block (ram,0x000145a4d125) */
/* WARNING: Removing unreachable block (ram,0x000145a4d18f) */
/* WARNING: Removing unreachable block (ram,0x000145a4d13a) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
`FD3D12Texture::Unlock'::__l23::<lambda_1>::operator()(void *this,FRHICommandListBase *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar3;
  ERHIPipeline EVar4;
  undefined4 uVar5;
  longlong lVar6;
  uint uVar7;
  code *pcVar8;
  FD3D12Texture *pFVar9;
  FD3D12DynamicRHI *pFVar10;
  bool bVar11;
  int iVar12;
  longlong *plVar13;
  FD3D12CommandContext *pFVar14;
  uint *puVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  FD3D12Texture *this_00;
  undefined1 local_94 [4];
  uint local_90;
  uint uStack_8c;
  undefined8 local_88;
  undefined4 local_70;
  undefined4 uStack_6c;
  D3D12_TEXTURE_COPY_LOCATION local_68;
  
  lVar6 = *(longlong *)((longlong)this + 0x10);
  pFVar1 = (FScriptContainerElement *)((longlong)this + 0x10);
  this_00 = (FD3D12Texture *)0x0;
  local_70 = *(undefined4 *)(lVar6 + 0x90);
  local_68.field2_0x10._8_8_ = *(undefined8 *)(lVar6 + 0x80);
  local_68.field2_0x10._16_8_ = *(undefined8 *)(lVar6 + 0x88);
  local_68.field2_0x10.PlacedFootprint.Offset = *(ulong64 *)(lVar6 + 0x68);
  local_68.pResource = *(ID3D12Resource **)(*(longlong *)(lVar6 + 0x18) + 0x20);
  local_68.Type = D3D12_TEXTURE_COPY_TYPE_PLACED_FOOTPRINT;
  uVar16 = 0;
  local_68.field2_0x10._24_8_ = CONCAT44(uStack_6c,local_70);
  puVar15 = (uint *)(*(longlong *)this + 0x1f8);
  pFVar9 = this_00;
  if (puVar15 != (uint *)0x0) {
    local_90 = *puVar15;
    uVar7 = 0;
    if (local_90 != 0) {
      for (; (local_90 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
      }
    }
    uStack_8c = 0x20;
    if (local_90 != 0) {
      uStack_8c = uVar7;
    }
    local_88 = CONCAT44(uStack_8c,local_90);
    uVar16 = (ulonglong)uStack_8c;
    pFVar9 = (FD3D12Texture *)(ulonglong)local_90;
    this_00 = *(FD3D12Texture **)(*(longlong *)this + 0x200 + (ulonglong)uStack_8c * 8);
  }
  for (; this_00 != (FD3D12Texture *)0x0;
      this_00 = *(FD3D12Texture **)
                 ((this_00->RenderTargetViews).AllocatorInstance.InlineData + uVar16 * 8 + -0x58)) {
    if ((this_00->_padding_ == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Parent != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                            ,0x59,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    EVar4 = param_1->ActivePipelines;
    uVar5 = *(undefined4 *)(this_00->_padding_ + 8);
    if (((EVar4 == None) || ((EVar4 & EVar4 - Graphics) != None)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSingleRHIPipeline(ActivePipelines)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                            ,0x2b7,
                            L"Exactly one pipeline must be active to call GetComputeContext(). Current pipeline mask is \'0x%02x\'."
                           ), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((param_1->ComputeContext == (IRHIComputeContext *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ComputeContext",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                            ,0x2b8,
                            L"There is no active compute context on this command list. There may be a missing call to SwitchPipeline()."
                           ), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    plVar13 = (longlong *)(**(code **)(param_1->ComputeContext->_padding_ + 0x148))();
    pFVar14 = (FD3D12CommandContext *)(**(code **)(*plVar13 + 0x290))(plVar13,uVar5);
    FD3D12Texture::UpdateTexture(this_00,pFVar14,*(uint *)((longlong)this + 8),0,0,0,&local_68);
    uVar18 = (uint)pFVar9 & ~(1 << ((byte)uVar16 & 0x1f));
    uVar7 = 0;
    if (uVar18 != 0) {
      for (; (uVar18 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
      }
    }
    if (uVar18 == 0) break;
    uVar16 = (ulonglong)uVar7;
    pFVar9 = (FD3D12Texture *)(ulonglong)uVar18;
  }
  puVar15 = (uint *)(**(code **)(**(longlong **)this + 0x20))();
  pFVar10 = FD3D12DynamicRHI::SingleD3DRHI;
  if (((*puVar15 >> 8 & 1) != 0) &&
     ((*(char *)(*(longlong *)pFVar1 + 0x78) == '\x01' ||
      (*(char *)(*(longlong *)pFVar1 + 0x79) == '\x02')))) {
    lpCriticalSection = &FD3D12DynamicRHI::SingleD3DRHI->ObjectsToDeleteCS;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar12 = (pFVar10->ObjectsToDelete).ArrayNum;
    piVar3 = &(pFVar10->ObjectsToDelete).ArrayMax;
    if (iVar12 == *piVar3) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&(pFVar10->ObjectsToDelete).AllocatorInstance,piVar3);
    }
    (pFVar10->ObjectsToDelete).ArrayNum = iVar12 + 1;
    uVar5 = *(undefined4 *)((longlong)this + 8);
    lVar6 = *(longlong *)this;
    pFVar17 = (pFVar10->ObjectsToDelete).AllocatorInstance.Data + (longlong)iVar12 * 0x30;
    plVar13 = (longlong *)(lVar6 + 0x138);
    *(undefined4 *)pFVar17 = 10;
    *(longlong *)(pFVar17 + 8) = lVar6;
    (**(code **)(*plVar13 + 8))(plVar13,local_94);
    pFVar2 = pFVar17 + 0x10;
    *(longlong *)pFVar2 = 0;
    if (pFVar2 != pFVar1) {
      *(longlong *)pFVar2 = *(longlong *)pFVar1;
      *(longlong *)pFVar1 = 0;
    }
    *(undefined4 *)(pFVar17 + 0x18) = uVar5;
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// operator() @ 145a4d6b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
`FD3D12Texture::Lock'::__l54::<lambda_1>::operator()(void *this,FRHICommandListBase *param_1)

{
  EPixelFormat EVar1;
  FD3D12Resource *pFVar2;
  code *pcVar3;
  bool bVar4;
  FD3D12CommandContext *this_00;
  longlong lVar5;
  FName local_res8;
  
  this_00 = FD3D12CommandContext::Get(param_1,0);
  FD3D12ContextCommon::FlushResourceBarriers((FD3D12ContextCommon *)this_00);
  local_res8 = *(FName *)(*(longlong **)this + 3);
  lVar5 = (**(code **)(**(longlong **)this + 0x20))();
  EVar1 = *(EPixelFormat *)(lVar5 + 0x33);
  lVar5 = (**(code **)(**(longlong **)this + 0x20))();
  FD3D12CommandContext::CopyTextureRegionChecked
            (this_00,(D3D12_TEXTURE_COPY_LOCATION *)((longlong)this + 8),0,0,0,
             *(EPixelFormat *)(lVar5 + 0x33),(D3D12_TEXTURE_COPY_LOCATION *)((longlong)this + 0x38),
             (D3D12_BOX *)0x0,EVar1,&local_res8);
  pFVar2 = *(FD3D12Resource **)(*(longlong *)this + 400);
  if (pFVar2 == (FD3D12Resource *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Resource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                       ,0x1a5,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(longlong *)&this_00->field_0x188 == 0) {
    (**(code **)(*(longlong *)this_00 + 8))(this_00);
  }
  FD3D12CommandList::UpdateResidency(*(FD3D12CommandList **)&this_00->field_0x188,pFVar2);
  return;
}

// AddRef @ 145a51370

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

FReturnedRefCountValue __thiscall FD3D12Texture::AddRef(FD3D12Texture *this)

{
  uint uVar1;
  uint *in_RDX;
  
  uVar1 = FRHIResource::AddRef((FRHIResource *)&this[-1]._padding_);
  *in_RDX = uVar1;
  return (FReturnedRefCountValue)(uint)in_RDX;
}

// AliasResources @ 145a51700

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FD3D12Texture::AliasResources(FD3D12Texture *this,FD3D12Texture *param_1)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  FD3D12ShaderResourceView *pFVar3;
  FD3D12DepthStencilView *pFVar4;
  ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_> FVar5;
  undefined8 uVar6;
  longlong lVar7;
  code *pcVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  uint uVar11;
  ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_> FVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_> FVar16;
  
  if ((*(char *)((longlong)&param_1->_padding_ + 1) == '\x02') &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Source.GetAllocatorType() != FD3D12ResourceLocation::AT_Pool",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                          ,0x4dd,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((param_1->_padding_ == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Source.GetResource() != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                          ,0x4df,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FD3D12ResourceLocation::ReleaseResource((FD3D12ResourceLocation *)&this->_padding_);
  uVar13 = 0;
  *(undefined2 *)&this->_padding_ = 0xff00;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  memmove(&this->_padding_,&param_1->_padding_,0x78);
  *(undefined1 *)&this->_padding_ = 5;
  *(undefined1 *)&param_1->_padding_ = 5;
  LOCK();
  piVar1 = (int *)(param_1->_padding_ + 8);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  pTVar2 = (param_1->ShaderResourceView).SharedReferenceCount.ReferenceController;
  pFVar3 = (param_1->ShaderResourceView).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar9 = (this->ShaderResourceView).SharedReferenceCount.ReferenceController;
  (this->ShaderResourceView).Object = pFVar3;
  (this->ShaderResourceView).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  pTVar2 = param_1->DepthStencilViews[0].SharedReferenceCount.ReferenceController;
  pFVar4 = param_1->DepthStencilViews[0].Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar9 = this->DepthStencilViews[0].SharedReferenceCount.ReferenceController;
  this->DepthStencilViews[0].Object = pFVar4;
  this->DepthStencilViews[0].SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  pTVar2 = param_1->DepthStencilViews[1].SharedReferenceCount.ReferenceController;
  pFVar4 = param_1->DepthStencilViews[1].Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar9 = this->DepthStencilViews[1].SharedReferenceCount.ReferenceController;
  this->DepthStencilViews[1].Object = pFVar4;
  this->DepthStencilViews[1].SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  pTVar2 = param_1->DepthStencilViews[2].SharedReferenceCount.ReferenceController;
  pFVar4 = param_1->DepthStencilViews[2].Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar9 = this->DepthStencilViews[2].SharedReferenceCount.ReferenceController;
  this->DepthStencilViews[2].Object = pFVar4;
  this->DepthStencilViews[2].SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  pTVar2 = param_1->DepthStencilViews[3].SharedReferenceCount.ReferenceController;
  pFVar4 = param_1->DepthStencilViews[3].Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar9 = this->DepthStencilViews[3].SharedReferenceCount.ReferenceController;
  this->DepthStencilViews[3].Object = pFVar4;
  this->DepthStencilViews[3].SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  this->bCreatedRTVsPerSlice = param_1->bCreatedRTVsPerSlice;
  this->RTVArraySizePerMip = param_1->RTVArraySizePerMip;
  TArray<TSharedPtr<FD3D12RenderTargetView,1>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  ::SetNum(&this->RenderTargetViews,(param_1->RenderTargetViews).ArrayNum,Default);
  uVar15 = uVar13;
  if (0 < (param_1->RenderTargetViews).ArrayNum) {
    do {
      uVar14 = (uint)uVar15;
      uVar11 = 0;
      if ((int)uVar14 < (param_1->RenderTargetViews).ArrayNum) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FVar5 = (param_1->RenderTargetViews).AllocatorInstance.SecondaryData;
      FVar16 = (ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_>)&param_1->RenderTargetViews;
      if (FVar5 != (ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_>)0x0) {
        FVar16 = FVar5;
      }
      uVar11 = 0;
      if ((int)uVar14 < (this->RenderTargetViews).ArrayNum) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FVar5 = (this->RenderTargetViews).AllocatorInstance.SecondaryData;
      uVar6 = *(undefined8 *)((longlong)FVar16 + uVar13);
      FVar12 = (ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_>)&this->RenderTargetViews;
      if (FVar5 != (ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_>)0x0) {
        FVar12 = FVar5;
      }
      lVar7 = *(longlong *)((longlong)FVar16 + 8 + uVar13);
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
        UNLOCK();
      }
      pTVar2 = *(TReferenceControllerBase<1> **)((longlong)FVar12 + uVar13 + 8);
      *(undefined8 *)((longlong)FVar12 + uVar13) = uVar6;
      *(longlong *)((uchar *)((longlong)FVar12 + 8) + uVar13) = lVar7;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      uVar13 = uVar13 + 0x10;
      uVar15 = (ulonglong)(uVar14 + 1);
    } while ((int)(uVar14 + 1) < (param_1->RenderTargetViews).ArrayNum);
  }
  return;
}

// CanBe4KAligned @ 145a54500

bool __cdecl FD3D12Texture::CanBe4KAligned(FD3D12ResourceDesc *param_1,EPixelFormat param_2)

{
  D3D12_TILE_SHAPE local_18;
  
  if ((((!param_1->bReservedResource) && (param_2 != PF_NV12)) && (param_2 != PF_P010)) &&
     (((param_1->_padding_ & 3) == 0 && (*(int *)((longlong)&param_1->_padding_ + 4) == 1)))) {
    local_18.WidthInTexels = 0;
    local_18.HeightInTexels = 0;
    local_18.DepthInTexels = 0;
    Get4KTileShape(&local_18,(DXGI_FORMAT)param_1->_padding_,param_2,
                   (D3D12_RESOURCE_DIMENSION)param_1->_padding_,1);
    return (((*(ushort *)((longlong)&param_1->_padding_ + 4) - 1) + local_18.DepthInTexels) /
           local_18.DepthInTexels) *
           (((int)param_1->_padding_ + -1 + local_18.HeightInTexels) / local_18.HeightInTexels) *
           (((int)param_1->_padding_ + -1 + local_18.WidthInTexels) / local_18.WidthInTexels) < 0x11
    ;
  }
  return false;
}

// CopyTextureRegion @ 145a5b300

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12Texture::CopyTextureRegion
          (FD3D12Texture *this,FD3D12CommandContext *param_1,uint param_2,uint param_3,uint param_4,
          FD3D12Texture *param_5,D3D12_BOX *param_6)

{
  undefined1 *puVar1;
  EPixelFormat EVar2;
  FD3D12Resource *pFVar3;
  FD3D12Resource *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  longlong lVar9;
  ED3D12Access EVar10;
  ED3D12Access EVar11;
  uint local_res10;
  FName local_f8;
  FD3D12Resource *local_f0;
  D3D12_TEXTURE_COPY_LOCATION local_e8;
  D3D12_TEXTURE_COPY_LOCATION local_b8;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  pFVar3 = (FD3D12Resource *)this->_padding_;
  bVar7 = false;
  EVar11 = Unknown;
  local_88 = 0;
  uStack_80 = 0;
  local_b8.pResource = (pFVar3->Resource).Reference;
  local_b8.Type = D3D12_TEXTURE_COPY_TYPE_SUBRESOURCE_INDEX;
  local_b8.field2_0x10._8_8_ = 0;
  EVar10 = Unknown;
  local_res10 = 0;
  local_b8.field2_0x10._16_8_ = 0;
  local_b8.field2_0x10._24_8_ = 0;
  local_b8.field2_0x10.PlacedFootprint.Offset = 0;
  local_e8.pResource = *(ID3D12Resource **)(param_5->_padding_ + 0x20);
  local_e8.field2_0x10._8_8_ = 0;
  local_e8.field2_0x10.PlacedFootprint.Offset = 0;
  local_e8.Type = D3D12_TEXTURE_COPY_TYPE_SUBRESOURCE_INDEX;
  local_e8.field2_0x10._16_8_ = 0;
  local_e8.field2_0x10._24_8_ = 0;
  local_78 = 0;
  uStack_70 = 0;
  bVar6 = false;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_f0 = pFVar3;
  if (!pFVar3->bRequiresResourceStateTracking) {
    EVar11 = pFVar3->DefaultD3D12Access;
    if ((((EVar11 & ReadOnlyExclusiveMask) == Unknown) || ((EVar11 & WritableMask) == Unknown)) &&
       (((EVar11 & WriteOnlyExclusiveMask) == Unknown || ((EVar11 & ReadableMask) == Unknown)))) {
      if ((EVar11 >> 0x14 & 1) == 0) goto LAB_145a5b42a;
      if ((EVar11 == Unknown) || ((EVar11 & EVar11 - CPURead) != Unknown)) goto LAB_145a5b404;
    }
    else {
LAB_145a5b404:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidAccess(BeforeD3D12Access)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHIPrivate.h"
                         ,0x2ed,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
LAB_145a5b42a:
      if (EVar11 == Unknown) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("BeforeD3D12Access != ED3D12Access::Unknown",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHIPrivate.h"
                           ,0x2ee,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
    }
    FD3D12ContextCommon::AddBarrier((FD3D12ContextCommon *)param_1,pFVar3,EVar11,CopyDest,0);
    local_res10 = local_e8.field2_0x10.SubresourceIndex;
    bVar6 = true;
  }
  pFVar3 = (FD3D12Resource *)param_5->_padding_;
  if (pFVar3->bRequiresResourceStateTracking) goto LAB_145a5b549;
  EVar10 = pFVar3->DefaultD3D12Access;
  if ((((EVar10 & ReadOnlyExclusiveMask) == Unknown) || ((EVar10 & WritableMask) == Unknown)) &&
     (((EVar10 & WriteOnlyExclusiveMask) == Unknown || ((EVar10 & ReadableMask) == Unknown)))) {
    if ((EVar10 >> 0x14 & 1) == 0) goto LAB_145a5b4fd;
    if ((EVar10 == Unknown) || ((EVar10 & EVar10 - CPURead) != Unknown)) goto LAB_145a5b4d7;
  }
  else {
LAB_145a5b4d7:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAccess(BeforeD3D12Access)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHIPrivate.h"
                       ,0x2ed,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
LAB_145a5b4fd:
    if (EVar10 == Unknown) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("BeforeD3D12Access != ED3D12Access::Unknown",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHIPrivate.h"
                         ,0x2ee,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  FD3D12ContextCommon::AddBarrier((FD3D12ContextCommon *)param_1,pFVar3,EVar10,CopySrc,local_res10);
  bVar7 = true;
LAB_145a5b549:
  FD3D12ContextCommon::FlushResourceBarriers((FD3D12ContextCommon *)param_1);
  local_f8 = (FName)this->_padding_;
  lVar9 = (**(code **)(param_5->_padding_ + 0x20))(param_5);
  EVar2 = *(EPixelFormat *)(lVar9 + 0x33);
  lVar9 = (**(code **)(this->_padding_ + 0x20))();
  FD3D12CommandContext::CopyTextureRegionChecked
            (param_1,&local_b8,param_2,param_3,param_4,*(EPixelFormat *)(lVar9 + 0x33),&local_e8,
             param_6,EVar2,&local_f8);
  pFVar4 = (FD3D12Resource *)param_5->_padding_;
  if (pFVar4 == (FD3D12Resource *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Resource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                       ,0x1a5,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  puVar1 = &param_1->field_0x188;
  if (*(longlong *)puVar1 == 0) {
    (**(code **)(*(longlong *)param_1 + 8))(param_1);
  }
  FD3D12CommandList::UpdateResidency(*(FD3D12CommandList **)puVar1,pFVar4);
  pFVar4 = (FD3D12Resource *)this->_padding_;
  if (pFVar4 == (FD3D12Resource *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Resource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                       ,0x1a5,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (*(longlong *)puVar1 == 0) {
    (**(code **)(*(longlong *)param_1 + 8))(param_1);
  }
  FD3D12CommandList::UpdateResidency(*(FD3D12CommandList **)puVar1,pFVar4);
  if (bVar7) {
    FD3D12ContextCommon::AddBarrier
              ((FD3D12ContextCommon *)param_1,pFVar3,CopySrc,EVar10,local_res10);
  }
  if (bVar6) {
    FD3D12ContextCommon::AddBarrier((FD3D12ContextCommon *)param_1,local_f0,CopyDest,EVar11,0);
  }
  return;
}

// CreateViews @ 145a60650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12Texture::CreateViews(FD3D12Texture *this,FD3D12Texture *param_1)

{
  longlong lVar1;
  FD3D12Device *pFVar2;
  code *pcVar3;
  FD3D12DepthStencilView *pFVar4;
  FD3D12Texture *pFVar5;
  byte bVar6;
  bool bVar7;
  uchar uVar8;
  DXGI_FORMAT_conflict DVar9;
  DXGI_FORMAT DVar10;
  FRHITextureDesc *pFVar11;
  D3D12_TEX2D_RTV DVar12;
  uint uVar13;
  char cVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar18;
  D3D12_TEX2D_RTV DVar19;
  byte bVar20;
  char cVar21;
  char cVar22;
  uint uVar23;
  D3D12_TEX2D_RTV DVar24;
  FD3D12DepthStencilView *pFVar25;
  uint uVar26;
  D3D12_TEX2D_RTV DVar27;
  TSharedPtr<FD3D12DepthStencilView,1> *pTVar28;
  ETextureCreateFlags EVar29;
  EPixelFormat EVar30;
  FD3D12Texture *pFVar31;
  bool bVar32;
  undefined1 auStack_1f8 [32];
  char local_1d8;
  char local_1d7;
  char local_1d6;
  char local_1d5;
  char local_1d4;
  char local_1d3;
  ushort local_1d2;
  DXGI_FORMAT_conflict local_1d0;
  uint local_1cc;
  FD3D12Texture *local_1c8;
  FD3D12Texture *local_1c0;
  uint local_1b8;
  D3D12_SHADER_RESOURCE_VIEW_DESC local_1b0;
  D3D12_RENDER_TARGET_VIEW_DESC local_188;
  D3D12_DEPTH_STENCIL_VIEW_DESC local_170;
  D3D12_TEX2D_RTV local_158;
  DXGI_FORMAT_conflict local_150;
  FD3D12DepthStencilView *local_148;
  D3D12_TEX2D_RTV DStack_140;
  D3D12_RENDER_TARGET_VIEW_DESC local_138;
  D3D12_RENDER_TARGET_VIEW_DESC local_120;
  FD3D12ViewRange local_108;
  D3D12_TEX2D_RTV local_100;
  longlong *local_f8;
  longlong lStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  uint uStack_cc;
  undefined8 local_b8;
  FRHITextureDesc local_a8;
  ulonglong local_58;
  D3D12_TEX2D_RTV DVar17;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  bVar32 = CpuChannel->Enabled < 0;
  local_1c8 = param_1;
  local_1c0 = this;
  if (bVar32) {
    local_1d3 = '\0';
  }
  else {
    local_1d3 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1731,"D3D12RHI::CreateViews",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
               ,0x6c3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1731);
  }
  cVar14 = !bVar32;
  lVar1 = this->_padding_;
  local_e8 = *(undefined8 *)(lVar1 + 0x50);
  uStack_e0 = *(undefined8 *)(lVar1 + 0x58);
  local_d8 = *(undefined4 *)(lVar1 + 0x60);
  uStack_d4 = *(undefined4 *)(lVar1 + 100);
  uStack_d0 = *(undefined4 *)(lVar1 + 0x68);
  uStack_cc = *(uint *)(lVar1 + 0x6c);
  uVar13 = *(uint *)(lVar1 + 0x74);
  local_b8 = *(undefined8 *)(lVar1 + 0x80);
  pFVar11 = (FRHITextureDesc *)(**(code **)(this->_padding_ + 0x20))(this);
  FRHITextureDesc::FRHITextureDesc(&local_a8,pFVar11);
  EVar30 = local_a8.Format;
  EVar29 = local_a8.Flags;
  local_1d0 = UE::DXGIUtilities::GetPlatformTextureResourceFormat
                        (GPixelFormats[local_a8.Format].PlatformFormat,local_a8.Flags);
  DVar9 = UE::DXGIUtilities::FindShaderResourceFormat(local_1d0,(bool)((byte)EVar29 >> 4 & 1));
  local_1d6 = local_a8.Dimension == Texture3D;
  local_1d5 = (byte)(local_a8.Dimension - TextureCube) < 2;
  if ((local_a8.Dimension == Texture2DArray) ||
     (local_1d8 = '\0', local_a8.Dimension == TextureCubeArray)) {
    local_1d8 = '\x01';
  }
  uVar16 = (uint)local_b8;
  bVar20 = (byte)local_b8 & 1;
  local_158 = (D3D12_TEX2D_RTV)(CONCAT44(local_158.PlaneSlice,uVar16) & 0xffffffff00000002);
  bVar6 = ~(byte)(uVar16 >> 3) & 1;
  local_150 = DVar9;
  if ((EVar29 >> 0x13 & 1) != 0) {
    if (((EVar29 & (ShaderResource|DepthStencilTargetable|RenderTargetable)) != None) &&
       (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                           ("!EnumHasAnyFlags(Desc.Flags, ETextureCreateFlags::RenderTargetable | ETextureCreateFlags::DepthStencilTargetable | ETextureCreateFlags::ShaderResource)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                            ,0x6da,L""), EVar29 = local_a8.Flags, EVar30 = local_a8.Format, bVar32))
    {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar6 = 0;
  }
  DVar17.MipSlice = 0;
  DVar17.PlaneSlice = 0;
  uVar15 = 0;
  uVar16 = 0;
  if (EVar30 == PF_NV12) {
LAB_145a6080b:
    bVar20 = 0;
    local_1b8 = local_1b8 & 0xffffff00;
  }
  else {
    local_1b8 = uVar16;
    if ((EVar29 & DisableSRVCreation) == None) {
      local_1b8 = (uint)bVar6;
    }
    if (EVar30 == PF_P010) goto LAB_145a6080b;
  }
  local_1d7 = 1 < uVar13;
  if ((this->_padding_ == 0) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parent != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x59,L""), EVar29 = local_a8.Flags, bVar32)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  cVar22 = local_1d6;
  local_1d2 = (ushort)uStack_cc;
  pFVar31 = local_1c8;
  bVar6 = local_a8.NumMips;
  if (bVar20 != 0) {
    if (local_1d6 == '\0') {
      if (((EVar29 >> 0x18 & 1) == 0) || ((local_1d8 == '\0' && (local_1d5 == '\0')))) {
        uVar13 = (uint)local_a8.NumMips;
        cVar21 = '\0';
      }
      else {
        cVar21 = '\x01';
        uVar13 = (uint)local_a8.NumMips * (uStack_cc & 0xffff);
      }
      local_1d4 = cVar21;
      TArray<TSharedPtr<FD3D12RenderTargetView,1>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      ::SetNum(&this->RenderTargetViews,uVar13,Default);
      local_1cc = 0;
      DVar27 = DVar17;
      DVar24 = DVar17;
      pFVar31 = local_1c8;
      cVar22 = local_1d6;
      bVar6 = local_a8.NumMips;
      if (local_a8.NumMips != 0) {
        do {
          uVar13 = DVar24.MipSlice;
          if (cVar21 == '\0') {
            local_188.field2_0x8.Buffer.FirstElement = 0;
            local_188.field2_0x8._8_8_ = 0;
            local_188.Format = DVar9;
            if ((local_1d8 == '\0') && (local_1d5 == '\0')) {
              if (local_1d7 == '\0') {
                local_188.ViewDimension = D3D12_RTV_DIMENSION_TEXTURE2D;
                local_188.field2_0x8.Texture2D = DVar24;
                DVar10 = UE::DXGIUtilities::FindDepthStencilParentDXGIFormat(local_1d0);
                if (DVar10 == DXGI_FORMAT_R32G8X24_TYPELESS) {
                  iVar18 = DVar9 - DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS;
LAB_145a60b2f:
                  if ((iVar18 != 0) && (iVar18 == 1)) {
LAB_145a60b36:
                    local_188.field2_0x8.Texture1DArray.FirstArraySlice = 1;
                    goto LAB_145a60b9b;
                  }
                }
                else {
                  if (DVar10 == DXGI_FORMAT_R24G8_TYPELESS) {
                    iVar18 = DVar9 - DXGI_FORMAT_R24_UNORM_X8_TYPELESS;
                    goto LAB_145a60b2f;
                  }
                  if (DVar10 == DXGI_FORMAT_NV12) {
                    if (DVar9 != DXGI_FORMAT_R8G8_UNORM) {
                      local_188.field2_0x8.Buffer.FirstElement =
                           local_188.field2_0x8.Buffer.FirstElement & 0xffffffff;
                      goto LAB_145a60b9b;
                    }
                    goto LAB_145a60b36;
                  }
                  if ((DVar10 == DXGI_FORMAT_P010) && (DVar9 == DXGI_FORMAT_R16G16_UNORM))
                  goto LAB_145a60b36;
                }
                local_188.field2_0x8.Buffer.FirstElement =
                     local_188.field2_0x8.Buffer.FirstElement & 0xffffffff;
              }
              else {
                local_188.ViewDimension = D3D12_RTV_DIMENSION_TEXTURE2DMS;
              }
            }
            else {
              if (local_1d7 != '\0') {
                local_188.field2_0x8.Buffer.FirstElement = (ulonglong)local_1d2 << 0x20;
                local_188.ViewDimension = D3D12_RTV_DIMENSION_TEXTURE2DMSARRAY;
                goto LAB_145a60b9b;
              }
              local_188.ViewDimension = D3D12_RTV_DIMENSION_TEXTURE2DARRAY;
              local_188.field2_0x8._10_6_ = 0;
              local_188.field2_0x8.Buffer.NumElements._0_2_ = local_1d2;
              local_188.field2_0x8.Texture2D = DVar24;
              DVar10 = UE::DXGIUtilities::FindDepthStencilParentDXGIFormat(local_1d0);
              uVar23 = uVar16;
              if (DVar10 == DXGI_FORMAT_R32G8X24_TYPELESS) {
                iVar18 = DVar9 - DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS;
LAB_145a60bd5:
                if ((iVar18 != 0) && (iVar18 == 1)) {
LAB_145a60bdc:
                  uVar23 = 1;
                }
              }
              else {
                if (DVar10 == DXGI_FORMAT_R24G8_TYPELESS) {
                  iVar18 = DVar9 - DXGI_FORMAT_R24_UNORM_X8_TYPELESS;
                  goto LAB_145a60bd5;
                }
                if (DVar10 != DXGI_FORMAT_NV12) {
                  if ((DVar10 != DXGI_FORMAT_P010) || (DVar9 != DXGI_FORMAT_R16G16_UNORM))
                  goto LAB_145a60b98;
                  goto LAB_145a60bdc;
                }
                if (DVar9 == DXGI_FORMAT_R8G8_UNORM) goto LAB_145a60bdc;
              }
LAB_145a60b98:
              local_188.field2_0x8.Texture2DArray.PlaneSlice = uVar23;
            }
LAB_145a60b9b:
            uVar23 = DVar27.MipSlice;
            DVar27.MipSlice = uVar23 + 1;
            DVar27.PlaneSlice = 0;
            EmplaceRTV(this,&local_188,uVar23,local_1c8);
            bVar6 = local_a8.NumMips;
          }
          else {
            this->RTVArraySizePerMip = (uint)local_1d2;
            this->bCreatedRTVsPerSlice = true;
            uVar23 = (uint)local_1d2;
            this = local_1c0;
            cVar21 = local_1d4;
            if (local_1d2 != 0) {
              DVar10 = UE::DXGIUtilities::FindDepthStencilParentDXGIFormat(local_1d0);
              uVar13 = local_1cc;
              DVar12 = DVar17;
              do {
                local_120.ViewDimension = D3D12_RTV_DIMENSION_TEXTURE2DARRAY;
                local_120.field2_0x8.Buffer.NumElements = 1;
                local_120.field2_0x8.Texture1DArray.MipSlice = uVar13;
                local_120.field2_0x8.Texture2DArray.PlaneSlice = uVar16;
                if (DVar10 == DXGI_FORMAT_R32G8X24_TYPELESS) {
                  iVar18 = DVar9 - DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS;
LAB_145a60a8a:
                  if ((iVar18 != 0) && (iVar18 == 1)) {
LAB_145a60a99:
                    local_120.field2_0x8.Texture2DArray.PlaneSlice = 1;
                  }
                }
                else {
                  if (DVar10 == DXGI_FORMAT_R24G8_TYPELESS) {
                    iVar18 = DVar9 - DXGI_FORMAT_R24_UNORM_X8_TYPELESS;
                    goto LAB_145a60a8a;
                  }
                  if (DVar10 != DXGI_FORMAT_NV12) {
                    if ((DVar10 != DXGI_FORMAT_P010) || (DVar9 != DXGI_FORMAT_R16G16_UNORM))
                    goto LAB_145a609aa;
                    goto LAB_145a60a99;
                  }
                  if (DVar9 == DXGI_FORMAT_R8G8_UNORM) goto LAB_145a60a99;
                }
LAB_145a609aa:
                uVar26 = DVar27.MipSlice;
                DVar27.MipSlice = uVar26 + 1;
                DVar27.PlaneSlice = 0;
                local_120.Format = DVar9;
                local_120.field2_0x8.Texture1DArray.FirstArraySlice = DVar12.MipSlice;
                EmplaceRTV(local_1c0,&local_120,uVar26,local_1c8);
                DVar12.MipSlice = DVar12.MipSlice + 1;
                DVar12.PlaneSlice = 0;
                this = local_1c0;
                bVar6 = local_a8.NumMips;
                cVar21 = local_1d4;
              } while (DVar12.MipSlice < uVar23);
            }
          }
          DVar24.MipSlice = uVar13 + 1;
          DVar24.PlaneSlice = 0;
          pFVar31 = local_1c8;
          cVar14 = local_1d3;
          cVar22 = local_1d6;
          local_1cc = DVar24.MipSlice;
        } while (DVar24.MipSlice < bVar6);
      }
    }
    else {
      local_138.field2_0x8.Buffer.NumElements = (uint)local_a8.Depth;
      local_138.field2_0x8.Texture2DArray.PlaneSlice = 0;
      local_138._4_8_ = 8;
      local_138.field2_0x8.Texture1DArray.FirstArraySlice = 0;
      local_138.Format = DVar9;
      TArray<TSharedPtr<FD3D12RenderTargetView,1>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      ::SetNum(&this->RenderTargetViews,1,Default);
      pFVar31 = local_1c8;
      EmplaceRTV(this,&local_138,0,local_1c8);
      bVar6 = local_a8.NumMips;
    }
  }
  if (local_158.MipSlice != 0) {
    if ((cVar22 != '\0') &&
       (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                           ("!bTexture3D",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                            ,0x749,L""), bVar32)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar5 = local_1c0;
    DVar27 = _UNK_150651568;
    pFVar4 = ___xmm_00000000000000000000000000000010;
    local_170.field3_0xc.Texture1DArray.MipSlice = 0;
    local_170.field3_0xc.Texture1DArray.FirstArraySlice = 0;
    local_170.field3_0xc.Texture1DArray.ArraySize = 0;
    if (local_1d0 == DXGI_FORMAT_R32G8X24_TYPELESS) {
      local_170.Format = DXGI_FORMAT_D32_FLOAT_S8X24_UINT;
    }
    else if (local_1d0 == DXGI_FORMAT_R32_TYPELESS) {
      local_170.Format = DXGI_FORMAT_D32_FLOAT;
    }
    else if (local_1d0 == DXGI_FORMAT_R24G8_TYPELESS) {
      local_170.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;
    }
    else {
      local_170.Format = DXGI_FORMAT_D16_UNORM;
      if (local_1d0 != DXGI_FORMAT_R16_TYPELESS) {
        local_170.Format = local_1d0;
      }
    }
    if ((local_1d8 == '\0') && (local_1d5 == '\0')) {
      local_170.ViewDimension = D3D12_DSV_DIMENSION_TEXTURE2D;
      if (local_1d7 != '\0') {
        local_170.ViewDimension = D3D12_DSV_DIMENSION_TEXTURE2DMS;
      }
    }
    else if (local_1d7 == '\0') {
      local_170.ViewDimension = D3D12_DSV_DIMENSION_TEXTURE2DARRAY;
      local_170.field3_0xc.Texture1DArray.ArraySize = (uint)local_1d2;
    }
    else {
      local_170.ViewDimension = D3D12_DSV_DIMENSION_TEXTURE2DMSARRAY;
      local_170.field3_0xc.Texture1DArray.FirstArraySlice = (uint)local_1d2;
    }
    if ((local_170.Format == DXGI_FORMAT_D32_FLOAT_S8X24_UINT) ||
       (local_170.Format == DXGI_FORMAT_D24_UNORM_S8_UINT)) {
      bVar32 = true;
    }
    else {
      bVar32 = false;
    }
    local_1cc = 0;
    DVar19 = DVar17;
    local_158 = (D3D12_TEX2D_RTV)&local_1c0->_padding_;
    if (local_1c0 == (FD3D12Texture *)0x0) {
      local_158 = DVar17;
    }
    do {
      local_170.Flags = (D3D12_DSV_FLAGS)(((ulonglong)DVar19 & 0x21) != 0);
      if (bVar32) {
        local_170.Flags =
             -(uint)(((ulonglong)DVar19 & 0x12) != 0) & D3D12_DSV_FLAG_READ_ONLY_STENCIL |
             local_170.Flags;
      }
      pTVar28 = pFVar5->DepthStencilViews + (int)DVar19.MipSlice;
      if ((pTVar28->Object != (FD3D12DepthStencilView *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!DepthStencilViews[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.h"
                             ,0x74,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      DVar24 = DVar17;
      if (pFVar31 != (FD3D12Texture *)0x0) {
        DVar24 = *(D3D12_TEX2D_RTV *)(pFVar31->DepthStencilViews + (int)DVar19.MipSlice);
      }
      if ((pFVar5->_padding_ == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Parent != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                             ,0x59,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (FD3D12Device *)pFVar5->_padding_;
      DVar12 = (D3D12_TEX2D_RTV)::operator_new(0x80);
      if (DVar12 == (D3D12_TEX2D_RTV)0x0) {
        pFVar25 = (FD3D12DepthStencilView *)&DAT_00000010;
        local_148 = pFVar4;
        DStack_140 = DVar27;
        DVar12 = DVar17;
      }
      else {
        *(undefined4 *)((longlong)DVar12 + 8) = 1;
        *(undefined4 *)((longlong)DVar12 + 0xc) = 1;
        *(undefined ***)DVar12 =
             &
             ___7__TIntrusiveReferenceController_VFD3D12DepthStencilView___00_SharedPointerInternals__6B_
        ;
        FD3D12DepthStencilView::FD3D12DepthStencilView
                  ((FD3D12DepthStencilView *)((longlong)DVar12 + 0x10),pFVar2,
                   (FD3D12DepthStencilView *)DVar24);
        pFVar25 = (FD3D12DepthStencilView *)((longlong)DVar12 + 0x10);
        if ((pFVar25 == (FD3D12DepthStencilView *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        LOCK();
        *(int *)((longlong)DVar12 + 8) = *(int *)((longlong)DVar12 + 8) + 1;
        UNLOCK();
        DStack_140 = DVar12;
        local_148 = pFVar25;
      }
      if (pTVar28 != (TSharedPtr<FD3D12DepthStencilView,1> *)&local_148) {
        pTVar28->Object = pFVar25;
        local_148 = (FD3D12DepthStencilView *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&pTVar28->SharedReferenceCount,(FSharedReferencer<1> *)&DStack_140);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)DStack_140);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)DVar12);
      if ((pTVar28->Object == (FD3D12DepthStencilView *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar25 = pTVar28->Object;
      local_100 = local_158;
      if (local_158 == (D3D12_TEX2D_RTV)0x0) {
        local_f8 = (longlong *)0x0;
        lStack_f0 = 0;
      }
      else {
        local_f8 = (longlong *)((longlong)local_158 + 0x48);
        lStack_f0 = *(longlong *)((longlong)local_158 + 0x58);
      }
      *(ulonglong *)&pFVar25->field_0x58 = CONCAT44(local_170.ViewDimension,local_170.Format);
      *(ulonglong *)(&pFVar25->field_0x58 + 8) =
           CONCAT44(local_170.field3_0xc.Texture1DArray.MipSlice,local_170.Flags);
      *(ulonglong *)(&pFVar25->field_0x58 + 0x10) =
           CONCAT44(local_170.field3_0xc.Texture1DArray.ArraySize,
                    local_170.field3_0xc.Texture1DArray.FirstArraySlice);
      FD3D12ViewRange::FD3D12ViewRange(&local_108,&local_170);
      ((FD3D12ViewSubset *)&pFVar25->field_0x28)->Range = local_108;
      FD3D12View::CreateView((FD3D12View *)pFVar25,&local_100,0x40);
      DVar19.MipSlice = local_1cc + 1;
      DVar19.PlaneSlice = 0;
      pFVar31 = local_1c8;
      cVar14 = local_1d3;
      DVar9 = local_150;
      bVar6 = local_a8.NumMips;
      local_1cc = DVar19.MipSlice;
    } while (DVar19.MipSlice < 4);
  }
  if ((char)local_1b8 == '\0') goto LAB_145a61010;
  local_1b0.field3_0x10._12_8_ = 0;
  local_1b0._12_8_ = 0;
  local_1b0.field3_0x10._4_8_ = 0;
  local_1b0.field3_0x10.Texture2DArray.ResourceMinLODClamp = 0.0;
  local_1b0.Shader4ComponentMapping = 0x1688;
  local_1b0.Format = DVar9;
  if (local_1d5 == '\0') {
    if (local_1d8 == '\0') {
      if (local_1d6 == '\0') {
        if (local_1d7 == '\0') {
          local_1b0.field3_0x10._5_7_ = 0;
          local_1b0.field3_0x10.Buffer.FirstElement._4_1_ = bVar6;
          local_1b0.ViewDimension = D3D12_SRV_DIMENSION_TEXTURE2D;
          uVar8 = UE::DXGIUtilities::GetPlaneSliceFromViewFormat(local_1d0,DVar9);
          local_1b0.field3_0x10.Buffer.NumElements._0_1_ = uVar8;
          local_1b0.field3_0x10.Buffer.NumElements._1_3_ = 0;
        }
        else {
          local_1b0.ViewDimension = D3D12_SRV_DIMENSION_TEXTURE2DMS;
        }
      }
      else {
        local_1b0.field3_0x10._5_7_ = 0;
        local_1b0.field3_0x10.Buffer.FirstElement._4_1_ = bVar6;
        local_1b0.ViewDimension = D3D12_SRV_DIMENSION_TEXTURE3D;
      }
    }
    else if (local_1d7 == '\0') {
      local_1b0.ViewDimension = D3D12_SRV_DIMENSION_TEXTURE2DARRAY;
      local_1b0.field3_0x10._5_7_ = 0;
      local_1b0.field3_0x10.Buffer.FirstElement._4_1_ = bVar6;
      local_1b0.field3_0x10._14_6_ = 0;
      local_1b0.field3_0x10.Buffer.StructureByteStride._0_2_ = local_1d2;
      DVar10 = UE::DXGIUtilities::FindDepthStencilParentDXGIFormat(local_1d0);
      if (DVar10 == DXGI_FORMAT_R32G8X24_TYPELESS) {
        iVar18 = DVar9 - DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS;
LAB_145a60fa0:
        if ((iVar18 != 0) && (iVar18 == 1)) {
LAB_145a60fa7:
          uVar15 = 1;
        }
      }
      else {
        if (DVar10 == DXGI_FORMAT_R24G8_TYPELESS) {
          iVar18 = DVar9 - DXGI_FORMAT_R24_UNORM_X8_TYPELESS;
          goto LAB_145a60fa0;
        }
        if (DVar10 == DXGI_FORMAT_NV12) {
          if (DVar9 != DXGI_FORMAT_R8G8_UNORM) {
            local_1b0.field3_0x10._12_8_ = local_1b0.field3_0x10._12_8_ & 0xffffffff;
            goto LAB_145a60ffc;
          }
          goto LAB_145a60fa7;
        }
        if (DVar10 == DXGI_FORMAT_P010) {
          if (DVar9 == DXGI_FORMAT_R16G16_UNORM) goto LAB_145a60fa7;
          local_1b0.field3_0x10._12_8_ = local_1b0.field3_0x10._12_8_ & 0xffffffff;
          goto LAB_145a60ffc;
        }
      }
      local_1b0.field3_0x10.Buffer.Flags = uVar15;
    }
    else {
      local_1b0.field3_0x10._6_6_ = 0;
      local_1b0.field3_0x10.Buffer.FirstElement._4_2_ = local_1d2;
      local_1b0.ViewDimension = D3D12_SRV_DIMENSION_TEXTURE2DMSARRAY;
    }
  }
  else {
    local_1b0.field3_0x10.Buffer.NumElements = 0;
    local_1b0.field3_0x10.Texture1D.MipLevels = CONCAT31(0,bVar6);
    if (local_1d8 == '\0') {
      local_1b0.ViewDimension = D3D12_SRV_DIMENSION_TEXTURECUBE;
    }
    else {
      local_1b0.field3_0x10._14_6_ = 0;
      local_1b0.field3_0x10.Buffer.StructureByteStride._0_2_ = local_a8.ArraySize;
      local_1b0.ViewDimension = D3D12_SRV_DIMENSION_TEXTURECUBEARRAY;
      local_1b0.field3_0x10.Buffer.NumElements = 0;
    }
  }
LAB_145a60ffc:
  EmplaceSRV(local_1c0,&local_1b0,local_1c8);
LAB_145a61010:
  if (local_a8.AliasableFormats.AllocatorInstance.SecondaryData != (ForElementType<EPixelFormat>)0x0
     ) {
    FMemory::Free((void *)local_a8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  if (cVar14 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// EmplaceRTV @ 145a63930

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12Texture::EmplaceRTV
          (FD3D12Texture *this,D3D12_RENDER_TARGET_VIEW_DESC *param_1,int param_2,
          FD3D12Texture *param_3)

{
  int *piVar1;
  FD3D12Device *pFVar2;
  FD3D12View *pFVar3;
  code *pcVar4;
  ulong64 uVar5;
  bool bVar6;
  uint uVar7;
  FD3D12RenderTargetView *pFVar8;
  ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_> FVar9;
  TReferenceControllerBase<1> **ppTVar10;
  FSharedReferencer<1> FVar11;
  longlong lVar12;
  FD3D12RenderTargetView *pFVar13;
  FD3D12RenderTargetView *pFVar14;
  uint uVar15;
  TReferenceControllerBase<1> *pTVar16;
  FD3D12ViewRange local_res8;
  D3D12_RENDER_TARGET_VIEW_DESC *local_res10;
  TReferenceControllerBase<1> *local_68;
  FSharedReferencer<1> FStack_60;
  longlong *local_58;
  longlong *local_50;
  longlong local_48;
  
  lVar12 = (longlong)param_2;
  piVar1 = &(this->RenderTargetViews).ArrayNum;
  local_res10 = param_1;
  if (((param_2 < 0) || (*piVar1 <= param_2)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("RenderTargetViews.IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.h"
                         ,0x6a,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar14 = (FD3D12RenderTargetView *)0x0;
  uVar15 = (uint)~param_2 >> 0x1f;
  uVar7 = 0;
  if (param_2 < *piVar1) {
    uVar7 = uVar15;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar9 = (this->RenderTargetViews).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_>)0x0) {
    FVar9 = (ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_>)&this->RenderTargetViews;
  }
  if ((*(longlong *)((longlong)FVar9 + lVar12 * 0x10) != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!RenderTargetViews[Index]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.h"
                         ,0x6b,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar13 = pFVar14;
  if (param_3 != (FD3D12Texture *)0x0) {
    uVar7 = 0;
    if (param_2 < (param_3->RenderTargetViews).ArrayNum) {
      uVar7 = uVar15;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar9 = (param_3->RenderTargetViews).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_>)0x0) {
      FVar9 = (ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_>)&param_3->RenderTargetViews;
    }
    pFVar13 = *(FD3D12RenderTargetView **)((longlong)FVar9 + lVar12 * 0x10);
  }
  if ((this->_padding_ == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = (FD3D12Device *)this->_padding_;
  pFVar8 = ::operator_new(0x80);
  FVar11.ReferenceController = (TReferenceControllerBase<1> *)_UNK_150651568;
  pTVar16 = ___xmm_00000000000000000000000000000010;
  if (pFVar8 != (FD3D12RenderTargetView *)0x0) {
    *(atomic<int> *)&pFVar8->field_0x8 = (atomic<int>)0x1;
    *(atomic<int> *)&pFVar8->field_0xc = (atomic<int>)0x1;
    *(undefined ***)pFVar8 =
         &
         ___7__TIntrusiveReferenceController_VFD3D12RenderTargetView___00_SharedPointerInternals__6B_
    ;
    FD3D12RenderTargetView::FD3D12RenderTargetView
              ((FD3D12RenderTargetView *)&pFVar8->field_0x10,pFVar2,pFVar13);
    if ((&pFVar8->field_0x10 == (undefined1 *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    LOCK();
    *(atomic<int> *)&pFVar8->field_0x8 = (atomic<int>)((int)*(atomic<int> *)&pFVar8->field_0x8 + 1);
    UNLOCK();
    FVar11.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
    pFVar14 = pFVar8;
    pTVar16 = (TReferenceControllerBase<1> *)&pFVar8->field_0x10;
  }
  uVar7 = 0;
  if (param_2 < (this->RenderTargetViews).ArrayNum) {
    uVar7 = uVar15;
  }
  local_68 = pTVar16;
  FStack_60.ReferenceController = FVar11.ReferenceController;
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar9 = (this->RenderTargetViews).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_>)0x0) {
    FVar9 = (ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_>)&this->RenderTargetViews;
  }
  ppTVar10 = (TReferenceControllerBase<1> **)((longlong)FVar9 + lVar12 * 0x10);
  if (ppTVar10 != &local_68) {
    *ppTVar10 = pTVar16;
    local_68 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(ppTVar10 + 1),&FStack_60);
    FVar11.ReferenceController = FStack_60.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar11.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar14);
  uVar7 = 0;
  if (param_2 < (this->RenderTargetViews).ArrayNum) {
    uVar7 = uVar15;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar9 = (this->RenderTargetViews).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_>)0x0) {
    FVar9 = (ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_>)&this->RenderTargetViews;
  }
  if ((*(longlong *)((longlong)FVar9 + lVar12 * 0x10) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = *(FD3D12View **)((longlong)FVar9 + lVar12 * 0x10);
  local_58 = &this->_padding_;
  if (this == (FD3D12Texture *)0x0) {
    local_58 = (longlong *)0x0;
  }
  if (local_58 == (longlong *)0x0) {
    local_50 = (longlong *)0x0;
    local_48 = 0;
  }
  else {
    local_50 = local_58 + 9;
    local_48 = local_58[0xb];
  }
  uVar5 = (local_res10->field2_0x8).Buffer.FirstElement;
  pFVar3[1]._padding_ = *(longlong *)local_res10;
  pFVar3[1]._padding_ = uVar5;
  pFVar3[1].ResourceInfo.BaseResource =
       *(FD3D12BaseShaderResource **)((longlong)&local_res10->field2_0x8 + 8);
  FD3D12ViewRange::FD3D12ViewRange(&local_res8,local_res10);
  (pFVar3->ViewSubset).Range = local_res8;
  FD3D12View::CreateView(pFVar3,&local_58,0x10);
  return;
}

// EmplaceSRV @ 145a63d30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12Texture::EmplaceSRV
          (FD3D12Texture *this,D3D12_SHADER_RESOURCE_VIEW_DESC *param_1,FD3D12Texture *param_2)

{
  TSharedPtr<FD3D12ShaderResourceView,1> *pTVar1;
  D3D12_SRV_DIMENSION DVar2;
  undefined4 uVar3;
  FD3D12Device *pFVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  undefined4 *puVar8;
  TReferenceControllerBase<1> *pTVar9;
  ERHIDescriptorType EVar10;
  FD3D12ShaderResourceView *pFVar11;
  FD3D12ViewRange local_res10;
  FD3D12ShaderResourceView *local_68;
  FSharedReferencer<1> FStack_60;
  FResourceInfo local_58;
  
  pTVar1 = &this->ShaderResourceView;
  if (pTVar1->Object != (FD3D12ShaderResourceView *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ShaderResourceView",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.h"
                       ,0x7c,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  DVar2 = param_1->ViewDimension;
  if (DVar2 == D3D12_SRV_DIMENSION_UNKNOWN) {
    EVar10 = Invalid;
  }
  else if (DVar2 == D3D12_SRV_DIMENSION_BUFFER) {
    EVar10 = BufferSRV;
  }
  else {
    EVar10 = TextureSRV;
    if (DVar2 == D3D12_SRV_DIMENSION_RAYTRACING_ACCELERATION_STRUCTURE) {
      EVar10 = AccelerationStructure;
    }
  }
  puVar8 = (undefined4 *)(**(code **)(this->_padding_ + 0x20))(this);
  uVar3 = *puVar8;
  if (param_2 == (FD3D12Texture *)0x0) {
    pFVar11 = (FD3D12ShaderResourceView *)0x0;
  }
  else {
    pFVar11 = (param_2->ShaderResourceView).Object;
  }
  if (this->_padding_ == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar4 = (FD3D12Device *)this->_padding_;
  pTVar9 = ::operator_new(0xa8);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pTVar9 = (TReferenceControllerBase<1> *)0x0;
    local_68 = ___xmm_00000000000000000000000000000010;
    pFVar11 = (FD3D12ShaderResourceView *)&DAT_00000010;
    FStack_60.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFD3D12ShaderResourceView___00_SharedPointerInternals__6B_
    ;
    FD3D12View::FD3D12View((FD3D12View *)(pTVar9 + 1),pFVar4,EVar10,Standard,(FD3D12View *)pFVar11);
    pFVar11 = (FD3D12ShaderResourceView *)(pTVar9 + 1);
    pTVar9[9]._padding_ = 0;
    pTVar9[1]._padding_ = (longlong)&___7FD3D12ShaderResourceView__6B_;
    pTVar9[9].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTVar9[9].WeakReferenceCount = 0;
    pTVar9[10]._padding_ = 0;
    if (pFVar11 == (FD3D12ShaderResourceView *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    FStack_60.ReferenceController = pTVar9;
    local_68 = pFVar11;
  }
  if (pTVar1 != (TSharedPtr<FD3D12ShaderResourceView,1> *)&local_68) {
    pTVar1->Object = pFVar11;
    local_68 = (FD3D12ShaderResourceView *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ShaderResourceView).SharedReferenceCount,&FStack_60);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_60.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  if (pTVar1->Object == (FD3D12ShaderResourceView *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar11 = pTVar1->Object;
  local_58.BaseResource = (FD3D12BaseShaderResource *)&this->_padding_;
  if (this == (FD3D12Texture *)0x0) {
    local_58.BaseResource = (FD3D12BaseShaderResource *)0x0;
  }
  if (local_58.BaseResource == (FD3D12BaseShaderResource *)0x0) {
    local_58.ResourceLocation = (FD3D12ResourceLocation *)0x0;
    local_58.Resource = (FD3D12Resource *)0x0;
  }
  else {
    local_58.ResourceLocation = &(local_58.BaseResource)->ResourceLocation;
    local_58.Resource = ((local_58.BaseResource)->ResourceLocation).UnderlyingResource;
  }
  FD3D12ShaderResourceView::UpdateResourceInfo
            (pFVar11,&local_58,param_1,(EFlags)((uint)uVar3 >> 0x1d) & SkipFastClearFinalize);
  lVar6 = *(longlong *)&param_1->Shader4ComponentMapping;
  pFVar11->_padding_ = *(longlong *)param_1;
  pFVar11->_padding_ = lVar6;
  lVar6 = *(longlong *)((longlong)&param_1->field3_0x10 + 8);
  pFVar11->_padding_ = (param_1->field3_0x10).Buffer.FirstElement;
  pFVar11->_padding_ = lVar6;
  pFVar11->_padding_ = *(longlong *)((longlong)&param_1->field3_0x10 + 0x10);
  FD3D12ViewRange::FD3D12ViewRange(&local_res10,param_1);
  *(FD3D12ViewRange *)((longlong)&pFVar11->_padding_ + 4) = local_res10;
  FD3D12View::CreateView((FD3D12View *)pFVar11,&local_58,0);
  return;
}

// GetDefaultBindlessHandle @ 145a68e90

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

FRHIDescriptorHandle __thiscall FD3D12Texture::GetDefaultBindlessHandle(FD3D12Texture *this)

{
  FD3D12ShaderResourceView *pFVar1;
  FRHIDescriptorHandle in_RDX;
  
  pFVar1 = (this->ShaderResourceView).Object;
  if (pFVar1 != (FD3D12ShaderResourceView *)0x0) {
    *(longlong *)in_RDX = pFVar1->_padding_;
    return in_RDX;
  }
  *(undefined8 *)in_RDX = 0;
  *(undefined4 *)in_RDX = 0xffffffff;
  *(undefined1 *)((longlong)in_RDX + 4) = 9;
  return in_RDX;
}

// GetNativeResource @ 145a69710

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void * __thiscall FD3D12Texture::GetNativeResource(FD3D12Texture *this)

{
  longlong lVar1;
  void *pvVar2;
  
  pvVar2 = (void *)0x0;
  if ((this->_padding_ == 0) || (pvVar2 = *(void **)(this->_padding_ + 0x20), pvVar2 == (void *)0x0)
     ) {
    lVar1 = (**(code **)(this->_padding_ + 0x48))();
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 400) != 0)) {
      return *(void **)(*(longlong *)(lVar1 + 400) + 0x20);
    }
  }
  return pvVar2;
}

// GetReadBackHeapDesc @ 145a69cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12Texture::GetReadBackHeapDesc
          (FD3D12Texture *this,D3D12_PLACED_SUBRESOURCE_FOOTPRINT *param_1,uint param_2)

{
  char cVar1;
  D3D12_PLACED_SUBRESOURCE_FOOTPRINT *pDVar2;
  code *pcVar3;
  undefined8 uVar4;
  DXGI_FORMAT DVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  uint *puVar10;
  longlong lVar11;
  ID3D12Device *pIVar12;
  D3D12_PLACED_SUBRESOURCE_FOOTPRINT *pDVar13;
  int iVar14;
  TUniquePtr<D3D12_PLACED_SUBRESOURCE_FOOTPRINT,TDefaultDelete<D3D12_PLACED_SUBRESOURCE_FOOTPRINT>_>
  *pTVar15;
  undefined1 auStack_88 [32];
  longlong local_68;
  D3D12_RESOURCE_DESC local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  puVar10 = (uint *)(**(code **)(this->_padding_ + 0x20))();
  if (((*puVar10 >> 0x13 & 1) == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumHasAnyFlags(GetFlags(), ETextureCreateFlags::CPUReadback)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                         ,0x99e,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_2 == 0) &&
     (pDVar13 = (this->FirstSubresourceFootprint).Ptr,
     pDVar13 != (D3D12_PLACED_SUBRESOURCE_FOOTPRINT *)0x0)) {
    DVar5 = (pDVar13->Footprint).Format;
    uVar6 = (pDVar13->Footprint).Width;
    param_1->Offset = pDVar13->Offset;
    (param_1->Footprint).Format = DVar5;
    (param_1->Footprint).Width = uVar6;
    uVar6 = (pDVar13->Footprint).Depth;
    uVar4 = *(undefined8 *)&(pDVar13->Footprint).RowPitch;
    (param_1->Footprint).Height = (pDVar13->Footprint).Height;
    (param_1->Footprint).Depth = uVar6;
    *(undefined8 *)&(param_1->Footprint).RowPitch = uVar4;
    return;
  }
  lVar11 = (**(code **)(this->_padding_ + 0x20))();
  cVar1 = *(char *)(lVar11 + 0x32);
  if (cVar1 == '\0') {
LAB_145a69d73:
    local_60.DepthOrArraySize = 1;
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') {
        local_60.DepthOrArraySize = *(ushort *)(lVar11 + 0x2c);
        goto LAB_145a69d78;
      }
      if (cVar1 == '\x03') goto LAB_145a69d73;
      if (cVar1 != '\x04') {
        iVar14 = 0;
        local_60.Height = 0;
        local_60.DepthOrArraySize = 0;
        goto LAB_145a69d7f;
      }
    }
    local_60.DepthOrArraySize = *(ushort *)(lVar11 + 0x2e);
  }
LAB_145a69d78:
  iVar14 = *(int *)(lVar11 + 0x24);
  local_60.Height = *(uint *)(lVar11 + 0x28);
LAB_145a69d7f:
  local_60.Width = (ulong64)iVar14;
  local_60._4_8_ = 0;
  local_60.Alignment._4_4_ = 0;
  local_60.SampleDesc.Quality = 0;
  local_60.Layout = D3D12_TEXTURE_LAYOUT_UNKNOWN;
  local_60.Flags = D3D12_RESOURCE_FLAG_NONE;
  local_60._52_4_ = 0;
  local_60.Dimension = D3D12_RESOURCE_DIMENSION_TEXTURE2D;
  lVar11 = (**(code **)(this->_padding_ + 0x20))(this);
  local_60.MipLevels = (ushort)*(byte *)(lVar11 + 0x30);
  lVar11 = (**(code **)(this->_padding_ + 0x20))(this);
  local_60.Format = GPixelFormats[*(byte *)(lVar11 + 0x33)].PlatformFormat;
  lVar11 = (**(code **)(this->_padding_ + 0x20))(this);
  local_60.SampleDesc.Count = (uint)*(byte *)(lVar11 + 0x31);
  if ((this->_padding_ == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar12 = FD3D12Device::GetDevice((FD3D12Device *)this->_padding_);
  GetReadBackHeapDescImpl(param_1,pIVar12,&local_60,param_2);
  if (param_2 == 0) {
    pDVar13 = ::operator_new(0x20);
    if (pDVar13 == (D3D12_PLACED_SUBRESOURCE_FOOTPRINT *)0x0) {
      pDVar13 = (D3D12_PLACED_SUBRESOURCE_FOOTPRINT *)0x0;
    }
    else {
      pDVar13->Offset = 0;
      (pDVar13->Footprint).Format = DXGI_FORMAT_UNKNOWN;
      (pDVar13->Footprint).Width = 0;
      (pDVar13->Footprint).Height = 0;
      (pDVar13->Footprint).Depth = 0;
      *(undefined8 *)&(pDVar13->Footprint).RowPitch = 0;
    }
    pTVar15 = &this->FirstSubresourceFootprint;
    if (pTVar15 !=
        (TUniquePtr<D3D12_PLACED_SUBRESOURCE_FOOTPRINT,TDefaultDelete<D3D12_PLACED_SUBRESOURCE_FOOTPRINT>_>
         *)&local_68) {
      pDVar2 = pTVar15->Ptr;
      pTVar15->Ptr = pDVar13;
      pDVar13 = (D3D12_PLACED_SUBRESOURCE_FOOTPRINT *)0x0;
      ::operator_delete(pDVar2,0x20);
    }
    ::operator_delete(pDVar13,0x20);
    pDVar13 = pTVar15->Ptr;
    DVar5 = (param_1->Footprint).Format;
    uVar6 = (param_1->Footprint).Width;
    uVar7 = (param_1->Footprint).Height;
    uVar8 = (param_1->Footprint).Depth;
    uVar4 = *(undefined8 *)&(param_1->Footprint).RowPitch;
    pDVar13->Offset = param_1->Offset;
    (pDVar13->Footprint).Format = DVar5;
    (pDVar13->Footprint).Width = uVar6;
    (pDVar13->Footprint).Height = uVar7;
    (pDVar13->Footprint).Depth = uVar8;
    *(undefined8 *)&(pDVar13->Footprint).RowPitch = uVar4;
  }
  return;
}

// GetRefCount @ 145a69fc0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

uint __thiscall FD3D12Texture::GetRefCount(FD3D12Texture *this)

{
  return (uint)this[-1]._padding_ & 0x3fffffff;
}

// GetRenderTargetView @ 145a69fe0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

FD3D12RenderTargetView * __thiscall
FD3D12Texture::GetRenderTargetView(FD3D12Texture *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  FD3D12RenderTargetView *pFVar3;
  char *pcVar4;
  ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_> FVar5;
  int iVar6;
  
  if (this->bCreatedRTVsPerSlice == false) {
    if (param_2 + 1U < 2) goto LAB_145a6a07a;
    iVar6 = 0xc3;
    pcVar4 = "ArraySliceIndex == -1 || ArraySliceIndex == 0";
  }
  else {
    if (param_2 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArraySliceIndex >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.h"
                         ,0xbc,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FD3D12RenderTargetView *)(*pcVar1)();
        return pFVar3;
      }
    }
    param_1 = param_1 * this->RTVArraySizePerMip + param_2;
    if (param_1 < (this->RenderTargetViews).ArrayNum) goto LAB_145a6a07a;
    iVar6 = 0xbe;
    pcVar4 = "ArrayIndex < RenderTargetViews.Num()";
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    (pcVar4,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.h"
                     ,iVar6,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FD3D12RenderTargetView *)(*pcVar1)();
    return pFVar3;
  }
LAB_145a6a07a:
  if ((this->RenderTargetViews).ArrayNum <= param_1) {
    return (FD3D12RenderTargetView *)0x0;
  }
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FD3D12RenderTargetView *)(*pcVar1)();
      return pFVar3;
    }
  }
  FVar5 = (this->RenderTargetViews).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_>)0x0) {
    FVar5 = (ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_>)&this->RenderTargetViews;
  }
  return *(FD3D12RenderTargetView **)((longlong)FVar5 + (longlong)param_1 * 0x10);
}

// GetResourceInfo @ 145a6a7d0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

bool __thiscall FD3D12Texture::GetResourceInfo(FD3D12Texture *this,FRHIResourceInfo *param_1)

{
  FD3D12ResidencyHandle **ppFVar1;
  FD3D12Resource *this_00;
  undefined4 uVar2;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_48;
  undefined8 local_38;
  undefined1 uStack_30;
  uint7 uStack_2f;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined2 local_18;
  undefined1 uStack_16;
  undefined5 uStack_15;
  
  local_18 = 0x100;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  uStack_16 = 1;
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  *(ulonglong *)&param_1->Type = (ulonglong)uStack_2f << 8;
  (param_1->VRamAllocation).AllocationStart = 0;
  (param_1->VRamAllocation).AllocationSize = 0;
  param_1->IsTransient = (bool)(char)0x10100;
  param_1->bValid = (bool)(char)(0x10100 >> 8);
  param_1->bResident = (bool)(char)(0x10100 >> 0x10);
  *(undefined5 *)&param_1->field_0x23 = uStack_15;
  uVar2 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  (param_1->Name).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->_padding_;
  (param_1->Name).Number = uVar2;
  param_1->Type = *(ERHIResourceType *)((longlong)&this->_padding_ + 4);
  (param_1->VRamAllocation).AllocationSize = this->_padding_;
  param_1->IsTransient = *(bool *)((longlong)&this->_padding_ + 2);
  this_00 = (FD3D12Resource *)this->_padding_;
  if (this_00 != (FD3D12Resource *)0x0) {
    if (((this_00->ReservedResourceData).Ptr != (FD3D12ReservedResourceData *)0x0) ||
       (FD3D12Resource::GetResidencyHandles(this_00,&local_48), local_48.ArrayNum == 0)) {
LAB_145a6a89d:
      param_1->bResident = true;
      return true;
    }
    ppFVar1 = local_48.DataPtr + local_48.ArrayNum;
    for (; local_48.DataPtr != ppFVar1; local_48.DataPtr = local_48.DataPtr + 1) {
      if ((int)(*local_48.DataPtr)->_padding_ == 0) goto LAB_145a6a89d;
    }
  }
  param_1->bResident = false;
  return true;
}

// GetTextureBaseRHI @ 145a6b050

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void * __thiscall FD3D12Texture::GetTextureBaseRHI(FD3D12Texture *this)

{
  return this;
}

// Lock @ 145a6d360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRHILockTextureResult * __thiscall
FD3D12Texture::Lock(FD3D12Texture *this,FRHILockTextureResult *__return_storage_ptr__,
                   FRHICommandListBase *param_1,FRHILockTextureArgs *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FD3D12Device *this_00;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_> TVar10;
  FRHILockTextureArgs *pFVar11;
  ulonglong uVar12;
  FD3D12Resource *pFVar13;
  FRHICommandListBase *this_01;
  bool bVar14;
  char cVar15;
  int iVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_D3D12LockTextureTime> FVar18;
  TEventRef<unsigned_int> TVar19;
  FRHILockTextureResult *pFVar20;
  longlong lVar21;
  longlong lVar22;
  ID3D12Device *pIVar23;
  uint *puVar24;
  TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_> *pTVar25;
  FWriteBuffer *pFVar26;
  FThreadStats *pFVar27;
  FThreadStatsPool *pFVar28;
  FD3D12LockedResource *pFVar29;
  void *pvVar30;
  FRHICommandBase *pFVar31;
  FD3D12LockedResource *pFVar32;
  undefined1 *puVar33;
  FNameEntryId FVar34;
  FName FVar36;
  uint uVar37;
  undefined1 auStackY_398 [32];
  uint local_330;
  FColor_u_0 local_32c;
  TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_> local_328 [2];
  FRHILockTextureArgs *local_318;
  int local_310;
  FName local_308;
  FD3D12Adapter *local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  FName local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  ulonglong local_2d0;
  FD3D12Resource *local_2c8;
  FRHICommandListBase *local_2c0;
  FName local_2b8;
  longlong local_2a8;
  LARGE_INTEGER local_2a0;
  LARGE_INTEGER local_298;
  LARGE_INTEGER local_290;
  longlong local_288;
  FStatMessage local_280;
  FStatMessage local_270;
  FString local_260;
  FStatMessage local_250;
  undefined1 local_240 [50];
  undefined4 local_20e;
  TRefCountPtr<ID3D12Device6> local_208;
  undefined1 local_200;
  undefined8 local_1fc;
  undefined1 local_1f4;
  undefined1 local_1e8;
  TRefCountPtr<ID3D12Device11> local_1e0;
  TRefCountPtr<ID3D12Device12> TStack_1d8;
  TRefCountPtr<IDXGIFactory2> TStack_1d0;
  TRefCountPtr<IDXGIFactory3> TStack_1c8;
  TRefCountPtr<IDXGIFactory4> TStack_1c0;
  TRefCountPtr<IDXGIFactory5> local_1b8;
  TRefCountPtr<IDXGIFactory6> TStack_1b0;
  TRefCountPtr<IDXGIFactory7> local_1a8;
  HINSTANCE__ *pHStack_1a0;
  TRefCountPtr<IDXGIDebug> local_198;
  void *pvStack_190;
  FRHICommandBase *local_188;
  longlong lStack_180;
  FName local_178;
  FName local_170;
  FName local_168;
  FName local_160;
  TArrayView<FRHITransitionInfo_const_,int> local_158;
  TArrayView<FRHITransitionInfo_const_,int> local_148;
  FRHICommandBase *local_138;
  wchar_t awStack_130 [4];
  FRHICommandBase *local_128;
  void *pvStack_120;
  wchar_t local_108 [16];
  FRHICommandBase *local_e8;
  wchar_t awStack_e0 [20];
  FRHICommandBase *local_b8;
  DXGI_FORMAT DStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  wchar_t awStack_9c [2];
  undefined4 *local_98;
  longlong local_90;
  ulonglong local_88;
  uint uVar35;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_398;
  bVar8 = false;
  local_2c0 = param_1;
  FVar18 = StatPtr_STAT_D3D12LockTextureTime;
  local_318 = param_2;
  if (StatPtr_STAT_D3D12LockTextureTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12LockTextureTime>)0x0) {
    pFVar17 = ::FName::FName(&local_160,"STAT_D3D12LockTextureTime");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_D3D12LockTextureTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12LockTextureTime,*pFVar17,
                        L"LockTexture time","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",true
                        ,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar36 = *(FName *)FVar18;
  bVar6 = false;
  bVar9 = false;
  local_2b8.ComparisonIndex.Value = 0;
  local_2b8.Number = 0;
  if ((FVar36.ComparisonIndex.Value.Value == 0) && (FVar36.Number == 0)) {
LAB_145a6d4be:
    bVar7 = false;
    FVar36 = local_2b8;
  }
  else {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_32c.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_32c._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar6 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2e8.ComparisonIndex.Value = FVar36.ComparisonIndex.Value.Value;
        local_2e8.Number = FVar36.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2e8,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                   ,0x7e1);
        bVar6 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145a6d4be;
    local_308 = FVar36;
    FThreadStats::AddMessage(FVar36,CycleScopeStart);
    bVar7 = true;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&RHITextureLockName,L"FRHITexture Lock");
    _Init_thread_footer(&::_TSS0);
  }
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_308.ComparisonIndex.Value = 0;
    local_308.Number = 0;
    TVar19 = (TEventRef<unsigned_int>)&local_308;
  }
  else {
    local_288 = this->_padding_;
    TVar19 = FStringTrace::GetNameRef(&local_178);
  }
  uVar2 = *(undefined8 *)TVar19;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_2e0 = 0;
    TVar19 = (TEventRef<unsigned_int>)&local_2e0;
  }
  else {
    TVar19 = FStringTrace::GetNameRef(&local_170);
  }
  uVar3 = *(undefined8 *)TVar19;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_2d8 = 0;
    TVar19 = (TEventRef<unsigned_int>)&local_2d8;
  }
  else {
    local_2a8 = this->_padding_;
    TVar19 = FStringTrace::GetNameRef(&local_168);
  }
  uVar4 = *(undefined8 *)TVar19;
  if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_98);
    bVar8 = true;
    *local_98 = (int)uVar2;
    local_98[1] = (int)uVar3;
    local_98[2] = (int)uVar4;
    *(undefined8 *)(local_90 + 0x28) = *(undefined8 *)(local_90 + 0x20);
  }
  if ((this->_padding_ == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parent != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x59,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    pFVar20 = (FRHILockTextureResult *)(*pcVar5)();
    return pFVar20;
  }
  this_00 = (FD3D12Device *)this->_padding_;
  if ((*(longlong *)&this_00->field_0x10 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParentAdapter != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x41,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    pFVar20 = (FRHILockTextureResult *)(*pcVar5)();
    return pFVar20;
  }
  local_2f8 = *(FD3D12Adapter **)&this_00->field_0x10;
  lVar21 = (**(code **)(this->_padding_ + 0x20))(this);
  pFVar11 = local_318;
  cVar15 = *(char *)(lVar21 + 0x32);
  iVar16 = *(int *)((longlong)&local_318->_padding_ + 4);
  if ((cVar15 == '\x03') || (cVar15 == '\x04')) {
    iVar16 = (int)local_318->_padding_ + iVar16 * 6;
  }
  else if (cVar15 != '\x01') {
    iVar16 = 0;
  }
  lVar22 = (**(code **)(this->_padding_ + 0x20))(this);
  lVar21 = this->_padding_;
  local_310 = 0;
  local_330 = (uint)*(byte *)(lVar22 + 0x30) * iVar16 + (int)pFVar11->_padding_;
  pIVar23 = FD3D12Device::GetDevice(this_00);
  (**(code **)((longlong)*pIVar23 + 0x130))(pIVar23,lVar21 + 0x50,local_330,1);
  __return_storage_ptr__->Data = (void *)0x0;
  __return_storage_ptr__->Stride = uStack_a0;
  local_2d0 = (ulonglong)(uStack_a0 * uStack_a4 * local_310);
  __return_storage_ptr__->ByteCount = local_2d0;
  FVar34 = FVar36.ComparisonIndex.Value;
  uVar35 = FVar36.Number;
  uVar37 = local_330;
  if ((pFVar11->LockMode == RLM_WriteOnly) &&
     (puVar24 = (uint *)(**(code **)(this->_padding_ + 0x20))(this), uVar37 = local_330,
     (*puVar24 >> 8 & 1) != 0)) {
    if ((pFVar11->LockMode != RLM_WriteOnly) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Arguments.LockMode == RLM_WriteOnly",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                            ,0x800,L""), bVar14)) {
      pcVar5 = (code *)swi(3);
      pFVar20 = (FRHILockTextureResult *)(*pcVar5)();
      return pFVar20;
    }
    uVar37 = local_330;
    pTVar25 = TMapBase<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>,0>_>
              ::Find((TMapBase<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>,0>_>
                      *)&this->LockedMap,local_330);
    if (pTVar25 != (TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_> *)0x0) {
      __return_storage_ptr__->Data = (pTVar25->Ptr->ResourceLocation).MappedBaseAddress;
      if (bVar8) {
        lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if (*(char *)(lVar21 + 0x9d48) == '\0') {
          __dyn_tls_on_demand_init();
        }
        pFVar26 = *(FWriteBuffer **)(lVar21 + 0x20);
        if ((int)pFVar26 - *(int *)&pFVar26->Cursor < 1) {
          pFVar26 = UE::Trace::Private::Writer_NextBuffer();
        }
        *pFVar26->Cursor = '\n';
        pFVar26->Cursor = pFVar26->Cursor + 1;
        pFVar26->Committed = pFVar26->Cursor;
      }
      if (bVar9) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar6) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (!bVar7) {
        return __return_storage_ptr__;
      }
      if (FVar36 == (FName)0x0) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::bPrimaryDisableForever != false) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::TlsSlot == 0xffffffff) {
        return __return_storage_ptr__;
      }
      pFVar27 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar27 == (FThreadStats *)0x0) {
        pFVar28 = FThreadStatsPool::Get();
        pFVar27 = FThreadStatsPool::GetFromPool(pFVar28);
      }
      if (pFVar27->ScopeCount <= pFVar27->bWaitForExplicitFlush) {
        return __return_storage_ptr__;
      }
      local_280.NameAndInfo.Number = uVar35 & 0xffff6fff | 0x6000;
      local_280.NameAndInfo.Index.Value = FVar34.Value;
      QueryPerformanceCounter(&local_2a0);
      local_280.StatData.Pad[4] = '\0';
      local_280.StatData.Pad[5] = '\0';
      local_280.StatData.Pad[6] = '\0';
      local_280.StatData.Pad[7] = '\0';
      local_280.StatData.Pad[0] = local_2a0.s.LowPart._0_1_;
      local_280.StatData.Pad[1] = local_2a0.s.LowPart._1_1_;
      local_280.StatData.Pad[2] = local_2a0.s.LowPart._2_1_;
      local_280.StatData.Pad[3] = local_2a0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar27,&local_280);
      piVar1 = &pFVar27->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar27,false,false);
        return __return_storage_ptr__;
      }
      if (FThreadStats::bIsRawStatsActive == false) {
        return __return_storage_ptr__;
      }
      FThreadStats::FlushRawStats(pFVar27,false,false);
      return __return_storage_ptr__;
    }
  }
  if (*(int *)&(this->LockedMap).field_0x8 != *(int *)&(this->LockedMap).field_0x34) {
    puVar33 = *(undefined1 **)&(this->LockedMap).field_0x40;
    if (puVar33 == (undefined1 *)0x0) {
      puVar33 = &(this->LockedMap).field_0x38;
    }
    iVar16 = *(int *)(puVar33 + (ulonglong)(*(int *)&(this->LockedMap).field_0x48 - 1U & uVar37) * 4
                     );
    if (iVar16 != -1) {
      lVar21 = *(longlong *)&this->LockedMap;
      do {
        lVar22 = lVar21 + (longlong)iVar16 * 0x18;
        if (*(uint *)(lVar21 + (longlong)iVar16 * 0x18) == uVar37) {
          lVar21 = lVar22 + 8;
          if (lVar22 == 0) {
            lVar21 = 0;
          }
          if ((lVar21 != 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("LockedMap.Find(Subresource) == nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                                  ,0x809,L""), bVar14)) {
            pcVar5 = (code *)swi(3);
            pFVar20 = (FRHILockTextureResult *)(*pcVar5)();
            return pFVar20;
          }
          break;
        }
        iVar16 = *(int *)(lVar22 + 0x10);
      } while (iVar16 != -1);
    }
  }
  pFVar32 = (FD3D12LockedResource *)0x0;
  pFVar29 = ::operator_new(0xa0);
  if (pFVar29 != (FD3D12LockedResource *)0x0) {
    (pFVar29->ResourceLocation)._padding_ = (longlong)this_00;
    (pFVar29->ResourceLocation).Owner = (FD3D12BaseShaderResource *)0x0;
    (pFVar29->ResourceLocation).UnderlyingResource = (FD3D12Resource *)0x0;
    (pFVar29->ResourceLocation).field3_0x18.Allocator = (FD3D12BuddyAllocator *)0x0;
    (pFVar29->ResourceLocation).MappedBaseAddress = (void *)0x0;
    (pFVar29->ResourceLocation).GPUVirtualAddress = 0;
    (pFVar29->ResourceLocation).OffsetFromBaseOfResource = 0;
    (pFVar29->ResourceLocation).Size = 0;
    (pFVar29->ResourceLocation).Type = eUndefined;
    (pFVar29->ResourceLocation).AllocatorType = AT_Unknown;
    (pFVar29->ResourceLocation).bTransient = false;
    pFVar29->_padding_ = (longlong)this_00;
    (pFVar29->ResourceLocation).AllocatorData.BlockAllocatorPrivateData.FrameFence = 0;
    *(undefined8 *)((longlong)&(pFVar29->ResourceLocation).AllocatorData + 8) = 0;
    (pFVar29->ResourceLocation).AllocatorData.BlockAllocatorPrivateData.ResourceHeap =
         (FD3D12Resource *)0x0;
    *(undefined8 *)((longlong)&(pFVar29->ResourceLocation).AllocatorData + 0x18) = 0;
    *(undefined8 *)((longlong)&(pFVar29->ResourceLocation).AllocatorData + 0x20) = 0;
    *(undefined8 *)((longlong)&(pFVar29->ResourceLocation).AllocatorData + 0x28) = 0;
    (pFVar29->Footprint).Format = DXGI_FORMAT_UNKNOWN;
    (pFVar29->Footprint).Width = 0;
    (pFVar29->Footprint).Height = 0;
    (pFVar29->Footprint).Depth = 0;
    *(undefined8 *)&(pFVar29->Footprint).RowPitch = 0;
    pFVar29->bLocked = 0;
    pFVar29->bLockedForReadOnly = 0;
    pFVar29->bHasNeverBeenLocked = 1;
    pFVar29->LockSize = 0;
    pFVar32 = pFVar29;
  }
  local_b8 = (FRHICommandBase *)0x0;
  (pFVar32->Footprint).Format = DStack_b0;
  (pFVar32->Footprint).Width = uStack_ac;
  (pFVar32->Footprint).Height = uStack_a8;
  (pFVar32->Footprint).Depth = uStack_a4;
  (pFVar32->Footprint).RowPitch = uStack_a0;
  local_328[0].Ptr = pFVar32;
  cVar15 = (**(code **)(FD3D12DynamicRHI::SingleD3DRHI->_padding_ + 0x5e8))
                     (FD3D12DynamicRHI::SingleD3DRHI,__return_storage_ptr__,this,local_318);
  if (cVar15 == '\0') {
    if (local_318->LockMode == RLM_WriteOnly) {
      pvVar30 = FD3D12FastAllocator::Allocate
                          (&this_00->DefaultFastAllocator,(int)local_2d0 + 0x1ffU & 0xfffffe00,0x200
                           ,&(local_328[0].Ptr)->ResourceLocation);
      if (pvVar30 == (void *)0x0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                            ,0x821,L"");
        TVar10.Ptr = local_328[0].Ptr;
        if (bVar14) {
          pcVar5 = (code *)swi(3);
          pFVar20 = (FRHILockTextureResult *)(*pcVar5)();
          return pFVar20;
        }
        if (local_328[0].Ptr != (FD3D12LockedResource *)0x0) {
          FD3D12ResourceLocation::ReleaseResource(&(local_328[0].Ptr)->ResourceLocation);
          ::operator_delete(TVar10.Ptr,0xa0);
        }
        if (bVar8) {
          lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          if (*(char *)(lVar21 + 0x9d48) == '\0') {
            __dyn_tls_on_demand_init();
          }
          pFVar26 = *(FWriteBuffer **)(lVar21 + 0x20);
          if ((int)pFVar26 - *(int *)&pFVar26->Cursor < 1) {
            pFVar26 = UE::Trace::Private::Writer_NextBuffer();
          }
          *pFVar26->Cursor = '\n';
          pFVar26->Cursor = pFVar26->Cursor + 1;
          pFVar26->Committed = pFVar26->Cursor;
        }
        if (bVar9) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar6) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (!bVar7) {
          return __return_storage_ptr__;
        }
        if (FVar36 == (FName)0x0) {
          return __return_storage_ptr__;
        }
        if (FThreadStats::bPrimaryDisableForever != false) {
          return __return_storage_ptr__;
        }
        if (FThreadStats::TlsSlot == 0xffffffff) {
          return __return_storage_ptr__;
        }
        pFVar27 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar27 == (FThreadStats *)0x0) {
          pFVar28 = FThreadStatsPool::Get();
          pFVar27 = FThreadStatsPool::GetFromPool(pFVar28);
        }
        if (pFVar27->ScopeCount <= pFVar27->bWaitForExplicitFlush) {
          return __return_storage_ptr__;
        }
        local_270.NameAndInfo.Number = uVar35 & 0xffff6fff | 0x6000;
        local_270.NameAndInfo.Index.Value = FVar34.Value;
        QueryPerformanceCounter(&local_298);
        local_270.StatData.Pad[4] = '\0';
        local_270.StatData.Pad[5] = '\0';
        local_270.StatData.Pad[6] = '\0';
        local_270.StatData.Pad[7] = '\0';
        local_270.StatData.Pad[0] = local_298.s.LowPart._0_1_;
        local_270.StatData.Pad[1] = local_298.s.LowPart._1_1_;
        local_270.StatData.Pad[2] = local_298.s.LowPart._2_1_;
        local_270.StatData.Pad[3] = local_298.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar27,&local_270);
        piVar1 = &pFVar27->ScopeCount;
        *piVar1 = *piVar1 + -1;
        iVar16 = *piVar1;
        goto joined_r0x000145a6dc18;
      }
      __return_storage_ptr__->Data = ((local_328[0].Ptr)->ResourceLocation).MappedBaseAddress;
    }
    else {
      (local_328[0].Ptr)->bLockedForReadOnly = 1;
      if ((GNumExplicitGPUsForRendering != 1) &&
         (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_1941583375391258580>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                              ,0x82c,"GNumExplicitGPUsForRendering == 1"), bVar14)) {
        pcVar5 = (code *)swi(3);
        pFVar20 = (FRHILockTextureResult *)(*pcVar5)();
        return pFVar20;
      }
      uVar12 = local_2d0;
      local_2c8 = (FD3D12Resource *)0x0;
      iVar16 = FD3D12Adapter::CreateBuffer
                         (local_2f8,D3D12_HEAP_TYPE_READBACK,(FRHIGPUMask)*(uint *)this_00,
                          (FRHIGPUMask)*(uint *)this_00,local_2d0,&local_2c8,(wchar_t *)0x0,
                          D3D12_RESOURCE_FLAG_NONE);
      if (iVar16 < 0) {
        local_260.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_260.Data.ArrayNum = 0;
        local_260.Data.ArrayMax = 0;
        D3D12RHI::VerifyD3D12Result
                  (iVar16,
                   "Adapter->CreateBuffer(D3D12_HEAP_TYPE_READBACK, Node, Node, SubresourceSize, &StagingTexture, nullptr)"
                   ,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                   ,0x834,(ID3D12Device *)0x0,&local_260);
      }
      pFVar13 = local_2c8;
      FD3D12ResourceLocation::AsStandAlone
                (&(local_328[0].Ptr)->ResourceLocation,local_2c8,uVar12,false,
                 (D3D12_HEAP_PROPERTIES *)0x0);
      TStack_1c8.Reference = (IDXGIFactory3 *)local_b8;
      this_01 = local_2c0;
      pFVar11 = local_318;
      local_e8 = (FRHICommandBase *)(pFVar13->Resource).Reference;
      TStack_1c0.Reference = (IDXGIFactory4 *)CONCAT44(uStack_ac,DStack_b0);
      local_1b8.Reference = (IDXGIFactory5 *)CONCAT44(uStack_a4,uStack_a8);
      TStack_1b0.Reference = (IDXGIFactory6 *)CONCAT44(awStack_9c,uStack_a0);
      pvStack_120 = (void *)0x0;
      awStack_e0[0] = L'\x01';
      awStack_e0[1] = L'\0';
      awStack_130[0] = L'\0';
      awStack_130[1] = L'\0';
      local_138 = *(FRHICommandBase **)(this->_padding_ + 0x20);
      local_128 = (FRHICommandBase *)(ulonglong)local_330;
      local_108[0] = L'\0';
      local_108[1] = L'\0';
      local_108[2] = L'\0';
      local_108[3] = L'\0';
      local_108[4] = L'\0';
      local_108[5] = L'\0';
      local_108[6] = L'\0';
      local_108[7] = L'\0';
      local_108[8] = L'\0';
      local_108[9] = L'\0';
      local_108[10] = L'\0';
      local_108[0xb] = L'\0';
      local_108[0xc] = L'\0';
      local_108[0xd] = L'\0';
      local_108[0xe] = L'\0';
      local_108[0xf] = L'\0';
      if ((GRHIGlobals.NeedsExtraTransitions != false) &&
         (local_2c0->bAllowExtraTransitions != false)) {
        local_240._0_2_ = (undefined2)local_318->_padding_;
        uStack_2f0 = 1;
        local_240._2_4_ = 0;
        local_240._20_4_ = 0;
        local_240[0x28] = 0;
        local_2f8 = (FD3D12Adapter *)local_240;
        local_158._12_4_ = uStack_2ec;
        local_158.ArrayNum = 1;
        local_240[0x10] = 1;
        local_240._24_4_ = 0x80;
        local_240[0x1c] = 2;
        local_240._8_8_ = this;
        local_158.DataPtr = (FRHITransitionInfo *)local_2f8;
        FRHICommandListBase::TransitionInternal(local_2c0,&local_158,None);
      }
      TStack_1d0.Reference = (IDXGIFactory2 *)CONCAT44(awStack_e0._4_4_,awStack_e0._0_4_);
      TStack_1d8.Reference = (ID3D12Device12 *)local_e8;
      pHStack_1a0 = (HINSTANCE__ *)CONCAT44(awStack_130._4_4_,awStack_130._0_4_);
      local_188 = (FRHICommandBase *)0x0;
      lStack_180 = 0;
      local_1a8.Reference = (IDXGIFactory7 *)local_138;
      local_198.Reference = (IDXGIDebug *)local_128;
      pvStack_190 = pvStack_120;
      local_1e0.Reference = (ID3D12Device11 *)this;
      if (((GRHICommandList.bLatchedBypass == false) ||
          ((this_01->PersistentState).bImmediate == '\0')) && (this_01->bExecuting == false)) {
        pFVar31 = FMemStackBase::Alloc(&this_01->MemManager,0x80,8);
        this_01->NumCommands = this_01->NumCommands + 1;
        *this_01->CommandLink = pFVar31;
        this_01->CommandLink = &pFVar31->Next;
        pFVar31->Next = (FRHICommandBase *)0x0;
        pFVar31->_padding_ =
             (longlong)
             &TRHILambdaCommand<FRHICommandListBase,`FD3D12Texture::Lock'::`54'::<lambda_1>_>::
              _vftable_;
        pFVar31[1]._padding_ = (longlong)local_1e0.Reference;
        pFVar31[1].Next = (FRHICommandBase *)TStack_1d8.Reference;
        pFVar31[2]._padding_ = (longlong)TStack_1d0.Reference;
        pFVar31[2].Next = (FRHICommandBase *)TStack_1c8.Reference;
        pFVar31[3]._padding_ = (longlong)TStack_1c0.Reference;
        pFVar31[3].Next = (FRHICommandBase *)local_1b8.Reference;
        pFVar31[4]._padding_ = (longlong)TStack_1b0.Reference;
        pFVar31[4].Next = (FRHICommandBase *)local_1a8.Reference;
        pFVar31[5]._padding_ = (longlong)pHStack_1a0;
        pFVar31[5].Next = (FRHICommandBase *)local_198.Reference;
        pFVar31[6]._padding_ = (longlong)pvStack_190;
        pFVar31[6].Next = local_188;
        pFVar31[7]._padding_ = lStack_180;
        pFVar31[7].Next = (FRHICommandBase *)L"TRHILambdaCommand";
      }
      else {
        `FD3D12Texture::Lock'::__l54::<lambda_1>::operator()(&local_1e0,this_01);
      }
      if ((GRHIGlobals.NeedsExtraTransitions != false) && (this_01->bAllowExtraTransitions != false)
         ) {
        local_240._48_2_ = (undefined2)pFVar11->_padding_;
        local_2f8 = (FD3D12Adapter *)(local_240 + 0x30);
        uStack_2f0 = 1;
        local_148._12_4_ = uStack_2ec;
        local_148.ArrayNum = 1;
        local_20e = 0;
        local_200 = 1;
        local_1fc = 0x80;
        local_1f4 = 2;
        local_1e8 = 0;
        local_208.Reference = (ID3D12Device6 *)this;
        local_148.DataPtr = (FRHITransitionInfo *)local_2f8;
        FRHICommandListBase::TransitionInternal(this_01,&local_148,None);
      }
      if (((this_01->PersistentState).bImmediate == '\0') &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsImmediate()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                              ,0x17,L"This operation expects the immediate command list."), bVar14))
      {
        pcVar5 = (code *)swi(3);
        pFVar20 = (FRHILockTextureResult *)(*pcVar5)();
        return pFVar20;
      }
      FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle((FRHICommandListImmediate *)this_01);
      __return_storage_ptr__->Data = ((local_328[0].Ptr)->ResourceLocation).MappedBaseAddress;
    }
  }
  else if ((__return_storage_ptr__->Data == (void *)0x0) &&
          (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result.Data != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                               ,0x816,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    pFVar20 = (FRHILockTextureResult *)(*pcVar5)();
    return pFVar20;
  }
  TMapBase<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>,0>_>
  ::
  Emplace<unsigned_int_const_&,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>_>
            ((TMapBase<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>,0>_>
              *)&this->LockedMap,&local_330,local_328);
  if ((__return_storage_ptr__->Data == (void *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Result.Data != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                          ,0x85f,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    pFVar20 = (FRHILockTextureResult *)(*pcVar5)();
    return pFVar20;
  }
  TVar10.Ptr = local_328[0].Ptr;
  if (local_328[0].Ptr != (FD3D12LockedResource *)0x0) {
    FD3D12ResourceLocation::ReleaseResource(&(local_328[0].Ptr)->ResourceLocation);
    ::operator_delete(TVar10.Ptr,0xa0);
  }
  if (bVar8) {
    lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar21 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar26 = *(FWriteBuffer **)(lVar21 + 0x20);
    if ((int)pFVar26 - *(int *)&pFVar26->Cursor < 1) {
      pFVar26 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar26->Cursor = '\n';
    pFVar26->Cursor = pFVar26->Cursor + 1;
    pFVar26->Committed = pFVar26->Cursor;
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (!bVar7) {
    return __return_storage_ptr__;
  }
  if (FVar36 == (FName)0x0) {
    return __return_storage_ptr__;
  }
  if (FThreadStats::bPrimaryDisableForever != false) {
    return __return_storage_ptr__;
  }
  if (FThreadStats::TlsSlot == 0xffffffff) {
    return __return_storage_ptr__;
  }
  pFVar27 = TlsGetValue(FThreadStats::TlsSlot);
  if (pFVar27 == (FThreadStats *)0x0) {
    pFVar28 = FThreadStatsPool::Get();
    pFVar27 = FThreadStatsPool::GetFromPool(pFVar28);
  }
  if (pFVar27->ScopeCount <= pFVar27->bWaitForExplicitFlush) {
    return __return_storage_ptr__;
  }
  local_250.NameAndInfo.Number = uVar35 & 0xffff6fff | 0x6000;
  local_250.NameAndInfo.Index.Value = FVar34.Value;
  QueryPerformanceCounter(&local_290);
  local_250.StatData.Pad[4] = '\0';
  local_250.StatData.Pad[5] = '\0';
  local_250.StatData.Pad[6] = '\0';
  local_250.StatData.Pad[7] = '\0';
  local_250.StatData.Pad[0] = local_290.s.LowPart._0_1_;
  local_250.StatData.Pad[1] = local_290.s.LowPart._1_1_;
  local_250.StatData.Pad[2] = local_290.s.LowPart._2_1_;
  local_250.StatData.Pad[3] = local_290.s.LowPart._3_1_;
  FThreadStats::AddStatMessage(pFVar27,&local_250);
  piVar1 = &pFVar27->ScopeCount;
  *piVar1 = *piVar1 + -1;
  iVar16 = *piVar1;
joined_r0x000145a6dc18:
  if (iVar16 == 0) {
    FThreadStats::Flush(pFVar27,false,false);
  }
  else if (FThreadStats::bIsRawStatsActive != false) {
    FThreadStats::FlushRawStats(pFVar27,false,false);
  }
  return __return_storage_ptr__;
}

// Release @ 145a7aff0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

uint __thiscall FD3D12Texture::Release(FD3D12Texture *this)

{
  uint uVar1;
  
  uVar1 = FRHIResource::Release((FRHIResource *)&this[-1]._padding_);
  return uVar1;
}

// ReuseStagingBuffer @ 145a7c4b0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12Texture::ReuseStagingBuffer
          (FD3D12Texture *this,
          TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_> *param_1,
          uint param_2)

{
  longlong lVar1;
  FD3D12LockedResource *pFVar2;
  int iVar3;
  undefined1 *puVar4;
  uint local_res18 [4];
  
  local_res18[0] = param_2;
  if (*(int *)&(this->LockedMap).field_0x8 != *(int *)&(this->LockedMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->LockedMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->LockedMap).field_0x38;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)(*(int *)&(this->LockedMap).field_0x48 - 1U & param_2) * 4)
    ;
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->LockedMap;
      do {
        if (*(uint *)(lVar1 + (longlong)iVar3 * 0x18) == param_2) {
          pFVar2 = param_1->Ptr;
          param_1->Ptr = (FD3D12LockedResource *)0x0;
          if (pFVar2 != (FD3D12LockedResource *)0x0) {
            FD3D12ResourceLocation::ReleaseResource(&pFVar2->ResourceLocation);
            ::operator_delete(pFVar2,0xa0);
          }
          return;
        }
        iVar3 = *(int *)(lVar1 + 0x10 + (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  TMapBase<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>,0>_>
  ::Emplace<unsigned_int_&,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>_>
            ((TMapBase<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>,0>_>
              *)&this->LockedMap,local_res18,param_1);
  return;
}

// Unlock @ 145a804b0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FD3D12Texture::Unlock(FD3D12Texture *this,FRHICommandListBase *param_1,FRHILockTextureArgs *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_D3D12UnlockTextureTime> FVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  longlong lVar13;
  FRHICommandBase *pFVar14;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar15;
  void *pvVar16;
  int iVar17;
  bool bVar18;
  void *local_res8;
  FName local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  FName local_118;
  void *local_110;
  FName local_108;
  uint local_f8;
  LARGE_INTEGER local_f0;
  FStatMessage local_e8;
  FD3D12Texture *local_d8;
  int local_d0;
  int local_cc;
  void *local_c8;
  undefined2 local_c0;
  undefined2 local_be;
  undefined2 local_bc;
  FD3D12Texture *local_b8;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined1 local_98;
  undefined2 local_90;
  undefined2 local_8e;
  undefined2 local_8c;
  FD3D12Texture *local_88;
  undefined1 local_80;
  undefined8 local_7c;
  undefined1 local_74;
  undefined1 local_68;
  TArrayView<FRHITransitionInfo_const_,int> local_58;
  TArrayView<FRHITransitionInfo_const_,int> local_48;
  
  FVar10 = StatPtr_STAT_D3D12UnlockTextureTime;
  if (StatPtr_STAT_D3D12UnlockTextureTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12UnlockTextureTime>)0x0) {
    pFVar9 = ::FName::FName(&local_128,"STAT_D3D12UnlockTextureTime");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_D3D12UnlockTextureTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12UnlockTextureTime,*pFVar9,
                        L"UnlockTexture time","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar10;
  bVar4 = false;
  bVar6 = false;
  local_108.ComparisonIndex.Value = 0;
  local_108.Number = 0;
  if ((FVar15.ComparisonIndex.Value.Value != 0) || (FVar15.Number != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_res8 = (void *)((ulonglong)local_res8 & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_118.ComparisonIndex.Value = FVar15.ComparisonIndex.Value.Value;
        local_118.Number = FVar15.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_118,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                   ,0x8ea);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar5 = true;
      goto LAB_145a80611;
    }
  }
  bVar5 = false;
  FVar15 = local_108;
LAB_145a80611:
  plVar2 = &this->_padding_;
  local_f8 = 0;
  bVar18 = (int)*plVar2 != 0;
  if (bVar18) {
    for (; ((uint)*plVar2 >> local_f8 & 1) == 0; local_f8 = local_f8 + 1) {
    }
  }
  uVar11 = 0x20;
  if (bVar18) {
    uVar11 = (ulonglong)local_f8;
  }
  lVar13 = *(longlong *)
            ((this->RenderTargetViews).AllocatorInstance.InlineData + uVar11 * 8 + -0x58);
  puVar12 = (undefined1 *)(lVar13 + 0x1f8);
  if (lVar13 == 0) {
    puVar12 = (undefined1 *)0x0;
  }
  if (((longlong *)puVar12 != plVar2) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsHeadLink()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                          ,0x8eb,L""), bVar18)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar13 = (**(code **)(this->_padding_ + 0x20))(this);
  iVar8 = *(int *)((longlong)&param_2->_padding_ + 4);
  cVar7 = *(char *)(lVar13 + 0x32);
  if ((cVar7 == '\x03') || (cVar7 == '\x04')) {
    iVar17 = (int)param_2->_padding_ + iVar8 * 6;
  }
  else {
    iVar17 = 0;
    if (cVar7 == '\x01') {
      iVar17 = iVar8;
    }
  }
  iVar8 = (int)param_2->_padding_ + (uint)*(byte *)(lVar13 + 0x30) * iVar17;
  TMap<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>,0>_>
  ::FindAndRemoveChecked(&this->LockedMap,(uint)&local_110);
  if ((local_110 == (void *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("LockedResource",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                          ,0x8f4,L""), bVar18)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  cVar7 = (**(code **)(FD3D12DynamicRHI::SingleD3DRHI->_padding_ + 0x5f0))
                    (FD3D12DynamicRHI::SingleD3DRHI,param_1,this,param_2);
  if ((cVar7 == '\0') && ((*(byte *)((longlong)local_110 + 0x9c) & 2) == 0)) {
    if ((GRHIGlobals.NeedsExtraTransitions != false) && (param_1->bAllowExtraTransitions != false))
    {
      local_c0 = (undefined2)param_2->_padding_;
      uStack_120 = 1;
      local_bc = 0;
      local_ac = 0;
      local_98 = 0;
      local_128 = (FName)&local_c0;
      local_58._12_4_ = uStack_11c;
      local_58.ArrayNum = 1;
      local_b0 = 1;
      local_a8 = 0x2000;
      local_a4 = 2;
      local_be = (short)iVar17;
      local_b8 = this;
      local_58.DataPtr = (FRHITransitionInfo *)local_128;
      FRHICommandListBase::TransitionInternal(param_1,&local_58,None);
    }
    local_c8 = local_110;
    local_res8 = local_110;
    local_d8 = this;
    local_d0 = iVar8;
    local_cc = iVar17;
    if (((GRHICommandList.bLatchedBypass == false) ||
        ((param_1->PersistentState).bImmediate == '\0')) && (param_1->bExecuting == false)) {
      pFVar14 = FMemStackBase::Alloc(&param_1->MemManager,0x30,8);
      param_1->NumCommands = param_1->NumCommands + 1;
      *param_1->CommandLink = pFVar14;
      param_1->CommandLink = &pFVar14->Next;
      pFVar14->Next = (FRHICommandBase *)0x0;
      pFVar14->_padding_ =
           (longlong)
           &TRHILambdaCommand<FRHICommandListBase,`FD3D12Texture::Unlock'::`23'::<lambda_1>_>::
            _vftable_;
      pFVar14[2]._padding_ = (longlong)local_res8;
      *(int *)&pFVar14[1].Next = iVar8;
      pvVar16 = (void *)0x0;
      pFVar14[2].Next = (FRHICommandBase *)L"TRHILambdaCommand";
      pFVar14[1]._padding_ = (longlong)this;
      *(int *)((longlong)&pFVar14[1].Next + 4) = iVar17;
    }
    else {
      `FD3D12Texture::Unlock'::__l23::<lambda_1>::operator()(&local_d8,param_1);
      pvVar16 = local_c8;
    }
    if (pvVar16 != (void *)0x0) {
      FD3D12ResourceLocation::ReleaseResource((FD3D12ResourceLocation *)((longlong)pvVar16 + 8));
      ::operator_delete(pvVar16,0xa0);
    }
    local_110 = (void *)0x0;
    if ((GRHIGlobals.NeedsExtraTransitions != false) &&
       (local_110 = (void *)0x0, param_1->bAllowExtraTransitions != false)) {
      uStack_120 = 1;
      local_90 = (undefined2)param_2->_padding_;
      local_8c = 0;
      local_68 = 0;
      local_128 = (FName)&local_90;
      local_48._12_4_ = uStack_11c;
      local_48.ArrayNum = 1;
      local_80 = 1;
      local_7c = 0x2000;
      local_74 = 2;
      local_8e = (short)iVar17;
      local_88 = this;
      local_48.DataPtr = (FRHITransitionInfo *)local_128;
      FRHICommandListBase::TransitionInternal(param_1,&local_48,None);
    }
  }
  if (local_110 != (void *)0x0) {
    FD3D12ResourceLocation::ReleaseResource((FD3D12ResourceLocation *)((longlong)local_110 + 8));
    ::operator_delete(local_110,0xa0);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar15 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_e8.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_e8.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_f0);
      local_e8.StatData.Pad[4] = '\0';
      local_e8.StatData.Pad[5] = '\0';
      local_e8.StatData.Pad[6] = '\0';
      local_e8.StatData.Pad[7] = '\0';
      local_e8.StatData.Pad[0] = local_f0.s.LowPart._0_1_;
      local_e8.StatData.Pad[1] = local_f0.s.LowPart._1_1_;
      local_e8.StatData.Pad[2] = local_f0.s.LowPart._2_1_;
      local_e8.StatData.Pad[3] = local_f0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_e8);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// UpdateTexture2D @ 145a828a0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FD3D12Texture::UpdateTexture2D
          (FD3D12Texture *this,FRHICommandListBase *param_1,uint param_2,
          FUpdateTextureRegion2D *param_3,uint param_4,uchar *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  code *pcVar9;
  byte bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  bool bVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  FRHICommandBase *pFVar21;
  uint uVar22;
  int iVar23;
  uchar *_Src;
  ulonglong uVar24;
  ulonglong uVar25;
  uint local_208;
  undefined4 uStack_1fc;
  undefined1 local_1f8 [24];
  uint uStack_1e0;
  uint uStack_1dc;
  uint local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  FRHILockTextureArgs local_1c8;
  longlong local_1a8;
  FRHITransitionInfo local_1a0;
  FRHITransitionInfo local_170;
  FD3D12Texture *local_140;
  FRHICommandBase *pFStack_138;
  longlong lStack_130;
  FRHICommandBase *pFStack_128;
  longlong lStack_120;
  FRHICommandBase *local_118;
  longlong lStack_110;
  uint local_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  FD3D12ResourceLocation local_e8;
  TArrayView<FRHITransitionInfo_const_,int> local_68;
  TArrayView<FRHITransitionInfo_const_,int> local_58;
  
  lVar20 = (**(code **)(this->_padding_ + 0x20))();
  bVar3 = *(byte *)(lVar20 + 0x33);
  if ((param_3->Width % (uint)GPixelFormats[bVar3].BlockSizeX != 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("UpdateRegion.Width % FormatInfo.BlockSizeX == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                          ,0x92f,L""), bVar16)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((param_3->Height % (uint)GPixelFormats[bVar3].BlockSizeY != 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("UpdateRegion.Height % FormatInfo.BlockSizeY == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                          ,0x930,L""), bVar16)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((param_3->DestX % (uint)GPixelFormats[bVar3].BlockSizeX != 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("UpdateRegion.DestX % FormatInfo.BlockSizeX == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                          ,0x931,L""), bVar16)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((param_3->DestY % (uint)GPixelFormats[bVar3].BlockSizeY != 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("UpdateRegion.DestY % FormatInfo.BlockSizeY == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                          ,0x932,L""), bVar16)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((param_3->SrcX % GPixelFormats[bVar3].BlockSizeX != 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("UpdateRegion.SrcX % FormatInfo.BlockSizeX == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                          ,0x933,L""), bVar16)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((param_3->SrcY % GPixelFormats[bVar3].BlockSizeY != 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("UpdateRegion.SrcY % FormatInfo.BlockSizeY == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                          ,0x934,L""), bVar16)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar4 = GPixelFormats[bVar3].BlockSizeX;
  uVar5 = GPixelFormats[bVar3].BlockSizeY;
  iVar6 = param_3->SrcX;
  iVar7 = param_3->SrcY;
  uVar24 = (ulonglong)((param_3->Width - 1) + uVar4) / (ulonglong)uVar4;
  iVar23 = (int)uVar24;
  uVar25 = (ulonglong)((param_3->Height - 1) + uVar5) / (ulonglong)uVar5;
  uVar24 = (longlong)GPixelFormats[bVar3].BlockBytes * uVar24 + 0xff & 0xffffffffffffff00;
  iVar15 = (int)uVar25;
  local_208 = iVar15 * (int)uVar24 + 0x1ffU & 0xfffffe00;
  if ((this->_padding_ == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parent != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x59,L""), bVar16)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_1a8 = this->_padding_;
  uVar8 = GPixelFormats[bVar3].BlockSizeX;
  local_e8.Owner = (FD3D12BaseShaderResource *)0x0;
  local_e8.MappedBaseAddress = (void *)0x0;
  local_e8.GPUVirtualAddress = 0;
  local_e8.OffsetFromBaseOfResource = 0;
  local_e8.Size = 0;
  local_e8.bTransient = false;
  local_e8.UnderlyingResource = (FD3D12Resource *)0x0;
  local_e8.field3_0x18.Allocator = (FD3D12BuddyAllocator *)0x0;
  local_e8.Type = eUndefined;
  local_e8.AllocatorType = AT_Unknown;
  local_e8.AllocatorData.BlockAllocatorPrivateData.FrameFence = 0;
  local_e8.AllocatorData._8_8_ = 0;
  local_e8.AllocatorData.BlockAllocatorPrivateData.ResourceHeap = (FD3D12Resource *)0x0;
  local_e8.AllocatorData.PoolAllocatorPrivateData.PoolData.NextAllocation =
       (FRHIPoolAllocationData *)0x0;
  local_e8.AllocatorData.PoolAllocatorPrivateData.PoolData.AliasAllocation =
       (FRHIPoolAllocationData *)0x0;
  local_e8.AllocatorData.PoolAllocatorPrivateData.PoolData.Owner = (FRHIPoolResource *)0x0;
  local_e8._padding_ = local_1a8;
  lVar20 = (**(code **)(this->_padding_ + 0x20))(this);
  bVar10 = (byte)param_2 & 0x1f;
  uVar22 = *(uint *)(lVar20 + 0x24) >> bVar10;
  uVar18 = 1;
  if (1 < uVar22) {
    uVar18 = uVar22;
  }
  iVar19 = (int)(CONCAT44(0 >> bVar10,(uVar18 - 1) + uVar8) / (ulonglong)uVar8);
  uVar8 = GPixelFormats[bVar3].BlockSizeY;
  lVar20 = (**(code **)(this->_padding_ + 0x20))(this);
  bVar10 = (byte)param_2 & 0x1f;
  uVar22 = *(uint *)(lVar20 + 0x28) >> bVar10;
  uVar18 = 1;
  if (1 < uVar22) {
    uVar18 = uVar22;
  }
  if ((((param_1->PersistentState).bImmediate != '\0') && (param_3->DestX == 0)) &&
     (param_3->DestY == 0)) {
    if (iVar19 == 0) {
      iVar19 = 1;
    }
    if (iVar19 == iVar23) {
      iVar19 = (int)(CONCAT44(0 >> bVar10,(uVar8 - 1) + uVar18) / (ulonglong)uVar8);
      if (iVar19 == 0) {
        iVar19 = 1;
      }
      if (iVar19 == iVar15) {
        bVar16 = true;
        goto LAB_145a82bf3;
      }
    }
  }
  bVar16 = false;
LAB_145a82bf3:
  local_1c8._padding_ = 0;
  local_1c8.LockMode = RLM_WriteOnly;
  local_1c8.bLockWithinMiptail = false;
  local_1c8.bNeedsDefaultRHIFlush = false;
  local_1c8._padding_ = (longlong)this;
  local_1c8._padding_._0_4_ = param_2;
  if (bVar16) {
    Lock(this,(FRHILockTextureResult *)local_1f8,param_1,&local_1c8);
    uVar24 = local_1f8._16_8_ & 0xffffffff;
    pFVar21 = (FRHICommandBase *)local_1f8._0_8_;
  }
  else {
    pFVar21 = FD3D12FastAllocator::Allocate
                        ((FD3D12FastAllocator *)(local_1a8 + 0x1550),local_208,0x200,&local_e8);
  }
  if ((pFVar21 == (FRHICommandBase *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("StagingMemory",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                          ,0x954,L""), bVar17)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  _Src = param_5 + (ulonglong)(((iVar7 + -1 + uVar5) / uVar5) * param_4) +
                   (ulonglong)(((iVar6 + -1 + uVar4) / uVar4) * GPixelFormats[bVar3].BlockBytes);
  if (iVar15 != 0) {
    do {
      memcpy(pFVar21,_Src,(ulonglong)(uint)(iVar23 * GPixelFormats[bVar3].BlockBytes));
      _Src = _Src + param_4;
      pFVar21 = (FRHICommandBase *)((longlong)&pFVar21->_padding_ + uVar24);
      uVar25 = uVar25 - 1;
    } while (uVar25 != 0);
  }
  if (bVar16) {
    Unlock(this,param_1,&local_1c8);
  }
  else {
    if (((char)uVar24 != '\0') &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("StagingPitch % ( 256 ) == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                            ,0x965,L""), bVar16)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uStack_1dc = param_3->Width;
    local_1d8 = param_3->Height;
    uStack_1e0 = GPixelFormats[bVar3].PlatformFormat;
    local_1f8._8_4_ = 1;
    local_1f8._16_8_ = local_e8.OffsetFromBaseOfResource;
    local_1f8._0_8_ = ((local_e8.UnderlyingResource)->Resource).Reference;
    uStack_1d4 = 1;
    uStack_1d0 = (undefined4)uVar24;
    uStack_1cc = 0;
    if ((GRHIGlobals.NeedsExtraTransitions != false) && (param_1->bAllowExtraTransitions != false))
    {
      local_68.DataPtr = &local_1a0;
      local_68._12_4_ = uStack_1fc;
      local_68.ArrayNum = 1;
      local_1a0._padding_._2_4_ = 0;
      local_1a0.Type = Texture;
      local_1a0.AccessBefore = None;
      local_1a0.AccessAfter = CopyDest;
      local_1a0.Flags = IgnoreAfterState;
      local_1a0.CommitInfo.bIsSet = false;
      local_1a0._padding_._0_2_ = (short)param_2;
      local_1a0.field1_0x8 = (FRHITransitionInfo_u_8)this;
      FRHICommandListBase::TransitionInternal(param_1,&local_68,AllowDuringRenderPass);
    }
    lStack_130 = CONCAT44(local_1f8._12_4_,local_1f8._8_4_);
    lStack_120 = CONCAT44(uStack_1dc,uStack_1e0);
    pFStack_138 = (FRHICommandBase *)local_1f8._0_8_;
    local_118 = (FRHICommandBase *)CONCAT44(uStack_1d4,local_1d8);
    lStack_110 = CONCAT44(uStack_1cc,uStack_1d0);
    pFStack_128 = (FRHICommandBase *)local_1f8._16_8_;
    uVar1 = param_3->Width;
    uVar2 = param_3->Height;
    uVar11 = param_3->DestX;
    uVar12 = param_3->DestY;
    uVar13 = param_3->SrcX;
    uVar14 = param_3->SrcY;
    local_140 = this;
    local_108 = param_2;
    local_104 = uVar11;
    uStack_100 = uVar12;
    uStack_fc = uVar13;
    uStack_f8 = uVar14;
    local_f4 = uVar1;
    uStack_f0 = uVar2;
    if (((GRHICommandList.bLatchedBypass == false) ||
        ((param_1->PersistentState).bImmediate == '\0')) && (param_1->bExecuting == false)) {
      pFVar21 = FMemStackBase::Alloc(&param_1->MemManager,0x70,8);
      param_1->NumCommands = param_1->NumCommands + 1;
      *param_1->CommandLink = pFVar21;
      param_1->CommandLink = &pFVar21->Next;
      pFVar21->Next = (FRHICommandBase *)0x0;
      pFVar21->_padding_ =
           (longlong)
           &TRHILambdaCommand<FRHICommandListBase,`FD3D12Texture::UpdateTexture2D'::`2'::<lambda_1>_>
            ::_vftable_;
      pFVar21[1]._padding_ = (longlong)local_140;
      pFVar21[1].Next = pFStack_138;
      pFVar21[2]._padding_ = lStack_130;
      pFVar21[2].Next = pFStack_128;
      pFVar21[3]._padding_ = lStack_120;
      pFVar21[3].Next = local_118;
      pFVar21[4]._padding_ = lStack_110;
      pFVar21[4].Next = (FRHICommandBase *)CONCAT44(local_104,local_108);
      pFVar21[5]._padding_ = CONCAT44(uStack_fc,uStack_100);
      pFVar21[5].Next = (FRHICommandBase *)CONCAT44(local_f4,uStack_f8);
      pFVar21[6]._padding_ = CONCAT44(uStack_ec,uStack_f0);
      pFVar21[6].Next = (FRHICommandBase *)L"TRHILambdaCommand";
    }
    else {
      `FD3D12Texture::UpdateTexture2D'::__l2::<lambda_1>::operator()(&local_140,param_1);
    }
    if ((GRHIGlobals.NeedsExtraTransitions != false) && (param_1->bAllowExtraTransitions != false))
    {
      local_58.DataPtr = &local_170;
      local_58._12_4_ = uStack_1fc;
      local_58.ArrayNum = 1;
      local_170._padding_._2_4_ = 0;
      local_170.Type = Texture;
      local_170.AccessBefore = CopyDest;
      local_170.AccessAfter = None;
      local_170.Flags = IgnoreAfterState;
      local_170.CommitInfo.bIsSet = false;
      local_170._padding_._0_2_ = (short)param_2;
      local_170.field1_0x8 = (FRHITransitionInfo_u_8)this;
      FRHICommandListBase::TransitionInternal(param_1,&local_58,AllowDuringRenderPass);
    }
  }
  FD3D12ResourceLocation::ReleaseResource(&local_e8);
  return;
}

// UpdateTexture @ 145a82f60

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12Texture::UpdateTexture
          (FD3D12Texture *this,FD3D12CommandContext *param_1,uint param_2,uint param_3,uint param_4,
          uint param_5,D3D12_TEXTURE_COPY_LOCATION *param_6)

{
  EPixelFormat EVar1;
  FD3D12Resource *pFVar2;
  FD3D12Resource *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  ED3D12Access EVar8;
  FName local_res8;
  FMemScope local_res10;
  FLLMScope local_res18 [2];
  uint local_res20;
  D3D12_TEXTURE_COPY_LOCATION local_78;
  
  local_res20 = param_3;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name2149,L"D3D12CopyTextureRegion");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res18,LLMScope_Name2149,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,&LLMScope_Name2149,true);
  pFVar2 = (FD3D12Resource *)this->_padding_;
  EVar8 = Unknown;
  bVar5 = false;
  if (pFVar2->bRequiresResourceStateTracking) goto LAB_145a830ae;
  EVar8 = pFVar2->DefaultD3D12Access;
  if ((((EVar8 & ReadOnlyExclusiveMask) == Unknown) || ((EVar8 & WritableMask) == Unknown)) &&
     (((EVar8 & WriteOnlyExclusiveMask) == Unknown || ((EVar8 & ReadableMask) == Unknown)))) {
    if ((EVar8 >> 0x14 & 1) == 0) goto LAB_145a83061;
    if ((EVar8 == Unknown) || ((EVar8 & EVar8 - CPURead) != Unknown)) goto LAB_145a8303b;
  }
  else {
LAB_145a8303b:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAccess(BeforeD3D12Access)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHIPrivate.h"
                       ,0x2ed,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
LAB_145a83061:
    if (EVar8 == Unknown) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("BeforeD3D12Access != ED3D12Access::Unknown",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHIPrivate.h"
                         ,0x2ee,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  FD3D12ContextCommon::AddBarrier((FD3D12ContextCommon *)param_1,pFVar2,EVar8,CopyDest,param_2);
  bVar5 = true;
LAB_145a830ae:
  local_78.pResource = *(ID3D12Resource **)(this->_padding_ + 0x20);
  local_78.field2_0x10._8_8_ = 0;
  local_78.Type = D3D12_TEXTURE_COPY_TYPE_SUBRESOURCE_INDEX;
  local_78.field2_0x10._16_8_ = 0;
  local_78.field2_0x10._24_8_ = 0;
  local_78.field2_0x10.PlacedFootprint.Offset._4_4_ = 0;
  local_78.field2_0x10.SubresourceIndex = param_2;
  FD3D12ContextCommon::FlushResourceBarriers((FD3D12ContextCommon *)param_1);
  local_res8 = (FName)this->_padding_;
  lVar7 = (**(code **)(this->_padding_ + 0x20))(this);
  EVar1 = *(EPixelFormat *)(lVar7 + 0x33);
  lVar7 = (**(code **)(this->_padding_ + 0x20))(this);
  FD3D12CommandContext::CopyTextureRegionChecked
            (param_1,&local_78,local_res20,param_4,param_5,*(EPixelFormat *)(lVar7 + 0x33),param_6,
             (D3D12_BOX *)0x0,EVar1,&local_res8);
  pFVar3 = (FD3D12Resource *)this->_padding_;
  if (pFVar3 == (FD3D12Resource *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Resource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                       ,0x1a5,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (*(longlong *)&param_1->field_0x188 == 0) {
    (**(code **)(*(longlong *)param_1 + 8))(param_1);
  }
  FD3D12CommandList::UpdateResidency(*(FD3D12CommandList **)&param_1->field_0x188,pFVar3);
  FD3D12ContextCommon::ConditionalSplitCommandList((FD3D12ContextCommon *)param_1);
  if (bVar5) {
    FD3D12ContextCommon::AddBarrier((FD3D12ContextCommon *)param_1,pFVar2,CopyDest,EVar8,param_2);
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res18);
  return;
}

// UploadInitialData @ 145a83450

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FD3D12Texture::UploadInitialData
          (FD3D12Texture *this,FRHICommandListBase *param_1,FD3D12ResourceLocation *param_2,
          ED3D12Access param_3)

{
  FRHICommandBase *pFVar1;
  FD3D12Texture *local_98;
  FD3D12ResourceLocation local_90;
  ED3D12Access local_18;
  
  local_98 = this;
  FD3D12ResourceLocation::FD3D12ResourceLocation(&local_90,param_2);
  local_18 = param_3;
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->PersistentState).bImmediate == '\0'))
     && (param_1->bExecuting == false)) {
    pFVar1 = FMemStackBase::Alloc(&param_1->MemManager,0xa0,8);
    param_1->NumCommands = param_1->NumCommands + 1;
    *param_1->CommandLink = pFVar1;
    param_1->CommandLink = &pFVar1->Next;
    pFVar1->Next = (FRHICommandBase *)0x0;
    pFVar1->_padding_ =
         (longlong)
         &TRHILambdaCommand<FRHICommandListBase,`FD3D12Texture::UploadInitialData'::`2'::<lambda_1>_>
          ::_vftable_;
    pFVar1[1]._padding_ = (longlong)local_98;
    FD3D12ResourceLocation::FD3D12ResourceLocation
              ((FD3D12ResourceLocation *)&pFVar1[1].Next,&local_90);
    *(ED3D12Access *)&pFVar1[9]._padding_ = local_18;
    pFVar1[9].Next = (FRHICommandBase *)L"TRHILambdaCommand";
  }
  else {
    `FD3D12Texture::UploadInitialData'::__l2::<lambda_1>::operator()(&local_98,param_1);
  }
  FD3D12ResourceLocation::ReleaseResource(&local_90);
  return;
}

// SetNumRTVs @ 145ab8c20

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12Texture::SetNumRTVs(FD3D12Texture *this,int param_1)

{
  int *piVar1;
  TArray<TSharedPtr<FD3D12RenderTargetView,1>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *this_00;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_> FVar6;
  uint uVar7;
  
  this_00 = &this->RenderTargetViews;
  iVar2 = (this->RenderTargetViews).ArrayNum;
  piVar1 = &(this->RenderTargetViews).ArrayNum;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_>_>
                      (0x10,8,param_1 - iVar2,&this_00->AllocatorInstance,piVar1,
                       &(this->RenderTargetViews).ArrayMax);
    FVar6 = (this->RenderTargetViews).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_>)0x0) {
      FVar6 = (ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_>)this_00;
    }
    memset((void *)((longlong)FVar6 + (longlong)iVar5 * 0x10),0,(longlong)(param_1 - iVar2) << 4);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar2) {
    uVar7 = iVar2 - param_1;
    if (((int)(uVar7 | param_1) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar7 != 0) {
      TArray<TSharedPtr<FD3D12RenderTargetView,1>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      ::RemoveAtImpl(this_00,param_1,uVar7);
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_>_>
                (0x10,8,&this_00->AllocatorInstance,*piVar1,&(this->RenderTargetViews).ArrayMax);
    }
  }
  return;
}

