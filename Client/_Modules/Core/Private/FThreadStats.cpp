// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 19

// AddMessage @ 1414853d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FThreadStats::AddMessage(FName param_1,Type param_2)

{
  int *piVar1;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  LARGE_INTEGER local_res8;
  FStatMessage local_18;
  
  if (param_1 == (FName)0x0) {
    return;
  }
  if (bPrimaryDisableForever) {
    return;
  }
  if (TlsSlot == 0xffffffff) {
    return;
  }
  this = TlsGetValue(TlsSlot);
  if (this == (FThreadStats *)0x0) {
    this_00 = FThreadStatsPool::Get();
    this = FThreadStatsPool::GetFromPool(this_00);
  }
  local_18.NameAndInfo.Index = param_1.ComparisonIndex.Value;
  if (param_2 == CycleScopeStart) {
    this->ScopeCount = this->ScopeCount + 1;
    local_18.NameAndInfo.Number = param_1.Number & 0xffff5fff | 0x5000;
    QueryPerformanceCounter(&local_res8);
    local_18.StatData.Pad[4] = '\0';
    local_18.StatData.Pad[5] = '\0';
    local_18.StatData.Pad[6] = '\0';
    local_18.StatData.Pad[7] = '\0';
    local_18.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
    local_18.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
    local_18.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
    local_18.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
    AddStatMessage(this,&local_18);
    if (bIsRawStatsActive == false) {
      return;
    }
  }
  else {
    if (param_2 != CycleScopeEnd) {
      return;
    }
    if (this->ScopeCount <= this->bWaitForExplicitFlush) {
      return;
    }
    local_18.NameAndInfo.Number = param_1.Number & 0xffff6fff | 0x6000;
    QueryPerformanceCounter(&local_res8);
    local_18.StatData.Pad[4] = '\0';
    local_18.StatData.Pad[5] = '\0';
    local_18.StatData.Pad[6] = '\0';
    local_18.StatData.Pad[7] = '\0';
    local_18.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
    local_18.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
    local_18.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
    local_18.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
    AddStatMessage(this,&local_18);
    piVar1 = &this->ScopeCount;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      Flush(this,false,false);
      return;
    }
    if (bIsRawStatsActive == false) {
      return;
    }
  }
  FlushRawStats(this,false,false);
  return;
}

// AddStatMessage @ 141485680

void __thiscall FThreadStats::AddStatMessage(FThreadStats *this,FStatMessage *param_1)

