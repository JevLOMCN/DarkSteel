// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// FStreamableTextureResource @ 148442f60

FStreamableTextureResource * __thiscall
FStreamableTextureResource::FStreamableTextureResource
          (FStreamableTextureResource *this,UTexture *param_1,FTexturePlatformData *param_2,
          FStreamableRenderResourceState *param_3,bool param_4)

{
  EPixelFormat EVar1;
  byte bVar2;
  FTexturePlatformData *pFVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  ETextureSamplerFilter EVar8;
  bool bVar9;
  byte bVar10;
  int iVar11;
  UDeviceProfileManager *this_00;
  UDeviceProfile *this_01;
  UTextureLODSettings *this_02;
  FTextureLODGroup *pFVar12;
  FStreamableTextureResource *pFVar13;
  longlong *plVar14;
  UClass *pUVar15;
  ETextureCreateFlags EVar16;
  uchar uVar17;
  byte bVar18;
  uchar uVar19;
  EMipFadeSettings EVar20;
  byte bVar21;
  UClass *local_res8;
  
  FTexture::FTexture((FTexture *)this);
  this->_padding_ = 0;
  this->PlatformData = param_2;
  this->_padding_ = (longlong)&___7FStreamableTextureResource__6B_;
  (this->State).field0_0x0 = param_3->field0_0x0;
  EVar20 = MipFade_Normal;
  this->Filter = '\0';
  this->AddressU = '\0';
  this->AddressV = '\0';
  this->AddressW = '\0';
  this->SizeY = 0;
  this->SizeZ = 0;
  this->MipBias = 0.0;
  this->SizeX = 0;
  uVar6 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  (this->TextureName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->_padding_;
  (this->TextureName).Number = uVar6;
  this->MipFadeSetting = MipFade_Normal;
  this->LODGroup = (uint)(param_1->LODGroup).Value;
  EVar1 = param_2->PixelFormat;
  this->CreationFlags = None;
  this->bUsePartiallyResidentMips = false;
  this->MaxAniso = '\0';
  (this->LODGroupStatName).ComparisonIndex = 0;
  (this->LODGroupStatName).Number = 0;
  this->PixelFormat = EVar1;
  uVar19 = '\0';
  this->bIsNeverStream = false;
  this->TextureSize = 0;
  *(byte *)((longlong)&this->_padding_ + 6) = param_1->SRGB;
  bVar2 = (param_1->CompressionSettings).Value;
  if (((bVar2 == 3) || ((bVar2 - 4 & 0xfffffffb) == 0)) || (bVar2 == 9)) {
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  *(undefined1 *)((longlong)&this->_padding_ + 4) = uVar7;
  this_00 = UDeviceProfileManager::Get(false);
  this_01 = UDeviceProfileManager::GetActiveProfile(this_00);
  this_02 = UDeviceProfile::GetTextureLODSettings(this_01);
  EVar8 = UTextureLODSettings::GetSamplerFilter(this_02,param_1);
  (this->Filter).Value = EVar8;
  iVar11 = (**(code **)(param_1->_padding_ + 0x388))(param_1);
  uVar17 = uVar19;
  if (iVar11 != 0) {
    iVar11 = (**(code **)(param_1->_padding_ + 0x388))(param_1);
    uVar17 = (iVar11 != 1) + '\x01';
  }
  (this->AddressU).Value = uVar17;
  iVar11 = (**(code **)(param_1->_padding_ + 0x390))(param_1);
  uVar17 = uVar19;
  if (iVar11 != 0) {
    iVar11 = (**(code **)(param_1->_padding_ + 0x390))(param_1);
    uVar17 = (iVar11 != 1) + '\x01';
  }
  (this->AddressV).Value = uVar17;
  iVar11 = (**(code **)(param_1->_padding_ + 0x398))(param_1);
  if (iVar11 != 0) {
    iVar11 = (**(code **)(param_1->_padding_ + 0x398))(param_1);
    uVar19 = (iVar11 != 1) + '\x01';
  }
  (this->AddressW).Value = uVar19;
  pFVar12 = UTextureLODSettings::GetTextureLODGroup(this_02,(uint)(param_1->LODGroup).Value);
  pFVar3 = this->PlatformData;
  bVar2 = (this->State).field0_0x0._s_0.AssetLODBias;
  this->MaxAniso = (schar)pFVar12->MaxAniso;
  if (((pFVar3->Mips).Array.ArrayNum <= (int)(uint)bVar2) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar13 = (FStreamableTextureResource *)(*pcVar5)();
    return pFVar13;
  }
  lVar4 = *(longlong *)((pFVar3->Mips).Array.AllocatorInstance.Data + (ulonglong)bVar2 * 8);
  this->SizeX = (uint)*(ushort *)(lVar4 + 0x48);
  this->SizeY = (uint)*(ushort *)(lVar4 + 0x4a);
  this->SizeZ = (uint)*(ushort *)(lVar4 + 0x4c);
  if ((this->LODGroup == TEXTUREGROUP_Lightmap) || (this->LODGroup == TEXTUREGROUP_Shadowmap)) {
    EVar20 = MipFade_Slow;
  }
  this->MipFadeSetting = EVar20;
  bVar2 = param_1->field_0x116;
  (**(code **)(param_1->_padding_ + 0x30))(&param_1->_padding_);
  bVar18 = ~param_1->bNotOfflineProcessed & 1;
  pcVar5 = *(code **)(param_1->_padding_ + 0x18);
  local_res8 = Z_Construct_UClass_UTextureMipDataProviderFactory_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  plVar14 = (longlong *)(*pcVar5)(&param_1->_padding_,&local_res8);
  bVar21 = bVar18;
  if (plVar14 != (longlong *)0x0) {
    pUVar15 = Z_Construct_UClass_UTextureMipDataProviderFactory_NoRegister();
    iVar11 = (int)pUVar15->_padding_;
    if ((iVar11 <= *(int *)(plVar14[2] + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar14[2] + 0x30) + (longlong)iVar11 * 8) ==
        &pUVar15->_padding_)) {
      bVar10 = (**(code **)(*plVar14 + 0x2e0))(plVar14,param_1);
      pUVar15 = Z_Construct_UClass_UTextureAllMipDataProviderFactory_NoRegister();
      iVar11 = (int)pUVar15->_padding_;
      if (((*(int *)(plVar14[2] + 0x38) < iVar11) ||
          (bVar21 = bVar10,
          (longlong *)*(undefined1 **)(*(longlong *)(plVar14[2] + 0x30) + (longlong)iVar11 * 8) !=
          &pUVar15->_padding_)) && (bVar21 = bVar18, bVar10 != bVar18)) {
        `ShouldAllowPlatformTiling'::__l5::<lambda_1>::operator()(&param_4);
      }
    }
  }
  EVar16 = ShaderResource;
  if (bVar21 != 0) {
    EVar16 = OfflineProcessed|ShaderResource;
  }
  EVar16 = param_1->SRGB << 4 | EVar16 | (ulonglong)(bVar2 & 2) << 5;
  this->CreationFlags = EVar16;
  if (1 < (param_3->field0_0x0)._s_0.MaxNumLODs) {
    this->CreationFlags = EVar16 | Streamable;
  }
  this->bUsePartiallyResidentMips = false;
  this->LODGroupStatName = FTextureResource::TextureGroupStatFNames[(int)this->LODGroup];
  this->bIsNeverStream = (bool)((byte)param_1->_padding_ & 1);
  return this;
}

// CalcRequestedMipsSize @ 14845a480

void __thiscall FStreamableTextureResource::CalcRequestedMipsSize(FStreamableTextureResource *this)

{
  ulong64 uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0xa0))(this,(this->State).field0_0x0._s_0.NumRequestedLODs)
  ;
  this->TextureSize = uVar1;
  return;
}

// DecrementTextureStats @ 1484613c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStreamableTextureResource::DecrementTextureStats(FStreamableTextureResource *this)

{
  uchar auVar1 [8];
  FName FVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_TextureMemory> FVar4;
  FThreadStats *pFVar5;
  FThreadStatsPool *pFVar6;
  FName local_res8;
  FStatMessage local_28;
  
  auVar1 = (uchar  [8])this->TextureSize;
  if (auVar1 != (uchar  [8])0x0) {
    FVar4 = StatPtr_STAT_TextureMemory;
    if (StatPtr_STAT_TextureMemory == (FThreadSafeStaticStat<FStat_STAT_TextureMemory>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_TextureMemory");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_TextureMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TextureMemory,*pFVar3,
                         L"Texture Memory Used","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true
                         ,false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar4;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar5 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar5 == (FThreadStats *)0x0) {
        pFVar6 = FThreadStatsPool::Get();
        pFVar5 = FThreadStatsPool::GetFromPool(pFVar6);
      }
      local_28.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar2;
      local_28.StatData.Pad = auVar1;
      local_28.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar5,&local_28);
      FStatsTrace::Add(&local_res8,-(longlong)auVar1);
      if (pFVar5->ScopeCount == 0) {
        FThreadStats::Flush(pFVar5,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar5,false,false);
      }
    }
  }
  auVar1 = (uchar  [8])this->TextureSize;
  if (((auVar1 != (uchar  [8])0x0) && (FVar2 = this->LODGroupStatName, FVar2 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar5 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar5 == (FThreadStats *)0x0) {
      pFVar6 = FThreadStatsPool::Get();
      pFVar5 = FThreadStatsPool::GetFromPool(pFVar6);
    }
    local_28.NameAndInfo.Index = FVar2.ComparisonIndex.Value;
    local_28.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
    local_res8 = FVar2;
    local_28.StatData.Pad = auVar1;
    FThreadStats::AddStatMessage(pFVar5,&local_28);
    FStatsTrace::Add(&local_res8,-(longlong)auVar1);
    if (pFVar5->ScopeCount == 0) {
      FThreadStats::Flush(pFVar5,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar5,false,false);
    }
  }
  if (this->LODGroup != TEXTUREGROUP_UI) {
    if (this->bIsNeverStream != false) {
      GNeverStreamTextureMemory = GNeverStreamTextureMemory - this->TextureSize;
    }
    return;
  }
  GUITextureMemory = GUITextureMemory - this->TextureSize;
  return;
}

// FinalizeStreaming @ 148466c00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FStreamableTextureResource::FinalizeStreaming
          (FStreamableTextureResource *this,FRHICommandListBase *param_1,FRHITexture *param_2)

{
  byte bVar1;
  byte bVar2;
  FRHITexture *this_00;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  ulong64 uVar6;
  
  lVar5 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
  bVar1 = *(byte *)(lVar5 + 0x30);
  bVar2 = (this->State).field0_0x0._s_0.NumResidentLODs;
  (this->State).field0_0x0._s_0.NumRequestedLODs = bVar1;
  if (bVar2 != bVar1) {
    if (bVar2 < bVar1) {
      bVar2 = bVar1;
    }
    FMipBiasFade::SetNewMipCount
              ((FMipBiasFade *)&this->_padding_,(float)bVar2,(float)bVar1,(double)this->_padding_,
               this->MipFadeSetting);
    DecrementTextureStats(this);
    uVar6 = (**(code **)(this->_padding_ + 0xa0))
                      (this,(this->State).field0_0x0._s_0.NumRequestedLODs);
    this->TextureSize = uVar6;
    IncrementTextureStats(this);
  }
  this_00 = (FRHITexture *)this->_padding_;
  if (this_00 != param_2) {
    this->_padding_ = (longlong)param_2;
    FRHIResource::AddRef((FRHIResource *)param_2);
    if (this_00 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  *(longlong *)(this->_padding_ + 0x10) = this->_padding_;
  if ((FRHITextureReference *)this->_padding_ == (FRHITextureReference *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1739247822558986507>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\StreamableTextureResource.cpp"
                       ,0x10b,"TextureReferenceRHI.IsValid()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    FRHICommandListBase::UpdateTextureReference
              (param_1,(FRHITextureReference *)this->_padding_,(FRHITexture *)this->_padding_);
  }
  (this->State).field0_0x0._s_0.NumResidentLODs = (this->State).field0_0x0._s_0.NumRequestedLODs;
  return;
}

// FinalizeStreaming @ 148466d30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FStreamableTextureResource::FinalizeStreaming(FStreamableTextureResource *this,FRHITexture *param_1)

{
  byte bVar1;
  byte bVar2;
  FRHITexture *this_00;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  ulong64 uVar6;
  
  bVar4 = IsInRenderingThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar5 = (**(code **)(param_1->_padding_ + 0x20))(param_1);
  bVar1 = *(byte *)(lVar5 + 0x30);
  bVar2 = (this->State).field0_0x0._s_0.NumResidentLODs;
  (this->State).field0_0x0._s_0.NumRequestedLODs = bVar1;
  if (bVar2 != bVar1) {
    if (bVar2 < bVar1) {
      bVar2 = bVar1;
    }
    FMipBiasFade::SetNewMipCount
              ((FMipBiasFade *)&this->_padding_,(float)bVar2,(float)bVar1,(double)this->_padding_,
               this->MipFadeSetting);
    DecrementTextureStats(this);
    uVar6 = (**(code **)(this->_padding_ + 0xa0))
                      (this,(this->State).field0_0x0._s_0.NumRequestedLODs);
    this->TextureSize = uVar6;
    IncrementTextureStats(this);
  }
  this_00 = (FRHITexture *)this->_padding_;
  if (this_00 != param_1) {
    this->_padding_ = (longlong)param_1;
    FRHIResource::AddRef((FRHIResource *)param_1);
    if (this_00 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  *(longlong *)(this->_padding_ + 0x10) = this->_padding_;
  if ((FRHITextureReference *)this->_padding_ == (FRHITextureReference *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1739247822558986507>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\StreamableTextureResource.cpp"
                       ,0x10b,"TextureReferenceRHI.IsValid()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    FRHICommandListBase::UpdateTextureReference
              ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
               (FRHITextureReference *)this->_padding_,(FRHITexture *)this->_padding_);
  }
  (this->State).field0_0x0._s_0.NumResidentLODs = (this->State).field0_0x0._s_0.NumRequestedLODs;
  return;
}

// GetPlatformMip @ 14846ce20

FTexture2DMipMap * __thiscall
FStreamableTextureResource::GetPlatformMip(FStreamableTextureResource *this,int param_1)

{
  FTexturePlatformData *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FTexture2DMipMap *pFVar5;
  uint uVar6;
  
  pFVar1 = this->PlatformData;
  uVar6 = (uint)(this->State).field0_0x0._s_0.AssetLODBias + param_1;
  uVar4 = 0;
  if ((int)uVar6 < (pFVar1->Mips).Array.ArrayNum) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FTexture2DMipMap *)(*pcVar2)();
      return pFVar5;
    }
  }
  return *(FTexture2DMipMap **)
          ((pFVar1->Mips).Array.AllocatorInstance.Data + (longlong)(int)uVar6 * 8);
}

// GetPlatformMipsView @ 14846d5a0

TArrayView<FTexture2DMipMap_const_*,int> * __thiscall
FStreamableTextureResource::GetPlatformMipsView
          (FStreamableTextureResource *this,
          TArrayView<FTexture2DMipMap_const_*,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr =
       (FTexture2DMipMap **)
       ((this->PlatformData->Mips).Array.AllocatorInstance.Data +
       (ulonglong)(this->State).field0_0x0._s_0.AssetLODBias * 8);
  __return_storage_ptr__->ArrayNum = (uint)(this->State).field0_0x0._s_0.MaxNumLODs;
  return __return_storage_ptr__;
}

// GetSizeZ @ 14846f550

uint __thiscall FStreamableTextureResource::GetSizeZ(FStreamableTextureResource *this)

{
  return this->SizeZ;
}

// GetStreamableTextureResource @ 148470320

FStreamableTextureResource * __thiscall
FStreamableTextureResource::GetStreamableTextureResource(FStreamableTextureResource *this)

{
  return this;
}

// GetStreamableTextureResource @ 148470330

FStreamableTextureResource * __thiscall
FStreamableTextureResource::GetStreamableTextureResource(FStreamableTextureResource *this)

{
  return this;
}

// IncrementTextureStats @ 148474470

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStreamableTextureResource::IncrementTextureStats(FStreamableTextureResource *this)

{
  uchar auVar1 [8];
  FName FVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_TextureMemory> FVar4;
  FThreadStats *pFVar5;
  FThreadStatsPool *pFVar6;
  FName local_res8;
  FStatMessage local_28;
  
  auVar1 = (uchar  [8])this->TextureSize;
  if (auVar1 != (uchar  [8])0x0) {
    FVar4 = StatPtr_STAT_TextureMemory;
    if (StatPtr_STAT_TextureMemory == (FThreadSafeStaticStat<FStat_STAT_TextureMemory>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_TextureMemory");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_TextureMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TextureMemory,*pFVar3,
                         L"Texture Memory Used","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true
                         ,false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar4;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar5 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar5 == (FThreadStats *)0x0) {
        pFVar6 = FThreadStatsPool::Get();
        pFVar5 = FThreadStatsPool::GetFromPool(pFVar6);
      }
      local_28.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
      local_res8 = FVar2;
      local_28.StatData.Pad = auVar1;
      local_28.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar5,&local_28);
      FStatsTrace::Add(&local_res8,(long64)auVar1);
      if (pFVar5->ScopeCount == 0) {
        FThreadStats::Flush(pFVar5,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar5,false,false);
      }
    }
  }
  auVar1 = (uchar  [8])this->TextureSize;
  if (((auVar1 != (uchar  [8])0x0) && (FVar2 = this->LODGroupStatName, FVar2 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar5 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar5 == (FThreadStats *)0x0) {
      pFVar6 = FThreadStatsPool::Get();
      pFVar5 = FThreadStatsPool::GetFromPool(pFVar6);
    }
    local_28.NameAndInfo.Index = FVar2.ComparisonIndex.Value;
    local_28.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
    local_res8 = FVar2;
    local_28.StatData.Pad = auVar1;
    FThreadStats::AddStatMessage(pFVar5,&local_28);
    FStatsTrace::Add(&local_res8,(long64)auVar1);
    if (pFVar5->ScopeCount == 0) {
      FThreadStats::Flush(pFVar5,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar5,false,false);
    }
  }
  if (this->LODGroup != TEXTUREGROUP_UI) {
    if (this->bIsNeverStream != false) {
      GNeverStreamTextureMemory = GNeverStreamTextureMemory + this->TextureSize;
    }
    return;
  }
  GUITextureMemory = GUITextureMemory + this->TextureSize;
  return;
}

// InitRHI @ 1484761a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FStreamableTextureResource::InitRHI(FStreamableTextureResource *this,FRHICommandListBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  ulong64 uVar4;
  IConsoleManager *pIVar5;
  longlong *plVar6;
  TConsoleVariableData<int> *pTVar7;
  float fVar8;
  FScopedDebugInfo local_28;
  FStreamableTextureResource *local_10;
  
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId205,"FStreamableTextureResource_InitRHI",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\StreamableTextureResource.cpp"
               ,0xcd);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId205);
  }
  FScopedDebugInfo::FScopedDebugInfo(&local_28,0);
  local_28._padding_ = (longlong)&___7FStreamableTextureScopedDebugInfo__6B_;
  local_10 = this;
  uVar4 = (**(code **)(this->_padding_ + 0xa0))(this,(this->State).field0_0x0._s_0.NumRequestedLODs)
  ;
  this->TextureSize = uVar4;
  IncrementTextureStats(this);
  RefreshSamplerStates(this);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar5 = IConsoleManager::Get();
      plVar6 = (longlong *)(**(code **)((longlong)*pIVar5 + 0xc0))(pIVar5,L"r.PRT.ReducedMemory",1);
      pTVar7 = (TConsoleVariableData<int> *)0x0;
      if (plVar6 != (longlong *)0x0) {
        pTVar7 = (TConsoleVariableData<int> *)(**(code **)(*plVar6 + 0x68))(plVar6);
      }
      CVarReducedMode = pTVar7;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (CVarReducedMode == (TConsoleVariableData<int> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CVarReducedMode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\StreamableTextureResource.cpp"
                       ,0xd8,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar7 = CVarReducedMode;
  if (this->bUsePartiallyResidentMips != false) {
    bVar3 = IsInParallelRenderingThread();
    if (!bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((pTVar7->ShadowedValue[1] == 0) ||
       ((this->State).field0_0x0._s_0.NumNonStreamingLODs <
        (this->State).field0_0x0._s_0.NumRequestedLODs)) {
      (**(code **)(this->_padding_ + 0xb0))(this,param_1);
      goto LAB_148476329;
    }
  }
  (**(code **)(this->_padding_ + 0xa8))(this,param_1);
LAB_148476329:
  fVar8 = (float)(this->State).field0_0x0._s_0.NumRequestedLODs;
  FMipBiasFade::SetNewMipCount
            ((FMipBiasFade *)&this->_padding_,fVar8,fVar8,(double)this->_padding_,
             this->MipFadeSetting);
  if ((FRHITextureReference *)this->_padding_ == (FRHITextureReference *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1739247822558986469>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\StreamableTextureResource.cpp"
                       ,0xe5,"TextureReferenceRHI.IsValid()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    FRHICommandListBase::UpdateTextureReference
              (param_1,(FRHITextureReference *)this->_padding_,(FRHITexture *)this->_padding_);
  }
  FScopedDebugInfo::~FScopedDebugInfo(&local_28);
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// RefreshSamplerStates @ 148480f10

void __thiscall FStreamableTextureResource::RefreshSamplerStates(FStreamableTextureResource *this)

{
  char cVar1;
  FRHIResource *pFVar2;
  int iVar3;
  bool bVar4;
  FRHIResource *pFVar5;
  IConsoleManager *pIVar6;
  longlong *plVar7;
  TConsoleVariableData<int> *pTVar8;
  longlong lVar9;
  int iVar10;
  FSamplerStateInitializerRHI local_48;
  FSamplerStateInitializerRHI local_28;
  
  cVar1 = this->MaxAniso;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `unsigned_int___cdecl_ComputeAnisotropyRT(int)'::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`unsigned_int___cdecl_ComputeAnisotropyRT(int)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`unsigned_int___cdecl_ComputeAnisotropyRT(int)'::__l2::_thread_safe_static_guard_0__ == -1)
    {
      pIVar6 = IConsoleManager::Get();
      plVar7 = (longlong *)(**(code **)((longlong)*pIVar6 + 0xc0))(pIVar6,L"r.MaxAnisotropy",1);
      pTVar8 = (TConsoleVariableData<int> *)0x0;
      if (plVar7 != (longlong *)0x0) {
        pTVar8 = (TConsoleVariableData<int> *)(**(code **)(*plVar7 + 0x68))(plVar7);
      }
      `unsigned_int___cdecl_ComputeAnisotropyRT(int)'::__l2::CVar = pTVar8;
      _Init_thread_footer(&`unsigned_int___cdecl_ComputeAnisotropyRT(int)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  pTVar8 = `unsigned_int___cdecl_ComputeAnisotropyRT(int)'::__l2::CVar;
  bVar4 = IsInParallelGameThread();
  if (!bVar4) {
    bVar4 = IsInGameThread();
    if (!bVar4) {
      lVar9 = 4;
      goto LAB_148480f72;
    }
  }
  lVar9 = 0;
LAB_148480f72:
  local_48.Filter.Value = (this->Filter).Value;
  local_48.MipBias = this->MipBias;
  iVar3 = *(int *)((longlong)pTVar8->ShadowedValue + lVar9);
  if ('\0' < cVar1) {
    iVar3 = (int)cVar1;
  }
  local_48.AddressU.Value = (this->AddressU).Value;
  iVar10 = 0x10;
  if (iVar3 < 0x10) {
    iVar10 = iVar3;
  }
  local_48.AddressV.Value = (this->AddressV).Value;
  local_48.AddressW.Value = (this->AddressW).Value;
  local_48.MinMipLevel = 0.0;
  local_48.MaxAnisotropy = 1;
  if (1 < iVar10) {
    local_48.MaxAnisotropy = iVar10;
  }
  local_48.MaxMipLevel = 3.4028235e+38;
  local_48.BorderColor = 0;
  local_48.SamplerComparisonFunction.Value = '\0';
  pFVar5 = (FRHIResource *)FTexture::GetOrCreateSamplerState(&local_48);
  pFVar2 = (FRHIResource *)this->_padding_;
  if (pFVar2 != pFVar5) {
    this->_padding_ = (longlong)pFVar5;
    if (pFVar5 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(pFVar5);
    }
    if (pFVar2 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar2);
    }
  }
  local_28.Filter.Value = (this->Filter).Value;
  local_28.MipBias = this->MipBias;
  local_28.AddressU.Value = (this->AddressU).Value;
  local_28.AddressV.Value = (this->AddressV).Value;
  local_28.AddressW.Value = (this->AddressW).Value;
  local_28.MinMipLevel = 0.0;
  local_28.MaxMipLevel = 2.0;
  local_28.MaxAnisotropy = 1;
  local_28.BorderColor = 0;
  local_28.SamplerComparisonFunction.Value = '\0';
  pFVar5 = (FRHIResource *)FTexture::GetOrCreateSamplerState(&local_28);
  pFVar2 = (FRHIResource *)this->_padding_;
  if (pFVar2 != pFVar5) {
    this->_padding_ = (longlong)pFVar5;
    if (pFVar5 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(pFVar5);
    }
    if (pFVar2 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar2);
    }
  }
  return;
}

// ReleaseRHI @ 148483590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FStreamableTextureResource::ReleaseRHI(FStreamableTextureResource *this)

{
  FRHITextureReference *pFVar1;
  FRHIResource *this_00;
  code *pcVar2;
  bool bVar3;
  
  DecrementTextureStats(this);
  pFVar1 = (FRHITextureReference *)this->_padding_;
  if (pFVar1 == (FRHITextureReference *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1739247822558986479>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\StreamableTextureResource.cpp"
                       ,0xef,"TextureReferenceRHI.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
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
              ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,pFVar1,
               (FRHITexture *)0x0);
  }
  this_00 = (FRHIResource *)this->_padding_;
  if (this_00 != (FRHIResource *)0x0) {
    this->_padding_ = 0;
    FRHIResource::Release(this_00);
  }
  FTexture::ReleaseRHI((FTexture *)this);
  return;
}

