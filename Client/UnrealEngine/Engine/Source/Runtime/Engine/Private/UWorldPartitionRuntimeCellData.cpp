// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 20

// ~UWorldPartitionRuntimeCellData @ 148a81e00

void __thiscall
UWorldPartitionRuntimeCellData::~UWorldPartitionRuntimeCellData
          (UWorldPartitionRuntimeCellData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UWorldPartitionRuntimeCellData__6B_;
  pFVar1 = (this->DebugName).String.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AppendStreamingSourceInfo @ 148a8add0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UWorldPartitionRuntimeCellData::AppendStreamingSourceInfo
          (UWorldPartitionRuntimeCellData *this,FWorldPartitionStreamingSource *param_1,
          FSphericalSector *param_2)

{
  return;
}

// IsDebugShown @ 148a9a100

bool __thiscall UWorldPartitionRuntimeCellData::IsDebugShown(UWorldPartitionRuntimeCellData *this)

{
  return true;
}

// MergeStreamingSourceInfo @ 148a9ac50

void __thiscall
UWorldPartitionRuntimeCellData::MergeStreamingSourceInfo(UWorldPartitionRuntimeCellData *this)

{
  return;
}

// ResetStreamingSourceInfo @ 148aa17a0

void __thiscall
UWorldPartitionRuntimeCellData::ResetStreamingSourceInfo(UWorldPartitionRuntimeCellData *this)

{
  return;
}

// StaticClass @ 148aa2870

UClass * __cdecl UWorldPartitionRuntimeCellData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeCellData.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionRuntimeCellData",
               &Z_Registration_Info_UClass_UWorldPartitionRuntimeCellData.InnerSingleton,
               StaticRegisterNativesUWorldPartitionRuntimeCellData,0xf8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWorldPartitionRuntimeCellData>,
               InternalVTableHelperCtorCaller<UWorldPartitionRuntimeCellData>,aFStackX_8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeCellData.InnerSingleton;
}

// UWorldPartitionRuntimeCellData @ 148ab5700

UWorldPartitionRuntimeCellData * __thiscall
UWorldPartitionRuntimeCellData::UWorldPartitionRuntimeCellData
          (UWorldPartitionRuntimeCellData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UWorldPartitionRuntimeCellData__6B_;
  (this->GridName).ComparisonIndex = 0;
  (this->GridName).Number = 0;
  (this->DebugName).String.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugName).String.Data.ArrayNum = 0;
  (this->DebugName).String.Data.ArrayMax = 0;
  (this->ContentBounds).IsValid = '\0';
  (this->CellBounds).bIsSet = false;
  return this;
}

// UWorldPartitionRuntimeCellData @ 148ab5750

UWorldPartitionRuntimeCellData * __thiscall
UWorldPartitionRuntimeCellData::UWorldPartitionRuntimeCellData
          (UWorldPartitionRuntimeCellData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->CachedMinSourcePriority = 0xff;
  this->bCachedWasRequestedByBlockingSource = false;
  this->_padding_ = (longlong)&___7UWorldPartitionRuntimeCellData__6B_;
  this->CachedMinBlockOnSlowStreamingRatio = 3.4028235e+38;
  this->CachedMinSquareDistanceToBlockingSource = 1.7976931348623157e+308;
  this->CachedMinSquareDistanceToSource = 1.7976931348623157e+308;
  this->CachedMinSpatialSortingPriority = 1.7976931348623157e+308;
  this->CachedMinSlowStreamingRatio = 3.4028235e+38;
  this->CachedSourceInfoEpoch = -0x80000000;
  (this->ContentBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->ContentBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->ContentBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->ContentBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->ContentBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->ContentBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->ContentBounds).IsValid = '\0';
  (this->ContentBounds).Pad[0] = '\0';
  (this->ContentBounds).Pad[1] = '\0';
  (this->ContentBounds).Pad[2] = '\0';
  (this->ContentBounds).Pad[3] = '\0';
  (this->ContentBounds).Pad[4] = '\0';
  (this->ContentBounds).Pad[5] = '\0';
  (this->ContentBounds).Pad[6] = '\0';
  (this->CellBounds).bIsSet = false;
  (this->GridName).ComparisonIndex = 0;
  (this->GridName).Number = 0;
  this->Priority = 0;
  this->HierarchicalLevel = 0;
  (this->DebugName).String.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugName).String.Data.ArrayNum = 0;
  (this->DebugName).String.Data.ArrayMax = 0;
  return this;
}

