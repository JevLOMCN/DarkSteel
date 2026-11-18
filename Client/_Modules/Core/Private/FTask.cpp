// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// operator() @ 141483150

/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

FTask * __thiscall
`LowLevelTasks::FTask::Init<`Tasks2Tests::BasicPerfTest<10000>'::__l15::<lambda_2>_>'::__l13::
<lambda_1>::operator()(void *this,bool param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FTask *pFVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_1) {
    iVar8 = 0;
    lVar9 = 0;
    do {
      plVar1 = *(longlong **)this;
      if (((int)plVar1[1] <= iVar8) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FTask *)(*pcVar3)();
        return pFVar5;
      }
      lVar2 = *plVar1;
      if ((*(longlong *)(lVar2 + lVar9) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FTask *)(*pcVar3)();
        return pFVar5;
      }
      pFVar5 = *(FTask **)(lVar2 + lVar9);
      uVar6 = *(ulonglong *)&pFVar5->field_0x38;
      do {
        LOCK();
        uVar7 = *(ulonglong *)&pFVar5->field_0x38;
        bVar4 = uVar6 == uVar7;
        if (bVar4) {
          *(ulonglong *)&pFVar5->field_0x38 = uVar6 | 2;
          uVar7 = uVar6;
        }
        UNLOCK();
        uVar6 = uVar7;
      } while (!bVar4);
      if ((uVar7 & 2) == 0) {
        LowLevelTasks::FScheduler::LaunchInternal
                  (&LowLevelTasks::FScheduler::Singleton,pFVar5,DefaultPreference,true);
      }
      iVar8 = iVar8 + 1;
      lVar9 = lVar9 + 0x10;
    } while (iVar8 < 10000);
  }
  return (FTask *)0x0;
}

// operator() @ 141483260

/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

FTask * __thiscall
`LowLevelTasks::FTask::Init<`Tasks2Tests::StealingPerfTest<10000>'::__l15::<lambda_2>_>'::__l13::
<lambda_1>::operator()(void *this,bool param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FTask *pFVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_1) {
    iVar8 = 0;
    lVar9 = 0;
    do {
      plVar1 = *(longlong **)this;
      if (((int)plVar1[1] <= iVar8) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FTask *)(*pcVar3)();
        return pFVar5;
      }
      lVar2 = *plVar1;
      if ((*(longlong *)(lVar2 + lVar9) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FTask *)(*pcVar3)();
        return pFVar5;
      }
      pFVar5 = *(FTask **)(lVar2 + lVar9);
      uVar6 = *(ulonglong *)&pFVar5->field_0x38;
      do {
        LOCK();
        uVar7 = *(ulonglong *)&pFVar5->field_0x38;
        bVar4 = uVar6 == uVar7;
        if (bVar4) {
          *(ulonglong *)&pFVar5->field_0x38 = uVar6 | 2;
          uVar7 = uVar6;
        }
        UNLOCK();
        uVar6 = uVar7;
      } while (!bVar4);
      if ((uVar7 & 2) == 0) {
        LowLevelTasks::FScheduler::LaunchInternal
                  (&LowLevelTasks::FScheduler::Singleton,pFVar5,DefaultPreference,true);
      }
      iVar8 = iVar8 + 1;
      lVar9 = lVar9 + 0x10;
    } while (iVar8 < 10000);
  }
  return (FTask *)0x0;
}

// operator() @ 141483370

/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

