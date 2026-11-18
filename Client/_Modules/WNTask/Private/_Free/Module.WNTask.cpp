// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WNTask
// Functions: 31

// `dynamic_initializer_for_'CVarMaxProcessingTasks'' @ 1411c9670

void __cdecl _dynamic_initializer_for__CVarMaxProcessingTasks__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x1e;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMaxProcessingTasks,L"WN.Task.MaxProcessingTasks",local_res8,
             L"Processing 으로 내보낼 전체 Task 의 개수.",0x40);
  atexit(_dynamic_atexit_destructor_for__CVarMaxProcessingTasks__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantWNTask'' @ 1411c96c0

void __cdecl _dynamic_initializer_for__ModuleRegistrantWNTask__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "WNTask";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"WNTask",6);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FWN_TaskModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'S_ActiveTaskStackTLS'' @ 1411c9710

void __cdecl _dynamic_initializer_for__S_ActiveTaskStackTLS__(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  *(undefined4 *)(lVar1 + 0x9a94) = 0;
  *(undefined1 *)(lVar1 + 0x9a80) = 1;
  ((ForAnyElementType *)(lVar1 + 0x9a88))->Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)(lVar1 + 0x9a90) = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,0x40,(ForAnyElementType *)(lVar1 + 0x9a88),0,(int *)(lVar1 + 0x9a94));
  __tlregdtor(_dynamic_atexit_destructor_for__S_ActiveTaskStackTLS__);
  return;
}

// `dynamic_initializer_for_'S_SkippedTasks'' @ 1411c9780

void __cdecl _dynamic_initializer_for__S_SkippedTasks__(void)

{
  atexit(_dynamic_atexit_destructor_for__S_SkippedTasks__);
  return;
}

// `dynamic_initializer_for_'S_SubsequentTaskArrayPool'' @ 1411c97a0

void __cdecl _dynamic_initializer_for__S_SubsequentTaskArrayPool__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&S_SubsequentTaskArrayPool,4000);
  S_SubsequentTaskArrayPool.FreedTasksArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  S_SubsequentTaskArrayPool.FreedTasksArray.ArrayNum = 0;
  S_SubsequentTaskArrayPool.FreedTasksArray.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,0x2000,&S_SubsequentTaskArrayPool.FreedTasksArray.AllocatorInstance,0,
             &S_SubsequentTaskArrayPool.FreedTasksArray.ArrayMax);
  atexit(_dynamic_atexit_destructor_for__S_SubsequentTaskArrayPool__);
  return;
}

// `dynamic_initializer_for_'S_TaskCallbackResultNames'' @ 1411c9810

void __cdecl _dynamic_initializer_for__S_TaskCallbackResultNames__(void)

{
  FName::FName(S_TaskCallbackResultNames,L"Undefined");
  FName::FName(S_TaskCallbackResultNames + 1,L"Continued");
  FName::FName(S_TaskCallbackResultNames + 2,L"Succeeded");
  FName::FName(S_TaskCallbackResultNames + 3,L"Failed");
  FName::FName(S_TaskCallbackResultNames + 4,L"Canceled");
  return;
}

// `dynamic_initializer_for_'S_TaskEventPool'' @ 1411c9880

void __cdecl _dynamic_initializer_for__S_TaskEventPool__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&S_TaskEventPool,4000);
  atexit(_dynamic_atexit_destructor_for__S_TaskEventPool__);
  return;
}

// `dynamic_initializer_for_'S_TaskGlobalPriorityNames'' @ 1411c98b0

void __cdecl _dynamic_initializer_for__S_TaskGlobalPriorityNames__(void)

{
  FName::FName(S_TaskGlobalPriorityNames,L"Undefined");
  FName::FName(S_TaskGlobalPriorityNames + 1,L"VeryLow");
  FName::FName(S_TaskGlobalPriorityNames + 2,L"Low");
  FName::FName(S_TaskGlobalPriorityNames + 3,L"Normal");
  FName::FName(S_TaskGlobalPriorityNames + 4,L"High");
  FName::FName(S_TaskGlobalPriorityNames + 5,L"VeryHigh");
  FName::FName(S_TaskGlobalPriorityNames + 6,L"__Critical__");
  return;
}

// `dynamic_initializer_for_'S_TaskResultNames'' @ 1411c9950

void __cdecl _dynamic_initializer_for__S_TaskResultNames__(void)