// AppendStreamingSourceInfo @ 148abf6b0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UWorldPartitionRuntimeCellData::AppendStreamingSourceInfo
          (UWorldPartitionRuntimeCellData *this,FWorldPartitionStreamingSource *param_1,
          FSphericalSector *param_2,FWorldPartitionStreamingContext *param_3)

{
  (**(code **)(this->_padding_ + 0x2c8))();
  return;
}

// AppendStreamingSourceInfo @ 148abf6d0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWorldPartitionRuntimeCellData::AppendStreamingSourceInfo
          (UWorldPartitionRuntimeCellData *this,FWorldPartitionStreamingSource *param_1,
          FSphericalSector *param_2,FWorldPartitionStreamingContext *param_3,bool param_4)

{
  TVector<double> *pTVar1;
  int *piVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  undefined8 uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  double dVar15;
  bool bVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_WorldPartitionAppendStreamingSourceInfo> FVar18;
  double *pdVar19;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  EStreamingSourcePriority EVar20;
  FNameEntryId FVar21;
  FName FVar22;
  undefined4 uVar23;
  uint uVar24;
  undefined4 uVar25;
  uint uVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  undefined8 uVar32;
  double dVar33;
  undefined8 uVar34;
  float fVar35;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  double local_158;
  double dStack_150;
  double local_148;
  FName local_140;
  FStatMessage local_130;
  undefined8 local_120;
  double dStack_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  
  FVar18 = StatPtr_STAT_WorldPartitionAppendStreamingSourceInfo;
  if (StatPtr_STAT_WorldPartitionAppendStreamingSourceInfo ==
      (FThreadSafeStaticStat<FStat_STAT_WorldPartitionAppendStreamingSourceInfo>)0x0) {
    pFVar17 = ::FName::FName(&local_res20,"STAT_WorldPartitionAppendStreamingSourceInfo");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_WorldPartitionAppendStreamingSourceInfo>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_WorldPartitionAppendStreamingSourceInfo,*pFVar17,
                        L"Append Streaming Source Info","STATGROUP_WorldPartition",
                        "STATCAT_Advanced",L"World Partition",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  local_140.ComparisonIndex.Value = 0;
  local_140.Number = 0;
  bVar12 = false;
  bVar14 = false;
  FVar22 = *(FName *)FVar18;
  FVar21 = FVar22.ComparisonIndex.Value;
  uVar24 = FVar22.Number;
  if ((FVar21.Value == 0) && (uVar24 == 0)) {
LAB_148abf85d:
    bVar13 = false;
    FVar22 = local_140;
  }
  else {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar12 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar21.Value;
        local_res10.Number = uVar24;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeCellData.cpp"
                   ,0x3f);
        bVar12 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148abf85d;
    local_res18.s.LowPart = FVar21.Value;
    local_res18.s.HighPart = uVar24;
    FThreadStats::AddMessage(FVar22,CycleScopeStart);
    bVar13 = true;
  }
  if ((param_3->bIsValid == false) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionRuntimeHash.h"
                          ,0xb1,L""), bVar16)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (this->CachedSourceInfoEpoch != param_3->UpdateStreamingStateEpoch) {
    (**(code **)(this->_padding_ + 0x2b8))(this,param_3);
    if ((param_3->bIsValid == false) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionRuntimeHash.h"
                            ,0xb1,L""), bVar16)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((this->CachedSourceInfoEpoch != param_3->UpdateStreamingStateEpoch) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("CachedSourceInfoEpoch == Context.GetUpdateStreamingStateEpoch()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeCellData.cpp"
                            ,0x44,L""), bVar16)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  dVar15 = __real_3ff0000000000000;
  local_120 = *(undefined8 *)&(param_2->Center).field0_0x0;
  dStack_118 = (param_2->Center).field0_0x0._s_0.Y;
  dVar27 = (param_2->Center).field0_0x0._s_0.X;
  local_110 = (param_2->Center).field0_0x0._s_0.Z;
  dVar4 = *(double *)&(this->ContentBounds).Min.field0_0x0;
  uVar23 = SUB84(dVar4,0);
  uVar25 = (undefined4)((ulonglong)dVar4 >> 0x20);
  if (dVar4 <= dVar27) {
    dVar4 = *(double *)&(this->ContentBounds).Max.field0_0x0;
    uVar23 = SUB84(dVar4,0);
    uVar25 = (undefined4)((ulonglong)dVar4 >> 0x20);
    if (dVar27 <= dVar4) {
      uVar23 = (undefined4)local_120;
      uVar25 = (undefined4)((ulonglong)local_120 >> 0x20);
    }
  }
  dVar4 = (param_2->Center).field0_0x0._s_0.Y;
  if ((this->ContentBounds).Min.field0_0x0._s_0.Y <= dVar4) {
    dVar31 = (this->ContentBounds).Max.field0_0x0._s_0.Y;
    if (dVar4 <= dVar31) {
      dVar31 = dStack_118;
    }
  }
  else {
    dVar31 = (this->ContentBounds).Min.field0_0x0._s_0.Y;
  }
  dVar5 = (param_2->Center).field0_0x0._s_0.Z;
  if ((this->ContentBounds).Min.field0_0x0._s_0.Z <= dVar5) {
    dVar8 = (this->ContentBounds).Max.field0_0x0._s_0.Z;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = dVar8;
    if (dVar5 <= dVar8) {
      auVar29._8_8_ = 0;
      auVar29._0_8_ = local_110;
    }
  }
  else {
    auVar29._8_8_ = 0;
    auVar29._0_8_ = (this->ContentBounds).Min.field0_0x0._s_0.Z;
  }
  dVar33 = dVar27 - (double)CONCAT44(uVar25,uVar23);
  dVar31 = dVar4 - dVar31;
  dVar8 = dVar5 - auVar29._0_8_;
  dVar10 = dVar31 * dVar31 + dVar33 * dVar33 + dVar8 * dVar8;
  uVar24 = SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar26 = (uint)((ulonglong)dVar10 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar34 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar26,uVar24) &&
      (double)CONCAT44(uVar26,uVar24) != __real_3e45798ee2308c3a) {
    dVar30 = __real_3ff0000000000000 / SQRT(dVar10);
    uVar32 = dVar31 * dVar30;
    uVar34 = dVar33 * dVar30;
    uVar11 = dVar8 * dVar30;
  }
  if (param_1->bUseVelocityContributionToCellsSorting == false) {
    pdVar19 = &local_108;
    local_108 = (param_2->Axis).field0_0x0._s_0.X;
    dStack_100 = (param_2->Axis).field0_0x0._s_0.Y;
    local_f8 = (param_2->Axis).field0_0x0._s_0.Z;
    goto LAB_148abfb3f;
  }
  auVar29 = *(undefined1 (*) [16])&(param_2->Axis).field0_0x0;
  local_148 = (param_2->Axis).field0_0x0._s_0.Z + (param_1->Velocity).field0_0x0._s_0.Z;
  local_158 = auVar29._0_8_ + (param_1->Velocity).field0_0x0._s_0.X;
  dStack_150 = auVar29._8_8_ + (param_1->Velocity).field0_0x0._s_0.Y;
  auVar28._8_4_ = auVar29._8_4_;
  auVar28._0_8_ = dStack_150;
  auVar28._12_4_ = auVar29._12_4_;
  auVar29._8_8_ = auVar28._8_8_;
  auVar29._0_8_ = dStack_150 * dStack_150 + local_158 * local_158 + local_148 * local_148;
  if (auVar29._0_8_ == __real_3ff0000000000000) {
LAB_148abfaf2:
  }
  else {
    if (__real_3e45798ee0000000 <= auVar29._0_8_) {
      auVar29._8_8_ = 0;
      dVar31 = __real_3ff0000000000000 / SQRT(auVar29._0_8_);
      local_158 = local_158 * dVar31;
      dStack_150 = dStack_150 * dVar31;
      local_148 = local_148 * dVar31;
      goto LAB_148abfaf2;
    }
    local_158 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_150 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_148 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  pdVar19 = &local_158;
LAB_148abfb3f:
  local_f8 = pdVar19[2];
  if ((((dVar27 < (this->ContentBounds).Min.field0_0x0._s_0.X) ||
       (pTVar1 = &(this->ContentBounds).Max,
       (pTVar1->field0_0x0)._s_0.X <= dVar27 && dVar27 != (pTVar1->field0_0x0)._s_0.X)) ||
      (dVar4 < (this->ContentBounds).Min.field0_0x0._s_0.Y)) ||
     (((pdVar3 = &(this->ContentBounds).Max.field0_0x0._s_0.Y, *pdVar3 <= dVar4 && dVar4 != *pdVar3
       || (dVar5 < (this->ContentBounds).Min.field0_0x0._s_0.Z)) ||
      (pdVar3 = &(this->ContentBounds).Max.field0_0x0._s_0.Z, dVar27 = __real_bff0000000000000,
      *pdVar3 <= dVar5 && dVar5 != *pdVar3)))) {
    dVar27 = (double)uVar32 * pdVar19[1] + (double)uVar34 * *pdVar19 + (double)uVar11 * local_f8;
  }
  EVar20 = this->CachedMinSourcePriority;
  if (param_1->Priority < this->CachedMinSourcePriority) {
    EVar20 = param_1->Priority;
  }
  this->CachedMinSourcePriority = EVar20;
  fVar35 = ((float)dVar27 + __real_3f800000) * __real_3f000000;
  if ((param_4) && (param_1->bBlockOnSlowLoading != false)) {
    dVar27 = this->CachedMinSquareDistanceToBlockingSource;
    if (dVar10 <= this->CachedMinSquareDistanceToBlockingSource) {
      dVar27 = dVar10;
    }
    this->bCachedWasRequestedByBlockingSource = true;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = dVar27;
    auVar29 = sqrtpd(auVar29,auVar7);
    this->CachedMinSquareDistanceToBlockingSource = dVar27;
    dVar27 = auVar29._0_8_ * (dVar15 / param_2->Radius);
    if ((double)this->CachedMinBlockOnSlowStreamingRatio <= dVar27) {
      dVar27 = (double)this->CachedMinBlockOnSlowStreamingRatio;
    }
    auVar29._0_8_ = dVar27;
    this->CachedMinBlockOnSlowStreamingRatio = (float)dVar27;
  }
  if (this->CachedMinSquareDistanceToSource <= dVar10) {
    dVar10 = this->CachedMinSquareDistanceToSource;
  }
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar10;
  auVar29 = sqrtpd(auVar29,auVar9);
  this->CachedMinSquareDistanceToSource = dVar10;
  dVar27 = auVar29._0_8_ * (dVar15 / param_2->Radius);
  if ((double)this->CachedMinSlowStreamingRatio <= dVar27) {
    dVar27 = (double)this->CachedMinSlowStreamingRatio;
  }
  this->CachedMinSlowStreamingRatio = (float)dVar27;
  dVar27 = param_2->Radius;
  dVar4 = ComputeSquaredDistanceFromBoxToPoint<double,double>
                    (&(this->ContentBounds).Min,&(this->ContentBounds).Max,&param_2->Center);
  dVar4 = dVar4 / (dVar27 * dVar27);
  if (__real_3ff0000000000000 <= dVar4) {
    dVar4 = __real_3ff0000000000000;
  }
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  dVar4 = dVar4 * (double)fVar35;
  if (this->CachedMinSpatialSortingPriority <= dVar4) {
    dVar4 = this->CachedMinSpatialSortingPriority;
  }
  this->CachedMinSpatialSortingPriority = dVar4;
  if (bVar14) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar13) && (FVar22 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_130.NameAndInfo.Index = FVar22.ComparisonIndex.Value;
      local_130.NameAndInfo.Number = FVar22.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_130.StatData.Pad[4] = '\0';
      local_130.StatData.Pad[5] = '\0';
      local_130.StatData.Pad[6] = '\0';
      local_130.StatData.Pad[7] = '\0';
      local_130.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_130.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_130.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_130.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_130);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
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

