// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 11

// FRenderCommandPipe @ 145dedc50

FRenderCommandPipe * __thiscall
FRenderCommandPipe::FRenderCommandPipe
          (FRenderCommandPipe *this,wchar_t *param_1,ERenderCommandPipeFlags param_2,
          wchar_t *param_3,wchar_t *param_4)

{
  TLinkedList<FRenderCommandPipe_*> *pTVar1;
  FMemStackBase *this_00;
  undefined8 *puVar2;
  ulong64 uVar3;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  this_00 = ::operator_new(0x58);
  if (this_00 == (FMemStackBase *)0x0) {
    this_00 = (FMemStackBase *)0x0;
  }
  else {
    FMemStackBase::FMemStackBase(this_00,Large);
    this_00[1].Top = (uchar *)this_00;
    this_00[1].End = (uchar *)0x0;
    this_00[1].TopChunk = (FTaggedMemory *)0x0;
    *(undefined4 *)&this_00[1].TopMark = 0;
    *(undefined1 *)&this_00[1].NumMarks = 0;
    *(undefined1 *)&this_00[2].Top = 0;
  }
  this->_padding_ = (longlong)this_00;
  pTVar1 = &this->GlobalListLink;
  *(undefined1 *)&this->_padding_ = 0;
  pTVar1->_padding_ = 0;
  (this->GlobalListLink)._padding_ = 0;
  (this->GlobalListLink).Element = this;
  this->Name = param_1;
  (this->RecordTask).Pimpl.Reference = (FTaskBase *)0x0;
  this->RHICmdList = (FRHICommandList *)0x0;
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  local_28 = &local_50;
  puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRenderCommandPipe::FRenderCommandPipe'::`1'::<lambda_6_>_>
               ::_vftable_;
    puVar2[3] = this;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  FAutoConsoleVariable::FAutoConsoleVariable
            (&this->ConsoleVariable,param_3,(bool)(~param_2 & 1),param_4,
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_58,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  this->NumInFlightCommands = (atomic<int>)0x0;
  this->NumInFlightCommandLists = (atomic<int>)0x0;
  this->Index = -1;
  this->bRecording = false;
  this->bReplaying = false;
  this->bEnabled = true;
  if (`public:_static_class_TLinkedList<FRenderCommandPipe*___ptr64>*___ptr64&___ptr64___cdecl_FRenderCommandPipeRegistry::GetGlobalList(void)'
      ::__l2::GlobalList != (TLinkedList<class_FRenderCommandPipe*___ptr64> *)0x0) {
    *(TLinkedList<FRenderCommandPipe_*> **)
     (`public:_static_class_TLinkedList<FRenderCommandPipe*___ptr64>*___ptr64&___ptr64___cdecl_FRenderCommandPipeRegistry::GetGlobalList(void)'
      ::__l2::GlobalList + 8) = pTVar1;
  }
  pTVar1->_padding_ =
       (longlong)
       `public:_static_class_TLinkedList<FRenderCommandPipe*___ptr64>*___ptr64&___ptr64___cdecl_FRenderCommandPipeRegistry::GetGlobalList(void)'
       ::__l2::GlobalList;
  (this->GlobalListLink)._padding_ =
       (longlong)
       &`public:_static_class_TLinkedList<FRenderCommandPipe*___ptr64>*___ptr64&___ptr64___cdecl_FRenderCommandPipeRegistry::GetGlobalList(void)'
        ::__l2::GlobalList;
  `public:_static_class_TLinkedList<FRenderCommandPipe*___ptr64>*___ptr64&___ptr64___cdecl_FRenderCommandPipeRegistry::GetGlobalList(void)'
  ::__l2::GlobalList = (TLinkedList<class_FRenderCommandPipe*___ptr64> *)pTVar1;
  return this;
}

// operator() @ 145df3700

void __thiscall `FRenderCommandPipe::EnqueueAndLaunch'::__l2::<lambda_1>::operator()(void *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FRenderCommandPipe *pFVar3;
  undefined8 uVar4;
  longlong lVar5;
  FRenderCommandList *this_00;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  FCommandList *this_01;
  undefined8 *puVar9;
  bool bVar10;
  <lambda_1> local_res8;
  FTaskTagScope local_28;
  
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2355,"RenderCommandPipe ReplayCommands",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp"
               ,0x933);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2355);
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,*(wchar_t **)(*(longlong *)this + 0x10));
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)(*(longlong *)this + 0x10),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp"
               ,0x934);
  }
  FTaskTagScope::FTaskTagScope(&local_28,EParallelRenderingThread);
  pFVar3 = *(FRenderCommandPipe **)this;
  this_01 = FRenderCommandList::Get(*(FRenderCommandList **)((longlong)this + 8),pFVar3);
  puVar9 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xed8);
  uVar4 = *puVar9;
  *puVar9 = pFVar3;
  local_res8.__this = pFVar3;
  UE::RenderCommandPipe::FCommandList::
  ConsumeCommands<_FRenderCommandPipe::ExecuteCommands_::__l2::<lambda_1>_>(this_01,&local_res8);
  lVar5 = *(longlong *)this;
  *puVar9 = uVar4;
  LOCK();
  *(int *)(lVar5 + 0x54) = *(int *)(lVar5 + 0x54) + -1;
  UNLOCK();
  this_00 = *(FRenderCommandList **)((longlong)this + 8);
  LOCK();
  paVar1 = &this_00->NumPipeRefs;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if ((int)aVar2 + -1 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                       ,0x3d1,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else if ((aVar2 == (atomic<int>)0x1) && (this_00 != (FRenderCommandList *)0x0)) {
    FRenderCommandList::_scalar_deleting_destructor_(this_00,1);
  }
  FTaskTagScope::~FTaskTagScope(&local_28);
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 145df4a20

void __thiscall `FRenderCommandPipe::EnqueueAndLaunch'::__l5::<lambda_2>::operator()(void *this)

{
  int *piVar1;
  FMutex FVar2;
  atomic<unsigned_char> aVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  FMemStackBase *this_00;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  atomic<unsigned_char> *paVar11;
  undefined8 *puVar12;
  bool bVar13;
  <lambda_1> local_res8;
  FTaskTagScope local_88;
  FContext local_78;
  
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2389,"RenderCommandPipe ReplayCommands",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp"
               ,0x955);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2389);
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,*(wchar_t **)(*(longlong *)this + 0x10));
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)(*(longlong *)this + 0x10),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp"
               ,0x956);
  }
  FTaskTagScope::FTaskTagScope(&local_88,EParallelRenderingThread);
  paVar11 = (atomic<unsigned_char> *)(*(longlong *)this + 8);
  LOCK();
  FVar2.State = *paVar11;
  if (FVar2.State == (atomic<unsigned_char>)0x0) {
    *paVar11 = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (FVar2.State != (atomic<unsigned_char>)0x0) {
    UE::FMutex::LockSlow((FMutex *)paVar11);
  }
  bVar10 = (*(FContext **)((longlong)this + 8))->bDeleteAfterExecute;
  FRenderCommandPipeBase::FContext::FContext(&local_78,*(FContext **)((longlong)this + 8));
  paVar11 = (atomic<unsigned_char> *)(*(longlong *)this + 8);
  LOCK();
  aVar3 = *paVar11;
  *paVar11 = (atomic<unsigned_char>)((char)*paVar11 + -1);
  UNLOCK();
  if (((byte)aVar3 & 2) != 0) {
    UE::FMutex::WakeWaitingThread((FMutex *)paVar11);
  }
  local_res8.__this = *(FRenderCommandPipe **)this;
  local_78.CommandList.bClosed = true;
  puVar12 = (undefined8 *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xed8)
  ;
  uVar5 = *puVar12;
  *puVar12 = local_res8.__this;
  UE::RenderCommandPipe::FCommandList::
  ConsumeCommands<_FRenderCommandPipe::ExecuteCommands_::__l2::<lambda_1>_>
            (&local_78.CommandList,&local_res8);
  lVar6 = *(longlong *)this;
  *puVar12 = uVar5;
  LOCK();
  piVar1 = (int *)(lVar6 + 0x50);
  iVar4 = *piVar1;
  *piVar1 = *piVar1 - local_78.CommandList.Commands.Num;
  UNLOCK();
  if ((iVar4 - local_78.CommandList.Commands.Num < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("LocalNumInFlightCommands >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp"
                         ,0x963,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((bVar10 != false) &&
     (this_00 = *(FMemStackBase **)((longlong)this + 8), this_00 != (FMemStackBase *)0x0)) {
    UE::RenderCommandPipe::FCommandList::~FCommandList((FCommandList *)(this_00 + 1));
    if ((GIsCriticalError == false) &&
       ((this_00->NumMarks != 0 &&
        (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("(GIsCriticalError || !NumMarks)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                             ,0x74,L""), bVar10)))) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FMemStackBase::FreeChunks(this_00,(FTaggedMemory *)0x0);
    ::operator_delete(this_00,0x58);
  }
  UE::RenderCommandPipe::FCommandList::~FCommandList(&local_78.CommandList);
  if (((GIsCriticalError == false) && (local_78.Allocator.NumMarks != 0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(GIsCriticalError || !NumMarks)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                          ,0x74,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FMemStackBase::FreeChunks(&local_78.Allocator,(FTaggedMemory *)0x0);
  FTaskTagScope::~FTaskTagScope(&local_88);
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// EnqueueAndLaunch @ 145e067c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRenderCommandPipe::EnqueueAndLaunch
          (FRenderCommandPipe *this,TUniqueFunction<void___cdecl(FRHICommandList_&)> *param_1,
          FRenderCommandTag *param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58 [48];
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58._40_8_ = *(undefined8 *)&param_1->field_0x28;
  local_58._0_8_ = *(undefined8 *)param_1;
  *(undefined8 *)&param_1->field_0x28 = 0;
  local_58._32_8_ = *(undefined8 *)&param_1->field_0x20;
  local_58._16_8_ = *(undefined8 *)&param_1->field_0x10;
  local_58._24_8_ = *(undefined8 *)&param_1->field_0x18;
  if (local_58._0_8_ != 0) {
    *(undefined8 *)param_1 = 0;
  }
  local_28 = 1;
  EnqueueAndLaunch(this,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                         *)local_58,param_2);
  uVar4 = (ulonglong)local_28;
  if (2 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4] ==
      UE::Core::Private::TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandList_&)>_>::
      Destruct) {
    if (local_58._0_8_ != 0) {
      plVar3 = (longlong *)(local_58 + 0x10);
      if ((longlong *)local_58._40_8_ != (longlong *)0x0) {
        plVar3 = (longlong *)local_58._40_8_;
      }
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4])(local_58);
  }
  return;
}

// EnqueueAndLaunch @ 145e068c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRenderCommandPipe::EnqueueAndLaunch
          (FRenderCommandPipe *this,TUniqueFunction<void___cdecl(void)> *param_1,
          FRenderCommandTag *param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58 [48];
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58._40_8_ = *(undefined8 *)&param_1->field_0x28;
  local_58._0_8_ = *(undefined8 *)param_1;
  *(undefined8 *)&param_1->field_0x28 = 0;
  local_58._32_8_ = *(undefined8 *)&param_1->field_0x20;
  local_58._16_8_ = *(undefined8 *)&param_1->field_0x10;
  local_58._24_8_ = *(undefined8 *)&param_1->field_0x18;
  if (local_58._0_8_ != 0) {
    *(undefined8 *)param_1 = 0;
  }
  local_28 = 0;
  EnqueueAndLaunch(this,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                         *)local_58,param_2);
  uVar4 = (ulonglong)local_28;
  if (2 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4] ==
      UE::Core::Private::TDestructorCaller<TUniqueFunction<void___cdecl(void)>_>::Destruct) {
    if (local_58._0_8_ != 0) {
      plVar3 = (longlong *)(local_58 + 0x10);
      if ((longlong *)local_58._40_8_ != (longlong *)0x0) {
        plVar3 = (longlong *)local_58._40_8_;
      }
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4])(local_58);
  }
  return;
}

// EnqueueAndLaunch @ 145e069b0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FRenderCommandPipe::EnqueueAndLaunch
          (FRenderCommandPipe *this,
          TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          *param_1,FRenderCommandTag *param_2)

{
  FTaskHandle *pFVar1;
  atomic<unsigned_int> *paVar2;
  atomic<unsigned_int> aVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  FTaskBase *pFVar6;
  bool bVar7;
  FTaskBase *this_00;
  undefined8 *puVar8;
  FRenderCommandPipe *local_res8;
  longlong local_28 [2];
  
  if (*(longlong *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xed8) != 0
     ) {
    local_res8 = this;
    `FRenderCommandPipe::EnqueueAndLaunch'::__l2::<lambda_1>::operator()(&local_res8);
  }
  bVar7 = UE::RenderCommandPipe::FCommandList::Enqueue
                    ((FCommandList *)(this->_padding_ + 0x28),param_1,param_2);
  LOCK();
  this->NumInFlightCommands = (atomic<int>)((int)this->NumInFlightCommands + 1);
  UNLOCK();
  if (!bVar7) {
    return;
  }
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2385,"RenderCommandPipe LaunchTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp"
               ,0x951);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2385);
  }
  lVar4 = this->_padding_;
  pwVar5 = this->Name;
  pFVar1 = &this->RecordTask;
  this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&UE::Tasks::Private::SmallTaskAllocator);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
  }
  else {
    UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<`FRenderCommandPipe::EnqueueAndLaunch'::`5'::<lambda_2>,void,void>::
          _vftable_;
    UE::Tasks::Private::FTaskBase::Init(this_00,pwVar5,Default,None,None);
    this_00[1]._padding_ = (longlong)this;
    this_00[1]._padding_ = lVar4;
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTask<`FRenderCommandPipe::EnqueueAndLaunch'::`5'::<lambda_2>_>::_vftable_;
  }
  pFVar6 = (pFVar1->Pimpl).Reference;
  if (pFVar6 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::AddPrerequisites(this_00,pFVar6);
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
  if (pFVar1 == (FTaskHandle *)local_28) {
    if (this_00 == (FTaskBase *)0x0) goto LAB_145e06b4f;
    LOCK();
    paVar2 = &this_00->RefCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 != (atomic<unsigned_int>)0x1) goto LAB_145e06b4f;
    puVar8 = (undefined8 *)this_00->_padding_;
  }
  else {
    pFVar6 = (pFVar1->Pimpl).Reference;
    (pFVar1->Pimpl).Reference = this_00;
    if (pFVar6 == (FTaskBase *)0x0) goto LAB_145e06b4f;
    LOCK();
    paVar2 = &pFVar6->RefCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 != (atomic<unsigned_int>)0x1) goto LAB_145e06b4f;
    puVar8 = (undefined8 *)pFVar6->_padding_;
    this_00 = pFVar6;
  }
  (*(code *)*puVar8)(this_00,1);
