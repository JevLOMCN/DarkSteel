// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 4

// ~FAsyncLatentCommand @ 142ce5600

void __thiscall
FAutomationSpecBase::FAsyncLatentCommand::~FAsyncLatentCommand(FAsyncLatentCommand *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7FAsyncLatentCommand_FAutomationSpecBase__6B_;
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
                    /* WARNING: Could not recover jumptable at 0x000142ce5677. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// operator() @ 142ce7800

void __thiscall
`FAutomationSpecBase::FAsyncLatentCommand::Update'::__l5::<lambda_1>::operator()(void *this)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)this;
  UE::Core::Private::Function::CheckCallable(*(void **)(lVar1 + 0x30));
  pcVar2 = *(code **)(lVar1 + 0x30);
  plVar5 = (longlong *)(lVar1 + 0x40);
  if (*(longlong **)(lVar1 + 0x58) != (longlong *)0x0) {
    plVar5 = *(longlong **)(lVar1 + 0x58);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar2)(uVar4);
  lVar1 = *(longlong *)this;
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar1 + 0x88);
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection(lpCriticalSection);
  if (*(longlong *)(lVar1 + 0x78) != 0) {
    LOCK();
    *(undefined4 *)(lVar1 + 0x6c) = 1;
    UNLOCK();
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

// Reset @ 142cf9500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FAutomationSpecBase::FAsyncLatentCommand::Reset(FAsyncLatentCommand *this)

{
  TFuture<void> *pTVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  PRTL_CRITICAL_SECTION_DEBUG p_Var8;
  ULONG_PTR UVar9;
  bool bVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  FSharedReferencer<1> FStack_50;
  code *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  lpCriticalSection = &this->ActionCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Mutex",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                        ,0x1b,L"");
    if (bVar10) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar1 = &this->Future;
  LOCK();
  this->bDone = (FThreadSafeBool)0x0;
  UNLOCK();
  lpCriticalSection_00 = *(LPCRITICAL_SECTION *)pTVar1;
  if (lpCriticalSection_00 == (LPCRITICAL_SECTION)0x0) goto LAB_142cf9666;
  local_48 = (code *)0x0;
  uStack_20 = (longlong *)0x0;
  if (*(char *)&lpCriticalSection_00[2].LockSemaphore == '\0') {
    EnterCriticalSection(lpCriticalSection_00);
    if (*(char *)&lpCriticalSection_00[2].LockSemaphore != '\0') {
      LeaveCriticalSection(lpCriticalSection_00);
      goto LAB_142cf95e5;
    }
    pcVar2 = *(code **)&lpCriticalSection_00[1].LockCount;
    uVar3 = *(undefined4 *)&lpCriticalSection_00[1].OwningThread;
    uVar4 = *(undefined4 *)((longlong)&lpCriticalSection_00[1].OwningThread + 4);
    uVar5 = *(undefined4 *)&lpCriticalSection_00[1].LockSemaphore;
    uVar6 = *(undefined4 *)((longlong)&lpCriticalSection_00[1].LockSemaphore + 4);
    UVar9 = lpCriticalSection_00[1].SpinCount;
    uVar7 = *(undefined4 *)((longlong)&lpCriticalSection_00[1].SpinCount + 4);
    p_Var8 = lpCriticalSection_00[2].DebugInfo;
    plVar12 = *(longlong **)&lpCriticalSection_00[2].LockCount;
    *(code **)&lpCriticalSection_00[1].LockCount = local_48;
    lpCriticalSection_00[1].OwningThread = (HANDLE)CONCAT44(uStack_3c,uStack_40);
    *(undefined4 *)&lpCriticalSection_00[1].LockSemaphore = local_38;
    *(undefined4 *)((longlong)&lpCriticalSection_00[1].LockSemaphore + 4) = uStack_34;
    *(undefined4 *)&lpCriticalSection_00[1].SpinCount = uStack_30;
    *(undefined4 *)((longlong)&lpCriticalSection_00[1].SpinCount + 4) = uStack_2c;
    *(undefined4 *)&lpCriticalSection_00[2].DebugInfo = (undefined4)local_28;
    *(undefined4 *)((longlong)&lpCriticalSection_00[2].DebugInfo + 4) = local_28._4_4_;
    lpCriticalSection_00[2].LockCount = (LONG)uStack_20;
    lpCriticalSection_00[2].RecursionCount = uStack_20._4_4_;
    local_48 = pcVar2;
    uStack_40 = uVar3;
    uStack_3c = uVar4;
    local_38 = uVar5;
    uStack_34 = uVar6;
    uStack_30 = (int)UVar9;
    uStack_2c = uVar7;
    local_28 = p_Var8;
    uStack_20 = plVar12;
    LeaveCriticalSection(lpCriticalSection_00);
LAB_142cf9615:
    if (local_48 != (code *)0x0) {
      plVar12 = (longlong *)&local_38;
      if (uStack_20 != (longlong *)0x0) {
        plVar12 = uStack_20;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
  }
  else {
LAB_142cf95e5:
    if (local_48 != (code *)0x0) {
      UE::Core::Private::Function::CheckCallable(local_48);
      pcVar2 = local_48;
      plVar12 = (longlong *)&local_38;
      if (uStack_20 != (longlong *)0x0) {
        plVar12 = uStack_20;
      }
      uVar11 = (**(code **)(*plVar12 + 8))();
      (*pcVar2)(uVar11);
      goto LAB_142cf9615;
    }
  }
  local_58 = 0;
  FStack_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TFuture<void> *)&local_58) {
    *(undefined8 *)pTVar1 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&(this->Future).field_0x8,&FStack_50);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_50.ReferenceController);
LAB_142cf9666:
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// Update @ 142d19d10

bool __thiscall FAutomationSpecBase::FAsyncLatentCommand::Update(FAsyncLatentCommand *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  EAsyncExecution EVar1;
  FAutomationSpecBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FDateTime FVar6;
  TFuture<void> *pTVar7;
  FAsyncLatentCommand *local_res8 [4];
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
    pTVar7 = Async<_FAutomationSpecBase::FAsyncLatentCommand::Update_::__l5::<lambda_1>_>
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

