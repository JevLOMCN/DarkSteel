// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// GetMappedPtr @ 1416434b0

uchar * __thiscall IMappedFileRegion::GetMappedPtr(IMappedFileRegion *this)

{
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  
  if ((this->MappedPtr != (uchar *)0x0) && (this->MappedSize != 0)) {
    return this->MappedPtr;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("MappedPtr && MappedSize",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\MappedFileHandle.h"
                     ,0x19,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    puVar3 = (uchar *)(*pcVar1)();
    return puVar3;
  }
  return this->MappedPtr;
}

// GetMappedSize @ 141643510

long64 __thiscall IMappedFileRegion::GetMappedSize(IMappedFileRegion *this)

{
  code *pcVar1;
  bool bVar2;
  long64 lVar3;
  
  if ((this->MappedPtr == (uchar *)0x0) || (this->MappedSize == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MappedPtr && MappedSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\MappedFileHandle.h"
                       ,0x19,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      lVar3 = (*pcVar1)();
      return lVar3;
    }
  }
  return this->MappedSize;
}

// IMappedFileRegion @ 141a9c950

/* WARNING: Enum "Type": Some values do not have unique names */

IMappedFileRegion * __thiscall
IMappedFileRegion::IMappedFileRegion
          (IMappedFileRegion *this,uchar *param_1,ulong64 param_2,FString *param_3,ulong64 param_4)

{
  ulong64 uVar1;
  uchar auVar2 [8];
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  IMappedFileRegion *pIVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_MappedFileRegions> FVar8;
  FThreadStats *pFVar9;
  FThreadStatsPool *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_MappedFileMemory> FVar11;
  FName local_res8;
  FName local_res10;
  FName local_res18 [2];
  FStatMessage local_58;
  FStatMessage local_48;
  
  this->MappedPtr = param_1;
  this->_padding_ = (longlong)&___7IMappedFileRegion__6B_;
  this->MappedSize = param_2;
  ::FString::FString(&this->DebugFilename,param_3);
  this->DebugOffsetRelativeToFile = param_4;
  if ((this->MappedPtr == (uchar *)0x0) || (this->MappedSize == 0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("MappedPtr && MappedSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\MappedFileHandle.h"
                       ,0x19,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pIVar6 = (IMappedFileRegion *)(*pcVar4)();
      return pIVar6;
    }
  }
  FVar8 = StatPtr_STAT_MappedFileRegions;
  if (StatPtr_STAT_MappedFileRegions == (FThreadSafeStaticStat<FStat_STAT_MappedFileRegions>)0x0) {
    pFVar7 = ::FName::FName(&local_res10,"STAT_MappedFileRegions");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_MappedFileRegions>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MappedFileRegions,*pFVar7,
                       L"Num Mapped File Regions","STATGROUP_Memory","STATCAT_Advanced",L"Memory",
                       true,false,ST_int64,false,false,MCR_Invalid);
  }
  uVar1 = *(ulong64 *)FVar8;
  param_4 = uVar1;
  if (((uVar1 != 0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar9 == (FThreadStats *)0x0) {
      pFVar10 = FThreadStatsPool::Get();
      pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
    }
    local_58.NameAndInfo.Number = (uint)(uVar1 >> 0x20) & 0xffffafff | 0xa000;
    local_58.StatData.Pad[0] = '\x01';
    local_58.StatData.Pad[1] = '\0';
    local_58.StatData.Pad[2] = '\0';
    local_58.StatData.Pad[3] = '\0';
    local_58.StatData.Pad[4] = '\0';
    local_58.StatData.Pad[5] = '\0';
    local_58.StatData.Pad[6] = '\0';
    local_58.StatData.Pad[7] = '\0';
    param_4 = uVar1;
    local_58.NameAndInfo.Index.Value = (uint)uVar1;
    FThreadStats::AddStatMessage(pFVar9,&local_58);
    FStatsTrace::Add((FName *)&param_4,1);
    if (pFVar9->ScopeCount == 0) {
      FThreadStats::Flush(pFVar9,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar9,false,false);
    }
  }
  auVar2 = (uchar  [8])this->MappedSize;
  if (auVar2 != (uchar  [8])0x0) {
    FVar11 = StatPtr_STAT_MappedFileMemory;
    if (StatPtr_STAT_MappedFileMemory == (FThreadSafeStaticStat<FStat_STAT_MappedFileMemory>)0x0) {
      pFVar7 = ::FName::FName(local_res18,"STAT_MappedFileMemory");
      FVar11 = (FThreadSafeStaticStat<FStat_STAT_MappedFileMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MappedFileMemory,*pFVar7,
                          L"Mapped File Handle Memory","STATGROUP_Memory","STATCAT_Advanced",
                          L"Memory",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar3 = *(FName *)FVar11;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      param_4 = (ulong64)FVar3;
      pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar9 == (FThreadStats *)0x0) {
        pFVar10 = FThreadStatsPool::Get();
        pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
      }
      local_48.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
      local_res8 = FVar3;
      local_48.StatData.Pad = auVar2;
      local_48.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar9,&local_48);
      FStatsTrace::Add(&local_res8,(long64)auVar2);
      if (pFVar9->ScopeCount == 0) {
        FThreadStats::Flush(pFVar9,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar9,false,false);
      }
    }
  }
  return this;
}

// ~IMappedFileRegion @ 141a9d670

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall IMappedFileRegion::~IMappedFileRegion(IMappedFileRegion *this)

{
  uchar auVar1 [8];
  FName FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_MappedFileMemory> FVar7;
  FThreadStats *pFVar8;
  FThreadStatsPool *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_MappedFileRegions> FVar10;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FStatMessage local_58;
  FStatMessage local_48;
  
  this->_padding_ = (longlong)&___7IMappedFileRegion__6B_;
  if ((this->MappedSize == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("MappedSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\MappedFileHandle.h"
                         ,0x2b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  auVar1 = (uchar  [8])this->MappedSize;
  if (auVar1 != (uchar  [8])0x0) {
    FVar7 = StatPtr_STAT_MappedFileMemory;
    if (StatPtr_STAT_MappedFileMemory == (FThreadSafeStaticStat<FStat_STAT_MappedFileMemory>)0x0) {
      pFVar6 = ::FName::FName(&local_res18,"STAT_MappedFileMemory");
      FVar7 = (FThreadSafeStaticStat<FStat_STAT_MappedFileMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MappedFileMemory,*pFVar6,
                         L"Mapped File Handle Memory","STATGROUP_Memory","STATCAT_Advanced",
                         L"Memory",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar7;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar8 == (FThreadStats *)0x0) {
        pFVar9 = FThreadStatsPool::Get();
        pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
      }
      local_58.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar2;
      local_58.StatData.Pad = auVar1;
      local_58.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar8,&local_58);
      FStatsTrace::Add(&local_res8,-(longlong)auVar1);
      if (pFVar8->ScopeCount == 0) {
        FThreadStats::Flush(pFVar8,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar8,false,false);
      }
    }
  }
  FVar10 = StatPtr_STAT_MappedFileRegions;
  if (StatPtr_STAT_MappedFileRegions == (FThreadSafeStaticStat<FStat_STAT_MappedFileRegions>)0x0) {
    pFVar6 = ::FName::FName(&local_res20,"STAT_MappedFileRegions");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_MappedFileRegions>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MappedFileRegions,*pFVar6,
                        L"Num Mapped File Regions","STATGROUP_Memory","STATCAT_Advanced",L"Memory",
                        true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar10;
  local_res8 = FVar2;
  if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar8 == (FThreadStats *)0x0) {
      pFVar9 = FThreadStatsPool::Get();
      pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
    }
    local_48.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
    local_48.StatData.Pad[0] = '\x01';
    local_48.StatData.Pad[1] = '\0';
    local_48.StatData.Pad[2] = '\0';
    local_48.StatData.Pad[3] = '\0';
    local_48.StatData.Pad[4] = '\0';
    local_48.StatData.Pad[5] = '\0';
    local_48.StatData.Pad[6] = '\0';
    local_48.StatData.Pad[7] = '\0';
    local_res10 = FVar2;
    local_48.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar8,&local_48);
    FStatsTrace::Add(&local_res10,-1);
    if (pFVar8->ScopeCount == 0) {
      FThreadStats::Flush(pFVar8,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar8,false,false);
    }
  }
  pFVar3 = (this->DebugFilename).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// Flush @ 141aa6fa0

void __thiscall IMappedFileRegion::Flush(IMappedFileRegion *this,long64 param_1,long64 param_2)

{
  return;
}

// PreloadHint @ 141aba1c0

void __thiscall
IMappedFileRegion::PreloadHint(IMappedFileRegion *this,long64 param_1,long64 param_2)

{
  return;
}

