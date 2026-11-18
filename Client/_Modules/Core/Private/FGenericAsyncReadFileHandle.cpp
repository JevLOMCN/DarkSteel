// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// FGenericAsyncReadFileHandle @ 14161d440

/* WARNING: Enum "Type": Some values do not have unique names */

FGenericAsyncReadFileHandle * __thiscall
FGenericAsyncReadFileHandle::FGenericAsyncReadFileHandle
          (FGenericAsyncReadFileHandle *this,IPlatformFile *param_1,wchar_t *param_2,bool param_3)

{
  FName FVar1;
  bool bVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_AsyncFileHandles> FVar4;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FStatMessage local_38;
  
  this->_padding_ = (longlong)&___7IAsyncReadFileHandle__6B_;
  FVar4 = StatPtr_STAT_AsyncFileHandles;
  if (StatPtr_STAT_AsyncFileHandles == (FThreadSafeStaticStat<FStat_STAT_AsyncFileHandles>)0x0) {
    pFVar3 = ::FName::FName(&local_res8,"STAT_AsyncFileHandles");
    FVar4 = (FThreadSafeStaticStat<FStat_STAT_AsyncFileHandles>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AsyncFileHandles,*pFVar3,
                       L"Num Async File Handles","STATGROUP_Memory","STATCAT_Advanced",L"Memory",
                       true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar4;
  local_res8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_38.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
    local_38.StatData.Pad[0] = '\x01';
    local_38.StatData.Pad[1] = '\0';
    local_38.StatData.Pad[2] = '\0';
    local_38.StatData.Pad[3] = '\0';
    local_38.StatData.Pad[4] = '\0';
    local_38.StatData.Pad[5] = '\0';
    local_38.StatData.Pad[6] = '\0';
    local_38.StatData.Pad[7] = '\0';
    local_res8 = FVar1;
    local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_38);
    FStatsTrace::Add(&local_res8,1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  this->LowerLevel = param_1;
  this->_padding_ = (longlong)&___7FGenericAsyncReadFileHandle__6B_;
  ::FString::FString(&this->Filename,param_2);
  (this->LiveRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LiveRequests).ArrayNum = 0;
  (this->LiveRequests).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->LiveRequestsCritical,4000);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->HandleCacheCritical,4000);
  this->bAllowWrite = param_3;
  this->bOpenFailed = false;
  this->bDisableHandleCaching = false;
  if ((GCacheHandleForPakFilesOnly != 0) &&
     (bVar2 = ::FString::EndsWith(&this->Filename,L".pak",4,IgnoreCase), !bVar2)) {
    this->bDisableHandleCaching = true;
  }
  this->HandleCache[0] = (IFileHandle *)0x0;
  this->HandleCache[1] = (IFileHandle *)0x0;
  this->HandleCache[2] = (IFileHandle *)0x0;
  this->HandleCache[3] = (IFileHandle *)0x0;
  return this;
}

// GetPrecachedBlock @ 1416455e0

/* WARNING: Enum "Type": Some values do not have unique names */

uchar * __thiscall
FGenericAsyncReadFileHandle::GetPrecachedBlock
          (FGenericAsyncReadFileHandle *this,uchar *param_1,long64 param_2,long64 param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  uchar *_Dst;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory> FVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FName local_30;
  
  lpCriticalSection = &this->LiveRequestsCritical;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar6 = (this->LiveRequests).AllocatorInstance.Data;
  _Dst = (uchar *)0x0;
  iVar2 = (this->LiveRequests).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->LiveRequests).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FGenericReadRequest_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    lVar3 = *(longlong *)pFVar6;
    if ((((param_2 < *(longlong *)(lVar3 + 0x68)) ||
         (*(longlong *)(lVar3 + 0x68) + *(longlong *)(lVar3 + 0x70) < param_2 + param_3)) ||
        (*(char *)(lVar3 + 0x41) == '\0')) || (*(longlong *)(lVar3 + 8) == 0)) {
      _Dst = (uchar *)0x0;
    }
    else {
      _Dst = param_1;
      if (param_1 == (uchar *)0x0) {
        _Dst = FMemory::Malloc(param_3,0);
        if (param_3 != 0) {
          FVar5 = StatPtr_STAT_AsyncFileMemory;
          if (StatPtr_STAT_AsyncFileMemory == (FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory>)0x0
             ) {
            pFVar4 = ::FName::FName(&local_30,"STAT_AsyncFileMemory");
            FVar5 = (FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory>)
                    FThreadSafeStaticStatBase::DoSetup
                              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AsyncFileMemory,*pFVar4,
                               L"Async File Handle Memory","STATGROUP_Memory","STATCAT_Advanced",
                               L"Memory",true,false,ST_int64,false,false,MCR_Physical);
          }
          FThreadStats::AddMessage<__int64>(*(FName *)FVar5,Add,param_3,false);
        }
      }
      memcpy(_Dst,(void *)((*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x68)) + param_2),
             param_3);
      if (_Dst != (uchar *)0x0) break;
    }
    pFVar6 = pFVar6 + 8;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return _Dst;
}

