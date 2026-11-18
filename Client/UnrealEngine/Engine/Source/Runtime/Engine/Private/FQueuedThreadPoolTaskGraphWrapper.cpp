// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// operator() @ 147ac15b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FQueuedThreadPoolTaskGraphWrapper::AddQueuedWork'::__l2::<lambda_1>::operator()
          (void *this,Type param_1,TRefCountPtr<FBaseGraphTask> *param_2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint *puVar7;
  FTlsAutoCleanup *pFVar8;
  byte *pbVar9;
  undefined1 local_res8 [32];
  code *local_48;
  undefined1 *local_40;
  FMemMark local_38;
  
  puVar7 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_40 = local_res8;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar8 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_48,puVar7);
  local_38.Mem = (FMemStackBase *)(pFVar8 + 2);
  local_38.Top = (local_38.Mem)->Top;
  local_38.SavedChunk = *(FTaggedMemory **)(pFVar8 + 4);
  local_38.bPopped = false;
  local_38.NextTopmostMark = *(FMemMark **)(pFVar8 + 5);
  pFVar8[5] = (FTlsAutoCleanup)&local_38;
  *(int *)(pFVar8 + 6) = *(int *)(pFVar8 + 6) + 1;
  (**(code **)**(undefined8 **)((longlong)this + 8))();
  lVar4 = *(longlong *)this;
  LOCK();
  piVar1 = (int *)(lVar4 + 0x40);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar3 == 1) && (*(char *)(lVar4 + 0x44) != '\0')) {
    pbVar9 = (byte *)(lVar4 + 0x45);
    LOCK();
    bVar2 = *pbVar9;
    *pbVar9 = 1;
    UNLOCK();
    if ((bVar2 & 3) == 2) {
      UE::ParkingLot::WakeAll(pbVar9);
    }
  }
  if (local_38.bPopped == false) {
    if ((local_38.Mem)->TopMark != &local_38) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mem.TopMark == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                         ,0x215,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    local_38.bPopped = true;
    (local_38.Mem)->NumMarks = (local_38.Mem)->NumMarks + -1;
    if (local_38.SavedChunk != (local_38.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_38.Mem,local_38.SavedChunk);
    }
    (local_38.Mem)->Top = local_38.Top;
    (local_38.Mem)->TopMark = local_38.NextTopmostMark;
  }
  return;
}

// AddQueuedWork @ 147ac4aa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FQueuedThreadPoolTaskGraphWrapper::AddQueuedWork
          (FQueuedThreadPoolTaskGraphWrapper *this,IQueuedWork *param_1,EQueuedWorkPriority param_2)

