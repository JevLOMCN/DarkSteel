// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// FTexture3DResource @ 148443d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FTexture3DResource * __thiscall
FTexture3DResource::FTexture3DResource
          (FTexture3DResource *this,UVolumeTexture *param_1,FStreamableRenderResourceState *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  FStreamableRenderResourceState *pFVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FTexturePlatformData *pFVar10;
  FString *pFVar11;
  FTexture3DResource *pFVar12;
  undefined8 *puVar13;
  long64 lVar14;
  ulong64 uVar15;
  longlong lVar16;
  uint uVar17;
  undefined1 auStackY_258 [32];
  uint local_218;
  uint local_214;
  FStreamableRenderResourceState *local_210;
  uint local_208;
  undefined4 uStack_204;
  FScriptContainerElement *local_1f8;
  int iStack_1f0;
  undefined4 uStack_1ec;
  TStringView<wchar_t> local_1e8;
  FString local_1d8;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  FRHITextureDesc local_1a8;
  undefined *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  FRHITextureDesc local_128;
  FRHITextureDesc local_d8;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_258;
  bVar8 = false;
  local_218 = 0;
  local_210 = param_2;
  pFVar10 = UVolumeTexture::GetPlatformData(param_1);
  FStreamableTextureResource::FStreamableTextureResource
            ((FStreamableTextureResource *)this,(UTexture *)param_1,pFVar10,param_2,false);
  this->ProxiedResource = (FTexture3DResource *)0x0;
  this->_padding_ = (longlong)&___7FTexture3DResource__6B_;
  bVar1 = (param_2->field0_0x0)._s_0.NumRequestedLODs;
  bVar2 = (param_2->field0_0x0)._s_0.MaxNumLODs;
  (this->InitialData)._padding_ = (longlong)&___7FVolumeTextureBulkData__6B_;
  (this->InitialData).FirstMipIdx = (uint)bVar2 - (uint)bVar1;
  (this->InitialData).MipData[0] = (void *)0x0;
  (this->InitialData).MipData[1] = (void *)0x0;
  (this->InitialData).MipData[2] = (void *)0x0;
  (this->InitialData).MipData[3] = (void *)0x0;
  (this->InitialData).MipData[4] = (void *)0x0;
  (this->InitialData).MipData[5] = (void *)0x0;
  (this->InitialData).MipData[6] = (void *)0x0;
  (this->InitialData).MipData[7] = (void *)0x0;
  (this->InitialData).MipData[8] = (void *)0x0;
  (this->InitialData).MipData[9] = (void *)0x0;
  (this->InitialData).MipData[10] = (void *)0x0;
  (this->InitialData).MipData[0xb] = (void *)0x0;
  (this->InitialData).MipData[0xc] = (void *)0x0;
  (this->InitialData).MipData[0xd] = (void *)0x0;
  (this->InitialData).MipData[0xe] = (void *)0x0;
  (this->InitialData).MipSize[0] = 0;
  (this->InitialData).MipSize[1] = 0;
  (this->InitialData).MipSize[2] = 0;
  (this->InitialData).MipSize[3] = 0;
  (this->InitialData).MipSize[4] = 0;
  (this->InitialData).MipSize[5] = 0;
  (this->InitialData).MipSize[6] = 0;
  (this->InitialData).MipSize[7] = 0;
  (this->InitialData).MipSize[8] = 0;
  (this->InitialData).MipSize[9] = 0;
  (this->InitialData).MipSize[10] = 0;
  (this->InitialData).MipSize[0xb] = 0;
  (this->InitialData).MipSize[0xc] = 0;
  (this->InitialData).MipSize[0xd] = 0;
  (this->InitialData).MipSize[0xe] = 0;
  bVar1 = (param_2->field0_0x0)._s_0.MaxNumLODs;
  bVar2 = (param_2->field0_0x0)._s_0.NumRequestedLODs;
  pFVar10 = (FTexturePlatformData *)this->_padding_;
  uVar17 = (uint)bVar1 - (uint)bVar2;
  if (pFVar10 != (FTexturePlatformData *)0x0) {
    pFVar11 = UObjectBaseUtility::GetPathName
                        ((UObjectBaseUtility *)param_1,&local_1d8,(UObject *)0x0);
    local_1f8 = (pFVar11->Data).AllocatorInstance.Data;
    iVar3 = (pFVar11->Data).ArrayNum;
    iStack_1f0 = iVar3 + -1;
    if (iVar3 == 0) {
      iStack_1f0 = 0;
    }
    lVar16 = (longlong)(int)(uint)bVar1 - (longlong)(int)(uint)bVar2;
    bVar8 = true;
    local_1e8._12_4_ = uStack_1ec;
    local_1e8.Size = iStack_1f0;
    local_1e8.DataPtr = (wchar_t *)local_1f8;
    bVar7 = FTexturePlatformData::TryLoadMipsWithSizes
                      (pFVar10,(local_210->field0_0x0)._s_0.AssetLODBias + uVar17,
                       (void **)((longlong)this + lVar16 * 8 + 0xd0),
                       (long64 *)((longlong)this + lVar16 * 8 + 0x148),&local_1e8);
    if (bVar7) {
      bVar7 = true;
      goto LAB_148443f36;
    }
  }
  bVar7 = false;
LAB_148443f36:
  if ((bVar8) && (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  pFVar6 = local_210;
  if (((bVar7) && (GRHIGlobals.UseTexture3DBulkData != false)) &&
     ((int)uVar17 < (int)(uint)(local_210->field0_0x0)._s_0.MaxNumLODs)) {
    lVar16 = ((ulonglong)bVar1 - (ulonglong)bVar2) * 8;
    do {
      lVar4 = this->_padding_;
      uVar9 = 0;
      if ((int)uVar17 < *(int *)(lVar4 + 0x20)) {
        uVar9 = ~uVar17 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          pFVar12 = (FTexture3DResource *)(*pcVar5)();
          return pFVar12;
        }
      }
      lVar4 = *(longlong *)(lVar16 + *(longlong *)(lVar4 + 0x18));
      local_218 = 0;
      local_210 = (FStreamableRenderResourceState *)((ulonglong)local_210 & 0xffffffff00000000);
      local_214 = 0;
      CalcMipMapExtent3D((uint)this->_padding_,*(uint *)((longlong)&this->_padding_ + 4),
                         (uint)this->_padding_,*(EPixelFormat *)((longlong)&this->_padding_ + 4),
                         (uint)*(byte *)((longlong)&this->_padding_ + 3) -
                         (uint)*(byte *)((longlong)&this->_padding_ + 6),&local_218,
                         (uint *)&local_210,&local_214);
      local_1a8.Flags = None;
      local_1a8.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
      local_1a8.ClearValue._0_8_ = 1;
      local_158 = &u_Temp;
      local_208 = local_218;
      uStack_204 = local_210._0_4_;
      local_1a8.Extent.field0_0x0._s_0.Y = local_210._0_4_;
      local_1a8.Extent.field0_0x0._s_0.X = local_218;
      local_1a8.Depth = (ushort)local_214;
      local_1a8.Format = *(EPixelFormat *)((longlong)&this->_padding_ + 4);
      local_1a8.ClearValue.Value._4_8_ = 0;
      local_1a8.ClearValue.Value.Color[3] = 0.0;
      local_1a8.ExtData = 0;
      local_1a8.ArraySize = 1;
      local_1a8.NumMips = '\x01';
      local_1a8.NumSamples = '\x01';
      local_1a8.Dimension = Texture3D;
      local_1a8.UAVFormat = PF_Unknown;
      local_1a8.FastVRAMPercentage = 0xff;
      local_1a8.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0
      ;
      local_1a8.AliasableFormats.ArrayNum = 0;
      local_1a8.AliasableFormats.ArrayMax = 1;
      local_150 = 0;
      local_148 = 0;
      local_140 = 0;
      local_138 = 0;
      FRHITextureDesc::FRHITextureDesc(&local_d8,&local_1a8);
      local_88 = local_158;
      local_80 = (undefined4)local_150;
      local_7c = local_150._4_4_;
      local_78 = local_148;
      local_70 = local_140;
      local_68 = local_138;
      if (local_1a8.AliasableFormats.AllocatorInstance.SecondaryData !=
          (ForElementType<EPixelFormat>)0x0) {
        FMemory::Free((void *)local_1a8.AliasableFormats.AllocatorInstance.SecondaryData);
      }
      local_128.NumMips = *(uchar *)((longlong)&this->_padding_ + 6);
      local_128.Flags = this->_padding_;
      local_128.ExtData = *(uint *)(this->_padding_ + 0x10);
      local_128.Dimension = local_d8.Dimension;
      local_128.Format = local_d8.Format;
      local_128.UAVFormat = local_d8.UAVFormat;
      local_128.Extent.field0_0x0 = local_d8.Extent.field0_0x0;
      local_128.Depth = local_d8.Depth;
      local_128.ArraySize = local_d8.ArraySize;
      local_128.NumSamples = local_d8.NumSamples;
      local_128.ClearValue.Value.Color[3] = local_d8.ClearValue.Value.Color[3];
      local_128.FastVRAMPercentage = local_d8.FastVRAMPercentage;
      local_128.GPUMask.GPUMask = local_d8.GPUMask.GPUMask;
      local_128.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0
      ;
      local_128.AliasableFormats.ArrayNum = 0;
      local_128.AliasableFormats.ArrayMax = 1;
      local_128.ClearValue._0_8_ = local_d8.ClearValue._0_8_;
      local_128.ClearValue.Value._4_8_ = local_d8.ClearValue.Value._4_8_;
      local_d8.Flags = local_128.Flags;
      local_d8.ExtData = local_128.ExtData;
      local_d8.NumMips = local_128.NumMips;
      TArray<enum_EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::operator=
                (&local_128.AliasableFormats,&local_d8.AliasableFormats);
      if (local_d8.AliasableFormats.AllocatorInstance.SecondaryData !=
          (ForElementType<EPixelFormat>)0x0) {
        FMemory::Free((void *)local_d8.AliasableFormats.AllocatorInstance.SecondaryData);
      }
      bVar8 = FRHITextureDesc::Validate(&local_128,L"",false);
      if (bVar8) {
        puVar13 = (undefined8 *)
                  (**(code **)(GDynamicRHI->_padding_ + 0x178))(GDynamicRHI,local_58,&local_128,0);
        local_1c8 = *puVar13;
        uStack_1c0 = puVar13[1];
      }
      else {
        local_1b8 = 0;
        uStack_1b0 = 0;
        local_1c8 = 0;
        uStack_1c0 = 0;
      }
      if (5 < (byte)LogTexture._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTexture);
      }
      lVar14 = FBulkData::GetBulkDataSize((FBulkData *)(lVar4 + 0x20));
      uVar15 = CalcTextureMipMapSize3D
                         ((uint)this->_padding_,*(uint *)((longlong)&this->_padding_ + 4),
                          (uint)this->_padding_,*(EPixelFormat *)((longlong)&this->_padding_ + 4),
                          uVar17);
      if (lVar14 < (longlong)uVar15) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("BulkDataSize >= CalcMipSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\Texture3DResource.cpp"
                           ,0x68,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          pFVar12 = (FTexture3DResource *)(*pcVar5)();
          return pFVar12;
        }
      }
      if (*(longlong *)((longlong)(this->InitialData).MipSize + lVar16) != lVar14) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InitialData.GetMipSize()[MipIndex] == BulkDataSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\Texture3DResource.cpp"
                           ,0x6a,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          pFVar12 = (FTexture3DResource *)(*pcVar5)();
          return pFVar12;
        }
      }
      if (local_128.AliasableFormats.AllocatorInstance.SecondaryData !=
          (ForElementType<EPixelFormat>)0x0) {
        FMemory::Free((void *)local_128.AliasableFormats.AllocatorInstance.SecondaryData);
      }
      uVar17 = uVar17 + 1;
      lVar16 = lVar16 + 8;
    } while ((int)uVar17 < (int)(uint)(pFVar6->field0_0x0)._s_0.MaxNumLODs);
  }
  return this;
}

