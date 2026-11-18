// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// DoTask @ 1442bf220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::Net::Private::FReplicationPollTask::DoTask(FReplicationPollTask *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined **ppuVar4;
  bool bVar5;
  code **ppcVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined ***pppuVar9;
  uint *puVar10;
  longlong *plVar11;
  char cVar12;
  FReplicationPollTaskData *pFVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  undefined1 auStack_128 [32];
  char local_108;
  int local_104;
  uint local_100;
  uint local_fc;
  uint *local_f8;
  int local_f0 [2];
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  FNetStatsContext *local_d8;
  code *local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  FReplicationPollTask *pFStack_b0;
  FNetStatsContext *local_a8;
  longlong *local_a0;
  code *local_98 [2];
  undefined **local_88;
  FReplicationPollTask *pFStack_80;
  FNetStatsContext *local_78;
  undefined ***local_70;
  code *local_68 [2];
  undefined **local_58;
  FReplicationPollTask *pFStack_50;
  FNetStatsContext *local_48;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_fc = 0;
  if ((this->ReplicationSystemInternal->bIsInParallelPhase == false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ReplicationSystemInternal->GetIsInParallelPhase()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Polling\\ObjectPoller.cpp"
                         ,99,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (`public:_void___cdecl_UE::Net::Private::FReplicationPollTask::DoTask(void)const___ptr64'::__l2
      ::__CsvProfilerStat101 == false) {
    FCsvProfilerTrace::OutputInlineStat("ReplicationPollAndCopyTask",_GCsvCategory_Iris.Index);
    `public:_void___cdecl_UE::Net::Private::FReplicationPollTask::DoTask(void)const___ptr64'::__l2::
    __CsvProfilerStat101 = true;
  }
  uVar14 = _GCsvCategory_Iris.Index;
  local_fc = _GCsvCategory_Iris.Index;
  FCsvProfiler::BeginStat
            ("ReplicationPollAndCopyTask",_GCsvCategory_Iris.Index,"CSV_ReplicationPollAndCopyTask")
  ;
  bVar5 = CpuChannel->Enabled < 0;
  if (bVar5) {
    local_108 = '\0';
  }
  else {
    local_108 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_UE::Net::Private::FReplicationPollTask::DoTask(void)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId101,"ReplicationPollAndCopyTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Polling\\ObjectPoller.cpp"
               ,0x65);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_UE::Net::Private::FReplicationPollTask::DoTask(void)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId101);
  }
  if ((this->PollTaskData->bUsePushModel == false) || (CpuChannel->Enabled < 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_UE::Net::Private::FReplicationPollTask::DoTask(void)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId103,"PollAndCopyPushBased",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Polling\\ObjectPoller.cpp"
               ,0x67);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_UE::Net::Private::FReplicationPollTask::DoTask(void)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId103);
  }
  if ((this->PollTaskData->bUsePushModel == false) && (-1 < CpuChannel->Enabled)) {
    bVar2 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_UE::Net::Private::FReplicationPollTask::DoTask(void)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId104,"ForcePollAndCopy",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Polling\\ObjectPoller.cpp"
               ,0x68);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_UE::Net::Private::FReplicationPollTask::DoTask(void)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId104);
  }
  else {
    bVar2 = false;
  }
  local_d8 = FNetTypeStats::AcquireChildNetStatsContext(this->PollTaskData->NetTypeStats);
  bVar21 = this->PollTaskData->bUsePushModel == false;
  local_a0 = (longlong *)0x0;
  if (bVar21) {
    local_78 = local_d8;
    ppcVar6 = local_98;
    local_88 = &
               ___7__TFunction_OwnedObject_V<lambda_2>__1__DoTask_FReplicationPollTask_Private_Net_UE__QEBAXXZ__0A__0A__Function_Private_Core_UE__6B_
    ;
    ppuVar4 = local_88;
    local_c8 = Core::Private::Function::
               TFunctionRefCaller<`UE::Net::Private::FReplicationPollTask::DoTask'::__l2::<lambda_2>,void,unsigned_int>
               ::Call;
    pFStack_80 = this;
    local_88._0_4_ = 0x50bad778;
    local_98[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::Net::Private::FReplicationPollTask::DoTask'::__l2::<lambda_2>,void,unsigned_int>
                  ::Call;
    local_70 = (undefined ***)0x0;
    local_b8 = local_88._0_4_;
    local_88 = ppuVar4;
  }
  else {
    local_48 = local_d8;
    ppcVar6 = local_68;
    local_58 = &
               ___7__TFunction_OwnedObject_V<lambda_1>__1__DoTask_FReplicationPollTask_Private_Net_UE__QEBAXXZ__0A__0A__Function_Private_Core_UE__6B_
    ;
    ppuVar4 = local_58;
    local_c8 = Core::Private::Function::
               TFunctionRefCaller<`UE::Net::Private::FReplicationPollTask::DoTask'::__l2::<lambda_1>,void,unsigned_int>
               ::Call;
    pFStack_50 = this;
    local_58._0_4_ = 0x50bad758;
    local_68[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::Net::Private::FReplicationPollTask::DoTask'::__l2::<lambda_1>,void,unsigned_int>
                  ::Call;
    local_40 = (undefined ***)0x0;
    local_b8 = local_58._0_4_;
    local_58 = ppuVar4;
  }
  local_a8 = local_d8;
  uStack_b4 = 1;
  pFStack_b0 = this;
  *ppcVar6 = (code *)0x0;
  if ((bVar21) && (local_98[0] != (code *)0x0)) {
    pppuVar9 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar9 = local_70;
    }
    (*(code *)(*pppuVar9)[2])();
  }
  if ((!bVar21) && (local_68[0] != (code *)0x0)) {
    pppuVar9 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar9 = local_40;
    }
    (*(code *)(*pppuVar9)[2])();
  }
  pFVar13 = this->PollTaskData;
  uVar17 = pFVar13->BitsPerChunk * pFVar13->CurrentTaskIndex;
  cVar12 = !bVar5;
  local_100 = uVar17;
  if (uVar17 < (pFVar13->ObjectsConsideredForPolling).BitCount) {
    do {
      uVar14 = (pFVar13->ObjectsConsideredForPolling).BitCount;
      local_f8 = (pFVar13->ObjectsConsideredForPolling).Storage;
      uVar8 = (pFVar13->BitsPerChunk - 1) + uVar17;
      uVar16 = uVar14;
      if (uVar8 < uVar14) {
        uVar16 = uVar8;
      }
      local_100 = uVar17;
      if (uVar14 <= uVar17) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartBit < TotalBitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x38f,L"");
        if (bVar5) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (uVar14 <= uVar16) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("EndBit < TotalBitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x390,L"");
        if (bVar5) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      uVar14 = uVar17 >> 5;
      uVar8 = uVar16 >> 5;
      local_104 = uVar14 << 5;
      uVar15 = -1 << ((byte)uVar17 & 0x1f);
      uVar16 = 0xffffffff >> (0x1fU - (char)uVar16 & 0x1f);
      puVar10 = local_f8;
      uVar19 = uVar14;
      local_e8 = uVar8;
      local_e4 = uVar14;
      local_e0 = uVar15;
      local_dc = uVar16;
      if (uVar14 <= uVar8) {
        do {
          uVar17 = 0xffffffff;
          if (uVar19 == uVar8) {
            uVar17 = uVar16;
          }
          uVar20 = 0xffffffff;
          if (uVar19 == uVar14) {
            uVar20 = uVar15;
          }
          uVar20 = puVar10[uVar19] & uVar17 & uVar20;
          iVar18 = local_104;
          uVar17 = local_100;
          for (; local_100 = uVar17, uVar20 != 0; uVar20 = uVar20 >> 1) {
            if ((uVar20 & 1) != 0) {
              local_f0[0] = iVar18;
              Core::Private::Function::CheckCallable(local_c8);
              pcVar1 = local_c8;
              plVar11 = (longlong *)&local_b8;
              if (local_a0 != (longlong *)0x0) {
                plVar11 = local_a0;
              }
              uVar7 = (**(code **)(*plVar11 + 8))();
              (*pcVar1)(uVar7,local_f0);
            }
            iVar18 = iVar18 + 1;
            puVar10 = local_f8;
            uVar14 = local_e4;
            uVar8 = local_e8;
            uVar15 = local_e0;
            uVar16 = local_dc;
            uVar17 = local_100;
          }
          local_104 = local_104 + 0x20;
          uVar19 = uVar19 + 1;
        } while (uVar19 <= uVar8);
      }
      pFVar13 = this->PollTaskData;
      uVar17 = uVar17 + pFVar13->ChunkStride;
      uVar14 = local_fc;
      cVar12 = local_108;
      local_100 = uVar17;
    } while (uVar17 < (pFVar13->ObjectsConsideredForPolling).BitCount);
  }
  FNetTypeStats::ReleaseChildNetStatsContext(pFVar13->NetTypeStats,local_d8);
  if (local_c8 != (code *)0x0) {
    plVar11 = (longlong *)&local_b8;
    if (local_a0 != (longlong *)0x0) {
      plVar11 = local_a0;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (cVar12 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FCsvProfiler::EndStat("ReplicationPollAndCopyTask",uVar14);
  return;
}