// ReadRequest @ 141652390

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

IAsyncReadRequest * __thiscall
FGenericAsyncReadFileHandle::ReadRequest
          (FGenericAsyncReadFileHandle *this,long64 param_1,long64 param_2,
          EAsyncIOPriorityAndFlags param_3,
          TFunction<void___cdecl(bool,IAsyncReadRequest_*)> *param_4,uchar *param_5)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FGenericReadRequest *this_00;
  IAsyncReadRequest *pIVar6;
  wchar_t *pwVar7;
  FGenericReadRequest *local_18 [2];
  
  this_00 = ::operator_new(0x80);
  local_18[0] = (FGenericReadRequest *)0x0;
  if (this_00 != (FGenericReadRequest *)0x0) {
    if ((this->Filename).Data.ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(this->Filename).Data.AllocatorInstance.Data;
    }
    local_18[0] = FGenericReadRequest::FGenericReadRequest
                            (this_00,this,this->LowerLevel,pwVar7,param_4,param_5,param_1,param_2,
                             param_3);
  }
  if ((param_3 >> 8 & 1) != 0) {
    lpCriticalSection = &this->LiveRequestsCritical;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar2 = (this->LiveRequests).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->LiveRequests).ArrayMax * 8))
    {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pIVar6 = (IAsyncReadRequest *)(*pcVar3)();
        return pIVar6;
      }
    }
    iVar5 = (this->LiveRequests).ArrayNum;
    piVar1 = &(this->LiveRequests).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->LiveRequests).AllocatorInstance,piVar1);
    }
    (this->LiveRequests).ArrayNum = iVar5 + 1;
    *(FGenericReadRequest **)((this->LiveRequests).AllocatorInstance.Data + (longlong)iVar5 * 8) =
         local_18[0];
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return (IAsyncReadRequest *)local_18[0];
}

