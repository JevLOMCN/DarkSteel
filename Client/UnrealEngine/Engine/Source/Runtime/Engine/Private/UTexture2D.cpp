// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 69

// CalcCumulativeLODSize @ 14728e9e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

int __thiscall UTexture2D::CalcCumulativeLODSize(UTexture2D *this,int param_1)

{
  byte bVar1;
  FVirtualTextureBuiltData *pFVar2;
  FTexturePlatformData *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulong64 uVar12;
  TConsoleVariableData<int> *pTVar13;
  FRHITextureCreateDesc *pFVar14;
  int *piVar15;
  IConsoleManager *pIVar16;
  longlong *plVar17;
  TConsoleVariableData<int> *pTVar18;
  uint uVar19;
  TEnumAsByte<EPixelFormat> *pTVar20;
  ETextureCreateFlags EVar21;
  ETextureCreateFlags EVar22;
  TConsoleVariableData<int> *pTVar23;
  uint uVar24;
  EPixelFormat EVar25;
  ulonglong uVar26;
  undefined1 auStack_2d8 [32];
  int iStack_2a4;
  uint uStack_2a0;
  TIntPoint<int>_u_0 TStack_290;
  FRHITextureDesc FStack_288;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  FRHITextureDesc FStack_208;
  undefined *puStack_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [16];
  FRHITextureDesc FStack_168;
  FRHITextureDesc FStack_118;
  FRHITextureCreateDesc FStack_c8;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  pTVar23 = (TConsoleVariableData<int> *)0x0;
  iVar9 = 0;
  uVar24 = 0;
  if (this->PrivatePlatformData == (FTexturePlatformData *)0x0) {
    return 0;
  }
  pFVar2 = this->PrivatePlatformData->VTData;
  if (pFVar2 != (FVirtualTextureBuiltData *)0x0) {
    uVar19 = pFVar2->TileSize + pFVar2->TileBorderSize * 2;
    if (pFVar2->NumLayers != 0) {
      pTVar20 = pFVar2->LayerTypes;
      uVar26 = (ulonglong)pFVar2->NumLayers;
      pTVar18 = pTVar23;
      do {
        uVar12 = CalculateImageBytes(uVar19,uVar19,1,pTVar20->Value);
        uVar24 = (int)pTVar18 + (int)uVar12;
        pTVar18 = (TConsoleVariableData<int> *)(ulonglong)uVar24;
        pTVar20 = pTVar20 + 1;
        uVar26 = uVar26 - 1;
      } while (uVar26 != 0);
    }
    uVar19 = pFVar2->TileSize;
    uVar7 = pFVar2->NumMips - param_1;
    if (0 < (int)uVar7) {
      pTVar23 = (TConsoleVariableData<int> *)(ulonglong)uVar7;
    }
    uVar8 = ((pFVar2->Width - 1) + uVar19) / uVar19 >> ((byte)pTVar23 & 0x1f);
    uVar7 = 1;
    if (1 < uVar8) {
      uVar7 = uVar8;
    }
    uVar8 = ((pFVar2->Height - 1) + uVar19) / uVar19 >> ((byte)pTVar23 & 0x1f);
    uVar19 = 1;
    if (1 < uVar8) {
      uVar19 = uVar8;
    }
    iVar9 = uVar19 * uVar7;
    while ((1 < uVar7 && (1 < uVar19))) {
      uVar7 = uVar7 + 1 >> 1;
      uVar19 = uVar19 + 1 >> 1;
      iVar9 = iVar9 + uVar19 * uVar7;
    }
    return iVar9 * uVar24;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar16 = IConsoleManager::Get();
    plVar17 = (longlong *)(**(code **)((longlong)*pIVar16 + 0xc0))(pIVar16,L"r.PRT.ReducedMemory",1)
    ;
    pTVar18 = pTVar23;
    if (plVar17 != (longlong *)0x0) {
      pTVar18 = (TConsoleVariableData<int> *)(**(code **)(*plVar17 + 0x68))(plVar17);
    }
    CVarReducedMode = pTVar18;
    _Init_thread_footer(&::_TSS0);
  }
  if ((CVarReducedMode == (TConsoleVariableData<int> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CVarReducedMode",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Texture2D.cpp"
                         ,0x362,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return iVar9;
  }
  bVar1 = *(byte *)((longlong)&this->_padding_ + 6);
  EVar21 = (ulonglong)((byte)~*(byte *)((longlong)&this->_padding_ + 4) >> 1 & 1) << 0x14 |
           (ulonglong)(bVar1 >> 1 & 1) << 6 | (ulonglong)(bVar1 & 1) << 4;
  EVar22 = EVar21 | Streamable;
  bVar5 = CanCreateWithPartiallyResidentMips(EVar22);
  pFVar3 = this->PrivatePlatformData;
  if (pFVar3 == (FTexturePlatformData *)0x0) {
    uStack_2a0 = 0;
    iStack_2a4 = 0;
  }
  else {
    uStack_2a0 = pFVar3->SizeX;
    iStack_2a4 = pFVar3->SizeY;
  }
  iVar10 = GetNumMips(this);
  pFVar3 = this->PrivatePlatformData;
  uVar19 = iVar10 - param_1;
  if (iVar10 - param_1 < 0) {
    uVar19 = uVar24;
  }
  if (pFVar3 == (FTexturePlatformData *)0x0) {
    EVar25 = PF_Unknown;
  }
  else if (pFVar3->VTData == (FVirtualTextureBuiltData *)0x0) {
    EVar25 = pFVar3->PixelFormat;
  }
  else {
    if ((pFVar3->VTData->NumLayers == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("LayerIndex < VTData->NumLayers",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureDerivedData.cpp"
                           ,0xab6,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      iVar9 = (*pcVar4)();
      return iVar9;
    }
    EVar25 = pFVar3->VTData->LayerTypes[0].Value;
  }
  pTVar18 = CVarReducedMode;
  if (((int)this->_padding_ != -1) && (bVar5)) {
    bVar5 = IsInParallelGameThread();
    if (bVar5) {
LAB_148883bc8:
      pTVar13 = pTVar23;
    }
    else {
      bVar5 = IsInGameThread();
      pTVar13 = (TConsoleVariableData<int> *)&DAT_00000004;
      if (bVar5) goto LAB_148883bc8;
    }
    if ((*(int *)((longlong)pTVar13->ShadowedValue + (longlong)pTVar18->ShadowedValue) == 0) ||
       (iVar11 = GetMinTextureResidentMipCount(this), iVar11 < param_1)) {
      pFVar14 = FRHITextureCreateDesc::Create2D(&FStack_c8,L"Temp",uStack_2a0,iStack_2a4,EVar25);
      *(char *)&pFVar14->_padding_ = (char)iVar10;
      pFVar14->_padding_ = EVar21 | (Streamable|Virtual);
      FRHITextureDesc::FRHITextureDesc(&FStack_168,(FRHITextureDesc *)pFVar14);
      if ((void *)FStack_c8._padding_ != (void *)0x0) {
        FMemory::Free((void *)FStack_c8._padding_);
      }
      bVar5 = FRHITextureDesc::Validate(&FStack_168,L"",false);
      FStack_118.AliasableFormats.AllocatorInstance.SecondaryData =
           FStack_168.AliasableFormats.AllocatorInstance.SecondaryData;
      if (bVar5) {
        piVar15 = (int *)(**(code **)(GDynamicRHI->_padding_ + 0x178))
                                   (GDynamicRHI,auStack_188,&FStack_168,uVar19);
        iVar9 = *piVar15;
        FStack_118.AliasableFormats.AllocatorInstance.SecondaryData =
             FStack_168.AliasableFormats.AllocatorInstance.SecondaryData;
      }
      goto LAB_148883dc7;
    }
  }
  CalcMipMapExtent((uint)&TStack_290,uStack_2a0,(EPixelFormat)iStack_2a4,(uint)EVar25);
  FStack_288.Flags = None;
  FStack_288.ClearValue._0_8_ = 1;
  FStack_288.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  FStack_288.ClearValue.Value._4_8_ = 0;
  puStack_238 = &u_Temp;
  FStack_288.Extent.field0_0x0 = TStack_290;
  FStack_288.ClearValue.Value.Color[3] = 0.0;
  FStack_288.ExtData = 0;
  FStack_288.Depth = 1;
  FStack_288.ArraySize = 1;
  FStack_288.NumMips = '\x01';
  FStack_288.NumSamples = '\x01';
  FStack_288.Dimension = Texture2D;
  FStack_288.UAVFormat = PF_Unknown;
  FStack_288.FastVRAMPercentage = 0xff;
  FStack_288.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  FStack_288.AliasableFormats.ArrayNum = 0;
  FStack_288.AliasableFormats.ArrayMax = 1;
  uStack_230 = 0;
  uStack_228 = 0;
  uStack_220 = 0;
  uStack_218 = 0;
  FStack_288.Format = EVar25;
  FRHITextureDesc::FRHITextureDesc(&FStack_208,&FStack_288);
  puStack_1b8 = puStack_238;
  uStack_1b0 = (undefined4)uStack_230;
  uStack_1ac = uStack_230._4_4_;
  uStack_1a8 = uStack_228;
  uStack_1a0 = uStack_220;
  uStack_198 = uStack_218;
  if (FStack_288.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)FStack_288.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  FStack_208.NumMips = (uchar)param_1;
  if (param_1 < 1) {
    FStack_208.NumMips = '\x01';
  }
  FStack_208.ExtData = (this->PrivatePlatformData->OptData).ExtData;
  FStack_208.Flags = EVar22;
  FRHITextureDesc::FRHITextureDesc(&FStack_118,&FStack_208);
  if (FStack_208.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)FStack_208.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  bVar5 = FRHITextureDesc::Validate(&FStack_118,L"",false);
  if (bVar5) {
    piVar15 = (int *)(**(code **)(GDynamicRHI->_padding_ + 0x178))
                               (GDynamicRHI,auStack_178,&FStack_118,0);
    iVar9 = *piVar15;
  }
LAB_148883dc7:
  if (FStack_118.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)FStack_118.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  return iVar9;
}

// GetSurfaceArraySize @ 147290f10

uint __thiscall UTexture2D::GetSurfaceArraySize(UTexture2D *this)

{
  return 0;
}

// GetSurfaceDepth @ 147290f20

float __thiscall UTexture2D::GetSurfaceDepth(UTexture2D *this)

{
  return 0.0;
}

// GetSurfaceHeight @ 147290f30

float __thiscall UTexture2D::GetSurfaceHeight(UTexture2D *this)

{
  int iVar1;
  
  iVar1 = GetSizeY(this);
  return (float)iVar1;
}

// GetSurfaceWidth @ 147290f50

float __thiscall UTexture2D::GetSurfaceWidth(UTexture2D *this)

{
  int iVar1;
  
  iVar1 = GetSizeX(this);
  return (float)iVar1;
}

// GetTextureAddressX @ 147290f70

TextureAddress __thiscall UTexture2D::GetTextureAddressX(UTexture2D *this)

{
  return (TextureAddress)(this->AddressX).Value;
}

// GetTextureAddressY @ 147290f80

TextureAddress __thiscall UTexture2D::GetTextureAddressY(UTexture2D *this)

{
  return (TextureAddress)(this->AddressY).Value;
}

// GetTextureClass @ 147290f90

ETextureClass __thiscall UTexture2D::GetTextureClass(UTexture2D *this)

{
  return TwoD;
}

// IsVirtualTexturedWithContinuousUpdate @ 147290fc0

bool __thiscall UTexture2D::IsVirtualTexturedWithContinuousUpdate(UTexture2D *this)

{
  return false;
}

// IsVirtualTexturedWithSinglePhysicalPool @ 147290fd0

bool __thiscall UTexture2D::IsVirtualTexturedWithSinglePhysicalPool(UTexture2D *this)

{
  return false;
}

// IsVirtualTexturedWithSinglePhysicalSpace @ 147290fe0

bool __thiscall UTexture2D::IsVirtualTexturedWithSinglePhysicalSpace(UTexture2D *this)

{
  return false;
}

// UTexture2D @ 14887e0c0

UTexture2D * __thiscall UTexture2D::UTexture2D(UTexture2D *this,FVTableHelper *param_1)

{
  UTexture::UTexture((UTexture *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  return this;
}

// UTexture2D @ 14887e110

UTexture2D * __thiscall UTexture2D::UTexture2D(UTexture2D *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FRenderAssetUpdate *this_00;
  code *pcVar2;
  bool bVar3;
  UTexture2D *pUVar4;
  
  UTexture::UTexture((UTexture *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->PrivatePlatformData = (FTexturePlatformData *)0x0;
  this->ResourceMem = (FTexture2DResourceMem *)0x0;
  this_00 = (FRenderAssetUpdate *)this->_padding_;
  if (this_00 != (FRenderAssetUpdate *)0x0) {
    this->_padding_ = 0;
    FRenderAssetUpdate::Release(this_00);
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 6);
  *pbVar1 = *pbVar1 | 1;
  if ((this->AddressX).Value != '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AddressX == TA_Wrap",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Texture2D.cpp"
                       ,0x48,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UTexture2D *)(*pcVar2)();
      return pUVar4;
    }
  }
  return this;
}

// ~UTexture2D @ 14887ef00

void __thiscall UTexture2D::~UTexture2D(UTexture2D *this)

{
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  UTexture::~UTexture((UTexture *)this);
  return;
}

// operator() @ 148880f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`UTexture2D::UpdateTextureRegions'::__l48::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  uint *puVar1;
  FRHITexture *pFVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  FRHITexture *pFVar5;
  uint uVar6;
  FRHITexture *pFVar7;
  undefined1 auStackY_b8 [32];
  FUpdateTextureRegion2D local_88;
  longlong *local_68 [2];
  longlong local_58;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_68[0] = *(longlong **)this;
  pFVar7 = (FRHITexture *)0x0;
  if (*(int *)((longlong)local_68[0] + 0xc) != 0) {
    do {
      uVar6 = (uint)*(byte *)(*local_68[0] + 0x6c);
      if ((int)uVar6 <= (int)local_68[0][1]) {
        puVar1 = (uint *)(local_68[0][2] + (longlong)pFVar7 * 0x18);
        local_88.DestX = *puVar1;
        local_88.DestY = puVar1[1];
        local_88._16_8_ = *(undefined8 *)(local_68[0][2] + 0x10 + (longlong)pFVar7 * 0x18);
        local_88.SrcX = 0;
        local_88.SrcY = 0;
        pFVar2 = *(FRHITexture **)(*local_68[0] + 0x20);
        pFVar5 = (FRHITexture *)0x0;
        if ((pFVar2->TextureDesc).Dimension == Texture2D) {
          pFVar5 = pFVar2;
        }
        FRHICommandListBase::UpdateTexture2D
                  ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,pFVar5,
                   (int)local_68[0][1] - uVar6,&local_88,*(uint *)(local_68[0] + 3),
                   (uchar *)((ulonglong)(puVar1[3] * (int)local_68[0][3]) +
                             (ulonglong)(puVar1[2] * *(int *)((longlong)local_68[0] + 0x1c)) +
                            local_68[0][4]));
      }
      local_68[0] = *(longlong **)this;
      uVar6 = (int)pFVar7 + 1;
      pFVar7 = (FRHITexture *)(ulonglong)uVar6;
    } while (uVar6 < *(uint *)((longlong)local_68[0] + 0xc));
  }
  local_58 = *(longlong *)((longlong)this + 0x10);
  local_30 = (longlong *)0x0;
  if (local_58 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)(puVar3,&local_48);
  }
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
     (param_1->field_0x64 == '\0')) {
    puVar3 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x60,0x10);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar3;
    *(undefined8 **)&param_1->field_0x30 = puVar3 + 1;
    puVar3[1] = 0;
    *puVar3 = &TRHILambdaCommand<FRHICommandListImmediate,``UTexture2D::UpdateTextureRegions'::`48'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[2] = local_68[0];
    puVar3[4] = local_58;
    puVar3[9] = local_30;
    local_30 = (longlong *)0x0;
    *(undefined4 *)(puVar3 + 6) = (undefined4)local_48;
    *(undefined4 *)((longlong)puVar3 + 0x34) = local_48._4_4_;
    *(undefined4 *)(puVar3 + 7) = uStack_40;
    *(undefined4 *)((longlong)puVar3 + 0x3c) = uStack_3c;
    puVar3[8] = local_38;
    if (puVar3[4] != 0) {
      local_58 = 0;
    }
    puVar3[10] = L"TRHILambdaCommand";
  }
  else {
    ``UTexture2D::UpdateTextureRegions'::__l48::<lambda_1>::operator()'::__l2::<lambda_1>::
    operator()(local_68,(FRHICommandList *)param_1);
  }
  if (local_58 != 0) {
    plVar4 = &local_48;
    if (local_30 != (longlong *)0x0) {
      plVar4 = local_30;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return;
}

// BeginDestroy @ 1488835c0

void __thiscall UTexture2D::BeginDestroy(UTexture2D *this)

{
  bool bVar1;
  
  UStreamableRenderAsset::BeginDestroy((UStreamableRenderAsset *)this);
  bVar1 = UStreamableRenderAsset::HasPendingInitOrStreaming((UStreamableRenderAsset *)this,false);
  if (!bVar1) {
    UTexture::BeginFinalReleaseResource((UTexture *)this);
  }
  TrackRenderAssetEvent
            ((FStreamingRenderAsset *)0x0,(UStreamableRenderAsset *)this,false,
             (FRenderAssetStreamingManager *)0x0);
  return;
}

// Blueprint_GetCPUCopy @ 148883750

FSharedImageConstRefBlueprint __thiscall UTexture2D::Blueprint_GetCPUCopy(UTexture2D *this)

{
  undefined1 *puVar1;
  int iVar2;
  FTexturePlatformData *pFVar3;
  FSharedImage *pFVar4;
  TRefCountPtr<FSharedImage_const_> in_RDX;
  FSharedImage *pFVar5;
  
  *(longlong *)in_RDX.Reference = 0;
  if (((*(char *)((longlong)&this->_padding_ + 5) == '\x01') &&
      (pFVar3 = this->PrivatePlatformData, pFVar3 != (FTexturePlatformData *)0x0)) &&
     ((pFVar3->PackedData & 0x20000000) != 0)) {
    pFVar4 = (pFVar3->CPUCopy).Reference;
    if (pFVar4 != (FSharedImage *)0x0) {
      LOCK();
      *(int *)&pFVar4->field_0x8 = *(int *)&pFVar4->field_0x8 + 1;
      UNLOCK();
    }
  }
  else {
    pFVar4 = (FSharedImage *)0x0;
  }
  if (in_RDX.Reference == (FSharedImage *)&stack0xffffffffffffffe8) {
    if (pFVar4 != (FSharedImage *)0x0) {
      puVar1 = &pFVar4->field_0x8;
      LOCK();
      iVar2 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        if (puVar1 == (undefined1 *)0x0) {
          pFVar4 = (FSharedImage *)0x0;
        }
        if (pFVar4 != (FSharedImage *)0x0) {
          (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
        }
      }
    }
  }
  else {
                    /* WARNING: Load size is inaccurate */
    pFVar5 = *in_RDX.Reference;
    *(FSharedImage **)in_RDX.Reference = pFVar4;
    if (pFVar5 != (FSharedImage *)0x0) {
      puVar1 = &pFVar5->field_0x8;
      LOCK();
      iVar2 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        if (puVar1 == (undefined1 *)0x0) {
          pFVar5 = (FSharedImage *)0x0;
        }
        if (pFVar5 != (FSharedImage *)0x0) {
          (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
          return (FSharedImageConstRefBlueprint)(TRefCountPtr<FSharedImage_const_>)in_RDX.Reference;
        }
      }
    }
  }
  return (FSharedImageConstRefBlueprint)(TRefCountPtr<FSharedImage_const_>)in_RDX.Reference;
}

// Blueprint_GetSizeX @ 148883840

int __thiscall UTexture2D::Blueprint_GetSizeX(UTexture2D *this)

{
  if (this->PrivatePlatformData != (FTexturePlatformData *)0x0) {
    return this->PrivatePlatformData->SizeX;
  }
  return 0;
}

// Blueprint_GetSizeY @ 148883860

int __thiscall UTexture2D::Blueprint_GetSizeY(UTexture2D *this)

{
  if (this->PrivatePlatformData != (FTexturePlatformData *)0x0) {
    return this->PrivatePlatformData->SizeY;
  }
  return 0;
}

// CalcTextureMemorySize @ 148883910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

int __thiscall UTexture2D::CalcTextureMemorySize(UTexture2D *this,int param_1)

{
  byte bVar1;
  FVirtualTextureBuiltData *pFVar2;
  FTexturePlatformData *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulong64 uVar12;
  TConsoleVariableData<int> *pTVar13;
  FRHITextureCreateDesc *pFVar14;
  int *piVar15;
  IConsoleManager *pIVar16;
  longlong *plVar17;
  TConsoleVariableData<int> *pTVar18;
  uint uVar19;
  TEnumAsByte<EPixelFormat> *pTVar20;
  ETextureCreateFlags EVar21;
  ETextureCreateFlags EVar22;
  TConsoleVariableData<int> *pTVar23;
  uint uVar24;
  EPixelFormat EVar25;
  ulonglong uVar26;
  undefined1 auStack_2d8 [32];
  int local_2a4;
  uint local_2a0;
  TIntPoint<int>_u_0 local_290;
  FRHITextureDesc local_288;
  undefined *local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  FRHITextureDesc local_208;
  undefined *local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  FRHITextureDesc local_168;
  FRHITextureDesc local_118;
  FRHITextureCreateDesc local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  pTVar23 = (TConsoleVariableData<int> *)0x0;
  iVar9 = 0;
  uVar24 = 0;
  if (this->PrivatePlatformData == (FTexturePlatformData *)0x0) {
    return 0;
  }
  pFVar2 = this->PrivatePlatformData->VTData;
  if (pFVar2 != (FVirtualTextureBuiltData *)0x0) {
    uVar19 = pFVar2->TileSize + pFVar2->TileBorderSize * 2;
    if (pFVar2->NumLayers != 0) {
      pTVar20 = pFVar2->LayerTypes;
      uVar26 = (ulonglong)pFVar2->NumLayers;
      pTVar18 = pTVar23;
      do {
        uVar12 = CalculateImageBytes(uVar19,uVar19,1,pTVar20->Value);
        uVar24 = (int)pTVar18 + (int)uVar12;
        pTVar18 = (TConsoleVariableData<int> *)(ulonglong)uVar24;
        pTVar20 = pTVar20 + 1;
        uVar26 = uVar26 - 1;
      } while (uVar26 != 0);
    }
    uVar19 = pFVar2->TileSize;
    uVar7 = pFVar2->NumMips - param_1;
    if (0 < (int)uVar7) {
      pTVar23 = (TConsoleVariableData<int> *)(ulonglong)uVar7;
    }
    uVar8 = ((pFVar2->Width - 1) + uVar19) / uVar19 >> ((byte)pTVar23 & 0x1f);
    uVar7 = 1;
    if (1 < uVar8) {
      uVar7 = uVar8;
    }
    uVar8 = ((pFVar2->Height - 1) + uVar19) / uVar19 >> ((byte)pTVar23 & 0x1f);
    uVar19 = 1;
    if (1 < uVar8) {
      uVar19 = uVar8;
    }
    iVar9 = uVar19 * uVar7;
    while ((1 < uVar7 && (1 < uVar19))) {
      uVar7 = uVar7 + 1 >> 1;
      uVar19 = uVar19 + 1 >> 1;
      iVar9 = iVar9 + uVar19 * uVar7;
    }
    return iVar9 * uVar24;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar16 = IConsoleManager::Get();
    plVar17 = (longlong *)(**(code **)((longlong)*pIVar16 + 0xc0))(pIVar16,L"r.PRT.ReducedMemory",1)
    ;
    pTVar18 = pTVar23;
    if (plVar17 != (longlong *)0x0) {
      pTVar18 = (TConsoleVariableData<int> *)(**(code **)(*plVar17 + 0x68))(plVar17);
    }
    CVarReducedMode = pTVar18;
    _Init_thread_footer(&::_TSS0);
  }
  if ((CVarReducedMode == (TConsoleVariableData<int> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CVarReducedMode",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Texture2D.cpp"
                         ,0x362,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return iVar9;
  }
  bVar1 = *(byte *)((longlong)&this->_padding_ + 6);
  EVar21 = (ulonglong)((byte)~*(byte *)((longlong)&this->_padding_ + 4) >> 1 & 1) << 0x14 |
           (ulonglong)(bVar1 >> 1 & 1) << 6 | (ulonglong)(bVar1 & 1) << 4;
  EVar22 = EVar21 | Streamable;
  bVar5 = CanCreateWithPartiallyResidentMips(EVar22);
  pFVar3 = this->PrivatePlatformData;
  if (pFVar3 == (FTexturePlatformData *)0x0) {
    local_2a0 = 0;
    local_2a4 = 0;
  }
  else {
    local_2a0 = pFVar3->SizeX;
    local_2a4 = pFVar3->SizeY;
  }
  iVar10 = GetNumMips(this);
  pFVar3 = this->PrivatePlatformData;
  uVar19 = iVar10 - param_1;
  if (iVar10 - param_1 < 0) {
    uVar19 = uVar24;
  }
  if (pFVar3 == (FTexturePlatformData *)0x0) {
    EVar25 = PF_Unknown;
  }
  else if (pFVar3->VTData == (FVirtualTextureBuiltData *)0x0) {
    EVar25 = pFVar3->PixelFormat;
  }
  else {
    if ((pFVar3->VTData->NumLayers == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("LayerIndex < VTData->NumLayers",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureDerivedData.cpp"
                           ,0xab6,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      iVar9 = (*pcVar4)();
      return iVar9;
    }
    EVar25 = pFVar3->VTData->LayerTypes[0].Value;
  }
  pTVar18 = CVarReducedMode;
  if (((int)this->_padding_ != -1) && (bVar5)) {
    bVar5 = IsInParallelGameThread();
    if (bVar5) {
LAB_148883bc8:
      pTVar13 = pTVar23;
    }
    else {
      bVar5 = IsInGameThread();
      pTVar13 = (TConsoleVariableData<int> *)&DAT_00000004;
      if (bVar5) goto LAB_148883bc8;
    }
    if ((*(int *)((longlong)pTVar13->ShadowedValue + (longlong)pTVar18->ShadowedValue) == 0) ||
       (iVar11 = GetMinTextureResidentMipCount(this), iVar11 < param_1)) {
      pFVar14 = FRHITextureCreateDesc::Create2D(&local_c8,L"Temp",local_2a0,local_2a4,EVar25);
      *(char *)&pFVar14->_padding_ = (char)iVar10;
      pFVar14->_padding_ = EVar21 | (Streamable|Virtual);
      FRHITextureDesc::FRHITextureDesc(&local_168,(FRHITextureDesc *)pFVar14);
      if ((void *)local_c8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_c8._padding_);
      }
      bVar5 = FRHITextureDesc::Validate(&local_168,L"",false);
      local_118.AliasableFormats.AllocatorInstance.SecondaryData =
           local_168.AliasableFormats.AllocatorInstance.SecondaryData;
      if (bVar5) {
        piVar15 = (int *)(**(code **)(GDynamicRHI->_padding_ + 0x178))
                                   (GDynamicRHI,local_188,&local_168,uVar19);
        iVar9 = *piVar15;
        local_118.AliasableFormats.AllocatorInstance.SecondaryData =
             local_168.AliasableFormats.AllocatorInstance.SecondaryData;
      }
      goto LAB_148883dc7;
    }
  }
  CalcMipMapExtent((uint)&local_290,local_2a0,(EPixelFormat)local_2a4,(uint)EVar25);
  local_288.Flags = None;
  local_288.ClearValue._0_8_ = 1;
  local_288.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_288.ClearValue.Value._4_8_ = 0;
  local_238 = &u_Temp;
  local_288.Extent.field0_0x0 = local_290;
  local_288.ClearValue.Value.Color[3] = 0.0;
  local_288.ExtData = 0;
  local_288.Depth = 1;
  local_288.ArraySize = 1;
  local_288.NumMips = '\x01';
  local_288.NumSamples = '\x01';
  local_288.Dimension = Texture2D;
  local_288.UAVFormat = PF_Unknown;
  local_288.FastVRAMPercentage = 0xff;
  local_288.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_288.AliasableFormats.ArrayNum = 0;
  local_288.AliasableFormats.ArrayMax = 1;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  local_218 = 0;
  local_288.Format = EVar25;
  FRHITextureDesc::FRHITextureDesc(&local_208,&local_288);
  local_1b8 = local_238;
  local_1b0 = (undefined4)local_230;
  local_1ac = local_230._4_4_;
  local_1a8 = local_228;
  local_1a0 = local_220;
  local_198 = local_218;
  if (local_288.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_288.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  local_208.NumMips = (uchar)param_1;
  if (param_1 < 1) {
    local_208.NumMips = '\x01';
  }
  local_208.ExtData = (this->PrivatePlatformData->OptData).ExtData;
  local_208.Flags = EVar22;
  FRHITextureDesc::FRHITextureDesc(&local_118,&local_208);
  if (local_208.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_208.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  bVar5 = FRHITextureDesc::Validate(&local_118,L"",false);
  if (bVar5) {
    piVar15 = (int *)(**(code **)(GDynamicRHI->_padding_ + 0x178))
                               (GDynamicRHI,local_178,&local_118,0);
    iVar9 = *piVar15;
  }
LAB_148883dc7:
  if (local_118.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_118.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  return iVar9;
}

// CalcTextureMemorySizeEnum @ 1488842e0

uint __thiscall UTexture2D::CalcTextureMemorySizeEnum(UTexture2D *this,ETextureMipCount param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  cVar1 = (**(code **)(this->_padding_ + 0x348))();
  if (cVar1 != '\0') {
    return 0;
  }
  if (param_1 == TMC_ResidentMips) {
    iVar2 = GetNumResidentMips(this);
  }
  else if (param_1 == TMC_AllMipsBiased) {
    iVar2 = GetNumMipsAllowed(this,false);
  }
  else {
    iVar2 = GetNumMips(this);
  }
  uVar3 = CalcTextureMemorySize(this,iVar2);
  return uVar3;
}

// CreateResource @ 148887b20

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FTextureResource * __thiscall UTexture2D::CreateResource(UTexture2D *this)

{
  FVirtualTextureBuiltData **ppFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  FVirtualTexture2DResource *this_00;
  FTexture2DResource *pFVar6;
  FTextureResource *pFVar7;
  UTextureAllMipDataProviderFactory *pUVar8;
  int iVar9;
  FTexture2DResource *pFVar10;
  int iVar11;
  FTexturePlatformData *pFVar12;
  EPixelFormat EVar13;
  bool bVar14;
  FStreamableRenderResourceState_u_0 local_res8;
  undefined1 local_res10 [24];
  FString local_68;
  FString local_58;
  FString local_48;
  
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1047,"UTexture2D::CreateResource",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Texture2D.cpp"
               ,0x417);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1047);
  }
  pFVar6 = (FTexture2DResource *)0x0;
  pFVar10 = (FTexture2DResource *)0x0;
  if (this->PrivatePlatformData != (FTexturePlatformData *)0x0) {
    cVar3 = (**(code **)(this->_padding_ + 0x348))(this);
    if (cVar3 == '\0') {
      pFVar12 = this->PrivatePlatformData;
      iVar5 = 0;
      if (pFVar12 == (FTexturePlatformData *)0x0) {
        EVar13 = PF_Unknown;
        pFVar12 = (FTexturePlatformData *)0x0;
      }
      else if (pFVar12->VTData == (FVirtualTextureBuiltData *)0x0) {
        EVar13 = pFVar12->PixelFormat;
      }
      else {
        if ((pFVar12->VTData->NumLayers == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("LayerIndex < VTData->NumLayers",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureDerivedData.cpp"
                               ,0xab6,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FTextureResource *)(*pcVar2)();
          return pFVar7;
        }
        ppFVar1 = &pFVar12->VTData;
        pFVar12 = this->PrivatePlatformData;
        EVar13 = (*ppFVar1)->LayerTypes[0].Value;
      }
      iVar9 = GRHIGlobals.MaxTextureMipCount;
      if ((pFVar12->Mips).Array.ArrayNum < GRHIGlobals.MaxTextureMipCount) {
        iVar9 = (pFVar12->Mips).Array.ArrayNum;
      }
      iVar11 = 0x10;
      if (iVar9 < 0x10) {
        iVar11 = iVar9;
      }
      if (iVar11 == 0) {
        pFVar6 = pFVar10;
        if (1 < (byte)LogTexture._0_1_) {
          UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_68,(UObject *)0x0,None);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTexture);
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
        }
      }
      else if (GPixelFormats[EVar13].Supported == 0) {
        pFVar6 = pFVar10;
        if (1 < (byte)LogTexture._0_1_) {
          UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_58,(UObject *)0x0,None);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTexture);
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        if (iVar11 == 1) {
          iVar9 = pFVar12->SizeY;
          if (pFVar12->SizeY < pFVar12->SizeX) {
            iVar9 = pFVar12->SizeX;
          }
          if (GRHIGlobals.MaxTextureDimensions.Value < iVar9) {
            pFVar6 = pFVar10;
            if (2 < (byte)LogTexture._0_1_) {
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)this,&local_48,(UObject *)0x0,None);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTexture);
              if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_48.Data.AllocatorInstance.Data);
              }
            }
            goto LAB_148887e83;
          }
        }
        pUVar8 = GetAllMipProvider(this);
        if (pUVar8 == (UTextureAllMipDataProviderFactory *)0x0) {
          if (this->ResourceMem != (FTexture2DResourceMem *)0x0) {
            iVar5 = (**(code **)((longlong)*this->ResourceMem + 0x28))();
          }
          local_res8._s_0 =
               (FStreamableRenderResourceState_u_0_s_0)
               UTexture::GetResourcePostInitState
                         ((UTexture *)this,(FTexturePlatformData *)(local_res10 + 8),
                          SUB81(this->PrivatePlatformData,0),
                          (uint)(~this->bTemporarilyDisableStreaming & 1),iVar5,SUB41(iVar11,0));
        }
        else {
          local_res8.Data =
               (**(code **)(*(longlong *)pUVar8 + 0x2f0))
                         (pUVar8,local_res10,this,~this->bTemporarilyDisableStreaming & 1);
        }
                    /* WARNING: Load size is inaccurate */
        local_res8._s_0 = *local_res8._s_0;
        pFVar10 = ::operator_new(0x1e0);
        if (pFVar10 != (FTexture2DResource *)0x0) {
          pFVar6 = FTexture2DResource::FTexture2DResource
                             (pFVar10,this,(FStreamableRenderResourceState *)&local_res8._s_0);
        }
        this->ResourceMem = (FTexture2DResourceMem *)0x0;
      }
    }
    else {
      this_00 = ::operator_new(0xa0);
      if (this_00 != (FVirtualTexture2DResource *)0x0) {
        iVar5 = (**(code **)(this->_padding_ + 0x2f8))(this);
        pFVar6 = (FTexture2DResource *)
                 FVirtualTexture2DResource::FVirtualTexture2DResource
                           (this_00,this,this->PrivatePlatformData->VTData,iVar5);
      }
    }
  }
