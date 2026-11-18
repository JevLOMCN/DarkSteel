// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 9

// FCurlMultiPollEventLoopHttpThread @ 14314cbd0

FCurlMultiPollEventLoopHttpThread * __thiscall
FCurlMultiPollEventLoopHttpThread::FCurlMultiPollEventLoopHttpThread
          (FCurlMultiPollEventLoopHttpThread *this)

{
  FEventLoopHttpThread::FEventLoopHttpThread((FEventLoopHttpThread *)this);
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  *(undefined8 *)&this->HandlesToRequests = 0;
  *(undefined8 *)&(this->HandlesToRequests).field_0x8 = 0;
  *(undefined8 *)&(this->HandlesToRequests).field_0x20 = 0;
  (this->EventLoop).bIsSet = false;
  *(undefined4 *)&(this->HandlesToRequests).field_0x28 = 0;
  *(undefined4 *)&(this->HandlesToRequests).field_0x2c = 0x80;
  *(undefined4 *)&(this->HandlesToRequests).field_0x34 = 0;
  *(undefined4 *)&(this->HandlesToRequests).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->HandlesToRequests).field_0x40 = 0;
  *(undefined4 *)&(this->HandlesToRequests).field_0x48 = 0;
  return this;
}

// CompleteThreadedRequest @ 143158dd0

void __thiscall
FCurlMultiPollEventLoopHttpThread::CompleteThreadedRequest
          (FCurlMultiPollEventLoopHttpThread *this,FHttpRequestCommon *param_1)

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

// CreateEventLoop @ 14315abd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014315ac6a) */
/* WARNING: Removing unreachable block (ram,0x00014315ac7b) */
/* WARNING: Removing unreachable block (ram,0x00014315ac7f) */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
FCurlMultiPollEventLoopHttpThread::CreateEventLoop(FCurlMultiPollEventLoopHttpThread *this)

