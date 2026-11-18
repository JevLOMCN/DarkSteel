// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 8

// FSignedArchiveReader @ 142a53e00

/* WARNING: Enum "EVersion": Some values do not have unique names */

FSignedArchiveReader * __thiscall
FSignedArchiveReader::FSignedArchiveReader
          (FSignedArchiveReader *this,FArchive *param_1,FChunkCacheWorker *param_2)

{
  uchar *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  FArchiveState::FArchiveState((FArchiveState *)this);
  this->PakReader = param_1;
  this->ChunkCount = 0;
  this->_padding_ = (longlong)&___7FSignedArchiveReader__6B_;
  this->SizeOnDisk = 0;
  this->PakSize = 0;
  this->PakOffset = 0;
  this->SignatureChecker = param_2;
  (this->LastCachedChunk).Data = (uchar *)0x0;
  (this->LastCachedChunk).LockCount = 0;
  (this->LastCachedChunk).ChunkIndex = -1;
  (this->LastCachedChunk).LastAccessTime = 0.0;
  puVar1 = FMemory::Malloc(0x10000,0);
  (this->LastCachedChunk).Data = puVar1;
  (**(code **)(this->_padding_ + 200))(this,1);
  lVar2 = (**(code **)(*(longlong *)this->PakReader + 0x30))();
  this->SizeOnDisk = lVar2;
  uVar4 = (ulonglong)(ushort)(lVar2 >> 0x3f);
  uVar3 = lVar2 + uVar4;
  this->PakSize = lVar2;
  this->ChunkCount = (ulonglong)((uVar3 & 0xffff) != uVar4) + ((longlong)uVar3 >> 0x10);
  return this;
}

// ~FSignedArchiveReader @ 142a575b0

/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall FSignedArchiveReader::~FSignedArchiveReader(FSignedArchiveReader *this)

{
  FArchive *pFVar1;
  
  this->_padding_ = (longlong)&___7FSignedArchiveReader__6B_;
  pFVar1 = this->PakReader;
  if (pFVar1 != (FArchive *)0x0) {
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  }
  this->PakReader = (FArchive *)0x0;
  FMemory::Free((this->LastCachedChunk).Data);
  (this->LastCachedChunk).Data = (uchar *)0x0;
  FArchive::~FArchive((FArchive *)this);
  return;
}

// CalculateChunkSize @ 142a60500

/* WARNING: Enum "EVersion": Some values do not have unique names */

long64 __thiscall
FSignedArchiveReader::CalculateChunkSize(FSignedArchiveReader *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  long64 lVar3;
  ushort uVar4;
  longlong lVar5;
  
  if ((param_1 == this->ChunkCount + -1) &&
     (uVar4 = (ushort)(this->SizeOnDisk >> 0x3f),
     lVar5 = (ulonglong)(ushort)((short)this->SizeOnDisk + uVar4) - (ulonglong)uVar4, lVar5 != 0)) {
    if (lVar5 < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Slack > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\SignedArchiveReader.cpp"
                         ,0x173,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        lVar3 = (*pcVar1)();
        return lVar3;
      }
    }
    return lVar5;
  }
  return 0x10000;
}

// PrecacheChunks @ 142a8b8a0

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall
FSignedArchiveReader::PrecacheChunks
          (FSignedArchiveReader *this,
          TArray<FSignedArchiveReader::FReadInfo,TSizedDefaultAllocator<32>_> *param_1,
          long64 param_2,FEvent *param_3)