{
  FName::FName(S_TaskResultNames,L"Undefined");
  FName::FName(S_TaskResultNames + 1,L"Processing");
  FName::FName(S_TaskResultNames + 2,L"Succeeded");
  FName::FName(S_TaskResultNames + 3,L"Failed");
  FName::FName(S_TaskResultNames + 4,L"Canceled");
  return;
}

// `dynamic_initializer_for_'S_TaskStepNames'' @ 1411c99c0

void __cdecl _dynamic_initializer_for__S_TaskStepNames__(void)

{
  FName::FName(S_TaskStepNames,L"Initialized");
  FName::FName(S_TaskStepNames + 1,L"Ready");
  FName::FName(S_TaskStepNames + 2,L"Scheduling");
  FName::FName(S_TaskStepNames + 3,L"Scheduled");
  FName::FName(S_TaskStepNames + 4,L"WaitingForProcessing");
  FName::FName(S_TaskStepNames + 5,L"Processing");
  FName::FName(S_TaskStepNames + 6,L"WaitingForProcessingCompleted");
  FName::FName(S_TaskStepNames + 7,L"ProcessingCompleted");
  FName::FName(S_TaskStepNames + 8,L"WaitingForProcessed");
  FName::FName(S_TaskStepNames + 9,L"Processed");
  FName::FName(S_TaskStepNames + 10,L"WaitingForCompleted");
  FName::FName(S_TaskStepNames + 0xb,L"Completed");
  FName::FName(S_TaskStepNames + 0xc,L"GCed");
  FName::FName(S_TaskStepNames + 0xd,L"Undefined");
  return;
}

// `dynamic_initializer_for_'S_TempTasks'' @ 1411c9ae0

void __cdecl _dynamic_initializer_for__S_TempTasks__(void)

{
  atexit(_dynamic_atexit_destructor_for__S_TempTasks__);
  return;
}

