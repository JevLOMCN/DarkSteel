// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 13

// FInteractiveProcess @ 1418bbd80

FInteractiveProcess * __thiscall
FInteractiveProcess::FInteractiveProcess
          (FInteractiveProcess *this,FString *param_1,FString *param_2,FString *param_3,bool param_4
          ,bool param_5)

{
  TNode *pTVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  float fVar4;
  
  *(undefined ***)this = &___7FInteractiveProcess__6B_;
  this->field_0x8 = this->field_0x8 & 0xf8 | param_4 * '\x02';
  ::FString::FString(&this->URL,param_1);
  ::FString::FString(&this->Params,param_2);
  ::FString::FString(&this->WorkingDir,param_3);
  pTVar3 = (TNode *)0x0;
  this->ProcessHandle = (FProcHandle)0x0;
  this->ReadPipeParent = (void *)0x0;
  this->WritePipeParent = (void *)0x0;
  this->ReadPipeChild = (void *)0x0;
  this->WritePipeChild = (void *)0x0;
  this->Thread = (FRunnableThread *)0x0;
  (this->ThreadName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ThreadName).Data.ArrayNum = 0;
  (this->ThreadName).Data.ArrayMax = 0;
  this->ReturnCode = 0;
  (this->StartTime).Ticks = 0;
  (this->EndTime).Ticks = 0;
  pTVar1 = ::operator_new(0x18);
  pTVar2 = pTVar3;
  if (pTVar1 != (TNode *)0x0) {
    pTVar1->NextNode = (TNode *)0x0;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&(pTVar1->Item).AllocatorInstance)->
    AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(undefined8 *)&(pTVar1->Item).ArrayNum = 0;
    pTVar1->NextNode = (TNode *)0x0;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&(pTVar1->Item).AllocatorInstance)->
    AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(undefined8 *)&(pTVar1->Item).ArrayNum = 0;
    pTVar2 = pTVar1;
  }
  (this->StringMessagesToProcess).Tail = (TNode *)pTVar2;
  (this->StringMessagesToProcess).Head = (TNode *)pTVar2;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TNode *)0x0) {
    pTVar2->NextNode = (TNode *)0x0;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&(pTVar2->Item).AllocatorInstance)->
    AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(undefined8 *)&(pTVar2->Item).ArrayNum = 0;
    pTVar2->NextNode = (TNode *)0x0;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&(pTVar2->Item).AllocatorInstance)->
    AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(undefined8 *)&(pTVar2->Item).ArrayNum = 0;
    pTVar3 = pTVar2;
  }
  (this->DataMessagesToProcess).Tail = pTVar3;
  (this->DataMessagesToProcess).Head = pTVar3;
  *(undefined8 *)&this->CanceledDelegate = 0;
  *(undefined8 *)&(this->CanceledDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->CanceledDelegate).field_0x10 = 0;
  *(undefined8 *)&this->CompletedDelegate = 0;
  *(undefined8 *)&(this->CompletedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->CompletedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OutputDelegate = 0;
  *(undefined8 *)&(this->OutputDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OutputDelegate).field_0x10 = 0;
  fVar4 = __real_3a83126f;
  if (!param_5) {
    fVar4 = 0.0;
  }
  this->SleepTime = fVar4;
  return this;
}

// FInteractiveProcess @ 1418bbf00

FInteractiveProcess * __thiscall
FInteractiveProcess::FInteractiveProcess
          (FInteractiveProcess *this,FString *param_1,FString *param_2,bool param_3,bool param_4)

