// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 22

// FAsyncTask<FAsyncAudioDecompressWorker><USoundWave_*_&,int,FAudioDevice_*> @ 1476082d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FAsyncTask<FAsyncAudioDecompressWorker> * __thiscall
FAsyncTask<FAsyncAudioDecompressWorker>::
FAsyncTask<FAsyncAudioDecompressWorker><USoundWave_*_&,int,FAudioDevice_*>
          (FAsyncTask<FAsyncAudioDecompressWorker> *this,USoundWave **param_1,int *param_2,
          FAudioDevice **param_3)

{
  int iVar1;
  USoundWave *this_00;
  code *pcVar2;
  bool bVar3;
  FAsyncTask<FAsyncAudioDecompressWorker> *pFVar4;
  IAudioInfoFactoryRegistry *pIVar5;
  FName FVar6;
  longlong *plVar7;
  ICompressedAudioInfo *pIVar8;
  FName *pFVar9;
  TStatIdData *pTVar10;
  ulonglong uVar11;
  FName local_res8;
  FName local_res10;
  
  pIVar8 = (ICompressedAudioInfo *)0x0;
  *(undefined2 *)&this->_padding_ = 3;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAsyncTaskBase__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&TStatId::TStatId_NAME_None;
  this->_padding_ = (longlong)&___7__FAsyncTask_VFAsyncAudioDecompressWorker____6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = -1;
  this->_padding_ = 0;
  iVar1 = *param_2;
  this_00 = *param_1;
  (this->Task).Wave = this_00;
  (this->Task).AudioInfo = (ICompressedAudioInfo *)0x0;
  (this->Task).NumPrecacheFrames = iVar1;
  if ((iVar1 < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumPrecacheFrames > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDecompress.cpp"
                         ,800,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FAsyncTask<FAsyncAudioDecompressWorker> *)(*pcVar2)();
    return pFVar4;
  }
  pIVar5 = IAudioInfoFactoryRegistry::Get();
  FVar6 = USoundWave::GetRuntimeFormat(this_00);
  plVar7 = (longlong *)(**(code **)((longlong)*pIVar5 + 0x18))(pIVar5,*(undefined8 *)FVar6);
  if (plVar7 != (longlong *)0x0) {
    pIVar8 = (ICompressedAudioInfo *)(**(code **)(*plVar7 + 8))(plVar7);
  }
  uVar11 = (ulonglong)_tls_index;
  (this->Task).AudioInfo = pIVar8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8) + 0x9d4c) <
       `public:_struct_TStatId___cdecl_FAsyncAudioDecompressWorker::GetStatId(void)const___ptr64'::
       __l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_struct_TStatId___cdecl_FAsyncAudioDecompressWorker::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_struct_TStatId___cdecl_FAsyncAudioDecompressWorker::GetStatId(void)const___ptr64'::
     __l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_FAsyncAudioDecompressWorker = (TStatIdData *)0x0;
    pFVar9 = ::FName::FName(&local_res8,"FAsyncAudioDecompressWorker");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_struct_TStatId___cdecl_FAsyncAudioDecompressWorker::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_FAsyncAudioDecompressWorker,*pFVar9,L"FAsyncAudioDecompressWorker",
               "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",L"ThreadPool Async Tasks",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_struct_TStatId___cdecl_FAsyncAudioDecompressWorker::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar10 = _StatPtr_FAsyncAudioDecompressWorker;
  if (_StatPtr_FAsyncAudioDecompressWorker == (TStatIdData *)0x0) {
    pFVar9 = ::FName::FName(&local_res10,"FAsyncAudioDecompressWorker");
    pTVar10 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_struct_TStatId___cdecl_FAsyncAudioDecompressWorker::GetStatId(void)const___ptr64'
                          ::__l2::StatPtr_FAsyncAudioDecompressWorker,*pFVar9,
                         L"FAsyncAudioDecompressWorker","STATGROUP_ThreadPoolAsyncTasks",
                         "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  this->_padding_ = (longlong)pTVar10;
  return this;
}

// DoTaskWork @ 147634350

void __thiscall
FAsyncTask<FAsyncAudioDecompressWorker>::DoTaskWork(FAsyncTask<FAsyncAudioDecompressWorker> *this)

{
  FAsyncAudioDecompressWorker::DoWork(&this->Task);
  return;
}

// MarkAsCanceled @ 14764a7b0

void __thiscall
FAsyncTask<FAsyncAudioDecompressWorker>::MarkAsCanceled
          (FAsyncTask<FAsyncAudioDecompressWorker> *this)

{
  return;
}

// TryAbandonTask @ 147668330

bool __thiscall
FAsyncTask<FAsyncAudioDecompressWorker>::TryAbandonTask
          (FAsyncTask<FAsyncAudioDecompressWorker> *this)

{
  return false;
}

// FAsyncTask<FAsyncDistanceFieldTaskWorker><FAsyncDistanceFieldTask_&> @ 147aa9ee0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FAsyncTask<FAsyncDistanceFieldTaskWorker> * __thiscall
FAsyncTask<FAsyncDistanceFieldTaskWorker>::
FAsyncTask<FAsyncDistanceFieldTaskWorker><FAsyncDistanceFieldTask_&>
          (FAsyncTask<FAsyncDistanceFieldTaskWorker> *this,FAsyncDistanceFieldTask *param_1)

{
  void *pvVar1;
  FName *pFVar2;
  TStatIdData *pTVar3;
  FName local_res8;
  
  (this->Task).Task = param_1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAsyncTaskBase__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&TStatId::TStatId_NAME_None;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7__FAsyncTask_VFAsyncDistanceFieldTaskWorker____6B_;
  pvVar1 = ThreadLocalStoragePointer;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 3;
  this->_padding_ = -1;
  this->_padding_ = 0;
  if ((*(int *)(*(longlong *)((longlong)pvVar1 + (ulonglong)_tls_index * 8) + 0x9d4c) <
       `public:_struct_TStatId___cdecl_FAsyncDistanceFieldTaskWorker::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_struct_TStatId___cdecl_FAsyncDistanceFieldTaskWorker::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_struct_TStatId___cdecl_FAsyncDistanceFieldTaskWorker::GetStatId(void)const___ptr64'::
     __l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_FAsyncDistanceFieldTaskWorker = (TStatIdData *)0x0;
    pFVar2 = ::FName::FName(&local_res8,"FAsyncDistanceFieldTaskWorker");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_struct_TStatId___cdecl_FAsyncDistanceFieldTaskWorker::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_FAsyncDistanceFieldTaskWorker,*pFVar2,
               L"FAsyncDistanceFieldTaskWorker","STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
               L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_struct_TStatId___cdecl_FAsyncDistanceFieldTaskWorker::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar3 = _StatPtr_FAsyncDistanceFieldTaskWorker;
  if (_StatPtr_FAsyncDistanceFieldTaskWorker == (TStatIdData *)0x0) {
    pFVar2 = ::FName::FName(&local_res8,"FAsyncDistanceFieldTaskWorker");
    pTVar3 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_FAsyncDistanceFieldTaskWorker::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FAsyncDistanceFieldTaskWorker,*pFVar2,
                        L"FAsyncDistanceFieldTaskWorker","STATGROUP_ThreadPoolAsyncTasks",
                        "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  this->_padding_ = (longlong)pTVar3;
  return this;
}