LAB_148887e83:
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (FTextureResource *)pFVar6;
}

// CreateTransient @ 148888140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UTexture2D * __cdecl
UTexture2D::CreateTransient
          (int param_1,int param_2,EPixelFormat param_3,FName param_4,
          TArrayView<unsigned_char_const_,__int64> *param_5)

{
  int *piVar1;
  byte *pbVar2;
  FTexturePlatformData *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  size_t _Size;
  bool bVar6;
  int iVar7;
  int iVar8;
  UPackage *pUVar9;
  UClass *pUVar10;
  UTexture2D *this;
  UTexture2D *pUVar11;
  UTexture2D *pUVar12;
  FTexture2DMipMap *this_00;
  UTexture2D *pUVar13;
  void *_Dst;
  ulonglong uVar14;
  longlong *plVar15;
  FStaticBasicLogRecord *pFVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined1 auStackY_158 [32];
  FLLMScope local_104;
  UTexture2D *local_100;
  size_t local_f8;
  undefined1 local_f0;
  FMemScope local_e8;
  ulonglong local_e0;
  undefined1 local_d8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  FLLMScope::FLLMScope(&local_104,Textures,false,None,Default,true);
  FMemScope::FMemScope(&local_e8,Textures,true);
  pUVar13 = (UTexture2D *)0x0;
  iVar7 = param_2 / GPixelFormats[param_3].BlockSizeY;
  uVar18 = (ulonglong)iVar7;
  if ((param_1 < 1) || (param_2 < 1)) {
    if ((byte)LogTexture._0_1_ < 3) goto LAB_14888856f;
    pFVar16 = &::LOG_Static;
  }
  else if ((param_1 % GPixelFormats[param_3].BlockSizeX == 0) &&
          (param_2 % GPixelFormats[param_3].BlockSizeY == 0)) {
    iVar8 = param_1 / GPixelFormats[param_3].BlockSizeX;
    uVar17 = (ulonglong)iVar8;
    if (iVar7 == 0) {
      local_e0 = 0;
LAB_14888826f:
      local_d8 = 1;
      uVar18 = (ulonglong)GPixelFormats[param_3].BlockBytes;
      if (uVar18 == 0) {
        local_f8 = 0;
      }
      else {
        uVar17 = local_e0;
        if ((longlong)local_e0 < 0) {
          uVar17 = -local_e0;
        }
        uVar19 = uVar18;
        if ((longlong)uVar18 < 0) {
          uVar19 = -uVar18;
        }
        uVar20 = (ulonglong)(byte)((byte)(local_e0 >> 0x3f) ^ 1);
        if (-1 < (longlong)uVar18) {
          uVar20 = local_e0 >> 0x3f;
        }
        if ((uVar20 + 0x7fffffffffffffff) / uVar19 < uVar17) goto LAB_14888852c;
        local_f8 = local_e0 * uVar18;
      }
      _Size = local_f8;
      local_f0 = 1;
      if ((param_5->ArrayNum == 0) || (param_5->ArrayNum == local_f8)) {
        pUVar9 = GetTransientPackage();
        if (param_4 == (FName)0x0) {
          FObjectInitializer::AssertIfInConstructor
                    ((UObject *)pUVar9,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
        }
        pUVar10 = StaticClass();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_c8,pUVar10);
        local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
        local_c8._56_8_ = (UPackage *)0x0;
        local_c8._24_4_ = RF_Transient;
        local_c8._40_8_ = (UObject *)0x0;
        local_c8[0x20] = false;
        local_c8._8_8_ = pUVar9;
        local_c8._16_8_ = param_4;
        this = (UTexture2D *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
        if (local_c8._64_8_ != 0) {
          plVar15 = (longlong *)(local_c8 + 0x50);
          if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
            plVar15 = (longlong *)local_c8._104_8_;
          }
          (**(code **)(*plVar15 + 0x10))();
        }
        pUVar11 = ::operator_new(0x38);
        pUVar12 = pUVar13;
        if (pUVar11 != (UTexture2D *)0x0) {
          pUVar11->_padding_ = 0;
          *(undefined4 *)&pUVar11->_padding_ = 0;
          *(undefined1 *)((longlong)&pUVar11->_padding_ + 4) = 0;
          pUVar11->_padding_ = 0;
          pUVar11->_padding_ = 0;
          pUVar11->_padding_ = 0;
          pUVar11->_padding_ = 0;
          pUVar11->_padding_ = 0;
          pUVar12 = pUVar11;
        }
        SetPlatformData(this,(FTexturePlatformData *)pUVar12);
        this->PrivatePlatformData->SizeX = param_1;
        this->PrivatePlatformData->SizeY = param_2;
        this->PrivatePlatformData->PackedData =
             this->PrivatePlatformData->PackedData & 0xe0000001 | 1;
        this->PrivatePlatformData->PixelFormat = param_3;
        pbVar2 = (byte *)((longlong)&this->_padding_ + 4);
        *pbVar2 = *pbVar2 | 2;
        this_00 = ::operator_new(0x50);
        if (this_00 != (FTexture2DMipMap *)0x0) {
          pUVar13 = (UTexture2D *)FTexture2DMipMap::FTexture2DMipMap(this_00,param_1,param_2,1);
        }
        pFVar3 = this->PrivatePlatformData;
        pFVar4 = (pFVar3->Mips).Array.AllocatorInstance.Data;
        local_100 = pUVar13;
        if (((pFVar4 <= (FScriptContainerElement *)&local_100) &&
            ((FScriptContainerElement *)&local_100 <
             pFVar4 + (longlong)(pFVar3->Mips).Array.ArrayMax * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          pUVar13 = (UTexture2D *)(*pcVar5)();
          return pUVar13;
        }
        iVar7 = (pFVar3->Mips).Array.ArrayNum;
        piVar1 = &(pFVar3->Mips).Array.ArrayMax;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)&pFVar3->Mips,piVar1);
        }
        plVar15 = &pUVar13->_padding_;
        (pFVar3->Mips).Array.ArrayNum = iVar7 + 1;
        *(UTexture2D **)((pFVar3->Mips).Array.AllocatorInstance.Data + (longlong)iVar7 * 8) =
             local_100;
        FBulkData::Lock((FBulkData *)plVar15,2);
        _Dst = FBulkData::Realloc((FBulkData *)plVar15,_Size,1);
        pUVar13 = this;
        if (param_5->ArrayNum == 0) {
          FBulkData::Unlock((FBulkData *)plVar15);
        }
        else {
          memcpy(_Dst,param_5->DataPtr,_Size);
          FBulkData::Unlock((FBulkData *)plVar15);
          (**(code **)(this->_padding_ + 0x328))(this);
        }
      }
      else if (2 < (byte)LogTexture._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTexture);
      }
      goto LAB_14888856f;
    }
    uVar19 = uVar17;
    if (iVar8 < 0) {
      uVar19 = -uVar17;
    }
    uVar20 = uVar18;
    if ((longlong)uVar18 < 0) {
      uVar20 = -uVar18;
    }
    uVar14 = (ulonglong)(byte)((byte)(iVar8 >> 0x1f) >> 7 ^ 1);
    if (-1 < (longlong)uVar18) {
      uVar14 = uVar17 >> 0x3f;
    }
    if (uVar19 <= (uVar14 + 0x7fffffffffffffff) / uVar20) {
      local_e0 = uVar18 * uVar17;
      goto LAB_14888826f;
    }
