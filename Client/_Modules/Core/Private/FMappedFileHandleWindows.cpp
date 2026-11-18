// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FMappedFileHandleWindows @ 141a9bd20

/* WARNING: Enum "Type": Some values do not have unique names */

FMappedFileHandleWindows * __thiscall
FMappedFileHandleWindows::FMappedFileHandleWindows
          (FMappedFileHandleWindows *this,void *param_1,void *param_2,long64 param_3,
          wchar_t *param_4)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_MappedFileHandles> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FMappedFileHandleWindows *pFVar6;
  FName local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  this->_padding_ = (longlong)&___7IMappedFileHandle__6B_;
  this->_padding_ = param_3;
  FVar5 = StatPtr_STAT_MappedFileHandles;
  if (StatPtr_STAT_MappedFileHandles == (FThreadSafeStaticStat<FStat_STAT_MappedFileHandles>)0x0) {
    pFVar4 = ::FName::FName(&local_res10,"STAT_MappedFileHandles");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_MappedFileHandles>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MappedFileHandles,*pFVar4,
                       L"Num Mapped File Handles","STATGROUP_Memory","STATCAT_Advanced",L"Memory",
                       true,false,ST_int64,false,false,MCR_Invalid);
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
    local_38.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
    local_38.StatData.Pad[0] = '\x01';
    local_38.StatData.Pad[1] = '\0';
    local_38.StatData.Pad[2] = '\0';
    local_38.StatData.Pad[3] = '\0';
    local_38.StatData.Pad[4] = '\0';
    local_38.StatData.Pad[5] = '\0';
    local_38.StatData.Pad[6] = '\0';
    local_38.StatData.Pad[7] = '\0';
    local_res8 = FVar1;
    local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_38);
    FStatsTrace::Add(&local_res8,1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  this->_padding_ = (longlong)&___7FMappedFileHandleWindows__6B_;
  this->Handle = param_1;
  this->MappingHandle = param_2;
  ::FString::FString(&this->DebugFilename,param_4);
  this->NumOutstandingRegions = (atomic<int>)0x0;
  if ((param_3 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Size >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformFile.cpp"
                         ,0x40a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FMappedFileHandleWindows *)(*pcVar2)();
    return pFVar6;
  }
  if ((this->Handle == (void *)0xffffffffffffffff) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Handle != ((HANDLE)(LONG_PTR)-1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformFile.cpp"
                         ,0x40b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FMappedFileHandleWindows *)(*pcVar2)();
    return pFVar6;
  }
  return this;
}

// MapRegion @ 141ab5de0

IMappedFileRegion * __thiscall
FMappedFileHandleWindows::MapRegion
          (FMappedFileHandleWindows *this,long64 param_1,long64 param_2,FFileMappingFlags param_3)

{
  code *pcVar1;
  bool bVar2;
  IMappedFileRegion *pIVar3;
  FGenericPlatformMemoryConstants *pFVar4;
  ulonglong uVar5;
  uchar *puVar6;
  IMappedFileRegion *this_00;
  ulong64 uVar7;
  IMappedFileRegion *pIVar8;
  ulonglong uVar9;
  
  if ((this->_padding_ <= param_1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset < GetFileSize()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformFile.cpp"
                         ,0x428,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IMappedFileRegion *)(*pcVar1)();
    return pIVar3;
  }
  uVar7 = this->_padding_ - param_1;
  if (param_2 < (longlong)uVar7) {
    uVar7 = param_2;
  }
  if (((longlong)uVar7 < 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesToMap > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformFile.cpp"
                         ,0x42a,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IMappedFileRegion *)(*pcVar1)();
    return pIVar3;
  }
  pFVar4 = FWindowsPlatformMemory::GetConstants();
  uVar5 = ~(pFVar4->OsAllocationGranularity - 1);
  uVar9 = uVar5 & param_1;
  pIVar8 = (IMappedFileRegion *)
           (param_1 + -1 + (pFVar4->OsAllocationGranularity - uVar9) + uVar7 & uVar5);
  pIVar3 = pIVar8;
  if (this->_padding_ < (longlong)((longlong)&pIVar8->_padding_ + uVar9)) {
    pIVar3 = (IMappedFileRegion *)0x0;
  }
  puVar6 = MapViewOfFile(this->MappingHandle,param_3.Flags & EFileWritable | 4,
                         (DWORD)(uVar9 >> 0x20),(DWORD)uVar9,(SIZE_T)pIVar3);
  pIVar3 = (IMappedFileRegion *)0x0;
  if (puVar6 != (uchar *)0x0) {
    this_00 = ::operator_new(0x48);
    pIVar3 = (IMappedFileRegion *)0x0;
    if (this_00 != (IMappedFileRegion *)0x0) {
      IMappedFileRegion::IMappedFileRegion
                (this_00,puVar6 + (param_1 - uVar9),uVar7,&this->DebugFilename,param_1);
      this_00[1]._padding_ = (longlong)this;
      this_00->_padding_ = (longlong)&___7FMappedFileRegionWindows__6B_;
      this_00[1].MappedPtr = puVar6;
      this_00[1].MappedSize = (ulong64)pIVar8;
      pIVar3 = this_00;
    }
    LOCK();
    this->NumOutstandingRegions = (atomic<int>)((int)this->NumOutstandingRegions + 1);
    UNLOCK();
  }
  return pIVar3;
}

