// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// GetDisplayGamma @ 1488c2a00

float __thiscall
FTextureRenderTarget2DArrayResource::GetDisplayGamma(FTextureRenderTarget2DArrayResource *this)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001488c2a07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)(*(longlong *)this->_padding_ + 0x3e0))();
  return fVar1;
}

// GetSizeX @ 1488c4b00

uint __thiscall
FTextureRenderTarget2DArrayResource::GetSizeX(FTextureRenderTarget2DArrayResource *this)

{
  return this->Owner->SizeX;
}

// GetSizeXY @ 1488c4b70

TIntPoint<int> __thiscall
FTextureRenderTarget2DArrayResource::GetSizeXY(FTextureRenderTarget2DArrayResource *this)

{
  longlong lVar1;
  TIntPoint<int>_u_0 in_RDX;
  
  lVar1 = this->_padding_;
  *(undefined4 *)in_RDX = *(undefined4 *)(lVar1 + 0x158);
  *(undefined4 *)((longlong)in_RDX + 4) = *(undefined4 *)(lVar1 + 0x15c);
  return (TIntPoint<int>)in_RDX;
}

// GetSizeY @ 1488c4c10

uint __thiscall
FTextureRenderTarget2DArrayResource::GetSizeY(FTextureRenderTarget2DArrayResource *this)

{
  return this->Owner->SizeY;
}

// GetTextureRenderTarget2DArrayResource @ 1488c6450

FTextureRenderTarget2DArrayResource * __thiscall
FTextureRenderTarget2DArrayResource::GetTextureRenderTarget2DArrayResource
          (FTextureRenderTarget2DArrayResource *this)

{
  return this;
}

