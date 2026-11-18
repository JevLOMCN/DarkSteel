// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 2

// FVulkanRenderQuery @ 145b49650

/* WARNING: Enum "Type": Some values do not have unique names */

FVulkanRenderQuery * __thiscall
FVulkanRenderQuery::FVulkanRenderQuery(FVulkanRenderQuery *this,ERenderQueryType param_1)

{
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumQueries> FVar3;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FStatMessage local_18;
  
  FRHIResource::FRHIResource((FRHIResource *)this,RRT_RenderQuery);
  this->QueryType = param_1;
  this->_padding_ = (longlong)&___7FVulkanRenderQuery__6B_;
  (this->SyncPoint).Reference = (FVulkanSyncPoint *)0x0;
  this->Result = 0;
  this->IndexInPool = 0xffffffff;
  FVar3 = StatPtr_STAT_VulkanNumQueries;
  if (StatPtr_STAT_VulkanNumQueries == (FThreadSafeStaticStat<FStat_STAT_VulkanNumQueries>)0x0) {
    pFVar2 = ::FName::FName(&local_res8,"STAT_VulkanNumQueries");
    FVar3 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumQueries>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumQueries,*pFVar2,
                       L"Num Queries","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",true,
                       false,ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar3;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    local_res8 = FVar1;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_18.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
    local_18.StatData.Pad[0] = '\x01';
    local_18.StatData.Pad[1] = '\0';
    local_18.StatData.Pad[2] = '\0';
    local_18.StatData.Pad[3] = '\0';
    local_18.StatData.Pad[4] = '\0';
    local_18.StatData.Pad[5] = '\0';
    local_18.StatData.Pad[6] = '\0';
    local_18.StatData.Pad[7] = '\0';
    local_res8 = FVar1;
    local_18.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_18);
    FStatsTrace::Add(&local_res8,1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  return this;
}

// ~FVulkanRenderQuery @ 145b50d00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVulkanRenderQuery::~FVulkanRenderQuery(FVulkanRenderQuery *this)

{
  longlong *plVar1;
  FVulkanSyncPoint *pFVar2;
  FName FVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumQueries> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  pFVar2 = (this->SyncPoint).Reference;
  this->_padding_ = (longlong)&___7FVulkanRenderQuery__6B_;
  if (pFVar2 != (FVulkanSyncPoint *)0x0) {
    if (((pFVar2->GraphEvent).Reference == (FBaseGraphTask *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("GraphEvent",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSubmission.h"
                           ,0x55,
                           L"This sync point was not created with a CPU event. Cannot check completion on the CPU."
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((((pFVar2->GraphEvent).Reference)->field_0xd0 == '\0') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!SyncPoint.IsValid() || SyncPoint->IsComplete()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanQuery.cpp"
                           ,0xcd,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar8 = StatPtr_STAT_VulkanNumQueries;
  if (StatPtr_STAT_VulkanNumQueries == (FThreadSafeStaticStat<FStat_STAT_VulkanNumQueries>)0x0) {
    pFVar7 = ::FName::FName(&local_res10,"STAT_VulkanNumQueries");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumQueries>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumQueries,*pFVar7,
                       L"Num Queries","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",true,
                       false,ST_int64,false,false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar8;
  local_res8 = FVar3;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_28.NameAndInfo.Number = FVar3.Number & 0xffffbfff | 0xb000;
    local_28.StatData.Pad[0] = '\x01';
    local_28.StatData.Pad[1] = '\0';
    local_28.StatData.Pad[2] = '\0';
    local_28.StatData.Pad[3] = '\0';
    local_28.StatData.Pad[4] = '\0';
    local_28.StatData.Pad[5] = '\0';
    local_28.StatData.Pad[6] = '\0';
    local_28.StatData.Pad[7] = '\0';
    local_res8 = FVar3;
    local_28.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_28);
    FStatsTrace::Add(&local_res8,-1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  pFVar2 = (this->SyncPoint).Reference;
  if (pFVar2 != (FVulkanSyncPoint *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

