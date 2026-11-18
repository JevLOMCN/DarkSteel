// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// FForkableThread @ 1416d4db0

FForkableThread * __thiscall FForkableThread::FForkableThread(FForkableThread *this,bool param_1)

{
  FFakeThread::FFakeThread((FFakeThread *)this);
  this->bAllowPreForkRealThread = param_1;
  this->_padding_ = (longlong)&___7FForkableThread__6B_;
  this->RealThread = (FRunnableThread *)0x0;
  this->CachedPriority = TPri_Normal;
  this->CachedStackSize = 0;
  return this;
}

// ~FForkableThread @ 1416d8850

void __thiscall FForkableThread::~FForkableThread(FForkableThread *this)

{
  FRunnableThread *pFVar1;
  FThreadManager *pFVar2;
  
  this->_padding_ = (longlong)&___7FForkableThread__6B_;
  pFVar1 = this->RealThread;
  if (pFVar1 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
  }
  this->RealThread = (FRunnableThread *)0x0;
  this->_padding_ = (longlong)&___7FFakeThread__6B_;
  pFVar2 = FThreadManager::Get();
  FThreadManager::RemoveThread(pFVar2,(FRunnableThread *)this);
  this->_padding_ = (longlong)&___7FRunnableThread__6B_;
  if (GIsRequestingExit == false) {
    pFVar2 = FThreadManager::Get();
    FThreadManager::RemoveThread(pFVar2,(FRunnableThread *)this);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// CreateInternal @ 1416e83f0

bool __thiscall
FForkableThread::CreateInternal
          (FForkableThread *this,FRunnable *param_1,wchar_t *param_2,uint param_3,
          EThreadPriority param_4,ulong64 param_5,EThreadCreateFlags param_6)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong lVar4;
  
  bVar2 = FForkProcessHelper::SupportsMultithreadingPostFork();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FForkProcessHelper::SupportsMultithreadingPostFork()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadingBase.cpp"
                       ,0x66d,
                       L"ForkableThreads should only be created when -PostForkThreading is enabled")
    ;
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = FForkProcessHelper::IsForkedMultithreadInstance();
  if (bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FForkProcessHelper::IsForkedMultithreadInstance() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadingBase.cpp"
                       ,0x66e,
                       L"Once forked we create a real runnable thread instead of a ForkableThread");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (this->bAllowPreForkRealThread == false) {
    ::FString::operator=((FString *)&this->_padding_,param_2);
    this->_padding_ = param_5;
    lVar4 = (**(code **)((longlong)*param_1 + 0x20))(param_1);
    this->_padding_ = lVar4;
    if (lVar4 != 0) {
      (**(code **)*param_1)(param_1);
      this->_padding_ = (longlong)param_1;
    }
    bVar2 = this->_padding_ != 0;
  }
  else {
    ::FString::operator=((FString *)&this->_padding_,param_2);
    this->_padding_ = param_5;
    this->_padding_ = (longlong)param_1;
    (**(code **)*param_1)(param_1);
    bVar2 = CreateRealThread(this);
  }
  this->CachedPriority = param_4;
  this->CachedStackSize = param_3;
  return bVar2;
}

// CreateRealThread @ 1416e8bd0