// DoTaskWork @ 147ad0ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000147ad0b96) */
/* WARNING: Removing unreachable block (ram,0x000147ad0b85) */
/* WARNING: Removing unreachable block (ram,0x000147ad0b9a) */
/* WARNING: Removing unreachable block (ram,0x000147ad0bd7) */
/* WARNING: Removing unreachable block (ram,0x000147ad0bb4) */
/* WARNING: Removing unreachable block (ram,0x000147ad0bcd) */
/* WARNING: Removing unreachable block (ram,0x000147ad0bd2) */
/* WARNING: Removing unreachable block (ram,0x000147ad0bdf) */
/* WARNING: Removing unreachable block (ram,0x000147ad0c0f) */
/* WARNING: Removing unreachable block (ram,0x000147ad0c18) */
/* WARNING: Removing unreachable block (ram,0x000147ad0c42) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff78 : 0x000147ad0c46 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAsyncTask<FAsyncDistanceFieldTaskWorker>::DoTaskWork
          (FAsyncTask<FAsyncDistanceFieldTaskWorker> *this)

{
  undefined4 uVar1;
  undefined1 auStackY_108 [32];
  FQueuedThreadPool local_a8 [2];
  code *local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_108;
  FQueuedThreadPool::FQueuedThreadPool(local_a8);
  uVar1 = uStack_7c;
  uStack_40 = uStack_80;
  local_78 = local_38;
  uStack_74 = uStack_34;
  uStack_70 = 0;
  local_68 = 0;
  local_64 = 0;
  local_88 = 0x5185cfc0;
  uStack_84 = 1;
  uStack_80 = 0x8ff;
  uStack_7c = uStack_3c;
  local_58 = 0;
  uStack_50 = uStack_90;
  uStack_3c = uVar1;
  uStack_30 = 0;
  LOCK();
  local_64._0_1_ = 1;
  local_64._1_1_ = 0;
  UNLOCK();
  local_64._1_1_ = 0;
  local_64._0_1_ = 1;
  uStack_30 = 0;
  local_58 = 0;
  local_68 = 0;
  uStack_70 = 0;
  uStack_80 = 0x8ff;
  uStack_84 = 1;
  local_88 = 0x5185cfc0;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`FQueuedThreadPoolTaskGraphWrapper::FQueuedThreadPoolTaskGraphWrapper'::__l2::<lambda_1>,enum_ENamedThreads::Type,enum_EQueuedWorkPriority>
             ::Call;
  local_a8[0] = (FQueuedThreadPool)&___7FQueuedThreadPoolTaskGraphWrapper__6B_;
  (*(code *)PTR_Destroy_15185cfd0)();
  FQueuedThreadPool::~FQueuedThreadPool(local_a8);
  return;
}

// MarkAsCanceled @ 147af9820

void __thiscall
FAsyncTask<FAsyncDistanceFieldTaskWorker>::MarkAsCanceled
          (FAsyncTask<FAsyncDistanceFieldTaskWorker> *this)

{
  return;
}

// TryAbandonTask @ 147b1d680

bool __thiscall
FAsyncTask<FAsyncDistanceFieldTaskWorker>::TryAbandonTask
          (FAsyncTask<FAsyncDistanceFieldTaskWorker> *this)

{
  return false;
}

// FAsyncTask<FAsyncCardRepresentationTaskWorker><FAsyncCardRepresentationTask_&> @ 147f91d80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FAsyncTask<FAsyncCardRepresentationTaskWorker> * __thiscall
FAsyncTask<FAsyncCardRepresentationTaskWorker>::
FAsyncTask<FAsyncCardRepresentationTaskWorker><FAsyncCardRepresentationTask_&>
          (FAsyncTask<FAsyncCardRepresentationTaskWorker> *this,
          FAsyncCardRepresentationTask *param_1)

{
  void *pvVar1;
  FName *pFVar2;
  TStatIdData *pTVar3;
  FName local_res8;
  
  (this->Task).Task = param_1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAsyncTaskBase__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&TStatId::TStatId_NAME_None;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7__FAsyncTask_VFAsyncCardRepresentationTaskWorker____6B_;
  pvVar1 = ThreadLocalStoragePointer;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 3;
  this->_padding_ = -1;
  this->_padding_ = 0;
  if ((*(int *)(*(longlong *)((longlong)pvVar1 + (ulonglong)_tls_index * 8) + 0x9d4c) <
       `public:_struct_TStatId___cdecl_FAsyncCardRepresentationTaskWorker::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_struct_TStatId___cdecl_FAsyncCardRepresentationTaskWorker::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_struct_TStatId___cdecl_FAsyncCardRepresentationTaskWorker::GetStatId(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_FAsyncCardRepresentationTaskWorker = (TStatIdData *)0x0;
    pFVar2 = ::FName::FName(&local_res8,"FAsyncCardRepresentationTaskWorker");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_struct_TStatId___cdecl_FAsyncCardRepresentationTaskWorker::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_FAsyncCardRepresentationTaskWorker,*pFVar2,
               L"FAsyncCardRepresentationTaskWorker","STATGROUP_ThreadPoolAsyncTasks",
               "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_struct_TStatId___cdecl_FAsyncCardRepresentationTaskWorker::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar3 = _StatPtr_FAsyncCardRepresentationTaskWorker;
  if (_StatPtr_FAsyncCardRepresentationTaskWorker == (TStatIdData *)0x0) {
    pFVar2 = ::FName::FName(&local_res8,"FAsyncCardRepresentationTaskWorker");
    pTVar3 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_FAsyncCardRepresentationTaskWorker::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FAsyncCardRepresentationTaskWorker,*pFVar2,
                        L"FAsyncCardRepresentationTaskWorker","STATGROUP_ThreadPoolAsyncTasks",
                        "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  this->_padding_ = (longlong)pTVar3;
  return this;
}

// DoTaskWork @ 147fc5840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000147fc58f6) */
/* WARNING: Removing unreachable block (ram,0x000147fc58e5) */
/* WARNING: Removing unreachable block (ram,0x000147fc58fa) */
/* WARNING: Removing unreachable block (ram,0x000147fc5937) */
/* WARNING: Removing unreachable block (ram,0x000147fc5914) */
/* WARNING: Removing unreachable block (ram,0x000147fc592d) */
/* WARNING: Removing unreachable block (ram,0x000147fc5932) */
/* WARNING: Removing unreachable block (ram,0x000147fc593f) */
/* WARNING: Removing unreachable block (ram,0x000147fc596f) */
/* WARNING: Removing unreachable block (ram,0x000147fc5978) */
/* WARNING: Removing unreachable block (ram,0x000147fc59a2) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff78 : 0x000147fc59a6 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAsyncTask<FAsyncCardRepresentationTaskWorker>::DoTaskWork
          (FAsyncTask<FAsyncCardRepresentationTaskWorker> *this)

{
  undefined4 uVar1;
  undefined1 auStackY_108 [32];
  FQueuedThreadPool local_a8 [2];
  code *local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_108;
  FQueuedThreadPool::FQueuedThreadPool(local_a8);
  uVar1 = uStack_7c;
  uStack_40 = uStack_80;
  local_78 = local_38;
  uStack_74 = uStack_34;
  uStack_70 = 0;
  local_68 = 0;
  local_64 = 0;
  local_88 = 0x5185cfc0;
  uStack_84 = 1;
  uStack_80 = 0x8ff;
  uStack_7c = uStack_3c;
  local_58 = 0;
  uStack_50 = uStack_90;
  uStack_3c = uVar1;
  uStack_30 = 0;
  LOCK();
  local_64._0_1_ = 1;
  local_64._1_1_ = 0;
  UNLOCK();
  local_64._1_1_ = 0;
  local_64._0_1_ = 1;
  uStack_30 = 0;
  local_58 = 0;
  local_68 = 0;
  uStack_70 = 0;
  uStack_80 = 0x8ff;
  uStack_84 = 1;
  local_88 = 0x5185cfc0;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`FQueuedThreadPoolTaskGraphWrapper::FQueuedThreadPoolTaskGraphWrapper'::__l2::<lambda_1>,enum_ENamedThreads::Type,enum_EQueuedWorkPriority>
             ::Call;
  local_a8[0] = (FQueuedThreadPool)&___7FQueuedThreadPoolTaskGraphWrapper__6B_;
  (*(code *)PTR_Destroy_15185cfd0)();
  FQueuedThreadPool::~FQueuedThreadPool(local_a8);
  return;
}

// MarkAsCanceled @ 147fe4400

void __thiscall
FAsyncTask<FAsyncCardRepresentationTaskWorker>::MarkAsCanceled
          (FAsyncTask<FAsyncCardRepresentationTaskWorker> *this)

{
  return;
}

// TryAbandonTask @ 147ffaa60

bool __thiscall
FAsyncTask<FAsyncCardRepresentationTaskWorker>::TryAbandonTask
          (FAsyncTask<FAsyncCardRepresentationTaskWorker> *this)

{
  return false;
}

// DoTaskWork @ 1484d4810

void __thiscall
FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker>::DoTaskWork
          (FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *this)

{
  Audio::FAsyncSoundWavePCMWriteWorker::DoWork(&this->Task);
  return;
}

// MarkAsCanceled @ 1484e22a0

void __thiscall
FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker>::MarkAsCanceled
          (FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *this)

{
  return;
}

// TryAbandonTask @ 1484fd8e0

bool __thiscall
FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker>::TryAbandonTask
          (FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &(this->Task).NonAbandonableSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    ((this->Task).Writer)->CurrentState = Cancelled;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// FAsyncTask<FRenderAssetStreamingMipCalcTask><FRenderAssetStreamingManager_*> @ 148767a80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FAsyncTask<FRenderAssetStreamingMipCalcTask> * __thiscall
FAsyncTask<FRenderAssetStreamingMipCalcTask>::
FAsyncTask<FRenderAssetStreamingMipCalcTask><FRenderAssetStreamingManager_*>
          (FAsyncTask<FRenderAssetStreamingMipCalcTask> *this,FRenderAssetStreamingManager **param_1
          )

{
  FRenderAssetStreamingManager *pFVar1;
  void *pvVar2;
  FName *pFVar3;
  TStatIdData *pTVar4;
  FName local_res8;
  
  *(undefined2 *)&this->_padding_ = 3;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAsyncTaskBase__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&TStatId::TStatId_NAME_None;
  this->_padding_ = (longlong)&___7__FAsyncTask_VFRenderAssetStreamingMipCalcTask____6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = -1;
  this->_padding_ = 0;
  pFVar1 = *param_1;
  (this->Task).StreamingData.ViewInfos.ArrayNum = 0;
  (this->Task).StreamingData.ViewInfos.ArrayMax = 0;
  (this->Task).StreamingData.ViewInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Task).StreamingData.ViewInfoExtras.AllocatorInstance.SecondaryData =
       (ForElementType<FStreamingViewInfoExtra>)0x0;
  (this->Task).StreamingData.ViewInfoExtras.ArrayNum = 0;
  (this->Task).StreamingData.ViewInfoExtras.ArrayMax = 4;
  (this->Task).StreamingData.DynamicInstancesView.View.Reference = (FRenderAssetInstanceView *)0x0;
  (this->Task).StreamingData.DynamicInstancesView.BoundsViewInfo.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Task).StreamingData.DynamicInstancesView.BoundsViewInfo.ArrayNum = 0;
  (this->Task).StreamingData.DynamicInstancesView.BoundsViewInfo.ArrayMax = 0;
  (this->Task).StreamingData.StaticInstancesViews.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Task).StreamingData.StaticInstancesViews.ArrayNum = 0;
  (this->Task).StreamingData.StaticInstancesViews.ArrayMax = 0;
  (this->Task).StreamingData.StaticInstancesViewIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Task).StreamingData.StaticInstancesViewIndices.ArrayNum = 0;
  (this->Task).StreamingData.StaticInstancesViewIndices.ArrayMax = 0;
  (this->Task).StreamingData.CulledStaticInstancesViewIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Task).StreamingData.CulledStaticInstancesViewIndices.ArrayNum = 0;
  (this->Task).StreamingData.CulledStaticInstancesViewIndices.ArrayMax = 0;
  (this->Task).StreamingData.StaticInstancesViewLevelIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Task).StreamingData.StaticInstancesViewLevelIndices.ArrayNum = 0;
  (this->Task).StreamingData.StaticInstancesViewLevelIndices.ArrayMax = 0;
  (this->Task).StreamingData.DynamicInstancesView.MaxLevelRenderAssetScreenSize = 3.4028235e+38;
  (this->Task).StreamingManager = pFVar1;
  pvVar2 = ThreadLocalStoragePointer;
  (this->Task).LoadRequests.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Task).LoadRequests.ArrayNum = 0;
  (this->Task).LoadRequests.ArrayMax = 0;
  (this->Task).CancelationRequests.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Task).CancelationRequests.ArrayNum = 0;
  (this->Task).CancelationRequests.ArrayMax = 0;
  (this->Task).PendingUpdateDirties.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Task).PendingUpdateDirties.ArrayNum = 0;
  (this->Task).PendingUpdateDirties.ArrayMax = 0;
  (this->Task).bAbort = false;
  (this->Task).TotalGraphicsMemory = 0;
  (this->Task).AllocatedMemory = 0;
  (this->Task).PoolSize = 0;
  (this->Task).TempMemoryBudget = 0;
  (this->Task).MemoryMargin = 0;
  (this->Task).bAbort = false;
  (this->Task).MemoryBudget = 0;
  (this->Task).MeshMemoryBudget = 0;
  (this->Task).PerfectWantedMipsBudgetResetThresold = 0;
  if (*(int *)(*(longlong *)((longlong)pvVar2 + (ulonglong)_tls_index * 8) + 0x9d4c) <
      `private:_struct_TStatId___cdecl_FRenderAssetStreamingMipCalcTask::GetStatId(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_struct_TStatId___cdecl_FRenderAssetStreamingMipCalcTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_struct_TStatId___cdecl_FRenderAssetStreamingMipCalcTask::GetStatId(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FRenderAssetStreamingMipCalcTask::GetStatId'::__l2::FStat_FRenderAssetStreamingMipCalcTask>
      ::
      FThreadSafeStaticStat<_FRenderAssetStreamingMipCalcTask::GetStatId_::__l2::FStat_FRenderAssetStreamingMipCalcTask>
                (&`private:_struct_TStatId___cdecl_FRenderAssetStreamingMipCalcTask::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FRenderAssetStreamingMipCalcTask);
      _Init_thread_footer(&`private:_struct_TStatId___cdecl_FRenderAssetStreamingMipCalcTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar4 = _StatPtr_FRenderAssetStreamingMipCalcTask;
  if (_StatPtr_FRenderAssetStreamingMipCalcTask == (TStatIdData *)0x0) {
    pFVar3 = ::FName::FName(&local_res8,"FRenderAssetStreamingMipCalcTask");
    pTVar4 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_struct_TStatId___cdecl_FRenderAssetStreamingMipCalcTask::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FRenderAssetStreamingMipCalcTask,*pFVar3,
                        L"FRenderAssetStreamingMipCalcTask","STATGROUP_ThreadPoolAsyncTasks",
                        "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  this->_padding_ = (longlong)pTVar4;
  return this;
}

// DoTaskWork @ 148794630

void __thiscall
FAsyncTask<RenderAssetInstanceTask::FDoWorkTask>::DoTaskWork
          (FAsyncTask<RenderAssetInstanceTask::FDoWorkTask> *this)

{
  RenderAssetInstanceTask::FDoWorkTask::DoWork(&this->Task);
  return;
}

// DoTaskWork @ 148794640

void __thiscall
FAsyncTask<FRenderAssetStreamingMipCalcTask>::DoTaskWork
          (FAsyncTask<FRenderAssetStreamingMipCalcTask> *this)

{
  FRenderAssetStreamingMipCalcTask::DoWork(&this->Task);
  return;
}

// MarkAsCanceled @ 1487aff70

void __thiscall
FAsyncTask<RenderAssetInstanceTask::FDoWorkTask>::MarkAsCanceled
          (FAsyncTask<RenderAssetInstanceTask::FDoWorkTask> *this)

{
  return;
}

// MarkAsCanceled @ 1487aff80

void __thiscall
FAsyncTask<FRenderAssetStreamingMipCalcTask>::MarkAsCanceled
          (FAsyncTask<FRenderAssetStreamingMipCalcTask> *this)

{
  return;
}

// TryAbandonTask @ 1487ca2d0

bool __thiscall
FAsyncTask<RenderAssetInstanceTask::FDoWorkTask>::TryAbandonTask
          (FAsyncTask<RenderAssetInstanceTask::FDoWorkTask> *this)

{
  return false;
}

// TryAbandonTask @ 1487ca2e0

bool __thiscall
FAsyncTask<FRenderAssetStreamingMipCalcTask>::TryAbandonTask
          (FAsyncTask<FRenderAssetStreamingMipCalcTask> *this)

{
  return false;
}