// HeapSortInternal<FWN_Task_*,int,FIdentityFunctor,TDereferenceWrapper<FWN_Task_*,`WN_SortTasksByPriorityDescending'::__l2::<lambda_1>_>_> @ 14a6ab960

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
AlgoImpl::
HeapSortInternal<FWN_Task_*,int,FIdentityFunctor,TDereferenceWrapper<FWN_Task_*,_WN_SortTasksByPriorityDescending_::__l2::<lambda_1>_>_>
          (FWN_Task **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FWN_Task_*,_void___cdecl_WN_SortTasksByPriorityDescending(TArray<FWN_Task_*,TSizedDefaultAllocator<32>_>_&)_::_2_::<lambda_1>_>
          param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  FWN_Task *pFVar3;
  FWN_Task *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  
  if (param_2 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar7 = (param_2 + -2) / 2;
  iVar8 = iVar7 * 2 + 1;
  iVar12 = iVar8;
  iVar10 = iVar7;
  do {
    while (param_2 <= iVar8) {
LAB_14a6aba8f:
      if (iVar10 == 0) {
        iVar8 = param_2 + -1;
        lVar11 = (longlong)iVar8;
        if (0 < iVar8) {
          do {
            pFVar3 = *param_1;
            *param_1 = param_1[lVar11];
            param_1[lVar11] = pFVar3;
            iVar12 = 0;
            if (1 < iVar8) {
              do {
                iVar10 = iVar12 * 2;
                iVar7 = iVar10 + 1;
                if (iVar10 + 2 < iVar8) {
                  uVar1 = (param_1[iVar7]->Priority).PriorityBits;
                  uVar2 = (param_1[(longlong)iVar10 + 2]->Priority).PriorityBits;
                  if (uVar2 == uVar1) {
                    bVar6 = param_1[(longlong)iVar10 + 2]->CreationCycles <
                            param_1[iVar7]->CreationCycles;
                  }
                  else {
                    bVar6 = uVar1 < uVar2;
                  }
                  if (bVar6) {
                    iVar7 = iVar10;
                  }
                  iVar7 = iVar7 + 1;
                }
                pFVar3 = param_1[iVar7];
                pFVar4 = param_1[iVar12];
                uVar1 = (pFVar3->Priority).PriorityBits;
                uVar2 = (pFVar4->Priority).PriorityBits;
                if (uVar2 == uVar1) {
                  bVar6 = pFVar4->CreationCycles < pFVar3->CreationCycles;
                }
                else {
                  bVar6 = uVar1 < uVar2;
                }
                if (!bVar6) break;
                param_1[iVar12] = pFVar3;
                param_1[iVar7] = pFVar4;
                iVar12 = iVar7;
              } while (iVar7 * 2 + 1 < iVar8);
            }
            iVar8 = iVar8 + -1;
            lVar11 = lVar11 + -1;
          } while (0 < lVar11);
        }
        return;
      }
      iVar7 = iVar10 + -1;
      iVar8 = iVar12 + -2;
      iVar12 = iVar8;
      iVar10 = iVar7;
    }
    iVar8 = iVar7 * 2;
    iVar9 = iVar8 + 1;
    if (iVar8 + 2 < param_2) {
      uVar1 = (param_1[iVar9]->Priority).PriorityBits;
      uVar2 = (param_1[(longlong)iVar8 + 2]->Priority).PriorityBits;
      if (uVar2 == uVar1) {
        bVar6 = param_1[(longlong)iVar8 + 2]->CreationCycles < param_1[iVar9]->CreationCycles;
      }
      else {
        bVar6 = uVar1 < uVar2;
      }
      if (bVar6) {
        iVar9 = iVar8;
      }
      iVar9 = iVar9 + 1;
    }
    pFVar3 = param_1[iVar9];
    pFVar4 = param_1[iVar7];
    uVar1 = (pFVar3->Priority).PriorityBits;
    uVar2 = (pFVar4->Priority).PriorityBits;
    if (uVar2 == uVar1) {
      bVar6 = pFVar4->CreationCycles < pFVar3->CreationCycles;
    }
    else {
      bVar6 = uVar1 < uVar2;
    }
    if (!bVar6) goto LAB_14a6aba8f;
    iVar8 = iVar9 * 2 + 1;
    param_1[iVar7] = pFVar3;
    param_1[iVar9] = pFVar4;
    iVar7 = iVar9;
  } while( true );
}

// IntroSortInternal<FWN_Task_*,int,FIdentityFunctor,TDereferenceWrapper<FWN_Task_*,`WN_SortTasksByPriorityDescending'::__l2::<lambda_1>_>_> @ 14a6abb90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
AlgoImpl::
IntroSortInternal<FWN_Task_*,int,FIdentityFunctor,TDereferenceWrapper<FWN_Task_*,_WN_SortTasksByPriorityDescending_::__l2::<lambda_1>_>_>
          (FWN_Task **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FWN_Task_*,_void___cdecl_WN_SortTasksByPriorityDescending(TArray<FWN_Task_*,TSizedDefaultAllocator<32>_>_&)_::_2_::<lambda_1>_>
          param_4)

{
  FWN_Task **ppFVar1;
  FWN_Task *pFVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  FWN_Task **ppFVar6;
  FWN_Task **ppFVar7;
  FWN_Task **ppFVar8;
  FWN_Task **ppFVar9;
  FWN_Task **ppFVar10;
  FWN_Task ***pppFVar11;
  bool bVar12;
  float fVar13;
  undefined1 auStack_378 [48];
  FWN_Task **local_348;
  FWN_Task **local_338;
  FWN_Task **local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar13 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar13;
    memset(local_320,0,0x2e8);
    pppFVar11 = &local_338;
    do {
      ppFVar7 = pppFVar11[1];
      ppFVar6 = *pppFVar11;
      ppFVar1 = pppFVar11[2];
      iVar5 = (int)((longlong)ppFVar7 - (longlong)ppFVar6 >> 3) + 1;
      local_348._0_4_ = (int)ppFVar1;
      ppFVar10 = ppFVar6;
      if ((int)local_348 != 0) {
LAB_14a6abc40:
        if (8 < iVar5) {
          if (iVar5 < 0) {
            iVar5 = iVar5 + 1;
          }
          ppFVar8 = ppFVar7 + 1;
          pFVar2 = ppFVar10[iVar5 >> 1];
          ppFVar10[iVar5 >> 1] = *ppFVar10;
          *ppFVar10 = pFVar2;
          ppFVar6 = ppFVar10;
LAB_14a6abc70:
          ppFVar6 = ppFVar6 + 1;
          if (ppFVar6 <= ppFVar7) goto code_r0x00014a6abc79;
          goto LAB_14a6abca0;
        }
        for (; ppFVar6 = ppFVar10, ppFVar1 = ppFVar10, ppFVar10 < ppFVar7; ppFVar7 = ppFVar7 + -1) {
          while (ppFVar1 = ppFVar1 + 1, ppFVar1 <= ppFVar7) {
            uVar3 = ((*ppFVar1)->Priority).PriorityBits;
            uVar4 = ((*ppFVar6)->Priority).PriorityBits;
            if (uVar4 == uVar3) {
              bVar12 = (*ppFVar6)->CreationCycles < (*ppFVar1)->CreationCycles;
            }
            else {
              bVar12 = uVar3 < uVar4;
            }
            if (bVar12) {
              ppFVar6 = ppFVar1;
            }
          }
          pFVar2 = *ppFVar6;
          *ppFVar6 = *ppFVar7;
          *ppFVar7 = pFVar2;
        }
        goto LAB_14a6abd72;
      }
LAB_14a6abd61:
      local_348 = ppFVar1;
      HeapSortInternal<FWN_Task_*,int,FIdentityFunctor,TDereferenceWrapper<FWN_Task_*,_WN_SortTasksByPriorityDescending_::__l2::<lambda_1>_>_>
                (ppFVar6,iVar5,param_3,param_4);
LAB_14a6abd72:
      pppFVar11 = pppFVar11 + -3;
    } while (&local_338 <= pppFVar11);
  }
  return;
code_r0x00014a6abc79:
  uVar3 = ((*ppFVar6)->Priority).PriorityBits;
  uVar4 = ((*ppFVar10)->Priority).PriorityBits;
  if (uVar4 == uVar3) {
    bVar12 = (*ppFVar10)->CreationCycles < (*ppFVar6)->CreationCycles;
  }
  else {
    bVar12 = uVar3 < uVar4;
  }
  if (!bVar12) goto LAB_14a6abc70;
LAB_14a6abca0:
  do {
    ppFVar9 = ppFVar8;
    ppFVar8 = ppFVar9 + -1;
    if (ppFVar8 <= ppFVar10) break;
    uVar3 = ((*ppFVar10)->Priority).PriorityBits;
    uVar4 = ((*ppFVar8)->Priority).PriorityBits;
    if (uVar4 == uVar3) {
      bVar12 = (*ppFVar8)->CreationCycles < (*ppFVar10)->CreationCycles;
    }
    else {
      bVar12 = uVar3 < uVar4;
    }
  } while (!bVar12);
  if (ppFVar6 <= ppFVar8) {
    pFVar2 = *ppFVar6;
    *ppFVar6 = *ppFVar8;
    *ppFVar8 = pFVar2;
    goto LAB_14a6abc70;
  }
  pFVar2 = *ppFVar10;
  local_348._0_4_ = (int)local_348 + -1;
  *ppFVar10 = *ppFVar8;
  *ppFVar8 = pFVar2;
  if ((longlong)((longlong)ppFVar8 + (-8 - (longlong)ppFVar10) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppFVar7 - (longlong)ppFVar6 & 0xfffffffffffffff8U)) {
    if (ppFVar6 < ppFVar7) {
      *pppFVar11 = ppFVar6;
      pppFVar11[1] = ppFVar7;
      *(int *)(pppFVar11 + 2) = (int)local_348;
      pppFVar11 = pppFVar11 + 3;
    }
    if (ppFVar8 <= ppFVar10 + 1) goto LAB_14a6abd72;
    ppFVar7 = ppFVar9 + -2;
    ppFVar6 = ppFVar10;
  }
  else {
    if (ppFVar10 + 1 < ppFVar8) {
      *pppFVar11 = ppFVar10;
      pppFVar11[1] = ppFVar9 + -2;
      *(int *)(pppFVar11 + 2) = (int)local_348;
      pppFVar11 = pppFVar11 + 3;
    }
    if (ppFVar7 <= ppFVar6) goto LAB_14a6abd72;
  }
  iVar5 = (int)((longlong)ppFVar7 - (longlong)ppFVar6 >> 3) + 1;
  ppFVar10 = ppFVar6;
  if ((int)local_348 == 0) goto LAB_14a6abd61;
  goto LAB_14a6abc40;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14a6acb64

/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl FWN_TaskScheduler::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FWN_TaskScheduler::_vector_deleting_destructor__adjustor_8__(FWN_TaskScheduler *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FWN_TaskScheduler *)&this[-1].CompletedTasks.ArrayNum,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14a6acb80

void * __thiscall
TGraphTask<FWN_GraphTaskForStep>::_scalar_deleting_destructor_
          (TGraphTask<FWN_GraphTaskForStep> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a6acbe0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FWN_TaskScheduler,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FWN_TaskScheduler,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a6acc20

void * __thiscall FWN_TaskModule::_scalar_deleting_destructor_(FWN_TaskModule *this,uint param_1)

{
  *this = (FWN_TaskModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a6acc60

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FWN_TaskScheduler::_scalar_deleting_destructor_(FWN_TaskScheduler *this,uint param_1)

{
  ~FWN_TaskScheduler(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// WN_GetTaskCallbackResultName @ 14a6b2770

FName * __cdecl WN_GetTaskCallbackResultName(EWN_TaskCallbackResult param_1)

{
  return S_TaskCallbackResultNames + param_1;
}

// WN_GetTaskGlobalPriorityName @ 14a6b2790

FName * __cdecl WN_GetTaskGlobalPriorityName(EWN_TaskGlobalPriority param_1)

{
  return S_TaskGlobalPriorityNames + param_1;
}

// WN_GetTaskResultName @ 14a6b27b0

FName * __cdecl WN_GetTaskResultName(EWN_TaskResult param_1)

{
  return S_TaskResultNames + param_1;
}

// WN_GetTaskStepName @ 14a6b27d0

FName * __cdecl WN_GetTaskStepName(EWN_TaskStep param_1)

{
  return S_TaskStepNames + param_1;
}

// IMPLEMENT_MODULE_WNTask @ 14a6b2ae0

void __cdecl IMPLEMENT_MODULE_WNTask(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxProcessingTasks'' @ 15041ff80

void __cdecl _dynamic_atexit_destructor_for__CVarMaxProcessingTasks__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxProcessingTasks);
  return;
}

// `dynamic_atexit_destructor_for_'S_ActiveTaskStackTLS'' @ 15041ffa0

void __cdecl _dynamic_atexit_destructor_for__S_ActiveTaskStackTLS__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9a88);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// `dynamic_atexit_destructor_for_'S_SkippedTasks'' @ 15041ffd0

void __cdecl _dynamic_atexit_destructor_for__S_SkippedTasks__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = S_SkippedTasks.AllocatorInstance.Data;
  if (S_SkippedTasks.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (S_SkippedTasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'S_SubsequentTaskArrayPool'' @ 15041fff0

void __cdecl _dynamic_atexit_destructor_for__S_SubsequentTaskArrayPool__(void)

{
  if (S_SubsequentTaskArrayPool.FreedTasksArray.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(S_SubsequentTaskArrayPool.FreedTasksArray.AllocatorInstance.Data);
  }
                    /* WARNING: Could not recover jumptable at 0x000150420010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&S_SubsequentTaskArrayPool);
  return;
}

// `dynamic_atexit_destructor_for_'S_TaskEventPool'' @ 150420020

void __cdecl _dynamic_atexit_destructor_for__S_TaskEventPool__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150420027. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&S_TaskEventPool);
  return;
}

// `dynamic_atexit_destructor_for_'S_TempTasks'' @ 150420040

void __cdecl _dynamic_atexit_destructor_for__S_TempTasks__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = S_TempTasks.AllocatorInstance.Data;
  if (S_TempTasks.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (S_TempTasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'sInst'' @ 150420060

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl `FWN_TaskManager::Get'::__l2::_dynamic_atexit_destructor_for__sInst__(void)

{
  TNode *pTVar1;
  
  if (sInst.FreedTasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(sInst.FreedTasks.AllocatorInstance.Data);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&sInst.FreedTasksCS);
  while (pTVar1 = sInst.ScheduledQueue.Tail, pTVar1 != (TNode *)0x0) {
    sInst.ScheduledQueue.Tail = pTVar1->NextNode;
    if (pTVar1 != (TNode *)0x0) {
      FWN_Task::~FWN_Task(&pTVar1->Item);
      ::operator_delete(pTVar1,0x148);
    }
  }
  sInst.TaskMap._72_4_ = 0;
  sInst.ScheduledQueue.Tail = pTVar1;
  if ((void *)sInst.TaskMap._64_8_ != (void *)0x0) {
    FMemory::Free((void *)sInst.TaskMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FWN_TaskHandle,FWN_Task_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FWN_TaskHandle,FWN_Task_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FWN_TaskHandle,FWN_Task_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&sInst.TaskMap);
  DeleteCriticalSection((LPCRITICAL_SECTION)&sInst.TaskMapCS);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (sInst.Scheduler.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'sLock'' @ 150420130

void __cdecl
`FWN_TaskHandle::ReallocateIdentifier'::__l2::_dynamic_atexit_destructor_for__sLock__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150420137. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&sLock);
  return;
}

