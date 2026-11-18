// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 21

// GetSize @ 1487a4480

int __thiscall FStreamingRenderAsset::GetSize(FStreamingRenderAsset *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InMipCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingTexture.h"
                       ,0x38,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  uVar4 = 8;
  if (this->RenderAssetType == Texture) {
    uVar4 = 0x10;
  }
  if (uVar4 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(uint32)InMipCount <= (IsTexture() ? (sizeof(UEArrayCountHelper(CumulativeLODSizes)) - 1) : (sizeof(UEArrayCountHelper(CumulativeLODSizes_Mesh)) - 1))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingTexture.h"
                       ,0x39,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return *(int *)((longlong)(&(this->LevelIndexUsage).AllocatorInstance + -5) +
                 (longlong)param_1 * 4);
}

// FStreamingRenderAsset @ 148805f90

FStreamingRenderAsset * __thiscall
FStreamingRenderAsset::FStreamingRenderAsset
          (FStreamingRenderAsset *this,UStreamableRenderAsset *param_1,TSharedPtr<int,1> *param_2,
          int *param_3,int param_4,FRenderAssetStreamingSettings *param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  schar sVar4;
  TReferenceControllerBase<1> *pTVar5;
  EStreamableRenderAssetType EVar6;
  
  this->RenderAsset = param_1;
  (this->SimpleStreamableAssetManagerIndex).Object = param_2->Object;
  pTVar5 = (param_2->SharedReferenceCount).ReferenceController;
  (this->SimpleStreamableAssetManagerIndex).SharedReferenceCount.ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->OptionalFileHash = 0;
  EVar6 = (**(code **)(param_1->_padding_ + 0x300))(param_1);
  this->RenderAssetType = EVar6;
  (this->LevelIndexUsage).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->LevelIndexUsage).NumBits = 0;
  (this->LevelIndexUsage).MaxBits = 0x80;
  UpdateStaticData(this,param_5);
  UpdateDynamicData(this,param_3,param_4,param_5,false,
                    (TArray<UStreamableRenderAsset_*,TSizedDefaultAllocator<32>_> *)0x0);
  this->InstanceRemovedTimestamp = -3.4028234663852886e+38;
  this->DynamicBoostFactor = 1.0;
  this->NumMissingMips = '\0';
  sVar4 = this->MinAllowedMips;
  this->bLooksLowRes = '\0';
  this->bMissingTooManyMips = '\0';
  this->VisibleWantedMips = sVar4;
  this->HiddenWantedMips = sVar4;
  this->BudgetedMips = sVar4;
  this->WantedMips = sVar4;
  puVar2 = &this->field_0x96;
  this->bHasUpdatePending = param_1->bHasStreamingUpdatePending;
  this->bUseUnkownRefHeuristic = '\0';
  this->bForceFullyLoadHeuristic = '\0';
  this->RetentionPriority = 0;
  this->NormalizedScreenSize = 0.0;
  this->NumForcedMips = '\0';
  this->LoadOrderPriority = 0;
  return this;
}

// CacheStreamingMetaData @ 148824070

void __thiscall FStreamingRenderAsset::CacheStreamingMetaData(FStreamingRenderAsset *this)

{
  this->CachedWantedMips = this->WantedMips;
  this->CachedVisibleWantedMips = this->VisibleWantedMips;
  this->field_0x97 = ((byte)this->field_0x96 >> 4 ^ this->field_0x97) & 4 ^ this->field_0x97;
  return;
}

// CancelStreamingRequest @ 148828bd0

void __thiscall FStreamingRenderAsset::CancelStreamingRequest(FStreamingRenderAsset *this)

{
  FStreamableRenderResourceState_u_0_s_0 FVar1;
  
  if (this->RenderAsset != (UStreamableRenderAsset *)0x0) {
    UStreamableRenderAsset::CancelPendingStreamingRequest(this->RenderAsset);
    if (this->RenderAsset != (UStreamableRenderAsset *)0x0) {
      UStreamableRenderAsset::TickStreaming
                (this->RenderAsset,true,
                 (TArray<UStreamableRenderAsset_*,TSizedDefaultAllocator<32>_> *)0x0);
      FVar1 = (this->RenderAsset->CachedSRRState).field0_0x0._s_0;
      this->RequestedMips = FVar1.NumRequestedLODs;
      this->ResidentMips = FVar1.NumResidentLODs;
    }
  }
  return;
}

// DropMaxResolution_Async @ 1488348b0

long64 __thiscall
FStreamingRenderAsset::DropMaxResolution_Async(FStreamingRenderAsset *this,int param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  
  if (this->RenderAsset != (UStreamableRenderAsset *)0x0) {
    cVar3 = this->BudgetedMips;
    iVar4 = ((int)this->MaxAllowedMips - (int)this->MinAllowedMips) + -1;
    if (iVar4 < param_1) {
      param_1 = iVar4;
    }
    if (param_1 < 1) {
      if (this->MinAllowedMips < cVar3) {
        cVar3 = cVar3 + -1;
        this->BudgetedMips = cVar3;
        iVar4 = GetSize(this,cVar3 + 1);
        iVar1 = GetSize(this,(int)cVar3);
        return (longlong)(iVar4 - iVar1);
      }
    }
    else {
      this->BudgetMipBias = this->BudgetMipBias + param_1;
      cVar2 = this->MaxAllowedMips - (char)param_1;
      this->MaxAllowedMips = cVar2;
      if (cVar2 < cVar3) {
        iVar4 = GetSize(this,(int)cVar2);
        iVar1 = GetSize(this,(int)cVar3);
        cVar3 = this->MaxAllowedMips;
        this->BudgetedMips = cVar3;
        cVar2 = cVar3;
        if (this->VisibleWantedMips < cVar3) {
          cVar2 = this->VisibleWantedMips;
        }
        this->VisibleWantedMips = cVar2;
        if (this->HiddenWantedMips < cVar3) {
          cVar3 = this->HiddenWantedMips;
        }
        this->HiddenWantedMips = cVar3;
        return (longlong)(iVar1 - iVar4);
      }
    }
  }
  return 0;
}

