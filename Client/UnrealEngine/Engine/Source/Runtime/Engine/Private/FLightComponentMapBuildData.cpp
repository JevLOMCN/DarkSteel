// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FLightComponentMapBuildData @ 147ea4cd0

FLightComponentMapBuildData * __thiscall
FLightComponentMapBuildData::FLightComponentMapBuildData
          (FLightComponentMapBuildData *this,FLightComponentMapBuildData *param_1)

{
  int *piVar1;
  TArray<FFloat16,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  double dVar4;
  
  pTVar2 = &(this->DepthMap).DepthSamples;
  this->ShadowMapChannel = param_1->ShadowMapChannel;
  dVar4 = (param_1->DepthMap).WorldToLight.M[0][1];
  (this->DepthMap).WorldToLight.M[0][0] = (param_1->DepthMap).WorldToLight.M[0][0];
  (this->DepthMap).WorldToLight.M[0][1] = dVar4;
  dVar4 = (param_1->DepthMap).WorldToLight.M[0][3];
  (this->DepthMap).WorldToLight.M[0][2] = (param_1->DepthMap).WorldToLight.M[0][2];
  (this->DepthMap).WorldToLight.M[0][3] = dVar4;
  dVar4 = (param_1->DepthMap).WorldToLight.M[1][1];
  (this->DepthMap).WorldToLight.M[1][0] = (param_1->DepthMap).WorldToLight.M[1][0];
  (this->DepthMap).WorldToLight.M[1][1] = dVar4;
  dVar4 = (param_1->DepthMap).WorldToLight.M[1][3];
  (this->DepthMap).WorldToLight.M[1][2] = (param_1->DepthMap).WorldToLight.M[1][2];
  (this->DepthMap).WorldToLight.M[1][3] = dVar4;
  dVar4 = (param_1->DepthMap).WorldToLight.M[2][1];
  (this->DepthMap).WorldToLight.M[2][0] = (param_1->DepthMap).WorldToLight.M[2][0];
  (this->DepthMap).WorldToLight.M[2][1] = dVar4;
  dVar4 = (param_1->DepthMap).WorldToLight.M[2][3];
  (this->DepthMap).WorldToLight.M[2][2] = (param_1->DepthMap).WorldToLight.M[2][2];
  (this->DepthMap).WorldToLight.M[2][3] = dVar4;
  dVar4 = (param_1->DepthMap).WorldToLight.M[3][1];
  (this->DepthMap).WorldToLight.M[3][0] = (param_1->DepthMap).WorldToLight.M[3][0];
  (this->DepthMap).WorldToLight.M[3][1] = dVar4;
  dVar4 = (param_1->DepthMap).WorldToLight.M[3][3];
  (this->DepthMap).WorldToLight.M[3][2] = (param_1->DepthMap).WorldToLight.M[3][2];
  (this->DepthMap).WorldToLight.M[3][3] = dVar4;
  (this->DepthMap).ShadowMapSizeX = (param_1->DepthMap).ShadowMapSizeX;
  (this->DepthMap).ShadowMapSizeY = (param_1->DepthMap).ShadowMapSizeY;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->DepthMap).DepthSamples.ArrayMax;
  iVar3 = (param_1->DepthMap).DepthSamples.ArrayNum;
  _Src = (param_1->DepthMap).DepthSamples.AllocatorInstance.Data;
  (this->DepthMap).DepthSamples.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 * 2);
  }
  return this;
}

// ~FLightComponentMapBuildData @ 147ea8e70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLightComponentMapBuildData::~FLightComponentMapBuildData(FLightComponentMapBuildData *this)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  uchar auVar3 [8];
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_StationaryLightBuildData> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong lVar6;
  FName local_res8;
  FStatMessage local_28;
  
  lVar6 = (longlong)(this->DepthMap).DepthSamples.ArrayMax;
  auVar3 = (uchar  [8])(lVar6 * 2);
  if (auVar3 != (uchar  [8])0x0) {
    FVar5 = StatPtr_STAT_StationaryLightBuildData;
    if (StatPtr_STAT_StationaryLightBuildData ==
        (FThreadSafeStaticStat<FStat_STAT_StationaryLightBuildData>)0x0) {
      pFVar4 = ::FName::FName(&local_res8,"STAT_StationaryLightBuildData");
      FVar5 = (FThreadSafeStaticStat<FStat_STAT_StationaryLightBuildData>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StationaryLightBuildData,*pFVar4
                         ,L"Stationary Light Static Shadowmap","STATGROUP_MapBuildData",
                         "STATCAT_Advanced",L"MapBuildData",true,false,ST_int64,false,false,
                         MCR_Physical);
    }
    FVar1 = *(FName *)FVar5;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_28.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar1;
      local_28.StatData.Pad = auVar3;
      local_28.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_28);
      FStatsTrace::Add(&local_res8,lVar6 * -2);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  pFVar2 = (this->DepthMap).DepthSamples.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// FinalizeLoad @ 147eb9e80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLightComponentMapBuildData::FinalizeLoad(FLightComponentMapBuildData *this)

{
  FName FVar1;
  uchar auVar2 [8];
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_StationaryLightBuildData> FVar4;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FStatMessage local_18;
  
  auVar2 = (uchar  [8])((longlong)(this->DepthMap).DepthSamples.ArrayMax * 2);
  if (auVar2 != (uchar  [8])0x0) {
    FVar4 = StatPtr_STAT_StationaryLightBuildData;
    if (StatPtr_STAT_StationaryLightBuildData ==
        (FThreadSafeStaticStat<FStat_STAT_StationaryLightBuildData>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_StationaryLightBuildData");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_StationaryLightBuildData>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StationaryLightBuildData,*pFVar3
                         ,L"Stationary Light Static Shadowmap","STATGROUP_MapBuildData",
                         "STATCAT_Advanced",L"MapBuildData",true,false,ST_int64,false,false,
                         MCR_Physical);
    }
    FVar1 = *(FName *)FVar4;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar1;
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_18.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res8 = FVar1;
      local_18.StatData.Pad = auVar2;
      local_18.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_18);
      FStatsTrace::Add(&local_res8,(long64)auVar2);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