LAB_145e06b4f:
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// EnqueueAndLaunch @ 145e06b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FRenderCommandPipe::EnqueueAndLaunch(FRenderCommandPipe *this,FRenderCommandList *param_1)

{
  FTaskHandle *pFVar1;
  atomic<unsigned_int> *paVar2;
  atomic<unsigned_int> aVar3;
  int iVar4;
  wchar_t *pwVar5;
  undefined8 *puVar6;
  FTaskBase *pFVar7;
  undefined8 *puVar8;
  FRenderCommandTag *pFVar9;
  FTaskBase *this_00;
  undefined ***pppuVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStackY_c8 [32];
  FTaskHandle local_98;
  FTaskEvent local_90;
  FRenderCommandPipe *local_88;
  FRenderCommandList *pFStack_80;
  TArrayView<UE::Tasks::Private::FTaskHandle_const_,int> local_78;
  longlong local_68 [2];
  code *local_58 [2];
  undefined **local_48;
  FRenderCommandPipe *local_40;
  FRenderCommandList *local_38;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  LOCK();
  this->NumInFlightCommandLists = (atomic<int>)((int)this->NumInFlightCommandLists + 1);
  UNLOCK();
  this_00 = (FTaskBase *)0x0;
  pFVar7 = (FTaskBase *)&param_1->DispatchTaskEvent;
  if ((param_1->DispatchTaskEvent).bIsSet == false) {
    pFVar7 = this_00;
  }
  local_88 = this;
  pFStack_80 = param_1;
  if (pFVar7 == (FTaskBase *)0x0) {
    pFVar9 = UE::RenderCommandPipe::GetExecuteCommandListTag();
    local_30 = (undefined ***)0x0;
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FRenderCommandPipe::EnqueueAndLaunch'::`2'::<lambda_1>,1,0>::
                _vftable_;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FRenderCommandPipe::EnqueueAndLaunch'::__l2::<lambda_1>,void>
                  ::Call;
    local_40 = this;
    local_38 = param_1;
    EnqueueAndLaunch(this,(TUniqueFunction<void___cdecl(void)> *)local_58,pFVar9);
    if (local_58[0] == (code *)0x0) {
      return;
    }
    pppuVar10 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar10 = local_30;
    }
    (*(code *)(*pppuVar10)[2])();
    return;
  }
  FRenderCommandPipeBase::ResetContext((FRenderCommandPipeBase *)this);
  local_98.Pimpl.Reference =
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(this->RecordTask).Pimpl.Reference;
  pFVar1 = &this->RecordTask;
  if (local_98.Pimpl.Reference != (FTaskBase *)0x0) {
    LOCK();
    ((FTaskBase *)local_98.Pimpl.Reference)->RefCount =
         (atomic<unsigned_int>)((int)((FTaskBase *)local_98.Pimpl.Reference)->RefCount + 1);
    UNLOCK();
  }
  local_90 = *(FTaskEvent *)&pFVar7->_padding_;
  if (local_90 != (FTaskEvent)0x0) {
    LOCK();
    *(int *)((longlong)local_90 + 0x30) = *(int *)((longlong)local_90 + 0x30) + 1;
    UNLOCK();
  }
  pwVar5 = this->Name;
  local_78.DataPtr = &local_98;
  lVar11 = 2;
  local_78.ArrayNum = 2;
  pFVar7 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&UE::Tasks::Private::SmallTaskAllocator);
  if (pFVar7 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(pFVar7,2,true);
    pFVar7->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<`FRenderCommandPipe::EnqueueAndLaunch'::`2'::<lambda_1>,void,void>::
          _vftable_;
    UE::Tasks::Private::FTaskBase::Init(pFVar7,pwVar5,Default,None,None);
    pFVar7[1]._padding_ = (longlong)local_88;
    pFVar7[1]._padding_ = (longlong)pFStack_80;
    pFVar7->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTask<`FRenderCommandPipe::EnqueueAndLaunch'::`2'::<lambda_1>_>::_vftable_;
    this_00 = pFVar7;
  }
  UE::Tasks::Private::FTaskBase::
  AddPrerequisites<TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>,0>(this_00,&local_78,true)
  ;
  UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
  if (pFVar1 == (FTaskHandle *)local_68) {
    if (this_00 == (FTaskBase *)0x0) goto LAB_145e06cd4;
    LOCK();
    paVar2 = &this_00->RefCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 != (atomic<unsigned_int>)0x1) goto LAB_145e06cd4;
    puVar8 = (undefined8 *)this_00->_padding_;
  }
  else {
    pFVar7 = (pFVar1->Pimpl).Reference;
    (pFVar1->Pimpl).Reference = this_00;
    if (pFVar7 == (FTaskBase *)0x0) goto LAB_145e06cd4;
    LOCK();
    paVar2 = &pFVar7->RefCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 != (atomic<unsigned_int>)0x1) goto LAB_145e06cd4;
    puVar8 = (undefined8 *)pFVar7->_padding_;
    this_00 = pFVar7;
  }
  (*(code *)*puVar8)(this_00,1);
