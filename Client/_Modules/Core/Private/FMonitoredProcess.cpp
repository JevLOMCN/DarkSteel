// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 16

// FMonitoredProcess @ 1418bc640

FMonitoredProcess * __thiscall
FMonitoredProcess::FMonitoredProcess
          (FMonitoredProcess *this,FString *param_1,FString *param_2,FString *param_3,bool param_4,
          bool param_5)

{
  this->Canceling = (TAtomic<bool>)0x0;
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  this->EndTime = (TAtomic<FDateTime>)0x0;
  this->Hidden = param_4;
  this->KillTree = (TAtomic<bool>)0x0;
  ::FString::FString(&this->Params,param_2);
  this->ProcessHandle = (FProcHandle)0x0;
  this->ReturnCode = (TAtomic<int>)0x0;
  this->ReadPipe = (void *)0x0;
  this->StartTime = (TAtomic<FDateTime>)0x0;
  this->Thread = (FRunnableThread *)0x0;
  this->bIsRunning = (TAtomic<bool>)0x0;
  ::FString::FString(&this->URL,param_1);
  ::FString::FString(&this->WorkingDir,param_3);
  this->bCreatePipes = param_5;
  this->WritePipe = (void *)0x0;
  (this->OutputBuffer).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputBuffer).Data.ArrayNum = 0;
  (this->OutputBuffer).Data.ArrayMax = 0;
  *(undefined8 *)&this->CanceledDelegate = 0;
  *(undefined8 *)&(this->CanceledDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->CanceledDelegate).field_0x10 = 0;
  *(undefined8 *)&this->CompletedDelegate = 0;
  *(undefined8 *)&(this->CompletedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->CompletedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OutputDelegate = 0;
  *(undefined8 *)&(this->OutputDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OutputDelegate).field_0x10 = 0;
  this->SleepInterval = 0.01;
  return this;
}

// FMonitoredProcess @ 1418bc750

FMonitoredProcess * __thiscall
FMonitoredProcess::FMonitoredProcess
          (FMonitoredProcess *this,FString *param_1,FString *param_2,bool param_3,bool param_4)

{
  FString *pFVar1;
  FString local_38;
  
  pFVar1 = FPaths::RootDir(&local_38);
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  this->Canceling = (TAtomic<bool>)0x0;
  this->EndTime = (TAtomic<FDateTime>)0x0;
  this->Hidden = param_3;
  this->KillTree = (TAtomic<bool>)0x0;
  ::FString::FString(&this->Params,param_2);
  this->ProcessHandle = (FProcHandle)0x0;
  this->ReturnCode = (TAtomic<int>)0x0;
  this->ReadPipe = (void *)0x0;
  this->StartTime = (TAtomic<FDateTime>)0x0;
  this->Thread = (FRunnableThread *)0x0;
  this->bIsRunning = (TAtomic<bool>)0x0;
  ::FString::FString(&this->URL,param_1);
  ::FString::FString(&this->WorkingDir,pFVar1);
  this->WritePipe = (void *)0x0;
  this->bCreatePipes = param_4;
  this->SleepInterval = 0.01;
  (this->OutputBuffer).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputBuffer).Data.ArrayNum = 0;
  (this->OutputBuffer).Data.ArrayMax = 0;
  *(undefined8 *)&this->CanceledDelegate = 0;
  *(undefined8 *)&(this->CanceledDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->CanceledDelegate).field_0x10 = 0;
  *(undefined8 *)&this->CompletedDelegate = 0;
  *(undefined8 *)&(this->CompletedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->CompletedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OutputDelegate = 0;
  *(undefined8 *)&(this->OutputDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OutputDelegate).field_0x10 = 0;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  return this;
}

// ~FMonitoredProcess @ 1418bef10

void __thiscall FMonitoredProcess::~FMonitoredProcess(FMonitoredProcess *this)