{
  FCurlMultiPollIOManager *pFVar1;
  atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> aVar2;
  longlong *plVar3;
  TOptional<UE::EventLoop::TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits>_>
  *this_00;
  undefined1 auStack_a8 [32];
  void *local_88;
  code *local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  FCurlMultiPollEventLoopHttpThread *pFStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  longlong *plStack_50;
  undefined8 local_48;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_58 = local_28;
  uStack_54 = uStack_24;
  plStack_50 = (longlong *)0x0;
  local_68 = 0x50a626d0;
  uStack_64 = 1;
  pFStack_60 = this;
  local_48 = 0;
  uStack_20 = 0;
  uStack_20 = 0;
  local_48 = 0;
  plStack_50 = (longlong *)0x0;
  uStack_64 = 1;
  local_68 = 0x50a626d0;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`FCurlMultiPollEventLoopHttpThread::CreateEventLoop'::__l2::<lambda_1>,void>
             ::Call;
  local_88 = FCurlHttpManager::GMultiHandle;
  this_00 = &this->EventLoop;
  if ((this->EventLoop).bIsSet != false) {
    UE::EventLoop::TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits>::
    ~TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits>
              (&this_00->TypedValue);
  }
  pFVar1 = &(this->EventLoop).TypedValue.IOManager;
  *(undefined ***)&this_00->TypedValue =
       &
       ___7__TEventLoop_VFCurlMultiPollIOManager__UFEventLoopDefaultTraits_EventLoop_UE___EventLoop_UE__6B_
  ;
  pFVar1->_padding_ = (longlong)&___7FCurlMultiPollIOManager__6B_;
  (this->EventLoop).TypedValue.IOManager.Params.MultiHandle = local_88;
  *(undefined8 *)&(this->EventLoop).TypedValue.field_0x8 = 0;
  *(undefined8 *)&(this->EventLoop).TypedValue.field_0x10 = 0;
  (this->EventLoop).TypedValue.IOManager.IOAccess.IOManager = pFVar1;
  (this->EventLoop).TypedValue.IOManager.EventLoop = (IEventLoop *)this_00;
  *(code **)&(this->EventLoop).TypedValue.IOManager.Params.ProcessCurlRequests = local_78;
  *(longlong **)&(this->EventLoop).TypedValue.IOManager.Params.ProcessCurlRequests.field_0x28 =
       plStack_50;
  *(ulonglong *)&(this->EventLoop).TypedValue.IOManager.Params.ProcessCurlRequests.field_0x10 =
       CONCAT44(uStack_64,local_68);
  *(FCurlMultiPollEventLoopHttpThread **)
   &(this->EventLoop).TypedValue.IOManager.Params.ProcessCurlRequests.field_0x18 = pFStack_60;
  plStack_50 = (longlong *)0x0;
  *(ulonglong *)&(this->EventLoop).TypedValue.IOManager.Params.ProcessCurlRequests.field_0x20 =
       CONCAT44(uStack_54,local_58);
  if (*(longlong *)&(this->EventLoop).TypedValue.IOManager.Params.ProcessCurlRequests != 0) {
    local_78 = (code *)0x0;
  }
  memset(&(this->EventLoop).TypedValue.TimerManager,0,0x4e0);
  UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::
  TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>
            (&(this->EventLoop).TypedValue.TimerManager);
  (this->EventLoop).TypedValue.AsyncTasks.Head =
       (atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)0x0;
  aVar2 = (atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)
          FMemory::Malloc(0x40,0x10);
  *(undefined8 *)aVar2 = 0;
  (this->EventLoop).TypedValue.AsyncTasks.Head = aVar2;
  (this->EventLoop).TypedValue.AsyncTasks.Tail = (FNode *)aVar2;
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
  if (local_78 != (code *)0x0) {
    plVar3 = (longlong *)&local_68;
    if (plStack_50 != (longlong *)0x0) {
      plVar3 = plStack_50;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return;
}

// DestroyEventLoop @ 14315c830

void __thiscall
FCurlMultiPollEventLoopHttpThread::DestroyEventLoop(FCurlMultiPollEventLoopHttpThread *this)

{
  if ((this->EventLoop).bIsSet != false) {
    UE::EventLoop::TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits>::
    ~TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits>
              (&(this->EventLoop).TypedValue);
    (this->EventLoop).bIsSet = false;
  }
  return;
}

// GetEventLoop @ 1431627c0

IEventLoop * __thiscall
FCurlMultiPollEventLoopHttpThread::GetEventLoop(FCurlMultiPollEventLoopHttpThread *this)

{
  IEventLoop *pIVar1;
  
  pIVar1 = (IEventLoop *)&this->EventLoop;
  if ((this->EventLoop).bIsSet == false) {
    pIVar1 = (IEventLoop *)0x0;
  }
  return pIVar1;
}

// GetEventLoopChecked @ 143162800

IEventLoop * __thiscall
FCurlMultiPollEventLoopHttpThread::GetEventLoopChecked(FCurlMultiPollEventLoopHttpThread *this)

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

// ProcessCurlRequests @ 1431733b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCurlMultiPollEventLoopHttpThread::ProcessCurlRequests(FCurlMultiPollEventLoopHttpThread *this)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  undefined1 *puVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<_protected:_void___cdecl_FCurlMultiPollEventLoopHttpThread::ProcessCurlRequests(void)_::_2_::FStat_STAT_FCurlMultiPollEventLoopHttpThread_ProcessCurlRequests>
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
      if (StatPtr_STAT_FCurlMultiPollEventLoopHttpThread_ProcessCurlRequests ==
          (FThreadSafeStaticStat<_protected:_void___cdecl_FCurlMultiPollEventLoopHttpThread::ProcessCurlRequests(void)_::_2_::FStat_STAT_FCurlMultiPollEventLoopHttpThread_ProcessCurlRequests>
           )0x0) {
        pFVar6 = ::FName::FName((FName *)&local_res10._s_0,
                                "STAT_FCurlMultiPollEventLoopHttpThread_ProcessCurlRequests");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_FCurlMultiPollEventLoopHttpThread_ProcessCurlRequests,*pFVar6,
                   L"STAT_FCurlMultiPollEventLoopHttpThread_ProcessCurlRequests","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar7 = StatPtr_STAT_FCurlMultiPollEventLoopHttpThread_ProcessCurlRequests;
  if (StatPtr_STAT_FCurlMultiPollEventLoopHttpThread_ProcessCurlRequests ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_FCurlMultiPollEventLoopHttpThread::ProcessCurlRequests(void)_::_2_::FStat_STAT_FCurlMultiPollEventLoopHttpThread_ProcessCurlRequests>
       )0x0) {
    pFVar6 = ::FName::FName(&local_res18,
                            "STAT_FCurlMultiPollEventLoopHttpThread_ProcessCurlRequests");
    FVar7 = (FThreadSafeStaticStat<_protected:_void___cdecl_FCurlMultiPollEventLoopHttpThread::ProcessCurlRequests(void)_::_2_::FStat_STAT_FCurlMultiPollEventLoopHttpThread_ProcessCurlRequests>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_FCurlMultiPollEventLoopHttpThread_ProcessCurlRequests,*pFVar6
                         ,L"STAT_FCurlMultiPollEventLoopHttpThread_ProcessCurlRequests",
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
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlMultiPollEventLoopHttpThread.cpp"
                   ,0x8c);
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
      goto LAB_14317352d;
    }
  }
  local_res20 = local_58;
  FVar13 = local_58;
LAB_14317352d:
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
                  goto LAB_14317362b;
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
LAB_14317362b:
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

// StartThreadedRequest @ 143183f00

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FCurlMultiPollEventLoopHttpThread::StartThreadedRequest
          (FCurlMultiPollEventLoopHttpThread *this,FHttpRequestCommon *param_1)

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
                            (&bGEnsureHasExecuted<2036743740248293451>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlMultiPollEventLoopHttpThread.cpp"
                             ,0x4b,"!HandlesToRequests.Contains(EasyHandle)");
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

// UpdateEventLoopConfigs @ 14318ac00

void __thiscall
FCurlMultiPollEventLoopHttpThread::UpdateEventLoopConfigs(FCurlMultiPollEventLoopHttpThread *this)

{
  return;
}

