// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// FTickableGameObject @ 1488af340

FTickableGameObject * __thiscall
FTickableGameObject::FTickableGameObject(FTickableGameObject *this,ETickableTickType param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  FTickableGameObject *pFVar3;
  FTickableStatics *pFVar4;
  TPairInitializer<FTickableObjectBase_*_const_&,ETickableTickType_const_&> local_res8;
  FTickableGameObject *local_res18 [2];
  FTickableGameObject **local_28;
  ETickableTickType **local_20;
  
  *this = (FTickableGameObject)&___7FTickableGameObject__6B_;
  if (param_1 != Never) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6156321622899818357>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tickable.cpp"
                         ,0x8b,"IsInGameThread()");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FTickableGameObject *)(*pcVar1)();
        return pFVar3;
      }
    }
    pFVar4 = GetStatics();
    lpCriticalSection = &pFVar4->NewTickableObjectsCritical;
    local_res8.Value._0_1_ = param_1;
    local_res18[0] = this;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FTickableGameObject *)(*pcVar1)();
        return pFVar3;
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_28 = local_res18;
    local_20 = &local_res8.Value;
    TSet<TTuple<FTickableObjectBase_*,enum_ETickableTickType>,TDefaultMapHashableKeyFuncs<FTickableObjectBase_*,enum_ETickableTickType,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FTickableObjectBase_*_const_&,enum_ETickableTickType_const_&>_>
              (&pFVar4->NewTickableObjects,&local_res8,(bool *)&local_28);
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return this;
}

// ~FTickableGameObject @ 1488b2900

void __thiscall FTickableGameObject::~FTickableGameObject(FTickableGameObject *this)

{
  FTickableStatics *this_00;
  
  *this = (FTickableGameObject)&___7FTickableGameObject__6B_;
  this_00 = GetStatics();
  FTickableObjectBase::FTickableStatics::SetTickTypeForTickableObject
            (this_00,(FTickableObjectBase *)this,Never);
  return;
}

// GetStatics @ 1488c4e00