{
  int *piVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FName *pFVar7;
  longlong lVar8;
  long64 lVar9;
  longlong lVar10;
  FThreadSafeStaticStat<FStat_STAT_SignedArchiveReader_NumChunkRequests> FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  ushort uVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong local_e0;
  longlong local_d8;
  FChunkRequest *local_c8;
  FChunkBuffer *pFStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  LARGE_INTEGER local_a0;
  FName local_98;
  longlong local_90;
  ulonglong local_88;
  FStatMessage local_80;
  FSimpleScopeSecondsStat local_70;
  FName local_50;
  FName local_48 [2];
  
  local_70.StatId.StatIdPtr = (TStatIdData *)StatPtr_STAT_SignedArchiveReader_PreCacheChunks;
  if (StatPtr_STAT_SignedArchiveReader_PreCacheChunks ==
      (FThreadSafeStaticStat<FStat_STAT_SignedArchiveReader_PreCacheChunks>)0x0) {
    pFVar7 = ::FName::FName(&local_50,"STAT_SignedArchiveReader_PreCacheChunks");
    local_70.StatId.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SignedArchiveReader_PreCacheChunks,
                    *pFVar7,L"FSignedArchiveReader.PreCacheChunks","STATGROUP_PakFile",
                    "STATCAT_Advanced",L"Pak File",true,false,NumBits,false,false,MCR_Invalid);
  }
  local_70._padding_ = (longlong)&___7FSimpleScopeSecondsStat__6B_;
  QueryPerformanceCounter(&local_a0);
  lVar13 = this->PakOffset;
  lVar18 = (ulonglong)(ushort)(lVar13 >> 0x3f) + lVar13;
  local_d8 = 0;
  lVar8 = param_2 + -1 + lVar13;
  uVar19 = lVar18 >> 0x10;
  local_e0 = 0;
  local_70.StartTime =
       (double)local_a0.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  lVar8 = (longlong)(lVar8 + (ulonglong)(ushort)(lVar8 >> 0x3f)) >> 0x10;
  uVar15 = (lVar8 - uVar19) + 1;
  iVar14 = (int)uVar15;
  local_70.Scale = __real_3ff0000000000000;
  local_90 = lVar8;
  local_88 = uVar15;
  if ((uVar15 != (longlong)iVar14) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar5)) {
    pcVar4 = (code *)swi(3);
    lVar9 = (*pcVar4)();
    return lVar9;
  }
  if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar15 & 0xffffffff);
  }
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != iVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar14,&param_1->AllocatorInstance,0,piVar1);
  }
  uVar15 = (ulonglong)(int)((ulonglong)lVar18 >> 0x10);
  if ((uVar19 != uVar15) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar5)) {
    pcVar4 = (code *)swi(3);
    lVar9 = (*pcVar4)();
    return lVar9;
  }
  if ((longlong)uVar15 <= lVar8) {
    do {
      lVar8 = lVar13;
      if (param_2 < 1) {
        lVar8 = local_d8;
      }
      uVar16 = (longlong)((ulonglong)(ushort)(lVar13 >> 0x3f) + lVar13) >> 0x10;
      if (param_2 < 1) {
        uVar16 = uVar15;
      }
      lVar17 = uVar16 * 0x10000;
      lVar18 = param_2;
      if (lVar17 + 0x10000 < param_2 + lVar8) {
        lVar18 = (lVar17 - lVar8) + 0x10000;
      }
      local_b8 = lVar8 + uVar16 * -0x10000;
      lStack_b0 = local_e0;
      iVar14 = (int)uVar19;
      local_a8 = lVar18;
      if ((this->LastCachedChunk).ChunkIndex == iVar14) {
        local_c8 = (FChunkRequest *)0x0;
        pFStack_c0 = &this->LastCachedChunk;
      }
      else {
        if ((uVar15 == this->ChunkCount - 1U) &&
           (uVar12 = (ushort)(this->SizeOnDisk >> 0x3f),
           lVar10 = (ulonglong)(ushort)((short)this->SizeOnDisk + uVar12) - (ulonglong)uVar12,
           lVar10 != 0)) {
          if ((lVar10 < 1) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Slack > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\SignedArchiveReader.cpp"
                                 ,0x173,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            lVar9 = (*pcVar4)();
            return lVar9;
          }
        }
        else {
          lVar10 = 0x10000;
        }
        local_c8 = FChunkCacheWorker::RequestChunk
                             (this->SignatureChecker,iVar14,lVar17,lVar10,param_3);
        FVar11 = StatPtr_STAT_SignedArchiveReader_NumChunkRequests;
        if (StatPtr_STAT_SignedArchiveReader_NumChunkRequests ==
            (FThreadSafeStaticStat<FStat_STAT_SignedArchiveReader_NumChunkRequests>)0x0) {
          pFVar7 = ::FName::FName(local_48,"STAT_SignedArchiveReader_NumChunkRequests");
          FVar11 = (FThreadSafeStaticStat<FStat_STAT_SignedArchiveReader_NumChunkRequests>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_SignedArchiveReader_NumChunkRequests,*pFVar7,
                              L"FSignedArchiveReader.NumChunkRequests","STATGROUP_PakFile",
                              "STATCAT_Advanced",L"Pak File",true,false,ST_int64,false,false,
                              MCR_Invalid);
        }
        FVar2 = *(FName *)FVar11;
        if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          this_00 = TlsGetValue(FThreadStats::TlsSlot);
          if (this_00 == (FThreadStats *)0x0) {
            this_01 = FThreadStatsPool::Get();
            this_00 = FThreadStatsPool::GetFromPool(this_01);
          }
          local_80.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
          local_80.StatData.Pad[0] = '\x01';
          local_80.StatData.Pad[1] = '\0';
          local_80.StatData.Pad[2] = '\0';
          local_80.StatData.Pad[3] = '\0';
          local_80.StatData.Pad[4] = '\0';
          local_80.StatData.Pad[5] = '\0';
          local_80.StatData.Pad[6] = '\0';
          local_80.StatData.Pad[7] = '\0';
          local_98 = FVar2;
          local_80.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(this_00,&local_80);
          FStatsTrace::Add(&local_98,1);
          if (this_00->ScopeCount == 0) {
            FThreadStats::Flush(this_00,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_00,false,false);
          }
        }
        pFStack_c0 = (FChunkBuffer *)0x0;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_c8) &&
          ((FScriptContainerElement *)&local_c8 < pFVar3 + (longlong)*piVar1 * 0x28)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        lVar9 = (*pcVar4)();
        return lVar9;
      }
      iVar6 = param_1->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,&param_1->AllocatorInstance,piVar1);
      }
      local_e0 = local_e0 + lVar18;
      param_1->ArrayNum = iVar6 + 1;
      uVar19 = (ulonglong)(iVar14 + 1U);
      lVar17 = (longlong)iVar6;
      lVar13 = lVar13 + lVar18;
      uVar15 = (ulonglong)(int)(iVar14 + 1U);
      pFVar3 = (param_1->AllocatorInstance).Data;
      *(FChunkRequest **)(pFVar3 + lVar17 * 0x28) = local_c8;
      *(FChunkBuffer **)(pFVar3 + lVar17 * 0x28 + 8) = pFStack_c0;
      *(longlong *)(pFVar3 + lVar17 * 0x28 + 0x10) = local_b8;
      *(longlong *)(pFVar3 + lVar17 * 0x28 + 0x10 + 8) = lStack_b0;
      *(longlong *)(pFVar3 + lVar17 * 0x28 + 0x20) = local_a8;
      param_2 = param_2 - lVar18;
      local_d8 = lVar8;
    } while ((longlong)uVar15 <= local_90);
  }
  FSimpleScopeSecondsStat::~FSimpleScopeSecondsStat(&local_70);
  return local_88;
}