// FTexture3DResource @ 148444360

FTexture3DResource * __thiscall
FTexture3DResource::FTexture3DResource
          (FTexture3DResource *this,UVolumeTexture *param_1,FTexture3DResource *param_2)

{
  FStreamableRenderResourceState_u_0 local_res8;
  
  local_res8.Data = 0;
  FStreamableTextureResource::FStreamableTextureResource
            ((FStreamableTextureResource *)this,(UTexture *)param_1,
             (FTexturePlatformData *)param_2->_padding_,
             (FStreamableRenderResourceState *)&local_res8._s_0,false);
  this->ProxiedResource = param_2;
  this->_padding_ = (longlong)&___7FTexture3DResource__6B_;
  (this->InitialData)._padding_ = (longlong)&___7FVolumeTextureBulkData__6B_;
  (this->InitialData).FirstMipIdx = 0;
  (this->InitialData).MipData[0] = (void *)0x0;
  (this->InitialData).MipData[1] = (void *)0x0;
  (this->InitialData).MipData[2] = (void *)0x0;
  (this->InitialData).MipData[3] = (void *)0x0;
  (this->InitialData).MipData[4] = (void *)0x0;
  (this->InitialData).MipData[5] = (void *)0x0;
  (this->InitialData).MipData[6] = (void *)0x0;
  (this->InitialData).MipData[7] = (void *)0x0;
  (this->InitialData).MipData[8] = (void *)0x0;
  (this->InitialData).MipData[9] = (void *)0x0;
  (this->InitialData).MipData[10] = (void *)0x0;
  (this->InitialData).MipData[0xb] = (void *)0x0;
  (this->InitialData).MipData[0xc] = (void *)0x0;
  (this->InitialData).MipData[0xd] = (void *)0x0;
  (this->InitialData).MipData[0xe] = (void *)0x0;
  (this->InitialData).MipSize[0] = 0;
  (this->InitialData).MipSize[1] = 0;
  (this->InitialData).MipSize[2] = 0;
  (this->InitialData).MipSize[3] = 0;
  (this->InitialData).MipSize[4] = 0;
  (this->InitialData).MipSize[5] = 0;
  (this->InitialData).MipSize[6] = 0;
  (this->InitialData).MipSize[7] = 0;
  (this->InitialData).MipSize[8] = 0;
  (this->InitialData).MipSize[9] = 0;
  (this->InitialData).MipSize[10] = 0;
  (this->InitialData).MipSize[0xb] = 0;
  (this->InitialData).MipSize[0xc] = 0;
  (this->InitialData).MipSize[0xd] = 0;
  (this->InitialData).MipSize[0xe] = 0;
  return this;
}

