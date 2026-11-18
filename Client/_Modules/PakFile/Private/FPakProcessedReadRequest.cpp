// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 9

// ~FPakProcessedReadRequest @ 142a56f70

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPakProcessedReadRequest::~FPakProcessedReadRequest(FPakProcessedReadRequest *this)

{
  uchar auVar1 [8];
  FName FVar2;
  ForElementType<FSetElementId> FVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  *(undefined ***)this = &___7FPakProcessedReadRequest__6B_;
  if (this->field_0x41 == '\0') {
    UE::Logging::Private::BasicFatalLog
              (&`public:_virtual___cdecl_FPakProcessedReadRequest::~FPakProcessedReadRequest(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogPakFile);
  }
  if ((*(int *)&(this->MyCanceledBlocks).Elements.field_0x8 !=
       *(int *)&(this->MyCanceledBlocks).Elements.field_0x34) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!MyCanceledBlocks.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0xb73,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FPakAsyncReadFileHandle::RemoveRequest
            (this->Owner,this,this->Offset,this->BytesToRead,&this->bHasCancelled);
  if ((*(longlong *)&this->field_0x8 != 0) && (this->field_0x45 == '\0')) {
    if ((this->BytesToRead < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("BytesToRead > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                           ,0xb78,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    auVar1 = (uchar  [8])this->BytesToRead;
    if (auVar1 != (uchar  [8])0x0) {
      FVar7 = StatPtr_STAT_AsyncFileMemory;
      if (StatPtr_STAT_AsyncFileMemory == (FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory>)0x0) {
        pFVar6 = ::FName::FName(&local_res10,"STAT_AsyncFileMemory");
        FVar7 = (FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AsyncFileMemory,*pFVar6,
                           L"Async File Handle Memory","STATGROUP_Memory","STATCAT_Advanced",
                           L"Memory",true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar2 = *(FName *)FVar7;
      local_res8 = FVar2;
      if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        local_28.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
        local_res8 = FVar2;
        local_28.StatData.Pad = auVar1;
        local_28.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this_00,&local_28);
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
  (this->MyCanceledBlocks).HashSize = 0;
  FVar3 = (this->MyCanceledBlocks).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FCachedAsyncBlock_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FCachedAsyncBlock_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->MyCanceledBlocks).Elements);
  IAsyncReadRequest::~IAsyncReadRequest((IAsyncReadRequest *)this);
  return;
}

// CancelImpl @ 142a60a70

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall FPakProcessedReadRequest::CancelImpl(FPakProcessedReadRequest *this)

{
  FThreadSafeCounter *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  
  if (this->WaitEvent != (FEvent *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!WaitEvent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                       ,0xb9c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  LOCK();
  pFVar1 = &this->CompleteRace;
  iVar2 = pFVar1->Counter;
  pFVar1->Counter = pFVar1->Counter + 1;
  UNLOCK();
  if ((iVar2 == 0) && (this->bRequestOutstanding != false)) {
    FPakAsyncReadFileHandle::HandleCanceledRequest
              (this->Owner,&this->MyCanceledBlocks,this,this->Offset,this->BytesToRead,
               &this->bHasCancelled);
    if (*(int *)&(this->MyCanceledBlocks).Elements.field_0x8 ==
        *(int *)&(this->MyCanceledBlocks).Elements.field_0x34) {
      this->bRequestOutstanding = false;
      IAsyncReadRequest::SetDataComplete((IAsyncReadRequest *)this);
      this->field_0x41 = 1;
    }
  }
  return;
}

// CancelRawRequests @ 142a610c0

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall FPakProcessedReadRequest::CancelRawRequests(FPakProcessedReadRequest *this)

{
  FPakAsyncReadFileHandle::HandleCanceledRequest
            (this->Owner,&this->MyCanceledBlocks,this,this->Offset,this->BytesToRead,
             &this->bHasCancelled);
  return;
}

// CheckCompletion @ 142a61d40

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

bool __thiscall
FPakProcessedReadRequest::CheckCompletion
          (FPakProcessedReadRequest *this,FPakEntry *param_1,int param_2,
          TArray<FCachedAsyncBlock_*,TSizedDefaultAllocator<32>_> *param_3)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  if (((this->bRequestOutstanding != false) && (this->bHasCompleted == false)) &&
     (this->bHasCancelled == false)) {
    lVar1 = this->Offset;
    uVar10 = (ulonglong)param_1->CompressionBlockSize;
    if ((lVar1 < (longlong)(((longlong)param_2 + 1) * uVar10)) &&
       ((longlong)(uVar10 * (longlong)param_2) < this->BytesToRead + lVar1)) {
      iVar6 = IntCastChecked<int,__int64>(lVar1 / (longlong)uVar10);
      uVar10 = (ulonglong)iVar6;
      iVar7 = IntCastChecked<int,__int64>
                        ((this->Offset + this->BytesToRead + -1) /
                         (longlong)(ulonglong)param_1->CompressionBlockSize);
      uVar3 = uVar10;
      if (((((iVar6 < 0) || ((param_3->ArrayNum <= iVar6 || (iVar7 < 0)))) ||
           (param_3->ArrayNum <= iVar7)) || (iVar7 < iVar6)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("FirstBlock >= 0 && FirstBlock < Blocks.Num() && LastBlock >= 0 && LastBlock < Blocks.Num() && FirstBlock <= LastBlock"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                             ,0xefa,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      while( true ) {
        if ((longlong)iVar7 < (longlong)uVar10) {
          this->bHasCompleted = true;
          return true;
        }
        uVar9 = (uint)uVar3;
        uVar8 = 0;
        if ((int)uVar9 < param_3->ArrayNum) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        if ((*(longlong *)((param_3->AllocatorInstance).Data + uVar10 * 8) == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Blocks[MyBlockIndex]",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                               ,0xefe,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        uVar8 = 0;
        if ((int)uVar9 < param_3->ArrayNum) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        if (*(longlong *)(*(longlong *)((param_3->AllocatorInstance).Data + uVar10 * 8) + 0x10) == 0
           ) break;
        uVar10 = uVar10 + 1;
        uVar3 = (ulonglong)(uVar9 + 1);
      }
    }
  }
  return false;
}

// DoneWithRawRequests @ 142a6a850

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall FPakProcessedReadRequest::DoneWithRawRequests(FPakProcessedReadRequest *this)

{
  FPakAsyncReadFileHandle::RemoveRequest
            (this->Owner,this,this->Offset,this->BytesToRead,&this->bHasCancelled);
  return;
}

// GatherResults @ 142a71f20

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPakProcessedReadRequest::GatherResults(FPakProcessedReadRequest *this)

{
  uchar auVar1 [8];
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  void *pvVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res10;
  FName local_res18 [2];
  FStatMessage local_38;
  
  if (this->field_0x45 == '\0') {
    if ((*(longlong *)&this->field_0x8 != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Memory",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                           ,0xedc,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pvVar5 = FMemory::Malloc(this->BytesToRead,0);
    auVar1 = (uchar  [8])this->BytesToRead;
    *(void **)&this->field_0x8 = pvVar5;
    if (auVar1 != (uchar  [8])0x0) {
      FVar7 = StatPtr_STAT_AsyncFileMemory;
      if (StatPtr_STAT_AsyncFileMemory == (FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory>)0x0) {
        pFVar6 = ::FName::FName(local_res18,"STAT_AsyncFileMemory");
        FVar7 = (FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AsyncFileMemory,*pFVar6,
                           L"Async File Handle Memory","STATGROUP_Memory","STATCAT_Advanced",
                           L"Memory",true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar2 = *(FName *)FVar7;
      if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        local_38.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
        local_res10 = FVar2;
        local_38.StatData.Pad = auVar1;
        local_38.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this_00,&local_38);
        FStatsTrace::Add(&local_res10,(long64)auVar1);
        if (this_00->ScopeCount == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
  }
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Memory",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0xee0,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FPakAsyncReadFileHandle::GatherResults
            (this->Owner,*(uchar **)&this->field_0x8,this->Offset,this->BytesToRead);
  return;
}

// ReleaseMemoryOwnershipImpl @ 142a96410

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPakProcessedReadRequest::ReleaseMemoryOwnershipImpl(FPakProcessedReadRequest *this)

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

// RequestIsComplete @ 142a99680

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall FPakProcessedReadRequest::RequestIsComplete(FPakProcessedReadRequest *this)

{
  FThreadSafeCounter *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  
  LOCK();
  pFVar1 = &this->CompleteRace;
  iVar2 = pFVar1->Counter;
  pFVar1->Counter = pFVar1->Counter + 1;
  UNLOCK();
  if (iVar2 != 0) {
    return;
  }
  if (this->bRequestOutstanding == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bRequestOutstanding",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                       ,0xbb5,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->field_0x43 == '\0') && ((this->PriorityAndFlags & AIOP_FLAG_PRECACHE) == AIOP_MIN)) {
    GatherResults(this);
  }
  IAsyncReadRequest::SetDataComplete((IAsyncReadRequest *)this);
  EnterCriticalSection((LPCRITICAL_SECTION)&FPakReadRequestEvent);
  this->bRequestOutstanding = false;
  if (this->WaitEvent != (FEvent *)0x0) {
    (**(code **)(this->WaitEvent->_padding_ + 0x10))();
  }
  this->field_0x41 = 1;
                    /* WARNING: Could not recover jumptable at 0x000142a9971c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&FPakReadRequestEvent);
  return;
}

// WaitCompletionImpl @ 142aac820

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall
FPakProcessedReadRequest::WaitCompletionImpl(FPakProcessedReadRequest *this,float param_1)

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
                         ,0xb85,L"");
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
                           ,0xb8e,L"");
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