{
  TNode *pTVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  float fVar4;
  
  *(undefined ***)this = &___7FInteractiveProcess__6B_;
  this->field_0x8 = this->field_0x8 & 0xf8 | param_3 * '\x02';
  ::FString::FString(&this->URL,param_1);
  ::FString::FString(&this->Params,param_2);
  pTVar3 = (TNode *)0x0;
  (this->WorkingDir).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkingDir).Data.ArrayNum = 0;
  (this->WorkingDir).Data.ArrayMax = 0;
  this->ProcessHandle = (FProcHandle)0x0;
  this->ReadPipeParent = (void *)0x0;
  this->WritePipeParent = (void *)0x0;
  this->ReadPipeChild = (void *)0x0;
  this->WritePipeChild = (void *)0x0;
  this->Thread = (FRunnableThread *)0x0;
  (this->ThreadName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ThreadName).Data.ArrayNum = 0;
  (this->ThreadName).Data.ArrayMax = 0;
  this->ReturnCode = 0;
  (this->StartTime).Ticks = 0;
  (this->EndTime).Ticks = 0;
  pTVar1 = ::operator_new(0x18);
  pTVar2 = pTVar3;
  if (pTVar1 != (TNode *)0x0) {
    pTVar1->NextNode = (TNode *)0x0;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&(pTVar1->Item).AllocatorInstance)->
    AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(undefined8 *)&(pTVar1->Item).ArrayNum = 0;
    pTVar1->NextNode = (TNode *)0x0;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&(pTVar1->Item).AllocatorInstance)->
    AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(undefined8 *)&(pTVar1->Item).ArrayNum = 0;
    pTVar2 = pTVar1;
  }
  (this->StringMessagesToProcess).Tail = (TNode *)pTVar2;
  (this->StringMessagesToProcess).Head = (TNode *)pTVar2;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TNode *)0x0) {
    pTVar2->NextNode = (TNode *)0x0;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&(pTVar2->Item).AllocatorInstance)->
    AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(undefined8 *)&(pTVar2->Item).ArrayNum = 0;
    pTVar2->NextNode = (TNode *)0x0;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&(pTVar2->Item).AllocatorInstance)->
    AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(undefined8 *)&(pTVar2->Item).ArrayNum = 0;
    pTVar3 = pTVar2;
  }
  (this->DataMessagesToProcess).Tail = pTVar3;
  (this->DataMessagesToProcess).Head = pTVar3;
  *(undefined8 *)&this->CanceledDelegate = 0;
  *(undefined8 *)&(this->CanceledDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->CanceledDelegate).field_0x10 = 0;
  *(undefined8 *)&this->CompletedDelegate = 0;
  *(undefined8 *)&(this->CompletedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->CompletedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OutputDelegate = 0;
  *(undefined8 *)&(this->OutputDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OutputDelegate).field_0x10 = 0;
  fVar4 = __real_3a83126f;
  if (!param_4) {
    fVar4 = 0.0;
  }
  this->SleepTime = fVar4;
  *(undefined ***)this = &___7FInteractiveProcess__6B_;
  return this;
}

// ~FInteractiveProcess @ 1418bece0

void __thiscall FInteractiveProcess::~FInteractiveProcess(FInteractiveProcess *this)

{
  FRunnableThread *pFVar1;
  TNode *pTVar2;
  FScriptContainerElement *pFVar3;
  TNode *pTVar4;
  
  *(undefined ***)this = &___7FInteractiveProcess__6B_;
  if (this->Thread != (FRunnableThread *)0x0) {
    this->bCanceling = true;
    this->bKillTree = false;
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
  pTVar2 = (this->DataMessagesToProcess).Tail;
  while (pTVar2 != (TNode *)0x0) {
    (this->DataMessagesToProcess).Tail = pTVar2->NextNode;
    pFVar3 = (pTVar2->Item).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(pTVar2,0x18);
    pTVar2 = (this->DataMessagesToProcess).Tail;
  }
  pTVar4 = (this->StringMessagesToProcess).Tail;
  while (pTVar4 != (TNode *)0x0) {
    (this->StringMessagesToProcess).Tail = pTVar4->NextNode;
    pFVar3 = (pTVar4->Item).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(pTVar4,0x18);
    pTVar4 = (this->StringMessagesToProcess).Tail;
  }
  pFVar3 = (this->ThreadName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->WorkingDir).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Params).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->URL).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined ***)this = &___7FRunnable__6B_;
  return;
}

// Exit @ 1418da370

void __thiscall FInteractiveProcess::Exit(FInteractiveProcess *this)

{
  return;
}

// GetDuration @ 1418def70

FTimespan __thiscall FInteractiveProcess::GetDuration(FInteractiveProcess *this)

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
  
  if (this->Thread != (FRunnableThread *)0x0) {
    FWindowsPlatformTime::UtcTime
              (&local_1c,&local_20,local_18,&local_24,&local_28,local_res20,local_res18,local_res8);
    FDateTime::FDateTime
              (&local_10,local_1c,local_20,local_24,local_28,local_res20[0],local_res18[0],
               local_res8[0]);
    *in_RDX = local_10.Ticks - (this->StartTime).Ticks;
    return (FTimespan)(long64)in_RDX;
  }
  *in_RDX = (this->EndTime).Ticks - (this->StartTime).Ticks;
  return (FTimespan)(long64)in_RDX;
}