// GetCellBounds @ 148acb260

TBox<double> * __thiscall
UWorldPartitionRuntimeCellData::GetCellBounds
          (UWorldPartitionRuntimeCellData *this,TBox<double> *__return_storage_ptr__)

{
  double *pdVar1;
  double *pdVar2;
  uchar *puVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  
  lVar9 = 0x98;
  if ((this->CellBounds).bIsSet == false) {
    lVar9 = 0x60;
  }
  pdVar1 = (double *)((longlong)&this->_padding_ + lVar9);
  dVar5 = pdVar1[1];
  pdVar2 = (double *)((longlong)&this->_padding_ + lVar9);
  dVar6 = *pdVar2;
  dVar7 = pdVar2[1];
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = *pdVar1;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar5;
  puVar3 = (this->ContentBounds).Pad + lVar9 + -0x71;
  dVar5 = *(double *)puVar3;
  dVar8 = *(double *)(puVar3 + 8);
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar6;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar7;
  uVar4 = *(undefined8 *)((this->ContentBounds).Pad + lVar9 + -0x61);
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar5;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar8;
  __return_storage_ptr__->IsValid = (char)uVar4;
  __return_storage_ptr__->Pad[0] = (char)((ulonglong)uVar4 >> 8);
  __return_storage_ptr__->Pad[1] = (char)((ulonglong)uVar4 >> 0x10);
  __return_storage_ptr__->Pad[2] = (char)((ulonglong)uVar4 >> 0x18);
  __return_storage_ptr__->Pad[3] = (char)((ulonglong)uVar4 >> 0x20);
  __return_storage_ptr__->Pad[4] = (char)((ulonglong)uVar4 >> 0x28);
  __return_storage_ptr__->Pad[5] = (char)((ulonglong)uVar4 >> 0x30);
  __return_storage_ptr__->Pad[6] = (char)((ulonglong)uVar4 >> 0x38);
  return __return_storage_ptr__;
}

