// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// FGenericReadRequest @ 14161db60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FGenericReadRequest * __thiscall
FGenericReadRequest::FGenericReadRequest
          (FGenericReadRequest *this,FGenericAsyncReadFileHandle *param_1,IPlatformFile *param_2,
          wchar_t *param_3,TFunction<void___cdecl(bool,IAsyncReadRequest_*)> *param_4,uchar *param_5
          ,long64 param_6,long64 param_7,EAsyncIOPriorityAndFlags param_8)

{
  longlong lVar1;
  code *pcVar2;
  void *pvVar3;
  bool bVar4;
  FGenericReadRequest *pFVar5;
  uchar *puVar6;
  undefined8 *puVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  
  IAsyncReadRequest::IAsyncReadRequest((IAsyncReadRequest *)this,param_4,false,param_5);
  puVar11 = (undefined8 *)0x0;
  this->_padding_ = (longlong)&___7FGenericReadRequest__6B_;
  this->PriorityAndFlags = param_8;
  this->_padding_ = 0;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = (longlong)param_3;
  this->Owner = param_1;
  this->Offset = param_6;
  this->BytesToRead = param_7;
  if (((param_6 < 0) || (param_7 < 1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset >= 0 && BytesToRead > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformFile.cpp"
                         ,0xa5,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FGenericReadRequest *)(*pcVar2)();
    return pFVar5;
  }
  if ((this->PriorityAndFlags & AIOP_FLAG_PRECACHE) == AIOP_MIN) {
    if (((this->_padding_ != 0) && (*(char *)((longlong)&this->_padding_ + 5) == '\0')) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Memory || bUserSuppliedMemory",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformFile.cpp"
                           ,0x1e2,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FGenericReadRequest *)(*pcVar2)();
      return pFVar5;
    }
    puVar6 = FGenericAsyncReadFileHandle::GetPrecachedBlock
                       (this->Owner,(uchar *)this->_padding_,this->Offset,this->BytesToRead);
    if (puVar6 != (uchar *)0x0) {
      if (((*(char *)((longlong)&this->_padding_ + 5) != '\0') &&
          ((uchar *)this->_padding_ != puVar6)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bUserSuppliedMemory || Memory == Result",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformFile.cpp"
                             ,0x1e6,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FGenericReadRequest *)(*pcVar2)();
        return pFVar5;
      }
      this->_padding_ = (longlong)puVar6;
      IAsyncReadRequest::SetComplete((IAsyncReadRequest *)this);
      return this;
    }
  }
  puVar7 = ::operator_new(0x78);
  if (puVar7 != (undefined8 *)0x0) {
    uVar10 = (ulonglong)_tls_index;
    puVar7[1] = 0;
    *puVar7 = &___7FAsyncTaskBase__6B_;
    puVar7[0xd] = &TStatId::TStatId_NAME_None;
    *puVar7 = &___7__FAsyncTask_VFGenericReadRequestWorker____6B_;
    pvVar3 = ThreadLocalStoragePointer;
    *(undefined4 *)(puVar7 + 7) = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    lVar1 = *(longlong *)((longlong)pvVar3 + uVar10 * 8);
    *(undefined2 *)(puVar7 + 10) = 3;
    puVar7[0xb] = 0xffffffffffffffff;
    puVar7[0xc] = 0;
    puVar7[0xe] = this;
    if ((*(int *)(lVar1 + 0x9d4c) <
         `public:_struct_TStatId___cdecl_FGenericReadRequestWorker::GetStatId(void)const___ptr64'::
         __l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_struct_TStatId___cdecl_FGenericReadRequestWorker::GetStatId(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_struct_TStatId___cdecl_FGenericReadRequestWorker::GetStatId(void)const___ptr64'::
       __l2::_thread_safe_static_guard_0__ == -1)) {
      FThreadSafeStaticStat<`FGenericReadRequestWorker::GetStatId'::__l2::FStat_FGenericReadRequestWorker>
      ::
      FThreadSafeStaticStat<_FGenericReadRequestWorker::GetStatId_::__l2::FStat_FGenericReadRequestWorker>
                (&`public:_struct_TStatId___cdecl_FGenericReadRequestWorker::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FGenericReadRequestWorker);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FGenericReadRequestWorker::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    pTVar9 = _StatPtr_FGenericReadRequestWorker;
    if (_StatPtr_FGenericReadRequestWorker == (TStatIdData *)0x0) {
      pFVar8 = ::FName::FName((FName *)&param_6,"FGenericReadRequestWorker");
      pTVar9 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_struct_TStatId___cdecl_FGenericReadRequestWorker::GetStatId(void)const___ptr64'
                           ::__l2::StatPtr_FGenericReadRequestWorker,*pFVar8,
                          L"FGenericReadRequestWorker","STATGROUP_ThreadPoolAsyncTasks",
                          "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false
                          ,MCR_Invalid);
    }
    puVar7[0xd] = pTVar9;
    puVar11 = puVar7;
  }
  this->_padding_ = (longlong)puVar11;
  FGenericBaseRequest::Start((FGenericBaseRequest *)this);
  return this;
}

// ~FGenericReadRequest @ 141620df0

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FGenericReadRequest::~FGenericReadRequest(FGenericReadRequest *this)

{
  uchar auVar1 [8];
  FName FVar2;
  longlong *plVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FStatMessage local_28;
  
  this->_padding_ = (longlong)&___7FGenericReadRequest__6B_;
  if (this->_padding_ != 0) {
    if (*(char *)((longlong)&this->_padding_ + 5) == '\0') {
      auVar1 = (uchar  [8])this->BytesToRead;
      if (auVar1 != (uchar  [8])0x0) {
        FVar5 = StatPtr_STAT_AsyncFileMemory;
        if (StatPtr_STAT_AsyncFileMemory == (FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory>)0x0)
        {
          pFVar4 = ::FName::FName(&local_res8,"STAT_AsyncFileMemory");
          FVar5 = (FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory>)
                  FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AsyncFileMemory,*pFVar4,
                             L"Async File Handle Memory","STATGROUP_Memory","STATCAT_Advanced",
                             L"Memory",true,false,ST_int64,false,false,MCR_Physical);
        }
        FVar2 = *(FName *)FVar5;
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
      FMemory::Free((void *)this->_padding_);
    }
    this->_padding_ = 0;
  }
  if ((this->PriorityAndFlags & AIOP_FLAG_PRECACHE) != AIOP_MIN) {
    FGenericAsyncReadFileHandle::RemoveRequest(this->Owner,this);
  }
  this->Owner = (FGenericAsyncReadFileHandle *)0x0;
  this->_padding_ = (longlong)&___7FGenericBaseRequest__6B_;
  if ((FAsyncTaskBase *)this->_padding_ != (FAsyncTaskBase *)0x0) {
    FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)this->_padding_,true,false);
    plVar3 = (longlong *)this->_padding_;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,1);
    }
  }
  IAsyncReadRequest::~IAsyncReadRequest((IAsyncReadRequest *)this);
  return;
}

// CheckForPrecache @ 14162dfc0

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

bool __thiscall FGenericReadRequest::CheckForPrecache(FGenericReadRequest *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uchar *puVar4;
  
  if ((this->PriorityAndFlags & AIOP_FLAG_PRECACHE) == AIOP_MIN) {
    if ((this->_padding_ != 0) && (*(char *)((longlong)&this->_padding_ + 5) == '\0')) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Memory || bUserSuppliedMemory",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformFile.cpp"
                         ,0x1e2,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    puVar4 = FGenericAsyncReadFileHandle::GetPrecachedBlock
                       (this->Owner,(uchar *)this->_padding_,this->Offset,this->BytesToRead);
    if (puVar4 != (uchar *)0x0) {
      if ((*(char *)((longlong)&this->_padding_ + 5) != '\0') &&
         ((uchar *)this->_padding_ != puVar4)) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bUserSuppliedMemory || Memory == Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformFile.cpp"
                           ,0x1e6,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      this->_padding_ = (longlong)puVar4;
      return true;
    }
  }
  return false;
}

// PerformRequest @ 14164fd30

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FGenericReadRequest::PerformRequest(FGenericReadRequest *this)

{
  FWindowsRecursiveMutex *pFVar1;
  char cVar2;
  FGenericAsyncReadFileHandle *pFVar3;
  longlong lVar4;
  FName FVar5;
  uchar auVar6 [8];
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  IFileHandle *pIVar10;
  IFileHandle *pIVar11;
  longlong lVar12;
  void *pvVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory> FVar15;
  IFileHandle **ppIVar16;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  IFileHandle *pIVar17;
  wchar_t *pwVar18;
  IFileHandle *pIVar19;
  FNameEntryId FVar20;
  FLLMScope local_res8 [2];
  uint local_res10;
  uint uStackX_14;
  FName local_res18;
  FMemScope local_res20;
  FName local_58;
  FName local_50;
  FStatMessage local_48;
  
  FLLMScope::FLLMScope(local_res8,FileSystem,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,FileSystem,true);
  if (*(char *)((longlong)&this->_padding_ + 3) == '\0') {
    pFVar3 = this->Owner;
    pIVar17 = (IFileHandle *)0x0;
    cVar2 = *(char *)((longlong)&this->_padding_ + 5);
    if (pFVar3->bDisableHandleCaching == false) {
      pFVar1 = &pFVar3->HandleCacheCritical;
      if (pFVar1 == (FWindowsRecursiveMutex *)0x0) goto LAB_141650290;
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
      ppIVar16 = pFVar3->HandleCache;
      pIVar11 = pIVar17;
      pIVar19 = pIVar17;
      do {
        pIVar10 = *ppIVar16;
        if (pIVar10 != (IFileHandle *)0x0) {
          pFVar3->HandleCache[(int)pIVar19] = (IFileHandle *)0x0;
          goto LAB_14164fe4c;
        }
        pIVar19 = (IFileHandle *)(ulonglong)((int)pIVar19 + 1);
        pIVar11 = (IFileHandle *)&pIVar11->field_0x1;
        ppIVar16 = ppIVar16 + 1;
      } while ((longlong)pIVar11 < 4);
      pIVar10 = pIVar17;
      if (pFVar3->bOpenFailed == false) {
        if ((pFVar3->Filename).Data.ArrayNum == 0) {
          pwVar18 = L"";
        }
        else {
          pwVar18 = (wchar_t *)(pFVar3->Filename).Data.AllocatorInstance.Data;
        }
        pIVar10 = (IFileHandle *)
                  (**(code **)((longlong)*pFVar3->LowerLevel + 0xf8))
                            (pFVar3->LowerLevel,pwVar18,pFVar3->bAllowWrite);
        pFVar3->bOpenFailed = pIVar10 == (IFileHandle *)0x0;
      }
LAB_14164fe4c:
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
    }
    else {
      if ((pFVar3->Filename).Data.ArrayNum == 0) {
        pwVar18 = L"";
      }
      else {
        pwVar18 = (wchar_t *)(pFVar3->Filename).Data.AllocatorInstance.Data;
      }
      pIVar10 = (IFileHandle *)
                (**(code **)((longlong)*pFVar3->LowerLevel + 0xf8))
                          (pFVar3->LowerLevel,pwVar18,pFVar3->bAllowWrite);
    }
    *(bool *)((longlong)&this->_padding_ + 3) = pIVar10 == (IFileHandle *)0x0;
    if (pIVar10 == (IFileHandle *)0x0) {
      if ((*(char *)((longlong)&this->_padding_ + 5) == '\0') && (cVar2 != '\0')) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformFile.cpp"
                           ,0x1d3,L"");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (this->_padding_ == 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Memory",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformFile.cpp"
                             ,0x1d5,L"");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        FMemory::Free((void *)this->_padding_);
        auVar6 = (uchar  [8])this->BytesToRead;
        if (auVar6 != (uchar  [8])0x0) {
          FVar15 = StatPtr_STAT_AsyncFileMemory;
          if (StatPtr_STAT_AsyncFileMemory == (FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory>)0x0
             ) {
            pFVar14 = ::FName::FName(&local_50,"STAT_AsyncFileMemory");
            FVar15 = (FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AsyncFileMemory,*pFVar14,
                                L"Async File Handle Memory","STATGROUP_Memory","STATCAT_Advanced",
                                L"Memory",true,false,ST_int64,false,false,MCR_Physical);
          }
          FVar5 = *(FName *)FVar15;
          FVar20 = FVar5.ComparisonIndex.Value;
          uVar9 = FVar5.Number;
          local_res10 = FVar20.Value;
          uStackX_14 = uVar9;
          if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            this_00 = TlsGetValue(FThreadStats::TlsSlot);
            if (this_00 == (FThreadStats *)0x0) {
              this_01 = FThreadStatsPool::Get();
              this_00 = FThreadStatsPool::GetFromPool(this_01);
            }
            local_48.NameAndInfo.Number = uVar9 & 0xffffbfff | 0xb000;
            local_res18 = FVar5;
            local_48.StatData.Pad = auVar6;
            local_48.NameAndInfo.Index.Value = FVar20.Value;
            FThreadStats::AddStatMessage(this_00,&local_48);
            FStatsTrace::Add(&local_res18,-(longlong)auVar6);
            if (this_00->ScopeCount == 0) {
              FThreadStats::Flush(this_00,false,false);
              this->_padding_ = 0;
              goto LAB_14165007c;
            }
            if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(this_00,false,false);
            }
          }
        }
        this->_padding_ = 0;
      }
    }
    else {
      if (this->BytesToRead == 0x7fffffffffffffff) {
        lVar4 = this->Offset;
        lVar12 = (**(code **)((longlong)*pIVar10 + 0x50))(pIVar10);
        lVar12 = lVar12 - lVar4;
        this->BytesToRead = lVar12;
        if (lVar12 < 1) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("BytesToRead > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformFile.cpp"
                             ,0x1c4,L"");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
      }
      if (cVar2 == '\0') {
        if (this->_padding_ != 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("!Memory",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformFile.cpp"
                             ,0x1c8,L"");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        pvVar13 = FMemory::Malloc(this->BytesToRead,0);
        lVar4 = this->BytesToRead;
        this->_padding_ = (longlong)pvVar13;
        if (lVar4 != 0) {
          FVar15 = StatPtr_STAT_AsyncFileMemory;
          if (StatPtr_STAT_AsyncFileMemory == (FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory>)0x0
             ) {
            pFVar14 = ::FName::FName(&local_58,"STAT_AsyncFileMemory");
            FVar15 = (FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AsyncFileMemory,*pFVar14,
                                L"Async File Handle Memory","STATGROUP_Memory","STATCAT_Advanced",
                                L"Memory",true,false,ST_int64,false,false,MCR_Physical);
          }
          FVar5 = *(FName *)FVar15;
          local_res10 = (uint)FVar5.ComparisonIndex.Value;
          uStackX_14 = FVar5.Number;
          FThreadStats::AddMessage<__int64>(FVar5,Add,lVar4,false);
        }
      }
      if (this->_padding_ == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Memory",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformFile.cpp"
                           ,0x1cc,L"");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      (**(code **)((longlong)*pIVar10 + 0x10))(pIVar10,this->Offset);
      (**(code **)((longlong)*pIVar10 + 0x20))(pIVar10,this->_padding_,this->BytesToRead);
      pFVar3 = this->Owner;
      if (pFVar3->bDisableHandleCaching == false) {
        if (pFVar3->bOpenFailed != false) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bOpenFailed",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformFile.cpp"
                             ,0x182,L"");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        pFVar1 = &pFVar3->HandleCacheCritical;
        if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
LAB_141650290:
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
        ppIVar16 = pFVar3->HandleCache;
        pIVar11 = pIVar17;
        do {
          if (*ppIVar16 == (IFileHandle *)0x0) {
            pFVar3->HandleCache[(int)pIVar11] = pIVar10;
            LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
            goto LAB_14165007c;
          }
          pIVar11 = (IFileHandle *)(ulonglong)((int)pIVar11 + 1);
          pIVar17 = (IFileHandle *)&pIVar17->field_0x1;
          ppIVar16 = ppIVar16 + 1;
        } while ((longlong)pIVar17 < 4);
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
      }
      (**(code **)*pIVar10)(pIVar10,1);
    }
  }
LAB_14165007c:
  IAsyncReadRequest::SetComplete((IAsyncReadRequest *)this);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ReleaseMemoryOwnershipImpl @ 141656890

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FGenericReadRequest::ReleaseMemoryOwnershipImpl(FGenericReadRequest *this)

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