// InitRHI @ 1488c8690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FTextureRenderTarget2DArrayResource::InitRHI
          (FTextureRenderTarget2DArrayResource *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  UTextureRenderTarget2DArray *pUVar7;
  FRHIResource *pFVar8;
  longlong lVar9;
  code *pcVar10;
  bool bVar11;
  char cVar12;
  bool bVar13;
  TEventRef<unsigned_int> TVar14;
  UPackage *pUVar15;
  TRefCountPtr<FRHITexture> TVar16;
  TRefCountPtr<FRHIUnorderedAccessView> TVar17;
  UDeviceProfileManager *this_00;
  UDeviceProfile *this_01;
  UTextureLODSettings *this_02;
  FTextureLODGroup *pFVar18;
  FRHIResource *pFVar19;
  FWriteBuffer *pFVar20;
  uint uVar21;
  ETextureCreateFlags EVar22;
  ETextureCreateFlags EVar23;
  undefined1 auStack_228 [32];
  ulonglong local_208;
  longlong local_200;
  FSamplerStateInitializerRHI local_1f0;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  int local_1a8;
  int iStack_1a4;
  longlong local_1a0;
  undefined1 local_198 [16];
  undefined1 *local_188;
  longlong lStack_180;
  FName local_178;
  FName local_170;
  FName local_168 [2];
  FRHITextureDesc local_158;
  wchar_t *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 *local_d8;
  longlong local_d0;
  FRHITextureDesc local_c8;
  wchar_t *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_228;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    TVar14 = (TEventRef<unsigned_int>)&local_1c8;
    local_1c8 = 0;
  }
  else {
    local_1d0 = 0;
    TVar14 = FStringTrace::GetNameRef(&local_178);
  }
  uVar4 = *(undefined8 *)TVar14;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_1b8 = 0;
    TVar14 = (TEventRef<unsigned_int>)&local_1b8;
  }
  else {
    local_1c0 = 0;
    TVar14 = FStringTrace::GetNameRef(&local_170);
  }
  uVar5 = *(undefined8 *)TVar14;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_1b0 = 0;
    TVar14 = (TEventRef<unsigned_int>)&local_1b0;
  }
  else {
    pUVar15 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this->Owner);
    local_1a0 = pUVar15->_padding_;
    TVar14 = FStringTrace::GetNameRef(local_168);
  }
  uVar6 = *(undefined8 *)TVar14;
  bVar11 = false;
  if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_d8);
    bVar11 = true;
    *local_d8 = (int)uVar4;
    local_d8[1] = (int)uVar5;
    local_d8[2] = (int)uVar6;
    *(undefined8 *)(local_d0 + 0x28) = *(undefined8 *)(local_d0 + 0x20);
  }
  pUVar7 = this->Owner;
  if (((0 < pUVar7->SizeX) && (0 < pUVar7->SizeY)) && (0 < pUVar7->Slices)) {
    cVar12 = (**(code **)(pUVar7->_padding_ + 0x3d8))();
    pUVar7 = this->Owner;
    local_158.ExtData = 0;
    local_158.Depth = 1;
    local_158.NumSamples = '\x01';
    local_158.Dimension = Texture2DArray;
    uVar21 = -(uint)(cVar12 != '\0') & 0x10;
    local_158.UAVFormat = PF_Unknown;
    local_158.FastVRAMPercentage = 0xff;
    local_158.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
    local_158.AliasableFormats.ArrayNum = 0;
    local_158.AliasableFormats.ArrayMax = 1;
    EVar22 = (ulonglong)uVar21 | UAV;
    if ((pUVar7->_padding_ & 0x200000000) == 0) {
      EVar22 = (ulonglong)uVar21;
    }
    local_100 = 0x70;
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 0;
    EVar23 = EVar22 | TargetArraySlicesIndependently;
    if ((pUVar7->_padding_ & 0x400000000) == 0) {
      EVar23 = EVar22;
    }
    local_158.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
    local_108 = L"FTextureRenderTarget2DArrayResource";
    local_1a8 = pUVar7->SizeX;
    iStack_1a4 = pUVar7->SizeY;
    local_158.Extent.field0_0x0._0_4_ = pUVar7->SizeX;
    local_158.Extent.field0_0x0._4_4_ = pUVar7->SizeY;
    local_158.ArraySize = (ushort)pUVar7->Slices;
    local_158.Format = (**(code **)(pUVar7->_padding_ + 0x3d0))(pUVar7);
    local_158.NumMips = '\x01';
    local_158.ClearValue.ColorBinding = EColorBound;
    local_158.Flags = EVar23 | (ShaderResource|RenderTargetable);
    local_158.ClearValue.Value.DSValue =
         (DSVAlue)*(undefined8 *)&(this->Owner->ClearColor).field0_0x0;
    local_158.ClearValue.Value._8_8_ =
         *(undefined8 *)((longlong)&(this->Owner->ClearColor).field0_0x0 + 8);
    FRHITextureDesc::FRHITextureDesc(&local_c8,&local_158);
    local_78 = local_108;
    local_70 = (undefined4)local_100;
    local_6c = local_100._4_4_;
    local_68 = local_f8;
    local_60 = local_f0;
    local_58 = local_e8;
    if (local_158.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_158.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    TVar16 = FRHICommandListBase::CreateTexture(param_1,(FRHITextureCreateDesc *)local_198);
    plVar1 = &this->_padding_;
    if ((FRHITexture *)plVar1 != TVar16.Reference) {
      pFVar8 = (FRHIResource *)*plVar1;
      *plVar1 = (TVar16.Reference)->_padding_;
      (TVar16.Reference)->_padding_ = 0;
      if (pFVar8 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar8);
      }
    }
    if ((FRHIResource *)local_198._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_198._0_8_);
    }
    if (local_c8.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_c8.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    if ((EVar23 >> 0x11 & 1) != 0) {
      lStack_180 = 0;
      local_188 = &DAT_100000003;
      FRHIViewDesc::FTextureUAV::FInitializer::SetDimensionFromTexture
                ((FInitializer *)&local_188,(FRHITexture *)*plVar1);
      TVar17 = FRHICommandListBase::CreateUnorderedAccessView
                         (param_1,(FRHITexture *)(local_198 + 8),(FInitializer *)*plVar1);
      TRefCountPtr<FRHIUnorderedAccessView>::operator=
                (&this->UnorderedAccessViewRHI,
                 (TRefCountPtr<FRHIUnorderedAccessView> *)TVar17.Reference);
      if ((FRHIResource *)local_198._8_8_ != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)local_198._8_8_);
      }
    }
    FRHICommandListBase::UpdateTextureReference
              (param_1,*(FRHITextureReference **)(this->Owner->_padding_ + 0x20),
               (FRHITexture *)*plVar1);
    pFVar8 = (FRHIResource *)*plVar1;
    pFVar19 = (FRHIResource *)this->_padding_;
    if (pFVar19 != pFVar8) {
      this->_padding_ = (longlong)pFVar8;
      if (pFVar8 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(pFVar8);
      }
      if (pFVar19 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar19);
      }
    }
    FDeferredUpdateResource::AddToDeferredUpdateList
              ((FDeferredUpdateResource *)&this->_padding_,true);
  }
  this_00 = UDeviceProfileManager::Get(false);
  this_01 = UDeviceProfileManager::GetActiveProfile(this_00);
  this_02 = UDeviceProfile::GetTextureLODSettings(this_01);
  pFVar18 = UTextureLODSettings::GetTextureLODGroup
                      (this_02,(uint)*(byte *)((longlong)&this->Owner->_padding_ + 7));
  local_1f0.MaxAnisotropy = pFVar18->MaxAniso;
  cVar12 = *(char *)((longlong)&this->Owner->_padding_ + 1);
  if (cVar12 == '\0') {
    local_1f0.Filter.Value = '\0';
  }
  else if (cVar12 == '\x01') {
    local_1f0.Filter.Value = '\x01';
  }
  else if (cVar12 == '\x02') {
    local_1f0.Filter.Value = '\x02';
  }
  else {
    bVar2 = *(byte *)((longlong)&this->Owner->_padding_ + 7);
    iVar3 = (this_02->TextureLODGroups).ArrayNum;
    if (iVar3 <= (int)(uint)bVar2) {
      local_208 = (ulonglong)bVar2;
      local_200 = (longlong)iVar3;
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    local_1f0.Filter.Value =
         *(uchar *)((this_02->TextureLODGroups).AllocatorInstance.Data + (ulonglong)bVar2 * 0x60 + 1
                   );
  }
  local_1f0.AddressU.Value = '\0';
  local_1f0.AddressV.Value = '\0';
  local_1f0.AddressW.Value = '\0';
  local_1f0.MipBias = 0.0;
  local_1f0.MinMipLevel = 0.0;
  local_1f0.MaxMipLevel = 3.4028235e+38;
  local_1f0.BorderColor = 0;
  local_1f0.SamplerComparisonFunction.Value = '\0';
  pFVar19 = (FRHIResource *)FTexture::GetOrCreateSamplerState(&local_1f0);
  pFVar8 = (FRHIResource *)this->_padding_;
  if (pFVar8 != pFVar19) {
    this->_padding_ = (longlong)pFVar19;
    if (pFVar19 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(pFVar19);
    }
    if (pFVar8 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar8);
    }
  }
  if (bVar11) {
    lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar9 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar20 = *(FWriteBuffer **)(lVar9 + 0x20);
    if ((int)pFVar20 - *(int *)&pFVar20->Cursor < 1) {
      pFVar20 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar20->Cursor = '\n';
    pFVar20->Cursor = pFVar20->Cursor + 1;
    pFVar20->Committed = pFVar20->Cursor;
  }
  return;
}

