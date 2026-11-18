// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 1

// ExecuteTask @ 14da28cd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TGraphTask<FFastGeoPSOPrecacheFinishedTask>::ExecuteTask
          (TGraphTask<FFastGeoPSOPrecacheFinishedTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  bool bVar7;
  UFastGeoContainer *this_00;
  FFastGeoComponentCluster *this_01;
  FFastGeoPrimitiveComponent *this_02;
  UWorld *pUVar8;
  FThreadStats *this_03;
  FThreadStatsPool *this_04;
  uint uVar9;
  int iVar10;
  TAtomic<FMinimalName> TVar11;
  LARGE_INTEGER local_res8;
  TAtomic<FMinimalName> local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<FFastGeoPSOPrecacheFinishedTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  TVar11 = TStatId::TStatId_NAME_None.Name;
  bVar3 = false;
  bVar5 = false;
  local_48 = (TAtomic<FMinimalName>)0x0;
  uVar9 = TStatId::TStatId_NAME_None.Name._0_4_;
  iVar10 = TStatId::TStatId_NAME_None.Name._4_4_;
  if ((uVar9 == 0) && (iVar10 == 0)) {
LAB_14da28d98:
    bVar4 = false;
    TVar11 = local_48;
    uVar9 = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,TStatId::TStatId_NAME_None.StatDescriptionAnsi.Ptr);
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = uVar9;
        local_res8.s.HighPart = iVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,TStatId::TStatId_NAME_None.StatDescriptionWide.Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever != false) && (FThreadStats::bPrimaryEnable == false))
    goto LAB_14da28d98;
    local_res8.s.LowPart = uVar9;
    local_res8.s.HighPart = iVar10;
    FThreadStats::AddMessage((FName)TVar11,CycleScopeStart);
    bVar4 = true;
  }
  this_00 = (UFastGeoContainer *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->TaskStorage);
  if (this_00 == (UFastGeoContainer *)0x0) goto LAB_14da28e58;
  this_01 = UFastGeoContainer::GetComponentCluster
                      (this_00,*(uint *)((this->TaskStorage).Pad + 8),
                       *(int *)((this->TaskStorage).Pad + 0xc));
  if (this_01 == (FFastGeoComponentCluster *)0x0) goto LAB_14da28e58;
  this_02 = (FFastGeoPrimitiveComponent *)
            FFastGeoComponentCluster::GetComponent
                      (this_01,*(uint *)((this->TaskStorage).Pad + 0x10),
                       *(int *)((this->TaskStorage).Pad + 0x14));
  if (this_02 == (FFastGeoPrimitiveComponent *)0x0) goto LAB_14da28e58;
  if ((uint)this_02->_padding_ == FFastGeoPrimitiveComponent::Type.ID) {
LAB_14da28e32:
    bVar7 = true;
  }
  else {
    if ((FFastGeoElementType *)this_02->_padding_ != (FFastGeoElementType *)0x0) {
      bVar7 = FFastGeoElementType::IsA
                        ((FFastGeoElementType *)this_02->_padding_,&FFastGeoPrimitiveComponent::Type
                        );
      if (bVar7) goto LAB_14da28e32;
    }
    bVar7 = false;
  }
  if (!bVar7) {
    this_02 = (FFastGeoPrimitiveComponent *)0x0;
  }
  if (this_02 != (FFastGeoPrimitiveComponent *)0x0) {
    pUVar8 = FFastGeoComponent::GetWorld((FFastGeoComponent *)this_02);
    if (pUVar8 != (UWorld *)0x0) {
      FFastGeoPrimitiveComponent::OnPrecacheFinished
                (this_02,*(int *)((this->TaskStorage).Pad + 0x18));
    }
  }
LAB_14da28e58:
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (TVar11 != (TAtomic<FMinimalName>)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_03 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_03 == (FThreadStats *)0x0) {
      this_04 = FThreadStatsPool::Get();
      this_03 = FThreadStatsPool::GetFromPool(this_04);
    }
    if (this_03->bWaitForExplicitFlush < this_03->ScopeCount) {
      local_38.NameAndInfo.Number = TVar11._4_4_ & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = uVar9;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_03,&local_38);
      piVar1 = &this_03->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_03,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_03,false,false);
      }
    }
  }
  if (this != (TGraphTask<FFastGeoPSOPrecacheFinishedTask> *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014da28f6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)this->_padding_)(this,1);
      return;
    }
  }
  return;
}

