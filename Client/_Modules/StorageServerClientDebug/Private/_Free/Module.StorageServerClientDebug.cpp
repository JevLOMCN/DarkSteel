// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClientDebug
// Functions: 46

// `dynamic_initializer_for_'CVarShowZenDebugOnScreenMessage'' @ 141167e80

void __cdecl _dynamic_initializer_for__CVarShowZenDebugOnScreenMessage__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarShowZenDebugOnScreenMessage,L"zen.onscreenmessage",&GZenShowDebugMessage,
             L"Show an on-screen message with zen streaming stats",0);
  atexit(_dynamic_atexit_destructor_for__CVarShowZenDebugOnScreenMessage__);
  return;
}

// `dynamic_initializer_for_'CVarShowZenIndicator'' @ 141167ed0

void __cdecl _dynamic_initializer_for__CVarShowZenIndicator__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarShowZenIndicator,L"zen.indicator.show",&GZenShowIndicator,
             L"Show on-screen indicator when Zen streaming is active",0);
  atexit(_dynamic_atexit_destructor_for__CVarShowZenIndicator__);
  return;
}

// `dynamic_initializer_for_'CVarZenIndicatorAlpha'' @ 141167f20

void __cdecl _dynamic_initializer_for__CVarZenIndicatorAlpha__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarZenIndicatorAlpha,L"zen.indicator.alpha",&GZenIndicatorAlpha,
             L"Zen on-screen indicator transparency",0);
  atexit(_dynamic_atexit_destructor_for__CVarZenIndicatorAlpha__);
  return;
}

// `dynamic_initializer_for_'CVarZenIndicatorFadeTime'' @ 141167f70

void __cdecl _dynamic_initializer_for__CVarZenIndicatorFadeTime__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarZenIndicatorFadeTime,L"zen.indicator.fadetime",&GZenIndicatorFadeTime,
             L"Zen on-screen indicator fade time in seconds",0);
  atexit(_dynamic_atexit_destructor_for__CVarZenIndicatorFadeTime__);
  return;
}

// `dynamic_initializer_for_'CVarZenIndicatorPosX'' @ 141167fc0

void __cdecl _dynamic_initializer_for__CVarZenIndicatorPosX__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarZenIndicatorPosX,L"zen.indicator.x",&GZenIndicatorPosX,
             L"Zen on-screen indicator position (horizontal)",0);
  atexit(_dynamic_atexit_destructor_for__CVarZenIndicatorPosX__);
  return;
}

// `dynamic_initializer_for_'CVarZenIndicatorPosY'' @ 141168010

void __cdecl _dynamic_initializer_for__CVarZenIndicatorPosY__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarZenIndicatorPosY,L"zen.indicator.y",&GZenIndicatorPosY,
             L"Zen on-screen indicator position (vertical)",0);
  atexit(_dynamic_atexit_destructor_for__CVarZenIndicatorPosY__);
  return;
}

// `dynamic_initializer_for_'CVarZenShowGraphs'' @ 141168060

void __cdecl _dynamic_initializer_for__CVarZenShowGraphs__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarZenShowGraphs,L"zen.showgraphs",&GZenShowGraphs,L"Show ZenServer Stats Graph",0);
  atexit(_dynamic_atexit_destructor_for__CVarZenShowGraphs__);
  return;
}

// `dynamic_initializer_for_'CVarZenShowStats'' @ 1411680b0

void __cdecl _dynamic_initializer_for__CVarZenShowStats__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarZenShowStats,L"zen.showstats",&GZenShowStats,L"Show ZenServer Stats",0);
  atexit(_dynamic_atexit_destructor_for__CVarZenShowStats__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantStorageServerClientDebug'' @ 141168100

void __cdecl _dynamic_initializer_for__ModuleRegistrantStorageServerClientDebug__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "StorageServerClientDebug";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"StorageServerClientDebug",0x18);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FStorageServerClientDebugModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_ZenServerStats'' @ 141168150

void __cdecl _dynamic_initializer_for___GCsvCategory_ZenServerStats__(void)

{
  FString::operator=(&_GCsvCategory_ZenServerStats.Name,L"ZenServerStats");
  _GCsvCategory_ZenServerStats.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_ZenServerStats.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_ZenServerStats__);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_MaxReqThroughputMbps'' @ 1411681a0