// CreatePartiallyResidentTexture @ 14845e670

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FTexture3DResource::CreatePartiallyResidentTexture
          (FTexture3DResource *this,FRHICommandListBase *param_1)

{
  FRHIResource *this_00;
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\Texture3DResource.cpp"
                     ,0xbf,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_00 = (FRHIResource *)this->_padding_;
  if (this_00 != (FRHIResource *)0x0) {
    this->_padding_ = 0;
    FRHIResource::Release(this_00);
    return;
  }
  return;
}

// CreateTexture @ 148460e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FTexture3DResource::CreateTexture(FTexture3DResource *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  FRHIResource *this_00;
  code *pcVar9;
  undefined4 uVar10;
  bool bVar11;
  int iVar12;
  FRHITextureCreateDesc *pFVar13;
  TRefCountPtr<FRHITexture> TVar14;
  uint uVar15;
  wchar_t *pwVar16;
  void **ppvVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  long64 *plVar22;
  undefined1 auStackY_208 [32];
  FUpdateTextureRegion3D local_198;
  undefined1 local_170 [32];
  int local_150;
  FRHITextureDesc local_148;
  wchar_t *local_f8;
  ERHIAccess local_f0;
  ERHITextureInitAction local_ec;
  FResourceBulkDataInterface *local_e8;
  FName local_e0;
  FName local_d8;
  FRHITextureCreateDesc local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  uVar4 = (this->InitialData).FirstMipIdx;
  uVar20 = (ulonglong)(int)uVar4;
  bVar2 = *(byte *)((longlong)&this->_padding_ + 3);
  lVar21 = *(longlong *)(this->_padding_ + 0x18) +
           (ulonglong)*(byte *)((longlong)&this->_padding_ + 4) * 8;
  uVar15 = 0;
  if ((int)uVar4 < (int)(uint)bVar2) {
    uVar15 = ~uVar4 >> 0x1f;
  }
  local_170._16_8_ = param_1;
  if ((uVar15 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  lVar8 = *(longlong *)(lVar21 + uVar20 * 8);
  ::FName::ToString((FName *)((longlong)&this->_padding_ + 4),(FString *)(local_170 + 0x18));
  pwVar16 = L"";
  if (local_150 != 0) {
    pwVar16 = (wchar_t *)local_170._24_8_;
  }
  pFVar13 = FRHITextureCreateDesc::Create3D
                      (&local_c8,pwVar16,(uint)*(ushort *)(lVar8 + 0x48),
                       (uint)*(ushort *)(lVar8 + 0x4a),(uint)*(ushort *)(lVar8 + 0x4c),
                       *(EPixelFormat *)((longlong)&this->_padding_ + 4));
  *(undefined1 *)&pFVar13->_padding_ = *(undefined1 *)((longlong)&this->_padding_ + 6);
  pFVar13->_padding_ = this->_padding_;
  *(undefined4 *)&pFVar13->_padding_ = *(undefined4 *)(this->_padding_ + 0x10);
  pFVar13->ClassName = NAME_FTexture3DResource;
  uVar10 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  (pFVar13->OwnerName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->_padding_;
  (pFVar13->OwnerName).Number = uVar10;
  FRHITextureDesc::FRHITextureDesc(&local_148,(FRHITextureDesc *)pFVar13);
  local_f8 = pFVar13->DebugName;
  local_f0 = pFVar13->InitialState;
  local_ec = pFVar13->InitAction;
  local_e8 = pFVar13->BulkData;
  local_e0 = pFVar13->ClassName;
  local_d8 = pFVar13->OwnerName;
  if ((void *)local_c8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_c8._padding_);
  }
  if (GRHIGlobals.UseTexture3DBulkData != false) {
    FVolumeTextureBulkData::MergeMips
              (&this->InitialData,(uint)*(byte *)((longlong)&this->_padding_ + 3));
    local_e8 = (FResourceBulkDataInterface *)&this->InitialData;
    local_ec = BulkData;
  }
  if (local_f0 == None) {
    local_f0 = RHIGetDefaultResourceState
                         (local_148.Flags,local_e8 != (FResourceBulkDataInterface *)0x0);
  }
  TVar14 = FRHICommandListBase::CreateTexture(param_1,(FRHITextureCreateDesc *)local_170);
  plVar1 = &this->_padding_;
  if ((FRHITexture *)plVar1 != TVar14.Reference) {
    this_00 = (FRHIResource *)*plVar1;
    *plVar1 = (TVar14.Reference)->_padding_;
    (TVar14.Reference)->_padding_ = 0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  if ((FRHIResource *)local_170._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_170._0_8_);
  }
  if ((FName)local_148.AliasableFormats.AllocatorInstance.SecondaryData != (FName)0x0) {
    FMemory::Free((void *)local_148.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  if ((wchar_t *)local_170._24_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_170._24_8_);
  }
  if (GRHIGlobals.UseTexture3DBulkData == false) {
    bVar3 = *(byte *)((longlong)&this->_padding_ + 4);
    iVar5 = GPixelFormats[bVar3].BlockSizeX;
    iVar6 = GPixelFormats[bVar3].BlockSizeY;
    iVar7 = GPixelFormats[bVar3].BlockBytes;
    if ((GPixelFormats[bVar3].BlockSizeZ != 1) &&
       (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<7332339464464760986>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\Texture3DResource.cpp"
                            ,0x9a,"GPixelFormats[PixelFormat].BlockSizeZ == 1"), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (*(char *)((longlong)&this->_padding_ + 6) != '\0') {
      plVar22 = (this->InitialData).MipSize + uVar20;
      do {
        uVar19 = (uint)uVar20;
        uVar15 = 0;
        if ((int)uVar19 < (int)(uint)bVar2) {
          uVar15 = ~uVar19 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        local_170._8_8_ = plVar22[-0xf];
        lVar8 = *(longlong *)((longlong)plVar22 + (lVar21 - (longlong)this) + -0x148);
        if ((uchar *)local_170._8_8_ != (uchar *)0x0) {
          local_198.Width = (uint)*(ushort *)(lVar8 + 0x48);
          local_198.Depth = (uint)*(ushort *)(lVar8 + 0x4c);
          local_198.Height = (uint)*(ushort *)(lVar8 + 0x4a);
          iVar18 = (int)((local_198.Width - 1) + iVar5) / iVar5;
          local_198.DestX = 0;
          local_198.DestY = 0;
          local_198.DestZ = 0;
          local_198.SrcX = 0;
          local_198.SrcY = 0;
          local_198.SrcZ = 0;
          iVar12 = (int)(iVar6 + -1 + local_198.Height) / iVar6;
          if ((*plVar22 < (longlong)(ulonglong)(local_198.Depth * iVar12 * iVar18 * iVar7)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("MipBytes >= UploadSize",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\Texture3DResource.cpp"
                                  ,0xae,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if (5 < (byte)LogTexture._0_1_) {
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTexture);
          }
          FRHICommandListBase::UpdateTexture3D
                    ((FRHICommandListBase *)local_170._16_8_,(FRHITexture *)this->_padding_,
                     -uVar4 + uVar19,&local_198,iVar18 * iVar7,iVar12 * iVar18 * iVar7,
                     (uchar *)local_170._8_8_);
        }
        uVar20 = (ulonglong)(uVar19 + 1);
        plVar22 = plVar22 + 1;
      } while ((int)(-uVar4 + uVar19 + 1) < (int)(uint)*(byte *)((longlong)&this->_padding_ + 6));
    }
    ppvVar17 = (this->InitialData).MipData;
    lVar21 = 0xf;
    do {
      if (*ppvVar17 != (void *)0x0) {
        FMemory::Free(*ppvVar17);
        *ppvVar17 = (void *)0x0;
      }
      ppvVar17[0xf] = (void *)0x0;
      ppvVar17 = ppvVar17 + 1;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
  }
  return;
}

// GetPlatformMipsSize @ 14846d420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

ulong64 __thiscall FTexture3DResource::GetPlatformMipsSize(FTexture3DResource *this,uint param_1)

{
  bool bVar1;
  FRHITextureCreateDesc *pFVar2;
  ulong64 *puVar3;
  ulong64 uVar4;
  undefined1 auStackY_148 [32];
  uint local_108;
  uint local_104;
  uint local_100 [2];
  undefined1 local_f8 [16];
  FRHITextureDesc local_e8;
  FRHITextureCreateDesc local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if ((this->_padding_ == 0) || (param_1 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    local_100[0] = 0;
    local_104 = 0;
    local_108 = 0;
    CalcMipMapExtent3D((uint)this->_padding_,*(uint *)((longlong)&this->_padding_ + 4),
                       (uint)this->_padding_,*(EPixelFormat *)((longlong)&this->_padding_ + 4),
                       *(byte *)((longlong)&this->_padding_ + 3) - param_1,local_100,&local_104,
                       &local_108);
    pFVar2 = FRHITextureCreateDesc::Create3D
                       (&local_98,L"Temp",local_100[0],local_104,local_108,
                        *(EPixelFormat *)((longlong)&this->_padding_ + 4));
    *(char *)&pFVar2->_padding_ = (char)param_1;
    pFVar2->_padding_ = this->_padding_;
    *(undefined4 *)&pFVar2->_padding_ = *(undefined4 *)(this->_padding_ + 0x10);
    FRHITextureDesc::FRHITextureDesc(&local_e8,(FRHITextureDesc *)pFVar2);
    if ((void *)local_98._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_98._padding_);
    }
    bVar1 = FRHITextureDesc::Validate(&local_e8,L"",false);
    if (bVar1) {
      puVar3 = (ulong64 *)
               (**(code **)(GDynamicRHI->_padding_ + 0x178))(GDynamicRHI,local_f8,&local_e8,0);
      uVar4 = *puVar3;
    }
    if (local_e8.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_e8.AliasableFormats.AllocatorInstance.SecondaryData);
    }
  }
  return uVar4;
}

// GetTexture3DResource @ 148470d00

FTexture3DResource * __thiscall FTexture3DResource::GetTexture3DResource(FTexture3DResource *this)

{
  return this;
}

// GetTexture3DResource @ 148470d10

FTexture3DResource * __thiscall FTexture3DResource::GetTexture3DResource(FTexture3DResource *this)

{
  return this;
}

// InitRHI @ 148476610

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FTexture3DResource::InitRHI(FTexture3DResource *this,FRHICommandListBase *param_1)

{
  FRHIResource *pFVar1;
  FRHIResource *pFVar2;
  
  if (this->ProxiedResource != (FTexture3DResource *)0x0) {
    pFVar1 = (FRHIResource *)this->ProxiedResource->_padding_;
    pFVar2 = (FRHIResource *)this->_padding_;
    if (pFVar2 != pFVar1) {
      this->_padding_ = (longlong)pFVar1;
      if (pFVar1 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(pFVar1);
      }
      if (pFVar2 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar2);
      }
    }
    FRHICommandListBase::UpdateTextureReference
              (param_1,(FRHITextureReference *)this->_padding_,(FRHITexture *)this->_padding_);
    pFVar1 = (FRHIResource *)this->_padding_;
    pFVar2 = (FRHIResource *)this->ProxiedResource->_padding_;
    if (pFVar1 != pFVar2) {
      this->_padding_ = (longlong)pFVar2;
      if (pFVar2 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(pFVar2);
      }
      if (pFVar1 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar1);
      }
    }
    pFVar1 = (FRHIResource *)this->_padding_;
    pFVar2 = (FRHIResource *)this->ProxiedResource->_padding_;
    if (pFVar1 != pFVar2) {
      this->_padding_ = (longlong)pFVar2;
      if (pFVar2 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(pFVar2);
      }
      if (pFVar1 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar1);
      }
    }
    return;
  }
  FStreamableTextureResource::InitRHI((FStreamableTextureResource *)this,param_1);
  return;
}

// IsProxy @ 1484786f0

bool __thiscall FTexture3DResource::IsProxy(FTexture3DResource *this)

{
  return this->ProxiedResource != (FTexture3DResource *)0x0;
}

