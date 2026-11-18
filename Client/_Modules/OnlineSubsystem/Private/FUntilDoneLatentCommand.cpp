// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 4

// FUntilDoneLatentCommand @ 14eb31180

FUntilDoneLatentCommand * __thiscall
FAutomationSpecBase::FUntilDoneLatentCommand::FUntilDoneLatentCommand
          (FUntilDoneLatentCommand *this,FAutomationSpecBase *param_1,
          TFunction<void___cdecl(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_const_&)>
          *param_2,FTimespan *param_3,bool param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  this->Spec = param_1;
  this->_padding_ = (longlong)&___7FUntilDoneLatentCommand_FAutomationSpecBase__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->Predicate = *(undefined8 *)param_2;
  *(undefined8 *)&(this->Predicate).field_0x28 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar1 = *(undefined4 *)&param_2->field_0x14;
  uVar2 = *(undefined4 *)&param_2->field_0x18;
  uVar3 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)&(this->Predicate).field_0x10 = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)&(this->Predicate).field_0x14 = uVar1;
  *(undefined4 *)&(this->Predicate).field_0x18 = uVar2;
  *(undefined4 *)&(this->Predicate).field_0x1c = uVar3;
  *(undefined8 *)&(this->Predicate).field_0x20 = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)&this->Predicate != 0) {
    *(undefined8 *)param_2 = 0;
  }
  (this->Timeout).Ticks = param_3->Ticks;
  this->bSkipIfErrored = param_4;
  this->bIsRunning = false;
  (this->StartedRunning).Ticks = 0;
  this->bDone = (FThreadSafeBool)0x0;
  if (*(longlong *)param_2 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return this;
}

// ~FUntilDoneLatentCommand @ 14eb35790

void __thiscall
FAutomationSpecBase::FUntilDoneLatentCommand::~FUntilDoneLatentCommand
          (FUntilDoneLatentCommand *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7FUntilDoneLatentCommand_FAutomationSpecBase__6B_;
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
                    /* WARNING: Could not recover jumptable at 0x00014eb357ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// Done @ 14ebef720

void __thiscall FAutomationSpecBase::FUntilDoneLatentCommand::Done(FUntilDoneLatentCommand *this)

{
  if (this->bIsRunning != false) {
    LOCK();
    this->bDone = (FThreadSafeBool)0x1;
    UNLOCK();
  }
  return;
}

// Update @ 14ec1c2a0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall FAutomationSpecBase::FUntilDoneLatentCommand::Update(FUntilDoneLatentCommand *this)

{
  longlong *plVar1;
  code *pcVar2;
  FAutomationSpecBase *pFVar3;
  bool bVar4;
  FDateTime FVar5;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar6;
  undefined8 uVar7;
  longlong *plVar8;
  FDestructionSentinel local_58;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  
  if (this->bIsRunning == false) {
    if ((this->bSkipIfErrored != false) &&
       (bVar4 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this->Spec), bVar4)) {
      return true;
    }
    LOCK();
    this->bDone = (FThreadSafeBool)0x0;
    UNLOCK();
    this->bIsRunning = true;
    FVar5 = FDateTime::UtcNow();
    local_58.Accessor = (FMRSWRecursiveAccessDetector *)((ulonglong)local_58.Accessor._4_4_ << 0x20)
    ;
                    /* WARNING: Load size is inaccurate */
    (this->StartedRunning).Ticks = *FVar5.Ticks;
    local_58._0_8_ = Done;
    pTVar6 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
             CreateSP<FAutomationSpecBase::FUntilDoneLatentCommand>
                       ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_38,this,
                        (pmf_d17f0e81 *)&local_58);
    UE::Core::Private::Function::CheckCallable(*(void **)&this->Predicate);
    plVar1 = *(longlong **)&(this->Predicate).field_0x28;
    pcVar2 = *(code **)&this->Predicate;
    plVar8 = (longlong *)&(this->Predicate).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar8 = plVar1;
    }
    uVar7 = (**(code **)(*plVar8 + 8))();
    (*pcVar2)(uVar7,pTVar6);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_58);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  if (this->bDone != (FThreadSafeBool)0x0) {
    LOCK();
    this->bDone = (FThreadSafeBool)0x0;
    UNLOCK();
    this->bIsRunning = false;
    return true;
  }
  FVar5 = FDateTime::UtcNow();
  if ((this->Timeout).Ticks + (this->StartedRunning).Ticks <= *(longlong *)FVar5.Ticks) {
    LOCK();
    this->bDone = (FThreadSafeBool)0x0;
    UNLOCK();
    pFVar3 = this->Spec;
    this->bIsRunning = false;
    pcVar2 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString((FString *)&local_58,L"Latent command timed out.");
    (*pcVar2)(pFVar3,&local_58,0);
    if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_58._0_8_);
    }
    return true;
  }
  return false;
}