{
  FStatNameAndInfo FVar1;
  undefined8 *puVar2;
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  FLLMScope::FLLMScope(local_res8,Stats,false,None,Default,true);
  FMemScope::FMemScope(local_res18,Stats,true);
  this->MemoryMessageScope = this->MemoryMessageScope + 1;
  puVar2 = operator_new<FStatMessage,65536,TSizedDefaultAllocator<32>_>
                     (0x10,&(this->Packet).StatMessages);
  if (puVar2 != (undefined8 *)0x0) {
    FVar1 = param_1->NameAndInfo;
    *puVar2 = *(undefined8 *)(param_1->StatData).Pad;
    *(FStatNameAndInfo *)(puVar2 + 1) = FVar1;
  }
  this->MemoryMessageScope = this->MemoryMessageScope + -1;
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// AddMessage<__int64> @ 14160dcf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FThreadStats::AddMessage<__int64>(FName param_1,Type param_2,long64 param_3,bool param_4)

{
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FName local_res8;
  FStatMessage local_18;
  
  if (param_1 == (FName)0x0) {
    return;
  }
  if (bPrimaryDisableForever) {
    return;
  }
  if (TlsSlot == 0xffffffff) {
    return;
  }
  this = TlsGetValue(TlsSlot);
  if (this == (FThreadStats *)0x0) {
    this_00 = FThreadStatsPool::Get();
    this = FThreadStatsPool::GetFromPool(this_00);
  }
  local_18.NameAndInfo.Index = param_1.ComparisonIndex.Value;
  local_18.NameAndInfo.Number = param_1.Number & 0xffff0fff | param_2 << 0xc;
  local_res8 = param_1;
  local_18.StatData.Pad = (uchar  [8])param_3;
  AddStatMessage(this,&local_18);
  if (param_2 == Set) {
    FStatsTrace::Set(&local_res8,param_3);
  }
  else {
    if (param_2 != Add) {
      if (param_2 != Subtract) goto LAB_14160ddad;
      param_3 = -param_3;
    }
    FStatsTrace::Add(&local_res8,param_3);
  }
LAB_14160ddad:
  if (this->ScopeCount == 0) {
    Flush(this,false,false);
  }
  else if (bIsRawStatsActive != false) {
    FlushRawStats(this,false,false);
  }
  return;
}

// AddMessage<unsigned___int64> @ 1416c9e60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FThreadStats::AddMessage<unsigned___int64>(FName param_1,Type param_2,ulong64 param_3,bool param_4)

{
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FStatMessage local_18;
  
  if (((param_1 != (FName)0x0) && (!bPrimaryDisableForever)) && (TlsSlot != 0xffffffff)) {
    this = TlsGetValue(TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    local_18.NameAndInfo.Index = param_1.ComparisonIndex.Value;
    local_18.NameAndInfo.Number = param_1.Number & 0xffff0fff | param_2 << 0xc;
    local_18.StatData.Pad = (uchar  [8])param_3;
    AddStatMessage(this,&local_18);
    if (this->ScopeCount == 0) {
      Flush(this,false,false);
    }
    else if (bIsRawStatsActive != false) {
      FlushRawStats(this,false,false);
    }
  }
  return;
}

// AddMessage<double> @ 14180ec40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FThreadStats::AddMessage<double>(FName param_1,Type param_2,double param_3,bool param_4)

{
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FName local_res8;
  FStatMessage local_28 [2];
  
  if (param_1 == (FName)0x0) {
    return;
  }
  if (bPrimaryDisableForever) {
    return;
  }
  if (TlsSlot == 0xffffffff) {
    return;
  }
  this = TlsGetValue(TlsSlot);
  if (this == (FThreadStats *)0x0) {
    this_00 = FThreadStatsPool::Get();
    this = FThreadStatsPool::GetFromPool(this_00);
  }
  local_28[0].NameAndInfo.Index = param_1.ComparisonIndex.Value;
  local_28[0].NameAndInfo.Number = param_1.Number & 0xffff0fff | param_2 << 0xc;
  local_res8 = param_1;
  local_28[0].StatData.Pad = (uchar  [8])param_3;
  AddStatMessage(this,local_28);
  if (param_2 == Set) {
    FStatsTrace::Set(&local_res8,param_3);
  }
  else {
    if (param_2 != Add) {
      if (param_2 != Subtract) goto LAB_14180ed02;
      param_3 = (double)CONCAT44((uint)((ulonglong)param_3 >> 0x20) ^
                                 __xmm_80000000000000008000000000000000._4_4_,
                                 SUB84(param_3,0) ^ (uint)__xmm_80000000000000008000000000000000);
    }
    FStatsTrace::Add(&local_res8,param_3);
  }
LAB_14180ed02:
  if (this->ScopeCount == 0) {
    Flush(this,false,false);
  }
  else if (bIsRawStatsActive != false) {
    FlushRawStats(this,false,false);
  }
  return;
}

// AddMessageInner<FName> @ 1419b5870

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FThreadStats::AddMessageInner<FName>
          (FThreadStats *this,FName param_1,Type param_2,FName param_3,bool param_4)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  FStatPacket *pFVar15;
  uint uVar16;
  FMemScope local_res8;
  FLLMScope local_res18 [5];
  int local_48 [2];
  FStatMessage local_40;
  
  local_40.NameAndInfo.Index = param_1.ComparisonIndex.Value;
  local_40.NameAndInfo.Number = param_1.Number & 0xffff0fff | param_2 << 0xc;
  local_40.StatData.Pad._0_4_ = param_3.ComparisonIndex.Value;
  local_40.StatData.Pad._4_4_ = param_3.Number;
  AddStatMessage(this,&local_40);
  if (this->ScopeCount != 0) {
    if (bIsRawStatsActive == false) {
      return;
    }
LAB_1419b5c7b:
    FlushRawStats(this,false,false);
    return;
  }
  if (bPrimaryDisableForever != false) {
    TIndirectArray<TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
    ::Empty(&(this->Packet).StatMessages.Chunks,0);
    (this->Packet).StatMessages.NumElements = 0;
    return;
  }
  if (bIsRawStatsActive != false) goto LAB_1419b5c7b;
  FLLMScope::FLLMScope(local_res18,Stats,false,None,Default,true);
  FMemScope::FMemScope(&local_res8,Stats,true);
  if (this->bReentranceGuard != false) goto LAB_1419b5c4f;
  this->bReentranceGuard = true;
  if (((this->Packet).ThreadType == Other) &&
     (lVar14 = (longlong)(int)UE::Stats::FStats::GameThreadStatsFrame,
     this->CurrentGameFrame < (int)UE::Stats::FStats::GameThreadStatsFrame)) {
    this->CurrentGameFrame = (int)UE::Stats::FStats::GameThreadStatsFrame;
    (this->Packet).Frame = lVar14;
LAB_1419b594f:
    if ((this->ScopeCount == 0) && ((this->Packet).StatMessages.NumElements != 0)) {
      pTVar1 = &(this->Packet).StatMessagesPresize;
      if (9 < (this->Packet).StatMessagesPresize.ArrayNum) {
        pFVar3 = (pTVar1->AllocatorInstance).Data;
        iVar12 = (this->Packet).StatMessagesPresize.ArrayNum + -1;
        if (iVar12 != 0) {
          memmove(pFVar3,pFVar3 + 4,(longlong)iVar12 << 2);
        }
        piVar2 = &(this->Packet).StatMessagesPresize.ArrayNum;
        *piVar2 = *piVar2 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&pTVar1->AllocatorInstance,(this->Packet).StatMessagesPresize.ArrayNum,
                   &(this->Packet).StatMessagesPresize.ArrayMax);
      }
      iVar12 = (this->Packet).StatMessages.NumElements;
      if (iVar12 < 0x40000) {
        pFVar3 = (pTVar1->AllocatorInstance).Data;
        local_48[0] = iVar12;
        if (((pFVar3 <= (FScriptContainerElement *)local_48) &&
            ((FScriptContainerElement *)local_48 <
             pFVar3 + (longlong)(this->Packet).StatMessagesPresize.ArrayMax * 4)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar12 = (this->Packet).StatMessagesPresize.ArrayNum;
        piVar2 = &(this->Packet).StatMessagesPresize.ArrayMax;
        if (iVar12 == *piVar2) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar1->AllocatorInstance,piVar2);
          (this->Packet).StatMessagesPresize.ArrayNum = iVar12;
        }
        (this->Packet).StatMessagesPresize.ArrayNum = iVar12 + 1;
        *(int *)((pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_48[0];
      }
      else if (5 < (byte)LogStats._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStats);
      }
      pFVar15 = ::operator_new(0x40);
      if (pFVar15 == (FStatPacket *)0x0) {
        pFVar15 = (FStatPacket *)0x0;
      }
      else {
        pFVar15 = FStatPacket::FStatPacket(pFVar15,&this->Packet);
      }
      iVar12 = (this->Packet).StatMessages.Chunks.Array.ArrayNum;
      iVar5 = (this->Packet).StatMessages.Chunks.Array.ArrayMax;
      pFVar3 = (pFVar15->StatMessages).Chunks.Array.AllocatorInstance.Data;
      iVar7 = (pFVar15->StatMessages).Chunks.Array.ArrayNum;
      iVar8 = (pFVar15->StatMessages).Chunks.Array.ArrayMax;
      iVar9 = (pFVar15->StatMessages).NumElements;
      uVar10 = *(undefined4 *)&(pFVar15->StatMessages).field_0x14;
      (pFVar15->StatMessages).Chunks.Array.AllocatorInstance.Data =
           (this->Packet).StatMessages.Chunks.Array.AllocatorInstance.Data;
      (pFVar15->StatMessages).Chunks.Array.ArrayNum = iVar12;
      (pFVar15->StatMessages).Chunks.Array.ArrayMax = iVar5;
      uVar6 = *(undefined4 *)&(this->Packet).StatMessages.field_0x14;
      (pFVar15->StatMessages).NumElements = (this->Packet).StatMessages.NumElements;
      *(undefined4 *)&(pFVar15->StatMessages).field_0x14 = uVar6;
      (this->Packet).StatMessages.Chunks.Array.AllocatorInstance.Data = pFVar3;
      (this->Packet).StatMessages.Chunks.Array.ArrayNum = iVar7;
      (this->Packet).StatMessages.Chunks.Array.ArrayMax = iVar8;
      (this->Packet).StatMessages.NumElements = iVar9;
      *(undefined4 *)&(this->Packet).StatMessages.field_0x14 = uVar10;
      pFVar15->bBrokenCallstacks = false;
      if (((this->Packet).StatMessages.NumElements != 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("!Packet.StatMessages.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsSystemTypes.cpp"
                              ,0x474,L""), bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (0 < (this->Packet).StatMessagesPresize.ArrayNum) {
        uVar16 = 0;
        lVar14 = 0;
        iVar12 = *(int *)(this->Packet).StatMessagesPresize.AllocatorInstance.Data;
        do {
          uVar13 = 0;
          if ((int)uVar16 < (this->Packet).StatMessagesPresize.ArrayNum) {
            uVar13 = ~uVar16 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (iVar12 < *(int *)((this->Packet).StatMessagesPresize.AllocatorInstance.Data + lVar14))
          {
            uVar13 = 0;
            if ((int)uVar16 < (this->Packet).StatMessagesPresize.ArrayNum) {
              uVar13 = ~uVar16 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar12 = *(int *)((this->Packet).StatMessagesPresize.AllocatorInstance.Data + lVar14);
          }
          uVar16 = uVar16 + 1;
          lVar14 = lVar14 + 4;
        } while ((int)uVar16 < (this->Packet).StatMessagesPresize.ArrayNum);
        TIndirectArray<TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
        ::Empty(&(this->Packet).StatMessages.Chunks,
                (int)((iVar12 + 0xfff >> 0x1f & 0xfffU) + iVar12 + 0xfff) >> 0xc);
        (this->Packet).StatMessages.NumElements = 0;
      }
      SendMessage_Async(this,pFVar15);
      if (((this->Packet).ThreadType != Other) && (this->bSawExplicitFlush != false)) {
        this->ScopeCount = this->ScopeCount + 1;
        this->bSawExplicitFlush = false;
        this->bWaitForExplicitFlush = 1;
      }
    }
  }
  else if (this->bSawExplicitFlush != false) goto LAB_1419b594f;
  this->bReentranceGuard = false;
LAB_1419b5c4f:
  FMemScope::~FMemScope(&local_res8);
  FLLMScope::~FLLMScope(local_res18);
  return;
}

// FThreadStats @ 1419cf7f0

FThreadStats * __thiscall FThreadStats::FThreadStats(FThreadStats *this,Type param_1)

{
  code *pcVar1;
  bool bVar2;
  DWORD DVar3;
  Type TVar4;
  FThreadStats *pFVar5;
  
  (this->Packet).ThreadType = param_1;
  (this->Packet).ThreadId = 0;
  (this->Packet).bBrokenCallstacks = false;
  (this->Packet).Frame = 1;
  TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_>::
  TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_>(&(this->Packet).StatMessages,0);
  (this->Packet).StatMessagesPresize.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Packet).StatMessagesPresize.ArrayNum = 0;
  (this->Packet).StatMessagesPresize.ArrayMax = 0;
  this->CurrentGameFrame = (int)UE::Stats::FStats::GameThreadStatsFrame;
  TVar4 = (this->Packet).ThreadType;
  this->ScopeCount = 0;
  this->bWaitForExplicitFlush = 0;
  this->MemoryMessageScope = 0;
  this->bReentranceGuard = false;
  this->bSawExplicitFlush = false;
  if (TVar4 == Invalid) {
    DVar3 = GetCurrentThreadId();
    (this->Packet).ThreadId = DVar3;
    if (DVar3 == GGameThreadId) {
      (this->Packet).ThreadType = Game;
    }
    else {
      TVar4 = Other;
      if (DVar3 == GRenderThreadId) {
        TVar4 = Renderer;
      }
      (this->Packet).ThreadType = TVar4;
    }
  }
  else if (TVar4 == EndOfPipe) {
    return this;
  }
  if ((TlsSlot == 0xffffffff) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FPlatformTLS::IsValidTlsSlot(TlsSlot)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsSystemTypes.cpp"
                         ,0x401,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FThreadStats *)(*pcVar1)();
    return pFVar5;
  }
  TlsSetValue(TlsSlot,this);
  return this;
}

// CheckEnable @ 1419e40b0

void __cdecl FThreadStats::CheckEnable(void)

{
  bool bVar1;
  
  if (!bPrimaryDisableForever) {
    if (PRIVATE_GIsRunningCommandlet) {
      bVar1 = UE::Stats::FStats::EnabledForCommandlet();
      if (!bVar1) goto LAB_1419e40e7;
    }
    if ((TlsSlot != 0xffffffff) && (PrimaryEnableCounter.Counter != 0)) {
      bVar1 = true;
      goto LAB_1419e40e9;
    }
  }
LAB_1419e40e7:
  bVar1 = false;
LAB_1419e40e9:
  if (bPrimaryEnable != bVar1) {
    LOCK();
    UNLOCK();
    LOCK();
    UNLOCK();
    LOCK();
    PrimaryEnableUpdateNumber.Counter = PrimaryEnableUpdateNumber.Counter + 2;
    UNLOCK();
    LOCK();
    UNLOCK();
    bPrimaryEnable = bVar1;
  }
  return;
}

// CheckForCollectingStartupStats @ 1419e4130

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl FThreadStats::CheckForCollectingStartupStats(void)

{
  FName FVar1;
  FName FVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  wchar_t *pwVar8;
  FString *pFVar9;
  size_t sVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_NamedMarker> FVar12;
  FThreadStats *this;
  ForAnyElementType FVar13;
  ForAnyElementType FVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  FName local_res10;
  FName local_res18 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  pwVar8 = FCommandLine::Get();
  ::FString::FString(&local_58,pwVar8);
  ::FString::FString(&local_78,L"-StatCmds=");
LAB_1419e4172:
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar14.Data = local_78.Data.AllocatorInstance.Data;
  }
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar13.Data = local_58.Data.AllocatorInstance.Data;
  }
  bVar5 = FParse::Value((wchar_t *)FVar13.Data,(wchar_t *)FVar14.Data,&local_88,false,
                        (wchar_t **)0x0);
  if (!bVar5) goto LAB_1419e43f6;
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  ::FString::ParseIntoArray(&local_88,&local_98,L",",true);
  uVar16 = 0;
  if (0 < local_98.ArrayNum) {
    do {
      uVar6 = 0;
      if ((int)uVar16 < local_98.ArrayNum) {
        uVar6 = ~uVar16 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ::FString::TrimStartInline
                ((FString *)(local_98.AllocatorInstance.Data + (longlong)(int)uVar16 * 0x10));
      uVar6 = 0;
      if ((int)uVar16 < local_98.ArrayNum) {
        uVar6 = ~uVar16 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar15 = local_98.AllocatorInstance.Data + (longlong)(int)uVar16 * 0x10;
      pFVar9 = ::FString::FString(&local_48,"stat ");
      ::FString::ConcatFF(&local_68,pFVar9,(FString *)pFVar15);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (4 < (byte)LogStatGroupEnableManager._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,(FLogCategoryBase *)&LogStatGroupEnableManager);
      }
      FVar14.Data = (FScriptContainerElement *)L"";
      if (local_68.Data.ArrayNum != 0) {
        FVar14.Data = local_68.Data.AllocatorInstance.Data;
      }
      UE::Stats::DirectStatsCommand((wchar_t *)FVar14.Data,false,(FOutputDevice *)0x0);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < local_98.ArrayNum);
  }
  if (local_78.Data.ArrayNum == 0) {
    pwVar8 = L"";
LAB_1419e4331:
    sVar10 = wcslen(pwVar8);
    iVar7 = ::FString::Find(&local_58,pwVar8,(int)sVar10,IgnoreCase,FromStart,-1);
    if (iVar7 < 0) goto LAB_1419e4361;
  }
  else {
    pwVar8 = (wchar_t *)local_78.Data.AllocatorInstance.Data;
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_1419e4331;
    iVar7 = -1;
LAB_1419e4361:
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8825139087166929718>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsSystemTypes.cpp"
                       ,0x4ca,"Index >= 0");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iVar7 != -1) {
    iVar4 = local_78.Data.ArrayNum + -1 + iVar7;
    if (local_78.Data.ArrayNum == 0) {
      iVar4 = iVar7;
    }
    ::FString::RemoveAt(&local_58,0,iVar4,No);
    DestructItems<FString,int>((FString *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
    if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    goto LAB_1419e4172;
  }
  DestructItems<FString,int>((FString *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
LAB_1419e43f6:
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pwVar8 = FCommandLine::Get();
  bVar5 = FParse::Param(pwVar8,L"LoadTimeStats");
  if (bVar5) {
    UE::Stats::DirectStatsCommand(L"stat group enable LinkerLoad",false,(FOutputDevice *)0x0);
    UE::Stats::DirectStatsCommand(L"stat group enable AsyncLoad",false,(FOutputDevice *)0x0);
    UE::Stats::DirectStatsCommand(L"stat group enable LoadTimeVerbose",false,(FOutputDevice *)0x0);
    pwVar8 = L"stat dumpsum -start -ms=250 -num=240";
  }
  else {
    pwVar8 = FCommandLine::Get();
    bVar5 = FParse::Param(pwVar8,L"LoadTimeFile");
    if (!bVar5) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        pwVar8 = FCommandLine::Get();
        bHasLoadTimeFileForCommandletToken = FParse::Param(pwVar8,L"LoadTimeFileForCommandlet");
        _Init_thread_footer(&::_TSS0);
      }
      if (bHasLoadTimeFileForCommandletToken == false) {
        bVar5 = UE::Stats::FStats::HasLoadTimeStatsForCommandletToken();
        if (!bVar5) goto LAB_1419e4530;
        UE::Stats::DirectStatsCommand(L"stat group enable LinkerLoad",false,(FOutputDevice *)0x0);
        UE::Stats::DirectStatsCommand(L"stat group enable AsyncLoad",false,(FOutputDevice *)0x0);
        UE::Stats::DirectStatsCommand
                  (L"stat group enable LoadTimeVerbose",false,(FOutputDevice *)0x0);
        pwVar8 = L"stat dumpsum -start";
        goto LAB_1419e4526;
      }
    }
    UE::Stats::DirectStatsCommand(L"stat group enable LinkerLoad",false,(FOutputDevice *)0x0);
    UE::Stats::DirectStatsCommand(L"stat group enable AsyncLoad",false,(FOutputDevice *)0x0);
    UE::Stats::DirectStatsCommand(L"stat group enable LoadTimeVerbose",false,(FOutputDevice *)0x0);
    pwVar8 = L"stat startfile";
  }
LAB_1419e4526:
  UE::Stats::DirectStatsCommand(pwVar8,true,(FOutputDevice *)0x0);
LAB_1419e4530:
  pFVar11 = ::FName::FName(&local_res10,L"CheckForCollectingStartupStats");
  FVar1 = *pFVar11;
  FVar12 = StatPtr_STAT_NamedMarker;
  if (StatPtr_STAT_NamedMarker == (FThreadSafeStaticStat<FStat_STAT_NamedMarker>)0x0) {
    pFVar11 = ::FName::FName(local_res18,"STAT_NamedMarker");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_NamedMarker>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NamedMarker,*pFVar11,
                        L"NamedMarker","STATGROUP_StatSystem","STATCAT_Advanced",L"Stat System",true
                        ,false,ST_FName,false,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar12;
  if (((FVar2 != (FName)0x0) && (bPrimaryDisableForever == false)) && (TlsSlot != 0xffffffff)) {
    this = GetThreadStats();
    AddMessageInner<FName>(this,FVar2,SpecialMessageMarker,FVar1,false);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// DetectAndUpdateCurrentGameFrame @ 1419ed370

bool __thiscall FThreadStats::DetectAndUpdateCurrentGameFrame(FThreadStats *this)

{
  longlong lVar1;
  
  if ((this->Packet).ThreadType == Other) {
    lVar1 = (longlong)(int)UE::Stats::FStats::GameThreadStatsFrame;
    if (this->CurrentGameFrame < (int)UE::Stats::FStats::GameThreadStatsFrame) {
      this->CurrentGameFrame = (int)UE::Stats::FStats::GameThreadStatsFrame;
      (this->Packet).Frame = lVar1;
      return true;
    }
  }
  return false;
}

// ExplicitFlush @ 1419f73a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FThreadStats::ExplicitFlush(bool param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  FThreadStats *this;
  longlong lVar14;
  FStatPacket *pFVar15;
  FStatPacket *pFVar16;
  uint uVar17;
  FStatPacket *pFVar18;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  int local_38 [4];
  
  this = GetThreadStats();
  pFVar18 = (FStatPacket *)0x0;
  if (this->bWaitForExplicitFlush != 0) {
    this->ScopeCount = this->ScopeCount + -1;
    this->bWaitForExplicitFlush = 0;
  }
  bVar11 = false;
  if ((param_1) && (this->ScopeCount != 0)) {
    this->ScopeCount = 0;
    bVar11 = true;
  }
  this->bSawExplicitFlush = true;
  if (bPrimaryDisableForever != false) {
    TIndirectArray<TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
    ::Empty(&(this->Packet).StatMessages.Chunks,0);
    (this->Packet).StatMessages.NumElements = 0;
    return;
  }
  if (bIsRawStatsActive != false) {
    FlushRawStats(this,bVar11,false);
    return;
  }
  FLLMScope::FLLMScope(local_res8,Stats,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,Stats,true);
  if (this->bReentranceGuard != false) goto LAB_1419f7761;
  this->bReentranceGuard = true;
  if (((this->Packet).ThreadType == Other) &&
     (lVar14 = (longlong)(int)UE::Stats::FStats::GameThreadStatsFrame,
     this->CurrentGameFrame < (int)UE::Stats::FStats::GameThreadStatsFrame)) {
    this->CurrentGameFrame = (int)UE::Stats::FStats::GameThreadStatsFrame;
    (this->Packet).Frame = lVar14;
LAB_1419f7485:
    if ((this->ScopeCount == 0) && ((this->Packet).StatMessages.NumElements != 0)) {
      if (9 < (this->Packet).StatMessagesPresize.ArrayNum) {
        pFVar2 = (this->Packet).StatMessagesPresize.AllocatorInstance.Data;
        iVar12 = (this->Packet).StatMessagesPresize.ArrayNum + -1;
        if (iVar12 != 0) {
          memmove(pFVar2,pFVar2 + 4,(longlong)iVar12 << 2);
        }
        piVar1 = &(this->Packet).StatMessagesPresize.ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&(this->Packet).StatMessagesPresize.AllocatorInstance,
                   (this->Packet).StatMessagesPresize.ArrayNum,
                   &(this->Packet).StatMessagesPresize.ArrayMax);
      }
      iVar12 = (this->Packet).StatMessages.NumElements;
      if (iVar12 < 0x40000) {
        pFVar2 = (this->Packet).StatMessagesPresize.AllocatorInstance.Data;
        local_38[0] = iVar12;
        if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
            ((FScriptContainerElement *)local_38 <
             pFVar2 + (longlong)(this->Packet).StatMessagesPresize.ArrayMax * 4)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar12 = (this->Packet).StatMessagesPresize.ArrayNum;
        piVar1 = &(this->Packet).StatMessagesPresize.ArrayMax;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&(this->Packet).StatMessagesPresize.AllocatorInstance,piVar1);
        }
        (this->Packet).StatMessagesPresize.ArrayNum = iVar12 + 1;
        *(int *)((this->Packet).StatMessagesPresize.AllocatorInstance.Data + (longlong)iVar12 * 4) =
             local_38[0];
      }
      else if (5 < (byte)LogStats._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStats);
      }
      pFVar15 = ::operator_new(0x40);
      pFVar16 = pFVar18;
      if (pFVar15 != (FStatPacket *)0x0) {
        pFVar16 = FStatPacket::FStatPacket(pFVar15,&this->Packet);
      }
      iVar12 = (this->Packet).StatMessages.Chunks.Array.ArrayNum;
      iVar4 = (this->Packet).StatMessages.Chunks.Array.ArrayMax;
      pFVar2 = (pFVar16->StatMessages).Chunks.Array.AllocatorInstance.Data;
      iVar6 = (pFVar16->StatMessages).Chunks.Array.ArrayNum;
      iVar7 = (pFVar16->StatMessages).Chunks.Array.ArrayMax;
      iVar8 = (pFVar16->StatMessages).NumElements;
      uVar9 = *(undefined4 *)&(pFVar16->StatMessages).field_0x14;
      (pFVar16->StatMessages).Chunks.Array.AllocatorInstance.Data =
           (this->Packet).StatMessages.Chunks.Array.AllocatorInstance.Data;
      (pFVar16->StatMessages).Chunks.Array.ArrayNum = iVar12;
      (pFVar16->StatMessages).Chunks.Array.ArrayMax = iVar4;
      uVar5 = *(undefined4 *)&(this->Packet).StatMessages.field_0x14;
      (pFVar16->StatMessages).NumElements = (this->Packet).StatMessages.NumElements;
      *(undefined4 *)&(pFVar16->StatMessages).field_0x14 = uVar5;
      (this->Packet).StatMessages.Chunks.Array.AllocatorInstance.Data = pFVar2;
      (this->Packet).StatMessages.Chunks.Array.ArrayNum = iVar6;
      (this->Packet).StatMessages.Chunks.Array.ArrayMax = iVar7;
      (this->Packet).StatMessages.NumElements = iVar8;
      *(undefined4 *)&(this->Packet).StatMessages.field_0x14 = uVar9;
      pFVar16->bBrokenCallstacks = bVar11;
      if (((this->Packet).StatMessages.NumElements != 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("!Packet.StatMessages.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsSystemTypes.cpp"
                              ,0x474,L""), bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (0 < (this->Packet).StatMessagesPresize.ArrayNum) {
        iVar12 = *(int *)(this->Packet).StatMessagesPresize.AllocatorInstance.Data;
        pFVar15 = pFVar18;
        do {
          uVar17 = (uint)pFVar18;
          uVar13 = 0;
          if ((int)uVar17 < (this->Packet).StatMessagesPresize.ArrayNum) {
            uVar13 = ~uVar17 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (iVar12 < *(int *)((longlong)&pFVar15->Frame +
                               (longlong)(this->Packet).StatMessagesPresize.AllocatorInstance.Data))
          {
            uVar13 = 0;
            if ((int)uVar17 < (this->Packet).StatMessagesPresize.ArrayNum) {
              uVar13 = ~uVar17 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar12 = *(int *)((longlong)&pFVar15->Frame +
                             (longlong)(this->Packet).StatMessagesPresize.AllocatorInstance.Data);
          }
          pFVar18 = (FStatPacket *)(ulonglong)(uVar17 + 1);
          pFVar15 = (FStatPacket *)((longlong)&pFVar15->Frame + 4);
        } while ((int)(uVar17 + 1) < (this->Packet).StatMessagesPresize.ArrayNum);
        TIndirectArray<TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
        ::Empty(&(this->Packet).StatMessages.Chunks,
                (int)((iVar12 + 0xfff >> 0x1f & 0xfffU) + iVar12 + 0xfff) >> 0xc);
        (this->Packet).StatMessages.NumElements = 0;
      }
      SendMessage_Async(this,pFVar16);
      if (((this->Packet).ThreadType != Other) && (this->bSawExplicitFlush != false)) {
        this->ScopeCount = this->ScopeCount + 1;
        this->bSawExplicitFlush = false;
        this->bWaitForExplicitFlush = 1;
      }
    }
  }
  else if (this->bSawExplicitFlush != false) goto LAB_1419f7485;
  this->bReentranceGuard = false;
LAB_1419f7761:
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Flush @ 1419fafe0

void __thiscall FThreadStats::Flush(FThreadStats *this,bool param_1,bool param_2)

{
  if (bPrimaryDisableForever) {
    TIndirectArray<TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
    ::Empty(&(this->Packet).StatMessages.Chunks,0);
    (this->Packet).StatMessages.NumElements = 0;
    return;
  }
  if (bIsRawStatsActive) {
    FlushRawStats(this,param_1,param_2);
    return;
  }
  FlushRegularStats(this,param_1,param_2);
  return;
}

// FlushRawStats @ 1419fb040

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FThreadStats::FlushRawStats(FThreadStats *this,bool param_1,bool param_2)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  bool bVar12;
  longlong lVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_FlushRawStats> FVar15;
  FStatPacket *this_00;
  FStatPacket *pFVar16;
  uint uVar17;
  FNameEntryId FVar18;
  FLLMScope local_res8 [2];
  FColor_u_0 local_res20 [2];
  FName local_68;
  uint local_60;
  uint uStack_5c;
  FMemScope local_58;
  FName local_50;
  FCycleCounter local_48 [2];
  
  FLLMScope::FLLMScope(local_res8,Stats,false,None,Default,true);
  FMemScope::FMemScope(&local_58,Stats,true);
  if (this->bReentranceGuard == false) {
    this->bReentranceGuard = true;
    if (((this->Packet).ThreadType == Other) &&
       (lVar13 = (longlong)(int)UE::Stats::FStats::GameThreadStatsFrame,
       this->CurrentGameFrame < (int)UE::Stats::FStats::GameThreadStatsFrame)) {
      this->CurrentGameFrame = (int)UE::Stats::FStats::GameThreadStatsFrame;
      (this->Packet).Frame = lVar13;
      bVar12 = true;
    }
    else {
      bVar12 = false;
    }
    iVar1 = (this->Packet).StatMessages.NumElements;
    if ((((0x10000 < iVar1) || (bVar12)) || (param_2)) || (this->bSawExplicitFlush != false)) {
      pFVar16 = (FStatPacket *)0x0;
      FVar15 = StatPtr_STAT_FlushRawStats;
      if (StatPtr_STAT_FlushRawStats == (FThreadSafeStaticStat<FStat_STAT_FlushRawStats>)0x0) {
        pFVar14 = ::FName::FName(&local_50,"STAT_FlushRawStats");
        FVar15 = (FThreadSafeStaticStat<FStat_STAT_FlushRawStats>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FlushRawStats,*pFVar14,
                            L"Flush Raw Stats","STATGROUP_StatSystem","STATCAT_Advanced",
                            L"Stat System",true,true,ST_int64,true,false,MCR_Invalid);
      }
      local_48[0].StatId.ComparisonIndex.Value = 0;
      local_48[0].StatId.Number = 0;
      local_48[0].EmittedEvent = 0;
      FVar2 = *(FName *)FVar15;
      FVar18 = FVar2.ComparisonIndex.Value;
      uVar17 = FVar2.Number;
      if ((FVar18.Value != 0) || (uVar17 != 0)) {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_res20[0].Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
          local_48[0].EmittedEvent = local_48[0].EmittedEvent | 1;
          if (-1 < CpuChannel->Enabled) {
            local_68.ComparisonIndex.Value = FVar18.Value;
            local_68.Number = uVar17;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_68,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsSystemTypes.cpp"
                       ,0x4a0);
            local_48[0].EmittedEvent = local_48[0].EmittedEvent | 2;
          }
        }
        if (bPrimaryEnable != false) {
          local_60 = FVar18.Value;
          uStack_5c = uVar17;
          local_48[0].StatId = FVar2;
          AddMessage(FVar2,CycleScopeStart);
          local_48[0].EmittedEvent = local_48[0].EmittedEvent | 4;
        }
      }
      this_00 = ::operator_new(0x40);
      if (this_00 != (FStatPacket *)0x0) {
        pFVar16 = FStatPacket::FStatPacket(this_00,&this->Packet);
      }
      iVar5 = (this->Packet).StatMessages.Chunks.Array.ArrayNum;
      iVar6 = (this->Packet).StatMessages.Chunks.Array.ArrayMax;
      pFVar4 = (pFVar16->StatMessages).Chunks.Array.AllocatorInstance.Data;
      iVar8 = (pFVar16->StatMessages).Chunks.Array.ArrayNum;
      iVar9 = (pFVar16->StatMessages).Chunks.Array.ArrayMax;
      iVar10 = (pFVar16->StatMessages).NumElements;
      uVar11 = *(undefined4 *)&(pFVar16->StatMessages).field_0x14;
      (pFVar16->StatMessages).Chunks.Array.AllocatorInstance.Data =
           (this->Packet).StatMessages.Chunks.Array.AllocatorInstance.Data;
      (pFVar16->StatMessages).Chunks.Array.ArrayNum = iVar5;
      (pFVar16->StatMessages).Chunks.Array.ArrayMax = iVar6;
      uVar7 = *(undefined4 *)&(this->Packet).StatMessages.field_0x14;
      (pFVar16->StatMessages).NumElements = (this->Packet).StatMessages.NumElements;
      *(undefined4 *)&(pFVar16->StatMessages).field_0x14 = uVar7;
      (this->Packet).StatMessages.Chunks.Array.AllocatorInstance.Data = pFVar4;
      (this->Packet).StatMessages.Chunks.Array.ArrayNum = iVar8;
      (this->Packet).StatMessages.Chunks.Array.ArrayMax = iVar9;
      (this->Packet).StatMessages.NumElements = iVar10;
      *(undefined4 *)&(this->Packet).StatMessages.field_0x14 = uVar11;
      pFVar16->bBrokenCallstacks = param_1;
      if (((this->Packet).StatMessages.NumElements != 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("!Packet.StatMessages.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsSystemTypes.cpp"
                              ,0x4a6,L""), bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      SendMessage_Async(this,pFVar16);
      if (((this->Packet).ThreadType != Other) && (this->bSawExplicitFlush != false)) {
        this->ScopeCount = this->ScopeCount + 1;
        this->bSawExplicitFlush = false;
        this->bWaitForExplicitFlush = 1;
      }
      if ((0x80000 < iVar1) && (2 < (byte)LogStats._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStats);
      }
      if (5 < (byte)LogStats._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStats);
      }
      FCycleCounter::Stop(local_48);
    }
    this->bReentranceGuard = false;
  }
  FMemScope::~FMemScope(&local_58);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// FlushRegularStats @ 1419fb3c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FThreadStats::FlushRegularStats(FThreadStats *this,bool param_1,bool param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  FStatPacket *pFVar15;
  uint uVar16;
  FLLMScope local_res8 [2];
  FMemScope local_res20;
  int local_38 [4];
  
  FLLMScope::FLLMScope(local_res8,Stats,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,Stats,true);
  if (this->bReentranceGuard != false) goto LAB_1419fb71f;
  this->bReentranceGuard = true;
  if ((this->Packet).ThreadType == Other) {
    lVar14 = (longlong)(int)UE::Stats::FStats::GameThreadStatsFrame;
    if ((int)UE::Stats::FStats::GameThreadStatsFrame <= this->CurrentGameFrame) goto LAB_1419fb42f;
    this->CurrentGameFrame = (int)UE::Stats::FStats::GameThreadStatsFrame;
    (this->Packet).Frame = lVar14;
LAB_1419fb43e:
    if (((this->ScopeCount == 0) || (param_2)) && ((this->Packet).StatMessages.NumElements != 0)) {
      pTVar1 = &(this->Packet).StatMessagesPresize;
      if (9 < (this->Packet).StatMessagesPresize.ArrayNum) {
        pFVar3 = (pTVar1->AllocatorInstance).Data;
        iVar12 = (this->Packet).StatMessagesPresize.ArrayNum + -1;
        if (iVar12 != 0) {
          memmove(pFVar3,pFVar3 + 4,(longlong)iVar12 << 2);
        }
        piVar2 = &(this->Packet).StatMessagesPresize.ArrayNum;
        *piVar2 = *piVar2 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&pTVar1->AllocatorInstance,(this->Packet).StatMessagesPresize.ArrayNum,
                   &(this->Packet).StatMessagesPresize.ArrayMax);
      }
      iVar12 = (this->Packet).StatMessages.NumElements;
      if (iVar12 < 0x40000) {
        pFVar3 = (pTVar1->AllocatorInstance).Data;
        local_38[0] = iVar12;
        if ((pFVar3 <= (FScriptContainerElement *)local_38) &&
           ((FScriptContainerElement *)local_38 <
            pFVar3 + (longlong)(this->Packet).StatMessagesPresize.ArrayMax * 4)) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar11) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar12 = (this->Packet).StatMessagesPresize.ArrayNum;
        piVar2 = &(this->Packet).StatMessagesPresize.ArrayMax;
        if (iVar12 == *piVar2) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar1->AllocatorInstance,piVar2);
          (this->Packet).StatMessagesPresize.ArrayNum = iVar12;
        }
        (this->Packet).StatMessagesPresize.ArrayNum = iVar12 + 1;
        *(int *)((pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_38[0];
      }
      else if (5 < (byte)LogStats._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStats);
      }
      pFVar15 = ::operator_new(0x40);
      if (pFVar15 == (FStatPacket *)0x0) {
        pFVar15 = (FStatPacket *)0x0;
      }
      else {
        pFVar15 = FStatPacket::FStatPacket(pFVar15,&this->Packet);
      }
      iVar12 = (this->Packet).StatMessages.Chunks.Array.ArrayNum;
      iVar5 = (this->Packet).StatMessages.Chunks.Array.ArrayMax;
      pFVar3 = (pFVar15->StatMessages).Chunks.Array.AllocatorInstance.Data;
      iVar7 = (pFVar15->StatMessages).Chunks.Array.ArrayNum;
      iVar8 = (pFVar15->StatMessages).Chunks.Array.ArrayMax;
      iVar9 = (pFVar15->StatMessages).NumElements;
      uVar10 = *(undefined4 *)&(pFVar15->StatMessages).field_0x14;
      (pFVar15->StatMessages).Chunks.Array.AllocatorInstance.Data =
           (this->Packet).StatMessages.Chunks.Array.AllocatorInstance.Data;
      (pFVar15->StatMessages).Chunks.Array.ArrayNum = iVar12;
      (pFVar15->StatMessages).Chunks.Array.ArrayMax = iVar5;
      uVar6 = *(undefined4 *)&(this->Packet).StatMessages.field_0x14;
      (pFVar15->StatMessages).NumElements = (this->Packet).StatMessages.NumElements;
      *(undefined4 *)&(pFVar15->StatMessages).field_0x14 = uVar6;
      (this->Packet).StatMessages.Chunks.Array.AllocatorInstance.Data = pFVar3;
      (this->Packet).StatMessages.Chunks.Array.ArrayNum = iVar7;
      (this->Packet).StatMessages.Chunks.Array.ArrayMax = iVar8;
      (this->Packet).StatMessages.NumElements = iVar9;
      *(undefined4 *)&(this->Packet).StatMessages.field_0x14 = uVar10;
      pFVar15->bBrokenCallstacks = param_1;
      if ((this->Packet).StatMessages.NumElements != 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Packet.StatMessages.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsSystemTypes.cpp"
                            ,0x474,L"");
        if (bVar11) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (0 < (this->Packet).StatMessagesPresize.ArrayNum) {
        uVar16 = 0;
        lVar14 = 0;
        iVar12 = *(int *)(this->Packet).StatMessagesPresize.AllocatorInstance.Data;
        do {
          uVar13 = 0;
          if ((int)uVar16 < (this->Packet).StatMessagesPresize.ArrayNum) {
            uVar13 = ~uVar16 >> 0x1f;
          }
          if (uVar13 == 0) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar11) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          if (iVar12 < *(int *)((this->Packet).StatMessagesPresize.AllocatorInstance.Data + lVar14))
          {
            uVar13 = 0;
            if ((int)uVar16 < (this->Packet).StatMessagesPresize.ArrayNum) {
              uVar13 = ~uVar16 >> 0x1f;
            }
            if (uVar13 == 0) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar11) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            iVar12 = *(int *)((this->Packet).StatMessagesPresize.AllocatorInstance.Data + lVar14);
          }
          uVar16 = uVar16 + 1;
          lVar14 = lVar14 + 4;
        } while ((int)uVar16 < (this->Packet).StatMessagesPresize.ArrayNum);
        TIndirectArray<TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
        ::Empty(&(this->Packet).StatMessages.Chunks,
                (int)((iVar12 + 0xfff >> 0x1f & 0xfffU) + iVar12 + 0xfff) >> 0xc);
        (this->Packet).StatMessages.NumElements = 0;
      }
      SendMessage_Async(this,pFVar15);
      if (((this->Packet).ThreadType != Other) && (this->bSawExplicitFlush != false)) {
        this->ScopeCount = this->ScopeCount + 1;
        this->bSawExplicitFlush = false;
        this->bWaitForExplicitFlush = 1;
      }
    }
  }
  else {
LAB_1419fb42f:
    if ((param_2) || (this->bSawExplicitFlush != false)) goto LAB_1419fb43e;
  }
  this->bReentranceGuard = false;
