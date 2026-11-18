// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// AdvanceFrame @ 1419deb20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Stats::FStats::AdvanceFrame
          (bool param_1,
          TDelegate<void___cdecl(bool,__int64,int),FDefaultDelegateUserPolicy> *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  TAtomic<int> TVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  bool bVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_SecondsPerCycle> FVar16;
  FThreadStats *pFVar17;
  FName FVar18;
  longlong lVar19;
  FStatPacket *pFVar20;
  FName FVar21;
  FNameEntryId FVar22;
  uint uVar23;
  uchar auVar24 [8];
  FName FVar25;
  FName FVar26;
  bool bVar27;
  FLLMScope local_res18 [2];
  FLLMScope local_res20 [2];
  int local_128;
  int local_124;
  int local_120;
  FLLMScope local_11c;
  FName local_118;
  FLLMScope local_110 [2];
  uchar local_108 [8];
  FMemScope local_100;
  FMemScope local_f8;
  FMemScope local_f0;
  FName local_e8;
  FMemScope local_e0;
  FStatMessage local_d8;
  FStatMessage local_c8;
  FStatMessage local_b8;
  FStatMessage local_a8;
  FName local_98;
  FReadAccessScope local_90;
  FReadAccessScope local_78 [2];
  
  bVar27 = -1 < CpuChannel->Enabled;
  if (bVar27) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId61,"FStats::AdvanceFrame",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsSystem.cpp"
               ,0x3d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId61);
  }
  FLLMScope::FLLMScope(local_110,Stats,false,None,Default,true);
  FMemScope::FMemScope(&local_e0,Stats,true);
  bVar11 = IsInGameThread();
  if ((!bVar11) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsSystem.cpp"
                          ,0x3f,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  LOCK();
  TVar5 = (TAtomic<int>)((int)GameThreadStatsFrame + 1);
  UNLOCK();
  auVar24 = (uchar  [8])(longlong)((int)GameThreadStatsFrame + 1);
  if (param_1) {
    LOCK();
    FThreadStats::PrimaryEnableUpdateNumber.Counter =
         FThreadStats::PrimaryEnableUpdateNumber.Counter + 1;
    UNLOCK();
  }
  if ((PrimaryDisableChangeTagStartFrame == -1) &&
     (PrimaryDisableChangeTagStartFrame = FThreadStats::PrimaryEnableUpdateNumber.Counter,
     FThreadStats::PrimaryDisableChangeTagLock.Counter != 0)) {
    LOCK();
    PrimaryDisableChangeTagStartFrame = FThreadStats::PrimaryEnableUpdateNumber.Counter + 1;
    UNLOCK();
    FThreadStats::PrimaryEnableUpdateNumber.Counter = PrimaryDisableChangeTagStartFrame;
  }
  if (FThreadStats::bPrimaryEnable == false) {
LAB_1419dec82:
    auVar24 = (uchar  [8])-(longlong)auVar24;
  }
  else {
    if (FThreadStats::PrimaryDisableChangeTagLock.Counter != 0) {
      LOCK();
      FThreadStats::PrimaryEnableUpdateNumber.Counter =
           FThreadStats::PrimaryEnableUpdateNumber.Counter + 1;
      UNLOCK();
    }
    if (PrimaryDisableChangeTagStartFrame != FThreadStats::PrimaryEnableUpdateNumber.Counter)
    goto LAB_1419dec82;
  }
  FVar21.ComparisonIndex.Value = 0;
  FVar21.Number = 0;
  GameThreadStatsFrame = TVar5;
  local_108 = auVar24;
  if (FThreadStats::bPrimaryEnable != false) {
    FVar16 = StatPtr_STAT_SecondsPerCycle;
    if (StatPtr_STAT_SecondsPerCycle == (FThreadSafeStaticStat<FStat_STAT_SecondsPerCycle>)0x0) {
      pFVar15 = ::FName::FName(&local_98,"STAT_SecondsPerCycle");
      FVar16 = (FThreadSafeStaticStat<FStat_STAT_SecondsPerCycle>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SecondsPerCycle,*pFVar15,
                          L"Seconds Per Cycle","STATGROUP_Engine","STATCAT_Advanced",L"Engine",true,
                          true,NumBits,false,false,MCR_Invalid);
    }
    dVar10 = FGenericPlatformTime::SecondsPerCycle;
    FVar18 = *(FName *)FVar16;
    local_118 = FVar18;
    if (((FVar18 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar17 = FThreadStats::GetThreadStats();
      local_d8.StatData.Pad = (uchar  [8])dVar10;
      local_d8.NameAndInfo.Number = FVar18.Number & 0xffff8fff | 0x8000;
      local_e8 = FVar18;
      local_d8.NameAndInfo.Index.Value = FVar18.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar17,&local_d8);
      FStatsTrace::Set(&local_e8,dVar10);
      if (pFVar17->ScopeCount == 0) {
        if (FThreadStats::bPrimaryDisableForever == false) {
          if (FThreadStats::bIsRawStatsActive != false) goto LAB_1419df119;
          FLLMScope::FLLMScope(local_res18,Stats,false,None,Default,true);
          FMemScope::FMemScope(&local_100,Stats,true);
          if (pFVar17->bReentranceGuard == false) {
            pFVar17->bReentranceGuard = true;
            if (((pFVar17->Packet).ThreadType == Other) &&
               (lVar19 = (longlong)(int)GameThreadStatsFrame,
               pFVar17->CurrentGameFrame < (int)GameThreadStatsFrame)) {
              pFVar17->CurrentGameFrame = (int)GameThreadStatsFrame;
              (pFVar17->Packet).Frame = lVar19;
LAB_1419dee4a:
              if ((pFVar17->ScopeCount == 0) && ((pFVar17->Packet).StatMessages.NumElements != 0)) {
                if (9 < (pFVar17->Packet).StatMessagesPresize.ArrayNum) {
                  pFVar3 = (pFVar17->Packet).StatMessagesPresize.AllocatorInstance.Data;
                  iVar13 = (pFVar17->Packet).StatMessagesPresize.ArrayNum + -1;
                  if (iVar13 != 0) {
                    memmove(pFVar3,pFVar3 + 4,(longlong)iVar13 << 2);
                  }
                  piVar1 = &(pFVar17->Packet).StatMessagesPresize.ArrayNum;
                  *piVar1 = *piVar1 + -1;
                  Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,&(pFVar17->Packet).StatMessagesPresize.AllocatorInstance,
                             (pFVar17->Packet).StatMessagesPresize.ArrayNum,
                             &(pFVar17->Packet).StatMessagesPresize.ArrayMax);
                }
                iVar13 = (pFVar17->Packet).StatMessages.NumElements;
                if (iVar13 < 0x40000) {
                  pFVar3 = (pFVar17->Packet).StatMessagesPresize.AllocatorInstance.Data;
                  local_128 = iVar13;
                  if (((pFVar3 <= (FScriptContainerElement *)&local_128) &&
                      ((FScriptContainerElement *)&local_128 <
                       pFVar3 + (longlong)(pFVar17->Packet).StatMessagesPresize.ArrayMax * 4)) &&
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
                  iVar13 = (pFVar17->Packet).StatMessagesPresize.ArrayNum;
                  piVar1 = &(pFVar17->Packet).StatMessagesPresize.ArrayMax;
                  if (iVar13 == *piVar1) {
                    iVar13 = Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&(pFVar17->Packet).StatMessagesPresize.
                                               AllocatorInstance,piVar1);
                  }
                  (pFVar17->Packet).StatMessagesPresize.ArrayNum = iVar13 + 1;
                  *(int *)((pFVar17->Packet).StatMessagesPresize.AllocatorInstance.Data +
                          (longlong)iVar13 * 4) = local_128;
                }
                else if (5 < (byte)LogStats._0_1_) {
                  Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStats);
                }
                pFVar20 = ::operator_new(0x40);
                FVar18 = FVar21;
                if (pFVar20 != (FStatPacket *)0x0) {
                  FVar18 = (FName)FStatPacket::FStatPacket(pFVar20,&pFVar17->Packet);
                }
                lVar6 = *(longlong *)&(pFVar17->Packet).StatMessages.Chunks.Array.ArrayNum;
                pFVar3 = (((TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_> *)
                          ((longlong)FVar18 + 0x18))->Chunks).Array.AllocatorInstance.Data;
                lVar7 = *(longlong *)((longlong)FVar18 + 0x20);
                lVar19 = *(longlong *)((longlong)FVar18 + 0x28);
                (((TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_> *)
                 ((longlong)FVar18 + 0x18))->Chunks).Array.AllocatorInstance.Data =
                     (pFVar17->Packet).StatMessages.Chunks.Array.AllocatorInstance.Data;
                *(longlong *)((longlong)FVar18 + 0x20) = lVar6;
                *(longlong *)((longlong)FVar18 + 0x28) =
                     *(longlong *)&(pFVar17->Packet).StatMessages.NumElements;
                (pFVar17->Packet).StatMessages.Chunks.Array.AllocatorInstance.Data = pFVar3;
                *(longlong *)&(pFVar17->Packet).StatMessages.Chunks.Array.ArrayNum = lVar7;
                *(longlong *)&(pFVar17->Packet).StatMessages.NumElements = lVar19;
                *(bool *)((longlong)FVar18 + 0x10) = false;
                local_118 = FVar18;
                if (((pFVar17->Packet).StatMessages.NumElements != 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("!Packet.StatMessages.Num()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsSystemTypes.cpp"
                                        ,0x474,L""), bVar11)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                if (0 < (pFVar17->Packet).StatMessagesPresize.ArrayNum) {
                  iVar13 = *(int *)(pFVar17->Packet).StatMessagesPresize.AllocatorInstance.Data;
                  FVar18 = FVar21;
                  FVar25 = FVar21;
                  do {
                    FVar22 = FVar18.ComparisonIndex.Value;
                    uVar23 = 0;
                    if ((int)FVar22.Value < (pFVar17->Packet).StatMessagesPresize.ArrayNum) {
                      uVar23 = ~FVar22.Value >> 0x1f;
                    }
                    if ((uVar23 == 0) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar11)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    if (iVar13 < *(int *)((pFVar17->Packet).StatMessagesPresize.AllocatorInstance.
                                          Data + (longlong)FVar25)) {
                      uVar23 = 0;
                      if ((int)FVar22.Value < (pFVar17->Packet).StatMessagesPresize.ArrayNum) {
                        uVar23 = ~FVar22.Value >> 0x1f;
                      }
                      if ((uVar23 == 0) &&
                         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar11)) {
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      iVar13 = *(int *)((pFVar17->Packet).StatMessagesPresize.AllocatorInstance.Data
                                       + (longlong)FVar25);
                    }
                    FVar18.ComparisonIndex.Value = FVar22.Value + 1;
                    FVar18.Number = 0;
                    FVar25 = (FName)((longlong)FVar25 + 4);
                  } while ((int)FVar18.ComparisonIndex.Value <
                           (pFVar17->Packet).StatMessagesPresize.ArrayNum);
                  TIndirectArray<TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
                  ::Empty(&(pFVar17->Packet).StatMessages.Chunks,
                          (int)((iVar13 + 0xfff >> 0x1f & 0xfffU) + iVar13 + 0xfff) >> 0xc);
                  (pFVar17->Packet).StatMessages.NumElements = 0;
                  auVar24 = local_108;
                }
                FThreadStats::SendMessage_Async(pFVar17,(FStatPacket *)local_118);
                if (((pFVar17->Packet).ThreadType != Other) && (pFVar17->bSawExplicitFlush != false)
                   ) {
                  pFVar17->ScopeCount = pFVar17->ScopeCount + 1;
                  pFVar17->bSawExplicitFlush = false;
                  pFVar17->bWaitForExplicitFlush = 1;
                }
              }
            }
            else if (pFVar17->bSawExplicitFlush != false) goto LAB_1419dee4a;
            pFVar17->bReentranceGuard = false;
          }
          FMemScope::~FMemScope(&local_100);
          FLLMScope::~FLLMScope(local_res18);
        }
        else {
          TIndirectArray<TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
          ::Empty(&(pFVar17->Packet).StatMessages.Chunks,0);
          (pFVar17->Packet).StatMessages.NumElements = 0;
        }
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
LAB_1419df119:
        FThreadStats::FlushRawStats(pFVar17,false,false);
      }
    }
  }
  iVar13 = FStatConstants::AdvanceFrame.Number;
  FVar22.Value = FStatConstants::AdvanceFrame.Index.Value;
  if (((CONCAT44(FStatConstants::AdvanceFrame.Number,FStatConstants::AdvanceFrame.Index.Value) != 0)
      && (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff))
  {
    pFVar17 = FThreadStats::GetThreadStats();
    local_c8.NameAndInfo.Index.Value = FVar22.Value;
    local_c8.NameAndInfo.Number = iVar13 & 0xffff2fffU | 0x2000;
    local_c8.StatData.Pad = auVar24;
    FThreadStats::AddStatMessage(pFVar17,&local_c8);
    if (pFVar17->ScopeCount == 0) {
      FThreadStats::Flush(pFVar17,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar17,false,false);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_90);
  if (((*(int *)&param_2->field_0x10 != 0) && (*(longlong **)&param_2->field_0x8 != (longlong *)0x0)
      ) && (cVar12 = (**(code **)(**(longlong **)&param_2->field_0x8 + 0x38))(), cVar12 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_90);
    iVar13 = PrimaryDisableChangeTagStartFrame;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,local_78);
    if (*(int *)&param_2->field_0x10 != 0) {
      FVar21.ComparisonIndex.Value = *(uint *)&param_2->field_0x8;
      FVar21.Number = *(uint *)&param_2->field_0xc;
    }
    (**(code **)(*(longlong *)FVar21 + 0x60))(FVar21,param_1,auVar24,iVar13);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_78);
    goto LAB_1419dfa05;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_90);
  iVar13 = FStatConstants::AdvanceFrame.Number;
  FVar22 = FStatConstants::AdvanceFrame.Index;
  if (((CONCAT44(FStatConstants::AdvanceFrame.Number,FStatConstants::AdvanceFrame.Index.Value) != 0)
      && (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff))
  {
    pFVar17 = FThreadStats::GetThreadStats();
    local_b8.NameAndInfo.Index.Value = FVar22.Value;
    local_b8.NameAndInfo.Number = iVar13 & 0xffff3fffU | 0x3000;
    local_b8.StatData.Pad = auVar24;
    FThreadStats::AddStatMessage(pFVar17,&local_b8);
    if (pFVar17->ScopeCount == 0) {
      if (FThreadStats::bPrimaryDisableForever == false) {
        if (FThreadStats::bIsRawStatsActive != false) goto LAB_1419df60a;
        FLLMScope::FLLMScope(local_res20,Stats,false,None,Default,true);
        FMemScope::FMemScope(&local_f8,Stats,true);
        if (pFVar17->bReentranceGuard == false) {
          pFVar17->bReentranceGuard = true;
          if (((pFVar17->Packet).ThreadType == Other) &&
             (lVar19 = (longlong)(int)GameThreadStatsFrame,
             pFVar17->CurrentGameFrame < (int)GameThreadStatsFrame)) {
            pFVar17->CurrentGameFrame = (int)GameThreadStatsFrame;
            (pFVar17->Packet).Frame = lVar19;
LAB_1419df325:
            if ((pFVar17->ScopeCount == 0) && ((pFVar17->Packet).StatMessages.NumElements != 0)) {
              if (9 < (pFVar17->Packet).StatMessagesPresize.ArrayNum) {
                pFVar3 = (pFVar17->Packet).StatMessagesPresize.AllocatorInstance.Data;
                iVar13 = (pFVar17->Packet).StatMessagesPresize.ArrayNum + -1;
                if (iVar13 != 0) {
                  memmove(pFVar3,pFVar3 + 4,(longlong)iVar13 << 2);
                }
                piVar1 = &(pFVar17->Packet).StatMessagesPresize.ArrayNum;
                *piVar1 = *piVar1 + -1;
                Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,&(pFVar17->Packet).StatMessagesPresize.AllocatorInstance,
                           (pFVar17->Packet).StatMessagesPresize.ArrayNum,
                           &(pFVar17->Packet).StatMessagesPresize.ArrayMax);
              }
              iVar13 = (pFVar17->Packet).StatMessages.NumElements;
              if (iVar13 < 0x40000) {
                pFVar3 = (pFVar17->Packet).StatMessagesPresize.AllocatorInstance.Data;
                local_124 = iVar13;
                if (((pFVar3 <= (FScriptContainerElement *)&local_124) &&
                    ((FScriptContainerElement *)&local_124 <
                     pFVar3 + (longlong)(pFVar17->Packet).StatMessagesPresize.ArrayMax * 4)) &&
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
                iVar13 = (pFVar17->Packet).StatMessagesPresize.ArrayNum;
                piVar1 = &(pFVar17->Packet).StatMessagesPresize.ArrayMax;
                if (iVar13 == *piVar1) {
                  iVar13 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&(pFVar17->Packet).StatMessagesPresize.AllocatorInstance
                                      ,piVar1);
                }
                (pFVar17->Packet).StatMessagesPresize.ArrayNum = iVar13 + 1;
                *(int *)((pFVar17->Packet).StatMessagesPresize.AllocatorInstance.Data +
                        (longlong)iVar13 * 4) = local_124;
              }
              else if (5 < (byte)LogStats._0_1_) {
                Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStats);
              }
              pFVar20 = ::operator_new(0x40);
              FVar18 = FVar21;
              if (pFVar20 != (FStatPacket *)0x0) {
                FVar18 = (FName)FStatPacket::FStatPacket(pFVar20,&pFVar17->Packet);
              }
              uVar8 = *(undefined8 *)&(pFVar17->Packet).StatMessages.Chunks.Array.ArrayNum;
              pFVar3 = (((TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_> *)
                        ((longlong)FVar18 + 0x18))->Chunks).Array.AllocatorInstance.Data;
              uVar9 = *(undefined8 *)((longlong)FVar18 + 0x20);
              uVar2 = *(undefined8 *)((longlong)FVar18 + 0x28);
              (((TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_> *)
               ((longlong)FVar18 + 0x18))->Chunks).Array.AllocatorInstance.Data =
                   (pFVar17->Packet).StatMessages.Chunks.Array.AllocatorInstance.Data;
              *(undefined8 *)((longlong)FVar18 + 0x20) = uVar8;
              *(undefined8 *)((longlong)FVar18 + 0x28) =
                   *(undefined8 *)&(pFVar17->Packet).StatMessages.NumElements;
              (pFVar17->Packet).StatMessages.Chunks.Array.AllocatorInstance.Data = pFVar3;
              *(undefined8 *)&(pFVar17->Packet).StatMessages.Chunks.Array.ArrayNum = uVar9;
              *(undefined8 *)&(pFVar17->Packet).StatMessages.NumElements = uVar2;
              *(bool *)((longlong)FVar18 + 0x10) = false;
              if (((pFVar17->Packet).StatMessages.NumElements != 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!Packet.StatMessages.Num()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsSystemTypes.cpp"
                                      ,0x474,L""), bVar11)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if (0 < (pFVar17->Packet).StatMessagesPresize.ArrayNum) {
                iVar13 = *(int *)(pFVar17->Packet).StatMessagesPresize.AllocatorInstance.Data;
                FVar25 = FVar21;
                FVar26 = FVar21;
                do {
                  FVar22 = FVar25.ComparisonIndex.Value;
                  uVar23 = 0;
                  if ((int)FVar22.Value < (pFVar17->Packet).StatMessagesPresize.ArrayNum) {
                    uVar23 = ~FVar22.Value >> 0x1f;
                  }
                  if ((uVar23 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  if (iVar13 < *(int *)((pFVar17->Packet).StatMessagesPresize.AllocatorInstance.Data
                                       + (longlong)FVar26)) {
                    uVar23 = 0;
                    if ((int)FVar22.Value < (pFVar17->Packet).StatMessagesPresize.ArrayNum) {
                      uVar23 = ~FVar22.Value >> 0x1f;
                    }
                    if ((uVar23 == 0) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar11)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    iVar13 = *(int *)((pFVar17->Packet).StatMessagesPresize.AllocatorInstance.Data +
                                     (longlong)FVar26);
                  }
                  FVar25.ComparisonIndex.Value = FVar22.Value + 1;
                  FVar25.Number = 0;
                  FVar26 = (FName)((longlong)FVar26 + 4);
                } while ((int)FVar25.ComparisonIndex.Value <
                         (pFVar17->Packet).StatMessagesPresize.ArrayNum);
                TIndirectArray<TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
                ::Empty(&(pFVar17->Packet).StatMessages.Chunks,
                        (int)((iVar13 + 0xfff >> 0x1f & 0xfffU) + iVar13 + 0xfff) >> 0xc);
                (pFVar17->Packet).StatMessages.NumElements = 0;
                auVar24 = local_108;
              }
              FThreadStats::SendMessage_Async(pFVar17,(FStatPacket *)FVar18);
              if (((pFVar17->Packet).ThreadType != Other) && (pFVar17->bSawExplicitFlush != false))
              {
                pFVar17->ScopeCount = pFVar17->ScopeCount + 1;
                pFVar17->bSawExplicitFlush = false;
                pFVar17->bWaitForExplicitFlush = 1;
              }
            }
          }
          else if (pFVar17->bSawExplicitFlush != false) goto LAB_1419df325;
          pFVar17->bReentranceGuard = false;
        }
        FMemScope::~FMemScope(&local_f8);
        FLLMScope::~FLLMScope(local_res20);
      }
      else {
        TIndirectArray<TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
        ::Empty(&(pFVar17->Packet).StatMessages.Chunks,0);
        (pFVar17->Packet).StatMessages.NumElements = 0;
      }
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
LAB_1419df60a:
      FThreadStats::FlushRawStats(pFVar17,false,false);
    }
  }
  iVar13 = FStatConstants::AdvanceFrame.Number;
  FVar22.Value = FStatConstants::AdvanceFrame.Index.Value;
  if (((CONCAT44(FStatConstants::AdvanceFrame.Number,FStatConstants::AdvanceFrame.Index.Value) == 0)
      || (FThreadStats::bPrimaryDisableForever != false)) || (FThreadStats::TlsSlot == 0xffffffff))
  goto LAB_1419dfa05;
  pFVar17 = FThreadStats::GetThreadStats();
  local_a8.NameAndInfo.Index.Value = FVar22.Value;
  local_a8.NameAndInfo.Number = iVar13 & 0xffff4fffU | 0x4000;
  local_a8.StatData.Pad = auVar24;
  FThreadStats::AddStatMessage(pFVar17,&local_a8);
  if (pFVar17->ScopeCount != 0) {
    if (FThreadStats::bIsRawStatsActive == false) goto LAB_1419dfa05;
LAB_1419df9f1:
    FThreadStats::FlushRawStats(pFVar17,false,false);
    goto LAB_1419dfa05;
  }
  if (FThreadStats::bPrimaryDisableForever != false) {
    TIndirectArray<TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
    ::Empty(&(pFVar17->Packet).StatMessages.Chunks,0);
    (pFVar17->Packet).StatMessages.NumElements = 0;
    goto LAB_1419dfa05;
  }
  if (FThreadStats::bIsRawStatsActive != false) goto LAB_1419df9f1;
  FLLMScope::FLLMScope(&local_11c,Stats,false,None,Default,true);
  FMemScope::FMemScope(&local_f0,Stats,true);
  if (pFVar17->bReentranceGuard == false) {
    pFVar17->bReentranceGuard = true;
    if (((pFVar17->Packet).ThreadType == Other) &&
       (lVar19 = (longlong)(int)GameThreadStatsFrame,
       pFVar17->CurrentGameFrame < (int)GameThreadStatsFrame)) {
      pFVar17->CurrentGameFrame = (int)GameThreadStatsFrame;
      (pFVar17->Packet).Frame = lVar19;
LAB_1419df71e:
      if ((pFVar17->ScopeCount == 0) && ((pFVar17->Packet).StatMessages.NumElements != 0)) {
        if (9 < (pFVar17->Packet).StatMessagesPresize.ArrayNum) {
          pFVar3 = (pFVar17->Packet).StatMessagesPresize.AllocatorInstance.Data;
          iVar13 = (pFVar17->Packet).StatMessagesPresize.ArrayNum + -1;
          if (iVar13 != 0) {
            memmove(pFVar3,pFVar3 + 4,(longlong)iVar13 << 2);
          }
          piVar1 = &(pFVar17->Packet).StatMessagesPresize.ArrayNum;
          *piVar1 = *piVar1 + -1;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&(pFVar17->Packet).StatMessagesPresize.AllocatorInstance,
                     (pFVar17->Packet).StatMessagesPresize.ArrayNum,
                     &(pFVar17->Packet).StatMessagesPresize.ArrayMax);
        }
        iVar13 = (pFVar17->Packet).StatMessages.NumElements;
        if (iVar13 < 0x40000) {
          pFVar3 = (pFVar17->Packet).StatMessagesPresize.AllocatorInstance.Data;
          local_120 = iVar13;
          if (((pFVar3 <= (FScriptContainerElement *)&local_120) &&
              ((FScriptContainerElement *)&local_120 <
               pFVar3 + (longlong)(pFVar17->Packet).StatMessagesPresize.ArrayMax * 4)) &&
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
          iVar13 = (pFVar17->Packet).StatMessagesPresize.ArrayNum;
          piVar1 = &(pFVar17->Packet).StatMessagesPresize.ArrayMax;
          if (iVar13 == *piVar1) {
            iVar13 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&(pFVar17->Packet).StatMessagesPresize.AllocatorInstance,
                                piVar1);
          }
          (pFVar17->Packet).StatMessagesPresize.ArrayNum = iVar13 + 1;
          *(int *)((pFVar17->Packet).StatMessagesPresize.AllocatorInstance.Data +
                  (longlong)iVar13 * 4) = local_120;
        }
        else if (5 < (byte)LogStats._0_1_) {
          Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStats);
        }
        pFVar20 = ::operator_new(0x40);
        if (pFVar20 != (FStatPacket *)0x0) {
          FVar21 = (FName)FStatPacket::FStatPacket(pFVar20,&pFVar17->Packet);
        }
        uVar8 = *(undefined8 *)&(pFVar17->Packet).StatMessages.Chunks.Array.ArrayNum;
        pFVar3 = (((TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_> *)
                  ((longlong)FVar21 + 0x18))->Chunks).Array.AllocatorInstance.Data;
        uVar9 = *(undefined8 *)((longlong)FVar21 + 0x20);
        uVar2 = *(undefined8 *)((longlong)FVar21 + 0x28);
        (((TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_> *)((longlong)FVar21 + 0x18)
         )->Chunks).Array.AllocatorInstance.Data =
             (pFVar17->Packet).StatMessages.Chunks.Array.AllocatorInstance.Data;
        *(undefined8 *)((longlong)FVar21 + 0x20) = uVar8;
        *(undefined8 *)((longlong)FVar21 + 0x28) =
             *(undefined8 *)&(pFVar17->Packet).StatMessages.NumElements;
        (pFVar17->Packet).StatMessages.Chunks.Array.AllocatorInstance.Data = pFVar3;
        *(undefined8 *)&(pFVar17->Packet).StatMessages.Chunks.Array.ArrayNum = uVar9;
        *(undefined8 *)&(pFVar17->Packet).StatMessages.NumElements = uVar2;
        *(bool *)((longlong)FVar21 + 0x10) = false;
        if (((pFVar17->Packet).StatMessages.NumElements != 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("!Packet.StatMessages.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsSystemTypes.cpp"
                                ,0x474,L""), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (0 < (pFVar17->Packet).StatMessagesPresize.ArrayNum) {
          uVar23 = 0;
          lVar19 = 0;
          iVar13 = *(int *)(pFVar17->Packet).StatMessagesPresize.AllocatorInstance.Data;
          do {
            uVar14 = 0;
            if ((int)uVar23 < (pFVar17->Packet).StatMessagesPresize.ArrayNum) {
              uVar14 = ~uVar23 >> 0x1f;
            }
            if ((uVar14 == 0) &&
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
            if (iVar13 < *(int *)((pFVar17->Packet).StatMessagesPresize.AllocatorInstance.Data +
                                 lVar19)) {
              uVar14 = 0;
              if ((int)uVar23 < (pFVar17->Packet).StatMessagesPresize.ArrayNum) {
                uVar14 = ~uVar23 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar13 = *(int *)((pFVar17->Packet).StatMessagesPresize.AllocatorInstance.Data +
                               lVar19);
            }
            uVar23 = uVar23 + 1;
            lVar19 = lVar19 + 4;
          } while ((int)uVar23 < (pFVar17->Packet).StatMessagesPresize.ArrayNum);
          TIndirectArray<TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
          ::Empty(&(pFVar17->Packet).StatMessages.Chunks,
                  (int)((iVar13 + 0xfff >> 0x1f & 0xfffU) + iVar13 + 0xfff) >> 0xc);
          (pFVar17->Packet).StatMessages.NumElements = 0;
        }
        FThreadStats::SendMessage_Async(pFVar17,(FStatPacket *)FVar21);
        if (((pFVar17->Packet).ThreadType != Other) && (pFVar17->bSawExplicitFlush != false)) {
          pFVar17->ScopeCount = pFVar17->ScopeCount + 1;
          pFVar17->bSawExplicitFlush = false;
          pFVar17->bWaitForExplicitFlush = 1;
        }
      }
    }
    else if (pFVar17->bSawExplicitFlush != false) goto LAB_1419df71e;
    pFVar17->bReentranceGuard = false;
  }
  FMemScope::~FMemScope(&local_f0);
  FLLMScope::~FLLMScope(&local_11c);
LAB_1419dfa05:
  FThreadStats::ExplicitFlush(param_1);
  FThreadStats::WaitForStats();
  if (FThreadStats::PrimaryDisableChangeTagLock.Counter != 0) {
    LOCK();
    FThreadStats::PrimaryEnableUpdateNumber.Counter =
         FThreadStats::PrimaryEnableUpdateNumber.Counter + 1;
    UNLOCK();
  }
  PrimaryDisableChangeTagStartFrame = FThreadStats::PrimaryEnableUpdateNumber.Counter;
  FMemScope::~FMemScope(&local_e0);
  FLLMScope::~FLLMScope(local_110);
  if (bVar27) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// EnabledForCommandlet @ 1419f3ba0

bool __cdecl UE::Stats::FStats::EnabledForCommandlet(void)

{
  bool bVar1;
  
  if (::_TSS0 <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) {
    return bHasStatsForCommandletsToken;
  }
  _Init_thread_header(&::_TSS0);
  if (::_TSS0 != -1) {
    return bHasStatsForCommandletsToken;
  }
  bVar1 = HasLoadTimeStatsForCommandletToken();
  if (!bVar1) {
    bVar1 = HasLoadTimeFileForCommandletToken();
    bHasStatsForCommandletsToken = false;
    if (!bVar1) goto LAB_1419f3bfc;
  }
  bHasStatsForCommandletsToken = true;
LAB_1419f3bfc:
  _Init_thread_footer(&::_TSS0);
  return bHasStatsForCommandletsToken;
}

// HasLoadTimeFileForCommandletToken @ 141a061e0

bool __cdecl UE::Stats::FStats::HasLoadTimeFileForCommandletToken(void)

{
  wchar_t *pwVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pwVar1 = FCommandLine::Get();
      bHasLoadTimeFileForCommandletToken = FParse::Param(pwVar1,L"LoadTimeFileForCommandlet");
      _Init_thread_footer(&::_TSS0);
    }
  }
  return bHasLoadTimeFileForCommandletToken;
}

// HasLoadTimeStatsForCommandletToken @ 141a06260

bool __cdecl UE::Stats::FStats::HasLoadTimeStatsForCommandletToken(void)

{
  wchar_t *pwVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pwVar1 = FCommandLine::Get();
      bHasLoadTimeStatsForCommandletToken = FParse::Param(pwVar1,L"LoadTimeStatsForCommandlet");
      _Init_thread_footer(&::_TSS0);
    }
  }
  return bHasLoadTimeStatsForCommandletToken;
}

// Init @ 141a065b0

void __cdecl UE::Stats::FStats::Init(void)

{
  return;
}

// TickCommandletStats @ 141a24b30

void __cdecl UE::Stats::FStats::TickCommandletStats(void)

{
  bool bVar1;
  FTaskGraphInterface *pFVar2;
  FTSTicker *this;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  ulonglong local_28;
  FDestructionSentinel local_20;
  
  bVar1 = EnabledForCommandlet();
  if (bVar1) {
    pFVar2 = FTaskGraphInterface::Get();
    (**(code **)((longlong)*pFVar2 + 0x48))(pFVar2,1);
    this = FTSTicker::GetCoreTicker();
    FTSTicker::Tick(this,__real_3c888889);
    local_28 = 0;
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    AdvanceFrame(false,(TDelegate<void___cdecl(bool,__int64,int),FDefaultDelegateUserPolicy> *)
                       local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if (((int)local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = local_28 & 0xffffffff00000000;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return;
}

