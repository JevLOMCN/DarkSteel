// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FTextureCubeResource @ 14887d0a0

/* WARNING: Enum "Type": Some values do not have unique names */

FTextureCubeResource * __thiscall
FTextureCubeResource::FTextureCubeResource(FTextureCubeResource *this,UTextureCube *param_1)

{
  FTexturePlatformData *pFVar1;
  code *pcVar2;
  ulonglong uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FTextureCubeResource *pFVar7;
  FTextureCubeResource *pFVar8;
  long64 lVar9;
  void *_Src;
  void *pvVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  FBulkData *this_00;
  void *(*papvVar14) [15];
  FString local_48;
  
  FTexture::FTexture((FTexture *)this);
  uVar12 = 0;
  this->_padding_ = 0;
  lVar11 = 6;
  (this->LODGroupStatName).ComparisonIndex = 0;
  (this->LODGroupStatName).Number = 0;
  (this->TextureCubeRHI).Reference = (FRHITexture *)0x0;
  this->_padding_ = (longlong)&___7FTextureCubeResource__6B_;
  this->Owner = param_1;
  this->TextureSize = 0;
  this->ProxiedResource = (FTextureCubeResource *)0x0;
  pFVar8 = this;
  do {
    pFVar7 = (FTextureCubeResource *)(pFVar8->MipData[0] + 1);
    pFVar8->MipData[0][0] = (void *)0x0;
    pFVar7->_padding_ = 0;
    pFVar8->MipData[0][2] = (void *)0x0;
    pFVar8->MipData[0][3] = (void *)0x0;
    pFVar8->MipData[0][4] = (void *)0x0;
    pFVar8->MipData[0][5] = (void *)0x0;
    pFVar8->MipData[0][6] = (void *)0x0;
    pFVar8->MipData[0][7] = (void *)0x0;
    pFVar8->MipData[0][8] = (void *)0x0;
    pFVar8->MipData[0][9] = (void *)0x0;
    pFVar8->MipData[0][10] = (void *)0x0;
    pFVar8->MipData[0][0xb] = (void *)0x0;
    pFVar8->MipData[0][0xc] = (void *)0x0;
    pFVar8->MipData[0][0xd] = (void *)0x0;
    pFVar8->MipData[0][0xe] = (void *)0x0;
    lVar11 = lVar11 + -1;
    pFVar8 = pFVar7;
  } while (lVar11 != 0);
  pFVar1 = this->Owner->PrivatePlatformData;
  if (((pFVar1 == (FTexturePlatformData *)0x0) || ((pFVar1->Mips).Array.ArrayNum < 1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Owner->GetNumMips() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureCube.cpp"
                         ,0x170,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar8 = (FTextureCubeResource *)(*pcVar2)();
    return pFVar8;
  }
  pFVar1 = param_1->PrivatePlatformData;
  uVar6 = (pFVar1->OptData).NumMipsInTail;
  if ((int)uVar6 < 1) {
    uVar6 = 1;
  }
  iVar5 = (pFVar1->Mips).Array.ArrayNum - uVar6;
  if (-1 < iVar5) {
    papvVar14 = this->MipData + 1;
    lVar11 = (longlong)iVar5 + 1;
    do {
      uVar6 = 0;
      if ((int)uVar12 < (pFVar1->Mips).Array.ArrayNum) {
        uVar6 = ~uVar12 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar8 = (FTextureCubeResource *)(*pcVar2)();
        return pFVar8;
      }
      this_00 = (FBulkData *)
                (*(longlong *)
                  ((pFVar1->Mips).Array.AllocatorInstance.Data + (-0xe8 - (longlong)this) +
                  (longlong)papvVar14) + 0x20);
      lVar9 = FBulkData::GetBulkDataSize(this_00);
      if (lVar9 < 1) {
        if (1 < (byte)LogTexture._0_1_) {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)param_1,&local_48,(UObject *)0x0,None);
          UE::Logging::Private::BasicLog<2>
                    (&`public:___cdecl_FTextureCubeResource::FTextureCubeResource(UTextureCube*___ptr64)___ptr64'
                      ::__l19::LOG_Static,(FLogCategoryBase *)&LogTexture);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        lVar9 = FBulkData::GetBulkDataSize(this_00);
        this->TextureSize = this->TextureSize + (int)lVar9;
        lVar9 = FBulkData::GetBulkDataSize(this_00);
        uVar3 = lVar9 / 6;
        iVar5 = (int)uVar3;
        uVar13 = uVar3 & 0xffffffff;
        _Src = FBulkData::Lock(this_00,1);
        pvVar10 = FMemory::Malloc(uVar13,0);
        papvVar14[-1][0] = pvVar10;
        memcpy(pvVar10,_Src,uVar3 & 0xffffffff);
        pvVar10 = FMemory::Malloc(uVar13,0);
        (*papvVar14)[0] = pvVar10;
        memcpy(pvVar10,(void *)((longlong)_Src + uVar13),uVar3 & 0xffffffff);
        pvVar10 = FMemory::Malloc(uVar3 & 0xffffffff,0);
        papvVar14[1][0] = pvVar10;
        memcpy(pvVar10,(void *)((ulonglong)(uint)(iVar5 * 2) + (longlong)_Src),uVar3 & 0xffffffff);
        pvVar10 = FMemory::Malloc(uVar13,0);
        papvVar14[2][0] = pvVar10;
        memcpy(pvVar10,(void *)((ulonglong)(uint)(iVar5 * 3) + (longlong)_Src),uVar3 & 0xffffffff);
        pvVar10 = FMemory::Malloc(uVar3 & 0xffffffff,0);
        papvVar14[3][0] = pvVar10;
        memcpy(pvVar10,(void *)((ulonglong)(uint)(iVar5 * 4) + (longlong)_Src),uVar3 & 0xffffffff);
        pvVar10 = FMemory::Malloc(uVar3 & 0xffffffff,0);
        papvVar14[4][0] = pvVar10;
        memcpy(pvVar10,(void *)((ulonglong)(uint)(iVar5 * 5) + (longlong)_Src),uVar3 & 0xffffffff);
        FBulkData::Unlock(this_00);
      }
      uVar12 = uVar12 + 1;
      papvVar14 = (void *(*) [15])(*papvVar14 + 1);
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  this->LODGroupStatName =
       FTextureResource::TextureGroupStatFNames[*(byte *)((longlong)&param_1->_padding_ + 7)];
  return this;
}

// GetSizeX @ 1488907d0

uint __thiscall FTextureCubeResource::GetSizeX(FTextureCubeResource *this)

{
  FTexturePlatformData *pFVar1;
  uint uVar2;
  
  if (this->ProxiedResource != (FTextureCubeResource *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488907e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(this->ProxiedResource->_padding_ + 0x30))();
    return uVar2;
  }
  pFVar1 = this->Owner->PrivatePlatformData;
  if (pFVar1 != (FTexturePlatformData *)0x0) {
    return pFVar1->SizeX;
  }
  return 0;
}

// GetSizeY @ 148890900

uint __thiscall FTextureCubeResource::GetSizeY(FTextureCubeResource *this)

{
  FTexturePlatformData *pFVar1;
  uint uVar2;
  
  if (this->ProxiedResource != (FTextureCubeResource *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148890912. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(this->ProxiedResource->_padding_ + 0x38))();
    return uVar2;
  }
  pFVar1 = this->Owner->PrivatePlatformData;
  if (pFVar1 != (FTexturePlatformData *)0x0) {
    return pFVar1->SizeY;
  }
  return 0;
}

// InitRHI @ 148894860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FTextureCubeResource::InitRHI(FTextureCubeResource *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHITexture> *pTVar1;
  byte bVar2;
  byte bVar3;
  EPixelFormat EVar4;
  char cVar5;
  FRHITexture *pFVar6;
  FRHITexture *pFVar7;
  FRHIResource *pFVar8;
  FName FVar9;
  UTextureCube *this_00;
  FTexturePlatformData *pFVar10;
  code *pcVar11;
  bool bVar12;
  undefined1 uVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_TextureMemory> FVar15;
  FThreadStats *pFVar16;
  FThreadStatsPool *pFVar17;
  TRefCountPtr<FRHITexture> TVar18;
  long64 lVar19;
  UDeviceProfileManager *this_01;
  UDeviceProfile *this_02;
  UTextureLODSettings *this_03;
  FRHIResource *pFVar20;
  ulonglong uVar21;
  uint uVar22;
  void *_Src;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  uchar auVar26 [8];
  longlong lVar27;
  void *_Dst;
  EPixelFormat EVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  longlong lVar32;
  ulonglong uVar33;
  void *(*papvVar34) [15];
  undefined1 auStackY_308 [32];
  int local_2a8;
  TIntPoint<int>_u_0 local_298;
  FLLMScope local_288;
  FLLMScope local_284;
  FLLMScope local_280;
  FLLMScope local_27c;
  FTextureCubeResource *local_278;
  uint local_270;
  FSamplerStateInitializerRHI local_268;
  uint local_248;
  uint uStack_244;
  void *(*local_240) [15];
  FName local_238;
  undefined8 local_230;
  undefined1 local_228 [64];
  uint local_1e8;
  uint local_1e4;
  FStatMessage local_1e0;
  FString local_1d0;
  FName local_1c0;
  FName local_1b8;
  int local_1b0;
  undefined4 local_1ac;
  uint local_1a8;
  undefined4 local_1a0;
  undefined2 local_19c;
  FRHITexture *local_198;
  int local_190;
  undefined4 local_18c;
  uint local_188;
  undefined4 local_180;
  undefined2 local_17c;
  FName local_178;
  longlong local_170;
  void *local_168;
  uint local_158;
  FRHITextureDesc local_148;
  FScriptContainerElement *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  longlong local_d8;
  FRHITextureDesc local_c8;
  FScriptContainerElement *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_308;
  local_278 = this;
  if (this->ProxiedResource == (FTextureCubeResource *)0x0) {
    lVar25 = (longlong)this->TextureSize;
    if (lVar25 != 0) {
      FVar15 = StatPtr_STAT_TextureMemory;
      if (StatPtr_STAT_TextureMemory == (FThreadSafeStaticStat<FStat_STAT_TextureMemory>)0x0) {
        pFVar14 = ::FName::FName(&local_178,"STAT_TextureMemory");
        FVar15 = (FThreadSafeStaticStat<FStat_STAT_TextureMemory>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TextureMemory,*pFVar14,
                            L"Texture Memory Used","STATGROUP_Memory","STATCAT_Advanced",L"Memory",
                            true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar9 = *(FName *)FVar15;
      if (((FVar9 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar16 == (FThreadStats *)0x0) {
          pFVar17 = FThreadStatsPool::Get();
          pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
        }
        local_1e4 = FVar9.Number & 0xffffafff | 0xa000;
        local_228._56_8_ = lVar25;
        local_1e8 = FVar9.ComparisonIndex.Value.Value;
        local_1c0 = FVar9;
        FThreadStats::AddStatMessage(pFVar16,(FStatMessage *)(local_228 + 0x38));
        FStatsTrace::Add(&local_1c0,lVar25);
        if (pFVar16->ScopeCount == 0) {
          FThreadStats::Flush(pFVar16,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar16,false,false);
        }
      }
    }
    auVar26 = (uchar  [8])(longlong)this->TextureSize;
    if (((auVar26 != (uchar  [8])0x0) && (FVar9 = this->LODGroupStatName, FVar9 != (FName)0x0)) &&
       ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
      pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar16 == (FThreadStats *)0x0) {
        pFVar17 = FThreadStatsPool::Get();
        pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
      }
      local_1e0.NameAndInfo.Index = FVar9.ComparisonIndex.Value;
      local_1e0.NameAndInfo.Number = FVar9.Number & 0xffffafff | 0xa000;
      local_238 = FVar9;
      local_1e0.StatData.Pad = auVar26;
      FThreadStats::AddStatMessage(pFVar16,&local_1e0);
      FStatsTrace::Add(&local_238,(long64)auVar26);
      if (pFVar16->ScopeCount == 0) {
        FThreadStats::Flush(pFVar16,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar16,false,false);
      }
    }
    this_00 = this->Owner;
    bVar2 = *(byte *)((longlong)&this_00->_padding_ + 4);
    bVar3 = *(byte *)((longlong)&this_00->_padding_ + 6);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_1d0,(UObject *)0x0);
    local_f8 = (FScriptContainerElement *)L"";
    if (local_1d0.Data.ArrayNum != 0) {
      local_f8 = local_1d0.Data.AllocatorInstance.Data;
    }
    local_148.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
    local_148.ClearValue._0_8_ = 1;
    local_148.ClearValue.Value._4_8_ = 0;
    local_148.ClearValue.Value.Color[3] = 0.0;
    local_148.Depth = 1;
    local_148.ArraySize = 1;
    pFVar10 = this->Owner->PrivatePlatformData;
    local_148.NumSamples = '\x01';
    local_148.Dimension = TextureCube;
    local_148.UAVFormat = PF_Unknown;
    local_148.FastVRAMPercentage = 0xff;
    local_148.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
    uVar30 = 0;
    local_148.AliasableFormats.ArrayNum = 0;
    local_148.AliasableFormats.ArrayMax = 1;
    local_f0 = 0;
    local_e8 = 0;
    if (pFVar10 == (FTexturePlatformData *)0x0) {
      local_148.Extent.field0_0x0 = (TIntPoint<int>_u_0)0x0;
      local_148.Format = PF_Unknown;
      local_148.NumMips = '\0';
      local_148.ExtData = uVar30;
    }
    else {
      local_298._s_0.Y = pFVar10->SizeX;
      local_298._s_0.X = pFVar10->SizeX;
      local_148.Extent.field0_0x0 = local_298;
      local_148.Format = pFVar10->PixelFormat;
      local_148.NumMips = (uchar)(pFVar10->Mips).Array.ArrayNum;
      local_148.ExtData = (pFVar10->OptData).ExtData;
    }
    local_148.Flags = ((ulonglong)(~(uint)(bVar2 >> 1) & 1) << 0x10 | (ulonglong)(bVar3 & 1)) << 4;
    FLazyName::Resolve(&`public:_virtual_void___cdecl_FTextureCubeResource::InitRHI(FRHICommandListBase&___ptr64)___ptr64'
                        ::__l2::ClassName);
    local_e0 = local_230;
    local_d8 = this->_padding_;
    FRHITextureDesc::FRHITextureDesc(&local_c8,&local_148);
    local_78 = local_f8;
    local_70 = (undefined4)local_f0;
    local_6c = local_f0._4_4_;
    local_68 = local_e8;
    local_60 = local_e0;
    local_58 = local_d8;
    if (local_148.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_148.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    TVar18 = FRHICommandListBase::CreateTexture(param_1,(FRHITextureCreateDesc *)local_228);
    pTVar1 = &this->TextureCubeRHI;
    if ((FRHITexture *)pTVar1 != TVar18.Reference) {
      pFVar6 = pTVar1->Reference;
      pTVar1->Reference = (FRHITexture *)(TVar18.Reference)->_padding_;
      (TVar18.Reference)->_padding_ = 0;
      if (pFVar6 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar6);
      }
    }
    if ((FRHIResource *)local_228._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_228._0_8_);
    }
    pFVar6 = pTVar1->Reference;
    pFVar7 = (FRHITexture *)this->_padding_;
    if (pFVar7 != pFVar6) {
      this->_padding_ = (longlong)pFVar6;
      if (pFVar6 != (FRHITexture *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar6);
      }
      if (pFVar7 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar7);
      }
    }
    FRHICommandListBase::UpdateTextureReference
              (param_1,*(FRHITextureReference **)(this->Owner->_padding_ + 0x20),
               (FRHITexture *)this->_padding_);
    pFVar10 = this->Owner->PrivatePlatformData;
    if (((pFVar10 != (FTexturePlatformData *)0x0) &&
        (uVar30 = (pFVar10->Mips).Array.ArrayNum, 0xf < (int)uVar30)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumMips <= MAX_TEXTURE_MIP_COUNT",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureCube.cpp"
                            ,0x1de,L""), bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    lVar25 = (longlong)(int)uVar30;
    local_240 = this->MipData;
    lVar32 = -0x70 - (longlong)this;
    local_2a8 = 0;
    local_228._48_8_ = lVar25;
    do {
      uVar30 = 0;
      lVar27 = lVar25;
      papvVar34 = local_240;
      if (0 < lVar25) {
        do {
          if ((*papvVar34)[0] != (void *)0x0) {
            FVar9 = (FName)(this->TextureCubeRHI).Reference;
            FLLMScope::FLLMScope(&local_284,Textures,false,None,Default,true);
            FMemScope::FMemScope((FMemScope *)(local_228 + 0x10),Textures,true);
            local_1b0 = local_2a8;
            local_19c = 0;
            local_1a0 = 1;
            local_1ac = 0;
            local_1b8 = FVar9;
            local_1a8 = uVar30;
            FLLMScope::FLLMScope(&local_288,Textures,false,None,Default,true);
            FMemScope::FMemScope((FMemScope *)(local_228 + 8),Textures,true);
            (**(code **)(GDynamicRHI->_padding_ + 0x1e0))();
            FMemScope::~FMemScope((FMemScope *)(local_228 + 8));
            FLLMScope::~FLLMScope(&local_288);
            uVar24 = local_158;
            _Dst = local_168;
            local_270 = local_158;
            FMemScope::~FMemScope((FMemScope *)(local_228 + 0x10));
            FLLMScope::~FLLMScope(&local_284);
            if ((0xe < (int)uVar30) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("MipIndex < MAX_TEXTURE_MIP_COUNT",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureCube.cpp"
                                    ,0x23c,L""), bVar12)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            if (((*papvVar34)[0] == (void *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("MipData[FaceIndex][MipIndex]",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureCube.cpp"
                                    ,0x23d,L""), bVar12)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            if (uVar24 == 0) {
              pFVar10 = this->Owner->PrivatePlatformData;
              uVar24 = 0;
              if ((int)uVar30 < (pFVar10->Mips).Array.ArrayNum) {
                uVar24 = ~uVar30 >> 0x1f;
              }
              if ((uVar24 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              lVar19 = FBulkData::GetBulkDataSize
                                 ((FBulkData *)
                                  (*(longlong *)
                                    ((longlong)*papvVar34 +
                                    (longlong)
                                    ((pFVar10->Mips).Array.AllocatorInstance.Data + lVar32)) + 0x20)
                                 );
              memcpy(_Dst,(*papvVar34)[0],lVar19 / 6);
            }
            else {
              pFVar10 = this->Owner->PrivatePlatformData;
              if (pFVar10 == (FTexturePlatformData *)0x0) {
                uVar22 = 0;
                EVar28 = PF_Unknown;
                uVar24 = 0;
                uVar23 = GPixelFormats[0].BlockSizeX;
                uVar31 = GPixelFormats[0].BlockSizeY;
                iVar29 = GPixelFormats[0].BlockBytes;
              }
              else {
                EVar4 = pFVar10->PixelFormat;
                uVar22 = (uint)EVar4;
                EVar28 = (EPixelFormat)pFVar10->SizeY;
                uVar24 = pFVar10->SizeX;
                uVar23 = GPixelFormats[EVar4].BlockSizeX;
                uVar31 = GPixelFormats[EVar4].BlockSizeY;
                iVar29 = GPixelFormats[EVar4].BlockBytes;
              }
              CalcMipMapExtent((uint)&local_248,uVar24,EVar28,uVar22);
              uVar33 = (ulonglong)((uStack_244 - 1) + uVar31) / (ulonglong)uVar31;
              uVar24 = (((local_248 - 1) + uVar23) / uVar23) * iVar29;
              local_228._24_8_ = CalcTextureMipMapSize(local_248,uStack_244,(EPixelFormat)uVar22,0);
              uVar21 = (ulonglong)local_270;
              _Src = (*papvVar34)[0];
              if (uVar24 == local_270) {
                memcpy(_Dst,_Src,local_228._24_8_);
                this = local_278;
              }
              else {
                if ((int)uVar33 != 0) {
                  do {
                    memcpy(_Dst,_Src,(ulonglong)uVar24);
                    _Src = (void *)((longlong)_Src + (ulonglong)uVar24);
                    _Dst = (void *)((longlong)_Dst + uVar21);
                    uVar33 = uVar33 - 1;
                  } while (uVar33 != 0);
                }
                this = local_278;
                if (((longlong)_Src - (longlong)(*papvVar34)[0] != local_228._24_8_) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(PTRINT(Src) - PTRINT(MipData[FaceIndex][MipIndex])) == PTRINT(MipSizeInBytes)"
                                        ,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureCube.cpp"
                                        ,0x267,L""), this = local_278, bVar12)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
              }
            }
            FMemory::Free((*papvVar34)[0]);
            (*papvVar34)[0] = (void *)0x0;
            pFVar6 = (this->TextureCubeRHI).Reference;
            FLLMScope::FLLMScope(&local_27c,Textures,false,None,Default,true);
            FMemScope::FMemScope((FMemScope *)(local_228 + 0x28),Textures,true);
            local_190 = local_2a8;
            local_17c = 0;
            local_180 = 3;
            local_18c = 0;
            local_198 = pFVar6;
            local_188 = uVar30;
            FLLMScope::FLLMScope(&local_280,Textures,false,None,Default,true);
            FMemScope::FMemScope((FMemScope *)(local_228 + 0x20),Textures,true);
            (**(code **)(GDynamicRHI->_padding_ + 0x1e8))(GDynamicRHI,0x154be5ed0);
            FMemScope::~FMemScope((FMemScope *)(local_228 + 0x20));
            FLLMScope::~FLLMScope(&local_280);
            FMemScope::~FMemScope((FMemScope *)(local_228 + 0x28));
            FLLMScope::~FLLMScope(&local_27c);
          }
          uVar30 = uVar30 + 1;
          lVar27 = lVar27 + -1;
          lVar25 = local_228._48_8_;
          papvVar34 = (void *(*) [15])(*papvVar34 + 1);
        } while (lVar27 != 0);
      }
      local_2a8 = local_2a8 + 1;
      local_240 = local_240 + 1;
      lVar32 = lVar32 + -0x78;
    } while (local_2a8 < 6);
    this_01 = UDeviceProfileManager::Get(false);
    this_02 = UDeviceProfileManager::GetActiveProfile(this_01);
    this_03 = UDeviceProfile::GetTextureLODSettings(this_02);
    local_268.Filter.Value = UTextureLODSettings::GetSamplerFilter(this_03,(UTexture *)this->Owner);
    local_268.AddressU.Value = '\x01';
    local_268.AddressV.Value = '\x01';
    local_268.AddressW.Value = '\x01';
    local_268.MipBias = 0.0;
    local_268.MinMipLevel = 0.0;
    local_268.MaxMipLevel = 3.4028235e+38;
    local_268.MaxAnisotropy = 0;
    local_268.BorderColor = 0;
    local_268.SamplerComparisonFunction.Value = '\0';
    pFVar20 = (FRHIResource *)FTexture::GetOrCreateSamplerState(&local_268);
    pFVar8 = (FRHIResource *)this->_padding_;
    if (pFVar8 != pFVar20) {
      this->_padding_ = (longlong)pFVar20;
      if (pFVar20 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(pFVar20);
      }
      if (pFVar8 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar8);
      }
    }
    cVar5 = (char)this->Owner->_padding_;
    if (((byte)(cVar5 - 3U) < 2) || ((byte)(cVar5 - 8U) < 2)) {
      uVar13 = 1;
    }
    else {
      uVar13 = 0;
    }
    *(undefined1 *)((longlong)&this->_padding_ + 4) = uVar13;
    if (local_c8.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_c8.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
    }
  }
  else {
    pFVar6 = (this->ProxiedResource->TextureCubeRHI).Reference;
    if (pFVar6 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar6);
    }
    pTVar1 = &this->TextureCubeRHI;
    if (pTVar1 != (TRefCountPtr<FRHITexture> *)&local_170) {
      pFVar7 = pTVar1->Reference;
      pTVar1->Reference = pFVar6;
      pFVar6 = pFVar7;
    }
    if (pFVar6 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar6);
    }
    pFVar6 = pTVar1->Reference;
    pFVar7 = (FRHITexture *)this->_padding_;
    if (pFVar7 != pFVar6) {
      this->_padding_ = (longlong)pFVar6;
      if (pFVar6 != (FRHITexture *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar6);
      }
      if (pFVar7 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar7);
      }
    }
    pFVar8 = (FRHIResource *)this->_padding_;
    pFVar20 = (FRHIResource *)this->ProxiedResource->_padding_;
    if (pFVar8 != pFVar20) {
      this->_padding_ = (longlong)pFVar20;
      if (pFVar20 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(pFVar20);
      }
      if (pFVar8 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar8);
      }
    }
    FRHICommandListBase::UpdateTextureReference
              (param_1,*(FRHITextureReference **)(this->Owner->_padding_ + 0x20),
               (FRHITexture *)this->_padding_);
  }
  return;
}