void __cdecl _dynamic_initializer_for___GCsvStat_MaxReqThroughputMbps__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_ZenServerStats.Index;
  FName::FName(&_GCsvStat_MaxReqThroughputMbps.Name,L"MaxReqThroughputMbps");
  _GCsvStat_MaxReqThroughputMbps.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_MaxReqThroughputMbps.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_MinReqThroughputMbps'' @ 1411681e0

void __cdecl _dynamic_initializer_for___GCsvStat_MinReqThroughputMbps__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_ZenServerStats.Index;
  FName::FName(&_GCsvStat_MinReqThroughputMbps.Name,L"MinReqThroughputMbps");
  _GCsvStat_MinReqThroughputMbps.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_MinReqThroughputMbps.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_RequestCountPerSec'' @ 141168220

void __cdecl _dynamic_initializer_for___GCsvStat_RequestCountPerSec__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_ZenServerStats.Index;
  FName::FName(&_GCsvStat_RequestCountPerSec.Name,L"RequestCountPerSec");
  _GCsvStat_RequestCountPerSec.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_RequestCountPerSec.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_ThroughputMbps'' @ 141168260

void __cdecl _dynamic_initializer_for___GCsvStat_ThroughputMbps__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_ZenServerStats.Index;
  FName::FName(&_GCsvStat_ThroughputMbps.Name,L"ThroughputMbps");
  _GCsvStat_ThroughputMbps.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_ThroughputMbps.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterZenClient_MaxReqThroughputMbps'' @ 1411682a0

void __cdecl _dynamic_initializer_for____GTraceCounterZenClient_MaxReqThroughputMbps__(void)

