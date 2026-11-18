// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// GetSizeX @ 14794d810

uint __thiscall FReflectionTextureCubeResource::GetSizeX(FReflectionTextureCubeResource *this)

{
  return this->Size;
}

// GetSizeY @ 14794d820

uint __thiscall FReflectionTextureCubeResource::GetSizeY(FReflectionTextureCubeResource *this)

{
  return this->Size;
}

// InitRHI @ 1479539f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FReflectionTextureCubeResource::InitRHI
          (FReflectionTextureCubeResource *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHITexture> *pTVar1;
  int *piVar2;
  FRHITexture *pFVar3;
  FRHITexture *this_00;
  FName FVar4;
  FRHIResource *this_01;
  longlong lVar5;
  code *pcVar6;
  longlong lVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  TRefCountPtr<FRHITexture> TVar12;
  size_t _Size;
  ulonglong _Size_00;
  FRHIResource *this_02;
  ulong64 uVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_ReflectionCaptureTextureMemory> FVar15;
  FThreadStats *this_03;
  FThreadStatsPool *this_04;
  FScriptContainerElement *_Src;
  uint uVar16;
  void *_Dst;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  FScriptContainerElement *_Src_00;
  undefined1 auStackY_348 [32];
  ERHIAccess local_2e4;
  uint local_2e0;
  int local_2dc;
  FLLMScope local_2d0;
  FLLMScope local_2cc;
  FLLMScope local_2c8;
  FLLMScope local_2c4;
  uint local_2c0;
  int local_2bc;
  int local_2b8;
  FReflectionTextureCubeResource *local_2b0;
  FSamplerStateInitializerRHI local_2a8;
  int local_288;
  int iStack_284;
  undefined1 local_280 [72];
  undefined4 local_238;
  uint local_234;
  FRHITexture *local_230;
  ERHIAccess local_228;
  ERHITextureInitAction local_224;
  int local_220;
  FNameEntryId local_218;
  undefined2 local_214;
  FName local_210;
  ERHIAccess local_208;
  undefined4 local_204;
  int local_200;
  undefined4 local_1f8;
  undefined2 local_1f4;
  FName local_1f0;
  void *local_1e8 [2];
  uint local_1d8;
  FRHITextureDesc local_1c8;
  wchar_t *local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  FRHITextureDesc local_148;
  wchar_t *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  FRHITextureDesc local_c8;
  wchar_t *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_348;
  local_288 = this->Size;
  local_1c8.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_178 = L"ReflectionTextureCube";
  local_1c8.Extent.field0_0x0._s_0.Y = local_288;
  local_1c8.Extent.field0_0x0._s_0.X = local_288;
  local_1c8.Format = this->Format;
  local_1c8.Flags = None;
  local_1c8.ClearValue._0_8_ = 1;
  local_1c8.ClearValue.Value._4_8_ = 0;
  local_1c8.ClearValue.Value.Color[3] = 0.0;
  local_1c8.ExtData = 0;
  local_1c8.Depth = 1;
  local_1c8.ArraySize = 1;
  local_1c8.NumMips = '\x01';
  local_1c8.NumSamples = '\x01';
  local_1c8.Dimension = TextureCube;
  local_1c8.UAVFormat = PF_Unknown;
  local_1c8.FastVRAMPercentage = 0xff;
  local_1c8.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_1c8.AliasableFormats.ArrayNum = 0;
  local_1c8.AliasableFormats.ArrayMax = 1;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_2b0 = this;
  iStack_284 = local_288;
  local_280._24_8_ = param_1;
  FRHITextureDesc::FRHITextureDesc(&local_148,&local_1c8);
  local_f8 = local_178;
  local_f0 = (undefined4)local_170;
  local_ec = local_170._4_4_;
  local_e8 = local_168;
  local_e0 = local_160;
  local_d8 = local_158;
  if (local_1c8.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_1c8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  local_148.NumMips = (uchar)this->NumMips;
  local_148.Flags = ShaderResource;
  FRHITextureDesc::FRHITextureDesc(&local_c8,&local_148);
  local_78 = local_f8;
  local_70 = local_f0;
  local_6c = local_ec;
  local_68 = local_e8;
  local_60 = local_e0;
  local_58 = local_d8;
  if (local_148.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_148.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  TVar12 = FRHICommandListBase::CreateTexture(param_1,(FRHITextureCreateDesc *)local_280);
  pTVar1 = &this->TextureCubeRHI;
  local_280._32_8_ = pTVar1;
  if ((FRHITexture *)pTVar1 != TVar12.Reference) {
    pFVar3 = pTVar1->Reference;
    pTVar1->Reference = (FRHITexture *)(TVar12.Reference)->_padding_;
    (TVar12.Reference)->_padding_ = 0;
    if (pFVar3 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
  }
  if ((FRHIResource *)local_280._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_280._0_8_);
  }
  pFVar3 = pTVar1->Reference;
  this_00 = (FRHITexture *)this->_padding_;
  if (this_00 != pFVar3) {
    this->_padding_ = (longlong)pFVar3;
    if (pFVar3 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar3);
    }
    if (this_00 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  if ((this->SourceData).ArrayNum != 0) {
    local_2dc = 0;
    local_2e0 = 0;
    iVar10 = this->NumMips;
    local_2b8 = GPixelFormats[this->Format].BlockBytes;
    if (0 < iVar10) {
      do {
        local_2e4 = None;
        uVar16 = 1 << (~(byte)local_2dc + (char)iVar10 & 0x1f);
        local_2bc = uVar16 * uVar16 * local_2b8;
        local_2c0 = uVar16 * local_2b8;
        _Size = (size_t)local_2bc;
        uVar17 = local_2e0;
        do {
          if (((param_1->PersistentState).bImmediate == '\0') &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsImmediate()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                                 ,0x17,L"This operation expects the immediate command list."), bVar9
             )) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar3 = (this->TextureCubeRHI).Reference;
          FLLMScope::FLLMScope(&local_2cc,Textures,false,None,Default,true);
          FMemScope::FMemScope((FMemScope *)(local_280 + 0x10),Textures,true);
          local_214 = 0;
          local_218.Value = 1;
          local_224 = Default;
          local_230 = pFVar3;
          local_228 = local_2e4;
          local_220 = local_2dc;
          FLLMScope::FLLMScope(&local_2d0,Textures,false,None,Default,true);
          FMemScope::FMemScope((FMemScope *)(local_280 + 8),Textures,true);
          (**(code **)(GDynamicRHI->_padding_ + 0x1e0))(GDynamicRHI,local_1e8);
          FMemScope::~FMemScope((FMemScope *)(local_280 + 8));
          FLLMScope::~FLLMScope(&local_2d0);
          uVar8 = local_1d8;
          _Dst = local_1e8[0];
          uVar18 = (ulonglong)local_1d8;
          FMemScope::~FMemScope((FMemScope *)(local_280 + 0x10));
          FLLMScope::~FLLMScope(&local_2cc);
          uVar11 = 0;
          if ((int)uVar17 < (this->SourceData).ArrayNum) {
            uVar11 = ~uVar17 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          _Src_00 = (local_2b0->SourceData).AllocatorInstance.Data + (int)uVar17;
          _Size_00 = (ulonglong)local_2c0;
          if (local_2c0 == uVar8) {
            memcpy(_Dst,_Src_00,_Size);
          }
          else {
            _Src = _Src_00;
            if (0 < (int)uVar16) {
              uVar19 = (ulonglong)uVar16;
              do {
                memcpy(_Dst,_Src,_Size_00);
                _Src = _Src + _Size_00;
                _Dst = (void *)((longlong)_Dst + uVar18);
                uVar19 = uVar19 - 1;
                param_1 = (FRHICommandListBase *)local_280._24_8_;
              } while (uVar19 != 0);
            }
            if (((longlong)_Src - (longlong)_Src_00 != _Size) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(PTRINT(Src) - PTRINT(SourceBuffer)) == PTRINT(CubeFaceBytes)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ReflectionCaptureComponent.cpp"
                                   ,0x27c,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          if (((param_1->PersistentState).bImmediate == '\0') &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsImmediate()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                                 ,0x17,L"This operation expects the immediate command list."), bVar9
             )) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar4 = (FName)*(FRHITexture **)local_280._32_8_;
          FLLMScope::FLLMScope(&local_2c4,Textures,false,None,Default,true);
          FMemScope::FMemScope((FMemScope *)(local_280 + 0x30),Textures,true);
          local_1f4 = 0;
          local_1f8 = 3;
          local_208 = local_2e4;
          local_204 = 0;
          local_200 = local_2dc;
          local_210 = FVar4;
          FLLMScope::FLLMScope(&local_2c8,Textures,false,None,Default,true);
          FMemScope::FMemScope((FMemScope *)(local_280 + 0x28),Textures,true);
          (**(code **)(GDynamicRHI->_padding_ + 0x1e8))(GDynamicRHI,param_1);
          FMemScope::~FMemScope((FMemScope *)(local_280 + 0x28));
          FLLMScope::~FLLMScope(&local_2c8);
          FMemScope::~FMemScope((FMemScope *)(local_280 + 0x30));
          FLLMScope::~FLLMScope(&local_2c4);
          local_2e4 = local_2e4 + CPURead;
          uVar17 = uVar17 + local_2bc;
          this = local_2b0;
        } while (local_2e4 < (IndirectArgs|Present));
        local_2dc = local_2dc + 1;
        local_2e0 = local_2e0 + local_2bc * 6;
        iVar10 = local_2b0->NumMips;
      } while (local_2dc < iVar10);
    }
    piVar2 = &(this->SourceData).ArrayMax;
    (this->SourceData).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&(this->SourceData).AllocatorInstance,0,piVar2);
    }
  }
  local_2a8.Filter.Value = '\x02';
  local_2a8.AddressU.Value = '\x01';
  local_2a8.AddressV.Value = '\x01';
  local_2a8.AddressW.Value = '\x01';
  local_2a8.MipBias = 0.0;
  local_2a8.MinMipLevel = 0.0;
  local_2a8.MaxMipLevel = 3.4028235e+38;
  local_2a8.MaxAnisotropy = 0;
  local_2a8.BorderColor = 0;
  local_2a8.SamplerComparisonFunction.Value = '\0';
  this_02 = (FRHIResource *)FTexture::GetOrCreateSamplerState(&local_2a8);
  this_01 = (FRHIResource *)this->_padding_;
  if (this_01 != this_02) {
    this->_padding_ = (longlong)this_02;
    if (this_02 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_02);
    }
    if (this_01 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_01);
    }
  }
  uVar13 = CalcTextureSize(this->Size,this->Size,this->Format,this->NumMips);
  lVar7 = uVar13 * 6;
  if (lVar7 != 0) {
    FVar15 = StatPtr_STAT_ReflectionCaptureTextureMemory;
    if (StatPtr_STAT_ReflectionCaptureTextureMemory ==
        (FThreadSafeStaticStat<FStat_STAT_ReflectionCaptureTextureMemory>)0x0) {
      pFVar14 = ::FName::FName(&local_1f0,"STAT_ReflectionCaptureTextureMemory");
      FVar15 = (FThreadSafeStaticStat<FStat_STAT_ReflectionCaptureTextureMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReflectionCaptureTextureMemory,
                          *pFVar14,L"Reflection Capture Texture Memory","STATGROUP_Memory",
                          "STATCAT_Advanced",L"Memory",true,false,ST_int64,false,false,MCR_Physical)
      ;
    }
    lVar5 = *(longlong *)FVar15;
    if (((lVar5 != 0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_03 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_03 == (FThreadStats *)0x0) {
        this_04 = FThreadStatsPool::Get();
        this_03 = FThreadStatsPool::GetFromPool(this_04);
      }
      local_234 = (uint)((ulonglong)lVar5 >> 0x20) & 0xffffafff | 0xa000;
      local_280._56_8_ = lVar5;
      local_280._64_8_ = lVar7;
      local_238 = (int)lVar5;
      FThreadStats::AddStatMessage(this_03,(FStatMessage *)(local_280 + 0x40));
      FStatsTrace::Add((FName *)(local_280 + 0x38),lVar7);
      if (this_03->ScopeCount == 0) {
        FThreadStats::Flush(this_03,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_03,false,false);
      }
    }
  }
  if (local_c8.AliasableFormats.AllocatorInstance.SecondaryData != (ForElementType<EPixelFormat>)0x0
     ) {
    FMemory::Free((void *)local_c8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  return;
}

// ReleaseRHI @ 147961c60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FReflectionTextureCubeResource::ReleaseRHI(FReflectionTextureCubeResource *this)

{
  FName FVar1;
  FRHITexture *this_00;
  ulong64 uVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_ReflectionCaptureTextureMemory> FVar4;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FName local_res8;
  FStatMessage local_28;
  
  uVar2 = CalcTextureSize(this->Size,this->Size,this->Format,this->NumMips);
  if ((uchar  [8])(uVar2 * 6) != (uchar  [8])0x0) {
    FVar4 = StatPtr_STAT_ReflectionCaptureTextureMemory;
    if (StatPtr_STAT_ReflectionCaptureTextureMemory ==
        (FThreadSafeStaticStat<FStat_STAT_ReflectionCaptureTextureMemory>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_ReflectionCaptureTextureMemory");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_ReflectionCaptureTextureMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReflectionCaptureTextureMemory,
                         *pFVar3,L"Reflection Capture Texture Memory","STATGROUP_Memory",
                         "STATCAT_Advanced",L"Memory",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar4;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_01 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_01 == (FThreadStats *)0x0) {
        this_02 = FThreadStatsPool::Get();
        this_01 = FThreadStatsPool::GetFromPool(this_02);
      }
      local_28.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar1;
      local_28.StatData.Pad = (uchar  [8])(uVar2 * 6);
      local_28.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_01,&local_28);
      FStatsTrace::Add(&local_res8,uVar2 * -6);
      if (this_01->ScopeCount == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  this_00 = (this->TextureCubeRHI).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    (this->TextureCubeRHI).Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FTexture::ReleaseRHI((FTexture *)this);
  return;
}