LAB_1419fb71f:
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// GetThreadStats @ 141a045b0

FThreadStats * __cdecl FThreadStats::GetThreadStats(void)

{
  atomic<void_*> this;
  uint uVar1;
  FThreadStats *pFVar2;
  FLockFreePointerListLIFORoot<0,1> *this_00;
  FLLMScope local_res8 [2];
  FMemScope local_res10 [3];
  
  pFVar2 = TlsGetValue(TlsSlot);
  if (pFVar2 != (FThreadStats *)0x0) {
    return pFVar2;
  }
  this_00 = (FLockFreePointerListLIFORoot<0,1> *)FThreadStatsPool::Get();
  FLLMScope::FLLMScope(local_res8,Stats,false,None,Default,true);
  FMemScope::FMemScope(local_res10,Stats,true);
  uVar1 = FLockFreePointerListLIFORoot<0,1>::Pop(this_00);
  if (uVar1 != 0) {
    this = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar1 >> 0xe][uVar1 & 0x3fff].Payload;
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar1);
    if (this != (atomic<void_*>)0x0) {
      pFVar2 = FThreadStats((FThreadStats *)this,Invalid);
      goto LAB_141a0466a;
    }
  }
  pFVar2 = ::operator_new(0x58);
  if (pFVar2 == (FThreadStats *)0x0) {
    pFVar2 = (FThreadStats *)0x0;
  }
  else {
    pFVar2 = FThreadStats(pFVar2,Invalid);
  }
