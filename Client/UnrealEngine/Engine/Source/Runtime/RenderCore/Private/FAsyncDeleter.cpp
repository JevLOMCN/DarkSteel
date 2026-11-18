// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// ~FAsyncDeleter @ 145d8fbd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FRDGBuilder::FAsyncDeleter::~FAsyncDeleter(FAsyncDeleter *this)

{
  int *piVar1;
  atomic<unsigned_int> *paVar2;
  int iVar3;
  atomic<unsigned_int> aVar4;
  undefined8 *puVar5;
  code *pcVar6;
  FTaskHandle FVar7;
  bool bVar8;
  FTaskBase *pFVar9;
  FTask *pFVar10;
  FTaskHandle this_00;
  longlong *plVar11;
  longlong *plVar12;
  TArrayView<UE::Tasks::Private::FTaskHandle_const_,int> *pTVar13;
  longlong lVar14;
  undefined1 auStack_b8 [32];
  uint local_98;
  FTaskHandle local_88;
  FTaskBase *local_80;
  TArrayView<UE::Tasks::Private::FTaskHandle_const_,int> local_78;
  longlong local_68;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (*(longlong *)&this->Function != 0) {
    local_88 = (FTaskHandle)(FTaskHandle)LastTask.Pimpl.Reference;
    if (LastTask.Pimpl.Reference != (FTaskBase *)0x0) {
      LOCK();
      *(int *)((longlong)LastTask.Pimpl.Reference + 0x30) =
           *(int *)((longlong)LastTask.Pimpl.Reference + 0x30) + 1;
      UNLOCK();
    }
    local_80 = (this->Prerequisites).Pimpl.Reference;
    if (local_80 != (FTaskBase *)0x0) {
      LOCK();
      local_80->RefCount = (atomic<unsigned_int>)((int)local_80->RefCount + 1);
      UNLOCK();
    }
    local_68 = *(longlong *)&this->Function;
    local_78.DataPtr = &local_88;
    this_00.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
    local_40 = *(longlong **)&(this->Function).field_0x28;
    lVar14 = 2;
    *(undefined8 *)&(this->Function).field_0x28 = 0;
    local_48 = *(longlong *)&(this->Function).field_0x20;
    local_78.ArrayNum = 2;
    local_58 = *(longlong *)&(this->Function).field_0x10;
    lStack_50 = *(longlong *)&(this->Function).field_0x18;
    if (local_68 != 0) {
      *(undefined8 *)&this->Function = 0;
    }
    pFVar9 = FMemory::Malloc(0x140,0x40);
    if (pFVar9 != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::FTaskBase(pFVar9,2,true);
      pFVar9->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTaskBase<`FRDGBuilder::FAsyncDeleter::~FAsyncDeleter'::`5'::<lambda_1>,void,void>
            ::_vftable_;
      if ((*(ulonglong *)&(pFVar9->LowLevelTask).field_0x38 & 0x20) == 0) {
        local_98 = (uint)*(undefined8 *)&(pFVar9->LowLevelTask).field_0x38 & 0x3f;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x1dd,L"State: %d");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      (**(code **)(*(longlong *)&(pFVar9->LowLevelTask).field_0x28 + 0x18))
                (&(pFVar9->LowLevelTask).field_0x28,&pFVar9->LowLevelTask);
      *(FTaskBase **)&pFVar9->LowLevelTask = pFVar9;
      *(undefined ***)&(pFVar9->LowLevelTask).field_0x28 =
           &
           ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
      ;
      *(FTaskBase **)&(pFVar9->LowLevelTask).field_0x8 = pFVar9;
      pFVar10 = LowLevelTasks::FTask::GetActiveTask();
      if (pFVar10 != (FTask *)0x0) {
        this_00.Pimpl.Reference =
             *(TRefCountPtr<UE::Tasks::Private::FTaskBase> *)&pFVar10->field_0x30;
      }
      *(TRefCountPtr<UE::Tasks::Private::FTaskBase> *)&(pFVar9->LowLevelTask).field_0x30 =
           this_00.Pimpl.Reference;
      *(undefined8 *)&(pFVar9->LowLevelTask).field_0x38 = 0xc800005444f69800;
      pFVar9->ExtendedPriority = None;
      UE::FInheritedContextBase::CaptureInheritedContext
                ((FInheritedContextBase *)&pFVar9->_padding_);
      pFVar9[1]._padding_ = local_68;
      *(longlong **)&pFVar9[1].RefCount = local_40;
      local_40 = (longlong *)0x0;
      pFVar9[1]._padding_ = local_58;
      pFVar9[1]._padding_ = lStack_50;
      pFVar9[1]._padding_ = local_48;
      if (pFVar9[1]._padding_ != 0) {
        local_68 = 0;
      }
      pFVar9->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTask<`FRDGBuilder::FAsyncDeleter::~FAsyncDeleter'::`5'::<lambda_1>_>::
            _vftable_;
      this_00.Pimpl.Reference =
           (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
           (TRefCountPtr<UE::Tasks::Private::FTaskBase>)pFVar9;
    }
    UE::Tasks::Private::FTaskBase::
    AddPrerequisites<TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>,0>
              ((FTaskBase *)this_00.Pimpl.Reference,&local_78,true);
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_00.Pimpl.Reference,0x140);
    FVar7 = LastTask;
    if (LastTask.Pimpl.Reference != (FTaskBase *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)LastTask.Pimpl.Reference + 0x30);
      iVar3 = *piVar1;
      LastTask.Pimpl.Reference = this_00.Pimpl.Reference;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      this_00.Pimpl.Reference = LastTask.Pimpl.Reference;
      if (iVar3 == 1) {
        (*(code *)**(undefined8 **)FVar7.Pimpl.Reference)(FVar7.Pimpl.Reference,1);
        this_00 = LastTask;
      }
    }
    LastTask.Pimpl.Reference = this_00.Pimpl.Reference;
    if (local_68 != 0) {
      plVar11 = &local_58;
      if (local_40 != (longlong *)0x0) {
        plVar11 = local_40;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    pTVar13 = &local_78;
    do {
      puVar5 = *(undefined8 **)&pTVar13[-1].ArrayNum;
      pTVar13 = (TArrayView<UE::Tasks::Private::FTaskHandle_const_,int> *)&pTVar13[-1].ArrayNum;
      lVar14 = lVar14 + -1;
      if (puVar5 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar5 + 6);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)*puVar5)(puVar5,1);
        }
      }
    } while (lVar14 != 0);
  }
  pFVar9 = (this->Prerequisites).Pimpl.Reference;
  if (pFVar9 != (FTaskBase *)0x0) {
    LOCK();
    paVar2 = &pFVar9->RefCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar9->_padding_)(pFVar9,1);
    }
  }
  if (*(longlong *)&this->Function != 0) {
    plVar11 = *(longlong **)&(this->Function).field_0x28;
    plVar12 = (longlong *)&(this->Function).field_0x10;
    if (plVar11 != (longlong *)0x0) {
      plVar12 = plVar11;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  return;
}

// operator() @ 145d94300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FRDGBuilder::FAsyncDeleter::~FAsyncDeleter'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  UE::Core::Private::Function::CheckCallable(*(void **)this);
  pcVar1 = *(code **)this;
  plVar8 = (longlong *)((longlong)this + 0x10);
  if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
    plVar8 = *(longlong **)((longlong)this + 0x28);
  }
  uVar7 = (**(code **)(*plVar8 + 8))();
  (*pcVar1)(uVar7);
  local_48 = *(longlong *)this;
  uVar6 = *(undefined8 *)((longlong)this + 8);
  uVar2 = *(undefined4 *)((longlong)this + 0x10);
  uVar3 = *(undefined4 *)((longlong)this + 0x14);
  uVar4 = *(undefined4 *)((longlong)this + 0x18);
  uVar5 = *(undefined4 *)((longlong)this + 0x1c);
  uVar7 = *(undefined8 *)((longlong)this + 0x20);
  plStack_20 = *(longlong **)((longlong)this + 0x28);
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = uStack_40;
  *(undefined4 *)((longlong)this + 0x10) = local_38;
  *(undefined4 *)((longlong)this + 0x14) = uStack_34;
  *(undefined4 *)((longlong)this + 0x18) = uStack_30;
  *(undefined4 *)((longlong)this + 0x1c) = uStack_2c;
  *(undefined4 *)((longlong)this + 0x20) = (undefined4)local_28;
  *(undefined4 *)((longlong)this + 0x24) = local_28._4_4_;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  *(undefined4 *)((longlong)this + 0x2c) = 0;
  local_38 = uVar2;
  uStack_34 = uVar3;
  uStack_30 = uVar4;
  uStack_2c = uVar5;
  local_28 = uVar7;
  if (local_48 != 0) {
    plVar8 = (longlong *)&local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar8 = plStack_20;
    }
    uStack_40 = uVar6;
    (**(code **)(*plVar8 + 0x10))();
  }
  return;
}

