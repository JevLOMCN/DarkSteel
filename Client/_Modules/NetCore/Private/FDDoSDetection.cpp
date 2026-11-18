// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 8

// FDDoSDetection @ 1441d1390

FDDoSDetection * __thiscall FDDoSDetection::FDDoSDetection(FDDoSDetection *this)

{
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0xffff;
  this->HitchTimeQuotaMS = -1;
  this->HitchFrameTolerance = -1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->bDDoSDetection = false;
  this->bDDoSAnalytics = false;
  this->bHitFrameNonConnLimit = false;
  this->bHitFrameNetConnLimit = false;
  (this->DetectionSeverity).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DetectionSeverity).ArrayNum = 0;
  (this->DetectionSeverity).ArrayMax = 0;
  this->ActiveState = '\0';
  this->WorstActiveState = '\0';
  this->LastMetEscalationConditions = 0.0;
  this->bMetEscalationConditionsThisFrame = false;
  this->bDDoSLogRestrictions = false;
  this->DDoSLogSpamLimit = 0;
  this->LogHitCounter = 0;
  this->HitchFrameCount = 0;
  this->LastPerSecQuotaBegin = 0.0;
  (this->CounterPerSecHistory).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CounterPerSecHistory).ArrayNum = 0;
  (this->CounterPerSecHistory).ArrayMax = 0;
  this->LastCounterPerSecHistoryIdx = 0;
  this->StartFrameRecvTimestamp = 0.0;
  this->EndFrameRecvTimestamp = 0.0;
  this->StartFramePacketCount = 0;
  this->ExpectedFrameTime = 0.0;
  this->FrameAdjustment = 0.0;
  this->_padding_ = -1;
  this->_padding_ = -1;
  this->_padding_ = -1;
  *(undefined8 *)&(this->NotifySeverityEscalation).field_0x10 = 0;
  *(undefined8 *)&this->NotifySeverityEscalation = 0;
  *(undefined8 *)&(this->NotifySeverityEscalation).field_0x8 = 0;
  return this;
}

// CheckNonConnQuotasAndLimits @ 1441d7040

bool __thiscall FDDoSDetection::CheckNonConnQuotasAndLimits(FDDoSDetection *this)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  dVar4 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  iVar8 = (int)((dVar4 - this->StartFrameRecvTimestamp) * __real_408f400000000000);
  bVar5 = FDDoSState::HasHitQuota
                    ((FDDoSState *)((longlong)&this->_padding_ + 4),(FDDoSPacketCounters *)this,
                     iVar8);
  if (bVar5) {
    UpdateSeverity(this,true);
  }
  else if ((this->bMetEscalationConditionsThisFrame == false) && ('\0' < this->ActiveState)) {
    uVar1 = (int)this->ActiveState - 1;
    uVar7 = 0;
    if ((int)uVar1 < (this->DetectionSeverity).ArrayNum) {
      uVar7 = ~uVar1 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    bVar5 = FDDoSState::HasHitQuota
                      ((FDDoSState *)
                       ((this->DetectionSeverity).AllocatorInstance.Data +
                       (longlong)(int)uVar1 * 0x38),(FDDoSPacketCounters *)this,iVar8);
    if (bVar5) {
      this->LastMetEscalationConditions = dVar4;
      this->bMetEscalationConditionsThisFrame = true;
    }
  }
  iVar2 = (int)this->_padding_;
  if (((iVar2 != 0) && ((iVar2 < 1 || ((int)this->_padding_ - this->StartFramePacketCount < iVar2)))
      ) && ((iVar2 = *(int *)((longlong)&this->_padding_ + 4), iVar2 < 1 || (iVar8 <= iVar2)))) {
    return false;
  }
  return true;
}

// Init @ 1441dd4a0

void __thiscall FDDoSDetection::Init(FDDoSDetection *this,int param_1)

{
  double dVar1;
  
  dVar1 = (double)param_1;
  if ((double)param_1 <= 0.0) {
    dVar1 = __real_403e000000000000;
  }
  this->ExpectedFrameTime = __real_3ff0000000000000 / dVar1;
  InitConfig(this);
  return;
}