// Seek @ 142a9ce30

/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall FSignedArchiveReader::Seek(FSignedArchiveReader *this,long64 param_1)

{
  this->PakOffset = param_1;
  return;
}

// Serialize @ 142a9f2e0

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSignedArchiveReader::Serialize(FSignedArchiveReader *this,void *param_1,long64 param_2)

{
  int *piVar1;
  int iVar2;
  FName FVar3;
  FChunkCacheWorker *pFVar4;
  FEvent *pFVar5;
  code *pcVar6;
  uchar auVar7 [8];
  double dVar8;
  double dVar9;
  ForAnyElementType FVar10;
  bool bVar11;
  uint uVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_SignedArchiveReader_NumSerializes> FVar14;
  FThreadStats *pFVar15;
  FThreadStatsPool *pFVar16;
  atomic<void_*> aVar17;
  ulonglong uVar18;
  FThreadSafeStaticStat<FStat_STAT_SignedArchiveReader_CopyFromNewCache> FVar19;
  FThreadSafeStaticStat<FStat_STAT_SignedArchiveReader_CopyFromExistingCache> FVar20;
  FIndexedLockFreeLink *pFVar21;
  longlong lVar22;
  uint uVar23;
  longlong lVar24;
  FNameEntryId FVar25;
  uint uVar26;
  int local_res8;
  ulonglong local_188;
  TArray<FSignedArchiveReader::FReadInfo,TSizedDefaultAllocator<32>_> local_180;
  longlong local_170;
  atomic<void_*> local_168;
  uint local_160;
  uint uStack_15c;
  uint local_158;
  uint uStack_154;
  LARGE_INTEGER local_150;
  FName local_148;
  LARGE_INTEGER local_140;
  LARGE_INTEGER local_138;
  LARGE_INTEGER local_130;
  FName local_128;
  LARGE_INTEGER local_120;
  LARGE_INTEGER local_118;
  FName local_110;
  ulonglong local_108;
  FStatMessage local_100;
  FStatMessage local_f0;
  FStatMessage local_e0;
  FSimpleScopeSecondsStat local_d0;
  FSimpleScopeSecondsStat local_b0;
  FName local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70 [6];
  
  aVar17 = (atomic<void_*>)0x0;
  local_b0.StatId.StatIdPtr = (TStatIdData *)StatPtr_STAT_SignedArchiveReader_Serialize;
  if (StatPtr_STAT_SignedArchiveReader_Serialize ==
      (FThreadSafeStaticStat<FStat_STAT_SignedArchiveReader_Serialize>)0x0) {
    pFVar13 = ::FName::FName(&local_90,"STAT_SignedArchiveReader_Serialize");
    local_b0.StatId.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SignedArchiveReader_Serialize,
                    *pFVar13,L"FSignedArchiveReader.Serialize","STATGROUP_PakFile",
                    "STATCAT_Advanced",L"Pak File",true,false,NumBits,false,false,MCR_Invalid);
  }
  local_b0._padding_ = (longlong)&___7FSimpleScopeSecondsStat__6B_;
  QueryPerformanceCounter(&local_150);
  dVar9 = __real_4170000000000000;
  dVar8 = __real_3ff0000000000000;
  local_b0.Scale = __real_3ff0000000000000;
  local_b0.StartTime =
       (double)local_150.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  FVar14 = StatPtr_STAT_SignedArchiveReader_NumSerializes;
  if (StatPtr_STAT_SignedArchiveReader_NumSerializes ==
      (FThreadSafeStaticStat<FStat_STAT_SignedArchiveReader_NumSerializes>)0x0) {
    pFVar13 = ::FName::FName(&local_88,"STAT_SignedArchiveReader_NumSerializes");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_SignedArchiveReader_NumSerializes>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SignedArchiveReader_NumSerializes
                        ,*pFVar13,L"FSignedArchiveReader.NumSerializes","STATGROUP_PakFile",
                        "STATCAT_Advanced",L"Pak File",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar14;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar15 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    local_100.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
    local_100.StatData.Pad[0] = '\x01';
    local_100.StatData.Pad[1] = '\0';
    local_100.StatData.Pad[2] = '\0';
    local_100.StatData.Pad[3] = '\0';
    local_100.StatData.Pad[4] = '\0';
    local_100.StatData.Pad[5] = '\0';
    local_100.StatData.Pad[6] = '\0';
    local_100.StatData.Pad[7] = '\0';
    local_148 = FVar3;
    local_100.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar15,&local_100);
    FStatsTrace::Add(&local_148,1);
    if (pFVar15->ScopeCount == 0) {
      FThreadStats::Flush(pFVar15,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar15,false,false);
    }
  }
  if (this->SignatureChecker->Thread != (FRunnableThread *)0x0) {
    aVar17 = (atomic<void_*>)FGenericPlatformProcess::GetSynchEventFromPool(false);
  }
  local_180.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_180.ArrayNum = 0;
  local_180.ArrayMax = 0;
  local_168 = aVar17;
  uVar18 = PrecacheChunks(this,&local_180,param_2,(FEvent *)aVar17);
  uVar23 = (uint)uVar18;
  local_108 = (ulonglong)(int)uVar23;
  if ((uVar18 != local_108) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IntFitsIn<OutType>(In)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                          ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar11))
  {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (this->SignatureChecker->Thread == (FRunnableThread *)0x0) {
    FChunkCacheWorker::ProcessQueue(this->SignatureChecker);
  }
  local_d0.StatId.StatIdPtr = (TStatIdData *)StatPtr_STAT_SignedArchiveReader_ProcessChunkRequests;
  if (StatPtr_STAT_SignedArchiveReader_ProcessChunkRequests ==
      (FThreadSafeStaticStat<FStat_STAT_SignedArchiveReader_ProcessChunkRequests>)0x0) {
    pFVar13 = ::FName::FName(&local_80,"STAT_SignedArchiveReader_ProcessChunkRequests");
    local_d0.StatId.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)
                    &StatPtr_STAT_SignedArchiveReader_ProcessChunkRequests,*pFVar13,
                    L"FSignedArchiveReader.ProcessChunkRequests","STATGROUP_PakFile",
                    "STATCAT_Advanced",L"Pak File",true,false,NumBits,false,false,MCR_Invalid);
  }
  local_d0._padding_ = (longlong)&___7FSimpleScopeSecondsStat__6B_;
  QueryPerformanceCounter(&local_140);
  local_d0.Scale = dVar8;
  local_170 = (longlong)(int)(uVar23 - 1);
  local_d0.StartTime = (double)local_140.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar9;
  local_188 = uVar18;
  do {
    local_res8 = 0;
    uVar26 = 0;
    lVar24 = 0;
    if (local_170 < 0) {
LAB_142a9fa88:
      if (aVar17 == (atomic<void_*>)0x0) {
        FChunkCacheWorker::ProcessQueue(this->SignatureChecker);
      }
      else {
        (**(code **)(*(longlong *)aVar17 + 0x20))(aVar17,0xffffffff,0);
      }
    }
    else {
      lVar22 = 0;
      do {
        uVar12 = 0;
        if ((int)uVar26 < local_180.ArrayNum) {
          uVar12 = ~uVar26 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar10.Data = local_180.AllocatorInstance.Data;
        if ((*(longlong *)(local_180.AllocatorInstance.Data + lVar22) == 0) ||
           (*(int *)(*(longlong *)(local_180.AllocatorInstance.Data + lVar22) + 0x20) == 0)) {
          if (*(longlong *)(local_180.AllocatorInstance.Data + lVar22 + 8) != 0) {
            FVar20 = StatPtr_STAT_SignedArchiveReader_CopyFromExistingCache;
            if (StatPtr_STAT_SignedArchiveReader_CopyFromExistingCache ==
                (FThreadSafeStaticStat<FStat_STAT_SignedArchiveReader_CopyFromExistingCache>)0x0) {
              pFVar13 = ::FName::FName(local_70,"STAT_SignedArchiveReader_CopyFromExistingCache");
              FVar20 = (FThreadSafeStaticStat<FStat_STAT_SignedArchiveReader_CopyFromExistingCache>)
                       FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)
                                  &StatPtr_STAT_SignedArchiveReader_CopyFromExistingCache,*pFVar13,
                                  L"FSignedArchiveReader.CopyFromExistingCache","STATGROUP_PakFile",
                                  "STATCAT_Advanced",L"Pak File",true,false,NumBits,false,false,
                                  MCR_Invalid);
            }
            QueryPerformanceCounter(&local_120);
            dVar8 = (double)local_120.QuadPart * FGenericPlatformTime::SecondsPerCycle;
            memcpy((void *)(*(longlong *)(FVar10.Data + lVar22 + 0x18) + (longlong)param_1),
                   (void *)(*(longlong *)(FVar10.Data + lVar22 + 0x10) +
                           **(longlong **)(FVar10.Data + lVar22 + 8)),
                   *(size_t *)(FVar10.Data + lVar22 + 0x20));
            local_188 = (ulonglong)((int)local_188 - 1);
            *(undefined8 *)(FVar10.Data + lVar22 + 8) = 0;
            QueryPerformanceCounter(&local_118);
            FVar3 = *(FName *)FVar20;
            FVar25 = FVar3.ComparisonIndex.Value;
            uVar12 = FVar3.Number;
            auVar7 = (uchar  [8])
                     ((double)local_118.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar8);
            local_158 = FVar25.Value;
            uStack_154 = uVar12;
            if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
               (FThreadStats::TlsSlot != 0xffffffff)) {
              pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
              if (pFVar15 == (FThreadStats *)0x0) {
                pFVar16 = FThreadStatsPool::Get();
                pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
              }
              local_e0.NameAndInfo.Number = uVar12 & 0xffffafff | 0xa000;
              local_110 = FVar3;
              local_e0.StatData.Pad = auVar7;
              local_e0.NameAndInfo.Index.Value = FVar25.Value;
              FThreadStats::AddStatMessage(pFVar15,&local_e0);
              pFVar13 = &local_110;
              goto LAB_142a9fa2b;
            }
            goto LAB_142a9fa5b;
          }
        }
        else {
          FVar19 = StatPtr_STAT_SignedArchiveReader_CopyFromNewCache;
          if (StatPtr_STAT_SignedArchiveReader_CopyFromNewCache ==
              (FThreadSafeStaticStat<FStat_STAT_SignedArchiveReader_CopyFromNewCache>)0x0) {
            pFVar13 = ::FName::FName(&local_78,"STAT_SignedArchiveReader_CopyFromNewCache");
            FVar19 = (FThreadSafeStaticStat<FStat_STAT_SignedArchiveReader_CopyFromNewCache>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)
                                &StatPtr_STAT_SignedArchiveReader_CopyFromNewCache,*pFVar13,
                                L"FSignedArchiveReader.CopyFromNewCache","STATGROUP_PakFile",
                                "STATCAT_Advanced",L"Pak File",true,false,NumBits,false,false,
                                MCR_Invalid);
          }
          QueryPerformanceCounter(&local_138);
          dVar8 = (double)local_138.QuadPart * FGenericPlatformTime::SecondsPerCycle;
          memcpy((void *)(*(longlong *)(FVar10.Data + lVar22 + 0x18) + (longlong)param_1),
                 (void *)(**(longlong **)(*(longlong *)(FVar10.Data + lVar22) + 0x18) +
                         *(longlong *)(FVar10.Data + lVar22 + 0x10)),
                 *(size_t *)(FVar10.Data + lVar22 + 0x20));
          if ((local_170 == lVar24) &&
             (**(int **)(FVar10.Data + lVar22) != (this->LastCachedChunk).ChunkIndex)) {
            (this->LastCachedChunk).ChunkIndex = **(int **)(FVar10.Data + lVar22);
            memcpy((this->LastCachedChunk).Data,
                   (void *)**(undefined8 **)(*(longlong *)(FVar10.Data + lVar22) + 0x18),0x10000);
          }
          pFVar4 = this->SignatureChecker;
          LOCK();
          piVar1 = (int *)(*(longlong *)(FVar10.Data + lVar22) + 0x24);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar2 == 1) && (pFVar5 = pFVar4->QueuedRequestsEvent, pFVar5 != (FEvent *)0x0)) {
            (**(code **)(pFVar5->_padding_ + 0x10))();
          }
          local_188 = (ulonglong)((int)local_188 - 1);
          *(undefined8 *)(FVar10.Data + lVar22) = 0;
          QueryPerformanceCounter(&local_130);
          FVar3 = *(FName *)FVar19;
          FVar25 = FVar3.ComparisonIndex.Value;
          uVar12 = FVar3.Number;
          auVar7 = (uchar  [8])
                   ((double)local_130.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar8);
          local_160 = FVar25.Value;
          uStack_15c = uVar12;
          if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
            if (pFVar15 == (FThreadStats *)0x0) {
              pFVar16 = FThreadStatsPool::Get();
              pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
            }
            local_f0.NameAndInfo.Number = uVar12 & 0xffffafff | 0xa000;
            local_128 = FVar3;
            local_f0.StatData.Pad = auVar7;
            local_f0.NameAndInfo.Index.Value = FVar25.Value;
            FThreadStats::AddStatMessage(pFVar15,&local_f0);
            pFVar13 = &local_128;