{
  FRunnableThread *pFVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  if (this->bIsRunning != (TAtomic<bool>)0x0) {
    LOCK();
    this->KillTree = (TAtomic<bool>)0x1;
    UNLOCK();
    LOCK();
    this->Canceling = (TAtomic<bool>)0x1;
    UNLOCK();
  }
  if (this->Thread != (FRunnableThread *)0x0) {
    (**(code **)(this->Thread->_padding_ + 0x20))();
    pFVar1 = this->Thread;
    if (pFVar1 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OutputDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CompletedDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CanceledDelegate);
  pFVar2 = (this->OutputBuffer).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->WorkingDir).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->URL).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Params).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7FSingleThreadRunnable__6B_;
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  return;
}

// Exit @ 1418da380

void __thiscall FMonitoredProcess::Exit(FMonitoredProcess *this)

{
  return;
}

// GetDuration @ 1418df050

FTimespan __thiscall FMonitoredProcess::GetDuration(FMonitoredProcess *this)

{
  longlong *in_RDX;
  int local_res8 [2];
  int local_res18 [2];
  int local_res20 [2];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18 [2];
  FDateTime local_10;
  
  if (this->StartTime == (TAtomic<FDateTime>)0x0) {
    *in_RDX = 0;
    return (FTimespan)(long64)in_RDX;
  }
  if (this->bIsRunning != (TAtomic<bool>)0x0) {
    FWindowsPlatformTime::UtcTime
              (&local_1c,&local_20,local_18,&local_24,&local_28,local_res20,local_res18,local_res8);
    FDateTime::FDateTime
              (&local_10,local_1c,local_20,local_24,local_28,local_res20[0],local_res18[0],
               local_res8[0]);
    *in_RDX = local_10.Ticks - (longlong)this->StartTime;
    return (FTimespan)(long64)in_RDX;
  }
  *in_RDX = (longlong)this->EndTime - (longlong)this->StartTime;
  return (FTimespan)(long64)in_RDX;
}

// GetFullOutputWithoutDelegate @ 1418df4b0

