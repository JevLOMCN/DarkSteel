// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// FPrecomputedLightVolumeData @ 14834b340

FPrecomputedLightVolumeData * __thiscall
FPrecomputedLightVolumeData::FPrecomputedLightVolumeData(FPrecomputedLightVolumeData *this)

{
  double dVar1;
  
  dVar1 = __real_4290000000000000;
  this->bInitialized = false;
  (this->Bounds).IsValid = '\0';
  TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::
  TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>
            (&this->HighQualityLightmapOctree,&UE::Math::TVector<double>::ZeroVector,dVar1);
  TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::
  TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>
            (&this->LowQualityLightmapOctree,&UE::Math::TVector<double>::ZeroVector,
             __real_4290000000000000);
  return this;
}

// ~FPrecomputedLightVolumeData @ 14834d500

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPrecomputedLightVolumeData::~FPrecomputedLightVolumeData(FPrecomputedLightVolumeData *this)

{
  FName FVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_PrecomputedLightVolumeBuildData> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uchar auVar6 [8];
  FName local_res8;
  FStatMessage local_28;
  
  if (this->bInitialized != false) {
    uVar2 = TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::GetSizeBytes
                      (&this->HighQualityLightmapOctree);
    uVar3 = TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::GetSizeBytes
                      (&this->LowQualityLightmapOctree);
    auVar6 = (uchar  [8])(uVar2 + uVar3);
    if (auVar6 != (uchar  [8])0x0) {
      FVar5 = StatPtr_STAT_PrecomputedLightVolumeBuildData;
      if (StatPtr_STAT_PrecomputedLightVolumeBuildData ==
          (FThreadSafeStaticStat<FStat_STAT_PrecomputedLightVolumeBuildData>)0x0) {
        pFVar4 = ::FName::FName(&local_res8,"STAT_PrecomputedLightVolumeBuildData");
        FVar5 = (FThreadSafeStaticStat<FStat_STAT_PrecomputedLightVolumeBuildData>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)
                           &StatPtr_STAT_PrecomputedLightVolumeBuildData,*pFVar4,
                           L"Precomputed Light Volume","STATGROUP_MapBuildData","STATCAT_Advanced",
                           L"MapBuildData",true,false,ST_int64,false,false,MCR_Physical);
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
        local_28.StatData.Pad = auVar6;
        local_28.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this_00,&local_28);
        FStatsTrace::Add(&local_res8,-(longlong)auVar6);
        if (this_00->ScopeCount == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
  }
  TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::
  ~TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>(&this->LowQualityLightmapOctree);
  TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::
  ~TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>(&this->HighQualityLightmapOctree);
  return;
}

// AddHighQualityLightingSample @ 148354870

void __thiscall
FPrecomputedLightVolumeData::AddHighQualityLightingSample
          (FPrecomputedLightVolumeData *this,TVolumeLightingSample<3> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bInitialized == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrecomputedLightVolume.cpp"
                       ,0x11a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::AddElement
            (&this->HighQualityLightmapOctree,param_1);
  return;
}

// AddLowQualityLightingSample @ 148354db0

void __thiscall
FPrecomputedLightVolumeData::AddLowQualityLightingSample
          (FPrecomputedLightVolumeData *this,TVolumeLightingSample<3> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bInitialized == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrecomputedLightVolume.cpp"
                       ,0x120,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::AddElement
            (&this->LowQualityLightmapOctree,param_1);
  return;
}

// FinalizeSamples @ 14837bc90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPrecomputedLightVolumeData::FinalizeSamples(FPrecomputedLightVolumeData *this)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_PrecomputedLightVolumeBuildData> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uchar auVar8 [8];
  FName local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  if ((this->bInitialized == false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrecomputedLightVolume.cpp"
                         ,0x127,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::ShrinkElements
            (&this->HighQualityLightmapOctree);
  TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::ShrinkElements
            (&this->LowQualityLightmapOctree);
  uVar4 = TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::GetSizeBytes
                    (&this->HighQualityLightmapOctree);
  uVar5 = TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::GetSizeBytes
                    (&this->LowQualityLightmapOctree);
  auVar8 = (uchar  [8])(uVar4 + uVar5);
  if (auVar8 != (uchar  [8])0x0) {
    FVar7 = StatPtr_STAT_PrecomputedLightVolumeBuildData;
    if (StatPtr_STAT_PrecomputedLightVolumeBuildData ==
        (FThreadSafeStaticStat<FStat_STAT_PrecomputedLightVolumeBuildData>)0x0) {
      pFVar6 = ::FName::FName(&local_res10,"STAT_PrecomputedLightVolumeBuildData");
      FVar7 = (FThreadSafeStaticStat<FStat_STAT_PrecomputedLightVolumeBuildData>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PrecomputedLightVolumeBuildData,
                         *pFVar6,L"Precomputed Light Volume","STATGROUP_MapBuildData",
                         "STATCAT_Advanced",L"MapBuildData",true,false,ST_int64,false,false,
                         MCR_Physical);
    }
    FVar1 = *(FName *)FVar7;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar1;
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_28.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res8 = FVar1;
      local_28.StatData.Pad = auVar8;
      local_28.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_28);
      FStatsTrace::Add(&local_res8,(long64)auVar8);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// GetAllocatedBytes @ 14837e500

ulong64 __thiscall FPrecomputedLightVolumeData::GetAllocatedBytes(FPrecomputedLightVolumeData *this)

{
  ulong64 uVar1;
  ulong64 uVar2;
  
  uVar1 = TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::GetSizeBytes
                    (&this->HighQualityLightmapOctree);
  uVar2 = TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::GetSizeBytes
                    (&this->LowQualityLightmapOctree);
  return uVar2 + uVar1;
}

// Initialize @ 14838ebd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPrecomputedLightVolumeData::Initialize(FPrecomputedLightVolumeData *this,TBox<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FName FVar4;
  double dVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  ulong64 uVar13;
  ulong64 uVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_PrecomputedLightVolumeBuildData> FVar16;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics> *pTVar17;
  double dVar18;
  FName local_res8;
  TVector<double>_u_0 local_128;
  TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics> local_108;
  
  if (this->bInitialized != false) {
    uVar13 = TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::GetSizeBytes
                       (&this->HighQualityLightmapOctree);
    uVar14 = TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::GetSizeBytes
                       (&this->LowQualityLightmapOctree);
    dVar1 = (double)(uVar14 + uVar13);
    if (dVar1 != 0.0) {
      FVar16 = StatPtr_STAT_PrecomputedLightVolumeBuildData;
      if (StatPtr_STAT_PrecomputedLightVolumeBuildData ==
          (FThreadSafeStaticStat<FStat_STAT_PrecomputedLightVolumeBuildData>)0x0) {
        pFVar15 = ::FName::FName(&local_res8,"STAT_PrecomputedLightVolumeBuildData");
        FVar16 = (FThreadSafeStaticStat<FStat_STAT_PrecomputedLightVolumeBuildData>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_PrecomputedLightVolumeBuildData,*pFVar15,
                            L"Precomputed Light Volume","STATGROUP_MapBuildData","STATCAT_Advanced",
                            L"MapBuildData",true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar4 = *(FName *)FVar16;
      local_res8 = FVar4;
      if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        local_128._s_0.Y = (double)((ulonglong)FVar4 & 0xffffbfffffffffff | 0xb00000000000);
        local_res8 = FVar4;
        local_128._s_0.X = dVar1;
        FThreadStats::AddStatMessage(this_00,(FStatMessage *)&local_128._s_0);
        FStatsTrace::Add(&local_res8,-(longlong)dVar1);
        if (this_00->ScopeCount == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
    TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::Destroy
              (&this->HighQualityLightmapOctree);
    TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::Destroy
              (&this->LowQualityLightmapOctree);
  }
  dVar5 = __real_3fe0000000000000;
  this->bInitialized = true;
  dVar1 = (param_1->Min).field0_0x0._s_0.Y;
  (this->Bounds).Min.field0_0x0._s_0.X = (param_1->Min).field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Max).field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Z = (param_1->Min).field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_1->Max).field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.Y = (param_1->Max).field0_0x0._s_0.Y;
  (this->Bounds).Max.field0_0x0._s_0.Z = dVar1;
  uVar6 = param_1->Pad[0];
  uVar7 = param_1->Pad[1];
  uVar8 = param_1->Pad[2];
  uVar9 = param_1->Pad[3];
  uVar10 = param_1->Pad[4];
  uVar11 = param_1->Pad[5];
  uVar12 = param_1->Pad[6];
  (this->Bounds).IsValid = param_1->IsValid;
  (this->Bounds).Pad[0] = uVar6;
  (this->Bounds).Pad[1] = uVar7;
  (this->Bounds).Pad[2] = uVar8;
  (this->Bounds).Pad[3] = uVar9;
  (this->Bounds).Pad[4] = uVar10;
  (this->Bounds).Pad[5] = uVar11;
  (this->Bounds).Pad[6] = uVar12;
  dVar1 = (param_1->Max).field0_0x0._s_0.Y;
  dVar2 = (param_1->Max).field0_0x0._s_0.X;
  dVar3 = (param_1->Max).field0_0x0._s_0.Z;
  local_128._s_0.X = ((param_1->Min).field0_0x0._s_0.X + dVar2) * dVar5;
  dVar2 = (dVar2 - (param_1->Min).field0_0x0._s_0.X) * dVar5;
  dVar18 = (dVar3 - (param_1->Min).field0_0x0._s_0.Z) * dVar5;
  local_128._s_0.Z = ((param_1->Min).field0_0x0._s_0.Z + dVar3) * dVar5;
  local_128._s_0.Y = ((param_1->Min).field0_0x0._s_0.Y + dVar1) * dVar5;
  dVar1 = (dVar1 - (param_1->Min).field0_0x0._s_0.Y) * dVar5;
  if (dVar1 <= dVar2) {
    dVar1 = dVar2;
  }
  if (dVar1 <= dVar18) {
    dVar1 = dVar18;
  }
  pTVar17 = TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::
            TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>
                      (&local_108,(TVector<double> *)&local_128._s_0,dVar1);
  TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::operator=
            (&this->HighQualityLightmapOctree,pTVar17);
  if (local_108.FreeList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.FreeList.AllocatorInstance.Data);
  }
  DestructItems<TArray<TVolumeLightingSample<3>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TVolumeLightingSample<3>,TSizedDefaultAllocator<32>_> *)
             local_108.TreeElements.AllocatorInstance.Data,local_108.TreeElements.ArrayNum);
  if ((TArray<TVolumeLightingSample<3>,TSizedDefaultAllocator<32>_> *)
      local_108.TreeElements.AllocatorInstance.Data !=
      (TArray<TVolumeLightingSample<3>,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_108.TreeElements.AllocatorInstance.Data);
  }
  if (local_108.ParentLinks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.ParentLinks.AllocatorInstance.Data);
  }
  if (local_108.TreeNodes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.TreeNodes.AllocatorInstance.Data);
  }
  dVar1 = (param_1->Max).field0_0x0._s_0.Y;
  dVar2 = (param_1->Max).field0_0x0._s_0.X;
  dVar3 = (param_1->Max).field0_0x0._s_0.Z;
  local_128._s_0.X = ((param_1->Min).field0_0x0._s_0.X + dVar2) * dVar5;
  dVar18 = (dVar2 - (param_1->Min).field0_0x0._s_0.X) * dVar5;
  dVar2 = (dVar1 - (param_1->Min).field0_0x0._s_0.Y) * dVar5;
  local_128._s_0.Y = ((param_1->Min).field0_0x0._s_0.Y + dVar1) * dVar5;
  if (dVar2 <= dVar18) {
    dVar2 = dVar18;
  }
  local_128._s_0.Z = ((param_1->Min).field0_0x0._s_0.Z + dVar3) * dVar5;
  dVar5 = (dVar3 - (param_1->Min).field0_0x0._s_0.Z) * dVar5;
  if (dVar2 <= dVar5) {
    dVar2 = dVar5;
  }
  pTVar17 = TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::
            TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>
                      (&local_108,(TVector<double> *)&local_128._s_0,dVar2);
  TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::operator=
            (&this->LowQualityLightmapOctree,pTVar17);
  if (local_108.FreeList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.FreeList.AllocatorInstance.Data);
  }
  DestructItems<TArray<TVolumeLightingSample<3>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TVolumeLightingSample<3>,TSizedDefaultAllocator<32>_> *)
             local_108.TreeElements.AllocatorInstance.Data,local_108.TreeElements.ArrayNum);
  if ((TArray<TVolumeLightingSample<3>,TSizedDefaultAllocator<32>_> *)
      local_108.TreeElements.AllocatorInstance.Data !=
      (TArray<TVolumeLightingSample<3>,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_108.TreeElements.AllocatorInstance.Data);
  }
  if (local_108.ParentLinks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.ParentLinks.AllocatorInstance.Data);
  }
  if (local_108.TreeNodes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.TreeNodes.AllocatorInstance.Data);
  }
  return;
}