LAB_145e06cd4:
  lVar12 = (longlong)&local_88;
  do {
    puVar8 = *(undefined8 **)(lVar12 + 0xfffffffffffffff8);
    lVar12 = lVar12 + 0xfffffffffffffff8;
    lVar11 = lVar11 + -1;
    if (puVar8 != (undefined8 *)0x0) {
      LOCK();
      puVar6 = puVar8 + 6;
      iVar4 = *(int *)puVar6;
      *(int *)puVar6 = *(int *)puVar6 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)*puVar8)(puVar8,1);
      }
    }
  } while (lVar11 != 0);
  return;
}

// ExecuteCommand @ 145e07730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRenderCommandPipe::ExecuteCommand
          (FRenderCommandPipe *this,TUniqueFunction<void___cdecl(FRHICommandList_&)> *param_1,
          FRenderCommandTag *param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58 [48];
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58._40_8_ = *(undefined8 *)&param_1->field_0x28;
  local_58._0_8_ = *(undefined8 *)param_1;
  *(undefined8 *)&param_1->field_0x28 = 0;
  local_58._32_8_ = *(undefined8 *)&param_1->field_0x20;
  local_58._16_8_ = *(undefined8 *)&param_1->field_0x10;
  local_58._24_8_ = *(undefined8 *)&param_1->field_0x18;
  if (local_58._0_8_ != 0) {
    *(undefined8 *)param_1 = 0;
  }
  local_28 = 1;
  ExecuteCommand(this,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                       *)local_58,param_2);
  uVar4 = (ulonglong)local_28;
  if (2 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4] ==
      UE::Core::Private::TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandList_&)>_>::
      Destruct) {
    if (local_58._0_8_ != 0) {
      plVar3 = (longlong *)(local_58 + 0x10);
      if ((longlong *)local_58._40_8_ != (longlong *)0x0) {
        plVar3 = (longlong *)local_58._40_8_;
      }
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4])(local_58);
  }
  return;
}

