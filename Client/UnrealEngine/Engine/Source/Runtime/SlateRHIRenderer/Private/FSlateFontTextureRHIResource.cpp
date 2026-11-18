// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 9

// FSlateFontTextureRHIResource @ 145fe6330

FSlateFontTextureRHIResource * __thiscall
FSlateFontTextureRHIResource::FSlateFontTextureRHIResource
          (FSlateFontTextureRHIResource *this,uint param_1,uint param_2,
          ESlateFontAtlasContentType param_3)

{
  *(undefined1 *)&this->_padding_ = 0x21;
  this->_padding_ = (longlong)&___7__TSlateTexture_V__TRefCountPtr_VFRHITexture______6B_;
  this->_padding_ = 0;
  FTexture::FTexture((FTexture *)&this->_padding_);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__TSlateTexture<TRefCountPtr<FRHITexture>_>__;
  this->_padding_ = (longlong)&_vftable__for__FTextureResource__;
  this->Height = param_2;
  this->ContentType = param_3;
  this->Width = param_1;
  (this->TempData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TempData).ArrayNum = 0;
  (this->TempData).ArrayMax = 0;
  return this;
}

// GetFriendlyName @ 14600ca30

FString * __thiscall
FSlateFontTextureRHIResource::GetFriendlyName
          (FSlateFontTextureRHIResource *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FSlateFontTextureRHIResource");
  return __return_storage_ptr__;
}

// GetHeight @ 14600cad0

uint __thiscall FSlateFontTextureRHIResource::GetHeight(FSlateFontTextureRHIResource *this)

{
  return this->Height;
}

// GetRHIPixelFormat @ 14600d7a0

EPixelFormat __thiscall
FSlateFontTextureRHIResource::GetRHIPixelFormat(FSlateFontTextureRHIResource *this)

