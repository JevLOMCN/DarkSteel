// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// ~FMicrosoftReadRequest @ 141a9cfd0

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMicrosoftReadRequest::~FMicrosoftReadRequest(FMicrosoftReadRequest *this)

{
  FAsyncTask<FMicrosoftReadRequestWorker> *pFVar1;
  void *pvVar2;
  uchar auVar3 [8];
  FName FVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory> FVar6;
  FThreadStats *pFVar7;
  FThreadStatsPool *pFVar8;
  FName local_res8;
  FStatMessage local_38;
  
  *(undefined ***)this = &___7FMicrosoftReadRequest__6B_;
  if (this->Task != (FAsyncTask<FMicrosoftReadRequestWorker> *)0x0) {
    FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)this->Task,true,false);
    pFVar1 = this->Task;
    if (pFVar1 != (FAsyncTask<FMicrosoftReadRequestWorker> *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
    }
  }
  pvVar2 = (this->OverlappedIO).hEvent;
  if (pvVar2 != (void *)0xffffffffffffffff) {
    FreeIOPooledEvent(pvVar2);
    (this->OverlappedIO).hEvent = (void *)0xffffffffffffffff;
  }
  if (*(longlong *)&this->field_0x8 != 0) {
    if (this->field_0x45 == '\0') {
      auVar3 = (uchar  [8])this->BytesToRead;
      if (auVar3 != (uchar  [8])0x0) {
        FVar6 = StatPtr_STAT_AsyncFileMemory;
        if (StatPtr_STAT_AsyncFileMemory == (FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory>)0x0)
        {
          pFVar5 = ::FName::FName(&local_res8,"STAT_AsyncFileMemory");
          FVar6 = (FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory>)
                  FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AsyncFileMemory,*pFVar5,
                             L"Async File Handle Memory","STATGROUP_Memory","STATCAT_Advanced",
                             L"Memory",true,false,ST_int64,false,false,MCR_Physical);
        }
        FVar4 = *(FName *)FVar6;
        local_res8 = FVar4;
        if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar7 == (FThreadStats *)0x0) {
            pFVar8 = FThreadStatsPool::Get();
            pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
          }
          local_38.NameAndInfo.Number = FVar4.Number & 0xffffbfff | 0xb000;
          local_res8 = FVar4;
          local_38.StatData.Pad = auVar3;
          local_38.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar7,&local_38);
          FStatsTrace::Add(&local_res8,-(longlong)auVar3);
          if (pFVar7->ScopeCount == 0) {
            FThreadStats::Flush(pFVar7,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar7,false,false);
          }
        }
      }
      FMemory::Free(*(void **)&this->field_0x8);
    }
    *(undefined8 *)&this->field_0x8 = 0;
  }
  if (this->TempMemory != (uchar *)0x0) {
    auVar3 = (uchar  [8])this->AlignedBytesToRead;
    if (auVar3 != (uchar  [8])0x0) {
      FVar6 = StatPtr_STAT_AsyncFileMemory;
      if (StatPtr_STAT_AsyncFileMemory == (FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory>)0x0) {
        pFVar5 = ::FName::FName(&local_res8,"STAT_AsyncFileMemory");
        FVar6 = (FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AsyncFileMemory,*pFVar5,
                           L"Async File Handle Memory","STATGROUP_Memory","STATCAT_Advanced",
                           L"Memory",true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar4 = *(FName *)FVar6;
      local_res8 = FVar4;
      if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar7 == (FThreadStats *)0x0) {
          pFVar8 = FThreadStatsPool::Get();
          pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
        }
        local_38.NameAndInfo.Number = FVar4.Number & 0xffffbfff | 0xb000;
        local_res8 = FVar4;
        local_38.StatData.Pad = auVar3;
        local_38.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar7,&local_38);
        FStatsTrace::Add(&local_res8,-(longlong)auVar3);
        if (pFVar7->ScopeCount == 0) {
          FThreadStats::Flush(pFVar7,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar7,false,false);
        }
      }
    }
    FMemory::Free(this->TempMemory);
    this->TempMemory = (uchar *)0x0;
  }
  if ((this->PriorityAndFlags & AIOP_FLAG_PRECACHE) != AIOP_MIN) {
    FMicrosoftAsyncReadFileHandle::RemoveRequest(this->Owner,this);
  }
  this->Owner = (FMicrosoftAsyncReadFileHandle *)0x0;
  IAsyncReadRequest::~IAsyncReadRequest((IAsyncReadRequest *)this);
  return;
}

// CancelImpl @ 141aa1410

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall FMicrosoftReadRequest::CancelImpl(FMicrosoftReadRequest *this)

{
  return;
}

// CheckForPrecache @ 141aa1ac0

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