LAB_141a0466a:
  FMemScope::~FMemScope(local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return pFVar2;
}

// SendMessage_Async @ 141a1d5f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FThreadStats::SendMessage_Async(FThreadStats *this,FStatPacket *param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  code *pcVar3;
  bool bVar4;
  FTaskBase *pFVar5;
  FTask *pFVar6;
  FTaskBase *this_00;
  undefined ***pppuVar7;
  undefined8 uVar8;
  EExtendedTaskPriority local_res18 [8];
  ETaskPriority local_res20 [8];
  code *local_48;
  undefined **local_38;
  FStatPacket *pFStack_30;
  FPipe *local_28;
  undefined ***local_20;
  
  bVar4 = FGenericPlatformProcess::SupportsMultithreading();
  if (bVar4) {
    pFVar5 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
             ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                         *)&UE::Tasks::Private::SmallTaskAllocator);
    if (pFVar5 == (FTaskBase *)0x0) {
      pFVar5 = (FTaskBase *)0x0;
    }
    else {
      UE::Tasks::Private::FTaskBase::FTaskBase(pFVar5,2,true);
      pFVar5->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTaskBase<`FThreadStats::SendMessage_Async'::`5'::<lambda_1>,void,void>::
            _vftable_;
      if (((*(ulonglong *)&(pFVar5->LowLevelTask).field_0x38 & 0x20) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsCompleted()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                             ,0x1dd,L"State: %d"), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (**(code **)(*(longlong *)&(pFVar5->LowLevelTask).field_0x28 + 0x18))
                (&(pFVar5->LowLevelTask).field_0x28,&pFVar5->LowLevelTask);
      *(FTaskBase **)&pFVar5->LowLevelTask = pFVar5;
      *(undefined ***)&(pFVar5->LowLevelTask).field_0x28 =
           &
           ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
      ;
      *(FTaskBase **)&(pFVar5->LowLevelTask).field_0x8 = pFVar5;
      pFVar6 = LowLevelTasks::FTask::GetActiveTask();
      if (pFVar6 == (FTask *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined8 *)&pFVar6->field_0x30;
      }
      *(undefined8 *)&(pFVar5->LowLevelTask).field_0x30 = uVar8;
      *(undefined8 *)&(pFVar5->LowLevelTask).field_0x38 = 0xc80000541b531c00;
      pFVar5->ExtendedPriority = None;
      UE::FInheritedContextBase::CaptureInheritedContext
                ((FInheritedContextBase *)&pFVar5->_padding_);
      pFVar5[1]._padding_ = (longlong)param_1;
      pFVar5->_padding_ =
           (longlong)
           &UE::Tasks::Private::TExecutableTask<`FThreadStats::SendMessage_Async'::`5'::<lambda_1>_>
            ::_vftable_;
    }
    LOCK();
    GStatsPipe.TaskCount = (atomic<unsigned___int64>)((longlong)GStatsPipe.TaskCount + 1);
    UNLOCK();
    LOCK();
    pFVar5->NumLocks = (atomic<unsigned_int>)((int)pFVar5->NumLocks + 1);
    UNLOCK();
    pFVar5->Pipe = &GStatsPipe;
    UE::Tasks::Private::FTaskBase::TryLaunch(pFVar5,0x100);
    LOCK();
    paVar1 = &pFVar5->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar5->_padding_)(pFVar5,1);
    }
  }
  else {
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FThreadStats::SendMessage_Async'::`7'::<lambda_2>,1,0>::
                _vftable_;
    pFVar5 = (FTaskBase *)0x0;
    local_20 = (undefined ***)0x0;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`FThreadStats::SendMessage_Async'::__l7::<lambda_2>,void>::Call;
    pFStack_30 = param_1;
    this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
    if (this_00 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)this_00,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      this_00->_padding_ = (longlong)&___7__TGraphTask_V__TFunctionGraphTaskImpl___A6AXXZ_0A_____6B_
      ;
      pFVar5 = this_00;
    }
    pFVar5[1]._padding_ = (longlong)&TStatId::TStatId_NAME_None;
    pFVar5[1]._padding_ =
         (longlong)
         UE::Core::Private::Function::
         TFunctionRefCaller<`FThreadStats::SendMessage_Async'::__l7::<lambda_2>,void>::Call;
    *(undefined ****)&pFVar5[1].StateChangeEvent = local_20;
    pFVar5[1]._padding_ = (longlong)local_38;
    *(FStatPacket **)&pFVar5[1].RefCount = pFStack_30;
    pFVar5[1].Pipe = local_28;
    if (pFVar5[1]._padding_ != 0) {
      local_48 = (code *)0x0;
    }
    pFVar5[1].ExecutingThreadId = (atomic<unsigned_int>)0x1;
    UE::Tasks::Private::TranslatePriority(GameThread,local_res20,local_res18);
    UE::Tasks::Private::FTaskBase::Init(pFVar5,L"GraphTask",local_res20[0],local_res18[0],None);
    if (pFVar5 != (FTaskBase *)0x0) {
      LOCK();
      pFVar5->RefCount = (atomic<unsigned_int>)((int)pFVar5->RefCount + 1);
      UNLOCK();
    }
    UE::Tasks::Private::FTaskBase::TryLaunch(pFVar5,0x130);
    if (local_48 != (code *)0x0) {
      pppuVar7 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar7 = local_20;
      }
      (*(code *)(*pppuVar7)[2])();
    }
    if (pFVar5 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &pFVar5->RefCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar5->_padding_)(pFVar5,1);
        return;
      }
    }
  }
  return;
}