// ReadPixels @ 1488d46c0

bool __thiscall
FTextureRenderTarget2DArrayResource::ReadPixels
          (FTextureRenderTarget2DArrayResource *this,
          TArray<FColor,TSizedDefaultAllocator<32>_> *param_1,int param_2,TIntRect<int> *param_3)

{
  bool bVar1;
  TIntRect<int>_u_0 local_58;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined2 local_38;
  undefined2 uStack_36;
  int iStack_34;
  FReadSurfaceDataFlags local_28;
  
  local_58._s_0.Min.field0_0x0 = (TIntPoint<int>)(param_3->field0_0x0)._s_0.Min.field0_0x0;
  local_48 = 6;
  uStack_40 = CONCAT31(uStack_40._1_3_,1);
  uStack_3c = 0x467a0000;
  local_38 = 0;
  local_28.MaxDepthRange = 16000.0;
  local_28._8_4_ = uStack_40;
  local_58._s_0.Max.field0_0x0 = (TIntPoint<int>)(param_3->field0_0x0)._s_0.Max.field0_0x0;
  local_28._16_8_ = (ulonglong)CONCAT42(param_2,uStack_36) << 0x10;
  local_28.CubeFace = CubeFace_MAX;
  local_28.CompressionMode = RCM_UNorm;
  local_28.GPUIndex = 0;
  iStack_34 = param_2;
  bVar1 = FRenderTarget::ReadPixels
                    ((FRenderTarget *)&this->_padding_,param_1,&local_28,
                     (TIntRect<int> *)&local_58._s_0);
  return bVar1;
}

// ReadPixels @ 1488d4730

bool __thiscall
FTextureRenderTarget2DArrayResource::ReadPixels
          (FTextureRenderTarget2DArrayResource *this,
          TArray<FFloat16Color,TSizedDefaultAllocator<32>_> *param_1,int param_2,
          TIntRect<int> *param_3)