FTask * __thiscall
`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_3>_>'
::__l13::<lambda_1>::operator()(void *this,bool param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  FTask *pFVar4;
  bool bVar5;
  
  if (param_1) {
    pFVar4 = *(FTask **)this;
    uVar2 = *(ulonglong *)&pFVar4->field_0x38;
    do {
      LOCK();
      uVar3 = *(ulonglong *)&pFVar4->field_0x38;
      bVar5 = uVar2 == uVar3;
      if (bVar5) {
        *(ulonglong *)&pFVar4->field_0x38 = uVar2 | 2;
        uVar3 = uVar2;
      }
      UNLOCK();
      uVar2 = uVar3;
    } while (!bVar5);
    if ((uVar3 & 2) == 0) {
      LowLevelTasks::FScheduler::LaunchInternal
                (&LowLevelTasks::FScheduler::Singleton,pFVar4,DefaultPreference,false);
    }
    else {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TryLaunch(LocalTask, EQueuePreference::LocalQueuePreference, false )",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\UnitTests.cpp"
                         ,0x239,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FTask *)(*pcVar1)();
        return pFVar4;
      }
    }
    pFVar4 = *(FTask **)((longlong)this + 8);
    uVar2 = *(ulonglong *)&pFVar4->field_0x38;
    do {
      LOCK();
      uVar3 = *(ulonglong *)&pFVar4->field_0x38;
      bVar5 = uVar2 == uVar3;
      if (bVar5) {
        *(ulonglong *)&pFVar4->field_0x38 = uVar2 | 2;
        uVar3 = uVar2;
      }
      UNLOCK();
      uVar2 = uVar3;
    } while (!bVar5);
    if ((uVar3 & 2) == 0) {
      LowLevelTasks::FScheduler::LaunchInternal
                (&LowLevelTasks::FScheduler::Singleton,pFVar4,GlobalQueuePreference,false);
      return (FTask *)0x0;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TryLaunch(GlobalTask, EQueuePreference::GlobalQueuePreference, false )",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\UnitTests.cpp"
                       ,0x23a,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FTask *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FTask *)0x0;
}

// operator() @ 141483460

/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

FTask * __thiscall
`LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l32::<lambda_3>_>'::__l13::
<lambda_1>::operator()(void *this,bool param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  FTask *pFVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  
  if (param_1) {
    iVar7 = 0;
    lVar8 = 0;
    do {
      plVar1 = *(longlong **)this;
      if (((int)plVar1[1] <= iVar7) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FTask *)(*pcVar2)();
        return pFVar4;
      }
      pFVar4 = (FTask *)(*plVar1 + lVar8);
      uVar5 = *(ulonglong *)&pFVar4->field_0x38;
      do {
        LOCK();
        uVar6 = *(ulonglong *)&pFVar4->field_0x38;
        bVar3 = uVar5 == uVar6;
        if (bVar3) {
          *(ulonglong *)&pFVar4->field_0x38 = uVar5 | 2;
          uVar6 = uVar5;
        }
        UNLOCK();
        uVar5 = uVar6;
      } while (!bVar3);
      if ((uVar6 & 2) == 0) {
        LowLevelTasks::FScheduler::LaunchInternal
                  (&LowLevelTasks::FScheduler::Singleton,pFVar4,DefaultPreference,true);
      }
      iVar7 = iVar7 + 1;
      lVar8 = lVar8 + 0x40;
    } while (iVar7 < 10000);
  }
  return (FTask *)0x0;
}

// ExecuteTask @ 141494ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FTask * __thiscall LowLevelTasks::FTask::ExecuteTask(FTask *this)

{
  FTask *pFVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  undefined1 auStack_78 [32];
  uint local_58;
  undefined1 local_48 [40];
  undefined **local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  uVar2 = *(ulonglong *)&this->field_0x38;
  do {
    LOCK();
    uVar3 = *(ulonglong *)&this->field_0x38;
    bVar4 = uVar2 == uVar3;
    if (bVar4) {
      *(ulonglong *)&this->field_0x38 = uVar2 | 4;
      uVar3 = uVar2;
    }
    UNLOCK();
    uVar2 = uVar3;
  } while (!bVar4);
  if ((uVar3 & 4) != 0) {
    uVar2 = *(ulonglong *)&this->field_0x38;
    do {
      LOCK();
      uVar3 = *(ulonglong *)&this->field_0x38;
      bVar4 = uVar2 == uVar3;
      if (bVar4) {
        *(ulonglong *)&this->field_0x38 = uVar2 | 8;
        uVar3 = uVar2;
      }
      UNLOCK();
      uVar2 = uVar3;
    } while (!bVar4);
    if ((uVar3 & 8) != 0) {
      local_58 = 0x28;
      local_20 = &
                 ___7TTaskDelegateBase___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
      ;
      (*(code *)**(undefined8 **)&this->field_0x28)(&this->field_0x28,&local_20,local_48,this);
      LOCK();
      *(ulonglong *)&this->field_0x38 = *(ulonglong *)&this->field_0x38 | 0x20;
      UNLOCK();
      (*(code *)local_20[3])(&local_20,local_48);
    }
    return (FTask *)0x0;
  }
  local_20 = &
             ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  local_58 = CONCAT31(local_58._1_3_,~(byte)uVar3) & 0xffffff01;
  pFVar1 = (FTask *)(**(code **)(*(longlong *)&this->field_0x28 + 0x10))
                              (&this->field_0x28,local_48,this,0x28);
  LOCK();
  *(ulonglong *)&this->field_0x38 = *(ulonglong *)&this->field_0x38 | 0x20;
  UNLOCK();
  (*(code *)local_20[3])(&local_20,local_48);
  return pFVar1;
}