bool __thiscall FForkableThread::CreateRealThread(FForkableThread *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FRunnableThread *pFVar6;
  FStartupMessages *this_00;
  FName *pFVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  FName local_res8;
  
  pwVar8 = L"";
  if (this->RealThread != (FRunnableThread *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RealThread == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadingBase.cpp"
                       ,0x695,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar6 = FWindowsPlatformProcess::CreateRunnableThread();
  this->RealThread = pFVar6;
  if ((int)this->_padding_ == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)this->_padding_;
  }
  cVar5 = (**(code **)(pFVar6->_padding_ + 0x38))
                    (pFVar6,this->_padding_,pwVar9,this->CachedStackSize,this->CachedPriority,
                     this->_padding_,0);
  pFVar6 = this->RealThread;
  if (cVar5 == '\0') {
    if (pFVar6 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar6->_padding_ + 0x30))(pFVar6,1);
    }
    this->RealThread = (FRunnableThread *)0x0;
  }
  else {
    this_00 = FStartupMessages::Get();
    uVar1 = pFVar6->ThreadID;
    if ((pFVar6->ThreadName).Data.ArrayNum != 0) {
      pwVar8 = (wchar_t *)(pFVar6->ThreadName).Data.AllocatorInstance.Data;
    }
    pFVar7 = ::FName::FName(&local_res8,pwVar8);
    FStartupMessages::AddThreadMetadata(this_00,*pFVar7,uVar1);
    if ((char)this->_padding_ != '\0') {
      (**(code **)(this->RealThread->_padding_ + 0x10))();
      return (bool)cVar5;
    }
  }
  return (bool)cVar5;
}

// GetThreadType @ 1416fbcc0

ThreadType __thiscall FForkableThread::GetThreadType(FForkableThread *this)

{
  return Forkable;
}

// Kill @ 141703430

bool __thiscall FForkableThread::Kill(FForkableThread *this,bool param_1)

{
  FRunnableThread *pFVar1;
  undefined1 uVar2;
  FThreadManager *this_00;
  undefined7 in_register_00000011;
  
  uVar2 = 1;
  pFVar1 = this->RealThread;
  if (pFVar1 != (FRunnableThread *)0x0) {
    uVar2 = (**(code **)(pFVar1->_padding_ + 0x18))(pFVar1,CONCAT71(in_register_00000011,param_1));
  }
  this_00 = FThreadManager::Get();
  FThreadManager::RemoveThread(this_00,(FRunnableThread *)this);
  return (bool)uVar2;
}

// OnPostFork @ 141706190

void __thiscall FForkableThread::OnPostFork(FForkableThread *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = FForkProcessHelper::IsForkedMultithreadInstance();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FForkProcessHelper::IsForkedMultithreadInstance()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadingBase.cpp"
                       ,0x68f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  CreateRealThread(this);
  return;
}

// OnPreFork @ 1417062d0

void __thiscall FForkableThread::OnPreFork(FForkableThread *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->bAllowPreForkRealThread != false) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bAllowPreForkRealThread",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadingBase.cpp"
                         ,0x68a,
                         L"A forkable thread that allows real threading before the fork point was left alive. You must delete all forkable threads that were created with bAllowPrefork == true before forking. ThreadName:%s ThreadID:%d"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SetThreadPriority @ 1417121b0

void __thiscall FForkableThread::SetThreadPriority(FForkableThread *this,EThreadPriority param_1)

{
  this->CachedPriority = param_1;
  if (this->RealThread != (FRunnableThread *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001417121bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)this->RealThread->_padding_)();
    return;
  }
  return;
}

// Suspend @ 141714200

void __thiscall FForkableThread::Suspend(FForkableThread *this,bool param_1)

{
  *(bool *)&this->_padding_ = param_1;
  if (this->RealThread != (FRunnableThread *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014171420f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->RealThread->_padding_ + 0x10))();
    return;
  }
  return;
}

// Tick @ 1417151a0

void __thiscall FForkableThread::Tick(FForkableThread *this)

{
  longlong *plVar1;
  
  if (((this->RealThread == (FRunnableThread *)0x0) &&
      (plVar1 = (longlong *)this->_padding_, plVar1 != (longlong *)0x0)) &&
     ((char)this->_padding_ == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x0001417151bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1);
    return;
  }
  return;
}

// WaitForCompletion @ 14171ab20

void __thiscall FForkableThread::WaitForCompletion(FForkableThread *this)

{
  FThreadManager *this_00;
  
  if (this->RealThread != (FRunnableThread *)0x0) {
    (**(code **)(this->RealThread->_padding_ + 0x20))();
  }
  this_00 = FThreadManager::Get();
  FThreadManager::RemoveThread(this_00,(FRunnableThread *)this);
  return;
}