LAB_14888852c:
    if ((byte)LogTexture._0_1_ < 3) goto LAB_14888856f;
    pFVar16 = &::LOG_Static;
  }
  else {
    if ((byte)LogTexture._0_1_ < 3) goto LAB_14888856f;
    pFVar16 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar16,(FLogCategoryBase *)&LogTexture);
LAB_14888856f:
  FMemScope::~FMemScope(&local_e8);
  FLLMScope::~FLLMScope(&local_104);
  return pUVar13;
}

// CreateTransientFromImage @ 148888c10

/* WARNING: Enum "Type": Some values do not have unique names */

UTexture2D * __cdecl UTexture2D::CreateTransientFromImage(FImage *param_1,FName param_2)

{
  FScriptContainerElement FVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  ForAnyElementType FVar5;
  long64 lVar6;
  bool bVar7;
  FLinearColor *pFVar8;
  UTexture2D *pUVar9;
  UTexture2D *pUVar10;
  FScriptContainerElement **ppFVar11;
  FScriptContainerElement *pFVar12;
  UTexture2D *pUVar13;
  longlong lVar14;
  EPixelFormat EVar15;
  FScriptContainerElement *pFVar16;
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  UTexture2D *pUStack_a0;
  FScriptContainerElement *local_98;
  longlong lStack_90;
  FScriptContainerElement *local_88;
  UTexture2D *pUStack_80;
  TArrayView<unsigned_char_const_,__int64> local_78;
  FLinearColor local_68;
  ForAnyElementType local_58;
  long64 lStack_50;
  long64 local_48 [2];
  
  FLLMScope::FLLMScope(local_res8,Textures,false,None,Default,true);
  FMemScope::FMemScope(local_res18,Textures,true);
  pUVar9 = (UTexture2D *)0x0;
  if (param_1 == (FImage *)0x0) goto LAB_148888fae;
  local_48[0] = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  lStack_50 = 0;
  switch(*(undefined1 *)((longlong)&param_1->_padding_ + 4)) {
  case 0:
    EVar15 = PF_B8G8R8A8;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,(longlong)(*(int *)((longlong)&param_1->_padding_ + 4) * (int)param_1->_padding_)
                   << 2,&local_58,&lStack_50,local_48);
    pFVar16 = (param_1->RawData).AllocatorInstance.Data;
    pUVar13 = (UTexture2D *)
              ((longlong)*(int *)((longlong)&param_1->_padding_ + 4) *
              (longlong)(int)param_1->_padding_);
    if (pUVar13 != (UTexture2D *)0x0) {
      pFVar12 = local_58.Data + 2;
      pUVar10 = pUVar9;
      do {
        FVar1 = *(FScriptContainerElement *)((longlong)&pUVar10->_padding_ + (longlong)pFVar16);
        pUVar10 = (UTexture2D *)((longlong)&pUVar10->_padding_ + 1);
        pFVar12[-2] = FVar1;
        pFVar12[-1] = FVar1;
        *pFVar12 = FVar1;
        pFVar12[1] = (FScriptContainerElement)0xff;
        pFVar12 = pFVar12 + 4;
      } while (pUVar10 < pUVar13);
    }
    break;
  case 1:
    EVar15 = PF_B8G8R8A8;
    break;
  case 2:
    EVar15 = PF_A32B32G32R32F;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,(longlong)(*(int *)((longlong)&param_1->_padding_ + 4) * (int)param_1->_padding_)
                   << 4,&local_58,&lStack_50,local_48);
    pFVar16 = (param_1->RawData).AllocatorInstance.Data;
    FVar5.Data = local_58.Data;
    for (lVar14 = (longlong)*(int *)((longlong)&param_1->_padding_ + 4) *
                  (longlong)(int)param_1->_padding_; lVar14 != 0; lVar14 = lVar14 + -1) {
      pFVar8 = FColor::FromRGBE((FColor *)pFVar16,&local_68);
      pFVar16 = pFVar16 + 4;
      uVar4 = *(undefined8 *)((longlong)&pFVar8->field0_0x0 + 8);
      *(undefined8 *)FVar5.Data = *(undefined8 *)&pFVar8->field0_0x0;
      *(undefined8 *)(FVar5.Data + 8) = uVar4;
      FVar5.Data = FVar5.Data + 0x10;
    }
    break;
  case 3:
    EVar15 = PF_A16B16G16R16;
    break;
  case 4:
    EVar15 = PF_FloatRGBA;
    break;
  case 5:
    EVar15 = PF_A32B32G32R32F;
    break;
  case 6:
    EVar15 = PF_A16B16G16R16;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,(longlong)
                   (*(int *)((longlong)&param_1->_padding_ + 4) * (int)param_1->_padding_ * 4) * 2,
               &local_58,&lStack_50,local_48);
    pFVar16 = (param_1->RawData).AllocatorInstance.Data;
    pUVar13 = (UTexture2D *)
              ((longlong)*(int *)((longlong)&param_1->_padding_ + 4) *
              (longlong)(int)param_1->_padding_);
    if (pUVar13 != (UTexture2D *)0x0) {
      pFVar12 = local_58.Data + 4;
      pUVar10 = pUVar9;
      do {
        *(undefined2 *)(pFVar12 + 2) = 0xffff;
        *(undefined2 *)pFVar12 = *(undefined2 *)(pFVar16 + (longlong)pUVar10 * 2);
        *(undefined2 *)(pFVar12 + -2) = *(undefined2 *)(pFVar16 + (longlong)pUVar10 * 2);
        lVar14 = (longlong)pUVar10 * 2;
        pUVar10 = (UTexture2D *)((longlong)&pUVar10->_padding_ + 1);
        *(undefined2 *)(pFVar12 + -4) = *(undefined2 *)(pFVar16 + lVar14);
        pFVar12 = pFVar12 + 8;
      } while (pUVar10 < pUVar13);
    }
    break;
  case 7:
    EVar15 = PF_R16F;
    break;
  case 8:
    EVar15 = PF_R32_FLOAT;
    break;
  default:
    if (1 < (byte)LogTexture._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTexture);
    }
    goto LAB_148888f80;
  }
  pUStack_a0 = (UTexture2D *)(param_1->RawData).ArrayNum;
  pFVar16 = (param_1->RawData).AllocatorInstance.Data;
  if (((longlong)pUStack_a0 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    pUVar9 = (UTexture2D *)(*pcVar3)();
    return pUVar9;
  }
  iVar2 = (int)param_1->_padding_;
  if (1 < iVar2) {
    pUVar10 = (UTexture2D *)((longlong)pUStack_a0 / (longlong)iVar2);
    pUVar13 = pUStack_a0;
    if ((longlong)pUVar10 < (longlong)pUStack_a0) {
      pUVar13 = pUVar10;
    }
    pUStack_a0 = pUVar9;
    if (0 < (longlong)pUVar13) {
      pUStack_a0 = pUVar13;
    }
    if (((longlong)pUStack_a0 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      pUVar9 = (UTexture2D *)(*pcVar3)();
      return pUVar9;
    }
  }
  lVar6 = lStack_50;
  if (lStack_50 == 0) {
    ppFVar11 = &local_88;
    local_88 = pFVar16;
    pUStack_80 = pUStack_a0;
  }
  else {
    local_98 = local_58.Data;
    if ((lStack_50 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      pUVar9 = (UTexture2D *)(*pcVar3)();
      return pUVar9;
    }
    lStack_90 = lVar6;
    ppFVar11 = &local_98;
  }
  local_78.DataPtr = (uchar *)*ppFVar11;
  local_78.ArrayNum = (long64)ppFVar11[1];
  pUVar9 = CreateTransient((int)param_1->_padding_,*(int *)((longlong)&param_1->_padding_ + 4),
                           EVar15,param_2,&local_78);
LAB_148888f80:
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
LAB_148888fae:
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return pUVar9;
}

// GetAllMipProvider @ 14888c920

UTextureAllMipDataProviderFactory * __thiscall UTexture2D::GetAllMipProvider(UTexture2D *this)

{
  int iVar1;
  code *pcVar2;
  UTextureAllMipDataProviderFactory *pUVar3;
  UClass *pUVar4;
  UClass *local_res8;
  
  pcVar2 = *(code **)(this->_padding_ + 0x18);
  local_res8 = Z_Construct_UClass_UTextureAllMipDataProviderFactory_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pUVar3 = (UTextureAllMipDataProviderFactory *)(*pcVar2)(&this->_padding_,&local_res8);
  if (pUVar3 != (UTextureAllMipDataProviderFactory *)0x0) {
    pUVar4 = Z_Construct_UClass_UTextureAllMipDataProviderFactory_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      return pUVar3;
    }
  }
  return (UTextureAllMipDataProviderFactory *)0x0;
}

// GetAssetRegistryTags @ 14888c9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UTexture2D::GetAssetRegistryTags
          (UTexture2D *this,TArray<UObject::FAssetRegistryTag,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<UObject_const_*> *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  uchar *puVar6;
  bool bVar7;
  int iVar8;
  FAssetRegistryTagsContext *pFVar9;
  byte bVar10;
  ForElementType<UObject_const_*> *pFVar11;
  longlong lVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 auStackY_1d8 [32];
  undefined1 auStack_188 [8];
  UTexture2D *pUStack_180;
  int iStack_178;
  int iStack_174;
  ForElementType<UObject_const_*> FStack_170;
  longlong *plStack_168;
  int iStack_160;
  uint uStack_15c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_158;
  undefined4 uStack_150;
  uint uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  longlong *plStack_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  FAssetRegistryTagsContext FStack_108;
  FString aFStack_100 [2];
  undefined4 uStack_d4;
  undefined1 auStack_c8 [32];
  uint *puStack_a8;
  uint uStack_a0;
  int iStack_94;
  void *pvStack_88;
  undefined4 uStack_80;
  FAssetBundleData *pFStack_68;
  bool bStack_53;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar3 = (ForElementType<UObject_const_*> *)(lVar13 + 0xcb8);
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  puVar6 = pFVar11->InlineData;
  for (; pFVar11 !=
         (ForElementType<UObject_const_*> *)(puVar6 + (longlong)*(int *)(lVar13 + 0xcd0) * 8);
      pFVar11 = (ForElementType<UObject_const_*> *)(pFVar11->InlineData + 8)) {
    if (*(UTexture2D **)pFVar11->InlineData == this) {
      return;
    }
  }
  FStack_170 = (ForElementType<UObject_const_*>)this;
  FAssetRegistryTagsContextData::FAssetRegistryTagsContextData
            ((FAssetRegistryTagsContextData *)auStack_c8,(UObject *)this,Uncategorized);
  bStack_53 = *(longlong *)(lVar13 + 0xcb0) != 0;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  pUStack_180 = this;
  if (((pFVar11 <= (ForElementType<UObject_const_*> *)&pUStack_180) &&
      (&pUStack_180 < pFVar11->InlineData + (longlong)*(int *)(lVar13 + 0xcd4) * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 == *(int *)(lVar13 + 0xcd4)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_const_*>_>
                      (0x808,pFVar3,(int *)(lVar13 + 0xcd4));
  }
  *(int *)(lVar13 + 0xcd0) = iVar8 + 1;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  *(UTexture2D **)(pFVar11->InlineData + (longlong)iVar8 * 8) = pUStack_180;
  pcVar5 = *(code **)(this->_padding_ + 0x1b8);
  pFVar9 = FAssetRegistryTagsContext::FAssetRegistryTagsContext
                     (&FStack_108,(FAssetRegistryTagsContextData *)auStack_c8);
  (*pcVar5)(this,pFVar9);
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 != 0) {
    uVar16 = 0;
    if ((int)(iVar8 - 1U) < iVar8) {
      uVar16 = ~(iVar8 - 1U) >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar12 = *(longlong *)(lVar13 + 0xcc8);
    if (*(longlong *)(lVar13 + 0xcc8) == 0) {
      lVar12 = lVar13 + 0xcb8;
    }
    if (*(UTexture2D **)(lVar12 + -8 + (longlong)*(int *)(lVar13 + 0xcd0) * 8) == this)
    goto LAB_1420f919b;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("!GAssetRegistryTagsObjectsBeingForwarded.IsEmpty() && GAssetRegistryTagsObjectsBeingForwarded.Last() == this"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                     ,0x966,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1420f919b:
  TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::Pop
            ((TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xcb8
             ),No);
  uVar16 = (auStack_c8._8_4_ - iStack_94) + param_1->ArrayNum;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar16,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar16 = uStack_a0;
  iStack_160 = 0;
  iStack_148 = 0;
  uStack_15c = 1;
  uStack_14c = 0;
  if (uStack_a0 != 0) {
    puVar17 = (uint *)(auStack_c8 + 0x10);
    if (puStack_a8 != (uint *)0x0) {
      puVar17 = puStack_a8;
    }
    uVar18 = *puVar17;
    while (uVar18 == 0) {
      lVar13 = (longlong)iStack_160;
      iStack_148 = iStack_148 + 0x20;
      iStack_160 = iStack_160 + 1;
      uStack_14c = uStack_a0;
      if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_160)
      goto LAB_1420f9291;
      uVar18 = puVar17[lVar13 + 1];
    }
    uStack_15c = -uVar18 & uVar18;
    uVar15 = (ulonglong)uStack_15c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_178 = (int)lVar13;
    uStack_14c = iStack_178 + -1 + iStack_148;
    if ((int)uStack_a0 < (int)uStack_14c) {
      uStack_14c = uStack_a0;
    }
  }
LAB_1420f9291:
  iStack_140 = auStack_c8._8_4_ - iStack_94;
  plStack_168 = (longlong *)auStack_c8;
  pTStack_158 = (TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10);
  uStack_150 = 0xffffffff;
  TStack_130.CurrentBitIndex = uStack_14c;
  TStack_130.UnvisitedBitMask = 0xffffffff;
  uVar18 = uStack_a0 & 0xffffffe0;
  TStack_130._padding_ = CONCAT44(uStack_15c,iStack_160);
  uStack_144 = uStack_d4;
  iVar8 = (int)uStack_a0 >> 5;
  TStack_130._28_4_ = uStack_d4;
  TStack_130.BaseBitIndex = iStack_148;
  uStack_110 = CONCAT44(uStack_13c,iStack_140);
  bVar10 = (byte)uStack_a0;
  plStack_138 = plStack_168;
  TStack_130.Array = pTStack_158;
  if (((int)uStack_a0 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar16 != uStack_a0) {
    puVar17 = (uint *)(auStack_c8 + 0x10);
    if (puStack_a8 != (uint *)0x0) {
      puVar17 = puStack_a8;
    }
    uVar16 = -1 << (bVar10 & 0x1f) & puVar17[iVar8];
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar8;
      uVar18 = uVar18 + 0x20;
      iVar8 = iVar8 + 1;
      uVar16 = uStack_a0;
      if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
      goto LAB_1420f9392;
      uVar16 = puVar17[lVar13 + 1];
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_174 = (int)lVar13;
    uVar16 = iStack_174 + -1 + uVar18;
    if ((int)uStack_a0 < (int)uVar16) {
      uVar16 = uStack_a0;
    }
  }
LAB_1420f9392:
  while( true ) {
    plVar4 = plStack_138;
    if ((int)plStack_138[1] - *(int *)((longlong)plStack_138 + 0x34) != (int)uStack_110) {
      auStack_188[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStack_188);
    }
    if (((TStack_130.CurrentBitIndex == uVar16) &&
        (TStack_130.Array == (TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10))) &&
       (plVar4 == (longlong *)auStack_c8)) break;
    pFVar14 = (param_1->AllocatorInstance).Data;
    lVar13 = (longlong)TStack_130.CurrentBitIndex * 0x30 + *plVar4;
    pFVar2 = (FScriptContainerElement *)(lVar13 + 8);
    if (((pFVar14 <= pFVar2) && (pFVar2 < pFVar14 + (longlong)*piVar1 * 0x20)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = param_1->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar8 + 1;
    pFVar14 = (param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x20;
    *(undefined8 *)pFVar14 = *(undefined8 *)pFVar2;
    *(undefined8 *)(pFVar14 + 8) = 0;
    *(undefined8 *)(pFVar14 + 8) = *(undefined8 *)(lVar13 + 0x10);
    *(undefined8 *)(lVar13 + 0x10) = 0;
    *(undefined4 *)(pFVar14 + 0x10) = *(undefined4 *)(lVar13 + 0x18);
    *(undefined4 *)(pFVar14 + 0x14) = *(undefined4 *)(lVar13 + 0x1c);
    *(undefined8 *)(lVar13 + 0x18) = 0;
    *(undefined4 *)(pFVar14 + 0x18) = *(undefined4 *)(lVar13 + 0x20);
    *(undefined4 *)(pFVar14 + 0x1c) = *(undefined4 *)(lVar13 + 0x24);
    TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
  }
  uVar15 = (ulonglong)_tls_index;
  plVar4 = *(longlong **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0);
  if (plVar4 != (longlong *)0x0) {
    if (*plVar4 != 0) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)FStack_170,aFStack_100,(UObject *)0x0);
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("*TLegacyGetAssetRegistryTags_OutBundles == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                         ,0x970,L"Object %s has more than one FAssetBundleData!");
      if (aFStack_100[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(aFStack_100[0].Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    **(undefined8 **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0) =
         pFStack_68;
  }
  uStack_80 = 0;
  if (pvStack_88 != (void *)0x0) {
    FMemory::Free(pvStack_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)auStack_c8);
  return;
}

// GetAssetRegistryTags @ 14888c9e0

void __thiscall UTexture2D::GetAssetRegistryTags(UTexture2D *this,FAssetRegistryTagsContext param_1)

{
  FTexturePlatformData *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  EPixelFormatChannelFlags EVar3;
  byte bVar4;
  bool bVar5;
  FName *pFVar6;
  FAssetRegistryTagsContext FVar7;
  EPixelFormat EVar8;
  wchar_t *pwVar9;
  FName local_res8;
  FName local_res18;
  FName local_res20;
  FString local_c8;
  FString local_b8;
  FAssetRegistryTag local_a8;
  FString local_88;
  FAssetRegistryTag local_78;
  FAssetRegistryTag local_58;
  FAssetRegistryTagsContext local_38 [2];
  
  ::FString::PrintfImpl(&local_88,L"%dx%d");
  pFVar6 = ::FName::FName(&local_res8,"Dimensions");
  _Src.Data = local_88.Data.AllocatorInstance.Data;
  local_a8.Name = *pFVar6;
  local_a8.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_88.Data.ArrayNum == 0) {
    local_a8.Value.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_88.Data.ArrayNum,0,(ForAnyElementType *)&local_a8.Value,
               local_88.Data.ArrayNum,&local_a8.Value.Data.ArrayMax);
    memcpy(local_a8.Value.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_88.Data.ArrayNum * 2
          );
  }
  local_a8.Type = TT_Dimensional;
  local_a8.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_a8);
  if (this->PrivatePlatformData == (FTexturePlatformData *)0x0) {
    bVar4 = 0;
  }
  else {
    EVar3 = GetPixelFormatValidChannels(this->PrivatePlatformData->PixelFormat);
    bVar4 = EVar3 >> 3 & 1;
  }
  pwVar9 = L"False";
  if (bVar4 != 0) {
    pwVar9 = L"True";
  }
  ::FString::FString(&local_c8,pwVar9);
  pFVar6 = ::FName::FName(&local_res18,"HasAlphaChannel");
  local_78.Name = *pFVar6;
  local_78.Value.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
  local_78.Value.Data.ArrayNum = local_c8.Data.ArrayNum;
  local_78.Value.Data.ArrayMax = local_c8.Data.ArrayMax;
  local_c8.Data.ArrayNum = 0;
  local_c8.Data.ArrayMax = 0;
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Type = TT_Alphabetical;
  local_78.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_78);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  pFVar1 = this->PrivatePlatformData;
  if (pFVar1 == (FTexturePlatformData *)0x0) {
    EVar8 = PF_Unknown;
  }
  else if (pFVar1->VTData == (FVirtualTextureBuiltData *)0x0) {
    EVar8 = pFVar1->PixelFormat;
  }
  else {
    if (pFVar1->VTData->NumLayers == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("LayerIndex < VTData->NumLayers",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureDerivedData.cpp"
                         ,0xab6,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    EVar8 = pFVar1->VTData->LayerTypes[0].Value;
  }
  ::FString::FString(&local_b8,GPixelFormats[EVar8].Name);
  pFVar6 = ::FName::FName(&local_res20,"Format");
  local_58.Name = *pFVar6;
  local_58.Value.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
  local_58.Value.Data.ArrayNum = local_b8.Data.ArrayNum;
  local_58.Value.Data.ArrayMax = local_b8.Data.ArrayMax;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Type = TT_Alphabetical;
  local_58.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_58);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  FVar7.Data = (FAssetRegistryTagsContextData *)
               FAssetRegistryTagsContext::FAssetRegistryTagsContext(local_38,param_1.Data);
  UObject::GetAssetRegistryTags((UObject *)this,FVar7);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return;
}

// GetAverageBrightness @ 14888d0d0

float __thiscall UTexture2D::GetAverageBrightness(UTexture2D *this,bool param_1,bool param_2)

{
  return __real_bf800000;
}

// GetCPUCopy @ 14888d3c0

TRefCountPtr<FSharedImage_const_> __thiscall UTexture2D::GetCPUCopy(UTexture2D *this)

{
  FTexturePlatformData *pFVar1;
  FSharedImage *pFVar2;
  FSharedImage *in_RDX;
  
  if (((*(char *)((longlong)&this->_padding_ + 5) == '\x01') &&
      (pFVar1 = this->PrivatePlatformData, pFVar1 != (FTexturePlatformData *)0x0)) &&
     ((pFVar1->PackedData & 0x20000000) != 0)) {
    pFVar2 = (pFVar1->CPUCopy).Reference;
    *(FSharedImage **)in_RDX = pFVar2;
    if (pFVar2 != (FSharedImage *)0x0) {
      LOCK();
      *(int *)&pFVar2->field_0x8 = *(int *)&pFVar2->field_0x8 + 1;
      UNLOCK();
      return (TRefCountPtr<FSharedImage_const_>)in_RDX;
    }
  }
  else {
    *(longlong *)in_RDX = 0;
  }
  return (TRefCountPtr<FSharedImage_const_>)in_RDX;
}

// GetDesc @ 14888d930

FString * __thiscall UTexture2D::GetDesc(UTexture2D *this,FString *__return_storage_ptr__)

{
  FVirtualTextureBuiltData *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  
  GetNumMipsAllowed(this,false);
  GetNumMips(this);
  if ((((this->PrivatePlatformData != (FTexturePlatformData *)0x0) &&
       (pFVar1 = this->PrivatePlatformData->VTData, pFVar1 != (FVirtualTextureBuiltData *)0x0)) &&
      (pFVar1->NumLayers == 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LayerIndex < VTData->NumLayers",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureDerivedData.cpp"
                         ,0xab6,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar2)();
    return pFVar4;
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s %dx%d [%s]");
  return __return_storage_ptr__;
}

// GetExtData @ 14888db60

int __thiscall UTexture2D::GetExtData(UTexture2D *this)

{
  if (this->PrivatePlatformData != (FTexturePlatformData *)0x0) {
    return (this->PrivatePlatformData->OptData).ExtData;
  }
  return 0;
}

// GetGlobalMipMapLODBias @ 14888dba0

float __cdecl UTexture2D::GetGlobalMipMapLODBias(void)

{
  TConsoleVariableData<float> *pTVar1;
  bool bVar2;
  longlong lVar3;
  float fVar4;
  
  pTVar1 = CVarSetMipMapLODBias.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      lVar3 = 4;
      goto LAB_14888dbc8;
    }
  }
  lVar3 = 0;
LAB_14888dbc8:
  fVar4 = *(float *)((longlong)pTVar1->ShadowedValue + lVar3);
  if (__real_41700000 <= fVar4) {
    fVar4 = __real_41700000;
  }
  if (fVar4 <= __real_c1700000) {
    fVar4 = __real_c1700000;
  }
  return fVar4;
}

// GetInitialMipData @ 14888dc70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UTexture2D::GetInitialMipData
          (UTexture2D *this,int param_1,TArrayView<void_*,int> *param_2,
          TArrayView<__int64,int> *param_3)

{
  int iVar1;
  code *pcVar2;
  FTexturePlatformData *this_00;
  FVirtualTextureBuiltData *pFVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  UTextureAllMipDataProviderFactory *pUVar8;
  FString *pFVar9;
  undefined4 uStack_9c;
  undefined4 uStack_8c;
  FScriptContainerElement *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  FString local_58;
  TStringView<wchar_t> local_48;
  FString local_38;
  FString local_28;
  
  pUVar8 = GetAllMipProvider(this);
  if (pUVar8 == (UTextureAllMipDataProviderFactory *)0x0) {
    this_00 = this->PrivatePlatformData;
    pFVar9 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_38,(UObject *)0x0);
    iVar1 = (pFVar9->Data).ArrayNum;
    local_48.DataPtr = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    iVar7 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar7 = 0;
    }
    local_48._12_4_ = uStack_8c;
    local_48.Size = iVar7;
    cVar4 = FTexturePlatformData::TryLoadMipsWithSizes
                      (this_00,param_1,param_2->DataPtr,param_3->DataPtr,&local_48);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  else {
    pcVar2 = *(code **)(*(longlong *)pUVar8 + 0x2e8);
    pFVar9 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_58,(UObject *)0x0);
    local_78 = *(undefined4 *)&param_3->DataPtr;
    uStack_74 = *(undefined4 *)((longlong)&param_3->DataPtr + 4);
    iStack_70 = param_3->ArrayNum;
    uStack_6c = *(undefined4 *)&param_3->field_0xc;
    local_88 = (pFVar9->Data).AllocatorInstance.Data;
    iVar1 = (pFVar9->Data).ArrayNum;
    iVar7 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar7 = 0;
    }
    uStack_80 = CONCAT44(uStack_9c,iVar7);
    local_68 = *(undefined4 *)&param_2->DataPtr;
    uStack_64 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
    iStack_60 = param_2->ArrayNum;
    uStack_5c = *(undefined4 *)&param_2->field_0xc;
    cVar4 = (*pcVar2)(pUVar8,param_1,&local_68,&local_78,&local_88);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if ((cVar4 == '\0') && (2 < (byte)LogTexture._0_1_)) {
    if ((this->PrivatePlatformData != (FTexturePlatformData *)0x0) &&
       (((pFVar3 = this->PrivatePlatformData->VTData, pFVar3 != (FVirtualTextureBuiltData *)0x0 &&
         (pFVar3->NumLayers == 0)) &&
        (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("LayerIndex < VTData->NumLayers",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureDerivedData.cpp"
                            ,0xab6,L""), bVar5)))) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_28,(UObject *)0x0);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTexture);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return (bool)cVar4;
}

// GetMaterialType @ 14888dfa0

EMaterialValueType __thiscall UTexture2D::GetMaterialType(UTexture2D *this)

{
  EMaterialValueType EVar1;
  
  EVar1 = MCT_Texture2D;
  if ((this->_padding_ & 0x4000000000000) != 0) {
    EVar1 = MCT_TextureVirtual;
  }
  return EVar1;
}

// GetMinTextureResidentMipCount @ 14888e040

int __thiscall UTexture2D::GetMinTextureResidentMipCount(UTexture2D *this)

{
  uint uVar1;
  int iVar2;
  
  if (this->PrivatePlatformData != (FTexturePlatformData *)0x0) {
    uVar1 = (this->PrivatePlatformData->OptData).NumMipsInTail;
    if ((int)uVar1 < UTexture::GMinTextureResidentMipCount) {
      uVar1 = UTexture::GMinTextureResidentMipCount;
    }
    return uVar1;
  }
  iVar2 = 0;
  if (0 < UTexture::GMinTextureResidentMipCount) {
    iVar2 = UTexture::GMinTextureResidentMipCount;
  }
  return iVar2;
}

// GetMipData @ 14888e080

void __thiscall UTexture2D::GetMipData(UTexture2D *this,int param_1,void **param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  void **local_18;
  int iStack_10;
  
  pcVar1 = *(code **)(this->_padding_ + 0x3b8);
  iVar3 = (this->PrivatePlatformData->Mips).Array.ArrayNum - param_1;
  if (iVar3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  iStack_10 = iVar3;
  local_18 = param_2;
  (*pcVar1)(this,param_1,&local_18,&local_28);
  return;
}

// GetMipTailBaseIndex @ 14888ea50

int __thiscall UTexture2D::GetMipTailBaseIndex(UTexture2D *this)

{
  uint uVar1;
  int iVar2;
  FTexturePlatformData *pFVar3;
  int iVar4;
  
  pFVar3 = this->PrivatePlatformData;
  if (pFVar3 != (FTexturePlatformData *)0x0) {
    uVar1 = (pFVar3->OptData).NumMipsInTail;
    iVar2 = (pFVar3->Mips).Array.ArrayNum;
    iVar4 = iVar2 - uVar1;
    if ((int)uVar1 < 1) {
      iVar4 = iVar2 + -1;
    }
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    return iVar4;
  }
  return 0;
}

// GetNumMips @ 14888eb00

int __thiscall UTexture2D::GetNumMips(UTexture2D *this)

{
  FTexturePlatformData *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  
  if (this->PrivatePlatformData == (FTexturePlatformData *)0x0) {
    return 0;
  }
  cVar3 = (**(code **)(this->_padding_ + 0x348))();
  pFVar1 = this->PrivatePlatformData;
  if (cVar3 != '\0') {
    if (pFVar1->VTData == (FVirtualTextureBuiltData *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("VTData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureDerivedData.cpp"
                         ,0xaae,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
    }
    return pFVar1->VTData->NumMips;
  }
  return (pFVar1->Mips).Array.ArrayNum;
}

// GetNumMipsAllowed @ 14888ebc0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall UTexture2D::GetNumMipsAllowed(UTexture2D *this,bool param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  UDeviceProfileManager *this_00;
  UDeviceProfile *this_01;
  UTextureLODSettings *this_02;
  uint uVar4;
  
  iVar1 = GetNumMips(this);
  this_00 = UDeviceProfileManager::Get(false);
  this_01 = UDeviceProfileManager::GetActiveProfile(this_00);
  this_02 = UDeviceProfile::GetTextureLODSettings(this_01);
  iVar2 = UTextureLODSettings::CalculateLODBias(this_02,(UTexture *)this,false);
  uVar3 = GRHIGlobals.MaxTextureMipCount;
  if (iVar1 - iVar2 < GRHIGlobals.MaxTextureMipCount) {
    uVar3 = iVar1 - iVar2;
  }
  uVar4 = 1;
  if (1 < (int)uVar3) {
    uVar4 = uVar3;
  }
  uVar3 = 0;
  if (this->PrivatePlatformData != (FTexturePlatformData *)0x0) {
    uVar3 = (this->PrivatePlatformData->OptData).NumMipsInTail;
  }
  if ((int)uVar3 < UTexture::GMinTextureResidentMipCount) {
    uVar3 = UTexture::GMinTextureResidentMipCount;
  }
  if ((int)uVar3 < iVar1) {
    if ((int)uVar3 < (int)uVar4) {
      uVar3 = uVar4;
    }
    return uVar3;
  }
  return iVar1;
}

// GetNumResidentMips @ 14888ee60

int __thiscall UTexture2D::GetNumResidentMips(UTexture2D *this)

{
  code *UNRECOVERED_JUMPTABLE;
  char cVar1;
  int iVar2;
  FTextureResource *pFVar3;
  longlong lVar4;
  
  pFVar3 = UTexture::GetResource((UTexture *)this);
  if (pFVar3 != (FTextureResource *)0x0) {
    cVar1 = (**(code **)(this->_padding_ + 0x348))(this);
    if (cVar1 != '\0') {
      pFVar3 = UTexture::GetResource((UTexture *)this);
      UNRECOVERED_JUMPTABLE = *(code **)(pFVar3->_padding_ + 0xc0);
                    /* WARNING: Could not recover jumptable at 0x00014888ee9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (*UNRECOVERED_JUMPTABLE)(pFVar3,UNRECOVERED_JUMPTABLE);
      return iVar2;
    }
    if (this->_padding_ != 0) {
      return (uint)((ulonglong)this->_padding_ >> 0x28) & 0xff;
    }
    pFVar3 = UTexture::GetResource((UTexture *)this);
    if ((longlong *)pFVar3->_padding_ != (longlong *)0x0) {
      lVar4 = (**(code **)(*(longlong *)pFVar3->_padding_ + 0x20))();
      return (int)*(byte *)(lVar4 + 0x30);
    }
  }
  return 0;
}

// GetPixelFormat @ 14888f4b0

EPixelFormat __thiscall UTexture2D::GetPixelFormat(UTexture2D *this,uint param_1)

{
  FTexturePlatformData *pFVar1;
  code *pcVar2;
  bool bVar3;
  EPixelFormat EVar4;
  
  pFVar1 = this->PrivatePlatformData;
  if (pFVar1 == (FTexturePlatformData *)0x0) {
    return PF_Unknown;
  }
  if (pFVar1->VTData != (FVirtualTextureBuiltData *)0x0) {
    if (pFVar1->VTData->NumLayers <= param_1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LayerIndex < VTData->NumLayers",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureDerivedData.cpp"
                         ,0xab6,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
    }
    return pFVar1->VTData->LayerTypes[param_1].Value;
  }
  if (param_1 != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LayerIndex == 0u",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureDerivedData.cpp"
                       ,0xab9,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  return pFVar1->PixelFormat;
}

// GetPlatformData @ 14888f6a0

FTexturePlatformData * __thiscall UTexture2D::GetPlatformData(UTexture2D *this)

{
  return this->PrivatePlatformData;
}

// GetPlatformData @ 14888f6b0

FTexturePlatformData * __thiscall UTexture2D::GetPlatformData(UTexture2D *this)

{
  return this->PrivatePlatformData;
}

// GetPlatformMips @ 14888f700

TIndirectArray<FTexture2DMipMap,TSizedDefaultAllocator<32>_> * __thiscall
UTexture2D::GetPlatformMips(UTexture2D *this)

{
  return &this->PrivatePlatformData->Mips;
}

// GetPrivateStaticClass @ 14888f9e0

UClass * __cdecl UTexture2D::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTexture2D.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Texture2D",&Z_Registration_Info_UClass_UTexture2D.InnerSingleton,
               StaticRegisterNativesUTexture2D,0x170,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UTexture2D>,InternalVTableHelperCtorCaller<UTexture2D>,local_res8
               ,UTexture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTexture2D.InnerSingleton;
}

// GetResourceMemSettings @ 1488900f0

bool __thiscall
UTexture2D::GetResourceMemSettings
          (UTexture2D *this,int param_1,int *param_2,int *param_3,int *param_4,uint *param_5)

{
  return false;
}

// GetResourceSizeEx @ 1488905d0

void __thiscall UTexture2D::GetResourceSizeEx(UTexture2D *this,FResourceSizeEx *param_1)

{
  char cVar1;
  uint uVar2;
  Type TVar3;
  int iVar4;
  
  UObject::GetResourceSizeEx((UObject *)this,param_1);
  cVar1 = (**(code **)(this->_padding_ + 0x348))(this);
  if (cVar1 != '\0') {
    uVar2 = FVirtualTextureBuiltData::GetMemoryFootprint(this->PrivatePlatformData->VTData);
    FResourceSizeEx::AddUnknownMemoryBytes(param_1,(ulonglong)uVar2);
    return;
  }
  TVar3 = FResourceSizeEx::GetResourceSizeMode(param_1);
  if (TVar3 == Exclusive) {
    iVar4 = GetNumResidentMips(this);
  }
  else {
    iVar4 = GetNumMipsAllowed(this,true);
  }
  iVar4 = CalcTextureMemorySize(this,iVar4);
  FResourceSizeEx::AddDedicatedVideoMemoryBytes(param_1,(longlong)iVar4);
  return;
}

// GetRunningPlatformData @ 148890720

FTexturePlatformData ** __thiscall UTexture2D::GetRunningPlatformData(UTexture2D *this)

{
  return &this->PrivatePlatformData;
}

// GetSizeX @ 148890840

int __thiscall UTexture2D::GetSizeX(UTexture2D *this)

{
  if (this->PrivatePlatformData != (FTexturePlatformData *)0x0) {
    return this->PrivatePlatformData->SizeX;
  }
  return 0;
}

// GetSizeY @ 148890970

int __thiscall UTexture2D::GetSizeY(UTexture2D *this)

{
  if (this->PrivatePlatformData != (FTexturePlatformData *)0x0) {
    return this->PrivatePlatformData->SizeY;
  }
  return 0;
}

// GetSourceArtCRC @ 148890a10

bool __thiscall UTexture2D::GetSourceArtCRC(UTexture2D *this,uint *param_1)

{
  return false;
}

// HasAlphaChannel @ 148893790

bool __thiscall UTexture2D::HasAlphaChannel(UTexture2D *this)

{
  EPixelFormatChannelFlags EVar1;
  
  if (this->PrivatePlatformData != (FTexturePlatformData *)0x0) {
    EVar1 = GetPixelFormatValidChannels(this->PrivatePlatformData->PixelFormat);
    return (bool)(EVar1 >> 3 & 1);
  }
  return false;
}

// HasSameSourceArt @ 148893a10

bool __thiscall UTexture2D::HasSameSourceArt(UTexture2D *this,UTexture2D *param_1)

{
  return false;
}

// IsCurrentlyVirtualTextured @ 148895af0

bool __thiscall UTexture2D::IsCurrentlyVirtualTextured(UTexture2D *this)

{
  if (((this->_padding_ & 0x4000000000000) != 0) &&
     (this->PrivatePlatformData != (FTexturePlatformData *)0x0)) {
    return this->PrivatePlatformData->VTData != (FVirtualTextureBuiltData *)0x0;
  }
  return false;
}

// IsReadyForAsyncPostLoad @ 148895d70

bool __thiscall UTexture2D::IsReadyForAsyncPostLoad(UTexture2D *this)

{
  return true;
}

// PostLoad @ 148896640

void __thiscall UTexture2D::PostLoad(UTexture2D *this)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  UClass *pUVar5;
  
  UObject::PostLoad((UObject *)this);
  bVar4 = UTexture::IsCookPlatformTilingDisabled((UTexture *)this,(ITargetPlatformSettings *)0x0);
  if (bVar4) {
    pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
    *pbVar1 = *pbVar1 | 2;
  }
  bVar4 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar4) {
    lVar3 = this->_padding_;
    if (lVar3 != 0) {
      pUVar5 = UTextureCube::StaticClass();
      lVar3 = *(longlong *)(lVar3 + 0x10);
      iVar2 = (int)pUVar5->_padding_;
      if ((iVar2 <= *(int *)(lVar3 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar5->_padding_)) {
        return;
      }
    }
    (**(code **)(this->_padding_ + 0x328))(this);
  }
  return;
}

// PreSave @ 148896790

void __thiscall UTexture2D::PreSave(UTexture2D *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  FScriptContainerElement *local_res10;
  FDestructionSentinel local_38;
  
  pFVar1 = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(pFVar1 + 0x9c) = *(int *)(pFVar1 + 0x9c) + 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&UTexture::PreSaveEvent,
             (FWriteAccessScope *)&local_38);
  bVar4 = false;
  UTexture::PreSaveEvent._28_4_ = UTexture::PreSaveEvent._28_4_ + 1;
  uVar9 = UTexture::PreSaveEvent._16_4_ - 1;
  if (-1 < (int)uVar9) {
    lVar8 = (longlong)(int)uVar9 << 4;
    bVar4 = false;
    do {
      uVar7 = 0;
      if ((int)uVar9 < (int)UTexture::PreSaveEvent._16_4_) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((*(int *)(lVar8 + 8 + UTexture::PreSaveEvent._8_8_) == 0) ||
          (plVar2 = *(longlong **)(lVar8 + UTexture::PreSaveEvent._8_8_), plVar2 == (longlong *)0x0)
          ) || (cVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,this), cVar6 == '\0')) {
        bVar4 = true;
      }
      lVar8 = lVar8 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  UTexture::PreSaveEvent._28_4_ = UTexture::PreSaveEvent._28_4_ + -1;
  if (bVar4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&UTexture::PreSaveEvent,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  *(int *)(pFVar1 + 0x9c) = *(int *)(pFVar1 + 0x9c) + 1;
  local_res10 = pFVar1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)&local_res10);
  return;
}

// RefreshSamplerStates @ 148896a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UTexture2D::RefreshSamplerStates(UTexture2D *this)

{
  code *pcVar1;
  bool bVar2;
  FTextureResource *pFVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FTexture2DResource *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FTexture2DResource *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pFVar3 = UTexture::GetResource((UTexture *)this);
  if (pFVar3 != (FTextureResource *)0x0) {
    pFVar3 = UTexture::GetResource((UTexture *)this);
    pFStack_70 = (FTexture2DResource *)(**(code **)(pFVar3->_padding_ + 0x58))(pFVar3);
    if (pFStack_70 != (FTexture2DResource *)0x0) {
      FTexture2DResource::CacheSamplerStateInitializer(pFStack_70,this);
      local_60 = (undefined ***)0x0;
      local_78 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UTexture2D::RefreshSamplerStates'::`8'::<lambda_1>,1,0>::
                  _vftable_;
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UTexture2D::RefreshSamplerStates'::__l8::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
      this_00 = FRenderCommandList::GetInstanceTLS();
      if (this_00 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_UTexture2D::RefreshSamplerStates_::__l8::TSTR_RefreshSamplerStatesCommand1512>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
      }
      else {
        this_01 = FRenderCommandList::GetRenderThread(this_00);
        local_58._0_8_ = local_88[0];
        local_30 = local_60;
        local_48 = local_78;
        pFStack_40 = pFStack_70;
        local_38 = local_68;
        local_88[0] = (code *)0x0;
        local_28 = 2;
        pFVar4 = (FRenderCommandTag *)
                 TRenderCommandTag<`UTexture2D::RefreshSamplerStates'::__l8::TSTR_RefreshSamplerStatesCommand1512>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_58,pFVar4);
        uVar6 = (ulonglong)local_28;
        if ((2 < uVar6) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar6] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_58._0_8_ != (code *)0x0) {
            pppuVar5 = (undefined ***)(local_58 + 0x10);
            if (local_30 != (undefined ***)0x0) {
              pppuVar5 = local_30;
            }
            (*(code *)(*pppuVar5)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar6])(local_58);
        }
      }
      if (local_88[0] != (code *)0x0) {
        pppuVar5 = &local_78;
        if (local_60 != (undefined ***)0x0) {
          pppuVar5 = local_60;
        }
        (*(code *)(*pppuVar5)[2])();
      }
    }
  }
  return;
}

// Serialize @ 148898340

void __thiscall UTexture2D::Serialize(UTexture2D *this,FArchive *param_1)

{
  undefined1 *puVar1;
  uint *puVar2;
  ulonglong *puVar3;
  UTextureAllMipDataProviderFactory *pUVar4;
  uint uVar5;
  bool bVar6;
  uint local_res10 [2];
  FStripDataFlags local_res18 [4];
  FLLMScope local_res20 [2];
  FMemScope local_28 [2];
  
  FLLMScope::FLLMScope(local_res20,TextureMetaData,false,None,Default,true);
  FMemScope::FMemScope(local_28,TextureMetaData,true);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  UObject::Serialize((UObject *)this,param_1);
  FStripDataFlags::FStripDataFlags
            ((FStripDataFlags *)local_res10,param_1,'\0',&GOldestLoadablePackageFileUEVersion);
  FStripDataFlags::FStripDataFlags(local_res18,param_1,'\0',&GOldestLoadablePackageFileUEVersion);
  if ((*(longlong *)&param_1->field_0x68 == 0) ||
     (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  bVar6 = SUB41(uVar5,0);
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = &param_1->field_0x28;
  puVar2 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar2) {
    local_res10[0] = 0;
    if ((*puVar1 & 1) == 0) {
      local_res10[0] = uVar5;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar5 = local_res10[0];
    if ((*puVar1 & 1) != 0) goto LAB_148898447;
  }
  else {
    uVar5 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar2;
LAB_148898447:
    bVar6 = uVar5 != 0;
  }
  if (((*(longlong *)&param_1->field_0x68 == 0) ||
      (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) && (bVar6 == false))
  goto LAB_1488984ef;
  bVar6 = true;
  if ((*puVar1 & 4) != 0) {
    pUVar4 = GetAllMipProvider(this);
    bVar6 = pUVar4 == (UTextureAllMipDataProviderFactory *)0x0;
  }
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  puVar2 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar2) {
    local_res10[0] = 0;
    if ((*puVar1 & 1) == 0) {
      local_res10[0] = (uint)bVar6;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar5 = local_res10[0];
    if ((*puVar1 & 1) != 0) goto LAB_1488984dc;
  }
  else {
    uVar5 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar2;
LAB_1488984dc:
    bVar6 = uVar5 != 0;
  }
  UTexture::SerializeCookedPlatformData((UTexture *)this,param_1,bVar6);
LAB_1488984ef:
  FMemScope::~FMemScope(local_28);
  FLLMScope::~FLLMScope(local_res20);
  return;
}

// Serialize @ 148898520

void __thiscall UTexture2D::Serialize(UTexture2D *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetPlatformData @ 14889b5e0

void __thiscall UTexture2D::SetPlatformData(UTexture2D *this,FTexturePlatformData *param_1)

{
  FTexturePlatformData *this_00;
  
  if (this->PrivatePlatformData != (FTexturePlatformData *)0x0) {
    UTexture::ReleaseResource((UTexture *)this);
    this_00 = this->PrivatePlatformData;
    if (this_00 != (FTexturePlatformData *)0x0) {
      FTexturePlatformData::~FTexturePlatformData(this_00);
      ::operator_delete(this_00,0x38);
    }
    this->PrivatePlatformData = param_1;
    return;
  }
  this->PrivatePlatformData = param_1;
  return;
}

// StaticRegisterNativesUTexture2D @ 14889bb40

void __cdecl UTexture2D::StaticRegisterNativesUTexture2D(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UTexture2D_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StreamIn @ 14889bc10

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall UTexture2D::StreamIn(UTexture2D *this,int param_1,bool param_2)

{
  longlong *plVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  FTexturePlatformData *pFVar8;
  code *pcVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 uVar12;
  FTextureResource *pFVar13;
  FVirtualTexture2DResource *pFVar14;
  FTextureStreamIn *pFVar15;
  UClass *pUVar16;
  FTextureStreamIn *pFVar17;
  FTexture2DStreamIn_DerivedData_Virtual *this_00;
  FTexture2DStreamIn_DerivedData_AsyncCreate *this_01;
  FTexture2DStreamIn_DerivedData_AsyncReallocate *this_02;
  FTexture2DStreamIn_IO_Virtual *this_03;
  FTexture2DStreamIn_IO_AsyncCreate *this_04;
  FTexture2DStreamIn_IO_AsyncReallocate *this_05;
  FTexture2DMipDataProvider_IO *this_06;
  FTextureStreamIn *pFVar18;
  FTexture2DMipAllocator_Virtual *this_07;
  FTextureStreamIn *pFVar19;
  FTexture2DMipAllocator_AsyncCreate *this_08;
  FTexture2DMipAllocator_AsyncReallocate *this_09;
  FTextureStreamIn *pFVar20;
  FTextureStreamIn *pFVar21;
  longlong *plVar22;
  undefined1 local_res20 [8];
  
  bVar11 = IsInGameThread();
  if ((!bVar11) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Texture2D.cpp"
                          ,0x794,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    uVar12 = (*pcVar9)();
    return (bool)uVar12;
  }
  pFVar13 = UTexture::GetResource((UTexture *)this);
  pFVar21 = (FTextureStreamIn *)0x0;
  pFVar20 = (FTextureStreamIn *)0x0;
  pFVar15 = pFVar21;
  if (pFVar13 != (FTextureResource *)0x0) {
    pFVar14 = (FVirtualTexture2DResource *)(**(code **)(pFVar13->_padding_ + 0x98))(pFVar13);
    if (pFVar14 != (FVirtualTexture2DResource *)0x0) {
      plVar1 = &this->_padding_;
      lVar10 = *plVar1;
      if ((((((byte)lVar10 & 1) != 0) &&
           (bVar2 = *(byte *)((longlong)&this->_padding_ + 5), (int)(uint)bVar2 < param_1)) &&
          (bVar3 = *(byte *)((longlong)&this->_padding_ + 3), bVar2 < bVar3)) &&
         (pFVar21 = pFVar20, *(byte *)((longlong)&this->_padding_ + 6) == bVar2)) {
        if (param_1 < (int)(uint)bVar3) {
          bVar3 = (byte)param_1;
        }
        pFVar21 = (FTextureStreamIn *)&DAT_00000001;
        *(byte *)((longlong)&this->_padding_ + 6) = bVar3;
        *(byte *)plVar1 = (byte)lVar10 | 8;
        StreamVirtualTextureMips(pFVar14,(FStreamableRenderResourceState *)plVar1,param_1);
      }
      return (bool)(char)pFVar21;
    }
    pFVar15 = (FTextureStreamIn *)(**(code **)(pFVar13->_padding_ + 0x58))(pFVar13);
  }
  bVar11 = UStreamableRenderAsset::HasPendingInitOrStreaming((UStreamableRenderAsset *)this,false);
  if (((bVar11) || (bVar2 = (byte)this->_padding_, (bVar2 & 1) == 0)) ||
     ((bVar3 = *(byte *)((longlong)&this->_padding_ + 5), param_1 <= (int)(uint)bVar3 ||
      ((bVar4 = *(byte *)((longlong)&this->_padding_ + 3), bVar4 <= bVar3 ||
       (*(byte *)((longlong)&this->_padding_ + 6) != bVar3)))))) {
    return false;
  }
  if (param_1 < (int)(uint)bVar4) {
    bVar4 = (byte)param_1;
  }
  *(byte *)((longlong)&this->_padding_ + 6) = bVar4;
  *(byte *)&this->_padding_ = bVar2 | 8;
  if (pFVar15 == (FTextureStreamIn *)0x0) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_7259708857365035100>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Texture2D.cpp"
                        ,0x7a4,"Texture2DResource");
    if (!bVar11) {
      return false;
    }
    pcVar9 = (code *)swi(3);
    uVar12 = (*pcVar9)();
    return (bool)uVar12;
  }
  pFVar17 = pFVar21;
  if (GUseGenericStreamingPath == 2) {
LAB_14889be3d:
    if (GUseGenericStreamingPath != 1) {
      pFVar8 = this->PrivatePlatformData;
      if ((pFVar8 == (FTexturePlatformData *)0x0) ||
         ((bVar11 = Algo::
                    NoneOf<TIndirectArray<FTexture2DMipMap,TSizedDefaultAllocator<32>_>,UE::FDerivedData_FTexture2DMipMap::*>
                              (&pFVar8->Mips,(pdm_f58834bd)0x0), bVar11 &&
          ((pFVar8->VTData == (FVirtualTextureBuiltData *)0x0 ||
           (bVar11 = Algo::
                     NoneOf<TArray<FVirtualTextureDataChunk,TSizedDefaultAllocator<32>_>,UE::FDerivedData_FVirtualTextureDataChunk::*>
                               (&pFVar8->VTData->Chunks,(pdm_7ca34b7b)0x0), bVar11)))))) {
        if (pFVar15->field_0xa0 == '\0') {
          if (GRHIGlobals.SupportsAsyncTextureCreation == false) {
            this_05 = ::operator_new(0x270);
            if (this_05 != (FTexture2DStreamIn_IO_AsyncReallocate *)0x0) {
              pFVar20 = (FTextureStreamIn *)
                        FTexture2DStreamIn_IO_AsyncReallocate::FTexture2DStreamIn_IO_AsyncReallocate
                                  (this_05,this,param_2);
            }
          }
          else {
            this_04 = ::operator_new(0x270);
            if (this_04 != (FTexture2DStreamIn_IO_AsyncCreate *)0x0) {
              pFVar20 = (FTextureStreamIn *)
                        FTexture2DStreamIn_IO_AsyncCreate::FTexture2DStreamIn_IO_AsyncCreate
                                  (this_04,this,param_2);
            }
          }
        }
        else {
          this_03 = ::operator_new(0x270);
          if (this_03 != (FTexture2DStreamIn_IO_Virtual *)0x0) {
            pFVar20 = (FTextureStreamIn *)
                      FTexture2DStreamIn_IO_Virtual::FTexture2DStreamIn_IO_Virtual
                                (this_03,this,param_2);
          }
        }
      }
      else if (pFVar15->field_0xa0 == '\0') {
        if (GRHIGlobals.SupportsAsyncTextureCreation == false) {
          this_02 = ::operator_new(0x270);
          if (this_02 != (FTexture2DStreamIn_DerivedData_AsyncReallocate *)0x0) {
            pFVar20 = (FTextureStreamIn *)
                      UE::FTexture2DStreamIn_DerivedData_AsyncReallocate::
                      FTexture2DStreamIn_DerivedData_AsyncReallocate(this_02,this,param_2);
          }
        }
        else {
          this_01 = ::operator_new(0x270);
          if (this_01 != (FTexture2DStreamIn_DerivedData_AsyncCreate *)0x0) {
            pFVar20 = (FTextureStreamIn *)
                      UE::FTexture2DStreamIn_DerivedData_AsyncCreate::
                      FTexture2DStreamIn_DerivedData_AsyncCreate(this_01,this,param_2);
          }
        }
      }
      else {
        this_00 = ::operator_new(0x270);
        pFVar20 = pFVar21;
        if (this_00 != (FTexture2DStreamIn_DerivedData_Virtual *)0x0) {
          pFVar20 = (FTextureStreamIn *)
                    UE::FTexture2DStreamIn_DerivedData_Virtual::
                    FTexture2DStreamIn_DerivedData_Virtual(this_00,this,param_2);
        }
      }
      goto LAB_14889c03b;
    }
  }
  else {
    plVar22 = (longlong *)this->_padding_;
    iVar5 = (int)this->_padding_;
    plVar1 = plVar22 + iVar5;
    while( true ) {
      if ((int)this->_padding_ != iVar5) {
        `TCheckedPointerIterator<TObjectPtr<UAssetUserData>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (plVar22 == plVar1) break;
      plVar7 = (longlong *)*plVar22;
      if (plVar7 != (longlong *)0x0) {
        pUVar16 = Z_Construct_UClass_UTextureMipDataProviderFactory_NoRegister();
        iVar6 = (int)pUVar16->_padding_;
        if (((iVar6 <= *(int *)(plVar7[2] + 0x38)) &&
            ((longlong *)*(undefined1 **)(*(longlong *)(plVar7[2] + 0x30) + (longlong)iVar6 * 8) ==
             &pUVar16->_padding_)) &&
           (pFVar17 = (FTextureStreamIn *)(**(code **)(*plVar7 + 0x2d0))(plVar7),
           pFVar17 != (FTextureStreamIn *)0x0)) goto LAB_14889bf7c;
      }
      plVar22 = plVar22 + 1;
    }
    if (pFVar17 == (FTextureStreamIn *)0x0) goto LAB_14889be3d;
  }
LAB_14889bf7c:
  this_06 = ::operator_new(0x160);
  pFVar18 = pFVar21;
  if (this_06 != (FTexture2DMipDataProvider_IO *)0x0) {
    pFVar18 = (FTextureStreamIn *)
              FTexture2DMipDataProvider_IO::FTexture2DMipDataProvider_IO
                        (this_06,(UTexture *)this,param_2);
  }
  pFVar19 = pFVar21;
  if (pFVar15->field_0xa0 == '\0') {
    if (GRHIGlobals.SupportsAsyncTextureCreation == false) {
      this_09 = ::operator_new(0x78);
      if (this_09 != (FTexture2DMipAllocator_AsyncReallocate *)0x0) {
        pFVar19 = (FTextureStreamIn *)
                  FTexture2DMipAllocator_AsyncReallocate::FTexture2DMipAllocator_AsyncReallocate
                            (this_09,(UTexture *)this);
      }
    }
    else {
      this_08 = ::operator_new(0xc0);
      if (this_08 != (FTexture2DMipAllocator_AsyncCreate *)0x0) {
        pFVar19 = (FTextureStreamIn *)
                  FTexture2DMipAllocator_AsyncCreate::FTexture2DMipAllocator_AsyncCreate
                            (this_08,(UTexture *)this);
      }
    }
  }
  else {
    this_07 = ::operator_new(0x78);
    if (this_07 != (FTexture2DMipAllocator_Virtual *)0x0) {
      pFVar19 = (FTextureStreamIn *)
                FTexture2DMipAllocator_Virtual::FTexture2DMipAllocator_Virtual
                          (this_07,(UTexture *)this);
    }
  }
  pFVar15 = ::operator_new(0x440);
  pFVar20 = pFVar21;
  if (pFVar15 != (FTextureStreamIn *)0x0) {
    pFVar20 = FTextureStreamIn::FTextureStreamIn
                        (pFVar15,(UTexture *)this,(FTextureMipAllocator *)pFVar19,
                         (FTextureMipDataProvider *)pFVar17,(FTextureMipDataProvider *)pFVar18);
  }
LAB_14889c03b:
  pFVar21 = (FTextureStreamIn *)this->_padding_;
  if (pFVar21 != pFVar20) {
    this->_padding_ = (longlong)pFVar20;
    if (pFVar20 != (FTextureStreamIn *)0x0) {
      LOCK();
      ((FThreadSafeCounter *)&pFVar20->field_0x64)->Counter =
           ((FThreadSafeCounter *)&pFVar20->field_0x64)->Counter + 1;
      UNLOCK();
    }
    if (pFVar21 != (FTextureStreamIn *)0x0) {
      FRenderAssetUpdate::Release((FRenderAssetUpdate *)pFVar21);
    }
  }
  return *(char *)(this->_padding_ + 0x5c) == '\0';
}

// StreamOut @ 14889c090

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall UTexture2D::StreamOut(UTexture2D *this,int param_1)

{
  longlong *plVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 uVar7;
  FTextureResource *pFVar8;
  FVirtualTexture2DResource *pFVar9;
  FTexture2DStreamOut_Virtual *pFVar10;
  FTexture2DStreamOut_AsyncCreate *this_00;
  FTexture2DStreamOut_AsyncReallocate *this_01;
  byte bVar11;
  FTexture2DStreamOut_Virtual *pFVar12;
  FTexture2DStreamOut_Virtual *pFVar13;
  
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Texture2D.cpp"
                         ,0x81c,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  pFVar8 = UTexture::GetResource((UTexture *)this);
  pFVar13 = (FTexture2DStreamOut_Virtual *)0x0;
  pFVar12 = (FTexture2DStreamOut_Virtual *)0x0;
  pFVar10 = pFVar13;
  if (pFVar8 != (FTextureResource *)0x0) {
    pFVar9 = (FVirtualTexture2DResource *)(**(code **)(pFVar8->_padding_ + 0x98))(pFVar8);
    if (pFVar9 != (FVirtualTexture2DResource *)0x0) {
      plVar1 = &this->_padding_;
      lVar5 = *plVar1;
      if ((((((byte)lVar5 & 1) != 0) &&
           (bVar2 = *(byte *)((longlong)&this->_padding_ + 5), param_1 < (int)(uint)bVar2)) &&
          (bVar3 = *(byte *)((longlong)&this->_padding_ + 1), bVar3 < bVar2)) &&
         (pFVar13 = pFVar12, *(byte *)((longlong)&this->_padding_ + 6) == bVar2)) {
        if ((int)(uint)bVar3 < param_1) {
          bVar3 = (byte)param_1;
        }
        pFVar13 = (FTexture2DStreamOut_Virtual *)&DAT_00000001;
        *(byte *)((longlong)&this->_padding_ + 6) = bVar3;
        *(byte *)plVar1 = (byte)lVar5 | 8;
        StreamVirtualTextureMips(pFVar9,(FStreamableRenderResourceState *)plVar1,param_1);
      }
      return (bool)(char)pFVar13;
    }
    pFVar10 = (FTexture2DStreamOut_Virtual *)(**(code **)(pFVar8->_padding_ + 0x58))(pFVar8);
  }
  bVar6 = UStreamableRenderAsset::HasPendingInitOrStreaming((UStreamableRenderAsset *)this,false);
  if (((!bVar6) && (bVar2 = (byte)this->_padding_, (bVar2 & 1) != 0)) &&
     ((bVar3 = *(byte *)((longlong)&this->_padding_ + 5), param_1 < (int)(uint)bVar3 &&
      ((bVar11 = *(byte *)((longlong)&this->_padding_ + 1), bVar11 < bVar3 &&
       (*(byte *)((longlong)&this->_padding_ + 6) == bVar3)))))) {
    if ((int)(uint)bVar11 < param_1) {
      bVar11 = (byte)param_1;
    }
    *(byte *)((longlong)&this->_padding_ + 6) = bVar11;
    *(byte *)&this->_padding_ = bVar2 | 8;
    if (pFVar10 != (FTexture2DStreamOut_Virtual *)0x0) {
      if (pFVar10->field_0xa0 == '\0') {
        if (GRHIGlobals.SupportsAsyncTextureStreamOut == false) {
          this_01 = ::operator_new(0xf0);
          if (this_01 != (FTexture2DStreamOut_AsyncReallocate *)0x0) {
            pFVar12 = (FTexture2DStreamOut_Virtual *)
                      FTexture2DStreamOut_AsyncReallocate::FTexture2DStreamOut_AsyncReallocate
                                (this_01,this);
          }
        }
        else {
          this_00 = ::operator_new(0xf0);
          pFVar12 = pFVar13;
          if (this_00 != (FTexture2DStreamOut_AsyncCreate *)0x0) {
            pFVar12 = (FTexture2DStreamOut_Virtual *)
                      FTexture2DStreamOut_AsyncCreate::FTexture2DStreamOut_AsyncCreate(this_00,this)
            ;
          }
        }
      }
      else {
        pFVar10 = ::operator_new(0xf0);
        pFVar12 = pFVar13;
        if (pFVar10 != (FTexture2DStreamOut_Virtual *)0x0) {
          pFVar12 = FTexture2DStreamOut_Virtual::FTexture2DStreamOut_Virtual(pFVar10,this);
        }
      }
      pFVar13 = (FTexture2DStreamOut_Virtual *)this->_padding_;
      if (pFVar13 != pFVar12) {
        this->_padding_ = (longlong)pFVar12;
        if (pFVar12 != (FTexture2DStreamOut_Virtual *)0x0) {
          LOCK();
          ((FThreadSafeCounter *)&pFVar12->field_0x64)->Counter =
               ((FThreadSafeCounter *)&pFVar12->field_0x64)->Counter + 1;
          UNLOCK();
        }
        if (pFVar13 != (FTexture2DStreamOut_Virtual *)0x0) {
          FRenderAssetUpdate::Release((FRenderAssetUpdate *)pFVar13);
        }
      }
      return *(char *)(this->_padding_ + 0x5c) == '\0';
    }
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7259708857365034964>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Texture2D.cpp"
                       ,0x82c,"Texture2DResource");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  return false;
}

// UpdateResourceWithParams @ 14889ebe0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UTexture2D::UpdateResourceWithParams(UTexture2D *this,EUpdateResourceFlags param_1)

{
  ushort uVar1;
  FTexturePlatformData *pFVar2;
  code *pcVar3;
  ETextureMipLoadOptions EVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UDeviceProfileManager *this_00;
  UDeviceProfile *this_01;
  UTextureLODSettings *this_02;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId733,"UTexture2D::UpdateResource",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Texture2D.cpp"
               ,0x2dd);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId733);
  }
  UStreamableRenderAsset::WaitForPendingInitOrStreaming((UStreamableRenderAsset *)this,false,false);
  this_00 = UDeviceProfileManager::Get(false);
  this_01 = UDeviceProfileManager::GetActiveProfile(this_00);
  this_02 = UDeviceProfile::GetTextureLODSettings(this_01);
  EVar4 = UTextureLODSettings::GetMipLoadOptions(this_02,(UTexture *)this);
  if ((((EVar4 == OnlyFirstMip) &&
       (pFVar2 = this->PrivatePlatformData, pFVar2 != (FTexturePlatformData *)0x0)) &&
      (0 < (pFVar2->Mips).Array.ArrayNum)) &&
     ((uVar1 = *(ushort *)(*(longlong *)(pFVar2->Mips).Array.AllocatorInstance.Data + 0x48),
      (uVar1 & uVar1 - 1) == 0 &&
      (uVar1 = *(ushort *)(*(longlong *)(pFVar2->Mips).Array.AllocatorInstance.Data + 0x4a),
      (uVar1 & uVar1 - 1) == 0)))) {
    uVar6 = (pFVar2->OptData).NumMipsInTail;
    if ((int)uVar6 < 1) {
      uVar6 = 1;
    }
    iVar9 = (pFVar2->Mips).Array.ArrayNum - uVar6;
    if (iVar9 < 0) {
      iVar9 = 0;
    }
    iVar7 = (**(code **)(this->_padding_ + 0x2f8))(this);
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    iVar8 = iVar9;
    if (iVar7 < iVar9) {
      iVar8 = iVar7;
    }
    if (iVar8 < iVar9) {
      TIndirectArray<FTexture2DMipMap,TSizedDefaultAllocator<32>_>::RemoveAt
                (&pFVar2->Mips,iVar8 + 1,((pFVar2->Mips).Array.ArrayNum - iVar8) + -1,Default);
      (pFVar2->OptData).NumMipsInTail = 0;
    }
    TIndirectArray<FTexture2DMipMap,TSizedDefaultAllocator<32>_>::RemoveAt
              (&pFVar2->Mips,0,iVar8,Default);
    if (((pFVar2->Mips).Array.ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2->SizeX =
         (uint)*(ushort *)(*(longlong *)(pFVar2->Mips).Array.AllocatorInstance.Data + 0x48);
    if (((pFVar2->Mips).Array.ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2->SizeY =
         (uint)*(ushort *)(*(longlong *)(pFVar2->Mips).Array.AllocatorInstance.Data + 0x4a);
  }
  UTexture::UpdateResourceWithParams((UTexture *)this,param_1);
  if (!bVar10) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// UpdateTextureRegions @ 14889f560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UTexture2D::UpdateTextureRegions
          (UTexture2D *this,int param_1,uint param_2,FUpdateTextureRegion2D *param_3,uint param_4,
          uint param_5,uchar *param_6,
          TFunction<void___cdecl(unsigned_char_*,FUpdateTextureRegion2D_const_*)> *param_7)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FTextureResource *pFVar4;
  longlong lVar5;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar6;
  undefined8 *puVar7;
  code **ppcVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined1 auStack_128 [32];
  FString local_108;
  FString local_f8;
  code *local_e8 [2];
  code *local_d8 [3];
  code **local_c0;
  code *local_b8;
  code *local_a8;
  code *local_98;
  code *pcStack_90;
  code *local_88;
  code **local_80;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  cVar2 = (**(code **)(this->_padding_ + 0x348))();
  if (cVar2 == '\0') {
    pFVar4 = UTexture::GetResource((UTexture *)this);
    lVar5 = 0;
    if (pFVar4 != (FTextureResource *)0x0) {
      pFVar4 = UTexture::GetResource((UTexture *)this);
      lVar5 = (**(code **)(pFVar4->_padding_ + 0x58))(pFVar4);
    }
    if ((this->bTemporarilyDisableStreaming == 0) && ((int)this->_padding_ != -1)) {
      if (4 < (byte)LogTexture._0_1_) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_f8,(UObject *)0x0);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTexture);
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
      }
    }
    else if (lVar5 != 0) {
      local_b8 = ::operator_new(0x28);
      local_80 = (code **)0x0;
      *(uint *)(local_b8 + 0x18) = param_4;
      *(uint *)(local_b8 + 0x1c) = param_5;
      *(uchar **)(local_b8 + 0x20) = param_6;
      *(longlong *)local_b8 = lVar5;
      *(int *)(local_b8 + 8) = param_1;
      *(uint *)(local_b8 + 0xc) = param_2;
      *(FUpdateTextureRegion2D **)(local_b8 + 0x10) = param_3;
      local_a8 = *(code **)param_7;
      if (local_a8 != (code *)0x0) {
        puVar7 = (undefined8 *)&param_7->field_0x10;
        if (*(undefined8 **)&param_7->field_0x28 != (undefined8 *)0x0) {
          puVar7 = *(undefined8 **)&param_7->field_0x28;
        }
        (**(code **)*puVar7)(puVar7,&local_98);
      }
      local_e8[0] = (code *)0x0;
      local_c0 = FMemory::Malloc(0x50,0x10);
      *local_c0 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`UTexture2D::UpdateTextureRegions'::`48'::<lambda_1>,1,1>
                           ::_vftable_;
      local_c0[2] = local_b8;
      local_c0[4] = local_a8;
      local_c0[9] = (code *)local_80;
      local_80 = (code **)0x0;
      local_c0[6] = local_98;
      local_c0[7] = pcStack_90;
      local_c0[8] = local_88;
      if (local_c0[4] != (code *)0x0) {
        local_a8 = (code *)0x0;
      }
      if (local_c0 + 2 != (code **)0x0) {
        local_e8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UTexture2D::UpdateTextureRegions'::__l48::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
      }
      this_00 = FRenderCommandList::GetInstanceTLS();
      if (this_00 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_UTexture2D::UpdateTextureRegions_::__l48::TSTR_UpdateTextureRegionsData1452>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_e8);
      }
      else {
        this_01 = FRenderCommandList::GetRenderThread(this_00);
        local_78._0_8_ = local_e8[0];
        local_50 = local_c0;
        local_c0 = (code **)0x0;
        local_78._16_8_ = local_d8[0];
        local_78._24_8_ = local_d8[1];
        local_78._32_8_ = local_d8[2];
        local_e8[0] = (code *)0x0;
        local_48 = 2;
        pFVar6 = (FRenderCommandTag *)
                 TRenderCommandTag<`UTexture2D::UpdateTextureRegions'::__l48::TSTR_UpdateTextureRegionsData1452>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_78,pFVar6);
        uVar10 = (ulonglong)local_48;
        if ((2 < uVar10) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar10] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_78._0_8_ != (code *)0x0) {
            ppcVar8 = (code **)(local_78 + 0x10);
            if (local_50 != (code **)0x0) {
              ppcVar8 = local_50;
            }
            (**(code **)(*ppcVar8 + 0x10))();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar10])(local_78);
        }
      }
      if (local_e8[0] != (code *)0x0) {
        ppcVar8 = local_e8 + 2;
        if (local_c0 != (code **)0x0) {
          ppcVar8 = local_c0;
        }
        (**(code **)(*ppcVar8 + 0x10))();
      }
      if (local_a8 != (code *)0x0) {
        ppcVar8 = &local_98;
        if (local_80 != (code **)0x0) {
          ppcVar8 = local_80;
        }
        (**(code **)(*ppcVar8 + 0x10))();
      }
    }
  }
  else if (4 < (byte)LogTexture._0_1_) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_108,(UObject *)0x0);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTexture);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
  }
  if (*(longlong *)param_7 != 0) {
    plVar9 = (longlong *)&param_7->field_0x10;
    if (*(longlong **)&param_7->field_0x28 != (longlong *)0x0) {
      plVar9 = *(longlong **)&param_7->field_0x28;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  return;
}

// execBlueprint_GetCPUCopy @ 1488a0720

void __cdecl UTexture2D::execBlueprint_GetCPUCopy(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 local_18 [24];
  
  puVar5 = (undefined8 *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((((param_1[6].field_0x25 == '\x01') &&
       (lVar3 = *(longlong *)&param_1[8].field_0x20, lVar3 != 0)) &&
      ((*(uint *)(lVar3 + 8) & 0x20000000) != 0)) &&
     (puVar5 = *(undefined8 **)(lVar3 + 0x30), puVar5 != (undefined8 *)0x0)) {
    LOCK();
    *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
    UNLOCK();
  }
  if (param_3 == local_18) {
    if (puVar5 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar5 + 1);
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001488a07d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar5)(puVar5,1);
        return;
      }
    }
  }
  else {
    puVar4 = *(undefined8 **)param_3;
    *(undefined8 **)param_3 = puVar5;
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001488a07a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar4)(puVar4,1);
        return;
      }
    }
  }
  return;
}

// execBlueprint_GetSizeX @ 1488a0820

void __cdecl UTexture2D::execBlueprint_GetSizeX(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(undefined4 **)&param_1[8].field_0x20 != (undefined4 *)0x0) {
    *(undefined4 *)param_3 = **(undefined4 **)&param_1[8].field_0x20;
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execBlueprint_GetSizeY @ 1488a0860

void __cdecl UTexture2D::execBlueprint_GetSizeY(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[8].field_0x20 != 0) {
    *(undefined4 *)param_3 = *(undefined4 *)(*(longlong *)&param_1[8].field_0x20 + 4);
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

