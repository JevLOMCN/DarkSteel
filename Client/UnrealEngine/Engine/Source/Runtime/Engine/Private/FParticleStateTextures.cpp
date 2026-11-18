// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FParticleStateTextures @ 1480f41a0

FParticleStateTextures * __thiscall
FParticleStateTextures::FParticleStateTextures(FParticleStateTextures *this)

{
  FRenderResource::FRenderResource((FRenderResource *)this);
  this->_padding_ = (longlong)&___7FParticleStateTextures__6B_;
  this->PaticlePositonTextureName = L"FParticleStatePosition";
  this->PaticleVelocityTextureName = L"FParticleStateVelocity";
  (this->PositionTextureRHI).Reference = (FRHITexture *)0x0;
  (this->VelocityTextureRHI).Reference = (FRHITexture *)0x0;
  this->ParticleStateIndex = 0;
  return this;
}

// ~FParticleStateTextures @ 1480f72a0

void __thiscall FParticleStateTextures::~FParticleStateTextures(FParticleStateTextures *this)

{
  FRHITexture *pFVar1;
  
  pFVar1 = (this->VelocityTextureRHI).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->PositionTextureRHI).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// CreateStateTextureRHI @ 148106630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHITexture> __thiscall
FParticleStateTextures::CreateStateTextureRHI
          (FParticleStateTextures *this,FRHICommandListBase *param_1,wchar_t *param_2,
          EPixelFormat param_3)

