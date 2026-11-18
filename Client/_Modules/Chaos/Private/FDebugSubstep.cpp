// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 14

// FDebugSubstep @ 143af9d20

FDebugSubstep * __thiscall Chaos::FDebugSubstep::FDebugSubstep(FDebugSubstep *this)

{
  TNode *pTVar1;
  TNode *pTVar2;
  
  pTVar2 = (TNode *)0x0;
  this->bIsEnabled = (FThreadSafeBool)0x0;
  pTVar1 = ::operator_new(0x10);
  if (pTVar1 != (TNode *)0x0) {
    pTVar1->NextNode = (TNode *)0x0;
    *(undefined8 *)&pTVar1->Item = 0;
    pTVar1->NextNode = (TNode *)0x0;
    pTVar2 = pTVar1;
  }
  (this->CommandQueue).Tail = pTVar2;
  (this->CommandQueue).Head = pTVar2;
  this->ProgressEvent = (FEvent *)0x0;
  this->SubstepEvent = (FEvent *)0x0;
  this->ThreadId = 0;
  this->bWaitForStep = false;
  this->bShouldEnable = false;
  return this;
}

// ~FDebugSubstep @ 143afce30

void __thiscall Chaos::FDebugSubstep::~FDebugSubstep(FDebugSubstep *this)

{
  TNode *pTVar1;
  TNode *pTVar2;
  TNode **ppTVar3;
  
  if ((this->ProgressEvent != (FEvent *)0x0) && (this->SubstepEvent != (FEvent *)0x0)) {
    if (this->bIsEnabled != (FThreadSafeBool)0x0) {
      Stop(this);
    }
    FGenericPlatformProcess::ReturnSynchEventToPool(this->ProgressEvent);
    FGenericPlatformProcess::ReturnSynchEventToPool(this->SubstepEvent);
    ppTVar3 = &(this->CommandQueue).Tail;
    this->ProgressEvent = (FEvent *)0x0;
    this->SubstepEvent = (FEvent *)0x0;
    while (pTVar1 = (*ppTVar3)->NextNode, pTVar1 != (TNode *)0x0) {
      pTVar2 = *ppTVar3;
      *ppTVar3 = pTVar1;
      pTVar1->Item = Enable;
      ::operator_delete(pTVar2,0x10);
    }
    this->bShouldEnable = false;
  }
  ppTVar3 = &(this->CommandQueue).Tail;
  pTVar1 = *ppTVar3;
  while (pTVar1 != (TNode *)0x0) {
    *ppTVar3 = pTVar1->NextNode;
    ::operator_delete(pTVar1,0x10);
    pTVar1 = *ppTVar3;
  }
  return;
}

// Add @ 143b0f2e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::FDebugSubstep::Add(FDebugSubstep *this,bool param_1,wchar_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  DWORD DVar3;
  
  if ((this->ProgressEvent != (FEvent *)0x0) && (this->SubstepEvent != (FEvent *)0x0)) {
    if (this->bIsEnabled == (FThreadSafeBool)0x0) {
      if (param_1) {
        if (4 < (byte)LogChaosThread._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChaosThread);
        }
        if (5 < (byte)LogChaosThread._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosThread);
        }
        (**(code **)(this->SubstepEvent->_padding_ + 0x10))();
      }
    }
    else {
      if (param_1) {
        this->bWaitForStep = false;
      }
      DVar3 = GetCurrentThreadId();
      if ((this->ThreadId != DVar3) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ThreadId == FPlatformTLS::GetCurrentThreadId()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Framework\\DebugSubstep.cpp"
                             ,0xa7,
                             L"Cannot add a substep outside of the solver thread (eg inside a parallel for)."
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (4 < (byte)LogChaosThread._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChaosThread);
      }
      if (5 < (byte)LogChaosThread._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosThread);
      }
      (**(code **)(this->SubstepEvent->_padding_ + 0x10))();
      if (5 < (byte)LogChaosThread._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosThread);
      }
      (**(code **)(this->ProgressEvent->_padding_ + 0x20))(this->ProgressEvent,0xffffffff,0);
      if (5 < (byte)LogChaosThread._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosThread);
        return;
      }
    }
  }
  return;
}