{
  bool bVar1;
  TIntRect<int>_u_0 local_58;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined2 local_38;
  undefined2 uStack_36;
  int iStack_34;
  FReadSurfaceDataFlags local_28;
  
  local_58._s_0.Min.field0_0x0 = (TIntPoint<int>)(param_3->field0_0x0)._s_0.Min.field0_0x0;
  local_48 = 6;
  uStack_40 = CONCAT31(uStack_40._1_3_,1);
  uStack_3c = 0x467a0000;
  local_38 = 0;
  local_28.MaxDepthRange = 16000.0;
  local_28._8_4_ = uStack_40;
  local_58._s_0.Max.field0_0x0 = (TIntPoint<int>)(param_3->field0_0x0)._s_0.Max.field0_0x0;
  local_28._16_8_ = (ulonglong)CONCAT42(param_2,uStack_36) << 0x10;
  local_28.CubeFace = CubeFace_MAX;
  local_28.CompressionMode = RCM_UNorm;
  local_28.GPUIndex = 0;
  iStack_34 = param_2;
  bVar1 = FRenderTarget::ReadFloat16Pixels
                    ((FRenderTarget *)&this->_padding_,param_1,&local_28,
                     (TIntRect<int> *)&local_58._s_0);
  return bVar1;
}

// ReleaseRHI @ 1488d5d60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FTextureRenderTarget2DArrayResource::ReleaseRHI(FTextureRenderTarget2DArrayResource *this)

{
  FRHITextureReference *pFVar1;
  FRHIResource *this_00;
  code *pcVar2;
  bool bVar3;
  
  FTexture::ReleaseRHI((FTexture *)this);
  pFVar1 = *(FRHITextureReference **)(this->Owner->_padding_ + 0x20);
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FRHICommandListBase::UpdateTextureReference
            ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,pFVar1,(FRHITexture *)0x0)
  ;
  this_00 = (FRHIResource *)this->_padding_;
  if (this_00 != (FRHIResource *)0x0) {
    this->_padding_ = 0;
    FRHIResource::Release(this_00);
  }
  if (this->_padding_ != 0) {
    *(longlong *)(this->_padding_ + 8) = this->_padding_;
  }
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    *(longlong *)this->_padding_ = this->_padding_;
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// UpdateDeferredResource @ 1488ea550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */

void __thiscall
FTextureRenderTarget2DArrayResource::UpdateDeferredResource
          (FTextureRenderTarget2DArrayResource *this,FRHICommandListImmediate *param_1,bool param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 this_00 [8];
  TEventRef<unsigned_int> TVar5;
  UPackage *pUVar6;
  uint *puVar7;
  longlong lVar8;
  TRefCountPtr<IPooledRenderTarget> TVar9;
  FRDGTexture *pFVar10;
  FWriteBuffer *pFVar11;
  undefined1 auStackY_8b8 [32];
  longlong local_888 [2];
  undefined1 local_878 [8];
  FRDGTextureClearInfo local_870;
  FRDGEventName local_838;
  FRDGBuilder local_818;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_8b8;
  local_878 = (undefined1  [8])param_1;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    TVar5 = (TEventRef<unsigned_int>)local_888;
    local_888[0] = 0;
  }
  else {
    local_888[0] = 0;
    TVar5 = FStringTrace::GetNameRef((FName *)&local_838);
  }
  uVar1 = *(undefined8 *)TVar5;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_888[0] = 0;
    TVar5 = (TEventRef<unsigned_int>)local_888;
  }
  else {
    local_888[0] = 0;
    TVar5 = FStringTrace::GetNameRef((FName *)&local_838);
  }
  uVar2 = *(undefined8 *)TVar5;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_888[0] = 0;
    TVar5 = (TEventRef<unsigned_int>)local_888;
  }
  else {
    pUVar6 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this->_padding_);
    local_888[0] = pUVar6->_padding_;
    TVar5 = FStringTrace::GetNameRef((FName *)&local_838);
  }
  uVar3 = *(undefined8 *)TVar5;
  bVar4 = false;
  if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_838);
    bVar4 = true;
    *(int *)&((TIntRect<int> *)local_838.EventFormat)->field0_0x0 = (int)uVar1;
    *(int *)((longlong)&((TIntRect<int> *)local_838.EventFormat)->field0_0x0 + 4) = (int)uVar2;
    *(int *)((longlong)&((TIntRect<int> *)local_838.EventFormat)->field0_0x0 + 8) = (int)uVar3;
    *(undefined8 *)(local_838.FormattedEventName.Data.AllocatorInstance.Data + 0x28) =
         *(undefined8 *)(local_838.FormattedEventName.Data.AllocatorInstance.Data + 0x20);
  }
  if (this->_padding_ != 0) {
    *(longlong *)(this->_padding_ + 8) = this->_padding_;
  }
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    *(longlong *)this->_padding_ = this->_padding_;
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  if (param_2) {
    puVar7 = (uint *)(**(code **)(*(longlong *)this[-1]._padding_ + 0x20))();
    this_00 = local_878;
    if ((*puVar7 >> 0x18 & 1) == 0) {
      local_838.EventFormat = (wchar_t *)&local_870;
      local_838.FormattedEventName.Data.AllocatorInstance.Data._0_4_ = 1;
      local_870.Viewport.field0_0x0._0_6_ = 0xffffffffffff;
      local_870.ClearColor.TypedValue.field0_0x0._0_1_ = 1;
      local_870.ClearColor.TypedValue.field0_0x0._s_0.G = 0.0;
      local_870.ClearColor.TypedValue.field0_0x0._s_0.B = 5.73972e-42;
      local_870.ClearColor.TypedValue.field0_0x0._12_1_ = 0;
      local_870.NumSlices = local_870.NumSlices & 0xffffff00;
      local_870.Viewport.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>)this[-1]._padding_;
      FRHIComputeCommandList::Transition
                ((FRHIComputeCommandList *)local_878,
                 (TArrayView<FRHITransitionInfo_const_,int> *)&local_838,None);
      ClearRenderTarget((FRHICommandList *)this_00,(FRHITexture *)this[-1]._padding_,0,0);
      local_870.Viewport.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>)this[-1]._padding_;
      local_838.FormattedEventName.Data.AllocatorInstance.Data._0_4_ = 1;
      local_838.EventFormat = (wchar_t *)&local_870;
      local_870.Viewport.field0_0x0._0_6_ = 0xffffffffffff;
      local_870.ClearColor.TypedValue.field0_0x0._0_1_ = 1;
      local_870.ClearColor.TypedValue.field0_0x0._s_0.G = 5.73972e-42;
      local_870.ClearColor.TypedValue.field0_0x0._s_0.B = 1.56945e-43;
      local_870.ClearColor.TypedValue.field0_0x0._12_1_ = 0;
      local_870.NumSlices = local_870.NumSlices & 0xffffff00;
      FRHIComputeCommandList::Transition
                ((FRHIComputeCommandList *)this_00,
                 (TArrayView<FRHITransitionInfo_const_,int> *)&local_838,None);
    }
    else {
      local_870.ClearColor.bIsSet = false;
      local_870.Viewport.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
      local_870.Viewport.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
      local_870.FirstSliceIndex = 0;
      local_870.FirstMipIndex = 0;
      local_870.NumMips = 1;
      lVar8 = (**(code **)(*(longlong *)this[-1]._padding_ + 0x20))();
      local_838.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_838.FormattedEventName.Data.ArrayNum = 0;
      local_838.FormattedEventName.Data.ArrayMax = 0;
      local_838.EventFormat = L"";
      local_870.NumSlices = (uint)*(ushort *)(lVar8 + 0x2e);
      FRDGBuilder::FRDGBuilder
                (&local_818,(FRHICommandListImmediate *)local_878,&local_838,None,
                 GMaxRHIShaderPlatform);
      TVar9 = CreateRenderTarget((FRHITexture *)local_878,(wchar_t *)this[-1]._padding_);
      pFVar10 = FRDGBuilder::RegisterExternalTexture
                          (&local_818,(TRefCountPtr<IPooledRenderTarget> *)TVar9.Reference,None);
      if (local_878 != (undefined1  [8])0x0) {
        (**(code **)(*(longlong *)local_878 + 0x38))();
      }
      AddClearRenderTargetPass(&local_818,pFVar10,&local_870);
      FRDGBuilder::Execute(&local_818);
      FRDGBuilder::~FRDGBuilder(&local_818);
    }
  }
  if (bVar4) {
    lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar8 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar11 = *(FWriteBuffer **)(lVar8 + 0x20);
    if ((int)pFVar11 - *(int *)&pFVar11->Cursor < 1) {
      pFVar11 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar11->Cursor = '\n';
    pFVar11->Cursor = pFVar11->Cursor + 1;
    pFVar11->Committed = pFVar11->Cursor;
  }
  return;
}