// GetActiveTask @ 1414974a0

FTask * __cdecl LowLevelTasks::FTask::GetActiveTask(void)

{
  return *(FTask **)
          (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x40);
}

// TryCancel @ 1414b4fb0

bool __thiscall LowLevelTasks::FTask::TryCancel(FTask *this,ECancellationFlags param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  bool bVar4;
  
  uVar2 = *(ulonglong *)&this->field_0x38 & 0xffffffffffffffc0;
  if ((*(ulonglong *)&this->field_0x38 >> 0x3e & 2) == 0) {
LAB_1414b5006:
    bVar3 = false;
  }
  else {
    if ((param_1 & PrelaunchCancellation) == None) {
LAB_1414b4ff2:
      LOCK();
      bVar3 = (uVar2 | 2) == *(ulonglong *)&this->field_0x38;
      if (bVar3) {
        *(ulonglong *)&this->field_0x38 = uVar2 | 3;
      }
      UNLOCK();
      if (!bVar3) goto LAB_1414b5006;
    }
    else {
      LOCK();
      bVar3 = uVar2 == *(ulonglong *)&this->field_0x38;
      if (bVar3) {
        *(ulonglong *)&this->field_0x38 = uVar2 | 1;
      }
      UNLOCK();
      if (!bVar3) goto LAB_1414b4ff2;
    }
    bVar3 = true;
  }
  if (((param_1 & DefaultFlags) == DefaultFlags) && (bVar3 != false)) {
    uVar2 = *(ulonglong *)&this->field_0x38;
    do {
      LOCK();
      uVar1 = *(ulonglong *)&this->field_0x38;
      bVar4 = uVar2 == uVar1;
      if (bVar4) {
        *(ulonglong *)&this->field_0x38 = uVar2 | 2;
        uVar1 = uVar2;
      }
      UNLOCK();
      uVar2 = uVar1;
    } while (!bVar4);
    if ((uVar1 & 2) == 0) {
      ExecuteTask(this);
      return true;
    }
  }
  return bVar3;
}

// TryExpedite @ 1414b6620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall LowLevelTasks::FTask::TryExpedite(FTask *this)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 local_40 [40];
  undefined **local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  uVar2 = *(ulonglong *)&this->field_0x38 & 0xffffffffffffffc0;
  LOCK();
  bVar3 = (uVar2 | 2) == *(ulonglong *)&this->field_0x38;
  if (bVar3) {
    *(ulonglong *)&this->field_0x38 = uVar2 | 6;
  }
  UNLOCK();
  if (!bVar3) {
    return false;
  }
  (**(code **)(*(longlong *)&this->field_0x28 + 8))(&this->field_0x28,this,1);
  uVar2 = *(ulonglong *)&this->field_0x38;
  do {
    LOCK();
    uVar1 = *(ulonglong *)&this->field_0x38;
    bVar3 = uVar2 == uVar1;
    if (bVar3) {
      *(ulonglong *)&this->field_0x38 = uVar2 | 0x18;
      uVar1 = uVar2;
    }
    UNLOCK();
    uVar2 = uVar1;
  } while (!bVar3);
  if ((uVar1 & 8) != 0) {
    local_58 = 0x28;
    local_18 = &
               ___7TTaskDelegateBase___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    (*(code *)**(undefined8 **)&this->field_0x28)(&this->field_0x28,&local_18,local_40,this);
    LOCK();
    *(ulonglong *)&this->field_0x38 = *(ulonglong *)&this->field_0x38 | 0x20;
    UNLOCK();
    (*(code *)local_18[3])(&local_18,local_40);
  }
  return true;
}