// Init @ 1418e2860

bool __thiscall FInteractiveProcess::Init(FInteractiveProcess *this)

{
  return true;
}

// Launch @ 1418e3e90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FInteractiveProcess::Launch(FInteractiveProcess *this)

{
  FString *pFVar1;
  bool bVar2;
  BOOL BVar3;
  FProcHandle FVar4;
  FRunnableThread *pFVar5;
  FStaticBasicLogRecord *pFVar6;
  FScriptContainerElement *pFVar7;
  wchar_t *pwVar8;
  undefined1 uVar9;
  wchar_t local_res8 [4];
  undefined7 in_stack_ffffffffffffff81;
  uint in_stack_ffffffffffffff94;
  FString local_48;
  _SECURITY_ATTRIBUTES local_38;
  
  if (this->Thread == (FRunnableThread *)0x0) {
    bVar2 = FWindowsPlatformProcess::CreatePipe(&this->ReadPipeParent,&this->WritePipeChild,false);
    if (bVar2) {
      pFVar7 = (FScriptContainerElement *)0x0;
      local_38.nLength = 0x18;
      local_38.lpSecurityDescriptor = (LPVOID)0x0;
      local_38.bInheritHandle = 1;
      BVar3 = CreatePipe(&this->ReadPipeChild,&this->WritePipeParent,&local_38,0);
      if ((BVar3 == 0) || (BVar3 = SetHandleInformation(this->WritePipeParent,1,0), BVar3 == 0)) {
        if ((byte)LogInteractiveProcess._0_1_ < 2) {
          return false;
        }
        pFVar6 = &::LOG_Static;
      }
      else {
        if (1 < (this->WorkingDir).Data.ArrayNum) {
          pFVar7 = (this->WorkingDir).Data.AllocatorInstance.Data;
        }
        if ((this->Params).Data.ArrayNum == 0) {
          uVar9 = 0x6c;
        }
        else {
          uVar9 = SUB81((this->Params).Data.AllocatorInstance.Data,0);
        }
        if ((this->URL).Data.ArrayNum == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)(this->URL).Data.AllocatorInstance.Data;
        }
        FVar4 = FWindowsPlatformProcess::CreateProc
                          (local_res8,pwVar8,(bool)uVar9,false,this->bHidden,
                           (uint *)(CONCAT71(in_stack_ffffffffffffff81,(byte)this->field_0x8 >> 1) &
                                   0xffffffffffffff01),0,
                           (wchar_t *)((ulonglong)in_stack_ffffffffffffff94 << 0x20),pFVar7,
                           this->WritePipeChild);
        FVar4 = *(FProcHandle *)FVar4;
        this->ProcessHandle = FVar4;
        if (FVar4 == (FProcHandle)0x0) {
          if ((byte)LogInteractiveProcess._0_1_ < 2) {
            return false;
          }
          pFVar6 = &::LOG_Static;
        }
        else {
          ::FString::PrintfImpl(&local_48,L"FInteractiveProcess %d");
          pFVar1 = &this->ThreadName;
          if (pFVar1 != &local_48) {
            pFVar7 = (pFVar1->Data).AllocatorInstance.Data;
            if (pFVar7 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar7);
            }
            (pFVar1->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
            (this->ThreadName).Data.ArrayNum = local_48.Data.ArrayNum;
            (this->ThreadName).Data.ArrayMax = local_48.Data.ArrayMax;
            local_48.Data.ArrayNum = 0;
            local_48.Data.ArrayMax = 0;
            local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          }
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          tempInteractiveProcessIndex = tempInteractiveProcessIndex + 1;
          if ((this->ThreadName).Data.ArrayNum == 0) {
            pwVar8 = L"";
          }
          else {
            pwVar8 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
          }
          pFVar5 = FRunnableThread::Create
                             ((FRunnable *)this,pwVar8,0,TPri_Normal,0xffffffffffffffff,None);
          this->Thread = pFVar5;
          if (pFVar5 != (FRunnableThread *)0x0) {
            if (4 < (byte)LogInteractiveProcess._0_1_) {
              UE::Logging::Private::BasicLog<5>
                        (&::LOG_Static,(FLogCategoryBase *)&LogInteractiveProcess);
            }
            return true;
          }
          if ((byte)LogInteractiveProcess._0_1_ < 2) {
            return false;
          }
          pFVar6 = &::LOG_Static;
        }
      }
    }
    else {
      if ((byte)LogInteractiveProcess._0_1_ < 2) {
        return false;
      }
      pFVar6 = &::LOG_Static;
    }
    UE::Logging::Private::BasicLog<2>(pFVar6,(FLogCategoryBase *)&LogInteractiveProcess);
  }
  else if (2 < (byte)LogInteractiveProcess._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInteractiveProcess);
  }
  return false;
}

