// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 3

// Enqueue @ 1445c9d50

/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::TThreadSafeIntrusiveQueue<UE::IoStore::FHttpRequest>::Enqueue
          (TThreadSafeIntrusiveQueue<UE::IoStore::FHttpRequest> *this,FHttpRequest *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1->NextRequest != (FHttpRequest *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Request->NextRequest == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\ThreadSafeIntrusiveQueue.h"
                       ,0x17,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this != (TThreadSafeIntrusiveQueue<UE::IoStore::FHttpRequest> *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    if (this->Tail == (FHttpRequest *)0x0) {
      if (this->Head != (FHttpRequest *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Head == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\ThreadSafeIntrusiveQueue.h"
                           ,0x20,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      this->Head = param_1;
    }
    else {
      this->Tail->NextRequest = param_1;
    }
    this->ListNum = this->ListNum + 1;
    this->Tail = param_1;
                    /* WARNING: Could not recover jumptable at 0x0001445c9ded. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// Enqueue @ 1445c9e00

void __thiscall
UE::IoStore::TThreadSafeIntrusiveQueue<FIoRequestImpl>::Enqueue
          (TThreadSafeIntrusiveQueue<FIoRequestImpl> *this,FIoRequestImpl *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1->NextRequest != (FIoRequestImpl *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Request->NextRequest == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\ThreadSafeIntrusiveQueue.h"
                       ,0x17,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this != (TThreadSafeIntrusiveQueue<FIoRequestImpl> *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    if (this->Tail == (FIoRequestImpl *)0x0) {
      if (this->Head != (FIoRequestImpl *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Head == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\ThreadSafeIntrusiveQueue.h"
                           ,0x20,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      this->Head = param_1;
    }
    else {
      this->Tail->NextRequest = param_1;
    }
    this->ListNum = this->ListNum + 1;
    this->Tail = param_1;
                    /* WARNING: Could not recover jumptable at 0x0001445c9e9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// EnqueueByPriorityInternal @ 1445ca070

/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::TThreadSafeIntrusiveQueue<UE::IoStore::FHttpRequest>::EnqueueByPriorityInternal
          (TThreadSafeIntrusiveQueue<UE::IoStore::FHttpRequest> *this,FHttpRequest *param_1)

{
  code *pcVar1;
  FHttpRequest *pFVar2;
  bool bVar3;
  FHttpRequest *pFVar4;
  FHttpRequest *pFVar5;
  
  if ((param_1->NextRequest != (FHttpRequest *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Request->NextRequest == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\ThreadSafeIntrusiveQueue.h"
                         ,0x78,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (this->Head == (FHttpRequest *)0x0) {
    if ((this->Tail != (FHttpRequest *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Tail == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\ThreadSafeIntrusiveQueue.h"
                           ,0x7e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this->Tail = param_1;
  }
  else if (param_1->Priority <= this->Head->Priority) {
    if (param_1->Priority <= this->Tail->Priority) {
      if ((this->Tail == (FHttpRequest *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Tail != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\ThreadSafeIntrusiveQueue.h"
                             ,0x87,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this->Tail->NextRequest = param_1;
      this->Tail = param_1;
      return;
    }
    bVar3 = -1 < CpuChannel->Enabled;
    if (bVar3) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`private:_void___cdecl_UE::IoStore::TThreadSafeIntrusiveQueue<UE::IoStore::FHttpRequest>::EnqueueByPriorityInternal(UE::IoStore::FHttpRequest*___ptr64)___ptr64'
                  ::__l35::__CpuProfilerEventSpecId142,"IasBackend::EnqueueByPriority",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\ThreadSafeIntrusiveQueue.h"
                 ,0x8e);
      FCpuProfilerTrace::OutputBeginEvent
                (`private:_void___cdecl_UE::IoStore::TThreadSafeIntrusiveQueue<UE::IoStore::FHttpRequest>::EnqueueByPriorityInternal(UE::IoStore::FHttpRequest*___ptr64)___ptr64'
                 ::__l35::__CpuProfilerEventSpecId142);
    }
    pFVar5 = this->Head;
    if (pFVar5->NextRequest != (FHttpRequest *)0x0) {
      pFVar2 = pFVar5->NextRequest;
      do {
        pFVar4 = pFVar2;
        if (pFVar4->Priority < param_1->Priority) break;
        pFVar2 = pFVar4->NextRequest;
        pFVar5 = pFVar4;
      } while (pFVar4->NextRequest != (FHttpRequest *)0x0);
    }
    param_1->NextRequest = pFVar5->NextRequest;
    pFVar5->NextRequest = param_1;
    if (!bVar3) {
      return;
    }
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  param_1->NextRequest = this->Head;
  this->Head = param_1;
  return;
}