FString * __thiscall FMonitoredProcess::GetFullOutputWithoutDelegate(FMonitoredProcess *this)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  bVar2 = FGenericPlatformProcess::SupportsMultithreading();
  if ((bVar2) && (this->bIsRunning != (TAtomic<bool>)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(!FPlatformProcess::SupportsMultithreading()) || (!bIsRunning)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\MonitoredProcess.cpp"
                       ,0x6c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->OutputBuffer;
}

// GetReturnCode @ 1418e1720

int __thiscall FMonitoredProcess::GetReturnCode(FMonitoredProcess *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (this->bIsRunning != (TAtomic<bool>)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bIsRunning",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\MonitoredProcess.cpp"
                       ,0x66,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return (int)this->ReturnCode;
}

// GetSingleThreadInterface @ 1418e1790

FSingleThreadRunnable * __thiscall
FMonitoredProcess::GetSingleThreadInterface(FMonitoredProcess *this)

{
  FSingleThreadRunnable *pFVar1;
  
  pFVar1 = (FSingleThreadRunnable *)&this->_padding_;
  if (this == (FMonitoredProcess *)0x0) {
    pFVar1 = (FSingleThreadRunnable *)0x0;
  }
  return pFVar1;
}

// Init @ 1418e2870

bool __thiscall FMonitoredProcess::Init(FMonitoredProcess *this)

{
  return true;
}

// Launch @ 1418e4110

bool __thiscall FMonitoredProcess::Launch(FMonitoredProcess *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  wchar_t *pwVar4;
  FProcHandle FVar5;
  FRunnableThread *pFVar6;
  FDateTime FVar7;
  wchar_t *pwVar8;
  ForAnyElementType FVar9;
  wchar_t local_res8 [8];
  undefined7 in_stack_ffffffffffffffb1;
  uint in_stack_ffffffffffffffc4;
  FString local_18;
  
  if (this->bIsRunning == (TAtomic<bool>)0x0) {
    if ((this->Thread != (FRunnableThread *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Thread == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\MonitoredProcess.cpp"
                           ,0x49,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if ((this->bCreatePipes != false) &&
       (bVar2 = FWindowsPlatformProcess::CreatePipe(&this->ReadPipe,&this->WritePipe,false), !bVar2)
       ) {
      return false;
    }
    if ((this->WorkingDir).Data.ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(this->WorkingDir).Data.AllocatorInstance.Data;
    }
    if ((this->Params).Data.ArrayNum == 0) {
      uVar3 = 0x6c;
    }
    else {
      uVar3 = SUB81((this->Params).Data.AllocatorInstance.Data,0);
    }
    if ((this->URL).Data.ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(this->URL).Data.AllocatorInstance.Data;
    }
    FVar5 = FWindowsPlatformProcess::CreateProc
                      (local_res8,pwVar8,(bool)uVar3,false,this->Hidden,
                       (uint *)CONCAT71(in_stack_ffffffffffffffb1,this->Hidden),0,
                       (wchar_t *)((ulonglong)in_stack_ffffffffffffffc4 << 0x20),pwVar4,
                       this->WritePipe);
    FVar5 = *(FProcHandle *)FVar5;
    this->ProcessHandle = FVar5;
    if (FVar5 != (FProcHandle)0x0) {
      LOCK();
      MonitoredProcessIndex = (atomic<unsigned_int>)((int)MonitoredProcessIndex + 1);
      UNLOCK();
      ::FString::PrintfImpl(&local_18,L"FMonitoredProcess %d");
      LOCK();
      this->bIsRunning = (TAtomic<bool>)0x1;
      UNLOCK();
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar9.Data = local_18.Data.AllocatorInstance.Data;
      }
      pFVar6 = FRunnableThread::Create
                         ((FRunnable *)this,(wchar_t *)FVar9.Data,0x20000,TPri_AboveNormal,
                          0xffffffffffffffff,None);
      this->Thread = pFVar6;
      bVar2 = FGenericPlatformProcess::SupportsMultithreading();
      if (!bVar2) {
        FVar7 = FDateTime::UtcNow();
        LOCK();
        this->StartTime = *(TAtomic<FDateTime> *)FVar7.Ticks;
        UNLOCK();
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      return true;
    }
  }
  return false;
}

// ProcessOutput @ 1418f0be0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FMonitoredProcess::ProcessOutput(FMonitoredProcess *this,FString *param_1)

{
  FString *this_00;
  TDelegate<void___cdecl(FString),FDefaultDelegateUserPolicy> *this_01;
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  FScriptContainerElement *local_68;
  int local_60;
  int local_5c;
  FString local_58;
  FDestructionSentinel local_48;
  
  iVar5 = (param_1->Data).ArrayNum;
  this_00 = &this->OutputBuffer;
  uVar8 = 0;
  iVar13 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar13 = 0;
  }
  ::FString::AppendChars(this_00,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar13);
  this_01 = &this->OutputDelegate;
  bVar4 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_01);
  if (bVar4) {
    uVar12 = 1;
    uVar10 = uVar8;
    uVar11 = uVar8;
    while( true ) {
      iVar7 = (int)uVar8;
      iVar13 = (this->OutputBuffer).Data.ArrayNum;
      iVar5 = iVar13 + -1;
      if (iVar13 == 0) {
        iVar5 = 0;
      }
      iVar9 = (int)uVar10;
      if (iVar5 <= iVar7) break;
      if ((((iVar13 == 0) || (iVar7 < 0)) || (iVar13 + -1 <= iVar7)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x107,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(short *)((this_00->Data).AllocatorInstance.Data + uVar11) == 0xd) {
LAB_1418f0d22:
        pFVar6 = ::FString::Mid(this_00,&local_58,iVar9,iVar7 - iVar9);
        local_48.AccessType = Reader;
        local_48.bDestroyed = false;
        local_48.Accessor = (FMRSWRecursiveAccessDetector *)this_01;
        FMRSWRecursiveAccessDetector::AcquireReadAccess
                  ((FMRSWRecursiveAccessDetector *)this_01,&local_48);
        if ((*(int *)&(this->OutputDelegate).field_0x10 != 0) &&
           (plVar1 = *(longlong **)&(this->OutputDelegate).field_0x8, plVar1 != (longlong *)0x0)) {
          pcVar3 = *(code **)(*plVar1 + 0x68);
          local_68 = (pFVar6->Data).AllocatorInstance.Data;
          (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_60 = (pFVar6->Data).ArrayNum;
          local_5c = (pFVar6->Data).ArrayMax;
          (pFVar6->Data).ArrayNum = 0;
          (pFVar6->Data).ArrayMax = 0;
          (*pcVar3)(plVar1,&local_68);
        }
        if (local_48.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseReadAccess(local_48.Accessor,&local_48);
        }
        pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        if (iVar7 < 0) {
code_r0x0001418f0df5:
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x107,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else {
          iVar13 = (this->OutputBuffer).Data.ArrayNum;
          iVar5 = iVar13 + -1;
          if (iVar13 == 0) {
            iVar5 = 0;
          }
          if (iVar5 <= iVar7) goto code_r0x0001418f0df5;
        }
        if (*(short *)((this_00->Data).AllocatorInstance.Data + uVar11) == 0xd) {
          iVar13 = (this->OutputBuffer).Data.ArrayNum;
          iVar5 = iVar13 + -1;
          if (iVar13 == 0) {
            iVar5 = 0;
          }
          if ((int)uVar12 < iVar5) {
            if ((((iVar13 == 0) || ((int)uVar12 < 0)) || (iVar13 + -1 <= (int)uVar12)) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValidIndex(Index)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                   ,0x107,
                                   L"String index out of bounds: Index %i from a string with a length of %i"
                                  ), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (*(short *)((this_00->Data).AllocatorInstance.Data + uVar11 + 2) == 10) {
              iVar7 = iVar7 + 1;
              uVar12 = uVar12 + 1;
              uVar11 = uVar11 + 2;
            }
          }
        }
        uVar10 = (ulonglong)uVar12;
      }
      else {
        if (iVar7 < 0) {
code_r0x0001418f0cfa:
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x107,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else {
          iVar13 = (this->OutputBuffer).Data.ArrayNum;
          iVar5 = iVar13 + -1;
          if (iVar13 == 0) {
            iVar5 = 0;
          }
          if (iVar5 <= iVar7) goto code_r0x0001418f0cfa;
        }
        if (*(short *)((this_00->Data).AllocatorInstance.Data + uVar11) == 10) goto LAB_1418f0d22;
      }
      uVar8 = (ulonglong)(iVar7 + 1);
      uVar12 = uVar12 + 1;
      uVar11 = uVar11 + 2;
    }
    ::FString::RemoveAt(this_00,0,iVar9,No);
  }
  return;
}

// Run @ 1418f3730

uint __thiscall FMonitoredProcess::Run(FMonitoredProcess *this)

{
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  FDateTime local_18 [2];
  
  FWindowsPlatformTime::UtcTime
            (&local_20,&local_24,&local_1c,&local_28,local_res20,local_res18,local_res10,local_res8)
  ;
  FDateTime::FDateTime
            (local_18,local_20,local_24,local_28,local_res20[0],local_res18[0],local_res10[0],
             local_res8[0]);
  LOCK();
  this->StartTime = (TAtomic<FDateTime>)local_18[0].Ticks;
  UNLOCK();
  while (this->bIsRunning != (TAtomic<bool>)0x0) {
    FWindowsPlatformProcess::Sleep(this->SleepInterval);
    TickInternal(this);
  }
  return 0;
}

// Stop @ 1418f9a70

void __thiscall FMonitoredProcess::Stop(FMonitoredProcess *this)

{
  LOCK();
  this->KillTree = (TAtomic<bool>)0x0;
  UNLOCK();
  LOCK();
  this->Canceling = (TAtomic<bool>)0x1;
  UNLOCK();
  return;
}

// Tick @ 1418fab00

void __thiscall FMonitoredProcess::Tick(FMonitoredProcess *this)

{
  if (*(char *)&this->Thread != '\0') {
    TickInternal((FMonitoredProcess *)&this[-1].OutputDelegate.field_0x10);
    return;
  }
  return;
}

// TickInternal @ 1418fae50

void __thiscall FMonitoredProcess::TickInternal(FMonitoredProcess *this)

{
  bool bVar1;
  TAtomic<int> TVar2;
  FString *pFVar3;
  TAtomic<int> local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  FDateTime local_48;
  FString local_40 [2];
  
  if (this->Canceling != (TAtomic<bool>)0x0) {
    FWindowsPlatformProcess::TerminateProc(&this->ProcessHandle,(bool)this->KillTree);
    FWindowsPlatformTime::UtcTime
              (&local_50,&local_54,&local_4c,&local_58,local_res20,local_res18,local_res10,
               (int *)local_res8);
    FDateTime::FDateTime
              (&local_48,local_50,local_54,local_58,local_res20[0],local_res18[0],local_res10[0],
               (int)local_res8[0]);
    LOCK();
    this->EndTime = (TAtomic<FDateTime>)local_48.Ticks;
    UNLOCK();
    pFVar3 = FWindowsPlatformProcess::ReadPipe(local_40,this->ReadPipe);
    ProcessOutput(this,pFVar3);
    if ((TAtomic<FDateTime>)local_40[0].Data.AllocatorInstance.Data != (TAtomic<FDateTime>)0x0) {
      FMemory::Free(local_40[0].Data.AllocatorInstance.Data);
    }
    FWindowsPlatformProcess::ClosePipe(this->ReadPipe,this->WritePipe);
    this->WritePipe = (void *)0x0;
    this->ReadPipe = (void *)0x0;
    LOCK();
    this->ReturnCode = (TAtomic<int>)0xffffffff;
    UNLOCK();
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
              (&this->CanceledDelegate);
    LOCK();
    this->bIsRunning = (TAtomic<bool>)0x0;
    UNLOCK();
    return;
  }
  bVar1 = FWindowsPlatformProcess::IsProcRunning(&this->ProcessHandle);
  if (!bVar1) {
    FWindowsPlatformTime::UtcTime
              (&local_4c,&local_58,(int *)&local_48,&local_54,&local_50,local_res20,local_res18,
               local_res10);
    FDateTime::FDateTime
              ((FDateTime *)local_40,local_4c,local_58,local_54,local_50,local_res20[0],
               local_res18[0],local_res10[0]);
    LOCK();
    this->EndTime = (TAtomic<FDateTime>)local_40[0].Data.AllocatorInstance.Data;
    UNLOCK();
    pFVar3 = FWindowsPlatformProcess::ReadPipe(local_40,this->ReadPipe);
    ProcessOutput(this,pFVar3);
    if ((TAtomic<FDateTime>)local_40[0].Data.AllocatorInstance.Data != (TAtomic<FDateTime>)0x0) {
      FMemory::Free(local_40[0].Data.AllocatorInstance.Data);
    }
    FWindowsPlatformProcess::ClosePipe(this->ReadPipe,this->WritePipe);
    this->WritePipe = (void *)0x0;
    this->ReadPipe = (void *)0x0;
    local_res8[0] = (TAtomic<int>)0x0;
    bVar1 = FWindowsPlatformProcess::GetProcReturnCode(&this->ProcessHandle,(int *)local_res8);
    TVar2 = local_res8[0];
    if (!bVar1) {
      TVar2 = (TAtomic<int>)0xffffffff;
    }
    LOCK();
    this->ReturnCode = TVar2;
    UNLOCK();
    TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::ExecuteIfBound
              (&this->CompletedDelegate,(int)this->ReturnCode);
    LOCK();
    this->bIsRunning = (TAtomic<bool>)0x0;
    UNLOCK();
    return;
  }
  pFVar3 = FWindowsPlatformProcess::ReadPipe(local_40,this->ReadPipe);
  ProcessOutput(this,pFVar3);
  if ((TAtomic<FDateTime>)local_40[0].Data.AllocatorInstance.Data != (TAtomic<FDateTime>)0x0) {
    FMemory::Free(local_40[0].Data.AllocatorInstance.Data);
  }
  return;
}

// Update @ 1418fe600

bool __thiscall FMonitoredProcess::Update(FMonitoredProcess *this)

{
  bool bVar1;
  
  bVar1 = FGenericPlatformProcess::SupportsMultithreading();
  if (!bVar1) {
    FWindowsPlatformProcess::Sleep(this->SleepInterval);
    (**(code **)(this->_padding_ + 8))(&this->_padding_);
  }
  return (bool)this->bIsRunning;
}