// GetContentBounds @ 148accb50

TBox<double> * __thiscall
UWorldPartitionRuntimeCellData::GetContentBounds(UWorldPartitionRuntimeCellData *this)

{
  return &this->ContentBounds;
}

// GetDebugName @ 148acd450

FString * __thiscall
UWorldPartitionRuntimeCellData::GetDebugName
          (UWorldPartitionRuntimeCellData *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&(this->DebugName).String);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 148acf700

UClass * __cdecl UWorldPartitionRuntimeCellData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeCellData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionRuntimeCellData",
               &Z_Registration_Info_UClass_UWorldPartitionRuntimeCellData.InnerSingleton,
               StaticRegisterNativesUWorldPartitionRuntimeCellData,0xf8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWorldPartitionRuntimeCellData>,
               InternalVTableHelperCtorCaller<UWorldPartitionRuntimeCellData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeCellData.InnerSingleton;
}

// GetStreamingBounds @ 148ad12c0

TBox<double> * __thiscall
UWorldPartitionRuntimeCellData::GetStreamingBounds
          (UWorldPartitionRuntimeCellData *this,TBox<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double *pdVar6;
  
  pdVar6 = (double *)(**(code **)(this->_padding_ + 0x2e8))();
  dVar1 = pdVar6[1];
  dVar2 = pdVar6[2];
  dVar3 = pdVar6[3];
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = *pdVar6;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar1;
  dVar4 = pdVar6[4];
  dVar5 = pdVar6[5];
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar3;
  dVar1 = pdVar6[6];
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar4;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar5;
  *(double *)&__return_storage_ptr__->IsValid = dVar1;
  return __return_storage_ptr__;
}