// ProcessOutput @ 1418f0990

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FInteractiveProcess::ProcessOutput(FInteractiveProcess *this,FString *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  TArray<FString,TSizedDefaultAllocator<32>_> local_58;
  FDestructionSentinel local_48;
  
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  ::FString::ParseIntoArray(param_1,&local_58,L"\n",false);
  uVar6 = 0;
  iVar5 = local_58.ArrayNum;
  if (0 < local_58.ArrayNum) {
    lVar8 = 0;
    do {
      uVar7 = ~uVar6 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = uVar7;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar5 = local_58.ArrayNum;
      }
      if (1 < *(int *)(local_58.AllocatorInstance.Data + lVar8 + 8)) {
        uVar4 = 0;
        if ((int)uVar6 < iVar5) {
          uVar4 = uVar7;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_48.AccessType = Reader;
        pFVar9 = local_58.AllocatorInstance.Data + lVar8;
        local_48.bDestroyed = false;
        local_48.Accessor = (FMRSWRecursiveAccessDetector *)&this->OutputDelegate;
        FMRSWRecursiveAccessDetector::AcquireReadAccess
                  ((FMRSWRecursiveAccessDetector *)&this->OutputDelegate,&local_48);
        if ((*(int *)&(this->OutputDelegate).field_0x10 != 0) &&
           (plVar1 = *(longlong **)&(this->OutputDelegate).field_0x8, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x68))(plVar1,pFVar9);
        }
        if (local_48.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseReadAccess(local_48.Accessor,&local_48);
        }
        if (4 < (byte)LogInteractiveProcess._0_1_) {
          uVar4 = 0;
          if ((int)uVar6 < local_58.ArrayNum) {
            uVar4 = uVar7;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&LogInteractiveProcess);
        }
        iVar5 = local_58.ArrayNum;
      }
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 0x10;
    } while ((int)uVar6 < iVar5);
  }
  DestructItems<FString,int>((FString *)local_58.AllocatorInstance.Data,iVar5);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// Run @ 1418f34d0

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall FInteractiveProcess::Run(FInteractiveProcess *this)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  FString *pFVar6;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  FDestructionSentinel local_48;
  
  FWindowsPlatformTime::UtcTime
            (&local_50,&local_54,&local_4c,&local_58,local_res20,local_res18,local_res10,local_res8)
  ;
  FDateTime::FDateTime
            ((FDateTime *)&local_48,local_50,local_54,local_58,local_res20[0],local_res18[0],
             local_res10[0],local_res8[0]);
  (this->StartTime).Ticks = CONCAT44(local_48._4_4_,local_48.AccessType);
  while( true ) {
    FWindowsPlatformProcess::Sleep(this->SleepTime);
    pFVar6 = FWindowsPlatformProcess::ReadPipe((FString *)&local_48,this->ReadPipeParent);
    ProcessOutput(this,pFVar6);
    if ((void *)CONCAT44(local_48._4_4_,local_48.AccessType) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_48._4_4_,local_48.AccessType));
    }
    SendMessageToProcessIf(this);
    if (this->bCanceling) break;
    bVar5 = FWindowsPlatformProcess::IsProcRunning(&this->ProcessHandle);
    if (!bVar5) {
      FWindowsPlatformProcess::ClosePipe(this->ReadPipeParent,this->WritePipeChild);
      this->WritePipeChild = (void *)0x0;
      this->ReadPipeParent = (void *)0x0;
      FWindowsPlatformProcess::ClosePipe(this->ReadPipeChild,this->WritePipeParent);
      piVar1 = &this->ReturnCode;
      this->WritePipeParent = (void *)0x0;
      this->ReadPipeChild = (void *)0x0;
      bVar5 = FWindowsPlatformProcess::GetProcReturnCode(&this->ProcessHandle,piVar1);
      if (!bVar5) {
        *piVar1 = -1;
      }
      FWindowsPlatformTime::UtcTime
                (&local_58,&local_54,&local_4c,&local_50,local_res20,local_res18,local_res10,
                 local_res8);
      FDateTime::FDateTime
                ((FDateTime *)&local_48,local_58,local_54,local_50,local_res20[0],local_res18[0],
                 local_res10[0],local_res8[0]);
      local_48.Accessor = (FMRSWRecursiveAccessDetector *)&this->CompletedDelegate;
      iVar3 = *piVar1;
      (this->EndTime).Ticks = CONCAT44(local_48._4_4_,local_48.AccessType);
      local_48.AccessType = Reader;
      local_48.bDestroyed = false;
      FMRSWRecursiveAccessDetector::AcquireReadAccess(local_48.Accessor,&local_48);
      if ((*(int *)&(this->CompletedDelegate).field_0x10 != 0) &&
         (plVar4 = *(longlong **)&(this->CompletedDelegate).field_0x8, plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x68))(plVar4,iVar3,this->bCanceling);
      }
      if (local_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseReadAccess(local_48.Accessor,&local_48);
      }
      return 0;
    }
  }
  FWindowsPlatformProcess::TerminateProc(&this->ProcessHandle,this->bKillTree);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound(&this->CanceledDelegate);
  if (4 < (byte)LogInteractiveProcess._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInteractiveProcess);
  }
  return 0;
}