// RemoveRequest @ 141657a90

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall
FGenericAsyncReadFileHandle::RemoveRequest
          (FGenericAsyncReadFileHandle *this,FGenericReadRequest *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  FGenericReadRequest *pFVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  FGenericReadRequest *local_res10;
  int local_res18;
  
  lpCriticalSection = &this->LiveRequestsCritical;
  local_res10 = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar1 = (this->LiveRequests).AllocatorInstance.Data;
  if (((pFVar1 <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 <
       pFVar1 + (longlong)(this->LiveRequests).ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_res18 = (this->LiveRequests).ArrayNum;
  lVar4 = (longlong)local_res18;
  if (local_res18 != 0) {
    iVar9 = 0;
    pFVar1 = (this->LiveRequests).AllocatorInstance.Data;
    bVar3 = *(FGenericReadRequest **)pFVar1 != local_res10;
    lVar8 = 0;
    pFVar5 = local_res10;
    iVar6 = 0;
    do {
      iVar7 = iVar6;
      do {
        lVar8 = lVar8 + 1;
        iVar7 = iVar7 + 1;
        if (lVar4 <= lVar8) break;
      } while (bVar3 == (*(FGenericReadRequest **)(pFVar1 + lVar8 * 8) != pFVar5));
      if (bVar3 != false) {
        if (iVar9 != iVar6) {
          memmove(pFVar1 + (longlong)iVar9 * 8,pFVar1 + (longlong)iVar6 * 8,
                  (longlong)(iVar7 - iVar6) << 3);
          pFVar5 = local_res10;
        }
        iVar9 = iVar9 + (iVar7 - iVar6);
      }
      bVar3 = (bool)(bVar3 ^ 1);
      iVar6 = iVar7;
    } while (lVar8 < lVar4);
    (this->LiveRequests).ArrayNum = iVar9;
    if (local_res18 - iVar9 == 1) goto LAB_141657c45;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("LiveRequests.Remove(Req) == 1",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformFile.cpp"
                     ,0x119,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_141657c45:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// ShrinkHandleBuffers @ 141660390

void __thiscall FGenericAsyncReadFileHandle::ShrinkHandleBuffers(FGenericAsyncReadFileHandle *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  if (this->bDisableHandleCaching == false) {
    lpCriticalSection = &this->HandleCacheCritical;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (this->HandleCache[0] != (IFileHandle *)0x0) {
      (**(code **)((longlong)*this->HandleCache[0] + 0x48))();
    }
    if (this->HandleCache[1] != (IFileHandle *)0x0) {
      (**(code **)((longlong)*this->HandleCache[1] + 0x48))();
    }
    if (this->HandleCache[2] != (IFileHandle *)0x0) {
      (**(code **)((longlong)*this->HandleCache[2] + 0x48))();
    }
    if (this->HandleCache[3] != (IFileHandle *)0x0) {
      (**(code **)((longlong)*this->HandleCache[3] + 0x48))();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// SizeRequest @ 1416604b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

IAsyncReadRequest * __thiscall
FGenericAsyncReadFileHandle::SizeRequest
          (FGenericAsyncReadFileHandle *this,
          TFunction<void___cdecl(bool,IAsyncReadRequest_*)> *param_1)

{
  IPlatformFile *pIVar1;
  longlong lVar2;
  void *pvVar3;
  FGenericBaseRequest *this_00;
  FAsyncTask<FGenericReadRequestWorker> *pFVar4;
  FName *pFVar5;
  TStatIdData *pTVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  FName local_res18;
  
  this_00 = ::operator_new(0x60);
  if (this_00 == (FGenericBaseRequest *)0x0) {
    return (IAsyncReadRequest *)0x0;
  }
  if ((this->Filename).Data.ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(this->Filename).Data.AllocatorInstance.Data;
  }
  pIVar1 = this->LowerLevel;
  IAsyncReadRequest::IAsyncReadRequest((IAsyncReadRequest *)this_00,param_1,true,(uchar *)0x0);
  this_00->LowerLevel = pIVar1;
  this_00->_padding_ = (longlong)&___7FGenericSizeRequest__6B_;
  this_00->Task = (FAsyncTask<FGenericReadRequestWorker> *)0x0;
  this_00->Filename = pwVar8;
  pFVar4 = ::operator_new(0x78);
  if (pFVar4 != (FAsyncTask<FGenericReadRequestWorker> *)0x0) {
    uVar7 = (ulonglong)_tls_index;
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = (longlong)&___7FAsyncTaskBase__6B_;
    pFVar4->_padding_ = (longlong)&TStatId::TStatId_NAME_None;
    pFVar4->_padding_ = (longlong)&___7__FAsyncTask_VFGenericReadRequestWorker____6B_;
    pvVar3 = ThreadLocalStoragePointer;
    *(undefined4 *)&pFVar4->_padding_ = 0;
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = 0;
    lVar2 = *(longlong *)((longlong)pvVar3 + uVar7 * 8);
    *(undefined2 *)&pFVar4->_padding_ = 3;
    pFVar4->_padding_ = -1;
    pFVar4->_padding_ = 0;
    (pFVar4->Task).ReadRequest = this_00;
    if (*(int *)(lVar2 + 0x9d4c) <
        `public:_struct_TStatId___cdecl_FGenericReadRequestWorker::GetStatId(void)const___ptr64'::
        __l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_struct_TStatId___cdecl_FGenericReadRequestWorker::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_struct_TStatId___cdecl_FGenericReadRequestWorker::GetStatId(void)const___ptr64'::
          __l2::_thread_safe_static_guard_0__ == -1) {
        FThreadSafeStaticStat<`FGenericReadRequestWorker::GetStatId'::__l2::FStat_FGenericReadRequestWorker>
        ::
        FThreadSafeStaticStat<_FGenericReadRequestWorker::GetStatId_::__l2::FStat_FGenericReadRequestWorker>
                  (&`public:_struct_TStatId___cdecl_FGenericReadRequestWorker::GetStatId(void)const___ptr64'
                    ::__l2::StatPtr_FGenericReadRequestWorker);
        _Init_thread_footer(&`public:_struct_TStatId___cdecl_FGenericReadRequestWorker::GetStatId(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    pTVar6 = _StatPtr_FGenericReadRequestWorker;
    if (_StatPtr_FGenericReadRequestWorker == (TStatIdData *)0x0) {
      pFVar5 = ::FName::FName(&local_res18,"FGenericReadRequestWorker");
      pTVar6 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_struct_TStatId___cdecl_FGenericReadRequestWorker::GetStatId(void)const___ptr64'
                           ::__l2::StatPtr_FGenericReadRequestWorker,*pFVar5,
                          L"FGenericReadRequestWorker","STATGROUP_ThreadPoolAsyncTasks",
                          "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false
                          ,MCR_Invalid);
    }
    pFVar4->_padding_ = (longlong)pTVar6;
    this_00->Task = pFVar4;
    FGenericBaseRequest::Start(this_00);
    return (IAsyncReadRequest *)this_00;
  }
  this_00->Task = (FAsyncTask<FGenericReadRequestWorker> *)0x0;
  FGenericBaseRequest::Start(this_00);
  return (IAsyncReadRequest *)this_00;
}