// InitConfig @ 1441dd8e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDDoSDetection::InitConfig(FDDoSDetection *this)

{
  bool *pbVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  TArray<FDDoSStateConfig,TSizedDefaultAllocator<32>_> *pTVar4;
  void *_Src;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FString *pFVar9;
  ForAnyElementType FVar10;
  char cVar11;
  short sVar12;
  uint uVar13;
  ulong64 uVar14;
  uint uVar15;
  ForAnyElementType FVar16;
  TArray<FDDoSPacketCounters,TSizedDefaultAllocator<32>_> *pTVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  int *piVar20;
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  FString local_90;
  TArray<FString,TSizedDefaultAllocator<32>_> local_80;
  FString local_70;
  FString local_60 [2];
  
  pbVar1 = &this->bDDoSDetection;
  local_res18[0] = -1;
  FConfigCacheIni::GetBool(GConfig,L"DDoSDetection",L"bDDoSDetection",pbVar1,&GEngineIni);
  FConfigCacheIni::GetBool
            (GConfig,L"DDoSDetection",L"bDDoSAnalytics",&this->bDDoSAnalytics,&GEngineIni);
  FConfigCacheIni::GetInt
            (GConfig,L"DDoSDetection",L"DDoSLogSpamLimit",&this->DDoSLogSpamLimit,&GEngineIni);
  FConfigCacheIni::GetInt
            (GConfig,L"DDoSDetection",L"HitchTimeQuotaMS",&this->HitchTimeQuotaMS,&GEngineIni);
  FConfigCacheIni::GetInt(GConfig,L"DDoSDetection",L"HitchFrameTolerance",local_res18,&GEngineIni);
  cVar11 = (char)local_res18[0];
  if ((local_res18[0] != cVar11) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar4 = &this->DetectionSeverity;
  this->HitchFrameTolerance = cVar11;
  iVar8 = 0x40;
  if (0 < this->DDoSLogSpamLimit) {
    iVar8 = this->DDoSLogSpamLimit;
  }
  this->DDoSLogSpamLimit = iVar8;
  DestructItems<FDDoSStateConfig,int>
            ((FDDoSStateConfig *)(pTVar4->AllocatorInstance).Data,(this->DetectionSeverity).ArrayNum
            );
  uVar14 = 0;
  piVar20 = &(this->DetectionSeverity).ArrayMax;
  (this->DetectionSeverity).ArrayNum = 0;
  if (*piVar20 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&pTVar4->AllocatorInstance,0,piVar20);
  }
  if (4 < (byte)LogNetCore._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetCore);
  }
  if (*pbVar1 != false) {
    local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_80.ArrayNum = 0;
    local_80.ArrayMax = 0;
    FConfigCacheIni::GetArray(GConfig,L"DDoSDetection",L"DetectionSeverity",&local_80,&GEngineIni);
    iVar8 = local_80.ArrayNum;
    pFVar18 = local_80.AllocatorInstance.Data + (longlong)local_80.ArrayNum * 0x10;
    FVar16.Data = local_80.AllocatorInstance.Data;
    while( true ) {
      piVar20 = &(this->DetectionSeverity).ArrayMax;
      uVar15 = (uint)uVar14;
      if (local_80.ArrayNum != iVar8) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (FVar16.Data == pFVar18) break;
      pFVar9 = ::FString::FString(local_60,L"DDoSDetection");
      ::FString::ConcatFC(&local_70,pFVar9,L".");
      ::FString::ConcatFF(&local_90,&local_70,(FString *)FVar16.Data);
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
      }
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_90.Data.ArrayNum != 0) {
        FVar10.Data = local_90.Data.AllocatorInstance.Data;
      }
      bVar6 = FConfigCacheIni::DoesSectionExist(GConfig,(wchar_t *)FVar10.Data,&GEngineIni);
      if (bVar6) {
        iVar7 = (this->DetectionSeverity).ArrayNum;
        if (iVar7 == *piVar20) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x838,&pTVar4->AllocatorInstance,piVar20);
        }
        (this->DetectionSeverity).ArrayNum = iVar7 + 1;
        pFVar19 = (pTVar4->AllocatorInstance).Data + (longlong)iVar7 * 0x38;
        DefaultConstructItems<FDDoSStateConfig,int>(pFVar19,1);
        pFVar2 = pFVar19 + 0x28;
        local_res20[0] = 0;
        if (pFVar2 != FVar16.Data) {
          iVar7 = *(int *)(FVar16.Data + 8);
          pFVar3 = pFVar19 + 0x34;
          _Src = *(void **)FVar16.Data;
          *(int *)(pFVar19 + 0x30) = iVar7;
          if ((iVar7 == 0) && (*(int *)pFVar3 == 0)) {
            *(int *)pFVar3 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar7,*(int *)pFVar3,(ForAnyElementType *)pFVar2,iVar7,(int *)pFVar3);
            if (iVar7 != 0) {
                    /* WARNING: Load size is inaccurate */
              memcpy(*pFVar2,_Src,(longlong)iVar7 * 2);
            }
          }
        }
        FVar10.Data = (FScriptContainerElement *)L"";
        if (local_90.Data.ArrayNum != 0) {
          FVar10.Data = local_90.Data.AllocatorInstance.Data;
        }
        FConfigCacheIni::GetBool
                  (GConfig,(wchar_t *)FVar10.Data,L"bSendEscalateAnalytics",(bool *)pFVar19,
                   &GEngineIni);
        FVar10.Data = (FScriptContainerElement *)L"";
        if (local_90.Data.ArrayNum != 0) {
          FVar10.Data = local_90.Data.AllocatorInstance.Data;
        }
        FConfigCacheIni::GetInt
                  (GConfig,(wchar_t *)FVar10.Data,L"EscalateQuotaPacketsPerSec",(int *)(pFVar19 + 4)
                   ,&GEngineIni);
        FVar10.Data = (FScriptContainerElement *)L"";
        if (local_90.Data.ArrayNum != 0) {
          FVar10.Data = local_90.Data.AllocatorInstance.Data;
        }
        FConfigCacheIni::GetInt
                  (GConfig,(wchar_t *)FVar10.Data,L"EscalateQuotaDisconnPacketsPerSec",
                   (int *)(pFVar19 + 8),&GEngineIni);
        FVar10.Data = (FScriptContainerElement *)L"";
        if (local_90.Data.ArrayNum != 0) {
          FVar10.Data = local_90.Data.AllocatorInstance.Data;
        }
        FConfigCacheIni::GetInt
                  (GConfig,(wchar_t *)FVar10.Data,L"EscalateQuotaBadPacketsPerSec",
                   (int *)(pFVar19 + 0xc),&GEngineIni);
        FVar10.Data = (FScriptContainerElement *)L"";
        if (local_90.Data.ArrayNum != 0) {
          FVar10.Data = local_90.Data.AllocatorInstance.Data;
        }
        FConfigCacheIni::GetInt
                  (GConfig,(wchar_t *)FVar10.Data,L"PacketLimitPerFrame",(int *)(pFVar19 + 0x14),
                   &GEngineIni);
        FVar10.Data = (FScriptContainerElement *)L"";
        if (local_90.Data.ArrayNum != 0) {
          FVar10.Data = local_90.Data.AllocatorInstance.Data;
        }
        FConfigCacheIni::GetInt
                  (GConfig,(wchar_t *)FVar10.Data,L"PacketTimeLimitMSPerFrame",
                   (int *)(pFVar19 + 0x18),&GEngineIni);
        FVar10.Data = (FScriptContainerElement *)L"";
        if (local_90.Data.ArrayNum != 0) {
          FVar10.Data = local_90.Data.AllocatorInstance.Data;
        }
        FConfigCacheIni::GetInt
                  (GConfig,(wchar_t *)FVar10.Data,L"NetConnPacketTimeLimitMSPerFrame",
                   (int *)(pFVar19 + 0x1c),&GEngineIni);
        FVar10.Data = (FScriptContainerElement *)L"";
        if (local_90.Data.ArrayNum != 0) {
          FVar10.Data = local_90.Data.AllocatorInstance.Data;
        }
        FConfigCacheIni::GetInt
                  (GConfig,(wchar_t *)FVar10.Data,L"CooloffTime",(int *)(pFVar19 + 0x20),&GEngineIni
                  );
        FVar10.Data = (FScriptContainerElement *)L"";
        if (local_90.Data.ArrayNum != 0) {
          FVar10.Data = local_90.Data.AllocatorInstance.Data;
        }
        bVar6 = FConfigCacheIni::GetInt
                          (GConfig,(wchar_t *)FVar10.Data,L"EscalateTimeQuotaMSPerFrame",local_res20
                           ,&GEngineIni);
        if (bVar6) {
          sVar12 = (short)local_res20[0];
          if ((local_res20[0] != sVar12) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IntFitsIn<OutType>(In)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                 ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(short *)(pFVar19 + 0x10) = sVar12;
        }
        uVar13 = *(uint *)(pFVar19 + 0x20);
        if ((int)*(uint *)(pFVar19 + 0x20) < (int)uVar15) {
          uVar13 = uVar15;
        }
        uVar14 = (ulong64)uVar13;
      }
      else if (2 < (byte)LogNetCore._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetCore);
      }
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      FVar16.Data = FVar16.Data + 0x10;
    }
    iVar8 = (this->DetectionSeverity).ArrayNum;
    if (iVar8 < 1) {
      if (2 < (byte)LogNetCore._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetCore);
      }
      *pbVar1 = false;
    }
    else {
      cVar11 = this->ActiveState;
      uVar13 = 0;
      if (cVar11 < iVar8) {
        uVar13 = (uint)~(int)cVar11 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar18 = (pTVar4->AllocatorInstance).Data + (longlong)cVar11 * 0x38;
      *(FScriptContainerElement *)((longlong)&this->_padding_ + 4) = *pFVar18;
      *(undefined4 *)&this->_padding_ = *(undefined4 *)(pFVar18 + 4);
      *(undefined4 *)((longlong)&this->_padding_ + 4) = *(undefined4 *)(pFVar18 + 8);
      *(undefined4 *)&this->_padding_ = *(undefined4 *)(pFVar18 + 0xc);
      *(undefined2 *)((longlong)&this->_padding_ + 4) = *(undefined2 *)(pFVar18 + 0x10);
      *(undefined4 *)&this->_padding_ = *(undefined4 *)(pFVar18 + 0x14);
      *(undefined4 *)((longlong)&this->_padding_ + 4) = *(undefined4 *)(pFVar18 + 0x18);
      *(undefined4 *)&this->_padding_ = *(undefined4 *)(pFVar18 + 0x1c);
      *(undefined4 *)((longlong)&this->_padding_ + 4) = *(undefined4 *)(pFVar18 + 0x20);
      pTVar17 = &this->CounterPerSecHistory;
      iVar8 = (this->CounterPerSecHistory).ArrayNum;
      piVar20 = &(this->CounterPerSecHistory).ArrayNum;
      if (iVar8 < (int)uVar15) {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1c,4,uVar15 - iVar8,&pTVar17->AllocatorInstance,piVar20,
                           &(this->CounterPerSecHistory).ArrayMax);
        DefaultConstructItems<FDDoSPacketCounters,int>
                  ((pTVar17->AllocatorInstance).Data + (longlong)iVar7 * 0x1c,uVar15 - iVar8);
      }
      else {
        if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum(uVar14);
        }
        if ((int)uVar15 < iVar8) {
          uVar13 = iVar8 - uVar15;
          if (((int)(uVar13 | uVar15) < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (uVar13 != 0) {
            pFVar18 = (pTVar17->AllocatorInstance).Data + (longlong)(int)uVar15 * 0x1c;
            iVar8 = (*piVar20 - uVar13) - uVar15;
            if (iVar8 != 0) {
              memmove(pFVar18,pFVar18 + (longlong)(int)uVar13 * 0x1c,(longlong)iVar8 * 0x1c);
            }
            *piVar20 = *piVar20 - uVar13;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1c,4,&pTVar17->AllocatorInstance,*piVar20,
                       &(this->CounterPerSecHistory).ArrayMax);
          }
        }
      }
    }
    DestructItems<FString,int>((FString *)local_80.AllocatorInstance.Data,local_80.ArrayNum);
    if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.AllocatorInstance.Data);
    }
  }
  return;
}