// SendMessageToProcessIf @ 1418f42e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FInteractiveProcess::SendMessageToProcessIf(FInteractiveProcess *this)

{
  FString *pFVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  TNode *pTVar3;
  TNode *pTVar4;
  FScriptContainerElement *pFVar5;
  TNode *pTVar6;
  TNode *pTVar7;
  bool bVar8;
  int iVar9;
  FStaticBasicLogRecord *pFVar10;
  int iVar11;
  ForAnyElementType FVar12;
  TNode **ppTVar13;
  FString local_68;
  FString local_58;
  undefined8 local_48 [2];
  undefined8 local_38 [2];
  undefined8 local_28 [2];
  
  ppTVar13 = &(this->DataMessagesToProcess).Tail;
  if ((((this->StringMessagesToProcess).Tail)->NextNode == (TNode *)0x0) &&
     ((*ppTVar13)->NextNode == (TNode *)0x0)) {
    return;
  }
  if (this->WritePipeParent == (void *)0x0) {
    if ((byte)LogInteractiveProcess._0_1_ < 3) {
      return;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInteractiveProcess);
    return;
  }
  if (this->ProcessHandle == (FProcHandle)0x0) {
    if ((byte)LogInteractiveProcess._0_1_ < 3) {
      return;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInteractiveProcess);
    return;
  }
  if (((this->StringMessagesToProcess).Tail)->NextNode == (TNode *)0x0) {
    if ((*ppTVar13)->NextNode == (TNode *)0x0) {
      return;
    }
    FVar12.Data = (FScriptContainerElement *)0x0;
    iVar9 = 0;
    pTVar6 = (*ppTVar13)->NextNode;
    if (pTVar6 != (TNode *)0x0) {
      pTVar2 = &pTVar6->Item;
      iVar9 = 0;
      if ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)local_38 != pTVar2) {
        FVar12.Data = (pTVar2->AllocatorInstance).Data;
        (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        iVar9 = (pTVar6->Item).ArrayNum;
        (pTVar6->Item).ArrayNum = 0;
        (pTVar6->Item).ArrayMax = 0;
      }
      ppTVar13 = &(this->DataMessagesToProcess).Tail;
      pTVar7 = *ppTVar13;
      *ppTVar13 = pTVar6;
      if (pTVar2 != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)local_28) {
        pFVar5 = (pTVar2->AllocatorInstance).Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        (pTVar6->Item).ArrayNum = 0;
        (pTVar6->Item).ArrayMax = 0;
      }
      if (pTVar7 != (TNode *)0x0) {
        pFVar5 = (pTVar7->Item).AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        ::operator_delete(pTVar7,0x18);
      }
    }
    bVar8 = FWindowsPlatformProcess::WritePipe
                      (this->WritePipeParent,(uchar *)FVar12.Data,iVar9,(int *)0x0);
    if ((!bVar8) && (1 < (byte)LogInteractiveProcess._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInteractiveProcess);
    }
    goto joined_r0x0001418f45da;
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  pTVar3 = ((this->StringMessagesToProcess).Tail)->NextNode;
  if (pTVar3 != (TNode *)0x0) {
    pFVar1 = &pTVar3->Item;
    if (&local_68 != pFVar1) {
      local_68.Data.AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = (pTVar3->Item).Data.ArrayNum;
      local_68.Data.ArrayMax = (pTVar3->Item).Data.ArrayMax;
      (pTVar3->Item).Data.ArrayNum = 0;
      (pTVar3->Item).Data.ArrayMax = 0;
    }
    pTVar4 = (this->StringMessagesToProcess).Tail;
    (this->StringMessagesToProcess).Tail = pTVar3;
    if (pFVar1 != (FString *)local_48) {
      pFVar5 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar3->Item).Data.ArrayNum = 0;
      (pTVar3->Item).Data.ArrayMax = 0;
    }
    if (pTVar4 != (TNode *)0x0) {
      pFVar5 = (pTVar4->Item).Data.AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      ::operator_delete(pTVar4,0x18);
    }
  }
  FWindowsPlatformProcess::WritePipe(this->WritePipeParent,&local_68,&local_58);
  if (4 < (byte)LogInteractiveProcess._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInteractiveProcess);
  }
  iVar9 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar9 = 0;
  }
  if (iVar9 == 0) {
    if (1 < (byte)LogInteractiveProcess._0_1_) {
      pFVar10 = &::LOG_Static;
LAB_1418f44d4:
      UE::Logging::Private::BasicLog<2>(pFVar10,(FLogCategoryBase *)&LogInteractiveProcess);
    }
  }
  else {
    iVar9 = local_68.Data.ArrayNum + -1;
    if (local_68.Data.ArrayNum == 0) {
      iVar9 = 0;
    }
    iVar11 = 0;
    if (local_58.Data.ArrayNum != 0) {
      iVar11 = local_58.Data.ArrayNum + -1;
    }
    if ((iVar11 < iVar9) && (1 < (byte)LogInteractiveProcess._0_1_)) {
      pFVar10 = &::LOG_Static;
      goto LAB_1418f44d4;
    }
  }
  FVar12.Data = local_58.Data.AllocatorInstance.Data;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
    FVar12.Data = local_58.Data.AllocatorInstance.Data;
  }