{
  atomic<unsigned_int> *paVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  atomic<unsigned_int> aVar5;
  undefined8 uVar6;
  FName *pFVar7;
  TStatIdData *pTVar8;
  FTaskBase *this_00;
  longlong *plVar9;
  undefined ***pppuVar10;
  FTaskBase *this_01;
  EExtendedTaskPriority local_res8 [8];
  ETaskPriority local_res10 [8];
  EQueuedWorkPriority local_res18 [8];
  FName local_res20;
  FName local_78 [2];
  code *local_68;
  undefined **local_58;
  FQueuedThreadPoolTaskGraphWrapper *pFStack_50;
  FPipe *local_48;
  undefined ***local_40;
  
  if ((this->bIsExiting != (TAtomic<bool>)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsExiting == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\QueuedThreadPoolWrapper.h"
                         ,0x12d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  LOCK();
  this->TaskCount = (TAtomic<unsigned_int>)((int)this->TaskCount + 1);
  UNLOCK();
  local_res18[0] = param_2;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->PriorityMapper);
  plVar2 = *(longlong **)&(this->PriorityMapper).field_0x28;
  pcVar3 = *(code **)&this->PriorityMapper;
  plVar9 = (longlong *)&(this->PriorityMapper).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar9 = plVar2;
  }
  uVar6 = (**(code **)(*plVar9 + 8))();
  aVar5 = (atomic<unsigned_int>)(*pcVar3)(uVar6,local_res18);
  this_01 = (FTaskBase *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:___cdecl_`private:_virtual_void___cdecl_FQueuedThreadPoolTaskGraphWrapper::AddQueuedWork(IQueuedWork*___ptr64,EQueuedWorkPriority)___ptr64'::`2'::<lambda_2>::operator()(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_`private:_virtual_void___cdecl_FQueuedThreadPoolTaskGraphWrapper::AddQueuedWork(IQueuedWork*___ptr64,EQueuedWorkPriority)___ptr64'::`2'::<lambda_2>::operator()(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_`private:_virtual_void___cdecl_FQueuedThreadPoolTaskGraphWrapper::AddQueuedWork(IQueuedWork*___ptr64,EQueuedWorkPriority)___ptr64'::`2'::<lambda_2>::operator()(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_FQueuedThreadPoolTaskGraphWrapper = (TStatIdData *)0x0;
    pFVar7 = ::FName::FName(&local_res20,"FQueuedThreadPoolTaskGraphWrapper");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:___cdecl_`private:_virtual_void___cdecl_FQueuedThreadPoolTaskGraphWrapper::AddQueuedWork(IQueuedWork*___ptr64,EQueuedWorkPriority)___ptr64'::`2'::<lambda_2>::operator()(void)const___ptr64'
                ::__l2::StatPtr_FQueuedThreadPoolTaskGraphWrapper,*pFVar7,
               L"FQueuedThreadPoolTaskGraphWrapper","STATGROUP_ThreadPoolAsyncTasks",
               "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:___cdecl_`private:_virtual_void___cdecl_FQueuedThreadPoolTaskGraphWrapper::AddQueuedWork(IQueuedWork*___ptr64,EQueuedWorkPriority)___ptr64'::`2'::<lambda_2>::operator()(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar8 = _StatPtr_FQueuedThreadPoolTaskGraphWrapper;
  if (_StatPtr_FQueuedThreadPoolTaskGraphWrapper == (TStatIdData *)0x0) {
    pFVar7 = ::FName::FName(local_78,"FQueuedThreadPoolTaskGraphWrapper");
    pTVar8 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:___cdecl_`private:_virtual_void___cdecl_FQueuedThreadPoolTaskGraphWrapper::AddQueuedWork(IQueuedWork*___ptr64,EQueuedWorkPriority)___ptr64'::`2'::<lambda_2>::operator()(void)const___ptr64'
                         ::__l2::StatPtr_FQueuedThreadPoolTaskGraphWrapper,*pFVar7,
                        L"FQueuedThreadPoolTaskGraphWrapper","STATGROUP_ThreadPoolAsyncTasks",
                        "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  local_40 = (undefined ***)0x0;
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__AddQueuedWork_FQueuedThreadPoolTaskGraphWrapper__EEAAXPEAVIQueuedWork__W4EQueuedWorkPriority___Z__00_0A__Function_Private_Core_UE__6B_
  ;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`FQueuedThreadPoolTaskGraphWrapper::AddQueuedWork'::__l2::<lambda_1>,void,enum_ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&>
             ::Call;
  pFStack_50 = this;
  local_48 = (FPipe *)param_1;
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
  if (this_00 != (FTaskBase *)0x0) {
    FBaseGraphTask::FBaseGraphTask
              ((FBaseGraphTask *)this_00,
               (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                *)0x0);
    this_00->_padding_ =
         (longlong)
         &
         ___7__TGraphTask_V__TFunctionGraphTaskImpl___A6AXW4Type_ENamedThreads__AEBV__TRefCountPtr_VFBaseGraphTask_____Z_0A_____6B_
    ;
    this_01 = this_00;
  }
  this_01[1]._padding_ = (longlong)pTVar8;
  this_01[1]._padding_ = (longlong)local_68;
  *(undefined ****)&this_01[1].StateChangeEvent = local_40;
  this_01[1]._padding_ = (longlong)local_58;
  *(FQueuedThreadPoolTaskGraphWrapper **)&this_01[1].RefCount = pFStack_50;
  this_01[1].Pipe = local_48;
  if (this_01[1]._padding_ != 0) {
    local_68 = (code *)0x0;
  }
  this_01[1].ExecutingThreadId = aVar5;
  UE::Tasks::Private::TranslatePriority((Type)aVar5,local_res10,local_res8);
  UE::Tasks::Private::FTaskBase::Init(this_01,L"GraphTask",local_res10[0],local_res8[0],None);
  if (this_01 != (FTaskBase *)0x0) {
    LOCK();
    this_01->RefCount = (atomic<unsigned_int>)((int)this_01->RefCount + 1);
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(this_01,0x130);
  if (local_68 != (code *)0x0) {
    pppuVar10 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar10 = local_40;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  if (this_01 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &this_01->RefCount;
    aVar5 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar5 == (atomic<unsigned_int>)0x1) {
      (**(code **)this_01->_padding_)(this_01,1);
    }
  }
  return;
}

// Create @ 147acc120

bool __thiscall
FQueuedThreadPoolTaskGraphWrapper::Create
          (FQueuedThreadPoolTaskGraphWrapper *this,uint param_1,uint param_2,EThreadPriority param_3
          ,wchar_t *param_4)

{
  return true;
}

// Destroy @ 147acfd00

void __thiscall FQueuedThreadPoolTaskGraphWrapper::Destroy(FQueuedThreadPoolTaskGraphWrapper *this)

{
  LOCK();
  this->bIsExiting = (TAtomic<bool>)0x1;
  UNLOCK();
  if (this->TaskCount != (TAtomic<unsigned_int>)0x0) {
    UE::FManualResetEvent::Wait(&this->Finished);
    return;
  }
  return;
}

// GetNumThreads @ 147aea210

int __thiscall
FQueuedThreadPoolTaskGraphWrapper::GetNumThreads(FQueuedThreadPoolTaskGraphWrapper *this)

{
  int iVar1;
  FTaskGraphInterface *pFVar2;
  
  pFVar2 = FTaskGraphInterface::Get();
                    /* WARNING: Could not recover jumptable at 0x000147aea227. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)((longlong)*pFVar2 + 0x20))(pFVar2,*(code **)((longlong)*pFVar2 + 0x20));
  return iVar1;
}

// RetractQueuedWork @ 147b0f950

bool __thiscall
FQueuedThreadPoolTaskGraphWrapper::RetractQueuedWork
          (FQueuedThreadPoolTaskGraphWrapper *this,IQueuedWork *param_1)

{
  return false;
}