LAB_142a9fa2b:
            FStatsTrace::Add(pFVar13,(double)auVar7);
            if (pFVar15->ScopeCount == 0) {
              FThreadStats::Flush(pFVar15,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar15,false,false);
            }
          }
LAB_142a9fa5b:
          local_res8 = local_res8 + 1;
        }
        uVar26 = uVar26 + 1;
        lVar24 = lVar24 + 1;
        lVar22 = lVar22 + 0x28;
      } while (lVar24 <= local_170);
      aVar17 = local_168;
      uVar18 = local_188;
      if (local_res8 == 0) goto LAB_142a9fa88;
    }
    if ((int)uVar18 < 1) {
      FSimpleScopeSecondsStat::~FSimpleScopeSecondsStat(&local_d0);
      if (aVar17 != (atomic<void_*>)0x0) {
        pFVar4 = this->SignatureChecker;
        uVar26 = FLockFreeLinkPolicy::AllocLockFreeLink();
        if (uVar26 == 0) {
          pFVar21 = (FIndexedLockFreeLink *)0x0;
        }
        else {
          pFVar21 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar26 >> 0xe] + (uVar26 & 0x3fff);
        }
        pFVar21->Payload = aVar17;
        FLockFreePointerListLIFORoot<64,1>::Push
                  ((FLockFreePointerListLIFORoot<64,1> *)&pFVar4->EventsToRelease,uVar26);
        pFVar5 = pFVar4->QueuedRequestsEvent;
        if (pFVar5 != (FEvent *)0x0) {
          (**(code **)(pFVar5->_padding_ + 0x10))();
        }
      }
      this->PakOffset = this->PakOffset + param_2;
      if ((int)uVar23 < local_180.ArrayNum) {
        lVar24 = local_108 * 0x28;
        do {
          uVar26 = 0;
          if ((int)uVar23 < local_180.ArrayNum) {
            uVar26 = ~uVar23 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (*(longlong *)(local_180.AllocatorInstance.Data + lVar24) != 0) {
            pFVar4 = this->SignatureChecker;
            LOCK();
            piVar1 = (int *)(*(longlong *)(local_180.AllocatorInstance.Data + lVar24) + 0x24);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar2 == 1) && (pFVar5 = pFVar4->QueuedRequestsEvent, pFVar5 != (FEvent *)0x0)) {
              (**(code **)(pFVar5->_padding_ + 0x10))();
            }
          }
          uVar23 = uVar23 + 1;
          lVar24 = lVar24 + 0x28;
        } while ((int)uVar23 < local_180.ArrayNum);
      }
      if (local_180.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.AllocatorInstance.Data);
      }
      FSimpleScopeSecondsStat::~FSimpleScopeSecondsStat(&local_b0);
      return;
    }
  } while( true );
}

// Tell @ 142aa1e20

/* WARNING: Enum "EVersion": Some values do not have unique names */

long64 __thiscall FSignedArchiveReader::Tell(FSignedArchiveReader *this)

{
  return this->PakOffset;
}

// TotalSize @ 142aa3d30

/* WARNING: Enum "EVersion": Some values do not have unique names */

long64 __thiscall FSignedArchiveReader::TotalSize(FSignedArchiveReader *this)

{
  return this->PakSize;
}

