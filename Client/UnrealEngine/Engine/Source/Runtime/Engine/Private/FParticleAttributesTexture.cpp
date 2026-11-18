// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// CreateAttributesTextureRHI @ 1481049e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHITexture> __thiscall
FParticleAttributesTexture::CreateAttributesTextureRHI
          (FParticleAttributesTexture *this,FRHICommandListBase *param_1)

{
  FRHICommandListBase *in_R8;
  undefined1 auStack_148 [32];
  int local_128;
  int iStack_124;
  FRHITextureDesc local_118;
  wchar_t *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  FRHITextureDesc local_98;
  wchar_t *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_118.Depth = 1;
  local_118.ArraySize = 1;
  local_118.NumMips = '\x01';
  local_118.NumSamples = '\x01';
  local_118.Dimension = Texture2D;
  local_118.Format = PF_B8G8R8A8;
  local_118.UAVFormat = PF_Unknown;
  local_118.FastVRAMPercentage = 0xff;
  local_118.AliasableFormats.ArrayMax = 1;
  local_118.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_118.ExtData = 0;
  local_c8 = this->PaticleAttributeTextureName;
  local_128 = (this->RenderTargetSize).field0_0x0._s_0.X;
  iStack_124 = (this->RenderTargetSize).field0_0x0._s_0.Y;
  local_118.Extent.field0_0x0._s_0 = (this->RenderTargetSize).field0_0x0;
  local_118.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_118.AliasableFormats.ArrayNum = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_118.ClearValue.Value.Color[3] = FClearValueBinding::Transparent.Value.Color[3];
  local_c0 = 0x1000;
  local_118.ClearValue._0_8_ = FClearValueBinding::Transparent._0_8_;
  local_118.ClearValue.Value._4_8_ = FClearValueBinding::Transparent.Value._4_8_;
  local_118.Flags = NoFastClear|ShaderResource|RenderTargetable;
  FRHITextureDesc::FRHITextureDesc(&local_98,&local_118);
  local_48 = local_c8;
  local_40 = (undefined4)local_c0;
  local_3c = local_c0._4_4_;
  local_38 = local_b8;
  local_30 = local_b0;
  local_28 = local_a8;
  if (local_118.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_118.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  FRHICommandListBase::CreateTexture(in_R8,(FRHITextureCreateDesc *)param_1);
  if (local_98.AliasableFormats.AllocatorInstance.SecondaryData != (ForElementType<EPixelFormat>)0x0
     ) {
    FMemory::Free((void *)local_98.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  return (TRefCountPtr<FRHITexture>)(FRHITexture *)param_1;
}

// InitRHI @ 148120b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FParticleAttributesTexture::InitRHI(FParticleAttributesTexture *this,FRHICommandListBase *param_1)

{
  FRHITexture *pFVar1;
  code *pcVar2;
  bool bVar3;
  TRefCountPtr<FRHITexture> TVar4;
  TRefCountPtr<FRHITexture> *pTVar5;
  undefined1 auStack_198 [32];
  undefined1 local_178 [20];
  undefined2 local_164;
  FRHITexture *local_160;
  undefined1 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined1 local_14c;
  undefined1 local_140;
  undefined1 local_138 [16];
  FRHIRenderPassInfo local_128;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_198;
  TVar4 = CreateAttributesTextureRHI(this,(FRHICommandListBase *)local_178);
  pTVar5 = &this->TextureRHI;
  if ((FRHITexture *)pTVar5 != TVar4.Reference) {
    pFVar1 = pTVar5->Reference;
    pTVar5->Reference = (FRHITexture *)(TVar4.Reference)->_padding_;
    (TVar4.Reference)->_padding_ = 0;
    if (pFVar1 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar1);
    }
  }
  if ((FRHIResource *)local_178._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_178._0_8_);
  }
  pFVar1 = pTVar5->Reference;
  if ((param_1->PersistentState).bImmediate == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsImmediate()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                       ,0x17,L"This operation expects the immediate command list.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (pFVar1 == (FRHITexture *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Texture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIUtilities.h"
                       ,0x281,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1);
  (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1);
  TStaticArray<FRHIRenderPassInfo::FColorEntry,8,4294967295>::
  TStaticArray<FRHIRenderPassInfo::FColorEntry,8,4294967295>(&local_128.ColorRenderTargets);
  local_128.DepthStencilRenderTarget.Action = DontLoad_DontStore;
  local_128.DepthStencilRenderTarget.DepthStencilTarget = (FRHITexture *)0x0;
  local_128.DepthStencilRenderTarget.ResolveTarget = (FRHITexture *)0x0;
  local_128.DepthStencilRenderTarget.ExclusiveDepthStencil.Value = DepthNop;
  local_128.ResolveRect.X1 = -1;
  local_128.ResolveRect.Y1 = -1;
  local_128.ResolveRect.X2 = -1;
  local_128.ResolveRect.Y2 = -1;
  local_128.ShadingRateTexture.Reference = (FRHITexture *)0x0;
  local_128.ShadingRateTextureCombiner = VRSRB_Passthrough;
  local_128.NopAccess = 0;
  local_128.NumOcclusionQueries = 0;
  local_128.bOcclusionQueries = false;
  local_128.MultiViewCount = 0;
  local_128.SubpassHint = None;
  local_128.ColorRenderTargets.Elements[0].ResolveTarget = (FRHITexture *)0x0;
  local_128.ColorRenderTargets.Elements[0].MipIndex = '\0';
  local_128.ColorRenderTargets.Elements[0].Action = Clear_Store;
  local_128.ColorRenderTargets.Elements[0].ArraySlice = 0;
  local_128.ColorRenderTargets.Elements[0].RenderTarget = pFVar1;
  FRHICommandList::BeginRenderPass((FRHICommandList *)param_1,&local_128,L"ClearRenderTarget");
  FRHICommandList::EndRenderPass((FRHICommandList *)param_1);
  if (local_128.ShadingRateTexture.Reference != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)local_128.ShadingRateTexture.Reference);
  }
  if ((param_1->PersistentState).bImmediate == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsImmediate()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                       ,0x17,L"This operation expects the immediate command list.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_178._8_4_ = 1;
  local_164 = 0xffff;
  local_160 = pTVar5->Reference;
  local_178._0_8_ = local_178 + 0x10;
  local_178._16_4_ = 0xffffffff;
  local_138._8_8_ = CONCAT44(local_178._12_4_,1);
  local_158 = 1;
  local_154._0_1_ = Small;
  local_154._1_1_ = true;
  local_154._2_2_ = 0;
  local_150 = 0x70;
  local_14c = 0;
  local_140 = 0;
  local_138._0_8_ = local_178._0_8_;
  FRHIComputeCommandList::Transition
            ((FRHIComputeCommandList *)param_1,
             (TArrayView<FRHITransitionInfo_const_,int> *)local_138,None);
  return;
}