{
  __GTraceCounterZenClient_MaxReqThroughputMbps.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"ZenClient/MaxReqThroughputMbps (decompressed)",TraceCounterType_Float,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterZenClient_MaxReqThroughputMbps.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterZenClient_MaxReqThroughputMbps__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterZenClient_MinReqThroughputMbps'' @ 1411682e0

void __cdecl _dynamic_initializer_for____GTraceCounterZenClient_MinReqThroughputMbps__(void)

{
  __GTraceCounterZenClient_MinReqThroughputMbps.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"ZenClient/MinReqThroughputMbps (decompressed)",TraceCounterType_Float,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterZenClient_MinReqThroughputMbps.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterZenClient_MinReqThroughputMbps__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterZenClient_RequestCountPerSec'' @ 141168320

void __cdecl _dynamic_initializer_for____GTraceCounterZenClient_RequestCountPerSec__(void)

{
  __GTraceCounterZenClient_RequestCountPerSec.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"ZenClient/RequestCountPerSec",TraceCounterType_Int,TraceCounterDisplayHint_None)
  ;
  LOCK();
  __GTraceCounterZenClient_RequestCountPerSec.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterZenClient_RequestCountPerSec__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterZenClient_ThroughputMbps'' @ 141168360

void __cdecl _dynamic_initializer_for____GTraceCounterZenClient_ThroughputMbps__(void)

{
  __GTraceCounterZenClient_ThroughputMbps.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"ZenClient/ThroughputMbps (decompressed)",TraceCounterType_Float,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterZenClient_ThroughputMbps.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterZenClient_ThroughputMbps__);
  return;
}

// `scalar_deleting_destructor' @ 148ce4500

void * __thiscall
TBaseRawMethodDelegateInstance<0,FStorageServerConnectionDebug,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FStorageServerConnectionDebug,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148ce47c0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FStorageServerConnectionDebug,bool___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FStorageServerConnectionDebug,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148ce4a80

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStorageServerClientDebugModule::StartupModule'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `vector_deleting_destructor'`adjustor{8}' @ 148ce4aa8

/* [thunk]:public: virtual void * __ptr64 __cdecl FStorageServerClientDebugModule::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FStorageServerClientDebugModule::_vector_deleting_destructor__adjustor_8__
          (FStorageServerClientDebugModule *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FStorageServerClientDebugModule *)&this[-1].TickHandle.WeakReferenceCount,
                      param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 148ce50a0

void * __thiscall
FStorageServerClientDebugModule::_scalar_deleting_destructor_
          (FStorageServerClientDebugModule *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FRunnableThread *pFVar4;
  FStorageServerConnectionDebug *pFVar5;
  FScriptContainerElement *pFVar6;
  
  pTVar3 = (this->TickHandle).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  pFVar4 = (this->Thread).Ptr;
  if (pFVar4 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar4->_padding_ + 0x30))(pFVar4,1);
  }
  pFVar5 = (this->ConnectionDebug).Ptr;
  if (pFVar5 != (FStorageServerConnectionDebug *)0x0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)&pFVar5->CS);
    pFVar6 = (pFVar5->HostAddress).Data.AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    std::
    vector<FStorageServerConnectionDebug::HistoryItem,std::allocator<FStorageServerConnectionDebug::HistoryItem>_>
    ::_Tidy(&pFVar5->History);
    ::operator_delete(pFVar5,0xa0);
  }
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// AddLambda<`FStorageServerClientDebugModule::StartupModule'::__l5::<lambda_1>_> @ 148ce5170

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddLambda<_FStorageServerClientDebugModule::StartupModule_::__l5::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          <lambda_1> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FStorageServerClientDebugModule *pFVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pFVar5 = (FStorageServerClientDebugModule *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__4__StartupModule_FStorageServerClientDebugModule__UEAAXXZ___V__6B_
    ;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (FStorageServerClientDebugModule *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      pFVar5 = (FStorageServerClientDebugModule *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    param_1->__this = pFVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// _Copy_memmove<FStorageServerConnectionDebug::HistoryItem_*,FStorageServerConnectionDebug::HistoryItem_*> @ 148ce53e0

HistoryItem * __cdecl
std::
_Copy_memmove<FStorageServerConnectionDebug::HistoryItem_*,FStorageServerConnectionDebug::HistoryItem_*>
          (HistoryItem *param_1,HistoryItem *param_2,HistoryItem *param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (HistoryItem *)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Copy_memmove<FStorageServerConnectionDebug::HistoryItem_const_*,FStorageServerConnectionDebug::HistoryItem_*> @ 148ce5420

HistoryItem * __cdecl
std::
_Copy_memmove<FStorageServerConnectionDebug::HistoryItem_const_*,FStorageServerConnectionDebug::HistoryItem_*>
          (HistoryItem *param_1,HistoryItem *param_2,HistoryItem *param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (HistoryItem *)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Copy_memmove_tail<FStorageServerConnectionDebug::HistoryItem_*> @ 148ce5460

HistoryItem * __cdecl
std::_Copy_memmove_tail<FStorageServerConnectionDebug::HistoryItem_*>
          (char *param_1,HistoryItem *param_2,ulong64 param_3,ulong64 param_4)

{
  memmove(param_2,param_1,param_3);
  return (HistoryItem *)((longlong)&param_2->Time + param_3);
}

// _Emplace_reallocate<FStorageServerConnectionDebug::HistoryItem> @ 148ce5490

HistoryItem * __thiscall
std::
vector<FStorageServerConnectionDebug::HistoryItem,std::allocator<FStorageServerConnectionDebug::HistoryItem>_>
::_Emplace_reallocate<FStorageServerConnectionDebug::HistoryItem>
          (vector<FStorageServerConnectionDebug::HistoryItem,std::allocator<FStorageServerConnectionDebug::HistoryItem>_>
           *this,HistoryItem *param_1,HistoryItem *param_2)

{
  ulonglong uVar1;
  HistoryItem *pHVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  undefined4 uVar6;
  void *pvVar7;
  ulonglong uVar8;
  HistoryItem *pHVar9;
  ulong64 uVar10;
  HistoryItem *pHVar11;
  ulonglong uVar12;
  size_t _Size;
  HistoryItem *pHVar13;
  HistoryItem **ppHVar14;
  
  pHVar11 = (this->_Mypair)._Myval2._Myfirst;
  lVar4 = ((longlong)param_1 - (longlong)pHVar11) / 0x28;
  lVar3 = ((longlong)(this->_Mypair)._Myval2._Mylast - (longlong)pHVar11) / 0x28;
  if (lVar3 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  uVar1 = lVar3 + 1;
  uVar12 = ((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pHVar11) / 0x28;
  if (0x666666666666666 - (uVar12 >> 1) < uVar12) {
LAB_148ce56c1:
                    /* WARNING: Subroutine does not return */
    _Throw_bad_array_new_length();
  }
  uVar12 = (uVar12 >> 1) + uVar12;
  uVar8 = uVar1;
  if (uVar1 <= uVar12) {
    uVar8 = uVar12;
  }
  if (0x666666666666666 < uVar8) goto LAB_148ce56c1;
  uVar12 = uVar8 * 0x28;
  if (uVar12 == 0) {
    pHVar11 = (HistoryItem *)0x0;
  }
  else if (uVar12 < 0x1000) {
    pHVar11 = ::operator_new(uVar12);
  }
  else {
    if (uVar12 + 0x27 <= uVar12) goto LAB_148ce56c1;
    pvVar7 = ::operator_new(uVar12 + 0x27);
    if (pvVar7 == (void *)0x0) goto LAB_148ce56a1;
    pHVar11 = (HistoryItem *)((longlong)pvVar7 + 0x27U & 0xffffffffffffffe0);
    *(void **)&pHVar11[-1].RequestCount = pvVar7;
  }
  ppHVar14 = &(this->_Mypair)._Myval2._Myend;
  dVar5 = param_2->MaxRequestThroughput;
  pHVar11[lVar4].Time = param_2->Time;
  pHVar11[lVar4].MaxRequestThroughput = dVar5;
  pHVar2 = pHVar11 + lVar4;
  dVar5 = param_2->Throughput;
  pHVar2->MinRequestThroughput = param_2->MinRequestThroughput;
  pHVar2->Throughput = dVar5;
  uVar6 = *(undefined4 *)&param_2->field_0x24;
  pHVar2->RequestCount = param_2->RequestCount;
  *(undefined4 *)&pHVar2->field_0x24 = uVar6;
  pHVar9 = (this->_Mypair)._Myval2._Mylast;
  pHVar13 = (this->_Mypair)._Myval2._Myfirst;
  if (param_1 == pHVar9) {
    _Size = (longlong)pHVar9 - (longlong)pHVar13;
    pHVar9 = pHVar11;
    param_1 = pHVar13;
  }
  else {
    memmove(pHVar11,pHVar13,(longlong)param_1 - (longlong)pHVar13);
    pHVar9 = pHVar2 + 1;
    _Size = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)param_1;
  }
  memmove(pHVar9,param_1,_Size);
  pHVar9 = (this->_Mypair)._Myval2._Myfirst;
  if (pHVar9 != (HistoryItem *)0x0) {
    uVar10 = (((longlong)*ppHVar14 - (longlong)pHVar9) / 0x28) * 0x28;
    pHVar13 = pHVar9;
    if (0xfff < uVar10) {
      pHVar13 = *(HistoryItem **)&pHVar9[-1].RequestCount;
      uVar10 = uVar10 + 0x27;
      if (0x1f < (ulonglong)((longlong)pHVar9 + (-8 - (longlong)pHVar13))) {
LAB_148ce56a1:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pHVar13,uVar10);
  }
  (this->_Mypair)._Myval2._Myfirst = pHVar11;
  (this->_Mypair)._Myval2._Mylast = pHVar11 + uVar1;
  *ppHVar14 = pHVar11 + uVar8;
  return pHVar2;
}

// `scalar_deleting_destructor' @ 148ce57b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FStorageServerConnectionDebug::LoadZenStreamingSettings'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148ce57e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FStorageServerConnectionDebug::LoadZenStreamingSettings'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// _Tidy @ 148ce7b40

void __thiscall
std::
vector<FStorageServerConnectionDebug::HistoryItem,std::allocator<FStorageServerConnectionDebug::HistoryItem>_>
::_Tidy(vector<FStorageServerConnectionDebug::HistoryItem,std::allocator<FStorageServerConnectionDebug::HistoryItem>_>
        *this)

{
  HistoryItem *pHVar1;
  HistoryItem *pHVar2;
  ulong64 uVar3;
  
  pHVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (pHVar1 != (HistoryItem *)0x0) {
    uVar3 = (((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pHVar1) / 0x28) * 0x28;
    pHVar2 = pHVar1;
    if (0xfff < uVar3) {
      pHVar2 = *(HistoryItem **)&pHVar1[-1].RequestCount;
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pHVar1 + (-8 - (longlong)pHVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pHVar2,uVar3);
    (this->_Mypair)._Myval2._Myfirst = (HistoryItem *)0x0;
    (this->_Mypair)._Myval2._Mylast = (HistoryItem *)0x0;
    (this->_Mypair)._Myval2._Myend = (HistoryItem *)0x0;
  }
  return;
}

// _Xlength @ 148ce7be0

void __cdecl
std::
vector<FStorageServerConnectionDebug::HistoryItem,std::allocator<FStorageServerConnectionDebug::HistoryItem>_>
::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// IMPLEMENT_MODULE_StorageServerClientDebug @ 148ce7c00

void __cdecl IMPLEMENT_MODULE_StorageServerClientDebug(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarShowZenDebugOnScreenMessage'' @ 15040baa0

void __cdecl _dynamic_atexit_destructor_for__CVarShowZenDebugOnScreenMessage__(void)

{
  CVarShowZenDebugOnScreenMessage._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarShowZenDebugOnScreenMessage);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShowZenIndicator'' @ 15040bac0

void __cdecl _dynamic_atexit_destructor_for__CVarShowZenIndicator__(void)

{
  CVarShowZenIndicator._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarShowZenIndicator);
  return;
}

// `dynamic_atexit_destructor_for_'CVarZenIndicatorAlpha'' @ 15040bae0

void __cdecl _dynamic_atexit_destructor_for__CVarZenIndicatorAlpha__(void)

{
  CVarZenIndicatorAlpha._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarZenIndicatorAlpha);
  return;
}

// `dynamic_atexit_destructor_for_'CVarZenIndicatorFadeTime'' @ 15040bb00

void __cdecl _dynamic_atexit_destructor_for__CVarZenIndicatorFadeTime__(void)

{
  CVarZenIndicatorFadeTime._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarZenIndicatorFadeTime);
  return;
}

// `dynamic_atexit_destructor_for_'CVarZenIndicatorPosX'' @ 15040bb20

void __cdecl _dynamic_atexit_destructor_for__CVarZenIndicatorPosX__(void)

{
  CVarZenIndicatorPosX._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarZenIndicatorPosX);
  return;
}

// `dynamic_atexit_destructor_for_'CVarZenIndicatorPosY'' @ 15040bb40

void __cdecl _dynamic_atexit_destructor_for__CVarZenIndicatorPosY__(void)

{
  CVarZenIndicatorPosY._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarZenIndicatorPosY);
  return;
}

// `dynamic_atexit_destructor_for_'CVarZenShowGraphs'' @ 15040bb60

void __cdecl _dynamic_atexit_destructor_for__CVarZenShowGraphs__(void)

{
  CVarZenShowGraphs._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarZenShowGraphs);
  return;
}

// `dynamic_atexit_destructor_for_'CVarZenShowStats'' @ 15040bb80

void __cdecl _dynamic_atexit_destructor_for__CVarZenShowStats__(void)

{
  CVarZenShowStats._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarZenShowStats);
  return;
}

// `dynamic_atexit_destructor_for_'_GCsvCategory_ZenServerStats'' @ 15040bba0

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_ZenServerStats__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_ZenServerStats.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_ZenServerStats.Name.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_ZenServerStats.Name.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'__GTraceCounterZenClient_MaxReqThroughputMbps'' @ 15040bbc0

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterZenClient_MaxReqThroughputMbps__(void)

{
  if ((__GTraceCounterZenClient_MaxReqThroughputMbps.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterZenClient_MaxReqThroughputMbps.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterZenClient_MinReqThroughputMbps'' @ 15040bbe0

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterZenClient_MinReqThroughputMbps__(void)

{
  if ((__GTraceCounterZenClient_MinReqThroughputMbps.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterZenClient_MinReqThroughputMbps.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterZenClient_RequestCountPerSec'' @ 15040bc00

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterZenClient_RequestCountPerSec__(void)

{
  if ((__GTraceCounterZenClient_RequestCountPerSec.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterZenClient_RequestCountPerSec.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterZenClient_ThroughputMbps'' @ 15040bc20

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterZenClient_ThroughputMbps__(void)

{
  if ((__GTraceCounterZenClient_ThroughputMbps.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterZenClient_ThroughputMbps.CounterName);
    return;
  }
  return;
}