// IsProxy @ 148895ce0

bool __thiscall FTextureCubeResource::IsProxy(FTextureCubeResource *this)

{
  return this->ProxiedResource != (FTextureCubeResource *)0x0;
}

// ReleaseRHI @ 148896fe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FTextureCubeResource::ReleaseRHI(FTextureCubeResource *this)

{
  FName FVar1;
  FRHITextureReference *pFVar2;
  FRHITexture *this_00;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_TextureMemory> FVar6;
  FThreadStats *pFVar7;
  FThreadStatsPool *pFVar8;
  uchar auVar9 [8];
  FName local_res8;
  FName local_res10;
  FName local_res18 [2];
  FStatMessage local_48;
  FStatMessage local_38;
  
  auVar9 = (uchar  [8])(longlong)this->TextureSize;
  if (auVar9 != (uchar  [8])0x0) {
    FVar6 = StatPtr_STAT_TextureMemory;
    if (StatPtr_STAT_TextureMemory == (FThreadSafeStaticStat<FStat_STAT_TextureMemory>)0x0) {
      pFVar5 = ::FName::FName(local_res18,"STAT_TextureMemory");
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_TextureMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TextureMemory,*pFVar5,
                         L"Texture Memory Used","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true
                         ,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar6;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar7 == (FThreadStats *)0x0) {
        pFVar8 = FThreadStatsPool::Get();
        pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
      }
      local_48.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar1;
      local_48.StatData.Pad = auVar9;
      local_48.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar7,&local_48);
      FStatsTrace::Add(&local_res8,-(longlong)auVar9);
      if (pFVar7->ScopeCount == 0) {
        FThreadStats::Flush(pFVar7,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar7,false,false);
      }
    }
  }
  auVar9 = (uchar  [8])(longlong)this->TextureSize;
  if (((auVar9 != (uchar  [8])0x0) && (FVar1 = this->LODGroupStatName, FVar1 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar7 == (FThreadStats *)0x0) {
      pFVar8 = FThreadStatsPool::Get();
      pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
    }
    local_38.NameAndInfo.Index = FVar1.ComparisonIndex.Value;
    local_38.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
    local_res10 = FVar1;
    local_38.StatData.Pad = auVar9;
    FThreadStats::AddStatMessage(pFVar7,&local_38);
    FStatsTrace::Add(&local_res10,-(longlong)auVar9);
    if (pFVar7->ScopeCount == 0) {
      FThreadStats::Flush(pFVar7,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar7,false,false);
    }
  }
  pFVar2 = *(FRHITextureReference **)(this->Owner->_padding_ + 0x20);
  bVar4 = IsInRenderingThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x1594,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandListBase::UpdateTextureReference
            ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,pFVar2,(FRHITexture *)0x0)
  ;
  this_00 = (this->TextureCubeRHI).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    (this->TextureCubeRHI).Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FTexture::ReleaseRHI((FTexture *)this);
  return;
}

