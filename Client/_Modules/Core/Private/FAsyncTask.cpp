// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 22

// DoTaskWork @ 141635260

void __thiscall
FAsyncTask<FGenericReadRequestWorker>::DoTaskWork(FAsyncTask<FGenericReadRequestWorker> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141635267. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->Task).ReadRequest)->_padding_ + 0x28))();
  return;
}

// MarkAsCanceled @ 14164da60

void __thiscall
FAsyncTask<FGenericReadRequestWorker>::MarkAsCanceled(FAsyncTask<FGenericReadRequestWorker> *this)

{
  return;
}

// TryAbandonTask @ 141665ae0

bool __thiscall
FAsyncTask<FGenericReadRequestWorker>::TryAbandonTask(FAsyncTask<FGenericReadRequestWorker> *this)

{
  return false;
}

// FAsyncTask<FRemoteConfigAsyncWorker><wchar_t_const_*_&,FRemoteConfigAsyncIOInfo_&,FString_*_&,bool_&> @ 141902b70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FAsyncTask<FRemoteConfigAsyncWorker> * __thiscall
FAsyncTask<FRemoteConfigAsyncWorker>::
FAsyncTask<FRemoteConfigAsyncWorker><wchar_t_const_*_&,FRemoteConfigAsyncIOInfo_&,FString_*_&,bool_&>
          (FAsyncTask<FRemoteConfigAsyncWorker> *this,wchar_t **param_1,
          FRemoteConfigAsyncIOInfo *param_2,FString **param_3,bool *param_4)