// DropOneMip_Async @ 1488349d0

long64 __thiscall FStreamingRenderAsset::DropOneMip_Async(FStreamingRenderAsset *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if ((this->RenderAsset != (UStreamableRenderAsset *)0x0) &&
     (this->MinAllowedMips < this->BudgetedMips)) {
    cVar1 = this->BudgetedMips + -1;
    this->BudgetedMips = cVar1;
    iVar2 = GetSize(this,cVar1 + 1);
    iVar3 = GetSize(this,(int)cVar1);
    return (longlong)(iVar2 - iVar3);
  }
  return 0;
}

// GetDropMaxResMemDelta @ 14883def0

long64 __thiscall
FStreamingRenderAsset::GetDropMaxResMemDelta(FStreamingRenderAsset *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  if (this->RenderAsset != (UStreamableRenderAsset *)0x0) {
    iVar2 = ((int)this->MaxAllowedMips - (int)this->MinAllowedMips) + -1;
    if (iVar2 < param_1) {
      param_1 = iVar2;
    }
    iVar2 = GetSize(this,this->MaxAllowedMips - param_1);
    iVar1 = GetSize(this,(int)this->MaxAllowedMips);
    return (longlong)(iVar1 - iVar2);
  }
  return 0;
}

// GetDropOneMipMemDelta @ 14883df60

long64 __thiscall FStreamingRenderAsset::GetDropOneMipMemDelta(FStreamingRenderAsset *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = this->BudgetedMips;
  iVar2 = GetSize(this,this->BudgetedMips + 1);
  iVar3 = GetSize(this,(int)cVar1);
  return (longlong)(iVar2 - iVar3);
}

// GetExtraBoost @ 14883e0c0

float __cdecl
FStreamingRenderAsset::GetExtraBoost(TextureGroup param_1,FRenderAssetStreamingSettings *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = __real_3f800000;
  if (param_2->bUseNewMetrics != false) {
    fVar2 = __real_3f35c28f;
  }
  if (1 < param_1 - TEXTUREGROUP_Terrain_Heightmap) {
    if (param_1 == TEXTUREGROUP_Lightmap) {
      fVar1 = GLightmapStreamingFactor;
      if (fVar2 <= GLightmapStreamingFactor) {
        fVar1 = fVar2;
      }
      return fVar1;
    }
    if (param_1 == TEXTUREGROUP_Shadowmap) {
      fVar1 = GShadowmapStreamingFactor;
      if (fVar2 <= GShadowmapStreamingFactor) {
        fVar1 = fVar2;
      }
      return fVar1;
    }
  }
  return fVar2;
}

// GetWantedMipsFromSize @ 148843de0

