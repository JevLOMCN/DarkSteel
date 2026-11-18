// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 6

// FAsyncUntilDoneLatentCommand @ 14eb30590

FAsyncUntilDoneLatentCommand * __thiscall
FAutomationSpecBase::FAsyncUntilDoneLatentCommand::FAsyncUntilDoneLatentCommand
          (FAsyncUntilDoneLatentCommand *this,FAutomationSpecBase *param_1,EAsyncExecution param_2,
          TFunction<void___cdecl(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_const_&)>
          *param_3,FTimespan *param_4,bool param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  this->Spec = param_1;
  this->_padding_ = (longlong)&___7FAsyncUntilDoneLatentCommand_FAutomationSpecBase__6B_;
  this->Execution = param_2;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->Predicate = *(undefined8 *)param_3;
  *(undefined8 *)&(this->Predicate).field_0x28 = *(undefined8 *)&param_3->field_0x28;
  *(undefined8 *)&param_3->field_0x28 = 0;
  uVar1 = *(undefined4 *)&param_3->field_0x14;
  uVar2 = *(undefined4 *)&param_3->field_0x18;
  uVar3 = *(undefined4 *)&param_3->field_0x1c;
  *(undefined4 *)&(this->Predicate).field_0x10 = *(undefined4 *)&param_3->field_0x10;
  *(undefined4 *)&(this->Predicate).field_0x14 = uVar1;
  *(undefined4 *)&(this->Predicate).field_0x18 = uVar2;
  *(undefined4 *)&(this->Predicate).field_0x1c = uVar3;
  *(undefined8 *)&(this->Predicate).field_0x20 = *(undefined8 *)&param_3->field_0x20;
  if (*(longlong *)&this->Predicate != 0) {
    *(undefined8 *)param_3 = 0;
  }
  (this->Timeout).Ticks = param_4->Ticks;
  this->bSkipIfErrored = param_5;
  this->bDone = (FThreadSafeBool)0x0;
  (this->StartedRunning).Ticks = 0;
  *(undefined8 *)&this->Future = 0;
  *(undefined8 *)&(this->Future).field_0x8 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ActionCS,4000);
  if (*(longlong *)param_3 != 0) {
    plVar4 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return this;
}

// ~FAsyncUntilDoneLatentCommand @ 14eb34e20

void __thiscall
FAutomationSpecBase::FAsyncUntilDoneLatentCommand::~FAsyncUntilDoneLatentCommand
          (FAsyncUntilDoneLatentCommand *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7FAsyncUntilDoneLatentCommand_FAutomationSpecBase__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ActionCS);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Future).field_0x8);
  if (*(longlong *)&this->Predicate != 0) {
    plVar3 = *(longlong **)&(this->Predicate).field_0x28;
    plVar4 = (longlong *)&(this->Predicate).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  this->_padding_ = (longlong)&___7IAutomationLatentCommand__6B_;
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014eb34e97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// operator() @ 14eb7f740

void __thiscall
`FAutomationSpecBase::FAsyncUntilDoneLatentCommand::Update'::__l5::<lambda_1>::operator()
          (void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  code *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  bool local_58;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  lVar1 = *(longlong *)this;
  local_68 = FAutomationSpecBase::FAsyncUntilDoneLatentCommand::Done;
  uStack_60 = 0;
  local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_48,(FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,&local_40);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAsyncUntilDoneLatentCommand_FAutomationSpecBase____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = lVar1;
    puVar4[4] = local_68;
    puVar4[5] = CONCAT44(uStack_5c,uStack_60);
    if ((lVar1 == 0) || (puVar4[4] == 0)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  UE::Core::Private::Function::CheckCallable(*(void **)(lVar1 + 0x30));
  pcVar2 = *(code **)(lVar1 + 0x30);
  plVar7 = (longlong *)(lVar1 + 0x40);
  if (*(longlong **)(lVar1 + 0x58) != (longlong *)0x0) {
    plVar7 = *(longlong **)(lVar1 + 0x58);
  }
  uVar6 = (**(code **)(*plVar7 + 8))();
  (*pcVar2)(uVar6,&local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_48,(FWriteAccessScope *)&local_68);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_58 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_5c,uStack_60),
               (FDestructionSentinel *)&local_68);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_48.AccessDetector);
  return;
}

// Done @ 14ebef6a0

void __thiscall
FAutomationSpecBase::FAsyncUntilDoneLatentCommand::Done(FAsyncUntilDoneLatentCommand *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  
  lpCriticalSection = &this->ActionCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(longlong *)&this->Future != 0) {
    LOCK();
    this->bDone = (FThreadSafeBool)0x1;
    UNLOCK();
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// Reset @ 14ec10a80

void __thiscall
FAutomationSpecBase::FAsyncUntilDoneLatentCommand::Reset(FAsyncUntilDoneLatentCommand *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  
  lpCriticalSection = &this->ActionCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  LOCK();
  this->bDone = (FThreadSafeBool)0x0;
  UNLOCK();
  TFutureBase<void>::Reset((TFutureBase<void> *)&this->Future);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// Update @ 14ec1c120

bool __thiscall
FAutomationSpecBase::FAsyncUntilDoneLatentCommand::Update(FAsyncUntilDoneLatentCommand *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  EAsyncExecution EVar1;
  FAutomationSpecBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FDateTime FVar6;
  TFuture<void> *pTVar7;
  FAsyncUntilDoneLatentCommand *local_res8 [4];
  FString local_68;
  undefined1 local_58 [16];
  TUniqueFunction<void___cdecl(void)> local_48;
  
  if (*(longlong *)&this->Future == 0) {
    if ((this->bSkipIfErrored != false) &&
       (bVar4 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this->Spec), bVar4)) {
      return true;
    }
    lpCriticalSection = &this->ActionCS;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    LOCK();
    this->bDone = (FThreadSafeBool)0x0;
    UNLOCK();
    FVar6 = FDateTime::UtcNow();
    EVar1 = this->Execution;
    local_48._0_8_ = 0;
    local_48._40_8_ = 0;
                    /* WARNING: Load size is inaccurate */
    (this->StartedRunning).Ticks = *FVar6.Ticks;
    local_res8[0] = this;
    pTVar7 = Async<_FAutomationSpecBase::FAsyncUntilDoneLatentCommand::Update_::__l5::<lambda_1>_>
                       ((TFuture<void> *)local_58,EVar1,(<lambda_1>_conflict *)local_res8,&local_48)
    ;
    if (&this->Future != pTVar7) {
      *(undefined8 *)&this->Future = *(undefined8 *)pTVar7;
      *(undefined8 *)pTVar7 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&(this->Future).field_0x8,
                 (FSharedReferencer<1> *)&pTVar7->field_0x8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_58._8_8_);
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  if (this->bDone != (FThreadSafeBool)0x0) {
    Reset(this);
    return true;
  }
  FVar6 = FDateTime::UtcNow();
  if ((this->StartedRunning).Ticks + (this->Timeout).Ticks <= *(longlong *)FVar6.Ticks) {
    Reset(this);
    pFVar2 = this->Spec;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Latent command timed out.");
    (*pcVar3)(pFVar2,&local_68,0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    return true;
  }
  return false;
}