// AssumeThisThread @ 143b16d80

void __thiscall Chaos::FDebugSubstep::AssumeThisThread(FDebugSubstep *this)

{
  DWORD DVar1;
  
  DVar1 = GetCurrentThreadId();
  this->ThreadId = DVar1;
  return;
}

// Enable @ 143b1bce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::FDebugSubstep::Enable(FDebugSubstep *this,bool param_1)

{
  TQueue<Chaos::FDebugSubstep::ECommand,0> *pTVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  
  pTVar1 = &this->CommandQueue;
  pTVar3 = ::operator_new(0x10);
  if (pTVar3 != (TNode *)0x0) {
    pTVar3->NextNode = (TNode *)0x0;
    pTVar3->Item = param_1 ^ Disable;
    if (((ulonglong)pTVar1 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2 = pTVar1->Head;
    pTVar1->Head = pTVar3;
    UNLOCK();
    if (((ulonglong)pTVar2 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2->NextNode = pTVar3;
    UNLOCK();
  }
  if (5 < (byte)LogChaosThread._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosThread);
    return;
  }
  return;
}

// Initialize @ 143b22bf0

void __thiscall Chaos::FDebugSubstep::Initialize(FDebugSubstep *this)

{
  FEvent *pFVar1;
  
  if ((this->ProgressEvent == (FEvent *)0x0) || (this->SubstepEvent == (FEvent *)0x0)) {
    pFVar1 = FGenericPlatformProcess::GetSynchEventFromPool(false);
    this->ProgressEvent = pFVar1;
    pFVar1 = FGenericPlatformProcess::GetSynchEventFromPool(true);
    this->SubstepEvent = pFVar1;
  }
  return;
}

// ProgressToStep @ 143b2c7d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::FDebugSubstep::ProgressToStep(FDebugSubstep *this)

{
  TQueue<Chaos::FDebugSubstep::ECommand,0> *pTVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  
  pTVar1 = &this->CommandQueue;
  pTVar3 = ::operator_new(0x10);
  if (pTVar3 != (TNode *)0x0) {
    pTVar3->NextNode = (TNode *)0x0;
    pTVar3->Item = ProgressToStep;
    if (((ulonglong)pTVar1 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2 = pTVar1->Head;
    pTVar1->Head = pTVar3;
    UNLOCK();
    if (((ulonglong)pTVar2 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2->NextNode = pTVar3;
    UNLOCK();
  }
  if (5 < (byte)LogChaosThread._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosThread);
    return;
  }
  return;
}

// ProgressToSubstep @ 143b2c880

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::FDebugSubstep::ProgressToSubstep(FDebugSubstep *this)

{
  TQueue<Chaos::FDebugSubstep::ECommand,0> *pTVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  
  pTVar1 = &this->CommandQueue;
  pTVar3 = ::operator_new(0x10);
  if (pTVar3 != (TNode *)0x0) {
    pTVar3->NextNode = (TNode *)0x0;
    pTVar3->Item = ProgressToSubstep;
    if (((ulonglong)pTVar1 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2 = pTVar1->Head;
    pTVar1->Head = pTVar3;
    UNLOCK();
    if (((ulonglong)pTVar2 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2->NextNode = pTVar3;
    UNLOCK();
  }
  if (5 < (byte)LogChaosThread._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosThread);
    return;
  }
  return;
}

// Release @ 143b31f90

void __thiscall Chaos::FDebugSubstep::Release(FDebugSubstep *this)

{
  TNode *pTVar1;
  TNode *pTVar2;
  
  if ((this->ProgressEvent != (FEvent *)0x0) && (this->SubstepEvent != (FEvent *)0x0)) {
    if (this->bIsEnabled != (FThreadSafeBool)0x0) {
      Stop(this);
    }
    FGenericPlatformProcess::ReturnSynchEventToPool(this->ProgressEvent);
    FGenericPlatformProcess::ReturnSynchEventToPool(this->SubstepEvent);
    this->ProgressEvent = (FEvent *)0x0;
    this->SubstepEvent = (FEvent *)0x0;
    while (pTVar1 = ((this->CommandQueue).Tail)->NextNode, pTVar1 != (TNode *)0x0) {
      pTVar2 = (this->CommandQueue).Tail;
      (this->CommandQueue).Tail = pTVar1;
      pTVar1->Item = Enable;
      ::operator_delete(pTVar2,0x10);
    }
    this->bShouldEnable = false;
  }
  return;
}

// Shutdown @ 143b41ea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::FDebugSubstep::Shutdown(FDebugSubstep *this)

{
  FEvent **ppFVar1;
  code *pcVar2;
  bool bVar3;
  
  if (((this->ProgressEvent == (FEvent *)0x0) || (this->SubstepEvent == (FEvent *)0x0)) ||
     (this->bIsEnabled == (FThreadSafeBool)0x0)) {
    return;
  }
  ppFVar1 = &this->SubstepEvent;
  if (((this->ProgressEvent == (FEvent *)0x0) || (*ppFVar1 == (FEvent *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Framework\\DebugSubstep.cpp"
                         ,0xc4,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((this->bIsEnabled == (FThreadSafeBool)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsEnabled",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Framework\\DebugSubstep.cpp"
                         ,0xc5,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  LOCK();
  this->bIsEnabled = (FThreadSafeBool)0x0;
  UNLOCK();
  if (5 < (byte)LogChaosThread._0_1_) {
    IsInGameThread();
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosThread);
  }
  (**(code **)((*ppFVar1)->_padding_ + 0x18))();
  (**(code **)(this->ProgressEvent->_padding_ + 0x10))();
  if (5 < (byte)LogChaosThread._0_1_) {
    IsInGameThread();
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosThread);
  }
  (**(code **)((*ppFVar1)->_padding_ + 0x20))(*ppFVar1,0xffffffff,0);
  if (5 < (byte)LogChaosThread._0_1_) {
    IsInGameThread();
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosThread);
  }
  if (4 < (byte)LogChaosThread._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChaosThread);
  }
  return;
}

// Start @ 143b42870

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::FDebugSubstep::Start(FDebugSubstep *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (((this->ProgressEvent == (FEvent *)0x0) || (this->SubstepEvent == (FEvent *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Framework\\DebugSubstep.cpp"
                         ,0xb9,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((this->bIsEnabled != (FThreadSafeBool)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bIsEnabled",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Framework\\DebugSubstep.cpp"
                         ,0xba,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  LOCK();
  this->bIsEnabled = (FThreadSafeBool)0x1;
  UNLOCK();
  if (5 < (byte)LogChaosThread._0_1_) {
    IsInGameThread();
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosThread);
  }
  if (4 < (byte)LogChaosThread._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChaosThread);
    return;
  }
  return;
}

// Stop @ 143b42ab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::FDebugSubstep::Stop(FDebugSubstep *this)

{
  FEvent **ppFVar1;
  code *pcVar2;
  bool bVar3;
  
  ppFVar1 = &this->SubstepEvent;
  if (((this->ProgressEvent == (FEvent *)0x0) || (*ppFVar1 == (FEvent *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Framework\\DebugSubstep.cpp"
                         ,0xc4,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((this->bIsEnabled == (FThreadSafeBool)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsEnabled",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Framework\\DebugSubstep.cpp"
                         ,0xc5,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  LOCK();
  this->bIsEnabled = (FThreadSafeBool)0x0;
  UNLOCK();
  if (5 < (byte)LogChaosThread._0_1_) {
    IsInGameThread();
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosThread);
  }
  (**(code **)((*ppFVar1)->_padding_ + 0x18))();
  (**(code **)(this->ProgressEvent->_padding_ + 0x10))();
  if (5 < (byte)LogChaosThread._0_1_) {
    IsInGameThread();
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosThread);
  }
  (**(code **)((*ppFVar1)->_padding_ + 0x20))(*ppFVar1,0xffffffff,0);
  if (5 < (byte)LogChaosThread._0_1_) {
    IsInGameThread();
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosThread);
  }
  if (4 < (byte)LogChaosThread._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChaosThread);
  }
  return;
}

// Substep @ 143b42c40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::FDebugSubstep::Substep(FDebugSubstep *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (((this->ProgressEvent == (FEvent *)0x0) || (this->SubstepEvent == (FEvent *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Framework\\DebugSubstep.cpp"
                         ,0xd9,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((this->bIsEnabled == (FThreadSafeBool)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsEnabled",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Framework\\DebugSubstep.cpp"
                         ,0xda,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (5 < (byte)LogChaosThread._0_1_) {
    IsInGameThread();
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosThread);
  }
  this->bWaitForStep = param_1;
  do {
    (**(code **)(this->SubstepEvent->_padding_ + 0x18))();
    (**(code **)(this->ProgressEvent->_padding_ + 0x10))();
    if (5 < (byte)LogChaosThread._0_1_) {
      IsInGameThread();
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosThread);
    }
    (**(code **)(this->SubstepEvent->_padding_ + 0x20))(this->SubstepEvent,0xffffffff,0);
    if (5 < (byte)LogChaosThread._0_1_) {
      IsInGameThread();
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosThread);
    }
  } while (this->bWaitForStep != false);
  return;
}

// SyncAdvance @ 143b451b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Chaos::FDebugSubstep::SyncAdvance(FDebugSubstep *this,bool param_1)

{
  ECommand EVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  
  if ((this->ProgressEvent == (FEvent *)0x0) || (this->SubstepEvent == (FEvent *)0x0)) {
    return false;
  }
  bVar7 = false;
  bVar5 = false;
  while (pTVar2 = ((this->CommandQueue).Tail)->NextNode, pTVar2 != (TNode *)0x0) {
    EVar1 = pTVar2->Item;
    pTVar3 = (this->CommandQueue).Tail;
    (this->CommandQueue).Tail = pTVar2;
    pTVar2->Item = Enable;
    ::operator_delete(pTVar3,0x10);
    if (EVar1 == Enable) {
      this->bShouldEnable = true;
    }
    else if (EVar1 == Disable) {
      this->bShouldEnable = false;
    }
    else if (EVar1 == ProgressToSubstep) {
      bVar5 = true;
    }
    else if (EVar1 == ProgressToStep) {
      bVar7 = true;
    }
    else {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogChaosThread);
    }
  }
  if (this->bIsEnabled == (FThreadSafeBool)0x0) {
    if ((this->bShouldEnable != false) && (param_1)) {
      if (((this->ProgressEvent == (FEvent *)0x0) || (this->SubstepEvent == (FEvent *)0x0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Framework\\DebugSubstep.cpp"
                             ,0xb9,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if ((this->bIsEnabled != (FThreadSafeBool)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bIsEnabled",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Framework\\DebugSubstep.cpp"
                             ,0xba,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      LOCK();
      this->bIsEnabled = (FThreadSafeBool)0x1;
      UNLOCK();
      if (5 < (byte)LogChaosThread._0_1_) {
        IsInGameThread();
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosThread);
      }
      if (4 < (byte)LogChaosThread._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChaosThread);
      }
    }
  }
  else if ((this->bShouldEnable == false) || (!param_1)) {
    Stop(this);
  }
  else if ((bVar7 != false) || (bVar5)) {
    if (((this->ProgressEvent == (FEvent *)0x0) || (this->SubstepEvent == (FEvent *)0x0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Framework\\DebugSubstep.cpp"
                           ,0xd9,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    if ((this->bIsEnabled == (FThreadSafeBool)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsEnabled",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Framework\\DebugSubstep.cpp"
                           ,0xda,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    if (5 < (byte)LogChaosThread._0_1_) {
      IsInGameThread();
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosThread);
    }
    this->bWaitForStep = bVar7;
    do {
      (**(code **)(this->SubstepEvent->_padding_ + 0x18))();
      (**(code **)(this->ProgressEvent->_padding_ + 0x10))();
      if (5 < (byte)LogChaosThread._0_1_) {
        IsInGameThread();
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosThread);
      }
      (**(code **)(this->SubstepEvent->_padding_ + 0x20))(this->SubstepEvent,0xffffffff,0);
      if (5 < (byte)LogChaosThread._0_1_) {
        IsInGameThread();
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosThread);
      }
    } while (this->bWaitForStep != false);
  }
  return this->bIsEnabled != (FThreadSafeBool)0x0;
}