FTickableStatics * __cdecl FTickableGameObject::GetStatics(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Singleton,4000);
      ::Singleton.TickableObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      ::Singleton.TickableObjects.ArrayNum = 0;
      ::Singleton.TickableObjects.ArrayMax = 0;
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)&::Singleton.NewTickableObjectsCritical,4000);
      ::Singleton.NewTickableObjects._0_8_ = 0;
      ::Singleton.NewTickableObjects._8_8_ = 0;
      ::Singleton.NewTickableObjects._32_8_ = 0;
      ::Singleton.NewTickableObjects._40_4_ = 0;
      ::Singleton.NewTickableObjects._44_4_ = 0x80;
      ::Singleton.NewTickableObjects._48_4_ = 0xffffffff;
      ::Singleton.NewTickableObjects._52_4_ = 0;
      ::Singleton.NewTickableObjects._64_8_ = 0;
      ::Singleton.NewTickableObjects._72_4_ = 0;
      ::Singleton.bIsTickingObjects = false;
      ::Singleton.bNeedsCleanup = false;
      atexit(`FTickableGameObject::GetStatics'::__l2::_dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return &::Singleton;
    }
  }
  return &::Singleton;
}

// SetTickableTickType @ 1488df9e0

void __thiscall
FTickableGameObject::SetTickableTickType(FTickableGameObject *this,ETickableTickType param_1)

{
  FTickableStatics *this_00;
  
  this_00 = GetStatics();
  FTickableObjectBase::FTickableStatics::SetTickTypeForTickableObject
            (this_00,(FTickableObjectBase *)this,param_1);
  return;
}

// TickObjects @ 1488e3920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FTickableGameObject::TickObjects(UWorld *param_1,ELevelTick param_2,bool param_3,float param_4)

{
  int *piVar1;
  int iVar2;
  FName FVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_TickableGameObjectsTime> FVar13;
  FTickableStatics *this;
  UWorld *pUVar14;
  longlong *plVar15;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar16;
  FColor_u_0 FVar17;
  FName FVar18;
  FScriptContainerElement *pFVar19;
  FNameEntryId FVar20;
  FScriptContainerElement *pFVar21;
  bool bVar22;
  FScriptContainerElement *local_c0;
  undefined1 local_b8 [8];
  FColor_u_0 local_b0;
  uint uStack_ac;
  FColor_u_0 local_a8;
  uint uStack_a4;
  FName local_a0;
  FColor_u_0 local_90;
  uint local_8c;
  FName local_88;
  FName local_80;
  LARGE_INTEGER local_70;
  FStatMessage local_68;
  FName local_58;
  undefined1 local_50 [24];
  
  FVar13 = StatPtr_STAT_TickableGameObjectsTime;
  if (StatPtr_STAT_TickableGameObjectsTime ==
      (FThreadSafeStaticStat<FStat_STAT_TickableGameObjectsTime>)0x0) {
    pFVar12 = ::FName::FName(&local_58,"STAT_TickableGameObjectsTime");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_TickableGameObjectsTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TickableGameObjectsTime,*pFVar12,
                        L"TickableGameObjects Time","STATGROUP_Game","STATCAT_Advanced",L"Game",true
                        ,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar13;
  bVar6 = false;
  bVar8 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  bVar9 = false;
  bVar10 = false;
  FVar17.Bits = (uint)FVar3.ComparisonIndex.Value;
  uVar16 = FVar3.Number;
  if ((FVar17.Bits != 0) || (uVar16 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_c0 = (FScriptContainerElement *)((ulonglong)local_c0 & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_c0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar6 = false;
      bVar8 = true;
      bVar9 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a8.Bits = FVar17.Bits;
        uStack_a4 = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_a8._s_0,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tickable.cpp"
                   ,0xa9);
        bVar6 = true;
        bVar8 = true;
        bVar9 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_b0.Bits = FVar17.Bits;
      uStack_ac = uVar16;
      local_88 = FVar3;
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      bVar9 = true;
      goto LAB_1488e3aad;
    }
  }
  bVar8 = bVar10;
  bVar6 = bVar9;
  bVar9 = false;
  local_88 = local_80;
LAB_1488e3aad:
  if (__CsvProfilerStat170 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Tickables");
    __CsvProfilerStat170 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Tickables","CSV_Tickables");
  this = GetStatics();
  bVar10 = IsInGameThread();
  if ((!bVar10) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tickable.cpp"
                          ,0xae,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((this == (FTickableStatics *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                          ,0x1b,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  FTickableObjectBase::FTickableStatics::StartTicking(this);
  iVar2 = (this->TickableObjects).ArrayNum;
  pFVar21 = (this->TickableObjects).AllocatorInstance.Data;
  pFVar19 = pFVar21 + (longlong)iVar2 * 0x10;
  local_c0 = pFVar19;
  do {
    while( true ) {
      if ((this->TickableObjects).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FTickableObjectBase::FTickableObjectEntry,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_b8);
      }
      if (pFVar21 == pFVar19) {
        FTickableObjectBase::FTickableStatics::FinishTicking(this);
        FVar3 = local_88;
        if (this != (FTickableStatics *)0x0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)this);
        }
        FCsvProfiler::EndExclusiveStat("Tickables");
        if (bVar8) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar6) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (bVar9) {
          FThreadStats::AddMessage(FVar3,CycleScopeEnd);
        }
        return;
      }
      plVar4 = *(longlong **)pFVar21;
      if ((((plVar4 != (longlong *)0x0) &&
           (cVar11 = (**(code **)(*plVar4 + 0x18))(plVar4), cVar11 != '\0')) &&
          ((pFVar21[8] == (FScriptContainerElement)0x1 ||
           (cVar11 = (**(code **)(*plVar4 + 0x10))(plVar4), cVar11 != '\0')))) &&
         ((pUVar14 = (UWorld *)(**(code **)(*plVar4 + 0x40))(plVar4), pUVar14 == param_1 &&
          ((param_2 == LEVELTICK_All ||
           ((param_1 != (UWorld *)0x0 && (bVar10 = UWorld::IsGameWorld(param_1), bVar10))))))))
      break;
LAB_1488e3e0c:
      pFVar21 = pFVar21 + 0x10;
    }
    if (param_3) {
      cVar11 = (**(code **)(*plVar4 + 0x30))(plVar4);
      if (cVar11 != '\0') goto LAB_1488e3c09;
      goto LAB_1488e3e0c;
    }
    if (param_2 != LEVELTICK_TimeOnly) {
LAB_1488e3c09:
      plVar15 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_50);
      FVar20.Value = 0;
      bVar10 = false;
      bVar7 = false;
      local_a0.ComparisonIndex.Value = 0;
      local_a0.Number = 0;
      pFVar12 = (FName *)*plVar15;
      FVar3 = *pFVar12;
      FVar17.Bits = (uint)FVar3.ComparisonIndex.Value;
      uVar16 = FVar3.Number;
      if ((FVar17.Bits == 0) && (uVar16 == 0)) {
        (**(code **)*plVar4)(plVar4,param_4);
        pFVar19 = local_c0;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_b0.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_b0._s_0,(char *)pFVar12[2]);
          bVar10 = false;
          bVar7 = true;
          if (-1 < CpuChannel->Enabled) {
            local_90.Bits = FVar17.Bits;
            local_8c = uVar16;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      ((FName *)&local_90._s_0,(wchar_t *)pFVar12[1],
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tickable.cpp"
                       ,199);
            bVar10 = true;
            bVar7 = true;
          }
        }
        bVar22 = FThreadStats::bPrimaryEnable != false;
        FVar18 = local_a0;
        if (bVar22) {
          local_a8.Bits = FVar17.Bits;
          uStack_a4 = uVar16;
          local_a0 = FVar3;
          FThreadStats::AddMessage(FVar3,CycleScopeStart);
          FVar18 = FVar3;
          FVar20.Value = local_a0.ComparisonIndex.Value;
        }
        (**(code **)*plVar4)(plVar4,param_4);
        if (bVar7) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar10) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        pFVar19 = local_c0;
        if ((((bVar22) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)
            ) && (FThreadStats::TlsSlot != 0xffffffff)) {
          this_00 = TlsGetValue(FThreadStats::TlsSlot);
          if (this_00 == (FThreadStats *)0x0) {
            this_01 = FThreadStatsPool::Get();
            this_00 = FThreadStatsPool::GetFromPool(this_01);
          }
          pFVar19 = local_c0;
          if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
            local_68.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
            local_68.NameAndInfo.Index.Value = FVar20.Value;
            QueryPerformanceCounter(&local_70);
            local_68.StatData.Pad[4] = '\0';
            local_68.StatData.Pad[5] = '\0';
            local_68.StatData.Pad[6] = '\0';
            local_68.StatData.Pad[7] = '\0';
            local_68.StatData.Pad[0] = local_70.s.LowPart._0_1_;
            local_68.StatData.Pad[1] = local_70.s.LowPart._1_1_;
            local_68.StatData.Pad[2] = local_70.s.LowPart._2_1_;
            local_68.StatData.Pad[3] = local_70.s.LowPart._3_1_;
            FThreadStats::AddStatMessage(this_00,&local_68);
            piVar1 = &this_00->ScopeCount;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FThreadStats::Flush(this_00,false,false);
              pFVar19 = local_c0;
            }
            else {
              pFVar19 = local_c0;
              if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(this_00,false,false);
                pFVar19 = local_c0;
              }
            }
          }
        }
      }
      goto LAB_1488e3e0c;
    }
    pFVar21 = pFVar21 + 0x10;
  } while( true );
}