// operator() @ 141d6f460

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FTask * __thiscall
`LowLevelTasks::FTask::
Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<`UE::TasksTests::TaskConcurrencyLimiter_WaitingStressTest<10000>'::__l4::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l13::<lambda_1>::operator()(void *this,bool param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FTask *pFVar4;
  
  if (param_1) {
    if ((*(longlong *)((longlong)this + 0x28) == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FTask *)(*pcVar2)();
      return pFVar4;
    }
    uVar1 = *(uint *)(*(longlong *)((longlong)this + 0x28) + 0x30);
    bVar3 = -1 < CpuChannel->Enabled;
    if (bVar3) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`public:___cdecl_`void___cdecl_UE::TasksTests::TaskConcurrencyLimiter_WaitingStressTest<10000>(void)'::`4'::<lambda_1>::operator()(unsigned_int)const___ptr64'
                  ::__l2::__CpuProfilerEventSpecId1645,"Blocked",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                 ,0x66d);
      FCpuProfilerTrace::OutputBeginEvent
                (`public:___cdecl_`void___cdecl_UE::TasksTests::TaskConcurrencyLimiter_WaitingStressTest<10000>(void)'::`4'::<lambda_1>::operator()(unsigned_int)const___ptr64'
                 ::__l2::__CpuProfilerEventSpecId1645);
    }
    (**(code **)(*(longlong *)**(undefined8 **)this + 0x20))
              ((longlong *)**(undefined8 **)this,0xffffffff,0);
    **(undefined1 **)((longlong)this + 8) = 1;
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::CompleteWorkItem
              (*(FPimpl **)((longlong)this + 0x10),uVar1);
  }
  return (FTask *)0x0;
}

// operator() @ 141d6f540

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FTask * __thiscall
`LowLevelTasks::FTask::
Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<``UE::TasksTests::TaskConcurrencyLimiterStressTest<8,1000000,10>'::__l4::<lambda_1>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l13::<lambda_1>::operator()(void *this,bool param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FTask *pFVar4;
  
  if (param_1) {
    if (*(longlong *)((longlong)this + 0x38) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FTask *)(*pcVar2)();
        return pFVar4;
      }
    }
    uVar1 = *(uint *)(*(longlong *)((longlong)this + 0x38) + 0x30);
    ``UE::TasksTests::TaskConcurrencyLimiterStressTest<8,1000000,10>'::__l4::<lambda_1>::operator()'
    ::__l5::<lambda_1>::operator()(this,uVar1);
    UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::CompleteWorkItem
              (*(FPimpl **)((longlong)this + 0x20),uVar1);
  }
  return (FTask *)0x0;
}

// InheritParentData @ 141d7a120

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall LowLevelTasks::FTask::InheritParentData(FTask *this,ETaskPriority *param_1)

{
  FTask *pFVar1;
  
  pFVar1 = GetActiveTask();
  if (pFVar1 != (FTask *)0x0) {
    if (*param_1 == Inherit) {
      *param_1 = (ETaskPriority)((ulonglong)*(undefined8 *)&pFVar1->field_0x38 >> 0x3b) &
                 (Inherit|Default);
    }
    *(undefined8 *)&this->field_0x30 = *(undefined8 *)&pFVar1->field_0x30;
    return;
  }
  if (*param_1 == Inherit) {
    *param_1 = Default;
  }
  *(undefined8 *)&this->field_0x30 = 0;
  return;
}

