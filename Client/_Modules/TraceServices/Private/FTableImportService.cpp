// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 1

// ImportTable @ 14d471ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
TraceServices::FTableImportService::ImportTable
          (FString *param_1,FName param_2,
          TFunction<void___cdecl(TSharedPtr<TraceServices::FTableImportCallbackParams,1>)> *param_3)

{
  undefined1 *puVar1;
  atomic<unsigned_int> *paVar2;
  FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pFVar3;
  undefined1 *puVar4;
  atomic<unsigned_int> aVar5;
  code *pcVar6;
  TSharedRef<FTokenizedMessage,1> *pTVar7;
  int iVar8;
  FString *pFVar9;
  void *_Src;
  bool bVar10;
  FTaskBase *this;
  FTask *pFVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 auStackY_138 [32];
  longlong local_e8 [3];
  longlong *local_d0;
  longlong local_c8;
  longlong local_b8 [3];
  longlong *local_a0;
  FPipe *local_98;
  TReferenceControllerBase<1> *pTStack_90;
  TSharedRef<FTokenizedMessage,1> *local_88;
  undefined8 local_80;
  FString *local_78;
  undefined8 local_70;
  FString local_68;
  FName local_58;
  void *local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  lVar15 = *(longlong *)param_3;
  uVar12 = 0;
  local_d0 = (longlong *)0x0;
  if (lVar15 != 0) {
    puVar13 = (undefined8 *)&param_3->field_0x10;
    if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
      puVar13 = *(undefined8 **)&param_3->field_0x28;
    }
    (**(code **)*puVar13)(puVar13,local_e8);
  }
  local_c8 = lVar15;
  local_a0 = (longlong *)0x0;
  if (lVar15 != 0) {
    plVar14 = local_e8;
    if (local_d0 != (longlong *)0x0) {
      plVar14 = local_d0;
    }
    (**(code **)*plVar14)(plVar14,local_b8);
  }
  local_88 = (TSharedRef<FTokenizedMessage,1> *)0x0;
  local_98 = (FPipe *)0x0;
  pTStack_90 = (TReferenceControllerBase<1> *)0x0;
  local_80 = 0;
  local_78 = (FString *)0x0;
  local_70 = 0;
  ::FString::FString(&local_68,param_1);
  local_58 = param_2;
  local_50 = (void *)0x0;
  local_48 = 0;
  if (lVar15 != 0) {
    plVar14 = local_e8;
    if (local_d0 != (longlong *)0x0) {
      plVar14 = local_d0;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  this = FMemory::Malloc(0x180,0x40);
  if (this == (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x180);
  }
  else {
    UE::Tasks::Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &___7__TExecutableTaskBase_VFTableImportTask_TraceServices__XX_Private_Tasks_UE__6B_;
    if (((*(ulonglong *)&(this->LowLevelTask).field_0x38 & 0x20) == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsCompleted()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                            ,0x1dd,L"State: %d"), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (**(code **)(*(longlong *)&(this->LowLevelTask).field_0x28 + 0x18))
              (&(this->LowLevelTask).field_0x28,&this->LowLevelTask);
    *(FTaskBase **)&this->LowLevelTask = this;
    *(undefined ***)&(this->LowLevelTask).field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FTaskBase **)&(this->LowLevelTask).field_0x8 = this;
    pFVar11 = LowLevelTasks::FTask::GetActiveTask();
    if (pFVar11 != (FTask *)0x0) {
      uVar12 = *(undefined8 *)&pFVar11->field_0x30;
    }
    *(undefined8 *)&(this->LowLevelTask).field_0x30 = uVar12;
    *(undefined8 *)&(this->LowLevelTask).field_0x38 = 0xc8000054ac666c00;
    this->ExtendedPriority = None;
    UE::FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&this->_padding_);
    this[1]._padding_ = local_c8;
    this[1].RefCount = (atomic<unsigned_int>)0x0;
    this[1].NumLocks = (atomic<unsigned_int>)0x0;
    if (local_c8 != 0) {
      plVar14 = local_b8;
      if (local_a0 != (longlong *)0x0) {
        plVar14 = local_a0;
      }
      (**(code **)*plVar14)();
    }
    pTVar7 = local_88;
    this[1].Pipe = local_98;
    *(TReferenceControllerBase<1> **)&this[1].StateChangeEvent = pTStack_90;
    if (pTStack_90 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_90->SharedReferenceCount = (atomic<int>)((int)pTStack_90->SharedReferenceCount + 1);
      UNLOCK();
    }
    this[1].ExecutingThreadId = (atomic<unsigned_int>)0x0;
    this[1]._padding_ = 0;
    puVar1 = &this[1].TraceId.field_0x4;
    iVar8 = (int)local_80;
    *(int *)&this[1].TraceId = (int)local_80;
    if ((int)local_80 == 0) {
      *(undefined4 *)puVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,(int)local_80,0,(ForAnyElementType *)&this[1].ExecutingThreadId,
                 (int)local_80,(int *)puVar1);
      ConstructItems<TSharedRef<FTokenizedMessage,1>,TSharedRef<FTokenizedMessage,1>,int>
                (*(void **)&this[1].ExecutingThreadId,pTVar7,iVar8);
    }
    pFVar9 = local_78;
    pFVar3 = &this[1].Prerequisites;
    (pFVar3->Prerequisites).AllocatorInstance.InlineData[0] = '\0';
    (pFVar3->Prerequisites).AllocatorInstance.InlineData[1] = '\0';
    (pFVar3->Prerequisites).AllocatorInstance.InlineData[2] = '\0';
    (pFVar3->Prerequisites).AllocatorInstance.InlineData[3] = '\0';
    (pFVar3->Prerequisites).AllocatorInstance.InlineData[4] = '\0';
    (pFVar3->Prerequisites).AllocatorInstance.InlineData[5] = '\0';
    (pFVar3->Prerequisites).AllocatorInstance.InlineData[6] = '\0';
    (pFVar3->Prerequisites).AllocatorInstance.InlineData[7] = '\0';
    puVar1 = &this[1].Prerequisites.Prerequisites.AllocatorInstance.SecondaryData.field_0x4;
    iVar8 = (int)local_70;
    *(int *)&this[1].Prerequisites.Prerequisites.AllocatorInstance.SecondaryData = (int)local_70;
    if ((int)local_70 == 0) {
      *(undefined4 *)puVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,(int)local_70,0,(ForAnyElementType *)pFVar3,(int)local_70,(int *)puVar1);
      ConstructItems<FString,FString,int>
                (*(void **)(pFVar3->Prerequisites).AllocatorInstance.InlineData,pFVar9,iVar8);
    }
    ::FString::FString((FString *)&this[1].Prerequisites.Prerequisites.ArrayNum,&local_68);
    _Src = local_50;
    puVar4 = &this[1].LowLevelTask.field_0x8;
    *(uint *)&this[1].LowLevelTask.field_0x0 = local_58.ComparisonIndex.Value;
    *(uint *)&this[1].LowLevelTask.field_0x4 = local_58.Number;
    puVar1 = &this[1].LowLevelTask.field_0x14;
    *(undefined8 *)puVar4 = 0;
    lVar15 = (longlong)(int)local_48;
    *(int *)&this[1].LowLevelTask.field_0x10 = (int)local_48;
    if ((int)local_48 == 0) {
      *(undefined4 *)puVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,(int)local_48,0,(ForAnyElementType *)puVar4,(int)local_48,(int *)puVar1);
      memcpy(*(void **)puVar4,_Src,lVar15 * 2);
    }
    this->_padding_ =
         (longlong)&___7__TExecutableTask_VFTableImportTask_TraceServices___Private_Tasks_UE__6B_;
    UE::Tasks::Private::FTaskBase::TryLaunch(this,0x180);
    LOCK();
    paVar2 = &this->RefCount;
    aVar5 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar5 == (atomic<unsigned_int>)0x1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>(local_78,(int)local_70);
  if (local_78 != (FString *)0x0) {
    FMemory::Free(local_78);
  }
  DestructItems<TSharedRef<FTokenizedMessage,1>,int>(local_88,(int)local_80);
  if (local_88 != (TSharedRef<FTokenizedMessage,1> *)0x0) {
    FMemory::Free(local_88);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_90);
  if (local_c8 != 0) {
    plVar14 = local_b8;
    if (local_a0 != (longlong *)0x0) {
      plVar14 = local_a0;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if (*(longlong *)param_3 != 0) {
    plVar14 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar14 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  return;
}

