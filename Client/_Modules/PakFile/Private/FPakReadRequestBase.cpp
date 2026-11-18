// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 5

// FPakReadRequestBase @ 142a53bf0

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

FPakReadRequestBase * __thiscall
FPakReadRequestBase::FPakReadRequestBase
          (FPakReadRequestBase *this,FName param_1,long64 param_2,
          TFunction<void___cdecl(bool,IAsyncReadRequest_*)> *param_3,long64 param_4,long64 param_5,
          EAsyncIOPriorityAndFlags param_6,uchar *param_7,bool param_8,FCachedAsyncBlock *param_9)

{
  IAsyncReadRequest::IAsyncReadRequest((IAsyncReadRequest *)this,param_3,false,param_7);
  *(undefined8 *)&this->field_0x50 = 0xffffffffffffffff;
  *(undefined ***)this = &_vftable__for__IAsyncReadRequest__;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined ***)&this->field_0x48 = &_vftable__for__IPakRequestor__;
  this->Offset = param_4;
  this->BytesToRead = param_5;
  *(undefined4 *)&this->field_0x60 = 0;
  this->BlockPtr = param_9;
  this->PriorityAndFlags = param_6;
  this->bInternalRequest = param_8;
  this->PanicPakFile = param_1;
  this->WaitEvent = (FEvent *)0x0;
  this->bRequestOutstanding = true;
  this->bNeedsRemoval = true;
  return this;
}

// ~FPakReadRequestBase @ 142a57200

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPakReadRequestBase::~FPakReadRequestBase(FPakReadRequestBase *this)

{
  uchar auVar1 [8];
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  *(undefined ***)this = &_vftable__for__IAsyncReadRequest__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__IPakRequestor__;
  if (this->bNeedsRemoval != false) {
    if ((PakPrecacherSingleton == (FPakPrecacher *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("PakPrecacherSingleton",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                           ,0x33f,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FPakPrecacher::CancelRequest(PakPrecacherSingleton,(IPakRequestor *)&this->field_0x48);
  }
  if ((*(longlong *)&this->field_0x8 != 0) && (this->field_0x45 == '\0')) {
    if ((this->BytesToRead < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("BytesToRead > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                           ,0xa72,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    auVar1 = (uchar  [8])this->BytesToRead;
    if (auVar1 != (uchar  [8])0x0) {
      FVar6 = StatPtr_STAT_AsyncFileMemory;
      if (StatPtr_STAT_AsyncFileMemory == (FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory>)0x0) {
        pFVar5 = ::FName::FName(&local_res10,"STAT_AsyncFileMemory");
        FVar6 = (FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AsyncFileMemory,*pFVar5,
                           L"Async File Handle Memory","STATGROUP_Memory","STATCAT_Advanced",
                           L"Memory",true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar2 = *(FName *)FVar6;
      local_res8 = FVar2;
      if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        local_38.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
        local_res8 = FVar2;
        local_38.StatData.Pad = auVar1;
        local_38.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this_00,&local_38);
        FStatsTrace::Add(&local_res8,-(longlong)auVar1);
        if (this_00->ScopeCount == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
    FMemory::Free(*(void **)&this->field_0x8);
  }
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined ***)&this->field_0x48 = &___7IPakRequestor__6B_;
  IAsyncReadRequest::~IAsyncReadRequest((IAsyncReadRequest *)this);
  return;
}

// CancelImpl @ 142a60b10

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall FPakReadRequestBase::CancelImpl(FPakReadRequestBase *this)

{
  code *pcVar1;
  bool bVar2;
  IPakRequestor *pIVar3;
  
  if (this->WaitEvent != (FEvent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!WaitEvent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                       ,0xa97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (PakPrecacherSingleton == (FPakPrecacher *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PakPrecacherSingleton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                       ,0x33f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pIVar3 = (IPakRequestor *)&this->field_0x48;
  if (this == (FPakReadRequestBase *)0x0) {
    pIVar3 = (IPakRequestor *)0x0;
  }
  FPakPrecacher::CancelRequest(PakPrecacherSingleton,pIVar3);
  this->bNeedsRemoval = false;
  if (this->bRequestOutstanding != false) {
    this->bRequestOutstanding = false;
    IAsyncReadRequest::SetDataComplete((IAsyncReadRequest *)this);
    this->field_0x41 = 1;
  }
  return;
}

// ReleaseMemoryOwnershipImpl @ 142a965a0

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPakReadRequestBase::ReleaseMemoryOwnershipImpl(FPakReadRequestBase *this)

{
  uchar auVar1 [8];
  FName FVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory> FVar4;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FStatMessage local_18;
  
  auVar1 = (uchar  [8])this->BytesToRead;
  if (auVar1 != (uchar  [8])0x0) {
    FVar4 = StatPtr_STAT_AsyncFileMemory;
    if (StatPtr_STAT_AsyncFileMemory == (FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_AsyncFileMemory");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AsyncFileMemory,*pFVar3,
                         L"Async File Handle Memory","STATGROUP_Memory","STATCAT_Advanced",L"Memory"
                         ,true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar4;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar2;
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_18.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar2;
      local_18.StatData.Pad = auVar1;
      local_18.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_18);
      FStatsTrace::Add(&local_res8,-(longlong)auVar1);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// WaitCompletionImpl @ 142aac940

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall FPakReadRequestBase::WaitCompletionImpl(FPakReadRequestBase *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  FEvent *pFVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&FPakReadRequestEvent);
  if (this->bRequestOutstanding != false) {
    if (this->WaitEvent != (FEvent *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!WaitEvent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0xa81,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar3 = FGenericPlatformProcess::GetSynchEventFromPool(true);
    this->WaitEvent = pFVar3;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&FPakReadRequestEvent);
  pFVar3 = this->WaitEvent;
  if (pFVar3 != (FEvent *)0x0) {
    pcVar1 = *(code **)(pFVar3->_padding_ + 0x20);
    if (param_1 == 0.0) {
      (*pcVar1)(pFVar3,0xffffffff);
      if (this->bRequestOutstanding != false) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bRequestOutstanding",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                           ,0xa8a,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    else {
      (*pcVar1)(pFVar3,(longlong)(param_1 * __real_447a0000),0);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&FPakReadRequestEvent);
    FGenericPlatformProcess::ReturnSynchEventToPool(this->WaitEvent);
    this->WaitEvent = (FEvent *)0x0;
    LeaveCriticalSection((LPCRITICAL_SECTION)&FPakReadRequestEvent);
  }
  return;
}

