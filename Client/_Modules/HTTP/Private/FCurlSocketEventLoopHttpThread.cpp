// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 17

// FCurlSocketEventLoopHttpThread @ 14314ccc0

FCurlSocketEventLoopHttpThread * __thiscall
FCurlSocketEventLoopHttpThread::FCurlSocketEventLoopHttpThread(FCurlSocketEventLoopHttpThread *this)

{
  FEventLoopHttpThread::FEventLoopHttpThread((FEventLoopHttpThread *)this);
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  *(undefined8 *)&this->HandlesToRequests = 0;
  *(undefined8 *)&(this->HandlesToRequests).field_0x8 = 0;
  *(undefined8 *)&(this->HandlesToRequests).field_0x20 = 0;
  *(undefined4 *)&(this->HandlesToRequests).field_0x28 = 0;
  *(undefined4 *)&(this->HandlesToRequests).field_0x2c = 0x80;
  *(undefined4 *)&(this->HandlesToRequests).field_0x34 = 0;
  *(undefined4 *)&(this->HandlesToRequests).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->HandlesToRequests).field_0x40 = 0;
  *(undefined4 *)&(this->HandlesToRequests).field_0x48 = 0;
  (this->RequestTimeoutTimer).ID = 0;
  (this->EventLoop).bIsSet = false;
  return this;
}

// operator() @ 143151ee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FCurlSocketEventLoopHttpThread::HandleCurlSocketCallback'::__l23::<lambda_1>::operator()
          (void *this,ulong64 param_1,ESocketIoRequestStatus param_2,EIOFlags param_3)