int __thiscall
FStreamingRenderAsset::GetWantedMipsFromSize
          (FStreamingRenderAsset *this,float param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uchar *puVar10;
  float fVar11;
  
  if (this->RenderAssetType == Texture) {
    if (param_1 <= __real_3f800000) {
      param_1 = __real_3f800000;
    }
    fVar11 = logf(param_1);
    iVar4 = -((int)ROUND(__real_c0200000 - fVar11 * __real_4038aa3b) >> 1);
    iVar3 = (int)this->MaxAllowedMips;
    if (iVar4 < this->MaxAllowedMips) {
      iVar3 = iVar4;
    }
    iVar4 = (int)this->MinAllowedMips;
    if (this->MinAllowedMips < iVar3) {
      iVar4 = iVar3;
    }
    return iVar4;
  }
  if ((1 < (byte)(this->RenderAssetType - StaticMesh)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("RenderAssetType == EStreamableRenderAssetType::StaticMesh || RenderAssetType == EStreamableRenderAssetType::SkeletalMesh"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingTexture.cpp"
                         ,0x13e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  uVar8 = (uint)this->MaxAllowedMips;
  uVar9 = uVar8;
  if (param_1 != __real_7f7fffff) {
    uVar6 = (ulonglong)this->MinAllowedMips;
    if ((int)this->MinAllowedMips <= (int)uVar8) {
      puVar10 = (this->LevelIndexUsage).AllocatorInstance.InlineData + uVar6 * 4 + -0x58;
      uVar7 = uVar6;
      do {
        if ((this->RenderAssetType == Texture) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsMesh()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingTexture.h"
                               ,0x78,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          iVar3 = (*pcVar1)();
          return iVar3;
        }
        uVar5 = (uint)uVar6;
        if ((((longlong)uVar7 < 1) || (8 < uVar5)) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumMips > 0 && (uint32)NumMips <= (sizeof(UEArrayCountHelper(LODScreenSizes)) - 1)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingTexture.h"
                               ,0x79,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          iVar3 = (*pcVar1)();
          return iVar3;
        }
        uVar9 = uVar5;
        if (param_1 * param_2 < *(float *)puVar10 || param_1 * param_2 == *(float *)puVar10) break;
        uVar6 = (ulonglong)(uVar5 + 1);
        uVar7 = uVar7 + 1;
        puVar10 = puVar10 + 4;
        uVar9 = uVar8;
      } while ((int)(uVar5 + 1) <= (int)this->MaxAllowedMips);
    }
    if ((bool)this->bUseUnkownRefHeuristic) {
      uVar8 = uVar9 - this->NoRefLODBias;
      uVar9 = (int)this->MinAllowedMips;
      if ((int)this->MinAllowedMips < (int)uVar8) {
        uVar9 = uVar8;
      }
    }
  }
  return uVar9;
}

// KeepOneMip_Async @ 1488481b0

long64 __thiscall FStreamingRenderAsset::KeepOneMip_Async(FStreamingRenderAsset *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  if (this->RenderAsset != (UStreamableRenderAsset *)0x0) {
    cVar3 = this->MaxAllowedMips;
    if (this->ResidentMips < this->MaxAllowedMips) {
      cVar3 = this->ResidentMips;
    }
    if (this->BudgetedMips < cVar3) {
      cVar3 = this->BudgetedMips + '\x01';
      this->BudgetedMips = cVar3;
      iVar1 = GetSize(this,cVar3 + -1);
      iVar2 = GetSize(this,(int)this->BudgetedMips);
      return (longlong)(iVar2 - iVar1);
    }
  }
  return 0;
}

// SetPerfectWantedMips_Async @ 148859620

void __thiscall
FStreamingRenderAsset::SetPerfectWantedMips_Async
          (FStreamingRenderAsset *this,float param_1,float param_2,float param_3,int param_4,
          bool param_5,FRenderAssetStreamingSettings *param_6)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  schar sVar4;
  char cVar5;
  float fVar6;
  float fVar7;
  
  if ((param_1 == __real_7f7fffff) || (param_2 == __real_7f7fffff)) {
    bVar2 = 0x40;
  }
  else {
    bVar2 = 0;
  }
  this->bForceFullyLoadHeuristic = '\0';
  this->field_0x96 = this->field_0x96 | bVar2;
  this->bLooksLowRes = '\0';
  this->field_0x97 = this->field_0x97 | param_5;
  this->NormalizedScreenSize = 0.0;
  cVar5 = this->MaxAllowedMips;
  if (cVar5 <= param_4) {
    this->NumForcedMips = cVar5;
    this->HiddenWantedMips = cVar5;
    this->VisibleWantedMips = cVar5;
    this->NumMissingMips = '\0';
    return;
  }
  fVar7 = __real_3f800000;
  if (this->RenderAssetType != Texture) {
    fVar7 = __real_3f800000 / param_3;
    fVar6 = param_1;
    if (param_1 <= param_2) {
      fVar6 = param_2;
    }
    this->NormalizedScreenSize = fVar6 * fVar7;
  }
  sVar4 = (schar)param_4;
  this->NumForcedMips = sVar4;
  iVar3 = GetWantedMipsFromSize(this,param_2,fVar7);
  if (sVar4 < iVar3) {
    sVar4 = (schar)iVar3;
  }
  this->VisibleWantedMips = sVar4;
  if ((this->bIsTerrainTexture == '\0' && this->bForceFullyLoadHeuristic == '\0') &&
     (this->bLooksLowRes == 0)) {
    cVar5 = this->NumForcedMips;
    iVar3 = GetWantedMipsFromSize(this,param_1 * param_6->HiddenPrimitiveScale,fVar7);
    cVar1 = this->VisibleWantedMips;
    if (cVar5 < iVar3) {
      cVar5 = (char)iVar3;
    }
    this->HiddenWantedMips = cVar5;
    iVar3 = GetWantedMipsFromSize(this,param_1,fVar7);
    if (cVar5 < cVar1) {
      cVar5 = cVar1;
    }
    sVar4 = '\0';
    if (0 < iVar3 - cVar5) {
      sVar4 = (schar)(iVar3 - cVar5);
    }
    this->NumMissingMips = sVar4;
  }
  else {
    cVar5 = this->NumForcedMips;
    iVar3 = GetWantedMipsFromSize(this,param_1,fVar7);
    if (cVar5 < iVar3) {
      cVar5 = (char)iVar3;
    }
    this->HiddenWantedMips = cVar5;
    this->NumMissingMips = '\0';
  }
  return;
}

// StreamWantedMips @ 14885ad20

void __thiscall
FStreamingRenderAsset::StreamWantedMips
          (FStreamingRenderAsset *this,FRenderAssetStreamingManager *param_1)

{
  undefined1 uVar1;
  ulong64 uVar2;
  FStreamableRenderResourceState_u_0_s_0 FVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  UStreamableRenderAsset *pUVar9;
  
  if ((this->RenderAsset != (UStreamableRenderAsset *)0x0) &&
     (bVar4 = UStreamableRenderAsset::HasPendingInitOrStreaming(this->RenderAsset,false), !bVar4)) {
    pUVar9 = this->RenderAsset;
    uVar2 = (pUVar9->CachedSRRState).field0_0x0.Data;
    uVar8 = (uint)(uVar2 >> 0x10) & 0xff;
    cVar5 = (char)(uVar2 >> 0x28);
    uVar6 = (uint)cVar5;
    this->ResidentMips = cVar5;
    uVar7 = (uint)this->WantedMips;
    if (((int)uVar6 < (int)uVar8) && ((int)uVar8 < (int)uVar7)) {
      uVar7 = uVar8;
    }
    if (uVar7 != uVar6) {
      if ((int)uVar7 < (int)uVar6) {
        (**(code **)(pUVar9->_padding_ + 0x2d0))(pUVar9);
      }
      else {
        (**(code **)(pUVar9->_padding_ + 0x2d8))(pUVar9);
      }
      pUVar9 = (UStreamableRenderAsset *)0x0;
      if (this->RenderAsset != (UStreamableRenderAsset *)0x0) {
        UStreamableRenderAsset::TickStreaming
                  (this->RenderAsset,true,
                   (TArray<UStreamableRenderAsset_*,TSizedDefaultAllocator<32>_> *)0x0);
        pUVar9 = this->RenderAsset;
        FVar3 = (pUVar9->CachedSRRState).field0_0x0._s_0;
        this->RequestedMips = FVar3.NumRequestedLODs;
        this->ResidentMips = FVar3.NumResidentLODs;
      }
      TrackRenderAssetEvent(this,pUVar9,this->bForceFullyLoadHeuristic,param_1);
    }
  }
  return;
}

// StreamWantedMipsUsingCachedData @ 14885ae50

void __thiscall
FStreamingRenderAsset::StreamWantedMipsUsingCachedData
          (FStreamingRenderAsset *this,FRenderAssetStreamingManager *param_1)

{
  undefined1 uVar1;
  ulong64 uVar2;
  FStreamableRenderResourceState_u_0_s_0 FVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  UStreamableRenderAsset *pUVar9;
  
  if ((this->RenderAsset != (UStreamableRenderAsset *)0x0) &&
     (bVar4 = UStreamableRenderAsset::HasPendingInitOrStreaming(this->RenderAsset,false), !bVar4)) {
    pUVar9 = this->RenderAsset;
    uVar2 = (pUVar9->CachedSRRState).field0_0x0.Data;
    uVar8 = (uint)(uVar2 >> 0x10) & 0xff;
    cVar5 = (char)(uVar2 >> 0x28);
    uVar6 = (uint)cVar5;
    this->ResidentMips = cVar5;
    uVar7 = (uint)this->CachedWantedMips;
    if (((int)uVar6 < (int)uVar8) && ((int)uVar8 < (int)uVar7)) {
      uVar7 = uVar8;
    }
    if (uVar7 != uVar6) {
      if ((int)uVar7 < (int)uVar6) {
        (**(code **)(pUVar9->_padding_ + 0x2d0))(pUVar9);
      }
      else {
        (**(code **)(pUVar9->_padding_ + 0x2d8))(pUVar9);
      }
      pUVar9 = (UStreamableRenderAsset *)0x0;
      if (this->RenderAsset != (UStreamableRenderAsset *)0x0) {
        UStreamableRenderAsset::TickStreaming
                  (this->RenderAsset,true,
                   (TArray<UStreamableRenderAsset_*,TSizedDefaultAllocator<32>_> *)0x0);
        pUVar9 = this->RenderAsset;
        FVar3 = (pUVar9->CachedSRRState).field0_0x0._s_0;
        this->RequestedMips = FVar3.NumRequestedLODs;
        this->ResidentMips = FVar3.NumResidentLODs;
      }
      TrackRenderAssetEvent(this,pUVar9,this->bCachedForceFullyLoadHeuristic,param_1);
    }
  }
  return;
}

// UpdateDynamicData @ 148861a80

void __thiscall
FStreamingRenderAsset::UpdateDynamicData
          (FStreamingRenderAsset *this,int *param_1,int param_2,
          FRenderAssetStreamingSettings *param_3,bool param_4,
          TArray<UStreamableRenderAsset_*,TSizedDefaultAllocator<32>_> *param_5)

{
  undefined1 *puVar1;
  FStreamableRenderResourceState_u_0_s_0 FVar2;
  UStreamableRenderAsset *pUVar3;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  float fVar15;
  byte bStackX_9;
  byte bStackX_a;
  byte bStackX_b;
  byte bStackX_c;
  byte bStackX_f;
  uint uVar14;
  
  if (this->RenderAsset == (UStreamableRenderAsset *)0x0) {
    this->bForceFullyLoad = '\0';
    this->bIgnoreStreamingMipBias = '\0';
    this->ResidentMips = '\0';
    this->RequestedMips = '\0';
    this->MinAllowedMips = '\0';
    this->MaxAllowedMips = '\0';
    this->NoRefLODBias = 0;
    this->OptionalMipsState = OMS_NotCached;
    this->LastRenderTime = 3.4028235e+38;
    return;
  }
  UStreamableRenderAsset::TickStreaming(this->RenderAsset,true,param_5);
  FVar2 = (this->RenderAsset->CachedSRRState).field0_0x0._s_0;
  this->ResidentMips = FVar2.NumResidentLODs;
  this->RequestedMips = FVar2.NumRequestedLODs;
  fVar15 = (float)(**(code **)(this->RenderAsset->_padding_ + 0x2e8))();
  if ((double)FApp::CurrentTime <= (double)fVar15) {
    fVar15 = 0.0;
  }
  else {
    fVar15 = (float)((double)FApp::CurrentTime - (double)fVar15);
  }
  this->LastRenderTime = fVar15;
  bVar5 = (**(code **)(this->RenderAsset->_padding_ + 0x2f0))();
  bVar10 = (bVar5 << 3 ^ this->field_0x96) & 8 ^ this->field_0x96;
  pUVar3 = this->RenderAsset;
  this->field_0x96 = bVar10;
  this->field_0x96 = (bVar10 ^ pUVar3->field_0xd0) & 0x10 ^ bVar10;
  if (((bVar5 & 1) == 0) || (pUVar3->bUseCinematicMipLevels == '\0')) {
    iVar8 = 0;
  }
  else {
    iVar8 = pUVar3->NumCinematicMipLevels;
  }
  iVar11 = 0;
  if (param_3->bUseAllMips == false) {
    iVar7 = (**(code **)(pUVar3->_padding_ + 0x2f8))();
    bStackX_c = FVar2.AssetLODBias;
    iVar7 = iVar7 - (uint)bStackX_c;
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    iVar11 = 0;
    if (0 < iVar7 - iVar8) {
      iVar11 = iVar7 - iVar8;
    }
    if ((((this->RenderAssetType != Texture) || (this->LODGroup != 0x1d)) &&
        (this->bIsTerrainTexture == '\0')) &&
       ((this->bIgnoreStreamingMipBias != '\x01' || this->bForceFullyLoadHeuristic != '\x01' &&
        (param_3->bUsePerTextureBias == false)))) {
      iVar11 = iVar11 + param_3->GlobalMipBias;
    }
    iVar11 = iVar11 + this->BudgetMipBias;
    if ((GUseMobileLODBiasOnDesktopES31 != 0) && (GMaxRHIFeatureLevel == ES3_1)) {
      bStackX_f = FVar2.LODBiasModifier;
      iVar11 = iVar11 + (uint)bStackX_f;
    }
  }
  if ((this->RenderAssetType == StaticMesh) || (iVar8 = 0, this->RenderAssetType == SkeletalMesh)) {
    iVar8 = UStreamableRenderAsset::GetCurrentNoRefStreamingLODBias(this->RenderAsset);
    if (iVar8 < 0) {
      iVar8 = GDefaultNoRefBias;
    }
  }
  bStackX_b = FVar2.MaxNumLODs;
  this->NoRefLODBias = iVar8;
  bStackX_a = FVar2.NumNonOptionalLODs;
  if (bStackX_b < bStackX_a) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ResourceState.MaxNumLODs >= ResourceState.NumNonOptionalLODs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingTexture.cpp"
                       ,0xe1,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bStackX_9 = FVar2.NumNonStreamingLODs;
  if (bStackX_a < bStackX_9) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ResourceState.NumNonOptionalLODs >= ResourceState.NumNonStreamingLODs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingTexture.cpp"
                       ,0xe2,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar12 = (uint)bStackX_a;
  uVar13 = (uint)bStackX_b;
  uVar14 = (uint)bStackX_b;
  if ((this->OptionalMipsState == OMS_HasOptionalMips) && ((int)uVar12 <= (int)this->ResidentMips))
  {
    uVar9 = uVar14 - iVar11;
    bVar6 = SBORROW4(uVar9,uVar13);
    iVar8 = uVar9 - uVar13;
    uVar12 = uVar14;
  }
  else {
    uVar9 = uVar13 - iVar11;
    bVar6 = SBORROW4(uVar9,uVar12);
    iVar8 = uVar9 - uVar12;
  }
  if (bVar6 != iVar8 < 0) {
    uVar12 = uVar9;
  }
  bVar5 = bStackX_9;
  if ((int)(uint)bStackX_9 < (int)uVar12) {
    bVar5 = (byte)uVar12;
  }
  this->MaxAllowedMips = bVar5;
  if ((int)(char)bVar5 < (int)(uint)bStackX_9) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("MaxAllowedMips >= ResourceState.NumNonStreamingLODs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingTexture.cpp"
                       ,0xf0,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_2 <= this->LODGroup) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("LODGroup < NumLODGroups",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingTexture.cpp"
                       ,0xf2,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_1[this->LODGroup] < 1) {
    this->MinAllowedMips = bStackX_9;
  }
  else {
    iVar8 = (int)this->MaxAllowedMips;
    iVar11 = uVar14 - param_1[this->LODGroup];
    if (iVar11 < iVar8) {
      iVar8 = iVar11;
    }
    if ((int)(uint)bStackX_9 < iVar8) {
      bStackX_9 = (byte)iVar8;
    }
    this->MinAllowedMips = bStackX_9;
  }
  return;
}

// UpdateLoadOrderPriority_Async @ 148862010

bool __thiscall
FStreamingRenderAsset::UpdateLoadOrderPriority_Async
          (FStreamingRenderAsset *this,FRenderAssetStreamingSettings *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = this->field_0x97;
  cVar3 = this->VisibleWantedMips;
  iVar6 = (int)cVar3;
  iVar5 = (int)this->ResidentMips;
  iVar4 = 0;
  this->LoadOrderPriority = 0;
  this->bMissingTooManyMips = '\0';
  if ((((cVar3 <= this->ResidentMips) || (this->BudgetedMips <= cVar3)) ||
      ((int)this->BudgetedMips < param_1->MinMipForSplitRequest)) ||
     (this->bIsTerrainTexture != '\0')) {
    cVar3 = this->BudgetedMips;
  }
  this->WantedMips = cVar3;
  if ((this->RenderAsset == (UStreamableRenderAsset *)0x0) || (cVar3 == this->RequestedMips)) {
    return false;
  }
  if (cVar3 <= this->RequestedMips) {
    if (this->bLoadWithHigherPriority == '\0' &&
        (this->bIsTerrainTexture == '\0' && this->bForceFullyLoadHeuristic == '\0')) {
      iVar4 = 0x400;
      this->LoadOrderPriority = 0x400;
    }
    if (iVar5 < iVar6) {
      return true;
    }
    this->LoadOrderPriority = iVar4 + 0x200;
    return true;
  }
  if ((this->bLooksLowRes != 0) || (iVar4 = 2, this->RenderAssetType != Texture)) {
    iVar4 = 1;
  }
  if (((iVar5 < iVar6) && (iVar4 < cVar3 - iVar5)) &&
     (param_1->LowResHandlingMode != LRHM_DoNothing)) {
    this->field_0x97 = uVar2 | 2;
  }
  else {
    this->field_0x97 = uVar2 & 0xfd;
    if (iVar6 <= iVar5) goto LAB_14886210e;
  }
  this->LoadOrderPriority = this->LoadOrderPriority + 0x400;
LAB_14886210e:
  if (this->bLoadWithHigherPriority != '\0' ||
      (this->bIsTerrainTexture != '\0' || this->bForceFullyLoadHeuristic != '\0')) {
    this->LoadOrderPriority = this->LoadOrderPriority + 0x200;
  }
  if (iVar4 < cVar3 - iVar5) {
    this->LoadOrderPriority = this->LoadOrderPriority + 0x100;
  }
  if (iVar5 < iVar6) {
    return true;
  }
  iVar5 = 0xff - (int)this->LastRenderTime;
  iVar4 = 0xff;
  if (iVar5 < 0xff) {
    iVar4 = iVar5;
  }
  iVar5 = 1;
  if (1 < iVar4) {
    iVar5 = iVar4;
  }
  this->LoadOrderPriority = this->LoadOrderPriority + iVar5;
  return true;
}

// UpdateOptionalMipsState_Async @ 1488621a0

void __thiscall FStreamingRenderAsset::UpdateOptionalMipsState_Async(FStreamingRenderAsset *this)

{
  UStreamableRenderAsset *pUVar1;
  ulonglong uVar2;
  char cVar3;
  
  pUVar1 = this->RenderAsset;
  if (((pUVar1 != (UStreamableRenderAsset *)0x0) && (this->OptionalMipsState == OMS_NotCached)) &&
     (this->OptionalFileHash != 0)) {
    uVar2 = (pUVar1->CachedSRRState).field0_0x0.Data;
    if (uVar2 != 0) {
      cVar3 = (**(code **)(pUVar1->_padding_ + 0x2c8))(pUVar1,uVar2 >> 0x20 & 0xff);
      if (cVar3 != '\0') {
        this->OptionalMipsState = OMS_HasOptionalMips;
        return;
      }
    }
    this->OptionalMipsState = OMS_NoOptionalMips;
  }
  return;
}

// UpdateRetentionPriority_Async @ 1488622d0

long64 __thiscall
FStreamingRenderAsset::UpdateRetentionPriority_Async(FStreamingRenderAsset *this,bool param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  
  cVar4 = this->HiddenWantedMips;
  if (this->HiddenWantedMips < this->VisibleWantedMips) {
    cVar4 = this->VisibleWantedMips;
  }
  this->RetentionPriority = 0;
  this->BudgetedMips = cVar4;
  if (this->RenderAsset != (UStreamableRenderAsset *)0x0) {
    iVar3 = GetSize(this,(int)cVar4);
    if (((iVar3 < 0x800000) || (this->LODGroup == 0x11)) || (this->LODGroup == 0x16)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((this->bIsTerrainTexture == '\0' && this->bForceFullyLoadHeuristic == '\0') &&
       ((this->bLooksLowRes == 0 || (bVar1)))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    iVar3 = GetSize(this,(int)this->BudgetedMips);
    if ((param_1) && (this->RenderAssetType != Texture)) {
      this->RetentionPriority = this->RetentionPriority + 0x1000;
    }
    if (bVar2) {
      this->RetentionPriority = this->RetentionPriority + 0x800;
    }
    if (this->HiddenWantedMips <= this->VisibleWantedMips) {
      this->RetentionPriority = this->RetentionPriority + 0x400;
    }
    if (!bVar1) {
      this->RetentionPriority = this->RetentionPriority + 0x200;
    }
    if ((this->bLoadWithHigherPriority != '\0') || (iVar3 < 0x32001)) {
      this->RetentionPriority = this->RetentionPriority + 0x100;
    }
    if (this->VisibleWantedMips < this->HiddenWantedMips) {
      iVar5 = 0xff - (int)this->LastRenderTime;
      iVar3 = 0xff;
      if (iVar5 < 0xff) {
        iVar3 = iVar5;
      }
      iVar5 = 1;
      if (1 < iVar3) {
        iVar5 = iVar3;
      }
      this->RetentionPriority = this->RetentionPriority + iVar5;
    }
    iVar3 = GetSize(this,(int)this->BudgetedMips);
    return (longlong)iVar3;
  }
  return 0;
}

// UpdateStaticData @ 148862430

void __thiscall
FStreamingRenderAsset::UpdateStaticData
          (FStreamingRenderAsset *this,FRenderAssetStreamingSettings *param_1)

{
  undefined1 *puVar1;
  UStreamableRenderAsset *pUVar2;
  FStreamableRenderResourceState_u_0_s_0 FVar3;
  UStaticMesh *this_00;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  UClass *pUVar9;
  FStaticMeshRenderData *pFVar10;
  float *pfVar11;
  FString *pFVar12;
  ulonglong uVar13;
  byte bVar14;
  wchar_t *pwVar15;
  longlong lVar16;
  wchar_t *pwVar17;
  ulonglong uVar18;
  uchar *puVar19;
  ulonglong uVar20;
  FStreamingRenderAsset_u_36 *pFVar21;
  float fVar22;
  byte bStackX_a;
  byte bStackX_b;
  byte bStackX_c;
  ulonglong local_res18;
  FStreamingRenderAsset *local_res20;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58 [2];
  
  pFVar21 = &this->field5_0x24;
  *(undefined8 *)pFVar21 = 0;
  *(undefined8 *)((longlong)&this->field5_0x24 + 8) = 0;
  *(undefined8 *)((longlong)&this->field5_0x24 + 0x10) = 0;
  *(undefined8 *)((longlong)&this->field5_0x24 + 0x18) = 0;
  *(undefined8 *)((longlong)&this->field5_0x24 + 0x20) = 0;
  *(undefined8 *)((longlong)&this->field5_0x24 + 0x28) = 0;
  *(undefined8 *)((longlong)&this->field5_0x24 + 0x30) = 0;
  *(undefined8 *)((longlong)&this->field5_0x24 + 0x38) = 0;
  pUVar2 = this->RenderAsset;
  if (pUVar2 == (UStreamableRenderAsset *)0x0) {
    this->RenderAssetType = None;
    this->OptionalMipsState = OMS_NoOptionalMips;
    this->bLoadWithHigherPriority = '\0';
    this->bIsTerrainTexture = '\0';
    this->LODGroup = 0;
    this->BudgetMipBias = 0;
    this->OptionalFileHash = 0;
    this->BoostFactor = 1.0;
    return;
  }
  FVar3 = (pUVar2->CachedSRRState).field0_0x0._s_0;
  iVar6 = (**(code **)(pUVar2->_padding_ + 0x2b0))();
  bStackX_b = FVar3.MaxNumLODs;
  uVar20 = (ulonglong)bStackX_b;
  uVar18 = 0;
  this->LODGroup = iVar6;
  uVar8 = 0;
  this->BudgetMipBias = 0;
  bStackX_c = FVar3.AssetLODBias;
  if (this->RenderAssetType == Texture) {
    if (((iVar6 < 0) || (0x51 < iVar6)) &&
       (local_res20 = this,
       bVar5 = `FStreamingRenderAsset::UpdateStaticData'::__l9::<lambda_1>::operator()(&local_res20)
       , !bVar5)) {
      this->LODGroup = 0;
    }
    if ((0x10 < bStackX_b) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ResourceState.MaxNumLODs <= (sizeof(UEArrayCountHelper(CumulativeLODSizes)) - 1)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingTexture.cpp"
                           ,0x54,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = this->LODGroup;
    fVar22 = __real_3f800000;
    if (param_1->bUseNewMetrics != false) {
      fVar22 = __real_3f35c28f;
    }
    if (1 < iVar6 - 0x18U) {
      if (iVar6 == 0x11) {
        if (GLightmapStreamingFactor <= fVar22) {
          fVar22 = GLightmapStreamingFactor;
        }
      }
      else if ((iVar6 == 0x16) && (GShadowmapStreamingFactor <= fVar22)) {
        fVar22 = GShadowmapStreamingFactor;
      }
    }
    this->BoostFactor = fVar22;
    uVar13 = 4;
    if (1 < iVar6 - 0x18U) {
      uVar13 = uVar18;
    }
    bVar14 = ((param_1->HighPriorityLoad_Texture[iVar6] * '\x02' ^ this->field_0x96) & 2U ^
             this->field_0x96) & 0xfb | (byte)uVar13;
    this->field_0x96 =
         ((pUVar2->CachedSRRState).field0_0x0._s_0.bSupportsVirtualStreaming ^ bVar14) & 1 ^ bVar14;
    goto LAB_1488626dd;
  }
  pwVar17 = L"";
  if (8 < bStackX_b) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ResourceState.MaxNumLODs <= (sizeof(UEArrayCountHelper(CumulativeLODSizes_Mesh)) - 1)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingTexture.cpp"
                       ,0x5d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ResourceState.MaxNumLODs <= (sizeof(UEArrayCountHelper(LODScreenSizes)) - 1)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingTexture.cpp"
                       ,0x5e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this->bIsVirtualTexture = '\0';
  this->bIsTerrainTexture = '\0';
  this->bLoadWithHigherPriority = '\0';
  this->BoostFactor = 1.0;
  if (this->RenderAssetType == StaticMesh) {
    this_00 = (UStaticMesh *)this->RenderAsset;
    if (this_00 == (UStaticMesh *)0x0) {
      pFVar12 = GetTypeName<UStaticMesh>(&local_a8);
      if ((pFVar12->Data).ArrayNum != 0) {
        pwVar17 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar17);
    }
    pUVar9 = Z_Construct_UClass_UStaticMesh_NoRegister();
    fVar22 = __real_3f000000;
    iVar6 = (int)pUVar9->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar6) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar6 * 8)
        != &pUVar9->_padding_)) {
      pFVar12 = GetTypeName<UStaticMesh>(&local_98);
      if ((pFVar12->Data).ArrayNum == 0) {
        pwVar15 = L"";
      }
      else {
        pwVar15 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
      }
      pFVar12 = GetFullNameForCastLogError<UStreamableRenderAsset>
                          (&local_88,(UStreamableRenderAsset *)this_00);
      if ((pFVar12->Data).ArrayNum != 0) {
        pwVar17 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar17,pwVar15);
    }
    local_res18 = (ulonglong)bStackX_b;
    if (bStackX_b != 0) {
      lVar16 = (ulonglong)bStackX_c * 4 + 0x20;
      puVar19 = (this->LevelIndexUsage).AllocatorInstance.InlineData +
                (longlong)(int)(uint)bStackX_b * 4 + -0x58;
      do {
        if ((7 < uVar18) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("LODIndex < (sizeof(UEArrayCountHelper(LODScreenSizes)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingTexture.cpp"
                               ,0x6a,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar10 = UStaticMesh::GetRenderData(this_00);
        uVar18 = uVar18 + 1;
        pfVar11 = (float *)((longlong)
                            &(((FStaticMeshRenderData *)(pFVar10->ScreenSize + -8))->LODResources).
                             Array.AllocatorInstance.Data + lVar16);
        lVar16 = lVar16 + 4;
        *(float *)puVar19 = *pfVar11 * fVar22;
        puVar19 = puVar19 + -4;
        local_res18 = local_res18 - 1;
      } while (local_res18 != 0);
    }
  }
  else {
    if (this->RenderAssetType != SkeletalMesh) goto LAB_1488626dd;
    pUVar2 = this->RenderAsset;
    if (pUVar2 == (UStreamableRenderAsset *)0x0) {
      pFVar12 = GetTypeName<USkeletalMesh>(&local_78);
      if ((pFVar12->Data).ArrayNum != 0) {
        pwVar17 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar17);
    }
    pUVar9 = Z_Construct_UClass_USkeletalMesh_NoRegister();
    fVar22 = __real_3f000000;
    iVar6 = (int)pUVar9->_padding_;
    if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar6) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar6 * 8)
        != &pUVar9->_padding_)) {
      pFVar12 = GetTypeName<USkeletalMesh>(&local_68);
      if ((pFVar12->Data).ArrayNum == 0) {
        pwVar15 = L"";
      }
      else {
        pwVar15 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
      }
      pFVar12 = GetFullNameForCastLogError<UStreamableRenderAsset>(local_58,pUVar2);
      if ((pFVar12->Data).ArrayNum != 0) {
        pwVar17 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar17,pwVar15);
    }
    if (bStackX_b == 0) goto LAB_1488626dd;
    puVar19 = (this->LevelIndexUsage).AllocatorInstance.InlineData + uVar20 * 4 + -0x58;
    do {
      pfVar11 = (float *)(**(code **)(pUVar2->_padding_ + 0x330))
                                   (pUVar2,(int)uVar18 + (uint)bStackX_c);
      uVar7 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar7;
      *(float *)puVar19 = *pfVar11 * fVar22;
      puVar19 = puVar19 + -4;
    } while ((int)uVar7 < (int)(uint)bStackX_b);
  }
  uVar20 = (ulonglong)FVar3 >> 0x18 & 0xff;
LAB_1488626dd:
  if ((byte)uVar20 != 0) {
    iVar6 = 1;
    uVar18 = uVar20;
    do {
      uVar7 = (**(code **)(this->RenderAsset->_padding_ + 0x2b8))(this->RenderAsset,iVar6);
      iVar6 = iVar6 + 1;
      pFVar21->CumulativeLODSizes[0] = uVar7;
      pFVar21 = (FStreamingRenderAsset_u_36 *)((longlong)pFVar21 + 4);
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  bStackX_a = FVar3.NumNonOptionalLODs;
  if (bStackX_a < (byte)uVar20) {
    this->OptionalMipsState = OMS_NotCached;
    uVar8 = (**(code **)(this->RenderAsset->_padding_ + 0x2c0))
                      (this->RenderAsset,((uint)bStackX_c - (uint)bStackX_a) + -1 + (int)uVar20);
  }
  else {
    this->OptionalMipsState = OMS_NoOptionalMips;
  }
  this->OptionalFileHash = uVar8;
  return;
}

// UpdateStreamingStatus @ 148862960

FStreamableRenderResourceState __thiscall
FStreamingRenderAsset::UpdateStreamingStatus
          (FStreamingRenderAsset *this,bool param_1,
          TArray<UStreamableRenderAsset_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FStreamableRenderResourceState_u_0_s_0 FVar1;
  FStreamableRenderResourceState_u_0 FVar2;
  undefined7 in_register_00000011;
  TArray<UStreamableRenderAsset_*,TSizedDefaultAllocator<32>_> *in_R9;
  
  *(undefined8 *)CONCAT71(in_register_00000011,param_1) = 0;
  FVar2.Data._1_7_ = in_register_00000011;
  FVar2.Data._0_1_ = param_1;
  if (this->RenderAsset != (UStreamableRenderAsset *)0x0) {
    UStreamableRenderAsset::TickStreaming(this->RenderAsset,true,in_R9);
    FVar1 = (this->RenderAsset->CachedSRRState).field0_0x0._s_0;
    *(FStreamableRenderResourceState_u_0_s_0 *)FVar2 = FVar1;
    this->RequestedMips = FVar1.NumRequestedLODs;
    this->ResidentMips = FVar1.NumResidentLODs;
  }
  return (FStreamableRenderResourceState)FVar2;
}

// operator() @ 150532140

bool __thiscall `FStreamingRenderAsset::UpdateStaticData'::__l9::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6447849288394342321>);
  if (bVar2) {
    local_res10[0] = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6447849288394342321>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505321bf;
    }
  }
  bVar2 = false;
LAB_1505321bf:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