// StartThread @ 141a21b60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FThreadStats::StartThread(void)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  DWORD DVar4;
  FNameEntryId FVar5;
  FStartupMessages *this;
  undefined4 extraout_var;
  undefined1 local_res8 [8];
  uint local_res10;
  undefined4 uStackX_14;
  LARGE_INTEGER local_res18;
  
  LOCK();
  PrimaryEnableUpdateNumber.Counter = PrimaryEnableUpdateNumber.Counter + 1;
  UNLOCK();
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsSystemTypes.cpp"
                       ,0x503,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (TlsSlot != 0xffffffff) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsThreadingReady()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsSystemTypes.cpp"
                       ,0x504,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FThreadStatsPool::Get();
  FStatsThreadState::GetLocalState();
  if (TlsSlot == 0xffffffff) {
    TlsSlot = TlsAlloc();
    if (TlsSlot == 0xffffffff) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FPlatformTLS::IsValidTlsSlot(TlsSlot)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsSystemTypes.cpp"
                         ,0x50c,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (TlsSlot == 0xffffffff) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsThreadingReady()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsSystemTypes.cpp"
                         ,0x50f,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if (bPrimaryDisableForever == false) {
    if (PRIVATE_GIsRunningCommandlet != false) {
      bVar3 = UE::Stats::FStats::EnabledForCommandlet();
      if (!bVar3) goto LAB_141a21c81;
    }
    if ((TlsSlot != 0xffffffff) && (PrimaryEnableCounter.Counter != 0)) {
      bVar3 = true;
      goto LAB_141a21c83;
    }
  }
LAB_141a21c81:
  bVar3 = false;
LAB_141a21c83:
  if (bPrimaryEnable != bVar3) {
    LOCK();
    UNLOCK();
    LOCK();
    UNLOCK();
    LOCK();
    PrimaryEnableUpdateNumber.Counter = PrimaryEnableUpdateNumber.Counter + 2;
    UNLOCK();
    LOCK();
    UNLOCK();
    bPrimaryEnable = bVar3;
  }
  if (bPrimaryDisableForever == false) {
    ExplicitFlush(false);
  }
  this = FStartupMessages::Get();
  DVar4 = GetCurrentThreadId();
  FVar5 = FNameEntryId::FromValidEName((EName)local_res8);
  uStackX_14 = 0;
  local_res10 = *(uint *)CONCAT44(extraout_var,FVar5.Value);
  FVar2.Number = 0;
  FVar2.ComparisonIndex.Value = local_res10;
  FStartupMessages::AddThreadMetadata(this,FVar2,DVar4);
  CheckForCollectingStartupStats();
  if (4 < (byte)LogStats._0_1_) {
    QueryPerformanceCounter(&local_res18);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStats);
  }
  return;
}