{
  FCurlSocketEventLoopHttpThread *this_00;
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  EIOFlags EVar4;
  FString local_18;
  
  this_00 = *(FCurlSocketEventLoopHttpThread **)this;
  if (param_2 == Ok) {
    EVar4 = param_3 & Read | Write;
    if ((param_3 & Write) == None) {
      EVar4 = param_3 & Read;
    }
  }
  else {
    if (2 < (byte)LogHttp._0_1_) {
      if (param_2 == Ok) {
        pwVar3 = L"Ok";
      }
      else if (param_2 == NoResources) {
        pwVar3 = L"NoResources";
      }
      else if (param_2 == Invalid) {
        pwVar3 = L"Invalid";
      }
      else {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Experimental\\EventLoop\\Public\\EventLoop\\BSDSocket\\EventLoopIOAccessBSDSocket.h"
                           ,0x60,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pwVar3 = L"Unknown";
      }
      ::FString::FString(&local_18,pwVar3);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    param_1 = 0xffffffffffffffff;
    EVar4 = None;
  }
  FCurlSocketEventLoopHttpThread::ProcessCurlSocketActions(this_00,param_1,EVar4);
  return;
}

// CompleteThreadedRequest @ 143158e80

void __thiscall
FCurlSocketEventLoopHttpThread::CompleteThreadedRequest
          (FCurlSocketEventLoopHttpThread *this,FHttpRequestCommon *param_1)

{
  void *pvVar1;
  FHttpRequestCommon **ppFVar2;
  uint uVar3;
  void *local_res8;
  
  pvVar1 = (void *)param_1[1]._padding_;
  ppFVar2 = TMapBase<void_*,FHttpRequestCommon_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,FHttpRequestCommon_*,0>_>
            ::Find((TMapBase<void_*,FHttpRequestCommon_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,FHttpRequestCommon_*,0>_>
                    *)&this->HandlesToRequests,pvVar1);
  if (ppFVar2 != (FHttpRequestCommon **)0x0) {
    curl_multi_remove_handle(FCurlHttpManager::GMultiHandle,pvVar1);
    local_res8 = pvVar1;
    if (*(int *)&(this->HandlesToRequests).field_0x8 !=
        *(int *)&(this->HandlesToRequests).field_0x34) {
      uVar3 = ((uint)((ulonglong)pvVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pvVar1 >> 4)) *
              -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      TSet<TTuple<void_*,FHttpRequestCommon_*>,TDefaultMapHashableKeyFuncs<void_*,FHttpRequestCommon_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<void_const_*>
                ((TSet<TTuple<void_*,FHttpRequestCommon_*>,TDefaultMapHashableKeyFuncs<void_*,FHttpRequestCommon_*,0>,FDefaultSetAllocator>
                  *)&this->HandlesToRequests,uVar3 >> 0x10 ^ uVar3,&local_res8);
    }
  }
  curl_easy_setopt(param_1[1]._padding_,0x2774,0);
  return;
}

// CreateEventLoop @ 14315adc0

void __thiscall
FCurlSocketEventLoopHttpThread::CreateEventLoop(FCurlSocketEventLoopHttpThread *this)

{
  TOptional<UE::EventLoop::TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>_>
  *this_00;
  code *pcVar1;
  bool bVar2;
  atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> aVar3;
  FParams local_res8 [8];
  
  this_00 = &this->EventLoop;
  if ((this->EventLoop).bIsSet != false) {
    UE::EventLoop::
    TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>::
    ~TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>
              (&this_00->TypedValue);
  }
  (this->EventLoop).TypedValue._padding_ = 0;
  (this->EventLoop).TypedValue._padding_ = 0;
  (this_00->TypedValue)._padding_ =
       (longlong)
       &
       ___7__TEventLoop_VFIOManagerBSDSocketSelect_EventLoop_UE__UFEventLoopDefaultTraits_23__EventLoop_UE__6B_
  ;
  UE::EventLoop::FIOManagerBSDSocketSelect::FIOManagerBSDSocketSelect
            (&(this->EventLoop).TypedValue.IOManager,(IEventLoop *)this_00,local_res8);
  memset(&(this->EventLoop).TypedValue.TimerManager,0,0x4e0);
  UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::
  TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>
            (&(this->EventLoop).TypedValue.TimerManager);
  (this->EventLoop).TypedValue.AsyncTasks.Head =
       (atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)0x0;
  aVar3 = (atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)
          FMemory::Malloc(0x40,0x10);
  *(undefined8 *)aVar3 = 0;
  (this->EventLoop).TypedValue.AsyncTasks.Head = aVar3;
  (this->EventLoop).TypedValue.AsyncTasks.Tail = (FNode *)aVar3;
  (this->EventLoop).TypedValue.ShutdownRequests.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EventLoop).TypedValue.ShutdownRequests.ArrayNum = 0;
  (this->EventLoop).TypedValue.ShutdownRequests.ArrayMax = 0;
  (this->EventLoop).TypedValue.LoopTime.Ticks = 0;
  (this->EventLoop).TypedValue.EventLoopThreadId = (TAtomic<unsigned_int>)0x0;
  (this->EventLoop).TypedValue.bShutdownRequested = (TAtomic<bool>)0x0;
  (this->EventLoop).TypedValue.bShutdownCompleted = (TAtomic<bool>)0x0;
  (this->EventLoop).TypedValue.bNotifyOnInit = (TAtomic<bool>)0x0;
  (this->EventLoop).TypedValue.InitMutex = (atomic<unsigned_char>)0x0;
  (this->EventLoop).TypedValue.ShutdownMutex.State = (atomic<unsigned_char>)0x0;
  (this->EventLoop).bIsSet = true;
  if (FCurlHttpManager::GMultiHandle == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FCurlHttpManager::GMultiHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlSocketEventLoopHttpThread.cpp"
                       ,0x6b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  curl_multi_setopt(FCurlHttpManager::GMultiHandle,0x4e21,CurlSocketCallback);
  curl_multi_setopt(FCurlHttpManager::GMultiHandle,0x2712,this);
  curl_multi_setopt(FCurlHttpManager::GMultiHandle,0x4e24,CurlTimerCallback);
  curl_multi_setopt(FCurlHttpManager::GMultiHandle,0x2715,this);
  return;
}

// CurlSocketCallback @ 14315bcd0

int __cdecl
FCurlSocketEventLoopHttpThread::CurlSocketCallback
          (void *param_1,ulong64 param_2,int param_3,void *param_4,void *param_5)

{
  int iVar1;
  
  iVar1 = HandleCurlSocketCallback(param_4,param_1,param_2,param_3,param_5);
  return iVar1;
}

// CurlTimerCallback @ 14315be70

int __cdecl
FCurlSocketEventLoopHttpThread::CurlTimerCallback(void *param_1,long param_2,void *param_3)

{
  int iVar1;
  
  iVar1 = HandleCurlTimerCallback(param_3,param_1,param_2);
  return iVar1;
}

// DestroyEventLoop @ 14315c870

void __thiscall
FCurlSocketEventLoopHttpThread::DestroyEventLoop(FCurlSocketEventLoopHttpThread *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (FCurlHttpManager::GMultiHandle == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FCurlHttpManager::GMultiHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlSocketEventLoopHttpThread.cpp"
                       ,0x74,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  curl_multi_setopt(FCurlHttpManager::GMultiHandle,0x4e21,0);
  curl_multi_setopt(FCurlHttpManager::GMultiHandle,0x2712,0);
  curl_multi_setopt(FCurlHttpManager::GMultiHandle,0x4e24,0);
  curl_multi_setopt(FCurlHttpManager::GMultiHandle,0x2715,0);
  if ((this->EventLoop).bIsSet != false) {
    UE::EventLoop::
    TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>::
    ~TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>
              (&(this->EventLoop).TypedValue);
    (this->EventLoop).bIsSet = false;
  }
  return;
}

// GetEventLoop @ 1431627e0

IEventLoop * __thiscall
FCurlSocketEventLoopHttpThread::GetEventLoop(FCurlSocketEventLoopHttpThread *this)

{
  IEventLoop *pIVar1;
  
  pIVar1 = (IEventLoop *)&this->EventLoop;
  if ((this->EventLoop).bIsSet == false) {
    pIVar1 = (IEventLoop *)0x0;
  }
  return pIVar1;
}

// GetEventLoopChecked @ 143162850

IEventLoop * __thiscall
FCurlSocketEventLoopHttpThread::GetEventLoopChecked(FCurlSocketEventLoopHttpThread *this)

{
  code *pcVar1;
  bool bVar2;
  IEventLoop *pIVar3;
  
  if ((this->EventLoop).bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IEventLoop *)(*pcVar1)();
      return pIVar3;
    }
  }
  return (IEventLoop *)&this->EventLoop;
}