// ReleaseRHI @ 148128f80

void __thiscall FParticleAttributesTexture::ReleaseRHI(FParticleAttributesTexture *this)

{
  FRHITexture *this_00;
  
  this_00 = (this->TextureRHI).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    (this->TextureRHI).Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
    return;
  }
  return;
}

// ResizeRHI @ 14812b5a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FParticleAttributesTexture::ResizeRHI
          (FParticleAttributesTexture *this,FRHICommandListImmediate *param_1,int param_2,
          int param_3)

{
  int iVar1;
  FRHITexture *this_00;
  longlong lVar2;
  FRHITexture *local_res8;
  TArrayView<FRHITransitionInfo_const_,int> local_98;
  FRHITransitionInfo local_88;
  TIntVector3<int>_u_0 local_58;
  undefined8 local_4c;
  int local_44;
  undefined8 local_40;
  int local_38;
  undefined8 local_34;
  undefined8 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  
  (this->RenderTargetSize).field0_0x0._s_0.X = param_2;
  (this->RenderTargetSize).field0_0x0._s_0.Y = param_3;
  CreateAttributesTextureRHI(this,(FRHICommandListBase *)&local_res8);
  local_98.ArrayNum = 1;
  local_88.field1_0x8.Texture = local_res8;
  local_98.DataPtr = &local_88;
  local_88._padding_._0_4_ = 0xffffffff;
  local_88._padding_._4_2_ = 0xffff;
  local_88.Type = Texture;
  local_88.AccessBefore = RTV;
  local_88.AccessAfter = CopyDest;
  local_88.Flags = None;
  local_88.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_98,None);
  local_88.field1_0x8 = (FRHITransitionInfo_u_8)(this->TextureRHI).Reference;
  local_98.ArrayNum = 1;
  local_98.DataPtr = &local_88;
  local_88._padding_._0_4_ = 0xffffffff;
  local_88._padding_._4_2_ = 0xffff;
  local_88.Type = Texture;
  local_88.AccessBefore = SRVMask;
  local_88.AccessAfter = CopySrc;
  local_88.Flags = None;
  local_88.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_98,None);
  local_4c = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  local_44 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  local_40 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  local_38 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  local_34 = 0;
  local_2c = 1;
  local_24 = 0;
  local_20 = 1;
  lVar2 = (**(code **)(((this->TextureRHI).Reference)->_padding_ + 0x20))();
  iVar1 = *(int *)(lVar2 + 0x28);
  lVar2 = (**(code **)(((this->TextureRHI).Reference)->_padding_ + 0x20))();
  local_58._s_0.X = *(int *)(lVar2 + 0x24);
  local_58._s_0.Z = 0;
  local_58._s_0.Y = iVar1;
  FRHICommandList::CopyTexture
            ((FRHICommandList *)param_1,(this->TextureRHI).Reference,local_res8,
             (FRHICopyTextureInfo *)&local_58._s_0);
  local_88.field1_0x8.Texture = local_res8;
  local_98.DataPtr = &local_88;
  local_88._padding_._0_4_ = 0xffffffff;
  local_88._padding_._4_2_ = 0xffff;
  local_88.Type = Texture;
  local_88.AccessBefore = CopyDest;
  local_88.AccessAfter = SRVMask;
  local_88.Flags = None;
  local_88.CommitInfo.bIsSet = false;
  local_98.ArrayNum = 1;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_98,None);
  local_88.field1_0x8 = (FRHITransitionInfo_u_8)(this->TextureRHI).Reference;
  local_98.ArrayNum = 1;
  local_98.DataPtr = &local_88;
  local_88._padding_._0_4_ = 0xffffffff;
  local_88._padding_._4_2_ = 0xffff;
  local_88.Type = Texture;
  local_88.AccessBefore = CopySrc;
  local_88.AccessAfter = SRVMask;
  local_88.Flags = None;
  local_88.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_98,None);
  (**(code **)(this->_padding_ + 0x10))(this);
  this_00 = (this->TextureRHI).Reference;
  if (this_00 != local_res8) {
    (this->TextureRHI).Reference = local_res8;
    if (local_res8 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_res8);
    }
    if (this_00 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  if (local_res8 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)local_res8);
  }
  return;
}