// InvalidateLightingCache @ 148391fb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPrecomputedLightVolumeData::InvalidateLightingCache(FPrecomputedLightVolumeData *this)

{
  FName FVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_PrecomputedLightVolumeBuildData> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uchar auVar6 [8];
  FName local_res8;
  FStatMessage local_38;
  
  if (this->bInitialized != false) {
    uVar2 = TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::GetSizeBytes
                      (&this->HighQualityLightmapOctree);
    uVar3 = TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::GetSizeBytes
                      (&this->LowQualityLightmapOctree);
    auVar6 = (uchar  [8])(uVar2 + uVar3);
    if (auVar6 != (uchar  [8])0x0) {
      FVar5 = StatPtr_STAT_PrecomputedLightVolumeBuildData;
      if (StatPtr_STAT_PrecomputedLightVolumeBuildData ==
          (FThreadSafeStaticStat<FStat_STAT_PrecomputedLightVolumeBuildData>)0x0) {
        pFVar4 = ::FName::FName(&local_res8,"STAT_PrecomputedLightVolumeBuildData");
        FVar5 = (FThreadSafeStaticStat<FStat_STAT_PrecomputedLightVolumeBuildData>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)
                           &StatPtr_STAT_PrecomputedLightVolumeBuildData,*pFVar4,
                           L"Precomputed Light Volume","STATGROUP_MapBuildData","STATCAT_Advanced",
                           L"MapBuildData",true,false,ST_int64,false,false,MCR_Physical);
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
        local_38.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
        local_res8 = FVar1;
        local_38.StatData.Pad = auVar6;
        local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this_00,&local_38);
        FStatsTrace::Add(&local_res8,-(longlong)auVar6);
        if (this_00->ScopeCount == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
    TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::Destroy
              (&this->HighQualityLightmapOctree);
    TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::Destroy
              (&this->LowQualityLightmapOctree);
    this->bInitialized = false;
  }
  return;
}