{
  ESlateFontAtlasContentType EVar1;
  code *pcVar2;
  bool bVar3;
  EPixelFormat EVar4;
  
  EVar1 = this->ContentType;
  if (EVar1 == Alpha) {
    return PF_A8;
  }
  if ((EVar1 != Color) && (EVar1 != Msdf)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHIFontTexture.cpp"
                       ,0x6c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  return PF_B8G8R8A8;
}

// GetSizeX @ 14600e280

uint __thiscall FSlateFontTextureRHIResource::GetSizeX(FSlateFontTextureRHIResource *this)

{
  return (uint)this->_padding_;
}

// GetSizeY @ 14600e290

uint __thiscall FSlateFontTextureRHIResource::GetSizeY(FSlateFontTextureRHIResource *this)

{
  return *(uint *)((longlong)&this->_padding_ + 4);
}

// GetWidth @ 146019af0

uint __thiscall FSlateFontTextureRHIResource::GetWidth(FSlateFontTextureRHIResource *this)

{
  return this->Width;
}

// InitRHI @ 146019d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSlateFontTextureRHIResource::InitRHI
          (FSlateFontTextureRHIResource *this,FRHICommandListBase *param_1)

{
  int *piVar1;
  int iVar2;
  FRHIResource *pFVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  undefined4 uVar7;
  bool bVar8;
  uint uVar9;
  TRefCountPtr<FRHITexture> TVar10;
  FRHIResource *pFVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_SlateTextureGPUMemory> FVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  ulonglong uVar14;
  undefined1 auStackY_298 [32];
  FSamplerStateInitializerRHI local_230;
  FSamplerStateInitializerRHI local_210;
  undefined8 local_1f0;
  undefined1 local_1e8 [24];
  undefined4 local_1d0;
  uint local_1cc;
  FName local_1c8 [2];
  FRHITextureDesc local_1b8;
  wchar_t *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  FRHITextureDesc local_138;
  wchar_t *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  FRHITextureDesc local_b8;
  wchar_t *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_298;
  bVar8 = IsInRenderingThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHIFontTexture.cpp"
                         ,0x11,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((int)this->_padding_ == 0) {
    return;
  }
  if (*(int *)((longlong)&this->_padding_ + 4) == 0) {
    return;
  }
  local_1b8.Format = GetRHIPixelFormat((FSlateFontTextureRHIResource *)&this[-1].ContentType);
  lVar5._0_4_ = this[-1].TempData.ArrayNum;
  lVar5._4_4_ = this[-1].TempData.ArrayMax;
  piVar1 = &this[-1].TempData.ArrayNum;
  uVar14 = (ulonglong)local_1b8.Format;
  if ((lVar5 != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsValidRef( ShaderResource)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHIFontTexture.cpp"
                         ,0x18,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_1b8.Depth = 1;
  local_1b8.ArraySize = 1;
  local_1b8.Flags = None;
  local_1b8.ClearValue._0_8_ = 1;
  local_1b8.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_1b8.ClearValue.Value._4_8_ = 0;
  local_168 = L"FSlateFontTextureRHIResource";
  local_1b8.Extent.field0_0x0 = (TIntPoint<int>_u_0)this->_padding_;
  local_1b8.ClearValue.Value.Color[3] = 0.0;
  local_1b8.ExtData = 0;
  local_1b8.NumMips = '\x01';
  local_1b8.NumSamples = '\x01';
  local_1b8.Dimension = Texture2D;
  local_1b8.UAVFormat = PF_Unknown;
  local_1b8.FastVRAMPercentage = 0xff;
  local_1b8.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_1b8.AliasableFormats.ArrayNum = 0;
  local_1b8.AliasableFormats.ArrayMax = 1;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  FRHITextureDesc::FRHITextureDesc(&local_138,&local_1b8);
  local_e8 = local_168;
  local_e0 = (undefined4)local_160;
  local_dc = local_160._4_4_;
  local_d8 = local_158;
  local_d0 = local_150;
  local_c8 = local_148;
  if ((FName)local_1b8.AliasableFormats.AllocatorInstance.SecondaryData != (FName)0x0) {
    FMemory::Free((void *)local_1b8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  FLazyName::Resolve(&::ClassName);
  local_d0 = local_1f0;
  FRHITextureDesc::FRHITextureDesc(&local_b8,&local_138);
  local_68 = local_e8;
  local_60 = local_e0;
  local_5c = local_dc;
  local_58 = local_d8;
  local_50 = local_d0;
  local_48 = local_c8;
  if (local_138.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_138.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  iVar2 = (int)this->_padding_;
  if (iVar2 != 0) {
    if (iVar2 != 1) {
      if (iVar2 == 2) goto LAB_14601a005;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHIFontTexture.cpp"
                         ,0x27,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    local_b8.Flags = local_b8.Flags | SRGB;
  }
LAB_14601a005:
  TVar10 = FRHICommandListBase::CreateTexture(param_1,(FRHITextureCreateDesc *)local_1e8);
  if ((FRHITexture *)piVar1 != TVar10.Reference) {
    pFVar3 = *(FRHIResource **)piVar1;
    uVar7 = *(undefined4 *)((longlong)&(TVar10.Reference)->_padding_ + 4);
    this[-1].TempData.ArrayNum = *(undefined4 *)&(TVar10.Reference)->_padding_;
    this[-1].TempData.ArrayMax = uVar7;
    (TVar10.Reference)->_padding_ = 0;
    if (pFVar3 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar3);
    }
  }
  if ((FRHIResource *)local_1e8._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_1e8._0_8_);
  }
  lVar4._0_4_ = this[-1].TempData.ArrayNum;
  lVar4._4_4_ = this[-1].TempData.ArrayMax;
  if ((lVar4 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidRef( ShaderResource )",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHIFontTexture.cpp"
                         ,0x2f,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar3 = *(FRHIResource **)piVar1;
  pFVar11 = (FRHIResource *)this->_padding_;
  if (pFVar11 != pFVar3) {
    this->_padding_ = (longlong)pFVar3;
    if (pFVar3 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(pFVar3);
    }
    if (pFVar11 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar11);
    }
  }
  local_230.Filter.Value = '\x01';
  local_230.AddressU.Value = '\x01';
  local_230.AddressV.Value = '\x01';
  local_230.AddressW.Value = '\0';
  local_230.MipBias = 0.0;
  local_230.MinMipLevel = 0.0;
  local_230.MaxMipLevel = 0.0;
  local_230.MaxAnisotropy = 1;
  local_230.BorderColor = 0;
  local_230.SamplerComparisonFunction.Value = '\0';
  pFVar11 = (FRHIResource *)FTexture::GetOrCreateSamplerState(&local_230);
  pFVar3 = (FRHIResource *)this->_padding_;
  if (pFVar3 != pFVar11) {
    this->_padding_ = (longlong)pFVar11;
    if (pFVar11 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(pFVar11);
    }
    if (pFVar3 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar3);
    }
  }
  local_210.Filter.Value = '\x01';
  local_210.AddressU.Value = '\x01';
  local_210.AddressV.Value = '\x01';
  local_210.AddressW.Value = '\0';
  local_210.MipBias = 0.0;
  local_210.MinMipLevel = 0.0;
  local_210.MaxMipLevel = 0.0;
  local_210.MaxAnisotropy = 1;
  local_210.BorderColor = 0;
  local_210.SamplerComparisonFunction.Value = '\0';
  pFVar11 = (FRHIResource *)FTexture::GetOrCreateSamplerState(&local_210);
  pFVar3 = (FRHIResource *)this->_padding_;
  if (pFVar3 != pFVar11) {
    this->_padding_ = (longlong)pFVar11;
    if (pFVar11 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(pFVar11);
    }
    if (pFVar3 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar3);
    }
  }
  uVar9 = GPixelFormats[uVar14].BlockBytes * (int)this->_padding_ *
          *(int *)((longlong)&this->_padding_ + 4);
  if (uVar9 != 0) {
    FVar13 = StatPtr_STAT_SlateTextureGPUMemory;
    if (StatPtr_STAT_SlateTextureGPUMemory ==
        (FThreadSafeStaticStat<FStat_STAT_SlateTextureGPUMemory>)0x0) {
      pFVar12 = ::FName::FName(local_1c8,"STAT_SlateTextureGPUMemory");
      FVar13 = (FThreadSafeStaticStat<FStat_STAT_SlateTextureGPUMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateTextureGPUMemory,*pFVar12,
                          L"Texture Data Memory (GPU)","STATGROUP_SlateMemory","STATCAT_Advanced",
                          L"Slate Memory",true,false,ST_int64,false,false,MCR_Physical);
    }
    lVar5 = *(longlong *)FVar13;
    if (((lVar5 != 0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_1cc = (uint)((ulonglong)lVar5 >> 0x20) & 0xffffafff | 0xa000;
      local_1e8._8_8_ = lVar5;
      local_1e8._16_8_ = (ulonglong)uVar9;
      local_1d0 = (int)lVar5;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)(local_1e8 + 0x10));
      FStatsTrace::Add((FName *)(local_1e8 + 8),(ulonglong)uVar9);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  if (local_b8.AliasableFormats.AllocatorInstance.SecondaryData != (ForElementType<EPixelFormat>)0x0
     ) {
    FMemory::Free((void *)local_b8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  return;
}

// ReleaseRHI @ 146021710

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateFontTextureRHIResource::ReleaseRHI(FSlateFontTextureRHIResource *this)

{
  int iVar1;
  longlong lVar2;
  FName FVar3;
  FRHIResource *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_SlateTextureGPUMemory> FVar8;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  int iVar9;
  uchar auVar10 [8];
  FName local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  bVar5 = IsInRenderingThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHIFontTexture.cpp"
                         ,0x56,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar2._0_4_ = this[-1].TempData.ArrayNum;
  lVar2._4_4_ = this[-1].TempData.ArrayMax;
  if (lVar2 != 0) {
    iVar1 = (int)this->_padding_;
    iVar9 = GPixelFormats[0x1b].BlockBytes;
    if ((((iVar1 != 0) && (iVar9 = GPixelFormats[2].BlockBytes, iVar1 != 1)) && (iVar1 != 2)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHIFontTexture.cpp"
                           ,0x6c,L""), iVar9 = GPixelFormats[2].BlockBytes, bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar6 = *(int *)((longlong)&this->_padding_ + 4) * (int)this->_padding_ * iVar9;
    auVar10[4] = '\0';
    auVar10[5] = '\0';
    auVar10[6] = '\0';
    auVar10[7] = '\0';
    auVar10._0_4_ = uVar6;
    if (uVar6 != 0) {
      FVar8 = StatPtr_STAT_SlateTextureGPUMemory;
      if (StatPtr_STAT_SlateTextureGPUMemory ==
          (FThreadSafeStaticStat<FStat_STAT_SlateTextureGPUMemory>)0x0) {
        pFVar7 = ::FName::FName(&local_res10,"STAT_SlateTextureGPUMemory");
        FVar8 = (FThreadSafeStaticStat<FStat_STAT_SlateTextureGPUMemory>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateTextureGPUMemory,*pFVar7,
                           L"Texture Data Memory (GPU)","STATGROUP_SlateMemory","STATCAT_Advanced",
                           L"Slate Memory",true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar3 = *(FName *)FVar8;
      local_res8 = FVar3;
      if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this_01 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_01 == (FThreadStats *)0x0) {
          this_02 = FThreadStatsPool::Get();
          this_01 = FThreadStatsPool::GetFromPool(this_02);
        }
        local_28.NameAndInfo.Number = FVar3.Number & 0xffffbfff | 0xb000;
        local_res8 = FVar3;
        local_28.StatData.Pad = auVar10;
        local_28.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this_01,&local_28);
        FStatsTrace::Add(&local_res8,-(longlong)auVar10);
        if (this_01->ScopeCount == 0) {
          FThreadStats::Flush(this_01,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_01,false,false);
        }
      }
    }
  }
  this_00 = *(FRHIResource **)&this[-1].TempData.ArrayNum;
  if (this_00 != (FRHIResource *)0x0) {
    this[-1].TempData.ArrayNum = 0;
    this[-1].TempData.ArrayMax = 0;
    FRHIResource::Release(this_00);
  }
  return;
}