bool __thiscall FMicrosoftReadRequest::CheckForPrecache(FMicrosoftReadRequest *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uchar *puVar4;
  
  if ((this->PriorityAndFlags & AIOP_FLAG_PRECACHE) == AIOP_MIN) {
    if ((*(longlong *)&this->field_0x8 != 0) && (this->field_0x45 == '\0')) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Memory || bUserSuppliedMemory",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Microsoft\\MicrosoftAsyncIO.h"
                         ,0x206,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    puVar4 = FMicrosoftAsyncReadFileHandle::GetPrecachedBlock
                       (this->Owner,*(uchar **)&this->field_0x8,this->Offset,this->BytesToRead);
    if (puVar4 != (uchar *)0x0) {
      if ((this->field_0x45 != '\0') && (*(uchar **)&this->field_0x8 != puVar4)) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bUserSuppliedMemory || Memory == Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Microsoft\\MicrosoftAsyncIO.h"
                           ,0x20a,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      *(uchar **)&this->field_0x8 = puVar4;
      return true;
    }
  }
  return false;
}

// FinalizeReadAndSetComplete @ 141aa6b30

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMicrosoftReadRequest::FinalizeReadAndSetComplete(FMicrosoftReadRequest *this)

{
  longlong lVar1;
  longlong lVar2;
  uchar auVar3 [8];
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  if (*(longlong *)&this->field_0x8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Microsoft\\MicrosoftAsyncIO.h"
                       ,0x102,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar1 = this->Offset;
  lVar2 = this->AlignedOffset;
  if (this->TempMemory == (uchar *)0x0) {
    if (lVar2 != lVar1) {
      memmove(*(void **)&this->field_0x8,
              (void *)((lVar1 - lVar2) + (longlong)*(void **)&this->field_0x8),this->BytesToRead);
    }
  }
  else {
    memcpy(*(void **)&this->field_0x8,this->TempMemory + (lVar1 - lVar2),this->BytesToRead);
    FMemory::Free(this->TempMemory);
    auVar3 = (uchar  [8])this->AlignedBytesToRead;
    this->TempMemory = (uchar *)0x0;
    if (auVar3 != (uchar  [8])0x0) {
      FVar8 = StatPtr_STAT_AsyncFileMemory;
      if (StatPtr_STAT_AsyncFileMemory == (FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory>)0x0) {
        pFVar7 = ::FName::FName(&local_res10,"STAT_AsyncFileMemory");
        FVar8 = (FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AsyncFileMemory,*pFVar7,
                           L"Async File Handle Memory","STATGROUP_Memory","STATCAT_Advanced",
                           L"Memory",true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar4 = *(FName *)FVar8;
      local_res8 = FVar4;
      if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        local_28.NameAndInfo.Number = FVar4.Number & 0xffffbfff | 0xb000;
        local_res8 = FVar4;
        local_28.StatData.Pad = auVar3;
        local_28.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this_00,&local_28);
        FStatsTrace::Add(&local_res8,-(longlong)auVar3);
        if (this_00->ScopeCount == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
  }
  IAsyncReadRequest::SetComplete((IAsyncReadRequest *)this);
  return;
}

// GetFileNameForErrorMessagesAndPanicRetry @ 141aa9270

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

wchar_t * __thiscall
FMicrosoftReadRequest::GetFileNameForErrorMessagesAndPanicRetry(FMicrosoftReadRequest *this)

{
  if ((this->Owner->FileNameForErrorMessagesAndPanicRetry).Data.ArrayNum != 0) {
    return (wchar_t *)
           (this->Owner->FileNameForErrorMessagesAndPanicRetry).Data.AllocatorInstance.Data;
  }
  return L"";
}

// PerformRequest @ 141ab9230

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMicrosoftReadRequest::PerformRequest(FMicrosoftReadRequest *this)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  BOOL BVar4;
  DWORD DVar5;
  HANDLE hFile;
  wchar_t *lpFileName;
  FStaticBasicLogRecord *pFVar6;
  uchar *lpBuffer;
  int iVar7;
  FScriptContainerElement *pFVar8;
  ForAnyElementType FVar9;
  DWORD local_res8 [2];
  undefined8 local_res10;
  FString local_68;
  FString local_58 [2];
  
  if ((this->Offset < this->AlignedOffset) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("AlignedOffset <= Offset",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Microsoft\\MicrosoftAsyncIO.h"
                         ,0xa6,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar8 = (FScriptContainerElement *)0x0;
  local_res8[0] = 0;
  if ((GTriggerFailedMicrosoftRead == false) &&
     (BVar4 = GetOverlappedResult(this->FileHandle,(LPOVERLAPPED)&this->OverlappedIO,local_res8,1),
     BVar4 != 0)) {
    FPlatformFileTrace::EndRead((ulong64)&this->OverlappedIO,(ulonglong)local_res8[0]);
    FVar9.Data = pFVar8;
    if ((this->BytesToRead - this->AlignedOffset) + this->Offset <=
        (longlong)(ulonglong)local_res8[0]) goto LAB_141ab95be;
    GetLastError();
    ::FString::PrintfImpl
              (&local_68,
               L"FMicrosoftReadRequest Short Read Code = %x BytesRead = %lld Offset = %lld AlignedOffset = %lld BytesToRead = %lld Size = %lld File = %s"
              );
    FVar9.Data = local_68.Data.AllocatorInstance.Data;
  }
  else {
    FPlatformFileTrace::EndRead((ulong64)&this->OverlappedIO,0);
    GTriggerFailedMicrosoftRead = false;
    GetLastError();
    ::FString::PrintfImpl
              (local_58,
               L"FMicrosoftReadRequest GetOverlappedResult Code = %x Offset = %lld Size = %lld FileSize = %lld File = %s"
              );
    FVar9.Data = local_58[0].Data.AllocatorInstance.Data;
  }
  bVar3 = true;
  fVar2 = __real_3e4ccccd;
  if (1 < (byte)LogTemp._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_void___cdecl_FMicrosoftReadRequest::PerformRequest(void)___ptr64'::__l21::
                LOG_Static,(FLogCategoryBase *)&LogTemp);
    fVar2 = __real_3e4ccccd;
  }
LAB_141ab9424:
  do {
    iVar7 = (int)pFVar8;
    if (9 < iVar7) {
      if (bVar3) {
        UE::Logging::Private::BasicFatalLog
                  (&`public:_void___cdecl_FMicrosoftReadRequest::PerformRequest(void)___ptr64'::
                    __l115::LOG_Static,(FLogCategoryBase *)&LogTemp);
      }
      break;
    }
    if ((this->Owner->FileNameForErrorMessagesAndPanicRetry).Data.ArrayNum == 0) {
      lpFileName = L"";
    }
    else {
      lpFileName = (wchar_t *)
                   (this->Owner->FileNameForErrorMessagesAndPanicRetry).Data.AllocatorInstance.Data;
    }
    hFile = CreateFileW(lpFileName,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
    if (hFile == (HANDLE)0xffffffffffffffff) {
      GetLastError();
      if (1 < (byte)LogTemp._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_void___cdecl_FMicrosoftReadRequest::PerformRequest(void)___ptr64'::
                    __l91::LOG_Static,(FLogCategoryBase *)&LogTemp);
      }
    }
    else {
      local_res10 = this->AlignedOffset;
      DVar5 = SetFilePointer(hFile,(LONG)local_res10,(PLONG)((longlong)&local_res10 + 4),0);
      if (DVar5 == 0xffffffff) {
        GetLastError();
        if (1 < (byte)LogTemp._0_1_) {
          pFVar6 = &`public:_void___cdecl_FMicrosoftReadRequest::PerformRequest(void)___ptr64'::
                    __l47::LOG_Static;
LAB_141ab952a:
          UE::Logging::Private::BasicLog<2>(pFVar6,(FLogCategoryBase *)&LogTemp);
        }
      }
      else {
        lpBuffer = this->TempMemory;
        if (lpBuffer == (uchar *)0x0) {
          lpBuffer = *(uchar **)&this->field_0x8;
        }
        BVar4 = ReadFile(hFile,lpBuffer,(DWORD)this->AlignedBytesToRead,local_res8,(LPOVERLAPPED)0x0
                        );
        if ((BVar4 != 0) &&
           ((this->BytesToRead - this->AlignedOffset) + this->Offset <=
            (longlong)(ulonglong)local_res8[0])) {
          bVar3 = false;
          CloseHandle(hFile);
          goto LAB_141ab9569;
        }
        GetLastError();
        if (1 < (byte)LogTemp._0_1_) {
          pFVar6 = &`public:_void___cdecl_FMicrosoftReadRequest::PerformRequest(void)___ptr64'::
                    __l71::LOG_Static;
          goto LAB_141ab952a;
        }
      }
      CloseHandle(hFile);
    }
LAB_141ab9569:
    if ((bVar3) && (iVar7 < 9)) {
      FWindowsPlatformProcess::Sleep(fVar2);
      pFVar8 = (FScriptContainerElement *)(ulonglong)(iVar7 + 1);
      goto LAB_141ab9424;
    }
    pFVar8 = (FScriptContainerElement *)(ulonglong)(iVar7 + 1);
  } while (bVar3);
LAB_141ab95be:
  FinalizeReadAndSetComplete(this);
  if (FVar9.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar9.Data);
  }
  return;
}

// ReleaseMemoryOwnershipImpl @ 141abc400

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMicrosoftReadRequest::ReleaseMemoryOwnershipImpl(FMicrosoftReadRequest *this)

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

// WaitCompletionImpl @ 141ac5100

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall FMicrosoftReadRequest::WaitCompletionImpl(FMicrosoftReadRequest *this,float param_1)

{
  FAsyncTask<FMicrosoftReadRequestWorker> *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = this->Task;
  if (pFVar1 != (FAsyncTask<FMicrosoftReadRequestWorker> *)0x0) {
    if (0.0 < param_1) {
      bVar3 = FAsyncTaskBase::WaitCompletionWithTimeout((FAsyncTaskBase *)pFVar1,param_1);
      if (!bVar3) {
        return;
      }
    }
    else {
      FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)pFVar1,true,false);
    }
    if ((this->field_0x41 == '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bCompleteAndCallbackCalled",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Microsoft\\MicrosoftAsyncIO.h"
                           ,0x13f,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = this->Task;
    if (pFVar1 != (FAsyncTask<FMicrosoftReadRequestWorker> *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
    }
    this->Task = (FAsyncTask<FMicrosoftReadRequestWorker> *)0x0;
  }
  return;
}