// PostFrameReceive @ 1441e39f0

void __thiscall FDDoSDetection::PostFrameReceive(FDDoSDetection *this)

{
  uint uVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  
  if (this->bDDoSDetection != false) {
    QueryPerformanceCounter(&local_res8);
    dVar9 = __real_4170000000000000;
    dVar4 = __real_408f400000000000;
    dVar3 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    iVar8 = (int)((dVar3 - this->StartFrameRecvTimestamp) * __real_408f400000000000);
    bVar5 = FDDoSState::HasHitQuota
                      ((FDDoSState *)((longlong)&this->_padding_ + 4),(FDDoSPacketCounters *)this,
                       iVar8);
    if (bVar5) {
      UpdateSeverity(this,true);
    }
    else if ((this->bMetEscalationConditionsThisFrame == false) && ('\0' < this->ActiveState)) {
      uVar1 = (int)this->ActiveState - 1;
      uVar6 = 0;
      if ((int)uVar1 < (this->DetectionSeverity).ArrayNum) {
        uVar6 = ~uVar1 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      bVar5 = FDDoSState::HasHitQuota
                        ((FDDoSState *)
                         ((this->DetectionSeverity).AllocatorInstance.Data +
                         (longlong)(int)uVar1 * 0x38),(FDDoSPacketCounters *)this,iVar8);
      if (bVar5) {
        this->LastMetEscalationConditions = dVar3;
        this->bMetEscalationConditionsThisFrame = true;
      }
    }
    QueryPerformanceCounter(&local_res10);
    iVar8 = (int)this->_padding_;
    dVar9 = (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar9;
    this->EndFrameRecvTimestamp = dVar9;
    iVar7 = (int)((dVar9 - this->StartFrameRecvTimestamp) * dVar4);
    if (iVar8 < iVar7) {
      iVar8 = iVar7;
    }
    *(int *)&this->_padding_ = iVar8;
  }
  return;
}

// PreFrameReceive @ 1441e3f20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDDoSDetection::PreFrameReceive(FDDoSDetection *this,float param_1)

{
  char cVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  float fVar17;
  LARGE_INTEGER local_res8;
  
  if (this->bDDoSDetection != false) {
    QueryPerformanceCounter(&local_res8);
    dVar4 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    this->bMetEscalationConditionsThisFrame = false;
    dVar4 = dVar4 + __real_4170000000000000;
    this->StartFrameRecvTimestamp = dVar4;
    uVar16 = 0;
    if ((0 < this->HitchTimeQuotaMS) && (this->EndFrameRecvTimestamp != 0.0)) {
      if ((int)((dVar4 - this->EndFrameRecvTimestamp) * __real_408f400000000000) -
          this->HitchTimeQuotaMS < 1) {
        this->HitchFrameCount = 0;
      }
      else {
        this->HitchFrameCount = this->HitchFrameCount + 1;
        if (5 < (byte)LogNetCore._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetCore);
        }
      }
    }
    dVar4 = __real_3ff0000000000000;
    if ((this->HitchFrameCount < 1) ||
       (dVar5 = __real_3ff0000000000000, this->HitchFrameCount <= (int)this->HitchFrameTolerance)) {
      dVar5 = (double)param_1 / this->ExpectedFrameTime;
    }
    this->FrameAdjustment = (float)dVar5;
    if ((('\0' < this->ActiveState) &&
        (iVar10 = *(int *)((longlong)&this->_padding_ + 4), 0 < iVar10)) &&
       ((float)iVar10 < (float)(this->StartFrameRecvTimestamp - this->LastMetEscalationConditions)))
    {
      UpdateSeverity(this,false);
    }
    cVar1 = this->ActiveState;
    uVar12 = uVar16;
    if ((int)cVar1 < (this->DetectionSeverity).ArrayNum) {
      uVar12 = (uint)~(int)cVar1 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = (this->DetectionSeverity).AllocatorInstance.Data;
    iVar10 = -1;
    fVar17 = this->FrameAdjustment;
    if (this->FrameAdjustment <= __real_3e800000) {
      fVar17 = __real_3e800000;
    }
    lVar15 = (longlong)cVar1 * 0x38;
    iVar13 = -1;
    if (*(int *)(pFVar2 + lVar15 + 0x14) != -1) {
      iVar13 = (int)((float)*(int *)(pFVar2 + lVar15 + 0x14) * fVar17);
    }
    *(int *)&this->_padding_ = iVar13;
    iVar13 = -1;
    if (*(int *)(pFVar2 + lVar15 + 0x18) != -1) {
      iVar13 = (int)((float)*(int *)(pFVar2 + lVar15 + 0x18) * fVar17);
    }
    *(int *)((longlong)&this->_padding_ + 4) = iVar13;
    if (*(int *)(pFVar2 + lVar15 + 0x1c) != -1) {
      iVar10 = (int)((float)*(int *)(pFVar2 + lVar15 + 0x1c) * fVar17);
    }
    *(int *)&this->_padding_ = iVar10;
    if (dVar4 < this->StartFrameRecvTimestamp - this->LastPerSecQuotaBegin) {
      if ((2 < (byte)LogNetCore._0_1_) && (0 < *(int *)((longlong)&this->_padding_ + 4))) {
        uVar12 = uVar16;
        if ((int)this->ActiveState < (this->DetectionSeverity).ArrayNum) {
          uVar12 = (uint)~(int)this->ActiveState >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetCore);
      }
      if (((this->CounterPerSecHistory).ArrayNum < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("CounterPerSecHistory.Num() > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Misc\\DDoSDetection.cpp"
                             ,0x132,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar10 = (this->CounterPerSecHistory).ArrayNum;
      uVar11 = this->LastCounterPerSecHistoryIdx + 1;
      lVar6 = this->_padding_;
      lVar7 = this->_padding_;
      lVar8 = this->_padding_;
      lVar15 = this->_padding_;
      uVar12 = 0;
      if ((int)uVar11 < iVar10) {
        uVar12 = uVar11;
      }
      this->LastCounterPerSecHistoryIdx = uVar12;
      if ((int)uVar12 < iVar10) {
        uVar16 = ~uVar12 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar14 = (longlong)(int)uVar12 * 0x1c;
      pFVar2 = (this->CounterPerSecHistory).AllocatorInstance.Data;
      *(longlong *)(pFVar2 + lVar14) = lVar6;
      *(longlong *)(pFVar2 + lVar14 + 8) = lVar7;
      *(longlong *)(pFVar2 + lVar14 + 0x10) = lVar15;
      *(int *)(pFVar2 + lVar14 + 0x18) = (int)lVar8;
      this->LastPerSecQuotaBegin = this->StartFrameRecvTimestamp;
      this->_padding_ = 0;
      *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
      *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
    }
    this->StartFramePacketCount = (int)this->_padding_;
    if ((this->DDoSLogSpamLimit <= this->LogHitCounter) && (2 < (byte)LogNetCore._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetCore);
    }
    this->LogHitCounter = 0;
    this->bHitFrameNonConnLimit = false;
    this->bHitFrameNetConnLimit = false;
  }
  return;
}

// SetMaxTickRate @ 1441eba90

void __thiscall FDDoSDetection::SetMaxTickRate(FDDoSDetection *this,int param_1)

{
  double dVar1;
  
  dVar1 = (double)param_1;
  if ((double)param_1 <= 0.0) {
    dVar1 = __real_403e000000000000;
  }
  this->ExpectedFrameTime = __real_3ff0000000000000 / dVar1;
  return;
}

// UpdateSeverity @ 1441f06d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDDoSDetection::UpdateSeverity(FDDoSDetection *this,bool param_1)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  FString *pFVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  char cVar18;
  LARGE_INTEGER local_res8;
  char local_res10;
  FScriptContainerElement *local_88;
  int local_80;
  int local_7c;
  FString local_78;
  FReadAccessScope local_68 [2];
  
  iVar16 = (this->DetectionSeverity).ArrayNum;
  iVar12 = (int)this->ActiveState + (uint)param_1 * 2;
  if (iVar12 + -1 < iVar16 + -1) {
    iVar16 = iVar12;
  }
  cVar18 = '\0';
  if (0 < iVar16 + -1) {
    cVar18 = (char)(iVar16 + -1);
  }
  if (cVar18 != this->ActiveState) {
    local_res10 = param_1;
    QueryPerformanceCounter(&local_res8);
    dVar5 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    if (param_1) {
LAB_1441f0978:
      this->LastMetEscalationConditions = dVar5;
    }
    else {
      for (; '\0' < cVar18; cVar18 = cVar18 + -1) {
        uVar15 = (int)cVar18 - 1;
        uVar14 = 0;
        if ((int)uVar15 < (this->DetectionSeverity).ArrayNum) {
          uVar14 = ~uVar15 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (this->DetectionSeverity).AllocatorInstance.Data;
        uVar14 = 0;
        if ((int)cVar18 < (this->DetectionSeverity).ArrayNum) {
          uVar14 = (uint)~(int)cVar18 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar12 = *(int *)((this->DetectionSeverity).AllocatorInstance.Data +
                         (longlong)cVar18 * 0x38 + 0x20);
        if (((this->CounterPerSecHistory).ArrayNum < iVar12) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("CounterPerSecHistory.Num() >= CurStateCooloffTime",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Misc\\DDoSDetection.cpp"
                               ,0xc9,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar16 = 0;
        if (0 < iVar12) {
          do {
            uVar14 = this->LastCounterPerSecHistoryIdx - iVar16;
            if ((int)uVar14 < 0) {
              uVar14 = uVar14 + (this->CounterPerSecHistory).ArrayNum;
            }
            if ((((int)uVar14 < 0) || ((this->CounterPerSecHistory).ArrayNum <= (int)uVar14)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("CurIdx >= 0 && CurIdx < CounterPerSecHistory.Num()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Misc\\DDoSDetection.cpp"
                                   ,0xd1,L""), bVar9)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar10 = 0;
            if ((int)uVar14 < (this->CounterPerSecHistory).ArrayNum) {
              uVar10 = ~uVar14 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar13 = (this->CounterPerSecHistory).AllocatorInstance.Data +
                      (longlong)(int)uVar14 * 0x1c;
            if ((*(int *)(pFVar2 + (longlong)(int)uVar15 * 0x38 + 4) < 1) ||
               (*(int *)pFVar13 < *(int *)(pFVar2 + (longlong)(int)uVar15 * 0x38 + 4))) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            if ((*(int *)(pFVar2 + (longlong)(int)uVar15 * 0x38 + 8) < 1) ||
               (*(int *)(pFVar13 + 8) < *(int *)(pFVar2 + (longlong)(int)uVar15 * 0x38 + 8))) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if ((*(int *)(pFVar2 + (longlong)(int)uVar15 * 0x38 + 0xc) < 1) ||
               (*(int *)(pFVar13 + 0xc) < *(int *)(pFVar2 + (longlong)(int)uVar15 * 0x38 + 0xc))) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            if ((*(short *)(pFVar2 + (longlong)(int)uVar15 * 0x38 + 0x10) < 1) ||
               (*(int *)(pFVar13 + 0x18) <=
                (int)*(short *)(pFVar2 + (longlong)(int)uVar15 * 0x38 + 0x10))) {
              bVar8 = false;
            }
            else {
              bVar8 = true;
            }
            if ((((bVar9) || (bVar6)) || (bVar7)) || (bVar8)) {
              dVar5 = dVar5 - (double)iVar16;
              goto LAB_1441f0978;
            }
            iVar16 = iVar16 + 1;
          } while (iVar16 < iVar12);
        }
      }
    }
    uVar14 = 0;
    if ((int)this->ActiveState < (this->DetectionSeverity).ArrayNum) {
      uVar14 = (uint)~(int)this->ActiveState >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar14 = 0;
    if ((int)cVar18 < (this->DetectionSeverity).ArrayNum) {
      uVar14 = (uint)~(int)cVar18 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = (this->DetectionSeverity).AllocatorInstance.Data;
    this->ActiveState = cVar18;
    this->bMetEscalationConditionsThisFrame = false;
    lVar17 = (longlong)cVar18 * 0x38;
    this->bDDoSLogRestrictions = '\0' < cVar18;
    *(FScriptContainerElement *)((longlong)&this->_padding_ + 4) = pFVar2[lVar17];
    *(undefined4 *)&this->_padding_ = *(undefined4 *)(pFVar2 + lVar17 + 4);
    *(undefined4 *)((longlong)&this->_padding_ + 4) = *(undefined4 *)(pFVar2 + lVar17 + 8);
    *(undefined4 *)&this->_padding_ = *(undefined4 *)(pFVar2 + lVar17 + 0xc);
    *(undefined2 *)((longlong)&this->_padding_ + 4) = *(undefined2 *)(pFVar2 + lVar17 + 0x10);
    *(undefined4 *)&this->_padding_ = *(undefined4 *)(pFVar2 + lVar17 + 0x14);
    *(undefined4 *)((longlong)&this->_padding_ + 4) = *(undefined4 *)(pFVar2 + lVar17 + 0x18);
    *(undefined4 *)&this->_padding_ = *(undefined4 *)(pFVar2 + lVar17 + 0x1c);
    *(undefined4 *)((longlong)&this->_padding_ + 4) = *(undefined4 *)(pFVar2 + lVar17 + 0x20);
    fVar1 = this->FrameAdjustment;
    if (0.0 < fVar1) {
      iVar16 = -1;
      iVar12 = -1;
      if (*(int *)(pFVar2 + lVar17 + 0x14) != -1) {
        iVar12 = (int)((float)*(int *)(pFVar2 + lVar17 + 0x14) * fVar1);
      }
      *(int *)&this->_padding_ = iVar12;
      iVar12 = -1;
      if (*(int *)(pFVar2 + lVar17 + 0x18) != -1) {
        iVar12 = (int)((float)*(int *)(pFVar2 + lVar17 + 0x18) * fVar1);
      }
      *(int *)((longlong)&this->_padding_ + 4) = iVar12;
      if (*(int *)(pFVar2 + lVar17 + 0x1c) != -1) {
        iVar16 = (int)((float)*(int *)(pFVar2 + lVar17 + 0x1c) * fVar1);
      }
      *(int *)&this->_padding_ = iVar16;
    }
    if (2 < (byte)LogNetCore._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetCore);
    }
    if ((local_res10 != '\0') && (this->WorstActiveState < this->ActiveState)) {
      if ((this->bDDoSAnalytics != false) && (pFVar2[lVar17] != (FScriptContainerElement)0x0)) {
        pFVar11 = ::FString::FString(&local_78,(FString *)(pFVar2 + lVar17 + 0x28));
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->NotifySeverityEscalation,local_68);
        if ((*(int *)&(this->NotifySeverityEscalation).field_0x10 == 0) ||
           (plVar3 = *(longlong **)&(this->NotifySeverityEscalation).field_0x8,
           plVar3 == (longlong *)0x0)) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(local_68);
          pFVar2 = (pFVar11->Data).AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
        }
        else {
          pcVar4 = *(code **)(*plVar3 + 0x68);
          local_88 = (pFVar11->Data).AllocatorInstance.Data;
          (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_80 = (pFVar11->Data).ArrayNum;
          local_7c = (pFVar11->Data).ArrayMax;
          (pFVar11->Data).ArrayNum = 0;
          (pFVar11->Data).ArrayMax = 0;
          (*pcVar4)(plVar3,&local_88);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(local_68);
          pFVar2 = (pFVar11->Data).AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
        }
      }
      this->WorstActiveState = this->ActiveState;
    }
  }
  return;
}