joined_r0x0001418f45da:
  if (FVar12.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar12.Data);
  }
  return;
}

// SendWhenReady @ 1418f4610

void __thiscall
FInteractiveProcess::SendWhenReady
          (FInteractiveProcess *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  TNode *pTVar3;
  TNode *pTVar4;
  
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TNode *)0x0) {
    pTVar4->NextNode = (TNode *)0x0;
    (pTVar4->Item).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar2 = param_1->ArrayNum;
    _Src = (param_1->AllocatorInstance).Data;
    (pTVar4->Item).ArrayNum = iVar2;
    piVar1 = &(pTVar4->Item).ArrayMax;
    if (iVar2 == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar2,0,&(pTVar4->Item).AllocatorInstance,iVar2,piVar1);
      memcpy((pTVar4->Item).AllocatorInstance.Data,_Src,(longlong)iVar2);
    }
    pTVar3 = (this->DataMessagesToProcess).Head;
    (this->DataMessagesToProcess).Head = pTVar4;
    pTVar3->NextNode = pTVar4;
  }
  return;
}

// SendWhenReady @ 1418f46d0

void __thiscall FInteractiveProcess::SendWhenReady(FInteractiveProcess *this,FString *param_1)

{
  TNode *pTVar1;
  TNode *pTVar2;
  
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TNode *)0x0) {
    pTVar2->NextNode = (TNode *)0x0;
    ::FString::FString(&pTVar2->Item,param_1);
    pTVar1 = (this->StringMessagesToProcess).Head;
    (this->StringMessagesToProcess).Head = pTVar2;
    pTVar1->NextNode = pTVar2;
  }
  return;
}

// Stop @ 1418f9a50

void __thiscall FInteractiveProcess::Stop(FInteractiveProcess *this)

{
  this->bCanceling = true;
  this->bKillTree = false;
  return;
}