// StopThread @ 141a24790

void __cdecl FThreadStats::StopThread(void)

{
  undefined1 *puVar1;
  atomic<unsigned_int> *paVar2;
  int iVar3;
  atomic<unsigned_int> aVar4;
  FBaseGraphTask *pFVar5;
  FTaskBase *pFVar6;
  bool bVar7;
  FLastFrameBarrier *pFVar8;
  FLastFrameBarrier local_18;
  
  if (TlsSlot != 0xffffffff) {
    bVar7 = UE::Stats::FStats::HasLoadTimeStatsForCommandletToken();
    if (bVar7) {
      UE::Stats::DirectStatsCommand(L"stat dumpsum -stop -ms=100",true,(FOutputDevice *)0x0);
    }
    UE::Stats::DirectStatsCommand(L"stat stopfile",true,(FOutputDevice *)0x0);
    bPrimaryDisableForever = true;
    CheckEnable();
    WaitForStats();
  }
  do {
  } while (GStatsPipe.TaskCount != (atomic<unsigned___int64>)0x0);
  pFVar8 = LastFrameBarriers;
  do {
    pFVar5 = (pFVar8->Event).Reference;
    if (pFVar5 != (FBaseGraphTask *)0x0) {
      (pFVar8->Event).Reference = (FBaseGraphTask *)0x0;
      LOCK();
      puVar1 = &pFVar5->field_0x30;
      iVar3 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
      }
    }
    if (pFVar8 != &local_18) {
      pFVar6 = (pFVar8->Barrier).Pimpl.Reference;
      (pFVar8->Barrier).Pimpl.Reference = (FTaskBase *)0x0;
      if (pFVar6 != (FTaskBase *)0x0) {
        LOCK();
        paVar2 = &pFVar6->RefCount;
        aVar4 = *paVar2;
        *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar4 == (atomic<unsigned_int>)0x1) {
          (**(code **)pFVar6->_padding_)(pFVar6,1);
        }
      }
    }
    pFVar8 = pFVar8 + 1;
  } while ((FStatsThread *)pFVar8 !=
           &`public:_static_class_FStatsThread&___ptr64___cdecl_FStatsThread::Get(void)'::__l2::
            Singleton);
  return;
}

// WaitForStats @ 141a2f840

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FThreadStats::WaitForStats(void)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_public:_static_void___cdecl_FThreadStats::WaitForStats(void)_::_16_::FStat_STAT_WaitForStats>
  FVar8;
  FThreadStats *this;
  FColor_u_0 FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  FColor_u_0 local_res8;
  uint uStackX_c;
  FColor_u_0 local_res10;
  uint local_res14;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_58;
  FName local_50;
  FStatMessage local_40 [2];
  
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsSystemTypes.cpp"
                         ,0x544,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (TlsSlot == 0xffffffff) {
    return;
  }
  if (bPrimaryDisableForever != false) {
    return;
  }
  FVar11.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_WaitForStats ==
        (FThreadSafeStaticStat<_public:_static_void___cdecl_FThreadStats::WaitForStats(void)_::_16_::FStat_STAT_WaitForStats>
         )0x0) {
      pFVar7 = ::FName::FName(&local_res20,"STAT_WaitForStats");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_WaitForStats,*pFVar7,L"WaitForStats",
                 "STATGROUP_Engine","STATCAT_Advanced",L"Engine",true,true,ST_int64,true,false,
                 MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar8 = StatPtr_STAT_WaitForStats;
  if (StatPtr_STAT_WaitForStats ==
      (FThreadSafeStaticStat<_public:_static_void___cdecl_FThreadStats::WaitForStats(void)_::_16_::FStat_STAT_WaitForStats>
       )0x0) {
    pFVar7 = ::FName::FName(&local_58,"STAT_WaitForStats");
    FVar8 = (FThreadSafeStaticStat<_public:_static_void___cdecl_FThreadStats::WaitForStats(void)_::_16_::FStat_STAT_WaitForStats>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_WaitForStats,*pFVar7,
                         L"WaitForStats","STATGROUP_Engine","STATCAT_Advanced",L"Engine",true,true,
                         ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar8;
  bVar5 = false;
  bVar4 = false;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  FVar9.Bits = (uint)FVar10.ComparisonIndex.Value;
  uVar6 = FVar10.Number;
  if ((FVar9.Bits != 0) || (uVar6 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar5 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.Bits = FVar9.Bits;
        local_res14 = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10._s_0,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsSystemTypes.cpp"
                   ,0x549);
        bVar5 = true;
        bVar4 = true;
      }
    }
    if (bPrimaryEnable != false) {
      local_res8.Bits = FVar9.Bits;
      uStackX_c = uVar6;
      local_50 = FVar10;
      AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = local_50.ComparisonIndex.Value;
      goto LAB_141a2fa1a;
    }
  }
  bVar3 = false;
  FVar10 = local_50;
LAB_141a2fa1a:
  uVar6 = CurrentEventIndex + 3U & 0x80000003;
  if ((int)uVar6 < 0) {
    uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
  }
  FLastFrameBarrier::Wait(LastFrameBarriers + (int)uVar6);
  CurrentEventIndex = CurrentEventIndex + 1;
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar10 != (FName)0x0)) && (bPrimaryDisableForever == false)) &&
     ((TlsSlot != 0xffffffff &&
      (this = GetThreadStats(), this->bWaitForExplicitFlush < this->ScopeCount)))) {
    local_40[0].NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
    local_40[0].NameAndInfo.Index.Value = FVar11.Value;
    QueryPerformanceCounter(&local_res18);
    local_40[0].StatData.Pad[4] = '\0';
    local_40[0].StatData.Pad[5] = '\0';
    local_40[0].StatData.Pad[6] = '\0';
    local_40[0].StatData.Pad[7] = '\0';
    local_40[0].StatData.Pad[0] = local_res18.s.LowPart._0_1_;
    local_40[0].StatData.Pad[1] = local_res18.s.LowPart._1_1_;
    local_40[0].StatData.Pad[2] = local_res18.s.LowPart._2_1_;
    local_40[0].StatData.Pad[3] = local_res18.s.LowPart._3_1_;
    AddStatMessage(this,local_40);
    piVar1 = &this->ScopeCount;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      Flush(this,false,false);
    }
    else if (bIsRawStatsActive != false) {
      FlushRawStats(this,false,false);
    }
  }
  DebugLeakTest();
  return;
}