{
  bool bVar1;
  int iVar2;
  wchar_t *_Str;
  FString *pFVar3;
  code *pcVar4;
  bool bVar5;
  size_t sVar6;
  FAsyncTask<FRemoteConfigAsyncWorker> *pFVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  int iVar10;
  
  this->_padding_ = (longlong)&___7FAsyncTaskBase__6B_;
  this->_padding_ = (longlong)&TStatId::TStatId_NAME_None;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7__FAsyncTask_VFRemoteConfigAsyncWorker____6B_;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 3;
  this->_padding_ = -1;
  _Str = *param_1;
  bVar1 = *param_4;
  pFVar3 = *param_3;
  (this->Task).IOInfo.Buffer.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Task).IOInfo.Buffer.Data.ArrayNum = 0;
  (this->Task).IOInfo.Buffer.Data.ArrayMax = 0;
  (this->Task).IOInfo.TimeStamp.Ticks = 0;
  (this->Task).Contents.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Task).Contents.Data.ArrayNum = 0;
  (this->Task).Contents.Data.ArrayMax = 0;
  sVar6 = wcslen(_Str);
  if ((0x3ff < (int)sVar6) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FCString::Strlen(InFilename) < 1024",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\RemoteConfigIni.cpp"
                         ,0x2d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FAsyncTask<FRemoteConfigAsyncWorker> *)(*pcVar4)();
    return pFVar7;
  }
  wcscpy((this->Task).Filename,_Str);
  (this->Task).bIsRead = bVar1;
  FRemoteConfigAsyncIOInfo::operator=(&(this->Task).IOInfo,param_2);
  if (pFVar3 != (FString *)0x0) {
    iVar2 = (pFVar3->Data).ArrayNum;
    iVar10 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar10 = 0;
    }
    ::FString::AssignRange
              (&(this->Task).Contents,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar10);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_struct_TStatId___cdecl_FRemoteConfigAsyncWorker::GetStatId(void)const___ptr64'::__l2
       ::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_struct_TStatId___cdecl_FRemoteConfigAsyncWorker::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_struct_TStatId___cdecl_FRemoteConfigAsyncWorker::GetStatId(void)const___ptr64'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    FThreadSafeStaticStat<`FRemoteConfigAsyncWorker::GetStatId'::__l2::FStat_FRemoteConfigAsyncWorker>
    ::
    FThreadSafeStaticStat<_FRemoteConfigAsyncWorker::GetStatId_::__l2::FStat_FRemoteConfigAsyncWorker>
              (&`public:_struct_TStatId___cdecl_FRemoteConfigAsyncWorker::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_FRemoteConfigAsyncWorker);
    _Init_thread_footer(&`public:_struct_TStatId___cdecl_FRemoteConfigAsyncWorker::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar9 = _StatPtr_FRemoteConfigAsyncWorker;
  if (_StatPtr_FRemoteConfigAsyncWorker == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName((FName *)&param_4,"FRemoteConfigAsyncWorker");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_FRemoteConfigAsyncWorker::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FRemoteConfigAsyncWorker,*pFVar8,
                        L"FRemoteConfigAsyncWorker","STATGROUP_ThreadPoolAsyncTasks",
                        "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  this->_padding_ = (longlong)pTVar9;
  return this;
}

// DoTaskWork @ 141934970

void __thiscall
FAsyncTask<FRemoteConfigAsyncWorker>::DoTaskWork(FAsyncTask<FRemoteConfigAsyncWorker> *this)

{
  int iVar1;
  bool bVar2;
  IFileManager *pIVar3;
  long64 *plVar4;
  undefined1 local_res8 [8];
  TStringView<wchar_t> local_18;
  
  if ((this->Task).bIsRead != false) {
    pIVar3 = IFileManager::Get();
    plVar4 = (long64 *)(**(code **)((longlong)*pIVar3 + 0xd8))(pIVar3,local_res8);
    (this->Task).IOInfo.TimeStamp.Ticks = *plVar4;
    bVar2 = FFileHelper::LoadFileToString(&(this->Task).IOInfo.Buffer,(this->Task).Filename,None,0);
    (this->Task).IOInfo.bReadIOFailed = !bVar2;
    return;
  }
  if (1 < (this->Task).Contents.Data.ArrayNum) {
    pIVar3 = IFileManager::Get();
    local_18.DataPtr = (wchar_t *)(this->Task).Contents.Data.AllocatorInstance.Data;
    iVar1 = (this->Task).Contents.Data.ArrayNum;
    local_18.Size = iVar1 + -1;
    if (iVar1 == 0) {
      local_18.Size = 0;
    }
    FFileHelper::SaveStringToFile(&local_18,(this->Task).Filename,AutoDetect,pIVar3,0);
  }
  return;
}

// MarkAsCanceled @ 1419569a0

void __thiscall
FAsyncTask<FRemoteConfigAsyncWorker>::MarkAsCanceled(FAsyncTask<FRemoteConfigAsyncWorker> *this)

{
  return;
}

// TryAbandonTask @ 141975890

bool __thiscall
FAsyncTask<FRemoteConfigAsyncWorker>::TryAbandonTask(FAsyncTask<FRemoteConfigAsyncWorker> *this)

{
  return false;
}

// DoTaskWork @ 1419eec00

void __thiscall FAsyncTask<FAsyncStatsFile>::DoTaskWork(FAsyncTask<FAsyncStatsFile> *this)

{
  FStatsReadFile::ReadAndProcessSynchronously((this->Task).Owner);
  return;
}

// DoTaskWork @ 1419eec10

void __thiscall FAsyncTask<FAsyncStatsWrite>::DoTaskWork(FAsyncTask<FAsyncStatsWrite> *this)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  FArchive *pFVar2;
  IStatsWriteFile *pIVar3;
  code *pcVar4;
  bool bVar5;
  long64 lVar6;
  undefined8 uVar7;
  FCompressedStatsData local_28;
  
  pTVar1 = &(this->Task).Data;
  if ((this->Task).Data.ArrayNum == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsFile.cpp"
                       ,0x38,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = ((this->Task).Outer)->File;
  lVar6 = (**(code **)(*(longlong *)pFVar2 + 0x30))(pFVar2);
  ((this->Task).Outer)->FileSize = lVar6;
  (**(code **)(*(longlong *)pFVar2 + 0x1b8))(pFVar2,lVar6);
  uVar7 = (**(code **)(*(longlong *)pFVar2 + 0x28))(pFVar2);
  local_28.DestData = &((this->Task).Outer)->CompressedData;
  local_28.bEndOfCompressedData = false;
  local_28.SrcData = pTVar1;
  if ((pFVar2->field_0x28 & 4) == 0) {
    if ((pFVar2->field_0x28 & 1) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Stats\\StatsFile.h"
                         ,0x95,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      FCompressedStatsData::ReadCompressed(&local_28,pFVar2);
    }
  }
  else {
    FCompressedStatsData::WriteCompressed(&local_28,pFVar2);
  }
  pIVar3 = (this->Task).Outer;
                    /* WARNING: Could not recover jumptable at 0x0001419eed1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pIVar3->_padding_ + 0x10))(pIVar3,uVar7);
  return;
}

// MarkAsCanceled @ 141a0a870

void __thiscall FAsyncTask<FAsyncStatsFile>::MarkAsCanceled(FAsyncTask<FAsyncStatsFile> *this)

{
  return;
}

// MarkAsCanceled @ 141a0a880

void __thiscall FAsyncTask<FAsyncStatsWrite>::MarkAsCanceled(FAsyncTask<FAsyncStatsWrite> *this)

{
  return;
}

// TryAbandonTask @ 141a25720

bool __thiscall FAsyncTask<FAsyncStatsFile>::TryAbandonTask(FAsyncTask<FAsyncStatsFile> *this)

{
  LOCK();
  ((this->Task).Owner)->bShouldStopProcessing = (FThreadSafeBool)0x1;
  UNLOCK();
  return true;
}

// TryAbandonTask @ 141a25740

bool __thiscall FAsyncTask<FAsyncStatsWrite>::TryAbandonTask(FAsyncTask<FAsyncStatsWrite> *this)

{
  return false;
}

// DoTaskWork @ 141b3e690

void __thiscall
FAsyncTask<AsyncWorkTestImpl::FCompletionTask<FAsyncTask<AsyncWorkTestImpl::FOuterTask>_>_>::
DoTaskWork(FAsyncTask<AsyncWorkTestImpl::FCompletionTask<FAsyncTask<AsyncWorkTestImpl::FOuterTask>_>_>
           *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0xbe8) != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bIsOuterTaskRunning",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\AsyncWorkTest.cpp"
                       ,0x42,
                       L"We got picked by the busywait of the outer task we are going to wait on, we are now deadlocked"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (CpuChannel->Enabled < 0) {
    FWindowsPlatformProcess::Sleep(__real_3c23d70a);
    FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)(this->Task).OtherTask,true,false);
    return;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&`public:_void___cdecl_AsyncWorkTestImpl::FCompletionTask<FAsyncTask<AsyncWorkTestImpl::FOuterTask>_>::DoWork(void)___ptr64'
              ::__l2::__CpuProfilerEventSpecId68,"FCompletionTask::DoWork",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\AsyncWorkTest.cpp"
             ,0x44);
  FCpuProfilerTrace::OutputBeginEvent
            (`public:_void___cdecl_AsyncWorkTestImpl::FCompletionTask<FAsyncTask<AsyncWorkTestImpl::FOuterTask>_>::DoWork(void)___ptr64'
             ::__l2::__CpuProfilerEventSpecId68);
  FWindowsPlatformProcess::Sleep(__real_3c23d70a);
  FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)(this->Task).OtherTask,true,false);
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// DoTaskWork @ 141b3e770

void __thiscall
FAsyncTask<AsyncWorkTestImpl::FInnerTask>::DoTaskWork
          (FAsyncTask<AsyncWorkTestImpl::FInnerTask> *this)

{
  if (CpuChannel->Enabled < 0) {
    FWindowsPlatformProcess::Sleep(__real_3c23d70a);
    return;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&`public:_void___cdecl_AsyncWorkTestImpl::FInnerTask::DoWork(void)___ptr64'::__l2::
              __CpuProfilerEventSpecId19,"FInnerTask::DoWork",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\AsyncWorkTest.cpp"
             ,0x13);
  FCpuProfilerTrace::OutputBeginEvent
            (`public:_void___cdecl_AsyncWorkTestImpl::FInnerTask::DoWork(void)___ptr64'::__l2::
             __CpuProfilerEventSpecId19);
  FWindowsPlatformProcess::Sleep(__real_3c23d70a);
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// DoTaskWork @ 141b3e7e0

void __thiscall
FAsyncTask<AsyncWorkTestImpl::FOuterTask>::DoTaskWork
          (FAsyncTask<AsyncWorkTestImpl::FOuterTask> *this)

{
  AsyncWorkTestImpl::FOuterTask::DoWork(&this->Task);
  return;
}

// MarkAsCanceled @ 141b46a70

void __thiscall
FAsyncTask<AsyncWorkTestImpl::FCompletionTask<FAsyncTask<AsyncWorkTestImpl::FOuterTask>_>_>::
MarkAsCanceled(FAsyncTask<AsyncWorkTestImpl::FCompletionTask<FAsyncTask<AsyncWorkTestImpl::FOuterTask>_>_>
               *this)

{
  return;
}

// MarkAsCanceled @ 141b46a80

void __thiscall
FAsyncTask<AsyncWorkTestImpl::FInnerTask>::MarkAsCanceled
          (FAsyncTask<AsyncWorkTestImpl::FInnerTask> *this)

{
  return;
}

// MarkAsCanceled @ 141b46a90

void __thiscall
FAsyncTask<AsyncWorkTestImpl::FOuterTask>::MarkAsCanceled
          (FAsyncTask<AsyncWorkTestImpl::FOuterTask> *this)

{
  return;
}

// TryAbandonTask @ 141bb9d00

bool __thiscall
FAsyncTask<AsyncWorkTestImpl::FCompletionTask<FAsyncTask<AsyncWorkTestImpl::FOuterTask>_>_>::
TryAbandonTask(FAsyncTask<AsyncWorkTestImpl::FCompletionTask<FAsyncTask<AsyncWorkTestImpl::FOuterTask>_>_>
               *this)

{
  return false;
}

// TryAbandonTask @ 141bb9d10

bool __thiscall
FAsyncTask<AsyncWorkTestImpl::FInnerTask>::TryAbandonTask
          (FAsyncTask<AsyncWorkTestImpl::FInnerTask> *this)

{
  return false;
}

// TryAbandonTask @ 141bb9d20

bool __thiscall
FAsyncTask<AsyncWorkTestImpl::FOuterTask>::TryAbandonTask
          (FAsyncTask<AsyncWorkTestImpl::FOuterTask> *this)

{
  return false;
}