{
  undefined7 in_register_00000089;
  undefined1 auStack_148 [32];
  int local_128;
  int iStack_124;
  FRHITextureDesc local_118;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  FRHITextureDesc local_98;
  undefined8 local_48;
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
  local_118.UAVFormat = PF_Unknown;
  local_118.FastVRAMPercentage = 0xff;
  local_118.AliasableFormats.ArrayMax = 1;
  local_118.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_c8 = CONCAT71(in_register_00000089,param_3);
  local_118.ExtData = 0;
  local_118.Dimension = Texture2D;
  local_118.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_118.AliasableFormats.ArrayNum = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_128 = (this->RenderTargetSize).field0_0x0._s_0.X;
  iStack_124 = (this->RenderTargetSize).field0_0x0._s_0.Y;
  local_118.Extent.field0_0x0._s_0 = (this->RenderTargetSize).field0_0x0;
  local_118.ClearValue.Value.Color[3] = FClearValueBinding::Transparent.Value.Color[3];
  local_c0 = 0x70;
  local_118.ClearValue._0_8_ = FClearValueBinding::Transparent._0_8_;
  local_118.ClearValue.Value._4_8_ = FClearValueBinding::Transparent.Value._4_8_;
  local_118.Flags = ShaderResource|RenderTargetable;
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
  FRHICommandListBase::CreateTexture
            ((FRHICommandListBase *)param_2,(FRHITextureCreateDesc *)param_1);
  if (local_98.AliasableFormats.AllocatorInstance.SecondaryData != (ForElementType<EPixelFormat>)0x0
     ) {
    FMemory::Free((void *)local_98.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  return (TRefCountPtr<FRHITexture>)(FRHITexture *)param_1;
}

// InitRHI @ 148120dd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FParticleStateTextures::InitRHI(FParticleStateTextures *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHITexture> *pTVar1;
  TRefCountPtr<FRHITexture> *pTVar2;
  FRHITexture *pFVar3;
  code *pcVar4;
  bool bVar5;
  TRefCountPtr<FRHITexture> TVar6;
  FRHIResource *local_res8;
  FRHIResource *local_res18;
  FName local_res20;
  FName local_28 [2];
  
  pTVar1 = &this->PositionTextureRHI;
  if ((this->PositionTextureRHI).Reference != (FRHITexture *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsValidRef( PositionTextureRHI )",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                       ,0x16f,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TVar6 = CreateStateTextureRHI
                    (this,(FRHICommandListBase *)&local_res8,(wchar_t *)param_1,
                     (EPixelFormat)this->PaticlePositonTextureName);
  if ((FRHITexture *)pTVar1 != TVar6.Reference) {
    pFVar3 = pTVar1->Reference;
    pTVar1->Reference = (FRHITexture *)(TVar6.Reference)->_padding_;
    (TVar6.Reference)->_padding_ = 0;
    if (pFVar3 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  pTVar2 = &this->VelocityTextureRHI;
  if ((this->VelocityTextureRHI).Reference != (FRHITexture *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsValidRef(VelocityTextureRHI)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                       ,0x173,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TVar6 = CreateStateTextureRHI
                    (this,(FRHICommandListBase *)&local_res18,(wchar_t *)param_1,
                     (EPixelFormat)this->PaticleVelocityTextureName);
  if ((FRHITexture *)pTVar2 != TVar6.Reference) {
    pFVar3 = pTVar2->Reference;
    pTVar2->Reference = (FRHITexture *)(TVar6.Reference)->_padding_;
    (TVar6.Reference)->_padding_ = 0;
    if (pFVar3 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
  }
  if (local_res18 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res18);
  }
  ::FName::FName(&local_res20,this->PaticlePositonTextureName,this->ParticleStateIndex + 1);
  ::FName::FName(local_28,this->PaticleVelocityTextureName,this->ParticleStateIndex + 1);
  FRHITexture::SetName(pTVar1->Reference,local_res20);
  FRHITexture::SetName(pTVar2->Reference,local_28[0]);
  (**(code **)(GDynamicRHI->_padding_ + 0x218))
            (GDynamicRHI,param_1,pTVar1->Reference,this->PaticlePositonTextureName);
  (**(code **)(GDynamicRHI->_padding_ + 0x218))
            (GDynamicRHI,param_1,pTVar2->Reference,this->PaticleVelocityTextureName);
  this->bTexturesCleared = false;
  return;
}

// ReleaseRHI @ 148128fa0

void __thiscall FParticleStateTextures::ReleaseRHI(FParticleStateTextures *this)

{
  FRHITexture *pFVar1;
  
  pFVar1 = (this->PositionTextureRHI).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    (this->PositionTextureRHI).Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->VelocityTextureRHI).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    (this->VelocityTextureRHI).Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
    return;
  }
  return;
}

// ResizeRHI @ 14812b810

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FParticleStateTextures::ResizeRHI
          (FParticleStateTextures *this,FRHICommandListImmediate *param_1,int param_2,int param_3)

{
  int iVar1;
  FRHITexture *pFVar2;
  longlong lVar3;
  FRHITransitionInfo_u_8 local_res8;
  TArrayView<FRHITransitionInfo_const_,int> local_a8;
  FRHITransitionInfo local_98;
  FRHITransitionInfo_u_8 local_68;
  TIntVector3<int>_u_0 local_60;
  undefined8 local_54;
  int local_4c;
  undefined8 local_48;
  int local_40;
  undefined8 local_3c;
  undefined8 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  
  (this->RenderTargetSize).field0_0x0._s_0.X = param_2;
  (this->RenderTargetSize).field0_0x0._s_0.Y = param_3;
  CreateStateTextureRHI
            (this,(FRHICommandListBase *)&local_res8,(wchar_t *)param_1,
             (EPixelFormat)this->PaticlePositonTextureName);
  CreateStateTextureRHI
            (this,(FRHICommandListBase *)&local_68,(wchar_t *)param_1,
             (EPixelFormat)this->PaticleVelocityTextureName);
  local_a8.ArrayNum = 1;
  local_98.field1_0x8 = local_res8;
  local_a8.DataPtr = &local_98;
  local_98._padding_._0_4_ = 0xffffffff;
  local_98._padding_._4_2_ = 0xffff;
  local_98.Type = Texture;
  local_98.AccessBefore = SRVMask;
  local_98.AccessAfter = CopyDest;
  local_98.Flags = None;
  local_98.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_a8,None);
  local_98.field1_0x8 = (FRHITransitionInfo_u_8)(this->PositionTextureRHI).Reference;
  local_a8.ArrayNum = 1;
  local_a8.DataPtr = &local_98;
  local_98._padding_._0_4_ = 0xffffffff;
  local_98._padding_._4_2_ = 0xffff;
  local_98.Type = Texture;
  local_98.AccessBefore = SRVMask;
  local_98.AccessAfter = CopySrc;
  local_98.Flags = None;
  local_98.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_a8,None);
  local_a8.ArrayNum = 1;
  local_98.field1_0x8 = local_68;
  local_a8.DataPtr = &local_98;
  local_98._padding_._0_4_ = 0xffffffff;
  local_98._padding_._4_2_ = 0xffff;
  local_98.Type = Texture;
  local_98.AccessBefore = SRVMask;
  local_98.AccessAfter = CopyDest;
  local_98.Flags = None;
  local_98.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_a8,None);
  local_98.field1_0x8 = (FRHITransitionInfo_u_8)(this->VelocityTextureRHI).Reference;
  local_a8.DataPtr = &local_98;
  local_98._padding_._0_4_ = 0xffffffff;
  local_98._padding_._4_2_ = 0xffff;
  local_98.Type = Texture;
  local_98.AccessBefore = SRVMask;
  local_98.AccessAfter = CopySrc;
  local_98.Flags = None;
  local_98.CommitInfo.bIsSet = false;
  local_a8.ArrayNum = 1;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_a8,None);
  local_54 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  local_4c = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  local_48 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  local_40 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  local_3c = 0;
  local_34 = 1;
  local_2c = 0;
  local_28 = 1;
  lVar3 = (**(code **)(((this->PositionTextureRHI).Reference)->_padding_ + 0x20))();
  iVar1 = *(int *)(lVar3 + 0x28);
  lVar3 = (**(code **)(((this->PositionTextureRHI).Reference)->_padding_ + 0x20))();
  local_60._s_0.X = *(int *)(lVar3 + 0x24);
  local_60._s_0.Z = 0;
  local_60._s_0.Y = iVar1;
  FRHICommandList::CopyTexture
            ((FRHICommandList *)param_1,(this->PositionTextureRHI).Reference,local_res8.Texture,
             (FRHICopyTextureInfo *)&local_60._s_0);
  FRHICommandList::CopyTexture
            ((FRHICommandList *)param_1,(this->VelocityTextureRHI).Reference,local_68.Texture,
             (FRHICopyTextureInfo *)&local_60._s_0);
  local_a8.ArrayNum = 1;
  local_98.field1_0x8.Resource = local_res8.Resource;
  local_a8.DataPtr = &local_98;
  local_98._padding_._0_4_ = 0xffffffff;
  local_98._padding_._4_2_ = 0xffff;
  local_98.Type = Texture;
  local_98.AccessBefore = CopyDest;
  local_98.AccessAfter = SRVMask;
  local_98.Flags = None;
  local_98.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_a8,None);
  local_98.field1_0x8 = (FRHITransitionInfo_u_8)(this->PositionTextureRHI).Reference;
  local_a8.ArrayNum = 1;
  local_a8.DataPtr = &local_98;
  local_98._padding_._0_4_ = 0xffffffff;
  local_98._padding_._4_2_ = 0xffff;
  local_98.Type = Texture;
  local_98.AccessBefore = CopySrc;
  local_98.AccessAfter = SRVMask;
  local_98.Flags = None;
  local_98.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_a8,None);
  local_98.field1_0x8.Resource = local_68.Resource;
  local_98._padding_._0_4_ = 0xffffffff;
  local_98._padding_._4_2_ = 0xffff;
  local_98.Type = Texture;
  local_98.AccessBefore = CopyDest;
  local_a8.ArrayNum = 1;
  local_a8.DataPtr = &local_98;
  local_98.AccessAfter = SRVMask;
  local_98.Flags = None;
  local_98.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_a8,None);
  local_98.field1_0x8 = (FRHITransitionInfo_u_8)(this->VelocityTextureRHI).Reference;
  local_a8.ArrayNum = 1;
  local_a8.DataPtr = &local_98;
  local_98._padding_._0_4_ = 0xffffffff;
  local_98._padding_._4_2_ = 0xffff;
  local_98.Type = Texture;
  local_98.AccessBefore = CopySrc;
  local_98.AccessAfter = SRVMask;
  local_98.Flags = None;
  local_98.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_a8,None);
  (**(code **)(this->_padding_ + 0x10))(this);
  pFVar2 = (this->PositionTextureRHI).Reference;
  if (pFVar2 != (FRHITexture *)local_res8.Resource) {
    (this->PositionTextureRHI).Reference = (FRHITexture *)local_res8;
    if ((FRHITexture *)local_res8.Resource != (FRHITexture *)0x0) {
      FRHIResource::AddRef(local_res8.Resource);
    }
    if (pFVar2 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
  }
  pFVar2 = (this->VelocityTextureRHI).Reference;
  if (pFVar2 != (FRHITexture *)local_68.Resource) {
    (this->VelocityTextureRHI).Reference = (FRHITexture *)local_68;
    if ((FRHITexture *)local_68.Resource != (FRHITexture *)0x0) {
      FRHIResource::AddRef(local_68.Resource);
    }
    if (pFVar2 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
  }
  if ((FRHITexture *)local_68.Resource != (FRHITexture *)0x0) {
    FRHIResource::Release(local_68.Resource);
  }
  if ((FRHITexture *)local_res8.Resource != (FRHITexture *)0x0) {
    FRHIResource::Release(local_res8.Resource);
  }
  return;
}