// HandleCurlSocketCallback @ 143166560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000143166941) */
/* WARNING: Removing unreachable block (ram,0x000143166930) */
/* WARNING: Removing unreachable block (ram,0x000143166945) */
/* WARNING: Removing unreachable block (ram,0x000143166a82) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff08 : 0x000143166a86 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FCurlSocketEventLoopHttpThread::HandleCurlSocketCallback
          (FCurlSocketEventLoopHttpThread *this,void *param_1,ulong64 param_2,int param_3,
          void *param_4)

{
  int *piVar1;
  TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FAddRequest,FMemory>
  *pTVar2;
  atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FAddRequest,FMemory>::FNode_*>
  aVar3;
  TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>
  *pTVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<_protected:_int___cdecl_FCurlSocketEventLoopHttpThread::HandleCurlSocketCallback(void_*,unsigned___int64,int,void_*)_::_2_::FStat_STAT_FCurlSocketEventLoopHttpThread_HandleCurlSocketCallback>
  FVar12;
  TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>
  *pTVar13;
  FIOAccessBSDSocket *pFVar14;
  ulong64 *puVar15;
  atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FAddRequest,FMemory>::FNode_*>
  aVar16;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar17;
  longlong *plVar18;
  FNameEntryId FVar19;
  FName FVar20;
  ulong64 *puVar21;
  TAtomic<unsigned___int64> TVar22;
  undefined1 auStackY_218 [32];
  FColor_u_0 local_1b4;
  LARGE_INTEGER local_1b0;
  FName local_1a8;
  FName local_1a0;
  FStatMessage local_190;
  FName local_180;
  FName local_178 [2];
  ulong64 local_168;
  uint local_160;
  code *local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  longlong *plStack_130;
  TAtomic<unsigned___int64> local_128;
  ulong64 local_118;
  uint local_110;
  code *local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined1 local_a8 [40];
  longlong *local_80;
  undefined1 local_78 [40];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  puVar21 = (ulong64 *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FCurlSocketEventLoopHttpThread_HandleCurlSocketCallback ==
        (FThreadSafeStaticStat<_protected:_int___cdecl_FCurlSocketEventLoopHttpThread::HandleCurlSocketCallback(void_*,unsigned___int64,int,void_*)_::_2_::FStat_STAT_FCurlSocketEventLoopHttpThread_HandleCurlSocketCallback>
         )0x0) {
      pFVar11 = ::FName::FName(&local_180,
                               "STAT_FCurlSocketEventLoopHttpThread_HandleCurlSocketCallback");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_FCurlSocketEventLoopHttpThread_HandleCurlSocketCallback,*pFVar11,
                 L"STAT_FCurlSocketEventLoopHttpThread_HandleCurlSocketCallback","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar12 = StatPtr_STAT_FCurlSocketEventLoopHttpThread_HandleCurlSocketCallback;
  if (StatPtr_STAT_FCurlSocketEventLoopHttpThread_HandleCurlSocketCallback ==
      (FThreadSafeStaticStat<_protected:_int___cdecl_FCurlSocketEventLoopHttpThread::HandleCurlSocketCallback(void_*,unsigned___int64,int,void_*)_::_2_::FStat_STAT_FCurlSocketEventLoopHttpThread_HandleCurlSocketCallback>
       )0x0) {
    pFVar11 = ::FName::FName(local_178,
                             "STAT_FCurlSocketEventLoopHttpThread_HandleCurlSocketCallback");
    FVar12 = (FThreadSafeStaticStat<_protected:_int___cdecl_FCurlSocketEventLoopHttpThread::HandleCurlSocketCallback(void_*,unsigned___int64,int,void_*)_::_2_::FStat_STAT_FCurlSocketEventLoopHttpThread_HandleCurlSocketCallback>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FCurlSocketEventLoopHttpThread_HandleCurlSocketCallback,
                          *pFVar11,L"STAT_FCurlSocketEventLoopHttpThread_HandleCurlSocketCallback",
                          "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar12;
  bVar6 = false;
  bVar8 = false;
  local_1a0.ComparisonIndex.Value = 0;
  local_1a0.Number = 0;
  FVar19 = FVar20.ComparisonIndex.Value;
  uVar17 = FVar20.Number;
  if ((FVar19.Value != 0) || (uVar17 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1b4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1b4._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1a8.ComparisonIndex.Value = FVar19.Value;
        local_1a8.Number = uVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1a8,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlSocketEventLoopHttpThread.cpp"
                   ,0x92);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1b0.s.LowPart = FVar19.Value;
      local_1b0.s.HighPart = uVar17;
      FThreadStats::AddMessage(FVar20,CycleScopeStart);
      bVar7 = true;
      goto LAB_1431666ee;
    }
  }
  bVar7 = false;
  FVar20 = local_1a0;
LAB_1431666ee:
  if (6 < (byte)LogHttp._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
  }
  if (((param_3 == 1) || (param_3 == 2)) || (param_3 == 3)) {
    if (param_4 == (void *)0x0) {
      puVar15 = ::operator_new(0x10);
      if (puVar15 != (ulong64 *)0x0) {
        puVar15[1] = 0;
        puVar21 = puVar15;
      }
      *puVar21 = param_2;
      curl_multi_assign(FCurlHttpManager::GMultiHandle,param_2);
      param_4 = puVar21;
    }
    if (*(ulong64 *)((longlong)param_4 + 8) != 0) {
      if (((this->EventLoop).bIsSet == false) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        iVar10 = (*pcVar5)();
        return iVar10;
      }
      pFVar14 = UE::EventLoop::FIOManagerBSDSocketSelect::GetIOAccess
                          (&(this->EventLoop).TypedValue.IOManager);
      local_78._0_8_ = 0;
      local_50 = (longlong *)0x0;
      UE::EventLoop::FIOAccessBSDSocket::DestroyIORequest
                (pFVar14,(TResourceHandle<UE::EventLoop::FIORequestHandleTraits> *)
                         ((longlong)param_4 + 8),(TUniqueFunction<void___cdecl(void)> *)local_78);
      if (local_78._0_8_ != 0) {
        plVar18 = (longlong *)(local_78 + 0x10);
        if (local_50 != (longlong *)0x0) {
          plVar18 = local_50;
        }
        (**(code **)(*plVar18 + 0x10))();
      }
    }
    local_160 = param_3 & 1U | 2;
    if ((param_3 & 2U) == 0) {
      local_160 = param_3 & 1U;
    }
    TVar22 = (TAtomic<unsigned___int64>)0x0;
    local_138 = local_b8;
    uStack_134 = uStack_b4;
    plStack_130 = (longlong *)0x0;
    local_148 = 0x50a626f0;
    uStack_144 = 1;
    uStack_140 = this;
    local_d8 = 0;
    uStack_d0 = uStack_150;
    uStack_b0 = 0;
    uStack_b0 = 0;
    local_d8 = 0;
    plStack_130 = (longlong *)0x0;
    uStack_144 = 1;
    local_148 = 0x50a626f0;
    local_158 = UE::Core::Private::Function::
                TFunctionRefCaller<`FCurlSocketEventLoopHttpThread::HandleCurlSocketCallback'::__l23::<lambda_1>,void,unsigned___int64,enum_UE::EventLoop::ESocketIoRequestStatus,enum_UE::EventLoop::EIOFlags>
                ::Call;
    local_168 = param_2;
    if ((this->EventLoop).bIsSet == false) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        iVar10 = (*pcVar5)();
        return iVar10;
      }
    }
    pFVar14 = UE::EventLoop::FIOManagerBSDSocketSelect::GetIOAccess
                        (&(this->EventLoop).TypedValue.IOManager);
    if (((local_168 != 0xffffffffffffffff) && (local_160 != 0)) && (local_158 != (code *)0x0)) {
      pTVar4 = pFVar14->IORequestStorage;
      LOCK();
      UNLOCK();
      bVar9 = UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>::NextID ==
              (TAtomic<unsigned___int64>)0x0;
      TVar22 = UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>::NextID;
      UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>::NextID =
           (TAtomic<unsigned___int64>)
           ((longlong)UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>::NextID
           + 1);
      if (bVar9) {
        LOCK();
        UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>::NextID =
             (TAtomic<unsigned___int64>)0x2;
        UNLOCK();
        TVar22 = (TAtomic<unsigned___int64>)0x2;
      }
      local_f8 = CONCAT44(uStack_144,local_148);
      uStack_f0 = uStack_140;
      local_e8 = CONCAT44(uStack_134,local_138);
      local_118 = local_168;
      local_110 = local_160;
      local_e0 = plStack_130;
      local_108 = local_158;
      plStack_130 = (longlong *)0x0;
      if (local_158 != (code *)0x0) {
        local_158 = (code *)0x0;
      }
      local_128 = TVar22;
      aVar16 = (atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FAddRequest,FMemory>::FNode_*>
                )FMemory::Malloc(0x60,0x10);
      *(undefined8 *)aVar16 = 0;
      *(TAtomic<unsigned___int64> *)((longlong)aVar16 + 0x10) = local_128;
      *(ulong64 *)((longlong)aVar16 + 0x20) = local_118;
      *(uint *)((longlong)aVar16 + 0x28) = local_110;
      *(code **)((longlong)aVar16 + 0x30) = local_108;
      *(longlong **)((longlong)aVar16 + 0x58) = local_e0;
      local_e0 = (longlong *)0x0;
      *(undefined4 *)((longlong)aVar16 + 0x40) = (undefined4)local_f8;
      *(undefined4 *)((longlong)aVar16 + 0x44) = local_f8._4_4_;
      *(undefined4 *)((longlong)aVar16 + 0x48) = (undefined4)uStack_f0;
      *(undefined4 *)((longlong)aVar16 + 0x4c) = uStack_f0._4_4_;
      *(undefined8 *)((longlong)aVar16 + 0x50) = local_e8;
      if (*(longlong *)((longlong)aVar16 + 0x30) != 0) {
        local_108 = (code *)0x0;
      }
      LOCK();
      pTVar2 = &pTVar4->AddRequests;
      aVar3 = pTVar2->Head;
      pTVar2->Head = aVar16;
      UNLOCK();
      *(atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FAddRequest,FMemory>::FNode_*>
        *)aVar3 = aVar16;
      if (local_108 != (code *)0x0) {
        (**(code **)(local_f8 + 0x10))();
      }
    }
    ((TResourceHandle<UE::EventLoop::FIORequestHandleTraits> *)((longlong)param_4 + 8))->ID =
         (ulong64)TVar22;
    if (local_158 != (code *)0x0) {
      plVar18 = (longlong *)&local_148;
      if (plStack_130 != (longlong *)0x0) {
        plVar18 = plStack_130;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
  }
  else if (param_3 == 4) {
    if (param_4 != (void *)0x0) {
      pTVar13 = TOptional<UE::EventLoop::TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>_>
                ::operator->(&this->EventLoop);
      pFVar14 = UE::EventLoop::FIOManagerBSDSocketSelect::GetIOAccess(&pTVar13->IOManager);
      local_a8._0_8_ = 0;
      local_80 = (longlong *)0x0;
      UE::EventLoop::FIOAccessBSDSocket::DestroyIORequest
                (pFVar14,(TResourceHandle<UE::EventLoop::FIORequestHandleTraits> *)
                         ((longlong)param_4 + 8),(TUniqueFunction<void___cdecl(void)> *)local_a8);
      if (local_a8._0_8_ != 0) {
        plVar18 = (longlong *)(local_a8 + 0x10);
        if (local_80 != (longlong *)0x0) {
          plVar18 = local_80;
        }
        (**(code **)(*plVar18 + 0x10))();
      }
      ::operator_delete(param_4,0x10);
      curl_multi_assign(FCurlHttpManager::GMultiHandle,param_2);
    }
  }
  else {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlSocketEventLoopHttpThread.cpp"
                       ,0xc0,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      iVar10 = (*pcVar5)();
      return iVar10;
    }
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar20 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_190.NameAndInfo.Index = FVar20.ComparisonIndex.Value;
      local_190.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_1b0);
      local_190.StatData.Pad[4] = '\0';
      local_190.StatData.Pad[5] = '\0';
      local_190.StatData.Pad[6] = '\0';
      local_190.StatData.Pad[7] = '\0';
      local_190.StatData.Pad[0] = local_1b0.s.LowPart._0_1_;
      local_190.StatData.Pad[1] = local_1b0.s.LowPart._1_1_;
      local_190.StatData.Pad[2] = local_1b0.s.LowPart._2_1_;
      local_190.StatData.Pad[3] = local_1b0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_190);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return 0;
}

// HandleCurlTimerCallback @ 143166c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FCurlSocketEventLoopHttpThread::HandleCurlTimerCallback
          (FCurlSocketEventLoopHttpThread *this,void *param_1,long param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_protected:_int___cdecl_FCurlSocketEventLoopHttpThread::HandleCurlTimerCallback(void_*,long)_::_2_::FStat_STAT_FCurlSocketEventLoopHttpThread_HandleCurlTimerCallback>
  FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  longlong *plVar11;
  undefined ***pppuVar12;
  FNameEntryId FVar13;
  FName FVar14;
  undefined1 extraout_XMM0 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 extraout_XMM0_00 [16];
  undefined1 extraout_XMM0_01 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auStackY_168 [32];
  char *in_stack_fffffffffffffeb8;
  FColor_u_0 local_108 [2];
  undefined1 local_100 [8];
  FName local_f8;
  FName local_f0;
  LARGE_INTEGER local_e0;
  FStatMessage local_d8;
  FName local_c8;
  FName local_c0 [2];
  undefined1 local_b0;
  code *local_a8 [2];
  undefined **local_98;
  FCurlSocketEventLoopHttpThread *local_90;
  undefined ***local_80;
  undefined1 local_78 [40];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FCurlSocketEventLoopHttpThread_HandleCurlTimerCallback ==
          (FThreadSafeStaticStat<_protected:_int___cdecl_FCurlSocketEventLoopHttpThread::HandleCurlTimerCallback(void_*,long)_::_2_::FStat_STAT_FCurlSocketEventLoopHttpThread_HandleCurlTimerCallback>
           )0x0) {
        pFVar8 = ::FName::FName(&local_c8,
                                "STAT_FCurlSocketEventLoopHttpThread_HandleCurlTimerCallback");
        in_stack_fffffffffffffeb8 = "STATCAT_Advanced";
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_FCurlSocketEventLoopHttpThread_HandleCurlTimerCallback,*pFVar8,
                   L"STAT_FCurlSocketEventLoopHttpThread_HandleCurlTimerCallback","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar9 = StatPtr_STAT_FCurlSocketEventLoopHttpThread_HandleCurlTimerCallback;
  if (StatPtr_STAT_FCurlSocketEventLoopHttpThread_HandleCurlTimerCallback ==
      (FThreadSafeStaticStat<_protected:_int___cdecl_FCurlSocketEventLoopHttpThread::HandleCurlTimerCallback(void_*,long)_::_2_::FStat_STAT_FCurlSocketEventLoopHttpThread_HandleCurlTimerCallback>
       )0x0) {
    pFVar8 = ::FName::FName(local_c0,"STAT_FCurlSocketEventLoopHttpThread_HandleCurlTimerCallback");
    in_stack_fffffffffffffeb8 = "STATCAT_Advanced";
    FVar9 = (FThreadSafeStaticStat<_protected:_int___cdecl_FCurlSocketEventLoopHttpThread::HandleCurlTimerCallback(void_*,long)_::_2_::FStat_STAT_FCurlSocketEventLoopHttpThread_HandleCurlTimerCallback>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_FCurlSocketEventLoopHttpThread_HandleCurlTimerCallback,
                         *pFVar8,L"STAT_FCurlSocketEventLoopHttpThread_HandleCurlTimerCallback",
                         "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false
                         ,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar9;
  bVar3 = false;
  bVar5 = false;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar10 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_108[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_108[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8.ComparisonIndex.Value = FVar13.Value;
        local_f8.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f8,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlSocketEventLoopHttpThread.cpp"
                   ,0xcd);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_100._0_4_ = FVar13.Value;
      local_100._4_4_ = uVar10;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar4 = true;
      goto LAB_143166dbc;
    }
  }
  bVar4 = false;
  FVar14 = local_f0;
LAB_143166dbc:
  if (6 < (byte)LogHttp._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
  }
  if ((this->EventLoop).bIsSet == false) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      iVar7 = (*pcVar2)();
      return iVar7;
    }
  }
  local_78._0_8_ = 0;
  local_50 = (longlong *)0x0;
  UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::ClearTimer
            (&(this->EventLoop).TypedValue.TimerManager,&this->RequestTimeoutTimer,
             (TUniqueFunction<void___cdecl(void)> *)local_78);
  UE::EventLoop::
  TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>::
  TryNotify(&(this->EventLoop).TypedValue);
  auVar15 = extraout_XMM0;
  if (local_78._0_8_ != 0) {
    plVar11 = (longlong *)(local_78 + 0x10);
    if (local_50 != (longlong *)0x0) {
      plVar11 = local_50;
    }
    auVar15._0_8_ = (**(code **)(*plVar11 + 0x10))();
    auVar15._8_8_ = extraout_XMM0_Qb;
  }
  if (-1 < param_2) {
    if (6 < (byte)LogHttp._0_1_) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
      auVar15 = extraout_XMM0_00;
    }
    if ((this->EventLoop).bIsSet == false) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      auVar15 = extraout_XMM0_01;
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        iVar7 = (*pcVar2)();
        return iVar7;
      }
    }
    local_98 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FCurlSocketEventLoopHttpThread::HandleCurlTimerCallback'::`23'::<lambda_1>,1,0>
                ::_vftable_;
    local_80 = (undefined ***)0x0;
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FCurlSocketEventLoopHttpThread::HandleCurlTimerCallback'::__l23::<lambda_1>,void>
                  ::Call;
    local_b0 = 0;
    auVar16._0_8_ = (double)param_2 * __real_40c3880000000000 + __real_3fe0000000000000;
    auVar16._8_8_ = 0;
    auVar15 = roundpd(auVar15,auVar16,1);
    local_90 = this;
    UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::SetTimer
              (&(this->EventLoop).TypedValue.TimerManager,
               (TUniqueFunction<void___cdecl(void)> *)local_100,(FTimespan)local_a8,
               SUB81((longlong)auVar15._0_8_,0),
               (TOptional<FTimespan> *)((ulonglong)in_stack_fffffffffffffeb8 & 0xffffffffffffff00));
    UE::EventLoop::
    TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>::
    TryNotify(&(this->EventLoop).TypedValue);
    (this->RequestTimeoutTimer).ID = CONCAT44(local_100._4_4_,local_100._0_4_);
    if (local_a8[0] != (code *)0x0) {
      pppuVar12 = &local_98;
      if (local_80 != (undefined ***)0x0) {
        pppuVar12 = local_80;
      }
      (*(code *)(*pppuVar12)[2])();
    }
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_d8.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_d8.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_e0);
      local_d8.StatData.Pad[4] = '\0';
      local_d8.StatData.Pad[5] = '\0';
      local_d8.StatData.Pad[6] = '\0';
      local_d8.StatData.Pad[7] = '\0';
      local_d8.StatData.Pad[0] = local_e0.s.LowPart._0_1_;
      local_d8.StatData.Pad[1] = local_e0.s.LowPart._1_1_;
      local_d8.StatData.Pad[2] = local_e0.s.LowPart._2_1_;
      local_d8.StatData.Pad[3] = local_e0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_d8);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return 0;
}

// HttpThreadTick @ 14316a830

void __thiscall
FCurlSocketEventLoopHttpThread::HttpThreadTick(FCurlSocketEventLoopHttpThread *this,float param_1)

{
  return;
}

// ProcessCurlRequests @ 143173810

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCurlSocketEventLoopHttpThread::ProcessCurlRequests(FCurlSocketEventLoopHttpThread *this)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  undefined1 *puVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<_protected:_void___cdecl_FCurlSocketEventLoopHttpThread::ProcessCurlRequests(void)_::_2_::FStat_STAT_FCurlSocketEventLoopHttpThread_ProcessCurlRequests>
  FVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  FColor_u_0 FVar12;
  FName FVar13;
  undefined1 uVar14;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FName local_res18;
  FName local_res20;
  undefined1 local_68 [16];
  FName local_58;
  undefined1 local_48 [16];
  
  bVar4 = false;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FCurlSocketEventLoopHttpThread_ProcessCurlRequests ==
          (FThreadSafeStaticStat<_protected:_void___cdecl_FCurlSocketEventLoopHttpThread::ProcessCurlRequests(void)_::_2_::FStat_STAT_FCurlSocketEventLoopHttpThread_ProcessCurlRequests>
           )0x0) {
        pFVar6 = ::FName::FName((FName *)&local_res10._s_0,
                                "STAT_FCurlSocketEventLoopHttpThread_ProcessCurlRequests");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_FCurlSocketEventLoopHttpThread_ProcessCurlRequests,*pFVar6,
                   L"STAT_FCurlSocketEventLoopHttpThread_ProcessCurlRequests","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar7 = StatPtr_STAT_FCurlSocketEventLoopHttpThread_ProcessCurlRequests;
  if (StatPtr_STAT_FCurlSocketEventLoopHttpThread_ProcessCurlRequests ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_FCurlSocketEventLoopHttpThread::ProcessCurlRequests(void)_::_2_::FStat_STAT_FCurlSocketEventLoopHttpThread_ProcessCurlRequests>
       )0x0) {
    pFVar6 = ::FName::FName(&local_res18,"STAT_FCurlSocketEventLoopHttpThread_ProcessCurlRequests");
    FVar7 = (FThreadSafeStaticStat<_protected:_void___cdecl_FCurlSocketEventLoopHttpThread::ProcessCurlRequests(void)_::_2_::FStat_STAT_FCurlSocketEventLoopHttpThread_ProcessCurlRequests>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_FCurlSocketEventLoopHttpThread_ProcessCurlRequests,*pFVar6,
                         L"STAT_FCurlSocketEventLoopHttpThread_ProcessCurlRequests",
                         "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false
                         ,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar7;
  uVar14 = 0;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  local_res10.Bits = local_res10.Bits & 0xffffff00;
  FVar12.Bits = (uint)FVar13.ComparisonIndex.Value;
  uVar9 = FVar13.Number;
  if ((FVar12.Bits != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(char *)*(FName *)((longlong)FVar7 + 0x10));
      uVar14 = 1;
      local_res10._s_0.B = 1;
      if (-1 < CpuChannel->Enabled) {
        local_res10.Bits = FVar12.Bits;
        uStackX_14 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10._s_0,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlSocketEventLoopHttpThread.cpp"
                   ,0xfb);
        uVar14 = 3;
        local_res10._s_0.B = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.Bits = FVar12.Bits;
      uStackX_14 = uVar9;
      local_res20 = FVar13;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      local_res10.Bits = CONCAT31(local_res10.Bits._1_3_,uVar14) | 4;
      goto LAB_14317398d;
    }
  }
  local_res20 = local_58;
  FVar13 = local_58;
LAB_14317398d:
  local_res18.ComparisonIndex.Value = 0;
  pFVar8 = (FScriptContainerElement *)
           curl_multi_info_read(FCurlHttpManager::GMultiHandle,&local_res18);
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    do {
      if (*(int *)pFVar8 == 1) {
        pFVar2 = *(FScriptContainerElement **)(pFVar8 + 8);
        curl_multi_remove_handle(FCurlHttpManager::GMultiHandle,pFVar2);
        uVar9 = ((uint)((ulonglong)pFVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar2 >> 4)) *
                -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        uVar9 = uVar9 >> 0x10 ^ uVar9;
        if (*(int *)&(this->HandlesToRequests).field_0x8 !=
            *(int *)&(this->HandlesToRequests).field_0x34) {
          puVar3 = *(undefined1 **)&(this->HandlesToRequests).field_0x40;
          puVar11 = &(this->HandlesToRequests).field_0x38;
          if (puVar3 != (undefined1 *)0x0) {
            puVar11 = puVar3;
          }
          iVar5 = *(int *)(puVar11 +
                          (ulonglong)(*(int *)&(this->HandlesToRequests).field_0x48 - 1U & uVar9) *
                          4);
          if (iVar5 != -1) {
            do {
              lVar1 = *(longlong *)&this->HandlesToRequests + (longlong)iVar5 * 0x18;
              if (*(FScriptContainerElement **)
                   (*(longlong *)&this->HandlesToRequests + (longlong)iVar5 * 0x18) == pFVar2) {
                puVar10 = (undefined8 *)(lVar1 + 8);
                if (lVar1 == 0) {
                  puVar10 = (undefined8 *)0x0;
                }
                if (puVar10 != (undefined8 *)0x0) {
                  FCurlHttpRequest::MarkAsCompleted
                            ((FCurlHttpRequest *)*puVar10,*(CURLcode *)(pFVar8 + 0x10));
                  if (5 < (byte)LogHttp._0_1_) {
                    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
                  }
                  local_68._0_8_ = pFVar2;
                  if (*(int *)&(this->HandlesToRequests).field_0x8 !=
                      *(int *)&(this->HandlesToRequests).field_0x34) {
                    TSet<TTuple<void_*,FHttpRequestCommon_*>,TDefaultMapHashableKeyFuncs<void_*,FHttpRequestCommon_*,0>,FDefaultSetAllocator>
                    ::RemoveImpl<void_const_*>
                              ((TSet<TTuple<void_*,FHttpRequestCommon_*>,TDefaultMapHashableKeyFuncs<void_*,FHttpRequestCommon_*,0>,FDefaultSetAllocator>
                                *)&this->HandlesToRequests,uVar9,(void **)local_68);
                  }
                  bVar4 = true;
                  goto LAB_143173a8b;
                }
                break;
              }
              iVar5 = *(int *)(lVar1 + 0x10);
            } while (iVar5 != -1);
          }
        }
        if (2 < (byte)LogHttp._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
        }
      }
LAB_143173a8b:
      local_res18.ComparisonIndex.Value = 0;
      pFVar8 = (FScriptContainerElement *)
               curl_multi_info_read(FCurlHttpManager::GMultiHandle,&local_res18);
      FVar13 = local_res20;
    } while (pFVar8 != (FScriptContainerElement *)0x0);
    if (bVar4) {
      local_68._0_8_ = pFVar8;
      local_68._8_8_ = pFVar8;
      local_48._0_8_ = pFVar8;
      local_48._8_8_ = pFVar8;
      FHttpThreadBase::Process
                ((FHttpThreadBase *)this,
                 (TArray<FHttpRequestCommon_*,TSizedDefaultAllocator<32>_> *)local_48,
                 (TArray<FHttpRequestCommon_*,TSizedDefaultAllocator<32>_> *)local_68);
      if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_68._0_8_);
      }
      if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_48._0_8_);
      }
    }
  }
  FVar12 = local_res10;
  if ((local_res10.Bits & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((FVar12.Bits & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((FVar12.Bits & 4) != 0) {
    FThreadStats::AddMessage(FVar13,CycleScopeEnd);
  }
  return;
}

// ProcessCurlSocketActions @ 143173c70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCurlSocketEventLoopHttpThread::ProcessCurlSocketActions
          (FCurlSocketEventLoopHttpThread *this,ulong64 param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_protected:_void___cdecl_FCurlSocketEventLoopHttpThread::ProcessCurlSocketActions(unsigned___int64,int)_::_2_::FStat_STAT_FCurlSocketEventLoopHttpThread_ProcessCurlSocketActions>
  FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  LARGE_INTEGER local_res20;
  undefined1 local_58 [8];
  FStatMessage local_50;
  FName local_40;
  
  FVar10.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FCurlSocketEventLoopHttpThread_ProcessCurlSocketActions ==
          (FThreadSafeStaticStat<_protected:_void___cdecl_FCurlSocketEventLoopHttpThread::ProcessCurlSocketActions(unsigned___int64,int)_::_2_::FStat_STAT_FCurlSocketEventLoopHttpThread_ProcessCurlSocketActions>
           )0x0) {
        pFVar5 = ::FName::FName((FName *)&local_res20.s,
                                "STAT_FCurlSocketEventLoopHttpThread_ProcessCurlSocketActions");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_FCurlSocketEventLoopHttpThread_ProcessCurlSocketActions,*pFVar5,
                   L"STAT_FCurlSocketEventLoopHttpThread_ProcessCurlSocketActions","STATGROUP_Quick"
                   ,"STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar6 = StatPtr_STAT_FCurlSocketEventLoopHttpThread_ProcessCurlSocketActions;
  if (StatPtr_STAT_FCurlSocketEventLoopHttpThread_ProcessCurlSocketActions ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_FCurlSocketEventLoopHttpThread::ProcessCurlSocketActions(unsigned___int64,int)_::_2_::FStat_STAT_FCurlSocketEventLoopHttpThread_ProcessCurlSocketActions>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_50,
                            "STAT_FCurlSocketEventLoopHttpThread_ProcessCurlSocketActions");
    FVar6 = (FThreadSafeStaticStat<_protected:_void___cdecl_FCurlSocketEventLoopHttpThread::ProcessCurlSocketActions(unsigned___int64,int)_::_2_::FStat_STAT_FCurlSocketEventLoopHttpThread_ProcessCurlSocketActions>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_FCurlSocketEventLoopHttpThread_ProcessCurlSocketActions,
                         *pFVar5,L"STAT_FCurlSocketEventLoopHttpThread_ProcessCurlSocketActions",
                         "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false
                         ,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  local_40.ComparisonIndex.Value = 0;
  local_40.Number = 0;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.s.LowPart = FVar8.Value;
        local_res20.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res20.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlSocketEventLoopHttpThread.cpp"
                   ,0xe3);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar8.Value;
      local_res20.s.HighPart = uVar7;
      local_40 = FVar9;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = local_40.ComparisonIndex.Value;
      goto LAB_143173dfd;
    }
  }
  bVar3 = false;
  FVar9 = local_40;
LAB_143173dfd:
  if (6 < (byte)LogHttp._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
  }
  curl_multi_socket_action(FCurlHttpManager::GMultiHandle,param_1,param_2,local_58);
  ProcessCurlRequests(this);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_50.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_50.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res20);
      local_50.StatData.Pad[4] = '\0';
      local_50.StatData.Pad[5] = '\0';
      local_50.StatData.Pad[6] = '\0';
      local_50.StatData.Pad[7] = '\0';
      local_50.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_50.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_50.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_50.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_50);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// ProcessCurlSocketEvent @ 143173fd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCurlSocketEventLoopHttpThread::ProcessCurlSocketEvent
          (FCurlSocketEventLoopHttpThread *this,ulong64 param_1,ESocketIoRequestStatus param_2,
          EIOFlags param_3)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  EIOFlags EVar4;
  FString local_18;
  
  if (param_2 == Ok) {
    EVar4 = param_3 & Read | Write;
    if ((param_3 & Write) == None) {
      EVar4 = param_3 & Read;
    }
  }
  else {
    if (2 < (byte)LogHttp._0_1_) {
      if (param_2 == Ok) {
        pwVar3 = L"Ok";
      }
      else if (param_2 == NoResources) {
        pwVar3 = L"NoResources";
      }
      else if (param_2 == Invalid) {
        pwVar3 = L"Invalid";
      }
      else {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Experimental\\EventLoop\\Public\\EventLoop\\BSDSocket\\EventLoopIOAccessBSDSocket.h"
                           ,0x60,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pwVar3 = L"Unknown";
      }
      ::FString::FString(&local_18,pwVar3);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    param_1 = 0xffffffffffffffff;
    EVar4 = None;
  }
  ProcessCurlSocketActions(this,param_1,EVar4);
  return;
}

// StartThreadedRequest @ 143184090

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FCurlSocketEventLoopHttpThread::StartThreadedRequest
          (FCurlSocketEventLoopHttpThread *this,FHttpRequestCommon *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  TPairInitializer<void_*_const_&,FHttpRequestCommon_*_const_&> local_res8;
  ulonglong local_res18;
  ulonglong *local_18;
  FHttpRequestCommon ***local_10;
  
  local_res18 = param_1[1]._padding_;
  uVar6 = ((uint)(local_res18 >> 0x14) & 0xffff ^ (uint)(local_res18 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  local_res8.Value = (FHttpRequestCommon **)param_1;
  if (*(int *)&(this->HandlesToRequests).field_0x8 != *(int *)&(this->HandlesToRequests).field_0x34)
  {
    puVar7 = *(undefined1 **)&(this->HandlesToRequests).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->HandlesToRequests).field_0x38;
    }
    iVar5 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->HandlesToRequests).field_0x48 - 1U &
                              (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar5 != -1) {
      lVar1 = *(longlong *)&(this->HandlesToRequests).field_0x0;
      do {
        if (*(ulonglong *)(lVar1 + (longlong)iVar5 * 0x18) == local_res18) {
          bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4486318512922427458>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlSocketEventLoopHttpThread.cpp"
                             ,0x42,"!HandlesToRequests.Contains(EasyHandle)");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10 + (longlong)iVar5 * 0x18);
      } while (iVar5 != -1);
    }
  }
  bVar3 = FCurlHttpRequest::SetupRequestHttpThread((FCurlHttpRequest *)param_1);
  if (bVar3) {
    iVar5 = curl_multi_add_handle(FCurlHttpManager::GMultiHandle,local_res18);
    *(int *)((longlong)&param_1[1]._padding_ + 4) = iVar5;
    if (iVar5 == 0) {
      local_18 = &local_res18;
      local_10 = &local_res8.Value;
      TSet<TTuple<void_*,FHttpRequestCommon_*>,TDefaultMapHashableKeyFuncs<void_*,FHttpRequestCommon_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<void_*_const_&,FHttpRequestCommon_*_const_&>_>
                ((TSet<TTuple<void_*,FHttpRequestCommon_*>,TDefaultMapHashableKeyFuncs<void_*,FHttpRequestCommon_*,0>,FDefaultSetAllocator>
                  *)&this->HandlesToRequests,&local_res8,(bool *)&local_18);
      uVar4 = (**(code **)(*(longlong *)local_res8.Value + 0x178))();
      return (bool)uVar4;
    }
    if (2 < (byte)LogHttp._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
    }
  }
  else if (2 < (byte)LogHttp._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
    return false;
  }
  return false;
}

// UpdateEventLoopConfigs @ 14318ac10

void __thiscall
FCurlSocketEventLoopHttpThread::UpdateEventLoopConfigs(FCurlSocketEventLoopHttpThread *this)

{
  return;
}