// ResetStreamingSourceInfo @ 148ad9d80

void __thiscall
UWorldPartitionRuntimeCellData::ResetStreamingSourceInfo
          (UWorldPartitionRuntimeCellData *this,FWorldPartitionStreamingContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  this->CachedMinSourcePriority = 0xff;
  this->bCachedWasRequestedByBlockingSource = false;
  this->CachedMinSquareDistanceToBlockingSource = 1.7976931348623157e+308;
  this->CachedMinSquareDistanceToSource = 1.7976931348623157e+308;
  this->CachedMinSpatialSortingPriority = 1.7976931348623157e+308;
  this->CachedMinBlockOnSlowStreamingRatio = 3.4028235e+38;
  this->CachedMinSlowStreamingRatio = 3.4028235e+38;
  if (param_1->bIsValid != false) {
    this->CachedSourceInfoEpoch = param_1->UpdateStreamingStateEpoch;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionRuntimeHash.h"
                     ,0xb1,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->CachedSourceInfoEpoch = param_1->UpdateStreamingStateEpoch;
  return;
}

// Serialize @ 148ada980

void __thiscall
UWorldPartitionRuntimeCellData::Serialize(UWorldPartitionRuntimeCellData *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
  ::operator<<(param_1,&(this->DebugName).String);
  return;
}

// Serialize @ 148ada9c0

void __thiscall
UWorldPartitionRuntimeCellData::Serialize
          (UWorldPartitionRuntimeCellData *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res8;
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  UObject::Serialize((UObject *)this,pFVar1);
  ::operator<<(pFVar1,&(this->DebugName).String);
  return;
}

// SortCompare @ 148adb560

int __thiscall
UWorldPartitionRuntimeCellData::SortCompare
          (UWorldPartitionRuntimeCellData *this,UWorldPartitionRuntimeCellData *param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  double dVar4;
  
  uVar2 = (ulonglong)this->CachedMinSourcePriority - (ulonglong)param_1->CachedMinSourcePriority;
  if (((uVar2 == 0) &&
      (iVar1 = param_1->HierarchicalLevel - this->HierarchicalLevel, uVar2 = (ulonglong)iVar1,
      iVar1 == 0)) &&
     (iVar1 = this->Priority - param_1->Priority, uVar2 = (ulonglong)iVar1, iVar1 == 0)) {
    dVar4 = this->CachedMinSpatialSortingPriority - param_1->CachedMinSpatialSortingPriority;
    if ((__real_3e45798ee2308c3a <
         (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
       (uVar2 = 1, this->CachedMinSpatialSortingPriority < param_1->CachedMinSpatialSortingPriority)
       ) {
      uVar2 = 0xffffffffffffffff;
    }
  }
  uVar3 = 1;
  if ((longlong)uVar2 < 1) {
    uVar3 = uVar2;
  }
  iVar1 = -1;
  if (uVar3 < 0x8000000000000000) {
    iVar1 = (int)uVar3;
  }
  return iVar1;
}

// StaticRegisterNativesUWorldPartitionRuntimeCellData @ 148adb8b0

void __cdecl
UWorldPartitionRuntimeCellData::StaticRegisterNativesUWorldPartitionRuntimeCellData(void)

{
  return;
}