// ExecuteCommand @ 145e07830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRenderCommandPipe::ExecuteCommand
          (FRenderCommandPipe *this,
          TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          *param_1,FRenderCommandTag *param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FRHICommandListBase *this_00;
  
  if (this->RHICmdList == (FRHICommandList *)0x0) {
    bVar1 = param_1->TypeIndex;
    if ((2 < (ulonglong)bVar1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(class_FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + (ulonglong)bVar1) != '\0') {
      this_00 = ::operator_new(0x1bb0);
      if (this_00 == (FRHICommandListBase *)0x0) {
        this_00 = (FRHICommandListBase *)0x0;
      }
      else {
        FRHICommandListBase::FRHICommandListBase
                  (this_00,(FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1),
                   false);
      }
      this->RHICmdList = (FRHICommandList *)this_00;
      FRHICommandListBase::SwitchPipeline(this_00,Graphics);
    }
  }
  ::ExecuteCommand(this->RHICmdList,param_1,param_2);
  return;
}

// ExecuteCommands @ 145e07900

void __thiscall FRenderCommandPipe::ExecuteCommands(FRenderCommandPipe *this,FCommandList *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  <lambda_1> local_res8;
  
  puVar2 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xed8);
  uVar1 = *puVar2;
  *puVar2 = this;
  local_res8.__this = this;
  UE::RenderCommandPipe::FCommandList::
  ConsumeCommands<_FRenderCommandPipe::ExecuteCommands_::__l2::<lambda_1>_>(param_1,&local_res8);
  *puVar2 = uVar1;
  return;
}

// operator() @ 1504dd0a0

bool __thiscall `FRenderCommandPipe::EnqueueAndLaunch'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5173014724773672630>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5173014724773672630>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

